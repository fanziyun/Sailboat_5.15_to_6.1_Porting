// decompiled from llcc_perfmon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 484) =====

//WARNING: Switch with 1 destination removed at 0x08004c98

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xa6379e077e41bb3) {
        if (arg1 < -0x12c9c8c7ab5a0eb3) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.perfmon_scid_status_show.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08004c58;
                pcVar2 = sym.llcc_perfmon_remove.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004c58;
        }
        if (arg1 == -0x12c9c8c7ab5a0eb3) {
            if ((pcVar1 + -0x8001258 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x08004c58;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08004c58;
        pcVar2 = sym.init_module.cfi_jt;
code_r0x08001178:
        if (pcVar1 != pcVar2) goto code_r0x08004c58;
    }
    else {
        if (arg1 < 0x2689878a22517aed) {
            if (arg1 == 0xa6379e077e41bb3) {
                if ((pcVar1 + -0x8001280 >> 3 | pcVar1 << 0x3d) < 8) {
                    return;
                }
                goto code_r0x08004c58;
            }
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08004c58;
            pcVar2 = sym.perfmon_ns_periodic_dump_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
        }
        else {
            if (arg1 != 0x2689878a22517aed) {
                if (arg1 == 0x39e63916c3db07da) {
                    pcVar2 = sym.llcc_perfmon_timer_handler.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
                }
                else {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004c58;
                    pcVar2 = sym.cleanup_module.cfi_jt;
                }
                goto code_r0x08001178;
            }
            pcVar2 = sym.__typeid__ZTSFvP20llcc_perfmon_private11filter_typeyybE_global_addr;
        }
        if (5 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08004c58:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8004cac);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.llcc_perfmon_timer_handler.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.llcc_perfmon_timer_handler.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong uVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.perfmon_counter_dump(param_1 + -0x958);
    pcVar3 = *(*(param_1 + 0x30) + 0x30);
    uVar2 = *(param_1 + 0x48);
    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar3,0x8000380);
    uVar1 = (*pcVar3)();
    hrtimer_forward(param_1,uVar1,uVar2);
    return 1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.perfmon_scid_status_show.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.perfmon_scid_status_show.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    code *pcVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = 0;
    iVar4 = 0;
    puVar12 = *(param_1 + 0x98);
    uStack_6c = 0;
    do {
        uVar2 = iVar4 << 0xc | 4;
        if (*(puVar12 + 10) == 0) {
            iVar11 = 0;
        }
        else {
            uVar8 = 0;
            iVar11 = 0;
            do {
                if (uVar8 == 0x10) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar10)();
                }
                regmap_read(*puVar12,*(puVar12 + uVar8 * 4 + 0x10) + uVar2,&uStack_6c);
                uVar8 = uVar8 + 1;
                iVar11 = iVar11 + (uStack_6c._2_2_ & 0x7fff);
                uStack_6c = uStack_6c._2_2_ & 0x7fff;
            } while (uVar8 < *(puVar12 + 10));
        }
        regmap_read(puVar12[1],uVar2,&uStack_6c);
        pcVar6 = "DEACTIVE";
        if ((uStack_6c & 1) != 0) {
            pcVar6 = "ACTIVE";
        }
        iVar3 = scnprintf(param_3 + iVar7,0x1000 - iVar7,"SCID %02d %10s",iVar4,pcVar6);
        iVar7 = iVar7 + iVar3;
        pcVar6 = ",0x%08lx\n";
        iVar3 = scnprintf(param_3 + iVar7,0x1000 - iVar7,",0x%08lx\n",iVar11);
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + iVar3;
    } while (iVar4 != 0x20);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.perfmon_ns_periodic_dump_store;
        iVar7 = *(iVar7 + 0x98);
        iVar4 = kstrtoll(pcVar6,0,iVar7 + 0x9a0);
        if (iVar4 == 0) {
            mutex_lock(iVar7 + 0x928);
            iVar1 = iVar7 + 0x958;
            if (*(iVar7 + 0x9a0) == 0) {
                hrtimer_cancel(iVar1);
            }
            else {
                uVar9 = *(iVar7 + 0x9a0);
                if ((*(iVar7 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar1,uVar9,0,3);
                }
                else {
                    pcVar10 = *(*(iVar7 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar10,0x8000380);
                    uVar5 = (*pcVar10)();
                    hrtimer_forward(iVar1,uVar5,uVar9);
                }
            }
            mutex_unlock(iVar7 + 0x928);
        }
        else {
            iVar11 = -0x16;
        }
        return iVar11;
    }
    return iVar7;
}


// ===== sym.perfmon_counter_dump_show.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001210 (size 8) =====

int64_t sym.perfmon_counter_dump_show.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t arg1;
    int *piVar11;
    code *pcVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if (*(arg1 + 0x918) == 0) {
        _printk(0x80009f1);
        iVar13 = 0;
    }
    else {
        sym.perfmon_counter_dump(arg1);
        iVar8 = arg1 + 0x98;
        if (*(arg1 + 0x918) == 1) {
            uVar14 = 0;
            iVar13 = 0;
        }
        else {
            iVar13 = 0;
            uVar14 = 0;
            do {
                if (0x10 < uVar14) goto code_r0x08001e6c;
                piVar11 = iVar8 + uVar14 * 0x88;
                uVar6 = uVar14;
                iVar2 = scnprintf(param_3 + iVar13,0x1000 - iVar13,"Port %02d,Event %02d,",*piVar11,piVar11[1]);
                if ((*piVar11 == 3) && (1 < *(arg1 + 0x9a8))) {
                    uVar14 = uVar14 + 1;
                    if (*(arg1 + 0x50) == 0) {
code_r0x08001b7c:
                        iVar4 = 0;
                    }
                    else {
                        uVar5 = 0;
                        iVar4 = 0;
                        do {
                            if (uVar5 == 0x10) goto code_r0x08001e6c;
                            iVar7 = arg1 + uVar6 * 0x88 + uVar5 * 8;
                            uVar1 = *(arg1 + 0x50);
                            uVar5 = uVar5 + 1;
                            iVar9 = *(iVar7 + 0xa0);
                            iVar10 = *(iVar7 + 0x128);
                            *(iVar7 + 0xa0) = 0;
                            *(iVar7 + 0x128) = 0;
                            iVar4 = iVar9 + iVar4 + iVar10;
                        } while (uVar5 < uVar1);
                    }
                }
                else {
                    uVar1 = *(arg1 + 0x50);
                    if (uVar1 == 0) goto code_r0x08001b7c;
                    iVar7 = iVar8 + uVar6 * 0x88;
                    iVar4 = *(iVar7 + 8);
                    *(iVar7 + 8) = 0;
                    if (uVar1 != 1) {
                        iVar7 = iVar8 + uVar6 * 0x88;
                        iVar9 = *(iVar7 + 0x10);
                        *(iVar7 + 0x10) = 0;
                        iVar4 = iVar9 + iVar4;
                        if (2 < uVar1) {
                            iVar7 = iVar8 + uVar6 * 0x88;
                            iVar9 = *(iVar7 + 0x18);
                            *(iVar7 + 0x18) = 0;
                            iVar4 = iVar9 + iVar4;
                            if (uVar1 != 3) {
                                iVar7 = iVar8 + uVar6 * 0x88;
                                iVar9 = *(iVar7 + 0x20);
                                *(iVar7 + 0x20) = 0;
                                iVar4 = iVar9 + iVar4;
                                if (4 < uVar1) {
                                    iVar7 = iVar8 + uVar6 * 0x88;
                                    iVar9 = *(iVar7 + 0x28);
                                    *(iVar7 + 0x28) = 0;
                                    iVar4 = iVar9 + iVar4;
                                    if (uVar1 != 5) {
                                        iVar7 = iVar8 + uVar6 * 0x88;
                                        iVar9 = *(iVar7 + 0x30);
                                        *(iVar7 + 0x30) = 0;
                                        iVar4 = iVar9 + iVar4;
                                        if (6 < uVar1) {
                                            iVar7 = iVar8 + uVar6 * 0x88;
                                            iVar9 = *(iVar7 + 0x38);
                                            *(iVar7 + 0x38) = 0;
                                            iVar4 = iVar9 + iVar4;
                                            if (uVar1 != 7) {
                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                iVar9 = *(iVar7 + 0x40);
                                                *(iVar7 + 0x40) = 0;
                                                iVar4 = iVar9 + iVar4;
                                                if (8 < uVar1) {
                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                    iVar9 = *(iVar7 + 0x48);
                                                    *(iVar7 + 0x48) = 0;
                                                    iVar4 = iVar9 + iVar4;
                                                    if (uVar1 != 9) {
                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                        iVar9 = *(iVar7 + 0x50);
                                                        *(iVar7 + 0x50) = 0;
                                                        iVar4 = iVar9 + iVar4;
                                                        if (10 < uVar1) {
                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                            iVar9 = *(iVar7 + 0x58);
                                                            *(iVar7 + 0x58) = 0;
                                                            iVar4 = iVar9 + iVar4;
                                                            if (uVar1 != 0xb) {
                                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                                iVar9 = *(iVar7 + 0x60);
                                                                *(iVar7 + 0x60) = 0;
                                                                iVar4 = iVar9 + iVar4;
                                                                if (0xc < uVar1) {
                                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                                    iVar9 = *(iVar7 + 0x68);
                                                                    *(iVar7 + 0x68) = 0;
                                                                    iVar4 = iVar9 + iVar4;
                                                                    if (uVar1 != 0xd) {
                                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                                        iVar9 = *(iVar7 + 0x70);
                                                                        *(iVar7 + 0x70) = 0;
                                                                        iVar4 = iVar9 + iVar4;
                                                                        if (0xe < uVar1) {
                                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                                            iVar9 = *(iVar7 + 0x78);
                                                                            *(iVar7 + 0x78) = 0;
                                                                            iVar4 = iVar9 + iVar4;
                                                                            if (uVar1 != 0xf) {
                                                                                iVar9 = iVar8 + uVar6 * 0x88;
                                                                                iVar7 = *(iVar9 + 0x80);
                                                                                *(iVar9 + 0x80) = 0;
                                                                                if (0x10 < uVar1) goto code_r0x08001e6c;
                                                                                iVar4 = iVar7 + iVar4;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                iVar13 = iVar13 + iVar2;
                iVar2 = scnprintf(param_3 + iVar13,0x1000 - iVar13,"0x%016llx\n",iVar4);
                iVar13 = iVar13 + iVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 < *(arg1 + 0x918) - 1U);
        }
        iVar2 = scnprintf(param_3 + iVar13,0x1000 - iVar13,"CYCLE COUNT, ,");
        if (0x10 < uVar14) {
code_r0x08001e6c:
    //WARNING: Does not return
            pcVar12 = SoftwareBreakpoint(0x5512,0x8001e70);
            (*pcVar12)();
        }
        uVar1 = *(arg1 + 0x50);
        if (uVar1 == 0) {
            iVar4 = 0;
        }
        else {
            uVar6 = uVar14;
            iVar7 = iVar8 + uVar6 * 0x88;
            iVar4 = *(iVar7 + 8);
            *(iVar7 + 8) = 0;
            if (uVar1 != 1) {
                iVar7 = iVar8 + uVar6 * 0x88;
                iVar9 = *(iVar7 + 0x10);
                *(iVar7 + 0x10) = 0;
                iVar4 = iVar9 + iVar4;
                if (2 < uVar1) {
                    iVar7 = iVar8 + uVar6 * 0x88;
                    iVar9 = *(iVar7 + 0x18);
                    *(iVar7 + 0x18) = 0;
                    iVar4 = iVar9 + iVar4;
                    if (uVar1 != 3) {
                        iVar7 = iVar8 + uVar6 * 0x88;
                        iVar9 = *(iVar7 + 0x20);
                        *(iVar7 + 0x20) = 0;
                        iVar4 = iVar9 + iVar4;
                        if (4 < uVar1) {
                            iVar7 = iVar8 + uVar6 * 0x88;
                            iVar9 = *(iVar7 + 0x28);
                            *(iVar7 + 0x28) = 0;
                            iVar4 = iVar9 + iVar4;
                            if (uVar1 != 5) {
                                iVar7 = iVar8 + uVar6 * 0x88;
                                iVar9 = *(iVar7 + 0x30);
                                *(iVar7 + 0x30) = 0;
                                iVar4 = iVar9 + iVar4;
                                if (6 < uVar1) {
                                    iVar7 = iVar8 + uVar6 * 0x88;
                                    iVar9 = *(iVar7 + 0x38);
                                    *(iVar7 + 0x38) = 0;
                                    iVar4 = iVar9 + iVar4;
                                    if (uVar1 != 7) {
                                        iVar7 = iVar8 + uVar6 * 0x88;
                                        iVar9 = *(iVar7 + 0x40);
                                        *(iVar7 + 0x40) = 0;
                                        iVar4 = iVar9 + iVar4;
                                        if (8 < uVar1) {
                                            iVar7 = iVar8 + uVar6 * 0x88;
                                            iVar9 = *(iVar7 + 0x48);
                                            *(iVar7 + 0x48) = 0;
                                            iVar4 = iVar9 + iVar4;
                                            if (uVar1 != 9) {
                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                iVar9 = *(iVar7 + 0x50);
                                                *(iVar7 + 0x50) = 0;
                                                iVar4 = iVar9 + iVar4;
                                                if (10 < uVar1) {
                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                    iVar9 = *(iVar7 + 0x58);
                                                    *(iVar7 + 0x58) = 0;
                                                    iVar4 = iVar9 + iVar4;
                                                    if (uVar1 != 0xb) {
                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                        iVar9 = *(iVar7 + 0x60);
                                                        *(iVar7 + 0x60) = 0;
                                                        iVar4 = iVar9 + iVar4;
                                                        if (0xc < uVar1) {
                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                            iVar9 = *(iVar7 + 0x68);
                                                            *(iVar7 + 0x68) = 0;
                                                            iVar4 = iVar9 + iVar4;
                                                            if (uVar1 != 0xd) {
                                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                                iVar9 = *(iVar7 + 0x70);
                                                                *(iVar7 + 0x70) = 0;
                                                                iVar4 = iVar9 + iVar4;
                                                                if (0xe < uVar1) {
                                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                                    iVar9 = *(iVar7 + 0x78);
                                                                    *(iVar7 + 0x78) = 0;
                                                                    iVar4 = iVar9 + iVar4;
                                                                    if (uVar1 != 0xf) {
                                                                        iVar8 = iVar8 + uVar6 * 0x88;
                                                                        iVar7 = *(iVar8 + 0x80);
                                                                        *(iVar8 + 0x80) = 0;
                                                                        if (0x10 < uVar1) goto code_r0x08001e6c;
                                                                        iVar4 = iVar7 + iVar4;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar13 = iVar13 + iVar2;
        iVar2 = scnprintf(param_3 + iVar13,0x1000 - iVar13,"0x%016llx\n",iVar4);
        iVar8 = *(arg1 + 0x9a0);
        iVar13 = iVar13 + iVar2;
        if (iVar8 != 0) {
            pcVar12 = *(*(arg1 + 0x988) + 0x30);
            __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
            uVar3 = (*pcVar12)();
            hrtimer_forward(arg1 + 0x958,uVar3,iVar8);
        }
    }
    return iVar13;
}


// ===== sym.llcc_perfmon_remove.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.llcc_perfmon_remove.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8) + 0x958;
    while (uVar2 = hrtimer_active(iVar1), (uVar2 & 1) != 0) {
        hrtimer_cancel(iVar1);
    }
    sysfs_remove_group(param_1 + 0x10,obj.llcc_perfmon_group);
    *(param_1 + 0xa8) = 0;
    return 0;
}


// ===== sym.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001220 (size 8) =====

int sym.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_4c = 0;
    piVar11 = *(*(param_1 + 0x70) + 0x98);
    piVar7 = devm_kmalloc(iVar1,0x9c0,0xdc0);
    iVar6 = -0xc;
    if ((piVar7 == NULL) || (piVar11 == NULL)) goto code_r0x08001360;
    if ((*piVar11 == 0) || (piVar11[1] == 0)) {
        iVar6 = -0x13;
        goto code_r0x08001360;
    }
    *piVar7 = *piVar11;
    iVar8 = piVar11[1];
    uVar3 = 0x34000;
    piVar7[1] = iVar8;
    iVar6 = *(piVar11 + 0x6c);
    *(piVar7 + 0x137) = iVar6;
    uVar10 = 0x3400c;
    if (iVar6 < 0x15) {
        uVar10 = 0x3000c;
    }
    regmap_read(iVar8,uVar10,&uStack_4c);
    uVar5 = uStack_4c;
    uStack_4c = 0;
    uVar4 = uVar5 >> 10 & 3;
    uVar2 = uVar5 >> 0x1c;
    if ((uVar5 >> 10 & 3) == 0) {
        uVar4 = 1;
    }
    *(piVar7 + 10) = uVar2;
    *(piVar7 + 0x135) = uVar4;
    if (uVar2 != 0) {
        uVar4 = uVar5 >> 0x1d;
        uStack_4c = 1;
        *(piVar7 + 2) = *piVar11[0xc];
        if (uVar4 != 0) {
            uStack_4c = 2;
            *(piVar7 + 0x14) = *(piVar11[0xc] + 4);
            if (2 < uVar2) {
                uStack_4c = 3;
                *(piVar7 + 3) = *(piVar11[0xc] + 8);
                if (uVar5 >> 0x1e != 0) {
                    uStack_4c = 4;
                    *(piVar7 + 0x1c) = *(piVar11[0xc] + 0xc);
                    if (4 < uVar2) {
                        uStack_4c = 5;
                        *(piVar7 + 4) = *(piVar11[0xc] + 0x10);
                        if (2 < uVar4) {
                            uStack_4c = 6;
                            *(piVar7 + 0x24) = *(piVar11[0xc] + 0x14);
                            if (6 < uVar2) {
                                uStack_4c = 7;
                                *(piVar7 + 5) = *(piVar11[0xc] + 0x18);
                                if (uVar5 < 0) {
                                    uStack_4c = 8;
                                    *(piVar7 + 0x2c) = *(piVar11[0xc] + 0x1c);
                                    if (8 < uVar2) {
                                        uStack_4c = 9;
                                        *(piVar7 + 6) = *(piVar11[0xc] + 0x20);
                                        if (4 < uVar4) {
                                            uStack_4c = 10;
                                            *(piVar7 + 0x34) = *(piVar11[0xc] + 0x24);
                                            if (10 < uVar2) {
                                                uStack_4c = 0xb;
                                                *(piVar7 + 7) = *(piVar11[0xc] + 0x28);
                                                if (2 < uVar5 >> 0x1e) {
                                                    uStack_4c = 0xc;
                                                    *(piVar7 + 0x3c) = *(piVar11[0xc] + 0x2c);
                                                    if (0xc < uVar2) {
                                                        uStack_4c = 0xd;
                                                        *(piVar7 + 8) = *(piVar11[0xc] + 0x30);
                                                        if (6 < uVar4) {
                                                            uStack_4c = 0xe;
                                                            *(piVar7 + 0x44) = *(piVar11[0xc] + 0x34);
                                                            if (uVar2 == 0xf) {
                                                                uStack_4c = 0xf;
                                                                *(piVar7 + 9) = *(piVar11[0xc] + 0x38);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    uVar9 = devm_clk_get(iVar1,"qdss_clk");
    piVar7[0x136] = uVar9;
    if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        _printk(0x8000b61);
        piVar7[0x136] = 0;
    }
    iVar6 = sysfs_create_group(iVar1,obj.llcc_perfmon_group);
    if (iVar6 != 0) {
        _printk(0x80006b4);
        goto code_r0x08001360;
    }
    __mutex_init(piVar7 + 0x125,"&llcc_priv->mutex",obj.llcc_perfmon_probe.__key);
    uVar4 = *(piVar7 + 0x924);
    *(param_1 + 0xa8) = piVar7;
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xb] = reloc.feac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xc] = reloc.ferc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xd] = reloc.fewc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xe] = reloc.beac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xf] = reloc.berc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0x10] = reloc.trp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0x11] = reloc.drp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        *(piVar7 + 0x924) = uVar4 + 1;
        piVar7[0x12] = reloc.pmgr_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
    }
    uVar10 = 1;
    hrtimer_init(piVar7 + 299,1,1);
    piVar7[0x134] = 0;
    if (piVar7[0x137] < 0x15) {
        uVar3 = 0x30000;
    }
    piVar7[0x130] = sym.llcc_perfmon_timer_handler.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    regmap_read(piVar7[1],uVar3,&uStack_4c);
    *(piVar7 + 0x9ac) = 0;
    if (uStack_4c == 0x1010200) {
code_r0x080017e0:
        *(piVar7 + 0x9ac) = uVar10;
    }
    else {
        uVar4 = uStack_4c & 0xff000000;
        uVar10 = 2;
        if (((uVar4 == 0x2000000) || (uVar4 == 0x4000000)) || (uVar4 == 0x3000000)) goto code_r0x080017e0;
    }
    _printk(0x8000873,uStack_4c >> 0x18,uStack_4c >> 0x10 & 0xff,uStack_4c >> 8 & 0xff,piVar7[0x135]);
    iVar6 = 0;
code_r0x08001360:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.llcc_perfmon_remove;
        iVar1 = *(iVar8 + 0xa8) + 0x958;
        while (uVar9 = hrtimer_active(iVar1), (uVar9 & 1) != 0) {
            hrtimer_cancel(iVar1);
        }
        sysfs_remove_group(iVar8 + 0x10,obj.llcc_perfmon_group);
        *(iVar8 + 0xa8) = 0;
        return 0;
    }
    return iVar6;
}


// ===== sym.perfmon_ns_periodic_dump_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.perfmon_ns_periodic_dump_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    iVar2 = kstrtoll(param_3,0,iVar5 + 0x9a0);
    if (iVar2 == 0) {
        mutex_lock(iVar5 + 0x928);
        iVar1 = iVar5 + 0x958;
        if (*(iVar5 + 0x9a0) == 0) {
            hrtimer_cancel(iVar1);
        }
        else {
            uVar4 = *(iVar5 + 0x9a0);
            if ((*(iVar5 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar1,uVar4,0,3);
            }
            else {
                pcVar6 = *(*(iVar5 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar6,0x8000380);
                uVar3 = (*pcVar6)();
                hrtimer_forward(iVar1,uVar3,uVar4);
            }
        }
        mutex_unlock(iVar5 + 0x928);
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    return param_4;
}


// ===== sym.perfmon_remove_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001230 (size 8) =====

uint64_t sym.perfmon_remove_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    ulong unaff_x22;
    ulong unaff_x23;
    ulong unaff_x24;
    int64_t unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    code *pcStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar11 = *(param_1 + 0x98);
    uStack_74 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar1 = iVar11 + 0x928;
    uVar7 = param_4;
    uStack_70 = param_3;
    mutex_lock(iVar1);
    if (*(iVar11 + 0x918) == 0) {
        _printk(0x80009c8);
        param_4 = 0xffffffffffffffea;
    }
    else {
        iVar4 = strsep(&uStack_70,0x8000726);
        if (iVar4 == 0) {
            iVar2 = 0;
        }
        else {
            unaff_x28 = iVar11 + 0x98;
            unaff_x22 = 0x8000726;
            unaff_x25 = iVar11 + 0x58;
            unaff_x24 = 0x8000ae3;
            unaff_x23 = 1;
            do {
                while( true ) {
                    iVar2 = kstrtoull(iVar4,0,&uStack_80);
                    if ((((iVar2 != 0) || (*(iVar11 + 0x924) <= uStack_80)) ||
                        (iVar5 = strsep(&uStack_70,0x8000726), iVar5 == 0)) ||
                       (iVar2 = kstrtoull(iVar5,0,&uStack_88), iVar2 != 0)) goto code_r0x08002620;
                    iVar4 = strsep(&uStack_70,0x8000726);
                    if (uStack_88 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar4 == 0) goto code_r0x08002620;
                }
                if (uStack_80 == 3) {
                    iVar2 = *(iVar11 + 0x9a8);
                }
                else {
                    iVar2 = 1;
                }
                if (uStack_74 == *(iVar11 + 0x918) - iVar2) break;
                if ((0x10 < uStack_74) || (*(unaff_x28 + uStack_74 * 0x88) = 8, 7 < uStack_80)) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80026bc);
                    (*pcVar9)();
                }
                unaff_x26 = *(unaff_x25 + uStack_80 * 8);
                pcVar9 = *unaff_x26;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_90 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003e0);
                    pcVar9 = pcStack_90;
                }
                (*pcVar9)(iVar11,uStack_88 & 0xffffffff,&uStack_74,0);
                uVar8 = uStack_74;
                uStack_74 = uStack_74 + 1;
                uVar7 = uStack_80;
                _printk(0x8000ae3,uVar8,uStack_88,uStack_80);
                uVar8 = *(iVar11 + 0x91c);
                uVar10 = 1 << (uStack_80 & 0x1f);
                if (((uVar10 & uVar8) != 0) && (pcVar9 = *(unaff_x26 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x8000400);
                        unaff_x26 = pcVar9;
                    }
                    (*pcVar9)(iVar11,0);
                    uVar8 = *(iVar11 + 0x91c);
                    uVar10 = 1 << (uStack_80 & 0x1f);
                }
                *(iVar11 + 0x91c) = uVar8 & (uVar10 ^ 0xffffffff);
            } while (iVar4 != 0);
code_r0x08002620:
            iVar2 = uStack_74 << 2;
            unaff_x27 = iVar4;
        }
        param_3 = 0;
        iVar3 = 0x36020;
        if (*(iVar11 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar11 + 8),iVar3 + iVar2);
        *(iVar11 + 0x918) = 0;
    }
    mutex_unlock(iVar1);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_filter_config_store;
    pcStack_e8 = sym.perfmon_filter_config_store;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iVar4 = *(iVar5 + 0x98);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    uStack_100 = param_3;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x28;
    iStack_d8 = unaff_x27;
    pcStack_d0 = unaff_x26;
    iStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    iStack_a8 = iVar11;
    iStack_a0 = iVar1;
    uStack_98 = param_4;
    if (*(iVar4 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar1 = iVar4 + 0x928;
    mutex_lock(iVar1);
    iVar11 = strsep(&uStack_100,0x8000726);
    if ((iVar11 == 0) || (iVar2 = sym.find_filter_type(iVar11), iVar2 == 10)) {
        uVar6 = 0x8000c64;
    }
    else {
        iVar11 = strsep(&uStack_100,0x8000726);
        if (iVar11 == 0) {
code_r0x08002884:
            uVar6 = 0x800074c;
        }
        else {
            iVar3 = kstrtoull(iVar11,0,&uStack_110);
            if (iVar3 == 0) {
                if ((iVar2 == 0) && (0x1f < uStack_110)) {
                    uVar6 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar11 = strsep(&uStack_100,0x8000726);
                if (iVar11 == 0) goto code_r0x08002884;
                iVar3 = kstrtoull(iVar11,0,&uStack_108);
                if (iVar3 == 0) {
                    iVar11 = strsep(&uStack_100,0x8000726);
                    if (iVar11 != 0) {
                        uVar6 = 0x800078f;
                        do {
                            iVar3 = kstrtoull(iVar11,0,&uStack_118);
                            if (iVar3 != 0) break;
                            if (7 < uStack_118) goto code_r0x080028b4;
                            *(iVar4 + 0x920) = *(iVar4 + 0x920) | 1 << (uStack_118 & 0x1f);
                            pcVar9 = *(*(iVar4 + 0x58 + uStack_118 * 8) + 0x10);
                            if (pcVar9 != NULL) {
                                if (5 < (pcVar9 + -0x80012c0 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar9,0x8000420);
                                }
                                (*pcVar9)(iVar4,iVar2,uStack_110,uStack_108,1);
                            }
                            iVar11 = strsep(&uStack_100,0x8000726);
                        } while (iVar11 != 0);
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x080028c8;
                }
            }
            uVar6 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar6);
    mutex_unlock(iVar1);
    uVar7 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_f8) {
        uVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.find_filter_type;
        uVar7 = strcmp(uVar6,"SCID");
        if (uVar7 != 0) {
            iVar2 = strcmp(uVar6,0x800064b);
            if (iVar2 == 0) {
                uVar7 = 1;
            }
            else {
                iVar2 = strcmp(uVar6,"PROFILING_TAG");
                if (iVar2 == 0) {
                    uVar7 = 2;
                }
                else {
                    iVar2 = strcmp(uVar6,"WAY_ID");
                    if (iVar2 == 0) {
                        uVar7 = 3;
                    }
                    else {
                        iVar2 = strcmp(uVar6,"OPCODE");
                        if (iVar2 == 0) {
                            uVar7 = 4;
                        }
                        else {
                            iVar2 = strcmp(uVar6,"CACHEALLOC");
                            if (iVar2 == 0) {
                                uVar7 = 5;
                            }
                            else {
                                iVar2 = strcmp(uVar6,"MEMTAGOPS");
                                if (iVar2 == 0) {
                                    uVar7 = 6;
                                }
                                else {
                                    iVar2 = strcmp(uVar6,"MULTISCID");
                                    if (iVar2 == 0) {
                                        uVar7 = 7;
                                    }
                                    else {
                                        iVar2 = strcmp(uVar6,"DIRTYINFO");
                                        if (iVar2 == 0) {
                                            uVar7 = 8;
                                        }
                                        else {
                                            iVar2 = strcmp(uVar6,"ADDR_MASK");
                                            uVar8 = 9;
                                            if (iVar2 != 0) {
                                                uVar8 = 10;
                                            }
                                            uVar7 = uVar8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar7;
    }
    return uVar7;
}


// ===== sym.perfmon_start_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001238 (size 8) =====

int64_t sym.perfmon_start_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    code *pcVar12;
    int64_t iVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uint uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    piVar6 = &iStack_58;
    iVar13 = *(param_1 + 0x98);
    iStack_58 = 0;
    iVar2 = kstrtoull(param_3,0);
    if (iVar2 != 0) {
        param_4 = -0x16;
        goto code_r0x08002e04;
    }
    iVar4 = iVar13 + 0x928;
    mutex_lock(iVar4);
    if (iStack_58 == 0) {
        if (*(iVar13 + 0x9a0) != 0) {
            hrtimer_cancel(iVar13 + 0x958);
        }
        if (*(iVar13 + 0x918) == 0) {
            _printk(0x80008d5);
        }
        uVar9 = 0;
    }
    else {
        if (*(iVar13 + 0x918) == 0) {
            _printk(0x80006e2);
            mutex_unlock(iVar4);
            param_4 = -0x16;
            goto code_r0x08002e04;
        }
        iVar8 = *(iVar13 + 0x9b0);
        if (iVar8 != 0) {
            iVar2 = clk_prepare(iVar8);
            if (iVar2 == 0) {
                iVar2 = clk_enable(iVar8);
                if (iVar2 == 0) goto code_r0x08002cfc;
                clk_unprepare(iVar8);
            }
            mutex_unlock(iVar4);
            _printk(0x8000a45);
            param_4 = -0x16;
            goto code_r0x08002e04;
        }
code_r0x08002cfc:
        if (*(iVar13 + 0x9a0) != 0) {
            uVar11 = *(iVar13 + 0x9a0);
            if ((*(iVar13 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar13 + 0x958,uVar11,0,3);
            }
            else {
                pcVar12 = *(*(iVar13 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
                uVar5 = (*pcVar12)();
                hrtimer_forward(iVar13 + 0x958,uVar5,uVar11);
            }
        }
        uVar9 = 0x8000;
    }
    uStack_4c = 0;
    uVar1 = 0x3600c;
    if (*(iVar13 + 0x9b8) < 0x15) {
        uVar1 = 0x3100c;
    }
    regmap_read(*(iVar13 + 8),uVar1,&uStack_4c);
    uStack_4c = uStack_4c & 0xffff7ffe | uVar9;
    piVar6 = uStack_4c;
    regmap_write(*(iVar13 + 8),uVar1);
    if ((iStack_58 == 0) && (iVar13 = *(iVar13 + 0x9b0), iVar13 != 0)) {
        clk_disable(iVar13);
        clk_unprepare(iVar13);
    }
    mutex_unlock(iVar4);
code_r0x08002e04:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8002e90;
    uStack_b8 = 0x8002e90;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    iVar13 = 0;
    iVar2 = 0;
    puVar14 = *(iVar4 + 0x98);
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffc0;
    do {
        uVar9 = iVar2 << 0xc | 4;
        if (*(puVar14 + 10) == 0) {
            iVar4 = 0;
        }
        else {
            uVar10 = 0;
            iVar4 = 0;
            do {
                if (uVar10 == 0x10) {
    //WARNING: Does not return
                    pcVar12 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar12)();
                }
                regmap_read(*puVar14,*(puVar14 + uVar10 * 4 + 0x10) + uVar9,&uStack_cc);
                uVar10 = uVar10 + 1;
                iVar4 = iVar4 + (uStack_cc._2_2_ & 0x7fff);
                uStack_cc = uStack_cc._2_2_ & 0x7fff;
            } while (uVar10 < *(puVar14 + 10));
        }
        regmap_read(puVar14[1],uVar9,&uStack_cc);
        pcVar7 = "DEACTIVE";
        if ((uStack_cc & 1) != 0) {
            pcVar7 = "ACTIVE";
        }
        iVar3 = scnprintf(piVar6 + iVar13,0x1000 - iVar13,"SCID %02d %10s",iVar2,pcVar7);
        iVar13 = iVar13 + iVar3;
        pcVar7 = ",0x%08lx\n";
        iVar3 = scnprintf(piVar6 + iVar13,0x1000 - iVar13,",0x%08lx\n",iVar4);
        iVar2 = iVar2 + 1;
        iVar13 = iVar13 + iVar3;
    } while (iVar2 != 0x20);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_c8) {
        iVar13 = __stack_chk_fail();
        *extraout_x18_00 = sym.perfmon_ns_periodic_dump_store;
        iVar13 = *(iVar13 + 0x98);
        iVar2 = kstrtoll(pcVar7,0,iVar13 + 0x9a0);
        if (iVar2 == 0) {
            mutex_lock(iVar13 + 0x928);
            iVar8 = iVar13 + 0x958;
            if (*(iVar13 + 0x9a0) == 0) {
                hrtimer_cancel(iVar8);
            }
            else {
                uVar11 = *(iVar13 + 0x9a0);
                if ((*(iVar13 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar8,uVar11,0,3);
                }
                else {
                    pcVar12 = *(*(iVar13 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
                    uVar5 = (*pcVar12)();
                    hrtimer_forward(iVar8,uVar5,uVar11);
                }
            }
            mutex_unlock(iVar13 + 0x928);
        }
        else {
            iVar4 = -0x16;
        }
        return iVar4;
    }
    return iVar13;
}


// ===== sym.perfmon_filter_config_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001240 (size 8) =====

uint64_t sym.perfmon_filter_config_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x98);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_70 = param_3;
    if (*(iVar9 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar1 = iVar9 + 0x928;
    mutex_lock(iVar1);
    iVar4 = strsep(&uStack_70,0x8000726);
    if ((iVar4 == 0) || (iVar2 = sym.find_filter_type(iVar4), iVar2 == 10)) {
        uVar5 = 0x8000c64;
    }
    else {
        iVar4 = strsep(&uStack_70,0x8000726);
        if (iVar4 == 0) {
code_r0x08002884:
            uVar5 = 0x800074c;
        }
        else {
            iVar3 = kstrtoull(iVar4,0,&uStack_80);
            if (iVar3 == 0) {
                if ((iVar2 == 0) && (0x1f < uStack_80)) {
                    uVar5 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar4 = strsep(&uStack_70,0x8000726);
                if (iVar4 == 0) goto code_r0x08002884;
                iVar3 = kstrtoull(iVar4,0,&uStack_78);
                if (iVar3 == 0) {
                    iVar4 = strsep(&uStack_70,0x8000726);
                    if (iVar4 != 0) {
                        uVar5 = 0x800078f;
                        do {
                            iVar3 = kstrtoull(iVar4,0,&uStack_88);
                            if (iVar3 != 0) break;
                            if (7 < uStack_88) goto code_r0x080028b4;
                            *(iVar9 + 0x920) = *(iVar9 + 0x920) | 1 << (uStack_88 & 0x1f);
                            pcVar8 = *(*(iVar9 + 0x58 + uStack_88 * 8) + 0x10);
                            if (pcVar8 != NULL) {
                                if (5 < (pcVar8 + -0x80012c0 >> 3 | pcVar8 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar8,0x8000420);
                                }
                                (*pcVar8)(iVar9,iVar2,uStack_80,uStack_78,1);
                            }
                            iVar4 = strsep(&uStack_70,0x8000726);
                        } while (iVar4 != 0);
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x080028c8;
                }
            }
            uVar5 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar5);
    mutex_unlock(iVar1);
    param_4 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return param_4;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.find_filter_type;
    uVar6 = strcmp(uVar5,"SCID");
    if (uVar6 != 0) {
        iVar2 = strcmp(uVar5,0x800064b);
        if (iVar2 == 0) {
            uVar6 = 1;
        }
        else {
            iVar2 = strcmp(uVar5,"PROFILING_TAG");
            if (iVar2 == 0) {
                uVar6 = 2;
            }
            else {
                iVar2 = strcmp(uVar5,"WAY_ID");
                if (iVar2 == 0) {
                    uVar6 = 3;
                }
                else {
                    iVar2 = strcmp(uVar5,"OPCODE");
                    if (iVar2 == 0) {
                        uVar6 = 4;
                    }
                    else {
                        iVar2 = strcmp(uVar5,"CACHEALLOC");
                        if (iVar2 == 0) {
                            uVar6 = 5;
                        }
                        else {
                            iVar2 = strcmp(uVar5,"MEMTAGOPS");
                            if (iVar2 == 0) {
                                uVar6 = 6;
                            }
                            else {
                                iVar2 = strcmp(uVar5,"MULTISCID");
                                if (iVar2 == 0) {
                                    uVar6 = 7;
                                }
                                else {
                                    iVar2 = strcmp(uVar5,"DIRTYINFO");
                                    if (iVar2 == 0) {
                                        uVar6 = 8;
                                    }
                                    else {
                                        iVar2 = strcmp(uVar5,"ADDR_MASK");
                                        uVar7 = 9;
                                        if (iVar2 != 0) {
                                            uVar7 = 10;
                                        }
                                        uVar6 = uVar7;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar6;
}


// ===== sym.perfmon_filter_remove_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001248 (size 8) =====

ulong *** sym.perfmon_filter_remove_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                    (int64_t param_1,ulong param_2,ulong ****param_3,ulong ***param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t *piVar8;
    char *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong ***pppuVar11;
    uint64_t uVar12;
    uint64_t unaff_x22;
    ulong uVar13;
    code *unaff_x23;
    ulong unaff_x24;
    int64_t iVar14;
    ulong unaff_x25;
    int64_t unaff_x26;
    ulong *puVar15;
    ulong unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    code *pcStack_140;
    ulong uStack_138;
    int64_t iStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    ulong **ppuStack_f8;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    ulong **ppuStack_98;
    code *pcStack_90;
    ulong **ppuStack_88;
    ulong ***pppuStack_80;
    ulong **ppuStack_78;
    ulong ***pppuStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar12 = *(param_1 + 0x98);
    pppuStack_80 = NULL;
    ppuStack_78 = NULL;
    ppuStack_88 = NULL;
    iVar14 = uVar12 + 0x928;
    pppuVar11 = param_4;
    pppuStack_70 = param_3;
    mutex_lock(iVar14);
    iVar4 = strsep(&pppuStack_70,0x8000726);
    if ((iVar4 == 0) || (uVar1 = sym.find_filter_type(iVar4), uVar1 == 10)) {
        unaff_x23 = 0x8000c64;
code_r0x08002c14:
        _printk(unaff_x23);
    }
    else {
        unaff_x22 = uVar1;
        iVar4 = strsep(&pppuStack_70,0x8000726);
        if (iVar4 == 0) {
code_r0x08002bf4:
            unaff_x23 = 0x800074c;
            goto code_r0x08002c14;
        }
        param_3 = &pppuStack_80;
        iVar2 = kstrtoull(iVar4,0,param_3);
        if (iVar2 != 0) {
code_r0x08002c00:
            unaff_x23 = 0x8000b26;
            goto code_r0x08002c14;
        }
        if ((uVar1 == 0) && (0x1f < pppuStack_80)) {
            unaff_x23 = 0x8000608;
            goto code_r0x08002c14;
        }
        iVar4 = strsep(&pppuStack_70,0x8000726);
        if (iVar4 == 0) goto code_r0x08002bf4;
        param_3 = &ppuStack_78;
        iVar2 = kstrtoull(iVar4,0,param_3);
        if (iVar2 != 0) goto code_r0x08002c00;
        iVar4 = strsep(&pppuStack_70,0x8000726);
        if (iVar4 != 0) {
            unaff_x23 = 0x800078f;
            unaff_x26 = uVar12 + 0x58;
            unaff_x27 = 1;
            unaff_x24 = 0x8000726;
            unaff_x28 = sym.__typeid__ZTSFvP20llcc_perfmon_private11filter_typeyybE_global_addr;
            unaff_x25 = 0x8000440;
            do {
                param_3 = &ppuStack_88;
                iVar2 = kstrtoull(iVar4,0,param_3);
                if (iVar2 != 0) break;
                if (0x7 < ppuStack_88) goto code_r0x08002c14;
                *(uVar12 + 0x920) = *(uVar12 + 0x920) & (1 << (ppuStack_88 & 0x1f) ^ 0xffffffffU);
                pcVar10 = *(*(unaff_x26 + ppuStack_88 * 8) + 0x10);
                if (pcVar10 != NULL) {
                    if (5 < (pcVar10 + -0x80012c0 >> 3 | pcVar10 << 0x3d)) {
                        pcStack_90 = pcVar10;
                        __cfi_slowpath_diag(0x2689878a22517aed,pcVar10,0x8000440);
                        pcVar10 = pcStack_90;
                    }
                    param_3 = pppuStack_80;
                    pppuVar11 = ppuStack_78;
                    (*pcVar10)(uVar12,uVar1,pppuStack_80,ppuStack_78,0);
                }
                iVar4 = strsep(&pppuStack_70,0x8000726);
            } while (iVar4 != 0);
        }
    }
    mutex_unlock(iVar14);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_start_store;
    pcStack_c8 = sym.perfmon_start_store;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    piVar8 = &iStack_e8;
    iVar4 = *(iVar5 + 0x98);
    iStack_e8 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x24;
    pcStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    uStack_a8 = uVar12;
    iStack_a0 = iVar14;
    ppuStack_98 = param_4;
    iVar2 = kstrtoull(param_3,0);
    if (iVar2 != 0) {
        pppuVar11 = 0xffffffffffffffea;
        goto code_r0x08002e04;
    }
    iVar14 = iVar4 + 0x928;
    mutex_lock(iVar14);
    if (iStack_e8 == 0) {
        if (*(iVar4 + 0x9a0) != 0) {
            hrtimer_cancel(iVar4 + 0x958);
        }
        if (*(iVar4 + 0x918) == 0) {
            _printk(0x80008d5);
        }
        unaff_x22 = 0;
    }
    else {
        if (*(iVar4 + 0x918) == 0) {
            _printk(0x80006e2);
            mutex_unlock(iVar14);
            pppuVar11 = 0xffffffffffffffea;
            goto code_r0x08002e04;
        }
        uVar12 = *(iVar4 + 0x9b0);
        if (uVar12 != 0) {
            iVar2 = clk_prepare(uVar12);
            if (iVar2 == 0) {
                iVar2 = clk_enable(uVar12);
                if (iVar2 == 0) goto code_r0x08002cfc;
                clk_unprepare(uVar12);
            }
            mutex_unlock(iVar14);
            _printk(0x8000a45);
            pppuVar11 = 0xffffffffffffffea;
            goto code_r0x08002e04;
        }
code_r0x08002cfc:
        if (*(iVar4 + 0x9a0) != 0) {
            uVar13 = *(iVar4 + 0x9a0);
            if ((*(iVar4 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar4 + 0x958,uVar13,0,3);
            }
            else {
                unaff_x23 = *(*(iVar4 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,unaff_x23,0x8000380);
                uVar7 = (*unaff_x23)();
                hrtimer_forward(iVar4 + 0x958,uVar7,uVar13);
            }
        }
        unaff_x22 = 0x8000;
    }
    uStack_dc = 0;
    uVar1 = 0x3600c;
    if (*(iVar4 + 0x9b8) < 0x15) {
        uVar1 = 0x3100c;
    }
    uVar12 = uVar1;
    regmap_read(*(iVar4 + 8),uVar12,&uStack_dc);
    uStack_dc = uStack_dc & 0xffff7ffe | unaff_x22;
    piVar8 = uStack_dc;
    regmap_write(*(iVar4 + 8),uVar12);
    if ((iStack_e8 == 0) && (uVar12 = *(iVar4 + 0x9b0), uVar12 != 0)) {
        clk_disable(uVar12);
        clk_unprepare(uVar12);
    }
    mutex_unlock(iVar14);
code_r0x08002e04:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return pppuVar11;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = 0x8002e90;
    uStack_148 = 0x8002e90;
    iVar5 = sp_el0;
    iStack_158 = *(iVar5 + 0x5e0);
    iVar5 = 0;
    iVar2 = 0;
    puVar15 = *(iVar6 + 0x98);
    uStack_15c = 0;
    ppuStack_150 = &puStack_d0;
    pcStack_140 = unaff_x28;
    uStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    uStack_128 = unaff_x25;
    iStack_120 = iVar4;
    pcStack_118 = unaff_x23;
    uStack_110 = unaff_x22;
    uStack_108 = uVar12;
    iStack_100 = iVar14;
    ppuStack_f8 = pppuVar11;
    do {
        uVar1 = iVar2 << 0xc | 4;
        if (*(puVar15 + 10) == 0) {
            iVar14 = 0;
        }
        else {
            uVar12 = 0;
            iVar14 = 0;
            do {
                if (uVar12 == 0x10) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar10)();
                }
                regmap_read(*puVar15,*(puVar15 + uVar12 * 4 + 0x10) + uVar1,&uStack_15c);
                uVar12 = uVar12 + 1;
                iVar14 = iVar14 + (uStack_15c._2_2_ & 0x7fff);
                uStack_15c = uStack_15c._2_2_ & 0x7fff;
            } while (uVar12 < *(puVar15 + 10));
        }
        regmap_read(puVar15[1],uVar1,&uStack_15c);
        pcVar9 = "DEACTIVE";
        if ((uStack_15c & 1) != 0) {
            pcVar9 = "ACTIVE";
        }
        iVar3 = scnprintf(piVar8 + iVar5,0x1000 - iVar5,"SCID %02d %10s",iVar2,pcVar9);
        iVar5 = iVar5 + iVar3;
        pcVar9 = ",0x%08lx\n";
        iVar3 = scnprintf(piVar8 + iVar5,0x1000 - iVar5,",0x%08lx\n",iVar14);
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + iVar3;
    } while (iVar2 != 0x20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_158) {
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.perfmon_ns_periodic_dump_store;
        iVar4 = *(iVar4 + 0x98);
        iVar2 = kstrtoll(pcVar9,0,iVar4 + 0x9a0);
        if (iVar2 == 0) {
            mutex_lock(iVar4 + 0x928);
            iVar5 = iVar4 + 0x958;
            if (*(iVar4 + 0x9a0) == 0) {
                hrtimer_cancel(iVar5);
            }
            else {
                uVar13 = *(iVar4 + 0x9a0);
                if ((*(iVar4 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar5,uVar13,0,3);
                }
                else {
                    pcVar10 = *(*(iVar4 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar10,0x8000380);
                    uVar7 = (*pcVar10)();
                    hrtimer_forward(iVar5,uVar7,uVar13);
                }
            }
            mutex_unlock(iVar4 + 0x928);
        }
        else {
            iVar14 = -0x16;
        }
        return iVar14;
    }
    return iVar5;
}


// ===== sym.perfmon_configure_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001250 (size 8) =====

uint64_t sym.perfmon_configure_store.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    uint *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar12;
    ulong unaff_x22;
    ulong uVar13;
    ulong unaff_x23;
    code *unaff_x24;
    int64_t unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    code *pcStack_160;
    int64_t iStack_158;
    code *pcStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    uint64_t uStack_128;
    code *pcStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint32_t uStack_104;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    code *pcStack_d0;
    int64_t iStack_c8;
    code *pcStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar12 = *(param_1 + 0x98);
    uStack_74 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar5 = iVar12 + 0x928;
    uVar6 = param_4;
    uStack_70 = param_3;
    mutex_lock(iVar5);
    if (*(iVar12 + 0x918) == 0) {
        iVar3 = strsep(&uStack_70,0x8000726);
        if (iVar3 != 0) {
            unaff_x28 = iVar12 + 0x98;
            uVar13 = 0x8000726;
            unaff_x25 = iVar12 + 0x58;
            unaff_x26 = 0x10;
            unaff_x23 = 0x88;
            do {
                while( true ) {
                    iVar1 = kstrtoull(iVar3,0,&uStack_80);
                    unaff_x22 = 0x8000726;
                    unaff_x27 = iVar3;
                    if ((((iVar1 != 0) || (*(iVar12 + 0x924) <= uStack_80)) ||
                        (iVar3 = strsep(&uStack_70,0x8000726), unaff_x22 = uVar13, iVar3 == 0)) ||
                       (iVar1 = kstrtoull(iVar3,0,&uStack_88), iVar1 != 0)) goto code_r0x0800232c;
                    iVar3 = strsep(&uStack_70,0x8000726);
                    unaff_x27 = iVar3;
                    if (uStack_88 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar3 == 0) goto code_r0x0800232c;
                }
                if (uStack_80 == 3) {
                    iVar1 = *(iVar12 + 0x9a8);
                }
                else {
                    iVar1 = 1;
                }
                uVar8 = uStack_74;
                if (uStack_74 == 0x10U - iVar1) break;
                if (0x10 < uStack_74) {
code_r0x080023c4:
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80023c8);
                    (*pcVar9)();
                }
                puVar11 = unaff_x28 + uVar8 * 0x88;
                *puVar11 = uStack_80;
                uVar7 = *(iVar12 + 0x50);
                puVar11[1] = uStack_88;
                if (((((uVar7 != 0) && (*(unaff_x28 + uVar8 * 0x88 + 8) = 0, uVar7 != 1)) &&
                     ((*(unaff_x28 + uVar8 * 0x88 + 0x10) = 0, 2 < uVar7 &&
                      ((*(unaff_x28 + uVar8 * 0x88 + 0x18) = 0, uVar7 != 3 &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x20) = 0, 4 < uVar7)))))) &&
                    (((*(unaff_x28 + uVar8 * 0x88 + 0x28) = 0, uVar7 != 5 &&
                      ((((*(unaff_x28 + uVar8 * 0x88 + 0x30) = 0, 6 < uVar7 &&
                         (*(unaff_x28 + uVar8 * 0x88 + 0x38) = 0, uVar7 != 7)) &&
                        (*(unaff_x28 + uVar8 * 0x88 + 0x40) = 0, 8 < uVar7)) &&
                       ((*(unaff_x28 + uVar8 * 0x88 + 0x48) = 0, uVar7 != 9 &&
                        (*(unaff_x28 + uVar8 * 0x88 + 0x50) = 0, 10 < uVar7)))))) &&
                     ((((*(unaff_x28 + uVar8 * 0x88 + 0x58) = 0, uVar7 != 0xb &&
                        ((*(unaff_x28 + uVar8 * 0x88 + 0x60) = 0, 0xc < uVar7 &&
                         (*(unaff_x28 + uVar8 * 0x88 + 0x68) = 0, uVar7 != 0xd)))) &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x70) = 0, 0xe < uVar7)) &&
                      ((*(unaff_x28 + uVar8 * 0x88 + 0x78) = 0, uVar7 != 0xf &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x80) = 0, 0x10 < uVar7)))))))) || (7 < uStack_80))
                goto code_r0x080023c4;
                unaff_x24 = *(unaff_x25 + uStack_80 * 8);
                pcVar9 = *unaff_x24;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_90 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003a0);
                    pcVar9 = pcStack_90;
                }
                (*pcVar9)(iVar12,uStack_88 & 0xffffffff,&uStack_74,1);
                uVar7 = uStack_74;
                uStack_74 = uStack_74 + 1;
                uVar6 = uStack_80;
                _printk(0x8000656,uVar7,uStack_88);
                uVar7 = *(iVar12 + 0x91c);
                uVar10 = 1 << (uStack_80 & 0x1f);
                if (((uVar10 & uVar7) == 0) && (pcVar9 = *(unaff_x24 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x80003c0);
                        unaff_x24 = pcVar9;
                    }
                    (*pcVar9)(iVar12,1);
                    uVar7 = *(iVar12 + 0x91c);
                    uVar10 = 1 << (uStack_80 & 0x1f);
                }
                *(iVar12 + 0x91c) = uVar7 | uVar10;
            } while (iVar3 != 0);
        }
code_r0x0800232c:
        param_3 = 0xc1000000;
        iVar1 = 0x36020;
        if (*(iVar12 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        iVar2 = uStack_74 * 4;
        uStack_74 = uStack_74 + 1;
        regmap_write(*(iVar12 + 8),iVar1 + iVar2);
        *(iVar12 + 0x918) = uStack_74;
    }
    else {
        _printk(0x8000bed);
        param_4 = 0xffffffffffffffea;
    }
    mutex_unlock(iVar5);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_remove_store;
    pcStack_e8 = sym.perfmon_remove_store;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    iVar4 = *(iVar4 + 0x98);
    uStack_104 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    iVar3 = iVar4 + 0x928;
    uVar8 = uVar6;
    uStack_100 = param_3;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x28;
    iStack_d8 = unaff_x27;
    pcStack_d0 = unaff_x26;
    iStack_c8 = unaff_x25;
    pcStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    iStack_a8 = iVar12;
    iStack_a0 = iVar5;
    uStack_98 = param_4;
    mutex_lock(iVar3);
    if (*(iVar4 + 0x918) == 0) {
        _printk(0x80009c8);
        uVar6 = 0xffffffffffffffea;
    }
    else {
        iVar5 = strsep(&uStack_100,0x8000726);
        if (iVar5 == 0) {
            iVar1 = 0;
        }
        else {
            unaff_x28 = iVar4 + 0x98;
            unaff_x22 = 0x8000726;
            unaff_x25 = iVar4 + 0x58;
            unaff_x24 = 0x8000ae3;
            unaff_x23 = 1;
            do {
                while( true ) {
                    iVar1 = kstrtoull(iVar5,0,&uStack_110);
                    if ((((iVar1 != 0) || (*(iVar4 + 0x924) <= uStack_110)) ||
                        (iVar12 = strsep(&uStack_100,0x8000726), iVar12 == 0)) ||
                       (iVar1 = kstrtoull(iVar12,0,&uStack_118), iVar1 != 0)) goto code_r0x08002620;
                    iVar5 = strsep(&uStack_100,0x8000726);
                    if (uStack_118 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar5 == 0) goto code_r0x08002620;
                }
                if (uStack_110 == 3) {
                    iVar1 = *(iVar4 + 0x9a8);
                }
                else {
                    iVar1 = 1;
                }
                if (uStack_104 == *(iVar4 + 0x918) - iVar1) break;
                if ((0x10 < uStack_104) || (*(unaff_x28 + uStack_104 * 0x88) = 8, 7 < uStack_110)) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80026bc);
                    (*pcVar9)();
                }
                unaff_x26 = *(unaff_x25 + uStack_110 * 8);
                pcVar9 = *unaff_x26;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_120 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003e0);
                    pcVar9 = pcStack_120;
                }
                (*pcVar9)(iVar4,uStack_118 & 0xffffffff,&uStack_104,0);
                uVar7 = uStack_104;
                uStack_104 = uStack_104 + 1;
                uVar8 = uStack_110;
                _printk(0x8000ae3,uVar7,uStack_118,uStack_110);
                uVar7 = *(iVar4 + 0x91c);
                uVar10 = 1 << (uStack_110 & 0x1f);
                if (((uVar10 & uVar7) != 0) && (pcVar9 = *(unaff_x26 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x8000400);
                        unaff_x26 = pcVar9;
                    }
                    (*pcVar9)(iVar4,0);
                    uVar7 = *(iVar4 + 0x91c);
                    uVar10 = 1 << (uStack_110 & 0x1f);
                }
                *(iVar4 + 0x91c) = uVar7 & (uVar10 ^ 0xffffffff);
            } while (iVar5 != 0);
code_r0x08002620:
            iVar1 = uStack_104 << 2;
            unaff_x27 = iVar5;
        }
        param_3 = 0;
        iVar2 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar2 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar2 + iVar1);
        *(iVar4 + 0x918) = 0;
    }
    mutex_unlock(iVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_f8) {
        return uVar6;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.perfmon_filter_config_store;
    pcStack_178 = sym.perfmon_filter_config_store;
    iVar5 = sp_el0;
    iStack_188 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar12 + 0x98);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    uStack_190 = param_3;
    ppuStack_180 = &puStack_f0;
    iStack_170 = unaff_x28;
    iStack_168 = unaff_x27;
    pcStack_160 = unaff_x26;
    iStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_140 = unaff_x22;
    iStack_138 = iVar4;
    iStack_130 = iVar3;
    uStack_128 = uVar6;
    if (*(iVar5 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar12 = iVar5 + 0x928;
    mutex_lock(iVar12);
    iVar3 = strsep(&uStack_190,0x8000726);
    if ((iVar3 == 0) || (iVar1 = sym.find_filter_type(iVar3), iVar1 == 10)) {
        uVar13 = 0x8000c64;
    }
    else {
        iVar3 = strsep(&uStack_190,0x8000726);
        if (iVar3 == 0) {
code_r0x08002884:
            uVar13 = 0x800074c;
        }
        else {
            iVar2 = kstrtoull(iVar3,0,&uStack_1a0);
            if (iVar2 == 0) {
                if ((iVar1 == 0) && (0x1f < uStack_1a0)) {
                    uVar13 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar3 = strsep(&uStack_190,0x8000726);
                if (iVar3 == 0) goto code_r0x08002884;
                iVar2 = kstrtoull(iVar3,0,&uStack_198);
                if (iVar2 == 0) {
                    iVar3 = strsep(&uStack_190,0x8000726);
                    if (iVar3 != 0) {
                        uVar13 = 0x800078f;
                        do {
                            iVar2 = kstrtoull(iVar3,0,&uStack_1a8);
                            if (iVar2 != 0) break;
                            if (7 < uStack_1a8) goto code_r0x080028b4;
                            *(iVar5 + 0x920) = *(iVar5 + 0x920) | 1 << (uStack_1a8 & 0x1f);
                            pcVar9 = *(*(iVar5 + 0x58 + uStack_1a8 * 8) + 0x10);
                            if (pcVar9 != NULL) {
                                if (5 < (pcVar9 + -0x80012c0 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar9,0x8000420);
                                }
                                (*pcVar9)(iVar5,iVar1,uStack_1a0,uStack_198,1);
                            }
                            iVar3 = strsep(&uStack_190,0x8000726);
                        } while (iVar3 != 0);
                    }
                    mutex_unlock(iVar12);
                    goto code_r0x080028c8;
                }
            }
            uVar13 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar13);
    mutex_unlock(iVar12);
    uVar8 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_188) {
        uVar13 = __stack_chk_fail();
        *extraout_x18_01 = sym.find_filter_type;
        uVar6 = strcmp(uVar13,"SCID");
        if (uVar6 != 0) {
            iVar1 = strcmp(uVar13,0x800064b);
            if (iVar1 == 0) {
                uVar6 = 1;
            }
            else {
                iVar1 = strcmp(uVar13,"PROFILING_TAG");
                if (iVar1 == 0) {
                    uVar6 = 2;
                }
                else {
                    iVar1 = strcmp(uVar13,"WAY_ID");
                    if (iVar1 == 0) {
                        uVar6 = 3;
                    }
                    else {
                        iVar1 = strcmp(uVar13,"OPCODE");
                        if (iVar1 == 0) {
                            uVar6 = 4;
                        }
                        else {
                            iVar1 = strcmp(uVar13,"CACHEALLOC");
                            if (iVar1 == 0) {
                                uVar6 = 5;
                            }
                            else {
                                iVar1 = strcmp(uVar13,"MEMTAGOPS");
                                if (iVar1 == 0) {
                                    uVar6 = 6;
                                }
                                else {
                                    iVar1 = strcmp(uVar13,"MULTISCID");
                                    if (iVar1 == 0) {
                                        uVar6 = 7;
                                    }
                                    else {
                                        iVar1 = strcmp(uVar13,"DIRTYINFO");
                                        if (iVar1 == 0) {
                                            uVar6 = 8;
                                        }
                                        else {
                                            iVar1 = strcmp(uVar13,"ADDR_MASK");
                                            uVar7 = 9;
                                            if (iVar1 != 0) {
                                                uVar7 = 10;
                                            }
                                            uVar6 = uVar7;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar6;
    }
    return uVar8;
}


// ===== sym.__typeid__ZTSFvP20llcc_perfmon_privatebE_global_addr @ 0x08001258 (size 8) =====

void sym.__typeid__ZTSFvP20llcc_perfmon_privatebE_global_addr
               (int64_t param_1,uint64_t param_2,ulong param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar17;
    int iVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    uint32_t uStack_18c;
    int64_t iStack_188;
    uchar ****ppppuStack_180;
    code *pcStack_178;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar7 = 0x4002001;
    if ((param_2 & 1) == 0) {
        uVar7 = 0;
    }
    uStack_3c = 0;
    uVar15 = 0x49060;
    if (*(param_1 + 0x9b8) < 0x15) {
        uVar15 = 0x3b060;
    }
    regmap_read(*(param_1 + 8),uVar15,&uStack_3c);
    uStack_3c = uStack_3c & 0xf00000fe | uVar7;
    puVar8 = uStack_3c;
    regmap_write(*(param_1 + 8),uVar15);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar13 = auVar20._0_8_;
    *extraout_x18 = sym.ferc_event_filter_config;
    pcStack_68 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    if (auVar20._8_4_ == 2) {
        uVar7 = param_4 << 2;
        uVar15 = 0x49000;
        if (*(iVar13 + 0x9b8) < 0x15) {
            uVar15 = 0x3b000;
        }
        uStack_7c = 0;
        uVar11 = param_5;
        regmap_read(*(iVar13 + 8),uVar15,&uStack_7c);
        uVar7 = (puVar8 | uVar7) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_7c = uStack_7c & 0xfffffff0 | uVar7;
        puVar8 = uStack_7c;
        regmap_write(*(iVar13 + 8),uVar15);
        param_5 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar13 = auVar20._0_8_;
    *extraout_x18_00 = sym.fewc_event_config;
    pcStack_c8 = sym.fewc_event_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    uStack_dc = 0;
    uVar7 = *(iVar13 + 0x920) & 4;
    uVar11 = 0x3f;
    if (uVar7 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar7 = auVar20._8_4_ & 0x3f | uVar7 << 0x1d;
    if ((param_4 & 1) == 0) {
        uVar7 = 0;
    }
    iVar18 = 0x39020;
    if (*(iVar13 + 0x9b8) < 0x15) {
        iVar18 = 0x33020;
    }
    uVar17 = iVar18 + *puVar8 * 4;
    uVar10 = param_4;
    ppuStack_d0 = &puStack_70;
    regmap_read(*(iVar13 + 8),uVar17,&uStack_dc);
    uStack_dc = uStack_dc & (uVar11 ^ 0xffffffff) | uVar7 & uVar11;
    puVar9 = uStack_dc;
    regmap_write(*(iVar13 + 8),uVar17);
    uVar7 = *puVar8;
    if (uVar7 < 0x10) {
        uVar11 = (uVar7 & 0x1f) << 0x10 | 0xc0000002;
        if ((param_4 & 1) == 0) {
            uVar11 = 0;
        }
        puVar9 = uVar11;
        iVar18 = 0x36020;
        if (*(iVar13 + 0x9b8) < 0x15) {
            iVar18 = 0x31020;
        }
        regmap_write(*(iVar13 + 8),iVar18 + uVar7 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._0_8_;
    *extraout_x18_01 = sym.fewc_event_filter_config;
    pcStack_108 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    pppuStack_110 = &ppuStack_d0;
    uStack_100 = uVar17;
    puStack_f8 = puVar8;
    uStack_f0 = param_4;
    iStack_e8 = iVar13;
    if (auVar20._8_4_ == 2) {
        uVar7 = uVar10 << 2;
        uVar15 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar15 = 0x33000;
        }
        uStack_11c = 0;
        regmap_read(*(iVar6 + 8),uVar15,&uStack_11c);
        uVar7 = (puVar9 | uVar7) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_11c = uStack_11c & 0xfffffff0 | uVar7;
        puVar9 = uStack_11c;
        regmap_write(*(iVar6 + 8),uVar15);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar7 = auVar20._8_4_;
    iVar13 = auVar20._0_8_;
    *extraout_x18_02 = sym.beac_event_config;
    pcStack_178 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    if ((*(iVar13 + 0x920) >> 3 & 1) == 0) {
        uVar12 = uVar7 & 0x3f;
        uVar11 = 0;
        if ((uVar10 & 1) == 0) {
            uVar12 = 0;
        }
        uVar14 = 0x3f;
        iVar18 = *(iVar13 + 0x9a8);
joined_r0x08003ce0:
        uVar16 = 0;
    }
    else {
        uVar14 = 0x8001003f;
        uVar11 = 0x78;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        if ((uVar10 & 1) == 0) {
            uVar12 = 0;
            iVar18 = *(iVar13 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar12 = uVar7 & 0x3f | 0x80000000;
        uVar16 = 0x28;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar16 = 0;
        }
        iVar18 = *(iVar13 + 0x9a8);
    }
    ppppuStack_180 = &pppuStack_110;
    if (iVar18 != 0) {
        iVar18 = 0;
        uVar19 = 0;
        do {
            uStack_18c = 0;
            iVar1 = 0x61040;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar18 + iVar1 + (uVar19 + *puVar9) * 4;
            regmap_read(*(iVar13 + 8),iVar1,&uStack_18c);
            uStack_18c = uStack_18c & ~uVar14 | uVar12 & uVar14;
            regmap_write(*(iVar13 + 8),iVar1);
            uStack_18c = 0;
            iVar1 = 0x61080;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar13 + 8),iVar1 + iVar18,&uStack_18c);
            uStack_18c = uStack_18c & ~uVar11 | uVar16 & uVar11;
            regmap_write(*(iVar13 + 8),iVar1 + iVar18);
            uVar3 = *puVar9;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar10 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar19 == 1) && (uVar3 = *puVar9 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar10 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar19 = uVar19 + 1;
            iVar18 = iVar18 + 0x4000;
        } while (uVar19 < *(iVar13 + 0x9a8));
        if (1 < *(iVar13 + 0x9a8)) {
            uVar11 = *puVar9;
            *puVar9 = uVar11 + 1;
            if (0x10 < uVar11) goto code_r0x08003edc;
            iVar13 = iVar13 + uVar11 * 0x88;
            uVar15 = 3;
            if ((uVar10 & 1) == 0) {
                uVar15 = 8;
                uVar7 = 100;
            }
            *(iVar13 + 0x98) = uVar15;
            *(iVar13 + 0x9c) = uVar7;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.drp_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001260 (size 8) =====

void sym.drp_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar auVar11 [16];
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar9 = 0x2001;
    if ((param_2 & 1) == 0) {
        uVar9 = 0;
    }
    uStack_3c = 0;
    uVar2 = 0x51050;
    if (*(param_1 + 0x9b8) < 0x15) {
        uVar2 = 0x44050;
    }
    regmap_read(*(param_1 + 8),uVar2,&uStack_3c);
    uStack_3c = uStack_3c & 0xffff00fe | uVar9;
    puVar8 = uStack_3c;
    regmap_write(*(param_1 + 8),uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar6 = auVar10._0_8_;
    *extraout_x18 = sym.pmgr_event_config;
    pcStack_78 = sym.pmgr_event_config;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_8c = 0;
    uVar9 = *(iVar6 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar9 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar9 = auVar10._8_4_ & 0x3f | uVar9 << 0x18;
    if ((param_4 & 1) == 0) {
        uVar9 = 0;
    }
    iVar3 = 0x4d000;
    if (*(iVar6 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *puVar8 * 4;
    puStack_80 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar6 + 8),iVar3,&uStack_8c);
    uStack_8c = uStack_8c & (uVar1 ^ 0xffffffff) | uVar9 & uVar1;
    regmap_write(*(iVar6 + 8),iVar3);
    uVar9 = *puVar8;
    if (uVar9 < 0x10) {
        uVar1 = (uVar9 & 0x1f) << 0x10 | 0xc0000007;
        if ((param_4 & 1) == 0) {
            uVar1 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar6 + 8),iVar3 + uVar9 * 4,uVar1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_88) {
        auVar11 = __stack_chk_fail();
        puVar7 = auVar11._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar11._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
        (*pcVar5)();
    }
    return;
}


// ===== sym.feac_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001268 (size 8) =====

void sym.feac_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,ulong param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint uVar15;
    uint32_t uVar16;
    int iVar17;
    int64_t iVar18;
    uint32_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar20;
    uint32_t *puVar21;
    uint32_t *puVar22;
    uint64_t uVar23;
    uint32_t *puVar24;
    uint64_t uVar25;
    uint32_t *puVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    uint32_t uVar29;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [12];
    uint32_t uStack_28c;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    uint32_t uStack_21c;
    int64_t iStack_218;
    ulong ****ppppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint32_t *puStack_1f8;
    uint64_t uStack_1f0;
    int64_t iStack_1e8;
    uint32_t uStack_1dc;
    int64_t iStack_1d8;
    ulong ****ppppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint32_t *puStack_120;
    uint64_t uStack_110;
    int64_t iStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong uStack_e0;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint32_t *puStack_c0;
    uint32_t *puStack_b8;
    uint32_t *puStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    uVar15 = param_4 >> 0x20;
    uVar11 = param_4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    puVar24 = 0xfffff01;
    if ((param_2 & 1) == 0) {
        puVar26 = NULL;
        if ((*(param_1 + 0x920) & 1) != 0) {
            iVar17 = *(param_1 + 0x9ac);
            goto code_r0x080032a4;
        }
    }
    else {
        puVar26 = 0x4002001;
        if ((*(param_1 + 0x920) & 1) != 0) {
            iVar17 = *(param_1 + 0x9ac);
            uVar19 = 0x4002003;
            if (iVar17 != 0) {
                uVar19 = 0x1400202b;
            }
            puVar26 = uVar19;
code_r0x080032a4:
            uVar19 = 0xfffff07;
            if (iVar17 != 0) {
                uVar19 = 0x3fffff7f;
            }
            puVar24 = uVar19;
        }
    }
    uStack_3c = 0;
    uVar19 = 0x430a0;
    if (*(param_1 + 0x9b8) < 0x15) {
        uVar19 = 0x370a0;
    }
    puVar21 = uVar19;
    regmap_read(*(param_1 + 8),puVar21,&uStack_3c);
    uStack_3c = uStack_3c & (puVar24 ^ 0xffffffff) | puVar24 & puVar26;
    puVar9 = uStack_3c;
    regmap_write(*(param_1 + 8),puVar21);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar18 = auVar30._0_8_;
    *extraout_x18 = sym.feac_event_filter_config;
    pcStack_88 = sym.feac_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    if (9 < auVar30._8_4_) {
code_r0x08003754:
        _printk(0x800090a);
        puVar10 = puVar9;
        iVar18 = param_1;
        goto code_r0x08003718;
    }
    puVar21 = param_5;
    puVar26 = CONCAT44(uVar15,uVar11);
    uVar19 = puVar9;
    param_1 = iVar18;
    puVar24 = puVar9;
    switch(auVar30._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar18 + 0x9ac) == 0) {
            puVar21 = puVar9 | puVar26 << 0x10;
            if ((param_5 & 1) == 0) {
                puVar21 = NULL;
            }
        }
        else {
            puVar21 = 1 << (uVar19 & 0x1f);
            if ((param_5 & 1) == 0) {
                puVar21 = 0xffffffff;
            }
        }
        uVar19 = 0x43018;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar19 = 0x37018;
        }
        puVar22 = uVar19;
        uStack_9c = 0;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar7 = *(iVar18 + 8);
        puVar10 = puVar21 & 0xffffffff;
        goto code_r0x08003710;
    case 1:
        uVar19 = uVar19 | uVar11 << 0x10;
        if ((param_5 & 1) == 0) {
            uVar19 = 0;
        }
        uVar12 = 0x43014;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x37014;
        }
        puVar22 = uVar12;
        uStack_9c = 0;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        goto code_r0x08003458;
    default:
        goto code_r0x08003754;
    case 4:
        uVar19 = uVar11 << 0x1c | uVar19 << 0x18;
        if ((param_5 & 1) == 0) {
            uVar19 = 0;
        }
        uVar12 = 0x4300c;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar22 = uVar12;
        uStack_9c = 0;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar19 = uVar19 | uStack_9c & 0xffffff;
code_r0x08003458:
        puVar10 = uVar19;
        uVar7 = *(iVar18 + 8);
        puVar21 = puVar10;
code_r0x08003710:
        uStack_9c = puVar21;
        puVar24 = puVar22;
        goto code_r0x08003714;
    case 5:
        uVar19 = uVar11 << 0x10 | uVar19 << 0xc;
        puVar26 = uVar19;
        uVar12 = 0x4300c;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar22 = uVar12;
        uStack_9c = 0;
        uVar12 = param_5;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar19 = uVar19 & 0xff000;
        bVar6 = (param_5 & 1) == 0;
        uStack_9c = uStack_9c & 0xfff00fff;
        param_5 = uVar12;
        break;
    case 6:
        uVar19 = uVar11 << 0xc | uVar19 << 10;
        puVar26 = uVar19;
        uVar12 = 0x4301c;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar22 = uVar12;
        uStack_9c = 0;
        uVar12 = param_5;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar19 = uVar19 & 0x7c00;
        bVar6 = (param_5 & 1) == 0;
        uStack_9c = uStack_9c & 0xffff83ff;
        param_5 = uVar12;
        break;
    case 7:
        uVar12 = 0x43018;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x37018;
        }
        puVar22 = uVar12;
        uVar12 = *(iVar18 + 0x9ac);
        unaff_x23 = uVar12;
        if ((param_5 & 1) == 0) {
            uVar19 = 0xffffffff;
        }
        puVar21 = uVar19;
        uStack_9c = 0;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar7 = *(iVar18 + 8);
        if (uVar12 != 0) {
            uStack_9c = uVar19;
        }
        puVar10 = uStack_9c;
        puVar26 = puVar22;
        goto code_r0x080036b8;
    case 8:
        uVar19 = uVar19 | uVar11 << 1;
        puVar26 = uVar19;
        uVar12 = 0x4301c;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar22 = uVar12;
        uStack_9c = 0;
        uVar12 = param_5;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar19 = uVar19 & 7;
        bVar6 = (param_5 & 1) == 0;
        uStack_9c = uStack_9c & 0xfffffff8;
        param_5 = uVar12;
        break;
    case 9:
        uVar15 = 0x43004;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar15 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_9c = 0;
        uVar12 = uVar11;
        uVar16 = param_5;
        regmap_read(*(iVar18 + 8),uVar15,&uStack_9c);
        uStack_9c = uVar19;
        if ((param_5 & 1) == 0) {
            uStack_9c = 0;
            uVar11 = 0;
        }
        regmap_write(*(iVar18 + 8),uVar15);
        uStack_9c = 0;
        uVar19 = 0x43008;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar19 = 0x37008;
        }
        unaff_x24 = uVar19;
        regmap_read(*(iVar18 + 8),unaff_x24,&uStack_9c);
        uStack_9c = uVar11;
        regmap_write(*(iVar18 + 8),unaff_x24,uVar11);
        unaff_x23 = 0;
        if ((param_5 & 1) != 0) {
            unaff_x23 = puVar26 >> 0x1c & 0xf0 | puVar9 >> 0x20 & 0xf;
        }
        uStack_9c = 0;
        uVar11 = 0x4300c;
        if (*(iVar18 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar22 = uVar11;
        regmap_read(*(iVar18 + 8),puVar22,&uStack_9c);
        uVar7 = *(iVar18 + 8);
        puVar10 = uStack_9c & 0xfffffe00 | unaff_x23;
        uVar11 = uVar12;
        param_5 = uVar16;
        puVar21 = puVar22;
        goto code_r0x080036b8;
    }
    if (bVar6) {
        uVar19 = 0;
    }
    uVar7 = *(iVar18 + 8);
    puVar10 = uStack_9c | uVar19;
    puVar9 = puVar22;
code_r0x080036b8:
    uStack_9c = puVar10;
    puVar24 = puVar9;
code_r0x08003714:
    regmap_write(uVar7,puVar22);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar8 = auVar31._0_8_;
    *extraout_x18_00 = sym.ferc_event_config;
    pcStack_e8 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_fc = 0;
    uVar19 = *(iVar8 + 0x920) & 2;
    uVar12 = 0x3f;
    if (uVar19 != 0) {
        uVar12 = 0x8001003f;
    }
    uVar19 = auVar31._8_4_ | uVar19 << 0x1e;
    if ((uVar11 & 1) == 0) {
        uVar19 = 0;
    }
    iVar17 = 0x49020;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar17 = 0x3b020;
    }
    uVar27 = iVar17 + *puVar10 * 4;
    uVar13 = uVar11;
    ppuStack_f0 = &puStack_90;
    uStack_e0 = unaff_x25;
    uStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    puStack_c0 = puVar26;
    puStack_b8 = puVar24;
    puStack_b0 = puVar21;
    iStack_a8 = iVar18;
    regmap_read(*(iVar8 + 8),uVar27,&uStack_fc);
    uStack_fc = uStack_fc & (uVar12 ^ 0xffffffff) | uVar19 & uVar12;
    regmap_write(*(iVar8 + 8),uVar27);
    uVar16 = *puVar10;
    if (uVar16 < 0x10) {
        uVar14 = (uVar16 & 0x1f) << 0x10 | 0xc0000001;
        if ((uVar11 & 1) == 0) {
            uVar14 = 0;
        }
        iVar17 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar17 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar17 + uVar16 * 4,uVar14);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar20 = auVar30._0_8_;
    *extraout_x18_01 = sym.ferc_event_enable;
    pcStack_128 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uVar16 = 0x4002001;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar16 = 0;
    }
    uVar25 = uVar16;
    uStack_13c = 0;
    uVar14 = 0x49060;
    if (*(uVar20 + 0x9b8) < 0x15) {
        uVar14 = 0x3b060;
    }
    uVar23 = uVar14;
    pppuStack_130 = &ppuStack_f0;
    puStack_120 = puVar10;
    uStack_110 = uVar11;
    iStack_108 = iVar8;
    regmap_read(*(uVar20 + 8),uVar23,&uStack_13c);
    uStack_13c = uStack_13c & 0xf00000fe | uVar16;
    puVar24 = uStack_13c;
    regmap_write(*(uVar20 + 8),uVar23);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar28 = auVar31._0_8_;
    *extraout_x18_02 = sym.ferc_event_filter_config;
    pcStack_168 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar27;
    uStack_158 = uVar25;
    uStack_150 = uVar23;
    uStack_148 = uVar20;
    if (auVar31._8_4_ == 2) {
        uVar16 = puVar24 | uVar13 << 2;
        uVar11 = 0x49000;
        if (*(uVar28 + 0x9b8) < 0x15) {
            uVar11 = 0x3b000;
        }
        uVar25 = uVar11;
        uVar20 = param_5;
        uStack_17c = 0;
        uVar14 = param_5;
        regmap_read(*(uVar28 + 8),uVar25,&uStack_17c);
        uVar11 = uVar16 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_17c = uStack_17c & 0xfffffff0 | uVar11;
        puVar24 = uStack_17c;
        regmap_write(*(uVar28 + 8),uVar25);
        param_5 = uVar14;
        uVar23 = uVar28;
        uVar27 = uVar16;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar18 = auVar31._0_8_;
    *extraout_x18_03 = sym.fewc_event_config;
    pcStack_1c8 = sym.fewc_event_config;
    uStack_1a8 = 0x31020;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uStack_1dc = 0;
    uVar11 = *(iVar18 + 0x920) & 4;
    uVar16 = 0x3f;
    if (uVar11 != 0) {
        uVar16 = 0x8001003f;
    }
    uVar11 = auVar31._8_4_ & 0x3f | uVar11 << 0x1d;
    if ((uVar13 & 1) == 0) {
        uVar11 = 0;
    }
    iVar17 = 0x39020;
    if (*(iVar18 + 0x9b8) < 0x15) {
        iVar17 = 0x33020;
    }
    uVar28 = iVar17 + *puVar24 * 4;
    uVar14 = uVar13;
    ppppuStack_1d0 = &ppppuStack_170;
    uStack_1c0 = uVar19;
    uStack_1b0 = uVar12;
    uStack_1a0 = uVar27;
    uStack_198 = uVar25;
    uStack_190 = uVar23;
    uStack_188 = uVar20;
    regmap_read(*(iVar18 + 8),uVar28,&uStack_1dc);
    uStack_1dc = uStack_1dc & (uVar16 ^ 0xffffffff) | uVar11 & uVar16;
    puVar26 = uStack_1dc;
    regmap_write(*(iVar18 + 8),uVar28);
    uVar11 = *puVar24;
    if (uVar11 < 0x10) {
        uVar19 = (uVar11 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar13 & 1) == 0) {
            uVar19 = 0;
        }
        puVar26 = uVar19;
        iVar17 = 0x36020;
        if (*(iVar18 + 0x9b8) < 0x15) {
            iVar17 = 0x31020;
        }
        regmap_write(*(iVar18 + 8),iVar17 + uVar11 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar8 = auVar31._0_8_;
    *extraout_x18_04 = sym.fewc_event_filter_config;
    pcStack_208 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    ppppuStack_210 = &ppppuStack_1d0;
    uStack_200 = uVar28;
    puStack_1f8 = puVar24;
    uStack_1f0 = uVar13;
    iStack_1e8 = iVar18;
    if (auVar31._8_4_ == 2) {
        uVar11 = uVar14 << 2;
        uVar15 = 0x39000;
        if (*(iVar8 + 0x9b8) < 0x15) {
            uVar15 = 0x33000;
        }
        uStack_21c = 0;
        regmap_read(*(iVar8 + 8),uVar15,&uStack_21c);
        uVar11 = (puVar26 | uVar11) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_21c = uStack_21c & 0xfffffff0 | uVar11;
        puVar26 = uStack_21c;
        regmap_write(*(iVar8 + 8),uVar15);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar11 = auVar31._8_4_;
    iVar18 = auVar31._0_8_;
    *extraout_x18_05 = sym.beac_event_config;
    pcStack_278 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_288 = *(iVar4 + 0x5e0);
    if ((*(iVar18 + 0x920) >> 3 & 1) == 0) {
        uVar16 = uVar11 & 0x3f;
        uVar19 = 0;
        if ((uVar14 & 1) == 0) {
            uVar16 = 0;
        }
        uVar12 = 0x3f;
        iVar17 = *(iVar18 + 0x9a8);
joined_r0x08003ce0:
        uVar13 = 0;
    }
    else {
        uVar12 = 0x8001003f;
        uVar19 = 0x78;
        if (*(iVar18 + 0x9ac) != 2) {
            uVar19 = 0;
        }
        if ((uVar14 & 1) == 0) {
            uVar16 = 0;
            iVar17 = *(iVar18 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar16 = uVar11 & 0x3f | 0x80000000;
        uVar13 = 0x28;
        if (*(iVar18 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        iVar17 = *(iVar18 + 0x9a8);
    }
    ppppuStack_280 = &ppppuStack_210;
    if (iVar17 != 0) {
        iVar17 = 0;
        uVar29 = 0;
        do {
            uStack_28c = 0;
            iVar1 = 0x61040;
            if (*(iVar18 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar17 + iVar1 + (uVar29 + *puVar26) * 4;
            regmap_read(*(iVar18 + 8),iVar1,&uStack_28c);
            uStack_28c = uStack_28c & ~uVar12 | uVar16 & uVar12;
            regmap_write(*(iVar18 + 8),iVar1);
            uStack_28c = 0;
            iVar1 = 0x61080;
            if (*(iVar18 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar18 + 8),iVar1 + iVar17,&uStack_28c);
            uStack_28c = uStack_28c & ~uVar19 | uVar13 & uVar19;
            regmap_write(*(iVar18 + 8),iVar1 + iVar17);
            uVar3 = *puVar26;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar18 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar18 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar29 == 1) && (uVar3 = *puVar26 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar18 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar18 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar29 = uVar29 + 1;
            iVar17 = iVar17 + 0x4000;
        } while (uVar29 < *(iVar18 + 0x9a8));
        if (1 < *(iVar18 + 0x9a8)) {
            uVar19 = *puVar26;
            *puVar26 = uVar19 + 1;
            if (0x10 < uVar19) goto code_r0x08003edc;
            iVar18 = iVar18 + uVar19 * 0x88;
            uVar15 = 3;
            if ((uVar14 & 1) == 0) {
                uVar15 = 8;
                uVar11 = 100;
            }
            *(iVar18 + 0x98) = uVar15;
            *(iVar18 + 0x9c) = uVar11;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_288) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.berc_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001270 (size 8) =====

void sym.berc_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint64_t param_2,ulong param_3,uint32_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uchar *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    uchar auVar21 [16];
    uint32_t uStack_1fc;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    uint32_t uStack_1ac;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    uint32_t *puStack_190;
    uint64_t uStack_180;
    int64_t iStack_178;
    uint32_t uStack_16c;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar15 = 0x4002001;
    if ((param_2 & 1) == 0) {
        uVar15 = 0;
    }
    uStack_3c = 0;
    uVar2 = 0x3d060;
    if (*(param_1 + 0x9b8) < 0x15) {
        uVar2 = 0x39060;
    }
    regmap_read(*(param_1 + 8),uVar2,&uStack_3c);
    uStack_3c = uStack_3c & 0xf00000fe | uVar15;
    puVar11 = uStack_3c;
    regmap_write(*(param_1 + 8),uVar2);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18 = sym.berc_event_filter_config;
    pcStack_68 = sym.berc_event_filter_config;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    if (auVar20._8_4_ == 2) {
        uVar15 = param_4 << 2;
        uVar2 = 0x3d000;
        if (*(iVar7 + 0x9b8) < 0x15) {
            uVar2 = 0x39000;
        }
        uStack_7c = 0;
        uVar13 = param_5;
        regmap_read(*(iVar7 + 8),uVar2,&uStack_7c);
        uVar15 = (puVar11 | uVar15) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        uStack_7c = uStack_7c & 0xfffffff0 | uVar15;
        puVar11 = uStack_7c;
        regmap_write(*(iVar7 + 8),uVar2);
        param_5 = uVar13;
    }
    else {
        _printk(0x800090a);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_00 = sym.trp_event_config;
    pcStack_c8 = sym.trp_event_config;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar17 = param_4;
    uStack_dc = 0;
    uVar15 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar13 = *(iVar7 + 0x920) & 0x20;
    uVar18 = *puVar11 * 4 + 0x24020;
    uVar16 = uVar15;
    if (uVar13 != 0) {
        uVar16 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar20._8_4_ | uVar13 << 0x1a;
    if ((param_4 & 1) == 0) {
        uVar15 = 0;
    }
    uVar13 = param_4;
    ppuStack_d0 = &puStack_70;
    regmap_read(*(iVar7 + 8),uVar18,&uStack_dc);
    uStack_dc = uStack_dc & (uVar16 ^ 0xffffffff) | uVar15 & uVar16;
    puVar12 = uStack_dc;
    regmap_write(*(iVar7 + 8),uVar18);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar14 = (uVar15 & 0x1f) << 0x10 | 0xc0000005;
        if ((param_4 & 1) == 0) {
            uVar14 = 0;
        }
        puVar12 = uVar14;
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_01 = sym.trp_event_filter_config;
    pcStack_108 = sym.trp_event_filter_config;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uVar15 = puVar12;
    pppuStack_110 = &ppuStack_d0;
    uStack_100 = uVar18;
    puStack_f8 = puVar11;
    uStack_f0 = uVar17;
    iStack_e8 = iVar7;
    switch(auVar21._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar8 + 0x9ac) == 2) {
            uVar15 = 1 << (uVar15 & 0x1f);
            uVar18 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar15 = 0xffffffff;
            }
            puVar11 = uVar15;
        }
        else {
            uVar15 = uVar15 | uVar13 << 8;
            if ((param_5 & 1) == 0) {
                uVar15 = 0;
            }
            puVar11 = uVar15;
            uVar18 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar15 = uVar13 << 0x1c | uVar15 << 0x18;
        uVar18 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        puVar11 = uVar15;
        break;
    case 3:
        uVar15 = uVar13 << 0x14 | uVar15 << 0x10;
        uVar18 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        puVar11 = uVar15;
        break;
    case 7:
        if (*(iVar8 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar18 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar15 = 0xffffffff;
        }
        puVar11 = uVar15;
    }
    if ((*(iVar8 + 0x9ac) == 2) && ((auVar21._8_4_ == 7 || (auVar21._8_4_ == 0)))) {
        uVar19 = 0x24008;
        uStack_11c = 0;
        regmap_read(*(iVar8 + 8),0x24008,&uStack_11c);
        uVar9 = *(iVar8 + 8);
        uVar17 = uVar19;
    }
    else {
        uStack_11c = 0;
        regmap_read(*(iVar8 + 8),0x24004,&uStack_11c);
        uVar9 = *(iVar8 + 8);
        uVar19 = 0x24004;
    }
    uStack_11c = uStack_11c & (uVar18 ^ 0xffffffff) | puVar11 & uVar18;
    puVar12 = uStack_11c;
    regmap_write(uVar9,uVar19);
code_r0x080048e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_02 = sym.drp_event_config;
    pcStack_158 = sym.drp_event_config;
    uStack_148 = 0x24020;
    iVar5 = sp_el0;
    iStack_168 = *(iVar5 + 0x5e0);
    uStack_16c = 0;
    uVar15 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar14 = *(iVar7 + 0x920) & 0x40;
    uVar3 = uVar15;
    if (uVar14 != 0) {
        uVar3 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar20._8_4_ | uVar14 << 0x19;
    if ((uVar13 & 1) == 0) {
        uVar15 = 0;
    }
    iVar4 = 0x51010;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar19 = iVar4 + *puVar12 * 4;
    uVar14 = uVar13;
    ppppuStack_160 = &pppuStack_110;
    uStack_150 = uVar16;
    uStack_140 = uVar18;
    puStack_138 = puVar11;
    uStack_130 = uVar17;
    iStack_128 = iVar8;
    regmap_read(*(iVar7 + 8),uVar19,&uStack_16c);
    uStack_16c = uStack_16c & (uVar3 ^ 0xffffffff) | uVar15 & uVar3;
    regmap_write(*(iVar7 + 8),uVar19);
    uVar16 = *puVar12;
    if (uVar16 < 0x10) {
        uVar1 = (uVar16 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar13 & 1) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar16 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_168) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_03 = sym.drp_event_enable;
    pcStack_198 = sym.drp_event_enable;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar16 = 0x2001;
    if ((auVar21._8_8_ & 1) == 0) {
        uVar16 = 0;
    }
    uStack_1ac = 0;
    uVar1 = 0x51050;
    if (*(iVar8 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar17 = uVar1;
    ppppuStack_1a0 = &ppppuStack_160;
    puStack_190 = puVar12;
    uStack_180 = uVar13;
    iStack_178 = iVar7;
    regmap_read(*(iVar8 + 8),uVar17,&uStack_1ac);
    uStack_1ac = uStack_1ac & 0xffff00fe | uVar16;
    puVar11 = uStack_1ac;
    regmap_write(*(iVar8 + 8),uVar17);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_04 = sym.pmgr_event_config;
    pcStack_1e8 = sym.pmgr_event_config;
    iVar5 = sp_el0;
    iStack_1f8 = *(iVar5 + 0x5e0);
    uStack_1fc = 0;
    uVar13 = *(iVar7 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar13 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar13 = auVar20._8_4_ & 0x3f | uVar13 << 0x18;
    if ((uVar14 & 1) == 0) {
        uVar13 = 0;
    }
    iVar4 = 0x4d000;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x3f000;
    }
    iVar4 = iVar4 + *puVar11 * 4;
    ppppuStack_1f0 = &ppppuStack_1a0;
    uStack_1e0 = uVar15;
    uStack_1d8 = uVar3;
    uStack_1d0 = uVar19;
    uStack_1c8 = uVar16;
    uStack_1c0 = uVar17;
    iStack_1b8 = iVar8;
    regmap_read(*(iVar7 + 8),iVar4,&uStack_1fc);
    uStack_1fc = uStack_1fc & (uVar1 ^ 0xffffffff) | uVar13 & uVar1;
    regmap_write(*(iVar7 + 8),iVar4);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar13 = (uVar15 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar14 & 1) == 0) {
            uVar13 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4,uVar13);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar10 = auVar21._0_8_;
    *extraout_x18_05 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar21._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar6)();
}


// ===== sym.beac_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001278 (size 8) =====

void sym.beac_event_enable.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint64_t param_2,uint32_t *param_3,ulong param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t unaff_x20;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint32_t *unaff_x23;
    uint64_t unaff_x24;
    int iVar24;
    uint32_t *puVar25;
    ulong unaff_x30;
    uchar auVar26 [12];
    uchar auVar27 [16];
    uint32_t uStack_33c;
    int64_t iStack_338;
    ulong ****ppppuStack_330;
    code *pcStack_328;
    uint64_t uStack_320;
    uint64_t uStack_318;
    uint64_t uStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    int64_t iStack_2f8;
    uint32_t uStack_2ec;
    int64_t iStack_2e8;
    ulong ****ppppuStack_2e0;
    code *pcStack_2d8;
    uint32_t *puStack_2d0;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    uint32_t uStack_2ac;
    int64_t iStack_2a8;
    ulong ****ppppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint32_t *puStack_278;
    uint64_t uStack_270;
    int64_t iStack_268;
    uint32_t uStack_25c;
    int64_t iStack_258;
    ulong ****ppppuStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint32_t *puStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    uint32_t uStack_21c;
    int64_t iStack_218;
    ulong ****ppppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    uchar ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    uint32_t *puStack_160;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    uint64_t uStack_110;
    uint32_t *puStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t *puStack_d8;
    uint32_t uStack_d0;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar14 = param_4 >> 0x20;
    uVar11 = param_4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar15 = 0x4002001;
    if ((param_2 & 1) == 0) {
        uVar15 = 0;
    }
    puVar20 = uVar15;
    if (*(param_1 + 0x9a8) != 0) {
        iVar24 = 0;
        unaff_x23 = NULL;
        unaff_x24 = 0x49080;
        do {
            uStack_5c = 0;
            iVar1 = 0x61080;
            if (*(param_1 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            unaff_x20 = iVar1 + iVar24;
            regmap_read(*(param_1 + 8),unaff_x20,&uStack_5c);
            uStack_5c = uStack_5c & 0xf00000fe | uVar15;
            param_3 = uStack_5c;
            regmap_write(*(param_1 + 8),unaff_x20);
            uVar13 = unaff_x23 + 1;
            unaff_x23 = uVar13;
            iVar24 = iVar24 + 0x4000;
        } while (uVar13 < *(param_1 + 0x9a8));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar24 = auVar26._8_4_;
    iVar6 = auVar26._0_8_;
    *extraout_x18 = sym.beac_event_filter_config;
    pcStack_b8 = sym.beac_event_filter_config;
    iVar4 = sp_el0;
    uVar17 = CONCAT44(uVar14,uVar11);
    iStack_c8 = *(iVar4 + 0x5e0);
    uVar15 = param_5;
    puStack_c0 = &stack0xffffffffffffffb0;
    if (iVar24 == 1) {
        uVar17 = param_3 | uVar17 << 0x10;
        if ((param_5 & 1) == 0) {
            uVar17 = 0;
        }
        if (*(iVar6 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar14 = 0;
            unaff_x20 = 0x49008;
            do {
                uStack_cc = 0;
                iVar24 = 0x61008;
                if (*(iVar6 + 0x9b8) < 0x15) {
                    iVar24 = 0x49008;
                }
                unaff_x23 = iVar24 + unaff_x24;
                regmap_read(*(iVar6 + 8),unaff_x23,&uStack_cc);
                puVar10 = uVar17 & 0xffffffff;
                uStack_cc = uVar17;
                regmap_write(*(iVar6 + 8),unaff_x23);
                uVar13 = *(iVar6 + 0x9a8);
                uVar14 = uVar14 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                puVar20 = 0x61008;
            } while (uVar14 < uVar13);
code_r0x080042b8:
            uVar14 = param_3 << 1;
            if ((param_5 & 1) == 0) {
                uVar14 = uVar17;
            }
            param_3 = puVar10;
            param_5 = uVar15;
            if (uVar13 != 0) {
                puVar20 = NULL;
                uVar17 = 0;
                unaff_x23 = uVar14 & 6;
                do {
                    uStack_cc = 0;
                    iVar24 = 0x61080;
                    if (*(iVar6 + 0x9b8) < 0x15) {
                        iVar24 = 0x49080;
                    }
                    unaff_x20 = iVar24 + puVar20;
                    regmap_read(*(iVar6 + 8),unaff_x20,&uStack_cc);
                    uStack_cc = uStack_cc & 0xfffffff9 | uVar14 & 6;
                    param_3 = uStack_cc;
                    regmap_write(*(iVar6 + 8),unaff_x20);
                    uVar15 = uVar17 + 1;
                    uVar17 = uVar15;
                    puVar20 = puVar20 + 0x4000;
                    unaff_x24 = 0x61080;
                } while (uVar15 < *(iVar6 + 0x9a8));
            }
        }
    }
    else if (iVar24 == 9) {
        uVar15 = param_3;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        unaff_x23 = uVar15;
        uVar13 = 0;
        uVar12 = uVar11;
        puVar25 = param_3;
        uVar16 = param_5;
        if (*(iVar6 + 0x9a8) != 0) {
            iVar24 = 0;
            uVar13 = 0;
            uVar3 = 0x49010;
            uVar16 = 0x61010;
            puStack_d8 = param_3;
            uStack_d0 = param_5;
            do {
                uStack_cc = 0;
                uVar2 = uVar16;
                if (*(iVar6 + 0x9b8) < 0x15) {
                    uVar2 = uVar3;
                }
                regmap_read(*(iVar6 + 8),uVar2 + iVar24,&uStack_cc);
                param_3 = unaff_x23;
                uStack_cc = uVar15;
                regmap_write(*(iVar6 + 8),uVar2 + iVar24);
                uVar13 = uVar13 + 1;
                iVar24 = iVar24 + 0x4000;
            } while (uVar13 < *(iVar6 + 0x9a8));
            if ((uStack_d0 & 1) == 0) {
                uVar11 = 0;
            }
            unaff_x23 = uVar11;
            uVar13 = 0;
            if (*(iVar6 + 0x9a8) != 0) {
                iVar24 = 0;
                uVar15 = 0;
                uVar3 = 0x4900c;
                uVar16 = 0x6100c;
                do {
                    uStack_cc = 0;
                    uVar13 = uVar16;
                    if (*(iVar6 + 0x9b8) < 0x15) {
                        uVar13 = uVar3;
                    }
                    regmap_read(*(iVar6 + 8),uVar13 + iVar24,&uStack_cc);
                    param_3 = unaff_x23;
                    uStack_cc = uVar11;
                    regmap_write(*(iVar6 + 8),uVar13 + iVar24);
                    uVar13 = *(iVar6 + 0x9a8);
                    uVar15 = uVar15 + 1;
                    iVar24 = iVar24 + 0x4000;
                } while (uVar15 < uVar13);
            }
            puVar20 = uVar16;
            unaff_x20 = uVar3;
            puVar25 = puStack_d8;
            uVar16 = uStack_d0;
        }
        if ((uVar16 & 1) == 0) {
            uVar17 = 0;
        }
        else {
            uVar17 = ((uVar14 & 0xf) << 0x20) >> 0x1c | puVar25 >> 0x20 & 0xf;
            puVar25 = puVar25 >> 0x20 & 0xf;
        }
        uVar11 = uVar12;
        unaff_x24 = uVar17;
        if (uVar13 != 0) {
            unaff_x20 = 0;
            puVar20 = NULL;
            uVar15 = param_5;
            do {
                uStack_cc = 0;
                iVar24 = 0x61014;
                if (*(iVar6 + 0x9b8) < 0x15) {
                    iVar24 = 0x49014;
                }
                unaff_x23 = iVar24 + unaff_x20;
                regmap_read(*(iVar6 + 8),unaff_x23,&uStack_cc);
                uStack_cc = uStack_cc & 0xfffffe00 | uVar17;
                puVar10 = uStack_cc;
                regmap_write(*(iVar6 + 8),unaff_x23);
                uVar13 = *(iVar6 + 0x9a8);
                uVar14 = puVar20 + 1;
                puVar20 = uVar14;
                unaff_x20 = unaff_x20 + 0x4000;
                param_3 = puVar25;
                param_5 = uVar16;
            } while (uVar14 < uVar13);
            goto code_r0x080042b8;
        }
    }
    else if (iVar24 == 2) {
        uVar17 = uVar17 << 0xe | param_3 << 0xc;
        if ((param_5 & 1) == 0) {
            uVar17 = 0;
        }
        if (*(iVar6 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar14 = 0;
            unaff_x20 = 0x61014;
            do {
                uStack_cc = 0;
                iVar24 = 0x61014;
                if (*(iVar6 + 0x9b8) < 0x15) {
                    iVar24 = 0x49014;
                }
                unaff_x23 = iVar24 + unaff_x24;
                regmap_read(*(iVar6 + 8),unaff_x23,&uStack_cc);
                uStack_cc = uStack_cc & 0xffff0fff | uVar17 & 0xf000;
                puVar10 = uStack_cc;
                regmap_write(*(iVar6 + 8),unaff_x23);
                uVar13 = *(iVar6 + 0x9a8);
                uVar14 = uVar14 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                puVar20 = param_3;
            } while (uVar14 < uVar13);
            goto code_r0x080042b8;
        }
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar7 = auVar26._0_8_;
    *extraout_x18_00 = sym.berc_event_config;
    pcStack_128 = sym.berc_event_config;
    uStack_120 = 0x49014;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uStack_13c = 0;
    uVar15 = *(iVar7 + 0x920) & 0x10;
    uVar14 = 0x3f;
    if (uVar15 != 0) {
        uVar14 = 0x8001003f;
    }
    uVar15 = auVar26._8_4_ & 0x3f | uVar15 << 0x1b;
    if ((uVar11 & 1) == 0) {
        uVar15 = 0;
    }
    iVar24 = 0x3d020;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar24 = 0x39020;
    }
    uVar22 = iVar24 + *param_3 * 4;
    uVar12 = uVar11;
    ppuStack_130 = &puStack_c0;
    uStack_110 = unaff_x24;
    puStack_108 = unaff_x23;
    uStack_100 = uVar17;
    puStack_f8 = puVar20;
    uStack_f0 = unaff_x20;
    iStack_e8 = iVar6;
    regmap_read(*(iVar7 + 8),uVar22,&uStack_13c);
    uStack_13c = uStack_13c & (uVar14 ^ 0xffffffff) | uVar15 & uVar14;
    regmap_write(*(iVar7 + 8),uVar22);
    uVar13 = *param_3;
    if (uVar13 < 0x10) {
        uVar16 = (uVar13 & 0x1f) << 0x10 | 0xc0000004;
        if ((uVar11 & 1) == 0) {
            uVar16 = 0;
        }
        iVar24 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar24 + uVar13 * 4,uVar16);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar17 = auVar27._0_8_;
    *extraout_x18_01 = sym.berc_event_enable;
    pcStack_168 = sym.berc_event_enable;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uVar13 = 0x4002001;
    if ((auVar27._8_8_ & 1) == 0) {
        uVar13 = 0;
    }
    uVar21 = uVar13;
    uStack_17c = 0;
    uVar16 = 0x3d060;
    if (*(uVar17 + 0x9b8) < 0x15) {
        uVar16 = 0x39060;
    }
    uVar18 = uVar16;
    pppuStack_170 = &ppuStack_130;
    puStack_160 = param_3;
    uStack_150 = uVar11;
    iStack_148 = iVar7;
    regmap_read(*(uVar17 + 8),uVar18,&uStack_17c);
    uStack_17c = uStack_17c & 0xf00000fe | uVar13;
    puVar20 = uStack_17c;
    regmap_write(*(uVar17 + 8),uVar18);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar19 = auVar26._0_8_;
    *extraout_x18_02 = sym.berc_event_filter_config;
    pcStack_1a8 = sym.berc_event_filter_config;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    ppppuStack_1b0 = &pppuStack_170;
    uStack_1a0 = uVar22;
    uStack_198 = uVar21;
    uStack_190 = uVar18;
    uStack_188 = uVar17;
    if (auVar26._8_4_ == 2) {
        uVar13 = puVar20 | uVar12 << 2;
        uVar11 = 0x3d000;
        if (*(uVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x39000;
        }
        uVar21 = uVar11;
        uVar17 = param_5;
        uStack_1bc = 0;
        uVar16 = param_5;
        regmap_read(*(uVar19 + 8),uVar21,&uStack_1bc);
        uVar11 = uVar13 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_1bc = uStack_1bc & 0xfffffff0 | uVar11;
        puVar20 = uStack_1bc;
        regmap_write(*(uVar19 + 8),uVar21);
        param_5 = uVar16;
        uVar18 = uVar19;
        uVar22 = uVar13;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_03 = sym.trp_event_config;
    pcStack_208 = sym.trp_event_config;
    uStack_1e8 = 0x31020;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    uVar19 = uVar12;
    uStack_21c = 0;
    uVar11 = 0x7f;
    if (*(iVar6 + 0x9ac) != 2) {
        uVar11 = 0x3f;
    }
    uVar13 = *(iVar6 + 0x920) & 0x20;
    uVar23 = *puVar20 * 4 + 0x24020;
    uVar16 = uVar11;
    if (uVar13 != 0) {
        uVar16 = uVar11 | 0x80010000;
    }
    uVar11 = uVar11 & auVar26._8_4_ | uVar13 << 0x1a;
    if ((uVar12 & 1) == 0) {
        uVar11 = 0;
    }
    uVar13 = uVar12;
    ppppuStack_210 = &ppppuStack_1b0;
    uStack_200 = uVar15;
    uStack_1f0 = uVar14;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar21;
    uStack_1d0 = uVar18;
    uStack_1c8 = uVar17;
    regmap_read(*(iVar6 + 8),uVar23,&uStack_21c);
    uStack_21c = uStack_21c & (uVar16 ^ 0xffffffff) | uVar11 & uVar16;
    puVar10 = uStack_21c;
    regmap_write(*(iVar6 + 8),uVar23);
    uVar15 = *puVar20;
    if (uVar15 < 0x10) {
        uVar11 = (uVar15 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar12 & 1) == 0) {
            uVar11 = 0;
        }
        puVar10 = uVar11;
        iVar24 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar6 + 8),iVar24 + uVar15 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_04 = sym.trp_event_filter_config;
    pcStack_248 = sym.trp_event_filter_config;
    iVar4 = sp_el0;
    iStack_258 = *(iVar4 + 0x5e0);
    uVar15 = puVar10;
    ppppuStack_250 = &ppppuStack_210;
    uStack_240 = uVar23;
    puStack_238 = puVar20;
    uStack_230 = uVar19;
    iStack_228 = iVar6;
    switch(auVar27._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar7 + 0x9ac) == 2) {
            uVar15 = 1 << (uVar15 & 0x1f);
            uVar23 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar15 = 0xffffffff;
            }
            puVar20 = uVar15;
        }
        else {
            uVar15 = uVar15 | uVar13 << 8;
            if ((param_5 & 1) == 0) {
                uVar15 = 0;
            }
            puVar20 = uVar15;
            uVar23 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar15 = uVar13 << 0x1c | uVar15 << 0x18;
        uVar23 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        puVar20 = uVar15;
        break;
    case 3:
        uVar15 = uVar13 << 0x14 | uVar15 << 0x10;
        uVar23 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        puVar20 = uVar15;
        break;
    case 7:
        if (*(iVar7 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar23 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar15 = 0xffffffff;
        }
        puVar20 = uVar15;
    }
    if ((*(iVar7 + 0x9ac) == 2) && ((auVar27._8_4_ == 7 || (auVar27._8_4_ == 0)))) {
        uVar17 = 0x24008;
        uStack_25c = 0;
        regmap_read(*(iVar7 + 8),0x24008,&uStack_25c);
        uVar8 = *(iVar7 + 8);
        uVar19 = uVar17;
    }
    else {
        uStack_25c = 0;
        regmap_read(*(iVar7 + 8),0x24004,&uStack_25c);
        uVar8 = *(iVar7 + 8);
        uVar17 = 0x24004;
    }
    uStack_25c = uStack_25c & (uVar23 ^ 0xffffffff) | puVar20 & uVar23;
    puVar10 = uStack_25c;
    regmap_write(uVar8,uVar17);
code_r0x080048e8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_258) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_05 = sym.drp_event_config;
    pcStack_298 = sym.drp_event_config;
    uStack_288 = 0x24020;
    iVar4 = sp_el0;
    iStack_2a8 = *(iVar4 + 0x5e0);
    uStack_2ac = 0;
    uVar15 = 0x7f;
    if (*(iVar6 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar11 = *(iVar6 + 0x920) & 0x40;
    uVar14 = uVar15;
    if (uVar11 != 0) {
        uVar14 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar26._8_4_ | uVar11 << 0x19;
    if ((uVar13 & 1) == 0) {
        uVar15 = 0;
    }
    iVar24 = 0x51010;
    if (*(iVar6 + 0x9b8) < 0x15) {
        iVar24 = 0x44010;
    }
    uVar17 = iVar24 + *puVar10 * 4;
    uVar12 = uVar13;
    ppppuStack_2a0 = &ppppuStack_250;
    uStack_290 = uVar16;
    uStack_280 = uVar23;
    puStack_278 = puVar20;
    uStack_270 = uVar19;
    iStack_268 = iVar7;
    regmap_read(*(iVar6 + 8),uVar17,&uStack_2ac);
    uStack_2ac = uStack_2ac & (uVar14 ^ 0xffffffff) | uVar15 & uVar14;
    regmap_write(*(iVar6 + 8),uVar17);
    uVar11 = *puVar10;
    if (uVar11 < 0x10) {
        uVar16 = (uVar11 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar13 & 1) == 0) {
            uVar16 = 0;
        }
        iVar24 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar6 + 8),iVar24 + uVar11 * 4,uVar16);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_06 = sym.drp_event_enable;
    pcStack_2d8 = sym.drp_event_enable;
    iVar4 = sp_el0;
    iStack_2e8 = *(iVar4 + 0x5e0);
    uVar11 = 0x2001;
    if ((auVar27._8_8_ & 1) == 0) {
        uVar11 = 0;
    }
    uStack_2ec = 0;
    uVar16 = 0x51050;
    if (*(iVar7 + 0x9b8) < 0x15) {
        uVar16 = 0x44050;
    }
    uVar22 = uVar16;
    ppppuStack_2e0 = &ppppuStack_2a0;
    puStack_2d0 = puVar10;
    uStack_2c0 = uVar13;
    iStack_2b8 = iVar6;
    regmap_read(*(iVar7 + 8),uVar22,&uStack_2ec);
    uStack_2ec = uStack_2ec & 0xffff00fe | uVar11;
    puVar20 = uStack_2ec;
    regmap_write(*(iVar7 + 8),uVar22);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_07 = sym.pmgr_event_config;
    pcStack_328 = sym.pmgr_event_config;
    iVar4 = sp_el0;
    iStack_338 = *(iVar4 + 0x5e0);
    uStack_33c = 0;
    uVar13 = *(iVar6 + 0x920) & 0x80;
    uVar16 = 0x3f;
    if (uVar13 != 0) {
        uVar16 = 0x8001003f;
    }
    uVar13 = auVar26._8_4_ & 0x3f | uVar13 << 0x18;
    if ((uVar12 & 1) == 0) {
        uVar13 = 0;
    }
    iVar24 = 0x4d000;
    if (*(iVar6 + 0x9b8) < 0x15) {
        iVar24 = 0x3f000;
    }
    iVar24 = iVar24 + *puVar20 * 4;
    ppppuStack_330 = &ppppuStack_2e0;
    uStack_320 = uVar15;
    uStack_318 = uVar14;
    uStack_310 = uVar17;
    uStack_308 = uVar11;
    uStack_300 = uVar22;
    iStack_2f8 = iVar7;
    regmap_read(*(iVar6 + 8),iVar24,&uStack_33c);
    uStack_33c = uStack_33c & (uVar16 ^ 0xffffffff) | uVar13 & uVar16;
    regmap_write(*(iVar6 + 8),iVar24);
    uVar15 = *puVar20;
    if (uVar15 < 0x10) {
        uVar11 = (uVar15 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar12 & 1) == 0) {
            uVar11 = 0;
        }
        iVar24 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar6 + 8),iVar24 + uVar15 * 4,uVar11);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_338) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar9 = auVar27._0_8_;
    *extraout_x18_08 = sym.__cfi_check_fail;
    if (puVar9 != NULL) {
        switch(*puVar9) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar9,auVar27._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar5)();
}


// ===== sym.__typeid__ZTSFvP20llcc_perfmon_privatejPjbE_global_addr @ 0x08001280 (size 8) =====

void sym.__typeid__ZTSFvP20llcc_perfmon_privatejPjbE_global_addr
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint uVar14;
    uint32_t uVar15;
    int iVar16;
    int64_t iVar17;
    uint32_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int64_t iVar19;
    uint32_t *puVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    uint32_t *puVar23;
    uint64_t uVar24;
    uint32_t *puVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint32_t uVar29;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [12];
    uint32_t uStack_2dc;
    int64_t iStack_2d8;
    ulong ****ppppuStack_2d0;
    code *pcStack_2c8;
    uint32_t uStack_26c;
    int64_t iStack_268;
    ulong ****ppppuStack_260;
    code *pcStack_258;
    uint64_t uStack_250;
    uint32_t *puStack_248;
    uint64_t uStack_240;
    int64_t iStack_238;
    uint32_t uStack_22c;
    int64_t iStack_228;
    ulong ****ppppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    uint64_t uStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint32_t uStack_1cc;
    int64_t iStack_1c8;
    ulong ****ppppuStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint32_t uStack_18c;
    int64_t iStack_188;
    uchar ****ppppuStack_180;
    code *pcStack_178;
    uint32_t *puStack_170;
    uint64_t uStack_160;
    int64_t iStack_158;
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    ulong uStack_130;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint32_t *puStack_110;
    uint32_t *puStack_108;
    uint32_t *puStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    uint32_t *puStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    uVar14 = param_4 >> 0x20;
    uVar10 = param_4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    uVar18 = 0x7f;
    if (*(param_1 + 0x9ac) != 2) {
        uVar18 = 0x3f;
    }
    uVar11 = uVar18;
    if ((*(param_1 + 0x920) & 1) != 0) {
        uVar11 = uVar18 | 0x80010000;
    }
    uVar27 = uVar11;
    uVar18 = uVar18 & param_2 | *(param_1 + 0x920) << 0x1f;
    if ((param_4 & 1) == 0) {
        uVar18 = 0;
    }
    uVar28 = uVar18;
    iVar16 = 0x43060;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar16 = 0x37060;
    }
    uVar24 = iVar16 + *param_3 * 4;
    regmap_read(*(param_1 + 8),uVar24,&uStack_4c);
    uStack_4c = uStack_4c & (uVar11 ^ 0xffffffff) | uVar18 & uVar11;
    regmap_write(*(param_1 + 8),uVar24);
    uVar18 = *param_3;
    if (uVar18 < 0x10) {
        uVar11 = (uVar18 & 0x1f) << 0x10 | 0xc0000000;
        if ((param_4 & 1) == 0) {
            uVar11 = 0;
        }
        iVar16 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar16 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar16 + uVar18 * 4,uVar11);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar17 = auVar30._0_8_;
    *extraout_x18 = sym.feac_event_enable;
    pcStack_78 = sym.feac_event_enable;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    puVar23 = 0xfffff01;
    if ((auVar30._8_8_ & 1) == 0) {
        puVar25 = NULL;
        if ((*(iVar17 + 0x920) & 1) != 0) {
            iVar16 = *(iVar17 + 0x9ac);
            goto code_r0x080032a4;
        }
    }
    else {
        puVar25 = 0x4002001;
        if ((*(iVar17 + 0x920) & 1) != 0) {
            iVar16 = *(iVar17 + 0x9ac);
            uVar18 = 0x4002003;
            if (iVar16 != 0) {
                uVar18 = 0x1400202b;
            }
            puVar25 = uVar18;
code_r0x080032a4:
            uVar18 = 0xfffff07;
            if (iVar16 != 0) {
                uVar18 = 0x3fffff7f;
            }
            puVar23 = uVar18;
        }
    }
    uStack_8c = 0;
    uVar18 = 0x430a0;
    if (*(iVar17 + 0x9b8) < 0x15) {
        uVar18 = 0x370a0;
    }
    puVar20 = uVar18;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = uVar24;
    puStack_68 = param_3;
    uStack_60 = param_4 & 0xffffffff;
    iStack_58 = param_1;
    regmap_read(*(iVar17 + 8),puVar20,&uStack_8c);
    uStack_8c = uStack_8c & (puVar23 ^ 0xffffffff) | puVar23 & puVar25;
    puVar8 = uStack_8c;
    regmap_write(*(iVar17 + 8),puVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar19 = auVar30._0_8_;
    *extraout_x18_00 = sym.feac_event_filter_config;
    pcStack_d8 = sym.feac_event_filter_config;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    ppuStack_e0 = &puStack_80;
    if (9 < auVar30._8_4_) {
code_r0x08003754:
        _printk(0x800090a);
        puVar9 = puVar8;
        iVar19 = iVar17;
        goto code_r0x08003718;
    }
    puVar20 = param_5;
    puVar25 = CONCAT44(uVar14,uVar10);
    uVar18 = puVar8;
    iVar17 = iVar19;
    puVar23 = puVar8;
    switch(auVar30._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar19 + 0x9ac) == 0) {
            puVar20 = puVar8 | puVar25 << 0x10;
            if ((param_5 & 1) == 0) {
                puVar20 = NULL;
            }
        }
        else {
            puVar20 = 1 << (uVar18 & 0x1f);
            if ((param_5 & 1) == 0) {
                puVar20 = 0xffffffff;
            }
        }
        uVar18 = 0x43018;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar18 = 0x37018;
        }
        puVar21 = uVar18;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        puVar9 = puVar20 & 0xffffffff;
        goto code_r0x08003710;
    case 1:
        uVar18 = uVar18 | uVar10 << 0x10;
        if ((param_5 & 1) == 0) {
            uVar18 = 0;
        }
        uVar11 = 0x43014;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x37014;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        goto code_r0x08003458;
    default:
        goto code_r0x08003754;
    case 4:
        uVar18 = uVar10 << 0x1c | uVar18 << 0x18;
        if ((param_5 & 1) == 0) {
            uVar18 = 0;
        }
        uVar11 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar18 = uVar18 | uStack_ec & 0xffffff;
code_r0x08003458:
        puVar9 = uVar18;
        uVar7 = *(iVar19 + 8);
        puVar20 = puVar9;
code_r0x08003710:
        uStack_ec = puVar20;
        puVar23 = puVar21;
        goto code_r0x08003714;
    case 5:
        uVar18 = uVar10 << 0x10 | uVar18 << 0xc;
        puVar25 = uVar18;
        uVar11 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = param_5;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar18 = uVar18 & 0xff000;
        bVar6 = (param_5 & 1) == 0;
        uStack_ec = uStack_ec & 0xfff00fff;
        param_5 = uVar11;
        break;
    case 6:
        uVar18 = uVar10 << 0xc | uVar18 << 10;
        puVar25 = uVar18;
        uVar11 = 0x4301c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = param_5;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar18 = uVar18 & 0x7c00;
        bVar6 = (param_5 & 1) == 0;
        uStack_ec = uStack_ec & 0xffff83ff;
        param_5 = uVar11;
        break;
    case 7:
        uVar11 = 0x43018;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x37018;
        }
        puVar21 = uVar11;
        uVar11 = *(iVar19 + 0x9ac);
        uVar27 = uVar11;
        if ((param_5 & 1) == 0) {
            uVar18 = 0xffffffff;
        }
        puVar20 = uVar18;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        if (uVar11 != 0) {
            uStack_ec = uVar18;
        }
        puVar9 = uStack_ec;
        puVar25 = puVar21;
        goto code_r0x080036b8;
    case 8:
        uVar18 = uVar18 | uVar10 << 1;
        puVar25 = uVar18;
        uVar11 = 0x4301c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = param_5;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar18 = uVar18 & 7;
        bVar6 = (param_5 & 1) == 0;
        uStack_ec = uStack_ec & 0xfffffff8;
        param_5 = uVar11;
        break;
    case 9:
        uVar14 = 0x43004;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar14 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_ec = 0;
        uVar11 = uVar10;
        uVar15 = param_5;
        regmap_read(*(iVar19 + 8),uVar14,&uStack_ec);
        uStack_ec = uVar18;
        if ((param_5 & 1) == 0) {
            uStack_ec = 0;
            uVar10 = 0;
        }
        regmap_write(*(iVar19 + 8),uVar14);
        uStack_ec = 0;
        uVar18 = 0x43008;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar18 = 0x37008;
        }
        uVar28 = uVar18;
        regmap_read(*(iVar19 + 8),uVar28,&uStack_ec);
        uStack_ec = uVar10;
        regmap_write(*(iVar19 + 8),uVar28,uVar10);
        uVar27 = 0;
        if ((param_5 & 1) != 0) {
            uVar27 = puVar25 >> 0x1c & 0xf0 | puVar8 >> 0x20 & 0xf;
        }
        uStack_ec = 0;
        uVar18 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar18 = 0x3700c;
        }
        puVar21 = uVar18;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        puVar9 = uStack_ec & 0xfffffe00 | uVar27;
        uVar10 = uVar11;
        param_5 = uVar15;
        puVar20 = puVar21;
        goto code_r0x080036b8;
    }
    if (bVar6) {
        uVar18 = 0;
    }
    uVar7 = *(iVar19 + 8);
    puVar9 = uStack_ec | uVar18;
    puVar8 = puVar21;
code_r0x080036b8:
    uStack_ec = puVar9;
    puVar23 = puVar8;
code_r0x08003714:
    regmap_write(uVar7,puVar21);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar17 = auVar31._0_8_;
    *extraout_x18_01 = sym.ferc_event_config;
    pcStack_138 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    uStack_14c = 0;
    uVar18 = *(iVar17 + 0x920) & 2;
    uVar11 = 0x3f;
    if (uVar18 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar18 = auVar31._8_4_ | uVar18 << 0x1e;
    if ((uVar10 & 1) == 0) {
        uVar18 = 0;
    }
    iVar16 = 0x49020;
    if (*(iVar17 + 0x9b8) < 0x15) {
        iVar16 = 0x3b020;
    }
    uVar24 = iVar16 + *puVar9 * 4;
    uVar12 = uVar10;
    pppuStack_140 = &ppuStack_e0;
    uStack_130 = unaff_x25;
    uStack_120 = uVar28;
    uStack_118 = uVar27;
    puStack_110 = puVar25;
    puStack_108 = puVar23;
    puStack_100 = puVar20;
    iStack_f8 = iVar19;
    regmap_read(*(iVar17 + 8),uVar24,&uStack_14c);
    uStack_14c = uStack_14c & (uVar11 ^ 0xffffffff) | uVar18 & uVar11;
    regmap_write(*(iVar17 + 8),uVar24);
    uVar15 = *puVar9;
    if (uVar15 < 0x10) {
        uVar13 = (uVar15 & 0x1f) << 0x10 | 0xc0000001;
        if ((uVar10 & 1) == 0) {
            uVar13 = 0;
        }
        iVar16 = 0x36020;
        if (*(iVar17 + 0x9b8) < 0x15) {
            iVar16 = 0x31020;
        }
        regmap_write(*(iVar17 + 8),iVar16 + uVar15 * 4,uVar13);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar27 = auVar30._0_8_;
    *extraout_x18_02 = sym.ferc_event_enable;
    pcStack_178 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    uVar15 = 0x4002001;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uVar28 = uVar15;
    uStack_18c = 0;
    uVar13 = 0x49060;
    if (*(uVar27 + 0x9b8) < 0x15) {
        uVar13 = 0x3b060;
    }
    uVar22 = uVar13;
    ppppuStack_180 = &pppuStack_140;
    puStack_170 = puVar9;
    uStack_160 = uVar10;
    iStack_158 = iVar17;
    regmap_read(*(uVar27 + 8),uVar22,&uStack_18c);
    uStack_18c = uStack_18c & 0xf00000fe | uVar15;
    puVar23 = uStack_18c;
    regmap_write(*(uVar27 + 8),uVar22);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar26 = auVar31._0_8_;
    *extraout_x18_03 = sym.ferc_event_filter_config;
    pcStack_1b8 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_1c8 = *(iVar4 + 0x5e0);
    ppppuStack_1c0 = &ppppuStack_180;
    uStack_1b0 = uVar24;
    uStack_1a8 = uVar28;
    uStack_1a0 = uVar22;
    uStack_198 = uVar27;
    if (auVar31._8_4_ == 2) {
        uVar15 = puVar23 | uVar12 << 2;
        uVar10 = 0x49000;
        if (*(uVar26 + 0x9b8) < 0x15) {
            uVar10 = 0x3b000;
        }
        uVar28 = uVar10;
        uVar27 = param_5;
        uStack_1cc = 0;
        uVar13 = param_5;
        regmap_read(*(uVar26 + 8),uVar28,&uStack_1cc);
        uVar10 = uVar15 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar10 = 0;
        }
        uStack_1cc = uStack_1cc & 0xfffffff0 | uVar10;
        puVar23 = uStack_1cc;
        regmap_write(*(uVar26 + 8),uVar28);
        param_5 = uVar13;
        uVar22 = uVar26;
        uVar24 = uVar15;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar17 = auVar31._0_8_;
    *extraout_x18_04 = sym.fewc_event_config;
    pcStack_218 = sym.fewc_event_config;
    uStack_1f8 = 0x31020;
    iVar4 = sp_el0;
    iStack_228 = *(iVar4 + 0x5e0);
    uStack_22c = 0;
    uVar10 = *(iVar17 + 0x920) & 4;
    uVar15 = 0x3f;
    if (uVar10 != 0) {
        uVar15 = 0x8001003f;
    }
    uVar10 = auVar31._8_4_ & 0x3f | uVar10 << 0x1d;
    if ((uVar12 & 1) == 0) {
        uVar10 = 0;
    }
    iVar16 = 0x39020;
    if (*(iVar17 + 0x9b8) < 0x15) {
        iVar16 = 0x33020;
    }
    uVar26 = iVar16 + *puVar23 * 4;
    uVar13 = uVar12;
    ppppuStack_220 = &ppppuStack_1c0;
    uStack_210 = uVar18;
    uStack_200 = uVar11;
    uStack_1f0 = uVar24;
    uStack_1e8 = uVar28;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar27;
    regmap_read(*(iVar17 + 8),uVar26,&uStack_22c);
    uStack_22c = uStack_22c & (uVar15 ^ 0xffffffff) | uVar10 & uVar15;
    puVar25 = uStack_22c;
    regmap_write(*(iVar17 + 8),uVar26);
    uVar18 = *puVar23;
    if (uVar18 < 0x10) {
        uVar10 = (uVar18 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar12 & 1) == 0) {
            uVar10 = 0;
        }
        puVar25 = uVar10;
        iVar16 = 0x36020;
        if (*(iVar17 + 0x9b8) < 0x15) {
            iVar16 = 0x31020;
        }
        regmap_write(*(iVar17 + 8),iVar16 + uVar18 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_228) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar19 = auVar31._0_8_;
    *extraout_x18_05 = sym.fewc_event_filter_config;
    pcStack_258 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_268 = *(iVar4 + 0x5e0);
    ppppuStack_260 = &ppppuStack_220;
    uStack_250 = uVar26;
    puStack_248 = puVar23;
    uStack_240 = uVar12;
    iStack_238 = iVar17;
    if (auVar31._8_4_ == 2) {
        uVar18 = uVar13 << 2;
        uVar14 = 0x39000;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar14 = 0x33000;
        }
        uStack_26c = 0;
        regmap_read(*(iVar19 + 8),uVar14,&uStack_26c);
        uVar18 = (puVar25 | uVar18) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar18 = 0;
        }
        uStack_26c = uStack_26c & 0xfffffff0 | uVar18;
        puVar25 = uStack_26c;
        regmap_write(*(iVar19 + 8),uVar14);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_268) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar18 = auVar31._8_4_;
    iVar17 = auVar31._0_8_;
    *extraout_x18_06 = sym.beac_event_config;
    pcStack_2c8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_2d8 = *(iVar4 + 0x5e0);
    if ((*(iVar17 + 0x920) >> 3 & 1) == 0) {
        uVar15 = uVar18 & 0x3f;
        uVar10 = 0;
        if ((uVar13 & 1) == 0) {
            uVar15 = 0;
        }
        uVar11 = 0x3f;
        iVar16 = *(iVar17 + 0x9a8);
joined_r0x08003ce0:
        uVar12 = 0;
    }
    else {
        uVar11 = 0x8001003f;
        uVar10 = 0x78;
        if (*(iVar17 + 0x9ac) != 2) {
            uVar10 = 0;
        }
        if ((uVar13 & 1) == 0) {
            uVar15 = 0;
            iVar16 = *(iVar17 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar15 = uVar18 & 0x3f | 0x80000000;
        uVar12 = 0x28;
        if (*(iVar17 + 0x9ac) != 2) {
            uVar12 = 0;
        }
        iVar16 = *(iVar17 + 0x9a8);
    }
    ppppuStack_2d0 = &ppppuStack_260;
    if (iVar16 != 0) {
        iVar16 = 0;
        uVar29 = 0;
        do {
            uStack_2dc = 0;
            iVar1 = 0x61040;
            if (*(iVar17 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar16 + iVar1 + (uVar29 + *puVar25) * 4;
            regmap_read(*(iVar17 + 8),iVar1,&uStack_2dc);
            uStack_2dc = uStack_2dc & ~uVar11 | uVar15 & uVar11;
            regmap_write(*(iVar17 + 8),iVar1);
            uStack_2dc = 0;
            iVar1 = 0x61080;
            if (*(iVar17 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar17 + 8),iVar1 + iVar16,&uStack_2dc);
            uStack_2dc = uStack_2dc & ~uVar10 | uVar12 & uVar10;
            regmap_write(*(iVar17 + 8),iVar1 + iVar16);
            uVar3 = *puVar25;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar17 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar17 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar29 == 1) && (uVar3 = *puVar25 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar17 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar17 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar29 = uVar29 + 1;
            iVar16 = iVar16 + 0x4000;
        } while (uVar29 < *(iVar17 + 0x9a8));
        if (1 < *(iVar17 + 0x9a8)) {
            uVar10 = *puVar25;
            *puVar25 = uVar10 + 1;
            if (0x10 < uVar10) goto code_r0x08003edc;
            iVar17 = iVar17 + uVar10 * 0x88;
            uVar14 = 3;
            if ((uVar13 & 1) == 0) {
                uVar14 = 8;
                uVar18 = 100;
            }
            *(iVar17 + 0x98) = uVar14;
            *(iVar17 + 0x9c) = uVar18;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2d8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.pmgr_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001288 (size 8) =====

void sym.pmgr_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    uVar1 = *(param_1 + 0x920) & 0x80;
    uVar2 = 0x3f;
    if (uVar1 != 0) {
        uVar2 = 0x8001003f;
    }
    uVar1 = param_2 & 0x3f | uVar1 << 0x18;
    if ((param_4 & 1) == 0) {
        uVar1 = 0;
    }
    iVar3 = 0x4d000;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *param_3 * 4;
    regmap_read(*(param_1 + 8),iVar3,&uStack_4c);
    uStack_4c = uStack_4c & (uVar2 ^ 0xffffffff) | uVar1 & uVar2;
    regmap_write(*(param_1 + 8),iVar3);
    uVar1 = *param_3;
    if (uVar1 < 0x10) {
        uVar2 = (uVar1 & 0x1f) << 0x10 | 0xc0000007;
        if ((param_4 & 1) == 0) {
            uVar2 = 0;
        }
        iVar3 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar3 + uVar1 * 4,uVar2);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
        (*pcVar5)();
    }
    return;
}


// ===== sym.trp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001290 (size 8) =====

void sym.trp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uchar auVar19 [12];
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint32_t uStack_12c;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    uint32_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar15 = param_4;
    uStack_5c = 0;
    uVar13 = 0x7f;
    if (*(param_1 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar11 = *(param_1 + 0x920) & 0x20;
    uVar16 = *param_3 * 4 + 0x24020;
    uVar14 = uVar13;
    if (uVar11 != 0) {
        uVar14 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & param_2 | uVar11 << 0x1a;
    if ((param_4 & 1) == 0) {
        uVar13 = 0;
    }
    uVar11 = param_4;
    regmap_read(*(param_1 + 8),uVar16,&uStack_5c);
    uStack_5c = uStack_5c & (uVar14 ^ 0xffffffff) | uVar13 & uVar14;
    puVar10 = uStack_5c;
    regmap_write(*(param_1 + 8),uVar16);
    uVar13 = *param_3;
    if (uVar13 < 0x10) {
        uVar12 = (uVar13 & 0x1f) << 0x10 | 0xc0000005;
        if ((param_4 & 1) == 0) {
            uVar12 = 0;
        }
        puVar10 = uVar12;
        iVar3 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar3 + uVar13 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._0_8_;
    *extraout_x18 = sym.trp_event_filter_config;
    pcStack_88 = sym.trp_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uVar13 = puVar10;
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = uVar16;
    puStack_78 = param_3;
    uStack_70 = uVar15;
    iStack_68 = param_1;
    switch(auVar18._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar6 + 0x9ac) == 2) {
            uVar13 = 1 << (uVar13 & 0x1f);
            uVar16 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar13 = 0xffffffff;
            }
            param_3 = uVar13;
        }
        else {
            uVar13 = uVar13 | uVar11 << 8;
            if ((param_5 & 1) == 0) {
                uVar13 = 0;
            }
            param_3 = uVar13;
            uVar16 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar13 = uVar11 << 0x1c | uVar13 << 0x18;
        uVar16 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        param_3 = uVar13;
        break;
    case 3:
        uVar13 = uVar11 << 0x14 | uVar13 << 0x10;
        uVar16 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        param_3 = uVar13;
        break;
    case 7:
        if (*(iVar6 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar16 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar13 = 0xffffffff;
        }
        param_3 = uVar13;
    }
    if ((*(iVar6 + 0x9ac) == 2) && ((auVar18._8_4_ == 7 || (auVar18._8_4_ == 0)))) {
        uVar17 = 0x24008;
        uStack_9c = 0;
        regmap_read(*(iVar6 + 8),0x24008,&uStack_9c);
        uVar7 = *(iVar6 + 8);
        uVar15 = uVar17;
    }
    else {
        uStack_9c = 0;
        regmap_read(*(iVar6 + 8),0x24004,&uStack_9c);
        uVar7 = *(iVar6 + 8);
        uVar17 = 0x24004;
    }
    uStack_9c = uStack_9c & (uVar16 ^ 0xffffffff) | param_3 & uVar16;
    puVar10 = uStack_9c;
    regmap_write(uVar7,uVar17);
code_r0x080048e8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar8 = auVar19._0_8_;
    *extraout_x18_00 = sym.drp_event_config;
    pcStack_d8 = sym.drp_event_config;
    uStack_c8 = 0x24020;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uStack_ec = 0;
    uVar13 = 0x7f;
    if (*(iVar8 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar12 = *(iVar8 + 0x920) & 0x40;
    uVar2 = uVar13;
    if (uVar12 != 0) {
        uVar2 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & auVar19._8_4_ | uVar12 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar13 = 0;
    }
    iVar3 = 0x51010;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar3 = 0x44010;
    }
    uVar17 = iVar3 + *puVar10 * 4;
    uVar12 = uVar11;
    ppuStack_e0 = &puStack_90;
    uStack_d0 = uVar14;
    uStack_c0 = uVar16;
    puStack_b8 = param_3;
    uStack_b0 = uVar15;
    iStack_a8 = iVar6;
    regmap_read(*(iVar8 + 8),uVar17,&uStack_ec);
    uStack_ec = uStack_ec & (uVar2 ^ 0xffffffff) | uVar13 & uVar2;
    regmap_write(*(iVar8 + 8),uVar17);
    uVar14 = *puVar10;
    if (uVar14 < 0x10) {
        uVar1 = (uVar14 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar1 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar3 + uVar14 * 4,uVar1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._0_8_;
    *extraout_x18_01 = sym.drp_event_enable;
    pcStack_118 = sym.drp_event_enable;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uVar14 = 0x2001;
    if ((auVar18._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uStack_12c = 0;
    uVar1 = 0x51050;
    if (*(iVar6 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar15 = uVar1;
    pppuStack_120 = &ppuStack_e0;
    puStack_110 = puVar10;
    uStack_100 = uVar11;
    iStack_f8 = iVar8;
    regmap_read(*(iVar6 + 8),uVar15,&uStack_12c);
    uStack_12c = uStack_12c & 0xffff00fe | uVar14;
    puVar10 = uStack_12c;
    regmap_write(*(iVar6 + 8),uVar15);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar8 = auVar19._0_8_;
    *extraout_x18_02 = sym.pmgr_event_config;
    pcStack_168 = sym.pmgr_event_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uStack_17c = 0;
    uVar11 = *(iVar8 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar11 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar11 = auVar19._8_4_ & 0x3f | uVar11 << 0x18;
    if ((uVar12 & 1) == 0) {
        uVar11 = 0;
    }
    iVar3 = 0x4d000;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *puVar10 * 4;
    ppppuStack_170 = &pppuStack_120;
    uStack_160 = uVar13;
    uStack_158 = uVar2;
    uStack_150 = uVar17;
    uStack_148 = uVar14;
    uStack_140 = uVar15;
    iStack_138 = iVar6;
    regmap_read(*(iVar8 + 8),iVar3,&uStack_17c);
    uStack_17c = uStack_17c & (uVar1 ^ 0xffffffff) | uVar11 & uVar1;
    regmap_write(*(iVar8 + 8),iVar3);
    uVar13 = *puVar10;
    if (uVar13 < 0x10) {
        uVar11 = (uVar13 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar12 & 1) == 0) {
            uVar11 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar3 + uVar13 * 4,uVar11);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar18 = __stack_chk_fail();
    puVar9 = auVar18._0_8_;
    *extraout_x18_03 = sym.__cfi_check_fail;
    if (puVar9 != NULL) {
        switch(*puVar9) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar9,auVar18._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar5)();
}


// ===== sym.ferc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x08001298 (size 8) =====

void sym.ferc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    int iVar22;
    uint32_t uVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [12];
    uint32_t uStack_1ec;
    int64_t iStack_1e8;
    ulong ****ppppuStack_1e0;
    code *pcStack_1d8;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t *puStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_5c = 0;
    uVar7 = *(param_1 + 0x920) & 2;
    uVar14 = 0x3f;
    if (uVar7 != 0) {
        uVar14 = 0x8001003f;
    }
    param_2 = param_2 | uVar7 << 0x1e;
    if ((param_4 & 1) == 0) {
        param_2 = 0;
    }
    iVar22 = 0x49020;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar22 = 0x3b020;
    }
    uVar20 = iVar22 + *param_3 * 4;
    uVar10 = param_4;
    regmap_read(*(param_1 + 8),uVar20,&uStack_5c);
    uStack_5c = uStack_5c & (uVar14 ^ 0xffffffff) | param_2 & uVar14;
    regmap_write(*(param_1 + 8),uVar20);
    uVar7 = *param_3;
    if (uVar7 < 0x10) {
        uVar12 = (uVar7 & 0x1f) << 0x10 | 0xc0000001;
        if ((param_4 & 1) == 0) {
            uVar12 = 0;
        }
        iVar22 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar22 + uVar7 * 4,uVar12);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar17 = auVar24._0_8_;
    *extraout_x18 = sym.ferc_event_enable;
    pcStack_88 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uVar7 = 0x4002001;
    if ((auVar24._8_8_ & 1) == 0) {
        uVar7 = 0;
    }
    uVar19 = uVar7;
    uStack_9c = 0;
    uVar12 = 0x49060;
    if (*(uVar17 + 0x9b8) < 0x15) {
        uVar12 = 0x3b060;
    }
    uVar18 = uVar12;
    puStack_90 = &stack0xffffffffffffffb0;
    puStack_80 = param_3;
    uStack_70 = param_4;
    iStack_68 = param_1;
    regmap_read(*(uVar17 + 8),uVar18,&uStack_9c);
    uStack_9c = uStack_9c & 0xf00000fe | uVar7;
    puVar8 = uStack_9c;
    regmap_write(*(uVar17 + 8),uVar18);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar21 = auVar25._0_8_;
    *extraout_x18_00 = sym.ferc_event_filter_config;
    pcStack_c8 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar20;
    uStack_b8 = uVar19;
    uStack_b0 = uVar18;
    uStack_a8 = uVar17;
    if (auVar25._8_4_ == 2) {
        uVar12 = puVar8 | uVar10 << 2;
        uVar7 = 0x49000;
        if (*(uVar21 + 0x9b8) < 0x15) {
            uVar7 = 0x3b000;
        }
        uVar19 = uVar7;
        uVar17 = param_5;
        uStack_dc = 0;
        uVar11 = param_5;
        regmap_read(*(uVar21 + 8),uVar19,&uStack_dc);
        uVar7 = uVar12 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar7;
        puVar8 = uStack_dc;
        regmap_write(*(uVar21 + 8),uVar19);
        param_5 = uVar11;
        uVar18 = uVar21;
        uVar20 = uVar12;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar13 = auVar25._0_8_;
    *extraout_x18_01 = sym.fewc_event_config;
    pcStack_128 = sym.fewc_event_config;
    uStack_108 = 0x31020;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uStack_13c = 0;
    uVar7 = *(iVar13 + 0x920) & 4;
    uVar12 = 0x3f;
    if (uVar7 != 0) {
        uVar12 = 0x8001003f;
    }
    uVar7 = auVar25._8_4_ & 0x3f | uVar7 << 0x1d;
    if ((uVar10 & 1) == 0) {
        uVar7 = 0;
    }
    iVar22 = 0x39020;
    if (*(iVar13 + 0x9b8) < 0x15) {
        iVar22 = 0x33020;
    }
    uVar21 = iVar22 + *puVar8 * 4;
    uVar11 = uVar10;
    pppuStack_130 = &ppuStack_d0;
    uStack_120 = param_2;
    uStack_110 = uVar14;
    uStack_100 = uVar20;
    uStack_f8 = uVar19;
    uStack_f0 = uVar18;
    uStack_e8 = uVar17;
    regmap_read(*(iVar13 + 8),uVar21,&uStack_13c);
    uStack_13c = uStack_13c & (uVar12 ^ 0xffffffff) | uVar7 & uVar12;
    puVar9 = uStack_13c;
    regmap_write(*(iVar13 + 8),uVar21);
    uVar7 = *puVar8;
    if (uVar7 < 0x10) {
        uVar14 = (uVar7 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        puVar9 = uVar14;
        iVar22 = 0x36020;
        if (*(iVar13 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar13 + 8),iVar22 + uVar7 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    *extraout_x18_02 = sym.fewc_event_filter_config;
    pcStack_168 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar21;
    puStack_158 = puVar8;
    uStack_150 = uVar10;
    iStack_148 = iVar13;
    if (auVar25._8_4_ == 2) {
        uVar7 = uVar11 << 2;
        uVar15 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar15 = 0x33000;
        }
        uStack_17c = 0;
        regmap_read(*(iVar6 + 8),uVar15,&uStack_17c);
        uVar7 = (puVar9 | uVar7) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_17c = uStack_17c & 0xfffffff0 | uVar7;
        puVar9 = uStack_17c;
        regmap_write(*(iVar6 + 8),uVar15);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar7 = auVar25._8_4_;
    iVar13 = auVar25._0_8_;
    *extraout_x18_03 = sym.beac_event_config;
    pcStack_1d8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_1e8 = *(iVar4 + 0x5e0);
    if ((*(iVar13 + 0x920) >> 3 & 1) == 0) {
        uVar12 = uVar7 & 0x3f;
        uVar14 = 0;
        if ((uVar11 & 1) == 0) {
            uVar12 = 0;
        }
        uVar10 = 0x3f;
        iVar22 = *(iVar13 + 0x9a8);
joined_r0x08003ce0:
        uVar16 = 0;
    }
    else {
        uVar10 = 0x8001003f;
        uVar14 = 0x78;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar14 = 0;
        }
        if ((uVar11 & 1) == 0) {
            uVar12 = 0;
            iVar22 = *(iVar13 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar12 = uVar7 & 0x3f | 0x80000000;
        uVar16 = 0x28;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar16 = 0;
        }
        iVar22 = *(iVar13 + 0x9a8);
    }
    ppppuStack_1e0 = &ppppuStack_170;
    if (iVar22 != 0) {
        iVar22 = 0;
        uVar23 = 0;
        do {
            uStack_1ec = 0;
            iVar1 = 0x61040;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar22 + iVar1 + (uVar23 + *puVar9) * 4;
            regmap_read(*(iVar13 + 8),iVar1,&uStack_1ec);
            uStack_1ec = uStack_1ec & ~uVar10 | uVar12 & uVar10;
            regmap_write(*(iVar13 + 8),iVar1);
            uStack_1ec = 0;
            iVar1 = 0x61080;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar13 + 8),iVar1 + iVar22,&uStack_1ec);
            uStack_1ec = uStack_1ec & ~uVar14 | uVar16 & uVar14;
            regmap_write(*(iVar13 + 8),iVar1 + iVar22);
            uVar3 = *puVar9;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar11 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar23 == 1) && (uVar3 = *puVar9 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar11 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar23 = uVar23 + 1;
            iVar22 = iVar22 + 0x4000;
        } while (uVar23 < *(iVar13 + 0x9a8));
        if (1 < *(iVar13 + 0x9a8)) {
            uVar14 = *puVar9;
            *puVar9 = uVar14 + 1;
            if (0x10 < uVar14) goto code_r0x08003edc;
            iVar13 = iVar13 + uVar14 * 0x88;
            uVar15 = 3;
            if ((uVar11 & 1) == 0) {
                uVar15 = 8;
                uVar7 = 100;
            }
            *(iVar13 + 0x98) = uVar15;
            *(iVar13 + 0x9c) = uVar7;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1e8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.beac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012a0 (size 8) =====

void sym.beac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if ((*(param_1 + 0x920) >> 3 & 1) == 0) {
        uVar6 = param_2 & 0x3f;
        uVar7 = 0;
        if ((param_4 & 1) == 0) {
            uVar6 = 0;
        }
        uVar8 = 0x3f;
        iVar11 = *(param_1 + 0x9a8);
joined_r0x08003ce0:
        uVar10 = 0;
    }
    else {
        uVar8 = 0x8001003f;
        uVar7 = 0x78;
        if (*(param_1 + 0x9ac) != 2) {
            uVar7 = 0;
        }
        if ((param_4 & 1) == 0) {
            uVar6 = 0;
            iVar11 = *(param_1 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar6 = param_2 & 0x3f | 0x80000000;
        uVar10 = 0x28;
        if (*(param_1 + 0x9ac) != 2) {
            uVar10 = 0;
        }
        iVar11 = *(param_1 + 0x9a8);
    }
    if (iVar11 != 0) {
        iVar11 = 0;
        uVar12 = 0;
        do {
            uStack_6c = 0;
            iVar1 = 0x61040;
            if (*(param_1 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar11 + iVar1 + (uVar12 + *param_3) * 4;
            regmap_read(*(param_1 + 8),iVar1,&uStack_6c);
            uStack_6c = uStack_6c & ~uVar8 | uVar6 & uVar8;
            regmap_write(*(param_1 + 8),iVar1);
            uStack_6c = 0;
            iVar1 = 0x61080;
            if (*(param_1 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(param_1 + 8),iVar1 + iVar11,&uStack_6c);
            uStack_6c = uStack_6c & ~uVar7 | uVar10 & uVar7;
            regmap_write(*(param_1 + 8),iVar1 + iVar11);
            uVar3 = *param_3;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((param_4 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(param_1 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(param_1 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar12 == 1) && (uVar3 = *param_3 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((param_4 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(param_1 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(param_1 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar12 = uVar12 + 1;
            iVar11 = iVar11 + 0x4000;
        } while (uVar12 < *(param_1 + 0x9a8));
        if (1 < *(param_1 + 0x9a8)) {
            uVar7 = *param_3;
            *param_3 = uVar7 + 1;
            if (0x10 < uVar7) goto code_r0x08003edc;
            param_1 = param_1 + uVar7 * 0x88;
            uVar9 = 3;
            if ((param_4 & 1) == 0) {
                uVar9 = 8;
                param_2 = 100;
            }
            *(param_1 + 0x98) = uVar9;
            *(param_1 + 0x9c) = param_2;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.berc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012a8 (size 8) =====

void sym.berc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    uint32_t uStack_25c;
    int64_t iStack_258;
    ulong ****ppppuStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    int64_t iStack_218;
    uint32_t uStack_20c;
    int64_t iStack_208;
    ulong ****ppppuStack_200;
    code *pcStack_1f8;
    uint32_t *puStack_1f0;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    uint32_t uStack_1cc;
    int64_t iStack_1c8;
    ulong ****ppppuStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    uint32_t *puStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t *puStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_5c = 0;
    uVar13 = *(param_1 + 0x920) & 0x10;
    uVar14 = 0x3f;
    if (uVar13 != 0) {
        uVar14 = 0x8001003f;
    }
    uVar13 = param_2 & 0x3f | uVar13 << 0x1b;
    if ((param_4 & 1) == 0) {
        uVar13 = 0;
    }
    iVar1 = 0x3d020;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar1 = 0x39020;
    }
    uVar20 = iVar1 + *param_3 * 4;
    uVar10 = param_4;
    regmap_read(*(param_1 + 8),uVar20,&uStack_5c);
    uStack_5c = uStack_5c & (uVar14 ^ 0xffffffff) | uVar13 & uVar14;
    regmap_write(*(param_1 + 8),uVar20);
    uVar15 = *param_3;
    if (uVar15 < 0x10) {
        uVar11 = (uVar15 & 0x1f) << 0x10 | 0xc0000004;
        if ((param_4 & 1) == 0) {
            uVar11 = 0;
        }
        iVar1 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar1 + uVar15 * 4,uVar11);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar16 = auVar22._0_8_;
    *extraout_x18 = sym.berc_event_enable;
    pcStack_88 = sym.berc_event_enable;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar15 = 0x4002001;
    if ((auVar22._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uVar19 = uVar15;
    uStack_9c = 0;
    uVar11 = 0x3d060;
    if (*(uVar16 + 0x9b8) < 0x15) {
        uVar11 = 0x39060;
    }
    uVar17 = uVar11;
    puStack_90 = &stack0xffffffffffffffb0;
    puStack_80 = param_3;
    uStack_70 = param_4;
    iStack_68 = param_1;
    regmap_read(*(uVar16 + 8),uVar17,&uStack_9c);
    uStack_9c = uStack_9c & 0xf00000fe | uVar15;
    puVar8 = uStack_9c;
    regmap_write(*(uVar16 + 8),uVar17);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar18 = auVar23._0_8_;
    *extraout_x18_00 = sym.berc_event_filter_config;
    pcStack_c8 = sym.berc_event_filter_config;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar20;
    uStack_b8 = uVar19;
    uStack_b0 = uVar17;
    uStack_a8 = uVar16;
    if (auVar23._8_4_ == 2) {
        uVar11 = puVar8 | uVar10 << 2;
        uVar15 = 0x3d000;
        if (*(uVar18 + 0x9b8) < 0x15) {
            uVar15 = 0x39000;
        }
        uVar19 = uVar15;
        uVar16 = param_5;
        uStack_dc = 0;
        uVar12 = param_5;
        regmap_read(*(uVar18 + 8),uVar19,&uStack_dc);
        uVar15 = uVar11 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar15 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar15;
        puVar8 = uStack_dc;
        regmap_write(*(uVar18 + 8),uVar19);
        param_5 = uVar12;
        uVar17 = uVar18;
        uVar20 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_01 = sym.trp_event_config;
    pcStack_128 = sym.trp_event_config;
    uStack_108 = 0x31020;
    iVar2 = sp_el0;
    iStack_138 = *(iVar2 + 0x5e0);
    uVar18 = uVar10;
    uStack_13c = 0;
    uVar15 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar11 = *(iVar4 + 0x920) & 0x20;
    uVar21 = *puVar8 * 4 + 0x24020;
    uVar12 = uVar15;
    if (uVar11 != 0) {
        uVar12 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar23._8_4_ | uVar11 << 0x1a;
    if ((uVar10 & 1) == 0) {
        uVar15 = 0;
    }
    uVar11 = uVar10;
    pppuStack_130 = &ppuStack_d0;
    uStack_120 = uVar13;
    uStack_110 = uVar14;
    uStack_100 = uVar20;
    uStack_f8 = uVar19;
    uStack_f0 = uVar17;
    uStack_e8 = uVar16;
    regmap_read(*(iVar4 + 8),uVar21,&uStack_13c);
    uStack_13c = uStack_13c & (uVar12 ^ 0xffffffff) | uVar15 & uVar12;
    puVar9 = uStack_13c;
    regmap_write(*(iVar4 + 8),uVar21);
    uVar13 = *puVar8;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        puVar9 = uVar14;
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar13 * 4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_138) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar5 = auVar22._0_8_;
    *extraout_x18_02 = sym.trp_event_filter_config;
    pcStack_168 = sym.trp_event_filter_config;
    iVar2 = sp_el0;
    iStack_178 = *(iVar2 + 0x5e0);
    uVar13 = puVar9;
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar21;
    puStack_158 = puVar8;
    uStack_150 = uVar18;
    iStack_148 = iVar4;
    switch(auVar22._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar5 + 0x9ac) == 2) {
            uVar13 = 1 << (uVar13 & 0x1f);
            uVar21 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar13 = 0xffffffff;
            }
            puVar8 = uVar13;
        }
        else {
            uVar13 = uVar13 | uVar11 << 8;
            if ((param_5 & 1) == 0) {
                uVar13 = 0;
            }
            puVar8 = uVar13;
            uVar21 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar13 = uVar11 << 0x1c | uVar13 << 0x18;
        uVar21 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        puVar8 = uVar13;
        break;
    case 3:
        uVar13 = uVar11 << 0x14 | uVar13 << 0x10;
        uVar21 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        puVar8 = uVar13;
        break;
    case 7:
        if (*(iVar5 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar21 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar13 = 0xffffffff;
        }
        puVar8 = uVar13;
    }
    if ((*(iVar5 + 0x9ac) == 2) && ((auVar22._8_4_ == 7 || (auVar22._8_4_ == 0)))) {
        uVar20 = 0x24008;
        uStack_17c = 0;
        regmap_read(*(iVar5 + 8),0x24008,&uStack_17c);
        uVar6 = *(iVar5 + 8);
        uVar18 = uVar20;
    }
    else {
        uStack_17c = 0;
        regmap_read(*(iVar5 + 8),0x24004,&uStack_17c);
        uVar6 = *(iVar5 + 8);
        uVar20 = 0x24004;
    }
    uStack_17c = uStack_17c & (uVar21 ^ 0xffffffff) | puVar8 & uVar21;
    puVar9 = uStack_17c;
    regmap_write(uVar6,uVar20);
code_r0x080048e8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_178) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_03 = sym.drp_event_config;
    pcStack_1b8 = sym.drp_event_config;
    uStack_1a8 = 0x24020;
    iVar2 = sp_el0;
    iStack_1c8 = *(iVar2 + 0x5e0);
    uStack_1cc = 0;
    uVar13 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar14 = *(iVar4 + 0x920) & 0x40;
    uVar15 = uVar13;
    if (uVar14 != 0) {
        uVar15 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & auVar23._8_4_ | uVar14 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar13 = 0;
    }
    iVar1 = 0x51010;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar1 = 0x44010;
    }
    uVar20 = iVar1 + *puVar9 * 4;
    uVar10 = uVar11;
    ppppuStack_1c0 = &ppppuStack_170;
    uStack_1b0 = uVar12;
    uStack_1a0 = uVar21;
    puStack_198 = puVar8;
    uStack_190 = uVar18;
    iStack_188 = iVar5;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_1cc);
    uStack_1cc = uStack_1cc & (uVar15 ^ 0xffffffff) | uVar13 & uVar15;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar14 = *puVar9;
    if (uVar14 < 0x10) {
        uVar12 = (uVar14 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar12 = 0;
        }
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar14 * 4,uVar12);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar5 = auVar22._0_8_;
    *extraout_x18_04 = sym.drp_event_enable;
    pcStack_1f8 = sym.drp_event_enable;
    iVar2 = sp_el0;
    iStack_208 = *(iVar2 + 0x5e0);
    uVar14 = 0x2001;
    if ((auVar22._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uStack_20c = 0;
    uVar12 = 0x51050;
    if (*(iVar5 + 0x9b8) < 0x15) {
        uVar12 = 0x44050;
    }
    uVar16 = uVar12;
    ppppuStack_200 = &ppppuStack_1c0;
    puStack_1f0 = puVar9;
    uStack_1e0 = uVar11;
    iStack_1d8 = iVar4;
    regmap_read(*(iVar5 + 8),uVar16,&uStack_20c);
    uStack_20c = uStack_20c & 0xffff00fe | uVar14;
    puVar8 = uStack_20c;
    regmap_write(*(iVar5 + 8),uVar16);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_208) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_05 = sym.pmgr_event_config;
    pcStack_248 = sym.pmgr_event_config;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    uStack_25c = 0;
    uVar11 = *(iVar4 + 0x920) & 0x80;
    uVar12 = 0x3f;
    if (uVar11 != 0) {
        uVar12 = 0x8001003f;
    }
    uVar11 = auVar23._8_4_ & 0x3f | uVar11 << 0x18;
    if ((uVar10 & 1) == 0) {
        uVar11 = 0;
    }
    iVar1 = 0x4d000;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar1 = 0x3f000;
    }
    iVar1 = iVar1 + *puVar8 * 4;
    ppppuStack_250 = &ppppuStack_200;
    uStack_240 = uVar13;
    uStack_238 = uVar15;
    uStack_230 = uVar20;
    uStack_228 = uVar14;
    uStack_220 = uVar16;
    iStack_218 = iVar5;
    regmap_read(*(iVar4 + 8),iVar1,&uStack_25c);
    uStack_25c = uStack_25c & (uVar12 ^ 0xffffffff) | uVar11 & uVar12;
    regmap_write(*(iVar4 + 8),iVar1);
    uVar13 = *puVar8;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar13 * 4,uVar14);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return;
    }
    auVar22 = __stack_chk_fail();
    puVar7 = auVar22._0_8_;
    *extraout_x18_06 = sym.__cfi_check_fail;
    if (puVar7 != NULL) {
        switch(*puVar7) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar7,auVar22._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar3)();
}


// ===== sym.fewc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012b0 (size 8) =====

void sym.fewc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar15;
    int iVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uint32_t uStack_10c;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_5c = 0;
    uVar6 = *(param_1 + 0x920) & 4;
    uVar11 = 0x3f;
    if (uVar6 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar6 = param_2 & 0x3f | uVar6 << 0x1d;
    if ((param_4 & 1) == 0) {
        uVar6 = 0;
    }
    iVar16 = 0x39020;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar16 = 0x33020;
    }
    uVar15 = iVar16 + *param_3 * 4;
    uVar8 = param_4;
    regmap_read(*(param_1 + 8),uVar15,&uStack_5c);
    uStack_5c = uStack_5c & (uVar11 ^ 0xffffffff) | uVar6 & uVar11;
    puVar7 = uStack_5c;
    regmap_write(*(param_1 + 8),uVar15);
    uVar6 = *param_3;
    if (uVar6 < 0x10) {
        uVar11 = (uVar6 & 0x1f) << 0x10 | 0xc0000002;
        if ((param_4 & 1) == 0) {
            uVar11 = 0;
        }
        puVar7 = uVar11;
        iVar16 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar16 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar16 + uVar6 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    *extraout_x18 = sym.fewc_event_filter_config;
    pcStack_88 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = uVar15;
    puStack_78 = param_3;
    uStack_70 = param_4;
    iStack_68 = param_1;
    if (auVar18._8_4_ == 2) {
        uVar6 = uVar8 << 2;
        uVar13 = 0x39000;
        if (*(iVar10 + 0x9b8) < 0x15) {
            uVar13 = 0x33000;
        }
        uStack_9c = 0;
        regmap_read(*(iVar10 + 8),uVar13,&uStack_9c);
        uVar6 = (puVar7 | uVar6) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar6 = 0;
        }
        uStack_9c = uStack_9c & 0xfffffff0 | uVar6;
        puVar7 = uStack_9c;
        regmap_write(*(iVar10 + 8),uVar13);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar6 = auVar18._8_4_;
    iVar10 = auVar18._0_8_;
    *extraout_x18_00 = sym.beac_event_config;
    pcStack_f8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    if ((*(iVar10 + 0x920) >> 3 & 1) == 0) {
        uVar9 = uVar6 & 0x3f;
        uVar11 = 0;
        if ((uVar8 & 1) == 0) {
            uVar9 = 0;
        }
        uVar12 = 0x3f;
        iVar16 = *(iVar10 + 0x9a8);
joined_r0x08003ce0:
        uVar14 = 0;
    }
    else {
        uVar12 = 0x8001003f;
        uVar11 = 0x78;
        if (*(iVar10 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        if ((uVar8 & 1) == 0) {
            uVar9 = 0;
            iVar16 = *(iVar10 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar9 = uVar6 & 0x3f | 0x80000000;
        uVar14 = 0x28;
        if (*(iVar10 + 0x9ac) != 2) {
            uVar14 = 0;
        }
        iVar16 = *(iVar10 + 0x9a8);
    }
    ppuStack_100 = &puStack_90;
    if (iVar16 != 0) {
        iVar16 = 0;
        uVar17 = 0;
        do {
            uStack_10c = 0;
            iVar1 = 0x61040;
            if (*(iVar10 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar16 + iVar1 + (uVar17 + *puVar7) * 4;
            regmap_read(*(iVar10 + 8),iVar1,&uStack_10c);
            uStack_10c = uStack_10c & ~uVar12 | uVar9 & uVar12;
            regmap_write(*(iVar10 + 8),iVar1);
            uStack_10c = 0;
            iVar1 = 0x61080;
            if (*(iVar10 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar10 + 8),iVar1 + iVar16,&uStack_10c);
            uStack_10c = uStack_10c & ~uVar11 | uVar14 & uVar11;
            regmap_write(*(iVar10 + 8),iVar1 + iVar16);
            uVar3 = *puVar7;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar8 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar10 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar10 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar17 == 1) && (uVar3 = *puVar7 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar8 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar10 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar10 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar17 = uVar17 + 1;
            iVar16 = iVar16 + 0x4000;
        } while (uVar17 < *(iVar10 + 0x9a8));
        if (1 < *(iVar10 + 0x9a8)) {
            uVar11 = *puVar7;
            *puVar7 = uVar11 + 1;
            if (0x10 < uVar11) goto code_r0x08003edc;
            iVar10 = iVar10 + uVar11 * 0x88;
            uVar13 = 3;
            if ((uVar8 & 1) == 0) {
                uVar13 = 8;
                uVar6 = 100;
            }
            *(iVar10 + 0x98) = uVar13;
            *(iVar10 + 0x9c) = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.drp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012b8 (size 8) =====

void sym.drp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auVar17 [12];
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t *puStack_70;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    uVar12 = 0x7f;
    if (*(param_1 + 0x9ac) != 2) {
        uVar12 = 0x3f;
    }
    uVar13 = *(param_1 + 0x920) & 0x40;
    uVar2 = uVar12;
    if (uVar13 != 0) {
        uVar2 = uVar12 | 0x80010000;
    }
    uVar12 = uVar12 & param_2 | uVar13 << 0x19;
    if ((param_4 & 1) == 0) {
        uVar12 = 0;
    }
    iVar4 = 0x51010;
    if (*(param_1 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar15 = iVar4 + *param_3 * 4;
    uVar11 = param_4;
    regmap_read(*(param_1 + 8),uVar15,&uStack_4c);
    uStack_4c = uStack_4c & (uVar2 ^ 0xffffffff) | uVar12 & uVar2;
    regmap_write(*(param_1 + 8),uVar15);
    uVar13 = *param_3;
    if (uVar13 < 0x10) {
        uVar1 = (uVar13 & 0x1f) << 0x10 | 0xc0000006;
        if ((param_4 & 1) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(param_1 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(param_1 + 8),iVar4 + uVar13 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        auVar16 = __stack_chk_fail();
        iVar7 = auVar16._0_8_;
        *extraout_x18 = sym.drp_event_enable;
        pcStack_78 = sym.drp_event_enable;
        iVar5 = sp_el0;
        iStack_88 = *(iVar5 + 0x5e0);
        uVar13 = 0x2001;
        if ((auVar16._8_8_ & 1) == 0) {
            uVar13 = 0;
        }
        uStack_8c = 0;
        uVar1 = 0x51050;
        if (*(iVar7 + 0x9b8) < 0x15) {
            uVar1 = 0x44050;
        }
        uVar14 = uVar1;
        puStack_80 = &stack0xffffffffffffffc0;
        puStack_70 = param_3;
        uStack_60 = param_4;
        iStack_58 = param_1;
        regmap_read(*(iVar7 + 8),uVar14,&uStack_8c);
        uStack_8c = uStack_8c & 0xffff00fe | uVar13;
        puVar10 = uStack_8c;
        regmap_write(*(iVar7 + 8),uVar14);
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) != iStack_88) {
            auVar17 = __stack_chk_fail();
            iVar8 = auVar17._0_8_;
            *extraout_x18_00 = sym.pmgr_event_config;
            pcStack_c8 = sym.pmgr_event_config;
            iVar5 = sp_el0;
            iStack_d8 = *(iVar5 + 0x5e0);
            uStack_dc = 0;
            uVar1 = *(iVar8 + 0x920) & 0x80;
            uVar3 = 0x3f;
            if (uVar1 != 0) {
                uVar3 = 0x8001003f;
            }
            uVar1 = auVar17._8_4_ & 0x3f | uVar1 << 0x18;
            if ((uVar11 & 1) == 0) {
                uVar1 = 0;
            }
            iVar4 = 0x4d000;
            if (*(iVar8 + 0x9b8) < 0x15) {
                iVar4 = 0x3f000;
            }
            iVar4 = iVar4 + *puVar10 * 4;
            ppuStack_d0 = &puStack_80;
            uStack_c0 = uVar12;
            uStack_b8 = uVar2;
            uStack_b0 = uVar15;
            uStack_a8 = uVar13;
            uStack_a0 = uVar14;
            iStack_98 = iVar7;
            regmap_read(*(iVar8 + 8),iVar4,&uStack_dc);
            uStack_dc = uStack_dc & (uVar3 ^ 0xffffffff) | uVar1 & uVar3;
            regmap_write(*(iVar8 + 8),iVar4);
            uVar12 = *puVar10;
            if (uVar12 < 0x10) {
                uVar13 = (uVar12 & 0x1f) << 0x10 | 0xc0000007;
                if ((uVar11 & 1) == 0) {
                    uVar13 = 0;
                }
                iVar4 = 0x36020;
                if (*(iVar8 + 0x9b8) < 0x15) {
                    iVar4 = 0x31020;
                }
                regmap_write(*(iVar8 + 8),iVar4 + uVar12 * 4,uVar13);
            }
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) != iStack_d8) {
                auVar16 = __stack_chk_fail();
                puVar9 = auVar16._0_8_;
                *extraout_x18_01 = sym.__cfi_check_fail;
                if (puVar9 != NULL) {
                    switch(*puVar9) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        __ubsan_handle_cfi_check_fail_abort(puVar9,auVar16._8_8_,0);
                        break;
                    default:
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
                (*pcVar6)();
            }
            return;
        }
        return;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP20llcc_perfmon_private11filter_typeyybE_global_addr @ 0x080012c0 (size 8) =====

void sym.__typeid__ZTSFvP20llcc_perfmon_private11filter_typeyybE_global_addr
               (int64_t param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar16;
    int iVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [12];
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint32_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (param_2 == 2) {
        uVar7 = param_4 << 2;
        uVar14 = 0x49000;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar14 = 0x3b000;
        }
        uStack_3c = 0;
        uVar10 = param_5;
        regmap_read(*(param_1 + 8),uVar14,&uStack_3c);
        uVar7 = (param_3 | uVar7) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar7;
        param_3 = uStack_3c;
        regmap_write(*(param_1 + 8),uVar14);
        param_5 = uVar10;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar12 = auVar19._0_8_;
    *extraout_x18 = sym.fewc_event_config;
    pcStack_88 = sym.fewc_event_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_9c = 0;
    uVar7 = *(iVar12 + 0x920) & 4;
    uVar10 = 0x3f;
    if (uVar7 != 0) {
        uVar10 = 0x8001003f;
    }
    uVar7 = auVar19._8_4_ & 0x3f | uVar7 << 0x1d;
    if ((param_4 & 1) == 0) {
        uVar7 = 0;
    }
    iVar17 = 0x39020;
    if (*(iVar12 + 0x9b8) < 0x15) {
        iVar17 = 0x33020;
    }
    uVar16 = iVar17 + *param_3 * 4;
    uVar9 = param_4;
    puStack_90 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar12 + 8),uVar16,&uStack_9c);
    uStack_9c = uStack_9c & (uVar10 ^ 0xffffffff) | uVar7 & uVar10;
    puVar8 = uStack_9c;
    regmap_write(*(iVar12 + 8),uVar16);
    uVar7 = *param_3;
    if (uVar7 < 0x10) {
        uVar10 = (uVar7 & 0x1f) << 0x10 | 0xc0000002;
        if ((param_4 & 1) == 0) {
            uVar10 = 0;
        }
        puVar8 = uVar10;
        iVar17 = 0x36020;
        if (*(iVar12 + 0x9b8) < 0x15) {
            iVar17 = 0x31020;
        }
        regmap_write(*(iVar12 + 8),iVar17 + uVar7 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar6 = auVar19._0_8_;
    *extraout_x18_00 = sym.fewc_event_filter_config;
    pcStack_c8 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar16;
    puStack_b8 = param_3;
    uStack_b0 = param_4;
    iStack_a8 = iVar12;
    if (auVar19._8_4_ == 2) {
        uVar7 = uVar9 << 2;
        uVar14 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar14 = 0x33000;
        }
        uStack_dc = 0;
        regmap_read(*(iVar6 + 8),uVar14,&uStack_dc);
        uVar7 = (puVar8 | uVar7) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar7;
        puVar8 = uStack_dc;
        regmap_write(*(iVar6 + 8),uVar14);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    uVar7 = auVar19._8_4_;
    iVar12 = auVar19._0_8_;
    *extraout_x18_01 = sym.beac_event_config;
    pcStack_138 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    if ((*(iVar12 + 0x920) >> 3 & 1) == 0) {
        uVar11 = uVar7 & 0x3f;
        uVar10 = 0;
        if ((uVar9 & 1) == 0) {
            uVar11 = 0;
        }
        uVar13 = 0x3f;
        iVar17 = *(iVar12 + 0x9a8);
joined_r0x08003ce0:
        uVar15 = 0;
    }
    else {
        uVar13 = 0x8001003f;
        uVar10 = 0x78;
        if (*(iVar12 + 0x9ac) != 2) {
            uVar10 = 0;
        }
        if ((uVar9 & 1) == 0) {
            uVar11 = 0;
            iVar17 = *(iVar12 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar11 = uVar7 & 0x3f | 0x80000000;
        uVar15 = 0x28;
        if (*(iVar12 + 0x9ac) != 2) {
            uVar15 = 0;
        }
        iVar17 = *(iVar12 + 0x9a8);
    }
    pppuStack_140 = &ppuStack_d0;
    if (iVar17 != 0) {
        iVar17 = 0;
        uVar18 = 0;
        do {
            uStack_14c = 0;
            iVar1 = 0x61040;
            if (*(iVar12 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar17 + iVar1 + (uVar18 + *puVar8) * 4;
            regmap_read(*(iVar12 + 8),iVar1,&uStack_14c);
            uStack_14c = uStack_14c & ~uVar13 | uVar11 & uVar13;
            regmap_write(*(iVar12 + 8),iVar1);
            uStack_14c = 0;
            iVar1 = 0x61080;
            if (*(iVar12 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar12 + 8),iVar1 + iVar17,&uStack_14c);
            uStack_14c = uStack_14c & ~uVar10 | uVar15 & uVar10;
            regmap_write(*(iVar12 + 8),iVar1 + iVar17);
            uVar3 = *puVar8;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar9 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar12 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar12 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar18 == 1) && (uVar3 = *puVar8 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar9 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar12 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar12 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar18 = uVar18 + 1;
            iVar17 = iVar17 + 0x4000;
        } while (uVar18 < *(iVar12 + 0x9a8));
        if (1 < *(iVar12 + 0x9a8)) {
            uVar10 = *puVar8;
            *puVar8 = uVar10 + 1;
            if (0x10 < uVar10) goto code_r0x08003edc;
            iVar12 = iVar12 + uVar10 * 0x88;
            uVar14 = 3;
            if ((uVar9 & 1) == 0) {
                uVar14 = 8;
                uVar7 = 100;
            }
            *(iVar12 + 0x98) = uVar14;
            *(iVar12 + 0x9c) = uVar7;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.fewc_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012c8 (size 8) =====

void sym.fewc_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (param_2 == 2) {
        uVar6 = param_4 << 2;
        uVar11 = 0x39000;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar11 = 0x33000;
        }
        uStack_3c = 0;
        regmap_read(*(param_1 + 8),uVar11,&uStack_3c);
        uVar6 = (param_3 | uVar6) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar6 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar6;
        param_3 = uStack_3c;
        regmap_write(*(param_1 + 8),uVar11);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar6 = auVar15._8_4_;
    iVar8 = auVar15._0_8_;
    *extraout_x18 = sym.beac_event_config;
    pcStack_98 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    if ((*(iVar8 + 0x920) >> 3 & 1) == 0) {
        uVar7 = uVar6 & 0x3f;
        uVar9 = 0;
        if ((param_4 & 1) == 0) {
            uVar7 = 0;
        }
        uVar10 = 0x3f;
        iVar13 = *(iVar8 + 0x9a8);
joined_r0x08003ce0:
        uVar12 = 0;
    }
    else {
        uVar10 = 0x8001003f;
        uVar9 = 0x78;
        if (*(iVar8 + 0x9ac) != 2) {
            uVar9 = 0;
        }
        if ((param_4 & 1) == 0) {
            uVar7 = 0;
            iVar13 = *(iVar8 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar7 = uVar6 & 0x3f | 0x80000000;
        uVar12 = 0x28;
        if (*(iVar8 + 0x9ac) != 2) {
            uVar12 = 0;
        }
        iVar13 = *(iVar8 + 0x9a8);
    }
    puStack_a0 = &stack0xffffffffffffffd0;
    if (iVar13 != 0) {
        iVar13 = 0;
        uVar14 = 0;
        do {
            uStack_ac = 0;
            iVar1 = 0x61040;
            if (*(iVar8 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar13 + iVar1 + (uVar14 + *param_3) * 4;
            regmap_read(*(iVar8 + 8),iVar1,&uStack_ac);
            uStack_ac = uStack_ac & ~uVar10 | uVar7 & uVar10;
            regmap_write(*(iVar8 + 8),iVar1);
            uStack_ac = 0;
            iVar1 = 0x61080;
            if (*(iVar8 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar8 + 8),iVar1 + iVar13,&uStack_ac);
            uStack_ac = uStack_ac & ~uVar9 | uVar12 & uVar9;
            regmap_write(*(iVar8 + 8),iVar1 + iVar13);
            uVar3 = *param_3;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((param_4 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar8 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar8 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar14 == 1) && (uVar3 = *param_3 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((param_4 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar8 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar8 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + 0x4000;
        } while (uVar14 < *(iVar8 + 0x9a8));
        if (1 < *(iVar8 + 0x9a8)) {
            uVar9 = *param_3;
            *param_3 = uVar9 + 1;
            if (0x10 < uVar9) goto code_r0x08003edc;
            iVar8 = iVar8 + uVar9 * 0x88;
            uVar11 = 3;
            if ((param_4 & 1) == 0) {
                uVar11 = 8;
                uVar6 = 100;
            }
            *(iVar8 + 0x98) = uVar11;
            *(iVar8 + 0x9c) = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.trp_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012d0 (size 8) =====

void sym.trp_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uchar auVar19 [16];
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint32_t *puStack_b0;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar13 = param_3;
    switch(param_2) {
    case 0:
        if (*(param_1 + 0x9ac) == 2) {
            uVar13 = 1 << (uVar13 & 0x1f);
            uVar14 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar13 = 0xffffffff;
            }
        }
        else {
            uVar13 = uVar13 | param_4 << 8;
            if ((param_5 & 1) == 0) {
                uVar13 = 0;
            }
            uVar14 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar13 = param_4 << 0x1c | uVar13 << 0x18;
        uVar14 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        break;
    case 3:
        uVar13 = param_4 << 0x14 | uVar13 << 0x10;
        uVar14 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        break;
    case 7:
        if (*(param_1 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar14 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar13 = 0xffffffff;
        }
    }
    if ((*(param_1 + 0x9ac) == 2) && ((param_2 == 7 || (param_2 == 0)))) {
        uVar15 = 0x24008;
        uStack_3c = 0;
        regmap_read(*(param_1 + 8),0x24008,&uStack_3c);
        uVar7 = *(param_1 + 8);
    }
    else {
        uStack_3c = 0;
        regmap_read(*(param_1 + 8),0x24004,&uStack_3c);
        uVar7 = *(param_1 + 8);
        uVar15 = 0x24004;
    }
    uStack_3c = uStack_3c & (uVar14 ^ 0xffffffff) | uVar13 & uVar14;
    param_3 = uStack_3c;
    regmap_write(uVar7,uVar15);
code_r0x080048e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar8 = auVar18._0_8_;
    *extraout_x18 = sym.drp_event_config;
    pcStack_78 = sym.drp_event_config;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    uStack_8c = 0;
    uVar13 = 0x7f;
    if (*(iVar8 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar14 = *(iVar8 + 0x920) & 0x40;
    uVar2 = uVar13;
    if (uVar14 != 0) {
        uVar2 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & auVar18._8_4_ | uVar14 << 0x19;
    if ((param_4 & 1) == 0) {
        uVar13 = 0;
    }
    iVar4 = 0x51010;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar17 = iVar4 + *param_3 * 4;
    uVar12 = param_4;
    puStack_80 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar8 + 8),uVar17,&uStack_8c);
    uStack_8c = uStack_8c & (uVar2 ^ 0xffffffff) | uVar13 & uVar2;
    regmap_write(*(iVar8 + 8),uVar17);
    uVar14 = *param_3;
    if (uVar14 < 0x10) {
        uVar1 = (uVar14 & 0x1f) << 0x10 | 0xc0000006;
        if ((param_4 & 1) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar4 + uVar14 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar9 = auVar19._0_8_;
    *extraout_x18_00 = sym.drp_event_enable;
    pcStack_b8 = sym.drp_event_enable;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uVar14 = 0x2001;
    if ((auVar19._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uStack_cc = 0;
    uVar1 = 0x51050;
    if (*(iVar9 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar16 = uVar1;
    ppuStack_c0 = &puStack_80;
    puStack_b0 = param_3;
    uStack_a0 = param_4;
    iStack_98 = iVar8;
    regmap_read(*(iVar9 + 8),uVar16,&uStack_cc);
    uStack_cc = uStack_cc & 0xffff00fe | uVar14;
    puVar11 = uStack_cc;
    regmap_write(*(iVar9 + 8),uVar16);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar8 = auVar18._0_8_;
    *extraout_x18_01 = sym.pmgr_event_config;
    pcStack_108 = sym.pmgr_event_config;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uStack_11c = 0;
    uVar1 = *(iVar8 + 0x920) & 0x80;
    uVar3 = 0x3f;
    if (uVar1 != 0) {
        uVar3 = 0x8001003f;
    }
    uVar1 = auVar18._8_4_ & 0x3f | uVar1 << 0x18;
    if ((uVar12 & 1) == 0) {
        uVar1 = 0;
    }
    iVar4 = 0x4d000;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar4 = 0x3f000;
    }
    iVar4 = iVar4 + *puVar11 * 4;
    pppuStack_110 = &ppuStack_c0;
    uStack_100 = uVar13;
    uStack_f8 = uVar2;
    uStack_f0 = uVar17;
    uStack_e8 = uVar14;
    uStack_e0 = uVar16;
    iStack_d8 = iVar9;
    regmap_read(*(iVar8 + 8),iVar4,&uStack_11c);
    uStack_11c = uStack_11c & (uVar3 ^ 0xffffffff) | uVar1 & uVar3;
    regmap_write(*(iVar8 + 8),iVar4);
    uVar13 = *puVar11;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar12 & 1) == 0) {
            uVar14 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar4 + uVar13 * 4,uVar14);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return;
    }
    auVar19 = __stack_chk_fail();
    puVar10 = auVar19._0_8_;
    *extraout_x18_02 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar19._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar6)();
}


// ===== sym.berc_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012d8 (size 8) =====

void sym.berc_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uchar *puVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [12];
    uchar auVar20 [16];
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    ulong ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    uint32_t uStack_16c;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    uint32_t *puStack_150;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint32_t uStack_12c;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint32_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (param_2 == 2) {
        uVar14 = param_4 << 2;
        uVar2 = 0x3d000;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar2 = 0x39000;
        }
        uStack_3c = 0;
        uVar12 = param_5;
        regmap_read(*(param_1 + 8),uVar2,&uStack_3c);
        uVar14 = (param_3 | uVar14) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar14 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar14;
        param_3 = uStack_3c;
        regmap_write(*(param_1 + 8),uVar2);
        param_5 = uVar12;
    }
    else {
        _printk(0x800090a);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18 = sym.trp_event_config;
    pcStack_88 = sym.trp_event_config;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    uVar16 = param_4;
    uStack_9c = 0;
    uVar14 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar14 = 0x3f;
    }
    uVar12 = *(iVar7 + 0x920) & 0x20;
    uVar17 = *param_3 * 4 + 0x24020;
    uVar15 = uVar14;
    if (uVar12 != 0) {
        uVar15 = uVar14 | 0x80010000;
    }
    uVar14 = uVar14 & auVar19._8_4_ | uVar12 << 0x1a;
    if ((param_4 & 1) == 0) {
        uVar14 = 0;
    }
    uVar12 = param_4;
    puStack_90 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar7 + 8),uVar17,&uStack_9c);
    uStack_9c = uStack_9c & (uVar15 ^ 0xffffffff) | uVar14 & uVar15;
    puVar11 = uStack_9c;
    regmap_write(*(iVar7 + 8),uVar17);
    uVar14 = *param_3;
    if (uVar14 < 0x10) {
        uVar13 = (uVar14 & 0x1f) << 0x10 | 0xc0000005;
        if ((param_4 & 1) == 0) {
            uVar13 = 0;
        }
        puVar11 = uVar13;
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar14 * 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar8 = auVar20._0_8_;
    *extraout_x18_00 = sym.trp_event_filter_config;
    pcStack_c8 = sym.trp_event_filter_config;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar14 = puVar11;
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar17;
    puStack_b8 = param_3;
    uStack_b0 = uVar16;
    iStack_a8 = iVar7;
    switch(auVar20._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar8 + 0x9ac) == 2) {
            uVar14 = 1 << (uVar14 & 0x1f);
            uVar17 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar14 = 0xffffffff;
            }
            param_3 = uVar14;
        }
        else {
            uVar14 = uVar14 | uVar12 << 8;
            if ((param_5 & 1) == 0) {
                uVar14 = 0;
            }
            param_3 = uVar14;
            uVar17 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar14 = uVar12 << 0x1c | uVar14 << 0x18;
        uVar17 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar14 = 0;
        }
        param_3 = uVar14;
        break;
    case 3:
        uVar14 = uVar12 << 0x14 | uVar14 << 0x10;
        uVar17 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar14 = 0;
        }
        param_3 = uVar14;
        break;
    case 7:
        if (*(iVar8 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar17 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar14 = 0xffffffff;
        }
        param_3 = uVar14;
    }
    if ((*(iVar8 + 0x9ac) == 2) && ((auVar20._8_4_ == 7 || (auVar20._8_4_ == 0)))) {
        uVar18 = 0x24008;
        uStack_dc = 0;
        regmap_read(*(iVar8 + 8),0x24008,&uStack_dc);
        uVar9 = *(iVar8 + 8);
        uVar16 = uVar18;
    }
    else {
        uStack_dc = 0;
        regmap_read(*(iVar8 + 8),0x24004,&uStack_dc);
        uVar9 = *(iVar8 + 8);
        uVar18 = 0x24004;
    }
    uStack_dc = uStack_dc & (uVar17 ^ 0xffffffff) | param_3 & uVar17;
    puVar11 = uStack_dc;
    regmap_write(uVar9,uVar18);
code_r0x080048e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_01 = sym.drp_event_config;
    pcStack_118 = sym.drp_event_config;
    uStack_108 = 0x24020;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uStack_12c = 0;
    uVar14 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar14 = 0x3f;
    }
    uVar13 = *(iVar7 + 0x920) & 0x40;
    uVar3 = uVar14;
    if (uVar13 != 0) {
        uVar3 = uVar14 | 0x80010000;
    }
    uVar14 = uVar14 & auVar19._8_4_ | uVar13 << 0x19;
    if ((uVar12 & 1) == 0) {
        uVar14 = 0;
    }
    iVar4 = 0x51010;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar18 = iVar4 + *puVar11 * 4;
    uVar13 = uVar12;
    pppuStack_120 = &ppuStack_d0;
    uStack_110 = uVar15;
    uStack_100 = uVar17;
    puStack_f8 = param_3;
    uStack_f0 = uVar16;
    iStack_e8 = iVar8;
    regmap_read(*(iVar7 + 8),uVar18,&uStack_12c);
    uStack_12c = uStack_12c & (uVar3 ^ 0xffffffff) | uVar14 & uVar3;
    regmap_write(*(iVar7 + 8),uVar18);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar1 = (uVar15 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar12 & 1) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_128) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar8 = auVar20._0_8_;
    *extraout_x18_02 = sym.drp_event_enable;
    pcStack_158 = sym.drp_event_enable;
    iVar5 = sp_el0;
    iStack_168 = *(iVar5 + 0x5e0);
    uVar15 = 0x2001;
    if ((auVar20._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uStack_16c = 0;
    uVar1 = 0x51050;
    if (*(iVar8 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar16 = uVar1;
    ppppuStack_160 = &pppuStack_120;
    puStack_150 = puVar11;
    uStack_140 = uVar12;
    iStack_138 = iVar7;
    regmap_read(*(iVar8 + 8),uVar16,&uStack_16c);
    uStack_16c = uStack_16c & 0xffff00fe | uVar15;
    puVar11 = uStack_16c;
    regmap_write(*(iVar8 + 8),uVar16);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_168) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar7 = auVar19._0_8_;
    *extraout_x18_03 = sym.pmgr_event_config;
    pcStack_1a8 = sym.pmgr_event_config;
    iVar5 = sp_el0;
    iStack_1b8 = *(iVar5 + 0x5e0);
    uStack_1bc = 0;
    uVar12 = *(iVar7 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar12 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar12 = auVar19._8_4_ & 0x3f | uVar12 << 0x18;
    if ((uVar13 & 1) == 0) {
        uVar12 = 0;
    }
    iVar4 = 0x4d000;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x3f000;
    }
    iVar4 = iVar4 + *puVar11 * 4;
    ppppuStack_1b0 = &ppppuStack_160;
    uStack_1a0 = uVar14;
    uStack_198 = uVar3;
    uStack_190 = uVar18;
    uStack_188 = uVar15;
    uStack_180 = uVar16;
    iStack_178 = iVar8;
    regmap_read(*(iVar7 + 8),iVar4,&uStack_1bc);
    uStack_1bc = uStack_1bc & (uVar1 ^ 0xffffffff) | uVar12 & uVar1;
    regmap_write(*(iVar7 + 8),iVar4);
    uVar14 = *puVar11;
    if (uVar14 < 0x10) {
        uVar12 = (uVar14 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar13 & 1) == 0) {
            uVar12 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar14 * 4,uVar12);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    puVar10 = auVar20._0_8_;
    *extraout_x18_04 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar20._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar6)();
}


// ===== sym.feac_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012e0 (size 8) =====

void sym.feac_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t *param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t unaff_x19;
    uint64_t uVar19;
    uint32_t *unaff_x20;
    uint64_t uVar20;
    uint32_t *unaff_x21;
    uint64_t uVar21;
    uint32_t *unaff_x22;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x23;
    int iVar24;
    uint64_t unaff_x24;
    uint32_t uVar25;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar26 [12];
    uchar auVar27 [16];
    uint32_t uStack_24c;
    int64_t iStack_248;
    ulong ****ppppuStack_240;
    code *pcStack_238;
    uint32_t uStack_1dc;
    int64_t iStack_1d8;
    ulong ****ppppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    uint32_t uStack_19c;
    int64_t iStack_198;
    uchar ****ppppuStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    uint64_t uStack_170;
    ulong uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint32_t *puStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint32_t *puStack_80;
    uint32_t *puStack_78;
    uint32_t *puStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar11 = param_4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    if (9 < param_2) {
code_r0x08003754:
        param_4 = unaff_x22;
        _printk(0x800090a);
        puVar9 = param_3;
        param_1 = unaff_x19;
        goto code_r0x08003718;
    }
    unaff_x20 = param_5;
    uVar17 = param_3;
    unaff_x19 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    switch(param_2) {
    case 0:
        if (*(param_1 + 0x9ac) == 0) {
            unaff_x20 = param_3 | param_4 << 0x10;
            if ((param_5 & 1) == 0) {
                unaff_x20 = NULL;
            }
        }
        else {
            unaff_x20 = 1 << (uVar17 & 0x1f);
            if ((param_5 & 1) == 0) {
                unaff_x20 = 0xffffffff;
            }
        }
        uVar17 = 0x43018;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar17 = 0x37018;
        }
        puVar10 = uVar17;
        uStack_5c = 0;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar7 = *(param_1 + 8);
        puVar9 = unaff_x20 & 0xffffffff;
        goto code_r0x08003710;
    case 1:
        uVar17 = uVar17 | uVar11 << 0x10;
        if ((param_5 & 1) == 0) {
            uVar17 = 0;
        }
        uVar12 = 0x43014;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x37014;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        goto code_r0x08003458;
    default:
        goto code_r0x08003754;
    case 4:
        uVar17 = uVar11 << 0x1c | uVar17 << 0x18;
        if ((param_5 & 1) == 0) {
            uVar17 = 0;
        }
        uVar12 = 0x4300c;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar17 = uVar17 | uStack_5c & 0xffffff;
code_r0x08003458:
        puVar9 = uVar17;
        uVar7 = *(param_1 + 8);
        unaff_x20 = puVar9;
code_r0x08003710:
        uStack_5c = unaff_x20;
        unaff_x21 = puVar10;
        goto code_r0x08003714;
    case 5:
        uVar17 = uVar11 << 0x10 | uVar17 << 0xc;
        param_4 = uVar17;
        uVar12 = 0x4300c;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = param_5;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar17 = uVar17 & 0xff000;
        bVar6 = (param_5 & 1) == 0;
        uStack_5c = uStack_5c & 0xfff00fff;
        param_5 = uVar12;
        break;
    case 6:
        uVar17 = uVar11 << 0xc | uVar17 << 10;
        param_4 = uVar17;
        uVar12 = 0x4301c;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = param_5;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar17 = uVar17 & 0x7c00;
        bVar6 = (param_5 & 1) == 0;
        uStack_5c = uStack_5c & 0xffff83ff;
        param_5 = uVar12;
        break;
    case 7:
        uVar12 = 0x43018;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x37018;
        }
        puVar10 = uVar12;
        uVar12 = *(param_1 + 0x9ac);
        unaff_x23 = uVar12;
        if ((param_5 & 1) == 0) {
            uVar17 = 0xffffffff;
        }
        unaff_x20 = uVar17;
        uStack_5c = 0;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar7 = *(param_1 + 8);
        if (uVar12 != 0) {
            uStack_5c = uVar17;
        }
        puVar9 = uStack_5c;
        param_4 = puVar10;
        goto code_r0x080036b8;
    case 8:
        uVar17 = uVar17 | uVar11 << 1;
        param_4 = uVar17;
        uVar12 = 0x4301c;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = param_5;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar17 = uVar17 & 7;
        bVar6 = (param_5 & 1) == 0;
        uStack_5c = uStack_5c & 0xfffffff8;
        param_5 = uVar12;
        break;
    case 9:
        uVar18 = 0x43004;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar18 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_5c = 0;
        uVar12 = uVar11;
        uVar15 = param_5;
        regmap_read(*(param_1 + 8),uVar18,&uStack_5c);
        uStack_5c = uVar17;
        if ((param_5 & 1) == 0) {
            uStack_5c = 0;
            uVar11 = 0;
        }
        regmap_write(*(param_1 + 8),uVar18);
        uStack_5c = 0;
        uVar17 = 0x43008;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar17 = 0x37008;
        }
        unaff_x24 = uVar17;
        regmap_read(*(param_1 + 8),unaff_x24,&uStack_5c);
        uStack_5c = uVar11;
        regmap_write(*(param_1 + 8),unaff_x24,uVar11);
        unaff_x23 = 0;
        if ((param_5 & 1) != 0) {
            unaff_x23 = param_4 >> 0x1c & 0xf0 | param_3 >> 0x20 & 0xf;
        }
        uStack_5c = 0;
        uVar11 = 0x4300c;
        if (*(param_1 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar10 = uVar11;
        regmap_read(*(param_1 + 8),puVar10,&uStack_5c);
        uVar7 = *(param_1 + 8);
        puVar9 = uStack_5c & 0xfffffe00 | unaff_x23;
        uVar11 = uVar12;
        param_5 = uVar15;
        unaff_x20 = puVar10;
        goto code_r0x080036b8;
    }
    if (bVar6) {
        uVar17 = 0;
    }
    uVar7 = *(param_1 + 8);
    puVar9 = uStack_5c | uVar17;
    param_3 = puVar10;
code_r0x080036b8:
    uStack_5c = puVar9;
    unaff_x21 = param_3;
code_r0x08003714:
    regmap_write(uVar7,puVar10);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar16 = auVar26._0_8_;
    *extraout_x18 = sym.ferc_event_config;
    pcStack_a8 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uStack_bc = 0;
    uVar17 = *(iVar16 + 0x920) & 2;
    uVar12 = 0x3f;
    if (uVar17 != 0) {
        uVar12 = 0x8001003f;
    }
    uVar17 = auVar26._8_4_ | uVar17 << 0x1e;
    if ((uVar11 & 1) == 0) {
        uVar17 = 0;
    }
    iVar24 = 0x49020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar24 = 0x3b020;
    }
    uVar22 = iVar24 + *puVar9 * 4;
    uVar13 = uVar11;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = unaff_x25;
    uStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    puStack_80 = param_4;
    puStack_78 = unaff_x21;
    puStack_70 = unaff_x20;
    iStack_68 = param_1;
    regmap_read(*(iVar16 + 8),uVar22,&uStack_bc);
    uStack_bc = uStack_bc & (uVar12 ^ 0xffffffff) | uVar17 & uVar12;
    regmap_write(*(iVar16 + 8),uVar22);
    uVar15 = *puVar9;
    if (uVar15 < 0x10) {
        uVar14 = (uVar15 & 0x1f) << 0x10 | 0xc0000001;
        if ((uVar11 & 1) == 0) {
            uVar14 = 0;
        }
        iVar24 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar24 + uVar15 * 4,uVar14);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar19 = auVar27._0_8_;
    *extraout_x18_00 = sym.ferc_event_enable;
    pcStack_e8 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uVar15 = 0x4002001;
    if ((auVar27._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uVar21 = uVar15;
    uStack_fc = 0;
    uVar14 = 0x49060;
    if (*(uVar19 + 0x9b8) < 0x15) {
        uVar14 = 0x3b060;
    }
    uVar20 = uVar14;
    ppuStack_f0 = &puStack_b0;
    puStack_e0 = puVar9;
    uStack_d0 = uVar11;
    iStack_c8 = iVar16;
    regmap_read(*(uVar19 + 8),uVar20,&uStack_fc);
    uStack_fc = uStack_fc & 0xf00000fe | uVar15;
    puVar9 = uStack_fc;
    regmap_write(*(uVar19 + 8),uVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar23 = auVar26._0_8_;
    *extraout_x18_01 = sym.ferc_event_filter_config;
    pcStack_128 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    pppuStack_130 = &ppuStack_f0;
    uStack_120 = uVar22;
    uStack_118 = uVar21;
    uStack_110 = uVar20;
    uStack_108 = uVar19;
    if (auVar26._8_4_ == 2) {
        uVar15 = puVar9 | uVar13 << 2;
        uVar11 = 0x49000;
        if (*(uVar23 + 0x9b8) < 0x15) {
            uVar11 = 0x3b000;
        }
        uVar21 = uVar11;
        uVar19 = param_5;
        uStack_13c = 0;
        uVar14 = param_5;
        regmap_read(*(uVar23 + 8),uVar21,&uStack_13c);
        uVar11 = uVar15 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_13c = uStack_13c & 0xfffffff0 | uVar11;
        puVar9 = uStack_13c;
        regmap_write(*(uVar23 + 8),uVar21);
        param_5 = uVar14;
        uVar20 = uVar23;
        uVar22 = uVar15;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar16 = auVar26._0_8_;
    *extraout_x18_02 = sym.fewc_event_config;
    pcStack_188 = sym.fewc_event_config;
    uStack_168 = 0x31020;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    uStack_19c = 0;
    uVar11 = *(iVar16 + 0x920) & 4;
    uVar15 = 0x3f;
    if (uVar11 != 0) {
        uVar15 = 0x8001003f;
    }
    uVar11 = auVar26._8_4_ & 0x3f | uVar11 << 0x1d;
    if ((uVar13 & 1) == 0) {
        uVar11 = 0;
    }
    iVar24 = 0x39020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar24 = 0x33020;
    }
    uVar23 = iVar24 + *puVar9 * 4;
    uVar14 = uVar13;
    ppppuStack_190 = &pppuStack_130;
    uStack_180 = uVar17;
    uStack_170 = uVar12;
    uStack_160 = uVar22;
    uStack_158 = uVar21;
    uStack_150 = uVar20;
    uStack_148 = uVar19;
    regmap_read(*(iVar16 + 8),uVar23,&uStack_19c);
    uStack_19c = uStack_19c & (uVar15 ^ 0xffffffff) | uVar11 & uVar15;
    puVar10 = uStack_19c;
    regmap_write(*(iVar16 + 8),uVar23);
    uVar11 = *puVar9;
    if (uVar11 < 0x10) {
        uVar17 = (uVar11 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar13 & 1) == 0) {
            uVar17 = 0;
        }
        puVar10 = uVar17;
        iVar24 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar24 + uVar11 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_198) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_03 = sym.fewc_event_filter_config;
    pcStack_1c8 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    ppppuStack_1d0 = &ppppuStack_190;
    uStack_1c0 = uVar23;
    puStack_1b8 = puVar9;
    uStack_1b0 = uVar13;
    iStack_1a8 = iVar16;
    if (auVar26._8_4_ == 2) {
        uVar11 = uVar14 << 2;
        uVar18 = 0x39000;
        if (*(iVar8 + 0x9b8) < 0x15) {
            uVar18 = 0x33000;
        }
        uStack_1dc = 0;
        regmap_read(*(iVar8 + 8),uVar18,&uStack_1dc);
        uVar11 = (puVar10 | uVar11) & 0xf;
        if ((param_5 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_1dc = uStack_1dc & 0xfffffff0 | uVar11;
        puVar10 = uStack_1dc;
        regmap_write(*(iVar8 + 8),uVar18);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._8_4_;
    iVar16 = auVar26._0_8_;
    *extraout_x18_04 = sym.beac_event_config;
    pcStack_238 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_248 = *(iVar4 + 0x5e0);
    if ((*(iVar16 + 0x920) >> 3 & 1) == 0) {
        uVar15 = uVar11 & 0x3f;
        uVar17 = 0;
        if ((uVar14 & 1) == 0) {
            uVar15 = 0;
        }
        uVar12 = 0x3f;
        iVar24 = *(iVar16 + 0x9a8);
joined_r0x08003ce0:
        uVar13 = 0;
    }
    else {
        uVar12 = 0x8001003f;
        uVar17 = 0x78;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar17 = 0;
        }
        if ((uVar14 & 1) == 0) {
            uVar15 = 0;
            iVar24 = *(iVar16 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar15 = uVar11 & 0x3f | 0x80000000;
        uVar13 = 0x28;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        iVar24 = *(iVar16 + 0x9a8);
    }
    ppppuStack_240 = &ppppuStack_1d0;
    if (iVar24 != 0) {
        iVar24 = 0;
        uVar25 = 0;
        do {
            uStack_24c = 0;
            iVar1 = 0x61040;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar24 + iVar1 + (uVar25 + *puVar10) * 4;
            regmap_read(*(iVar16 + 8),iVar1,&uStack_24c);
            uStack_24c = uStack_24c & ~uVar12 | uVar15 & uVar12;
            regmap_write(*(iVar16 + 8),iVar1);
            uStack_24c = 0;
            iVar1 = 0x61080;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar16 + 8),iVar1 + iVar24,&uStack_24c);
            uStack_24c = uStack_24c & ~uVar17 | uVar13 & uVar17;
            regmap_write(*(iVar16 + 8),iVar1 + iVar24);
            uVar3 = *puVar10;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar25 == 1) && (uVar3 = *puVar10 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar25 = uVar25 + 1;
            iVar24 = iVar24 + 0x4000;
        } while (uVar25 < *(iVar16 + 0x9a8));
        if (1 < *(iVar16 + 0x9a8)) {
            uVar17 = *puVar10;
            *puVar10 = uVar17 + 1;
            if (0x10 < uVar17) goto code_r0x08003edc;
            iVar16 = iVar16 + uVar17 * 0x88;
            uVar18 = 3;
            if ((uVar14 & 1) == 0) {
                uVar18 = 8;
                uVar11 = 100;
            }
            *(iVar16 + 0x98) = uVar18;
            *(iVar16 + 0x9c) = uVar11;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_248) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.beac_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt @ 0x080012e8 (size 8) =====

void sym.beac_event_filter_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt
               (int64_t param_1,int param_2,uint32_t *param_3,uint64_t param_4,uint32_t param_5)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar15;
    uint64_t unaff_x20;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t *unaff_x21;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t *unaff_x23;
    uint64_t unaff_x24;
    int iVar22;
    ulong unaff_x30;
    uchar auVar23 [12];
    uchar auVar24 [16];
    uint32_t uStack_2dc;
    int64_t iStack_2d8;
    ulong ****ppppuStack_2d0;
    code *pcStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    uint32_t uStack_28c;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    uint32_t *puStack_270;
    uint64_t uStack_260;
    int64_t iStack_258;
    uint32_t uStack_24c;
    int64_t iStack_248;
    ulong ****ppppuStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    ulong uStack_228;
    uint64_t uStack_220;
    uint32_t *puStack_218;
    uint64_t uStack_210;
    int64_t iStack_208;
    uint32_t uStack_1fc;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint32_t *puStack_1d8;
    uint64_t uStack_1d0;
    int64_t iStack_1c8;
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    uchar ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint32_t uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    uint64_t uStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint32_t *puStack_100;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    uint32_t *puStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint32_t *puStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    uVar10 = param_4;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uVar13 = param_5;
    if (param_2 == 1) {
        param_4 = param_3 | param_4 << 0x10;
        if ((param_5 & 1) == 0) {
            param_4 = 0;
        }
        if (*(param_1 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar19 = 0;
            unaff_x20 = 0x49008;
            do {
                uStack_6c = 0;
                iVar22 = 0x61008;
                if (*(param_1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49008;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(param_1 + 8),unaff_x23,&uStack_6c);
                puVar8 = param_4 & 0xffffffff;
                uStack_6c = param_4;
                regmap_write(*(param_1 + 8),unaff_x23);
                uVar11 = *(param_1 + 0x9a8);
                uVar19 = uVar19 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                unaff_x21 = 0x61008;
            } while (uVar19 < uVar11);
code_r0x080042b8:
            uVar19 = param_3 << 1;
            if ((param_5 & 1) == 0) {
                uVar19 = param_4;
            }
            param_3 = puVar8;
            param_5 = uVar13;
            if (uVar11 != 0) {
                unaff_x21 = NULL;
                param_4 = 0;
                unaff_x23 = uVar19 & 6;
                do {
                    uStack_6c = 0;
                    iVar22 = 0x61080;
                    if (*(param_1 + 0x9b8) < 0x15) {
                        iVar22 = 0x49080;
                    }
                    unaff_x20 = iVar22 + unaff_x21;
                    regmap_read(*(param_1 + 8),unaff_x20,&uStack_6c);
                    uStack_6c = uStack_6c & 0xfffffff9 | uVar19 & 6;
                    param_3 = uStack_6c;
                    regmap_write(*(param_1 + 8),unaff_x20);
                    uVar13 = param_4 + 1;
                    param_4 = uVar13;
                    unaff_x21 = unaff_x21 + 0x4000;
                    unaff_x24 = 0x61080;
                } while (uVar13 < *(param_1 + 0x9a8));
            }
        }
    }
    else if (param_2 == 9) {
        uVar13 = param_3;
        if ((param_5 & 1) == 0) {
            uVar13 = 0;
        }
        unaff_x23 = uVar13;
        uVar19 = 0;
        uVar11 = uVar10;
        puVar9 = param_3;
        uVar12 = param_5;
        if (*(param_1 + 0x9a8) != 0) {
            iVar22 = 0;
            uVar19 = 0;
            uVar14 = 0x49010;
            uVar12 = 0x61010;
            puStack_78 = param_3;
            uStack_70 = param_5;
            do {
                uStack_6c = 0;
                uVar1 = uVar12;
                if (*(param_1 + 0x9b8) < 0x15) {
                    uVar1 = uVar14;
                }
                regmap_read(*(param_1 + 8),uVar1 + iVar22,&uStack_6c);
                param_3 = unaff_x23;
                uStack_6c = uVar13;
                regmap_write(*(param_1 + 8),uVar1 + iVar22);
                uVar19 = uVar19 + 1;
                iVar22 = iVar22 + 0x4000;
            } while (uVar19 < *(param_1 + 0x9a8));
            if ((uStack_70 & 1) == 0) {
                uVar10 = 0;
            }
            unaff_x23 = uVar10;
            uVar19 = 0;
            if (*(param_1 + 0x9a8) != 0) {
                iVar22 = 0;
                uVar13 = 0;
                uVar14 = 0x4900c;
                uVar12 = 0x6100c;
                do {
                    uStack_6c = 0;
                    uVar19 = uVar12;
                    if (*(param_1 + 0x9b8) < 0x15) {
                        uVar19 = uVar14;
                    }
                    regmap_read(*(param_1 + 8),uVar19 + iVar22,&uStack_6c);
                    param_3 = unaff_x23;
                    uStack_6c = uVar10;
                    regmap_write(*(param_1 + 8),uVar19 + iVar22);
                    uVar19 = *(param_1 + 0x9a8);
                    uVar13 = uVar13 + 1;
                    iVar22 = iVar22 + 0x4000;
                } while (uVar13 < uVar19);
            }
            unaff_x21 = uVar12;
            unaff_x20 = uVar14;
            puVar9 = puStack_78;
            uVar12 = uStack_70;
        }
        if ((uVar12 & 1) == 0) {
            param_4 = 0;
        }
        else {
            param_4 = ((param_4 >> 0x20 & 0xf) << 0x20) >> 0x1c | puVar9 >> 0x20 & 0xf;
            puVar9 = puVar9 >> 0x20 & 0xf;
        }
        uVar10 = uVar11;
        unaff_x24 = param_4;
        if (uVar19 != 0) {
            unaff_x20 = 0;
            unaff_x21 = NULL;
            uVar13 = param_5;
            do {
                uStack_6c = 0;
                iVar22 = 0x61014;
                if (*(param_1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x20;
                regmap_read(*(param_1 + 8),unaff_x23,&uStack_6c);
                uStack_6c = uStack_6c & 0xfffffe00 | param_4;
                puVar8 = uStack_6c;
                regmap_write(*(param_1 + 8),unaff_x23);
                uVar11 = *(param_1 + 0x9a8);
                uVar19 = unaff_x21 + 1;
                unaff_x21 = uVar19;
                unaff_x20 = unaff_x20 + 0x4000;
                param_3 = puVar9;
                param_5 = uVar12;
            } while (uVar19 < uVar11);
            goto code_r0x080042b8;
        }
    }
    else if (param_2 == 2) {
        param_4 = param_4 << 0xe | param_3 << 0xc;
        if ((param_5 & 1) == 0) {
            param_4 = 0;
        }
        if (*(param_1 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar19 = 0;
            unaff_x20 = 0x61014;
            do {
                uStack_6c = 0;
                iVar22 = 0x61014;
                if (*(param_1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(param_1 + 8),unaff_x23,&uStack_6c);
                uStack_6c = uStack_6c & 0xffff0fff | param_4 & 0xf000;
                puVar8 = uStack_6c;
                regmap_write(*(param_1 + 8),unaff_x23);
                uVar11 = *(param_1 + 0x9a8);
                uVar19 = uVar19 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                unaff_x21 = param_3;
            } while (uVar19 < uVar11);
            goto code_r0x080042b8;
        }
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18 = sym.berc_event_config;
    pcStack_c8 = sym.berc_event_config;
    uStack_c0 = 0x49014;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uStack_dc = 0;
    uVar13 = *(iVar4 + 0x920) & 0x10;
    uVar19 = 0x3f;
    if (uVar13 != 0) {
        uVar19 = 0x8001003f;
    }
    uVar13 = auVar23._8_4_ & 0x3f | uVar13 << 0x1b;
    if ((uVar10 & 1) == 0) {
        uVar13 = 0;
    }
    iVar22 = 0x3d020;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x39020;
    }
    uVar20 = iVar22 + *param_3 * 4;
    uVar12 = uVar10;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x24;
    puStack_a8 = unaff_x23;
    uStack_a0 = param_4;
    puStack_98 = unaff_x21;
    uStack_90 = unaff_x20;
    iStack_88 = param_1;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_dc);
    uStack_dc = uStack_dc & (uVar19 ^ 0xffffffff) | uVar13 & uVar19;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar11 = *param_3;
    if (uVar11 < 0x10) {
        uVar14 = (uVar11 & 0x1f) << 0x10 | 0xc0000004;
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar11 * 4,uVar14);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar15 = auVar24._0_8_;
    *extraout_x18_00 = sym.berc_event_enable;
    pcStack_108 = sym.berc_event_enable;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uVar11 = 0x4002001;
    if ((auVar24._8_8_ & 1) == 0) {
        uVar11 = 0;
    }
    uVar18 = uVar11;
    uStack_11c = 0;
    uVar14 = 0x3d060;
    if (*(uVar15 + 0x9b8) < 0x15) {
        uVar14 = 0x39060;
    }
    uVar16 = uVar14;
    ppuStack_110 = &puStack_d0;
    puStack_100 = param_3;
    uStack_f0 = uVar10;
    iStack_e8 = iVar4;
    regmap_read(*(uVar15 + 8),uVar16,&uStack_11c);
    uStack_11c = uStack_11c & 0xf00000fe | uVar11;
    puVar8 = uStack_11c;
    regmap_write(*(uVar15 + 8),uVar16);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar17 = auVar23._0_8_;
    *extraout_x18_01 = sym.berc_event_filter_config;
    pcStack_148 = sym.berc_event_filter_config;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    pppuStack_150 = &ppuStack_110;
    uStack_140 = uVar20;
    uStack_138 = uVar18;
    uStack_130 = uVar16;
    uStack_128 = uVar15;
    if (auVar23._8_4_ == 2) {
        uVar11 = puVar8 | uVar12 << 2;
        uVar10 = 0x3d000;
        if (*(uVar17 + 0x9b8) < 0x15) {
            uVar10 = 0x39000;
        }
        uVar18 = uVar10;
        uVar15 = param_5;
        uStack_15c = 0;
        uVar14 = param_5;
        regmap_read(*(uVar17 + 8),uVar18,&uStack_15c);
        uVar10 = uVar11 & 0xf;
        if ((param_5 & 1) == 0) {
            uVar10 = 0;
        }
        uStack_15c = uStack_15c & 0xfffffff0 | uVar10;
        puVar8 = uStack_15c;
        regmap_write(*(uVar17 + 8),uVar18);
        param_5 = uVar14;
        uVar16 = uVar17;
        uVar20 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_02 = sym.trp_event_config;
    pcStack_1a8 = sym.trp_event_config;
    uStack_188 = 0x31020;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    uVar17 = uVar12;
    uStack_1bc = 0;
    uVar10 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar10 = 0x3f;
    }
    uVar11 = *(iVar4 + 0x920) & 0x20;
    uVar21 = *puVar8 * 4 + 0x24020;
    uVar14 = uVar10;
    if (uVar11 != 0) {
        uVar14 = uVar10 | 0x80010000;
    }
    uVar10 = uVar10 & auVar23._8_4_ | uVar11 << 0x1a;
    if ((uVar12 & 1) == 0) {
        uVar10 = 0;
    }
    uVar11 = uVar12;
    ppppuStack_1b0 = &pppuStack_150;
    uStack_1a0 = uVar13;
    uStack_190 = uVar19;
    uStack_180 = uVar20;
    uStack_178 = uVar18;
    uStack_170 = uVar16;
    uStack_168 = uVar15;
    regmap_read(*(iVar4 + 8),uVar21,&uStack_1bc);
    uStack_1bc = uStack_1bc & (uVar14 ^ 0xffffffff) | uVar10 & uVar14;
    puVar9 = uStack_1bc;
    regmap_write(*(iVar4 + 8),uVar21);
    uVar10 = *puVar8;
    if (uVar10 < 0x10) {
        uVar13 = (uVar10 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar12 & 1) == 0) {
            uVar13 = 0;
        }
        puVar9 = uVar13;
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar10 * 4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar5 = auVar24._0_8_;
    *extraout_x18_03 = sym.trp_event_filter_config;
    pcStack_1e8 = sym.trp_event_filter_config;
    iVar2 = sp_el0;
    iStack_1f8 = *(iVar2 + 0x5e0);
    uVar10 = puVar9;
    ppppuStack_1f0 = &ppppuStack_1b0;
    uStack_1e0 = uVar21;
    puStack_1d8 = puVar8;
    uStack_1d0 = uVar17;
    iStack_1c8 = iVar4;
    switch(auVar24._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar5 + 0x9ac) == 2) {
            uVar10 = 1 << (uVar10 & 0x1f);
            uVar21 = 0xffffffff;
            if ((param_5 & 1) == 0) {
                uVar10 = 0xffffffff;
            }
            puVar8 = uVar10;
        }
        else {
            uVar10 = uVar10 | uVar11 << 8;
            if ((param_5 & 1) == 0) {
                uVar10 = 0;
            }
            puVar8 = uVar10;
            uVar21 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar10 = uVar11 << 0x1c | uVar10 << 0x18;
        uVar21 = 0x33000000;
        if ((param_5 & 1) == 0) {
            uVar10 = 0;
        }
        puVar8 = uVar10;
        break;
    case 3:
        uVar10 = uVar11 << 0x14 | uVar10 << 0x10;
        uVar21 = 0xff0000;
        if ((param_5 & 1) == 0) {
            uVar10 = 0;
        }
        puVar8 = uVar10;
        break;
    case 7:
        if (*(iVar5 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar21 = 0xffffffff;
        if ((param_5 & 1) == 0) {
            uVar10 = 0xffffffff;
        }
        puVar8 = uVar10;
    }
    if ((*(iVar5 + 0x9ac) == 2) && ((auVar24._8_4_ == 7 || (auVar24._8_4_ == 0)))) {
        uVar20 = 0x24008;
        uStack_1fc = 0;
        regmap_read(*(iVar5 + 8),0x24008,&uStack_1fc);
        uVar6 = *(iVar5 + 8);
        uVar17 = uVar20;
    }
    else {
        uStack_1fc = 0;
        regmap_read(*(iVar5 + 8),0x24004,&uStack_1fc);
        uVar6 = *(iVar5 + 8);
        uVar20 = 0x24004;
    }
    uStack_1fc = uStack_1fc & (uVar21 ^ 0xffffffff) | puVar8 & uVar21;
    puVar9 = uStack_1fc;
    regmap_write(uVar6,uVar20);
code_r0x080048e8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_04 = sym.drp_event_config;
    pcStack_238 = sym.drp_event_config;
    uStack_228 = 0x24020;
    iVar2 = sp_el0;
    iStack_248 = *(iVar2 + 0x5e0);
    uStack_24c = 0;
    uVar10 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar10 = 0x3f;
    }
    uVar13 = *(iVar4 + 0x920) & 0x40;
    uVar19 = uVar10;
    if (uVar13 != 0) {
        uVar19 = uVar10 | 0x80010000;
    }
    uVar10 = uVar10 & auVar23._8_4_ | uVar13 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar10 = 0;
    }
    iVar22 = 0x51010;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x44010;
    }
    uVar20 = iVar22 + *puVar9 * 4;
    uVar12 = uVar11;
    ppppuStack_240 = &ppppuStack_1f0;
    uStack_230 = uVar14;
    uStack_220 = uVar21;
    puStack_218 = puVar8;
    uStack_210 = uVar17;
    iStack_208 = iVar5;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_24c);
    uStack_24c = uStack_24c & (uVar19 ^ 0xffffffff) | uVar10 & uVar19;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar13 = *puVar9;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar14 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar13 * 4,uVar14);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_248) {
        auVar24 = __stack_chk_fail();
        iVar5 = auVar24._0_8_;
        *extraout_x18_05 = sym.drp_event_enable;
        pcStack_278 = sym.drp_event_enable;
        iVar2 = sp_el0;
        iStack_288 = *(iVar2 + 0x5e0);
        uVar13 = 0x2001;
        if ((auVar24._8_8_ & 1) == 0) {
            uVar13 = 0;
        }
        uStack_28c = 0;
        uVar14 = 0x51050;
        if (*(iVar5 + 0x9b8) < 0x15) {
            uVar14 = 0x44050;
        }
        uVar15 = uVar14;
        ppppuStack_280 = &ppppuStack_240;
        puStack_270 = puVar9;
        uStack_260 = uVar11;
        iStack_258 = iVar4;
        regmap_read(*(iVar5 + 8),uVar15,&uStack_28c);
        uStack_28c = uStack_28c & 0xffff00fe | uVar13;
        puVar8 = uStack_28c;
        regmap_write(*(iVar5 + 8),uVar15);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) != iStack_288) {
            auVar23 = __stack_chk_fail();
            iVar4 = auVar23._0_8_;
            *extraout_x18_06 = sym.pmgr_event_config;
            pcStack_2c8 = sym.pmgr_event_config;
            iVar2 = sp_el0;
            iStack_2d8 = *(iVar2 + 0x5e0);
            uStack_2dc = 0;
            uVar11 = *(iVar4 + 0x920) & 0x80;
            uVar14 = 0x3f;
            if (uVar11 != 0) {
                uVar14 = 0x8001003f;
            }
            uVar11 = auVar23._8_4_ & 0x3f | uVar11 << 0x18;
            if ((uVar12 & 1) == 0) {
                uVar11 = 0;
            }
            iVar22 = 0x4d000;
            if (*(iVar4 + 0x9b8) < 0x15) {
                iVar22 = 0x3f000;
            }
            iVar22 = iVar22 + *puVar8 * 4;
            ppppuStack_2d0 = &ppppuStack_280;
            uStack_2c0 = uVar10;
            uStack_2b8 = uVar19;
            uStack_2b0 = uVar20;
            uStack_2a8 = uVar13;
            uStack_2a0 = uVar15;
            iStack_298 = iVar5;
            regmap_read(*(iVar4 + 8),iVar22,&uStack_2dc);
            uStack_2dc = uStack_2dc & (uVar14 ^ 0xffffffff) | uVar11 & uVar14;
            regmap_write(*(iVar4 + 8),iVar22);
            uVar10 = *puVar8;
            if (uVar10 < 0x10) {
                uVar13 = (uVar10 & 0x1f) << 0x10 | 0xc0000007;
                if ((uVar12 & 1) == 0) {
                    uVar13 = 0;
                }
                iVar22 = 0x36020;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    iVar22 = 0x31020;
                }
                regmap_write(*(iVar4 + 8),iVar22 + uVar10 * 4,uVar13);
            }
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iStack_2d8) {
                return;
            }
            auVar24 = __stack_chk_fail();
            puVar7 = auVar24._0_8_;
            *extraout_x18_07 = sym.__cfi_check_fail;
            if (puVar7 != NULL) {
                switch(*puVar7) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar7,auVar24._8_8_,0);
                    break;
                default:
                    return;
                }
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5502,0x8004cac);
            (*pcVar3)();
        }
        return;
    }
    return;
}


// ===== sym.llcc_perfmon_probe @ 0x080012f0 (size 1356) =====

int sym.llcc_perfmon_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_4c = 0;
    piVar11 = *(*(arg1 + 0x70) + 0x98);
    piVar7 = devm_kmalloc(iVar1,0x9c0,0xdc0);
    iVar6 = -0xc;
    if ((piVar7 == NULL) || (piVar11 == NULL)) goto code_r0x08001360;
    if ((*piVar11 == 0) || (piVar11[1] == 0)) {
        iVar6 = -0x13;
        goto code_r0x08001360;
    }
    *piVar7 = *piVar11;
    iVar8 = piVar11[1];
    uVar3 = 0x34000;
    piVar7[1] = iVar8;
    iVar6 = *(piVar11 + 0x6c);
    *(piVar7 + 0x137) = iVar6;
    uVar10 = 0x3400c;
    if (iVar6 < 0x15) {
        uVar10 = 0x3000c;
    }
    regmap_read(iVar8,uVar10,&uStack_4c);
    uVar5 = uStack_4c;
    uStack_4c = 0;
    uVar4 = uVar5 >> 10 & 3;
    uVar2 = uVar5 >> 0x1c;
    if ((uVar5 >> 10 & 3) == 0) {
        uVar4 = 1;
    }
    *(piVar7 + 10) = uVar2;
    *(piVar7 + 0x135) = uVar4;
    if (uVar2 != 0) {
        uVar4 = uVar5 >> 0x1d;
        uStack_4c = 1;
        *(piVar7 + 2) = *piVar11[0xc];
        if (uVar4 != 0) {
            uStack_4c = 2;
            *(piVar7 + 0x14) = *(piVar11[0xc] + 4);
            if (2 < uVar2) {
                uStack_4c = 3;
                *(piVar7 + 3) = *(piVar11[0xc] + 8);
                if (uVar5 >> 0x1e != 0) {
                    uStack_4c = 4;
                    *(piVar7 + 0x1c) = *(piVar11[0xc] + 0xc);
                    if (4 < uVar2) {
                        uStack_4c = 5;
                        *(piVar7 + 4) = *(piVar11[0xc] + 0x10);
                        if (2 < uVar4) {
                            uStack_4c = 6;
                            *(piVar7 + 0x24) = *(piVar11[0xc] + 0x14);
                            if (6 < uVar2) {
                                uStack_4c = 7;
                                *(piVar7 + 5) = *(piVar11[0xc] + 0x18);
                                if (uVar5 < 0) {
                                    uStack_4c = 8;
                                    *(piVar7 + 0x2c) = *(piVar11[0xc] + 0x1c);
                                    if (8 < uVar2) {
                                        uStack_4c = 9;
                                        *(piVar7 + 6) = *(piVar11[0xc] + 0x20);
                                        if (4 < uVar4) {
                                            uStack_4c = 10;
                                            *(piVar7 + 0x34) = *(piVar11[0xc] + 0x24);
                                            if (10 < uVar2) {
                                                uStack_4c = 0xb;
                                                *(piVar7 + 7) = *(piVar11[0xc] + 0x28);
                                                if (2 < uVar5 >> 0x1e) {
                                                    uStack_4c = 0xc;
                                                    *(piVar7 + 0x3c) = *(piVar11[0xc] + 0x2c);
                                                    if (0xc < uVar2) {
                                                        uStack_4c = 0xd;
                                                        *(piVar7 + 8) = *(piVar11[0xc] + 0x30);
                                                        if (6 < uVar4) {
                                                            uStack_4c = 0xe;
                                                            *(piVar7 + 0x44) = *(piVar11[0xc] + 0x34);
                                                            if (uVar2 == 0xf) {
                                                                uStack_4c = 0xf;
                                                                *(piVar7 + 9) = *(piVar11[0xc] + 0x38);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    uVar9 = devm_clk_get(iVar1,"qdss_clk");
    piVar7[0x136] = uVar9;
    if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        _printk(0x8000b61);
        piVar7[0x136] = 0;
    }
    iVar6 = sysfs_create_group(iVar1,obj.llcc_perfmon_group);
    if (iVar6 != 0) {
        _printk(0x80006b4);
        goto code_r0x08001360;
    }
    __mutex_init(piVar7 + 0x125,"&llcc_priv->mutex",obj.llcc_perfmon_probe.__key);
    uVar4 = *(piVar7 + 0x924);
    *(arg1 + 0xa8) = piVar7;
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xb] = reloc.feac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xc] = reloc.ferc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xd] = reloc.fewc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xe] = reloc.beac_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0xf] = reloc.berc_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0x10] = reloc.trp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        uVar4 = uVar4 + 1;
        *(piVar7 + 0x924) = uVar4;
        piVar7[0x11] = reloc.drp_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
        uVar4 = *(piVar7 + 0x924);
    }
    if (uVar4 < 8) {
        *(piVar7 + 0x924) = uVar4 + 1;
        piVar7[0x12] = reloc.pmgr_event_config.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    }
    else {
        _printk(0x8000aa9);
    }
    uVar10 = 1;
    hrtimer_init(piVar7 + 299,1,1);
    piVar7[0x134] = 0;
    if (piVar7[0x137] < 0x15) {
        uVar3 = 0x30000;
    }
    piVar7[0x130] = sym.llcc_perfmon_timer_handler.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt;
    regmap_read(piVar7[1],uVar3,&uStack_4c);
    *(piVar7 + 0x9ac) = 0;
    if (uStack_4c == 0x1010200) {
code_r0x080017e0:
        *(piVar7 + 0x9ac) = uVar10;
    }
    else {
        uVar4 = uStack_4c & 0xff000000;
        uVar10 = 2;
        if (((uVar4 == 0x2000000) || (uVar4 == 0x4000000)) || (uVar4 == 0x3000000)) goto code_r0x080017e0;
    }
    _printk(0x8000873,uStack_4c >> 0x18,uStack_4c >> 0x10 & 0xff,uStack_4c >> 8 & 0xff,piVar7[0x135]);
    iVar6 = 0;
code_r0x08001360:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.llcc_perfmon_remove;
        iVar1 = *(iVar8 + 0xa8) + 0x958;
        while (uVar9 = hrtimer_active(iVar1), (uVar9 & 1) != 0) {
            hrtimer_cancel(iVar1);
        }
        sysfs_remove_group(iVar8 + 0x10,obj.llcc_perfmon_group);
        *(iVar8 + 0xa8) = 0;
        return 0;
    }
    return iVar6;
}


// ===== sym.llcc_perfmon_remove @ 0x0800183c (size 100) =====

ulong sym.llcc_perfmon_remove(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8) + 0x958;
    while (uVar2 = hrtimer_active(iVar1), (uVar2 & 1) != 0) {
        hrtimer_cancel(iVar1);
    }
    sysfs_remove_group(arg1 + 0x10,obj.llcc_perfmon_group);
    *(arg1 + 0xa8) = 0;
    return 0;
}


// ===== sym.llcc_perfmon_timer_handler @ 0x080018a0 (size 128) =====

ulong sym.llcc_perfmon_timer_handler(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong uVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.perfmon_counter_dump(arg1 + -0x958);
    pcVar3 = *(*(arg1 + 0x30) + 0x30);
    uVar2 = *(arg1 + 0x48);
    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar3,0x8000380);
    uVar1 = (*pcVar3)();
    hrtimer_forward(arg1,uVar1,uVar2);
    return 1;
}


// ===== sym.perfmon_counter_dump_show @ 0x08001920 (size 1360) =====

int64_t sym.perfmon_counter_dump_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t arg1_00;
    int *piVar11;
    code *pcVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if (*(arg1_00 + 0x918) == 0) {
        _printk(0x80009f1);
        iVar13 = 0;
    }
    else {
        sym.perfmon_counter_dump(arg1_00);
        iVar8 = arg1_00 + 0x98;
        if (*(arg1_00 + 0x918) == 1) {
            uVar14 = 0;
            iVar13 = 0;
        }
        else {
            iVar13 = 0;
            uVar14 = 0;
            do {
                if (0x10 < uVar14) goto code_r0x08001e6c;
                piVar11 = iVar8 + uVar14 * 0x88;
                uVar6 = uVar14;
                iVar2 = scnprintf(arg2 + iVar13,0x1000 - iVar13,"Port %02d,Event %02d,",*piVar11,piVar11[1]);
                if ((*piVar11 == 3) && (1 < *(arg1_00 + 0x9a8))) {
                    uVar14 = uVar14 + 1;
                    if (*(arg1_00 + 0x50) == 0) {
code_r0x08001b7c:
                        iVar4 = 0;
                    }
                    else {
                        uVar5 = 0;
                        iVar4 = 0;
                        do {
                            if (uVar5 == 0x10) goto code_r0x08001e6c;
                            iVar7 = arg1_00 + uVar6 * 0x88 + uVar5 * 8;
                            uVar1 = *(arg1_00 + 0x50);
                            uVar5 = uVar5 + 1;
                            iVar9 = *(iVar7 + 0xa0);
                            iVar10 = *(iVar7 + 0x128);
                            *(iVar7 + 0xa0) = 0;
                            *(iVar7 + 0x128) = 0;
                            iVar4 = iVar9 + iVar4 + iVar10;
                        } while (uVar5 < uVar1);
                    }
                }
                else {
                    uVar1 = *(arg1_00 + 0x50);
                    if (uVar1 == 0) goto code_r0x08001b7c;
                    iVar7 = iVar8 + uVar6 * 0x88;
                    iVar4 = *(iVar7 + 8);
                    *(iVar7 + 8) = 0;
                    if (uVar1 != 1) {
                        iVar7 = iVar8 + uVar6 * 0x88;
                        iVar9 = *(iVar7 + 0x10);
                        *(iVar7 + 0x10) = 0;
                        iVar4 = iVar9 + iVar4;
                        if (2 < uVar1) {
                            iVar7 = iVar8 + uVar6 * 0x88;
                            iVar9 = *(iVar7 + 0x18);
                            *(iVar7 + 0x18) = 0;
                            iVar4 = iVar9 + iVar4;
                            if (uVar1 != 3) {
                                iVar7 = iVar8 + uVar6 * 0x88;
                                iVar9 = *(iVar7 + 0x20);
                                *(iVar7 + 0x20) = 0;
                                iVar4 = iVar9 + iVar4;
                                if (4 < uVar1) {
                                    iVar7 = iVar8 + uVar6 * 0x88;
                                    iVar9 = *(iVar7 + 0x28);
                                    *(iVar7 + 0x28) = 0;
                                    iVar4 = iVar9 + iVar4;
                                    if (uVar1 != 5) {
                                        iVar7 = iVar8 + uVar6 * 0x88;
                                        iVar9 = *(iVar7 + 0x30);
                                        *(iVar7 + 0x30) = 0;
                                        iVar4 = iVar9 + iVar4;
                                        if (6 < uVar1) {
                                            iVar7 = iVar8 + uVar6 * 0x88;
                                            iVar9 = *(iVar7 + 0x38);
                                            *(iVar7 + 0x38) = 0;
                                            iVar4 = iVar9 + iVar4;
                                            if (uVar1 != 7) {
                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                iVar9 = *(iVar7 + 0x40);
                                                *(iVar7 + 0x40) = 0;
                                                iVar4 = iVar9 + iVar4;
                                                if (8 < uVar1) {
                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                    iVar9 = *(iVar7 + 0x48);
                                                    *(iVar7 + 0x48) = 0;
                                                    iVar4 = iVar9 + iVar4;
                                                    if (uVar1 != 9) {
                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                        iVar9 = *(iVar7 + 0x50);
                                                        *(iVar7 + 0x50) = 0;
                                                        iVar4 = iVar9 + iVar4;
                                                        if (10 < uVar1) {
                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                            iVar9 = *(iVar7 + 0x58);
                                                            *(iVar7 + 0x58) = 0;
                                                            iVar4 = iVar9 + iVar4;
                                                            if (uVar1 != 0xb) {
                                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                                iVar9 = *(iVar7 + 0x60);
                                                                *(iVar7 + 0x60) = 0;
                                                                iVar4 = iVar9 + iVar4;
                                                                if (0xc < uVar1) {
                                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                                    iVar9 = *(iVar7 + 0x68);
                                                                    *(iVar7 + 0x68) = 0;
                                                                    iVar4 = iVar9 + iVar4;
                                                                    if (uVar1 != 0xd) {
                                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                                        iVar9 = *(iVar7 + 0x70);
                                                                        *(iVar7 + 0x70) = 0;
                                                                        iVar4 = iVar9 + iVar4;
                                                                        if (0xe < uVar1) {
                                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                                            iVar9 = *(iVar7 + 0x78);
                                                                            *(iVar7 + 0x78) = 0;
                                                                            iVar4 = iVar9 + iVar4;
                                                                            if (uVar1 != 0xf) {
                                                                                iVar9 = iVar8 + uVar6 * 0x88;
                                                                                iVar7 = *(iVar9 + 0x80);
                                                                                *(iVar9 + 0x80) = 0;
                                                                                if (0x10 < uVar1) goto code_r0x08001e6c;
                                                                                iVar4 = iVar7 + iVar4;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                iVar13 = iVar13 + iVar2;
                iVar2 = scnprintf(arg2 + iVar13,0x1000 - iVar13,"0x%016llx\n",iVar4);
                iVar13 = iVar13 + iVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 < *(arg1_00 + 0x918) - 1U);
        }
        iVar2 = scnprintf(arg2 + iVar13,0x1000 - iVar13,"CYCLE COUNT, ,");
        if (0x10 < uVar14) {
code_r0x08001e6c:
    //WARNING: Does not return
            pcVar12 = SoftwareBreakpoint(0x5512,0x8001e70);
            (*pcVar12)();
        }
        uVar1 = *(arg1_00 + 0x50);
        if (uVar1 == 0) {
            iVar4 = 0;
        }
        else {
            uVar6 = uVar14;
            iVar7 = iVar8 + uVar6 * 0x88;
            iVar4 = *(iVar7 + 8);
            *(iVar7 + 8) = 0;
            if (uVar1 != 1) {
                iVar7 = iVar8 + uVar6 * 0x88;
                iVar9 = *(iVar7 + 0x10);
                *(iVar7 + 0x10) = 0;
                iVar4 = iVar9 + iVar4;
                if (2 < uVar1) {
                    iVar7 = iVar8 + uVar6 * 0x88;
                    iVar9 = *(iVar7 + 0x18);
                    *(iVar7 + 0x18) = 0;
                    iVar4 = iVar9 + iVar4;
                    if (uVar1 != 3) {
                        iVar7 = iVar8 + uVar6 * 0x88;
                        iVar9 = *(iVar7 + 0x20);
                        *(iVar7 + 0x20) = 0;
                        iVar4 = iVar9 + iVar4;
                        if (4 < uVar1) {
                            iVar7 = iVar8 + uVar6 * 0x88;
                            iVar9 = *(iVar7 + 0x28);
                            *(iVar7 + 0x28) = 0;
                            iVar4 = iVar9 + iVar4;
                            if (uVar1 != 5) {
                                iVar7 = iVar8 + uVar6 * 0x88;
                                iVar9 = *(iVar7 + 0x30);
                                *(iVar7 + 0x30) = 0;
                                iVar4 = iVar9 + iVar4;
                                if (6 < uVar1) {
                                    iVar7 = iVar8 + uVar6 * 0x88;
                                    iVar9 = *(iVar7 + 0x38);
                                    *(iVar7 + 0x38) = 0;
                                    iVar4 = iVar9 + iVar4;
                                    if (uVar1 != 7) {
                                        iVar7 = iVar8 + uVar6 * 0x88;
                                        iVar9 = *(iVar7 + 0x40);
                                        *(iVar7 + 0x40) = 0;
                                        iVar4 = iVar9 + iVar4;
                                        if (8 < uVar1) {
                                            iVar7 = iVar8 + uVar6 * 0x88;
                                            iVar9 = *(iVar7 + 0x48);
                                            *(iVar7 + 0x48) = 0;
                                            iVar4 = iVar9 + iVar4;
                                            if (uVar1 != 9) {
                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                iVar9 = *(iVar7 + 0x50);
                                                *(iVar7 + 0x50) = 0;
                                                iVar4 = iVar9 + iVar4;
                                                if (10 < uVar1) {
                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                    iVar9 = *(iVar7 + 0x58);
                                                    *(iVar7 + 0x58) = 0;
                                                    iVar4 = iVar9 + iVar4;
                                                    if (uVar1 != 0xb) {
                                                        iVar7 = iVar8 + uVar6 * 0x88;
                                                        iVar9 = *(iVar7 + 0x60);
                                                        *(iVar7 + 0x60) = 0;
                                                        iVar4 = iVar9 + iVar4;
                                                        if (0xc < uVar1) {
                                                            iVar7 = iVar8 + uVar6 * 0x88;
                                                            iVar9 = *(iVar7 + 0x68);
                                                            *(iVar7 + 0x68) = 0;
                                                            iVar4 = iVar9 + iVar4;
                                                            if (uVar1 != 0xd) {
                                                                iVar7 = iVar8 + uVar6 * 0x88;
                                                                iVar9 = *(iVar7 + 0x70);
                                                                *(iVar7 + 0x70) = 0;
                                                                iVar4 = iVar9 + iVar4;
                                                                if (0xe < uVar1) {
                                                                    iVar7 = iVar8 + uVar6 * 0x88;
                                                                    iVar9 = *(iVar7 + 0x78);
                                                                    *(iVar7 + 0x78) = 0;
                                                                    iVar4 = iVar9 + iVar4;
                                                                    if (uVar1 != 0xf) {
                                                                        iVar8 = iVar8 + uVar6 * 0x88;
                                                                        iVar7 = *(iVar8 + 0x80);
                                                                        *(iVar8 + 0x80) = 0;
                                                                        if (0x10 < uVar1) goto code_r0x08001e6c;
                                                                        iVar4 = iVar7 + iVar4;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar13 = iVar13 + iVar2;
        iVar2 = scnprintf(arg2 + iVar13,0x1000 - iVar13,"0x%016llx\n",iVar4);
        iVar8 = *(arg1_00 + 0x9a0);
        iVar13 = iVar13 + iVar2;
        if (iVar8 != 0) {
            pcVar12 = *(*(arg1_00 + 0x988) + 0x30);
            __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
            uVar3 = (*pcVar12)();
            hrtimer_forward(arg1_00 + 0x958,uVar3,iVar8);
        }
    }
    return iVar13;
}


// ===== sym.perfmon_counter_dump @ 0x08001e70 (size 348) =====

uint64_t sym.perfmon_counter_dump(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t *in_x2;
    uint64_t in_x3;
    uint32_t uVar9;
    int64_t iVar10;
    code *pcVar11;
    uint32_t uVar12;
    uint *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar14;
    int64_t unaff_x22;
    int64_t iVar15;
    int64_t unaff_x23;
    code *unaff_x24;
    uint64_t unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_208;
    uint64_t uStack_200;
    ulong uStack_1f8;
    uint32_t *puStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    code *pcStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    code *pcStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint32_t uStack_164;
    uint32_t *puStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    code *pcStack_130;
    uint64_t uStack_128;
    code *pcStack_120;
    int64_t iStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    uint64_t uStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint32_t uStack_d4;
    uint32_t *puStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uStack_5c = 0;
    uVar5 = arg1;
    if (*(arg1 + 0x918) != 0) {
        unaff_x24 = 0x31010;
        uVar1 = 0x36010;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar1 = 0x31010;
        }
        uVar2 = 0x37000;
        if (*(arg1 + 0x9b8) != 0x29) {
            uVar2 = uVar1;
        }
        in_x2 = 0x1;
        uVar5 = regmap_write(*(arg1 + 8),uVar2);
        uVar9 = *(arg1 + 0x918);
        if (uVar9 != 0) {
            uVar14 = 0;
            unaff_x22 = arg1 + 0x10;
            unaff_x23 = arg1 + 0xa0;
            unaff_x24 = 0x31060;
            do {
                if (uVar14 == 0x11) {
code_r0x08001fc4:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x8001fc8);
                    (*pcVar11)();
                }
                iVar3 = 0x36060;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar3 = 0x31060;
                }
                iVar4 = 0x37008;
                if (*(arg1 + 0x9b8) != 0x29) {
                    iVar4 = iVar3;
                }
                if (*(arg1 + 0x50) != 0) {
                    unaff_x25 = 0;
                    uVar9 = iVar4 + uVar14 * 4;
                    unaff_x26 = uVar9;
                    do {
                        if (unaff_x25 == 0x10) goto code_r0x08001fc4;
                        in_x2 = &uStack_5c;
                        uVar5 = regmap_read(*arg1,uVar9 + *(unaff_x22 + unaff_x25 * 4));
                        iVar10 = unaff_x25 * 8;
                        unaff_x25 = unaff_x25 + 1;
                        *(unaff_x23 + iVar10) = *(unaff_x23 + iVar10) + uStack_5c;
                    } while (unaff_x25 < *(arg1 + 0x50));
                    uVar9 = *(arg1 + 0x918);
                }
                uVar14 = uVar14 + 1;
                unaff_x23 = unaff_x23 + 0x88;
            } while (uVar14 < uVar9);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_configure_store;
    pcStack_b8 = sym.perfmon_configure_store;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    iVar6 = *(iVar6 + 0x98);
    uStack_d4 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    iVar10 = iVar6 + 0x928;
    uVar5 = in_x3;
    puStack_d0 = in_x2;
    puStack_c0 = &stack0xffffffffffffffb0;
    mutex_lock(iVar10);
    if (*(iVar6 + 0x918) == 0) {
        iVar7 = strsep(&puStack_d0,0x8000726);
        if (iVar7 != 0) {
            unaff_x28 = iVar6 + 0x98;
            iVar15 = 0x8000726;
            unaff_x25 = iVar6 + 0x58;
            unaff_x26 = 0x10;
            unaff_x23 = 0x88;
            do {
                while( true ) {
                    iVar3 = kstrtoull(iVar7,0,&uStack_e0);
                    unaff_x22 = 0x8000726;
                    unaff_x27 = iVar7;
                    if ((((iVar3 != 0) || (*(iVar6 + 0x924) <= uStack_e0)) ||
                        (iVar7 = strsep(&puStack_d0,0x8000726), unaff_x22 = iVar15, iVar7 == 0)) ||
                       (iVar3 = kstrtoull(iVar7,0,&uStack_e8), iVar3 != 0)) goto code_r0x0800232c;
                    iVar7 = strsep(&puStack_d0,0x8000726);
                    unaff_x27 = iVar7;
                    if (uStack_e8 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar7 == 0) goto code_r0x0800232c;
                }
                if (uStack_e0 == 3) {
                    iVar3 = *(iVar6 + 0x9a8);
                }
                else {
                    iVar3 = 1;
                }
                uVar14 = uStack_d4;
                if (uStack_d4 == 0x10U - iVar3) break;
                if (0x10 < uStack_d4) {
code_r0x080023c4:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x80023c8);
                    (*pcVar11)();
                }
                puVar13 = unaff_x28 + uVar14 * 0x88;
                *puVar13 = uStack_e0;
                uVar9 = *(iVar6 + 0x50);
                puVar13[1] = uStack_e8;
                if (((((uVar9 != 0) && (*(unaff_x28 + uVar14 * 0x88 + 8) = 0, uVar9 != 1)) &&
                     ((*(unaff_x28 + uVar14 * 0x88 + 0x10) = 0, 2 < uVar9 &&
                      ((*(unaff_x28 + uVar14 * 0x88 + 0x18) = 0, uVar9 != 3 &&
                       (*(unaff_x28 + uVar14 * 0x88 + 0x20) = 0, 4 < uVar9)))))) &&
                    (((*(unaff_x28 + uVar14 * 0x88 + 0x28) = 0, uVar9 != 5 &&
                      ((((*(unaff_x28 + uVar14 * 0x88 + 0x30) = 0, 6 < uVar9 &&
                         (*(unaff_x28 + uVar14 * 0x88 + 0x38) = 0, uVar9 != 7)) &&
                        (*(unaff_x28 + uVar14 * 0x88 + 0x40) = 0, 8 < uVar9)) &&
                       ((*(unaff_x28 + uVar14 * 0x88 + 0x48) = 0, uVar9 != 9 &&
                        (*(unaff_x28 + uVar14 * 0x88 + 0x50) = 0, 10 < uVar9)))))) &&
                     ((((*(unaff_x28 + uVar14 * 0x88 + 0x58) = 0, uVar9 != 0xb &&
                        ((*(unaff_x28 + uVar14 * 0x88 + 0x60) = 0, 0xc < uVar9 &&
                         (*(unaff_x28 + uVar14 * 0x88 + 0x68) = 0, uVar9 != 0xd)))) &&
                       (*(unaff_x28 + uVar14 * 0x88 + 0x70) = 0, 0xe < uVar9)) &&
                      ((*(unaff_x28 + uVar14 * 0x88 + 0x78) = 0, uVar9 != 0xf &&
                       (*(unaff_x28 + uVar14 * 0x88 + 0x80) = 0, 0x10 < uVar9)))))))) || (7 < uStack_e0))
                goto code_r0x080023c4;
                unaff_x24 = *(unaff_x25 + uStack_e0 * 8);
                pcVar11 = *unaff_x24;
                if (7 < (pcVar11 + -0x8001280 >> 3 | pcVar11 << 0x3d)) {
                    pcStack_f0 = pcVar11;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar11,0x80003a0);
                    pcVar11 = pcStack_f0;
                }
                (*pcVar11)(iVar6,uStack_e8 & 0xffffffff,&uStack_d4,1);
                uVar9 = uStack_d4;
                uStack_d4 = uStack_d4 + 1;
                uVar5 = uStack_e0;
                _printk(0x8000656,uVar9,uStack_e8);
                uVar9 = *(iVar6 + 0x91c);
                uVar12 = 1 << (uStack_e0 & 0x1f);
                if (((uVar12 & uVar9) == 0) && (pcVar11 = *(unaff_x24 + 8), pcVar11 != NULL)) {
                    if (4 < (pcVar11 + -0x8001258 >> 3 | pcVar11 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar11,0x80003c0);
                        unaff_x24 = pcVar11;
                    }
                    (*pcVar11)(iVar6,1);
                    uVar9 = *(iVar6 + 0x91c);
                    uVar12 = 1 << (uStack_e0 & 0x1f);
                }
                *(iVar6 + 0x91c) = uVar9 | uVar12;
            } while (iVar7 != 0);
        }
code_r0x0800232c:
        in_x2 = 0xc1000000;
        iVar3 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        iVar4 = uStack_d4 * 4;
        uStack_d4 = uStack_d4 + 1;
        regmap_write(*(iVar6 + 8),iVar3 + iVar4);
        *(iVar6 + 0x918) = uStack_d4;
    }
    else {
        _printk(0x8000bed);
        in_x3 = 0xffffffffffffffea;
    }
    mutex_unlock(iVar10);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return in_x3;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_00 = sym.perfmon_remove_store;
    pcStack_148 = sym.perfmon_remove_store;
    iVar7 = sp_el0;
    iStack_158 = *(iVar7 + 0x5e0);
    iVar15 = *(iVar15 + 0x98);
    uStack_164 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    iVar7 = iVar15 + 0x928;
    uVar14 = uVar5;
    puStack_160 = in_x2;
    ppuStack_150 = &puStack_c0;
    iStack_140 = unaff_x28;
    iStack_138 = unaff_x27;
    pcStack_130 = unaff_x26;
    uStack_128 = unaff_x25;
    pcStack_120 = unaff_x24;
    iStack_118 = unaff_x23;
    iStack_110 = unaff_x22;
    iStack_108 = iVar6;
    iStack_100 = iVar10;
    uStack_f8 = in_x3;
    mutex_lock(iVar7);
    if (*(iVar15 + 0x918) == 0) {
        _printk(0x80009c8);
        uVar5 = 0xffffffffffffffea;
    }
    else {
        iVar10 = strsep(&puStack_160,0x8000726);
        if (iVar10 == 0) {
            iVar3 = 0;
        }
        else {
            unaff_x28 = iVar15 + 0x98;
            unaff_x22 = 0x8000726;
            unaff_x25 = iVar15 + 0x58;
            unaff_x24 = 0x8000ae3;
            unaff_x23 = 1;
            do {
                while( true ) {
                    iVar3 = kstrtoull(iVar10,0,&uStack_170);
                    if ((((iVar3 != 0) || (*(iVar15 + 0x924) <= uStack_170)) ||
                        (iVar6 = strsep(&puStack_160,0x8000726), iVar6 == 0)) ||
                       (iVar3 = kstrtoull(iVar6,0,&uStack_178), iVar3 != 0)) goto code_r0x08002620;
                    iVar10 = strsep(&puStack_160,0x8000726);
                    if (uStack_178 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar10 == 0) goto code_r0x08002620;
                }
                if (uStack_170 == 3) {
                    iVar3 = *(iVar15 + 0x9a8);
                }
                else {
                    iVar3 = 1;
                }
                if (uStack_164 == *(iVar15 + 0x918) - iVar3) break;
                if ((0x10 < uStack_164) || (*(unaff_x28 + uStack_164 * 0x88) = 8, 7 < uStack_170)) {
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x80026bc);
                    (*pcVar11)();
                }
                unaff_x26 = *(unaff_x25 + uStack_170 * 8);
                pcVar11 = *unaff_x26;
                if (7 < (pcVar11 + -0x8001280 >> 3 | pcVar11 << 0x3d)) {
                    pcStack_180 = pcVar11;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar11,0x80003e0);
                    pcVar11 = pcStack_180;
                }
                (*pcVar11)(iVar15,uStack_178 & 0xffffffff,&uStack_164,0);
                uVar9 = uStack_164;
                uStack_164 = uStack_164 + 1;
                uVar14 = uStack_170;
                _printk(0x8000ae3,uVar9,uStack_178,uStack_170);
                uVar9 = *(iVar15 + 0x91c);
                uVar12 = 1 << (uStack_170 & 0x1f);
                if (((uVar12 & uVar9) != 0) && (pcVar11 = *(unaff_x26 + 8), pcVar11 != NULL)) {
                    if (4 < (pcVar11 + -0x8001258 >> 3 | pcVar11 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar11,0x8000400);
                        unaff_x26 = pcVar11;
                    }
                    (*pcVar11)(iVar15,0);
                    uVar9 = *(iVar15 + 0x91c);
                    uVar12 = 1 << (uStack_170 & 0x1f);
                }
                *(iVar15 + 0x91c) = uVar9 & (uVar12 ^ 0xffffffff);
            } while (iVar10 != 0);
code_r0x08002620:
            iVar3 = uStack_164 << 2;
            unaff_x27 = iVar10;
        }
        in_x2 = NULL;
        iVar4 = 0x36020;
        if (*(iVar15 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar15 + 8),iVar4 + iVar3);
        *(iVar15 + 0x918) = 0;
    }
    mutex_unlock(iVar7);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_158) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.perfmon_filter_config_store;
    pcStack_1d8 = sym.perfmon_filter_config_store;
    iVar10 = sp_el0;
    iStack_1e8 = *(iVar10 + 0x5e0);
    iVar10 = *(iVar6 + 0x98);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_208 = 0;
    puStack_1f0 = in_x2;
    pppuStack_1e0 = &ppuStack_150;
    iStack_1d0 = unaff_x28;
    iStack_1c8 = unaff_x27;
    pcStack_1c0 = unaff_x26;
    uStack_1b8 = unaff_x25;
    pcStack_1b0 = unaff_x24;
    iStack_1a8 = unaff_x23;
    iStack_1a0 = unaff_x22;
    iStack_198 = iVar15;
    iStack_190 = iVar7;
    uStack_188 = uVar5;
    if (*(iVar10 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar6 = iVar10 + 0x928;
    mutex_lock(iVar6);
    iVar7 = strsep(&puStack_1f0,0x8000726);
    if ((iVar7 == 0) || (iVar3 = sym.find_filter_type(iVar7), iVar3 == 10)) {
        uVar8 = 0x8000c64;
    }
    else {
        iVar7 = strsep(&puStack_1f0,0x8000726);
        if (iVar7 == 0) {
code_r0x08002884:
            uVar8 = 0x800074c;
        }
        else {
            iVar4 = kstrtoull(iVar7,0,&uStack_200);
            if (iVar4 == 0) {
                if ((iVar3 == 0) && (0x1f < uStack_200)) {
                    uVar8 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar7 = strsep(&puStack_1f0,0x8000726);
                if (iVar7 == 0) goto code_r0x08002884;
                iVar4 = kstrtoull(iVar7,0,&uStack_1f8);
                if (iVar4 == 0) {
                    iVar7 = strsep(&puStack_1f0,0x8000726);
                    if (iVar7 != 0) {
                        uVar8 = 0x800078f;
                        do {
                            iVar4 = kstrtoull(iVar7,0,&uStack_208);
                            if (iVar4 != 0) break;
                            if (7 < uStack_208) goto code_r0x080028b4;
                            *(iVar10 + 0x920) = *(iVar10 + 0x920) | 1 << (uStack_208 & 0x1f);
                            pcVar11 = *(*(iVar10 + 0x58 + uStack_208 * 8) + 0x10);
                            if (pcVar11 != NULL) {
                                if (5 < (pcVar11 + -0x80012c0 >> 3 | pcVar11 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar11,0x8000420);
                                }
                                (*pcVar11)(iVar10,iVar3,uStack_200,uStack_1f8,1);
                            }
                            iVar7 = strsep(&puStack_1f0,0x8000726);
                        } while (iVar7 != 0);
                    }
                    mutex_unlock(iVar6);
                    goto code_r0x080028c8;
                }
            }
            uVar8 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar8);
    mutex_unlock(iVar6);
    uVar14 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_1e8) {
        uVar8 = __stack_chk_fail();
        *extraout_x18_02 = sym.find_filter_type;
        uVar5 = strcmp(uVar8,"SCID");
        if (uVar5 != 0) {
            iVar3 = strcmp(uVar8,0x800064b);
            if (iVar3 == 0) {
                uVar5 = 1;
            }
            else {
                iVar3 = strcmp(uVar8,"PROFILING_TAG");
                if (iVar3 == 0) {
                    uVar5 = 2;
                }
                else {
                    iVar3 = strcmp(uVar8,"WAY_ID");
                    if (iVar3 == 0) {
                        uVar5 = 3;
                    }
                    else {
                        iVar3 = strcmp(uVar8,"OPCODE");
                        if (iVar3 == 0) {
                            uVar5 = 4;
                        }
                        else {
                            iVar3 = strcmp(uVar8,"CACHEALLOC");
                            if (iVar3 == 0) {
                                uVar5 = 5;
                            }
                            else {
                                iVar3 = strcmp(uVar8,"MEMTAGOPS");
                                if (iVar3 == 0) {
                                    uVar5 = 6;
                                }
                                else {
                                    iVar3 = strcmp(uVar8,"MULTISCID");
                                    if (iVar3 == 0) {
                                        uVar5 = 7;
                                    }
                                    else {
                                        iVar3 = strcmp(uVar8,"DIRTYINFO");
                                        if (iVar3 == 0) {
                                            uVar5 = 8;
                                        }
                                        else {
                                            iVar3 = strcmp(uVar8,"ADDR_MASK");
                                            uVar9 = 9;
                                            if (iVar3 != 0) {
                                                uVar9 = 10;
                                            }
                                            uVar5 = uVar9;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar5;
    }
    return uVar14;
}


// ===== sym.perfmon_configure_store @ 0x08001fcc (size 1024) =====

uint64_t sym.perfmon_configure_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    uint *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar12;
    ulong unaff_x22;
    ulong uVar13;
    ulong unaff_x23;
    code *unaff_x24;
    int64_t unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    code *pcStack_160;
    int64_t iStack_158;
    code *pcStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    int64_t iStack_130;
    uint64_t uStack_128;
    code *pcStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    code *pcStack_d0;
    int64_t iStack_c8;
    code *pcStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar12 = *(arg1 + 0x98);
    uStack_74 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar5 = iVar12 + 0x928;
    uVar6 = arg3;
    iStack_70 = arg2;
    mutex_lock(iVar5);
    if (*(iVar12 + 0x918) == 0) {
        iVar3 = strsep(&iStack_70,0x8000726);
        if (iVar3 != 0) {
            unaff_x28 = iVar12 + 0x98;
            uVar13 = 0x8000726;
            unaff_x25 = iVar12 + 0x58;
            unaff_x26 = 0x10;
            unaff_x23 = 0x88;
            do {
                while( true ) {
                    iVar1 = kstrtoull(iVar3,0,&uStack_80);
                    unaff_x22 = 0x8000726;
                    unaff_x27 = iVar3;
                    if ((((iVar1 != 0) || (*(iVar12 + 0x924) <= uStack_80)) ||
                        (iVar3 = strsep(&iStack_70,0x8000726), unaff_x22 = uVar13, iVar3 == 0)) ||
                       (iVar1 = kstrtoull(iVar3,0,&uStack_88), iVar1 != 0)) goto code_r0x0800232c;
                    iVar3 = strsep(&iStack_70,0x8000726);
                    unaff_x27 = iVar3;
                    if (uStack_88 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar3 == 0) goto code_r0x0800232c;
                }
                if (uStack_80 == 3) {
                    iVar1 = *(iVar12 + 0x9a8);
                }
                else {
                    iVar1 = 1;
                }
                uVar8 = uStack_74;
                if (uStack_74 == 0x10U - iVar1) break;
                if (0x10 < uStack_74) {
code_r0x080023c4:
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80023c8);
                    (*pcVar9)();
                }
                puVar11 = unaff_x28 + uVar8 * 0x88;
                *puVar11 = uStack_80;
                uVar7 = *(iVar12 + 0x50);
                puVar11[1] = uStack_88;
                if (((((uVar7 != 0) && (*(unaff_x28 + uVar8 * 0x88 + 8) = 0, uVar7 != 1)) &&
                     ((*(unaff_x28 + uVar8 * 0x88 + 0x10) = 0, 2 < uVar7 &&
                      ((*(unaff_x28 + uVar8 * 0x88 + 0x18) = 0, uVar7 != 3 &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x20) = 0, 4 < uVar7)))))) &&
                    (((*(unaff_x28 + uVar8 * 0x88 + 0x28) = 0, uVar7 != 5 &&
                      ((((*(unaff_x28 + uVar8 * 0x88 + 0x30) = 0, 6 < uVar7 &&
                         (*(unaff_x28 + uVar8 * 0x88 + 0x38) = 0, uVar7 != 7)) &&
                        (*(unaff_x28 + uVar8 * 0x88 + 0x40) = 0, 8 < uVar7)) &&
                       ((*(unaff_x28 + uVar8 * 0x88 + 0x48) = 0, uVar7 != 9 &&
                        (*(unaff_x28 + uVar8 * 0x88 + 0x50) = 0, 10 < uVar7)))))) &&
                     ((((*(unaff_x28 + uVar8 * 0x88 + 0x58) = 0, uVar7 != 0xb &&
                        ((*(unaff_x28 + uVar8 * 0x88 + 0x60) = 0, 0xc < uVar7 &&
                         (*(unaff_x28 + uVar8 * 0x88 + 0x68) = 0, uVar7 != 0xd)))) &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x70) = 0, 0xe < uVar7)) &&
                      ((*(unaff_x28 + uVar8 * 0x88 + 0x78) = 0, uVar7 != 0xf &&
                       (*(unaff_x28 + uVar8 * 0x88 + 0x80) = 0, 0x10 < uVar7)))))))) || (7 < uStack_80))
                goto code_r0x080023c4;
                unaff_x24 = *(unaff_x25 + uStack_80 * 8);
                pcVar9 = *unaff_x24;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_90 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003a0);
                    pcVar9 = pcStack_90;
                }
                (*pcVar9)(iVar12,uStack_88 & 0xffffffff,&uStack_74,1);
                uVar7 = uStack_74;
                uStack_74 = uStack_74 + 1;
                uVar6 = uStack_80;
                _printk(0x8000656,uVar7,uStack_88);
                uVar7 = *(iVar12 + 0x91c);
                uVar10 = 1 << (uStack_80 & 0x1f);
                if (((uVar10 & uVar7) == 0) && (pcVar9 = *(unaff_x24 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x80003c0);
                        unaff_x24 = pcVar9;
                    }
                    (*pcVar9)(iVar12,1);
                    uVar7 = *(iVar12 + 0x91c);
                    uVar10 = 1 << (uStack_80 & 0x1f);
                }
                *(iVar12 + 0x91c) = uVar7 | uVar10;
            } while (iVar3 != 0);
        }
code_r0x0800232c:
        arg2 = 0xc1000000;
        iVar1 = 0x36020;
        if (*(iVar12 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        iVar2 = uStack_74 * 4;
        uStack_74 = uStack_74 + 1;
        regmap_write(*(iVar12 + 8),iVar1 + iVar2);
        *(iVar12 + 0x918) = uStack_74;
    }
    else {
        _printk(0x8000bed);
        arg3 = 0xffffffffffffffea;
    }
    mutex_unlock(iVar5);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_remove_store;
    pcStack_e8 = sym.perfmon_remove_store;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    iVar4 = *(iVar4 + 0x98);
    uStack_104 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    iVar3 = iVar4 + 0x928;
    uVar8 = uVar6;
    iStack_100 = arg2;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x28;
    iStack_d8 = unaff_x27;
    pcStack_d0 = unaff_x26;
    iStack_c8 = unaff_x25;
    pcStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    iStack_a8 = iVar12;
    iStack_a0 = iVar5;
    uStack_98 = arg3;
    mutex_lock(iVar3);
    if (*(iVar4 + 0x918) == 0) {
        _printk(0x80009c8);
        uVar6 = 0xffffffffffffffea;
    }
    else {
        iVar5 = strsep(&iStack_100,0x8000726);
        if (iVar5 == 0) {
            iVar1 = 0;
        }
        else {
            unaff_x28 = iVar4 + 0x98;
            unaff_x22 = 0x8000726;
            unaff_x25 = iVar4 + 0x58;
            unaff_x24 = 0x8000ae3;
            unaff_x23 = 1;
            do {
                while( true ) {
                    iVar1 = kstrtoull(iVar5,0,&uStack_110);
                    if ((((iVar1 != 0) || (*(iVar4 + 0x924) <= uStack_110)) ||
                        (iVar12 = strsep(&iStack_100,0x8000726), iVar12 == 0)) ||
                       (iVar1 = kstrtoull(iVar12,0,&uStack_118), iVar1 != 0)) goto code_r0x08002620;
                    iVar5 = strsep(&iStack_100,0x8000726);
                    if (uStack_118 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar5 == 0) goto code_r0x08002620;
                }
                if (uStack_110 == 3) {
                    iVar1 = *(iVar4 + 0x9a8);
                }
                else {
                    iVar1 = 1;
                }
                if (uStack_104 == *(iVar4 + 0x918) - iVar1) break;
                if ((0x10 < uStack_104) || (*(unaff_x28 + uStack_104 * 0x88) = 8, 7 < uStack_110)) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80026bc);
                    (*pcVar9)();
                }
                unaff_x26 = *(unaff_x25 + uStack_110 * 8);
                pcVar9 = *unaff_x26;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_120 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003e0);
                    pcVar9 = pcStack_120;
                }
                (*pcVar9)(iVar4,uStack_118 & 0xffffffff,&uStack_104,0);
                uVar7 = uStack_104;
                uStack_104 = uStack_104 + 1;
                uVar8 = uStack_110;
                _printk(0x8000ae3,uVar7,uStack_118,uStack_110);
                uVar7 = *(iVar4 + 0x91c);
                uVar10 = 1 << (uStack_110 & 0x1f);
                if (((uVar10 & uVar7) != 0) && (pcVar9 = *(unaff_x26 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x8000400);
                        unaff_x26 = pcVar9;
                    }
                    (*pcVar9)(iVar4,0);
                    uVar7 = *(iVar4 + 0x91c);
                    uVar10 = 1 << (uStack_110 & 0x1f);
                }
                *(iVar4 + 0x91c) = uVar7 & (uVar10 ^ 0xffffffff);
            } while (iVar5 != 0);
code_r0x08002620:
            iVar1 = uStack_104 << 2;
            unaff_x27 = iVar5;
        }
        arg2 = 0;
        iVar2 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar2 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar2 + iVar1);
        *(iVar4 + 0x918) = 0;
    }
    mutex_unlock(iVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_f8) {
        return uVar6;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.perfmon_filter_config_store;
    pcStack_178 = sym.perfmon_filter_config_store;
    iVar5 = sp_el0;
    iStack_188 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar12 + 0x98);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    iStack_190 = arg2;
    ppuStack_180 = &puStack_f0;
    iStack_170 = unaff_x28;
    iStack_168 = unaff_x27;
    pcStack_160 = unaff_x26;
    iStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_140 = unaff_x22;
    iStack_138 = iVar4;
    iStack_130 = iVar3;
    uStack_128 = uVar6;
    if (*(iVar5 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar12 = iVar5 + 0x928;
    mutex_lock(iVar12);
    iVar3 = strsep(&iStack_190,0x8000726);
    if ((iVar3 == 0) || (iVar1 = sym.find_filter_type(iVar3), iVar1 == 10)) {
        uVar13 = 0x8000c64;
    }
    else {
        iVar3 = strsep(&iStack_190,0x8000726);
        if (iVar3 == 0) {
code_r0x08002884:
            uVar13 = 0x800074c;
        }
        else {
            iVar2 = kstrtoull(iVar3,0,&uStack_1a0);
            if (iVar2 == 0) {
                if ((iVar1 == 0) && (0x1f < uStack_1a0)) {
                    uVar13 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar3 = strsep(&iStack_190,0x8000726);
                if (iVar3 == 0) goto code_r0x08002884;
                iVar2 = kstrtoull(iVar3,0,&uStack_198);
                if (iVar2 == 0) {
                    iVar3 = strsep(&iStack_190,0x8000726);
                    if (iVar3 != 0) {
                        uVar13 = 0x800078f;
                        do {
                            iVar2 = kstrtoull(iVar3,0,&uStack_1a8);
                            if (iVar2 != 0) break;
                            if (7 < uStack_1a8) goto code_r0x080028b4;
                            *(iVar5 + 0x920) = *(iVar5 + 0x920) | 1 << (uStack_1a8 & 0x1f);
                            pcVar9 = *(*(iVar5 + 0x58 + uStack_1a8 * 8) + 0x10);
                            if (pcVar9 != NULL) {
                                if (5 < (pcVar9 + -0x80012c0 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar9,0x8000420);
                                }
                                (*pcVar9)(iVar5,iVar1,uStack_1a0,uStack_198,1);
                            }
                            iVar3 = strsep(&iStack_190,0x8000726);
                        } while (iVar3 != 0);
                    }
                    mutex_unlock(iVar12);
                    goto code_r0x080028c8;
                }
            }
            uVar13 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar13);
    mutex_unlock(iVar12);
    uVar8 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_188) {
        uVar13 = __stack_chk_fail();
        *extraout_x18_01 = sym.find_filter_type;
        uVar6 = strcmp(uVar13,"SCID");
        if (uVar6 != 0) {
            iVar1 = strcmp(uVar13,0x800064b);
            if (iVar1 == 0) {
                uVar6 = 1;
            }
            else {
                iVar1 = strcmp(uVar13,"PROFILING_TAG");
                if (iVar1 == 0) {
                    uVar6 = 2;
                }
                else {
                    iVar1 = strcmp(uVar13,"WAY_ID");
                    if (iVar1 == 0) {
                        uVar6 = 3;
                    }
                    else {
                        iVar1 = strcmp(uVar13,"OPCODE");
                        if (iVar1 == 0) {
                            uVar6 = 4;
                        }
                        else {
                            iVar1 = strcmp(uVar13,"CACHEALLOC");
                            if (iVar1 == 0) {
                                uVar6 = 5;
                            }
                            else {
                                iVar1 = strcmp(uVar13,"MEMTAGOPS");
                                if (iVar1 == 0) {
                                    uVar6 = 6;
                                }
                                else {
                                    iVar1 = strcmp(uVar13,"MULTISCID");
                                    if (iVar1 == 0) {
                                        uVar6 = 7;
                                    }
                                    else {
                                        iVar1 = strcmp(uVar13,"DIRTYINFO");
                                        if (iVar1 == 0) {
                                            uVar6 = 8;
                                        }
                                        else {
                                            iVar1 = strcmp(uVar13,"ADDR_MASK");
                                            uVar7 = 9;
                                            if (iVar1 != 0) {
                                                uVar7 = 10;
                                            }
                                            uVar6 = uVar7;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar6;
    }
    return uVar8;
}


// ===== sym.perfmon_remove_store @ 0x080023cc (size 756) =====

uint64_t sym.perfmon_remove_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    ulong unaff_x22;
    ulong unaff_x23;
    ulong unaff_x24;
    int64_t unaff_x25;
    code *unaff_x26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    code *pcStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    uStack_74 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar1 = iVar11 + 0x928;
    uVar7 = arg3;
    iStack_70 = arg2;
    mutex_lock(iVar1);
    if (*(iVar11 + 0x918) == 0) {
        _printk(0x80009c8);
        arg3 = 0xffffffffffffffea;
    }
    else {
        iVar4 = strsep(&iStack_70,0x8000726);
        if (iVar4 == 0) {
            iVar2 = 0;
        }
        else {
            unaff_x28 = iVar11 + 0x98;
            unaff_x22 = 0x8000726;
            unaff_x25 = iVar11 + 0x58;
            unaff_x24 = 0x8000ae3;
            unaff_x23 = 1;
            do {
                while( true ) {
                    iVar2 = kstrtoull(iVar4,0,&uStack_80);
                    if ((((iVar2 != 0) || (*(iVar11 + 0x924) <= uStack_80)) ||
                        (iVar5 = strsep(&iStack_70,0x8000726), iVar5 == 0)) ||
                       (iVar2 = kstrtoull(iVar5,0,&uStack_88), iVar2 != 0)) goto code_r0x08002620;
                    iVar4 = strsep(&iStack_70,0x8000726);
                    if (uStack_88 < 0x80) break;
                    _printk(0x8000a1a);
                    if (iVar4 == 0) goto code_r0x08002620;
                }
                if (uStack_80 == 3) {
                    iVar2 = *(iVar11 + 0x9a8);
                }
                else {
                    iVar2 = 1;
                }
                if (uStack_74 == *(iVar11 + 0x918) - iVar2) break;
                if ((0x10 < uStack_74) || (*(unaff_x28 + uStack_74 * 0x88) = 8, 7 < uStack_80)) {
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x80026bc);
                    (*pcVar9)();
                }
                unaff_x26 = *(unaff_x25 + uStack_80 * 8);
                pcVar9 = *unaff_x26;
                if (7 < (pcVar9 + -0x8001280 >> 3 | pcVar9 << 0x3d)) {
                    pcStack_90 = pcVar9;
                    __cfi_slowpath_diag(0xa6379e077e41bb3,pcVar9,0x80003e0);
                    pcVar9 = pcStack_90;
                }
                (*pcVar9)(iVar11,uStack_88 & 0xffffffff,&uStack_74,0);
                uVar8 = uStack_74;
                uStack_74 = uStack_74 + 1;
                uVar7 = uStack_80;
                _printk(0x8000ae3,uVar8,uStack_88,uStack_80);
                uVar8 = *(iVar11 + 0x91c);
                uVar10 = 1 << (uStack_80 & 0x1f);
                if (((uVar10 & uVar8) != 0) && (pcVar9 = *(unaff_x26 + 8), pcVar9 != NULL)) {
                    if (4 < (pcVar9 + -0x8001258 >> 3 | pcVar9 << 0x3d)) {
                        __cfi_slowpath_diag(0xed36373854a5f14d,pcVar9,0x8000400);
                        unaff_x26 = pcVar9;
                    }
                    (*pcVar9)(iVar11,0);
                    uVar8 = *(iVar11 + 0x91c);
                    uVar10 = 1 << (uStack_80 & 0x1f);
                }
                *(iVar11 + 0x91c) = uVar8 & (uVar10 ^ 0xffffffff);
            } while (iVar4 != 0);
code_r0x08002620:
            iVar2 = uStack_74 << 2;
            unaff_x27 = iVar4;
        }
        arg2 = 0;
        iVar3 = 0x36020;
        if (*(iVar11 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar11 + 8),iVar3 + iVar2);
        *(iVar11 + 0x918) = 0;
    }
    mutex_unlock(iVar1);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_filter_config_store;
    pcStack_e8 = sym.perfmon_filter_config_store;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iVar4 = *(iVar5 + 0x98);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    iStack_100 = arg2;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x28;
    iStack_d8 = unaff_x27;
    pcStack_d0 = unaff_x26;
    iStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    iStack_a8 = iVar11;
    iStack_a0 = iVar1;
    uStack_98 = arg3;
    if (*(iVar4 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar1 = iVar4 + 0x928;
    mutex_lock(iVar1);
    iVar11 = strsep(&iStack_100,0x8000726);
    if ((iVar11 == 0) || (iVar2 = sym.find_filter_type(iVar11), iVar2 == 10)) {
        uVar6 = 0x8000c64;
    }
    else {
        iVar11 = strsep(&iStack_100,0x8000726);
        if (iVar11 == 0) {
code_r0x08002884:
            uVar6 = 0x800074c;
        }
        else {
            iVar3 = kstrtoull(iVar11,0,&uStack_110);
            if (iVar3 == 0) {
                if ((iVar2 == 0) && (0x1f < uStack_110)) {
                    uVar6 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar11 = strsep(&iStack_100,0x8000726);
                if (iVar11 == 0) goto code_r0x08002884;
                iVar3 = kstrtoull(iVar11,0,&uStack_108);
                if (iVar3 == 0) {
                    iVar11 = strsep(&iStack_100,0x8000726);
                    if (iVar11 != 0) {
                        uVar6 = 0x800078f;
                        do {
                            iVar3 = kstrtoull(iVar11,0,&uStack_118);
                            if (iVar3 != 0) break;
                            if (7 < uStack_118) goto code_r0x080028b4;
                            *(iVar4 + 0x920) = *(iVar4 + 0x920) | 1 << (uStack_118 & 0x1f);
                            pcVar9 = *(*(iVar4 + 0x58 + uStack_118 * 8) + 0x10);
                            if (pcVar9 != NULL) {
                                if (5 < (pcVar9 + -0x80012c0 >> 3 | pcVar9 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar9,0x8000420);
                                }
                                (*pcVar9)(iVar4,iVar2,uStack_110,uStack_108,1);
                            }
                            iVar11 = strsep(&iStack_100,0x8000726);
                        } while (iVar11 != 0);
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x080028c8;
                }
            }
            uVar6 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar6);
    mutex_unlock(iVar1);
    uVar7 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_f8) {
        uVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.find_filter_type;
        uVar7 = strcmp(uVar6,"SCID");
        if (uVar7 != 0) {
            iVar2 = strcmp(uVar6,0x800064b);
            if (iVar2 == 0) {
                uVar7 = 1;
            }
            else {
                iVar2 = strcmp(uVar6,"PROFILING_TAG");
                if (iVar2 == 0) {
                    uVar7 = 2;
                }
                else {
                    iVar2 = strcmp(uVar6,"WAY_ID");
                    if (iVar2 == 0) {
                        uVar7 = 3;
                    }
                    else {
                        iVar2 = strcmp(uVar6,"OPCODE");
                        if (iVar2 == 0) {
                            uVar7 = 4;
                        }
                        else {
                            iVar2 = strcmp(uVar6,"CACHEALLOC");
                            if (iVar2 == 0) {
                                uVar7 = 5;
                            }
                            else {
                                iVar2 = strcmp(uVar6,"MEMTAGOPS");
                                if (iVar2 == 0) {
                                    uVar7 = 6;
                                }
                                else {
                                    iVar2 = strcmp(uVar6,"MULTISCID");
                                    if (iVar2 == 0) {
                                        uVar7 = 7;
                                    }
                                    else {
                                        iVar2 = strcmp(uVar6,"DIRTYINFO");
                                        if (iVar2 == 0) {
                                            uVar7 = 8;
                                        }
                                        else {
                                            iVar2 = strcmp(uVar6,"ADDR_MASK");
                                            uVar8 = 9;
                                            if (iVar2 != 0) {
                                                uVar8 = 10;
                                            }
                                            uVar7 = uVar8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar7;
    }
    return uVar7;
}


// ===== sym.perfmon_filter_config_store @ 0x080026c0 (size 588) =====

uint64_t sym.perfmon_filter_config_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x98);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    iStack_70 = arg2;
    if (*(iVar9 + 0x918) != 0) {
        _printk(0x8000b90);
        goto code_r0x080028c8;
    }
    iVar1 = iVar9 + 0x928;
    mutex_lock(iVar1);
    iVar4 = strsep(&iStack_70,0x8000726);
    if ((iVar4 == 0) || (iVar2 = sym.find_filter_type(iVar4), iVar2 == 10)) {
        uVar5 = 0x8000c64;
    }
    else {
        iVar4 = strsep(&iStack_70,0x8000726);
        if (iVar4 == 0) {
code_r0x08002884:
            uVar5 = 0x800074c;
        }
        else {
            iVar3 = kstrtoull(iVar4,0,&uStack_80);
            if (iVar3 == 0) {
                if ((iVar2 == 0) && (0x1f < uStack_80)) {
                    uVar5 = 0x8000608;
                    goto code_r0x080028b4;
                }
                iVar4 = strsep(&iStack_70,0x8000726);
                if (iVar4 == 0) goto code_r0x08002884;
                iVar3 = kstrtoull(iVar4,0,&uStack_78);
                if (iVar3 == 0) {
                    iVar4 = strsep(&iStack_70,0x8000726);
                    if (iVar4 != 0) {
                        uVar5 = 0x800078f;
                        do {
                            iVar3 = kstrtoull(iVar4,0,&uStack_88);
                            if (iVar3 != 0) break;
                            if (7 < uStack_88) goto code_r0x080028b4;
                            *(iVar9 + 0x920) = *(iVar9 + 0x920) | 1 << (uStack_88 & 0x1f);
                            pcVar8 = *(*(iVar9 + 0x58 + uStack_88 * 8) + 0x10);
                            if (pcVar8 != NULL) {
                                if (5 < (pcVar8 + -0x80012c0 >> 3 | pcVar8 << 0x3d)) {
                                    __cfi_slowpath_diag(0x2689878a22517aed,pcVar8,0x8000420);
                                }
                                (*pcVar8)(iVar9,iVar2,uStack_80,uStack_78,1);
                            }
                            iVar4 = strsep(&iStack_70,0x8000726);
                        } while (iVar4 != 0);
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x080028c8;
                }
            }
            uVar5 = 0x8000b26;
        }
    }
code_r0x080028b4:
    _printk(uVar5);
    mutex_unlock(iVar1);
    arg3 = 0xffffffffffffffea;
code_r0x080028c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return arg3;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.find_filter_type;
    uVar6 = strcmp(uVar5,"SCID");
    if (uVar6 != 0) {
        iVar2 = strcmp(uVar5,0x800064b);
        if (iVar2 == 0) {
            uVar6 = 1;
        }
        else {
            iVar2 = strcmp(uVar5,"PROFILING_TAG");
            if (iVar2 == 0) {
                uVar6 = 2;
            }
            else {
                iVar2 = strcmp(uVar5,"WAY_ID");
                if (iVar2 == 0) {
                    uVar6 = 3;
                }
                else {
                    iVar2 = strcmp(uVar5,"OPCODE");
                    if (iVar2 == 0) {
                        uVar6 = 4;
                    }
                    else {
                        iVar2 = strcmp(uVar5,"CACHEALLOC");
                        if (iVar2 == 0) {
                            uVar6 = 5;
                        }
                        else {
                            iVar2 = strcmp(uVar5,"MEMTAGOPS");
                            if (iVar2 == 0) {
                                uVar6 = 6;
                            }
                            else {
                                iVar2 = strcmp(uVar5,"MULTISCID");
                                if (iVar2 == 0) {
                                    uVar6 = 7;
                                }
                                else {
                                    iVar2 = strcmp(uVar5,"DIRTYINFO");
                                    if (iVar2 == 0) {
                                        uVar6 = 8;
                                    }
                                    else {
                                        iVar2 = strcmp(uVar5,"ADDR_MASK");
                                        uVar7 = 9;
                                        if (iVar2 != 0) {
                                            uVar7 = 10;
                                        }
                                        uVar6 = uVar7;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar6;
}


// ===== sym.find_filter_type @ 0x0800290c (size 312) =====

uint64_t sym.find_filter_type(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = strcmp(arg1,"SCID");
    if (uVar2 != 0) {
        iVar1 = strcmp(arg1,0x800064b);
        if (iVar1 == 0) {
            uVar2 = 1;
        }
        else {
            iVar1 = strcmp(arg1,"PROFILING_TAG");
            if (iVar1 == 0) {
                uVar2 = 2;
            }
            else {
                iVar1 = strcmp(arg1,"WAY_ID");
                if (iVar1 == 0) {
                    uVar2 = 3;
                }
                else {
                    iVar1 = strcmp(arg1,"OPCODE");
                    if (iVar1 == 0) {
                        uVar2 = 4;
                    }
                    else {
                        iVar1 = strcmp(arg1,"CACHEALLOC");
                        if (iVar1 == 0) {
                            uVar2 = 5;
                        }
                        else {
                            iVar1 = strcmp(arg1,"MEMTAGOPS");
                            if (iVar1 == 0) {
                                uVar2 = 6;
                            }
                            else {
                                iVar1 = strcmp(arg1,"MULTISCID");
                                if (iVar1 == 0) {
                                    uVar2 = 7;
                                }
                                else {
                                    iVar1 = strcmp(arg1,"DIRTYINFO");
                                    if (iVar1 == 0) {
                                        uVar2 = 8;
                                    }
                                    else {
                                        iVar1 = strcmp(arg1,"ADDR_MASK");
                                        uVar3 = 9;
                                        if (iVar1 != 0) {
                                            uVar3 = 10;
                                        }
                                        uVar2 = uVar3;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar2;
}


// ===== sym.perfmon_filter_remove_store @ 0x08002a44 (size 548) =====

int64_t sym.perfmon_filter_remove_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t *piVar8;
    char *pcVar9;
    code *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong ***pppuVar11;
    uint64_t uVar12;
    uint64_t unaff_x22;
    ulong uVar13;
    code *unaff_x23;
    ulong unaff_x24;
    int64_t iVar14;
    ulong unaff_x25;
    int64_t unaff_x26;
    ulong *puVar15;
    ulong unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    code *pcStack_140;
    ulong uStack_138;
    int64_t iStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    ulong **ppuStack_f8;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    code *pcStack_90;
    ulong **ppuStack_88;
    ulong ***pppuStack_80;
    ulong **ppuStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar12 = *(arg1 + 0x98);
    pppuStack_80 = NULL;
    ppuStack_78 = NULL;
    ppuStack_88 = NULL;
    iVar14 = uVar12 + 0x928;
    pppuVar11 = arg3;
    iStack_70 = arg2;
    mutex_lock(iVar14);
    iVar4 = strsep(&iStack_70,0x8000726);
    if ((iVar4 == 0) || (uVar1 = sym.find_filter_type(iVar4), uVar1 == 10)) {
        unaff_x23 = 0x8000c64;
code_r0x08002c14:
        _printk(unaff_x23);
    }
    else {
        unaff_x22 = uVar1;
        iVar4 = strsep(&iStack_70,0x8000726);
        if (iVar4 == 0) {
code_r0x08002bf4:
            unaff_x23 = 0x800074c;
            goto code_r0x08002c14;
        }
        arg2 = &pppuStack_80;
        iVar2 = kstrtoull(iVar4,0,arg2);
        if (iVar2 != 0) {
code_r0x08002c00:
            unaff_x23 = 0x8000b26;
            goto code_r0x08002c14;
        }
        if ((uVar1 == 0) && (0x1f < pppuStack_80)) {
            unaff_x23 = 0x8000608;
            goto code_r0x08002c14;
        }
        iVar4 = strsep(&iStack_70,0x8000726);
        if (iVar4 == 0) goto code_r0x08002bf4;
        arg2 = &ppuStack_78;
        iVar2 = kstrtoull(iVar4,0,arg2);
        if (iVar2 != 0) goto code_r0x08002c00;
        iVar4 = strsep(&iStack_70,0x8000726);
        if (iVar4 != 0) {
            unaff_x23 = 0x800078f;
            unaff_x26 = uVar12 + 0x58;
            unaff_x27 = 1;
            unaff_x24 = 0x8000726;
            unaff_x28 = sym.__typeid__ZTSFvP20llcc_perfmon_private11filter_typeyybE_global_addr;
            unaff_x25 = 0x8000440;
            do {
                arg2 = &ppuStack_88;
                iVar2 = kstrtoull(iVar4,0,arg2);
                if (iVar2 != 0) break;
                if (0x7 < ppuStack_88) goto code_r0x08002c14;
                *(uVar12 + 0x920) = *(uVar12 + 0x920) & (1 << (ppuStack_88 & 0x1f) ^ 0xffffffffU);
                pcVar10 = *(*(unaff_x26 + ppuStack_88 * 8) + 0x10);
                if (pcVar10 != NULL) {
                    if (5 < (pcVar10 + -0x80012c0 >> 3 | pcVar10 << 0x3d)) {
                        pcStack_90 = pcVar10;
                        __cfi_slowpath_diag(0x2689878a22517aed,pcVar10,0x8000440);
                        pcVar10 = pcStack_90;
                    }
                    arg2 = pppuStack_80;
                    pppuVar11 = ppuStack_78;
                    (*pcVar10)(uVar12,uVar1,pppuStack_80,ppuStack_78,0);
                }
                iVar4 = strsep(&iStack_70,0x8000726);
            } while (iVar4 != 0);
        }
    }
    mutex_unlock(iVar14);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.perfmon_start_store;
    pcStack_c8 = sym.perfmon_start_store;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    piVar8 = &iStack_e8;
    iVar4 = *(iVar5 + 0x98);
    iStack_e8 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x24;
    pcStack_b8 = unaff_x23;
    uStack_b0 = unaff_x22;
    uStack_a8 = uVar12;
    iStack_a0 = iVar14;
    iStack_98 = arg3;
    iVar2 = kstrtoull(arg2,0);
    if (iVar2 != 0) {
        pppuVar11 = 0xffffffffffffffea;
        goto code_r0x08002e04;
    }
    iVar14 = iVar4 + 0x928;
    mutex_lock(iVar14);
    if (iStack_e8 == 0) {
        if (*(iVar4 + 0x9a0) != 0) {
            hrtimer_cancel(iVar4 + 0x958);
        }
        if (*(iVar4 + 0x918) == 0) {
            _printk(0x80008d5);
        }
        unaff_x22 = 0;
    }
    else {
        if (*(iVar4 + 0x918) == 0) {
            _printk(0x80006e2);
            mutex_unlock(iVar14);
            pppuVar11 = 0xffffffffffffffea;
            goto code_r0x08002e04;
        }
        uVar12 = *(iVar4 + 0x9b0);
        if (uVar12 != 0) {
            iVar2 = clk_prepare(uVar12);
            if (iVar2 == 0) {
                iVar2 = clk_enable(uVar12);
                if (iVar2 == 0) goto code_r0x08002cfc;
                clk_unprepare(uVar12);
            }
            mutex_unlock(iVar14);
            _printk(0x8000a45);
            pppuVar11 = 0xffffffffffffffea;
            goto code_r0x08002e04;
        }
code_r0x08002cfc:
        if (*(iVar4 + 0x9a0) != 0) {
            uVar13 = *(iVar4 + 0x9a0);
            if ((*(iVar4 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar4 + 0x958,uVar13,0,3);
            }
            else {
                unaff_x23 = *(*(iVar4 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,unaff_x23,0x8000380);
                uVar7 = (*unaff_x23)();
                hrtimer_forward(iVar4 + 0x958,uVar7,uVar13);
            }
        }
        unaff_x22 = 0x8000;
    }
    uStack_dc = 0;
    uVar1 = 0x3600c;
    if (*(iVar4 + 0x9b8) < 0x15) {
        uVar1 = 0x3100c;
    }
    uVar12 = uVar1;
    regmap_read(*(iVar4 + 8),uVar12,&uStack_dc);
    uStack_dc = uStack_dc & 0xffff7ffe | unaff_x22;
    piVar8 = uStack_dc;
    regmap_write(*(iVar4 + 8),uVar12);
    if ((iStack_e8 == 0) && (uVar12 = *(iVar4 + 0x9b0), uVar12 != 0)) {
        clk_disable(uVar12);
        clk_unprepare(uVar12);
    }
    mutex_unlock(iVar14);
code_r0x08002e04:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return pppuVar11;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = 0x8002e90;
    uStack_148 = 0x8002e90;
    iVar5 = sp_el0;
    iStack_158 = *(iVar5 + 0x5e0);
    iVar5 = 0;
    iVar2 = 0;
    puVar15 = *(iVar6 + 0x98);
    uStack_15c = 0;
    ppuStack_150 = &puStack_d0;
    pcStack_140 = unaff_x28;
    uStack_138 = unaff_x27;
    iStack_130 = unaff_x26;
    uStack_128 = unaff_x25;
    iStack_120 = iVar4;
    pcStack_118 = unaff_x23;
    uStack_110 = unaff_x22;
    uStack_108 = uVar12;
    iStack_100 = iVar14;
    ppuStack_f8 = pppuVar11;
    do {
        uVar1 = iVar2 << 0xc | 4;
        if (*(puVar15 + 10) == 0) {
            iVar14 = 0;
        }
        else {
            uVar12 = 0;
            iVar14 = 0;
            do {
                if (uVar12 == 0x10) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar10)();
                }
                regmap_read(*puVar15,*(puVar15 + uVar12 * 4 + 0x10) + uVar1,&uStack_15c);
                uVar12 = uVar12 + 1;
                iVar14 = iVar14 + (uStack_15c._2_2_ & 0x7fff);
                uStack_15c = uStack_15c._2_2_ & 0x7fff;
            } while (uVar12 < *(puVar15 + 10));
        }
        regmap_read(puVar15[1],uVar1,&uStack_15c);
        pcVar9 = "DEACTIVE";
        if ((uStack_15c & 1) != 0) {
            pcVar9 = "ACTIVE";
        }
        iVar3 = scnprintf(piVar8 + iVar5,0x1000 - iVar5,"SCID %02d %10s",iVar2,pcVar9);
        iVar5 = iVar5 + iVar3;
        pcVar9 = ",0x%08lx\n";
        iVar3 = scnprintf(piVar8 + iVar5,0x1000 - iVar5,",0x%08lx\n",iVar14);
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + iVar3;
    } while (iVar2 != 0x20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_158) {
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.perfmon_ns_periodic_dump_store;
        iVar4 = *(iVar4 + 0x98);
        iVar2 = kstrtoll(pcVar9,0,iVar4 + 0x9a0);
        if (iVar2 == 0) {
            mutex_lock(iVar4 + 0x928);
            iVar5 = iVar4 + 0x958;
            if (*(iVar4 + 0x9a0) == 0) {
                hrtimer_cancel(iVar5);
            }
            else {
                uVar13 = *(iVar4 + 0x9a0);
                if ((*(iVar4 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar5,uVar13,0,3);
                }
                else {
                    pcVar10 = *(*(iVar4 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar10,0x8000380);
                    uVar7 = (*pcVar10)();
                    hrtimer_forward(iVar5,uVar7,uVar13);
                }
            }
            mutex_unlock(iVar4 + 0x928);
        }
        else {
            iVar14 = -0x16;
        }
        return iVar14;
    }
    return iVar5;
}


// ===== sym.perfmon_start_store @ 0x08002c68 (size 556) =====

int64_t sym.perfmon_start_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uchar *puVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    code *pcVar12;
    int64_t iVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uint uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    puVar6 = &stack0xffffffffffffffa8;
    iVar13 = *(arg1 + 0x98);
    iStack_58 = 0;
    iVar2 = kstrtoull(arg2,0);
    if (iVar2 != 0) {
        arg3 = -0x16;
        goto code_r0x08002e04;
    }
    iVar4 = iVar13 + 0x928;
    mutex_lock(iVar4);
    if (iStack_58 == 0) {
        if (*(iVar13 + 0x9a0) != 0) {
            hrtimer_cancel(iVar13 + 0x958);
        }
        if (*(iVar13 + 0x918) == 0) {
            _printk(0x80008d5);
        }
        uVar9 = 0;
    }
    else {
        if (*(iVar13 + 0x918) == 0) {
            _printk(0x80006e2);
            mutex_unlock(iVar4);
            arg3 = -0x16;
            goto code_r0x08002e04;
        }
        iVar8 = *(iVar13 + 0x9b0);
        if (iVar8 != 0) {
            iVar2 = clk_prepare(iVar8);
            if (iVar2 == 0) {
                iVar2 = clk_enable(iVar8);
                if (iVar2 == 0) goto code_r0x08002cfc;
                clk_unprepare(iVar8);
            }
            mutex_unlock(iVar4);
            _printk(0x8000a45);
            arg3 = -0x16;
            goto code_r0x08002e04;
        }
code_r0x08002cfc:
        if (*(iVar13 + 0x9a0) != 0) {
            uVar11 = *(iVar13 + 0x9a0);
            if ((*(iVar13 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar13 + 0x958,uVar11,0,3);
            }
            else {
                pcVar12 = *(*(iVar13 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
                uVar5 = (*pcVar12)();
                hrtimer_forward(iVar13 + 0x958,uVar5,uVar11);
            }
        }
        uVar9 = 0x8000;
    }
    uStack_4c = 0;
    uVar1 = 0x3600c;
    if (*(iVar13 + 0x9b8) < 0x15) {
        uVar1 = 0x3100c;
    }
    regmap_read(*(iVar13 + 8),uVar1,&stack0xffffffffffffffb4);
    uStack_4c = uStack_4c & 0xffff7ffe | uVar9;
    puVar6 = uStack_4c;
    regmap_write(*(iVar13 + 8),uVar1);
    if ((iStack_58 == 0) && (iVar13 = *(iVar13 + 0x9b0), iVar13 != 0)) {
        clk_disable(iVar13);
        clk_unprepare(iVar13);
    }
    mutex_unlock(iVar4);
code_r0x08002e04:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8002e90;
    uStack_b8 = 0x8002e90;
    iVar13 = sp_el0;
    iStack_c8 = *(iVar13 + 0x5e0);
    iVar13 = 0;
    iVar2 = 0;
    puVar14 = *(iVar4 + 0x98);
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffc0;
    do {
        uVar9 = iVar2 << 0xc | 4;
        if (*(puVar14 + 10) == 0) {
            iVar4 = 0;
        }
        else {
            uVar10 = 0;
            iVar4 = 0;
            do {
                if (uVar10 == 0x10) {
    //WARNING: Does not return
                    pcVar12 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar12)();
                }
                regmap_read(*puVar14,*(puVar14 + uVar10 * 4 + 0x10) + uVar9,&stack0xffffffffffffff34);
                uVar10 = uVar10 + 1;
                iVar4 = iVar4 + (uStack_cc._2_2_ & 0x7fff);
                uStack_cc = uStack_cc._2_2_ & 0x7fff;
            } while (uVar10 < *(puVar14 + 10));
        }
        regmap_read(puVar14[1],uVar9,&stack0xffffffffffffff34);
        pcVar7 = "DEACTIVE";
        if ((uStack_cc & 1) != 0) {
            pcVar7 = "ACTIVE";
        }
        iVar3 = scnprintf(puVar6 + iVar13,0x1000 - iVar13,"SCID %02d %10s",iVar2,pcVar7);
        iVar13 = iVar13 + iVar3;
        pcVar7 = ",0x%08lx\n";
        iVar3 = scnprintf(puVar6 + iVar13,0x1000 - iVar13,",0x%08lx\n",iVar4);
        iVar2 = iVar2 + 1;
        iVar13 = iVar13 + iVar3;
    } while (iVar2 != 0x20);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_c8) {
        iVar13 = __stack_chk_fail();
        *extraout_x18_00 = sym.perfmon_ns_periodic_dump_store;
        iVar13 = *(iVar13 + 0x98);
        iVar2 = kstrtoll(pcVar7,0,iVar13 + 0x9a0);
        if (iVar2 == 0) {
            mutex_lock(iVar13 + 0x928);
            iVar8 = iVar13 + 0x958;
            if (*(iVar13 + 0x9a0) == 0) {
                hrtimer_cancel(iVar8);
            }
            else {
                uVar11 = *(iVar13 + 0x9a0);
                if ((*(iVar13 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar8,uVar11,0,3);
                }
                else {
                    pcVar12 = *(*(iVar13 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar12,0x8000380);
                    uVar5 = (*pcVar12)();
                    hrtimer_forward(iVar8,uVar5,uVar11);
                }
            }
            mutex_unlock(iVar13 + 0x928);
        }
        else {
            iVar4 = -0x16;
        }
        return iVar4;
    }
    return iVar13;
}


// ===== sym.perfmon_scid_status_show @ 0x08002e94 (size 364) =====

int64_t sym.perfmon_scid_status_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    code *pcVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = 0;
    iVar4 = 0;
    puVar12 = *(arg1 + 0x98);
    uStack_6c = 0;
    do {
        uVar2 = iVar4 << 0xc | 4;
        if (*(puVar12 + 10) == 0) {
            iVar11 = 0;
        }
        else {
            uVar8 = 0;
            iVar11 = 0;
            do {
                if (uVar8 == 0x10) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x8002ffc);
                    (*pcVar10)();
                }
                noname_1 = regmap_read(noname_1,*puVar12,*(puVar12 + uVar8 * 4 + 0x10) + uVar2,&uStack_6c);
                uVar8 = uVar8 + 1;
                iVar11 = iVar11 + (uStack_6c._2_2_ & 0x7fff);
                uStack_6c = uStack_6c._2_2_ & 0x7fff;
            } while (uVar8 < *(puVar12 + 10));
        }
        regmap_read(noname_1,puVar12[1],uVar2,&uStack_6c);
        pcVar6 = "DEACTIVE";
        if ((uStack_6c & 1) != 0) {
            pcVar6 = "ACTIVE";
        }
        iVar3 = scnprintf(arg2 + iVar7,0x1000 - iVar7,"SCID %02d %10s",iVar4,pcVar6);
        iVar7 = iVar7 + iVar3;
        pcVar6 = ",0x%08lx\n";
        iVar3 = scnprintf(arg2 + iVar7,0x1000 - iVar7,",0x%08lx\n",iVar11);
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + iVar3;
        noname_1 = extraout_q0;
    } while (iVar4 != 0x20);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.perfmon_ns_periodic_dump_store;
        iVar7 = *(iVar7 + 0x98);
        iVar4 = kstrtoll(pcVar6,0,iVar7 + 0x9a0);
        if (iVar4 == 0) {
            mutex_lock(iVar7 + 0x928);
            iVar1 = iVar7 + 0x958;
            if (*(iVar7 + 0x9a0) == 0) {
                hrtimer_cancel(iVar1);
            }
            else {
                uVar9 = *(iVar7 + 0x9a0);
                if ((*(iVar7 + 0x990) & 1) == 0) {
                    hrtimer_start_range_ns(iVar1,uVar9,0,3);
                }
                else {
                    pcVar10 = *(*(iVar7 + 0x988) + 0x30);
                    __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar10,0x8000380);
                    uVar5 = (*pcVar10)();
                    hrtimer_forward(iVar1,uVar5,uVar9);
                }
            }
            mutex_unlock(iVar7 + 0x928);
        }
        else {
            iVar11 = -0x16;
        }
        return iVar11;
    }
    return iVar7;
}


// ===== sym.perfmon_ns_periodic_dump_store @ 0x08003000 (size 244) =====

int64_t sym.perfmon_ns_periodic_dump_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    iVar2 = kstrtoll(arg2,0,iVar5 + 0x9a0);
    if (iVar2 == 0) {
        mutex_lock(iVar5 + 0x928);
        iVar1 = iVar5 + 0x958;
        if (*(iVar5 + 0x9a0) == 0) {
            hrtimer_cancel(iVar1);
        }
        else {
            uVar4 = *(iVar5 + 0x9a0);
            if ((*(iVar5 + 0x990) & 1) == 0) {
                hrtimer_start_range_ns(iVar1,uVar4,0,3);
            }
            else {
                pcVar6 = *(*(iVar5 + 0x988) + 0x30);
                __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar6,0x8000380);
                uVar3 = (*pcVar6)();
                hrtimer_forward(iVar1,uVar3,uVar4);
            }
        }
        mutex_unlock(iVar5 + 0x928);
    }
    else {
        arg3 = -0x16;
    }
    return arg3;
}


// ===== sym.feac_event_config @ 0x080030f8 (size 316) =====

void sym.feac_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t in_w4;
    uint32_t uVar14;
    int iVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int64_t iVar19;
    uint32_t *puVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    uint32_t *puVar23;
    uint64_t uVar24;
    uint32_t *puVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint32_t uVar29;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [12];
    uint32_t uStack_2dc;
    int64_t iStack_2d8;
    ulong ****ppppuStack_2d0;
    code *pcStack_2c8;
    uint32_t uStack_26c;
    int64_t iStack_268;
    ulong ****ppppuStack_260;
    code *pcStack_258;
    uint64_t uStack_250;
    uint32_t *puStack_248;
    uint64_t uStack_240;
    int64_t iStack_238;
    uint32_t uStack_22c;
    int64_t iStack_228;
    ulong ****ppppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    uint64_t uStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint32_t uStack_1cc;
    int64_t iStack_1c8;
    ulong ****ppppuStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint32_t uStack_18c;
    int64_t iStack_188;
    uchar ****ppppuStack_180;
    code *pcStack_178;
    uint32_t *puStack_170;
    uint64_t uStack_160;
    int64_t iStack_158;
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    ulong uStack_130;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint32_t *puStack_110;
    uint32_t *puStack_108;
    uint32_t *puStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    uVar10 = 0x7f;
    if (*(arg1 + 0x9ac) != 2) {
        uVar10 = 0x3f;
    }
    uVar17 = uVar10;
    if ((*(arg1 + 0x920) & 1) != 0) {
        uVar17 = uVar10 | 0x80010000;
    }
    uVar27 = uVar17;
    uVar10 = uVar10 & arg2 | *(arg1 + 0x920) << 0x1f;
    if ((arg4 & 1U) == 0) {
        uVar10 = 0;
    }
    uVar28 = uVar10;
    iVar15 = 0x43060;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar15 = 0x37060;
    }
    uVar24 = iVar15 + *arg3 * 4;
    puVar9 = arg4;
    regmap_read(*(arg1 + 8),uVar24,&uStack_4c);
    uStack_4c = uStack_4c & (uVar17 ^ 0xffffffff) | uVar10 & uVar17;
    regmap_write(*(arg1 + 8),uVar24);
    uVar10 = *arg3;
    if (uVar10 < 0x10) {
        uVar17 = (uVar10 & 0x1f) << 0x10 | 0xc0000000;
        if ((arg4 & 1U) == 0) {
            uVar17 = 0;
        }
        iVar15 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar15 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar15 + uVar10 * 4,uVar17);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar16 = auVar30._0_8_;
    *extraout_x18 = sym.feac_event_enable;
    pcStack_78 = sym.feac_event_enable;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    puVar23 = 0xfffff01;
    if ((auVar30._8_8_ & 1) == 0) {
        puVar25 = NULL;
        if ((*(iVar16 + 0x920) & 1) != 0) {
            iVar15 = *(iVar16 + 0x9ac);
            goto code_r0x080032a4;
        }
    }
    else {
        puVar25 = 0x4002001;
        if ((*(iVar16 + 0x920) & 1) != 0) {
            iVar15 = *(iVar16 + 0x9ac);
            uVar10 = 0x4002003;
            if (iVar15 != 0) {
                uVar10 = 0x1400202b;
            }
            puVar25 = uVar10;
code_r0x080032a4:
            uVar10 = 0xfffff07;
            if (iVar15 != 0) {
                uVar10 = 0x3fffff7f;
            }
            puVar23 = uVar10;
        }
    }
    uStack_8c = 0;
    uVar10 = 0x430a0;
    if (*(iVar16 + 0x9b8) < 0x15) {
        uVar10 = 0x370a0;
    }
    puVar20 = uVar10;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = uVar24;
    iStack_68 = arg3;
    uStack_60 = arg4 & 0xffffffff;
    iStack_58 = arg1;
    regmap_read(*(iVar16 + 8),puVar20,&uStack_8c);
    uStack_8c = uStack_8c & (puVar23 ^ 0xffffffff) | puVar23 & puVar25;
    puVar8 = uStack_8c;
    regmap_write(*(iVar16 + 8),puVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar19 = auVar30._0_8_;
    uVar10 = puVar9;
    *extraout_x18_00 = sym.feac_event_filter_config;
    pcStack_d8 = sym.feac_event_filter_config;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    ppuStack_e0 = &puStack_80;
    if (9 < auVar30._8_4_) {
code_r0x08003754:
        puVar9 = puVar25;
        _printk(0x800090a);
        puVar25 = puVar8;
        iVar19 = iVar16;
        goto code_r0x08003718;
    }
    puVar20 = in_w4;
    uVar17 = puVar8;
    iVar16 = iVar19;
    puVar23 = puVar8;
    puVar25 = puVar9;
    switch(auVar30._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar19 + 0x9ac) == 0) {
            puVar20 = puVar8 | puVar9 << 0x10;
            if ((in_w4 & 1) == 0) {
                puVar20 = NULL;
            }
        }
        else {
            puVar20 = 1 << (uVar17 & 0x1f);
            if ((in_w4 & 1) == 0) {
                puVar20 = 0xffffffff;
            }
        }
        uVar17 = 0x43018;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar17 = 0x37018;
        }
        puVar21 = uVar17;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        puVar25 = puVar20 & 0xffffffff;
        goto code_r0x08003710;
    case 1:
        uVar17 = uVar17 | uVar10 << 0x10;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0;
        }
        uVar11 = 0x43014;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x37014;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        goto code_r0x08003458;
    default:
        goto code_r0x08003754;
    case 4:
        uVar17 = uVar10 << 0x1c | uVar17 << 0x18;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0;
        }
        uVar11 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar17 = uVar17 | uStack_ec & 0xffffff;
code_r0x08003458:
        puVar25 = uVar17;
        uVar7 = *(iVar19 + 8);
        puVar20 = puVar25;
code_r0x08003710:
        uStack_ec = puVar20;
        puVar23 = puVar21;
        goto code_r0x08003714;
    case 5:
        uVar17 = uVar10 << 0x10 | uVar17 << 0xc;
        puVar9 = uVar17;
        uVar11 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar17 = uVar17 & 0xff000;
        bVar6 = (in_w4 & 1) == 0;
        uStack_ec = uStack_ec & 0xfff00fff;
        in_w4 = uVar11;
        break;
    case 6:
        uVar17 = uVar10 << 0xc | uVar17 << 10;
        puVar9 = uVar17;
        uVar11 = 0x4301c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar17 = uVar17 & 0x7c00;
        bVar6 = (in_w4 & 1) == 0;
        uStack_ec = uStack_ec & 0xffff83ff;
        in_w4 = uVar11;
        break;
    case 7:
        uVar11 = 0x43018;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x37018;
        }
        puVar21 = uVar11;
        uVar11 = *(iVar19 + 0x9ac);
        uVar27 = uVar11;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0xffffffff;
        }
        puVar20 = uVar17;
        uStack_ec = 0;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        if (uVar11 != 0) {
            uStack_ec = uVar17;
        }
        puVar25 = uStack_ec;
        puVar9 = puVar21;
        goto code_r0x080036b8;
    case 8:
        uVar17 = uVar17 | uVar10 << 1;
        puVar9 = uVar17;
        uVar11 = 0x4301c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_ec = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar17 = uVar17 & 7;
        bVar6 = (in_w4 & 1) == 0;
        uStack_ec = uStack_ec & 0xfffffff8;
        in_w4 = uVar11;
        break;
    case 9:
        uVar18 = 0x43004;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar18 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_ec = 0;
        uVar11 = uVar10;
        uVar14 = in_w4;
        regmap_read(*(iVar19 + 8),uVar18,&uStack_ec);
        uStack_ec = uVar17;
        if ((in_w4 & 1) == 0) {
            uStack_ec = 0;
            uVar10 = 0;
        }
        regmap_write(*(iVar19 + 8),uVar18);
        uStack_ec = 0;
        uVar17 = 0x43008;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar17 = 0x37008;
        }
        uVar28 = uVar17;
        regmap_read(*(iVar19 + 8),uVar28,&uStack_ec);
        uStack_ec = uVar10;
        regmap_write(*(iVar19 + 8),uVar28,uVar10);
        uVar27 = 0;
        if ((in_w4 & 1) != 0) {
            uVar27 = puVar9 >> 0x1c & 0xf0 | puVar8 >> 0x20 & 0xf;
        }
        uStack_ec = 0;
        uVar10 = 0x4300c;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar10 = 0x3700c;
        }
        puVar21 = uVar10;
        regmap_read(*(iVar19 + 8),puVar21,&uStack_ec);
        uVar7 = *(iVar19 + 8);
        puVar25 = uStack_ec & 0xfffffe00 | uVar27;
        uVar10 = uVar11;
        in_w4 = uVar14;
        puVar20 = puVar21;
        goto code_r0x080036b8;
    }
    if (bVar6) {
        uVar17 = 0;
    }
    uVar7 = *(iVar19 + 8);
    puVar25 = uStack_ec | uVar17;
    puVar8 = puVar21;
code_r0x080036b8:
    uStack_ec = puVar25;
    puVar23 = puVar8;
code_r0x08003714:
    regmap_write(uVar7,puVar21);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar16 = auVar31._0_8_;
    *extraout_x18_01 = sym.ferc_event_config;
    pcStack_138 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    uStack_14c = 0;
    uVar17 = *(iVar16 + 0x920) & 2;
    uVar11 = 0x3f;
    if (uVar17 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar17 = auVar31._8_4_ | uVar17 << 0x1e;
    if ((uVar10 & 1) == 0) {
        uVar17 = 0;
    }
    iVar15 = 0x49020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar15 = 0x3b020;
    }
    uVar24 = iVar15 + *puVar25 * 4;
    uVar12 = uVar10;
    pppuStack_140 = &ppuStack_e0;
    uStack_130 = unaff_x25;
    uStack_120 = uVar28;
    uStack_118 = uVar27;
    puStack_110 = puVar9;
    puStack_108 = puVar23;
    puStack_100 = puVar20;
    iStack_f8 = iVar19;
    regmap_read(*(iVar16 + 8),uVar24,&uStack_14c);
    uStack_14c = uStack_14c & (uVar11 ^ 0xffffffff) | uVar17 & uVar11;
    regmap_write(*(iVar16 + 8),uVar24);
    uVar14 = *puVar25;
    if (uVar14 < 0x10) {
        uVar13 = (uVar14 & 0x1f) << 0x10 | 0xc0000001;
        if ((uVar10 & 1) == 0) {
            uVar13 = 0;
        }
        iVar15 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar15 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar15 + uVar14 * 4,uVar13);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar27 = auVar30._0_8_;
    *extraout_x18_02 = sym.ferc_event_enable;
    pcStack_178 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    uVar14 = 0x4002001;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uVar28 = uVar14;
    uStack_18c = 0;
    uVar13 = 0x49060;
    if (*(uVar27 + 0x9b8) < 0x15) {
        uVar13 = 0x3b060;
    }
    uVar22 = uVar13;
    ppppuStack_180 = &pppuStack_140;
    puStack_170 = puVar25;
    uStack_160 = uVar10;
    iStack_158 = iVar16;
    regmap_read(*(uVar27 + 8),uVar22,&uStack_18c);
    uStack_18c = uStack_18c & 0xf00000fe | uVar14;
    puVar9 = uStack_18c;
    regmap_write(*(uVar27 + 8),uVar22);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar26 = auVar31._0_8_;
    *extraout_x18_03 = sym.ferc_event_filter_config;
    pcStack_1b8 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_1c8 = *(iVar4 + 0x5e0);
    ppppuStack_1c0 = &ppppuStack_180;
    uStack_1b0 = uVar24;
    uStack_1a8 = uVar28;
    uStack_1a0 = uVar22;
    uStack_198 = uVar27;
    if (auVar31._8_4_ == 2) {
        uVar14 = puVar9 | uVar12 << 2;
        uVar10 = 0x49000;
        if (*(uVar26 + 0x9b8) < 0x15) {
            uVar10 = 0x3b000;
        }
        uVar28 = uVar10;
        uVar27 = in_w4;
        uStack_1cc = 0;
        uVar13 = in_w4;
        regmap_read(*(uVar26 + 8),uVar28,&uStack_1cc);
        uVar10 = uVar14 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0;
        }
        uStack_1cc = uStack_1cc & 0xfffffff0 | uVar10;
        puVar9 = uStack_1cc;
        regmap_write(*(uVar26 + 8),uVar28);
        in_w4 = uVar13;
        uVar22 = uVar26;
        uVar24 = uVar14;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar16 = auVar31._0_8_;
    *extraout_x18_04 = sym.fewc_event_config;
    pcStack_218 = sym.fewc_event_config;
    uStack_1f8 = 0x31020;
    iVar4 = sp_el0;
    iStack_228 = *(iVar4 + 0x5e0);
    uStack_22c = 0;
    uVar10 = *(iVar16 + 0x920) & 4;
    uVar14 = 0x3f;
    if (uVar10 != 0) {
        uVar14 = 0x8001003f;
    }
    uVar10 = auVar31._8_4_ & 0x3f | uVar10 << 0x1d;
    if ((uVar12 & 1) == 0) {
        uVar10 = 0;
    }
    iVar15 = 0x39020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar15 = 0x33020;
    }
    uVar26 = iVar15 + *puVar9 * 4;
    uVar13 = uVar12;
    ppppuStack_220 = &ppppuStack_1c0;
    uStack_210 = uVar17;
    uStack_200 = uVar11;
    uStack_1f0 = uVar24;
    uStack_1e8 = uVar28;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar27;
    regmap_read(*(iVar16 + 8),uVar26,&uStack_22c);
    uStack_22c = uStack_22c & (uVar14 ^ 0xffffffff) | uVar10 & uVar14;
    puVar23 = uStack_22c;
    regmap_write(*(iVar16 + 8),uVar26);
    uVar10 = *puVar9;
    if (uVar10 < 0x10) {
        uVar17 = (uVar10 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar12 & 1) == 0) {
            uVar17 = 0;
        }
        puVar23 = uVar17;
        iVar15 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar15 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar15 + uVar10 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_228) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar19 = auVar31._0_8_;
    *extraout_x18_05 = sym.fewc_event_filter_config;
    pcStack_258 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_268 = *(iVar4 + 0x5e0);
    ppppuStack_260 = &ppppuStack_220;
    uStack_250 = uVar26;
    puStack_248 = puVar9;
    uStack_240 = uVar12;
    iStack_238 = iVar16;
    if (auVar31._8_4_ == 2) {
        uVar10 = uVar13 << 2;
        uVar18 = 0x39000;
        if (*(iVar19 + 0x9b8) < 0x15) {
            uVar18 = 0x33000;
        }
        uStack_26c = 0;
        regmap_read(*(iVar19 + 8),uVar18,&uStack_26c);
        uVar10 = (puVar23 | uVar10) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0;
        }
        uStack_26c = uStack_26c & 0xfffffff0 | uVar10;
        puVar23 = uStack_26c;
        regmap_write(*(iVar19 + 8),uVar18);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_268) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar10 = auVar31._8_4_;
    iVar16 = auVar31._0_8_;
    *extraout_x18_06 = sym.beac_event_config;
    pcStack_2c8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_2d8 = *(iVar4 + 0x5e0);
    if ((*(iVar16 + 0x920) >> 3 & 1) == 0) {
        uVar14 = uVar10 & 0x3f;
        uVar17 = 0;
        if ((uVar13 & 1) == 0) {
            uVar14 = 0;
        }
        uVar11 = 0x3f;
        iVar15 = *(iVar16 + 0x9a8);
joined_r0x08003ce0:
        uVar12 = 0;
    }
    else {
        uVar11 = 0x8001003f;
        uVar17 = 0x78;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar17 = 0;
        }
        if ((uVar13 & 1) == 0) {
            uVar14 = 0;
            iVar15 = *(iVar16 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar14 = uVar10 & 0x3f | 0x80000000;
        uVar12 = 0x28;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar12 = 0;
        }
        iVar15 = *(iVar16 + 0x9a8);
    }
    ppppuStack_2d0 = &ppppuStack_260;
    if (iVar15 != 0) {
        iVar15 = 0;
        uVar29 = 0;
        do {
            uStack_2dc = 0;
            iVar1 = 0x61040;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar15 + iVar1 + (uVar29 + *puVar23) * 4;
            regmap_read(*(iVar16 + 8),iVar1,&uStack_2dc);
            uStack_2dc = uStack_2dc & ~uVar11 | uVar14 & uVar11;
            regmap_write(*(iVar16 + 8),iVar1);
            uStack_2dc = 0;
            iVar1 = 0x61080;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar16 + 8),iVar1 + iVar15,&uStack_2dc);
            uStack_2dc = uStack_2dc & ~uVar17 | uVar12 & uVar17;
            regmap_write(*(iVar16 + 8),iVar1 + iVar15);
            uVar3 = *puVar23;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar29 == 1) && (uVar3 = *puVar23 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar29 = uVar29 + 1;
            iVar15 = iVar15 + 0x4000;
        } while (uVar29 < *(iVar16 + 0x9a8));
        if (1 < *(iVar16 + 0x9a8)) {
            uVar17 = *puVar23;
            *puVar23 = uVar17 + 1;
            if (0x10 < uVar17) goto code_r0x08003edc;
            iVar16 = iVar16 + uVar17 * 0x88;
            uVar18 = 3;
            if ((uVar13 & 1) == 0) {
                uVar18 = 8;
                uVar10 = 100;
            }
            *(iVar16 + 0x98) = uVar18;
            *(iVar16 + 0x9c) = uVar10;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2d8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.feac_event_enable @ 0x08003234 (size 260) =====

void sym.feac_event_enable(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t in_x1;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t in_w3;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint in_x3;
    uint32_t in_w4;
    uint32_t uVar14;
    int iVar15;
    int64_t iVar16;
    uint uVar17;
    uint32_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar19;
    uint32_t *puVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    uint32_t uVar23;
    uint32_t *puVar24;
    uint64_t uVar25;
    uint32_t *puVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    uint32_t uVar29;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [12];
    uint32_t uStack_28c;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    uint32_t uStack_21c;
    int64_t iStack_218;
    ulong ****ppppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint32_t *puStack_1f8;
    uint64_t uStack_1f0;
    int64_t iStack_1e8;
    uint32_t uStack_1dc;
    int64_t iStack_1d8;
    ulong ****ppppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint32_t *puStack_120;
    uint64_t uStack_110;
    int64_t iStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong uStack_e0;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint32_t *puStack_c0;
    uint32_t *puStack_b8;
    uint32_t *puStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    puVar24 = 0xfffff01;
    if ((in_x1 & 1) == 0) {
        puVar26 = NULL;
        if ((*(arg1 + 0x920) & 1) != 0) {
            iVar15 = *(arg1 + 0x9ac);
            goto code_r0x080032a4;
        }
    }
    else {
        puVar26 = 0x4002001;
        if ((*(arg1 + 0x920) & 1) != 0) {
            iVar15 = *(arg1 + 0x9ac);
            uVar23 = 0x4002003;
            if (iVar15 != 0) {
                uVar23 = 0x1400202b;
            }
            puVar26 = uVar23;
code_r0x080032a4:
            uVar23 = 0xfffff07;
            if (iVar15 != 0) {
                uVar23 = 0x3fffff7f;
            }
            puVar24 = uVar23;
        }
    }
    uStack_3c = 0;
    uVar23 = 0x430a0;
    if (*(arg1 + 0x9b8) < 0x15) {
        uVar23 = 0x370a0;
    }
    puVar20 = uVar23;
    regmap_read(*(arg1 + 8),puVar20,&uStack_3c);
    uStack_3c = uStack_3c & (puVar24 ^ 0xffffffff) | puVar24 & puVar26;
    puVar9 = uStack_3c;
    regmap_write(*(arg1 + 8),puVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar16 = auVar30._0_8_;
    *extraout_x18 = sym.feac_event_filter_config;
    pcStack_88 = sym.feac_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    if (9 < auVar30._8_4_) {
code_r0x08003754:
        _printk(0x800090a);
        puVar10 = puVar9;
        iVar16 = arg1;
        goto code_r0x08003718;
    }
    puVar20 = in_w4;
    puVar26 = CONCAT44(in_x3,in_w3);
    uVar23 = puVar9;
    arg1 = iVar16;
    puVar24 = puVar9;
    switch(auVar30._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar16 + 0x9ac) == 0) {
            puVar20 = puVar9 | puVar26 << 0x10;
            if ((in_w4 & 1) == 0) {
                puVar20 = NULL;
            }
        }
        else {
            puVar20 = 1 << (uVar23 & 0x1f);
            if ((in_w4 & 1) == 0) {
                puVar20 = 0xffffffff;
            }
        }
        uVar23 = 0x43018;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar23 = 0x37018;
        }
        puVar21 = uVar23;
        uStack_9c = 0;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar7 = *(iVar16 + 8);
        puVar10 = puVar20 & 0xffffffff;
        goto code_r0x08003710;
    case 1:
        uVar23 = uVar23 | in_w3 << 0x10;
        if ((in_w4 & 1) == 0) {
            uVar23 = 0;
        }
        uVar11 = 0x43014;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x37014;
        }
        puVar21 = uVar11;
        uStack_9c = 0;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        goto code_r0x08003458;
    default:
        goto code_r0x08003754;
    case 4:
        uVar23 = in_w3 << 0x1c | uVar23 << 0x18;
        if ((in_w4 & 1) == 0) {
            uVar23 = 0;
        }
        uVar11 = 0x4300c;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_9c = 0;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar23 = uVar23 | uStack_9c & 0xffffff;
code_r0x08003458:
        puVar10 = uVar23;
        uVar7 = *(iVar16 + 8);
        puVar20 = puVar10;
code_r0x08003710:
        uStack_9c = puVar20;
        puVar24 = puVar21;
        goto code_r0x08003714;
    case 5:
        uVar23 = in_w3 << 0x10 | uVar23 << 0xc;
        puVar26 = uVar23;
        uVar11 = 0x4300c;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar21 = uVar11;
        uStack_9c = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar23 = uVar23 & 0xff000;
        bVar6 = (in_w4 & 1) == 0;
        uStack_9c = uStack_9c & 0xfff00fff;
        in_w4 = uVar11;
        break;
    case 6:
        uVar23 = in_w3 << 0xc | uVar23 << 10;
        puVar26 = uVar23;
        uVar11 = 0x4301c;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_9c = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar23 = uVar23 & 0x7c00;
        bVar6 = (in_w4 & 1) == 0;
        uStack_9c = uStack_9c & 0xffff83ff;
        in_w4 = uVar11;
        break;
    case 7:
        uVar11 = 0x43018;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x37018;
        }
        puVar21 = uVar11;
        uVar11 = *(iVar16 + 0x9ac);
        unaff_x23 = uVar11;
        if ((in_w4 & 1) == 0) {
            uVar23 = 0xffffffff;
        }
        puVar20 = uVar23;
        uStack_9c = 0;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar7 = *(iVar16 + 8);
        if (uVar11 != 0) {
            uStack_9c = uVar23;
        }
        puVar10 = uStack_9c;
        puVar26 = puVar21;
        goto code_r0x080036b8;
    case 8:
        uVar23 = uVar23 | in_w3 << 1;
        puVar26 = uVar23;
        uVar11 = 0x4301c;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar11 = 0x3701c;
        }
        puVar21 = uVar11;
        uStack_9c = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar23 = uVar23 & 7;
        bVar6 = (in_w4 & 1) == 0;
        uStack_9c = uStack_9c & 0xfffffff8;
        in_w4 = uVar11;
        break;
    case 9:
        uVar17 = 0x43004;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar17 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_9c = 0;
        uVar11 = in_w3;
        uVar14 = in_w4;
        regmap_read(*(iVar16 + 8),uVar17,&uStack_9c);
        uStack_9c = uVar23;
        if ((in_w4 & 1) == 0) {
            uStack_9c = 0;
            in_w3 = 0;
        }
        regmap_write(*(iVar16 + 8),uVar17);
        uStack_9c = 0;
        uVar23 = 0x43008;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar23 = 0x37008;
        }
        unaff_x24 = uVar23;
        regmap_read(*(iVar16 + 8),unaff_x24,&uStack_9c);
        uStack_9c = in_w3;
        regmap_write(*(iVar16 + 8),unaff_x24,in_w3);
        unaff_x23 = 0;
        if ((in_w4 & 1) != 0) {
            unaff_x23 = puVar26 >> 0x1c & 0xf0 | puVar9 >> 0x20 & 0xf;
        }
        uStack_9c = 0;
        uVar23 = 0x4300c;
        if (*(iVar16 + 0x9b8) < 0x15) {
            uVar23 = 0x3700c;
        }
        puVar21 = uVar23;
        regmap_read(*(iVar16 + 8),puVar21,&uStack_9c);
        uVar7 = *(iVar16 + 8);
        puVar10 = uStack_9c & 0xfffffe00 | unaff_x23;
        in_w3 = uVar11;
        in_w4 = uVar14;
        puVar20 = puVar21;
        goto code_r0x080036b8;
    }
    if (bVar6) {
        uVar23 = 0;
    }
    uVar7 = *(iVar16 + 8);
    puVar10 = uStack_9c | uVar23;
    puVar9 = puVar21;
code_r0x080036b8:
    uStack_9c = puVar10;
    puVar24 = puVar9;
code_r0x08003714:
    regmap_write(uVar7,puVar21);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar8 = auVar31._0_8_;
    *extraout_x18_00 = sym.ferc_event_config;
    pcStack_e8 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_fc = 0;
    uVar23 = *(iVar8 + 0x920) & 2;
    uVar11 = 0x3f;
    if (uVar23 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar23 = auVar31._8_4_ | uVar23 << 0x1e;
    if ((in_w3 & 1) == 0) {
        uVar23 = 0;
    }
    iVar15 = 0x49020;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar15 = 0x3b020;
    }
    uVar27 = iVar15 + *puVar10 * 4;
    uVar12 = in_w3;
    ppuStack_f0 = &puStack_90;
    uStack_e0 = unaff_x25;
    uStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    puStack_c0 = puVar26;
    puStack_b8 = puVar24;
    puStack_b0 = puVar20;
    iStack_a8 = iVar16;
    regmap_read(*(iVar8 + 8),uVar27,&uStack_fc);
    uStack_fc = uStack_fc & (uVar11 ^ 0xffffffff) | uVar23 & uVar11;
    regmap_write(*(iVar8 + 8),uVar27);
    uVar14 = *puVar10;
    if (uVar14 < 0x10) {
        uVar18 = (uVar14 & 0x1f) << 0x10 | 0xc0000001;
        if ((in_w3 & 1) == 0) {
            uVar18 = 0;
        }
        iVar15 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar15 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar15 + uVar14 * 4,uVar18);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar19 = auVar30._0_8_;
    *extraout_x18_01 = sym.ferc_event_enable;
    pcStack_128 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uVar14 = 0x4002001;
    if ((auVar30._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uVar25 = uVar14;
    uStack_13c = 0;
    uVar18 = 0x49060;
    if (*(uVar19 + 0x9b8) < 0x15) {
        uVar18 = 0x3b060;
    }
    uVar22 = uVar18;
    pppuStack_130 = &ppuStack_f0;
    puStack_120 = puVar10;
    uStack_110 = in_w3;
    iStack_108 = iVar8;
    regmap_read(*(uVar19 + 8),uVar22,&uStack_13c);
    uStack_13c = uStack_13c & 0xf00000fe | uVar14;
    puVar24 = uStack_13c;
    regmap_write(*(uVar19 + 8),uVar22);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar28 = auVar31._0_8_;
    *extraout_x18_02 = sym.ferc_event_filter_config;
    pcStack_168 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar27;
    uStack_158 = uVar25;
    uStack_150 = uVar22;
    uStack_148 = uVar19;
    if (auVar31._8_4_ == 2) {
        uVar18 = puVar24 | uVar12 << 2;
        uVar14 = 0x49000;
        if (*(uVar28 + 0x9b8) < 0x15) {
            uVar14 = 0x3b000;
        }
        uVar25 = uVar14;
        uVar19 = in_w4;
        uStack_17c = 0;
        uVar13 = in_w4;
        regmap_read(*(uVar28 + 8),uVar25,&uStack_17c);
        uVar14 = uVar18 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0;
        }
        uStack_17c = uStack_17c & 0xfffffff0 | uVar14;
        puVar24 = uStack_17c;
        regmap_write(*(uVar28 + 8),uVar25);
        in_w4 = uVar13;
        uVar22 = uVar28;
        uVar27 = uVar18;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar16 = auVar31._0_8_;
    *extraout_x18_03 = sym.fewc_event_config;
    pcStack_1c8 = sym.fewc_event_config;
    uStack_1a8 = 0x31020;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uStack_1dc = 0;
    uVar14 = *(iVar16 + 0x920) & 4;
    uVar18 = 0x3f;
    if (uVar14 != 0) {
        uVar18 = 0x8001003f;
    }
    uVar14 = auVar31._8_4_ & 0x3f | uVar14 << 0x1d;
    if ((uVar12 & 1) == 0) {
        uVar14 = 0;
    }
    iVar15 = 0x39020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar15 = 0x33020;
    }
    uVar28 = iVar15 + *puVar24 * 4;
    uVar13 = uVar12;
    ppppuStack_1d0 = &ppppuStack_170;
    uStack_1c0 = uVar23;
    uStack_1b0 = uVar11;
    uStack_1a0 = uVar27;
    uStack_198 = uVar25;
    uStack_190 = uVar22;
    uStack_188 = uVar19;
    regmap_read(*(iVar16 + 8),uVar28,&uStack_1dc);
    uStack_1dc = uStack_1dc & (uVar18 ^ 0xffffffff) | uVar14 & uVar18;
    puVar26 = uStack_1dc;
    regmap_write(*(iVar16 + 8),uVar28);
    uVar23 = *puVar24;
    if (uVar23 < 0x10) {
        uVar11 = (uVar23 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar12 & 1) == 0) {
            uVar11 = 0;
        }
        puVar26 = uVar11;
        iVar15 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar15 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar15 + uVar23 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar8 = auVar31._0_8_;
    *extraout_x18_04 = sym.fewc_event_filter_config;
    pcStack_208 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    ppppuStack_210 = &ppppuStack_1d0;
    uStack_200 = uVar28;
    puStack_1f8 = puVar24;
    uStack_1f0 = uVar12;
    iStack_1e8 = iVar16;
    if (auVar31._8_4_ == 2) {
        uVar23 = uVar13 << 2;
        uVar17 = 0x39000;
        if (*(iVar8 + 0x9b8) < 0x15) {
            uVar17 = 0x33000;
        }
        uStack_21c = 0;
        regmap_read(*(iVar8 + 8),uVar17,&uStack_21c);
        uVar23 = (puVar26 | uVar23) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar23 = 0;
        }
        uStack_21c = uStack_21c & 0xfffffff0 | uVar23;
        puVar26 = uStack_21c;
        regmap_write(*(iVar8 + 8),uVar17);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar23 = auVar31._8_4_;
    iVar16 = auVar31._0_8_;
    *extraout_x18_05 = sym.beac_event_config;
    pcStack_278 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_288 = *(iVar4 + 0x5e0);
    if ((*(iVar16 + 0x920) >> 3 & 1) == 0) {
        uVar12 = uVar23 & 0x3f;
        uVar11 = 0;
        if ((uVar13 & 1) == 0) {
            uVar12 = 0;
        }
        uVar14 = 0x3f;
        iVar15 = *(iVar16 + 0x9a8);
joined_r0x08003ce0:
        uVar18 = 0;
    }
    else {
        uVar14 = 0x8001003f;
        uVar11 = 0x78;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        if ((uVar13 & 1) == 0) {
            uVar12 = 0;
            iVar15 = *(iVar16 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar12 = uVar23 & 0x3f | 0x80000000;
        uVar18 = 0x28;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar18 = 0;
        }
        iVar15 = *(iVar16 + 0x9a8);
    }
    ppppuStack_280 = &ppppuStack_210;
    if (iVar15 != 0) {
        iVar15 = 0;
        uVar29 = 0;
        do {
            uStack_28c = 0;
            iVar1 = 0x61040;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar15 + iVar1 + (uVar29 + *puVar26) * 4;
            regmap_read(*(iVar16 + 8),iVar1,&uStack_28c);
            uStack_28c = uStack_28c & ~uVar14 | uVar12 & uVar14;
            regmap_write(*(iVar16 + 8),iVar1);
            uStack_28c = 0;
            iVar1 = 0x61080;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar16 + 8),iVar1 + iVar15,&uStack_28c);
            uStack_28c = uStack_28c & ~uVar11 | uVar18 & uVar11;
            regmap_write(*(iVar16 + 8),iVar1 + iVar15);
            uVar3 = *puVar26;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar29 == 1) && (uVar3 = *puVar26 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar13 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar29 = uVar29 + 1;
            iVar15 = iVar15 + 0x4000;
        } while (uVar29 < *(iVar16 + 0x9a8));
        if (1 < *(iVar16 + 0x9a8)) {
            uVar11 = *puVar26;
            *puVar26 = uVar11 + 1;
            if (0x10 < uVar11) goto code_r0x08003edc;
            iVar16 = iVar16 + uVar11 * 0x88;
            uVar17 = 3;
            if ((uVar13 & 1) == 0) {
                uVar17 = 8;
                uVar23 = 100;
            }
            *(iVar16 + 0x98) = uVar17;
            *(iVar16 + 0x9c) = uVar23;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_288) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.feac_event_filter_config @ 0x08003338 (size 1428) =====

void sym.feac_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t in_w4;
    uint32_t uVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t unaff_x19;
    uint64_t uVar19;
    uint32_t *unaff_x20;
    uint64_t uVar20;
    uint32_t *unaff_x21;
    uint64_t uVar21;
    uint32_t *unaff_x22;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x23;
    int iVar24;
    uint64_t unaff_x24;
    uint32_t uVar25;
    ulong unaff_x25;
    ulong unaff_x30;
    uchar auVar26 [12];
    uchar auVar27 [16];
    uint32_t uStack_24c;
    int64_t iStack_248;
    uchar *puStack_240;
    code *pcStack_238;
    uint32_t uStack_1dc;
    int64_t iStack_1d8;
    uchar *puStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    int64_t iStack_1a8;
    uint32_t uStack_19c;
    int64_t iStack_198;
    uchar *puStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    uint64_t uStack_170;
    ulong uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint32_t *puStack_e0;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint32_t *puStack_80;
    uint32_t *puStack_78;
    uint32_t *puStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar11 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    if (9 < arg2) {
code_r0x08003754:
        arg4 = unaff_x22;
        _printk(0x800090a);
        puVar9 = arg3;
        arg1 = unaff_x19;
        goto code_r0x08003718;
    }
    unaff_x20 = in_w4;
    //switch table (10 cases) at 0x8000460
    uVar17 = arg3;
    unaff_x19 = arg1;
    unaff_x21 = arg3;
    unaff_x22 = arg4;
    switch(*(arg2 + 0x8000460) * 4 + 0x800339c) {
    case 0x80033a0:
        if (*(arg1 + 0x9ac) == 0) {
            unaff_x20 = arg3 | arg4 << 0x10;
            if ((in_w4 & 1) == 0) {
                unaff_x20 = NULL;
            }
        }
        else {
            unaff_x20 = 1 << (uVar17 & 0x1f);
            if ((in_w4 & 1) == 0) {
                unaff_x20 = 0xffffffff;
            }
        }
        uVar17 = 0x43018;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar17 = 0x37018;
        }
        puVar10 = uVar17;
        uStack_5c = 0;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar7 = *(arg1 + 8);
        puVar9 = unaff_x20 & 0xffffffff;
        goto code_r0x08003710;
    case 0x80033c4:
        uVar17 = uVar17 | uVar11 << 0x10;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0;
        }
        uVar12 = 0x43014;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x37014;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        goto code_r0x08003458;
    case 0x8003410:
        uVar17 = uVar11 << 0x1c | uVar17 << 0x18;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0;
        }
        uVar12 = 0x4300c;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar17 = uVar17 | uStack_5c & 0xffffff;
code_r0x08003458:
        puVar9 = uVar17;
        uVar7 = *(arg1 + 8);
        unaff_x20 = puVar9;
code_r0x08003710:
        uStack_5c = unaff_x20;
        unaff_x21 = puVar10;
        goto code_r0x08003714;
    case 0x800346c:
        uVar17 = uVar11 << 0x10 | uVar17 << 0xc;
        arg4 = uVar17;
        uVar12 = 0x4300c;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x3700c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = in_w4;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar17 = uVar17 & 0xff000;
        bVar6 = (in_w4 & 1) == 0;
        uStack_5c = uStack_5c & 0xfff00fff;
        in_w4 = uVar12;
        break;
    case 0x80034bc:
        uVar17 = uVar11 << 0xc | uVar17 << 10;
        arg4 = uVar17;
        uVar12 = 0x4301c;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = in_w4;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar17 = uVar17 & 0x7c00;
        bVar6 = (in_w4 & 1) == 0;
        uStack_5c = uStack_5c & 0xffff83ff;
        in_w4 = uVar12;
        break;
    case 0x8003514:
        uVar12 = 0x43018;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x37018;
        }
        puVar10 = uVar12;
        uVar12 = *(arg1 + 0x9ac);
        unaff_x23 = uVar12;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0xffffffff;
        }
        unaff_x20 = uVar17;
        uStack_5c = 0;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar7 = *(arg1 + 8);
        if (uVar12 != 0) {
            uStack_5c = uVar17;
        }
        puVar9 = uStack_5c;
        arg4 = puVar10;
        goto code_r0x080036b8;
    case 0x8003574:
        uVar17 = uVar17 | uVar11 << 1;
        arg4 = uVar17;
        uVar12 = 0x4301c;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x3701c;
        }
        puVar10 = uVar12;
        uStack_5c = 0;
        uVar12 = in_w4;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar17 = uVar17 & 7;
        bVar6 = (in_w4 & 1) == 0;
        uStack_5c = uStack_5c & 0xfffffff8;
        in_w4 = uVar12;
        break;
    case 0x80035d8:
        uVar18 = 0x43004;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar18 = 0x37004;
        }
        unaff_x25 = 0x4300c;
        uStack_5c = 0;
        uVar12 = uVar11;
        uVar15 = in_w4;
        regmap_read(*(arg1 + 8),uVar18,&stack0xffffffffffffffa4);
        uStack_5c = uVar17;
        if ((in_w4 & 1) == 0) {
            uStack_5c = 0;
            uVar11 = 0;
        }
        regmap_write(*(arg1 + 8),uVar18);
        uStack_5c = 0;
        uVar17 = 0x43008;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar17 = 0x37008;
        }
        unaff_x24 = uVar17;
        regmap_read(*(arg1 + 8),unaff_x24,&stack0xffffffffffffffa4);
        uStack_5c = uVar11;
        regmap_write(*(arg1 + 8),unaff_x24,uVar11);
        unaff_x23 = 0;
        if ((in_w4 & 1) != 0) {
            unaff_x23 = arg4 >> 0x1c & 0xf0 | arg3 >> 0x20 & 0xf;
        }
        uStack_5c = 0;
        uVar11 = 0x4300c;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar11 = 0x3700c;
        }
        puVar10 = uVar11;
        regmap_read(*(arg1 + 8),puVar10,&stack0xffffffffffffffa4);
        uVar7 = *(arg1 + 8);
        puVar9 = uStack_5c & 0xfffffe00 | unaff_x23;
        uVar11 = uVar12;
        in_w4 = uVar15;
        unaff_x20 = puVar10;
        goto code_r0x080036b8;
    case 0x8003754:
        goto code_r0x08003754;
    }
    if (bVar6) {
        uVar17 = 0;
    }
    uVar7 = *(arg1 + 8);
    puVar9 = uStack_5c | uVar17;
    arg3 = puVar10;
code_r0x080036b8:
    uStack_5c = puVar9;
    unaff_x21 = arg3;
code_r0x08003714:
    regmap_write(uVar7,puVar10);
code_r0x08003718:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar16 = auVar26._0_8_;
    *extraout_x18 = sym.ferc_event_config;
    pcStack_a8 = sym.ferc_event_config;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uStack_bc = 0;
    uVar17 = *(iVar16 + 0x920) & 2;
    uVar12 = 0x3f;
    if (uVar17 != 0) {
        uVar12 = 0x8001003f;
    }
    uVar17 = auVar26._8_4_ | uVar17 << 0x1e;
    if ((uVar11 & 1) == 0) {
        uVar17 = 0;
    }
    iVar24 = 0x49020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar24 = 0x3b020;
    }
    uVar22 = iVar24 + *puVar9 * 4;
    uVar13 = uVar11;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = unaff_x25;
    uStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    puStack_80 = arg4;
    puStack_78 = unaff_x21;
    puStack_70 = unaff_x20;
    iStack_68 = arg1;
    regmap_read(*(iVar16 + 8),uVar22,&stack0xffffffffffffff44);
    uStack_bc = uStack_bc & (uVar12 ^ 0xffffffff) | uVar17 & uVar12;
    regmap_write(*(iVar16 + 8),uVar22);
    uVar15 = *puVar9;
    if (uVar15 < 0x10) {
        uVar14 = (uVar15 & 0x1f) << 0x10 | 0xc0000001;
        if ((uVar11 & 1) == 0) {
            uVar14 = 0;
        }
        iVar24 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar24 + uVar15 * 4,uVar14);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar19 = auVar27._0_8_;
    *extraout_x18_00 = sym.ferc_event_enable;
    pcStack_e8 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uVar15 = 0x4002001;
    if ((auVar27._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uVar21 = uVar15;
    uStack_fc = 0;
    uVar14 = 0x49060;
    if (*(uVar19 + 0x9b8) < 0x15) {
        uVar14 = 0x3b060;
    }
    uVar20 = uVar14;
    puStack_f0 = &stack0xffffffffffffff50;
    puStack_e0 = puVar9;
    uStack_d0 = uVar11;
    iStack_c8 = iVar16;
    regmap_read(*(uVar19 + 8),uVar20,&stack0xffffffffffffff04);
    uStack_fc = uStack_fc & 0xf00000fe | uVar15;
    puVar9 = uStack_fc;
    regmap_write(*(uVar19 + 8),uVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar23 = auVar26._0_8_;
    *extraout_x18_01 = sym.ferc_event_filter_config;
    pcStack_128 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    puStack_130 = &stack0xffffffffffffff10;
    uStack_120 = uVar22;
    uStack_118 = uVar21;
    uStack_110 = uVar20;
    uStack_108 = uVar19;
    if (auVar26._8_4_ == 2) {
        uVar15 = puVar9 | uVar13 << 2;
        uVar11 = 0x49000;
        if (*(uVar23 + 0x9b8) < 0x15) {
            uVar11 = 0x3b000;
        }
        uVar21 = uVar11;
        uVar19 = in_w4;
        uStack_13c = 0;
        uVar14 = in_w4;
        regmap_read(*(uVar23 + 8),uVar21,&stack0xfffffffffffffec4);
        uVar11 = uVar15 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_13c = uStack_13c & 0xfffffff0 | uVar11;
        puVar9 = uStack_13c;
        regmap_write(*(uVar23 + 8),uVar21);
        in_w4 = uVar14;
        uVar20 = uVar23;
        uVar22 = uVar15;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar16 = auVar26._0_8_;
    *extraout_x18_02 = sym.fewc_event_config;
    pcStack_188 = sym.fewc_event_config;
    uStack_168 = 0x31020;
    iVar4 = sp_el0;
    iStack_198 = *(iVar4 + 0x5e0);
    uStack_19c = 0;
    uVar11 = *(iVar16 + 0x920) & 4;
    uVar15 = 0x3f;
    if (uVar11 != 0) {
        uVar15 = 0x8001003f;
    }
    uVar11 = auVar26._8_4_ & 0x3f | uVar11 << 0x1d;
    if ((uVar13 & 1) == 0) {
        uVar11 = 0;
    }
    iVar24 = 0x39020;
    if (*(iVar16 + 0x9b8) < 0x15) {
        iVar24 = 0x33020;
    }
    uVar23 = iVar24 + *puVar9 * 4;
    uVar14 = uVar13;
    puStack_190 = &stack0xfffffffffffffed0;
    uStack_180 = uVar17;
    uStack_170 = uVar12;
    uStack_160 = uVar22;
    uStack_158 = uVar21;
    uStack_150 = uVar20;
    uStack_148 = uVar19;
    regmap_read(*(iVar16 + 8),uVar23,&stack0xfffffffffffffe64);
    uStack_19c = uStack_19c & (uVar15 ^ 0xffffffff) | uVar11 & uVar15;
    puVar10 = uStack_19c;
    regmap_write(*(iVar16 + 8),uVar23);
    uVar11 = *puVar9;
    if (uVar11 < 0x10) {
        uVar17 = (uVar11 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar13 & 1) == 0) {
            uVar17 = 0;
        }
        puVar10 = uVar17;
        iVar24 = 0x36020;
        if (*(iVar16 + 0x9b8) < 0x15) {
            iVar24 = 0x31020;
        }
        regmap_write(*(iVar16 + 8),iVar24 + uVar11 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_198) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_03 = sym.fewc_event_filter_config;
    pcStack_1c8 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    puStack_1d0 = &stack0xfffffffffffffe70;
    uStack_1c0 = uVar23;
    puStack_1b8 = puVar9;
    uStack_1b0 = uVar13;
    iStack_1a8 = iVar16;
    if (auVar26._8_4_ == 2) {
        uVar11 = uVar14 << 2;
        uVar18 = 0x39000;
        if (*(iVar8 + 0x9b8) < 0x15) {
            uVar18 = 0x33000;
        }
        uStack_1dc = 0;
        regmap_read(*(iVar8 + 8),uVar18,&stack0xfffffffffffffe24);
        uVar11 = (puVar10 | uVar11) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar11 = 0;
        }
        uStack_1dc = uStack_1dc & 0xfffffff0 | uVar11;
        puVar10 = uStack_1dc;
        regmap_write(*(iVar8 + 8),uVar18);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar11 = auVar26._8_4_;
    iVar16 = auVar26._0_8_;
    *extraout_x18_04 = sym.beac_event_config;
    pcStack_238 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_248 = *(iVar4 + 0x5e0);
    if ((*(iVar16 + 0x920) >> 3 & 1) == 0) {
        uVar15 = uVar11 & 0x3f;
        uVar17 = 0;
        if ((uVar14 & 1) == 0) {
            uVar15 = 0;
        }
        uVar12 = 0x3f;
        iVar24 = *(iVar16 + 0x9a8);
joined_r0x08003ce0:
        uVar13 = 0;
    }
    else {
        uVar12 = 0x8001003f;
        uVar17 = 0x78;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar17 = 0;
        }
        if ((uVar14 & 1) == 0) {
            uVar15 = 0;
            iVar24 = *(iVar16 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar15 = uVar11 & 0x3f | 0x80000000;
        uVar13 = 0x28;
        if (*(iVar16 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        iVar24 = *(iVar16 + 0x9a8);
    }
    puStack_240 = &stack0xfffffffffffffe30;
    if (iVar24 != 0) {
        iVar24 = 0;
        uVar25 = 0;
        do {
            uStack_24c = 0;
            iVar1 = 0x61040;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar24 + iVar1 + (uVar25 + *puVar10) * 4;
            regmap_read(*(iVar16 + 8),iVar1,&stack0xfffffffffffffdb4);
            uStack_24c = uStack_24c & ~uVar12 | uVar15 & uVar12;
            regmap_write(*(iVar16 + 8),iVar1);
            uStack_24c = 0;
            iVar1 = 0x61080;
            if (*(iVar16 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar16 + 8),iVar1 + iVar24,&stack0xfffffffffffffdb4);
            uStack_24c = uStack_24c & ~uVar17 | uVar13 & uVar17;
            regmap_write(*(iVar16 + 8),iVar1 + iVar24);
            uVar3 = *puVar10;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar25 == 1) && (uVar3 = *puVar10 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar14 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar16 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar16 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar25 = uVar25 + 1;
            iVar24 = iVar24 + 0x4000;
        } while (uVar25 < *(iVar16 + 0x9a8));
        if (1 < *(iVar16 + 0x9a8)) {
            uVar17 = *puVar10;
            *puVar10 = uVar17 + 1;
            if (0x10 < uVar17) goto code_r0x08003edc;
            iVar16 = iVar16 + uVar17 * 0x88;
            uVar18 = 3;
            if ((uVar14 & 1) == 0) {
                uVar18 = 8;
                uVar11 = 100;
            }
            *(iVar16 + 0x98) = uVar18;
            *(iVar16 + 0x9c) = uVar11;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_248) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.ferc_event_config @ 0x08003768 (size 304) =====

void sym.ferc_event_config(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    int iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint32_t in_w4;
    uint32_t uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    uint32_t uStack_1ec;
    int64_t iStack_1e8;
    ulong ****ppppuStack_1e0;
    code *pcStack_1d8;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_5c = 0;
    uVar7 = *(arg1 + 0x920) & 2;
    uVar16 = 0x3f;
    if (uVar7 != 0) {
        uVar16 = 0x8001003f;
    }
    uVar7 = arg2 | uVar7 << 0x1e;
    if ((arg4 & 1) == 0) {
        uVar7 = 0;
    }
    iVar10 = 0x49020;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar10 = 0x3b020;
    }
    uVar22 = iVar10 + *arg3 * 4;
    uVar11 = arg4;
    regmap_read(*(arg1 + 8),uVar22,&uStack_5c);
    uStack_5c = uStack_5c & (uVar16 ^ 0xffffffff) | uVar7 & uVar16;
    regmap_write(*(arg1 + 8),uVar22);
    uVar17 = *arg3;
    if (uVar17 < 0x10) {
        uVar14 = (uVar17 & 0x1f) << 0x10 | 0xc0000001;
        if ((arg4 & 1) == 0) {
            uVar14 = 0;
        }
        iVar10 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar10 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar10 + uVar17 * 4,uVar14);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar19 = auVar25._0_8_;
    *extraout_x18 = sym.ferc_event_enable;
    pcStack_88 = sym.ferc_event_enable;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uVar17 = 0x4002001;
    if ((auVar25._8_8_ & 1) == 0) {
        uVar17 = 0;
    }
    uVar21 = uVar17;
    uStack_9c = 0;
    uVar14 = 0x49060;
    if (*(uVar19 + 0x9b8) < 0x15) {
        uVar14 = 0x3b060;
    }
    uVar20 = uVar14;
    puStack_90 = &stack0xffffffffffffffb0;
    iStack_80 = arg3;
    uStack_70 = arg4;
    iStack_68 = arg1;
    regmap_read(*(uVar19 + 8),uVar20,&uStack_9c);
    uStack_9c = uStack_9c & 0xf00000fe | uVar17;
    puVar8 = uStack_9c;
    regmap_write(*(uVar19 + 8),uVar20);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar12 = auVar26._0_8_;
    *extraout_x18_00 = sym.ferc_event_filter_config;
    pcStack_c8 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar22;
    uStack_b8 = uVar21;
    uStack_b0 = uVar20;
    uStack_a8 = uVar19;
    if (auVar26._8_4_ == 2) {
        uVar14 = puVar8 | uVar11 << 2;
        uVar17 = 0x49000;
        if (*(uVar12 + 0x9b8) < 0x15) {
            uVar17 = 0x3b000;
        }
        uVar21 = uVar17;
        uVar19 = in_w4;
        uStack_dc = 0;
        uVar13 = in_w4;
        regmap_read(*(uVar12 + 8),uVar21,&uStack_dc);
        uVar17 = uVar14 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar17 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar17;
        puVar8 = uStack_dc;
        regmap_write(*(uVar12 + 8),uVar21);
        in_w4 = uVar13;
        uVar20 = uVar12;
        uVar22 = uVar14;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar15 = auVar26._0_8_;
    *extraout_x18_01 = sym.fewc_event_config;
    pcStack_128 = sym.fewc_event_config;
    uStack_108 = 0x31020;
    iVar4 = sp_el0;
    iStack_138 = *(iVar4 + 0x5e0);
    uStack_13c = 0;
    uVar17 = *(iVar15 + 0x920) & 4;
    uVar14 = 0x3f;
    if (uVar17 != 0) {
        uVar14 = 0x8001003f;
    }
    uVar17 = auVar26._8_4_ & 0x3f | uVar17 << 0x1d;
    if ((uVar11 & 1) == 0) {
        uVar17 = 0;
    }
    iVar10 = 0x39020;
    if (*(iVar15 + 0x9b8) < 0x15) {
        iVar10 = 0x33020;
    }
    uVar23 = iVar10 + *puVar8 * 4;
    uVar12 = uVar11;
    pppuStack_130 = &ppuStack_d0;
    uStack_120 = uVar7;
    uStack_110 = uVar16;
    uStack_100 = uVar22;
    uStack_f8 = uVar21;
    uStack_f0 = uVar20;
    uStack_e8 = uVar19;
    regmap_read(*(iVar15 + 8),uVar23,&uStack_13c);
    uStack_13c = uStack_13c & (uVar14 ^ 0xffffffff) | uVar17 & uVar14;
    puVar9 = uStack_13c;
    regmap_write(*(iVar15 + 8),uVar23);
    uVar7 = *puVar8;
    if (uVar7 < 0x10) {
        uVar16 = (uVar7 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar11 & 1) == 0) {
            uVar16 = 0;
        }
        puVar9 = uVar16;
        iVar10 = 0x36020;
        if (*(iVar15 + 0x9b8) < 0x15) {
            iVar10 = 0x31020;
        }
        regmap_write(*(iVar15 + 8),iVar10 + uVar7 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar6 = auVar26._0_8_;
    *extraout_x18_02 = sym.fewc_event_filter_config;
    pcStack_168 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar23;
    puStack_158 = puVar8;
    uStack_150 = uVar11 & 0xffffffff;
    iStack_148 = iVar15;
    if (auVar26._8_4_ == 2) {
        iVar10 = uVar12;
        uVar18 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar18 = 0x33000;
        }
        uStack_17c = 0;
        regmap_read(*(iVar6 + 8),uVar18,&uStack_17c);
        uVar7 = (puVar9 | iVar10 << 2) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_17c = uStack_17c & 0xfffffff0 | uVar7;
        puVar9 = uStack_17c;
        regmap_write(*(iVar6 + 8),uVar18);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar7 = auVar26._8_4_;
    iVar15 = auVar26._0_8_;
    *extraout_x18_03 = sym.beac_event_config;
    pcStack_1d8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_1e8 = *(iVar4 + 0x5e0);
    if ((*(iVar15 + 0x920) >> 3 & 1) == 0) {
        uVar14 = uVar7 & 0x3f;
        uVar16 = 0;
        if ((uVar12 & 1) == 0) {
            uVar14 = 0;
        }
        uVar17 = 0x3f;
        iVar10 = *(iVar15 + 0x9a8);
joined_r0x08003ce0:
        uVar13 = 0;
    }
    else {
        uVar17 = 0x8001003f;
        uVar16 = 0x78;
        if (*(iVar15 + 0x9ac) != 2) {
            uVar16 = 0;
        }
        if ((uVar12 & 1) == 0) {
            uVar14 = 0;
            iVar10 = *(iVar15 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar14 = uVar7 & 0x3f | 0x80000000;
        uVar13 = 0x28;
        if (*(iVar15 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        iVar10 = *(iVar15 + 0x9a8);
    }
    ppppuStack_1e0 = &ppppuStack_170;
    if (iVar10 != 0) {
        iVar10 = 0;
        uVar24 = 0;
        do {
            uStack_1ec = 0;
            iVar1 = 0x61040;
            if (*(iVar15 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar10 + iVar1 + (uVar24 + *puVar9) * 4;
            regmap_read(*(iVar15 + 8),iVar1,&uStack_1ec);
            uStack_1ec = uStack_1ec & ~uVar17 | uVar14 & uVar17;
            regmap_write(*(iVar15 + 8),iVar1);
            uStack_1ec = 0;
            iVar1 = 0x61080;
            if (*(iVar15 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar15 + 8),iVar1 + iVar10,&uStack_1ec);
            uStack_1ec = uStack_1ec & ~uVar16 | uVar13 & uVar16;
            regmap_write(*(iVar15 + 8),iVar1 + iVar10);
            uVar3 = *puVar9;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar12 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar15 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar15 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar24 == 1) && (uVar3 = *puVar9 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar12 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar15 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar15 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar24 = uVar24 + 1;
            iVar10 = iVar10 + 0x4000;
        } while (uVar24 < *(iVar15 + 0x9a8));
        if (1 < *(iVar15 + 0x9a8)) {
            uVar16 = *puVar9;
            *puVar9 = uVar16 + 1;
            if (0x10 < uVar16) goto code_r0x08003edc;
            iVar15 = iVar15 + uVar16 * 0x88;
            uVar18 = 3;
            if ((uVar12 & 1) == 0) {
                uVar18 = 8;
                uVar7 = 100;
            }
            *(iVar15 + 0x98) = uVar18;
            *(iVar15 + 0x9c) = uVar7;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1e8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.ferc_event_enable @ 0x08003898 (size 188) =====

void sym.ferc_event_enable(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t in_w3;
    uint32_t uVar10;
    uint32_t in_w4;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar17;
    int iVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    uint32_t uStack_18c;
    int64_t iStack_188;
    uchar ****ppppuStack_180;
    code *pcStack_178;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar7 = 0x4002001;
    if ((arg2 & 1) == 0) {
        uVar7 = 0;
    }
    uStack_3c = 0;
    uVar15 = 0x49060;
    if (*(arg1 + 0x9b8) < 0x15) {
        uVar15 = 0x3b060;
    }
    regmap_read(*(arg1 + 8),uVar15,&uStack_3c);
    uStack_3c = uStack_3c & 0xf00000fe | uVar7;
    puVar8 = uStack_3c;
    regmap_write(*(arg1 + 8),uVar15);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar13 = auVar20._0_8_;
    *extraout_x18 = sym.ferc_event_filter_config;
    pcStack_68 = sym.ferc_event_filter_config;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    if (auVar20._8_4_ == 2) {
        uVar7 = in_w3 << 2;
        uVar15 = 0x49000;
        if (*(iVar13 + 0x9b8) < 0x15) {
            uVar15 = 0x3b000;
        }
        uStack_7c = 0;
        uVar11 = in_w4;
        regmap_read(*(iVar13 + 8),uVar15,&uStack_7c);
        uVar7 = (puVar8 | uVar7) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_7c = uStack_7c & 0xfffffff0 | uVar7;
        puVar8 = uStack_7c;
        regmap_write(*(iVar13 + 8),uVar15);
        in_w4 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar13 = auVar20._0_8_;
    *extraout_x18_00 = sym.fewc_event_config;
    pcStack_c8 = sym.fewc_event_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    uStack_dc = 0;
    uVar7 = *(iVar13 + 0x920) & 4;
    uVar11 = 0x3f;
    if (uVar7 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar7 = auVar20._8_4_ & 0x3f | uVar7 << 0x1d;
    if ((in_w3 & 1) == 0) {
        uVar7 = 0;
    }
    iVar18 = 0x39020;
    if (*(iVar13 + 0x9b8) < 0x15) {
        iVar18 = 0x33020;
    }
    uVar17 = iVar18 + *puVar8 * 4;
    uVar10 = in_w3;
    ppuStack_d0 = &puStack_70;
    regmap_read(*(iVar13 + 8),uVar17,&uStack_dc);
    uStack_dc = uStack_dc & (uVar11 ^ 0xffffffff) | uVar7 & uVar11;
    puVar9 = uStack_dc;
    regmap_write(*(iVar13 + 8),uVar17);
    uVar7 = *puVar8;
    if (uVar7 < 0x10) {
        uVar11 = (uVar7 & 0x1f) << 0x10 | 0xc0000002;
        if ((in_w3 & 1) == 0) {
            uVar11 = 0;
        }
        puVar9 = uVar11;
        iVar18 = 0x36020;
        if (*(iVar13 + 0x9b8) < 0x15) {
            iVar18 = 0x31020;
        }
        regmap_write(*(iVar13 + 8),iVar18 + uVar7 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._0_8_;
    *extraout_x18_01 = sym.fewc_event_filter_config;
    pcStack_108 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    pppuStack_110 = &ppuStack_d0;
    uStack_100 = uVar17;
    puStack_f8 = puVar8;
    uStack_f0 = in_w3;
    iStack_e8 = iVar13;
    if (auVar20._8_4_ == 2) {
        uVar7 = uVar10 << 2;
        uVar15 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar15 = 0x33000;
        }
        uStack_11c = 0;
        regmap_read(*(iVar6 + 8),uVar15,&uStack_11c);
        uVar7 = (puVar9 | uVar7) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar7 = 0;
        }
        uStack_11c = uStack_11c & 0xfffffff0 | uVar7;
        puVar9 = uStack_11c;
        regmap_write(*(iVar6 + 8),uVar15);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return;
    }
    auVar20 = __stack_chk_fail();
    uVar7 = auVar20._8_4_;
    iVar13 = auVar20._0_8_;
    *extraout_x18_02 = sym.beac_event_config;
    pcStack_178 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    if ((*(iVar13 + 0x920) >> 3 & 1) == 0) {
        uVar12 = uVar7 & 0x3f;
        uVar11 = 0;
        if ((uVar10 & 1) == 0) {
            uVar12 = 0;
        }
        uVar14 = 0x3f;
        iVar18 = *(iVar13 + 0x9a8);
joined_r0x08003ce0:
        uVar16 = 0;
    }
    else {
        uVar14 = 0x8001003f;
        uVar11 = 0x78;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        if ((uVar10 & 1) == 0) {
            uVar12 = 0;
            iVar18 = *(iVar13 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar12 = uVar7 & 0x3f | 0x80000000;
        uVar16 = 0x28;
        if (*(iVar13 + 0x9ac) != 2) {
            uVar16 = 0;
        }
        iVar18 = *(iVar13 + 0x9a8);
    }
    ppppuStack_180 = &pppuStack_110;
    if (iVar18 != 0) {
        iVar18 = 0;
        uVar19 = 0;
        do {
            uStack_18c = 0;
            iVar1 = 0x61040;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar18 + iVar1 + (uVar19 + *puVar9) * 4;
            regmap_read(*(iVar13 + 8),iVar1,&uStack_18c);
            uStack_18c = uStack_18c & ~uVar14 | uVar12 & uVar14;
            regmap_write(*(iVar13 + 8),iVar1);
            uStack_18c = 0;
            iVar1 = 0x61080;
            if (*(iVar13 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar13 + 8),iVar1 + iVar18,&uStack_18c);
            uStack_18c = uStack_18c & ~uVar11 | uVar16 & uVar11;
            regmap_write(*(iVar13 + 8),iVar1 + iVar18);
            uVar3 = *puVar9;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar10 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar19 == 1) && (uVar3 = *puVar9 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar10 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar13 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar13 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar19 = uVar19 + 1;
            iVar18 = iVar18 + 0x4000;
        } while (uVar19 < *(iVar13 + 0x9a8));
        if (1 < *(iVar13 + 0x9a8)) {
            uVar11 = *puVar9;
            *puVar9 = uVar11 + 1;
            if (0x10 < uVar11) goto code_r0x08003edc;
            iVar13 = iVar13 + uVar11 * 0x88;
            uVar15 = 3;
            if ((uVar10 & 1) == 0) {
                uVar15 = 8;
                uVar7 = 100;
            }
            *(iVar13 + 0x98) = uVar15;
            *(iVar13 + 0x9c) = uVar7;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.ferc_event_filter_config @ 0x08003954 (size 212) =====

void sym.ferc_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t in_w4;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar16;
    int iVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [12];
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint32_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    uVar8 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (arg2 == 2) {
        uVar13 = uVar8 << 2;
        uVar14 = 0x49000;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar14 = 0x3b000;
        }
        uStack_3c = 0;
        uVar10 = in_w4;
        regmap_read(*(arg1 + 8),uVar14,&uStack_3c);
        uVar13 = (arg3 | uVar13) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar13 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar13;
        arg3 = uStack_3c;
        regmap_write(*(arg1 + 8),uVar14);
        in_w4 = uVar10;
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar12 = auVar19._0_8_;
    *extraout_x18 = sym.fewc_event_config;
    pcStack_88 = sym.fewc_event_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uStack_9c = 0;
    uVar13 = *(iVar12 + 0x920) & 4;
    uVar10 = 0x3f;
    if (uVar13 != 0) {
        uVar10 = 0x8001003f;
    }
    uVar13 = auVar19._8_4_ & 0x3f | uVar13 << 0x1d;
    if ((uVar8 & 1) == 0) {
        uVar13 = 0;
    }
    iVar17 = 0x39020;
    if (*(iVar12 + 0x9b8) < 0x15) {
        iVar17 = 0x33020;
    }
    uVar16 = iVar17 + *arg3 * 4;
    uVar9 = uVar8;
    puStack_90 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar12 + 8),uVar16,&uStack_9c);
    uStack_9c = uStack_9c & (uVar10 ^ 0xffffffff) | uVar13 & uVar10;
    puVar7 = uStack_9c;
    regmap_write(*(iVar12 + 8),uVar16);
    uVar13 = *arg3;
    if (uVar13 < 0x10) {
        uVar10 = (uVar13 & 0x1f) << 0x10 | 0xc0000002;
        if ((uVar8 & 1) == 0) {
            uVar10 = 0;
        }
        puVar7 = uVar10;
        iVar17 = 0x36020;
        if (*(iVar12 + 0x9b8) < 0x15) {
            iVar17 = 0x31020;
        }
        regmap_write(*(iVar12 + 8),iVar17 + uVar13 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar6 = auVar19._0_8_;
    *extraout_x18_00 = sym.fewc_event_filter_config;
    pcStack_c8 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar16;
    puStack_b8 = arg3;
    uStack_b0 = uVar8;
    iStack_a8 = iVar12;
    if (auVar19._8_4_ == 2) {
        uVar13 = uVar9 << 2;
        uVar14 = 0x39000;
        if (*(iVar6 + 0x9b8) < 0x15) {
            uVar14 = 0x33000;
        }
        uStack_dc = 0;
        regmap_read(*(iVar6 + 8),uVar14,&uStack_dc);
        uVar8 = (puVar7 | uVar13) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar8 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar8;
        puVar7 = uStack_dc;
        regmap_write(*(iVar6 + 8),uVar14);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    uVar8 = auVar19._8_4_;
    iVar12 = auVar19._0_8_;
    *extraout_x18_01 = sym.beac_event_config;
    pcStack_138 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    if ((*(iVar12 + 0x920) >> 3 & 1) == 0) {
        uVar11 = uVar8 & 0x3f;
        uVar13 = 0;
        if ((uVar9 & 1) == 0) {
            uVar11 = 0;
        }
        uVar10 = 0x3f;
        iVar17 = *(iVar12 + 0x9a8);
joined_r0x08003ce0:
        uVar15 = 0;
    }
    else {
        uVar10 = 0x8001003f;
        uVar13 = 0x78;
        if (*(iVar12 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        if ((uVar9 & 1) == 0) {
            uVar11 = 0;
            iVar17 = *(iVar12 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar11 = uVar8 & 0x3f | 0x80000000;
        uVar15 = 0x28;
        if (*(iVar12 + 0x9ac) != 2) {
            uVar15 = 0;
        }
        iVar17 = *(iVar12 + 0x9a8);
    }
    pppuStack_140 = &ppuStack_d0;
    if (iVar17 != 0) {
        iVar17 = 0;
        uVar18 = 0;
        do {
            uStack_14c = 0;
            iVar1 = 0x61040;
            if (*(iVar12 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar17 + iVar1 + (uVar18 + *puVar7) * 4;
            regmap_read(*(iVar12 + 8),iVar1,&uStack_14c);
            uStack_14c = uStack_14c & ~uVar10 | uVar11 & uVar10;
            regmap_write(*(iVar12 + 8),iVar1);
            uStack_14c = 0;
            iVar1 = 0x61080;
            if (*(iVar12 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar12 + 8),iVar1 + iVar17,&uStack_14c);
            uStack_14c = uStack_14c & ~uVar13 | uVar15 & uVar13;
            regmap_write(*(iVar12 + 8),iVar1 + iVar17);
            uVar3 = *puVar7;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar9 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar12 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar12 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar18 == 1) && (uVar3 = *puVar7 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar9 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar12 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar12 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar18 = uVar18 + 1;
            iVar17 = iVar17 + 0x4000;
        } while (uVar18 < *(iVar12 + 0x9a8));
        if (1 < *(iVar12 + 0x9a8)) {
            uVar13 = *puVar7;
            *puVar7 = uVar13 + 1;
            if (0x10 < uVar13) goto code_r0x08003edc;
            iVar12 = iVar12 + uVar13 * 0x88;
            uVar14 = 3;
            if ((uVar9 & 1) == 0) {
                uVar14 = 8;
                uVar8 = 100;
            }
            *(iVar12 + 0x98) = uVar14;
            *(iVar12 + 0x9c) = uVar8;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.fewc_event_config @ 0x08003a28 (size 308) =====

void sym.fewc_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t in_w4;
    uint32_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar15;
    int iVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uint32_t uStack_10c;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar8 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_5c = 0;
    uVar6 = *(arg1 + 0x920) & 4;
    uVar11 = 0x3f;
    if (uVar6 != 0) {
        uVar11 = 0x8001003f;
    }
    uVar6 = arg2 & 0x3f | uVar6 << 0x1d;
    if ((arg4 & 1U) == 0) {
        uVar6 = 0;
    }
    iVar16 = 0x39020;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar16 = 0x33020;
    }
    uVar15 = iVar16 + *arg3 * 4;
    regmap_read(*(arg1 + 8),uVar15,&uStack_5c);
    uStack_5c = uStack_5c & (uVar11 ^ 0xffffffff) | uVar6 & uVar11;
    puVar7 = uStack_5c;
    regmap_write(*(arg1 + 8),uVar15);
    uVar6 = *arg3;
    if (uVar6 < 0x10) {
        uVar11 = (uVar6 & 0x1f) << 0x10 | 0xc0000002;
        if ((arg4 & 1U) == 0) {
            uVar11 = 0;
        }
        puVar7 = uVar11;
        iVar16 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar16 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar16 + uVar6 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar10 = auVar18._0_8_;
    *extraout_x18 = sym.fewc_event_filter_config;
    pcStack_88 = sym.fewc_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = uVar15;
    iStack_78 = arg3;
    uStack_70 = arg4 & 0xffffffff;
    iStack_68 = arg1;
    if (auVar18._8_4_ == 2) {
        uVar6 = uVar8 << 2;
        uVar13 = 0x39000;
        if (*(iVar10 + 0x9b8) < 0x15) {
            uVar13 = 0x33000;
        }
        uStack_9c = 0;
        regmap_read(*(iVar10 + 8),uVar13,&uStack_9c);
        uVar6 = (puVar7 | uVar6) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar6 = 0;
        }
        uStack_9c = uStack_9c & 0xfffffff0 | uVar6;
        puVar7 = uStack_9c;
        regmap_write(*(iVar10 + 8),uVar13);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar6 = auVar18._8_4_;
    iVar10 = auVar18._0_8_;
    *extraout_x18_00 = sym.beac_event_config;
    pcStack_f8 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    if ((*(iVar10 + 0x920) >> 3 & 1) == 0) {
        uVar9 = uVar6 & 0x3f;
        uVar11 = 0;
        if ((uVar8 & 1) == 0) {
            uVar9 = 0;
        }
        uVar12 = 0x3f;
        iVar16 = *(iVar10 + 0x9a8);
joined_r0x08003ce0:
        uVar14 = 0;
    }
    else {
        uVar12 = 0x8001003f;
        uVar11 = 0x78;
        if (*(iVar10 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        if ((uVar8 & 1) == 0) {
            uVar9 = 0;
            iVar16 = *(iVar10 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar9 = uVar6 & 0x3f | 0x80000000;
        uVar14 = 0x28;
        if (*(iVar10 + 0x9ac) != 2) {
            uVar14 = 0;
        }
        iVar16 = *(iVar10 + 0x9a8);
    }
    ppuStack_100 = &puStack_90;
    if (iVar16 != 0) {
        iVar16 = 0;
        uVar17 = 0;
        do {
            uStack_10c = 0;
            iVar1 = 0x61040;
            if (*(iVar10 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar16 + iVar1 + (uVar17 + *puVar7) * 4;
            regmap_read(*(iVar10 + 8),iVar1,&uStack_10c);
            uStack_10c = uStack_10c & ~uVar12 | uVar9 & uVar12;
            regmap_write(*(iVar10 + 8),iVar1);
            uStack_10c = 0;
            iVar1 = 0x61080;
            if (*(iVar10 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar10 + 8),iVar1 + iVar16,&uStack_10c);
            uStack_10c = uStack_10c & ~uVar11 | uVar14 & uVar11;
            regmap_write(*(iVar10 + 8),iVar1 + iVar16);
            uVar3 = *puVar7;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar8 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar10 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar10 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar17 == 1) && (uVar3 = *puVar7 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar8 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar10 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar10 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar17 = uVar17 + 1;
            iVar16 = iVar16 + 0x4000;
        } while (uVar17 < *(iVar10 + 0x9a8));
        if (1 < *(iVar10 + 0x9a8)) {
            uVar11 = *puVar7;
            *puVar7 = uVar11 + 1;
            if (0x10 < uVar11) goto code_r0x08003edc;
            iVar10 = iVar10 + uVar11 * 0x88;
            uVar13 = 3;
            if ((uVar8 & 1) == 0) {
                uVar13 = 8;
                uVar6 = 100;
            }
            *(iVar10 + 0x98) = uVar13;
            *(iVar10 + 0x9c) = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.fewc_event_filter_config @ 0x08003b5c (size 212) =====

void sym.fewc_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t in_w4;
    uint32_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    uVar7 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (arg2 == 2) {
        uVar6 = uVar7 << 2;
        uVar12 = 0x39000;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar12 = 0x33000;
        }
        uStack_3c = 0;
        regmap_read(*(arg1 + 8),uVar12,&uStack_3c);
        uVar6 = (arg3 | uVar6) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar6 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar6;
        arg3 = uStack_3c;
        regmap_write(*(arg1 + 8),uVar12);
    }
    else {
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar6 = auVar16._8_4_;
    iVar9 = auVar16._0_8_;
    *extraout_x18 = sym.beac_event_config;
    pcStack_98 = sym.beac_event_config;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    if ((*(iVar9 + 0x920) >> 3 & 1) == 0) {
        uVar8 = uVar6 & 0x3f;
        uVar10 = 0;
        if ((uVar7 & 1) == 0) {
            uVar8 = 0;
        }
        uVar11 = 0x3f;
        iVar14 = *(iVar9 + 0x9a8);
joined_r0x08003ce0:
        uVar13 = 0;
    }
    else {
        uVar11 = 0x8001003f;
        uVar10 = 0x78;
        if (*(iVar9 + 0x9ac) != 2) {
            uVar10 = 0;
        }
        if ((uVar7 & 1) == 0) {
            uVar8 = 0;
            iVar14 = *(iVar9 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar8 = uVar6 & 0x3f | 0x80000000;
        uVar13 = 0x28;
        if (*(iVar9 + 0x9ac) != 2) {
            uVar13 = 0;
        }
        iVar14 = *(iVar9 + 0x9a8);
    }
    puStack_a0 = &stack0xffffffffffffffd0;
    if (iVar14 != 0) {
        iVar14 = 0;
        uVar15 = 0;
        do {
            uStack_ac = 0;
            iVar1 = 0x61040;
            if (*(iVar9 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar14 + iVar1 + (uVar15 + *arg3) * 4;
            regmap_read(*(iVar9 + 8),iVar1,&uStack_ac);
            uStack_ac = uStack_ac & ~uVar11 | uVar8 & uVar11;
            regmap_write(*(iVar9 + 8),iVar1);
            uStack_ac = 0;
            iVar1 = 0x61080;
            if (*(iVar9 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(iVar9 + 8),iVar1 + iVar14,&uStack_ac);
            uStack_ac = uStack_ac & ~uVar10 | uVar13 & uVar10;
            regmap_write(*(iVar9 + 8),iVar1 + iVar14);
            uVar3 = *arg3;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((uVar7 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar9 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar9 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar15 == 1) && (uVar3 = *arg3 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((uVar7 & 1) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(iVar9 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(iVar9 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar15 = uVar15 + 1;
            iVar14 = iVar14 + 0x4000;
        } while (uVar15 < *(iVar9 + 0x9a8));
        if (1 < *(iVar9 + 0x9a8)) {
            uVar10 = *arg3;
            *arg3 = uVar10 + 1;
            if (0x10 < uVar10) goto code_r0x08003edc;
            iVar9 = iVar9 + uVar10 * 0x88;
            uVar12 = 3;
            if ((uVar7 & 1) == 0) {
                uVar12 = 8;
                uVar6 = 100;
            }
            *(iVar9 + 0x98) = uVar12;
            *(iVar9 + 0x9c) = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.beac_event_config @ 0x08003c30 (size 688) =====

void sym.beac_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    int iVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar6 = arg2;
    if ((*(arg1 + 0x920) >> 3 & 1) == 0) {
        uVar7 = uVar6 & 0x3f;
        uVar8 = 0;
        if ((arg4 & 1U) == 0) {
            uVar7 = 0;
        }
        uVar9 = 0x3f;
        iVar12 = *(arg1 + 0x9a8);
joined_r0x08003ce0:
        uVar11 = 0;
    }
    else {
        uVar9 = 0x8001003f;
        uVar8 = 0x78;
        if (*(arg1 + 0x9ac) != 2) {
            uVar8 = 0;
        }
        if ((arg4 & 1U) == 0) {
            uVar7 = 0;
            iVar12 = *(arg1 + 0x9a8);
            goto joined_r0x08003ce0;
        }
        uVar7 = uVar6 & 0x3f | 0x80000000;
        uVar11 = 0x28;
        if (*(arg1 + 0x9ac) != 2) {
            uVar11 = 0;
        }
        iVar12 = *(arg1 + 0x9a8);
    }
    if (iVar12 != 0) {
        iVar12 = 0;
        uVar13 = 0;
        do {
            uStack_6c = 0;
            iVar1 = 0x61040;
            if (*(arg1 + 0x9b8) < 0x15) {
                iVar1 = 0x49040;
            }
            iVar1 = iVar12 + iVar1 + (uVar13 + *arg3) * 4;
            regmap_read(*(arg1 + 8),iVar1,&uStack_6c);
            uStack_6c = uStack_6c & ~uVar9 | uVar7 & uVar9;
            regmap_write(*(arg1 + 8),iVar1);
            uStack_6c = 0;
            iVar1 = 0x61080;
            if (*(arg1 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            regmap_read(*(arg1 + 8),iVar1 + iVar12,&uStack_6c);
            uStack_6c = uStack_6c & ~uVar8 | uVar11 & uVar8;
            regmap_write(*(arg1 + 8),iVar1 + iVar12);
            uVar3 = *arg3;
            if (uVar3 < 0x10) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000003;
                if ((arg4 & 1U) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(arg1 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            if ((uVar13 == 1) && (uVar3 = *arg3 + 1, uVar3 < 0x10)) {
                uVar2 = (uVar3 & 0x1f) << 0x10 | 0xc0000008;
                if ((arg4 & 1U) == 0) {
                    uVar2 = 0;
                }
                iVar1 = 0x36020;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar1 = 0x31020;
                }
                regmap_write(*(arg1 + 8),iVar1 + uVar3 * 4,uVar2);
            }
            uVar13 = uVar13 + 1;
            iVar12 = iVar12 + 0x4000;
        } while (uVar13 < *(arg1 + 0x9a8));
        if (1 < *(arg1 + 0x9a8)) {
            uVar8 = *arg3;
            *arg3 = uVar8 + 1;
            if (0x10 < uVar8) goto code_r0x08003edc;
            arg1 = arg1 + uVar8 * 0x88;
            uVar10 = 3;
            if ((arg4 & 1U) == 0) {
                uVar10 = 8;
                uVar6 = 100;
            }
            *(arg1 + 0x98) = uVar10;
            *(arg1 + 0x9c) = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08003edc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ee0);
    (*pcVar5)();
}


// ===== sym.beac_event_enable @ 0x08003ee0 (size 248) =====

void sym.beac_event_enable(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uint32_t *in_x2;
    uint32_t *puVar8;
    uint32_t in_w3;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t in_x3;
    uint32_t in_w4;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t unaff_x20;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t *unaff_x23;
    uint64_t unaff_x24;
    int iVar22;
    uint32_t *puVar23;
    ulong unaff_x30;
    uchar auVar24 [12];
    uchar auVar25 [16];
    uint32_t uStack_33c;
    int64_t iStack_338;
    ulong ****ppppuStack_330;
    code *pcStack_328;
    uint64_t uStack_320;
    uint64_t uStack_318;
    uint64_t uStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    int64_t iStack_2f8;
    uint32_t uStack_2ec;
    int64_t iStack_2e8;
    ulong ****ppppuStack_2e0;
    code *pcStack_2d8;
    uint32_t *puStack_2d0;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    uint32_t uStack_2ac;
    int64_t iStack_2a8;
    ulong ****ppppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint32_t *puStack_278;
    uint64_t uStack_270;
    int64_t iStack_268;
    uint32_t uStack_25c;
    int64_t iStack_258;
    ulong ****ppppuStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint32_t *puStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    uint32_t uStack_21c;
    int64_t iStack_218;
    ulong ****ppppuStack_210;
    code *pcStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    uchar ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    uint32_t *puStack_160;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    uint64_t uStack_110;
    uint32_t *puStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t *puStack_d8;
    uint32_t uStack_d0;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar12 = 0x4002001;
    if ((arg2 & 1) == 0) {
        uVar12 = 0;
    }
    puVar18 = uVar12;
    if (*(arg1 + 0x9a8) != 0) {
        iVar22 = 0;
        unaff_x23 = NULL;
        unaff_x24 = 0x49080;
        do {
            uStack_5c = 0;
            iVar1 = 0x61080;
            if (*(arg1 + 0x9b8) < 0x15) {
                iVar1 = 0x49080;
            }
            unaff_x20 = iVar1 + iVar22;
            regmap_read(*(arg1 + 8),unaff_x20,&uStack_5c);
            uStack_5c = uStack_5c & 0xf00000fe | uVar12;
            in_x2 = uStack_5c;
            regmap_write(*(arg1 + 8),unaff_x20);
            uVar15 = unaff_x23 + 1;
            unaff_x23 = uVar15;
            iVar22 = iVar22 + 0x4000;
        } while (uVar15 < *(arg1 + 0x9a8));
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar22 = auVar24._8_4_;
    iVar4 = auVar24._0_8_;
    *extraout_x18 = sym.beac_event_filter_config;
    pcStack_b8 = sym.beac_event_filter_config;
    iVar2 = sp_el0;
    uVar14 = CONCAT44(in_x3,in_w3);
    iStack_c8 = *(iVar2 + 0x5e0);
    uVar12 = in_w4;
    puStack_c0 = &stack0xffffffffffffffb0;
    if (iVar22 == 1) {
        uVar14 = in_x2 | uVar14 << 0x10;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0;
        }
        if (*(iVar4 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar15 = 0;
            unaff_x20 = 0x49008;
            do {
                uStack_cc = 0;
                iVar22 = 0x61008;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    iVar22 = 0x49008;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(iVar4 + 8),unaff_x23,&uStack_cc);
                puVar8 = uVar14 & 0xffffffff;
                uStack_cc = uVar14;
                regmap_write(*(iVar4 + 8),unaff_x23);
                uVar9 = *(iVar4 + 0x9a8);
                uVar15 = uVar15 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                puVar18 = 0x61008;
            } while (uVar15 < uVar9);
code_r0x080042b8:
            uVar15 = in_x2 << 1;
            if ((in_w4 & 1) == 0) {
                uVar15 = uVar14;
            }
            in_x2 = puVar8;
            in_w4 = uVar12;
            if (uVar9 != 0) {
                puVar18 = NULL;
                uVar14 = 0;
                unaff_x23 = uVar15 & 6;
                do {
                    uStack_cc = 0;
                    iVar22 = 0x61080;
                    if (*(iVar4 + 0x9b8) < 0x15) {
                        iVar22 = 0x49080;
                    }
                    unaff_x20 = iVar22 + puVar18;
                    regmap_read(*(iVar4 + 8),unaff_x20,&uStack_cc);
                    uStack_cc = uStack_cc & 0xfffffff9 | uVar15 & 6;
                    in_x2 = uStack_cc;
                    regmap_write(*(iVar4 + 8),unaff_x20);
                    uVar12 = uVar14 + 1;
                    uVar14 = uVar12;
                    puVar18 = puVar18 + 0x4000;
                    unaff_x24 = 0x61080;
                } while (uVar12 < *(iVar4 + 0x9a8));
            }
        }
    }
    else if (iVar22 == 9) {
        uVar12 = in_x2;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        unaff_x23 = uVar12;
        uVar15 = 0;
        uVar9 = in_w3;
        puVar23 = in_x2;
        uVar10 = in_w4;
        if (*(iVar4 + 0x9a8) != 0) {
            iVar22 = 0;
            uVar15 = 0;
            uVar11 = 0x49010;
            uVar10 = 0x61010;
            puStack_d8 = in_x2;
            uStack_d0 = in_w4;
            do {
                uStack_cc = 0;
                uVar13 = uVar10;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    uVar13 = uVar11;
                }
                regmap_read(*(iVar4 + 8),uVar13 + iVar22,&uStack_cc);
                in_x2 = unaff_x23;
                uStack_cc = uVar12;
                regmap_write(*(iVar4 + 8),uVar13 + iVar22);
                uVar15 = uVar15 + 1;
                iVar22 = iVar22 + 0x4000;
            } while (uVar15 < *(iVar4 + 0x9a8));
            if ((uStack_d0 & 1) == 0) {
                in_w3 = 0;
            }
            unaff_x23 = in_w3;
            uVar15 = 0;
            if (*(iVar4 + 0x9a8) != 0) {
                iVar22 = 0;
                uVar12 = 0;
                uVar11 = 0x4900c;
                uVar10 = 0x6100c;
                do {
                    uStack_cc = 0;
                    uVar15 = uVar10;
                    if (*(iVar4 + 0x9b8) < 0x15) {
                        uVar15 = uVar11;
                    }
                    regmap_read(*(iVar4 + 8),uVar15 + iVar22,&uStack_cc);
                    in_x2 = unaff_x23;
                    uStack_cc = in_w3;
                    regmap_write(*(iVar4 + 8),uVar15 + iVar22);
                    uVar15 = *(iVar4 + 0x9a8);
                    uVar12 = uVar12 + 1;
                    iVar22 = iVar22 + 0x4000;
                } while (uVar12 < uVar15);
            }
            puVar18 = uVar10;
            unaff_x20 = uVar11;
            puVar23 = puStack_d8;
            uVar10 = uStack_d0;
        }
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        else {
            uVar14 = ((in_x3 & 0xf) << 0x20) >> 0x1c | puVar23 >> 0x20 & 0xf;
            puVar23 = puVar23 >> 0x20 & 0xf;
        }
        in_w3 = uVar9;
        unaff_x24 = uVar14;
        if (uVar15 != 0) {
            unaff_x20 = 0;
            puVar18 = NULL;
            uVar12 = in_w4;
            do {
                uStack_cc = 0;
                iVar22 = 0x61014;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x20;
                regmap_read(*(iVar4 + 8),unaff_x23,&uStack_cc);
                uStack_cc = uStack_cc & 0xfffffe00 | uVar14;
                puVar8 = uStack_cc;
                regmap_write(*(iVar4 + 8),unaff_x23);
                uVar9 = *(iVar4 + 0x9a8);
                uVar15 = puVar18 + 1;
                puVar18 = uVar15;
                unaff_x20 = unaff_x20 + 0x4000;
                in_x2 = puVar23;
                in_w4 = uVar10;
            } while (uVar15 < uVar9);
            goto code_r0x080042b8;
        }
    }
    else if (iVar22 == 2) {
        uVar14 = uVar14 << 0xe | in_x2 << 0xc;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0;
        }
        if (*(iVar4 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar15 = 0;
            unaff_x20 = 0x61014;
            do {
                uStack_cc = 0;
                iVar22 = 0x61014;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(iVar4 + 8),unaff_x23,&uStack_cc);
                uStack_cc = uStack_cc & 0xffff0fff | uVar14 & 0xf000;
                puVar8 = uStack_cc;
                regmap_write(*(iVar4 + 8),unaff_x23);
                uVar9 = *(iVar4 + 0x9a8);
                uVar15 = uVar15 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                puVar18 = in_x2;
            } while (uVar15 < uVar9);
            goto code_r0x080042b8;
        }
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar5 = auVar24._0_8_;
    *extraout_x18_00 = sym.berc_event_config;
    pcStack_128 = sym.berc_event_config;
    uStack_120 = 0x49014;
    iVar2 = sp_el0;
    iStack_138 = *(iVar2 + 0x5e0);
    uStack_13c = 0;
    uVar12 = *(iVar5 + 0x920) & 0x10;
    uVar15 = 0x3f;
    if (uVar12 != 0) {
        uVar15 = 0x8001003f;
    }
    uVar12 = auVar24._8_4_ & 0x3f | uVar12 << 0x1b;
    if ((in_w3 & 1) == 0) {
        uVar12 = 0;
    }
    iVar22 = 0x3d020;
    if (*(iVar5 + 0x9b8) < 0x15) {
        iVar22 = 0x39020;
    }
    uVar20 = iVar22 + *in_x2 * 4;
    uVar10 = in_w3;
    ppuStack_130 = &puStack_c0;
    uStack_110 = unaff_x24;
    puStack_108 = unaff_x23;
    uStack_100 = uVar14;
    puStack_f8 = puVar18;
    uStack_f0 = unaff_x20;
    iStack_e8 = iVar4;
    regmap_read(*(iVar5 + 8),uVar20,&uStack_13c);
    uStack_13c = uStack_13c & (uVar15 ^ 0xffffffff) | uVar12 & uVar15;
    regmap_write(*(iVar5 + 8),uVar20);
    uVar9 = *in_x2;
    if (uVar9 < 0x10) {
        uVar11 = (uVar9 & 0x1f) << 0x10 | 0xc0000004;
        if ((in_w3 & 1) == 0) {
            uVar11 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar5 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar5 + 8),iVar22 + uVar9 * 4,uVar11);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_138) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar14 = auVar25._0_8_;
    *extraout_x18_01 = sym.berc_event_enable;
    pcStack_168 = sym.berc_event_enable;
    iVar2 = sp_el0;
    iStack_178 = *(iVar2 + 0x5e0);
    uVar9 = 0x4002001;
    if ((auVar25._8_8_ & 1) == 0) {
        uVar9 = 0;
    }
    uVar19 = uVar9;
    uStack_17c = 0;
    uVar11 = 0x3d060;
    if (*(uVar14 + 0x9b8) < 0x15) {
        uVar11 = 0x39060;
    }
    uVar16 = uVar11;
    pppuStack_170 = &ppuStack_130;
    puStack_160 = in_x2;
    uStack_150 = in_w3;
    iStack_148 = iVar5;
    regmap_read(*(uVar14 + 8),uVar16,&uStack_17c);
    uStack_17c = uStack_17c & 0xf00000fe | uVar9;
    puVar18 = uStack_17c;
    regmap_write(*(uVar14 + 8),uVar16);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_178) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar17 = auVar24._0_8_;
    *extraout_x18_02 = sym.berc_event_filter_config;
    pcStack_1a8 = sym.berc_event_filter_config;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    ppppuStack_1b0 = &pppuStack_170;
    uStack_1a0 = uVar20;
    uStack_198 = uVar19;
    uStack_190 = uVar16;
    uStack_188 = uVar14;
    if (auVar24._8_4_ == 2) {
        uVar11 = puVar18 | uVar10 << 2;
        uVar9 = 0x3d000;
        if (*(uVar17 + 0x9b8) < 0x15) {
            uVar9 = 0x39000;
        }
        uVar19 = uVar9;
        uVar14 = in_w4;
        uStack_1bc = 0;
        uVar13 = in_w4;
        regmap_read(*(uVar17 + 8),uVar19,&uStack_1bc);
        uVar9 = uVar11 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar9 = 0;
        }
        uStack_1bc = uStack_1bc & 0xfffffff0 | uVar9;
        puVar18 = uStack_1bc;
        regmap_write(*(uVar17 + 8),uVar19);
        in_w4 = uVar13;
        uVar16 = uVar17;
        uVar20 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar4 = auVar24._0_8_;
    *extraout_x18_03 = sym.trp_event_config;
    pcStack_208 = sym.trp_event_config;
    uStack_1e8 = 0x31020;
    iVar2 = sp_el0;
    iStack_218 = *(iVar2 + 0x5e0);
    uVar17 = uVar10;
    uStack_21c = 0;
    uVar9 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar9 = 0x3f;
    }
    uVar11 = *(iVar4 + 0x920) & 0x20;
    uVar21 = *puVar18 * 4 + 0x24020;
    uVar13 = uVar9;
    if (uVar11 != 0) {
        uVar13 = uVar9 | 0x80010000;
    }
    uVar9 = uVar9 & auVar24._8_4_ | uVar11 << 0x1a;
    if ((uVar10 & 1) == 0) {
        uVar9 = 0;
    }
    uVar11 = uVar10;
    ppppuStack_210 = &ppppuStack_1b0;
    uStack_200 = uVar12;
    uStack_1f0 = uVar15;
    uStack_1e0 = uVar20;
    uStack_1d8 = uVar19;
    uStack_1d0 = uVar16;
    uStack_1c8 = uVar14;
    regmap_read(*(iVar4 + 8),uVar21,&uStack_21c);
    uStack_21c = uStack_21c & (uVar13 ^ 0xffffffff) | uVar9 & uVar13;
    puVar8 = uStack_21c;
    regmap_write(*(iVar4 + 8),uVar21);
    uVar12 = *puVar18;
    if (uVar12 < 0x10) {
        uVar15 = (uVar12 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar10 & 1) == 0) {
            uVar15 = 0;
        }
        puVar8 = uVar15;
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar12 * 4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_218) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar5 = auVar25._0_8_;
    *extraout_x18_04 = sym.trp_event_filter_config;
    pcStack_248 = sym.trp_event_filter_config;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    uVar12 = puVar8;
    ppppuStack_250 = &ppppuStack_210;
    uStack_240 = uVar21;
    puStack_238 = puVar18;
    uStack_230 = uVar17;
    iStack_228 = iVar4;
    switch(auVar25._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar5 + 0x9ac) == 2) {
            uVar12 = 1 << (uVar12 & 0x1f);
            uVar21 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar12 = 0xffffffff;
            }
            puVar18 = uVar12;
        }
        else {
            uVar12 = uVar12 | uVar11 << 8;
            if ((in_w4 & 1) == 0) {
                uVar12 = 0;
            }
            puVar18 = uVar12;
            uVar21 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar12 = uVar11 << 0x1c | uVar12 << 0x18;
        uVar21 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        puVar18 = uVar12;
        break;
    case 3:
        uVar12 = uVar11 << 0x14 | uVar12 << 0x10;
        uVar21 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        puVar18 = uVar12;
        break;
    case 7:
        if (*(iVar5 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar21 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0xffffffff;
        }
        puVar18 = uVar12;
    }
    if ((*(iVar5 + 0x9ac) == 2) && ((auVar25._8_4_ == 7 || (auVar25._8_4_ == 0)))) {
        uVar14 = 0x24008;
        uStack_25c = 0;
        regmap_read(*(iVar5 + 8),0x24008,&uStack_25c);
        uVar6 = *(iVar5 + 8);
        uVar17 = uVar14;
    }
    else {
        uStack_25c = 0;
        regmap_read(*(iVar5 + 8),0x24004,&uStack_25c);
        uVar6 = *(iVar5 + 8);
        uVar14 = 0x24004;
    }
    uStack_25c = uStack_25c & (uVar21 ^ 0xffffffff) | puVar18 & uVar21;
    puVar8 = uStack_25c;
    regmap_write(uVar6,uVar14);
code_r0x080048e8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar4 = auVar24._0_8_;
    *extraout_x18_05 = sym.drp_event_config;
    pcStack_298 = sym.drp_event_config;
    uStack_288 = 0x24020;
    iVar2 = sp_el0;
    iStack_2a8 = *(iVar2 + 0x5e0);
    uStack_2ac = 0;
    uVar12 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar12 = 0x3f;
    }
    uVar15 = *(iVar4 + 0x920) & 0x40;
    uVar9 = uVar12;
    if (uVar15 != 0) {
        uVar9 = uVar12 | 0x80010000;
    }
    uVar12 = uVar12 & auVar24._8_4_ | uVar15 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar12 = 0;
    }
    iVar22 = 0x51010;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x44010;
    }
    uVar14 = iVar22 + *puVar8 * 4;
    uVar10 = uVar11;
    ppppuStack_2a0 = &ppppuStack_250;
    uStack_290 = uVar13;
    uStack_280 = uVar21;
    puStack_278 = puVar18;
    uStack_270 = uVar17;
    iStack_268 = iVar5;
    regmap_read(*(iVar4 + 8),uVar14,&uStack_2ac);
    uStack_2ac = uStack_2ac & (uVar9 ^ 0xffffffff) | uVar12 & uVar9;
    regmap_write(*(iVar4 + 8),uVar14);
    uVar15 = *puVar8;
    if (uVar15 < 0x10) {
        uVar13 = (uVar15 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar13 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar15 * 4,uVar13);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar5 = auVar25._0_8_;
    *extraout_x18_06 = sym.drp_event_enable;
    pcStack_2d8 = sym.drp_event_enable;
    iVar2 = sp_el0;
    iStack_2e8 = *(iVar2 + 0x5e0);
    uVar15 = 0x2001;
    if ((auVar25._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uStack_2ec = 0;
    uVar13 = 0x51050;
    if (*(iVar5 + 0x9b8) < 0x15) {
        uVar13 = 0x44050;
    }
    uVar20 = uVar13;
    ppppuStack_2e0 = &ppppuStack_2a0;
    puStack_2d0 = puVar8;
    uStack_2c0 = uVar11;
    iStack_2b8 = iVar4;
    regmap_read(*(iVar5 + 8),uVar20,&uStack_2ec);
    uStack_2ec = uStack_2ec & 0xffff00fe | uVar15;
    puVar18 = uStack_2ec;
    regmap_write(*(iVar5 + 8),uVar20);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar4 = auVar24._0_8_;
    *extraout_x18_07 = sym.pmgr_event_config;
    pcStack_328 = sym.pmgr_event_config;
    iVar2 = sp_el0;
    iStack_338 = *(iVar2 + 0x5e0);
    uStack_33c = 0;
    uVar11 = *(iVar4 + 0x920) & 0x80;
    uVar13 = 0x3f;
    if (uVar11 != 0) {
        uVar13 = 0x8001003f;
    }
    uVar11 = auVar24._8_4_ & 0x3f | uVar11 << 0x18;
    if ((uVar10 & 1) == 0) {
        uVar11 = 0;
    }
    iVar22 = 0x4d000;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x3f000;
    }
    iVar22 = iVar22 + *puVar18 * 4;
    ppppuStack_330 = &ppppuStack_2e0;
    uStack_320 = uVar12;
    uStack_318 = uVar9;
    uStack_310 = uVar14;
    uStack_308 = uVar15;
    uStack_300 = uVar20;
    iStack_2f8 = iVar5;
    regmap_read(*(iVar4 + 8),iVar22,&uStack_33c);
    uStack_33c = uStack_33c & (uVar13 ^ 0xffffffff) | uVar11 & uVar13;
    regmap_write(*(iVar4 + 8),iVar22);
    uVar12 = *puVar18;
    if (uVar12 < 0x10) {
        uVar15 = (uVar12 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar10 & 1) == 0) {
            uVar15 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar12 * 4,uVar15);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_338) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar7 = auVar25._0_8_;
    *extraout_x18_08 = sym.__cfi_check_fail;
    if (puVar7 != NULL) {
        switch(*puVar7) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar7,auVar25._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar3)();
}


// ===== sym.beac_event_filter_config @ 0x08003fd8 (size 944) =====

void sym.beac_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t in_w4;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar15;
    uint64_t unaff_x20;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t unaff_x21;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t *unaff_x23;
    uint64_t unaff_x24;
    int iVar22;
    ulong unaff_x30;
    uchar auVar23 [12];
    uchar auVar24 [16];
    uint32_t uStack_2dc;
    int64_t iStack_2d8;
    ulong ****ppppuStack_2d0;
    code *pcStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    uint64_t uStack_2a0;
    int64_t iStack_298;
    uint32_t uStack_28c;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    uint32_t *puStack_270;
    uint64_t uStack_260;
    int64_t iStack_258;
    uint32_t uStack_24c;
    int64_t iStack_248;
    ulong ****ppppuStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    ulong uStack_228;
    uint64_t uStack_220;
    uint32_t *puStack_218;
    uint64_t uStack_210;
    int64_t iStack_208;
    uint32_t uStack_1fc;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint32_t *puStack_1d8;
    uint64_t uStack_1d0;
    int64_t iStack_1c8;
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    uchar ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_190;
    ulong uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint32_t uStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    uint64_t uStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint32_t *puStack_100;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint64_t uStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    uVar10 = arg4;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uVar13 = in_w4;
    if (arg2 == 1) {
        arg4 = arg3 | arg4 << 0x10;
        if ((in_w4 & 1) == 0) {
            arg4 = 0;
        }
        if (*(arg1 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar19 = 0;
            unaff_x20 = 0x49008;
            do {
                uStack_6c = 0;
                iVar22 = 0x61008;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49008;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(arg1 + 8),unaff_x23,&uStack_6c);
                puVar8 = arg4 & 0xffffffff;
                uStack_6c = arg4;
                regmap_write(*(arg1 + 8),unaff_x23);
                uVar11 = *(arg1 + 0x9a8);
                uVar19 = uVar19 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                unaff_x21 = 0x61008;
            } while (uVar19 < uVar11);
code_r0x080042b8:
            uVar19 = arg3 << 1;
            if ((in_w4 & 1) == 0) {
                uVar19 = arg4;
            }
            arg3 = puVar8;
            in_w4 = uVar13;
            if (uVar11 != 0) {
                unaff_x21 = 0;
                arg4 = 0;
                unaff_x23 = uVar19 & 6;
                do {
                    uStack_6c = 0;
                    iVar22 = 0x61080;
                    if (*(arg1 + 0x9b8) < 0x15) {
                        iVar22 = 0x49080;
                    }
                    unaff_x20 = iVar22 + unaff_x21;
                    regmap_read(*(arg1 + 8),unaff_x20,&uStack_6c);
                    uStack_6c = uStack_6c & 0xfffffff9 | uVar19 & 6;
                    arg3 = uStack_6c;
                    regmap_write(*(arg1 + 8),unaff_x20);
                    uVar13 = arg4 + 1;
                    arg4 = uVar13;
                    unaff_x21 = unaff_x21 + 0x4000;
                    unaff_x24 = 0x61080;
                } while (uVar13 < *(arg1 + 0x9a8));
            }
        }
    }
    else if (arg2 == 9) {
        uVar13 = arg3;
        if ((in_w4 & 1) == 0) {
            uVar13 = 0;
        }
        unaff_x23 = uVar13;
        uVar19 = 0;
        uVar11 = uVar10;
        uVar20 = arg3;
        uStack_70 = in_w4;
        if (*(arg1 + 0x9a8) != 0) {
            iVar22 = 0;
            uVar19 = 0;
            uVar14 = 0x49010;
            uVar12 = 0x61010;
            uStack_78 = arg3;
            do {
                uStack_6c = 0;
                uVar1 = uVar12;
                if (*(arg1 + 0x9b8) < 0x15) {
                    uVar1 = uVar14;
                }
                regmap_read(*(arg1 + 8),uVar1 + iVar22,&uStack_6c);
                arg3 = unaff_x23;
                uStack_6c = uVar13;
                regmap_write(*(arg1 + 8),uVar1 + iVar22);
                uVar19 = uVar19 + 1;
                iVar22 = iVar22 + 0x4000;
            } while (uVar19 < *(arg1 + 0x9a8));
            if ((uStack_70 & 1) == 0) {
                uVar10 = 0;
            }
            unaff_x23 = uVar10;
            uVar19 = 0;
            if (*(arg1 + 0x9a8) != 0) {
                iVar22 = 0;
                uVar13 = 0;
                uVar14 = 0x4900c;
                uVar12 = 0x6100c;
                do {
                    uStack_6c = 0;
                    uVar19 = uVar12;
                    if (*(arg1 + 0x9b8) < 0x15) {
                        uVar19 = uVar14;
                    }
                    regmap_read(*(arg1 + 8),uVar19 + iVar22,&uStack_6c);
                    arg3 = unaff_x23;
                    uStack_6c = uVar10;
                    regmap_write(*(arg1 + 8),uVar19 + iVar22);
                    uVar19 = *(arg1 + 0x9a8);
                    uVar13 = uVar13 + 1;
                    iVar22 = iVar22 + 0x4000;
                } while (uVar13 < uVar19);
            }
            unaff_x21 = uVar12;
            unaff_x20 = uVar14;
            uVar20 = uStack_78;
        }
        if ((uStack_70 & 1) == 0) {
            arg4 = 0;
        }
        else {
            arg4 = arg4 >> 0x1c & 0xf0 | uVar20 >> 0x20 & 0xf;
            uVar20 = uVar20 >> 0x20 & 0xf;
        }
        uVar10 = uVar11;
        unaff_x24 = arg4;
        if (uVar19 != 0) {
            unaff_x20 = 0;
            unaff_x21 = 0;
            uVar13 = in_w4;
            do {
                uStack_6c = 0;
                iVar22 = 0x61014;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x20;
                regmap_read(*(arg1 + 8),unaff_x23,&uStack_6c);
                uStack_6c = uStack_6c & 0xfffffe00 | arg4;
                puVar8 = uStack_6c;
                regmap_write(*(arg1 + 8),unaff_x23);
                uVar11 = *(arg1 + 0x9a8);
                uVar19 = unaff_x21 + 1;
                unaff_x21 = uVar19;
                unaff_x20 = unaff_x20 + 0x4000;
                arg3 = uVar20;
                in_w4 = uStack_70;
            } while (uVar19 < uVar11);
            goto code_r0x080042b8;
        }
    }
    else if (arg2 == 2) {
        arg4 = arg4 << 0xe | arg3 << 0xc;
        if ((in_w4 & 1) == 0) {
            arg4 = 0;
        }
        if (*(arg1 + 0x9a8) != 0) {
            unaff_x24 = 0;
            uVar19 = 0;
            unaff_x20 = 0x61014;
            do {
                uStack_6c = 0;
                iVar22 = 0x61014;
                if (*(arg1 + 0x9b8) < 0x15) {
                    iVar22 = 0x49014;
                }
                unaff_x23 = iVar22 + unaff_x24;
                regmap_read(*(arg1 + 8),unaff_x23,&uStack_6c);
                uStack_6c = uStack_6c & 0xffff0fff | arg4 & 0xf000;
                puVar8 = uStack_6c;
                regmap_write(*(arg1 + 8),unaff_x23);
                uVar11 = *(arg1 + 0x9a8);
                uVar19 = uVar19 + 1;
                unaff_x24 = unaff_x24 + 0x4000;
                unaff_x21 = arg3;
            } while (uVar19 < uVar11);
            goto code_r0x080042b8;
        }
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18 = sym.berc_event_config;
    pcStack_c8 = sym.berc_event_config;
    uStack_c0 = 0x49014;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uStack_dc = 0;
    uVar13 = *(iVar4 + 0x920) & 0x10;
    uVar19 = 0x3f;
    if (uVar13 != 0) {
        uVar19 = 0x8001003f;
    }
    uVar13 = auVar23._8_4_ & 0x3f | uVar13 << 0x1b;
    if ((uVar10 & 1) == 0) {
        uVar13 = 0;
    }
    iVar22 = 0x3d020;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x39020;
    }
    uVar20 = iVar22 + *arg3 * 4;
    uVar12 = uVar10;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x24;
    puStack_a8 = unaff_x23;
    uStack_a0 = arg4;
    uStack_98 = unaff_x21;
    uStack_90 = unaff_x20;
    iStack_88 = arg1;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_dc);
    uStack_dc = uStack_dc & (uVar19 ^ 0xffffffff) | uVar13 & uVar19;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar11 = *arg3;
    if (uVar11 < 0x10) {
        uVar14 = (uVar11 & 0x1f) << 0x10 | 0xc0000004;
        if ((uVar10 & 1) == 0) {
            uVar14 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar11 * 4,uVar14);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar15 = auVar24._0_8_;
    *extraout_x18_00 = sym.berc_event_enable;
    pcStack_108 = sym.berc_event_enable;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uVar11 = 0x4002001;
    if ((auVar24._8_8_ & 1) == 0) {
        uVar11 = 0;
    }
    uVar18 = uVar11;
    uStack_11c = 0;
    uVar14 = 0x3d060;
    if (*(uVar15 + 0x9b8) < 0x15) {
        uVar14 = 0x39060;
    }
    uVar16 = uVar14;
    ppuStack_110 = &puStack_d0;
    puStack_100 = arg3;
    uStack_f0 = uVar10;
    iStack_e8 = iVar4;
    regmap_read(*(uVar15 + 8),uVar16,&uStack_11c);
    uStack_11c = uStack_11c & 0xf00000fe | uVar11;
    puVar8 = uStack_11c;
    regmap_write(*(uVar15 + 8),uVar16);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar17 = auVar23._0_8_;
    *extraout_x18_01 = sym.berc_event_filter_config;
    pcStack_148 = sym.berc_event_filter_config;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    pppuStack_150 = &ppuStack_110;
    uStack_140 = uVar20;
    uStack_138 = uVar18;
    uStack_130 = uVar16;
    uStack_128 = uVar15;
    if (auVar23._8_4_ == 2) {
        uVar11 = puVar8 | uVar12 << 2;
        uVar10 = 0x3d000;
        if (*(uVar17 + 0x9b8) < 0x15) {
            uVar10 = 0x39000;
        }
        uVar18 = uVar10;
        uVar15 = in_w4;
        uStack_15c = 0;
        uVar14 = in_w4;
        regmap_read(*(uVar17 + 8),uVar18,&uStack_15c);
        uVar10 = uVar11 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0;
        }
        uStack_15c = uStack_15c & 0xfffffff0 | uVar10;
        puVar8 = uStack_15c;
        regmap_write(*(uVar17 + 8),uVar18);
        in_w4 = uVar14;
        uVar16 = uVar17;
        uVar20 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_02 = sym.trp_event_config;
    pcStack_1a8 = sym.trp_event_config;
    uStack_188 = 0x31020;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    uVar17 = uVar12;
    uStack_1bc = 0;
    uVar10 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar10 = 0x3f;
    }
    uVar11 = *(iVar4 + 0x920) & 0x20;
    uVar21 = *puVar8 * 4 + 0x24020;
    uVar14 = uVar10;
    if (uVar11 != 0) {
        uVar14 = uVar10 | 0x80010000;
    }
    uVar10 = uVar10 & auVar23._8_4_ | uVar11 << 0x1a;
    if ((uVar12 & 1) == 0) {
        uVar10 = 0;
    }
    uVar11 = uVar12;
    ppppuStack_1b0 = &pppuStack_150;
    uStack_1a0 = uVar13;
    uStack_190 = uVar19;
    uStack_180 = uVar20;
    uStack_178 = uVar18;
    uStack_170 = uVar16;
    uStack_168 = uVar15;
    regmap_read(*(iVar4 + 8),uVar21,&uStack_1bc);
    uStack_1bc = uStack_1bc & (uVar14 ^ 0xffffffff) | uVar10 & uVar14;
    puVar9 = uStack_1bc;
    regmap_write(*(iVar4 + 8),uVar21);
    uVar10 = *puVar8;
    if (uVar10 < 0x10) {
        uVar13 = (uVar10 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar12 & 1) == 0) {
            uVar13 = 0;
        }
        puVar9 = uVar13;
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar10 * 4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar5 = auVar24._0_8_;
    *extraout_x18_03 = sym.trp_event_filter_config;
    pcStack_1e8 = sym.trp_event_filter_config;
    iVar2 = sp_el0;
    iStack_1f8 = *(iVar2 + 0x5e0);
    uVar10 = puVar9;
    ppppuStack_1f0 = &ppppuStack_1b0;
    uStack_1e0 = uVar21;
    puStack_1d8 = puVar8;
    uStack_1d0 = uVar17;
    iStack_1c8 = iVar4;
    switch(auVar24._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar5 + 0x9ac) == 2) {
            uVar10 = 1 << (uVar10 & 0x1f);
            uVar21 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar10 = 0xffffffff;
            }
            puVar8 = uVar10;
        }
        else {
            uVar10 = uVar10 | uVar11 << 8;
            if ((in_w4 & 1) == 0) {
                uVar10 = 0;
            }
            puVar8 = uVar10;
            uVar21 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar10 = uVar11 << 0x1c | uVar10 << 0x18;
        uVar21 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0;
        }
        puVar8 = uVar10;
        break;
    case 3:
        uVar10 = uVar11 << 0x14 | uVar10 << 0x10;
        uVar21 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0;
        }
        puVar8 = uVar10;
        break;
    case 7:
        if (*(iVar5 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar21 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar10 = 0xffffffff;
        }
        puVar8 = uVar10;
    }
    if ((*(iVar5 + 0x9ac) == 2) && ((auVar24._8_4_ == 7 || (auVar24._8_4_ == 0)))) {
        uVar20 = 0x24008;
        uStack_1fc = 0;
        regmap_read(*(iVar5 + 8),0x24008,&uStack_1fc);
        uVar6 = *(iVar5 + 8);
        uVar17 = uVar20;
    }
    else {
        uStack_1fc = 0;
        regmap_read(*(iVar5 + 8),0x24004,&uStack_1fc);
        uVar6 = *(iVar5 + 8);
        uVar20 = 0x24004;
    }
    uStack_1fc = uStack_1fc & (uVar21 ^ 0xffffffff) | puVar8 & uVar21;
    puVar9 = uStack_1fc;
    regmap_write(uVar6,uVar20);
code_r0x080048e8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_04 = sym.drp_event_config;
    pcStack_238 = sym.drp_event_config;
    uStack_228 = 0x24020;
    iVar2 = sp_el0;
    iStack_248 = *(iVar2 + 0x5e0);
    uStack_24c = 0;
    uVar10 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar10 = 0x3f;
    }
    uVar13 = *(iVar4 + 0x920) & 0x40;
    uVar19 = uVar10;
    if (uVar13 != 0) {
        uVar19 = uVar10 | 0x80010000;
    }
    uVar10 = uVar10 & auVar23._8_4_ | uVar13 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar10 = 0;
    }
    iVar22 = 0x51010;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar22 = 0x44010;
    }
    uVar20 = iVar22 + *puVar9 * 4;
    uVar12 = uVar11;
    ppppuStack_240 = &ppppuStack_1f0;
    uStack_230 = uVar14;
    uStack_220 = uVar21;
    puStack_218 = puVar8;
    uStack_210 = uVar17;
    iStack_208 = iVar5;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_24c);
    uStack_24c = uStack_24c & (uVar19 ^ 0xffffffff) | uVar10 & uVar19;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar13 = *puVar9;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar14 = 0;
        }
        iVar22 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar22 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar22 + uVar13 * 4,uVar14);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_248) {
        auVar24 = __stack_chk_fail();
        iVar5 = auVar24._0_8_;
        *extraout_x18_05 = sym.drp_event_enable;
        pcStack_278 = sym.drp_event_enable;
        iVar2 = sp_el0;
        iStack_288 = *(iVar2 + 0x5e0);
        uVar13 = 0x2001;
        if ((auVar24._8_8_ & 1) == 0) {
            uVar13 = 0;
        }
        uStack_28c = 0;
        uVar14 = 0x51050;
        if (*(iVar5 + 0x9b8) < 0x15) {
            uVar14 = 0x44050;
        }
        uVar15 = uVar14;
        ppppuStack_280 = &ppppuStack_240;
        puStack_270 = puVar9;
        uStack_260 = uVar11;
        iStack_258 = iVar4;
        regmap_read(*(iVar5 + 8),uVar15,&uStack_28c);
        uStack_28c = uStack_28c & 0xffff00fe | uVar13;
        puVar8 = uStack_28c;
        regmap_write(*(iVar5 + 8),uVar15);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) != iStack_288) {
            auVar23 = __stack_chk_fail();
            iVar4 = auVar23._0_8_;
            *extraout_x18_06 = sym.pmgr_event_config;
            pcStack_2c8 = sym.pmgr_event_config;
            iVar2 = sp_el0;
            iStack_2d8 = *(iVar2 + 0x5e0);
            uStack_2dc = 0;
            uVar11 = *(iVar4 + 0x920) & 0x80;
            uVar14 = 0x3f;
            if (uVar11 != 0) {
                uVar14 = 0x8001003f;
            }
            uVar11 = auVar23._8_4_ & 0x3f | uVar11 << 0x18;
            if ((uVar12 & 1) == 0) {
                uVar11 = 0;
            }
            iVar22 = 0x4d000;
            if (*(iVar4 + 0x9b8) < 0x15) {
                iVar22 = 0x3f000;
            }
            iVar22 = iVar22 + *puVar8 * 4;
            ppppuStack_2d0 = &ppppuStack_280;
            uStack_2c0 = uVar10;
            uStack_2b8 = uVar19;
            uStack_2b0 = uVar20;
            uStack_2a8 = uVar13;
            uStack_2a0 = uVar15;
            iStack_298 = iVar5;
            regmap_read(*(iVar4 + 8),iVar22,&uStack_2dc);
            uStack_2dc = uStack_2dc & (uVar14 ^ 0xffffffff) | uVar11 & uVar14;
            regmap_write(*(iVar4 + 8),iVar22);
            uVar10 = *puVar8;
            if (uVar10 < 0x10) {
                uVar13 = (uVar10 & 0x1f) << 0x10 | 0xc0000007;
                if ((uVar12 & 1) == 0) {
                    uVar13 = 0;
                }
                iVar22 = 0x36020;
                if (*(iVar4 + 0x9b8) < 0x15) {
                    iVar22 = 0x31020;
                }
                regmap_write(*(iVar4 + 8),iVar22 + uVar10 * 4,uVar13);
            }
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iStack_2d8) {
                return;
            }
            auVar24 = __stack_chk_fail();
            puVar7 = auVar24._0_8_;
            *extraout_x18_07 = sym.__cfi_check_fail;
            if (puVar7 != NULL) {
                switch(*puVar7) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar7,auVar24._8_8_,0);
                    break;
                default:
                    return;
                }
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5502,0x8004cac);
            (*pcVar3)();
        }
        return;
    }
    return;
}


// ===== sym.berc_event_config @ 0x08004388 (size 308) =====

void sym.berc_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t in_w4;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [12];
    uint32_t uStack_25c;
    int64_t iStack_258;
    ulong ****ppppuStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    int64_t iStack_218;
    uint32_t uStack_20c;
    int64_t iStack_208;
    ulong ****ppppuStack_200;
    code *pcStack_1f8;
    uint32_t *puStack_1f0;
    uint64_t uStack_1e0;
    int64_t iStack_1d8;
    uint32_t uStack_1cc;
    int64_t iStack_1c8;
    ulong ****ppppuStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    uint32_t *puStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint32_t *puStack_158;
    uint64_t uStack_150;
    int64_t iStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar10 = arg4;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_5c = 0;
    uVar14 = *(arg1 + 0x920) & 0x10;
    uVar15 = 0x3f;
    if (uVar14 != 0) {
        uVar15 = 0x8001003f;
    }
    uVar14 = arg2 & 0x3f | uVar14 << 0x1b;
    if ((arg4 & 1U) == 0) {
        uVar14 = 0;
    }
    iVar1 = 0x3d020;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar1 = 0x39020;
    }
    uVar20 = iVar1 + *arg3 * 4;
    regmap_read(*(arg1 + 8),uVar20,&uStack_5c);
    uStack_5c = uStack_5c & (uVar15 ^ 0xffffffff) | uVar14 & uVar15;
    regmap_write(*(arg1 + 8),uVar20);
    uVar12 = *arg3;
    if (uVar12 < 0x10) {
        uVar11 = (uVar12 & 0x1f) << 0x10 | 0xc0000004;
        if ((arg4 & 1U) == 0) {
            uVar11 = 0;
        }
        iVar1 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar1 + uVar12 * 4,uVar11);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar16 = auVar22._0_8_;
    *extraout_x18 = sym.berc_event_enable;
    pcStack_88 = sym.berc_event_enable;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    uVar12 = 0x4002001;
    if ((auVar22._8_8_ & 1) == 0) {
        uVar12 = 0;
    }
    uVar19 = uVar12;
    uStack_9c = 0;
    uVar11 = 0x3d060;
    if (*(uVar16 + 0x9b8) < 0x15) {
        uVar11 = 0x39060;
    }
    uVar17 = uVar11;
    puStack_90 = &stack0xffffffffffffffb0;
    iStack_80 = arg3;
    uStack_70 = arg4 & 0xffffffff;
    iStack_68 = arg1;
    regmap_read(*(uVar16 + 8),uVar17,&uStack_9c);
    uStack_9c = uStack_9c & 0xf00000fe | uVar12;
    puVar8 = uStack_9c;
    regmap_write(*(uVar16 + 8),uVar17);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_98) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar18 = auVar23._0_8_;
    *extraout_x18_00 = sym.berc_event_filter_config;
    pcStack_c8 = sym.berc_event_filter_config;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar20;
    uStack_b8 = uVar19;
    uStack_b0 = uVar17;
    uStack_a8 = uVar16;
    if (auVar23._8_4_ == 2) {
        uVar11 = puVar8 | uVar10 << 2;
        uVar12 = 0x3d000;
        if (*(uVar18 + 0x9b8) < 0x15) {
            uVar12 = 0x39000;
        }
        uVar19 = uVar12;
        uVar16 = in_w4;
        uStack_dc = 0;
        uVar13 = in_w4;
        regmap_read(*(uVar18 + 8),uVar19,&uStack_dc);
        uVar12 = uVar11 & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        uStack_dc = uStack_dc & 0xfffffff0 | uVar12;
        puVar8 = uStack_dc;
        regmap_write(*(uVar18 + 8),uVar19);
        in_w4 = uVar13;
        uVar17 = uVar18;
        uVar20 = uVar11;
    }
    else {
        _printk(0x800090a);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_01 = sym.trp_event_config;
    pcStack_128 = sym.trp_event_config;
    uStack_108 = 0x31020;
    iVar2 = sp_el0;
    iStack_138 = *(iVar2 + 0x5e0);
    uVar18 = uVar10;
    uStack_13c = 0;
    uVar12 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar12 = 0x3f;
    }
    uVar11 = *(iVar4 + 0x920) & 0x20;
    uVar21 = *puVar8 * 4 + 0x24020;
    uVar13 = uVar12;
    if (uVar11 != 0) {
        uVar13 = uVar12 | 0x80010000;
    }
    uVar12 = uVar12 & auVar23._8_4_ | uVar11 << 0x1a;
    if ((uVar10 & 1) == 0) {
        uVar12 = 0;
    }
    uVar11 = uVar10;
    pppuStack_130 = &ppuStack_d0;
    uStack_120 = uVar14;
    uStack_110 = uVar15;
    uStack_100 = uVar20;
    uStack_f8 = uVar19;
    uStack_f0 = uVar17;
    uStack_e8 = uVar16;
    regmap_read(*(iVar4 + 8),uVar21,&uStack_13c);
    uStack_13c = uStack_13c & (uVar13 ^ 0xffffffff) | uVar12 & uVar13;
    puVar9 = uStack_13c;
    regmap_write(*(iVar4 + 8),uVar21);
    uVar14 = *puVar8;
    if (uVar14 < 0x10) {
        uVar15 = (uVar14 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar10 & 1) == 0) {
            uVar15 = 0;
        }
        puVar9 = uVar15;
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar14 * 4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_138) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar5 = auVar22._0_8_;
    *extraout_x18_02 = sym.trp_event_filter_config;
    pcStack_168 = sym.trp_event_filter_config;
    iVar2 = sp_el0;
    iStack_178 = *(iVar2 + 0x5e0);
    uVar14 = puVar9;
    ppppuStack_170 = &pppuStack_130;
    uStack_160 = uVar21;
    puStack_158 = puVar8;
    uStack_150 = uVar18;
    iStack_148 = iVar4;
    switch(auVar22._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar5 + 0x9ac) == 2) {
            uVar14 = 1 << (uVar14 & 0x1f);
            uVar21 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar14 = 0xffffffff;
            }
            puVar8 = uVar14;
        }
        else {
            uVar14 = uVar14 | uVar11 << 8;
            if ((in_w4 & 1) == 0) {
                uVar14 = 0;
            }
            puVar8 = uVar14;
            uVar21 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar14 = uVar11 << 0x1c | uVar14 << 0x18;
        uVar21 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0;
        }
        puVar8 = uVar14;
        break;
    case 3:
        uVar14 = uVar11 << 0x14 | uVar14 << 0x10;
        uVar21 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0;
        }
        puVar8 = uVar14;
        break;
    case 7:
        if (*(iVar5 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar21 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar14 = 0xffffffff;
        }
        puVar8 = uVar14;
    }
    if ((*(iVar5 + 0x9ac) == 2) && ((auVar22._8_4_ == 7 || (auVar22._8_4_ == 0)))) {
        uVar20 = 0x24008;
        uStack_17c = 0;
        regmap_read(*(iVar5 + 8),0x24008,&uStack_17c);
        uVar6 = *(iVar5 + 8);
        uVar18 = uVar20;
    }
    else {
        uStack_17c = 0;
        regmap_read(*(iVar5 + 8),0x24004,&uStack_17c);
        uVar6 = *(iVar5 + 8);
        uVar20 = 0x24004;
    }
    uStack_17c = uStack_17c & (uVar21 ^ 0xffffffff) | puVar8 & uVar21;
    puVar9 = uStack_17c;
    regmap_write(uVar6,uVar20);
code_r0x080048e8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_178) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_03 = sym.drp_event_config;
    pcStack_1b8 = sym.drp_event_config;
    uStack_1a8 = 0x24020;
    iVar2 = sp_el0;
    iStack_1c8 = *(iVar2 + 0x5e0);
    uStack_1cc = 0;
    uVar14 = 0x7f;
    if (*(iVar4 + 0x9ac) != 2) {
        uVar14 = 0x3f;
    }
    uVar15 = *(iVar4 + 0x920) & 0x40;
    uVar10 = uVar14;
    if (uVar15 != 0) {
        uVar10 = uVar14 | 0x80010000;
    }
    uVar14 = uVar14 & auVar23._8_4_ | uVar15 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar14 = 0;
    }
    iVar1 = 0x51010;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar1 = 0x44010;
    }
    uVar20 = iVar1 + *puVar9 * 4;
    uVar12 = uVar11;
    ppppuStack_1c0 = &ppppuStack_170;
    uStack_1b0 = uVar13;
    uStack_1a0 = uVar21;
    puStack_198 = puVar8;
    uStack_190 = uVar18;
    iStack_188 = iVar5;
    regmap_read(*(iVar4 + 8),uVar20,&uStack_1cc);
    uStack_1cc = uStack_1cc & (uVar10 ^ 0xffffffff) | uVar14 & uVar10;
    regmap_write(*(iVar4 + 8),uVar20);
    uVar15 = *puVar9;
    if (uVar15 < 0x10) {
        uVar13 = (uVar15 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar13 = 0;
        }
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar15 * 4,uVar13);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar5 = auVar22._0_8_;
    *extraout_x18_04 = sym.drp_event_enable;
    pcStack_1f8 = sym.drp_event_enable;
    iVar2 = sp_el0;
    iStack_208 = *(iVar2 + 0x5e0);
    uVar15 = 0x2001;
    if ((auVar22._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uStack_20c = 0;
    uVar13 = 0x51050;
    if (*(iVar5 + 0x9b8) < 0x15) {
        uVar13 = 0x44050;
    }
    uVar16 = uVar13;
    ppppuStack_200 = &ppppuStack_1c0;
    puStack_1f0 = puVar9;
    uStack_1e0 = uVar11;
    iStack_1d8 = iVar4;
    regmap_read(*(iVar5 + 8),uVar16,&uStack_20c);
    uStack_20c = uStack_20c & 0xffff00fe | uVar15;
    puVar8 = uStack_20c;
    regmap_write(*(iVar5 + 8),uVar16);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_208) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar4 = auVar23._0_8_;
    *extraout_x18_05 = sym.pmgr_event_config;
    pcStack_248 = sym.pmgr_event_config;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    uStack_25c = 0;
    uVar11 = *(iVar4 + 0x920) & 0x80;
    uVar13 = 0x3f;
    if (uVar11 != 0) {
        uVar13 = 0x8001003f;
    }
    uVar11 = auVar23._8_4_ & 0x3f | uVar11 << 0x18;
    if ((uVar12 & 1) == 0) {
        uVar11 = 0;
    }
    iVar1 = 0x4d000;
    if (*(iVar4 + 0x9b8) < 0x15) {
        iVar1 = 0x3f000;
    }
    iVar1 = iVar1 + *puVar8 * 4;
    ppppuStack_250 = &ppppuStack_200;
    uStack_240 = uVar14;
    uStack_238 = uVar10;
    uStack_230 = uVar20;
    uStack_228 = uVar15;
    uStack_220 = uVar16;
    iStack_218 = iVar5;
    regmap_read(*(iVar4 + 8),iVar1,&uStack_25c);
    uStack_25c = uStack_25c & (uVar13 ^ 0xffffffff) | uVar11 & uVar13;
    regmap_write(*(iVar4 + 8),iVar1);
    uVar14 = *puVar8;
    if (uVar14 < 0x10) {
        uVar15 = (uVar14 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar12 & 1) == 0) {
            uVar15 = 0;
        }
        iVar1 = 0x36020;
        if (*(iVar4 + 0x9b8) < 0x15) {
            iVar1 = 0x31020;
        }
        regmap_write(*(iVar4 + 8),iVar1 + uVar14 * 4,uVar15);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return;
    }
    auVar22 = __stack_chk_fail();
    puVar7 = auVar22._0_8_;
    *extraout_x18_06 = sym.__cfi_check_fail;
    if (puVar7 != NULL) {
        switch(*puVar7) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar7,auVar22._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar3)();
}


// ===== sym.berc_event_enable @ 0x080044bc (size 188) =====

void sym.berc_event_enable(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uchar *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint32_t in_w3;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t in_w4;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    uchar auVar21 [16];
    uint32_t uStack_1fc;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    uint32_t uStack_1ac;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    uint32_t *puStack_190;
    uint64_t uStack_180;
    int64_t iStack_178;
    uint32_t uStack_16c;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    uint64_t uStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar15 = 0x4002001;
    if ((arg2 & 1) == 0) {
        uVar15 = 0;
    }
    uStack_3c = 0;
    uVar2 = 0x3d060;
    if (*(arg1 + 0x9b8) < 0x15) {
        uVar2 = 0x39060;
    }
    regmap_read(*(arg1 + 8),uVar2,&uStack_3c);
    uStack_3c = uStack_3c & 0xf00000fe | uVar15;
    puVar11 = uStack_3c;
    regmap_write(*(arg1 + 8),uVar2);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18 = sym.berc_event_filter_config;
    pcStack_68 = sym.berc_event_filter_config;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    if (auVar20._8_4_ == 2) {
        uVar15 = in_w3 << 2;
        uVar2 = 0x3d000;
        if (*(iVar7 + 0x9b8) < 0x15) {
            uVar2 = 0x39000;
        }
        uStack_7c = 0;
        uVar13 = in_w4;
        regmap_read(*(iVar7 + 8),uVar2,&uStack_7c);
        uVar15 = (puVar11 | uVar15) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar15 = 0;
        }
        uStack_7c = uStack_7c & 0xfffffff0 | uVar15;
        puVar11 = uStack_7c;
        regmap_write(*(iVar7 + 8),uVar2);
        in_w4 = uVar13;
    }
    else {
        _printk(0x800090a);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_00 = sym.trp_event_config;
    pcStack_c8 = sym.trp_event_config;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar17 = in_w3;
    uStack_dc = 0;
    uVar15 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar13 = *(iVar7 + 0x920) & 0x20;
    uVar18 = *puVar11 * 4 + 0x24020;
    uVar16 = uVar15;
    if (uVar13 != 0) {
        uVar16 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar20._8_4_ | uVar13 << 0x1a;
    if ((in_w3 & 1) == 0) {
        uVar15 = 0;
    }
    uVar13 = in_w3;
    ppuStack_d0 = &puStack_70;
    regmap_read(*(iVar7 + 8),uVar18,&uStack_dc);
    uStack_dc = uStack_dc & (uVar16 ^ 0xffffffff) | uVar15 & uVar16;
    puVar12 = uStack_dc;
    regmap_write(*(iVar7 + 8),uVar18);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar14 = (uVar15 & 0x1f) << 0x10 | 0xc0000005;
        if ((in_w3 & 1) == 0) {
            uVar14 = 0;
        }
        puVar12 = uVar14;
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_01 = sym.trp_event_filter_config;
    pcStack_108 = sym.trp_event_filter_config;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uVar15 = puVar12;
    pppuStack_110 = &ppuStack_d0;
    uStack_100 = uVar18;
    puStack_f8 = puVar11;
    uStack_f0 = uVar17;
    iStack_e8 = iVar7;
    switch(auVar21._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar8 + 0x9ac) == 2) {
            uVar15 = 1 << (uVar15 & 0x1f);
            uVar18 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar15 = 0xffffffff;
            }
            puVar11 = uVar15;
        }
        else {
            uVar15 = uVar15 | uVar13 << 8;
            if ((in_w4 & 1) == 0) {
                uVar15 = 0;
            }
            puVar11 = uVar15;
            uVar18 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        goto code_r0x080048e8;
    case 2:
        uVar15 = uVar13 << 0x1c | uVar15 << 0x18;
        uVar18 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar15 = 0;
        }
        puVar11 = uVar15;
        break;
    case 3:
        uVar15 = uVar13 << 0x14 | uVar15 << 0x10;
        uVar18 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar15 = 0;
        }
        puVar11 = uVar15;
        break;
    case 7:
        if (*(iVar8 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar18 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar15 = 0xffffffff;
        }
        puVar11 = uVar15;
    }
    if ((*(iVar8 + 0x9ac) == 2) && ((auVar21._8_4_ == 7 || (auVar21._8_4_ == 0)))) {
        uVar19 = 0x24008;
        uStack_11c = 0;
        regmap_read(*(iVar8 + 8),0x24008,&uStack_11c);
        uVar9 = *(iVar8 + 8);
        uVar17 = uVar19;
    }
    else {
        uStack_11c = 0;
        regmap_read(*(iVar8 + 8),0x24004,&uStack_11c);
        uVar9 = *(iVar8 + 8);
        uVar19 = 0x24004;
    }
    uStack_11c = uStack_11c & (uVar18 ^ 0xffffffff) | puVar11 & uVar18;
    puVar12 = uStack_11c;
    regmap_write(uVar9,uVar19);
code_r0x080048e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_02 = sym.drp_event_config;
    pcStack_158 = sym.drp_event_config;
    uStack_148 = 0x24020;
    iVar5 = sp_el0;
    iStack_168 = *(iVar5 + 0x5e0);
    uStack_16c = 0;
    uVar15 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar14 = *(iVar7 + 0x920) & 0x40;
    uVar3 = uVar15;
    if (uVar14 != 0) {
        uVar3 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar20._8_4_ | uVar14 << 0x19;
    if ((uVar13 & 1) == 0) {
        uVar15 = 0;
    }
    iVar4 = 0x51010;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar19 = iVar4 + *puVar12 * 4;
    uVar14 = uVar13;
    ppppuStack_160 = &pppuStack_110;
    uStack_150 = uVar16;
    uStack_140 = uVar18;
    puStack_138 = puVar11;
    uStack_130 = uVar17;
    iStack_128 = iVar8;
    regmap_read(*(iVar7 + 8),uVar19,&uStack_16c);
    uStack_16c = uStack_16c & (uVar3 ^ 0xffffffff) | uVar15 & uVar3;
    regmap_write(*(iVar7 + 8),uVar19);
    uVar16 = *puVar12;
    if (uVar16 < 0x10) {
        uVar1 = (uVar16 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar13 & 1) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar16 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_168) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_03 = sym.drp_event_enable;
    pcStack_198 = sym.drp_event_enable;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uVar16 = 0x2001;
    if ((auVar21._8_8_ & 1) == 0) {
        uVar16 = 0;
    }
    uStack_1ac = 0;
    uVar1 = 0x51050;
    if (*(iVar8 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar17 = uVar1;
    ppppuStack_1a0 = &ppppuStack_160;
    puStack_190 = puVar12;
    uStack_180 = uVar13;
    iStack_178 = iVar7;
    regmap_read(*(iVar8 + 8),uVar17,&uStack_1ac);
    uStack_1ac = uStack_1ac & 0xffff00fe | uVar16;
    puVar11 = uStack_1ac;
    regmap_write(*(iVar8 + 8),uVar17);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_04 = sym.pmgr_event_config;
    pcStack_1e8 = sym.pmgr_event_config;
    iVar5 = sp_el0;
    iStack_1f8 = *(iVar5 + 0x5e0);
    uStack_1fc = 0;
    uVar13 = *(iVar7 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar13 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar13 = auVar20._8_4_ & 0x3f | uVar13 << 0x18;
    if ((uVar14 & 1) == 0) {
        uVar13 = 0;
    }
    iVar4 = 0x4d000;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x3f000;
    }
    iVar4 = iVar4 + *puVar11 * 4;
    ppppuStack_1f0 = &ppppuStack_1a0;
    uStack_1e0 = uVar15;
    uStack_1d8 = uVar3;
    uStack_1d0 = uVar19;
    uStack_1c8 = uVar16;
    uStack_1c0 = uVar17;
    iStack_1b8 = iVar8;
    regmap_read(*(iVar7 + 8),iVar4,&uStack_1fc);
    uStack_1fc = uStack_1fc & (uVar1 ^ 0xffffffff) | uVar13 & uVar1;
    regmap_write(*(iVar7 + 8),iVar4);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar13 = (uVar15 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar14 & 1) == 0) {
            uVar13 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4,uVar13);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar10 = auVar21._0_8_;
    *extraout_x18_05 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar21._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar6)();
}


// ===== sym.berc_event_filter_config @ 0x08004578 (size 212) =====

void sym.berc_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uchar *puVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t in_w4;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    uchar auVar21 [16];
    uint32_t uStack_1bc;
    int64_t iStack_1b8;
    ulong ****ppppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    uint32_t uStack_16c;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    uint32_t *puStack_150;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint32_t uStack_12c;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint32_t *puStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint32_t *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    uVar12 = arg4;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (arg2 == 2) {
        uVar15 = uVar12 << 2;
        uVar3 = 0x3d000;
        if (*(arg1 + 0x9b8) < 0x15) {
            uVar3 = 0x39000;
        }
        uStack_3c = 0;
        uVar13 = in_w4;
        regmap_read(*(arg1 + 8),uVar3,&uStack_3c);
        uVar15 = (arg3 | uVar15) & 0xf;
        if ((in_w4 & 1) == 0) {
            uVar15 = 0;
        }
        uStack_3c = uStack_3c & 0xfffffff0 | uVar15;
        arg3 = uStack_3c;
        regmap_write(*(arg1 + 8),uVar3);
        in_w4 = uVar13;
    }
    else {
        _printk(0x800090a);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18 = sym.trp_event_config;
    pcStack_88 = sym.trp_event_config;
    iVar5 = sp_el0;
    iStack_98 = *(iVar5 + 0x5e0);
    uVar16 = uVar12;
    uStack_9c = 0;
    uVar15 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar15 = 0x3f;
    }
    uVar13 = *(iVar7 + 0x920) & 0x20;
    uVar18 = *arg3 * 4 + 0x24020;
    uVar2 = uVar15;
    if (uVar13 != 0) {
        uVar2 = uVar15 | 0x80010000;
    }
    uVar15 = uVar15 & auVar20._8_4_ | uVar13 << 0x1a;
    if ((uVar12 & 1) == 0) {
        uVar15 = 0;
    }
    uVar13 = uVar12;
    puStack_90 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar7 + 8),uVar18,&uStack_9c);
    uStack_9c = uStack_9c & (uVar2 ^ 0xffffffff) | uVar15 & uVar2;
    puVar11 = uStack_9c;
    regmap_write(*(iVar7 + 8),uVar18);
    uVar15 = *arg3;
    if (uVar15 < 0x10) {
        uVar1 = (uVar15 & 0x1f) << 0x10 | 0xc0000005;
        if ((uVar12 & 1) == 0) {
            uVar1 = 0;
        }
        puVar11 = uVar1;
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_00 = sym.trp_event_filter_config;
    pcStack_c8 = sym.trp_event_filter_config;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar12 = puVar11;
    ppuStack_d0 = &puStack_90;
    uStack_c0 = uVar18;
    puStack_b8 = arg3;
    uStack_b0 = uVar16;
    iStack_a8 = iVar7;
    switch(auVar21._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar8 + 0x9ac) == 2) {
            uVar12 = 1 << (uVar12 & 0x1f);
            uVar18 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar12 = 0xffffffff;
            }
            puVar17 = uVar12;
        }
        else {
            uVar12 = uVar12 | uVar13 << 8;
            if ((in_w4 & 1) == 0) {
                uVar12 = 0;
            }
            puVar17 = uVar12;
            uVar18 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        puVar17 = arg3;
        goto code_r0x080048e8;
    case 2:
        uVar12 = uVar13 << 0x1c | uVar12 << 0x18;
        uVar18 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        puVar17 = uVar12;
        break;
    case 3:
        uVar12 = uVar13 << 0x14 | uVar12 << 0x10;
        uVar18 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0;
        }
        puVar17 = uVar12;
        break;
    case 7:
        if (*(iVar8 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar18 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar12 = 0xffffffff;
        }
        puVar17 = uVar12;
    }
    if ((*(iVar8 + 0x9ac) == 2) && ((auVar21._8_4_ == 7 || (auVar21._8_4_ == 0)))) {
        uVar19 = 0x24008;
        uStack_dc = 0;
        regmap_read(*(iVar8 + 8),0x24008,&uStack_dc);
        uVar9 = *(iVar8 + 8);
        uVar16 = uVar19;
    }
    else {
        uStack_dc = 0;
        regmap_read(*(iVar8 + 8),0x24004,&uStack_dc);
        uVar9 = *(iVar8 + 8);
        uVar19 = 0x24004;
    }
    uStack_dc = uStack_dc & (uVar18 ^ 0xffffffff) | puVar17 & uVar18;
    puVar11 = uStack_dc;
    regmap_write(uVar9,uVar19);
code_r0x080048e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_01 = sym.drp_event_config;
    pcStack_118 = sym.drp_event_config;
    uStack_108 = 0x24020;
    iVar5 = sp_el0;
    iStack_128 = *(iVar5 + 0x5e0);
    uStack_12c = 0;
    uVar12 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar12 = 0x3f;
    }
    uVar15 = *(iVar7 + 0x920) & 0x40;
    uVar1 = uVar12;
    if (uVar15 != 0) {
        uVar1 = uVar12 | 0x80010000;
    }
    uVar12 = uVar12 & auVar20._8_4_ | uVar15 << 0x19;
    if ((uVar13 & 1) == 0) {
        uVar12 = 0;
    }
    iVar4 = 0x51010;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar19 = iVar4 + *puVar11 * 4;
    uVar14 = uVar13;
    pppuStack_120 = &ppuStack_d0;
    uStack_110 = uVar2;
    uStack_100 = uVar18;
    puStack_f8 = puVar17;
    uStack_f0 = uVar16;
    iStack_e8 = iVar8;
    regmap_read(*(iVar7 + 8),uVar19,&uStack_12c);
    uStack_12c = uStack_12c & (uVar1 ^ 0xffffffff) | uVar12 & uVar1;
    regmap_write(*(iVar7 + 8),uVar19);
    uVar15 = *puVar11;
    if (uVar15 < 0x10) {
        uVar2 = (uVar15 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar13 & 1) == 0) {
            uVar2 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar15 * 4,uVar2);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_128) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar8 = auVar21._0_8_;
    *extraout_x18_02 = sym.drp_event_enable;
    pcStack_158 = sym.drp_event_enable;
    iVar5 = sp_el0;
    iStack_168 = *(iVar5 + 0x5e0);
    uVar15 = 0x2001;
    if ((auVar21._8_8_ & 1) == 0) {
        uVar15 = 0;
    }
    uStack_16c = 0;
    uVar2 = 0x51050;
    if (*(iVar8 + 0x9b8) < 0x15) {
        uVar2 = 0x44050;
    }
    uVar16 = uVar2;
    ppppuStack_160 = &pppuStack_120;
    puStack_150 = puVar11;
    uStack_140 = uVar13;
    iStack_138 = iVar7;
    regmap_read(*(iVar8 + 8),uVar16,&uStack_16c);
    uStack_16c = uStack_16c & 0xffff00fe | uVar15;
    puVar11 = uStack_16c;
    regmap_write(*(iVar8 + 8),uVar16);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_168) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18_03 = sym.pmgr_event_config;
    pcStack_1a8 = sym.pmgr_event_config;
    iVar5 = sp_el0;
    iStack_1b8 = *(iVar5 + 0x5e0);
    uStack_1bc = 0;
    uVar13 = *(iVar7 + 0x920) & 0x80;
    uVar2 = 0x3f;
    if (uVar13 != 0) {
        uVar2 = 0x8001003f;
    }
    uVar13 = auVar20._8_4_ & 0x3f | uVar13 << 0x18;
    if ((uVar14 & 1) == 0) {
        uVar13 = 0;
    }
    iVar4 = 0x4d000;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar4 = 0x3f000;
    }
    iVar4 = iVar4 + *puVar11 * 4;
    ppppuStack_1b0 = &ppppuStack_160;
    uStack_1a0 = uVar12;
    uStack_198 = uVar1;
    uStack_190 = uVar19;
    uStack_188 = uVar15;
    uStack_180 = uVar16;
    iStack_178 = iVar8;
    regmap_read(*(iVar7 + 8),iVar4,&uStack_1bc);
    uStack_1bc = uStack_1bc & (uVar2 ^ 0xffffffff) | uVar13 & uVar2;
    regmap_write(*(iVar7 + 8),iVar4);
    uVar12 = *puVar11;
    if (uVar12 < 0x10) {
        uVar15 = (uVar12 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar14 & 1) == 0) {
            uVar15 = 0;
        }
        iVar4 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar4 + uVar12 * 4,uVar15);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar10 = auVar21._0_8_;
    *extraout_x18_04 = sym.__cfi_check_fail;
    if (puVar10 != NULL) {
        switch(*puVar10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar10,auVar21._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar6)();
}


// ===== sym.trp_event_config @ 0x0800464c (size 308) =====

void sym.trp_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t in_w4;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar auVar20 [12];
    uint32_t uStack_17c;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    int64_t iStack_138;
    uint32_t uStack_12c;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    uVar11 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar15 = arg4 & 0xffffffff;
    uStack_5c = 0;
    uVar13 = 0x7f;
    if (*(arg1 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar14 = *(arg1 + 0x920) & 0x20;
    uVar17 = *arg3 * 4 + 0x24020;
    uVar1 = uVar13;
    if (uVar14 != 0) {
        uVar1 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & arg2 | uVar14 << 0x1a;
    if ((arg4 & 1U) == 0) {
        uVar13 = 0;
    }
    regmap_read(*(arg1 + 8),uVar17,&uStack_5c);
    uStack_5c = uStack_5c & (uVar1 ^ 0xffffffff) | uVar13 & uVar1;
    puVar10 = uStack_5c;
    regmap_write(*(arg1 + 8),uVar17);
    uVar13 = *arg3;
    if (uVar13 < 0x10) {
        uVar14 = (uVar13 & 0x1f) << 0x10 | 0xc0000005;
        if ((arg4 & 1U) == 0) {
            uVar14 = 0;
        }
        puVar10 = uVar14;
        iVar3 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar3 + uVar13 * 4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar6 = auVar19._0_8_;
    *extraout_x18 = sym.trp_event_filter_config;
    pcStack_88 = sym.trp_event_filter_config;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    uVar13 = puVar10;
    puStack_90 = &stack0xffffffffffffffb0;
    uStack_80 = uVar17;
    iStack_78 = arg3;
    uStack_70 = uVar15;
    iStack_68 = arg1;
    switch(auVar19._8_8_ & 0xffffffff) {
    case 0:
        if (*(iVar6 + 0x9ac) == 2) {
            uVar13 = 1 << (uVar13 & 0x1f);
            uVar17 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar13 = 0xffffffff;
            }
            uVar16 = uVar13;
        }
        else {
            uVar13 = uVar13 | uVar11 << 8;
            if ((in_w4 & 1) == 0) {
                uVar13 = 0;
            }
            uVar16 = uVar13;
            uVar17 = 0x1f1f;
        }
        break;
    default:
code_r0x0800491c:
        _printk(0x800090a);
        uVar16 = arg3;
        goto code_r0x080048e8;
    case 2:
        uVar13 = uVar11 << 0x1c | uVar13 << 0x18;
        uVar17 = 0x33000000;
        if ((in_w4 & 1) == 0) {
            uVar13 = 0;
        }
        uVar16 = uVar13;
        break;
    case 3:
        uVar13 = uVar11 << 0x14 | uVar13 << 0x10;
        uVar17 = 0xff0000;
        if ((in_w4 & 1) == 0) {
            uVar13 = 0;
        }
        uVar16 = uVar13;
        break;
    case 7:
        if (*(iVar6 + 0x9ac) != 2) goto code_r0x0800491c;
        uVar17 = 0xffffffff;
        if ((in_w4 & 1) == 0) {
            uVar13 = 0xffffffff;
        }
        uVar16 = uVar13;
    }
    if ((*(iVar6 + 0x9ac) == 2) && ((auVar19._8_4_ == 7 || (auVar19._8_4_ == 0)))) {
        uVar18 = 0x24008;
        uStack_9c = 0;
        regmap_read(*(iVar6 + 8),0x24008,&uStack_9c);
        uVar7 = *(iVar6 + 8);
        uVar15 = uVar18;
    }
    else {
        uStack_9c = 0;
        regmap_read(*(iVar6 + 8),0x24004,&uStack_9c);
        uVar7 = *(iVar6 + 8);
        uVar18 = 0x24004;
    }
    uStack_9c = uStack_9c & (uVar17 ^ 0xffffffff) | uVar16 & uVar17;
    puVar10 = uStack_9c;
    regmap_write(uVar7,uVar18);
code_r0x080048e8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar8 = auVar20._0_8_;
    *extraout_x18_00 = sym.drp_event_config;
    pcStack_d8 = sym.drp_event_config;
    uStack_c8 = 0x24020;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uStack_ec = 0;
    uVar13 = 0x7f;
    if (*(iVar8 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar14 = *(iVar8 + 0x920) & 0x40;
    uVar2 = uVar13;
    if (uVar14 != 0) {
        uVar2 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & auVar20._8_4_ | uVar14 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar13 = 0;
    }
    iVar3 = 0x51010;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar3 = 0x44010;
    }
    uVar18 = iVar3 + *puVar10 * 4;
    uVar12 = uVar11;
    ppuStack_e0 = &puStack_90;
    uStack_d0 = uVar1;
    uStack_c0 = uVar17;
    uStack_b8 = uVar16;
    uStack_b0 = uVar15;
    iStack_a8 = iVar6;
    regmap_read(*(iVar8 + 8),uVar18,&uStack_ec);
    uStack_ec = uStack_ec & (uVar2 ^ 0xffffffff) | uVar13 & uVar2;
    regmap_write(*(iVar8 + 8),uVar18);
    uVar14 = *puVar10;
    if (uVar14 < 0x10) {
        uVar1 = (uVar14 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar1 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar3 + uVar14 * 4,uVar1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar19 = __stack_chk_fail();
    iVar6 = auVar19._0_8_;
    *extraout_x18_01 = sym.drp_event_enable;
    pcStack_118 = sym.drp_event_enable;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uVar14 = 0x2001;
    if ((auVar19._8_8_ & 1) == 0) {
        uVar14 = 0;
    }
    uStack_12c = 0;
    uVar1 = 0x51050;
    if (*(iVar6 + 0x9b8) < 0x15) {
        uVar1 = 0x44050;
    }
    uVar15 = uVar1;
    pppuStack_120 = &ppuStack_e0;
    puStack_110 = puVar10;
    uStack_100 = uVar11;
    iStack_f8 = iVar8;
    regmap_read(*(iVar6 + 8),uVar15,&uStack_12c);
    uStack_12c = uStack_12c & 0xffff00fe | uVar14;
    puVar10 = uStack_12c;
    regmap_write(*(iVar6 + 8),uVar15);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar8 = auVar20._0_8_;
    *extraout_x18_02 = sym.pmgr_event_config;
    pcStack_168 = sym.pmgr_event_config;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uStack_17c = 0;
    uVar11 = *(iVar8 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar11 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar11 = auVar20._8_4_ & 0x3f | uVar11 << 0x18;
    if ((uVar12 & 1) == 0) {
        uVar11 = 0;
    }
    iVar3 = 0x4d000;
    if (*(iVar8 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *puVar10 * 4;
    ppppuStack_170 = &pppuStack_120;
    uStack_160 = uVar13;
    uStack_158 = uVar2;
    uStack_150 = uVar18;
    uStack_148 = uVar14;
    uStack_140 = uVar15;
    iStack_138 = iVar6;
    regmap_read(*(iVar8 + 8),iVar3,&uStack_17c);
    uStack_17c = uStack_17c & (uVar1 ^ 0xffffffff) | uVar11 & uVar1;
    regmap_write(*(iVar8 + 8),iVar3);
    uVar13 = *puVar10;
    if (uVar13 < 0x10) {
        uVar11 = (uVar13 & 0x1f) << 0x10 | 0xc0000007;
        if ((uVar12 & 1) == 0) {
            uVar11 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar8 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar8 + 8),iVar3 + uVar13 * 4,uVar11);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    auVar19 = __stack_chk_fail();
    puVar9 = auVar19._0_8_;
    *extraout_x18_03 = sym.__cfi_check_fail;
    if (puVar9 != NULL) {
        switch(*puVar9) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar9,auVar19._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar5)();
}


// ===== sym.trp_event_filter_config @ 0x08004780 (size 432) =====

void sym.trp_event_filter_config(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t in_w4;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uchar auVar19 [16];
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint32_t *puStack_b0;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    uVar11 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (arg2 < 8) {
    //switch table (8 cases) at 0x800046a
        uVar13 = arg3;
        switch(*(arg2 + 0x800046a) * 4 + 0x80047d0) {
        case 0x80047d4:
            if (*(arg1 + 0x9ac) == 2) {
                uVar13 = 1 << (uVar13 & 0x1f);
                uVar14 = 0xffffffff;
                if ((in_w4 & 1) == 0) {
                    uVar13 = 0xffffffff;
                }
            }
            else {
                uVar13 = uVar13 | uVar11 << 8;
                if ((in_w4 & 1) == 0) {
                    uVar13 = 0;
                }
                uVar14 = 0x1f1f;
            }
            break;
        case 0x80047fc:
            uVar13 = uVar11 << 0x1c | uVar13 << 0x18;
            uVar14 = 0x33000000;
            if ((in_w4 & 1) == 0) {
                uVar13 = 0;
            }
            break;
        case 0x8004818:
            uVar13 = uVar11 << 0x14 | uVar13 << 0x10;
            uVar14 = 0xff0000;
            if ((in_w4 & 1) == 0) {
                uVar13 = 0;
            }
            break;
        case 0x8004834:
            if (*(arg1 + 0x9ac) != 2) goto code_r0x0800491c;
            uVar14 = 0xffffffff;
            if ((in_w4 & 1) == 0) {
                uVar13 = 0xffffffff;
            }
            break;
        case 0x800491c:
            goto code_r0x0800491c;
        }
        if ((*(arg1 + 0x9ac) == 2) && ((arg2 == 7 || (arg2 == 0)))) {
            uVar15 = 0x24008;
            uStack_3c = 0;
            regmap_read(*(arg1 + 8),0x24008,&stack0xffffffffffffffc4);
            uVar6 = *(arg1 + 8);
        }
        else {
            uStack_3c = 0;
            regmap_read(*(arg1 + 8),0x24004,&stack0xffffffffffffffc4);
            uVar6 = *(arg1 + 8);
            uVar15 = 0x24004;
        }
        uStack_3c = uStack_3c & (uVar14 ^ 0xffffffff) | uVar13 & uVar14;
        arg3 = uStack_3c;
        regmap_write(uVar6,uVar15);
    }
    else {
code_r0x0800491c:
        _printk(0x800090a);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar7 = auVar18._0_8_;
    *extraout_x18 = sym.drp_event_config;
    pcStack_78 = sym.drp_event_config;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_8c = 0;
    uVar13 = 0x7f;
    if (*(iVar7 + 0x9ac) != 2) {
        uVar13 = 0x3f;
    }
    uVar14 = *(iVar7 + 0x920) & 0x40;
    uVar2 = uVar13;
    if (uVar14 != 0) {
        uVar2 = uVar13 | 0x80010000;
    }
    uVar13 = uVar13 & auVar18._8_4_ | uVar14 << 0x19;
    if ((uVar11 & 1) == 0) {
        uVar13 = 0;
    }
    iVar3 = 0x51010;
    if (*(iVar7 + 0x9b8) < 0x15) {
        iVar3 = 0x44010;
    }
    uVar17 = iVar3 + *arg3 * 4;
    uVar12 = uVar11;
    puStack_80 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar7 + 8),uVar17,&stack0xffffffffffffff74);
    uStack_8c = uStack_8c & (uVar2 ^ 0xffffffff) | uVar13 & uVar2;
    regmap_write(*(iVar7 + 8),uVar17);
    uVar14 = *arg3;
    if (uVar14 < 0x10) {
        uVar1 = (uVar14 & 0x1f) << 0x10 | 0xc0000006;
        if ((uVar11 & 1) == 0) {
            uVar1 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar7 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar7 + 8),iVar3 + uVar14 * 4,uVar1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_88) {
        auVar19 = __stack_chk_fail();
        iVar8 = auVar19._0_8_;
        *extraout_x18_00 = sym.drp_event_enable;
        pcStack_b8 = sym.drp_event_enable;
        iVar4 = sp_el0;
        iStack_c8 = *(iVar4 + 0x5e0);
        uVar14 = 0x2001;
        if ((auVar19._8_8_ & 1) == 0) {
            uVar14 = 0;
        }
        uStack_cc = 0;
        uVar1 = 0x51050;
        if (*(iVar8 + 0x9b8) < 0x15) {
            uVar1 = 0x44050;
        }
        uVar16 = uVar1;
        puStack_c0 = &stack0xffffffffffffff80;
        puStack_b0 = arg3;
        uStack_a0 = uVar11;
        iStack_98 = iVar7;
        regmap_read(*(iVar8 + 8),uVar16,&stack0xffffffffffffff34);
        uStack_cc = uStack_cc & 0xffff00fe | uVar14;
        puVar10 = uStack_cc;
        regmap_write(*(iVar8 + 8),uVar16);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) != iStack_c8) {
            auVar18 = __stack_chk_fail();
            iVar7 = auVar18._0_8_;
            *extraout_x18_01 = sym.pmgr_event_config;
            pcStack_108 = sym.pmgr_event_config;
            iVar4 = sp_el0;
            iStack_118 = *(iVar4 + 0x5e0);
            uStack_11c = 0;
            uVar11 = *(iVar7 + 0x920) & 0x80;
            uVar1 = 0x3f;
            if (uVar11 != 0) {
                uVar1 = 0x8001003f;
            }
            uVar11 = auVar18._8_4_ & 0x3f | uVar11 << 0x18;
            if ((uVar12 & 1) == 0) {
                uVar11 = 0;
            }
            iVar3 = 0x4d000;
            if (*(iVar7 + 0x9b8) < 0x15) {
                iVar3 = 0x3f000;
            }
            iVar3 = iVar3 + *puVar10 * 4;
            puStack_110 = &stack0xffffffffffffff40;
            uStack_100 = uVar13;
            uStack_f8 = uVar2;
            uStack_f0 = uVar17;
            uStack_e8 = uVar14;
            uStack_e0 = uVar16;
            iStack_d8 = iVar8;
            regmap_read(*(iVar7 + 8),iVar3,&stack0xfffffffffffffee4);
            uStack_11c = uStack_11c & (uVar1 ^ 0xffffffff) | uVar11 & uVar1;
            regmap_write(*(iVar7 + 8),iVar3);
            uVar11 = *puVar10;
            if (uVar11 < 0x10) {
                uVar13 = (uVar11 & 0x1f) << 0x10 | 0xc0000007;
                if ((uVar12 & 1) == 0) {
                    uVar13 = 0;
                }
                iVar3 = 0x36020;
                if (*(iVar7 + 0x9b8) < 0x15) {
                    iVar3 = 0x31020;
                }
                regmap_write(*(iVar7 + 8),iVar3 + uVar11 * 4,uVar13);
            }
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) != iStack_118) {
                auVar19 = __stack_chk_fail();
                puVar9 = auVar19._0_8_;
                *extraout_x18_02 = sym.__cfi_check_fail;
                if (puVar9 != NULL) {
                    switch(*puVar9) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        __ubsan_handle_cfi_check_fail_abort(puVar9,auVar19._8_8_,0);
                        break;
                    default:
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
                (*pcVar5)();
            }
            return;
        }
        return;
    }
    return;
}


// ===== sym.drp_event_config @ 0x08004930 (size 320) =====

void sym.drp_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auVar17 [12];
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    uVar11 = arg4;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    uVar12 = 0x7f;
    if (*(arg1 + 0x9ac) != 2) {
        uVar12 = 0x3f;
    }
    uVar13 = *(arg1 + 0x920) & 0x40;
    uVar2 = uVar12;
    if (uVar13 != 0) {
        uVar2 = uVar12 | 0x80010000;
    }
    uVar12 = uVar12 & arg2 | uVar13 << 0x19;
    if ((arg4 & 1U) == 0) {
        uVar12 = 0;
    }
    iVar4 = 0x51010;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar4 = 0x44010;
    }
    uVar15 = iVar4 + *arg3 * 4;
    regmap_read(*(arg1 + 8),uVar15,&uStack_4c);
    uStack_4c = uStack_4c & (uVar2 ^ 0xffffffff) | uVar12 & uVar2;
    regmap_write(*(arg1 + 8),uVar15);
    uVar13 = *arg3;
    if (uVar13 < 0x10) {
        uVar1 = (uVar13 & 0x1f) << 0x10 | 0xc0000006;
        if ((arg4 & 1U) == 0) {
            uVar1 = 0;
        }
        iVar4 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar4 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar4 + uVar13 * 4,uVar1);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        auVar16 = __stack_chk_fail();
        iVar7 = auVar16._0_8_;
        *extraout_x18 = sym.drp_event_enable;
        pcStack_78 = sym.drp_event_enable;
        iVar5 = sp_el0;
        iStack_88 = *(iVar5 + 0x5e0);
        uVar13 = 0x2001;
        if ((auVar16._8_8_ & 1) == 0) {
            uVar13 = 0;
        }
        uStack_8c = 0;
        uVar1 = 0x51050;
        if (*(iVar7 + 0x9b8) < 0x15) {
            uVar1 = 0x44050;
        }
        uVar14 = uVar1;
        puStack_80 = &stack0xffffffffffffffc0;
        iStack_70 = arg3;
        uStack_60 = arg4 & 0xffffffff;
        iStack_58 = arg1;
        regmap_read(*(iVar7 + 8),uVar14,&uStack_8c);
        uStack_8c = uStack_8c & 0xffff00fe | uVar13;
        puVar10 = uStack_8c;
        regmap_write(*(iVar7 + 8),uVar14);
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) != iStack_88) {
            auVar17 = __stack_chk_fail();
            iVar8 = auVar17._0_8_;
            *extraout_x18_00 = sym.pmgr_event_config;
            pcStack_c8 = sym.pmgr_event_config;
            iVar5 = sp_el0;
            iStack_d8 = *(iVar5 + 0x5e0);
            uStack_dc = 0;
            uVar1 = *(iVar8 + 0x920) & 0x80;
            uVar3 = 0x3f;
            if (uVar1 != 0) {
                uVar3 = 0x8001003f;
            }
            uVar1 = auVar17._8_4_ & 0x3f | uVar1 << 0x18;
            if ((uVar11 & 1) == 0) {
                uVar1 = 0;
            }
            iVar4 = 0x4d000;
            if (*(iVar8 + 0x9b8) < 0x15) {
                iVar4 = 0x3f000;
            }
            iVar4 = iVar4 + *puVar10 * 4;
            ppuStack_d0 = &puStack_80;
            uStack_c0 = uVar12;
            uStack_b8 = uVar2;
            uStack_b0 = uVar15;
            uStack_a8 = uVar13;
            uStack_a0 = uVar14;
            iStack_98 = iVar7;
            regmap_read(*(iVar8 + 8),iVar4,&uStack_dc);
            uStack_dc = uStack_dc & (uVar3 ^ 0xffffffff) | uVar1 & uVar3;
            regmap_write(*(iVar8 + 8),iVar4);
            uVar12 = *puVar10;
            if (uVar12 < 0x10) {
                uVar13 = (uVar12 & 0x1f) << 0x10 | 0xc0000007;
                if ((uVar11 & 1) == 0) {
                    uVar13 = 0;
                }
                iVar4 = 0x36020;
                if (*(iVar8 + 0x9b8) < 0x15) {
                    iVar4 = 0x31020;
                }
                regmap_write(*(iVar8 + 8),iVar4 + uVar12 * 4,uVar13);
            }
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) != iStack_d8) {
                auVar16 = __stack_chk_fail();
                puVar9 = auVar16._0_8_;
                *extraout_x18_01 = sym.__cfi_check_fail;
                if (puVar9 != NULL) {
                    switch(*puVar9) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        __ubsan_handle_cfi_check_fail_abort(puVar9,auVar16._8_8_,0);
                        break;
                    default:
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5502,0x8004cac);
                (*pcVar6)();
            }
            return;
        }
        return;
    }
    return;
}


// ===== sym.drp_event_enable @ 0x08004a70 (size 184) =====

void sym.drp_event_enable(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t in_w3;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar auVar11 [16];
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uVar9 = 0x2001;
    if ((arg2 & 1) == 0) {
        uVar9 = 0;
    }
    uStack_3c = 0;
    uVar2 = 0x51050;
    if (*(arg1 + 0x9b8) < 0x15) {
        uVar2 = 0x44050;
    }
    regmap_read(*(arg1 + 8),uVar2,&uStack_3c);
    uStack_3c = uStack_3c & 0xffff00fe | uVar9;
    puVar8 = uStack_3c;
    regmap_write(*(arg1 + 8),uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar6 = auVar10._0_8_;
    *extraout_x18 = sym.pmgr_event_config;
    pcStack_78 = sym.pmgr_event_config;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_8c = 0;
    uVar9 = *(iVar6 + 0x920) & 0x80;
    uVar1 = 0x3f;
    if (uVar9 != 0) {
        uVar1 = 0x8001003f;
    }
    uVar9 = auVar10._8_4_ & 0x3f | uVar9 << 0x18;
    if ((in_w3 & 1) == 0) {
        uVar9 = 0;
    }
    iVar3 = 0x4d000;
    if (*(iVar6 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *puVar8 * 4;
    puStack_80 = &stack0xffffffffffffffd0;
    regmap_read(*(iVar6 + 8),iVar3,&uStack_8c);
    uStack_8c = uStack_8c & (uVar1 ^ 0xffffffff) | uVar9 & uVar1;
    regmap_write(*(iVar6 + 8),iVar3);
    uVar9 = *puVar8;
    if (uVar9 < 0x10) {
        uVar1 = (uVar9 & 0x1f) << 0x10 | 0xc0000007;
        if ((in_w3 & 1) == 0) {
            uVar1 = 0;
        }
        iVar3 = 0x36020;
        if (*(iVar6 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(iVar6 + 8),iVar3 + uVar9 * 4,uVar1);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_88) {
        auVar11 = __stack_chk_fail();
        puVar7 = auVar11._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar11._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
        (*pcVar5)();
    }
    return;
}


// ===== sym.pmgr_event_config @ 0x08004b28 (size 300) =====

void sym.pmgr_event_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    uVar1 = *(arg1 + 0x920) & 0x80;
    uVar2 = 0x3f;
    if (uVar1 != 0) {
        uVar2 = 0x8001003f;
    }
    uVar1 = arg2 & 0x3f | uVar1 << 0x18;
    if ((arg4 & 1U) == 0) {
        uVar1 = 0;
    }
    iVar3 = 0x4d000;
    if (*(arg1 + 0x9b8) < 0x15) {
        iVar3 = 0x3f000;
    }
    iVar3 = iVar3 + *arg3 * 4;
    regmap_read(*(arg1 + 8),iVar3,&uStack_4c);
    uStack_4c = uStack_4c & (uVar2 ^ 0xffffffff) | uVar1 & uVar2;
    regmap_write(*(arg1 + 8),iVar3);
    uVar1 = *arg3;
    if (uVar1 < 0x10) {
        uVar2 = (uVar1 & 0x1f) << 0x10 | 0xc0000007;
        if ((arg4 & 1U) == 0) {
            uVar2 = 0;
        }
        iVar3 = 0x36020;
        if (*(arg1 + 0x9b8) < 0x15) {
            iVar3 = 0x31020;
        }
        regmap_write(*(arg1 + 8),iVar3 + uVar1 * 4,uVar2);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        puVar6 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar7._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8004cac);
        (*pcVar5)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004c54 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004c98

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
    //switch table (4 cases) at 0x8000472
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004cac);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004cb4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004ce8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.llcc_perfmon_probe.ea3c719e945a7dfcec47eb77c2060c9d.cfi_jt);
    return;
}

