// decompiled from coresight-tpda by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x080024d8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x54930935f5088e63) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.trig_flag_ts_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt;
code_r0x08001144:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 9) {
                    return;
                }
                goto code_r0x08002498;
            }
            if (arg1 != -0x66c3af2d2c79087e) goto code_r0x08002498;
            pcVar2 = sym.tpda_disable.48ade3886444f202de304d6bf973dca5.cfi_jt;
        }
        else if (arg1 == -0x54930935f5088e63) {
            pcVar2 = sym.tpda_enable.48ade3886444f202de304d6bf973dca5.cfi_jt;
        }
        else {
            if (arg1 != -0x333e5f8f10676d42) goto code_r0x08002498;
            pcVar2 = sym.tpda_probe.48ade3886444f202de304d6bf973dca5.cfi_jt;
        }
    }
    else if (arg1 < 0x5ca94cbce5f388f2) {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08002498;
            pcVar2 = sym.freq_ts_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt;
            goto code_r0x08001144;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x5ca94cbce5f388f2) {
        pcVar2 = sym.tpda_remove.48ade3886444f202de304d6bf973dca5.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002498;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002498:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024ec);
    (*pcVar1)();
}


// ===== sym.tpda_enable.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.tpda_enable.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(param_1 + 0x98) + 0x98);
    mutex_lock(piVar6 + 3);
    *(*piVar6 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    if ((piVar6[9] == '\0') &&
       (**piVar6 = (*(piVar6 + 0x4c) & 0x3ffbfff) << 6 | **piVar6 & 0xffe00003 | *(piVar6 + 0x4a) << 5 |
                   *(piVar6 + 0x251) << 4 | *(piVar6 + 0x252) << 3 | *(piVar6 + 0x253) << 2 | *(piVar6 + 0x259) << 0x14
       , (**piVar6 >> 4 & 1) != 0)) {
        *(*piVar6 + 0x84) = 0;
    }
    iVar3 = param_2 * 4 + 4;
    uVar4 = *(*piVar6 + iVar3);
    if (param_2 < 0x20) {
        iVar5 = param_2;
        iVar1 = *(piVar6 + iVar5 * 4 + 0x50);
        if (iVar1 == 0x40) {
            uVar4 = uVar4 | 0x10;
        }
        else if (iVar1 == 0x20) {
            uVar4 = uVar4 & 0xffffffef;
        }
        iVar1 = *(piVar6 + iVar5 * 4 + 0xd0);
        if (iVar1 == 0x40) {
            uVar4 = uVar4 | 0x20;
        }
        else if (iVar1 == 0x20) {
            uVar4 = uVar4 & 0xffffffdf;
        }
        iVar1 = *(piVar6 + iVar5 * 4 + 0x150);
        if (iVar1 == 0x40) {
            uVar4 = uVar4 | 0x100;
        }
        else if (iVar1 == 0x20) {
            uVar4 = uVar4 & 0xfffffeff;
        }
        uVar4 = uVar4 & 0xffffff3f;
        iVar1 = *(piVar6 + iVar5 * 4 + 0x1d0);
        if (iVar1 == 0x40) {
            uVar4 = uVar4 | 0x80;
        }
        else if (iVar1 == 0x20) {
            uVar4 = uVar4 | 0x40;
        }
        *(*piVar6 + iVar3) = uVar4 & 0xfffffff1 | 10;
        *(*piVar6 + iVar3) = uVar4 & 0xfffffff1 | 0xb;
        if (piVar6[9] == '\0') {
            *(*piVar6 + 0x8c) = *(*piVar6 + 0x8c) & 0xffffe000 | 0xfff;
            if (*(piVar6 + 0x254) == 0) {
                *(*piVar6 + 0x88) = 0;
            }
            else {
                *(*piVar6 + 0x88) = *(piVar6 + 0x254);
            }
            **piVar6 = **piVar6 & 0xfffffffd | *(piVar6 + 0x4b) << 1;
        }
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
        *(piVar6 + 9) = 1;
        mutex_unlock(piVar6 + 3);
        _dev_info(piVar6[1],"TPDA inport %d enabled\n",param_2);
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001974);
    (*pcVar2)();
}


// ===== sym.tpda_disable.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011a0 (size 8) =====

