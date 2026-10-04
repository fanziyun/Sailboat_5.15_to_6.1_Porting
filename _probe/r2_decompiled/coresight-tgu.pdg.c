// decompiled from coresight-tgu by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x08001d84

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0xccc1a070ef9892be) {
        pcVar3 = sym.tgu_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    }
    else {
        if (uVar2 != 0x2b3a43e29242445) {
            if ((uVar2 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x80010b0 >> 3 | pcVar1 << 0x3d) < 7)) {
                return;
            }
            goto code_r0x08001d44;
        }
        pcVar3 = sym.init_module.cfi_jt;
    }
    if (pcVar1 == pcVar3) {
        return;
    }
code_r0x08001d44:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x080010a0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tgu_driver);
    return;
}


// ===== sym.tgu_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010a8 (size 8) =====

int * sym.tgu_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                (int64_t param_1,ulong param_2,int64_t *param_3,int *param_4)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int *piVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int *piVar17;
    int *piVar18;
    int *piVar19;
    int64_t *unaff_x20;
    uint64_t unaff_x21;
    int64_t *piVar20;
    int64_t *piVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    int iStack_294;
    ulong uStack_290;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t *piStack_260;
    int *piStack_258;
    int iStack_244;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ****ppppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t *piStack_210;
    int *piStack_208;
    int aiStack_1f8 [2];
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong ****ppppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t *piStack_1c0;
    int *piStack_1b8;
    int aiStack_1a8 [2];
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ****ppppuStack_190;
    code *pcStack_188;
    int64_t iStack_180;
    int64_t *piStack_170;
    int *piStack_168;
    ulong uStack_160;
    int iStack_154;
    int iStack_150;
    int iStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    int64_t *piStack_130;
    int64_t *piStack_120;
    int *piStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t *piStack_f0;
    int64_t *piStack_e0;
    int *piStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uint64_t auStack_88 [5];
    code *pcStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    auStack_88[4] = 0;
    pcStack_60 = NULL;
    auStack_88[2] = 0;
    auStack_88[3] = 0;
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    iStack_58 = coresight_alloc_device_name(obj.tgu_devs,param_1);
    if (iStack_58 == 0) {
code_r0x080012cc:
        piVar5 = 0xfffffff4;
        piVar6 = unaff_x20;
    }
    else {
        piVar5 = coresight_get_platform_data(param_1);
        piVar6 = unaff_x20;
        if (piVar5 < 0xfffffffffffff001) {
            *(param_1 + 0x90) = piVar5;
            param_3 = 0xdc0;
            piVar6 = devm_kmalloc(param_1,0x78,0xdc0);
            if (piVar6 != NULL) {
                piVar6[1] = param_1;
                *(param_1 + 0x98) = piVar6;
                iVar7 = devm_ioremap_resource(param_1,param_1 + 0x390);
                *piVar6 = iVar7;
                unaff_x20 = piVar6;
                if (iVar7 != 0) {
                    uVar8 = *(param_1 + 0x2f0);
                    param_3 = piVar6 + 0x24;
                    param_4 = 0x1;
                    *(piVar6 + 4) = 0;
                    iVar3 = of_property_read_variable_u32_array(uVar8,"tgu-steps",param_3,1,0);
                    if (-1 < iVar3) {
                        param_3 = piVar6 + 5;
                        param_4 = 0x1;
                        iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x2f0),"tgu-conditions",param_3,1,0)
                        ;
                        if (-1 < iVar3) {
                            param_3 = piVar6 + 0x2c;
                            param_4 = 0x1;
                            iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x2f0),"tgu-regs",param_3,1,0);
                            if (-1 < iVar3) {
                                param_3 = piVar6 + 6;
                                param_4 = 0x1;
                                iVar3 = of_property_read_variable_u32_array
                                                  (*(param_1 + 0x2f0),"tgu-timer-counters",param_3,1,0);
                                if (-1 < iVar3) {
                                    param_3 = 0xdc0;
                                    iVar7 = devm_kmalloc(param_1,0x1000,0xdc0);
                                    piVar6[7] = iVar7;
                                    if (iVar7 != 0) {
                                        param_3 = 0xdc0;
                                        iVar7 = devm_kmalloc(param_1,0x400,0xdc0);
                                        piVar6[8] = iVar7;
                                        if (iVar7 != 0) {
                                            param_3 = 0xdc0;
                                            iVar7 = devm_kmalloc(param_1,0x400,0xdc0);
                                            piVar6[9] = iVar7;
                                            if (iVar7 != 0) {
                                                param_3 = 0xdc0;
                                                iVar7 = devm_kmalloc(param_1,0x80,0xdc0);
                                                piVar6[10] = iVar7;
                                                if (iVar7 != 0) {
                                                    param_3 = 0xdc0;
                                                    iVar7 = devm_kmalloc(param_1,0x80,0xdc0);
                                                    piVar6[0xb] = iVar7;
                                                    if (iVar7 != 0) {
                                                        auStack_88[3] = *(param_1 + 0x90);
                                                        *(piVar6 + 0x74) = 0;
                                                        auStack_88[0] = auStack_88[0] & 0xffffffff00000000;
                                                        pcStack_60 = obj.tgu_attr_grps;
                                                        auStack_88[4] = param_1;
                                                        uVar9 = coresight_register(auStack_88);
                                                        piVar6[2] = uVar9;
                                                        if (uVar9 < 0xfffffffffffff001) {
                                                            __pm_runtime_idle(param_1,5);
                                                            piVar5 = NULL;
                                                        }
                                                        else {
                                                            __pm_runtime_idle(param_1,5);
                                                            piVar5 = uVar9 & 0xffffffff;
                                                            unaff_x21 = uVar9;
                                                        }
                                                        goto code_r0x080012d0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    goto code_r0x080012cc;
                                }
                            }
                        }
                    }
                    piVar5 = 0xffffffea;
                    goto code_r0x080012d0;
                }
            }
            goto code_r0x080012cc;
        }
    }
code_r0x080012d0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar5;
    }
    iVar10 = __stack_chk_fail(piVar5);
    piVar12 = &iStack_d0;
    *extraout_x18 = sym.enable_tgu_store;
    pcStack_b8 = sym.enable_tgu_store;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    piVar20 = *(*(iVar10 + 0x60) + 0x98);
    piVar5 = param_4;
    puStack_c0 = &stack0xffffffffffffffd0;
    uStack_b0 = unaff_x21;
    piStack_a0 = piVar6;
    iStack_98 = param_1;
    iVar3 = kstrtoull(param_3,0x10,&iStack_d0);
    if (iVar3 == 0) {
        uVar4 = __pm_runtime_resume(piVar20[1],4);
        if (uVar4 < 0) {
            piVar6 = uVar4;
            __pm_runtime_idle(piVar20[1],5);
            param_4 = uVar4;
        }
        else {
            piVar6 = piVar20 + 4;
            _raw_spin_lock(piVar6);
            *(*piVar20 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            **piVar20 = 0;
            if (iStack_d0 == 0) {
                __pm_runtime_idle(piVar20[1],5);
            }
            else {
                if (-1 < piVar20[0xc]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[7] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xc]);
                }
                iVar3 = piVar20[5];
                if (-1 < iVar3) {
                    iVar14 = 0;
                    iVar16 = *(piVar20 + 0x24);
                    iVar15 = 0x50;
                    do {
                        if (-1 < iVar16) {
                            iVar3 = 0;
                            iVar1 = iVar15;
                            do {
                                iVar3 = iVar3 + 1;
                                *(*piVar20 + iVar1) = 0x1000000;
                                iVar16 = *(piVar20 + 0x24);
                                iVar1 = iVar1 + 0x1d8;
                            } while (iVar3 <= iVar16);
                            iVar3 = piVar20[5];
                        }
                        iVar14 = iVar14 + 1;
                        iVar15 = iVar15 + 4;
                    } while (iVar14 <= iVar3);
                }
                if (-1 < *(piVar20 + 100)) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[8] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= *(piVar20 + 100));
                }
                if (-1 < piVar20[0xd]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[9] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xd]);
                }
                if (-1 < *(piVar20 + 0x6c)) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[10] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= *(piVar20 + 0x6c));
                }
                if (-1 < piVar20[0xe]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[0xb] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xe]);
                }
                **piVar20 = 1;
                *(piVar20 + 0x74) = 1;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar20 + 0xfb0) = 0;
            _raw_spin_unlock(piVar6);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return param_4;
    }
    iVar10 = __stack_chk_fail();
    piVar13 = &iStack_110;
    *extraout_x18_00 = sym.reset_tgu_store;
    pcStack_f8 = sym.reset_tgu_store;
    iVar7 = sp_el0;
    iStack_108 = *(iVar7 + 0x5e0);
    iStack_110 = 0;
    piVar21 = *(*(iVar10 + 0x60) + 0x98);
    piVar17 = piVar5;
    ppuStack_100 = &puStack_c0;
    piStack_f0 = piVar20;
    piStack_e0 = piVar6;
    piStack_d8 = param_4;
    iVar3 = kstrtoull(piVar12,0x10,&iStack_110);
    if (iVar3 == 0) {
        if ((*(piVar21 + 0x74) == '\0') && (uVar4 = __pm_runtime_resume(piVar21[1],4), uVar4 < 0)) {
            piVar6 = uVar4;
            __pm_runtime_idle(piVar21[1],5);
            piVar5 = uVar4;
        }
        else {
            piVar6 = piVar21 + 4;
            _raw_spin_lock(piVar6);
            *(*piVar21 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_110 != 0) {
                **piVar21 = 0;
                *(piVar21 + 0xe) = 0;
                piVar21[0xc] = 0;
                piVar21[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar21 + 0xfb0) = 0;
            _raw_spin_unlock(piVar6);
            __pm_runtime_idle(piVar21[1],5);
        }
    }
    else {
        piVar5 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_108) {
        return piVar5;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_group_store;
    pcStack_138 = sym.set_group_store;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    iStack_14c = 0;
    iStack_154 = 0;
    iStack_150 = 0;
    uStack_160 = 0;
    iVar7 = *(*(iVar10 + 0x60) + 0x98);
    pppuStack_140 = &ppuStack_100;
    piStack_130 = piVar21;
    piStack_120 = piVar6;
    piStack_118 = piVar5;
    if (*(iVar7 + 0x60) < 0x100) {
        piVar18 = &iStack_14c;
        piVar5 = &iStack_150;
        iVar3 = sscanf(piVar13,"%d %d %d %lx",piVar18,piVar5,&iStack_154,&uStack_160);
        if (iVar3 != 4) goto code_r0x080017f8;
        piVar6 = iVar7 + 0x20;
        _raw_spin_lock(piVar6);
        if ((iStack_14c < 5) && (iStack_150 <= *(iVar7 + 0x2c))) {
            *(*(iVar7 + 0x38) + *(iVar7 + 0x60) * 0x10) = iStack_14c * 0x60 + iStack_150 * 4 + iStack_154 * 0x1d8 + 0x74
            ;
            *(*(iVar7 + 0x38) + *(iVar7 + 0x60) * 0x10 + 8) = uStack_160;
            *(iVar7 + 0x60) = *(iVar7 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar7 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
        piVar18 = piVar13;
        piVar5 = piVar17;
code_r0x080017f8:
        piVar17 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_148) {
        return piVar17;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_condition_store;
    pcStack_188 = sym.set_condition_store;
    iVar10 = sp_el0;
    iStack_198 = *(iVar10 + 0x5e0);
    aiStack_1a8[0] = 0;
    aiStack_1a8[1] = 0;
    uStack_1a0 = 0;
    iVar10 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_190 = &pppuStack_140;
    iStack_180 = iVar7;
    piStack_170 = piVar6;
    piStack_168 = piVar17;
    if (*(iVar10 + 100) < 0x40) {
        piVar17 = aiStack_1a8 + 1;
        piVar19 = aiStack_1a8;
        iVar3 = sscanf(piVar18,"%d %d %lx",piVar17,piVar19,&uStack_1a0);
        if (iVar3 != 3) goto code_r0x08001940;
        piVar6 = iVar10 + 0x20;
        _raw_spin_lock(piVar6);
        if ((*(iVar10 + 0x28) < aiStack_1a8[1]) || (*(iVar10 + 0x24) < aiStack_1a8[0])) {
            _dev_err(*(iVar10 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar10 + 0x40) + *(iVar10 + 100) * 0x10) = aiStack_1a8[0] * 0x1d8 + aiStack_1a8[1] * 4 + 0x50;
            *(*(iVar10 + 0x40) + *(iVar10 + 100) * 0x10 + 8) = uStack_1a0;
            *(iVar10 + 100) = *(iVar10 + 100) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar10 + 8)," Too many groups are being configured\n");
        piVar17 = piVar18;
        piVar19 = piVar5;
code_r0x08001940:
        piVar5 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_198) {
        return piVar5;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_select_store;
    pcStack_1d8 = sym.set_select_store;
    iVar7 = sp_el0;
    iStack_1e8 = *(iVar7 + 0x5e0);
    aiStack_1f8[0] = 0;
    aiStack_1f8[1] = 0;
    uStack_1f0 = 0;
    iVar7 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_1e0 = &ppppuStack_190;
    iStack_1d0 = iVar10;
    piStack_1c0 = piVar6;
    piStack_1b8 = piVar5;
    if (*(iVar7 + 0x68) < 0x40) {
        piVar5 = aiStack_1f8 + 1;
        piVar18 = aiStack_1f8;
        iVar3 = sscanf(piVar17,"%d %d %lx",piVar5,piVar18,&uStack_1f0);
        if (iVar3 != 3) goto code_r0x08001a88;
        piVar6 = iVar7 + 0x20;
        _raw_spin_lock(piVar6);
        if ((*(iVar7 + 0x28) < aiStack_1f8[1]) || (*(iVar7 + 0x24) < aiStack_1f8[0])) {
            _dev_err(*(iVar7 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar7 + 0x48) + *(iVar7 + 0x68) * 0x10) = aiStack_1f8[0] * 0x1d8 + aiStack_1f8[1] * 4 + 0x60;
            *(*(iVar7 + 0x48) + *(iVar7 + 0x68) * 0x10 + 8) = uStack_1f0;
            *(iVar7 + 0x68) = *(iVar7 + 0x68) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
        piVar5 = piVar17;
        piVar18 = piVar19;
code_r0x08001a88:
        piVar19 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return piVar19;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_04 = sym.set_timer_store;
    pcStack_228 = sym.set_timer_store;
    iVar10 = sp_el0;
    iStack_238 = *(iVar10 + 0x5e0);
    uStack_240 = 0;
    iStack_244 = 0;
    iVar10 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_230 = &ppppuStack_1e0;
    iStack_220 = iVar7;
    piStack_210 = piVar6;
    piStack_208 = piVar19;
    if (*(iVar10 + 0x6c) < 8) {
        piVar17 = &iStack_244;
        piVar19 = &uStack_240;
        iVar3 = sscanf(piVar5,"%d %lx",piVar17,piVar19);
        if (iVar3 != 2) goto code_r0x08001bbc;
        piVar6 = iVar10 + 0x20;
        _raw_spin_lock(piVar6);
        if (*(iVar10 + 0x30) < iStack_244) {
            _dev_err(*(iVar10 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar10 + 0x50) + *(iVar10 + 0x6c) * 0x10) = iStack_244 * 0x1d8 + 0x40;
            *(*(iVar10 + 0x50) + *(iVar10 + 0x6c) * 0x10 + 8) = uStack_240;
            *(iVar10 + 0x6c) = *(iVar10 + 0x6c) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar10 + 8)," Too many groups are being configured\n");
        piVar17 = piVar5;
        piVar19 = piVar18;
code_r0x08001bbc:
        piVar18 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return piVar18;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_05 = sym.set_counter_store;
    pcStack_278 = sym.set_counter_store;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uStack_290 = 0;
    iStack_294 = 0;
    iVar7 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_280 = &ppppuStack_230;
    iStack_270 = iVar10;
    piStack_260 = piVar6;
    piStack_258 = piVar18;
    if (*(iVar7 + 0x70) < 8) {
        iVar3 = sscanf(piVar17,"%d %lx",&iStack_294,&uStack_290);
        if (iVar3 == 2) {
            _raw_spin_lock(iVar7 + 0x20);
            if (*(iVar7 + 0x30) < iStack_294) {
                _dev_err(*(iVar7 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10) = iStack_294 * 0x1d8 + 0x48;
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10 + 8) = uStack_290;
                *(iVar7 + 0x70) = *(iVar7 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar7 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
    }
    piVar19 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_288) {
        auVar22 = __stack_chk_fail();
        piVar5 = auVar22._0_8_;
        *extraout_x18_06 = sym.__cfi_check_fail;
        if (piVar5 != NULL) {
            switch(*piVar5) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar5,auVar22._8_8_,0);
                break;
            default:
                return piVar5;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar2)();
    }
    return piVar19;
}


// ===== sym.reset_tgu_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010b0 (size 8) =====

int * sym.reset_tgu_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int *param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    int *piVar10;
    int64_t *unaff_x20;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_1c4;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ****ppppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t *piStack_190;
    int *piStack_188;
    int iStack_174;
    ulong uStack_170;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t *piStack_140;
    int *piStack_138;
    int aiStack_128 [2];
    ulong uStack_120;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    int64_t *piStack_f0;
    int *piStack_e8;
    int aiStack_d8 [2];
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t *piStack_a0;
    int *piStack_98;
    ulong uStack_90;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iStack_40 = 0;
    piVar11 = *(*(param_1 + 0x60) + 0x98);
    piVar7 = param_4;
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 == 0) {
        if ((*(piVar11 + 0x74) == '\0') && (uVar3 = __pm_runtime_resume(piVar11[1],4), uVar3 < 0)) {
            unaff_x20 = uVar3;
            __pm_runtime_idle(piVar11[1],5);
            param_4 = uVar3;
        }
        else {
            unaff_x20 = piVar11 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar11 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_40 != 0) {
                **piVar11 = 0;
                *(piVar11 + 0xe) = 0;
                piVar11[0xc] = 0;
                piVar11[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar11 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
            __pm_runtime_idle(piVar11[1],5);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.set_group_store;
    pcStack_68 = sym.set_group_store;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    iStack_7c = 0;
    iStack_84 = 0;
    iStack_80 = 0;
    uStack_90 = 0;
    iVar12 = *(*(iVar4 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar11;
    piStack_50 = unaff_x20;
    piStack_48 = param_4;
    if (*(iVar12 + 0x60) < 0x100) {
        piVar9 = &iStack_7c;
        piVar8 = &iStack_80;
        iVar2 = sscanf(piVar6,"%d %d %d %lx",piVar9,piVar8,&iStack_84,&uStack_90);
        if (iVar2 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar12 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_7c < 5) && (iStack_80 <= *(iVar12 + 0x2c))) {
            *(*(iVar12 + 0x38) + *(iVar12 + 0x60) * 0x10) = iStack_7c * 0x60 + iStack_80 * 4 + iStack_84 * 0x1d8 + 0x74;
            *(*(iVar12 + 0x38) + *(iVar12 + 0x60) * 0x10 + 8) = uStack_90;
            *(iVar12 + 0x60) = *(iVar12 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar12 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
        piVar9 = piVar6;
        piVar8 = piVar7;
code_r0x080017f8:
        piVar7 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return piVar7;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_condition_store;
    pcStack_b8 = sym.set_condition_store;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    aiStack_d8[0] = 0;
    aiStack_d8[1] = 0;
    uStack_d0 = 0;
    iVar4 = *(*(iVar5 + 0x60) + 0x98);
    ppuStack_c0 = &puStack_70;
    iStack_b0 = iVar12;
    piStack_a0 = unaff_x20;
    piStack_98 = piVar7;
    if (*(iVar4 + 100) < 0x40) {
        piVar7 = aiStack_d8 + 1;
        piVar10 = aiStack_d8;
        iVar2 = sscanf(piVar9,"%d %d %lx",piVar7,piVar10,&uStack_d0);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar4 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar4 + 0x28) < aiStack_d8[1]) || (*(iVar4 + 0x24) < aiStack_d8[0])) {
            _dev_err(*(iVar4 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar4 + 0x40) + *(iVar4 + 100) * 0x10) = aiStack_d8[0] * 0x1d8 + aiStack_d8[1] * 4 + 0x50;
            *(*(iVar4 + 0x40) + *(iVar4 + 100) * 0x10 + 8) = uStack_d0;
            *(iVar4 + 100) = *(iVar4 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
        piVar7 = piVar9;
        piVar10 = piVar8;
code_r0x08001940:
        piVar8 = 0xffffffffffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_c8) {
        return piVar8;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_select_store;
    pcStack_108 = sym.set_select_store;
    iVar12 = sp_el0;
    iStack_118 = *(iVar12 + 0x5e0);
    aiStack_128[0] = 0;
    aiStack_128[1] = 0;
    uStack_120 = 0;
    iVar12 = *(*(iVar5 + 0x60) + 0x98);
    pppuStack_110 = &ppuStack_c0;
    iStack_100 = iVar4;
    piStack_f0 = unaff_x20;
    piStack_e8 = piVar8;
    if (*(iVar12 + 0x68) < 0x40) {
        piVar8 = aiStack_128 + 1;
        piVar9 = aiStack_128;
        iVar2 = sscanf(piVar7,"%d %d %lx",piVar8,piVar9,&uStack_120);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar12 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar12 + 0x28) < aiStack_128[1]) || (*(iVar12 + 0x24) < aiStack_128[0])) {
            _dev_err(*(iVar12 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar12 + 0x48) + *(iVar12 + 0x68) * 0x10) = aiStack_128[0] * 0x1d8 + aiStack_128[1] * 4 + 0x60;
            *(*(iVar12 + 0x48) + *(iVar12 + 0x68) * 0x10 + 8) = uStack_120;
            *(iVar12 + 0x68) = *(iVar12 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
        piVar8 = piVar7;
        piVar9 = piVar10;
code_r0x08001a88:
        piVar10 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return piVar10;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_timer_store;
    pcStack_158 = sym.set_timer_store;
    iVar4 = sp_el0;
    iStack_168 = *(iVar4 + 0x5e0);
    uStack_170 = 0;
    iStack_174 = 0;
    iVar4 = *(*(iVar5 + 0x60) + 0x98);
    ppppuStack_160 = &pppuStack_110;
    iStack_150 = iVar12;
    piStack_140 = unaff_x20;
    piStack_138 = piVar10;
    if (*(iVar4 + 0x6c) < 8) {
        piVar7 = &iStack_174;
        piVar10 = &uStack_170;
        iVar2 = sscanf(piVar8,"%d %lx",piVar7,piVar10);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar4 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar4 + 0x30) < iStack_174) {
            _dev_err(*(iVar4 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar4 + 0x50) + *(iVar4 + 0x6c) * 0x10) = iStack_174 * 0x1d8 + 0x40;
            *(*(iVar4 + 0x50) + *(iVar4 + 0x6c) * 0x10 + 8) = uStack_170;
            *(iVar4 + 0x6c) = *(iVar4 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
        piVar7 = piVar8;
        piVar10 = piVar9;
code_r0x08001bbc:
        piVar9 = 0xffffffffffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_168) {
        return piVar9;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_counter_store;
    pcStack_1a8 = sym.set_counter_store;
    iVar12 = sp_el0;
    iStack_1b8 = *(iVar12 + 0x5e0);
    uStack_1c0 = 0;
    iStack_1c4 = 0;
    iVar12 = *(*(iVar5 + 0x60) + 0x98);
    ppppuStack_1b0 = &ppppuStack_160;
    iStack_1a0 = iVar4;
    piStack_190 = unaff_x20;
    piStack_188 = piVar9;
    if (*(iVar12 + 0x70) < 8) {
        iVar2 = sscanf(piVar7,"%d %lx",&iStack_1c4,&uStack_1c0);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar12 + 0x20);
            if (*(iVar12 + 0x30) < iStack_1c4) {
                _dev_err(*(iVar12 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar12 + 0x58) + *(iVar12 + 0x70) * 0x10) = iStack_1c4 * 0x1d8 + 0x48;
                *(*(iVar12 + 0x58) + *(iVar12 + 0x70) * 0x10 + 8) = uStack_1c0;
                *(iVar12 + 0x70) = *(iVar12 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar12 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
    }
    piVar10 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_1b8) {
        auVar13 = __stack_chk_fail();
        piVar7 = auVar13._0_8_;
        *extraout_x18_04 = sym.__cfi_check_fail;
        if (piVar7 != NULL) {
            switch(*piVar7) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar7,auVar13._8_8_,0);
                break;
            default:
                return piVar7;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return piVar10;
}


// ===== sym.set_counter_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010b8 (size 8) =====

uchar * sym.set_counter_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    int iStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iStack_44 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 0x70) < 8) {
        iVar2 = sscanf(param_3,"%d %lx",&iStack_44,&uStack_40);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar4 + 0x20);
            if (*(iVar4 + 0x30) < iStack_44) {
                _dev_err(*(iVar4 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar4 + 0x58) + *(iVar4 + 0x70) * 0x10) = iStack_44 * 0x1d8 + 0x48;
                *(*(iVar4 + 0x58) + *(iVar4 + 0x70) * 0x10 + 8) = uStack_40;
                *(iVar4 + 0x70) = *(iVar4 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar4 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
    }
    param_4 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return param_4;
}


// ===== sym.set_select_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010c0 (size 8) =====

ulong * sym.set_select_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,int *param_3,ulong *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar6;
    ulong *puVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_e4;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    ulong *puStack_a8;
    int iStack_94;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar8 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar8 + 0x68) < 0x40) {
        piVar4 = &uStack_48 + 4;
        puVar6 = &uStack_48;
        iVar2 = sscanf(param_3,"%d %d %lx",piVar4,puVar6,&uStack_40);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < uStack_48._4_4_) || (*(iVar8 + 0x24) < uStack_48)) {
            _dev_err(*(iVar8 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10) = uStack_48 * 0x1d8 + uStack_48._4_4_ * 4 + 0x60;
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10 + 8) = uStack_40;
            *(iVar8 + 0x68) = *(iVar8 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = param_3;
        puVar6 = param_4;
code_r0x08001a88:
        param_4 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_timer_store;
    pcStack_78 = sym.set_timer_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_90 = 0;
    iStack_94 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    puStack_58 = param_4;
    if (*(iVar9 + 0x6c) < 8) {
        piVar5 = &iStack_94;
        puVar7 = &uStack_90;
        iVar2 = sscanf(piVar4,"%d %lx",piVar5,puVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar9 + 0x30) < iStack_94) {
            _dev_err(*(iVar9 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10) = iStack_94 * 0x1d8 + 0x40;
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10 + 8) = uStack_90;
            *(iVar9 + 0x6c) = *(iVar9 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        puVar7 = puVar6;
code_r0x08001bbc:
        puVar6 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return puVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_counter_store;
    pcStack_c8 = sym.set_counter_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uStack_e0 = 0;
    iStack_e4 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    puStack_a8 = puVar6;
    if (*(iVar8 + 0x70) < 8) {
        iVar2 = sscanf(piVar5,"%d %lx",&iStack_e4,&uStack_e0);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar8 + 0x20);
            if (*(iVar8 + 0x30) < iStack_e4) {
                _dev_err(*(iVar8 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10) = iStack_e4 * 0x1d8 + 0x48;
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10 + 8) = uStack_e0;
                *(iVar8 + 0x70) = *(iVar8 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar8 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
    }
    puVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_d8) {
        auVar10 = __stack_chk_fail();
        puVar6 = auVar10._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar10._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar7;
}


// ===== sym.set_group_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010c8 (size 8) =====

int * sym.set_group_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                (int64_t param_1,ulong param_2,int *param_3,int *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_184;
    ulong uStack_180;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_150;
    int *piStack_148;
    int iStack_134;
    ulong uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_100;
    int *piStack_f8;
    int aiStack_e8 [2];
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int *piStack_a8;
    int aiStack_98 [2];
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    int *piStack_58;
    ulong uStack_50;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_3c = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    uStack_50 = 0;
    iVar8 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar8 + 0x60) < 0x100) {
        piVar6 = &iStack_3c;
        piVar5 = &iStack_40;
        iVar2 = sscanf(param_3,"%d %d %d %lx",piVar6,piVar5,&iStack_44,&uStack_50);
        if (iVar2 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_3c < 5) && (iStack_40 <= *(iVar8 + 0x2c))) {
            *(*(iVar8 + 0x38) + *(iVar8 + 0x60) * 0x10) = iStack_3c * 0x60 + iStack_40 * 4 + iStack_44 * 0x1d8 + 0x74;
            *(*(iVar8 + 0x38) + *(iVar8 + 0x60) * 0x10 + 8) = uStack_50;
            *(iVar8 + 0x60) = *(iVar8 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar8 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar6 = param_3;
        piVar5 = param_4;
code_r0x080017f8:
        param_4 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_condition_store;
    pcStack_78 = sym.set_condition_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    aiStack_98[0] = 0;
    aiStack_98[1] = 0;
    uStack_90 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    piStack_58 = param_4;
    if (*(iVar9 + 100) < 0x40) {
        piVar4 = aiStack_98 + 1;
        piVar7 = aiStack_98;
        iVar2 = sscanf(piVar6,"%d %d %lx",piVar4,piVar7,&uStack_90);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar9 + 0x28) < aiStack_98[1]) || (*(iVar9 + 0x24) < aiStack_98[0])) {
            _dev_err(*(iVar9 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar9 + 0x40) + *(iVar9 + 100) * 0x10) = aiStack_98[0] * 0x1d8 + aiStack_98[1] * 4 + 0x50;
            *(*(iVar9 + 0x40) + *(iVar9 + 100) * 0x10 + 8) = uStack_90;
            *(iVar9 + 100) = *(iVar9 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar4 = piVar6;
        piVar7 = piVar5;
code_r0x08001940:
        piVar5 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return piVar5;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_select_store;
    pcStack_c8 = sym.set_select_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    uStack_e0 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    piStack_a8 = piVar5;
    if (*(iVar8 + 0x68) < 0x40) {
        piVar5 = aiStack_e8 + 1;
        piVar6 = aiStack_e8;
        iVar2 = sscanf(piVar4,"%d %d %lx",piVar5,piVar6,&uStack_e0);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < aiStack_e8[1]) || (*(iVar8 + 0x24) < aiStack_e8[0])) {
            _dev_err(*(iVar8 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10) = aiStack_e8[0] * 0x1d8 + aiStack_e8[1] * 4 + 0x60;
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10 + 8) = uStack_e0;
            *(iVar8 + 0x68) = *(iVar8 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        piVar6 = piVar7;
code_r0x08001a88:
        piVar7 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return piVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_timer_store;
    pcStack_118 = sym.set_timer_store;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iStack_134 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    pppuStack_120 = &ppuStack_d0;
    iStack_110 = iVar8;
    iStack_100 = unaff_x20;
    piStack_f8 = piVar7;
    if (*(iVar9 + 0x6c) < 8) {
        piVar4 = &iStack_134;
        piVar7 = &uStack_130;
        iVar2 = sscanf(piVar5,"%d %lx",piVar4,piVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar9 + 0x30) < iStack_134) {
            _dev_err(*(iVar9 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10) = iStack_134 * 0x1d8 + 0x40;
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10 + 8) = uStack_130;
            *(iVar9 + 0x6c) = *(iVar9 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar4 = piVar5;
        piVar7 = piVar6;
code_r0x08001bbc:
        piVar6 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_128) {
        return piVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_counter_store;
    pcStack_168 = sym.set_counter_store;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    uStack_180 = 0;
    iStack_184 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppppuStack_170 = &pppuStack_120;
    iStack_160 = iVar9;
    iStack_150 = unaff_x20;
    piStack_148 = piVar6;
    if (*(iVar8 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_184,&uStack_180);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar8 + 0x20);
            if (*(iVar8 + 0x30) < iStack_184) {
                _dev_err(*(iVar8 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10) = iStack_184 * 0x1d8 + 0x48;
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10 + 8) = uStack_180;
                *(iVar8 + 0x70) = *(iVar8 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar8 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
    }
    piVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_178) {
        auVar10 = __stack_chk_fail();
        piVar5 = auVar10._0_8_;
        *extraout_x18_03 = sym.__cfi_check_fail;
        if (piVar5 != NULL) {
            switch(*piVar5) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar5,auVar10._8_8_,0);
                break;
            default:
                return piVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return piVar7;
}


// ===== sym.set_condition_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010d0 (size 8) =====

ulong * sym.set_condition_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,int *param_3,ulong *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar6;
    ulong *puVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_134;
    ulong uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_100;
    ulong *puStack_f8;
    int iStack_e4;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    ulong *puStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar8 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar8 + 100) < 0x40) {
        piVar4 = &uStack_48 + 4;
        puVar7 = &uStack_48;
        iVar2 = sscanf(param_3,"%d %d %lx",piVar4,puVar7,&uStack_40);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < uStack_48._4_4_) || (*(iVar8 + 0x24) < uStack_48)) {
            _dev_err(*(iVar8 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar8 + 0x40) + *(iVar8 + 100) * 0x10) = uStack_48 * 0x1d8 + uStack_48._4_4_ * 4 + 0x50;
            *(*(iVar8 + 0x40) + *(iVar8 + 100) * 0x10 + 8) = uStack_40;
            *(iVar8 + 100) = *(iVar8 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = param_3;
        puVar7 = param_4;
code_r0x08001940:
        param_4 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_select_store;
    pcStack_78 = sym.set_select_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    puStack_58 = param_4;
    if (*(iVar9 + 0x68) < 0x40) {
        piVar5 = &uStack_98 + 4;
        puVar6 = &uStack_98;
        iVar2 = sscanf(piVar4,"%d %d %lx",piVar5,puVar6,&uStack_90);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar9 + 0x28) < uStack_98._4_4_) || (*(iVar9 + 0x24) < uStack_98)) {
            _dev_err(*(iVar9 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar9 + 0x48) + *(iVar9 + 0x68) * 0x10) = uStack_98 * 0x1d8 + uStack_98._4_4_ * 4 + 0x60;
            *(*(iVar9 + 0x48) + *(iVar9 + 0x68) * 0x10 + 8) = uStack_90;
            *(iVar9 + 0x68) = *(iVar9 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        puVar6 = puVar7;
code_r0x08001a88:
        puVar7 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return puVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_timer_store;
    pcStack_c8 = sym.set_timer_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uStack_e0 = 0;
    iStack_e4 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    puStack_a8 = puVar7;
    if (*(iVar8 + 0x6c) < 8) {
        piVar4 = &iStack_e4;
        puVar7 = &uStack_e0;
        iVar2 = sscanf(piVar5,"%d %lx",piVar4,puVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar8 + 0x30) < iStack_e4) {
            _dev_err(*(iVar8 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar8 + 0x50) + *(iVar8 + 0x6c) * 0x10) = iStack_e4 * 0x1d8 + 0x40;
            *(*(iVar8 + 0x50) + *(iVar8 + 0x6c) * 0x10 + 8) = uStack_e0;
            *(iVar8 + 0x6c) = *(iVar8 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = piVar5;
        puVar7 = puVar6;
code_r0x08001bbc:
        puVar6 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return puVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_counter_store;
    pcStack_118 = sym.set_counter_store;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iStack_134 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    pppuStack_120 = &ppuStack_d0;
    iStack_110 = iVar8;
    iStack_100 = unaff_x20;
    puStack_f8 = puVar6;
    if (*(iVar9 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_134,&uStack_130);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar9 + 0x20);
            if (*(iVar9 + 0x30) < iStack_134) {
                _dev_err(*(iVar9 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar9 + 0x58) + *(iVar9 + 0x70) * 0x10) = iStack_134 * 0x1d8 + 0x48;
                *(*(iVar9 + 0x58) + *(iVar9 + 0x70) * 0x10 + 8) = uStack_130;
                *(iVar9 + 0x70) = *(iVar9 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar9 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
    }
    puVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_128) {
        auVar10 = __stack_chk_fail();
        puVar7 = auVar10._0_8_;
        *extraout_x18_02 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar10._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar7;
}


// ===== sym.set_timer_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010d8 (size 8) =====

ulong * sym.set_timer_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,int *param_3,ulong *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar5;
    int64_t unaff_x20;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_94;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    int iStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iStack_44 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar6 + 0x6c) < 8) {
        piVar4 = &iStack_44;
        puVar5 = &uStack_40;
        iVar2 = sscanf(param_3,"%d %lx",piVar4,puVar5);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar6 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar6 + 0x30) < iStack_44) {
            _dev_err(*(iVar6 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar6 + 0x50) + *(iVar6 + 0x6c) * 0x10) = iStack_44 * 0x1d8 + 0x40;
            *(*(iVar6 + 0x50) + *(iVar6 + 0x6c) * 0x10 + 8) = uStack_40;
            *(iVar6 + 0x6c) = *(iVar6 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar6 + 8)," Too many groups are being configured\n");
        piVar4 = param_3;
        puVar5 = param_4;
code_r0x08001bbc:
        param_4 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_counter_store;
    pcStack_78 = sym.set_counter_store;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    uStack_90 = 0;
    iStack_94 = 0;
    iVar7 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar6;
    iStack_60 = unaff_x20;
    puStack_58 = param_4;
    if (*(iVar7 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_94,&uStack_90);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar7 + 0x20);
            if (*(iVar7 + 0x30) < iStack_94) {
                _dev_err(*(iVar7 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10) = iStack_94 * 0x1d8 + 0x48;
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10 + 8) = uStack_90;
                *(iVar7 + 0x70) = *(iVar7 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar7 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
    }
    puVar5 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_88) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar5;
}


// ===== sym.enable_tgu_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080010e0 (size 8) =====

int * sym.enable_tgu_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,int *param_4)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int *piVar12;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    int64_t *unaff_x20;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int iStack_204;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t *piStack_1d0;
    int *piStack_1c8;
    int iStack_1b4;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t *piStack_180;
    int *piStack_178;
    int aiStack_168 [2];
    ulong uStack_160;
    int64_t iStack_158;
    uchar ****ppppuStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t *piStack_130;
    int *piStack_128;
    int aiStack_118 [2];
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t *piStack_e0;
    int *piStack_d8;
    ulong uStack_d0;
    int iStack_c4;
    int iStack_c0;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_90;
    int *piStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar7 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_38 = *(iVar18 + 0x5e0);
    iStack_40 = 0;
    piVar16 = *(*(param_1 + 0x60) + 0x98);
    piVar12 = param_4;
    iVar3 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar3 == 0) {
        uVar4 = __pm_runtime_resume(piVar16[1],4);
        if (uVar4 < 0) {
            unaff_x20 = uVar4;
            __pm_runtime_idle(piVar16[1],5);
            param_4 = uVar4;
        }
        else {
            unaff_x20 = piVar16 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar16 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            **piVar16 = 0;
            if (iStack_40 == 0) {
                __pm_runtime_idle(piVar16[1],5);
            }
            else {
                if (-1 < piVar16[0xc]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[7] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xc]);
                }
                iVar3 = piVar16[5];
                if (-1 < iVar3) {
                    iVar9 = 0;
                    iVar11 = *(piVar16 + 0x24);
                    iVar10 = 0x50;
                    do {
                        if (-1 < iVar11) {
                            iVar3 = 0;
                            iVar1 = iVar10;
                            do {
                                iVar3 = iVar3 + 1;
                                *(*piVar16 + iVar1) = 0x1000000;
                                iVar11 = *(piVar16 + 0x24);
                                iVar1 = iVar1 + 0x1d8;
                            } while (iVar3 <= iVar11);
                            iVar3 = piVar16[5];
                        }
                        iVar9 = iVar9 + 1;
                        iVar10 = iVar10 + 4;
                    } while (iVar9 <= iVar3);
                }
                if (-1 < *(piVar16 + 100)) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[8] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= *(piVar16 + 100));
                }
                if (-1 < piVar16[0xd]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[9] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xd]);
                }
                if (-1 < *(piVar16 + 0x6c)) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[10] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= *(piVar16 + 0x6c));
                }
                if (-1 < piVar16[0xe]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[0xb] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xe]);
                }
                **piVar16 = 1;
                *(piVar16 + 0x74) = 1;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar16 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    piVar8 = &iStack_80;
    *extraout_x18 = sym.reset_tgu_store;
    pcStack_68 = sym.reset_tgu_store;
    iVar18 = sp_el0;
    iStack_78 = *(iVar18 + 0x5e0);
    iStack_80 = 0;
    piVar17 = *(*(iVar5 + 0x60) + 0x98);
    piVar13 = piVar12;
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar16;
    piStack_50 = unaff_x20;
    piStack_48 = param_4;
    iVar3 = kstrtoull(piVar7,0x10,&iStack_80);
    if (iVar3 == 0) {
        if ((*(piVar17 + 0x74) == '\0') && (uVar4 = __pm_runtime_resume(piVar17[1],4), uVar4 < 0)) {
            unaff_x20 = uVar4;
            __pm_runtime_idle(piVar17[1],5);
            piVar12 = uVar4;
        }
        else {
            unaff_x20 = piVar17 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar17 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_80 != 0) {
                **piVar17 = 0;
                *(piVar17 + 0xe) = 0;
                piVar17[0xc] = 0;
                piVar17[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar17 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
            __pm_runtime_idle(piVar17[1],5);
        }
    }
    else {
        piVar12 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_78) {
        return piVar12;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_group_store;
    pcStack_a8 = sym.set_group_store;
    iVar18 = sp_el0;
    iStack_b8 = *(iVar18 + 0x5e0);
    iStack_bc = 0;
    iStack_c4 = 0;
    iStack_c0 = 0;
    uStack_d0 = 0;
    iVar18 = *(*(iVar5 + 0x60) + 0x98);
    ppuStack_b0 = &puStack_70;
    piStack_a0 = piVar17;
    piStack_90 = unaff_x20;
    piStack_88 = piVar12;
    if (*(iVar18 + 0x60) < 0x100) {
        piVar14 = &iStack_bc;
        piVar12 = &iStack_c0;
        iVar3 = sscanf(piVar8,"%d %d %d %lx",piVar14,piVar12,&iStack_c4,&uStack_d0);
        if (iVar3 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar18 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_bc < 5) && (iStack_c0 <= *(iVar18 + 0x2c))) {
            *(*(iVar18 + 0x38) + *(iVar18 + 0x60) * 0x10) = iStack_bc * 0x60 + iStack_c0 * 4 + iStack_c4 * 0x1d8 + 0x74;
            *(*(iVar18 + 0x38) + *(iVar18 + 0x60) * 0x10 + 8) = uStack_d0;
            *(iVar18 + 0x60) = *(iVar18 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar18 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
        piVar14 = piVar8;
        piVar12 = piVar13;
code_r0x080017f8:
        piVar13 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return piVar13;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_condition_store;
    pcStack_f8 = sym.set_condition_store;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    aiStack_118[0] = 0;
    aiStack_118[1] = 0;
    uStack_110 = 0;
    iVar5 = *(*(iVar6 + 0x60) + 0x98);
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = iVar18;
    piStack_e0 = unaff_x20;
    piStack_d8 = piVar13;
    if (*(iVar5 + 100) < 0x40) {
        piVar13 = aiStack_118 + 1;
        piVar15 = aiStack_118;
        iVar3 = sscanf(piVar14,"%d %d %lx",piVar13,piVar15,&uStack_110);
        if (iVar3 != 3) goto code_r0x08001940;
        unaff_x20 = iVar5 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar5 + 0x28) < aiStack_118[1]) || (*(iVar5 + 0x24) < aiStack_118[0])) {
            _dev_err(*(iVar5 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar5 + 0x40) + *(iVar5 + 100) * 0x10) = aiStack_118[0] * 0x1d8 + aiStack_118[1] * 4 + 0x50;
            *(*(iVar5 + 0x40) + *(iVar5 + 100) * 0x10 + 8) = uStack_110;
            *(iVar5 + 100) = *(iVar5 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar5 + 8)," Too many groups are being configured\n");
        piVar13 = piVar14;
        piVar15 = piVar12;
code_r0x08001940:
        piVar12 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_108) {
        return piVar12;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_select_store;
    pcStack_148 = sym.set_select_store;
    iVar18 = sp_el0;
    iStack_158 = *(iVar18 + 0x5e0);
    aiStack_168[0] = 0;
    aiStack_168[1] = 0;
    uStack_160 = 0;
    iVar18 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_150 = &pppuStack_100;
    iStack_140 = iVar5;
    piStack_130 = unaff_x20;
    piStack_128 = piVar12;
    if (*(iVar18 + 0x68) < 0x40) {
        piVar12 = aiStack_168 + 1;
        piVar14 = aiStack_168;
        iVar3 = sscanf(piVar13,"%d %d %lx",piVar12,piVar14,&uStack_160);
        if (iVar3 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar18 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar18 + 0x28) < aiStack_168[1]) || (*(iVar18 + 0x24) < aiStack_168[0])) {
            _dev_err(*(iVar18 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar18 + 0x48) + *(iVar18 + 0x68) * 0x10) = aiStack_168[0] * 0x1d8 + aiStack_168[1] * 4 + 0x60;
            *(*(iVar18 + 0x48) + *(iVar18 + 0x68) * 0x10 + 8) = uStack_160;
            *(iVar18 + 0x68) = *(iVar18 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
        piVar12 = piVar13;
        piVar14 = piVar15;
code_r0x08001a88:
        piVar15 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_158) {
        return piVar15;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_timer_store;
    pcStack_198 = sym.set_timer_store;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uStack_1b0 = 0;
    iStack_1b4 = 0;
    iVar5 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_1a0 = &ppppuStack_150;
    iStack_190 = iVar18;
    piStack_180 = unaff_x20;
    piStack_178 = piVar15;
    if (*(iVar5 + 0x6c) < 8) {
        piVar13 = &iStack_1b4;
        piVar15 = &uStack_1b0;
        iVar3 = sscanf(piVar12,"%d %lx",piVar13,piVar15);
        if (iVar3 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar5 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar5 + 0x30) < iStack_1b4) {
            _dev_err(*(iVar5 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar5 + 0x50) + *(iVar5 + 0x6c) * 0x10) = iStack_1b4 * 0x1d8 + 0x40;
            *(*(iVar5 + 0x50) + *(iVar5 + 0x6c) * 0x10 + 8) = uStack_1b0;
            *(iVar5 + 0x6c) = *(iVar5 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar5 + 8)," Too many groups are being configured\n");
        piVar13 = piVar12;
        piVar15 = piVar14;
code_r0x08001bbc:
        piVar14 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_1a8) {
        return piVar14;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_04 = sym.set_counter_store;
    pcStack_1e8 = sym.set_counter_store;
    iVar18 = sp_el0;
    iStack_1f8 = *(iVar18 + 0x5e0);
    uStack_200 = 0;
    iStack_204 = 0;
    iVar18 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_1f0 = &ppppuStack_1a0;
    iStack_1e0 = iVar5;
    piStack_1d0 = unaff_x20;
    piStack_1c8 = piVar14;
    if (*(iVar18 + 0x70) < 8) {
        iVar3 = sscanf(piVar13,"%d %lx",&iStack_204,&uStack_200);
        if (iVar3 == 2) {
            _raw_spin_lock(iVar18 + 0x20);
            if (*(iVar18 + 0x30) < iStack_204) {
                _dev_err(*(iVar18 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar18 + 0x58) + *(iVar18 + 0x70) * 0x10) = iStack_204 * 0x1d8 + 0x48;
                *(*(iVar18 + 0x58) + *(iVar18 + 0x70) * 0x10 + 8) = uStack_200;
                *(iVar18 + 0x70) = *(iVar18 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar18 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
    }
    piVar15 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_1f8) {
        auVar19 = __stack_chk_fail();
        piVar12 = auVar19._0_8_;
        *extraout_x18_05 = sym.__cfi_check_fail;
        if (piVar12 != NULL) {
            switch(*piVar12) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar12,auVar19._8_8_,0);
                break;
            default:
                return piVar12;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar2)();
    }
    return piVar15;
}


// ===== sym.tgu_probe @ 0x080010e8 (size 568) =====

int * sym.tgu_probe(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int *piVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *in_x2;
    int64_t *piVar12;
    int64_t *piVar13;
    int *in_x3;
    int iVar14;
    int iVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    int *piVar17;
    int *piVar18;
    int *piVar19;
    int64_t *unaff_x20;
    uint64_t unaff_x21;
    int64_t *piVar20;
    int64_t *piVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    int iStack_294;
    ulong uStack_290;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    int64_t *piStack_260;
    int *piStack_258;
    int iStack_244;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ****ppppuStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t *piStack_210;
    int *piStack_208;
    int aiStack_1f8 [2];
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong ****ppppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t *piStack_1c0;
    int *piStack_1b8;
    int aiStack_1a8 [2];
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ****ppppuStack_190;
    code *pcStack_188;
    int64_t iStack_180;
    int64_t *piStack_170;
    int *piStack_168;
    ulong uStack_160;
    int iStack_154;
    int iStack_150;
    int iStack_14c;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    int64_t *piStack_130;
    int64_t *piStack_120;
    int *piStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t *piStack_f0;
    int64_t *piStack_e0;
    int *piStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uint64_t auStack_88 [5];
    code *pcStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    auStack_88[4] = 0;
    pcStack_60 = NULL;
    auStack_88[2] = 0;
    auStack_88[3] = 0;
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    iStack_58 = coresight_alloc_device_name(obj.tgu_devs,arg1);
    if (iStack_58 == 0) {
code_r0x080012cc:
        piVar5 = 0xfffffff4;
        piVar6 = unaff_x20;
    }
    else {
        piVar5 = coresight_get_platform_data(arg1);
        piVar6 = unaff_x20;
        if (piVar5 < 0xfffffffffffff001) {
            *(arg1 + 0x90) = piVar5;
            in_x2 = 0xdc0;
            piVar6 = devm_kmalloc(arg1,0x78,0xdc0);
            if (piVar6 != NULL) {
                piVar6[1] = arg1;
                *(arg1 + 0x98) = piVar6;
                iVar7 = devm_ioremap_resource(arg1,arg1 + 0x390);
                *piVar6 = iVar7;
                unaff_x20 = piVar6;
                if (iVar7 != 0) {
                    uVar8 = *(arg1 + 0x2f0);
                    in_x2 = piVar6 + 0x24;
                    in_x3 = 0x1;
                    *(piVar6 + 4) = 0;
                    iVar3 = of_property_read_variable_u32_array(uVar8,"tgu-steps",in_x2,1,0);
                    if (-1 < iVar3) {
                        in_x2 = piVar6 + 5;
                        in_x3 = 0x1;
                        iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"tgu-conditions",in_x2,1,0);
                        if (-1 < iVar3) {
                            in_x2 = piVar6 + 0x2c;
                            in_x3 = 0x1;
                            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"tgu-regs",in_x2,1,0);
                            if (-1 < iVar3) {
                                in_x2 = piVar6 + 6;
                                in_x3 = 0x1;
                                iVar3 = of_property_read_variable_u32_array
                                                  (*(arg1 + 0x2f0),"tgu-timer-counters",in_x2,1,0);
                                if (-1 < iVar3) {
                                    in_x2 = 0xdc0;
                                    iVar7 = devm_kmalloc(arg1,0x1000,0xdc0);
                                    piVar6[7] = iVar7;
                                    if (iVar7 != 0) {
                                        in_x2 = 0xdc0;
                                        iVar7 = devm_kmalloc(arg1,0x400,0xdc0);
                                        piVar6[8] = iVar7;
                                        if (iVar7 != 0) {
                                            in_x2 = 0xdc0;
                                            iVar7 = devm_kmalloc(arg1,0x400,0xdc0);
                                            piVar6[9] = iVar7;
                                            if (iVar7 != 0) {
                                                in_x2 = 0xdc0;
                                                iVar7 = devm_kmalloc(arg1,0x80,0xdc0);
                                                piVar6[10] = iVar7;
                                                if (iVar7 != 0) {
                                                    in_x2 = 0xdc0;
                                                    iVar7 = devm_kmalloc(arg1,0x80,0xdc0);
                                                    piVar6[0xb] = iVar7;
                                                    if (iVar7 != 0) {
                                                        auStack_88[3] = *(arg1 + 0x90);
                                                        *(piVar6 + 0x74) = 0;
                                                        auStack_88[0] = auStack_88[0] & 0xffffffff00000000;
                                                        pcStack_60 = obj.tgu_attr_grps;
                                                        auStack_88[4] = arg1;
                                                        uVar9 = coresight_register(auStack_88);
                                                        piVar6[2] = uVar9;
                                                        if (uVar9 < 0xfffffffffffff001) {
                                                            __pm_runtime_idle(arg1,5);
                                                            piVar5 = NULL;
                                                        }
                                                        else {
                                                            __pm_runtime_idle(arg1,5);
                                                            piVar5 = uVar9 & 0xffffffff;
                                                            unaff_x21 = uVar9;
                                                        }
                                                        goto code_r0x080012d0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    goto code_r0x080012cc;
                                }
                            }
                        }
                    }
                    piVar5 = 0xffffffea;
                    goto code_r0x080012d0;
                }
            }
            goto code_r0x080012cc;
        }
    }
code_r0x080012d0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar5;
    }
    iVar10 = __stack_chk_fail(piVar5);
    piVar12 = &iStack_d0;
    *extraout_x18 = sym.enable_tgu_store;
    pcStack_b8 = sym.enable_tgu_store;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    piVar20 = *(*(iVar10 + 0x60) + 0x98);
    piVar5 = in_x3;
    puStack_c0 = &stack0xffffffffffffffd0;
    uStack_b0 = unaff_x21;
    piStack_a0 = piVar6;
    iStack_98 = arg1;
    iVar3 = kstrtoull(in_x2,0x10,&iStack_d0);
    if (iVar3 == 0) {
        uVar4 = __pm_runtime_resume(piVar20[1],4);
        if (uVar4 < 0) {
            piVar6 = uVar4;
            __pm_runtime_idle(piVar20[1],5);
            in_x3 = uVar4;
        }
        else {
            piVar6 = piVar20 + 4;
            _raw_spin_lock(piVar6);
            *(*piVar20 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            **piVar20 = 0;
            if (iStack_d0 == 0) {
                __pm_runtime_idle(piVar20[1],5);
            }
            else {
                if (-1 < piVar20[0xc]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[7] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xc]);
                }
                iVar3 = piVar20[5];
                if (-1 < iVar3) {
                    iVar14 = 0;
                    iVar16 = *(piVar20 + 0x24);
                    iVar15 = 0x50;
                    do {
                        if (-1 < iVar16) {
                            iVar3 = 0;
                            iVar1 = iVar15;
                            do {
                                iVar3 = iVar3 + 1;
                                *(*piVar20 + iVar1) = 0x1000000;
                                iVar16 = *(piVar20 + 0x24);
                                iVar1 = iVar1 + 0x1d8;
                            } while (iVar3 <= iVar16);
                            iVar3 = piVar20[5];
                        }
                        iVar14 = iVar14 + 1;
                        iVar15 = iVar15 + 4;
                    } while (iVar14 <= iVar3);
                }
                if (-1 < *(piVar20 + 100)) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[8] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= *(piVar20 + 100));
                }
                if (-1 < piVar20[0xd]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[9] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xd]);
                }
                if (-1 < *(piVar20 + 0x6c)) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[10] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= *(piVar20 + 0x6c));
                }
                if (-1 < piVar20[0xe]) {
                    iVar3 = 0;
                    do {
                        piVar13 = piVar20[0xb] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar20 + *piVar13) = piVar13[1];
                    } while (iVar3 <= piVar20[0xe]);
                }
                **piVar20 = 1;
                *(piVar20 + 0x74) = 1;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar20 + 0xfb0) = 0;
            _raw_spin_unlock(piVar6);
        }
    }
    else {
        in_x3 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return in_x3;
    }
    iVar10 = __stack_chk_fail();
    piVar13 = &iStack_110;
    *extraout_x18_00 = sym.reset_tgu_store;
    pcStack_f8 = sym.reset_tgu_store;
    iVar7 = sp_el0;
    iStack_108 = *(iVar7 + 0x5e0);
    iStack_110 = 0;
    piVar21 = *(*(iVar10 + 0x60) + 0x98);
    piVar17 = piVar5;
    ppuStack_100 = &puStack_c0;
    piStack_f0 = piVar20;
    piStack_e0 = piVar6;
    piStack_d8 = in_x3;
    iVar3 = kstrtoull(piVar12,0x10,&iStack_110);
    if (iVar3 == 0) {
        if ((*(piVar21 + 0x74) == '\0') && (uVar4 = __pm_runtime_resume(piVar21[1],4), uVar4 < 0)) {
            piVar6 = uVar4;
            __pm_runtime_idle(piVar21[1],5);
            piVar5 = uVar4;
        }
        else {
            piVar6 = piVar21 + 4;
            _raw_spin_lock(piVar6);
            *(*piVar21 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_110 != 0) {
                **piVar21 = 0;
                *(piVar21 + 0xe) = 0;
                piVar21[0xc] = 0;
                piVar21[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar21 + 0xfb0) = 0;
            _raw_spin_unlock(piVar6);
            __pm_runtime_idle(piVar21[1],5);
        }
    }
    else {
        piVar5 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_108) {
        return piVar5;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_group_store;
    pcStack_138 = sym.set_group_store;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    iStack_14c = 0;
    iStack_154 = 0;
    iStack_150 = 0;
    uStack_160 = 0;
    iVar7 = *(*(iVar10 + 0x60) + 0x98);
    pppuStack_140 = &ppuStack_100;
    piStack_130 = piVar21;
    piStack_120 = piVar6;
    piStack_118 = piVar5;
    if (*(iVar7 + 0x60) < 0x100) {
        piVar18 = &iStack_14c;
        piVar5 = &iStack_150;
        iVar3 = sscanf(piVar13,"%d %d %d %lx",piVar18,piVar5,&iStack_154,&uStack_160);
        if (iVar3 != 4) goto code_r0x080017f8;
        piVar6 = iVar7 + 0x20;
        _raw_spin_lock(piVar6);
        if ((iStack_14c < 5) && (iStack_150 <= *(iVar7 + 0x2c))) {
            *(*(iVar7 + 0x38) + *(iVar7 + 0x60) * 0x10) = iStack_14c * 0x60 + iStack_150 * 4 + iStack_154 * 0x1d8 + 0x74
            ;
            *(*(iVar7 + 0x38) + *(iVar7 + 0x60) * 0x10 + 8) = uStack_160;
            *(iVar7 + 0x60) = *(iVar7 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar7 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
        piVar18 = piVar13;
        piVar5 = piVar17;
code_r0x080017f8:
        piVar17 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_148) {
        return piVar17;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_condition_store;
    pcStack_188 = sym.set_condition_store;
    iVar10 = sp_el0;
    iStack_198 = *(iVar10 + 0x5e0);
    aiStack_1a8[0] = 0;
    aiStack_1a8[1] = 0;
    uStack_1a0 = 0;
    iVar10 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_190 = &pppuStack_140;
    iStack_180 = iVar7;
    piStack_170 = piVar6;
    piStack_168 = piVar17;
    if (*(iVar10 + 100) < 0x40) {
        piVar17 = aiStack_1a8 + 1;
        piVar19 = aiStack_1a8;
        iVar3 = sscanf(piVar18,"%d %d %lx",piVar17,piVar19,&uStack_1a0);
        if (iVar3 != 3) goto code_r0x08001940;
        piVar6 = iVar10 + 0x20;
        _raw_spin_lock(piVar6);
        if ((*(iVar10 + 0x28) < aiStack_1a8[1]) || (*(iVar10 + 0x24) < aiStack_1a8[0])) {
            _dev_err(*(iVar10 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar10 + 0x40) + *(iVar10 + 100) * 0x10) = aiStack_1a8[0] * 0x1d8 + aiStack_1a8[1] * 4 + 0x50;
            *(*(iVar10 + 0x40) + *(iVar10 + 100) * 0x10 + 8) = uStack_1a0;
            *(iVar10 + 100) = *(iVar10 + 100) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar10 + 8)," Too many groups are being configured\n");
        piVar17 = piVar18;
        piVar19 = piVar5;
code_r0x08001940:
        piVar5 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_198) {
        return piVar5;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_select_store;
    pcStack_1d8 = sym.set_select_store;
    iVar7 = sp_el0;
    iStack_1e8 = *(iVar7 + 0x5e0);
    aiStack_1f8[0] = 0;
    aiStack_1f8[1] = 0;
    uStack_1f0 = 0;
    iVar7 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_1e0 = &ppppuStack_190;
    iStack_1d0 = iVar10;
    piStack_1c0 = piVar6;
    piStack_1b8 = piVar5;
    if (*(iVar7 + 0x68) < 0x40) {
        piVar5 = aiStack_1f8 + 1;
        piVar18 = aiStack_1f8;
        iVar3 = sscanf(piVar17,"%d %d %lx",piVar5,piVar18,&uStack_1f0);
        if (iVar3 != 3) goto code_r0x08001a88;
        piVar6 = iVar7 + 0x20;
        _raw_spin_lock(piVar6);
        if ((*(iVar7 + 0x28) < aiStack_1f8[1]) || (*(iVar7 + 0x24) < aiStack_1f8[0])) {
            _dev_err(*(iVar7 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar7 + 0x48) + *(iVar7 + 0x68) * 0x10) = aiStack_1f8[0] * 0x1d8 + aiStack_1f8[1] * 4 + 0x60;
            *(*(iVar7 + 0x48) + *(iVar7 + 0x68) * 0x10 + 8) = uStack_1f0;
            *(iVar7 + 0x68) = *(iVar7 + 0x68) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
        piVar5 = piVar17;
        piVar18 = piVar19;
code_r0x08001a88:
        piVar19 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return piVar19;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_04 = sym.set_timer_store;
    pcStack_228 = sym.set_timer_store;
    iVar10 = sp_el0;
    iStack_238 = *(iVar10 + 0x5e0);
    uStack_240 = 0;
    iStack_244 = 0;
    iVar10 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_230 = &ppppuStack_1e0;
    iStack_220 = iVar7;
    piStack_210 = piVar6;
    piStack_208 = piVar19;
    if (*(iVar10 + 0x6c) < 8) {
        piVar17 = &iStack_244;
        piVar19 = &uStack_240;
        iVar3 = sscanf(piVar5,"%d %lx",piVar17,piVar19);
        if (iVar3 != 2) goto code_r0x08001bbc;
        piVar6 = iVar10 + 0x20;
        _raw_spin_lock(piVar6);
        if (*(iVar10 + 0x30) < iStack_244) {
            _dev_err(*(iVar10 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar10 + 0x50) + *(iVar10 + 0x6c) * 0x10) = iStack_244 * 0x1d8 + 0x40;
            *(*(iVar10 + 0x50) + *(iVar10 + 0x6c) * 0x10 + 8) = uStack_240;
            *(iVar10 + 0x6c) = *(iVar10 + 0x6c) + 1;
        }
        _raw_spin_unlock(piVar6);
    }
    else {
        _dev_err(*(iVar10 + 8)," Too many groups are being configured\n");
        piVar17 = piVar5;
        piVar19 = piVar18;
code_r0x08001bbc:
        piVar18 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_238) {
        return piVar18;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_05 = sym.set_counter_store;
    pcStack_278 = sym.set_counter_store;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uStack_290 = 0;
    iStack_294 = 0;
    iVar7 = *(*(iVar11 + 0x60) + 0x98);
    ppppuStack_280 = &ppppuStack_230;
    iStack_270 = iVar10;
    piStack_260 = piVar6;
    piStack_258 = piVar18;
    if (*(iVar7 + 0x70) < 8) {
        iVar3 = sscanf(piVar17,"%d %lx",&iStack_294,&uStack_290);
        if (iVar3 == 2) {
            _raw_spin_lock(iVar7 + 0x20);
            if (*(iVar7 + 0x30) < iStack_294) {
                _dev_err(*(iVar7 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10) = iStack_294 * 0x1d8 + 0x48;
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10 + 8) = uStack_290;
                *(iVar7 + 0x70) = *(iVar7 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar7 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
    }
    piVar19 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_288) {
        auVar22 = __stack_chk_fail();
        piVar5 = auVar22._0_8_;
        *extraout_x18_06 = sym.__cfi_check_fail;
        if (piVar5 != NULL) {
            switch(*piVar5) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar5,auVar22._8_8_,0);
                break;
            default:
                return piVar5;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar2)();
    }
    return piVar19;
}


// ===== sym.enable_tgu_store @ 0x08001320 (size 676) =====

int * sym.enable_tgu_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    int *piVar12;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    int64_t *unaff_x20;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int iStack_204;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    int64_t *piStack_1d0;
    int *piStack_1c8;
    int iStack_1b4;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t *piStack_180;
    int *piStack_178;
    int aiStack_168 [2];
    ulong uStack_160;
    int64_t iStack_158;
    uchar ****ppppuStack_150;
    code *pcStack_148;
    int64_t iStack_140;
    int64_t *piStack_130;
    int *piStack_128;
    int aiStack_118 [2];
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t *piStack_e0;
    int *piStack_d8;
    ulong uStack_d0;
    int iStack_c4;
    int iStack_c0;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_90;
    int *piStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar7 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_38 = *(iVar18 + 0x5e0);
    iStack_40 = 0;
    piVar16 = *(*(arg1 + 0x60) + 0x98);
    piVar12 = arg3;
    iVar3 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar3 == 0) {
        uVar4 = __pm_runtime_resume(piVar16[1],4);
        if (uVar4 < 0) {
            unaff_x20 = uVar4;
            __pm_runtime_idle(piVar16[1],5);
            arg3 = uVar4;
        }
        else {
            unaff_x20 = piVar16 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar16 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            **piVar16 = 0;
            if (iStack_40 == 0) {
                __pm_runtime_idle(piVar16[1],5);
            }
            else {
                if (-1 < piVar16[0xc]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[7] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xc]);
                }
                iVar3 = piVar16[5];
                if (-1 < iVar3) {
                    iVar9 = 0;
                    iVar11 = *(piVar16 + 0x24);
                    iVar10 = 0x50;
                    do {
                        if (-1 < iVar11) {
                            iVar3 = 0;
                            iVar1 = iVar10;
                            do {
                                iVar3 = iVar3 + 1;
                                *(*piVar16 + iVar1) = 0x1000000;
                                iVar11 = *(piVar16 + 0x24);
                                iVar1 = iVar1 + 0x1d8;
                            } while (iVar3 <= iVar11);
                            iVar3 = piVar16[5];
                        }
                        iVar9 = iVar9 + 1;
                        iVar10 = iVar10 + 4;
                    } while (iVar9 <= iVar3);
                }
                if (-1 < *(piVar16 + 100)) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[8] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= *(piVar16 + 100));
                }
                if (-1 < piVar16[0xd]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[9] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xd]);
                }
                if (-1 < *(piVar16 + 0x6c)) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[10] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= *(piVar16 + 0x6c));
                }
                if (-1 < piVar16[0xe]) {
                    iVar3 = 0;
                    do {
                        piVar8 = piVar16[0xb] + iVar3 * 0x10;
                        iVar3 = iVar3 + 1;
                        *(*piVar16 + *piVar8) = piVar8[1];
                    } while (iVar3 <= piVar16[0xe]);
                }
                **piVar16 = 1;
                *(piVar16 + 0x74) = 1;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar16 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    piVar8 = &iStack_80;
    *extraout_x18 = sym.reset_tgu_store;
    pcStack_68 = sym.reset_tgu_store;
    iVar18 = sp_el0;
    iStack_78 = *(iVar18 + 0x5e0);
    iStack_80 = 0;
    piVar17 = *(*(iVar5 + 0x60) + 0x98);
    piVar13 = piVar12;
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar16;
    piStack_50 = unaff_x20;
    piStack_48 = arg3;
    iVar3 = kstrtoull(piVar7,0x10,&iStack_80);
    if (iVar3 == 0) {
        if ((*(piVar17 + 0x74) == '\0') && (uVar4 = __pm_runtime_resume(piVar17[1],4), uVar4 < 0)) {
            unaff_x20 = uVar4;
            __pm_runtime_idle(piVar17[1],5);
            piVar12 = uVar4;
        }
        else {
            unaff_x20 = piVar17 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar17 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_80 != 0) {
                **piVar17 = 0;
                *(piVar17 + 0xe) = 0;
                piVar17[0xc] = 0;
                piVar17[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar17 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
            __pm_runtime_idle(piVar17[1],5);
        }
    }
    else {
        piVar12 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_78) {
        return piVar12;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_group_store;
    pcStack_a8 = sym.set_group_store;
    iVar18 = sp_el0;
    iStack_b8 = *(iVar18 + 0x5e0);
    iStack_bc = 0;
    iStack_c4 = 0;
    iStack_c0 = 0;
    uStack_d0 = 0;
    iVar18 = *(*(iVar5 + 0x60) + 0x98);
    ppuStack_b0 = &puStack_70;
    piStack_a0 = piVar17;
    piStack_90 = unaff_x20;
    piStack_88 = piVar12;
    if (*(iVar18 + 0x60) < 0x100) {
        piVar14 = &iStack_bc;
        piVar12 = &iStack_c0;
        iVar3 = sscanf(piVar8,"%d %d %d %lx",piVar14,piVar12,&iStack_c4,&uStack_d0);
        if (iVar3 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar18 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_bc < 5) && (iStack_c0 <= *(iVar18 + 0x2c))) {
            *(*(iVar18 + 0x38) + *(iVar18 + 0x60) * 0x10) = iStack_bc * 0x60 + iStack_c0 * 4 + iStack_c4 * 0x1d8 + 0x74;
            *(*(iVar18 + 0x38) + *(iVar18 + 0x60) * 0x10 + 8) = uStack_d0;
            *(iVar18 + 0x60) = *(iVar18 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar18 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
        piVar14 = piVar8;
        piVar12 = piVar13;
code_r0x080017f8:
        piVar13 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return piVar13;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_condition_store;
    pcStack_f8 = sym.set_condition_store;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    aiStack_118[0] = 0;
    aiStack_118[1] = 0;
    uStack_110 = 0;
    iVar5 = *(*(iVar6 + 0x60) + 0x98);
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = iVar18;
    piStack_e0 = unaff_x20;
    piStack_d8 = piVar13;
    if (*(iVar5 + 100) < 0x40) {
        piVar13 = aiStack_118 + 1;
        piVar15 = aiStack_118;
        iVar3 = sscanf(piVar14,"%d %d %lx",piVar13,piVar15,&uStack_110);
        if (iVar3 != 3) goto code_r0x08001940;
        unaff_x20 = iVar5 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar5 + 0x28) < aiStack_118[1]) || (*(iVar5 + 0x24) < aiStack_118[0])) {
            _dev_err(*(iVar5 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar5 + 0x40) + *(iVar5 + 100) * 0x10) = aiStack_118[0] * 0x1d8 + aiStack_118[1] * 4 + 0x50;
            *(*(iVar5 + 0x40) + *(iVar5 + 100) * 0x10 + 8) = uStack_110;
            *(iVar5 + 100) = *(iVar5 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar5 + 8)," Too many groups are being configured\n");
        piVar13 = piVar14;
        piVar15 = piVar12;
code_r0x08001940:
        piVar12 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_108) {
        return piVar12;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_select_store;
    pcStack_148 = sym.set_select_store;
    iVar18 = sp_el0;
    iStack_158 = *(iVar18 + 0x5e0);
    aiStack_168[0] = 0;
    aiStack_168[1] = 0;
    uStack_160 = 0;
    iVar18 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_150 = &pppuStack_100;
    iStack_140 = iVar5;
    piStack_130 = unaff_x20;
    piStack_128 = piVar12;
    if (*(iVar18 + 0x68) < 0x40) {
        piVar12 = aiStack_168 + 1;
        piVar14 = aiStack_168;
        iVar3 = sscanf(piVar13,"%d %d %lx",piVar12,piVar14,&uStack_160);
        if (iVar3 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar18 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar18 + 0x28) < aiStack_168[1]) || (*(iVar18 + 0x24) < aiStack_168[0])) {
            _dev_err(*(iVar18 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar18 + 0x48) + *(iVar18 + 0x68) * 0x10) = aiStack_168[0] * 0x1d8 + aiStack_168[1] * 4 + 0x60;
            *(*(iVar18 + 0x48) + *(iVar18 + 0x68) * 0x10 + 8) = uStack_160;
            *(iVar18 + 0x68) = *(iVar18 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
        piVar12 = piVar13;
        piVar14 = piVar15;
code_r0x08001a88:
        piVar15 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_158) {
        return piVar15;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_timer_store;
    pcStack_198 = sym.set_timer_store;
    iVar5 = sp_el0;
    iStack_1a8 = *(iVar5 + 0x5e0);
    uStack_1b0 = 0;
    iStack_1b4 = 0;
    iVar5 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_1a0 = &ppppuStack_150;
    iStack_190 = iVar18;
    piStack_180 = unaff_x20;
    piStack_178 = piVar15;
    if (*(iVar5 + 0x6c) < 8) {
        piVar13 = &iStack_1b4;
        piVar15 = &uStack_1b0;
        iVar3 = sscanf(piVar12,"%d %lx",piVar13,piVar15);
        if (iVar3 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar5 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar5 + 0x30) < iStack_1b4) {
            _dev_err(*(iVar5 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar5 + 0x50) + *(iVar5 + 0x6c) * 0x10) = iStack_1b4 * 0x1d8 + 0x40;
            *(*(iVar5 + 0x50) + *(iVar5 + 0x6c) * 0x10 + 8) = uStack_1b0;
            *(iVar5 + 0x6c) = *(iVar5 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar5 + 8)," Too many groups are being configured\n");
        piVar13 = piVar12;
        piVar15 = piVar14;
code_r0x08001bbc:
        piVar14 = 0xffffffffffffffea;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_1a8) {
        return piVar14;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_04 = sym.set_counter_store;
    pcStack_1e8 = sym.set_counter_store;
    iVar18 = sp_el0;
    iStack_1f8 = *(iVar18 + 0x5e0);
    uStack_200 = 0;
    iStack_204 = 0;
    iVar18 = *(*(iVar6 + 0x60) + 0x98);
    ppppuStack_1f0 = &ppppuStack_1a0;
    iStack_1e0 = iVar5;
    piStack_1d0 = unaff_x20;
    piStack_1c8 = piVar14;
    if (*(iVar18 + 0x70) < 8) {
        iVar3 = sscanf(piVar13,"%d %lx",&iStack_204,&uStack_200);
        if (iVar3 == 2) {
            _raw_spin_lock(iVar18 + 0x20);
            if (*(iVar18 + 0x30) < iStack_204) {
                _dev_err(*(iVar18 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar18 + 0x58) + *(iVar18 + 0x70) * 0x10) = iStack_204 * 0x1d8 + 0x48;
                *(*(iVar18 + 0x58) + *(iVar18 + 0x70) * 0x10 + 8) = uStack_200;
                *(iVar18 + 0x70) = *(iVar18 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar18 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar18 + 8)," Too many groups are being configured\n");
    }
    piVar15 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_1f8) {
        auVar19 = __stack_chk_fail();
        piVar12 = auVar19._0_8_;
        *extraout_x18_05 = sym.__cfi_check_fail;
        if (piVar12 != NULL) {
            switch(*piVar12) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar12,auVar19._8_8_,0);
                break;
            default:
                return piVar12;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar2)();
    }
    return piVar15;
}


// ===== sym.reset_tgu_store @ 0x080015c4 (size 296) =====

int * sym.reset_tgu_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    int *piVar10;
    int64_t *unaff_x20;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_1c4;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong ****ppppuStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    int64_t *piStack_190;
    int *piStack_188;
    int iStack_174;
    ulong uStack_170;
    int64_t iStack_168;
    uchar ****ppppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    int64_t *piStack_140;
    int *piStack_138;
    int aiStack_128 [2];
    ulong uStack_120;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    int64_t *piStack_f0;
    int *piStack_e8;
    int aiStack_d8 [2];
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t *piStack_a0;
    int *piStack_98;
    ulong uStack_90;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int *piStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_38 = *(iVar12 + 0x5e0);
    iStack_40 = 0;
    piVar11 = *(*(arg1 + 0x60) + 0x98);
    piVar7 = arg3;
    iVar2 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar2 == 0) {
        if ((*(piVar11 + 0x74) == '\0') && (uVar3 = __pm_runtime_resume(piVar11[1],4), uVar3 < 0)) {
            unaff_x20 = uVar3;
            __pm_runtime_idle(piVar11[1],5);
            arg3 = uVar3;
        }
        else {
            unaff_x20 = piVar11 + 4;
            _raw_spin_lock(unaff_x20);
            *(*piVar11 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (iStack_40 != 0) {
                **piVar11 = 0;
                *(piVar11 + 0xe) = 0;
                piVar11[0xc] = 0;
                piVar11[0xd] = 0;
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar11 + 0xfb0) = 0;
            _raw_spin_unlock(unaff_x20);
            __pm_runtime_idle(piVar11[1],5);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.set_group_store;
    pcStack_68 = sym.set_group_store;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    iStack_7c = 0;
    iStack_84 = 0;
    iStack_80 = 0;
    uStack_90 = 0;
    iVar12 = *(*(iVar4 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar11;
    piStack_50 = unaff_x20;
    piStack_48 = arg3;
    if (*(iVar12 + 0x60) < 0x100) {
        piVar9 = &iStack_7c;
        piVar8 = &iStack_80;
        iVar2 = sscanf(piVar6,"%d %d %d %lx",piVar9,piVar8,&iStack_84,&uStack_90);
        if (iVar2 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar12 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_7c < 5) && (iStack_80 <= *(iVar12 + 0x2c))) {
            *(*(iVar12 + 0x38) + *(iVar12 + 0x60) * 0x10) = iStack_7c * 0x60 + iStack_80 * 4 + iStack_84 * 0x1d8 + 0x74;
            *(*(iVar12 + 0x38) + *(iVar12 + 0x60) * 0x10 + 8) = uStack_90;
            *(iVar12 + 0x60) = *(iVar12 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar12 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
        piVar9 = piVar6;
        piVar8 = piVar7;
code_r0x080017f8:
        piVar7 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return piVar7;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_condition_store;
    pcStack_b8 = sym.set_condition_store;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    aiStack_d8[0] = 0;
    aiStack_d8[1] = 0;
    uStack_d0 = 0;
    iVar4 = *(*(iVar5 + 0x60) + 0x98);
    ppuStack_c0 = &puStack_70;
    iStack_b0 = iVar12;
    piStack_a0 = unaff_x20;
    piStack_98 = piVar7;
    if (*(iVar4 + 100) < 0x40) {
        piVar7 = aiStack_d8 + 1;
        piVar10 = aiStack_d8;
        iVar2 = sscanf(piVar9,"%d %d %lx",piVar7,piVar10,&uStack_d0);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar4 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar4 + 0x28) < aiStack_d8[1]) || (*(iVar4 + 0x24) < aiStack_d8[0])) {
            _dev_err(*(iVar4 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar4 + 0x40) + *(iVar4 + 100) * 0x10) = aiStack_d8[0] * 0x1d8 + aiStack_d8[1] * 4 + 0x50;
            *(*(iVar4 + 0x40) + *(iVar4 + 100) * 0x10 + 8) = uStack_d0;
            *(iVar4 + 100) = *(iVar4 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
        piVar7 = piVar9;
        piVar10 = piVar8;
code_r0x08001940:
        piVar8 = 0xffffffffffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_c8) {
        return piVar8;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_select_store;
    pcStack_108 = sym.set_select_store;
    iVar12 = sp_el0;
    iStack_118 = *(iVar12 + 0x5e0);
    aiStack_128[0] = 0;
    aiStack_128[1] = 0;
    uStack_120 = 0;
    iVar12 = *(*(iVar5 + 0x60) + 0x98);
    pppuStack_110 = &ppuStack_c0;
    iStack_100 = iVar4;
    piStack_f0 = unaff_x20;
    piStack_e8 = piVar8;
    if (*(iVar12 + 0x68) < 0x40) {
        piVar8 = aiStack_128 + 1;
        piVar9 = aiStack_128;
        iVar2 = sscanf(piVar7,"%d %d %lx",piVar8,piVar9,&uStack_120);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar12 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar12 + 0x28) < aiStack_128[1]) || (*(iVar12 + 0x24) < aiStack_128[0])) {
            _dev_err(*(iVar12 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar12 + 0x48) + *(iVar12 + 0x68) * 0x10) = aiStack_128[0] * 0x1d8 + aiStack_128[1] * 4 + 0x60;
            *(*(iVar12 + 0x48) + *(iVar12 + 0x68) * 0x10 + 8) = uStack_120;
            *(iVar12 + 0x68) = *(iVar12 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
        piVar8 = piVar7;
        piVar9 = piVar10;
code_r0x08001a88:
        piVar10 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_118) {
        return piVar10;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_timer_store;
    pcStack_158 = sym.set_timer_store;
    iVar4 = sp_el0;
    iStack_168 = *(iVar4 + 0x5e0);
    uStack_170 = 0;
    iStack_174 = 0;
    iVar4 = *(*(iVar5 + 0x60) + 0x98);
    ppppuStack_160 = &pppuStack_110;
    iStack_150 = iVar12;
    piStack_140 = unaff_x20;
    piStack_138 = piVar10;
    if (*(iVar4 + 0x6c) < 8) {
        piVar7 = &iStack_174;
        piVar10 = &uStack_170;
        iVar2 = sscanf(piVar8,"%d %lx",piVar7,piVar10);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar4 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar4 + 0x30) < iStack_174) {
            _dev_err(*(iVar4 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar4 + 0x50) + *(iVar4 + 0x6c) * 0x10) = iStack_174 * 0x1d8 + 0x40;
            *(*(iVar4 + 0x50) + *(iVar4 + 0x6c) * 0x10 + 8) = uStack_170;
            *(iVar4 + 0x6c) = *(iVar4 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
        piVar7 = piVar8;
        piVar10 = piVar9;
code_r0x08001bbc:
        piVar9 = 0xffffffffffffffea;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_168) {
        return piVar9;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_03 = sym.set_counter_store;
    pcStack_1a8 = sym.set_counter_store;
    iVar12 = sp_el0;
    iStack_1b8 = *(iVar12 + 0x5e0);
    uStack_1c0 = 0;
    iStack_1c4 = 0;
    iVar12 = *(*(iVar5 + 0x60) + 0x98);
    ppppuStack_1b0 = &ppppuStack_160;
    iStack_1a0 = iVar4;
    piStack_190 = unaff_x20;
    piStack_188 = piVar9;
    if (*(iVar12 + 0x70) < 8) {
        iVar2 = sscanf(piVar7,"%d %lx",&iStack_1c4,&uStack_1c0);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar12 + 0x20);
            if (*(iVar12 + 0x30) < iStack_1c4) {
                _dev_err(*(iVar12 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar12 + 0x58) + *(iVar12 + 0x70) * 0x10) = iStack_1c4 * 0x1d8 + 0x48;
                *(*(iVar12 + 0x58) + *(iVar12 + 0x70) * 0x10 + 8) = uStack_1c0;
                *(iVar12 + 0x70) = *(iVar12 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar12 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar12 + 8)," Too many groups are being configured\n");
    }
    piVar10 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_1b8) {
        auVar13 = __stack_chk_fail();
        piVar7 = auVar13._0_8_;
        *extraout_x18_04 = sym.__cfi_check_fail;
        if (piVar7 != NULL) {
            switch(*piVar7) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar7,auVar13._8_8_,0);
                break;
            default:
                return piVar7;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return piVar10;
}


// ===== sym.set_group_store @ 0x080016ec (size 348) =====

int * sym.set_group_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_184;
    ulong uStack_180;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_150;
    int *piStack_148;
    int iStack_134;
    ulong uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_100;
    int *piStack_f8;
    int aiStack_e8 [2];
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int *piStack_a8;
    int aiStack_98 [2];
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    int *piStack_58;
    ulong uStack_50;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_3c = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    uStack_50 = 0;
    iVar8 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar8 + 0x60) < 0x100) {
        piVar6 = &iStack_3c;
        piVar5 = &iStack_40;
        iVar2 = sscanf(arg2,"%d %d %d %lx",piVar6,piVar5,&iStack_44,&uStack_50);
        if (iVar2 != 4) goto code_r0x080017f8;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((iStack_3c < 5) && (iStack_40 <= *(iVar8 + 0x2c))) {
            *(*(iVar8 + 0x38) + *(iVar8 + 0x60) * 0x10) = iStack_3c * 0x60 + iStack_40 * 4 + iStack_44 * 0x1d8 + 0x74;
            *(*(iVar8 + 0x38) + *(iVar8 + 0x60) * 0x10 + 8) = uStack_50;
            *(iVar8 + 0x60) = *(iVar8 + 0x60) + 1;
        }
        else {
            _dev_err(*(iVar8 + 8),"Invalid group data\n");
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar6 = arg2;
        piVar5 = arg3;
code_r0x080017f8:
        arg3 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_condition_store;
    pcStack_78 = sym.set_condition_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    aiStack_98[0] = 0;
    aiStack_98[1] = 0;
    uStack_90 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    piStack_58 = arg3;
    if (*(iVar9 + 100) < 0x40) {
        piVar4 = aiStack_98 + 1;
        piVar7 = aiStack_98;
        iVar2 = sscanf(piVar6,"%d %d %lx",piVar4,piVar7,&uStack_90);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar9 + 0x28) < aiStack_98[1]) || (*(iVar9 + 0x24) < aiStack_98[0])) {
            _dev_err(*(iVar9 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar9 + 0x40) + *(iVar9 + 100) * 0x10) = aiStack_98[0] * 0x1d8 + aiStack_98[1] * 4 + 0x50;
            *(*(iVar9 + 0x40) + *(iVar9 + 100) * 0x10 + 8) = uStack_90;
            *(iVar9 + 100) = *(iVar9 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar4 = piVar6;
        piVar7 = piVar5;
code_r0x08001940:
        piVar5 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return piVar5;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_select_store;
    pcStack_c8 = sym.set_select_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    uStack_e0 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    piStack_a8 = piVar5;
    if (*(iVar8 + 0x68) < 0x40) {
        piVar5 = aiStack_e8 + 1;
        piVar6 = aiStack_e8;
        iVar2 = sscanf(piVar4,"%d %d %lx",piVar5,piVar6,&uStack_e0);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < aiStack_e8[1]) || (*(iVar8 + 0x24) < aiStack_e8[0])) {
            _dev_err(*(iVar8 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10) = aiStack_e8[0] * 0x1d8 + aiStack_e8[1] * 4 + 0x60;
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10 + 8) = uStack_e0;
            *(iVar8 + 0x68) = *(iVar8 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        piVar6 = piVar7;
code_r0x08001a88:
        piVar7 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return piVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_timer_store;
    pcStack_118 = sym.set_timer_store;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iStack_134 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    pppuStack_120 = &ppuStack_d0;
    iStack_110 = iVar8;
    iStack_100 = unaff_x20;
    piStack_f8 = piVar7;
    if (*(iVar9 + 0x6c) < 8) {
        piVar4 = &iStack_134;
        piVar7 = &uStack_130;
        iVar2 = sscanf(piVar5,"%d %lx",piVar4,piVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar9 + 0x30) < iStack_134) {
            _dev_err(*(iVar9 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10) = iStack_134 * 0x1d8 + 0x40;
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10 + 8) = uStack_130;
            *(iVar9 + 0x6c) = *(iVar9 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar4 = piVar5;
        piVar7 = piVar6;
code_r0x08001bbc:
        piVar6 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_128) {
        return piVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_02 = sym.set_counter_store;
    pcStack_168 = sym.set_counter_store;
    iVar8 = sp_el0;
    iStack_178 = *(iVar8 + 0x5e0);
    uStack_180 = 0;
    iStack_184 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppppuStack_170 = &pppuStack_120;
    iStack_160 = iVar9;
    iStack_150 = unaff_x20;
    piStack_148 = piVar6;
    if (*(iVar8 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_184,&uStack_180);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar8 + 0x20);
            if (*(iVar8 + 0x30) < iStack_184) {
                _dev_err(*(iVar8 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10) = iStack_184 * 0x1d8 + 0x48;
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10 + 8) = uStack_180;
                *(iVar8 + 0x70) = *(iVar8 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar8 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
    }
    piVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_178) {
        auVar10 = __stack_chk_fail();
        piVar5 = auVar10._0_8_;
        *extraout_x18_03 = sym.__cfi_check_fail;
        if (piVar5 != NULL) {
            switch(*piVar5) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x03':
            case '\x04':
                __ubsan_handle_cfi_check_fail_abort(piVar5,auVar10._8_8_,0);
                break;
            default:
                return piVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return piVar7;
}


// ===== sym.set_condition_store @ 0x08001848 (size 328) =====

ulong * sym.set_condition_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar6;
    ulong *puVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_134;
    ulong uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_100;
    ulong *puStack_f8;
    int iStack_e4;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    ulong *puStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar8 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar8 + 100) < 0x40) {
        piVar4 = &uStack_48 + 4;
        puVar7 = &uStack_48;
        iVar2 = sscanf(arg2,"%d %d %lx",piVar4,puVar7,&uStack_40);
        if (iVar2 != 3) goto code_r0x08001940;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < uStack_48._4_4_) || (*(iVar8 + 0x24) < uStack_48)) {
            _dev_err(*(iVar8 + 8),"Invalid condition decode data\n");
        }
        else {
            *(*(iVar8 + 0x40) + *(iVar8 + 100) * 0x10) = uStack_48 * 0x1d8 + uStack_48._4_4_ * 4 + 0x50;
            *(*(iVar8 + 0x40) + *(iVar8 + 100) * 0x10 + 8) = uStack_40;
            *(iVar8 + 100) = *(iVar8 + 100) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = arg2;
        puVar7 = arg3;
code_r0x08001940:
        arg3 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_select_store;
    pcStack_78 = sym.set_select_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    puStack_58 = arg3;
    if (*(iVar9 + 0x68) < 0x40) {
        piVar5 = &uStack_98 + 4;
        puVar6 = &uStack_98;
        iVar2 = sscanf(piVar4,"%d %d %lx",piVar5,puVar6,&uStack_90);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar9 + 0x28) < uStack_98._4_4_) || (*(iVar9 + 0x24) < uStack_98)) {
            _dev_err(*(iVar9 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar9 + 0x48) + *(iVar9 + 0x68) * 0x10) = uStack_98 * 0x1d8 + uStack_98._4_4_ * 4 + 0x60;
            *(*(iVar9 + 0x48) + *(iVar9 + 0x68) * 0x10 + 8) = uStack_90;
            *(iVar9 + 0x68) = *(iVar9 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        puVar6 = puVar7;
code_r0x08001a88:
        puVar7 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return puVar7;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_timer_store;
    pcStack_c8 = sym.set_timer_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uStack_e0 = 0;
    iStack_e4 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    puStack_a8 = puVar7;
    if (*(iVar8 + 0x6c) < 8) {
        piVar4 = &iStack_e4;
        puVar7 = &uStack_e0;
        iVar2 = sscanf(piVar5,"%d %lx",piVar4,puVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar8 + 0x30) < iStack_e4) {
            _dev_err(*(iVar8 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar8 + 0x50) + *(iVar8 + 0x6c) * 0x10) = iStack_e4 * 0x1d8 + 0x40;
            *(*(iVar8 + 0x50) + *(iVar8 + 0x6c) * 0x10 + 8) = uStack_e0;
            *(iVar8 + 0x6c) = *(iVar8 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = piVar5;
        puVar7 = puVar6;
code_r0x08001bbc:
        puVar6 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return puVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_01 = sym.set_counter_store;
    pcStack_118 = sym.set_counter_store;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    uStack_130 = 0;
    iStack_134 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    pppuStack_120 = &ppuStack_d0;
    iStack_110 = iVar8;
    iStack_100 = unaff_x20;
    puStack_f8 = puVar6;
    if (*(iVar9 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_134,&uStack_130);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar9 + 0x20);
            if (*(iVar9 + 0x30) < iStack_134) {
                _dev_err(*(iVar9 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar9 + 0x58) + *(iVar9 + 0x70) * 0x10) = iStack_134 * 0x1d8 + 0x48;
                *(*(iVar9 + 0x58) + *(iVar9 + 0x70) * 0x10 + 8) = uStack_130;
                *(iVar9 + 0x70) = *(iVar9 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar9 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
    }
    puVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_128) {
        auVar10 = __stack_chk_fail();
        puVar7 = auVar10._0_8_;
        *extraout_x18_02 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar10._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar7;
}


// ===== sym.set_select_store @ 0x08001990 (size 328) =====

ulong * sym.set_select_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar6;
    ulong *puVar7;
    int64_t unaff_x20;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_e4;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    ulong *puStack_a8;
    int iStack_94;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar8 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar8 + 0x68) < 0x40) {
        piVar4 = &uStack_48 + 4;
        puVar6 = &uStack_48;
        iVar2 = sscanf(arg2,"%d %d %lx",piVar4,puVar6,&uStack_40);
        if (iVar2 != 3) goto code_r0x08001a88;
        unaff_x20 = iVar8 + 0x20;
        _raw_spin_lock(unaff_x20);
        if ((*(iVar8 + 0x28) < uStack_48._4_4_) || (*(iVar8 + 0x24) < uStack_48)) {
            _dev_err(*(iVar8 + 8),"Invalid select decode data\n");
        }
        else {
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10) = uStack_48 * 0x1d8 + uStack_48._4_4_ * 4 + 0x60;
            *(*(iVar8 + 0x48) + *(iVar8 + 0x68) * 0x10 + 8) = uStack_40;
            *(iVar8 + 0x68) = *(iVar8 + 0x68) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
        piVar4 = arg2;
        puVar6 = arg3;
code_r0x08001a88:
        arg3 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_timer_store;
    pcStack_78 = sym.set_timer_store;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_90 = 0;
    iStack_94 = 0;
    iVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar8;
    iStack_60 = unaff_x20;
    puStack_58 = arg3;
    if (*(iVar9 + 0x6c) < 8) {
        piVar5 = &iStack_94;
        puVar7 = &uStack_90;
        iVar2 = sscanf(piVar4,"%d %lx",piVar5,puVar7);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar9 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar9 + 0x30) < iStack_94) {
            _dev_err(*(iVar9 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10) = iStack_94 * 0x1d8 + 0x40;
            *(*(iVar9 + 0x50) + *(iVar9 + 0x6c) * 0x10 + 8) = uStack_90;
            *(iVar9 + 0x6c) = *(iVar9 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar9 + 8)," Too many groups are being configured\n");
        piVar5 = piVar4;
        puVar7 = puVar6;
code_r0x08001bbc:
        puVar6 = 0xffffffffffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return puVar6;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.set_counter_store;
    pcStack_c8 = sym.set_counter_store;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uStack_e0 = 0;
    iStack_e4 = 0;
    iVar8 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_d0 = &puStack_80;
    iStack_c0 = iVar9;
    iStack_b0 = unaff_x20;
    puStack_a8 = puVar6;
    if (*(iVar8 + 0x70) < 8) {
        iVar2 = sscanf(piVar5,"%d %lx",&iStack_e4,&uStack_e0);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar8 + 0x20);
            if (*(iVar8 + 0x30) < iStack_e4) {
                _dev_err(*(iVar8 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10) = iStack_e4 * 0x1d8 + 0x48;
                *(*(iVar8 + 0x58) + *(iVar8 + 0x70) * 0x10 + 8) = uStack_e0;
                *(iVar8 + 0x70) = *(iVar8 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar8 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar8 + 8)," Too many groups are being configured\n");
    }
    puVar7 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_d8) {
        auVar10 = __stack_chk_fail();
        puVar6 = auVar10._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar10._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar7;
}


// ===== sym.set_timer_store @ 0x08001ad8 (size 308) =====

ulong * sym.set_timer_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar5;
    int64_t unaff_x20;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_94;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    ulong *puStack_58;
    int iStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    iStack_44 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar6 + 0x6c) < 8) {
        piVar4 = &iStack_44;
        puVar5 = &uStack_40;
        iVar2 = sscanf(arg2,"%d %lx",piVar4,puVar5);
        if (iVar2 != 2) goto code_r0x08001bbc;
        unaff_x20 = iVar6 + 0x20;
        _raw_spin_lock(unaff_x20);
        if (*(iVar6 + 0x30) < iStack_44) {
            _dev_err(*(iVar6 + 8),"Invalid TGU timer data\n");
        }
        else {
            *(*(iVar6 + 0x50) + *(iVar6 + 0x6c) * 0x10) = iStack_44 * 0x1d8 + 0x40;
            *(*(iVar6 + 0x50) + *(iVar6 + 0x6c) * 0x10 + 8) = uStack_40;
            *(iVar6 + 0x6c) = *(iVar6 + 0x6c) + 1;
        }
        _raw_spin_unlock(unaff_x20);
    }
    else {
        _dev_err(*(iVar6 + 8)," Too many groups are being configured\n");
        piVar4 = arg2;
        puVar5 = arg3;
code_r0x08001bbc:
        arg3 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.set_counter_store;
    pcStack_78 = sym.set_counter_store;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    uStack_90 = 0;
    iStack_94 = 0;
    iVar7 = *(*(iVar3 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar6;
    iStack_60 = unaff_x20;
    puStack_58 = arg3;
    if (*(iVar7 + 0x70) < 8) {
        iVar2 = sscanf(piVar4,"%d %lx",&iStack_94,&uStack_90);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar7 + 0x20);
            if (*(iVar7 + 0x30) < iStack_94) {
                _dev_err(*(iVar7 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10) = iStack_94 * 0x1d8 + 0x48;
                *(*(iVar7 + 0x58) + *(iVar7 + 0x70) * 0x10 + 8) = uStack_90;
                *(iVar7 + 0x70) = *(iVar7 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar7 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar7 + 8)," Too many groups are being configured\n");
    }
    puVar5 = 0xffffffffffffffea;
code_r0x08001cf4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_88) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return puVar5;
}


// ===== sym.set_counter_store @ 0x08001c0c (size 308) =====

uchar * sym.set_counter_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    int iStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iStack_44 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 0x70) < 8) {
        iVar2 = sscanf(arg2,"%d %lx",&iStack_44,&uStack_40);
        if (iVar2 == 2) {
            _raw_spin_lock(iVar4 + 0x20);
            if (*(iVar4 + 0x30) < iStack_44) {
                _dev_err(*(iVar4 + 8),"Invalid TGU counter data\n");
            }
            else {
                *(*(iVar4 + 0x58) + *(iVar4 + 0x70) * 0x10) = iStack_44 * 0x1d8 + 0x48;
                *(*(iVar4 + 0x58) + *(iVar4 + 0x70) * 0x10 + 8) = uStack_40;
                *(iVar4 + 0x70) = *(iVar4 + 0x70) + 1;
            }
            _raw_spin_unlock(iVar4 + 0x20);
            goto code_r0x08001cf4;
        }
    }
    else {
        _dev_err(*(iVar4 + 8)," Too many groups are being configured\n");
    }
    arg3 = -0x16;
code_r0x08001cf4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
        (*pcVar1)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08001d40 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d84

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
    //switch table (4 cases) at 0x80002a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d98);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001da4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tgu_driver);
    return;
}