void sym.tpda_disable.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x98) + 0x98);
    mutex_lock(piVar2 + 3);
    *(*piVar2 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    iVar1 = param_2 * 4 + 4;
    *(*piVar2 + iVar1) = *(*piVar2 + iVar1) & 0xfffffffe;
    DataSynchronizationBarrier(3,3,0);
    *(*piVar2 + 0xfb0) = 0;
    *(piVar2 + 9) = 0;
    mutex_unlock(piVar2 + 3);
    _dev_info(piVar2[1],"TPDA inport %d disabled\n",param_2);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tpda_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tpda_driver);
    return;
}


// ===== sym.tpda_remove.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011b8 (size 8) =====

void sym.tpda_remove.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0x98) + 0x10));
    return;
}


// ===== sym.tpda_probe.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.tpda_probe.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    code *pcStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    uStack_38 = 0;
    iStack_50 = 0;
    uStack_48 = 0;
    iStack_60 = 0;
    pcStack_58 = NULL;
    pcStack_70 = NULL;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iStack_50 = coresight_alloc_device_name(obj.tpda_devs,param_1);
    if (iStack_50 != 0) {
        uVar6 = coresight_get_platform_data(param_1);
        if (0xfffffffffffff000 < uVar6) goto code_r0x080015e8;
        *(param_1 + 0x90) = uVar6;
        piVar7 = devm_kmalloc(param_1,0x260,0xdc0);
        if (piVar7 != NULL) {
            piVar7[1] = param_1;
            *(param_1 + 0x98) = piVar7;
            iVar8 = devm_ioremap_resource(param_1,param_1 + 0x390);
            *piVar7 = iVar8;
            if (iVar8 != 0) {
                __mutex_init(piVar7 + 3,"&drvdata->lock",obj.tpda_probe.__key);
                iVar5 = of_property_read_variable_u32_array(*(piVar7[1] + 0x2f0),"qcom,tpda-atid",piVar7 + 0x4c,1,0)
                ;
                if (iVar5 < 0) {
                    iVar8 = piVar7[1];
                    pcVar11 = "TPDA ATID is not specified\n";
code_r0x0800169c:
                    _dev_err(iVar8,pcVar11);
                    uVar6 = 0xffffffea;
                }
                else {
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,tc-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset TC width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001630:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset TC width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for TC\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001630;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0xd0) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,bc-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset BC width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001648:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset BC width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for BC\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001648;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x50) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,dsb-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset DSB width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001670:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset DSB width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for DSB\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001670;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x150) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,cmb-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset CMB width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001688:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset CMB width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for CMB\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001688;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) {
code_r0x080016a8:
    //WARNING: Does not return
                                pcVar4 = SoftwareBreakpoint(0x5512,0x80016ac);
                                (*pcVar4)();
                            }
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x1d0) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    if (*piVar7 == 0) {
                        uVar6 = 0xffffffff;
                    }
                    else {
                        uVar9 = sym.readl_relaxed(*piVar7 + 0xfb8);
                        uVar6 = 0xffffffff;
                        if (((((uVar9 & 3) != 2) && ((uVar9 & 0xc) != 8)) && ((uVar9 & 0x30) != 0x20)) &&
                           ((uVar9 & 0xc0) != 0x80)) {
                            uStack_68 = *(param_1 + 0x90);
                            *(piVar7 + 0x253) = 1;
                            uStack_78 = CONCAT44(uStack_78._4_4_,1);
                            uStack_80 = CONCAT44(uStack_80._4_4_,2);
                            pcStack_70 = obj.tpda_cs_ops;
                            pcStack_58 = obj.tpda_attr_grps;
                            iStack_60 = param_1;
                            uVar6 = coresight_register(&uStack_80);
                            piVar7[2] = uVar6;
                            if (uVar6 < 0xfffffffffffff001) {
                                __pm_runtime_idle(param_1,5);
                                uVar6 = 0;
                            }
                        }
                    }
                }
                goto code_r0x080015e8;
            }
        }
    }
    uVar6 = 0xfffffff4;
code_r0x080015e8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_28) {
        puVar10 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,puVar10,0x80016b4);
        uVar1 = *puVar10;
        log_post_read_mmio(uVar1,0x20,puVar10,0x80016e8);
        return uVar1;
    }
    return uVar6;
}


// ===== sym.trig_flag_ts_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011c8 (size 8) =====

int64_t sym.trig_flag_ts_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 0x251));
    return iVar1;
}


// ===== sym.trig_freq_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011d0 (size 8) =====

int64_t sym.trig_freq_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 0x252));
    return iVar1;
}


// ===== sym.freq_req_val_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011d8 (size 8) =====

int64_t sym.freq_req_val_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0x254));
    return iVar1;
}


// ===== sym.port_flush_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011e0 (size 8) =====

int64_t sym.port_flush_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    piVar1 = piVar5 + 3;
    mutex_lock(piVar1);
    if (piVar5[9] == '\0') {
        mutex_unlock(piVar1);
        iVar4 = -1;
    }
    else {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar2 = *(*piVar5 + 0x90);
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
        mutex_unlock(piVar1);
        iVar3 = scnprintf(param_3,0x1000,0x80003c0,uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.global_flush_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011e8 (size 8) =====

int64_t sym.global_flush_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    piVar1 = piVar5 + 3;
    mutex_lock(piVar1);
    if (piVar5[9] == '\0') {
        mutex_unlock(piVar1);
        iVar4 = -1;
    }
    else {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar2 = **piVar5;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
        mutex_unlock(piVar1);
        iVar3 = scnprintf(param_3,0x1000,0x80003c0,uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.trig_async_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011f0 (size 8) =====

int64_t sym.trig_async_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 0x250));
    return iVar1;
}


// ===== sym.freq_ts_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x080011f8 (size 8) =====

int64_t sym.freq_ts_enable_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 0x253));
    return iVar1;
}


// ===== sym.freq_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001200 (size 8) =====

int64_t sym.freq_req_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 600));
    return iVar1;
}


// ===== sym.cmbchan_mode_show.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.cmbchan_mode_show.48ade3886444f202de304d6bf973dca5.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003d4,*(*(*(param_1 + 0x60) + 0x98) + 0x259));
    return iVar1;
}


// ===== sym.freq_ts_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001210 (size 8) =====

int64_t sym.freq_ts_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt
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
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x253) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_req_val_show;
    iVar2 = scnprintf(piVar3,0x1000,"%#lx\n",*(*(*(iVar4 + 0x60) + 0x98) + 0x254));
    return iVar2;
}


// ===== sym.freq_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001218 (size 8) =====

int64_t sym.freq_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint uVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar4 == 0) {
        iVar1 = iVar6 + 0x18;
        mutex_lock(iVar1);
        *(iVar6 + 600) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.global_flush_req_show;
    piVar7 = *(*(iVar6 + 0x60) + 0x98);
    piVar2 = piVar7 + 3;
    mutex_lock(piVar2);
    if (piVar7[9] == '\0') {
        mutex_unlock(piVar2);
        iVar6 = -1;
    }
    else {
        *(*piVar7 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar3 = **piVar7;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar7 + 0xfb0) = 0;
        mutex_unlock(piVar2);
        iVar4 = scnprintf(piVar5,0x1000,0x80003c0,uVar3);
        iVar6 = iVar4;
    }
    return iVar6;
}


// ===== sym.cmbchan_mode_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001220 (size 8) =====

uchar * sym.cmbchan_mode_store.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    auStack_3c[0] = 0;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtobool(param_3,auStack_3c);
    if (iVar3 == 0) {
        iVar1 = iVar5 + 0x18;
        mutex_lock(iVar1);
        *(iVar5 + 0x259) = auStack_3c[0];
        mutex_unlock(iVar1);
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80024ec);
        (*pcVar2)();
    }
    return param_4;
}


// ===== sym.trig_async_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001228 (size 8) =====

int64_t sym.trig_async_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt
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
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x250) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trig_flag_ts_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x251));
    return iVar2;
}


// ===== sym.trig_flag_ts_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001230 (size 8) =====

int64_t sym.trig_flag_ts_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt
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
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x251) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trig_freq_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x252));
    return iVar2;
}


// ===== sym.trig_freq_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001238 (size 8) =====

int64_t sym.trig_freq_enable_store.48ade3886444f202de304d6bf973dca5.cfi_jt
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
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x252) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_ts_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x253));
    return iVar2;
}


// ===== sym.port_flush_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001240 (size 8) =====

int64_t sym.port_flush_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        mutex_lock(piVar4 + 3);
        if (piVar4[9] == '\0') {
            param_4 = -1;
        }
        else if (iStack_40 != 0) {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0x90) = iStack_40;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 3);
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.cmbchan_mode_show;
    iVar1 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar2 + 0x60) + 0x98) + 0x259));
    return iVar1;
}


// ===== sym.freq_req_val_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001248 (size 8) =====

int64_t sym.freq_req_val_store.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x254) = uStack_40;
        mutex_unlock(iVar1);
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_req_show;
    iVar2 = scnprintf(puVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 600));
    return iVar2;
}


// ===== sym.global_flush_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt @ 0x08001250 (size 8) =====

int64_t sym.global_flush_req_store.48ade3886444f202de304d6bf973dca5.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        mutex_lock(piVar5 + 3);
        if (piVar5[9] == '\0') {
            param_4 = -1;
        }
        else if (uStack_40 != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uStack_40 = **piVar5 | 1;
            **piVar5 = **piVar5 | 1;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        mutex_unlock(piVar5 + 3);
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x80021e8;
    piVar6 = *(*(iVar3 + 0x60) + 0x98);
    piVar5 = piVar6 + 3;
    mutex_lock(piVar5);
    if (piVar6[9] == '\0') {
        mutex_unlock(piVar5);
        iVar3 = -1;
    }
    else {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*piVar6 + 0x90);
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
        mutex_unlock(piVar5);
        iVar2 = scnprintf(puVar4,0x1000,0x80003c0,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tpda_probe @ 0x08001258 (size 1112) =====

uint64_t sym.tpda_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    code *pcStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    uStack_38 = 0;
    iStack_50 = 0;
    uStack_48 = 0;
    iStack_60 = 0;
    pcStack_58 = NULL;
    pcStack_70 = NULL;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    iStack_50 = coresight_alloc_device_name(obj.tpda_devs,arg1);
    if (iStack_50 != 0) {
        uVar6 = coresight_get_platform_data(arg1);
        if (0xfffffffffffff000 < uVar6) goto code_r0x080015e8;
        *(arg1 + 0x90) = uVar6;
        piVar7 = devm_kmalloc(arg1,0x260,0xdc0);
        if (piVar7 != NULL) {
            piVar7[1] = arg1;
            *(arg1 + 0x98) = piVar7;
            iVar8 = devm_ioremap_resource(arg1,arg1 + 0x390);
            *piVar7 = iVar8;
            if (iVar8 != 0) {
                __mutex_init(piVar7 + 3,"&drvdata->lock",obj.tpda_probe.__key);
                iVar5 = of_property_read_variable_u32_array(*(piVar7[1] + 0x2f0),"qcom,tpda-atid",piVar7 + 0x4c,1,0)
                ;
                if (iVar5 < 0) {
                    iVar8 = piVar7[1];
                    pcVar11 = "TPDA ATID is not specified\n";
code_r0x0800169c:
                    _dev_err(iVar8,pcVar11);
                    uVar6 = 0xffffffea;
                }
                else {
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,tc-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset TC width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001630:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset TC width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for TC\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001630;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0xd0) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,bc-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset BC width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001648:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset BC width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for BC\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001648;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x50) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,dsb-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset DSB width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001670:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset DSB width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for DSB\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001670;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) goto code_r0x080016a8;
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x150) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    uStack_2c = 0;
                    iVar8 = of_get_property(*(piVar7[1] + 0x2f0),"qcom,cmb-elem-size",&uStack_2c);
                    if (iVar8 != 0) {
                        pcVar11 = "Dataset CMB width entries are wrong\n";
                        uVar1 = uStack_2c >> 2;
                        if ((0xf7 < uStack_2c - 8) || ((uStack_2c >> 2 & 1) != 0)) {
code_r0x08001688:
                            uStack_2c = uVar1;
                            _dev_err(piVar7[1],pcVar11);
                            iVar8 = piVar7[1];
                            pcVar11 = "Dataset CMB width entries are wrong\n";
                            goto code_r0x0800169c;
                        }
                        iVar12 = 0;
                        pcVar11 = "Wrong port specified for CMB\n";
                        do {
                            uVar2 = *(iVar8 + iVar12 * 4);
                            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
                            if (0x1f < uVar2) goto code_r0x08001688;
                            uStack_2c = uVar1;
                            if (0x1f < uVar2) {
code_r0x080016a8:
    //WARNING: Does not return
                                pcVar4 = SoftwareBreakpoint(0x5512,0x80016ac);
                                (*pcVar4)();
                            }
                            uVar3 = *(iVar8 + 4 + iVar12 * 4);
                            iVar12 = iVar12 + 2;
                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                            *(piVar7 + uVar2 * 4 + 0x1d0) = uVar3 >> 0x10 | uVar3 << 0x10;
                        } while (iVar12 < uVar1);
                    }
                    if (*piVar7 == 0) {
                        uVar6 = 0xffffffff;
                    }
                    else {
                        uVar9 = sym.readl_relaxed(*piVar7 + 0xfb8);
                        uVar6 = 0xffffffff;
                        if (((((uVar9 & 3) != 2) && ((uVar9 & 0xc) != 8)) && ((uVar9 & 0x30) != 0x20)) &&
                           ((uVar9 & 0xc0) != 0x80)) {
                            uStack_68 = *(arg1 + 0x90);
                            *(piVar7 + 0x253) = 1;
                            uStack_78 = CONCAT44(uStack_78._4_4_,1);
                            uStack_80 = CONCAT44(uStack_80._4_4_,2);
                            pcStack_70 = obj.tpda_cs_ops;
                            pcStack_58 = obj.tpda_attr_grps;
                            iStack_60 = arg1;
                            uVar6 = coresight_register(&uStack_80);
                            piVar7[2] = uVar6;
                            if (uVar6 < 0xfffffffffffff001) {
                                __pm_runtime_idle(arg1,5);
                                uVar6 = 0;
                            }
                        }
                    }
                }
                goto code_r0x080015e8;
            }
        }
    }
    uVar6 = 0xfffffff4;
code_r0x080015e8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_28) {
        puVar10 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,puVar10,0x80016b4);
        uVar1 = *puVar10;
        log_post_read_mmio(uVar1,0x20,puVar10,0x80016e8);
        return uVar1;
    }
    return uVar6;
}


// ===== sym.readl_relaxed @ 0x080016b0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80016b4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80016e8);
    return uVar1;
}


// ===== sym.tpda_enable @ 0x08001720 (size 596) =====

ulong sym.tpda_enable(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2;
    piVar7 = *(*(arg1 + 0x98) + 0x98);
    mutex_lock(piVar7 + 3);
    *(*piVar7 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    if ((piVar7[9] == '\0') &&
       (**piVar7 = (*(piVar7 + 0x4c) & 0x3ffbfff) << 6 | **piVar7 & 0xffe00003 | *(piVar7 + 0x4a) << 5 |
                   *(piVar7 + 0x251) << 4 | *(piVar7 + 0x252) << 3 | *(piVar7 + 0x253) << 2 | *(piVar7 + 0x259) << 0x14
       , (**piVar7 >> 4 & 1) != 0)) {
        *(*piVar7 + 0x84) = 0;
    }
    iVar4 = uVar2 * 4 + 4;
    uVar5 = *(*piVar7 + iVar4);
    if (uVar2 < 0x20) {
        iVar6 = uVar2;
        iVar1 = *(piVar7 + iVar6 * 4 + 0x50);
        if (iVar1 == 0x40) {
            uVar5 = uVar5 | 0x10;
        }
        else if (iVar1 == 0x20) {
            uVar5 = uVar5 & 0xffffffef;
        }
        iVar1 = *(piVar7 + iVar6 * 4 + 0xd0);
        if (iVar1 == 0x40) {
            uVar5 = uVar5 | 0x20;
        }
        else if (iVar1 == 0x20) {
            uVar5 = uVar5 & 0xffffffdf;
        }
        iVar1 = *(piVar7 + iVar6 * 4 + 0x150);
        if (iVar1 == 0x40) {
            uVar5 = uVar5 | 0x100;
        }
        else if (iVar1 == 0x20) {
            uVar5 = uVar5 & 0xfffffeff;
        }
        uVar5 = uVar5 & 0xffffff3f;
        iVar1 = *(piVar7 + iVar6 * 4 + 0x1d0);
        if (iVar1 == 0x40) {
            uVar5 = uVar5 | 0x80;
        }
        else if (iVar1 == 0x20) {
            uVar5 = uVar5 | 0x40;
        }
        *(*piVar7 + iVar4) = uVar5 & 0xfffffff1 | 10;
        *(*piVar7 + iVar4) = uVar5 & 0xfffffff1 | 0xb;
        if (piVar7[9] == '\0') {
            *(*piVar7 + 0x8c) = *(*piVar7 + 0x8c) & 0xffffe000 | 0xfff;
            if (*(piVar7 + 0x254) == 0) {
                *(*piVar7 + 0x88) = 0;
            }
            else {
                *(*piVar7 + 0x88) = *(piVar7 + 0x254);
            }
            **piVar7 = **piVar7 & 0xfffffffd | *(piVar7 + 0x4b) << 1;
        }
        DataSynchronizationBarrier(3,3,0);
        *(*piVar7 + 0xfb0) = 0;
        *(piVar7 + 9) = 1;
        mutex_unlock(piVar7 + 3);
        _dev_info(piVar7[1],"TPDA inport %d enabled\n",arg2 & 0xffffffff);
        return 0;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001974);
    (*pcVar3)();
}


// ===== sym.tpda_disable @ 0x08001988 (size 188) =====

void sym.tpda_disable(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x98) + 0x98);
    mutex_lock(piVar2 + 3);
    *(*piVar2 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    iVar1 = arg2 * 4 + 4;
    *(*piVar2 + iVar1) = *(*piVar2 + iVar1) & 0xfffffffe;
    DataSynchronizationBarrier(3,3,0);
    *(*piVar2 + 0xfb0) = 0;
    *(piVar2 + 9) = 0;
    mutex_unlock(piVar2 + 3);
    _dev_info(piVar2[1],"TPDA inport %d disabled\n",arg2 & 0xffffffff);
    return;
}


// ===== sym.trig_async_enable_show @ 0x08001a48 (size 72) =====

int64_t sym.trig_async_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 0x250));
    return iVar1;
}


// ===== sym.trig_async_enable_store @ 0x08001a90 (size 180) =====

int64_t sym.trig_async_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

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
    iVar2 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x250) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trig_flag_ts_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x251));
    return iVar2;
}


// ===== sym.trig_flag_ts_enable_show @ 0x08001b44 (size 72) =====

int64_t sym.trig_flag_ts_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 0x251));
    return iVar1;
}


// ===== sym.trig_flag_ts_enable_store @ 0x08001b8c (size 180) =====

int64_t sym.trig_flag_ts_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

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
    iVar2 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x251) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.trig_freq_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x252));
    return iVar2;
}


// ===== sym.trig_freq_enable_show @ 0x08001c40 (size 72) =====

int64_t sym.trig_freq_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 0x252));
    return iVar1;
}


// ===== sym.trig_freq_enable_store @ 0x08001c88 (size 180) =====

int64_t sym.trig_freq_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

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
    iVar2 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x252) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_ts_enable_show;
    iVar2 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 0x253));
    return iVar2;
}


// ===== sym.freq_ts_enable_show @ 0x08001d3c (size 72) =====

int64_t sym.freq_ts_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 0x253));
    return iVar1;
}


// ===== sym.freq_ts_enable_store @ 0x08001d84 (size 180) =====

int64_t sym.freq_ts_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

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
    iVar2 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x253) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_req_val_show;
    iVar2 = scnprintf(piVar3,0x1000,"%#lx\n",*(*(*(iVar4 + 0x60) + 0x98) + 0x254));
    return iVar2;
}


// ===== sym.freq_req_val_show @ 0x08001e38 (size 72) =====

int64_t sym.freq_req_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0x254));
    return iVar1;
}


// ===== sym.freq_req_val_store @ 0x08001e80 (size 172) =====

int64_t sym.freq_req_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar2 == 0) {
        iVar1 = iVar4 + 0x18;
        mutex_lock(iVar1);
        *(iVar4 + 0x254) = uStack_40;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.freq_req_show;
    iVar2 = scnprintf(puVar3,0x1000,0x80003d4,*(*(*(iVar4 + 0x60) + 0x98) + 600));
    return iVar2;
}


// ===== sym.freq_req_show @ 0x08001f2c (size 72) =====

int64_t sym.freq_req_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 600));
    return iVar1;
}


// ===== sym.freq_req_store @ 0x08001f74 (size 180) =====

int64_t sym.freq_req_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint uVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_40 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar4 == 0) {
        iVar1 = iVar6 + 0x18;
        mutex_lock(iVar1);
        *(iVar6 + 600) = iStack_40 != 0;
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.global_flush_req_show;
    piVar7 = *(*(iVar6 + 0x60) + 0x98);
    piVar2 = piVar7 + 3;
    mutex_lock(piVar2);
    if (piVar7[9] == '\0') {
        mutex_unlock(piVar2);
        iVar6 = -1;
    }
    else {
        *(*piVar7 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar3 = **piVar7;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar7 + 0xfb0) = 0;
        mutex_unlock(piVar2);
        iVar4 = scnprintf(piVar5,0x1000,0x80003c0,uVar3);
        iVar6 = iVar4;
    }
    return iVar6;
}


// ===== sym.global_flush_req_show @ 0x08002028 (size 188) =====

int64_t sym.global_flush_req_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    piVar1 = piVar5 + 3;
    mutex_lock(piVar1);
    if (piVar5[9] == '\0') {
        mutex_unlock(piVar1);
        iVar4 = -1;
    }
    else {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar2 = **piVar5;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
        mutex_unlock(piVar1);
        iVar3 = scnprintf(arg2,0x1000,0x80003c0,uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.global_flush_req_store @ 0x080020e8 (size 260) =====

int64_t sym.global_flush_req_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar4 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar2 == 0) {
        mutex_lock(piVar5 + 3);
        if (piVar5[9] == '\0') {
            arg3 = -1;
        }
        else if (uStack_40 != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uStack_40 = **piVar5 | 1;
            **piVar5 = **piVar5 | 1;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        mutex_unlock(piVar5 + 3);
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x80021e8;
    piVar6 = *(*(iVar3 + 0x60) + 0x98);
    piVar5 = piVar6 + 3;
    mutex_lock(piVar5);
    if (piVar6[9] == '\0') {
        mutex_unlock(piVar5);
        iVar3 = -1;
    }
    else {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*piVar6 + 0x90);
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
        mutex_unlock(piVar5);
        iVar2 = scnprintf(puVar4,0x1000,0x80003c0,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.port_flush_req_show @ 0x080021ec (size 192) =====

int64_t sym.port_flush_req_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    piVar1 = piVar5 + 3;
    mutex_lock(piVar1);
    if (piVar5[9] == '\0') {
        mutex_unlock(piVar1);
        iVar4 = -1;
    }
    else {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar2 = *(*piVar5 + 0x90);
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
        mutex_unlock(piVar1);
        iVar3 = scnprintf(arg2,0x1000,0x80003c0,uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.port_flush_req_store @ 0x080022b0 (size 248) =====

int64_t sym.port_flush_req_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar3 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        mutex_lock(piVar4 + 3);
        if (piVar4[9] == '\0') {
            arg3 = -1;
        }
        else if (iStack_40 != 0) {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0x90) = iStack_40;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 3);
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.cmbchan_mode_show;
    iVar1 = scnprintf(piVar3,0x1000,0x80003d4,*(*(*(iVar2 + 0x60) + 0x98) + 0x259));
    return iVar1;
}


// ===== sym.cmbchan_mode_show @ 0x080023a8 (size 72) =====

int64_t sym.cmbchan_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003d4,*(*(*(arg1 + 0x60) + 0x98) + 0x259));
    return iVar1;
}


// ===== sym.cmbchan_mode_store @ 0x080023f0 (size 164) =====

uchar * sym.cmbchan_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    auStack_3c[0] = 0;
    iVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtobool(arg2,auStack_3c);
    if (iVar3 == 0) {
        iVar1 = iVar5 + 0x18;
        mutex_lock(iVar1);
        *(iVar5 + 0x259) = auStack_3c[0];
        mutex_unlock(iVar1);
    }
    else {
        arg3 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80024ec);
        (*pcVar2)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08002494 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080024d8

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
    //switch table (4 cases) at 0x8000370
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024ec);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080024f4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tpda_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08002520 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tpda_driver);
    return;
}


// ===== sym.tpda_remove @ 0x0800254c (size 44) =====

void sym.tpda_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0x98) + 0x10));
    return;
}

