// decompiled from qce50_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 756) =====

//WARNING: Switch with 1 destination removed at 0x08012700

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xe71c4f033c2cdba) {
        if (arg1 < -0x3c754d275428e5d1) {
            if (arg1 == -0x76117a64b2d961c2) {
                pcVar2 = sym._sps_producer_callback.690bdae42169b8376f8634d9b6b718d8.cfi_jt;
            }
            else {
                if (arg1 != -0x4cf7b05dd3ce5bc0) {
                    if ((arg1 == -0x42400db0dfb7a38a) && ((pcVar1 + -0x8003340 >> 3 | pcVar1 << 0x3d) < 2)) {
                        return;
                    }
                    goto code_r0x080126c0;
                }
                pcVar2 = sym.qce_hw_support.cfi_jt;
            }
        }
        else if (arg1 < -0x2abd93e1891368a2) {
            if (arg1 == -0x3c754d275428e5d1) {
                pcVar2 = sym.__typeid__ZTSFvPvPhS0_iE_global_addr;
            }
            else {
                if (arg1 != -0x2ee0710dce68437c) goto code_r0x080126c0;
                pcVar2 = sym.qce_multireq_timeout.690bdae42169b8376f8634d9b6b718d8.cfi_jt;
            }
        }
        else if (arg1 == -0x2abd93e1891368a2) {
            pcVar2 = sym.qce_f8_multi_pkt_req.cfi_jt;
        }
        else {
            if (arg1 != -0x108d340c9c6cc748) goto code_r0x080126c0;
            pcVar2 = sym.qce_process_sha_req.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x2b17460ce4bf82db) {
            if (arg1 == -0xe71c4f033c2cdba) {
                pcVar2 = sym.qce_manage_timeout.cfi_jt;
            }
            else {
                if (arg1 != 0x1c550463944885ae) goto code_r0x080126c0;
                pcVar2 = sym.qce_get_crypto_status.cfi_jt;
            }
        }
        else if (arg1 == 0x2b17460ce4bf82db) {
            pcVar2 = sym.qce_set_irqs.cfi_jt;
        }
        else {
            if (arg1 != 0x2ef501896f21542a) goto code_r0x080126c0;
            pcVar2 = sym.qce_f9_req.cfi_jt;
        }
    }
    else if (arg1 < 0x5b15a7292666fec0) {
        if (arg1 == 0x4c550309df1cf4c1) {
            if ((pcVar1 + -0x8003360 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080126c0;
        }
        if (arg1 != 0x503d660845e69cb1) goto code_r0x080126c0;
        pcVar2 = sym.qce_open.cfi_jt;
    }
    else {
        if (arg1 != 0x5b15a7292666fec0) {
            if ((arg1 == 0x641d19c7be126e92) && ((pcVar1 + -0x8003388 >> 3 | pcVar1 << 0x3d) < 5)) {
                return;
            }
            goto code_r0x080126c0;
        }
        pcVar2 = sym.qce_f8_req.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080126c0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012714);
    (*pcVar1)();
}


// ===== sym.qce_get_crypto_status.cfi_jt @ 0x08003300 (size 8) =====

void sym.qce_get_crypto_status.cfi_jt(int64_t param_1,uchar *param_2)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    uint32_t uVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a100);
    uVar2 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a104);
    uVar3 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a11c);
    uVar4 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a124);
    uVar5 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a128);
    uVar6 = sym.readl_relaxed(*(param_1 + 0x48) + 0x1a13c);
    if ((uVar1 & 0xfffffffd) == 0x2000004) {
        pcVar8 = "qce_get_crypto_status";
        uVar7 = 0x8000c27;
        *param_2 = 1;
        uVar6 = uVar1;
        goto code_r0x080035e8;
    }
    if (*(param_1 + 0x174) < 8) {
        if ((uVar3 & 0xff00) == 0 && (uVar6 & 0x300) == 0) {
            if ((uVar3 >> 0x18 == 0) && ((uVar6 & 0x3000000) == 0)) goto code_r0x080034d4;
            uVar7 = 0x800122a;
            param_2[2] = 1;
        }
        else {
            uVar7 = 0x80020c2;
            param_2[1] = 1;
        }
        _printk(uVar7,"qce_get_crypto_status","qce_get_crypto_status");
    }
    else {
        if ((uVar3 >> 4 & 1) == 0) {
            if ((uVar3 >> 0xc & 1) == 0) {
code_r0x080034d4:
                _printk(0x8001576,"qce_get_crypto_status","qce_get_crypto_status");
                param_2[3] = 1;
                goto code_r0x08003554;
            }
            uVar7 = 0x8000ba1;
            param_2[2] = 1;
        }
        else {
            uVar7 = 0x8002174;
            param_2[1] = 1;
        }
        _printk(uVar7,"qce_get_crypto_status","qce_get_crypto_status",uVar3 >> 0x10);
    }
code_r0x08003554:
    pcVar8 = "dump_status_regs";
    _printk(0x800148f,"dump_status_regs","dump_status_regs",uVar1);
    _printk(0x8001716,"dump_status_regs","dump_status_regs",uVar2);
    _printk(0x800125d,"dump_status_regs","dump_status_regs",uVar3);
    _printk(0x8001e24,"dump_status_regs","dump_status_regs",uVar4);
    _printk(0x80016b0,"dump_status_regs","dump_status_regs",uVar5);
    uVar7 = 0x8001bf6;
code_r0x080035e8:
    _printk(uVar7,pcVar8,pcVar8,uVar6);
    return;
}


// ===== sym.qce_multireq_timeout.690bdae42169b8376f8634d9b6b718d8.cfi_jt @ 0x08003308 (size 8) =====

void sym.qce_multireq_timeout.690bdae42169b8376f8634d9b6b718d8.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x194);
    if ((iVar7 == 0) || (iVar7 != *(param_1 + 0x198))) {
        *(param_1 + 0x198) = iVar7;
code_r0x0800d320:
        mod_timer(param_1,__printk + 5);
        return;
    }
    uVar5 = daif;
    if ((uVar5 & 0x80) == 0) {
        uVar6 = daif;
        daif = uVar6 | 0xc0;
    }
    piVar1 = param_1 + -0xc;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar7 = *piVar1;
        if (iVar7 != 0) goto code_r0x0800d358;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = 2;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
code_r0x0800d358:
    if (iVar7 != 0) {
        daif = uVar5;
        goto code_r0x0800d320;
    }
    piVar2 = param_1 + -0x1c08;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
            *piVar2 = 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar7 == 0) {
        iVar7 = sym.qce_process_sha_req(param_1 + -0x10308,0);
        *(param_1 + 0x188) = *(param_1 + 0x188) + 1;
        if (iVar7 == 0) goto code_r0x0800d3a4;
    }
    _printk(0x8001c44,"qce_multireq_timeout",*(param_1 + 0x180));
code_r0x0800d3a4:
    Hint_Prefetch(piVar1,2,0,1);
    do {
        if (*piVar1 != 2) goto code_r0x0800d3c4;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = 0;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
code_r0x0800d3c4:
    *(param_1 + 0x178) = 0;
    daif = uVar5;
    del_timer(param_1);
    *(param_1 + 0x184) = *(param_1 + 0x184) + 1;
    return;
}


// ===== sym.qce_open.cfi_jt @ 0x08003310 (size 8) =====

int64_t * sym.qce_open.cfi_jt(code *param_1,int *param_2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int *piVar15;
    ulong *puVar16;
    uint *puVar17;
    int64_t *arg1;
    uint64_t uVar18;
    ulong uVar19;
    code *pcVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t iVar24;
    char *pcVar25;
    int iVar26;
    uint32_t *puVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *unaff_x21;
    int64_t iVar28;
    uint32_t *unaff_x23;
    code *unaff_x24;
    int64_t iVar29;
    code *unaff_x25;
    int64_t *unaff_x26;
    code *unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    uint32_t *puStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    code *pcStack_150;
    code *pcStack_148;
    int64_t *piStack_140;
    code *pcStack_138;
    code *pcStack_130;
    uint32_t *puStack_128;
    code *pcStack_120;
    uint32_t *puStack_118;
    int *piStack_110;
    int64_t *piStack_108;
    ulong uStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar11 = kmalloc_order_trace(0x10500,0xdc0,5);
    if (piVar11 == NULL) {
        *param_2 = -0xc;
        _printk(0x800104a,"qce_open",0xfffffff4);
        goto code_r0x0800c404;
    }
    *piVar11 = param_1 + 0x10;
    mutex_lock(obj.qce_iomap_mutex);
    if (*(param_1 + 0x300) == 0) {
        *param_2 = -0x16;
        _printk(0x8002265,"qce_open");
    }
    else {
        unaff_x26 = piVar11 + 0x205f;
        unaff_x24 = param_1 + 0x300;
        iVar12 = of_find_property(*(param_1 + 0x300),"qcom,ce-hw-shared",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x3c) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,ce-hw-key",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x41) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-cbc-ecb-ctr-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x10) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aead-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x81) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-xts-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x82) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-ahash-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x83) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-hmac-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x84) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-ccm-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x85) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,clk-mgmt-sus-res",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x42) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,support-core-clk-only",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x43) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,request-bw-before-clk",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x44) = iVar12 != 0;
        *(piVar11 + 0x104ba) = 1;
        iVar7 = of_property_read_variable_u32_array(iVar13,"qcom,bam-pipe-pair",piVar11 + 0x134,1,0);
        if (iVar7 < 0) {
            _printk(0x8001ffb,"__qce_get_device_tree_data");
            *(piVar11 + 0x104ba) = 0;
            *(piVar11 + 0x134) = 2;
        }
        iVar12 = of_find_property(*unaff_x24,"qcom,offload-ops-support",0);
        if (iVar12 == 0) {
code_r0x0800bddc:
            iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-device",piVar11 + 0x25,1,0);
            if (iVar7 < 0) {
                unaff_x21 = 0xffffffea;
                uVar19 = 0x8001a31;
            }
            else {
                iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-hw-instance",piVar11 + 300,1,0);
                if (iVar7 < 0) {
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x800228a;
                }
                else {
                    unaff_x21 = piVar11 + 0x26;
                    iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,bam-ee",unaff_x21,1,0);
                    if (iVar7 < 0) {
                        _printk(0x8000d72,"__qce_get_device_tree_data");
                        *unaff_x21 = 1;
                    }
                    unaff_x23 = piVar11 + 0x7c;
                    iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-opp-freq",unaff_x23,1,0);
                    if (iVar7 < 0) {
                        _printk(0x80012c0,"__qce_get_device_tree_data");
                        *unaff_x23 = 100000000;
                    }
                    iVar12 = of_find_property(*unaff_x24,"qcom,smmu-s1-enable",0);
                    if (iVar12 != 0) {
                        *(piVar11 + 0x2097) = 1;
                    }
                    iVar12 = of_find_property(*(param_1 + 0x300),"qcom,no-clock-support",0);
                    *(piVar11 + 0x104b9) = iVar12 != 0;
                    *(piVar11 + 0x154) = *(piVar11 + 0x134) << 1;
                    *(piVar11 + 0x2b) = piVar11[0x27] << 1;
                    *(piVar11 + 0x144) = *(piVar11 + 0x134) << 1 | 1;
                    *(piVar11 + 0x29) = piVar11[0x27] << 1 | 1;
                    *(piVar11 + 0x15c) = *(piVar11 + 0x13c) << 1;
                    *(piVar11 + 0x14c) = *(piVar11 + 0x13c) << 1 | 1;
                    *(piVar11 + 0x2c) = piVar11[0x28] << 1;
                    *(piVar11 + 0x2a) = piVar11[0x28] << 1 | 1;
                    piVar14 = platform_get_resource_byname(param_1,0x200,"crypto-base");
                    if (piVar14 == NULL) {
                        unaff_x21 = 0xffffffed;
                        uVar19 = 0x800109e;
                    }
                    else {
                        unaff_x25 = _printk;
                        unaff_x24 = 0x68000000000713;
                        *(piVar11 + 10) = *piVar14;
                        pcVar20 = unaff_x24;
                        if (arm64_use_ng_mappings != 0x0) {
                            pcVar20 = 0x68000000000f13;
                        }
                        iVar12 = __ioremap(*piVar14,(piVar14[1] - *piVar14) + 1,pcVar20);
                        piVar11[9] = iVar12;
                        if (iVar12 != 0) {
                            piVar15 = platform_get_resource_byname(param_1,0x200,"crypto-bam-base");
                            if (piVar15 == NULL) {
                                _printk(0x80021e9,"__qce_get_device_tree_data");
                                unaff_x27 = NULL;
                                param_1 = 0xffffffed;
code_r0x0800c274:
                                if (piVar11[9] != 0) {
                                    iounmap();
                                }
                                *param_2 = param_1;
                                if (unaff_x27 == 0) goto code_r0x0800c3ec;
                            }
                            else {
                                *(piVar11 + 0x34) = *piVar15;
                                *(piVar11 + 7) = (piVar15[2] - *piVar15) + 1;
                                puVar16 = platform_get_resource(param_1,0x400,0);
                                if (puVar16 == NULL) {
                                    _printk(0x8000f29,"__qce_get_device_tree_data");
                                    if (piVar11[0x24] != 0) {
                                        iounmap();
                                    }
                                    param_1 = NULL;
                                    unaff_x27 = 0x1;
                                    goto code_r0x0800c274;
                                }
                                uVar19 = *puVar16;
                                *param_2 = 0;
                                *(piVar11 + 0x23) = uVar19;
                            }
                            if (piVar11[0x2097] != '\0') {
                                param_1 = *piVar11;
                                puVar17 = *(param_1 + 0x2c0);
                                if (puVar17 == NULL) {
                                    puVar17 = devm_kmalloc(param_1,0x10,0xdc0);
                                    *(param_1 + 0x2c0) = puVar17;
                                    if (puVar17 == NULL) {
                                        *param_2 = -5;
                                        goto code_r0x0800c3ec;
                                    }
                                }
                                *puVar17 = 0xffffffff;
                                if (*(param_1 + 0x2c0) != 0) {
                                    *(*(param_1 + 0x2c0) + 8) = 0xffffffffffffffff;
                                }
                            }
                            *(piVar11 + 0xe8) = 0;
                            *(piVar11 + 0x467) = 0;
                            param_1 = 0x12000;
                            *(piVar11 + 0x7e6) = 0;
                            *(piVar11 + 0xb65) = 0;
                            *(piVar11 + 0xee4) = 0;
                            *(piVar11 + 0x1263) = 0;
                            *(piVar11 + 0x15e2) = 0;
                            *(piVar11 + 0x1961) = 0;
                            *(piVar11 + 0x1ce0) = 0;
                            *unaff_x26 = 0;
                            *(piVar11 + 4) = 0x5a000;
                            iVar12 = dma_alloc_attrs(*piVar11,0x5a000,piVar11 + 3,0xcc0,0);
                            piVar11[2] = iVar12;
                            if (iVar12 == 0) {
                                *param_2 = -0xc;
                                _printk(0x8001ea8,"qce_open");
                            }
                            else {
                                *(piVar11 + 6) = 0x12000;
                                iVar12 = kmalloc_order_trace(0x12000,0xdc0,5);
                                piVar11[5] = iVar12;
                                pcVar20 = unaff_x28;
                                if (iVar12 != 0) {
                                    unaff_x27 = _printk;
                                    unaff_x28 = kmalloc_caches;
                                    iVar12 = 0x38;
                                    if (android_kmalloc_64_create != 0x0) {
                                        iVar12 = 0x30;
                                    }
                                    iVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x40);
                                    piVar11[0x2095] = iVar12;
                                    pcVar20 = unaff_x28;
                                    if (iVar12 != 0) {
                                        if (*(piVar11 + 0x104b9) == '\0') {
                                            param_1 = clk_get(*piVar11,"core_clk_src");
                                            piVar11[0xb] = param_1;
                                            if (param_1 < 0xfffffffffffff001) {
                                                if ((*(piVar11 + 0x44) != '\0') ||
                                                   (uVar8 = clk_set_rate(param_1,*unaff_x23), uVar8 == 0)) {
                                                    if (*(piVar11 + 0x43) == '\0') goto code_r0x0800c314;
code_r0x0800c12c:
                                                    piVar11[0xd] = 0;
                                                    piVar11[0xe] = 0;
                                                    piVar11[0xc] = 0;
                                                    goto code_r0x0800c368;
                                                }
                                                param_1 = uVar8;
                                                _printk(0x8000e66,"__qce_init_clk",*unaff_x23 / 1000000);
                                                iVar12 = piVar11[0xb];
joined_r0x0800c4f4:
                                                if (iVar12 != 0) {
                                                    clk_put();
                                                }
                                                _printk(0x800130f,"__qce_init_clk",param_1 & 0xffffffff);
                                            }
                                            else {
                                                if (*(piVar11 + 0x43) == '\0') {
                                                    _printk(0x8000f53,"__qce_init_clk");
                                                    piVar11[0xb] = 0;
                                                    if (*(piVar11 + 0x43) != '\0') goto code_r0x0800c12c;
code_r0x0800c314:
                                                    pcVar20 = clk_get(*piVar11,"core_clk");
                                                    piVar11[0xc] = pcVar20;
                                                    if (pcVar20 < 0xfffffffffffff001) {
                                                        pcVar20 = clk_get(*piVar11,"iface_clk");
                                                        piVar11[0xd] = pcVar20;
                                                        if (pcVar20 < 0xfffffffffffff001) {
                                                            pcVar20 = clk_get(*piVar11,"bus_clk");
                                                            piVar11[0xe] = pcVar20;
                                                            if (pcVar20 < 0xfffffffffffff001) goto code_r0x0800c368;
                                                            _printk(0x8000aad,"__qce_init_clk");
                                                            if (piVar11[0xd] == 0) {
                                                                iVar12 = piVar11[0xc];
                                                            }
                                                            else {
                                                                clk_put();
                                                                iVar12 = piVar11[0xc];
                                                            }
                                                        }
                                                        else {
                                                            _printk(0x8001511,"__qce_init_clk");
                                                            iVar12 = piVar11[0xc];
                                                        }
                                                        param_1 = pcVar20;
                                                        if (iVar12 == 0) {
                                                            iVar12 = piVar11[0xb];
                                                        }
                                                        else {
                                                            clk_put();
                                                            iVar12 = piVar11[0xb];
                                                        }
                                                    }
                                                    else {
                                                        _printk(0x800209a,"__qce_init_clk");
                                                        iVar12 = piVar11[0xb];
                                                        param_1 = pcVar20;
                                                    }
                                                    goto joined_r0x0800c4f4;
                                                }
                                                piVar11[0xb] = 0;
                                                _printk(0x8001f28,"__qce_init_clk");
                                            }
                                            *param_2 = param_1;
                                            pcVar20 = kmalloc_caches;
                                            if (param_1 != 0) goto code_r0x0800c3b4;
                                        }
                                        else {
code_r0x0800c368:
                                            *param_2 = 0;
                                        }
                                        iVar7 = sym.qce_enable_clk(piVar11);
                                        *param_2 = iVar7;
                                        if (iVar7 == 0) {
                                            uVar22 = sym.readl_relaxed(piVar11[9] + 0x1a000);
                                            DataSynchronizationBarrier(3,3,0);
                                            uVar18 = uVar22 >> 0x18 & 0xff;
                                            uVar8 = uVar22 >> 0x10 & 0xff;
                                            unaff_x23 = uVar22 & 0xffff;
                                            if (uVar18 == 5) {
                                                *(piVar11 + 0xf) = 2 < uVar8;
                                                if ((uVar8 < 4) && ((uVar8 != 3 || ((uVar22 & 0xffff) == 0)))) {
                                                    *(piVar11 + 0x79) = 0;
                                                }
                                                else {
                                                    *(piVar11 + 0x79) = 1;
                                                }
                                                *(piVar11 + 0x174) = uVar8;
                                                *(piVar11 + 0x2f) = 5;
                                                uVar9 = sym.readl_relaxed(piVar11[9] + 0x1a108);
                                                *(piVar11 + 0x11) = uVar9;
                                                _dev_info(*piVar11,"QTI Crypto %d.%d.%d device found @0x%x\n",5,uVar8
                                                          ,unaff_x23,piVar11[10]);
                                                *(piVar11 + 0x2e) = 0x40;
                                                uVar8 = *(piVar11 + 0x134) << 5;
                                                *(piVar11 + 0x94) = 0x5200000042;
                                                *(piVar11 + 0xac) = 0x9200000082;
                                                *(piVar11 + 0x9c) = 0x1200000002;
                                                *(piVar11 + 0x8c) = uVar8 | 0xe000e;
                                                *(piVar11 + 0x12) = uVar8 | 0xe020e;
                                                *(piVar11 + 0xb4) = 0x211200002102;
                                                *(piVar11 + 0xc4) = 0x900000049;
                                                *(piVar11 + 0xbc) = 0x100000041;
                                                *(piVar11 + 0xcc) = 0x500000004;
                                                *(piVar11 + 0xe4) = 0x24100000041;
                                                *(piVar11 + 0xa4) = 0xd2000000c2;
                                                *(piVar11 + 0xd4) = 0x31e42;
                                                *(piVar11 + 0x1b) = 0x31e52;
                                                *(piVar11 + 0xdc) = 0x20100000001;
                                                *param_2 = 0;
                                                *(piVar11 + 0xf4) = 0x30041;
                                                *(piVar11 + 0x1f) = 0x30241;
                                                *(piVar11 + 0xec) = 0x430002;
                                                *(piVar11 + 0x1e) = 0x430012;
                                                uStack_78 = 0;
                                                uStack_70 = 0;
                                                *(piVar11 + 0xfc) = 0x30003;
                                                *(piVar11 + 0x20) = 0x30004;
                                                uStack_88 = 0;
                                                uStack_80 = 0;
                                                *(piVar11 + 0x104) = 0xffffffffffffffff;
                                                *(piVar11 + 0x10c) = 0xffffffffffffffff;
                                                uStack_98 = 0;
                                                uStack_90 = 0;
                                                uStack_a8 = 0;
                                                uStack_a0 = 0;
                                                uStack_b8 = 0;
                                                uStack_b0 = 0;
                                                uStack_c8 = 0;
                                                uStack_c0 = 0;
                                                uStack_d8 = 0;
                                                uStack_d0 = 0;
                                                iStack_e8 = 0;
                                                uStack_e0 = 0;
                                                uStack_f8 = 0;
                                                uStack_f0 = 0;
                                                mutex_lock(obj.bam_register_lock);
                                                param_1 = obj.qce50_bam_list;
                                                if (_obj.qce50_bam_list != obj.qce50_bam_list) {
                                                    pcVar20 = _obj.qce50_bam_list;
                                                    do {
                                                        if (*(pcVar20 + 0x1c) == *(piVar11 + 0x34)) {
                                                            if (pcVar20 != NULL) {
                                                                *(pcVar20 + 0x18) = *(pcVar20 + 0x18) + 1;
                                                                piVar11[0x2d] = *(pcVar20 + 0x10);
                                                                *(piVar11 + 0x11c) = *(pcVar20 + 0x1c);
                                                                iVar12 = *(pcVar20 + 0x20);
                                                                piVar11[1] = pcVar20;
                                                                piVar11[0x24] = iVar12;
                                                                *(piVar11 + 8) = pcVar20[0x28];
                                                                goto code_r0x0800c89c;
                                                            }
                                                            break;
                                                        }
                                                        pcVar20 = *pcVar20;
                                                    } while (pcVar20 != obj.qce50_bam_list);
                                                }
                                                iVar12 = 0x38;
                                                if (android_kmalloc_64_create != 0x0) {
                                                    iVar12 = 0x30;
                                                }
                                                puVar21 = kmem_cache_alloc_trace
                                                                    (*(kmalloc_caches + iVar12),0xdc0,0x30);
                                                if (puVar21 == NULL) {
code_r0x0800cac8:
                                                    param_1 = 0xfffffff4;
                                                }
                                                else {
                                                    uVar8 = *(piVar11 + 0x34);
                                                    unaff_x25 = uVar8;
                                                    iVar12 = piVar11[7];
                                                    pcVar20 = unaff_x24;
                                                    if (arm64_use_ng_mappings != 0x0) {
                                                        pcVar20 = 0x68000000000f13;
                                                    }
                                                    puVar21[6] = 1;
                                                    puVar21[7] = uVar8;
                                                    iVar12 = __ioremap(unaff_x25,iVar12,pcVar20);
                                                    *(puVar21 + 8) = iVar12;
                                                    unaff_x23 = puVar21;
                                                    if (iVar12 == 0) {
                                                        kfree(puVar21);
                                                        _printk(0x8000c9b,"qce_sps_get_bam");
                                                        goto code_r0x0800cac8;
                                                    }
                                                    piVar11[0x24] = iVar12;
                                                    *(piVar11 + 0x11c) = uVar8;
                                                    unaff_x24 = puVar21 + 4;
                                                    *unaff_x24 = 0;
                                                    uVar10 = sym.readl_relaxed(iVar12 + 0x7c);
                                                    uVar8 = uVar10 & 0x8000000;
                                                    unaff_x25 = uVar8;
                                                    *(puVar21 + 10) = uVar10 >> 0x1b & 1;
                                                    if ((uVar10 >> 0x1b & 1) == 0) {
                                                        _printk(0x80011a6,"qce_sps_get_bam",uVar10);
                                                        *(piVar11 + 0xf) = 0;
                                                    }
                                                    uStack_f0 = *(piVar11 + 0x11c);
                                                    iStack_e8 = piVar11[0x24];
                                                    *(piVar11 + 8) = uVar8 >> 0x1b;
                                                    uStack_b8 = CONCAT44(0x10,uStack_b8);
                                                    uStack_d8 = CONCAT44(0x40,uStack_d8);
                                                    uStack_e0 = CONCAT44(piVar11[0x23],uStack_e0);
                                                    if (uVar8 == 0) {
                                                        uVar8 = 1;
                                                    }
                                                    else {
                                                        uVar8 = *(piVar11 + 0x3c) != 0;
                                                    }
                                                    uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
                                                    uStack_88 = CONCAT44(2,*unaff_x21);
                                                    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x400);
                                                    iVar7 = sps_register_bam_device(&uStack_f8,unaff_x24);
                                                    puVar27 = *0x8000878;
                                                    if (iVar7 == 0) {
                                                        piVar11[1] = puVar21;
                                                        uVar22 = __list_add_valid(puVar21,puVar27,obj.qce50_bam_list);
                                                        if ((uVar22 & 1) != 0) {
                                                            *0x8000878 = puVar21;
                                                            *puVar21 = obj.qce50_bam_list;
                                                            *(puVar21 + 2) = puVar27;
                                                            *puVar27 = puVar21;
                                                        }
                                                        piVar11[0x2d] = *unaff_x24;
                                                        unaff_x21 = puVar27;
code_r0x0800c89c:
                                                        mutex_unlock(obj.bam_register_lock);
                                                        if (*(piVar11 + 0x104ba) == '\0') {
code_r0x0800c8f4:
                                                            if (*(piVar11 + 0x104bb) == '\0') goto code_r0x0800ca10;
                                                            unaff_x21 = piVar11 + 0x47;
                                                            uVar8 = sym.qce_sps_init_ep_conn(piVar11,unaff_x21,1,1);
                                                            param_1 = uVar8;
                                                            if (uVar8 == 0) {
                                                                unaff_x23 = 0x1;
                                                                uVar8 = sym.qce_sps_init_ep_conn
                                                                                  (piVar11,piVar11 + 0xa3,1,0);
                                                                if (uVar8 == 0) {
                                                                    if (*(piVar11 + 0x104bb) != '\0') {
                                                                        unaff_x21 = piVar11 + 0x5e;
                                                                        uVar8 = sym.qce_sps_init_ep_conn
                                                                                          (piVar11,unaff_x21,2,1);
                                                                        param_1 = uVar8;
                                                                        if (uVar8 != 0) goto code_r0x0800c96c;
                                                                        unaff_x23 = 0x2;
                                                                        uVar8 = sym.qce_sps_init_ep_conn
                                                                                          (piVar11,piVar11 + 0xba,2,0
                                                                                          );
                                                                        if (uVar8 != 0) goto code_r0x0800c93c;
                                                                        if (*(piVar11 + 0x104bb) != '\0') {
                                                                            unaff_x21 = piVar11 + 0x75;
                                                                            uVar8 = sym.qce_sps_init_ep_conn
                                                                                              (piVar11,unaff_x21,3,1)
                                                                            ;
                                                                            param_1 = uVar8;
                                                                            if (uVar8 != 0) goto code_r0x0800c96c;
                                                                            unaff_x23 = 0x3;
                                                                            uVar8 = sym.qce_sps_init_ep_conn
                                                                                              (piVar11,piVar11 + 0xd1,
                                                                                               3,0);
                                                                            if (uVar8 != 0) goto code_r0x0800c93c;
                                                                        }
                                                                    }
code_r0x0800ca10:
                                                                    _printk(0x8000db1,"qce_sps_init",
                                                                            *(piVar11 + 0x11c),piVar11[0x23]);
                                                                    *param_2 = 0;
                                                                    sym.qce_setup_ce_sps_data(piVar11);
                                                                    sym.qce_disable_clk(piVar11);
                                                                    sym.setup_dummy_req(piVar11);
                                                                    *(piVar11 + 0x2060) = 0;
                                                                    *(piVar11 + 0x2090) = 0;
                                                                    init_timer_key(piVar11 + 0x2061,
                                                                                   
                                                            sym.qce_multireq_timeout.690bdae42169b8376f8634d9b6b718d8.cfi_jt
                                                            ,0,0,0);
                                                            iVar12 = __printk;
                                                            *(piVar11 + 0x10484) = 0;
                                                            *(piVar11 + 0x102fc) = 0;
                                                            *(piVar11 + 0x2091) = _segment.ehdr;
                                                            piVar11[0x2063] = iVar12 + 5;
                                                            _segment.ehdr = _segment.ehdr + 1;
                                                            mutex_unlock(obj.qce_iomap_mutex);
                                                            goto code_r0x0800c404;
                                                            }
code_r0x0800c93c:
                                                            param_1 = uVar8;
                                                            unaff_x21 = *unaff_x21;
                                                            sps_disconnect(unaff_x21);
                                                            dma_free_attrs(*piVar11,piVar11[unaff_x23 * 0x17 + 0x3b],
                                                                           piVar11[unaff_x23 * 0x17 + 0x38],
                                                                           piVar11[unaff_x23 * 0x17 + 0x39],0);
                                                            sps_free_endpoint(unaff_x21);
                                                            }
                                                        }
                                                        else {
                                                            unaff_x21 = piVar11 + 0x30;
                                                            uVar8 = sym.qce_sps_init_ep_conn(piVar11,unaff_x21,0,1);
                                                            param_1 = uVar8;
                                                            if (uVar8 == 0) {
                                                                uVar8 = sym.qce_sps_init_ep_conn
                                                                                  (piVar11,piVar11 + 0x8c,0,0);
                                                                if (uVar8 == 0) goto code_r0x0800c8f4;
                                                                unaff_x23 = NULL;
                                                                goto code_r0x0800c93c;
                                                            }
                                                        }
code_r0x0800c96c:
                                                        sym.qce_sps_release_bam(piVar11);
                                                        goto code_r0x0800cad8;
                                                    }
                                                    _printk(0x80015b9,"qce_sps_get_bam",iVar7);
                                                    iounmap(*(puVar21 + 8));
                                                    kfree(puVar21);
                                                    param_1 = 0xfffffffb;
                                                }
                                                mutex_unlock(obj.bam_register_lock);
                                            }
                                            else {
                                                _printk(0x80022c0,"_probe_ce_engine",piVar11[10],uVar18,uVar8,
                                                        unaff_x23);
                                                param_1 = 0xfffffffa;
                                            }
code_r0x0800cad8:
                                            *param_2 = param_1;
                                            sym.qce_disable_clk(piVar11);
                                            cVar1 = *(piVar11 + 0x104b9);
                                        }
                                        else {
                                            cVar1 = *(piVar11 + 0x104b9);
                                        }
                                        pcVar20 = kmalloc_caches;
                                        if (cVar1 == '\0') {
                                            if (piVar11[0xe] != 0) {
                                                clk_put();
                                            }
                                            if (piVar11[0xd] != 0) {
                                                clk_put();
                                            }
                                            if (piVar11[0xc] != 0) {
                                                clk_put();
                                            }
                                            pcVar20 = kmalloc_caches;
                                            if (piVar11[0xb] != 0) {
                                                clk_put();
                                            }
                                        }
                                    }
                                }
code_r0x0800c3b4:
                                kfree(piVar11[0x2095]);
                                kfree(piVar11[5]);
                                unaff_x28 = pcVar20;
                                if (piVar11[2] != 0) {
                                    dma_free_attrs(*piVar11,piVar11[4],piVar11[2],piVar11[3],0);
                                }
                            }
                            if (piVar11[9] != 0) {
                                iounmap();
                            }
                            goto code_r0x0800c3ec;
                        }
                        unaff_x21 = 0xfffffff4;
                        uVar19 = 0x8002036;
                    }
                }
            }
        }
        else {
            iVar12 = *unaff_x24;
            *(piVar11 + 0x104bb) = 1;
            iVar7 = of_property_read_variable_u32_array(iVar12,"qcom,bam-pipe-offload-cpb-hlos",piVar11 + 0x28,1,0);
            if (iVar7 < 0) {
                unaff_x21 = 0xffffffea;
                uVar19 = 0x8000d33;
            }
            else {
                iVar7 = of_property_read_variable_u32_array
                                  (*unaff_x24,"qcom,bam-pipe-offload-hlos-hlos",piVar11 + 0x27,1,0);
                if (iVar7 < 0) {
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x8001da8;
                }
                else {
                    iVar7 = of_property_read_variable_u32_array
                                      (*unaff_x24,"qcom,bam-pipe-offload-hlos-cpb",piVar11 + 0x13c,1,0);
                    if (-1 < iVar7) goto code_r0x0800bddc;
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x8001172;
                }
            }
        }
        _printk(uVar19,"__qce_get_device_tree_data");
        *param_2 = unaff_x21;
    }
code_r0x0800c3ec:
    mutex_unlock(obj.qce_iomap_mutex);
    kfree(piVar11);
    piVar11 = NULL;
code_r0x0800c404:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return piVar11;
    }
    arg1 = __stack_chk_fail();
    *extraout_x18 = sym.qce_setup_ce_sps_data;
    pcStack_158 = sym.qce_setup_ce_sps_data;
    iVar12 = sp_el0;
    iStack_168 = *(iVar12 + 0x5e0);
    iVar12 = 0;
    iVar29 = 0x1e58;
    iVar23 = arg1[5];
    iVar2 = arg1[6];
    iVar13 = iVar23 << 8;
    puVar21 = (arg1[2] + arg1[0x2e]) - 1U & -arg1[0x2e];
    piVar14 = arg1;
    iVar28 = 0;
    puStack_160 = &stack0xffffffffffffffa0;
    pcStack_150 = unaff_x28;
    pcStack_148 = unaff_x27;
    piStack_140 = unaff_x26;
    pcStack_138 = unaff_x25;
    pcStack_130 = unaff_x24;
    puStack_128 = unaff_x23;
    pcStack_120 = param_1;
    puStack_118 = unaff_x21;
    piStack_110 = param_2;
    piStack_108 = piVar11;
    do {
        *(arg1 + iVar28 + 0x768) = iVar23;
        iVar24 = _sps_bam_disable_irqs;
        iVar3 = _log_post_read_mmio;
        uVar22 = (iVar13 >> 8) + 0x8000000000;
        *(arg1 + iVar28 + 0x788) = iVar23 + 0x1000;
        iVar3 = uVar22 + iVar3;
        if (uVar22 >> 0x26 != 0) {
            iVar3 = (iVar13 >> 8) - iVar24;
        }
        *(arg1 + iVar28 + 0x760) = iVar3;
        iVar24 = iVar13 + 0x100000 >> 8;
        uVar22 = iVar24 + 0x8000000000;
        iVar3 = _log_post_read_mmio + uVar22;
        if (uVar22 >> 0x26 != 0) {
            iVar3 = iVar24 - _sps_bam_disable_irqs;
        }
        iVar24 = arg1[8];
        *(arg1 + iVar28 + 0x780) = iVar3;
        if (iVar24 != '\0') {
            uVar10 = iVar12;
            puStack_170 = puVar21 + arg1[0x2e] + -1 & -arg1[0x2e];
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,3);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1,uVar10,&puStack_170,3);
            sym._setup_cipher_des_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_cipher_des_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_cipher_des_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_cipher_des_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,3);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,4);
            sym._setup_auth_cmdlistptrs(arg1,uVar10,&puStack_170,4);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,0);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,1);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1,uVar10,&puStack_170,2);
            uVar8 = *(arg1 + 0x2e);
            iVar3 = arg1[10];
            puStack_170 = puStack_170 + uVar8 + -1 & -uVar8;
            *(arg1 + iVar28 + 0x1d90) = puStack_170;
            *puStack_170 = iVar3 + 0x1a110U & 0xffffff;
            puStack_170[1] = uVar8;
            puStack_170[2] = 0xffffffff;
            puStack_170[3] = 0;
            iVar3 = arg1[10];
            uVar8 = *(arg1 + 0x9c);
            puStack_170[6] = 0xffffffff;
            puStack_170[7] = 0;
            puStack_170[4] = iVar3 + 0x1a200U & 0xffffff;
            puStack_170[5] = uVar8;
            iVar3 = arg1[10];
            puStack_170[9] = 0;
            puStack_170[10] = 0xffffffff;
            puStack_170[0xb] = 0;
            puStack_170[8] = iVar3 + 0x1a204U & 0xffffff;
            iVar3 = arg1[10];
            puStack_170[0xd] = 0;
            puStack_170[0xe] = 0xffffffff;
            puStack_170[0xf] = 0;
            puStack_170[0xc] = iVar3 + 0x1a208U & 0xffffff;
            iVar3 = arg1[10];
            puStack_170[0x11] = 0;
            puStack_170[0x12] = 0xffffffff;
            puStack_170[0x13] = 0;
            puStack_170[0x10] = iVar3 + 0x1a300U & 0xffffff;
            iVar3 = arg1[10];
            puStack_170[0x15] = 0;
            puStack_170[0x16] = 0xffffffff;
            puStack_170[0x17] = 0;
            puStack_170[0x14] = iVar3 + 0x1a304U & 0xffffff;
            iVar3 = arg1[10];
            puStack_170[0x19] = 0;
            puStack_170[0x1a] = 0xffffffff;
            puStack_170[0x1b] = 0;
            puStack_170[0x18] = iVar3 + 0x1a308U & 0xffffff;
            iVar3 = arg1[10];
            puStack_170[0x1d] = 7;
            puStack_170[0x1e] = 0xffffffff;
            puStack_170[0x1f] = 0;
            puStack_170[0x1c] = iVar3 + 0x1a120U & 0xffffff;
            if (arg1 + iVar29 != 0) {
                *(arg1 + iVar28 + 0x1e58) = puStack_170 + 0x1c;
            }
            puStack_170 = puStack_170 + 0x20;
            *(arg1 + iVar28 + 0x1e60) = 0x80;
            sym._setup_aead_ccm_cmdlistptrs(arg1,uVar10,&puStack_170);
            sym._setup_aead_ccm_cmdlistptrs(arg1,uVar10,&puStack_170);
            sym._setup_f8_cmdlistptrs(arg1,uVar10,&puStack_170);
            sym._setup_f8_cmdlistptrs(arg1,uVar10,&puStack_170);
            sym._setup_f9_cmdlistptrs(arg1,uVar10,&puStack_170);
            piVar14 = sym._setup_f9_cmdlistptrs(arg1,uVar10,&puStack_170);
            iVar3 = arg1[10];
            puVar27 = puStack_170 + arg1[0x2e] + -1 & -arg1[0x2e];
            puVar21 = puVar27 + 4;
            *(arg1 + iVar28 + 0x21c8) = puVar27;
            *puVar27 = iVar3 + 0x1a400U & 0xffffff;
            puVar27[3] = 0;
            puVar27[1] = 0xe01ef;
            puVar27[2] = 0xffffffff;
            *(arg1 + iVar28 + 0x2298) = puVar21 - puStack_170;
        }
        iVar7 = arg1[0x2e];
        iVar12 = iVar12 + 1;
        iVar3 = arg1[3];
        iVar13 = iVar13 + 0x200000;
        iVar24 = arg1[2];
        uVar22 = puVar21 + iVar7 + -1 & -iVar7;
        iVar26 = uVar22 + 0x80;
        *(arg1 + iVar28 + 0x22a4) = iVar26;
        *(arg1 + iVar28 + 0x22c0) = uVar22 + 0x80;
        *(arg1 + iVar28 + 0x22a0) = uVar22;
        iVar29 = iVar29 + 0x1bf8;
        *(arg1 + iVar28 + 0x22b8) = uVar22;
        puVar21 = uVar22 + 0x100 + (iVar7 << 1);
        iVar23 = iVar23 + 0x2000;
        *(arg1 + iVar28 + 0x22a8) = (uVar22 + iVar3) - iVar24;
        *(arg1 + iVar28 + 0x22ac) = (iVar3 + iVar26) - iVar24;
        *(arg1 + iVar28 + 0x22b0) = uVar22 + 0x100;
        iVar28 = iVar28 + 0x1bf8;
    } while (iVar12 != 9);
    puStack_170 = puVar21;
    if ((arg1[4] < puVar21 - arg1[2]) || (iVar2 + -0x12000 < 0)) {
        panic("qce50: Not enough coherent memory. Allocate %x , need %lx\n");
    }
    else {
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_168) {
            return piVar14;
        }
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.setup_dummy_req;
    uVar5 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._24_8_;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._8_8_;
    uVar19 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._0_8_;
    iVar12 = iVar13 + 0x103d8;
    pcVar25 = *(iVar13 + 0x104a8);
    *(pcVar25 + 0x10) = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._16_8_;
    uVar6 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._48_8_;
    *(pcVar25 + 0x18) = uVar5;
    uVar5 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._56_8_;
    *pcVar25 = uVar19;
    *(pcVar25 + 8) = uVar4;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._40_8_;
    uVar19 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._32_8_;
    *(pcVar25 + 0x30) = uVar6;
    *(pcVar25 + 0x38) = uVar5;
    *(pcVar25 + 0x20) = uVar19;
    *(pcVar25 + 0x28) = uVar4;
    piVar11 = sg_init_one(iVar12,*(iVar13 + 0x104a8),0x40);
    *(iVar13 + 0x10388) = 0;
    *(iVar13 + 0x10398) = iVar12;
    *(iVar13 + 0x103a0) = 0;
    *(iVar13 + 0x103bc) = 0x101;
    *(iVar13 + 0x10380) = sym.__typeid__ZTSFvPvPhS0_iE_global_addr;
    *(iVar13 + 0x103c0) = 0x40;
    *(iVar13 + 0x103d0) = 0;
    *(iVar13 + 0x103c8) = iVar13 + 0x10400;
    *(iVar13 + 0x103a8) = 0;
    *(iVar13 + 0x103b0) = 0;
    *(iVar13 + 0x10438) = iVar12;
    *(iVar13 + 0x10430) = 0x40;
    return piVar11;
}


// ===== sym.qce_f8_req.cfi_jt @ 0x08003318 (size 8) =====

int sym.qce_f8_req.cfi_jt(ulong *param_1,uint64_t *param_2,ulong param_3,ulong param_4)

{
    int *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    code *pcVar8;
    uint32_t uVar9;
    int iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    uint *puVar18;
    ulong *in_x18;
    uint64_t arg2;
    uint64_t uVar19;
    int64_t *piVar20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = sym.qce_alloc_req_info(param_1);
    if (uVar9 < 0) {
        return -0x10;
    }
    arg2 = uVar9;
    *(param_2 + 0x34) = uVar9;
    if (9 < uVar9) {
code_r0x0800a740:
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5512,0x800a744);
        (*pcVar8)();
    }
    if (param_2[6] == 1) {
        iVar17 = 0x1800;
    }
    else {
        if (param_2[6] != 0) {
            if (8 < uVar9) goto code_r0x0800a740;
            piVar1 = param_1 + arg2 * 0x37f + 0xe8;
            *(param_1 + arg2 * 0x37f + 0xe9) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            iVar10 = -0x16;
            goto joined_r0x0800a1c8;
        }
        iVar17 = 0x1728;
    }
    piVar2 = param_1 + iVar17 + arg2 * 0x1bf8 + 0x740;
    uVar19 = *param_2;
    if ((uVar19 == 0) || (0x1e < param_2[3])) {
        if (8 < uVar9) goto code_r0x0800a740;
        piVar1 = param_1 + arg2 * 0x37f + 0xe8;
        *(param_1 + arg2 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 0;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        iVar10 = -0x16;
        goto joined_r0x0800a1c8;
    }
    uVar15 = param_2[1];
    piVar20 = *param_1;
    uVar12 = param_2[2];
    uVar11 = is_vmalloc_addr(uVar19);
    if (((uVar11 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar13 = dev_driver_string(piVar20);
        iVar17 = piVar20[0xe];
        if (iVar17 == 0) {
            iVar17 = *piVar20;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar17);
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x800,0x800a288);
        (*pcVar8)();
    }
    if ((uVar11 & 1) == 0) {
        uVar19 = dma_map_page_attrs(piVar20,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar19 & 0xfff,uVar12,uVar19 != uVar15,0);
    }
    else {
        uVar19 = 0xffffffffffffffff;
    }
    param_1[arg2 * 0x37f + 0x463] = uVar19;
    uVar12 = param_2[1];
    if (*param_2 == uVar12) {
        uVar12 = 0;
    }
    else {
        piVar20 = *param_1;
        uVar19 = param_2[2];
        uVar11 = is_vmalloc_addr(uVar12);
        if (((uVar11 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar13 = dev_driver_string(piVar20);
            iVar17 = piVar20[0xe];
            if (iVar17 == 0) {
                iVar17 = *piVar20;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar17);
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x800a358);
            (*pcVar8)();
        }
        if ((uVar11 & 1) == 0) {
            uVar12 = dma_map_page_attrs(piVar20,(((uVar12 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                 0x200000000,uVar12 & 0xfff,uVar19,2,0);
            uVar19 = uVar12;
        }
        else {
            uVar12 = 0xffffffffffffffff;
            uVar19 = 0xffffffffffffffff;
        }
    }
    param_1[arg2 * 0x37f + 0x464] = uVar12;
    *(param_1 + arg2 * 0x37f + 0x465) = param_2[2];
    if (*(param_1 + 8) == '\0') {
        sym._ce_f8_setup_direct(param_1,param_2,1,0);
    }
    else {
        sym._ce_f8_setup(param_1,param_2,1,0);
    }
    param_1[arg2 * 0x37f + 0x45b] = param_3;
    param_1[arg2 * 0x37f + 0x459] = param_4;
    *(param_1 + arg2 * 0x37f + 0x466) = 0;
    *(param_1 + arg2 * 0x37f + 0xe9) = 3;
    *(param_1 + arg2 * 0x1bf8 + 0x232c) = param_2[2];
    if (8 < uVar9) goto code_r0x0800a740;
    cVar5 = *(param_1 + 8);
    *(param_1 + arg2 * 0x37f + 0xee) = 0;
    *(param_1 + arg2 * 0x37f + 0xf2) = 0;
    if (cVar5 == '\0') {
        uVar12 = 0;
code_r0x0800a470:
        uVar11 = param_2[2];
        puVar16 = param_1 + arg2 * 0x37f + 0xee;
        if (param_2[2] != 0) {
            uVar15 = *(param_1 + arg2 * 0x37f + 0x463);
            puVar18 = param_1[arg2 * 0x37f + 0xed] + uVar12 * 8;
            do {
                if (uVar12 == 0x200) {
                    pcVar14 = "_qce_sps_add_data";
                    goto code_r0x0800a678;
                }
                uVar9 = uVar11;
                if (0x1fe < uVar11 >> 6) {
                    uVar9 = 0x7fc0;
                }
                uVar7 = uVar11 - uVar9;
                uVar11 = uVar7;
                *puVar18 = uVar15;
                puVar18[1] = uVar15 >> 0x10 & 0xf0000 | uVar9;
                uVar15 = uVar15 + uVar9;
                uVar12 = *puVar16 + 1;
                *puVar16 = *puVar16 + 1;
                puVar18 = puVar18 + 2;
            } while (uVar7 != 0);
        }
        if (uVar12 == 0) {
            uVar12 = 0;
        }
        else {
            iVar17 = param_1[arg2 * 0x37f + 0xed] + (uVar12 - 1) * 8;
            *(iVar17 + 4) = *(iVar17 + 4) | 0x50000000;
            uVar12 = *puVar16;
        }
        iVar17 = (param_1[arg2 * 0x37f + 0x439] - param_1[2]) + param_1[3];
        uVar3 = *(param_1 + arg2 * 0x37f + 0x453);
        puVar18 = param_1[arg2 * 0x37f + 0xed] + uVar12 * 8;
        *puVar18 = iVar17;
        puVar18[1] = uVar3 | iVar17 >> 0x10 & 0xf0000 | 0xa000000;
        uVar9 = *puVar16 + 1;
        uVar12 = uVar9;
        *puVar16 = uVar9;
        if (0x1ff < uVar9) goto code_r0x0800a63c;
        uVar12 = param_2[2];
        puVar16 = param_1 + arg2 * 0x37f + 0xf2;
        uVar11 = *puVar16;
        if (param_2[2] != 0) {
            uVar19 = uVar19 & 0xffffffff;
            puVar18 = param_1[arg2 * 0x37f + 0xf1] + uVar11 * 8;
            do {
                if (uVar11 == 0x200) {
                    pcVar14 = "_qce_sps_add_data";
                    uVar12 = 0x200;
                    goto code_r0x0800a678;
                }
                uVar9 = uVar12;
                if (0x1fe < uVar12 >> 6) {
                    uVar9 = 0x7fc0;
                }
                uVar7 = uVar12 - uVar9;
                uVar12 = uVar7;
                *puVar18 = uVar19;
                puVar18[1] = uVar19 >> 0x10 & 0xf0000 | uVar9;
                uVar19 = uVar19 + uVar9;
                uVar11 = *puVar16 + 1;
                *puVar16 = *puVar16 + 1;
                puVar18 = puVar18 + 2;
            } while (uVar7 != 0);
        }
        iVar10 = sym._qce_sps_add_data
                           ((param_1[3] + *(param_1 + arg2 * 0x37f + 0x454)) - param_1[2],0x80,
                            param_1 + arg2 * 0x37f + 0xf0);
        if (iVar10 == 0) {
            sym.select_mode(param_1,param_1 + arg2 * 0x37f + 0xe8);
            iVar10 = sym._qce_sps_transfer(param_1,arg2);
            piVar1 = param_1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x0800a750;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800a750:
            if (iVar10 == 0) {
                return 0;
            }
        }
    }
    else {
        iVar17 = (*piVar2 - param_1[2]) + param_1[3];
        uVar3 = *(piVar2 + 0x1a);
        puVar18 = param_1[arg2 * 0x37f + 0xed];
        *puVar18 = iVar17;
        puVar18[1] = uVar3 | iVar17 >> 0x10 & 0xf0000 | 0xc000000;
        uVar9 = *(param_1 + arg2 * 0x37f + 0xee) + 1;
        uVar12 = uVar9;
        *(param_1 + arg2 * 0x37f + 0xee) = uVar9;
        if (uVar9 < 0x200) goto code_r0x0800a470;
code_r0x0800a63c:
        pcVar14 = "_qce_sps_add_cmd";
code_r0x0800a678:
        _printk(0x8001aeb,pcVar14,uVar12,0x200);
        iVar10 = -0xc;
    }
    if (param_1[arg2 * 0x37f + 0x464] != 0) {
        dma_unmap_page_attrs(*param_1,param_1[arg2 * 0x37f + 0x464],param_2[2],2,0);
    }
    iVar17 = param_1[arg2 * 0x37f + 0x463];
    if (iVar17 != 0) {
        dma_unmap_page_attrs(*param_1,iVar17,param_2[2],*param_2 != param_2[1],0);
    }
    piVar1 = param_1 + arg2 * 0x37f + 0xe8;
    *(param_1 + arg2 * 0x37f + 0xe9) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800a1c8:
    if (iVar4 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2);
    }
    return iVar10;
}


// ===== sym.qce_manage_timeout.cfi_jt @ 0x08003320 (size 8) =====

void sym.qce_manage_timeout.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint16_t uVar1;
    char cVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int *extraout_x8;
    int *piVar8;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    if (8 < param_2) goto code_r0x08003a30;
    uVar9 = param_2;
    uStack_5c = 0;
    uVar1 = *(param_1 + 0x740 + param_2 * 0x1bf8 + 0x1bf0);
    uVar10 = uVar1;
    _printk(0x8001d49,"qce_manage_timeout","qce_manage_timeout",uVar9,uVar10);
    if (3 < uVar1) goto code_r0x08003a30;
    iVar7 = param_1 + 0x118 + uVar10 * 4;
    sps_pipe_reset(*(param_1 + 0x168),*(iVar7 + 0x3c));
    sps_pipe_reset(*(param_1 + 0x168),*(iVar7 + 0x2c));
    uVar11 = *(param_1 + 0x118 + uVar10 * 0xb8 + 0x348);
    iVar5 = sps_disconnect(uVar11);
    if (iVar5 == 0) {
        iVar7 = param_1 + uVar10 * 0xb8;
        memset(*(iVar7 + 0x4a0),0,*(iVar7 + 0x4b8));
        iVar5 = sps_connect(uVar11,iVar7 + 0x468);
        if (iVar5 != 0) {
code_r0x08003808:
            uVar6 = 0x8001ee4;
            goto code_r0x08003824;
        }
        uVar11 = *(param_1 + uVar10 * 0xb8 + 0x180);
        iVar5 = sps_disconnect(uVar11);
        if (iVar5 != 0) goto code_r0x08003808;
        iVar7 = param_1 + uVar10 * 0xb8;
        memset(*(iVar7 + 0x1c0),0,*(iVar7 + 0x1d8));
        iVar5 = sps_connect(uVar11,iVar7 + 0x188);
        if (iVar5 != 0) goto code_r0x08003808;
        iVar5 = sps_register_event(uVar11,param_1 + uVar10 * 0xb8 + 0x218);
        if (iVar5 != 0) {
            _printk(0x8001f72,"qce_sps_pipe_reset",iVar5);
            goto code_r0x08003834;
        }
    }
    else {
        uVar6 = 0x8001742;
code_r0x08003824:
        _printk(uVar6,"qce_sps_pipe_reset",uVar11,iVar5);
code_r0x08003834:
        _printk(0x8000ed0,"qce_manage_timeout","qce_manage_timeout");
    }
    sym.qce_get_crypto_status(param_1,&uStack_5c);
    if (uStack_5c == '\0') {
        uVar12 = 0;
        do {
            usleep_range_state(3000,5000,2);
            sym.qce_get_crypto_status(param_1,&uStack_5c);
            _printk(0x8000e18,"qce_manage_timeout","qce_manage_timeout");
            if (uStack_5c != '\0') break;
            bVar4 = uVar12 < 999;
            uVar12 = uVar12 + 1;
        } while (bVar4);
    }
    DataSynchronizationBarrier(3,2,0);
    if ((*(param_1 + 0x78) == '\0') && (*(param_1 + 0x40) != '\0')) {
        uVar1 = *(param_1 + uVar9 * 0x1bf8 + 0x2330);
        if (3 < uVar1) {
code_r0x08003a30:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8003a34);
            (*pcVar3)();
        }
        iVar5 = sps_transfer_one(*(param_1 + uVar1 * 0xb8 + 0x460),
                                 (*(param_1 + uVar9 * 0x1bf8 + 0x21c8) + *(param_1 + 0x18)) - *(param_1 + 0x10),0,0,
                                 0xa00);
        if (iVar5 != 0) {
            _printk(0x8002347,"_qce_unlock_other_pipes",iVar5);
            _printk(0x8001b63,"qce_manage_timeout","qce_manage_timeout");
        }
    }
    if (*(param_1 + 0x740 + uVar9 * 0x1bf8) == 0) {
        _printk(0x800100b,"qce_manage_timeout",uVar9);
        uVar11 = 0xfffffffa;
        goto code_r0x08003988;
    }
    iVar7 = param_1 + uVar9 * 0x1bf8;
    piVar8 = iVar7 + 0x740;
    *(iVar7 + 0x748) = 5;
    Hint_Prefetch(piVar8,2,0,1);
    do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
            *piVar8 = 0;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar5 == 0) {
        _printk(0x800191f,"qce_free_req_info",uVar9);
    }
    else if (param_2 < 8) {
        piVar8 = param_1 + 0x10300;
        goto code_r0x08003a3c;
    }
    while( true ) {
        uVar11 = 0;
code_r0x08003988:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail(uVar11);
        piVar8 = extraout_x8;
code_r0x08003a3c:
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
                *piVar8 = *piVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.qce_hw_support.cfi_jt @ 0x08003328 (size 8) =====

ulong sym.qce_hw_support.cfi_jt(int64_t param_1,uint *param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint uVar3;
    
    if (param_2 != NULL) {
        *param_2 = 0x1000000;
        *(param_2 + 1) = 1;
        *(param_2 + 6) = 1;
        uVar1 = *(param_1 + 0x88);
        *(param_2 + 10) = 1;
        *(param_2 + 2) = ((uVar1 ^ 0xffffffff) & 0x18c) == 0;
        *(param_2 + 0xb) = *(param_1 + 0x3c) == 1;
        uVar2 = *(param_1 + 0x41);
        *(param_2 + 7) = 1;
        *(param_2 + 3) = uVar2;
        *(param_2 + 0x13) = *(param_1 + 0x42);
        *(param_2 + 5) = *(param_1 + 0x44);
        *(param_2 + 9) = *(param_1 + 0x174) == 0;
        *(param_2 + 0xd) = *(param_1 + 0x80);
        *(param_2 + 0xe) = *(param_1 + 0x81);
        *(param_2 + 0xf) = *(param_1 + 0x82);
        *(param_2 + 4) = *(param_1 + 0x83);
        *(param_2 + 0x11) = *(param_1 + 0x84);
        *(param_2 + 0x12) = *(param_1 + 0x85);
        param_2[6] = *(param_1 + 0x128);
        param_2[7] = *(param_1 + 300);
        uVar3 = 8;
        if (*(param_1 + 0x78) == '\0') {
            uVar3 = 1;
        }
        param_2[8] = uVar3;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qce_process_sha_req.cfi_jt @ 0x08003330 (size 8) =====

int sym.qce_process_sha_req.cfi_jt(ulong *param_1,ulong *param_2)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    code *pcVar9;
    bool bVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t iVar13;
    char *pcVar14;
    int64_t *piVar15;
    int iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t *puVar19;
    uint32_t uVar20;
    uint8_t *puVar21;
    uint *puVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    ulong *in_x18;
    uint64_t unaff_x20;
    uint32_t uVar25;
    ulong uVar26;
    int64_t iVar27;
    ulong uVar28;
    int *unaff_x26;
    ulong *unaff_x28;
    ulong unaff_x30;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    piVar1 = param_1 + 0x102fc;
    if (param_2 == NULL) {
        unaff_x20 = 8;
        unaff_x28 = param_1 + 0x2070;
        *(param_1 + 0x103d4) = 8;
    }
    else {
        uVar11 = sym.qce_alloc_req_info(param_1);
        if (uVar11 < 0) {
            iVar12 = -0x10;
            goto code_r0x08009d5c;
        }
        unaff_x20 = uVar11;
        *(param_2 + 0x54) = uVar11;
        unaff_x28 = param_2;
        if (9 < uVar11) goto code_r0x0800a08c;
    }
    iVar12 = *(unaff_x28 + 8);
    iVar27 = unaff_x28[9];
    if (iVar12 < 1) {
        unaff_x26 = param_1 + unaff_x20 * 0x37f + 0x45e;
        *(param_1 + unaff_x20 * 0x37f + 0x45e) = 0;
        cVar3 = *(param_1 + 8);
joined_r0x08009008:
        if (cVar3 != '\0') goto code_r0x0800900c;
code_r0x08009058:
        uVar11 = *(unaff_x28 + 7);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        sym.writel_relaxed(0,param_1[9] + 0x1a100);
        uVar20 = *(param_1 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 | *(param_1 + 0x134) << 5;
        uVar25 = uVar20 | 0xe;
        *(param_1 + 0x8c) = uVar25;
        *(param_1 + 0x12) = uVar20 | 0x20e;
        sym.writel_relaxed(uVar25,param_1[9] + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        iVar12 = *(unaff_x28 + 1);
        if (iVar12 == 4) {
            sym.writel_relaxed(0,param_1[9] + 0x1a300);
            sym.writel_relaxed(0,param_1[9] + 0x1a200);
            sym.writel_relaxed(0,param_1[9] + 0x1a204);
            iVar13 = 0;
            do {
                sym.writel_relaxed(0,param_1[9] + iVar13 + 0x1a310);
                sym.writel_relaxed(0,param_1[9] + iVar13 + 0x1d040);
                iVar13 = iVar13 + 4;
            } while (iVar13 != 0x40);
            sym.writel_relaxed(0,param_1[9] + 0x1a390);
            sym.writel_relaxed(0,param_1[9] + 0x1a394);
            sym.writel_relaxed(0,param_1[9] + 0x1a398);
            sym.writel_relaxed(0,param_1[9] + 0x1a39c);
            iVar13 = 0xd4;
            if (*(unaff_x28 + 7) != 0x10) {
                iVar13 = 0xd8;
            }
            uVar25 = *(param_1 + iVar13);
            iVar12 = *(unaff_x28 + 1);
        }
        else {
            uVar25 = 0;
        }
        if (iVar12 - 2U < 3) {
            uVar20 = *(unaff_x28 + 7);
            puVar19 = &uStack_c8;
            puVar21 = unaff_x28[6];
            if (uVar20 < 4) {
                uVar17 = 0;
            }
            else {
                uVar23 = uVar20 >> 2;
                uVar17 = 0;
                do {
                    uVar18 = uVar17;
                    if (0x3f < uVar18) goto code_r0x0800a088;
                    uVar23 = uVar23 - 1;
                    uVar24 = (*(puVar21 + uVar18) & 0xff00ff00) >> 8 | (*(puVar21 + uVar18) & 0xff00ff) << 8;
                    *(puVar19 + uVar18) = uVar24 >> 0x10 | uVar24 << 0x10;
                    uVar17 = uVar18 + 4;
                } while (uVar23 != 0);
                puVar21 = puVar21 + uVar17;
                puVar19 = &uStack_c8 + uVar18 + 4;
            }
            uVar20 = uVar20 & 3;
            if (uVar20 == 1) {
                uVar20 = *puVar21 << 0x18;
code_r0x08009468:
                if (0x3c < uVar17) goto code_r0x0800a088;
                *puVar19 = uVar20;
            }
            else {
                if (uVar20 == 2) {
                    uVar20 = *puVar21 << 0x18 | puVar21[1] << 0x10;
                    goto code_r0x08009468;
                }
                if (uVar20 == 3) {
                    uVar20 = *puVar21 << 0x18 | puVar21[1] << 0x10 | puVar21[2] << 8;
                    goto code_r0x08009468;
                }
            }
            if ((*(unaff_x28 + 10) & 1) == 0) {
                if ((*(unaff_x28 + 10) >> 1 & 1) == 0) {
                    if (uVar11 < 4) {
                        bVar7 = false;
                        goto joined_r0x080094b0;
                    }
                    uVar11 = uVar11 >> 2;
                    if (uVar11 < 2) {
                        uVar11 = 1;
                    }
                    iVar13 = 0;
                    do {
                        if (iVar13 == 0x40) goto code_r0x0800a08c;
                        sym.writel_relaxed(*(&uStack_c8 + iVar13),param_1[9] + iVar13 + 0x1d040);
                        iVar13 = iVar13 + 4;
                    } while (uVar11 * 4 - iVar13 != 0);
                    bVar10 = false;
                    iVar12 = *(unaff_x28 + 1);
                }
                else {
                    bVar10 = true;
                }
                bVar7 = false;
            }
            else {
                bVar7 = true;
joined_r0x080094b0:
                bVar10 = false;
            }
            if (iVar12 != 4) goto code_r0x0800922c;
code_r0x08009764:
            sym.writel_relaxed(uVar25,param_1[9] + 0x1a300);
            sym.writel_relaxed(*(unaff_x28 + 8),param_1[9] + 0x1a304);
            sym.writel_relaxed(0,param_1[9] + 0x1a308);
            sym.writel_relaxed(0,param_1[9] + 0x1a200);
            sym.writel_relaxed(*(unaff_x28 + 8),param_1[9] + 0x1a110);
            sym.writel_relaxed(*(param_1 + 0x12),param_1[9] + 0x1a400);
            iVar13 = 0x1b000;
            if (!bVar7) {
                iVar13 = 0x1a120;
            }
            uVar11 = 5;
            if (!bVar7) {
                uVar11 = 7;
            }
            sym.writel_relaxed(uVar11,param_1[9] + iVar13);
            DataSynchronizationBarrier(3,3,0);
            iVar12 = 0;
        }
        else {
            bVar10 = false;
            bVar7 = false;
code_r0x0800922c:
            if ((*(unaff_x28 + 0x3d) != '\0') || ((*(unaff_x28 + 8) & 0x3f) == 0)) {
                bVar8 = true;
                iVar13 = 0xdc;
                switch(iVar12) {
                case 0:
                    break;
                case 1:
                    bVar8 = false;
                    iVar13 = 0xe0;
                    break;
                case 2:
                    bVar8 = true;
                    iVar13 = 0xe4;
                    break;
                case 3:
                    bVar8 = false;
                    iVar13 = 0xe8;
                    break;
                default:
                    iVar12 = -0x16;
                    goto code_r0x08009814;
                }
                if (*(unaff_x28 + 0x3c) == '\0') {
                    puVar19 = unaff_x28[2];
                    uVar11 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                    uVar24 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uVar11 = (puVar19[1] & 0xff00ff00) >> 8 | (puVar19[1] & 0xff00ff) << 8;
                    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uStack_88 = CONCAT44(uVar11,uVar24);
                    uVar25 = (puVar19[2] & 0xff00ff00) >> 8 | (puVar19[2] & 0xff00ff) << 8;
                    uVar20 = uVar25 >> 0x10 | uVar25 << 0x10;
                    uVar25 = (puVar19[3] & 0xff00ff00) >> 8 | (puVar19[3] & 0xff00ff) << 8;
                    uVar23 = uVar25 >> 0x10 | uVar25 << 0x10;
                    uStack_80 = CONCAT44(uVar23,uVar20);
                    uVar25 = (puVar19[4] & 0xff00ff00) >> 8 | (puVar19[4] & 0xff00ff) << 8;
                    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                    if (!bVar8) {
                        uVar5 = (puVar19[5] & 0xff00ff00) >> 8 | (puVar19[5] & 0xff00ff) << 8;
                        uStack_78._4_4_ = uVar5 >> 0x10 | uVar5 << 0x10;
                        uVar5 = (puVar19[6] & 0xff00ff00) >> 8 | (puVar19[6] & 0xff00ff) << 8;
                        uVar6 = (puVar19[7] & 0xff00ff00) >> 8 | (puVar19[7] & 0xff00ff) << 8;
                        uStack_70 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
                    }
                    uStack_78 = CONCAT44(uStack_78._4_4_,uVar25);
                    uVar17 = uVar24;
                }
                else if (bVar8) {
                    uVar11 = 0xefcdab89;
                    uVar25 = 0xc3d2e1f0;
                    uVar20 = 0x98badcfe;
                    uVar17 = 0x67452301;
                    uVar23 = 0x10325476;
                    uStack_88 = _obj._std_init_vector_sha1;
                    uStack_80 = *0x80023ac;
                    uStack_78 = CONCAT44(uStack_78._4_4_,*0x80023b4);
                }
                else {
                    uVar11 = 0xbb67ae85;
                    uVar23 = 0xa54ff53a;
                    uVar17 = 0x6a09e667;
                    uVar25 = 0x510e527f;
                    uVar20 = 0x3c6ef372;
                    uStack_88 = _obj._std_init_vector_sha256;
                    uStack_80 = *0x80023c0;
                    uStack_78 = *0x80023c8;
                    uStack_70 = *0x80023d0;
                }
                uVar24 = *(param_1 + iVar13);
                sym.writel_relaxed(uVar17,param_1[9] + 0x1a310);
                sym.writel_relaxed(uVar11,param_1[9] + 0x1a314);
                sym.writel_relaxed(uVar20,param_1[9] + 0x1a318);
                sym.writel_relaxed(uVar23,param_1[9] + 0x1a31c);
                sym.writel_relaxed(uVar25,param_1[9] + 0x1a320);
                if ((*(unaff_x28 + 1) | 2) == 3) {
                    sym.writel_relaxed(uStack_78 >> 0x20,param_1[9] + 0x1a324);
                    sym.writel_relaxed(uStack_70 & 0xffffffff,param_1[9] + 0x1a328);
                    sym.writel_relaxed(uStack_70 >> 0x20,param_1[9] + 0x1a32c);
                }
                sym.writel_relaxed(*(unaff_x28 + 4),param_1[9] + 0x1a390);
                sym.writel_relaxed(*(unaff_x28 + 0x24),param_1[9] + 0x1a394);
                uVar25 = uVar24 & 0xfffcffff | *(unaff_x28 + 0x3d) << 0x10 | *(unaff_x28 + 0x3c) << 0x11;
                uVar11 = uVar25 | 0x40000;
                if (!bVar7) {
                    uVar11 = uVar25;
                }
                uVar25 = uVar11 | 0x80000;
                if (!bVar10) {
                    uVar25 = uVar11;
                }
                goto code_r0x08009764;
            }
            iVar12 = -5;
        }
code_r0x08009814:
        piVar15 = NULL;
        goto code_r0x08009c28;
    }
    iVar13 = unaff_x28[3];
    uVar11 = 0;
    do {
        uVar25 = uVar11;
        uVar11 = uVar25 + 1;
        iVar12 = iVar12 - *(iVar13 + 0xc);
        iVar13 = sg_next();
    } while (0 < iVar12);
    unaff_x26 = param_1 + unaff_x20 * 0x37f + 0x45e;
    *(param_1 + unaff_x20 * 0x37f + 0x45e) = uVar11;
    if (0x7ffffffe < uVar25) {
        cVar3 = *(param_1 + 8);
        goto joined_r0x08009008;
    }
    uVar26 = *param_1;
    uVar28 = unaff_x28[3];
    do {
        dma_map_sg_attrs(uVar26,uVar28,1,1,0);
        uVar28 = sg_next(uVar28);
        uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (*(param_1 + 8) == '\0') goto code_r0x08009058;
code_r0x0800900c:
    if (8 < unaff_x20) goto code_r0x0800a08c;
    switch(*(unaff_x28 + 1)) {
    case 0:
        iVar13 = 0x1010;
        break;
    case 1:
        iVar13 = 0x10e8;
        break;
    case 2:
        iVar13 = 0x11c0;
        break;
    case 3:
        iVar13 = 0x1298;
        break;
    case 4:
        if (*(unaff_x28 + 7) == 0x10) {
            iVar13 = 0x1370;
        }
        else {
            iVar13 = 0x1448;
        }
        break;
    default:
        goto code_r0x080094cc;
    }
    piVar15 = param_1 + iVar13 + unaff_x20 * 0x1bf8;
    if (piVar15 == NULL) {
code_r0x080094cc:
        _printk(0x8001463,"qce_process_sha_req");
        iVar12 = -0x16;
        piVar2 = param_1 + unaff_x20 * 0x37f + 0xe8;
        *(param_1 + unaff_x20 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar16 = *piVar2;
            cVar3 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar16 != 0) goto code_r0x08009d5c;
        goto code_r0x08009f7c;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar11 = *(unaff_x28 + 7);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar20 = *(param_1 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 | *(param_1 + 0x134) << 5;
    uVar25 = uVar20 | 0xe;
    *(param_1 + 0x8c) = uVar25;
    *(param_1 + 0x12) = uVar20 | 0x20e;
    *(piVar15[1] + 4) = uVar25;
    *(piVar15[2] + 4) = *(param_1 + 0x12);
    iVar12 = *(unaff_x28 + 1);
    if (iVar12 - 2U < 3) {
        puVar19 = piVar15[0x19];
        uVar25 = *(unaff_x28 + 10) & 3;
        bVar10 = uVar25 == 2;
        if ((*(unaff_x28 + 10) & 1) == 0) {
            *puVar19 = *(param_1 + 10) + 0x1a120U & 0xffffff | *(puVar19 + 3) << 0x18;
            if (uVar25 == 2) {
                bVar7 = false;
                bVar10 = true;
            }
            else {
                uVar25 = *(unaff_x28 + 7);
                puVar19 = &uStack_c8;
                iVar13 = piVar15[0x14];
                puVar21 = unaff_x28[6];
                if (uVar25 < 4) {
                    uVar17 = 0;
                }
                else {
                    uVar20 = uVar25 >> 2;
                    uVar17 = 0;
                    do {
                        uVar18 = uVar17;
                        if (0x3f < uVar18) goto code_r0x0800a088;
                        uVar20 = uVar20 - 1;
                        uVar23 = (*(puVar21 + uVar18) & 0xff00ff00) >> 8 | (*(puVar21 + uVar18) & 0xff00ff) << 8;
                        *(puVar19 + uVar18) = uVar23 >> 0x10 | uVar23 << 0x10;
                        uVar17 = uVar18 + 4;
                    } while (uVar20 != 0);
                    puVar21 = puVar21 + uVar17;
                    puVar19 = &uStack_c8 + uVar18 + 4;
                }
                uVar25 = uVar25 & 3;
                if (uVar25 == 1) {
                    uVar25 = *puVar21 << 0x18;
code_r0x0800993c:
                    if (0x3c < uVar17) {
code_r0x0800a088:
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(1,0x800a08c);
                        (*pcVar9)();
                    }
                    *puVar19 = uVar25;
                }
                else {
                    if (uVar25 == 2) {
                        uVar25 = *puVar21 << 0x18 | puVar21[1] << 0x10;
                        goto code_r0x0800993c;
                    }
                    if (uVar25 == 3) {
                        uVar25 = *puVar21 << 0x18 | puVar21[1] << 0x10 | puVar21[2] << 8;
                        goto code_r0x0800993c;
                    }
                }
                if (3 < uVar11) {
                    uVar25 = uVar11 >> 2;
                    if (uVar25 < 2) {
                        uVar25 = 1;
                    }
                    *(iVar13 + 4) = uStack_c8;
                    if (7 < uVar11) {
                        *(iVar13 + 0x14) = uStack_c8._4_4_;
                        if (uVar25 != 2) {
                            *(iVar13 + 0x24) = uStack_c0;
                            if (uVar25 != 3) {
                                *(iVar13 + 0x34) = uStack_c0._4_4_;
                                if (uVar25 != 4) {
                                    *(iVar13 + 0x44) = uStack_b8;
                                    if (uVar25 != 5) {
                                        *(iVar13 + 0x54) = uStack_b8._4_4_;
                                        if (uVar25 != 6) {
                                            *(iVar13 + 100) = uStack_b0;
                                            if (uVar25 != 7) {
                                                *(iVar13 + 0x74) = uStack_b0._4_4_;
                                                if (uVar25 != 8) {
                                                    *(iVar13 + 0x84) = uStack_a8;
                                                    if (uVar25 == 9) {
                                                        bVar7 = false;
                                                        bVar10 = false;
                                                    }
                                                    else {
                                                        *(iVar13 + 0x94) = uStack_a8._4_4_;
                                                        if (uVar25 != 10) {
                                                            *(iVar13 + 0xa4) = uStack_a0;
                                                            if (uVar25 != 0xb) {
                                                                *(iVar13 + 0xb4) = uStack_a0._4_4_;
                                                                if (uVar25 != 0xc) {
                                                                    *(iVar13 + 0xc4) = uStack_98;
                                                                    if (uVar25 != 0xd) {
                                                                        *(iVar13 + 0xd4) = uStack_98._4_4_;
                                                                        if (uVar25 != 0xe) {
                                                                            *(iVar13 + 0xe4) = uStack_90;
                                                                            if (uVar25 != 0xf) {
                                                                                *(iVar13 + 0xf4) = uStack_90._4_4_;
                                                                                if (uVar25 != 0x10)
                                                                                goto code_r0x0800a08c;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        bVar7 = false;
                                                        bVar10 = false;
                                                    }
                                                    goto code_r0x080099e4;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                bVar7 = false;
                bVar10 = false;
            }
        }
        else {
            bVar7 = true;
            *puVar19 = *(param_1 + 10) + 0x1b000U & 0xffffff | *(puVar19 + 3) << 0x18;
        }
code_r0x080099e4:
        iVar12 = *(unaff_x28 + 1);
        if (iVar12 != 4) goto code_r0x080099f0;
code_r0x08009bf4:
        *(piVar15[0x12] + 4) = *(unaff_x28 + 8);
        *(piVar15[3] + 4) = 0;
        *(piVar15[0x13] + 4) = 0;
        iVar16 = *(unaff_x28 + 8);
        if (iVar16 == 0) {
            iVar16 = *(param_1 + 0x2e);
        }
        iVar12 = 0;
        *(piVar15[0x18] + 4) = iVar16;
    }
    else {
        bVar10 = false;
        bVar7 = false;
code_r0x080099f0:
        if ((*(unaff_x28 + 0x3d) != '\0') || ((*(unaff_x28 + 8) & 0x3f) == 0)) {
            uStack_78._4_4_ = 0;
            switch(iVar12) {
            case 0:
            case 2:
                if (*(unaff_x28 + 0x3c) == '\0') {
                    bVar8 = true;
code_r0x08009ae4:
                    puVar19 = unaff_x28[2];
                    uVar11 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                    uVar20 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uVar11 = (puVar19[1] & 0xff00ff00) >> 8 | (puVar19[1] & 0xff00ff) << 8;
                    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uStack_88 = CONCAT44(uVar11,uVar20);
                    uVar25 = (puVar19[2] & 0xff00ff00) >> 8 | (puVar19[2] & 0xff00ff) << 8;
                    uVar24 = uVar25 >> 0x10 | uVar25 << 0x10;
                    uVar25 = (puVar19[3] & 0xff00ff00) >> 8 | (puVar19[3] & 0xff00ff) << 8;
                    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                    uStack_80 = CONCAT44(uVar25,uVar24);
                    uVar23 = (puVar19[4] & 0xff00ff00) >> 8 | (puVar19[4] & 0xff00ff) << 8;
                    uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
                    if (!bVar8) {
                        uVar5 = (puVar19[5] & 0xff00ff00) >> 8 | (puVar19[5] & 0xff00ff) << 8;
                        uStack_78._4_4_ = uVar5 >> 0x10 | uVar5 << 0x10;
                        uVar5 = (puVar19[6] & 0xff00ff00) >> 8 | (puVar19[6] & 0xff00ff) << 8;
                        uVar6 = (puVar19[7] & 0xff00ff00) >> 8 | (puVar19[7] & 0xff00ff) << 8;
                        uStack_70 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
                    }
                    uStack_78 = CONCAT44(uStack_78._4_4_,uVar23);
                }
                else {
                    uVar11 = 0xefcdab89;
                    uVar23 = 0xc3d2e1f0;
                    uVar24 = 0x98badcfe;
                    uVar20 = 0x67452301;
                    uVar25 = 0x10325476;
                    uStack_88 = _obj._std_init_vector_sha1;
                    uStack_80 = *0x80023ac;
                    uStack_78 = *0x80023b4;
                }
                break;
            case 1:
            case 3:
                if (*(unaff_x28 + 0x3c) == '\0') {
                    bVar8 = false;
                    goto code_r0x08009ae4;
                }
                uVar11 = 0xbb67ae85;
                uVar25 = 0xa54ff53a;
                uVar20 = 0x6a09e667;
                uVar23 = 0x510e527f;
                uVar24 = 0x3c6ef372;
                uStack_88 = _obj._std_init_vector_sha256;
                uStack_80 = *0x80023c0;
                uStack_78 = *0x80023c8;
                uStack_70 = *0x80023d0;
                break;
            default:
                iVar12 = -0x16;
                goto code_r0x08009c28;
            }
            iVar13 = piVar15[0x15];
            *(iVar13 + 4) = uVar20;
            *(iVar13 + 0x14) = uVar11;
            *(iVar13 + 0x24) = uVar24;
            *(iVar13 + 0x34) = uVar25;
            *(iVar13 + 0x44) = uVar23;
            if ((*(unaff_x28 + 1) | 2) == 3) {
                *(iVar13 + 0x54) = uStack_78._4_4_;
                *(iVar13 + 100) = uStack_70;
                *(iVar13 + 0x74) = uStack_70._4_4_;
            }
            iVar13 = piVar15[0x17];
            *(iVar13 + 4) = *(unaff_x28 + 4);
            *(iVar13 + 0x14) = *(unaff_x28 + 0x24);
            uVar11 = *(piVar15[0x11] + 4) & 0xfff0ffff;
            if (*(unaff_x28 + 0x3d) != '\0') {
                uVar11 = uVar11 | 0x10000;
            }
            if (*(unaff_x28 + 0x3c) != '\0') {
                uVar11 = uVar11 | 0x20000;
            }
            uVar25 = uVar11 | 0x40000;
            if (!bVar7) {
                uVar25 = uVar11;
            }
            uVar11 = uVar25 | 0x80000;
            if (!bVar10) {
                uVar11 = uVar25;
            }
            *(piVar15[0x11] + 4) = uVar11;
            goto code_r0x08009bf4;
        }
        iVar12 = -5;
    }
code_r0x08009c28:
    if (-1 < iVar12) {
        param_1[unaff_x20 * 0x37f + 0x45b] = iVar27;
        uVar28 = *unaff_x28;
        *(param_1 + unaff_x20 * 0x37f + 0x466) = 0;
        *(param_1 + unaff_x20 * 0x37f + 0xe9) = 0;
        param_1[unaff_x20 * 0x37f + 0x459] = uVar28;
        *(param_1 + unaff_x20 * 0x1bf8 + 0x232c) = *(unaff_x28 + 8);
        if (8 < unaff_x20) goto code_r0x0800a08c;
        cVar3 = *(param_1 + 8);
        *(param_1 + unaff_x20 * 0x37f + 0xee) = 0;
        *(param_1 + unaff_x20 * 0x37f + 0xf2) = 0;
        if ((cVar3 == '\0') || (piVar15 == NULL)) {
code_r0x08009cbc:
            iVar12 = sym._qce_sps_add_sg_data
                               (param_1,*(iVar27 + 0x38),*(iVar27 + 0x30),param_1 + unaff_x20 * 0x37f + 0xec);
            if (iVar12 != 0) goto code_r0x08009ce0;
            if (*(iVar27 + 0x30) == 0) {
                uVar25 = *(param_1 + 0x2e);
                puVar19 = param_1 + unaff_x20 * 0x37f + 0xee;
                uVar11 = *puVar19;
                uVar17 = uVar11;
                if (uVar25 != 0) {
                    iVar27 = (param_1[3] + *(param_1 + unaff_x20 * 0x37f + 0x456)) - param_1[2];
                    puVar22 = param_1[unaff_x20 * 0x37f + 0xed] + uVar17 * 8;
                    do {
                        if (uVar17 == 0x200) goto code_r0x08009fac;
                        uVar11 = uVar25;
                        if (0x1fe < uVar25 >> 6) {
                            uVar11 = 0x7fc0;
                        }
                        uVar25 = uVar25 - uVar11;
                        *puVar22 = iVar27;
                        puVar22[1] = iVar27 >> 0x10 & 0xf0000 | uVar11;
                        iVar27 = iVar27 + uVar11;
                        uVar11 = *puVar19 + 1;
                        uVar17 = uVar11;
                        *puVar19 = uVar11;
                        puVar22 = puVar22 + 2;
                    } while (uVar25 != 0);
                }
            }
            else {
                uVar11 = *(param_1 + unaff_x20 * 0x37f + 0xee);
            }
            if (uVar11 != 0) {
                iVar27 = param_1[unaff_x20 * 0x37f + 0xed] + (uVar11 - 1) * 8;
                *(iVar27 + 4) = *(iVar27 + 4) | 0x50000000;
            }
            if (*(param_1 + 0xf) != '\0') {
                uVar4 = *(param_1 + unaff_x20 * 0x37f + 0x453);
                iVar27 = (param_1[unaff_x20 * 0x37f + 0x439] - param_1[2]) + param_1[3];
                puVar19 = param_1 + unaff_x20 * 0x37f + 0xee;
                puVar22 = param_1[unaff_x20 * 0x37f + 0xed] + *puVar19 * 8;
                *puVar22 = iVar27;
                puVar22[1] = uVar4 | iVar27 >> 0x10 & 0xf0000 | 0xa000000;
                uVar11 = *puVar19 + 1;
                *puVar19 = uVar11;
                if (0x1ff < uVar11) goto code_r0x08009f98;
            }
            puVar19 = param_1 + unaff_x20 * 0x37f + 0xf2;
            if (*puVar19 != 0x200) {
                puVar22 = param_1[unaff_x20 * 0x37f + 0xf1] + *puVar19 * 8;
                iVar27 = (param_1[3] + *(param_1 + unaff_x20 * 0x37f + 0x454)) - param_1[2];
                *puVar22 = iVar27;
                puVar22[1] = iVar27 >> 0x10 & 0xf0000 | 0x80;
                uVar25 = *puVar19;
                uVar11 = uVar25 + 1;
                *puVar19 = uVar11;
                if (param_2 != NULL) {
                    sym.select_mode(param_1,param_1 + unaff_x20 * 0x37f + 0xe8);
                    iVar12 = sym._qce_sps_transfer(param_1,unaff_x20);
                    goto code_r0x0800a098;
                }
                if (uVar11 != 0) {
                    iVar27 = param_1[unaff_x20 * 0x37f + 0xf1] + uVar25 * 8;
                    *(iVar27 + 4) = *(iVar27 + 4) | 0x80000000;
                }
                iVar12 = sym._qce_sps_transfer(param_1,unaff_x20);
                goto joined_r0x08009f74;
            }
code_r0x08009fac:
            pcVar14 = "_qce_sps_add_data";
            uVar11 = 0x200;
        }
        else {
            uVar4 = *(piVar15 + 0x1a);
            iVar13 = (*piVar15 - param_1[2]) + param_1[3];
            puVar22 = param_1[unaff_x20 * 0x37f + 0xed];
            *puVar22 = iVar13;
            puVar22[1] = uVar4 | iVar13 >> 0x10 & 0xf0000 | 0xc000000;
            uVar11 = *(param_1 + unaff_x20 * 0x37f + 0xee) + 1;
            *(param_1 + unaff_x20 * 0x37f + 0xee) = uVar11;
            if (uVar11 < 0x200) goto code_r0x08009cbc;
code_r0x08009f98:
            pcVar14 = "_qce_sps_add_cmd";
        }
        _printk(0x8001aeb,pcVar14,uVar11,0x200);
        iVar12 = -0xc;
    }
code_r0x08009ce0:
    while( true ) {
        iVar16 = *unaff_x26;
        if ((iVar16 != 0) && (0 < iVar16)) {
            uVar26 = *param_1;
            uVar28 = unaff_x28[3];
            do {
                dma_unmap_sg_attrs(uVar26,uVar28,1,1,0);
                uVar28 = sg_next(uVar28);
                iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
        }
        if (8 < unaff_x20) break;
        piVar2 = param_1 + unaff_x20 * 0x37f + 0xe8;
        *(param_1 + unaff_x20 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar16 = *piVar2;
            cVar3 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar16 == 0) {
code_r0x08009f7c:
            _printk(0x800191f,"qce_free_req_info",unaff_x20 & 0xffffffff);
        }
code_r0x08009d5c:
        do {
            iVar27 = sp_el0;
            if (*(iVar27 + 0x5e0) == iStack_68) {
                return iVar12;
            }
            __stack_chk_fail();
code_r0x0800a098:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto joined_r0x08009f74;
                cVar3 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
joined_r0x08009f74:
        } while (iVar12 == 0);
    }
code_r0x0800a08c:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800a090);
    (*pcVar9)();
}


// ===== sym.__typeid__ZTSFvPvPhS0_iE_global_addr @ 0x08003338 (size 8) =====

void sym.__typeid__ZTSFvPvPhS0_iE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        return;
    }
    *in_x18 = unaff_x30;
    _printk(0x800232a,"qce_dummy_complete");
    return;
}


// ===== sym.qce_ablk_cipher_req.cfi_jt @ 0x08003340 (size 8) =====

int sym.qce_ablk_cipher_req.cfi_jt(ulong *param_1,int64_t param_2)

{
    int *piVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint uVar4;
    uint16_t uVar5;
    char cVar6;
    code *pcVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t iVar11;
    char *pcVar12;
    uint64_t uVar13;
    int iVar14;
    uint32_t *puVar15;
    ulong *arg2;
    uint *puVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    ulong *in_x18;
    uint64_t arg2_00;
    uint32_t uVar19;
    ulong uVar20;
    int64_t *piVar21;
    ulong uVar22;
    uint32_t *puVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar23 = *(param_2 + 0x10);
    uVar9 = sym.qce_alloc_req_info(param_1);
    if (uVar9 < 0) {
        return -0x10;
    }
    arg2_00 = uVar9;
    *(param_2 + 0xa8) = uVar9;
    if (9 < uVar9) goto code_r0x08006f84;
    arg2 = param_1 + arg2_00 * 0x37f + 0xe8;
    puVar2 = arg2 + 0x376;
    arg2[0x376] = 0;
    uVar18 = *puVar23;
    if (uVar18 < 1) {
        uVar17 = 0;
    }
    else {
        uVar17 = 0;
        iVar11 = *(puVar23 + 4);
        do {
            uVar17 = uVar17 + 1;
            uVar18 = uVar18 - *(iVar11 + 0xc);
            iVar11 = sg_next();
        } while (0 < uVar18);
    }
    *puVar2 = uVar17;
    puVar3 = arg2 + 0x1bb4;
    if (2 < *(param_2 + 0x94) - 1U) {
        iVar11 = *(puVar23 + 4);
        bVar8 = iVar11 != *(puVar23 + 6);
        if (0 < uVar17) {
            uVar22 = *param_1;
            do {
                dma_map_sg_attrs(uVar22,iVar11,1,bVar8,0);
                iVar11 = sg_next(iVar11);
                uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
        }
    }
    iVar11 = *(puVar23 + 6);
    if (*(puVar23 + 4) == iVar11) {
        uVar18 = *puVar2;
code_r0x0800689c:
        *puVar3 = uVar18;
    }
    else {
        uVar18 = *puVar23;
        if (uVar18 < 1) {
            uVar18 = 0;
            goto code_r0x0800689c;
        }
        uVar17 = 0;
        do {
            uVar19 = uVar17;
            uVar17 = uVar19 + 1;
            uVar18 = uVar18 - *(iVar11 + 0xc);
            iVar11 = sg_next();
        } while (0 < uVar18);
        *puVar3 = uVar17;
        if ((2 < *(param_2 + 0x94) - 1U) && (uVar19 < 0x7fffffff)) {
            uVar20 = *param_1;
            uVar22 = *(puVar23 + 6);
            do {
                dma_map_sg_attrs(uVar20,uVar22,1,2,0);
                uVar22 = sg_next(uVar22);
                uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
        }
    }
    iVar10 = *(param_2 + 0x1c);
    iVar14 = *(param_1 + 0x174);
    *(param_1 + arg2_00 * 0x37f + 0x462) = iVar10;
    if (((iVar14 == 0) && (iVar10 == 1)) && (*(param_2 + 0x20) == 0)) {
        iVar11 = ((**(puVar23 + 4) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (*(puVar23 + 4))[1] +
                 *(*(puVar23 + 4) + 0xc);
        uVar22 = *(iVar11 + -8);
        param_1[arg2_00 * 0x37f + 0x460] = *(iVar11 + -0x10);
        param_1[arg2_00 * 0x37f + 0x461] = uVar22;
        if (*(param_1 + 8) == '\0') goto code_r0x080069e0;
code_r0x080068dc:
        iVar10 = *(param_2 + 0x18);
        if (iVar10 != 0) {
            if (iVar10 == 1) {
                iVar14 = *(param_2 + 0x20);
                if (iVar14 == 1) {
                    piVar21 = param_1 + arg2_00 * 0x37f + 0x1e7;
                    iVar14 = 1;
                }
                else {
                    piVar21 = param_1 + arg2_00 * 0x37f + 0x1cc;
                }
                goto code_r0x08006ac8;
            }
            if (iVar10 == 2) {
                iVar14 = *(param_2 + 0x20);
                switch(iVar14) {
                case 0:
                case 2:
                    if (*(param_2 + 0x68) == 0x10) {
                        piVar21 = param_1 + arg2_00 * 0x37f + 0xf4;
                    }
                    else {
                        piVar21 = param_1 + arg2_00 * 0x37f + 0x10f;
                    }
                    break;
                case 1:
                    if (*(param_2 + 0x68) == 0x10) {
                        iVar14 = 1;
                        piVar21 = param_1 + arg2_00 * 0x37f + 0x12a;
                    }
                    else {
                        iVar14 = 1;
                        piVar21 = param_1 + arg2_00 * 0x37f + 0x145;
                    }
                    break;
                case 3:
                    if ((*(param_2 + 0x68) & 0xfffffffe) == 0x20) {
                        iVar14 = 3;
                        piVar21 = param_1 + arg2_00 * 0x37f + 0x160;
                    }
                    else {
                        iVar14 = 3;
                        piVar21 = param_1 + arg2_00 * 0x37f + 0x17b;
                    }
                    break;
                case 4:
                    if (*(param_2 + 0x68) == 0x10) {
                        iVar11 = 0x1be0;
                    }
                    else {
                        iVar11 = 0x1cb8;
                    }
                    piVar21 = param_1 + iVar11 + arg2_00 * 0x1bf8;
                    iVar14 = 4;
                    break;
                default:
                    goto code_r0x08006f18;
                }
                goto code_r0x08006ac8;
            }
            iVar14 = *(param_2 + 0x20);
code_r0x08006f18:
            _printk(0x80017f2,"qce_ablk_cipher_req",iVar10,iVar14);
            if (8 < uVar9) goto code_r0x08006f84;
            iVar10 = -0x16;
            piVar1 = param_1 + arg2_00 * 0x37f + 0xe8;
            *(param_1 + arg2_00 * 0x37f + 0xe9) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar14 = *piVar1;
                cVar6 = '\x01';
                bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                    *piVar1 = 0;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x08006f64;
        }
        iVar14 = *(param_2 + 0x20);
        if (iVar14 == 1) {
            piVar21 = param_1 + arg2_00 * 0x37f + 0x1b1;
            iVar14 = 1;
        }
        else {
            piVar21 = param_1 + arg2_00 * 0x37f + 0x196;
        }
code_r0x08006ac8:
        if (piVar21 == NULL) goto code_r0x08006f18;
        iVar10 = sym._ce_setup_cipher(param_1,param_2,*puVar23,0);
    }
    else {
        if (*(param_1 + 8) != '\0') goto code_r0x080068dc;
code_r0x080069e0:
        iVar10 = sym._ce_setup_cipher_direct(param_1,param_2,*puVar23,0);
        piVar21 = NULL;
    }
    if (-1 < iVar10) {
        *(param_1 + arg2_00 * 0x1bf8 + 0x2314) = *(param_2 + 0x20);
        uVar4 = *(param_2 + 0x94);
        param_1[arg2_00 * 0x37f + 0x45b] = puVar23;
        *(param_1 + arg2_00 * 0x37f + 0x466) = uVar4;
        uVar22 = *(param_2 + 8);
        *(param_1 + arg2_00 * 0x37f + 0xe9) = 1;
        param_1[arg2_00 * 0x37f + 0x459] = uVar22;
        *(param_1 + arg2_00 * 0x1bf8 + 0x232c) = *puVar23;
        if (8 < uVar9) goto code_r0x08006f84;
        uVar13 = 0;
        cVar6 = *(param_1 + 8);
        *(param_1 + arg2_00 * 0x37f + 0xee) = 0;
        *(param_1 + arg2_00 * 0x37f + 0xf2) = 0;
        if ((cVar6 == '\0') || (piVar21 == NULL)) {
code_r0x08006b90:
            uVar18 = *puVar23;
            puVar15 = param_1 + arg2_00 * 0x37f + 0xee;
            if (uVar18 != 0) {
                iVar11 = *(*(puVar23 + 4) + 0x10);
                puVar16 = param_1[arg2_00 * 0x37f + 0xed] + uVar13 * 8;
                do {
                    if (uVar13 == 0x200) {
                        pcVar12 = "_qce_sps_add_data";
                        goto code_r0x08006df8;
                    }
                    uVar17 = uVar18;
                    if (0x1fe < uVar18 >> 6) {
                        uVar17 = 0x7fc0;
                    }
                    uVar18 = uVar18 - uVar17;
                    *puVar16 = iVar11;
                    puVar16[1] = iVar11 >> 0x10 & 0xf0000 | uVar17;
                    iVar11 = iVar11 + uVar17;
                    uVar13 = *puVar15 + 1;
                    *puVar15 = *puVar15 + 1;
                    puVar16 = puVar16 + 2;
                } while (uVar18 != 0);
            }
            if (uVar13 != 0) {
                iVar11 = param_1[arg2_00 * 0x37f + 0xed] + (uVar13 - 1) * 8;
                *(iVar11 + 4) = *(iVar11 + 4) | 0x50000000;
            }
            if (*(param_1 + 0xf) != '\0') {
                uVar5 = *(param_1 + arg2_00 * 0x37f + 0x453);
                iVar11 = (param_1[arg2_00 * 0x37f + 0x439] - param_1[2]) + param_1[3];
                puVar16 = param_1[arg2_00 * 0x37f + 0xed] + *puVar15 * 8;
                *puVar16 = iVar11;
                puVar16[1] = uVar5 | iVar11 >> 0x10 & 0xf0000 | 0xa000000;
                uVar18 = *puVar15 + 1;
                uVar13 = uVar18;
                *puVar15 = uVar18;
                if (0x1ff < uVar18) goto code_r0x08006dbc;
            }
            uVar17 = *puVar23;
            puVar15 = param_1 + arg2_00 * 0x37f + 0xf2;
            uVar18 = *puVar15;
            uVar13 = uVar18;
            if (uVar17 != 0) {
                iVar11 = *(*(puVar23 + 6) + 0x10);
                puVar16 = param_1[arg2_00 * 0x37f + 0xf1] + uVar13 * 8;
                do {
                    if (uVar13 == 0x200) goto code_r0x08006dd0;
                    uVar18 = uVar17;
                    if (0x1fe < uVar17 >> 6) {
                        uVar18 = 0x7fc0;
                    }
                    uVar17 = uVar17 - uVar18;
                    *puVar16 = iVar11;
                    puVar16[1] = iVar11 >> 0x10 & 0xf0000 | uVar18;
                    iVar11 = iVar11 + uVar18;
                    uVar18 = *puVar15 + 1;
                    uVar13 = uVar18;
                    *puVar15 = uVar18;
                    puVar16 = puVar16 + 2;
                } while (uVar17 != 0);
            }
            if ((*(param_1 + 0xf) == '\0') && (0x7fc0 < *puVar23)) {
                *(arg2 + 2) = 0;
            }
            else {
                *(arg2 + 2) = 2;
                if (2 < *(param_2 + 0x94) - 1U) {
                    if (uVar18 == 0x200) {
code_r0x08006dd0:
                        pcVar12 = "_qce_sps_add_data";
                        uVar13 = 0x200;
                        goto code_r0x08006df8;
                    }
                    iVar11 = (param_1[3] + *(param_1 + arg2_00 * 0x37f + 0x454)) - param_1[2];
                    puVar16 = param_1[arg2_00 * 0x37f + 0xf1] + uVar18 * 8;
                    *puVar16 = iVar11;
                    puVar16[1] = iVar11 >> 0x10 & 0xf0000 | 0x80;
                    *puVar15 = *puVar15 + 1;
                }
            }
            sym.select_mode(param_1,arg2);
            iVar10 = sym._qce_sps_transfer(param_1,arg2_00);
            piVar1 = param_1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x08006f94;
                cVar6 = '\x01';
                bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                    *piVar1 = 0;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006f94:
            if (iVar10 == 0) {
                return 0;
            }
        }
        else {
            iVar11 = (*piVar21 - param_1[2]) + param_1[3];
            uVar5 = *(piVar21 + 0x1a);
            puVar16 = param_1[arg2_00 * 0x37f + 0xed];
            *puVar16 = iVar11;
            puVar16[1] = uVar5 | iVar11 >> 0x10 & 0xf0000 | 0xc000000;
            uVar18 = *(param_1 + arg2_00 * 0x37f + 0xee) + 1;
            uVar13 = uVar18;
            *(param_1 + arg2_00 * 0x37f + 0xee) = uVar18;
            if (uVar18 < 0x200) goto code_r0x08006b90;
code_r0x08006dbc:
            pcVar12 = "_qce_sps_add_cmd";
code_r0x08006df8:
            _printk(0x8001aeb,pcVar12,uVar13,0x200);
            iVar10 = -0xc;
        }
    }
    if (2 < *(param_2 + 0x94) - 1U) {
        iVar11 = *(puVar23 + 6);
        if (((*(puVar23 + 4) != iVar11) && (uVar18 = *puVar3, uVar18 != 0)) && (0 < uVar18)) {
            uVar22 = *param_1;
            do {
                dma_unmap_sg_attrs(uVar22,iVar11,1,2,0);
                iVar11 = sg_next(iVar11);
                uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
        }
        uVar18 = *puVar2;
        if (uVar18 != 0) {
            iVar11 = *(puVar23 + 4);
            bVar8 = iVar11 != *(puVar23 + 6);
            if (0 < uVar18) {
                uVar22 = *param_1;
                do {
                    dma_unmap_sg_attrs(uVar22,iVar11,1,bVar8,0);
                    iVar11 = sg_next(iVar11);
                    uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
            }
        }
    }
    if (uVar9 < 9) {
        piVar1 = param_1 + arg2_00 * 0x37f + 0xe8;
        *(param_1 + arg2_00 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar14 = *piVar1;
            cVar6 = '\x01';
            bVar8 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
                *piVar1 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
joined_r0x08006f64:
        if (iVar14 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2_00);
        }
        return iVar10;
    }
code_r0x08006f84:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8006f88);
    (*pcVar7)();
}


// ===== sym.qce_aead_req.cfi_jt @ 0x08003348 (size 8) =====

int sym.qce_aead_req.cfi_jt(ulong *param_1,int64_t param_2)

{
    int *piVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    code *pcVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint uVar18;
    uint uVar19;
    int64_t iVar20;
    uint *puVar21;
    uint uVar22;
    uint32_t uVar23;
    uint32_t *puVar24;
    uint64_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint uVar28;
    uint8_t *puVar29;
    int64_t iVar30;
    int64_t iVar31;
    int64_t iVar32;
    int64_t iVar33;
    ulong *in_x18;
    uint64_t arg2;
    ulong uVar34;
    ulong *arg2_00;
    int iVar35;
    ulong uVar36;
    ulong unaff_x30;
    uint32_t uStack_124;
    uint32_t uStack_120;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    if (*(param_2 + 0x20) == 4) {
        iVar9 = sym._qce_aead_ccm_req(param_1,param_2);
    }
    else {
        uVar10 = sym.qce_alloc_req_info(param_1);
        if (uVar10 < 0) {
            iVar9 = -0x10;
        }
        else {
            arg2 = uVar10;
            *(param_2 + 0xa8) = uVar10;
            if (9 < uVar10) goto code_r0x0800533c;
            iVar11 = *(param_2 + 0x10);
            uVar14 = *(*(*(iVar11 + 0x20) + 0x10) + -0x50);
            *(param_2 + 0x78) = uVar14;
            if (*(param_2 + 0x1c) == 0) {
                uVar17 = *(iVar11 + 0x34);
            }
            else {
                uVar17 = *(iVar11 + 0x34) - *(param_2 + 0x34);
            }
            *(param_2 + 0x80) = uVar17;
            uVar23 = *(iVar11 + 0x30);
            if (CARRY4(uVar23,uVar17)) {
                _printk(0x800138b,"qce_aead_req");
                iVar9 = -0x16;
                goto code_r0x08004b54;
            }
            uVar17 = uVar23 + uVar17;
            if (*(param_1 + 8) == '\0') {
                piVar12 = NULL;
code_r0x08004594:
                if (uVar17 < 1) {
                    iVar9 = 0;
                }
                else {
                    iVar9 = 0;
                    iVar20 = *(iVar11 + 0x40);
                    uVar14 = uVar17;
                    do {
                        iVar9 = iVar9 + 1;
                        uVar14 = uVar14 - *(iVar20 + 0xc);
                        iVar20 = sg_next();
                    } while (0 < uVar14);
                }
                *(param_1 + arg2 * 0x37f + 0x45e) = iVar9;
                iVar20 = *(iVar11 + 0x40);
                iVar30 = *(iVar11 + 0x48);
                bVar8 = iVar20 != iVar30;
                if (0 < iVar9) {
                    uVar36 = *param_1;
                    do {
                        dma_map_sg_attrs(uVar36,iVar20,1,bVar8,0);
                        iVar20 = sg_next(iVar20);
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    iVar20 = *(iVar11 + 0x40);
                    iVar30 = *(iVar11 + 0x48);
                }
                if (iVar20 != iVar30) {
                    if (uVar17 < 1) {
                        *(param_1 + arg2 * 0x1bf8 + 0x22f4) = 0;
                    }
                    else {
                        uVar14 = 0;
                        uVar23 = uVar17;
                        do {
                            uVar27 = uVar14;
                            uVar14 = uVar27 + 1;
                            uVar23 = uVar23 - *(iVar30 + 0xc);
                            iVar30 = sg_next();
                        } while (0 < uVar23);
                        *(param_1 + arg2 * 0x1bf8 + 0x22f4) = uVar14;
                        if (uVar27 < 0x7fffffff) {
                            uVar34 = *param_1;
                            uVar36 = *(iVar11 + 0x48);
                            do {
                                dma_map_sg_attrs(uVar34,uVar36,1,2,0);
                                uVar36 = sg_next(uVar36);
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    }
                }
                param_1[arg2 * 0x37f + 0x45b] = *(param_2 + 0x10);
                param_1[arg2 * 0x37f + 0x459] = *(param_2 + 8);
                uVar18 = *(param_2 + 0x1c);
                param_1[arg2 * 0x37f + 0x45d] = 0;
                *(param_1 + arg2 * 0x37f + 0x466) = 0;
                *(param_1 + arg2 * 0x37f + 0xe9) = 2;
                *(param_1 + arg2 * 0x37f + 0x462) = uVar18;
                *(param_1 + arg2 * 0x1bf8 + 0x232c) = uVar17;
                if (8 < uVar10) goto code_r0x0800533c;
                cVar2 = *(param_1 + 8);
                *(param_1 + arg2 * 0x37f + 0xee) = 0;
                *(param_1 + arg2 * 0x37f + 0xf2) = 0;
                if (cVar2 == '\0') {
                    uVar3 = *(iVar11 + 0x30);
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uVar14 = *(param_2 + 0x78);
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    sym.writel_relaxed(0,param_1[9] + 0x1a100);
                    if (*(param_2 + 0x94) < 4) {
                        uVar27 = *(param_1 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 |
                                 *(param_1 + *(param_2 + 0x94) * 4 + 0x134) << 5;
                        uVar23 = uVar27 | 0xe;
                        *(param_1 + 0x8c) = uVar23;
                        *(param_1 + 0x12) = uVar27 | 0x20e;
                        sym.writel_relaxed(uVar23,param_1[9] + 0x1a400);
                        DataSynchronizationBarrier(3,3,0);
                        iVar9 = *(param_2 + 0x18);
                        uVar23 = *(param_2 + 0x68);
                        if (iVar9 == 2) {
                            if (*(param_2 + 0x20) == 0) {
                                if (uVar23 == 0x10) {
                                    bVar8 = false;
                                    iVar20 = 0x94;
                                }
                                else {
                                    if (uVar23 != 0x20) goto code_r0x08004a74;
                                    bVar8 = false;
                                    iVar20 = 0x98;
                                }
                                goto code_r0x08004c8c;
                            }
                        }
                        else if (iVar9 == 1) {
                            if (*(param_2 + 0x20) == 0) {
                                bVar8 = true;
                                iVar20 = 0xc4;
                                goto code_r0x08004c8c;
                            }
                        }
                        else if ((iVar9 == 0) && (*(param_2 + 0x20) == 0)) {
                            bVar8 = true;
                            iVar20 = 0xbc;
code_r0x08004c8c:
                            uVar27 = *(param_1 + iVar20);
                            puVar15 = &uStack_100;
                            puVar24 = *(param_2 + 0x70);
                            if (uVar14 < 4) {
                                bVar6 = false;
                                puVar13 = puVar24;
                            }
                            else {
                                puVar13 = puVar24 + 1;
                                uVar26 = (*puVar24 & 0xff00ff00) >> 8 | (*puVar24 & 0xff00ff) << 8;
                                uVar4 = uVar26 >> 0x10 | uVar26 << 0x10;
                                uVar26 = uVar14 >> 2;
                                uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
                                if (uVar26 == 1) {
                                    bVar6 = false;
                                    puVar15 = puVar15 | 4;
                                }
                                else {
                                    uVar5 = (puVar24[1] & 0xff00ff00) >> 8 | (puVar24[1] & 0xff00ff) << 8;
                                    uStack_100 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                    if (uVar26 == 2) {
                                        bVar6 = false;
                                        puVar13 = puVar24 + 2;
                                        puVar15 = &uStack_f8;
                                    }
                                    else {
                                        uVar4 = (puVar24[2] & 0xff00ff00) >> 8 | (puVar24[2] & 0xff00ff) << 8;
                                        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                                        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar4);
                                        if (uVar26 == 3) {
                                            bVar6 = false;
                                            puVar13 = puVar24 + 3;
                                            puVar15 = &uStack_f8 + 4;
                                        }
                                        else {
                                            uVar5 = (puVar24[3] & 0xff00ff00) >> 8 | (puVar24[3] & 0xff00ff) << 8;
                                            uStack_f8 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                            if (uVar26 != 4) goto code_r0x08005334;
                                            puVar13 = puVar24 + 4;
                                            puVar15 = &uStack_f0;
                                            bVar6 = true;
                                        }
                                    }
                                }
                            }
                            uVar14 = uVar14 & 3;
                            if (uVar14 == 1) {
                                uVar14 = *puVar13 << 0x18;
code_r0x08004d98:
                                if (bVar6) goto code_r0x08005334;
                                *puVar15 = uVar14;
                            }
                            else {
                                if (uVar14 == 2) {
                                    uVar14 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10;
                                    goto code_r0x08004d98;
                                }
                                if (uVar14 == 3) {
                                    uVar14 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10 | *(puVar13 + 2) << 8;
                                    goto code_r0x08004d98;
                                }
                            }
                            sym.writel_relaxed(uStack_100 & 0xffffffff,param_1[9] + 0x1a20c);
                            sym.writel_relaxed(uStack_100 >> 0x20,param_1[9] + 0x1a210);
                            if (!bVar8) {
                                sym.writel_relaxed(uStack_f8 & 0xffffffff,param_1[9] + 0x1a214);
                                sym.writel_relaxed(uStack_f8 >> 0x20,param_1[9] + 0x1a218);
                            }
                            uVar14 = uVar23 >> 2;
                            puVar15 = &uStack_f0;
                            puVar29 = *(param_2 + 0x60);
                            if (uVar23 < 4) {
                                uVar25 = 0;
                            }
                            else {
                                uVar25 = 0;
                                uVar26 = uVar14;
                                do {
                                    uVar16 = uVar25;
                                    if (0x3f < uVar16) goto code_r0x08005334;
                                    uVar26 = uVar26 - 1;
                                    uVar4 = (*(puVar29 + uVar16) & 0xff00ff00) >> 8 |
                                            (*(puVar29 + uVar16) & 0xff00ff) << 8;
                                    *(puVar15 + uVar16) = uVar4 >> 0x10 | uVar4 << 0x10;
                                    uVar25 = uVar16 + 4;
                                } while (uVar26 != 0);
                                puVar29 = puVar29 + uVar25;
                                puVar15 = &uStack_f0 + uVar16 + 4;
                            }
                            uVar26 = uVar23 & 3;
                            if (uVar26 == 1) {
                                uVar26 = *puVar29 << 0x18;
code_r0x08004e9c:
                                if (0x3c < uVar25) goto code_r0x08005334;
                                *puVar15 = uVar26;
                            }
                            else {
                                if (uVar26 == 2) {
                                    uVar26 = *puVar29 << 0x18 | puVar29[1] << 0x10;
                                    goto code_r0x08004e9c;
                                }
                                if (uVar26 == 3) {
                                    uVar26 = *puVar29 << 0x18 | puVar29[1] << 0x10 | puVar29[2] << 8;
                                    goto code_r0x08004e9c;
                                }
                            }
                            if (3 < uVar23) {
                                iVar20 = 0;
                                if (uVar14 < 2) {
                                    uVar14 = 1;
                                }
                                do {
                                    if (iVar20 == 0x40) goto code_r0x0800533c;
                                    sym.writel_relaxed(*(&uStack_f0 + iVar20),param_1[9] + iVar20 + 0x1d000);
                                    iVar20 = iVar20 + 4;
                                } while (uVar14 * 4 - iVar20 != 0);
                            }
                            uVar14 = uVar27 | 0x400;
                            if (*(param_2 + 0x1c) != 0) {
                                uVar14 = uVar27;
                            }
                            sym.writel_relaxed(uVar14,param_1[9] + 0x1a200);
                            uVar14 = *(param_2 + 0x30);
                            puVar15 = &uStack_b0;
                            puVar29 = *(param_2 + 0x28);
                            if (uVar14 < 4) {
                                uVar25 = 0;
                            }
                            else {
                                uVar23 = uVar14 >> 2;
                                uVar25 = 0;
                                do {
                                    uVar16 = uVar25;
                                    if (0x3f < uVar16) goto code_r0x08005334;
                                    uVar23 = uVar23 - 1;
                                    uVar27 = (*(puVar29 + uVar16) & 0xff00ff00) >> 8 |
                                             (*(puVar29 + uVar16) & 0xff00ff) << 8;
                                    *(puVar15 + uVar16) = uVar27 >> 0x10 | uVar27 << 0x10;
                                    uVar25 = uVar16 + 4;
                                } while (uVar23 != 0);
                                puVar29 = puVar29 + uVar25;
                                puVar15 = &uStack_b0 + uVar16 + 4;
                            }
                            uVar14 = uVar14 & 3;
                            if (uVar14 == 1) {
                                uVar14 = *puVar29 << 0x18;
code_r0x08004fb4:
                                if (0x3c < uVar25) {
code_r0x08005334:
    //WARNING: Does not return
                                    pcVar7 = SoftwareBreakpoint(1,0x8005338);
                                    (*pcVar7)();
                                }
                                *puVar15 = uVar14;
                            }
                            else {
                                if (uVar14 == 2) {
                                    uVar14 = *puVar29 << 0x18 | puVar29[1] << 0x10;
                                    goto code_r0x08004fb4;
                                }
                                if (uVar14 == 3) {
                                    uVar14 = *puVar29 << 0x18 | puVar29[1] << 0x10 | puVar29[2] << 8;
                                    goto code_r0x08004fb4;
                                }
                            }
                            iVar20 = 0x1a320;
                            sym.writel_relaxed(uStack_b0 & 0xffffffff,param_1[9] + 0x1d040);
                            sym.writel_relaxed(uStack_b0 >> 0x20,param_1[9] + 0x1d044);
                            sym.writel_relaxed(uStack_a8 & 0xffffffff,param_1[9] + 0x1d048);
                            sym.writel_relaxed(uStack_a8 >> 0x20,param_1[9] + 0x1d04c);
                            sym.writel_relaxed(uStack_a0 & 0xffffffff,param_1[9] + 0x1d050);
                            sym.writel_relaxed(uStack_a0 >> 0x20,param_1[9] + 0x1d054);
                            sym.writel_relaxed(uStack_98 & 0xffffffff,param_1[9] + 0x1d058);
                            sym.writel_relaxed(uStack_98 >> 0x20,param_1[9] + 0x1d05c);
                            sym.writel_relaxed(uStack_90 & 0xffffffff,param_1[9] + 0x1d060);
                            sym.writel_relaxed(uStack_90 >> 0x20,param_1[9] + 0x1d064);
                            sym.writel_relaxed(uStack_88 & 0xffffffff,param_1[9] + 0x1d068);
                            sym.writel_relaxed(uStack_88 >> 0x20,param_1[9] + 0x1d06c);
                            sym.writel_relaxed(uStack_80 & 0xffffffff,param_1[9] + 0x1d070);
                            sym.writel_relaxed(uStack_80 >> 0x20,param_1[9] + 0x1d074);
                            sym.writel_relaxed(uStack_78 & 0xffffffff,param_1[9] + 0x1d078);
                            sym.writel_relaxed(uStack_78 >> 0x20,param_1[9] + 0x1d07c);
                            if (*(param_2 + 0x24) == 2) {
                                uVar14 = 0xefcdab89;
                                uVar23 = 0x10325476;
                                uStack_120 = 0xc3d2e1f0;
                                uStack_124 = 0x98badcfe;
                                sym.writel_relaxed(0x67452301,param_1[9] + 0x1a310);
                                iVar32 = 0x1a314;
                                iVar30 = 0x1a318;
                                iVar31 = 0x1a31c;
                            }
                            else {
                                uVar14 = 0x510e527f;
                                uVar23 = 0x1f83d9ab;
                                uStack_124 = 0x9b05688c;
                                uStack_120 = 0x5be0cd19;
                                sym.writel_relaxed(0x6a09e667,param_1[9] + 0x1a310);
                                sym.writel_relaxed(0xbb67ae85,param_1[9] + 0x1a314);
                                sym.writel_relaxed(0x3c6ef372,param_1[9] + 0x1a318);
                                sym.writel_relaxed(0xa54ff53a,param_1[9] + 0x1a31c);
                                iVar30 = 0x1a324;
                                iVar31 = 0x1a328;
                                iVar20 = 0x1a32c;
                                iVar32 = 0x1a320;
                            }
                            sym.writel_relaxed(uVar14,param_1[9] + iVar32);
                            sym.writel_relaxed(uStack_124,param_1[9] + iVar30);
                            sym.writel_relaxed(uVar23,param_1[9] + iVar31);
                            sym.writel_relaxed(uStack_120,param_1[9] + iVar20);
                            sym.writel_relaxed(0,param_1[9] + 0x1a390);
                            sym.writel_relaxed(0,param_1[9] + 0x1a394);
                            sym.writel_relaxed(*(param_2 + 0x80),param_1[9] + 0x1a204);
                            sym.writel_relaxed(uVar3,param_1[9] + 0x1a208);
                            iVar20 = 0xf4;
                            if (*(param_2 + 0x24) != 2) {
                                iVar20 = 0xf8;
                            }
                            uVar14 = *(param_1 + iVar20) | 0x4000;
                            if (*(param_2 + 0x1c) != 0) {
                                uVar14 = *(param_1 + iVar20);
                            }
                            sym.writel_relaxed(uVar14,param_1[9] + 0x1a300);
                            sym.writel_relaxed(uVar17,param_1[9] + 0x1a304);
                            sym.writel_relaxed(0,param_1[9] + 0x1a308);
                            sym.writel_relaxed(uVar17,param_1[9] + 0x1a110);
                            sym.writel_relaxed(*(param_1 + 0x12),param_1[9] + 0x1a400);
                            sym.writel_relaxed(7,param_1[9] + 0x1a120);
                            DataSynchronizationBarrier(3,3,0);
                            goto code_r0x0800477c;
                        }
                    }
                    else {
                        _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
                    }
code_r0x08004a74:
                    iVar9 = -0x16;
                }
                else {
                    iVar20 = (*piVar12 - param_1[2]) + param_1[3];
                    uVar3 = *(piVar12 + 0x1a);
                    puVar21 = param_1[arg2 * 0x37f + 0xed];
                    *puVar21 = iVar20;
                    puVar21[1] = uVar3 | iVar20 >> 0x10 & 0xf0000 | 0xc000000;
                    uVar14 = *(param_1 + arg2 * 0x37f + 0xee) + 1;
                    *(param_1 + arg2 * 0x37f + 0xee) = uVar14;
                    if (uVar14 < 0x200) {
code_r0x0800477c:
                        uVar25 = uVar17;
                        iVar35 = *(param_1 + 0x174);
                        arg2_00 = param_1 + uVar10 * 0x37f + 0xe8;
                        *(param_1 + arg2 * 0x1bf8 + 0x2314) = *(param_2 + 0x20);
                        iVar9 = sym._qce_sps_add_sg_data
                                          (param_1,*(iVar11 + 0x40),uVar25,param_1 + arg2 * 0x37f + 0xec);
                        if (iVar35 == 0) {
                            if (iVar9 == 0) {
                                if (*(param_1 + arg2 * 0x37f + 0xee) != 0) {
                                    iVar20 = param_1[arg2 * 0x37f + 0xed] + (*(param_1 + arg2 * 0x37f + 0xee) - 1) * 8;
                                    *(iVar20 + 4) = *(iVar20 + 4) | 0x50000000;
                                }
                                iVar9 = sym._qce_sps_add_sg_data
                                                  (param_1,*(iVar11 + 0x48),uVar25,param_1 + arg2 * 0x37f + 0xf0);
                                if (iVar9 == 0) {
                                    if (uVar17 < 0x7fc1) {
                                        iVar9 = sym._qce_sps_add_data
                                                          ((param_1[3] + *(param_1 + arg2 * 0x37f + 0x454)) - param_1[2]
                                                           ,0x80,param_1 + arg2 * 0x37f + 0xf0);
                                        if (iVar9 != 0) goto code_r0x08004a78;
                                        uVar19 = 2;
                                        iVar9 = *(param_1 + arg2 * 0x37f + 0xf2);
                                        uVar18 = 2;
                                    }
                                    else {
                                        uVar18 = 0;
                                        uVar19 = 0;
                                        iVar9 = *(param_1 + arg2 * 0x37f + 0xf2);
                                    }
                                    if (iVar9 != 0) {
                                        iVar20 = param_1[arg2 * 0x37f + 0xf1] + (iVar9 - 1) * 8;
                                        *(iVar20 + 4) = *(iVar20 + 4) | 0x80000000;
                                        uVar19 = uVar18;
                                    }
                                    *(arg2_00 + 2) = uVar19;
                                    iVar9 = sym._qce_sps_transfer(param_1,arg2);
joined_r0x080049f4:
                                    if (iVar9 == 0) goto code_r0x08004b54;
                                }
                            }
                        }
                        else if (iVar9 == 0) {
                            if (*(param_1 + arg2 * 0x37f + 0xee) != 0) {
                                iVar20 = param_1[arg2 * 0x37f + 0xed] + (*(param_1 + arg2 * 0x37f + 0xee) - 1) * 8;
                                *(iVar20 + 4) = *(iVar20 + 4) | 0x50000000;
                            }
                            if ((*(param_1 + 0xf) == '\0') ||
                               (iVar9 = sym._qce_sps_add_cmd
                                                  (param_1,param_1 + arg2 * 0x37f + 0x439,
                                                   param_1 + arg2 * 0x37f + 0xec), iVar9 == 0)) {
                                iVar9 = sym._qce_sps_add_sg_data
                                                  (param_1,*(iVar11 + 0x48),uVar25,param_1 + arg2 * 0x37f + 0xf0);
                                if (iVar9 == 0) {
                                    if ((*(param_1 + 0xf) == '\0') && (0x7fc0 < uVar17)) {
                                        uVar18 = 0;
                                    }
                                    else {
                                        iVar9 = sym._qce_sps_add_data
                                                          ((param_1[3] + *(param_1 + arg2 * 0x37f + 0x454)) - param_1[2]
                                                           ,0x80,param_1 + arg2 * 0x37f + 0xf0);
                                        if (iVar9 != 0) goto code_r0x08004a78;
                                        uVar18 = 2;
                                    }
                                    *(arg2_00 + 2) = uVar18;
                                    sym.select_mode(param_1,arg2_00);
                                    iVar9 = sym._qce_sps_transfer(param_1,arg2);
                                    piVar1 = param_1 + 0x102fc;
                                    Hint_Prefetch(piVar1,2,0,1);
                                    do {
                                        if (*piVar1 != 1) goto joined_r0x080049f4;
                                        cVar2 = '\x01';
                                        bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                                        if (bVar8) {
                                            *piVar1 = 0;
                                            cVar2 = ExclusiveMonitorsStatus();
                                        }
                                    } while (cVar2 != '\0');
                                    DataMemoryBarrier(2,3);
                                    goto joined_r0x080049f4;
                                }
                            }
                        }
                    }
                    else {
                        _printk(0x8001aeb,"_qce_sps_add_cmd",uVar14,0x200);
                        iVar9 = -0xc;
                    }
                }
code_r0x08004a78:
                iVar35 = *(param_1 + arg2 * 0x37f + 0x45e);
                if (iVar35 != 0) {
                    iVar20 = *(iVar11 + 0x40);
                    bVar8 = iVar20 != *(iVar11 + 0x48);
                    if (0 < iVar35) {
                        uVar36 = *param_1;
                        do {
                            dma_unmap_sg_attrs(uVar36,iVar20,1,bVar8,0);
                            iVar20 = sg_next(iVar20);
                            iVar35 = iVar35 + -1;
                        } while (iVar35 != 0);
                    }
                }
                iVar20 = *(iVar11 + 0x48);
                if ((*(iVar11 + 0x40) != iVar20) && (iVar35 = *(param_1 + arg2 * 0x1bf8 + 0x22f4), 0 < iVar35)) {
                    uVar36 = *param_1;
                    do {
                        dma_unmap_sg_attrs(uVar36,iVar20,1,2,0);
                        iVar20 = sg_next(iVar20);
                        iVar35 = iVar35 + -1;
                    } while (iVar35 != 0);
                }
                piVar1 = param_1 + arg2 * 0x37f + 0xe8;
                *(param_1 + arg2 * 0x37f + 0xe9) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar35 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
                if (iVar35 == 0) {
                    _printk(0x800191f,"qce_free_req_info",arg2);
                }
                goto code_r0x08004b54;
            }
            if (8 < uVar10) goto code_r0x0800533c;
            iVar9 = *(param_2 + 0x18);
            if (iVar9 == 0) {
                iVar35 = *(param_2 + 0x20);
                if (iVar35 == 0) {
                    if (*(param_2 + 0x24) == 3) {
                        iVar20 = 0x1a30;
                    }
                    else {
                        if (*(param_2 + 0x24) != 2) goto code_r0x08003f8c;
                        iVar20 = 0x16d0;
                    }
                    goto code_r0x08003e94;
                }
code_r0x08003f90:
                _printk(0x80018b2,"qce_aead_req",iVar9,iVar35,*(param_2 + 0x68),*(param_2 + 0x34));
                piVar1 = param_1 + arg2 * 0x37f + 0xe8;
                *(param_1 + arg2 * 0x37f + 0xe9) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            else {
                if (iVar9 == 1) {
                    iVar35 = *(param_2 + 0x20);
                    if (iVar35 == 0) {
                        if (*(param_2 + 0x24) == 3) {
                            iVar20 = 0x1b08;
                        }
                        else {
                            if (*(param_2 + 0x24) != 2) goto code_r0x08003f8c;
                            iVar20 = 0x17a8;
                        }
                        goto code_r0x08003e94;
                    }
                    goto code_r0x08003f90;
                }
                if (iVar9 != 2) {
                    iVar35 = *(param_2 + 0x20);
                    goto code_r0x08003f90;
                }
                iVar35 = *(param_2 + 0x20);
                if (iVar35 != 0) goto code_r0x08003f90;
                if (*(param_2 + 0x68) != 0x20) {
                    if (*(param_2 + 0x68) == 0x10) {
                        if (*(param_2 + 0x24) == 3) {
                            iVar20 = 0x1880;
                        }
                        else {
                            if (*(param_2 + 0x24) != 2) goto code_r0x08003f8c;
                            iVar20 = 0x1520;
                        }
                        goto code_r0x08003e94;
                    }
code_r0x08003f8c:
                    iVar35 = 0;
                    goto code_r0x08003f90;
                }
                if (*(param_2 + 0x24) == 3) {
                    iVar20 = 0x1958;
                }
                else {
                    if (*(param_2 + 0x24) != 2) goto code_r0x08003f8c;
                    iVar20 = 0x15f8;
                }
code_r0x08003e94:
                piVar12 = param_1 + iVar20 + arg2 * 0x1bf8;
                if (piVar12 == NULL) goto code_r0x08003f8c;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_e0 = 0;
                uStack_d8 = 0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                uStack_100 = 0;
                uStack_f8 = 0;
                if (*(param_2 + 0x94) < 4) {
                    uVar4 = *(param_1 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 |
                            *(param_1 + *(param_2 + 0x94) * 4 + 0x134) << 5;
                    uVar26 = uVar4 | 0xe;
                    uVar27 = *(param_2 + 0x68);
                    *(param_1 + 0x8c) = uVar26;
                    *(param_1 + 0x12) = uVar4 | 0x20e;
                    *(piVar12[1] + 4) = uVar26;
                    *(piVar12[2] + 4) = *(param_1 + 0x12);
                    if (*(param_2 + 0x18) < 2) {
                        bVar8 = true;
                    }
                    else if ((*(param_2 + 0x18) != 2) || ((bVar8 = false, uVar27 != 0x20 && (uVar27 != 0x10))))
                    goto code_r0x0800403c;
                    if (*(param_2 + 0x20) == 0) {
                        puVar15 = &uStack_100;
                        puVar24 = *(param_2 + 0x70);
                        if (uVar14 < 4) {
                            bVar6 = false;
                            puVar13 = puVar24;
                        }
                        else {
                            puVar13 = puVar24 + 1;
                            uVar26 = (*puVar24 & 0xff00ff00) >> 8 | (*puVar24 & 0xff00ff) << 8;
                            uVar4 = uVar26 >> 0x10 | uVar26 << 0x10;
                            uVar26 = uVar14 >> 2;
                            uStack_100 = uVar4;
                            if (uVar26 == 1) {
                                bVar6 = false;
                                puVar15 = puVar15 | 4;
                            }
                            else {
                                uVar5 = (puVar24[1] & 0xff00ff00) >> 8 | (puVar24[1] & 0xff00ff) << 8;
                                uStack_100 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                if (uVar26 == 2) {
                                    bVar6 = false;
                                    puVar13 = puVar24 + 2;
                                    puVar15 = &uStack_f8;
                                }
                                else {
                                    uVar4 = (puVar24[2] & 0xff00ff00) >> 8 | (puVar24[2] & 0xff00ff) << 8;
                                    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                                    uStack_f8 = uVar4;
                                    if (uVar26 == 3) {
                                        bVar6 = false;
                                        puVar13 = puVar24 + 3;
                                        puVar15 = &uStack_f8 + 4;
                                    }
                                    else {
                                        uVar5 = (puVar24[3] & 0xff00ff00) >> 8 | (puVar24[3] & 0xff00ff) << 8;
                                        uStack_f8 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                        if (uVar26 != 4) goto code_r0x08005334;
                                        puVar13 = puVar24 + 4;
                                        puVar15 = &uStack_f0;
                                        bVar6 = true;
                                    }
                                }
                            }
                        }
                        uVar14 = uVar14 & 3;
                        if (uVar14 == 1) {
                            uVar14 = *puVar13 << 0x18;
code_r0x08004118:
                            if (bVar6) goto code_r0x08005334;
                            *puVar15 = uVar14;
                        }
                        else {
                            if (uVar14 == 2) {
                                uVar14 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10;
                                goto code_r0x08004118;
                            }
                            if (uVar14 == 3) {
                                uVar14 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10 | *(puVar13 + 2) << 8;
                                goto code_r0x08004118;
                            }
                        }
                        iVar20 = piVar12[8];
                        *(iVar20 + 4) = uStack_100;
                        *(iVar20 + 0x14) = uStack_100._4_4_;
                        if (!bVar8) {
                            *(iVar20 + 0x24) = uStack_f8;
                            *(iVar20 + 0x34) = uStack_f8._4_4_;
                        }
                        uVar14 = uVar27 >> 2;
                        puVar15 = &uStack_f0;
                        puVar29 = *(param_2 + 0x60);
                        if (uVar27 < 4) {
                            uVar25 = 0;
                        }
                        else {
                            uVar25 = 0;
                            uVar26 = uVar14;
                            do {
                                uVar16 = uVar25;
                                if (0x3f < uVar16) goto code_r0x08005334;
                                uVar26 = uVar26 - 1;
                                uVar4 = (*(puVar29 + uVar16) & 0xff00ff00) >> 8 | (*(puVar29 + uVar16) & 0xff00ff) << 8;
                                *(puVar15 + uVar16) = uVar4 >> 0x10 | uVar4 << 0x10;
                                uVar25 = uVar16 + 4;
                            } while (uVar26 != 0);
                            puVar29 = puVar29 + uVar25;
                            puVar15 = &uStack_f0 + uVar16 + 4;
                        }
                        uVar26 = uVar27 & 3;
                        if (uVar26 == 1) {
                            uVar26 = *puVar29 << 0x18;
code_r0x080041f0:
                            if (0x3c < uVar25) goto code_r0x08005334;
                            *puVar15 = uVar26;
                        }
                        else {
                            if (uVar26 == 2) {
                                uVar26 = *puVar29 << 0x18 | puVar29[1] << 0x10;
                                goto code_r0x080041f0;
                            }
                            if (uVar26 == 3) {
                                uVar26 = *puVar29 << 0x18 | puVar29[1] << 0x10 | puVar29[2] << 8;
                                goto code_r0x080041f0;
                            }
                        }
                        if (3 < uVar27) {
                            iVar20 = piVar12[6];
                            if (uVar14 < 2) {
                                uVar14 = 1;
                            }
                            *(iVar20 + 4) = uStack_f0;
                            if (7 < uVar27) {
                                *(iVar20 + 0x14) = uStack_f0._4_4_;
                                if (uVar14 != 2) {
                                    *(iVar20 + 0x24) = uStack_e8;
                                    if (uVar14 != 3) {
                                        *(iVar20 + 0x34) = uStack_e8._4_4_;
                                        if (uVar14 != 4) {
                                            *(iVar20 + 0x44) = uStack_e0;
                                            if (uVar14 != 5) {
                                                *(iVar20 + 0x54) = uStack_e0._4_4_;
                                                if (uVar14 != 6) {
                                                    *(iVar20 + 100) = uStack_d8;
                                                    if (uVar14 != 7) {
                                                        *(iVar20 + 0x74) = uStack_d8._4_4_;
                                                        if (uVar14 != 8) {
                                                            *(iVar20 + 0x84) = uStack_d0;
                                                            if (uVar14 != 9) {
                                                                *(iVar20 + 0x94) = uStack_d0._4_4_;
                                                                if (uVar14 != 10) {
                                                                    *(iVar20 + 0xa4) = uStack_c8;
                                                                    if (uVar14 != 0xb) {
                                                                        *(iVar20 + 0xb4) = uStack_c8._4_4_;
                                                                        if (uVar14 != 0xc) {
                                                                            *(iVar20 + 0xc4) = uStack_c0;
                                                                            if (uVar14 != 0xd) {
                                                                                *(iVar20 + 0xd4) = uStack_c0._4_4_;
                                                                                if (uVar14 != 0xe) {
                                                                                    *(iVar20 + 0xe4) = uStack_b8;
                                                                                    if (uVar14 != 0xf) {
                                                                                        *(iVar20 + 0xf4) =
                                                                                             uStack_b8._4_4_;
                                                                                        if (uVar14 != 0x10)
                                                                                        goto code_r0x0800533c;
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
                        uVar14 = *(piVar12[3] + 4);
                        *(piVar12[3] + 4) = uVar14 & 0xfffff800 | uVar14 & 0x3ff | (*(param_2 + 0x1c) == 0) << 10;
                        puVar15 = &uStack_b0;
                        uVar14 = *(param_2 + 0x30);
                        puVar29 = *(param_2 + 0x28);
                        if (uVar14 < 4) {
                            uVar25 = 0;
                        }
                        else {
                            uVar27 = uVar14 >> 2;
                            uVar25 = 0;
                            do {
                                uVar16 = uVar25;
                                if (0x3f < uVar16) goto code_r0x08005334;
                                uVar27 = uVar27 - 1;
                                uVar26 = (*(puVar29 + uVar16) & 0xff00ff00) >> 8 | (*(puVar29 + uVar16) & 0xff00ff) << 8
                                ;
                                *(puVar15 + uVar16) = uVar26 >> 0x10 | uVar26 << 0x10;
                                uVar25 = uVar16 + 4;
                            } while (uVar27 != 0);
                            puVar29 = puVar29 + uVar25;
                            puVar15 = &uStack_b0 + uVar16 + 4;
                        }
                        uVar14 = uVar14 & 3;
                        if (uVar14 == 1) {
                            uVar14 = *puVar29 << 0x18;
code_r0x080043d4:
                            if (0x3c < uVar25) goto code_r0x08005334;
                            *puVar15 = uVar14;
                        }
                        else {
                            if (uVar14 == 2) {
                                uVar14 = *puVar29 << 0x18 | puVar29[1] << 0x10;
                                goto code_r0x080043d4;
                            }
                            if (uVar14 == 3) {
                                uVar14 = *puVar29 << 0x18 | puVar29[1] << 0x10 | puVar29[2] << 8;
                                goto code_r0x080043d4;
                            }
                        }
                        iVar20 = piVar12[0x14];
                        *(iVar20 + 4) = uStack_b0;
                        *(iVar20 + 0x14) = uStack_b0._4_4_;
                        *(iVar20 + 0x24) = uStack_a8;
                        *(iVar20 + 0x34) = uStack_a8._4_4_;
                        *(iVar20 + 0x44) = uStack_a0;
                        *(iVar20 + 0x54) = uStack_a0._4_4_;
                        *(iVar20 + 100) = uStack_98;
                        *(iVar20 + 0x74) = uStack_98._4_4_;
                        *(iVar20 + 0x84) = uStack_90;
                        *(iVar20 + 0x94) = uStack_90._4_4_;
                        *(iVar20 + 0xa4) = uStack_88;
                        *(iVar20 + 0xb4) = uStack_88._4_4_;
                        *(iVar20 + 0xc4) = uStack_80;
                        *(iVar20 + 0xd4) = uStack_80._4_4_;
                        *(iVar20 + 0xe4) = uStack_78;
                        *(iVar20 + 0xf4) = uStack_78._4_4_;
                        iVar20 = piVar12[0x15];
                        if (*(param_2 + 0x24) == 2) {
                            uVar18 = 0xefcdab89;
                            uVar19 = 0xc3d2e1f0;
                            uVar22 = 0x98badcfe;
                            uVar28 = 0x10325476;
                            iVar30 = 4;
                            iVar31 = 3;
                            iVar32 = 2;
                            iVar33 = 1;
                            *(iVar20 + 4) = 0x67452301;
                        }
                        else {
                            *(iVar20 + 4) = 0x6a09e667;
                            uVar22 = 0x9b05688c;
                            uVar19 = 0x5be0cd19;
                            uVar18 = 0x510e527f;
                            uVar28 = 0x1f83d9ab;
                            *(iVar20 + 0x14) = 0xbb67ae85;
                            iVar30 = 7;
                            iVar31 = 6;
                            iVar32 = 5;
                            iVar33 = 4;
                            *(iVar20 + 0x24) = 0x3c6ef372;
                            *(iVar20 + 0x34) = 0xa54ff53a;
                        }
                        *(iVar20 + iVar33 * 0x10 + 4) = uVar18;
                        *(iVar20 + iVar32 * 0x10 + 4) = uVar22;
                        *(iVar20 + iVar31 * 0x10 + 4) = uVar28;
                        *(iVar20 + iVar30 * 0x10 + 4) = uVar19;
                        iVar20 = piVar12[0x17];
                        *(iVar20 + 4) = 0;
                        *(iVar20 + 0x14) = 0;
                        uVar14 = *(piVar12[0x11] + 4) & 0xffff3fff;
                        uVar27 = uVar14 | 0x4000;
                        if (*(param_2 + 0x1c) != 0) {
                            uVar27 = uVar14;
                        }
                        *(piVar12[0x11] + 4) = uVar27;
                        *(piVar12[0x12] + 4) = uVar17;
                        *(piVar12[0x13] + 4) = 0;
                        *(piVar12[0x18] + 4) = uVar17;
                        *(piVar12[4] + 4) = *(param_2 + 0x80);
                        *(piVar12[5] + 4) = uVar23 & 0xffff;
                        goto code_r0x08004594;
                    }
                }
                else {
                    _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
                }
code_r0x0800403c:
                piVar1 = param_1 + arg2 * 0x37f + 0xe8;
                *(param_1 + arg2 * 0x37f + 0xe9) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            if (iVar9 == 0) {
                _printk(0x800191f,"qce_free_req_info",uVar10);
                iVar9 = -0x16;
            }
            else {
                iVar9 = -0x16;
            }
        }
    }
code_r0x08004b54:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return iVar9;
    }
    __stack_chk_fail();
code_r0x0800533c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8005340);
    (*pcVar7)();
}


// ===== sym._sps_producer_callback.690bdae42169b8376f8634d9b6b718d8.cfi_jt @ 0x08003350 (size 8) =====

void sym._sps_producer_callback.690bdae42169b8376f8634d9b6b718d8.cfi_jt(int64_t *param_1)

{
    uint32_t uVar1;
    int16_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t arg2;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *puVar8;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 3) >> 0x10 == 0xdead) {
        uVar1 = *(param_1 + 3) & 0xff;
        arg2 = uVar1;
        if (uVar1 < 9) {
            arg1 = *param_1;
            if (*(arg1 + uVar1 * 0x1bf8 + 0x740) != 0) {
                iVar5 = arg1 + arg2 * 0x1bf8;
                if ((1 < *(iVar5 + 0x748) - 1U) || (iVar7 = arg1 + arg2 * 0x1bf8, *(iVar7 + 0x750) != 0)) {
                    sym._qce_req_complete(arg1,arg2);
                    return;
                }
                iVar2 = *(iVar5 + 0x2330);
                *(iVar7 + 0x750) = 2;
                if (iVar2 != 0) {
                    return;
                }
                iVar5 = *(arg1 + 0x10);
                iVar7 = *(arg1 + 0x18);
                iVar6 = arg1 + arg2 * 0x1bf8;
                *(iVar6 + 0x790) = 0;
                iVar5 = (iVar7 + *(iVar6 + 0x22a0)) - iVar5;
                puVar8 = *(iVar6 + 0x788);
                *puVar8 = iVar5;
                puVar8[1] = iVar5 >> 0x10 & 0xf0000 | 0x80;
                uVar1 = *(iVar6 + 0x790);
                *(iVar6 + 0x790) = uVar1 + 1;
                if (uVar1 != 0xffffffff) {
                    iVar5 = *(iVar6 + 0x788) + uVar1 * 8;
                    *(iVar5 + 4) = *(iVar5 + 4) | 0x80000000;
                }
                iVar3 = sps_transfer(*(arg1 + 0x180),iVar6 + 0x780);
                if (iVar3 == 0) {
                    return;
                }
                _printk(0x800213f,"_sps_producer_callback",*(arg1 + 0x180),iVar3);
                return;
            }
            uVar4 = 0x800100b;
        }
        else {
            uVar4 = 0x8000ade;
        }
    }
    else {
        uVar4 = 0x8000ade;
    }
    _printk(uVar4,"_sps_producer_callback");
    return;
}


// ===== sym.qce_set_irqs.cfi_jt @ 0x08003358 (size 8) =====

void sym.qce_set_irqs.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) == 0) {
        sps_bam_disable_irqs(*(param_1 + 0x168));
    }
    else {
        sps_bam_enable_irqs();
    }
    return;
}


// ===== sym.qce_dump_req.cfi_jt @ 0x08003360 (size 8) =====

void sym.qce_dump_req.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x740);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",0,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,0);
    }
    iVar1 = *(param_1 + 0x2338);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",1,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,1);
    }
    iVar1 = *(param_1 + 0x3f30);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",2,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,2);
    }
    iVar1 = *(param_1 + 0x5b28);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",3,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,3);
    }
    iVar1 = *(param_1 + 0x7720);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",4,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,4);
    }
    iVar1 = *(param_1 + 0x9318);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",5,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,5);
    }
    iVar1 = *(param_1 + 0xaf10);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",6,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,6);
    }
    iVar1 = *(param_1 + 0xcb08);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",7,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(param_1,7);
    }
    return;
}


// ===== sym.qce_clear_driver_stats.cfi_jt @ 0x08003368 (size 8) =====

void sym.qce_clear_driver_stats.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x1048c) = 0;
    return;
}


// ===== sym.qce_get_driver_stats.cfi_jt @ 0x08003370 (size 8) =====

void sym.qce_get_driver_stats.cfi_jt(void)

{
    return;
}


// ===== sym.qce_f9_req.cfi_jt @ 0x08003378 (size 8) =====

int sym.qce_f9_req.cfi_jt(ulong *param_1,uint64_t *param_2,ulong param_3,ulong param_4)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    char cVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    bool bVar11;
    code *pcVar12;
    uint32_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong uVar16;
    char *pcVar17;
    uint64_t uVar18;
    uint32_t *puVar19;
    int64_t iVar20;
    uint *puVar21;
    ulong *in_x18;
    uint64_t arg2;
    int64_t *piVar22;
    uint64_t uVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = sym.qce_alloc_req_info(param_1);
    if (uVar13 < 0) {
        return -0x10;
    }
    arg2 = uVar13;
    *(param_2 + 6) = uVar13;
    if (9 < uVar13) {
code_r0x0800b888:
    //WARNING: Does not return
        pcVar12 = SoftwareBreakpoint(0x5512,0x800b88c);
        (*pcVar12)();
    }
    if (*(param_2 + 0x2c) == 1) {
        iVar20 = 0x19b0;
    }
    else {
        if (*(param_2 + 0x2c) != 0) {
            if (8 < uVar13) goto code_r0x0800b888;
            iVar14 = -0x16;
            piVar1 = param_1 + arg2 * 0x37f + 0xe8;
            *(param_1 + arg2 * 0x37f + 0xe9) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar5 = '\x01';
                bVar11 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                    *piVar1 = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x0800b83c;
        }
        iVar20 = 0x18d8;
    }
    uVar23 = *param_2;
    piVar2 = param_1 + iVar20 + arg2 * 0x1bf8 + 0x740;
    piVar22 = *param_1;
    uVar18 = param_2[1];
    uVar15 = is_vmalloc_addr(uVar23);
    if (((uVar15 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar16 = dev_driver_string(piVar22);
        iVar20 = piVar22[0xe];
        if (iVar20 == 0) {
            iVar20 = *piVar22;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar16,iVar20);
    //WARNING: Does not return
        pcVar12 = SoftwareBreakpoint(0x800,0x800b2b8);
        (*pcVar12)();
    }
    if ((uVar15 & 1) == 0) {
        uVar16 = dma_map_page_attrs(piVar22,(((uVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar23 & 0xfff,uVar18,1,0);
    }
    else {
        uVar16 = 0xffffffffffffffff;
    }
    iVar14 = *(param_1 + 0x2e);
    iVar3 = *(param_1 + 0x134);
    param_1[arg2 * 0x37f + 0x463] = uVar16;
    *(param_1 + arg2 * 0x37f + 0x465) = param_2[1];
    iVar20 = 0xfc;
    if (*(param_2 + 0x2c) != 0) {
        iVar20 = 0x100;
    }
    uVar8 = iVar14 * 0x4000 - 0x20000U & 0xfffe0000 | iVar3 << 5;
    uVar7 = uVar8 | 0xe;
    uVar4 = *(param_1 + iVar20);
    *(param_1 + 0x8c) = uVar7;
    *(param_1 + 0x12) = uVar8 | 0x20e;
    if (*(param_1 + 8) == '\0') {
        sym.writel_relaxed(0,param_1[9] + 0x1a100);
        sym.writel_relaxed(*(param_1 + 0x8c),param_1[9] + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,param_1[9] + 0x1a200);
        sym.writel_relaxed(0,param_1[9] + 0x1a204);
        uVar7 = (*(param_2 + 0x1c) & 0xff00ff00) >> 8 | (*(param_2 + 0x1c) & 0xff00ff) << 8;
        uVar8 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
        uVar9 = (*(param_2 + 0x24) & 0xff00ff00) >> 8 | (*(param_2 + 0x24) & 0xff00ff) << 8;
        uVar10 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
        sym.writel_relaxed(uVar7 >> 0x10 | uVar7 << 0x10,param_1[9] + 0x1a310);
        sym.writel_relaxed(uVar8 >> 0x10 | uVar8 << 0x10,param_1[9] + 0x1a314);
        sym.writel_relaxed(uVar9 >> 0x10 | uVar9 << 0x10,param_1[9] + 0x1a318);
        sym.writel_relaxed(uVar10 >> 0x10 | uVar10 << 0x10,param_1[9] + 0x1a31c);
        sym.writel_relaxed(*(param_2 + 10),param_1[9] + 0x1a320);
        sym.writel_relaxed(param_2[2],param_1[9] + 0x1a390);
        sym.writel_relaxed(*(param_2 + 0x14),param_1[9] + 0x1a394);
        uVar7 = uVar4 | 0x800000;
        if (param_2[3] != 1) {
            uVar7 = uVar4;
        }
        sym.writel_relaxed(uVar7,param_1[9] + 0x1a300);
        sym.writel_relaxed(param_2[1],param_1[9] + 0x1a304);
        sym.writel_relaxed(0,param_1[9] + 0x1a308);
        sym.writel_relaxed(param_2[1],param_1[9] + 0x1a110);
        sym.writel_relaxed(*(param_1 + 0x12),param_1[9] + 0x1a400);
        sym.writel_relaxed(7,param_1[9] + 0x1a120);
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        *(piVar2[1] + 4) = uVar7;
        *(piVar2[2] + 4) = *(param_1 + 0x12);
        iVar20 = piVar2[0x15];
        uVar7 = (*(param_2 + 0x1c) & 0xff00ff00) >> 8 | (*(param_2 + 0x1c) & 0xff00ff) << 8;
        uVar8 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
        uVar9 = (*(param_2 + 0x24) & 0xff00ff00) >> 8 | (*(param_2 + 0x24) & 0xff00ff) << 8;
        uVar10 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
        *(iVar20 + 4) = uVar7 >> 0x10 | uVar7 << 0x10;
        *(iVar20 + 0x14) = uVar8 >> 0x10 | uVar8 << 0x10;
        *(iVar20 + 0x24) = uVar9 >> 0x10 | uVar9 << 0x10;
        *(iVar20 + 0x34) = uVar10 >> 0x10 | uVar10 << 0x10;
        *(iVar20 + 0x44) = *(param_2 + 10);
        iVar20 = piVar2[0x17];
        *(iVar20 + 4) = param_2[2];
        *(iVar20 + 0x14) = *(param_2 + 0x14);
        uVar7 = uVar4 | 0x800000;
        if (param_2[3] != 1) {
            uVar7 = uVar4;
        }
        *(piVar2[0x11] + 4) = uVar7;
        *(piVar2[0x12] + 4) = param_2[1];
        *(piVar2[0x13] + 4) = 0;
        *(piVar2[0x18] + 4) = param_2[1];
        *piVar2[0x19] = *(param_1 + 10) + 0x1a120U & 0xffffff | *(piVar2[0x19] + 3) << 0x18;
    }
    param_1[arg2 * 0x37f + 0x45b] = param_3;
    *(param_1 + arg2 * 0x37f + 0x466) = 0;
    *(param_1 + arg2 * 0x37f + 0xe9) = 4;
    param_1[arg2 * 0x37f + 0x459] = param_4;
    *(param_1 + arg2 * 0x1bf8 + 0x232c) = param_2[1];
    if (8 < uVar13) goto code_r0x0800b888;
    cVar5 = *(param_1 + 8);
    *(param_1 + arg2 * 0x37f + 0xee) = 0;
    *(param_1 + arg2 * 0x37f + 0xf2) = 0;
    if (cVar5 == '\0') {
        uVar18 = 0;
code_r0x0800b630:
        uVar15 = param_2[1];
        puVar19 = param_1 + arg2 * 0x37f + 0xee;
        if (param_2[1] != 0) {
            uVar23 = *(param_1 + arg2 * 0x37f + 0x463);
            puVar21 = param_1[arg2 * 0x37f + 0xed] + uVar18 * 8;
            do {
                if (uVar18 == 0x200) {
                    pcVar17 = "_qce_sps_add_data";
                    goto code_r0x0800b7ec;
                }
                uVar13 = uVar15;
                if (0x1fe < uVar15 >> 6) {
                    uVar13 = 0x7fc0;
                }
                uVar4 = uVar15 - uVar13;
                uVar15 = uVar4;
                *puVar21 = uVar23;
                puVar21[1] = uVar23 >> 0x10 & 0xf0000 | uVar13;
                uVar23 = uVar23 + uVar13;
                uVar18 = *puVar19 + 1;
                *puVar19 = *puVar19 + 1;
                puVar21 = puVar21 + 2;
            } while (uVar4 != 0);
        }
        if (uVar18 == 0) {
            uVar18 = 0;
        }
        else {
            iVar20 = param_1[arg2 * 0x37f + 0xed] + (uVar18 - 1) * 8;
            *(iVar20 + 4) = *(iVar20 + 4) | 0x50000000;
            uVar18 = *puVar19;
        }
        iVar20 = (param_1[arg2 * 0x37f + 0x439] - param_1[2]) + param_1[3];
        uVar6 = *(param_1 + arg2 * 0x37f + 0x453);
        puVar21 = param_1[arg2 * 0x37f + 0xed] + uVar18 * 8;
        *puVar21 = iVar20;
        puVar21[1] = uVar6 | iVar20 >> 0x10 & 0xf0000 | 0xa000000;
        uVar13 = *puVar19 + 1;
        uVar18 = uVar13;
        *puVar19 = uVar13;
        if (0x1ff < uVar13) goto code_r0x0800b7b0;
        puVar19 = param_1 + arg2 * 0x37f + 0xf2;
        if (*puVar19 == 0x200) {
            pcVar17 = "_qce_sps_add_data";
            uVar18 = 0x200;
            goto code_r0x0800b7ec;
        }
        iVar20 = (param_1[3] + *(param_1 + arg2 * 0x37f + 0x454)) - param_1[2];
        puVar21 = param_1[arg2 * 0x37f + 0xf1] + *puVar19 * 8;
        *puVar21 = iVar20;
        puVar21[1] = iVar20 >> 0x10 & 0xf0000 | 0x80;
        *puVar19 = *puVar19 + 1;
        sym.select_mode(param_1,param_1 + arg2 * 0x37f + 0xe8);
        iVar14 = sym._qce_sps_transfer(param_1,arg2);
        piVar1 = param_1 + 0x102fc;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            if (*piVar1 != 1) goto code_r0x0800b898;
            cVar5 = '\x01';
            bVar11 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
                *piVar1 = 0;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800b898:
        if (iVar14 == 0) {
            return 0;
        }
    }
    else {
        iVar20 = (*piVar2 - param_1[2]) + param_1[3];
        uVar6 = *(piVar2 + 0x1a);
        puVar21 = param_1[arg2 * 0x37f + 0xed];
        *puVar21 = iVar20;
        puVar21[1] = uVar6 | iVar20 >> 0x10 & 0xf0000 | 0xc000000;
        uVar13 = *(param_1 + arg2 * 0x37f + 0xee) + 1;
        uVar18 = uVar13;
        *(param_1 + arg2 * 0x37f + 0xee) = uVar13;
        if (uVar13 < 0x200) goto code_r0x0800b630;
code_r0x0800b7b0:
        pcVar17 = "_qce_sps_add_cmd";
code_r0x0800b7ec:
        _printk(0x8001aeb,pcVar17,uVar18,0x200);
        iVar14 = -0xc;
    }
    dma_unmap_page_attrs(*param_1,param_1[arg2 * 0x37f + 0x463],param_2[1],1,0);
    piVar1 = param_1 + arg2 * 0x37f + 0xe8;
    *(param_1 + arg2 * 0x37f + 0xe9) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar11 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
            *piVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800b83c:
    if (iVar3 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2);
    }
    return iVar14;
}


// ===== sym.qce_f8_multi_pkt_req.cfi_jt @ 0x08003380 (size 8) =====

int sym.qce_f8_multi_pkt_req.cfi_jt(ulong *param_1,uint16_t *param_2,ulong param_3,ulong param_4)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    uint16_t uVar5;
    int iVar6;
    bool bVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint *puVar17;
    ulong *in_x18;
    uint64_t arg2;
    uint64_t uVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar22 = *param_2;
    uVar5 = param_2[1];
    uVar10 = sym.qce_alloc_req_info(param_1);
    if (uVar10 < 0) {
        return -0x10;
    }
    arg2 = uVar10;
    *(param_2 + 0x1e) = uVar10;
    if (9 < uVar10) {
code_r0x0800b114:
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x800b118);
        (*pcVar9)();
    }
    if (*(param_2 + 0x1c) == 1) {
        iVar16 = 0x1800;
    }
    else {
        if (*(param_2 + 0x1c) != 0) {
            if (8 < uVar10) goto code_r0x0800b114;
            iVar11 = -0x16;
            piVar1 = param_1 + arg2 * 0x37f + 0xe8;
            *(param_1 + arg2 * 0x37f + 0xe9) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar6 = *piVar1;
                cVar4 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x0800b0c8;
        }
        iVar16 = 0x1728;
    }
    piVar2 = param_1 + iVar16 + arg2 * 0x1bf8 + 0x740;
    piVar20 = *param_1;
    uVar18 = *(param_2 + 4);
    uVar19 = *(param_2 + 8);
    uVar21 = param_2[0xc] * uVar22;
    uVar12 = is_vmalloc_addr(uVar18);
    if (((uVar12 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar13 = dev_driver_string(piVar20);
        iVar16 = piVar20[0xe];
        if (iVar16 == 0) {
            iVar16 = *piVar20;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar16);
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x800ac48);
        (*pcVar9)();
    }
    if ((uVar12 & 1) == 0) {
        uVar18 = dma_map_page_attrs(piVar20,(((uVar18 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar18 & 0xfff,uVar21,uVar18 != uVar19,0);
    }
    else {
        uVar18 = 0xffffffffffffffff;
    }
    param_1[arg2 * 0x37f + 0x463] = uVar18;
    uVar19 = *(param_2 + 8);
    if (*(param_2 + 4) == uVar19) {
        uVar19 = 0;
    }
    else {
        piVar20 = *param_1;
        uVar18 = is_vmalloc_addr(uVar19);
        if (((uVar18 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar13 = dev_driver_string(piVar20);
            iVar16 = piVar20[0xe];
            if (iVar16 == 0) {
                iVar16 = *piVar20;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar16);
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x800ad18);
            (*pcVar9)();
        }
        if ((uVar18 & 1) == 0) {
            uVar19 = dma_map_page_attrs(piVar20,(((uVar19 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                 0x200000000,uVar19 & 0xfff,uVar21,2,0);
            uVar18 = uVar19;
        }
        else {
            uVar19 = 0xffffffffffffffff;
            uVar18 = uVar19;
        }
    }
    cVar4 = *(param_1 + 8);
    param_1[arg2 * 0x37f + 0x464] = uVar19;
    iVar11 = uVar21;
    *(param_1 + arg2 * 0x37f + 0x465) = iVar11;
    if (cVar4 == '\0') {
        sym._ce_f8_setup_direct(param_1,param_2 + 4,uVar22,uVar5);
    }
    else {
        sym._ce_f8_setup(param_1,param_2 + 4,uVar22,uVar5);
    }
    param_1[arg2 * 0x37f + 0x45b] = param_3;
    *(param_1 + arg2 * 0x37f + 0x466) = 0;
    *(param_1 + arg2 * 0x37f + 0xe9) = 3;
    param_1[arg2 * 0x37f + 0x459] = param_4;
    *(param_1 + arg2 * 0x1bf8 + 0x232c) = iVar11;
    if (8 < uVar10) goto code_r0x0800b114;
    cVar4 = *(param_1 + 8);
    *(param_1 + arg2 * 0x37f + 0xee) = 0;
    *(param_1 + arg2 * 0x37f + 0xf2) = 0;
    if (cVar4 == '\0') {
        puVar15 = param_1 + arg2 * 0x37f + 0xee;
        if (iVar11 == 0) {
code_r0x0800aed0:
            uVar22 = 0;
        }
        else {
            uVar10 = 0;
            uVar22 = *(param_1 + arg2 * 0x37f + 0x463);
            puVar17 = param_1[arg2 * 0x37f + 0xed];
            uVar19 = uVar21;
            do {
                if (uVar10 == 0x200) goto code_r0x0800b034;
                uVar10 = uVar19;
                if (0x1fe < uVar19 >> 6) {
                    uVar10 = 0x7fc0;
                }
                uVar8 = uVar19 - uVar10;
                uVar19 = uVar8;
                *puVar17 = uVar22;
                puVar17[1] = uVar22 >> 0x10 & 0xf0000 | uVar10;
                uVar3 = *puVar15;
                uVar22 = uVar22 + uVar10;
                uVar10 = uVar3 + 1;
                *puVar15 = uVar10;
                puVar17 = puVar17 + 2;
            } while (uVar8 != 0);
            if (uVar10 == 0) goto code_r0x0800aed0;
            iVar16 = param_1[arg2 * 0x37f + 0xed] + uVar3 * 8;
            *(iVar16 + 4) = *(iVar16 + 4) | 0x50000000;
            uVar22 = *puVar15;
        }
        iVar16 = (param_1[arg2 * 0x37f + 0x439] - param_1[2]) + param_1[3];
        uVar5 = *(param_1 + arg2 * 0x37f + 0x453);
        puVar17 = param_1[arg2 * 0x37f + 0xed] + uVar22 * 8;
        *puVar17 = iVar16;
        puVar17[1] = uVar5 | iVar16 >> 0x10 & 0xf0000 | 0xa000000;
        uVar10 = *puVar15 + 1;
        *puVar15 = uVar10;
        if (0x1ff < uVar10) goto code_r0x0800b020;
        puVar15 = param_1 + arg2 * 0x37f + 0xf2;
        uVar10 = *puVar15;
        uVar22 = uVar10;
        if (iVar11 != 0) {
            uVar18 = uVar18 & 0xffffffff;
            puVar17 = param_1[arg2 * 0x37f + 0xf1] + uVar22 * 8;
            uVar19 = uVar21;
            do {
                if (uVar22 == 0x200) goto code_r0x0800b034;
                uVar10 = uVar19;
                if (0x1fe < uVar19 >> 6) {
                    uVar10 = 0x7fc0;
                }
                uVar3 = uVar19 - uVar10;
                uVar19 = uVar3;
                *puVar17 = uVar18;
                puVar17[1] = uVar18 >> 0x10 & 0xf0000 | uVar10;
                uVar18 = uVar18 + uVar10;
                uVar10 = *puVar15 + 1;
                uVar22 = uVar10;
                *puVar15 = uVar10;
                puVar17 = puVar17 + 2;
            } while (uVar3 != 0);
        }
        if (uVar10 != 0x200) {
            iVar16 = (param_1[3] + *(param_1 + arg2 * 0x37f + 0x454)) - param_1[2];
            puVar17 = param_1[arg2 * 0x37f + 0xf1] + uVar10 * 8;
            *puVar17 = iVar16;
            puVar17[1] = iVar16 >> 0x10 & 0xf0000 | 0x80;
            *puVar15 = *puVar15 + 1;
            sym.select_mode(param_1,param_1 + arg2 * 0x37f + 0xe8);
            iVar11 = sym._qce_sps_transfer(param_1,arg2);
            piVar1 = param_1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x0800b124;
                cVar4 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b124:
            if (iVar11 == 0) {
                return 0;
            }
            goto code_r0x0800b054;
        }
code_r0x0800b034:
        pcVar14 = "_qce_sps_add_data";
        uVar10 = 0x200;
code_r0x0800b048:
        _printk(0x8001aeb,pcVar14,uVar10,0x200);
        iVar11 = -0xc;
    }
    else {
        iVar16 = (*piVar2 - param_1[2]) + param_1[3];
        uVar5 = *(piVar2 + 0x1a);
        puVar17 = param_1[arg2 * 0x37f + 0xed];
        *puVar17 = iVar16;
        puVar17[1] = uVar5 | iVar16 >> 0x10 & 0xf0000 | 0xc000000;
        uVar10 = *(param_1 + arg2 * 0x37f + 0xee) + 1;
        *(param_1 + arg2 * 0x37f + 0xee) = uVar10;
        if (0x1ff < uVar10) {
code_r0x0800b020:
            pcVar14 = "_qce_sps_add_cmd";
            goto code_r0x0800b048;
        }
        iVar11 = 0;
    }
code_r0x0800b054:
    if (param_1[arg2 * 0x37f + 0x464] != 0) {
        dma_unmap_page_attrs(*param_1,param_1[arg2 * 0x37f + 0x464],uVar21,2,0);
    }
    dma_unmap_page_attrs(*param_1,param_1[arg2 * 0x37f + 0x463],uVar21,*(param_2 + 4) != *(param_2 + 8),0);
    piVar1 = param_1 + arg2 * 0x37f + 0xe8;
    *(param_1 + arg2 * 0x37f + 0xe9) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800b0c8:
    if (iVar6 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2);
    }
    return iVar11;
}


// ===== sym.qce_disable_clk.cfi_jt @ 0x08003388 (size 8) =====

ulong sym.qce_disable_clk.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x104b9) == '\0') {
        iVar1 = *(param_1 + 0x70);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(param_1 + 0x68);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(param_1 + 0x60);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(param_1 + 0x58);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
    }
    return 0;
}


// ===== sym.qce_close.cfi_jt @ 0x08003390 (size 8) =====

ulong sym.qce_close.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_1 == NULL) {
        return 0xffffffed;
    }
    *in_x18 = unaff_x30;
    mutex_lock(obj.qce_iomap_mutex);
    sym.qce_enable_clk(param_1);
    iVar2 = 0;
    do {
        if (iVar2 == 0) {
            if (*(param_1 + 0x104ba) != '\0') goto code_r0x0800d4fc;
        }
        else {
            if (*(param_1 + 0x104bb) == '\0') break;
code_r0x0800d4fc:
            uVar1 = *(param_1 + iVar2 + 0x460);
            sps_disconnect(uVar1);
            dma_free_attrs(*param_1,*(param_1 + iVar2 + 0x4b8),*(param_1 + iVar2 + 0x4a0),*(param_1 + iVar2 + 0x4a8)
                           ,0);
            sps_free_endpoint(uVar1);
            uVar1 = *(param_1 + iVar2 + 0x180);
            sps_disconnect(uVar1);
            dma_free_attrs(*param_1,*(param_1 + iVar2 + 0x1d8),*(param_1 + iVar2 + 0x1c0),*(param_1 + iVar2 + 0x1c8)
                           ,0);
            sps_free_endpoint(uVar1);
        }
        iVar2 = iVar2 + 0xb8;
    } while (iVar2 != 0x2e0);
    sym.qce_sps_release_bam(param_1);
    if (param_1[9] != 0) {
        iounmap();
    }
    if (param_1[2] != 0) {
        dma_free_attrs(*param_1,*(param_1 + 4),param_1[2],param_1[3],0);
    }
    kfree(param_1[0x2095]);
    kfree(param_1[5]);
    sym.qce_disable_clk(param_1);
    if (*(param_1 + 0x104b9) == '\0') {
        if (param_1[0xe] != 0) {
            clk_put();
        }
        if (param_1[0xd] != 0) {
            clk_put();
        }
        if (param_1[0xc] != 0) {
            clk_put();
        }
        if (param_1[0xb] != 0) {
            clk_put();
        }
    }
    mutex_unlock(obj.qce_iomap_mutex);
    kfree(param_1);
    return 0;
}


// ===== sym._qce_resume.690bdae42169b8376f8634d9b6b718d8.cfi_jt @ 0x08003398 (size 8) =====

int sym._qce_resume.690bdae42169b8376f8634d9b6b718d8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = -0x13;
    }
    else {
        iVar4 = 0;
        iVar2 = -0x13;
        do {
            if (iVar4 == 0) {
                if (*(param_1 + 0x104ba) != '\0') goto code_r0x08003bbc;
            }
            else {
                if (*(param_1 + 0x104bb) == '\0') {
                    return iVar2;
                }
code_r0x08003bbc:
                iVar1 = param_1 + iVar4;
                uVar3 = *(iVar1 + 0x460);
                memset(*(iVar1 + 0x4a0),0,*(iVar1 + 0x4b8));
                iVar2 = sps_connect(uVar3,iVar1 + 0x468);
                if (iVar2 != 0) {
                    _printk(0x8001ee4,"_qce_resume",uVar3,iVar2);
                    return iVar2;
                }
                uVar3 = *(iVar1 + 0x180);
                memset(*(iVar1 + 0x1c0),0,*(iVar1 + 0x1d8));
                iVar2 = sps_connect(uVar3,iVar1 + 0x188);
                if (iVar2 != 0) {
                    _printk(0x8001ee4,"_qce_resume",uVar3,iVar2);
                }
                iVar2 = sps_register_event(uVar3,param_1 + iVar4 + 0x218);
                if (iVar2 != 0) {
                    _printk(0x8001f72,"_qce_resume",iVar2);
                }
            }
            iVar4 = iVar4 + 0xb8;
        } while (iVar4 != 0x2e0);
    }
    return iVar2;
}


// ===== sym._qce_suspend.690bdae42169b8376f8634d9b6b718d8.cfi_jt @ 0x080033a0 (size 8) =====

ulong sym._qce_suspend.690bdae42169b8376f8634d9b6b718d8.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffed;
    }
    else {
        if (*(param_1 + 0x104ba) != '\0') {
            sps_disconnect(*(param_1 + 0x460));
            sps_disconnect(*(param_1 + 0x180));
        }
        if (*(param_1 + 0x104bb) != '\0') {
            sps_disconnect(*(param_1 + 0x518));
            sps_disconnect(*(param_1 + 0x238));
            if (*(param_1 + 0x104bb) != '\0') {
                sps_disconnect(*(param_1 + 0x5d0));
                sps_disconnect(*(param_1 + 0x2f0));
                if (*(param_1 + 0x104bb) != '\0') {
                    sps_disconnect(*(param_1 + 0x688));
                    sps_disconnect(*(param_1 + 0x3a8));
                }
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qce_enable_clk.cfi_jt @ 0x080033a8 (size 8) =====

int sym.qce_enable_clk.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x104b9) != '\0') {
        return 0;
    }
    iVar2 = *(param_1 + 0x58);
    if (iVar2 != 0) {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 != 0) {
code_r0x0800b9e0:
            _printk(0x800113b,"qce_enable_clk");
            return iVar1;
        }
        iVar1 = clk_enable(iVar2);
        if (iVar1 != 0) {
            clk_unprepare(iVar2);
            goto code_r0x0800b9e0;
        }
    }
    if (*(param_1 + 0x43) != '\0') {
        return 0;
    }
    iVar2 = *(param_1 + 0x60);
    if (iVar2 != 0) {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) goto code_r0x0800b97c;
            clk_unprepare(iVar2);
        }
        _printk(0x800167d,"qce_enable_clk");
        goto code_r0x0800ba98;
    }
code_r0x0800b97c:
    iVar2 = *(param_1 + 0x68);
    if (iVar2 == 0) {
code_r0x0800b99c:
        iVar2 = *(param_1 + 0x70);
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(iVar2);
        }
        _printk(0x8001df2,"qce_enable_clk");
        iVar2 = *(param_1 + 0x68);
        if (iVar2 != 0) {
            clk_disable(iVar2);
            clk_unprepare(iVar2);
        }
    }
    else {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) goto code_r0x0800b99c;
            clk_unprepare(iVar2);
        }
        _printk(0x8001c8e,"qce_enable_clk");
    }
    iVar2 = *(param_1 + 0x60);
    if (iVar2 != 0) {
        clk_disable(iVar2);
        clk_unprepare(iVar2);
    }
code_r0x0800ba98:
    iVar2 = *(param_1 + 0x58);
    if (iVar2 != 0) {
        clk_disable(iVar2);
        clk_unprepare(iVar2);
        return iVar1;
    }
    return iVar1;
}


// ===== sym.qce_get_crypto_status @ 0x080033b0 (size 604) =====

void sym.qce_get_crypto_status(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    uint32_t uVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a100);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a104);
    uVar3 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a11c);
    uVar4 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a124);
    uVar5 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a128);
    uVar6 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a13c);
    if ((uVar1 & 0xfffffffd) == 0x2000004) {
        pcVar8 = "qce_get_crypto_status";
        uVar7 = 0x8000c27;
        *arg2 = 1;
        uVar6 = uVar1;
        goto code_r0x080035e8;
    }
    if (*(arg1 + 0x174) < 8) {
        if ((uVar3 & 0xff00) == 0 && (uVar6 & 0x300) == 0) {
            if ((uVar3 >> 0x18 == 0) && ((uVar6 & 0x3000000) == 0)) goto code_r0x080034d4;
            uVar7 = 0x800122a;
            *(arg2 + 2) = 1;
        }
        else {
            uVar7 = 0x80020c2;
            *(arg2 + 1) = 1;
        }
        _printk(uVar7,"qce_get_crypto_status","qce_get_crypto_status");
    }
    else {
        if ((uVar3 >> 4 & 1) == 0) {
            if ((uVar3 >> 0xc & 1) == 0) {
code_r0x080034d4:
                _printk(0x8001576,"qce_get_crypto_status","qce_get_crypto_status");
                *(arg2 + 3) = 1;
                goto code_r0x08003554;
            }
            uVar7 = 0x8000ba1;
            *(arg2 + 2) = 1;
        }
        else {
            uVar7 = 0x8002174;
            *(arg2 + 1) = 1;
        }
        _printk(uVar7,"qce_get_crypto_status","qce_get_crypto_status",uVar3 >> 0x10);
    }
code_r0x08003554:
    pcVar8 = "dump_status_regs";
    _printk(0x800148f,"dump_status_regs","dump_status_regs",uVar1);
    _printk(0x8001716,"dump_status_regs","dump_status_regs",uVar2);
    _printk(0x800125d,"dump_status_regs","dump_status_regs",uVar3);
    _printk(0x8001e24,"dump_status_regs","dump_status_regs",uVar4);
    _printk(0x80016b0,"dump_status_regs","dump_status_regs",uVar5);
    uVar7 = 0x8001bf6;
code_r0x080035e8:
    _printk(uVar7,pcVar8,pcVar8,uVar6);
    return;
}


// ===== sym.readl_relaxed @ 0x0800360c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003610);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003644);
    return uVar1;
}


// ===== sym.qce_set_irqs @ 0x0800367c (size 52) =====

void sym.qce_set_irqs(int64_t arg1)

{
    uint32_t in_w1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w1 & 1) == 0) {
        sps_bam_disable_irqs(*(arg1 + 0x168));
    }
    else {
        sps_bam_enable_irqs();
    }
    return;
}


// ===== sym.qce_manage_timeout @ 0x080036b0 (size 968) =====

void sym.qce_manage_timeout(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int *extraout_x8;
    int *piVar8;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    if (8 < arg2) goto code_r0x08003a30;
    uVar9 = arg2;
    uStack_5c = 0;
    uVar1 = *(arg1 + 0x740 + arg2 * 0x1bf8 + 0x1bf0);
    uVar10 = uVar1;
    _printk(0x8001d49,"qce_manage_timeout","qce_manage_timeout",uVar9,uVar10);
    if (3 < uVar1) goto code_r0x08003a30;
    iVar7 = arg1 + 0x118 + uVar10 * 4;
    sps_pipe_reset(*(arg1 + 0x168),*(iVar7 + 0x3c));
    sps_pipe_reset(*(arg1 + 0x168),*(iVar7 + 0x2c));
    uVar11 = *(arg1 + 0x118 + uVar10 * 0xb8 + 0x348);
    iVar5 = sps_disconnect(uVar11);
    if (iVar5 == 0) {
        iVar7 = arg1 + uVar10 * 0xb8;
        memset(*(iVar7 + 0x4a0),0,*(iVar7 + 0x4b8));
        iVar5 = sps_connect(uVar11,iVar7 + 0x468);
        if (iVar5 != 0) {
code_r0x08003808:
            uVar6 = 0x8001ee4;
            goto code_r0x08003824;
        }
        uVar11 = *(arg1 + uVar10 * 0xb8 + 0x180);
        iVar5 = sps_disconnect(uVar11);
        if (iVar5 != 0) goto code_r0x08003808;
        iVar7 = arg1 + uVar10 * 0xb8;
        memset(*(iVar7 + 0x1c0),0,*(iVar7 + 0x1d8));
        iVar5 = sps_connect(uVar11,iVar7 + 0x188);
        if (iVar5 != 0) goto code_r0x08003808;
        iVar5 = sps_register_event(uVar11,arg1 + uVar10 * 0xb8 + 0x218);
        if (iVar5 != 0) {
            _printk(0x8001f72,"qce_sps_pipe_reset",iVar5);
            goto code_r0x08003834;
        }
    }
    else {
        uVar6 = 0x8001742;
code_r0x08003824:
        _printk(uVar6,"qce_sps_pipe_reset",uVar11,iVar5);
code_r0x08003834:
        _printk(0x8000ed0,"qce_manage_timeout","qce_manage_timeout");
    }
    sym.qce_get_crypto_status(arg1,&uStack_5c);
    if (uStack_5c == '\0') {
        uVar12 = 0;
        do {
            usleep_range_state(3000,5000,2);
            sym.qce_get_crypto_status(arg1,&uStack_5c);
            _printk(0x8000e18,"qce_manage_timeout","qce_manage_timeout");
            if (uStack_5c != '\0') break;
            bVar4 = uVar12 < 999;
            uVar12 = uVar12 + 1;
        } while (bVar4);
    }
    DataSynchronizationBarrier(3,2,0);
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar1 = *(arg1 + uVar9 * 0x1bf8 + 0x2330);
        if (3 < uVar1) {
code_r0x08003a30:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8003a34);
            (*pcVar3)();
        }
        iVar5 = sps_transfer_one(*(arg1 + uVar1 * 0xb8 + 0x460),
                                 (*(arg1 + uVar9 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar5 != 0) {
            _printk(0x8002347,"_qce_unlock_other_pipes",iVar5);
            _printk(0x8001b63,"qce_manage_timeout","qce_manage_timeout");
        }
    }
    if (*(arg1 + 0x740 + uVar9 * 0x1bf8) == 0) {
        _printk(0x800100b,"qce_manage_timeout",uVar9);
        uVar11 = 0xfffffffa;
        goto code_r0x08003988;
    }
    iVar7 = arg1 + uVar9 * 0x1bf8;
    piVar8 = iVar7 + 0x740;
    *(iVar7 + 0x748) = 5;
    Hint_Prefetch(piVar8,2,0,1);
    do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
            *piVar8 = 0;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar5 == 0) {
        _printk(0x800191f,"qce_free_req_info",uVar9);
    }
    else if (arg2 < 8) {
        piVar8 = arg1 + 0x10300;
        goto code_r0x08003a3c;
    }
    while( true ) {
        uVar11 = 0;
code_r0x08003988:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_58) break;
        __stack_chk_fail(uVar11);
        piVar8 = extraout_x8;
code_r0x08003a3c:
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
                *piVar8 = *piVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.qce_get_driver_stats @ 0x08003a78 (size 12) =====

void sym.qce_get_driver_stats(void)

{
    return;
}


// ===== sym.qce_clear_driver_stats @ 0x08003a84 (size 24) =====

void sym.qce_clear_driver_stats(int64_t arg1)

{
    *(arg1 + 0x1048c) = 0;
    return;
}


// ===== sym._qce_suspend @ 0x08003a9c (size 164) =====

ulong sym._qce_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffed;
    }
    else {
        if (*(arg1 + 0x104ba) != '\0') {
            sps_disconnect(*(arg1 + 0x460));
            sps_disconnect(*(arg1 + 0x180));
        }
        if (*(arg1 + 0x104bb) != '\0') {
            sps_disconnect(*(arg1 + 0x518));
            sps_disconnect(*(arg1 + 0x238));
            if (*(arg1 + 0x104bb) != '\0') {
                sps_disconnect(*(arg1 + 0x5d0));
                sps_disconnect(*(arg1 + 0x2f0));
                if (*(arg1 + 0x104bb) != '\0') {
                    sps_disconnect(*(arg1 + 0x688));
                    sps_disconnect(*(arg1 + 0x3a8));
                }
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym._qce_resume @ 0x08003b40 (size 356) =====

int sym._qce_resume(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = -0x13;
    }
    else {
        iVar4 = 0;
        iVar2 = -0x13;
        do {
            if (iVar4 == 0) {
                if (*(arg1 + 0x104ba) != '\0') goto code_r0x08003bbc;
            }
            else {
                if (*(arg1 + 0x104bb) == '\0') {
                    return iVar2;
                }
code_r0x08003bbc:
                iVar1 = arg1 + iVar4;
                uVar3 = *(iVar1 + 0x460);
                memset(*(iVar1 + 0x4a0),0,*(iVar1 + 0x4b8));
                iVar2 = sps_connect(uVar3,iVar1 + 0x468);
                if (iVar2 != 0) {
                    _printk(0x8001ee4,"_qce_resume",uVar3,iVar2);
                    return iVar2;
                }
                uVar3 = *(iVar1 + 0x180);
                memset(*(iVar1 + 0x1c0),0,*(iVar1 + 0x1d8));
                iVar2 = sps_connect(uVar3,iVar1 + 0x188);
                if (iVar2 != 0) {
                    _printk(0x8001ee4,"_qce_resume",uVar3,iVar2);
                }
                iVar2 = sps_register_event(uVar3,arg1 + iVar4 + 0x218);
                if (iVar2 != 0) {
                    _printk(0x8001f72,"_qce_resume",iVar2);
                }
            }
            iVar4 = iVar4 + 0xb8;
        } while (iVar4 != 0x2e0);
    }
    return iVar2;
}


// ===== sym.qce_aead_req @ 0x08003ca4 (size 5900) =====

int sym.qce_aead_req(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    code *pcVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint uVar19;
    uint uVar20;
    int64_t iVar21;
    uint *puVar22;
    uint uVar23;
    uint32_t uVar24;
    uint32_t *puVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint uVar29;
    uint8_t *puVar30;
    int64_t iVar31;
    int64_t iVar32;
    int64_t iVar33;
    int64_t iVar34;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong uVar35;
    int iVar36;
    ulong uVar37;
    ulong unaff_x30;
    uint32_t uStack_124;
    uint32_t uStack_120;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    if (*(arg2 + 0x20) == 4) {
        iVar9 = sym._qce_aead_ccm_req(arg1,arg2);
    }
    else {
        uVar10 = sym.qce_alloc_req_info(arg1);
        if (uVar10 < 0) {
            iVar9 = -0x10;
        }
        else {
            arg2_00 = uVar10;
            *(arg2 + 0xa8) = uVar10;
            if (9 < uVar10) goto code_r0x0800533c;
            iVar11 = *(arg2 + 0x10);
            uVar15 = *(*(*(iVar11 + 0x20) + 0x10) + -0x50);
            *(arg2 + 0x78) = uVar15;
            if (*(arg2 + 0x1c) == 0) {
                uVar18 = *(iVar11 + 0x34);
            }
            else {
                uVar18 = *(iVar11 + 0x34) - *(arg2 + 0x34);
            }
            *(arg2 + 0x80) = uVar18;
            uVar24 = *(iVar11 + 0x30);
            if (CARRY4(uVar24,uVar18)) {
                _printk(0x800138b,"qce_aead_req");
                iVar9 = -0x16;
                goto code_r0x08004b54;
            }
            uVar18 = uVar24 + uVar18;
            if (*(arg1 + 0x40) == '\0') {
                piVar12 = NULL;
code_r0x08004594:
                iVar21 = arg1 + 0x740;
                if (uVar18 < 1) {
                    iVar9 = 0;
                }
                else {
                    iVar9 = 0;
                    iVar31 = *(iVar11 + 0x40);
                    uVar15 = uVar18;
                    do {
                        iVar9 = iVar9 + 1;
                        uVar15 = uVar15 - *(iVar31 + 0xc);
                        iVar31 = sg_next();
                    } while (0 < uVar15);
                }
                iVar33 = iVar21 + arg2_00 * 0x1bf8;
                *(iVar33 + 0x1bb0) = iVar9;
                iVar31 = *(iVar11 + 0x40);
                iVar32 = *(iVar11 + 0x48);
                bVar8 = iVar31 != iVar32;
                if (0 < iVar9) {
                    uVar37 = *arg1;
                    do {
                        dma_map_sg_attrs(uVar37,iVar31,1,bVar8,0);
                        iVar31 = sg_next(iVar31);
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    iVar31 = *(iVar11 + 0x40);
                    iVar32 = *(iVar11 + 0x48);
                }
                if (iVar31 != iVar32) {
                    if (uVar18 < 1) {
                        *(iVar21 + arg2_00 * 0x1bf8 + 0x1bb4) = 0;
                    }
                    else {
                        uVar15 = 0;
                        uVar24 = uVar18;
                        do {
                            uVar28 = uVar15;
                            uVar15 = uVar28 + 1;
                            uVar24 = uVar24 - *(iVar32 + 0xc);
                            iVar32 = sg_next();
                        } while (0 < uVar24);
                        *(iVar21 + arg2_00 * 0x1bf8 + 0x1bb4) = uVar15;
                        if (uVar28 < 0x7fffffff) {
                            uVar35 = *arg1;
                            uVar37 = *(iVar11 + 0x48);
                            do {
                                dma_map_sg_attrs(uVar35,uVar37,1,2,0);
                                uVar37 = sg_next(uVar37);
                                uVar15 = uVar15 - 1;
                            } while (uVar15 != 0);
                        }
                    }
                }
                iVar31 = iVar21 + arg2_00 * 0x1bf8;
                *(iVar31 + 0x1b98) = *(arg2 + 0x10);
                *(iVar31 + 0x1b88) = *(arg2 + 8);
                uVar19 = *(arg2 + 0x1c);
                *(iVar31 + 0x1ba8) = 0;
                *(iVar31 + 0x1bf0) = 0;
                *(iVar31 + 8) = 2;
                *(iVar31 + 0x1bd0) = uVar19;
                *(iVar31 + 0x1bec) = uVar18;
                if (8 < uVar10) goto code_r0x0800533c;
                cVar2 = *(arg1 + 0x40);
                iVar31 = arg1 + arg2_00 * 0x1bf8;
                *(iVar31 + 0x770) = 0;
                *(iVar31 + 0x790) = 0;
                if (cVar2 == '\0') {
                    uVar3 = *(iVar11 + 0x30);
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uVar15 = *(arg2 + 0x78);
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a100);
                    if (*(arg2 + 0x94) < 4) {
                        uVar28 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 |
                                 *(arg1 + *(arg2 + 0x94) * 4 + 0x134) << 5;
                        uVar24 = uVar28 | 0xe;
                        *(arg1 + 0x8c) = uVar24;
                        *(arg1 + 0x90) = uVar28 | 0x20e;
                        sym.writel_relaxed(uVar24,*(arg1 + 0x48) + 0x1a400);
                        DataSynchronizationBarrier(3,3,0);
                        iVar9 = *(arg2 + 0x18);
                        uVar24 = *(arg2 + 0x68);
                        if (iVar9 == 2) {
                            if (*(arg2 + 0x20) == 0) {
                                if (uVar24 == 0x10) {
                                    bVar8 = false;
                                    iVar31 = 0x94;
                                }
                                else {
                                    if (uVar24 != 0x20) goto code_r0x08004a74;
                                    bVar8 = false;
                                    iVar31 = 0x98;
                                }
                                goto code_r0x08004c8c;
                            }
                        }
                        else if (iVar9 == 1) {
                            if (*(arg2 + 0x20) == 0) {
                                bVar8 = true;
                                iVar31 = 0xc4;
                                goto code_r0x08004c8c;
                            }
                        }
                        else if ((iVar9 == 0) && (*(arg2 + 0x20) == 0)) {
                            bVar8 = true;
                            iVar31 = 0xbc;
code_r0x08004c8c:
                            uVar28 = *(arg1 + iVar31);
                            puVar16 = &uStack_100;
                            puVar25 = *(arg2 + 0x70);
                            if (uVar15 < 4) {
                                bVar6 = false;
                                puVar13 = puVar25;
                            }
                            else {
                                puVar13 = puVar25 + 1;
                                uVar27 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
                                uVar4 = uVar27 >> 0x10 | uVar27 << 0x10;
                                uVar27 = uVar15 >> 2;
                                uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
                                if (uVar27 == 1) {
                                    bVar6 = false;
                                    puVar16 = puVar16 | 4;
                                }
                                else {
                                    uVar5 = (puVar25[1] & 0xff00ff00) >> 8 | (puVar25[1] & 0xff00ff) << 8;
                                    uStack_100 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                    if (uVar27 == 2) {
                                        bVar6 = false;
                                        puVar13 = puVar25 + 2;
                                        puVar16 = &uStack_f8;
                                    }
                                    else {
                                        uVar4 = (puVar25[2] & 0xff00ff00) >> 8 | (puVar25[2] & 0xff00ff) << 8;
                                        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                                        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar4);
                                        if (uVar27 == 3) {
                                            bVar6 = false;
                                            puVar13 = puVar25 + 3;
                                            puVar16 = &uStack_f8 + 4;
                                        }
                                        else {
                                            uVar5 = (puVar25[3] & 0xff00ff00) >> 8 | (puVar25[3] & 0xff00ff) << 8;
                                            uStack_f8 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                            if (uVar27 != 4) goto code_r0x08005334;
                                            puVar13 = puVar25 + 4;
                                            puVar16 = &uStack_f0;
                                            bVar6 = true;
                                        }
                                    }
                                }
                            }
                            uVar15 = uVar15 & 3;
                            if (uVar15 == 1) {
                                uVar15 = *puVar13 << 0x18;
code_r0x08004d98:
                                if (bVar6) goto code_r0x08005334;
                                *puVar16 = uVar15;
                            }
                            else {
                                if (uVar15 == 2) {
                                    uVar15 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10;
                                    goto code_r0x08004d98;
                                }
                                if (uVar15 == 3) {
                                    uVar15 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10 | *(puVar13 + 2) << 8;
                                    goto code_r0x08004d98;
                                }
                            }
                            sym.writel_relaxed(uStack_100 & 0xffffffff,*(arg1 + 0x48) + 0x1a20c);
                            sym.writel_relaxed(uStack_100 >> 0x20,*(arg1 + 0x48) + 0x1a210);
                            if (!bVar8) {
                                sym.writel_relaxed(uStack_f8 & 0xffffffff,*(arg1 + 0x48) + 0x1a214);
                                sym.writel_relaxed(uStack_f8 >> 0x20,*(arg1 + 0x48) + 0x1a218);
                            }
                            uVar15 = uVar24 >> 2;
                            puVar16 = &uStack_f0;
                            puVar30 = *(arg2 + 0x60);
                            if (uVar24 < 4) {
                                uVar26 = 0;
                            }
                            else {
                                uVar26 = 0;
                                uVar27 = uVar15;
                                do {
                                    uVar17 = uVar26;
                                    if (0x3f < uVar17) goto code_r0x08005334;
                                    uVar27 = uVar27 - 1;
                                    uVar4 = (*(puVar30 + uVar17) & 0xff00ff00) >> 8 |
                                            (*(puVar30 + uVar17) & 0xff00ff) << 8;
                                    *(puVar16 + uVar17) = uVar4 >> 0x10 | uVar4 << 0x10;
                                    uVar26 = uVar17 + 4;
                                } while (uVar27 != 0);
                                puVar30 = puVar30 + uVar26;
                                puVar16 = &uStack_f0 + uVar17 + 4;
                            }
                            uVar27 = uVar24 & 3;
                            if (uVar27 == 1) {
                                uVar27 = *puVar30 << 0x18;
code_r0x08004e9c:
                                if (0x3c < uVar26) goto code_r0x08005334;
                                *puVar16 = uVar27;
                            }
                            else {
                                if (uVar27 == 2) {
                                    uVar27 = *puVar30 << 0x18 | puVar30[1] << 0x10;
                                    goto code_r0x08004e9c;
                                }
                                if (uVar27 == 3) {
                                    uVar27 = *puVar30 << 0x18 | puVar30[1] << 0x10 | puVar30[2] << 8;
                                    goto code_r0x08004e9c;
                                }
                            }
                            if (3 < uVar24) {
                                iVar31 = 0;
                                if (uVar15 < 2) {
                                    uVar15 = 1;
                                }
                                do {
                                    if (iVar31 == 0x40) goto code_r0x0800533c;
                                    sym.writel_relaxed(*(&uStack_f0 + iVar31),*(arg1 + 0x48) + iVar31 + 0x1d000);
                                    iVar31 = iVar31 + 4;
                                } while (uVar15 * 4 - iVar31 != 0);
                            }
                            uVar15 = uVar28 | 0x400;
                            if (*(arg2 + 0x1c) != 0) {
                                uVar15 = uVar28;
                            }
                            sym.writel_relaxed(uVar15,*(arg1 + 0x48) + 0x1a200);
                            uVar15 = *(arg2 + 0x30);
                            puVar16 = &uStack_b0;
                            puVar30 = *(arg2 + 0x28);
                            if (uVar15 < 4) {
                                uVar26 = 0;
                            }
                            else {
                                uVar24 = uVar15 >> 2;
                                uVar26 = 0;
                                do {
                                    uVar17 = uVar26;
                                    if (0x3f < uVar17) goto code_r0x08005334;
                                    uVar24 = uVar24 - 1;
                                    uVar28 = (*(puVar30 + uVar17) & 0xff00ff00) >> 8 |
                                             (*(puVar30 + uVar17) & 0xff00ff) << 8;
                                    *(puVar16 + uVar17) = uVar28 >> 0x10 | uVar28 << 0x10;
                                    uVar26 = uVar17 + 4;
                                } while (uVar24 != 0);
                                puVar30 = puVar30 + uVar26;
                                puVar16 = &uStack_b0 + uVar17 + 4;
                            }
                            uVar15 = uVar15 & 3;
                            if (uVar15 == 1) {
                                uVar15 = *puVar30 << 0x18;
code_r0x08004fb4:
                                if (0x3c < uVar26) {
code_r0x08005334:
    //WARNING: Does not return
                                    pcVar7 = SoftwareBreakpoint(1,0x8005338);
                                    (*pcVar7)();
                                }
                                *puVar16 = uVar15;
                            }
                            else {
                                if (uVar15 == 2) {
                                    uVar15 = *puVar30 << 0x18 | puVar30[1] << 0x10;
                                    goto code_r0x08004fb4;
                                }
                                if (uVar15 == 3) {
                                    uVar15 = *puVar30 << 0x18 | puVar30[1] << 0x10 | puVar30[2] << 8;
                                    goto code_r0x08004fb4;
                                }
                            }
                            iVar32 = 0x1a320;
                            sym.writel_relaxed(uStack_b0 & 0xffffffff,*(arg1 + 0x48) + 0x1d040);
                            sym.writel_relaxed(uStack_b0 >> 0x20,*(arg1 + 0x48) + 0x1d044);
                            sym.writel_relaxed(uStack_a8 & 0xffffffff,*(arg1 + 0x48) + 0x1d048);
                            sym.writel_relaxed(uStack_a8 >> 0x20,*(arg1 + 0x48) + 0x1d04c);
                            sym.writel_relaxed(uStack_a0 & 0xffffffff,*(arg1 + 0x48) + 0x1d050);
                            sym.writel_relaxed(uStack_a0 >> 0x20,*(arg1 + 0x48) + 0x1d054);
                            sym.writel_relaxed(uStack_98 & 0xffffffff,*(arg1 + 0x48) + 0x1d058);
                            sym.writel_relaxed(uStack_98 >> 0x20,*(arg1 + 0x48) + 0x1d05c);
                            sym.writel_relaxed(uStack_90 & 0xffffffff,*(arg1 + 0x48) + 0x1d060);
                            sym.writel_relaxed(uStack_90 >> 0x20,*(arg1 + 0x48) + 0x1d064);
                            sym.writel_relaxed(uStack_88 & 0xffffffff,*(arg1 + 0x48) + 0x1d068);
                            sym.writel_relaxed(uStack_88 >> 0x20,*(arg1 + 0x48) + 0x1d06c);
                            sym.writel_relaxed(uStack_80 & 0xffffffff,*(arg1 + 0x48) + 0x1d070);
                            sym.writel_relaxed(uStack_80 >> 0x20,*(arg1 + 0x48) + 0x1d074);
                            sym.writel_relaxed(uStack_78 & 0xffffffff,*(arg1 + 0x48) + 0x1d078);
                            sym.writel_relaxed(uStack_78 >> 0x20,*(arg1 + 0x48) + 0x1d07c);
                            iVar31 = *(arg1 + 0x48) + 0x1a310;
                            if (*(arg2 + 0x24) == 2) {
                                uVar15 = 0xefcdab89;
                                uVar24 = 0x10325476;
                                uStack_120 = 0xc3d2e1f0;
                                uStack_124 = 0x98badcfe;
                                sym.writel_relaxed(0x67452301,iVar31);
                                iVar14 = 0x1a314;
                                iVar31 = 0x1a318;
                                iVar34 = 0x1a31c;
                            }
                            else {
                                uVar15 = 0x510e527f;
                                uVar24 = 0x1f83d9ab;
                                uStack_124 = 0x9b05688c;
                                uStack_120 = 0x5be0cd19;
                                sym.writel_relaxed(0x6a09e667,iVar31);
                                sym.writel_relaxed(0xbb67ae85,*(arg1 + 0x48) + 0x1a314);
                                sym.writel_relaxed(0x3c6ef372,*(arg1 + 0x48) + 0x1a318);
                                sym.writel_relaxed(0xa54ff53a,*(arg1 + 0x48) + 0x1a31c);
                                iVar31 = 0x1a324;
                                iVar34 = 0x1a328;
                                iVar32 = 0x1a32c;
                                iVar14 = 0x1a320;
                            }
                            sym.writel_relaxed(uVar15,*(arg1 + 0x48) + iVar14);
                            sym.writel_relaxed(uStack_124,*(arg1 + 0x48) + iVar31);
                            sym.writel_relaxed(uVar24,*(arg1 + 0x48) + iVar34);
                            sym.writel_relaxed(uStack_120,*(arg1 + 0x48) + iVar32);
                            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a390);
                            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a394);
                            sym.writel_relaxed(*(arg2 + 0x80),*(arg1 + 0x48) + 0x1a204);
                            sym.writel_relaxed(uVar3,*(arg1 + 0x48) + 0x1a208);
                            iVar31 = 0xf4;
                            if (*(arg2 + 0x24) != 2) {
                                iVar31 = 0xf8;
                            }
                            uVar15 = *(arg1 + iVar31) | 0x4000;
                            if (*(arg2 + 0x1c) != 0) {
                                uVar15 = *(arg1 + iVar31);
                            }
                            sym.writel_relaxed(uVar15,*(arg1 + 0x48) + 0x1a300);
                            sym.writel_relaxed(uVar18,*(arg1 + 0x48) + 0x1a304);
                            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a308);
                            sym.writel_relaxed(uVar18,*(arg1 + 0x48) + 0x1a110);
                            sym.writel_relaxed(*(arg1 + 0x90),*(arg1 + 0x48) + 0x1a400);
                            sym.writel_relaxed(7,*(arg1 + 0x48) + 0x1a120);
                            DataSynchronizationBarrier(3,3,0);
                            goto code_r0x0800477c;
                        }
                    }
                    else {
                        _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
                    }
code_r0x08004a74:
                    iVar9 = -0x16;
                }
                else {
                    iVar32 = iVar21 + arg2_00 * 0x1bf8;
                    iVar31 = (*piVar12 - *(arg1 + 0x10)) + *(arg1 + 0x18);
                    uVar3 = *(piVar12 + 0x1a);
                    puVar22 = *(iVar32 + 0x28);
                    *puVar22 = iVar31;
                    puVar22[1] = uVar3 | iVar31 >> 0x10 & 0xf0000 | 0xc000000;
                    uVar15 = *(iVar32 + 0x30) + 1;
                    *(iVar32 + 0x30) = uVar15;
                    if (uVar15 < 0x200) {
code_r0x0800477c:
                        uVar26 = uVar18;
                        iVar32 = iVar21 + arg2_00 * 0x1bf8;
                        iVar36 = *(arg1 + 0x174);
                        iVar34 = iVar21 + uVar10 * 0x1bf8;
                        iVar31 = iVar32 + 0x20;
                        puVar22 = iVar34 + 0x10;
                        *(iVar32 + 0x1bd4) = *(arg2 + 0x20);
                        iVar9 = sym._qce_sps_add_sg_data(arg1,*(iVar11 + 0x40),uVar26,iVar31);
                        if (iVar36 == 0) {
                            if (iVar9 == 0) {
                                iVar9 = *(iVar21 + arg2_00 * 0x1bf8 + 0x30);
                                if (iVar9 != 0) {
                                    iVar31 = *(iVar21 + arg2_00 * 0x1bf8 + 0x28) + (iVar9 - 1) * 8;
                                    *(iVar31 + 4) = *(iVar31 + 4) | 0x50000000;
                                }
                                iVar31 = iVar21 + arg2_00 * 0x1bf8 + 0x40;
                                iVar9 = sym._qce_sps_add_sg_data(arg1,*(iVar11 + 0x48),uVar26,iVar31);
                                if (iVar9 == 0) {
                                    if (uVar18 < 0x7fc1) {
                                        iVar9 = sym._qce_sps_add_data
                                                          ((*(arg1 + 0x18) + *(iVar21 + arg2_00 * 0x1bf8 + 0x1b60)) -
                                                           *(arg1 + 0x10),0x80,iVar31);
                                        if (iVar9 != 0) goto code_r0x08004a78;
                                        uVar20 = 2;
                                        iVar9 = *(iVar21 + arg2_00 * 0x1bf8 + 0x50);
                                        uVar19 = 2;
                                    }
                                    else {
                                        uVar19 = 0;
                                        uVar20 = 0;
                                        iVar9 = *(iVar21 + arg2_00 * 0x1bf8 + 0x50);
                                    }
                                    if (iVar9 != 0) {
                                        iVar31 = *(iVar21 + arg2_00 * 0x1bf8 + 0x48) + (iVar9 - 1) * 8;
                                        *(iVar31 + 4) = *(iVar31 + 4) | 0x80000000;
                                        uVar20 = uVar19;
                                    }
                                    *puVar22 = uVar20;
                                    iVar9 = sym._qce_sps_transfer(arg1,arg2_00);
joined_r0x080049f4:
                                    if (iVar9 == 0) goto code_r0x08004b54;
                                }
                            }
                        }
                        else if (iVar9 == 0) {
                            iVar9 = *(iVar21 + arg2_00 * 0x1bf8 + 0x30);
                            if (iVar9 != 0) {
                                iVar32 = *(iVar21 + arg2_00 * 0x1bf8 + 0x28) + (iVar9 - 1) * 8;
                                *(iVar32 + 4) = *(iVar32 + 4) | 0x50000000;
                            }
                            if ((*(arg1 + 0x78) == '\0') ||
                               (iVar9 = sym._qce_sps_add_cmd(arg1,iVar21 + arg2_00 * 0x1bf8 + 0x1a88,iVar31),
                               iVar9 == 0)) {
                                iVar31 = iVar21 + arg2_00 * 0x1bf8 + 0x40;
                                iVar9 = sym._qce_sps_add_sg_data(arg1,*(iVar11 + 0x48),uVar26,iVar31);
                                if (iVar9 == 0) {
                                    if ((*(arg1 + 0x78) == '\0') && (0x7fc0 < uVar18)) {
                                        uVar19 = 0;
                                    }
                                    else {
                                        iVar9 = sym._qce_sps_add_data
                                                          ((*(arg1 + 0x18) + *(iVar21 + arg2_00 * 0x1bf8 + 0x1b60)) -
                                                           *(arg1 + 0x10),0x80,iVar31);
                                        if (iVar9 != 0) goto code_r0x08004a78;
                                        uVar19 = 2;
                                    }
                                    *puVar22 = uVar19;
                                    sym.select_mode(arg1,iVar34);
                                    iVar9 = sym._qce_sps_transfer(arg1,arg2_00);
                                    piVar1 = arg1 + 0x102fc;
                                    Hint_Prefetch(piVar1,2,0,1);
                                    do {
                                        if (*piVar1 != 1) goto joined_r0x080049f4;
                                        cVar2 = '\x01';
                                        bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                                        if (bVar8) {
                                            *piVar1 = 0;
                                            cVar2 = ExclusiveMonitorsStatus();
                                        }
                                    } while (cVar2 != '\0');
                                    DataMemoryBarrier(2,3);
                                    goto joined_r0x080049f4;
                                }
                            }
                        }
                    }
                    else {
                        _printk(0x8001aeb,"_qce_sps_add_cmd",uVar15,0x200);
                        iVar9 = -0xc;
                    }
                }
code_r0x08004a78:
                iVar36 = *(iVar33 + 0x1bb0);
                if (iVar36 != 0) {
                    iVar31 = *(iVar11 + 0x40);
                    bVar8 = iVar31 != *(iVar11 + 0x48);
                    if (0 < iVar36) {
                        uVar37 = *arg1;
                        do {
                            dma_unmap_sg_attrs(uVar37,iVar31,1,bVar8,0);
                            iVar31 = sg_next(iVar31);
                            iVar36 = iVar36 + -1;
                        } while (iVar36 != 0);
                    }
                }
                iVar31 = *(iVar11 + 0x48);
                if ((*(iVar11 + 0x40) != iVar31) && (iVar36 = *(iVar21 + arg2_00 * 0x1bf8 + 0x1bb4), 0 < iVar36)) {
                    uVar37 = *arg1;
                    do {
                        dma_unmap_sg_attrs(uVar37,iVar31,1,2,0);
                        iVar31 = sg_next(iVar31);
                        iVar36 = iVar36 + -1;
                    } while (iVar36 != 0);
                }
                arg1 = arg1 + arg2_00 * 0x1bf8;
                piVar1 = arg1 + 0x740;
                *(arg1 + 0x748) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar36 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
                if (iVar36 == 0) {
                    _printk(0x800191f,"qce_free_req_info",arg2_00);
                }
                goto code_r0x08004b54;
            }
            if (8 < uVar10) goto code_r0x0800533c;
            iVar9 = *(arg2 + 0x18);
            if (iVar9 == 0) {
                iVar36 = *(arg2 + 0x20);
                if (iVar36 == 0) {
                    if (*(arg2 + 0x24) == 3) {
                        iVar21 = 0x1a30;
                    }
                    else {
                        if (*(arg2 + 0x24) != 2) goto code_r0x08003f8c;
                        iVar21 = 0x16d0;
                    }
                    goto code_r0x08003e94;
                }
code_r0x08003f90:
                _printk(0x80018b2,"qce_aead_req",iVar9,iVar36,*(arg2 + 0x68),*(arg2 + 0x34));
                arg1 = arg1 + arg2_00 * 0x1bf8;
                piVar1 = arg1 + 0x740;
                *(arg1 + 0x748) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            else {
                if (iVar9 == 1) {
                    iVar36 = *(arg2 + 0x20);
                    if (iVar36 == 0) {
                        if (*(arg2 + 0x24) == 3) {
                            iVar21 = 0x1b08;
                        }
                        else {
                            if (*(arg2 + 0x24) != 2) goto code_r0x08003f8c;
                            iVar21 = 0x17a8;
                        }
                        goto code_r0x08003e94;
                    }
                    goto code_r0x08003f90;
                }
                if (iVar9 != 2) {
                    iVar36 = *(arg2 + 0x20);
                    goto code_r0x08003f90;
                }
                iVar36 = *(arg2 + 0x20);
                if (iVar36 != 0) goto code_r0x08003f90;
                if (*(arg2 + 0x68) != 0x20) {
                    if (*(arg2 + 0x68) == 0x10) {
                        if (*(arg2 + 0x24) == 3) {
                            iVar21 = 0x1880;
                        }
                        else {
                            if (*(arg2 + 0x24) != 2) goto code_r0x08003f8c;
                            iVar21 = 0x1520;
                        }
                        goto code_r0x08003e94;
                    }
code_r0x08003f8c:
                    iVar36 = 0;
                    goto code_r0x08003f90;
                }
                if (*(arg2 + 0x24) == 3) {
                    iVar21 = 0x1958;
                }
                else {
                    if (*(arg2 + 0x24) != 2) goto code_r0x08003f8c;
                    iVar21 = 0x15f8;
                }
code_r0x08003e94:
                piVar12 = arg1 + arg2_00 * 0x1bf8 + iVar21;
                if (piVar12 == NULL) goto code_r0x08003f8c;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_e0 = 0;
                uStack_d8 = 0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                uStack_100 = 0;
                uStack_f8 = 0;
                if (*(arg2 + 0x94) < 4) {
                    uVar4 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1 + *(arg2 + 0x94) * 4 + 0x134) << 5
                    ;
                    uVar27 = uVar4 | 0xe;
                    uVar28 = *(arg2 + 0x68);
                    *(arg1 + 0x8c) = uVar27;
                    *(arg1 + 0x90) = uVar4 | 0x20e;
                    *(piVar12[1] + 4) = uVar27;
                    *(piVar12[2] + 4) = *(arg1 + 0x90);
                    if (*(arg2 + 0x18) < 2) {
                        bVar8 = true;
                    }
                    else if ((*(arg2 + 0x18) != 2) || ((bVar8 = false, uVar28 != 0x20 && (uVar28 != 0x10))))
                    goto code_r0x0800403c;
                    if (*(arg2 + 0x20) == 0) {
                        puVar16 = &uStack_100;
                        puVar25 = *(arg2 + 0x70);
                        if (uVar15 < 4) {
                            bVar6 = false;
                            puVar13 = puVar25;
                        }
                        else {
                            puVar13 = puVar25 + 1;
                            uVar27 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
                            uVar4 = uVar27 >> 0x10 | uVar27 << 0x10;
                            uVar27 = uVar15 >> 2;
                            uStack_100 = uVar4;
                            if (uVar27 == 1) {
                                bVar6 = false;
                                puVar16 = puVar16 | 4;
                            }
                            else {
                                uVar5 = (puVar25[1] & 0xff00ff00) >> 8 | (puVar25[1] & 0xff00ff) << 8;
                                uStack_100 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                if (uVar27 == 2) {
                                    bVar6 = false;
                                    puVar13 = puVar25 + 2;
                                    puVar16 = &uStack_f8;
                                }
                                else {
                                    uVar4 = (puVar25[2] & 0xff00ff00) >> 8 | (puVar25[2] & 0xff00ff) << 8;
                                    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                                    uStack_f8 = uVar4;
                                    if (uVar27 == 3) {
                                        bVar6 = false;
                                        puVar13 = puVar25 + 3;
                                        puVar16 = &uStack_f8 + 4;
                                    }
                                    else {
                                        uVar5 = (puVar25[3] & 0xff00ff00) >> 8 | (puVar25[3] & 0xff00ff) << 8;
                                        uStack_f8 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4);
                                        if (uVar27 != 4) goto code_r0x08005334;
                                        puVar13 = puVar25 + 4;
                                        puVar16 = &uStack_f0;
                                        bVar6 = true;
                                    }
                                }
                            }
                        }
                        uVar15 = uVar15 & 3;
                        if (uVar15 == 1) {
                            uVar15 = *puVar13 << 0x18;
code_r0x08004118:
                            if (bVar6) goto code_r0x08005334;
                            *puVar16 = uVar15;
                        }
                        else {
                            if (uVar15 == 2) {
                                uVar15 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10;
                                goto code_r0x08004118;
                            }
                            if (uVar15 == 3) {
                                uVar15 = *puVar13 << 0x18 | *(puVar13 + 1) << 0x10 | *(puVar13 + 2) << 8;
                                goto code_r0x08004118;
                            }
                        }
                        iVar21 = piVar12[8];
                        *(iVar21 + 4) = uStack_100;
                        *(iVar21 + 0x14) = uStack_100._4_4_;
                        if (!bVar8) {
                            *(iVar21 + 0x24) = uStack_f8;
                            *(iVar21 + 0x34) = uStack_f8._4_4_;
                        }
                        uVar15 = uVar28 >> 2;
                        puVar16 = &uStack_f0;
                        puVar30 = *(arg2 + 0x60);
                        if (uVar28 < 4) {
                            uVar26 = 0;
                        }
                        else {
                            uVar26 = 0;
                            uVar27 = uVar15;
                            do {
                                uVar17 = uVar26;
                                if (0x3f < uVar17) goto code_r0x08005334;
                                uVar27 = uVar27 - 1;
                                uVar4 = (*(puVar30 + uVar17) & 0xff00ff00) >> 8 | (*(puVar30 + uVar17) & 0xff00ff) << 8;
                                *(puVar16 + uVar17) = uVar4 >> 0x10 | uVar4 << 0x10;
                                uVar26 = uVar17 + 4;
                            } while (uVar27 != 0);
                            puVar30 = puVar30 + uVar26;
                            puVar16 = &uStack_f0 + uVar17 + 4;
                        }
                        uVar27 = uVar28 & 3;
                        if (uVar27 == 1) {
                            uVar27 = *puVar30 << 0x18;
code_r0x080041f0:
                            if (0x3c < uVar26) goto code_r0x08005334;
                            *puVar16 = uVar27;
                        }
                        else {
                            if (uVar27 == 2) {
                                uVar27 = *puVar30 << 0x18 | puVar30[1] << 0x10;
                                goto code_r0x080041f0;
                            }
                            if (uVar27 == 3) {
                                uVar27 = *puVar30 << 0x18 | puVar30[1] << 0x10 | puVar30[2] << 8;
                                goto code_r0x080041f0;
                            }
                        }
                        if (3 < uVar28) {
                            iVar21 = piVar12[6];
                            if (uVar15 < 2) {
                                uVar15 = 1;
                            }
                            *(iVar21 + 4) = uStack_f0;
                            if (7 < uVar28) {
                                *(iVar21 + 0x14) = uStack_f0._4_4_;
                                if (uVar15 != 2) {
                                    *(iVar21 + 0x24) = uStack_e8;
                                    if (uVar15 != 3) {
                                        *(iVar21 + 0x34) = uStack_e8._4_4_;
                                        if (uVar15 != 4) {
                                            *(iVar21 + 0x44) = uStack_e0;
                                            if (uVar15 != 5) {
                                                *(iVar21 + 0x54) = uStack_e0._4_4_;
                                                if (uVar15 != 6) {
                                                    *(iVar21 + 100) = uStack_d8;
                                                    if (uVar15 != 7) {
                                                        *(iVar21 + 0x74) = uStack_d8._4_4_;
                                                        if (uVar15 != 8) {
                                                            *(iVar21 + 0x84) = uStack_d0;
                                                            if (uVar15 != 9) {
                                                                *(iVar21 + 0x94) = uStack_d0._4_4_;
                                                                if (uVar15 != 10) {
                                                                    *(iVar21 + 0xa4) = uStack_c8;
                                                                    if (uVar15 != 0xb) {
                                                                        *(iVar21 + 0xb4) = uStack_c8._4_4_;
                                                                        if (uVar15 != 0xc) {
                                                                            *(iVar21 + 0xc4) = uStack_c0;
                                                                            if (uVar15 != 0xd) {
                                                                                *(iVar21 + 0xd4) = uStack_c0._4_4_;
                                                                                if (uVar15 != 0xe) {
                                                                                    *(iVar21 + 0xe4) = uStack_b8;
                                                                                    if (uVar15 != 0xf) {
                                                                                        *(iVar21 + 0xf4) =
                                                                                             uStack_b8._4_4_;
                                                                                        if (uVar15 != 0x10)
                                                                                        goto code_r0x0800533c;
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
                        uVar15 = *(piVar12[3] + 4);
                        *(piVar12[3] + 4) = uVar15 & 0xfffff800 | uVar15 & 0x3ff | (*(arg2 + 0x1c) == 0) << 10;
                        puVar16 = &uStack_b0;
                        uVar15 = *(arg2 + 0x30);
                        puVar30 = *(arg2 + 0x28);
                        if (uVar15 < 4) {
                            uVar26 = 0;
                        }
                        else {
                            uVar28 = uVar15 >> 2;
                            uVar26 = 0;
                            do {
                                uVar17 = uVar26;
                                if (0x3f < uVar17) goto code_r0x08005334;
                                uVar28 = uVar28 - 1;
                                uVar27 = (*(puVar30 + uVar17) & 0xff00ff00) >> 8 | (*(puVar30 + uVar17) & 0xff00ff) << 8
                                ;
                                *(puVar16 + uVar17) = uVar27 >> 0x10 | uVar27 << 0x10;
                                uVar26 = uVar17 + 4;
                            } while (uVar28 != 0);
                            puVar30 = puVar30 + uVar26;
                            puVar16 = &uStack_b0 + uVar17 + 4;
                        }
                        uVar15 = uVar15 & 3;
                        if (uVar15 == 1) {
                            uVar15 = *puVar30 << 0x18;
code_r0x080043d4:
                            if (0x3c < uVar26) goto code_r0x08005334;
                            *puVar16 = uVar15;
                        }
                        else {
                            if (uVar15 == 2) {
                                uVar15 = *puVar30 << 0x18 | puVar30[1] << 0x10;
                                goto code_r0x080043d4;
                            }
                            if (uVar15 == 3) {
                                uVar15 = *puVar30 << 0x18 | puVar30[1] << 0x10 | puVar30[2] << 8;
                                goto code_r0x080043d4;
                            }
                        }
                        iVar21 = piVar12[0x14];
                        *(iVar21 + 4) = uStack_b0;
                        *(iVar21 + 0x14) = uStack_b0._4_4_;
                        *(iVar21 + 0x24) = uStack_a8;
                        *(iVar21 + 0x34) = uStack_a8._4_4_;
                        *(iVar21 + 0x44) = uStack_a0;
                        *(iVar21 + 0x54) = uStack_a0._4_4_;
                        *(iVar21 + 100) = uStack_98;
                        *(iVar21 + 0x74) = uStack_98._4_4_;
                        *(iVar21 + 0x84) = uStack_90;
                        *(iVar21 + 0x94) = uStack_90._4_4_;
                        *(iVar21 + 0xa4) = uStack_88;
                        *(iVar21 + 0xb4) = uStack_88._4_4_;
                        *(iVar21 + 0xc4) = uStack_80;
                        *(iVar21 + 0xd4) = uStack_80._4_4_;
                        *(iVar21 + 0xe4) = uStack_78;
                        *(iVar21 + 0xf4) = uStack_78._4_4_;
                        iVar21 = piVar12[0x15];
                        if (*(arg2 + 0x24) == 2) {
                            uVar19 = 0xefcdab89;
                            uVar20 = 0xc3d2e1f0;
                            uVar23 = 0x98badcfe;
                            uVar29 = 0x10325476;
                            iVar31 = 4;
                            iVar32 = 3;
                            iVar33 = 2;
                            iVar34 = 1;
                            *(iVar21 + 4) = 0x67452301;
                        }
                        else {
                            *(iVar21 + 4) = 0x6a09e667;
                            uVar23 = 0x9b05688c;
                            uVar20 = 0x5be0cd19;
                            uVar19 = 0x510e527f;
                            uVar29 = 0x1f83d9ab;
                            *(iVar21 + 0x14) = 0xbb67ae85;
                            iVar31 = 7;
                            iVar32 = 6;
                            iVar33 = 5;
                            iVar34 = 4;
                            *(iVar21 + 0x24) = 0x3c6ef372;
                            *(iVar21 + 0x34) = 0xa54ff53a;
                        }
                        *(iVar21 + iVar34 * 0x10 + 4) = uVar19;
                        *(iVar21 + iVar33 * 0x10 + 4) = uVar23;
                        *(iVar21 + iVar32 * 0x10 + 4) = uVar29;
                        *(iVar21 + iVar31 * 0x10 + 4) = uVar20;
                        iVar21 = piVar12[0x17];
                        *(iVar21 + 4) = 0;
                        *(iVar21 + 0x14) = 0;
                        uVar15 = *(piVar12[0x11] + 4) & 0xffff3fff;
                        uVar28 = uVar15 | 0x4000;
                        if (*(arg2 + 0x1c) != 0) {
                            uVar28 = uVar15;
                        }
                        *(piVar12[0x11] + 4) = uVar28;
                        *(piVar12[0x12] + 4) = uVar18;
                        *(piVar12[0x13] + 4) = 0;
                        *(piVar12[0x18] + 4) = uVar18;
                        *(piVar12[4] + 4) = *(arg2 + 0x80);
                        *(piVar12[5] + 4) = uVar24 & 0xffff;
                        goto code_r0x08004594;
                    }
                }
                else {
                    _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
                }
code_r0x0800403c:
                arg1 = arg1 + arg2_00 * 0x1bf8;
                piVar1 = arg1 + 0x740;
                *(arg1 + 0x748) = 5;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
            if (iVar9 == 0) {
                _printk(0x800191f,"qce_free_req_info",uVar10);
                iVar9 = -0x16;
            }
            else {
                iVar9 = -0x16;
            }
        }
    }
code_r0x08004b54:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return iVar9;
    }
    __stack_chk_fail();
code_r0x0800533c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8005340);
    (*pcVar7)();
}


// ===== sym._qce_aead_ccm_req @ 0x080053b0 (size 2884) =====

int sym._qce_aead_ccm_req(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    int *piVar4;
    uint16_t uVar5;
    char cVar6;
    code *pcVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    uint64_t uVar14;
    uint uVar15;
    uint32_t uVar16;
    uint *puVar17;
    uint32_t uVar18;
    ulong *in_x18;
    uint32_t uVar19;
    int64_t *piVar20;
    int64_t iVar21;
    int iVar22;
    ulong uVar23;
    uint32_t *puVar24;
    ulong uVar25;
    uint64_t arg2_00;
    ulong unaff_x30;
    uint32_t uStack_70;
    
    *in_x18 = unaff_x30;
    iVar21 = *(arg2 + 0x10);
    uVar19 = *(arg2 + 0x34);
    uVar9 = sym.qce_alloc_req_info(arg1);
    if (uVar9 < 0) {
        return -0x10;
    }
    arg2_00 = uVar9;
    *(arg2 + 0xa8) = uVar9;
    if (9 < uVar9) goto code_r0x08005e94;
    iVar10 = *(iVar21 + 0x34);
    uVar3 = *(arg2 + 0x50) + iVar10;
    if (*(arg2 + 0x1c) == 0) {
        iVar22 = *(arg1 + 0x170);
        *(arg2 + 0x80) = iVar10;
        uStack_70 = *(iVar21 + 0x34) + uVar19;
        uVar19 = ((uVar19 + iVar22) - 1 & -iVar22) - uVar19;
    }
    else {
        uStack_70 = iVar10 - uVar19;
        *(arg2 + 0x80) = uStack_70;
    }
    iVar1 = arg1 + 0x740;
    if (*(arg1 + 0x174) == 0) {
        if (uVar3 < 1) goto code_r0x080054cc;
        iVar10 = 0;
        iVar11 = *(iVar21 + 0x40);
        uVar16 = uVar3;
        do {
            iVar10 = iVar10 + 1;
            uVar16 = uVar16 - *(iVar11 + 0xc);
            iVar11 = sg_next();
        } while (0 < uVar16);
    }
    else {
        iVar22 = *(iVar21 + 0x30) + *(iVar21 + 0x34);
        if (iVar22 < 1) {
code_r0x080054cc:
            iVar10 = 0;
        }
        else {
            iVar10 = 0;
            iVar11 = *(iVar21 + 0x40);
            do {
                iVar10 = iVar10 + 1;
                iVar22 = iVar22 - *(iVar11 + 0xc);
                iVar11 = sg_next();
            } while (0 < iVar22);
        }
    }
    iVar11 = iVar1 + arg2_00 * 0x1bf8;
    *(iVar11 + 0x1bb0) = iVar10;
    piVar4 = iVar11 + 0x1bb0;
    iVar22 = *(arg2 + 0x50);
    if (iVar22 == 0) {
        iVar11 = iVar1 + arg2_00 * 0x1bf8;
        *(iVar11 + 0x1ba0) = 0;
        *(iVar11 + 0x1ba8) = 0;
    }
    else {
        if (iVar22 < 1) {
            *(iVar1 + arg2_00 * 0x1bf8 + 0x1ba0) = 0;
        }
        else {
            iVar11 = *(arg2 + 0x58);
            uVar16 = 0;
            do {
                uVar18 = uVar16;
                uVar16 = uVar18 + 1;
                iVar22 = iVar22 - *(iVar11 + 0xc);
                iVar11 = sg_next();
            } while (0 < iVar22);
            *(iVar1 + arg2_00 * 0x1bf8 + 0x1ba0) = uVar16;
            if (uVar18 < 0x7fffffff) {
                uVar23 = *arg1;
                uVar25 = *(arg2 + 0x58);
                do {
                    dma_map_sg_attrs(uVar23,uVar25,1,1,0);
                    uVar25 = sg_next(uVar25);
                    uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
            }
        }
        iVar10 = *piVar4;
        *(iVar1 + arg2_00 * 0x1bf8 + 0x1ba8) = *(arg2 + 0x58);
    }
    iVar11 = *(iVar21 + 0x40);
    iVar12 = *(iVar21 + 0x48);
    bVar8 = iVar11 != iVar12;
    if (0 < iVar10) {
        uVar25 = *arg1;
        do {
            dma_map_sg_attrs(uVar25,iVar11,1,bVar8,0);
            iVar11 = sg_next(iVar11);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar11 = *(iVar21 + 0x40);
        iVar12 = *(iVar21 + 0x48);
    }
    if (iVar11 != iVar12) {
        iVar10 = *(iVar21 + 0x30) + uStack_70;
        if (iVar10 < 1) {
            iVar10 = 0;
            goto code_r0x080056f8;
        }
        uVar16 = 0;
        do {
            uVar18 = uVar16;
            uVar16 = uVar18 + 1;
            iVar10 = iVar10 - *(iVar12 + 0xc);
            iVar12 = sg_next();
        } while (0 < iVar10);
        *(iVar1 + arg2_00 * 0x1bf8 + 0x1bb4) = uVar16;
        if (uVar18 < 0x7fffffff) {
            uVar23 = *arg1;
            uVar25 = *(iVar21 + 0x48);
            do {
                dma_map_sg_attrs(uVar23,uVar25,1,2,0);
                uVar25 = sg_next(uVar25);
                uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
        }
        if (*(arg1 + 0x40) == '\0') goto code_r0x0800570c;
code_r0x08005688:
        iVar10 = *(arg2 + 0x18);
        if (iVar10 == 0) {
            uVar14 = *(arg2 + 0x20);
            iVar11 = arg1 + arg2_00 * 0x1bf8;
            if (*(arg2 + 0x20) == 1) {
                piVar20 = iVar11 + 0xd88;
                uVar14 = 1;
            }
            else {
                piVar20 = iVar11 + 0xcb0;
            }
code_r0x08005838:
            if (piVar20 != NULL) {
                iVar10 = sym._ce_setup_cipher(arg1,arg2,uVar3,*(arg2 + 0x50));
                if (-1 < iVar10) goto code_r0x0800585c;
                goto code_r0x08005bd8;
            }
        }
        else {
            if (iVar10 == 1) {
                uVar14 = *(arg2 + 0x20);
                iVar11 = arg1 + arg2_00 * 0x1bf8;
                if (*(arg2 + 0x20) == 1) {
                    piVar20 = iVar11 + 0xf38;
                    uVar14 = 1;
                }
                else {
                    piVar20 = iVar11 + 0xe60;
                }
                goto code_r0x08005838;
            }
            if (iVar10 == 2) {
                uVar14 = *(arg2 + 0x20);
                if (*(arg2 + 0x20) < 5) {
    //switch table (4 cases) at 0x8000a00
                    switch(*(uVar14 * 4 + 0x8000a00) + 0x80056b8) {
                    case 0x80056cc:
                        if (*(arg2 + 0x68) == 0x10) {
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0x7a0;
                        }
                        else {
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0x878;
                        }
                        break;
                    case 0x8005788:
                        if (*(arg2 + 0x68) == 0x10) {
                            iVar11 = 0x1be0;
                        }
                        else {
                            iVar11 = 0x1cb8;
                        }
                        piVar20 = arg1 + arg2_00 * 0x1bf8 + iVar11;
                        uVar14 = 4;
                        break;
                    case 0x80057a4:
                        if (*(arg2 + 0x68) == 0x10) {
                            uVar14 = 1;
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0x950;
                        }
                        else {
                            uVar14 = 1;
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0xa28;
                        }
                        break;
                    case 0x80057c8:
                        if ((*(arg2 + 0x68) & 0xfffffffe) == 0x20) {
                            uVar14 = 3;
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0xb00;
                        }
                        else {
                            uVar14 = 3;
                            piVar20 = arg1 + arg2_00 * 0x1bf8 + 0xbd8;
                        }
                    }
                    goto code_r0x08005838;
                }
            }
            else {
                uVar14 = *(arg2 + 0x20);
            }
        }
        _printk(0x80017f2,"_qce_aead_ccm_req",iVar10,uVar14);
        if (8 < uVar9) goto code_r0x08005e94;
        iVar10 = -0x16;
        arg1 = arg1 + arg2_00 * 0x1bf8;
        piVar4 = arg1 + 0x740;
        *(arg1 + 0x748) = 5;
        Hint_Prefetch(piVar4,2,0,1);
        do {
            iVar22 = *piVar4;
            cVar6 = '\x01';
            bVar8 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar8) {
                *piVar4 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        goto joined_r0x08005d78;
    }
    iVar10 = *piVar4;
code_r0x080056f8:
    *(iVar1 + arg2_00 * 0x1bf8 + 0x1bb4) = iVar10;
    if (*(arg1 + 0x40) != '\0') goto code_r0x08005688;
code_r0x0800570c:
    iVar10 = sym._ce_setup_cipher_direct(arg1,arg2,uVar3,*(arg2 + 0x50));
    piVar20 = NULL;
    if (iVar10 < 0) goto code_r0x08005bd8;
code_r0x0800585c:
    iVar11 = iVar1 + arg2_00 * 0x1bf8;
    *(iVar11 + 0x1bd4) = *(arg2 + 0x20);
    *(iVar11 + 0x1b98) = *(arg2 + 0x10);
    *(iVar11 + 0x1b88) = *(arg2 + 8);
    uVar15 = *(arg2 + 0x1c);
    *(iVar11 + 8) = 2;
    *(iVar11 + 0x1bec) = uVar3;
    *(iVar11 + 0x1bd0) = uVar15;
    if (8 < uVar9) goto code_r0x08005e94;
    cVar6 = *(arg1 + 0x40);
    iVar11 = arg1 + arg2_00 * 0x1bf8;
    *(iVar11 + 0x770) = 0;
    *(iVar11 + 0x790) = 0;
    if ((cVar6 == '\0') || (piVar20 == NULL)) {
code_r0x08005900:
        if ((*(arg1 + 0x174) == 0) ||
           (((*(arg2 + 0x50) != 0 &&
             (iVar10 = sym._qce_sps_add_sg_data(arg1,*(arg2 + 0x58),*(arg2 + 0x50),iVar1 + arg2_00 * 0x1bf8 + 0x20),
             iVar10 != 0)) ||
            (iVar10 = sym._qce_sps_add_sg_data_off(arg1,*(iVar21 + 0x40),*(iVar21 + 0x34),*(iVar21 + 0x30)),
            iVar10 != 0)))) goto code_r0x08005bd8;
        puVar24 = iVar1 + arg2_00 * 0x1bf8 + 0x30;
        if (*puVar24 != 0) {
            iVar11 = *(iVar1 + arg2_00 * 0x1bf8 + 0x28) + (*puVar24 - 1) * 8;
            *(iVar11 + 4) = *(iVar11 + 4) | 0x50000000;
        }
        if (((*(arg2 + 0x1c) == 1) && (*(arg1 + 0x78) != '\0')) && (*(arg1 + 0x79) == '\0')) {
            iVar12 = iVar1 + arg2_00 * 0x1bf8;
            piVar20 = iVar12 + 0x28;
            iVar11 = (*(iVar12 + 0x1650) - *(arg1 + 0x10)) + *(arg1 + 0x18);
            uVar5 = *(iVar12 + 0x1720);
            puVar17 = *piVar20 + *puVar24 * 8;
            *puVar17 = iVar11;
            puVar17[1] = uVar5 | iVar11 >> 0x10 & 0xf0000 | 0x8000000;
            uVar16 = *puVar24 + 1;
            uVar14 = uVar16;
            *puVar24 = uVar16;
            if (uVar16 < 0x200) {
                uVar18 = *(arg1 + 0x170);
            }
            else {
                _printk(0x8001aeb,"_qce_sps_add_cmd",uVar14,0x200);
                uVar16 = *puVar24;
                uVar14 = uVar16;
                uVar18 = *(arg1 + 0x170);
            }
            if (uVar18 != 0) {
                iVar11 = (*(arg1 + 0x18) + *(iVar1 + arg2_00 * 0x1bf8 + 0x1b70)) - *(arg1 + 0x10);
                puVar17 = *piVar20 + uVar14 * 8;
                do {
                    if (uVar14 == 0x200) {
                        _printk(0x8001aeb,"_qce_sps_add_data",uVar14,0x200);
                        uVar16 = *puVar24;
                        break;
                    }
                    uVar16 = uVar18;
                    if (0x1fe < uVar18 >> 6) {
                        uVar16 = 0x7fc0;
                    }
                    uVar18 = uVar18 - uVar16;
                    *puVar17 = iVar11;
                    puVar17[1] = iVar11 >> 0x10 & 0xf0000 | uVar16;
                    iVar11 = iVar11 + uVar16;
                    uVar16 = *puVar24 + 1;
                    uVar14 = uVar16;
                    *puVar24 = uVar16;
                    puVar17 = puVar17 + 2;
                } while (uVar18 != 0);
            }
            if (uVar16 != 0) {
                iVar11 = *piVar20 + (uVar16 - 1) * 8;
                *(iVar11 + 4) = *(iVar11 + 4) | 0x50000000;
            }
        }
        if (*(arg1 + 0x78) != '\0') {
            iVar12 = iVar1 + arg2_00 * 0x1bf8;
            uVar5 = *(iVar12 + 7000);
            iVar11 = (*(iVar12 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
            puVar17 = *(iVar12 + 0x28) + *puVar24 * 8;
            *puVar17 = iVar11;
            puVar17[1] = uVar5 | iVar11 >> 0x10 & 0xf0000 | 0xa000000;
            uVar16 = *puVar24 + 1;
            *puVar24 = uVar16;
            if (0x1ff < uVar16) goto code_r0x08005bbc;
        }
        uVar16 = *(arg2 + 0x50);
        iVar11 = iVar1 + arg2_00 * 0x1bf8;
        puVar24 = iVar11 + 0x50;
        uVar14 = *puVar24;
        if (uVar16 != 0) {
            iVar12 = (*(arg1 + 0x18) + *(iVar11 + 0x1b70)) - *(arg1 + 0x10);
            puVar17 = *(iVar1 + arg2_00 * 0x1bf8 + 0x48) + uVar14 * 8;
            do {
                if (uVar14 == 0x200) {
                    pcVar13 = "_qce_sps_add_data";
                    uVar16 = 0x200;
                    goto code_r0x08005bcc;
                }
                uVar18 = uVar16;
                if (0x1fe < uVar16 >> 6) {
                    uVar18 = 0x7fc0;
                }
                uVar16 = uVar16 - uVar18;
                *puVar17 = iVar12;
                puVar17[1] = iVar12 >> 0x10 & 0xf0000 | uVar18;
                iVar12 = iVar12 + uVar18;
                uVar14 = *puVar24 + 1;
                *puVar24 = *puVar24 + 1;
                puVar17 = puVar17 + 2;
            } while (uVar16 != 0);
        }
        iVar10 = sym._qce_sps_add_sg_data_off(arg1,*(iVar21 + 0x48),uStack_70,*(iVar21 + 0x30));
        if ((iVar10 == 0) &&
           (iVar10 = sym._qce_sps_add_data
                               ((*(arg1 + 0x18) + *(iVar11 + 0x1b70)) - *(arg1 + 0x10),uVar19,iVar11 + 0x40),
           iVar10 == 0)) {
            if ((*(arg1 + 0x78) == '\0') && (0x7fc0 < uVar3)) {
                uVar15 = 0;
            }
            else {
                iVar10 = sym._qce_sps_add_data
                                   ((*(arg1 + 0x18) + *(iVar1 + arg2_00 * 0x1bf8 + 0x1b60)) - *(arg1 + 0x10),0x80,
                                    iVar11 + 0x40);
                if (iVar10 != 0) goto code_r0x08005bd8;
                uVar15 = 2;
            }
            iVar11 = iVar1 + arg2_00 * 0x1bf8;
            *(iVar1 + arg2_00 * 0x1bf8 + 0x10) = uVar15;
            sym._qce_ccm_get_around_output(arg1,iVar11,*(arg2 + 0x1c));
            sym.select_mode(arg1,iVar11);
            iVar10 = sym._qce_sps_transfer(arg1,arg2_00);
            piVar2 = arg1 + 0x102fc;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                if (*piVar2 != 1) goto code_r0x08005ea4;
                cVar6 = '\x01';
                bVar8 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar8) {
                    *piVar2 = 0;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005ea4:
            if (iVar10 == 0) {
                return 0;
            }
        }
    }
    else {
        iVar12 = iVar1 + arg2_00 * 0x1bf8;
        iVar11 = (*piVar20 - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar5 = *(piVar20 + 0x1a);
        puVar17 = *(iVar12 + 0x28);
        *puVar17 = iVar11;
        puVar17[1] = uVar5 | iVar11 >> 0x10 & 0xf0000 | 0xc000000;
        uVar16 = *(iVar12 + 0x30) + 1;
        *(iVar12 + 0x30) = uVar16;
        if (uVar16 < 0x200) {
            iVar10 = 0;
            goto code_r0x08005900;
        }
code_r0x08005bbc:
        pcVar13 = "_qce_sps_add_cmd";
code_r0x08005bcc:
        _printk(0x8001aeb,pcVar13,uVar16,0x200);
        iVar10 = -0xc;
    }
code_r0x08005bd8:
    iVar22 = *(iVar1 + arg2_00 * 0x1bf8 + 0x1ba0);
    if ((iVar22 != 0) && (0 < iVar22)) {
        uVar23 = *arg1;
        uVar25 = *(arg2 + 0x58);
        do {
            dma_unmap_sg_attrs(uVar23,uVar25,1,1,0);
            uVar25 = sg_next(uVar25);
            iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
    }
    iVar22 = *piVar4;
    if (iVar22 != 0) {
        iVar11 = *(iVar21 + 0x40);
        bVar8 = iVar11 != *(iVar21 + 0x48);
        if (0 < iVar22) {
            uVar25 = *arg1;
            do {
                dma_unmap_sg_attrs(uVar25,iVar11,1,bVar8,0);
                iVar11 = sg_next(iVar11);
                iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
        }
    }
    iVar11 = *(iVar21 + 0x48);
    if ((*(iVar21 + 0x40) != iVar11) && (iVar22 = *(iVar1 + arg2_00 * 0x1bf8 + 0x1bb4), 0 < iVar22)) {
        uVar25 = *arg1;
        do {
            dma_unmap_sg_attrs(uVar25,iVar11,1,2,0);
            iVar11 = sg_next(iVar11);
            iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
    }
    if (8 < uVar9) {
code_r0x08005e94:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8005e98);
        (*pcVar7)();
    }
    arg1 = arg1 + arg2_00 * 0x1bf8;
    piVar4 = arg1 + 0x740;
    *(arg1 + 0x748) = 5;
    Hint_Prefetch(piVar4,2,0,1);
    do {
        iVar22 = *piVar4;
        cVar6 = '\x01';
        bVar8 = ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
            *piVar4 = 0;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x08005d78:
    if (iVar22 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2_00);
    }
    return iVar10;
}


// ===== sym.qce_alloc_req_info @ 0x08005ef4 (size 476) =====

uint64_t sym.qce_alloc_req_info(uint32_t arg1)

{
    int *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar8 = arg1;
    *in_x18 = unaff_x30;
    iVar4 = *(uVar8 + 0x102f8);
    uVar2 = 0;
    if (iVar4 + 1 < 8) {
        uVar2 = iVar4 + 1;
    }
    uVar9 = uVar2;
    if (8 < uVar2) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x80060d0);
        (*pcVar7)();
    }
    piVar1 = uVar8 + uVar2 * 0x1bf8 + 0x740;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 != 0) {
        uVar3 = 0;
        if (uVar2 < 7) {
            uVar3 = uVar2 + 1;
        }
        uVar9 = uVar3;
        piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar4 != 0) {
            uVar2 = 0;
            if (uVar3 < 7) {
                uVar2 = uVar3 + 1;
            }
            uVar9 = uVar2;
            piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar4 != 0) {
                uVar3 = 0;
                if (uVar2 < 7) {
                    uVar3 = uVar2 + 1;
                }
                uVar9 = uVar3;
                piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar4 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                        *piVar1 = 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                DataMemoryBarrier(2,3);
                if (iVar4 != 0) {
                    uVar2 = 0;
                    if (uVar3 < 7) {
                        uVar2 = uVar3 + 1;
                    }
                    uVar9 = uVar2;
                    piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar4 = *piVar1;
                        cVar5 = '\x01';
                        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar6) {
                            *piVar1 = 1;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    DataMemoryBarrier(2,3);
                    if (iVar4 != 0) {
                        uVar3 = 0;
                        if (uVar2 < 7) {
                            uVar3 = uVar2 + 1;
                        }
                        uVar9 = uVar3;
                        piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar4 = *piVar1;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar6) {
                                *piVar1 = 1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        DataMemoryBarrier(2,3);
                        if (iVar4 != 0) {
                            uVar2 = 0;
                            if (uVar3 < 7) {
                                uVar2 = uVar3 + 1;
                            }
                            uVar9 = uVar2;
                            piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
                            Hint_Prefetch(piVar1,2,0,1);
                            do {
                                iVar4 = *piVar1;
                                cVar5 = '\x01';
                                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                                if (bVar6) {
                                    *piVar1 = 1;
                                    cVar5 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar5 != '\0');
                            DataMemoryBarrier(2,3);
                            if (iVar4 != 0) {
                                uVar3 = 0;
                                if (uVar2 < 7) {
                                    uVar3 = uVar2 + 1;
                                }
                                uVar9 = uVar3;
                                piVar1 = uVar8 + uVar9 * 0x1bf8 + 0x740;
                                Hint_Prefetch(piVar1,2,0,1);
                                do {
                                    iVar4 = *piVar1;
                                    cVar5 = '\x01';
                                    bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                                    if (bVar6) {
                                        *piVar1 = 1;
                                        cVar5 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar5 != '\0');
                                DataMemoryBarrier(2,3);
                                if (iVar4 != 0) {
                                    _printk(0x80013c4,"qce_alloc_req_info",*(uVar8 + 0x10488),*(uVar8 + 0x10300));
                                    return 0xfffffff0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *(uVar8 + 0x102f8) = uVar9;
    return uVar9;
}


// ===== sym._qce_sps_add_cmd @ 0x08006174 (size 148) =====

ulong sym._qce_sps_add_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint *puVar3;
    uint16_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*arg2 - *(arg1 + 0x10)) + *(arg1 + 0x18);
    uVar4 = *(arg2 + 0xd0);
    puVar3 = *(arg3 + 8) + *(arg3 + 0x10) * 8;
    *puVar3 = iVar2;
    puVar3[1] = uVar4 | iVar2 >> 0x10 & 0xf0000 | 0xa000000;
    uVar1 = *(arg3 + 0x10) + 1;
    *(arg3 + 0x10) = uVar1;
    if (uVar1 < 0x200) {
        uVar5 = 0;
    }
    else {
        _printk(0x8001aeb,"_qce_sps_add_cmd",uVar1,0x200);
        uVar5 = 0xfffffff4;
    }
    return uVar5;
}


// ===== sym._qce_sps_add_sg_data @ 0x08006208 (size 284) =====

ulong sym._qce_sps_add_sg_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    uint *puVar7;
    uint *puVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (uVar6 = arg3 & 0xffffffff, arg3 != 0)) {
        puVar8 = *(arg4 + 8) + *(arg4 + 0x10) * 8;
        do {
            uVar5 = uVar6;
            uVar1 = uVar5;
            if (*(arg2 + 0x18) <= uVar5) {
                uVar1 = *(arg2 + 0x18);
            }
            uVar2 = uVar1;
            if (*(arg1 + 0x174) == 0) {
                uVar2 = (uVar1 + *(arg1 + 0x170)) - 1 & -*(arg1 + 0x170);
            }
            if (uVar2 != 0) {
                iVar3 = *(arg2 + 0x10);
                iVar4 = *(arg4 + 0x10);
                puVar7 = puVar8;
                do {
                    if (iVar4 == 0x200) {
                        _printk(0x8001aeb,"_qce_sps_add_sg_data",0x200,0x200);
                        return 0xfffffff4;
                    }
                    uVar9 = uVar2;
                    if (0x1fe < uVar2 >> 6) {
                        uVar9 = 0x7fc0;
                    }
                    uVar2 = uVar2 - uVar9;
                    puVar8 = puVar7 + 2;
                    *puVar7 = iVar3;
                    puVar7[1] = iVar3 >> 0x10 & 0xf0000 | uVar9;
                    iVar3 = iVar3 + uVar9;
                    iVar4 = *(arg4 + 0x10) + 1;
                    *(arg4 + 0x10) = iVar4;
                    puVar7 = puVar8;
                } while (uVar2 != 0);
            }
            uVar6 = uVar5 - uVar1;
            arg2 = sg_next(arg2);
        } while ((uVar5 - uVar1 != 0) && (arg2 != 0));
    }
    return 0;
}


// ===== sym._qce_sps_add_data @ 0x08006324 (size 152) =====

ulong sym._qce_sps_add_data(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        uVar4 = *(arg3 + 0x10);
        puVar2 = *(arg3 + 8) + uVar4 * 8;
        do {
            if (uVar4 == 0x200) {
                _printk(0x8001aeb,"_qce_sps_add_data",0x200,0x200);
                return 0xfffffff4;
            }
            uVar3 = arg2;
            if (0x1fe < (arg2 >> 6 & 0x3ffffff)) {
                uVar3 = 0x7fc0;
            }
            uVar1 = arg2 - uVar3;
            arg2 = uVar1;
            *puVar2 = arg1;
            puVar2[1] = arg1 >> 0x10 & 0xf0000 | uVar3;
            arg1 = arg1 + uVar3;
            uVar3 = *(arg3 + 0x10) + 1;
            uVar4 = uVar3;
            *(arg3 + 0x10) = uVar3;
            puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
    }
    return 0;
}


// ===== sym._qce_sps_transfer @ 0x080063bc (size 248) =====

int sym._qce_sps_transfer(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = arg1 + (arg2 & 0xffffffffU) * 0x1bf8;
    uVar1 = *(iVar7 + 0x2330);
    uVar5 = arg2 | 0xdead0000;
    *(iVar7 + 0x798) = uVar5;
    *(iVar7 + 0x778) = uVar5;
    if (*(iVar7 + 0x770) == 0) {
        if (3 < uVar1) goto code_r0x080064b0;
    }
    else {
        if (3 < uVar1) {
code_r0x080064b0:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80064b4);
            (*pcVar2)();
        }
        iVar8 = arg1 + uVar1 * 0xb8;
        iVar3 = sps_transfer(*(iVar8 + 0x460),iVar7 + 0x760);
        if (iVar3 != 0) {
            puVar6 = iVar8 + 0x460;
            uVar4 = 0x80020f8;
            goto code_r0x0800648c;
        }
    }
    iVar8 = arg1 + uVar1 * 0xb8;
    iVar3 = sps_transfer(*(iVar8 + 0x180),iVar7 + 0x780);
    if (iVar3 == 0) {
        return 0;
    }
    puVar6 = iVar8 + 0x180;
    uVar4 = 0x80019f6;
code_r0x0800648c:
    _printk(uVar4,"_qce_sps_transfer",*puVar6,iVar3);
    sym._qce_dump_descr_fifos(arg1,arg2 & 0xffffffff);
    return iVar3;
}


// ===== sym.select_mode @ 0x080064b4 (size 544) =====

void sym.select_mode(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    char cVar8;
    bool bVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x78) != '\0') {
        piVar2 = arg1 + 0x102fc;
        do {
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar5 = *piVar2;
                if (iVar5 != 0) goto code_r0x08006524;
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                    *piVar2 = 1;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006524:
            if (iVar5 == 0) goto code_r0x08006528;
            __const_udelay(200);
        } while( true );
    }
code_r0x0800663c:
    if (*(arg2 + 0x50) != 0) {
        iVar1 = *(arg2 + 0x48) + (*(arg2 + 0x50) - 1) * 8;
        *(iVar1 + 4) = *(iVar1 + 4) | 0x80000000;
    }
    return;
code_r0x08006528:
    puVar3 = arg1 + 0x10300;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar6 = *puVar3;
        cVar8 = '\x01';
        bVar9 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
            *puVar3 = uVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
        }
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
    if (*(arg1 + 0x10480) != 0) {
        uVar4 = *(arg1 + 0x10484);
        uVar6 = uVar4 + 1;
        *(arg1 + 0x10484) = uVar6;
        uVar7 = *(arg2 + 0x1bec) >> 7;
        if (2 < uVar7) {
            uVar7 = 3;
        }
        if ((uVar7 < uVar6) && ((uVar4 != uVar7 || (*(arg1 + 0x104a4) == '\0')))) {
            if (*(arg2 + 0x50) != 0) {
                iVar1 = *(arg2 + 0x48) + (*(arg2 + 0x50) - 1) * 8;
                *(iVar1 + 4) = *(iVar1 + 4) | 0x80000000;
            }
            *(arg1 + 0x10484) = 0;
            *(arg1 + 0x1049c) = 0;
            *(arg1 + 0x104a0) = 0;
            *(arg1 + 0x104a4) = *(arg1 + 0x104a4) ^ 1;
            return;
        }
        piVar2 = arg1 + 0x1049c;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
                *piVar2 = *piVar2 + 1;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        return;
    }
    if (1 < uVar6 + 1) {
        *(arg1 + 0x10480) = 1;
        if (*(arg2 + 0x50) != 0) {
            iVar1 = *(arg2 + 0x48) + (*(arg2 + 0x50) - 1) * 8;
            *(iVar1 + 4) = *(iVar1 + 4) | 0x80000000;
        }
        *(arg1 + 0x10484) = 0;
        *(arg1 + 0x1049c) = 1;
        *(arg1 + 0x104a0) = 1;
        mod_timer(arg1 + 0x10308,__printk + 5);
        return;
    }
    goto code_r0x0800663c;
}


// ===== sym.qce_ablk_cipher_req @ 0x080066d4 (size 2320) =====

int sym.qce_ablk_cipher_req(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    int iVar4;
    uint uVar5;
    uint16_t uVar6;
    char cVar7;
    code *pcVar8;
    bool bVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    char *pcVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    int64_t arg2_00;
    int64_t iVar16;
    int64_t iVar17;
    uint *puVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    ulong *in_x18;
    uint64_t arg2_01;
    uint32_t uVar21;
    ulong uVar22;
    int64_t *piVar23;
    ulong uVar24;
    uint32_t *puVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar25 = *(arg2 + 0x10);
    uVar10 = sym.qce_alloc_req_info(arg1);
    if (uVar10 < 0) {
        return -0x10;
    }
    arg2_01 = uVar10;
    *(arg2 + 0xa8) = uVar10;
    if (9 < uVar10) goto code_r0x08006f84;
    iVar17 = arg1 + 0x740;
    arg2_00 = iVar17 + arg2_01 * 0x1bf8;
    puVar2 = arg2_00 + 0x1bb0;
    *(arg2_00 + 0x1bb0) = 0;
    uVar20 = *puVar25;
    if (uVar20 < 1) {
        uVar19 = 0;
    }
    else {
        uVar19 = 0;
        iVar12 = *(puVar25 + 4);
        do {
            uVar19 = uVar19 + 1;
            uVar20 = uVar20 - *(iVar12 + 0xc);
            iVar12 = sg_next();
        } while (0 < uVar20);
    }
    *puVar2 = uVar19;
    puVar3 = arg2_00 + 0x1bb4;
    if (2 < *(arg2 + 0x94) - 1U) {
        iVar12 = *(puVar25 + 4);
        bVar9 = iVar12 != *(puVar25 + 6);
        if (0 < uVar19) {
            uVar24 = *arg1;
            do {
                dma_map_sg_attrs(uVar24,iVar12,1,bVar9,0);
                iVar12 = sg_next(iVar12);
                uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
        }
    }
    iVar12 = *(puVar25 + 6);
    if (*(puVar25 + 4) == iVar12) {
        uVar20 = *puVar2;
code_r0x0800689c:
        *puVar3 = uVar20;
    }
    else {
        uVar20 = *puVar25;
        if (uVar20 < 1) {
            uVar20 = 0;
            goto code_r0x0800689c;
        }
        uVar19 = 0;
        do {
            uVar21 = uVar19;
            uVar19 = uVar21 + 1;
            uVar20 = uVar20 - *(iVar12 + 0xc);
            iVar12 = sg_next();
        } while (0 < uVar20);
        *puVar3 = uVar19;
        if ((2 < *(arg2 + 0x94) - 1U) && (uVar21 < 0x7fffffff)) {
            uVar22 = *arg1;
            uVar24 = *(puVar25 + 6);
            do {
                dma_map_sg_attrs(uVar22,uVar24,1,2,0);
                uVar24 = sg_next(uVar24);
                uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
        }
    }
    iVar11 = *(arg2 + 0x1c);
    iVar4 = *(arg1 + 0x174);
    *(iVar17 + arg2_01 * 0x1bf8 + 0x1bd0) = iVar11;
    if (((iVar4 == 0) && (iVar11 == 1)) && (*(arg2 + 0x20) == 0)) {
        iVar16 = iVar17 + arg2_01 * 0x1bf8;
        iVar12 = ((**(puVar25 + 4) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (*(puVar25 + 4))[1] +
                 *(*(puVar25 + 4) + 0xc);
        uVar24 = *(iVar12 + -8);
        *(iVar16 + 0x1bc0) = *(iVar12 + -0x10);
        *(iVar16 + 0x1bc8) = uVar24;
        if (*(arg1 + 0x40) == '\0') goto code_r0x080069e0;
code_r0x080068dc:
        iVar11 = *(arg2 + 0x18);
        if (iVar11 != 0) {
            if (iVar11 == 1) {
                uVar14 = *(arg2 + 0x20);
                iVar12 = arg1 + arg2_01 * 0x1bf8;
                if (*(arg2 + 0x20) == 1) {
                    piVar23 = iVar12 + 0xf38;
                    uVar14 = 1;
                }
                else {
                    piVar23 = iVar12 + 0xe60;
                }
                goto code_r0x08006ac8;
            }
            if (iVar11 == 2) {
                uVar14 = *(arg2 + 0x20);
                if (*(arg2 + 0x20) < 5) {
    //switch table (4 cases) at 0x8000a14
                    switch(*(uVar14 * 4 + 0x8000a14) + 0x8006908) {
                    case 0x800691c:
                        if (*(arg2 + 0x68) == 0x10) {
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0x7a0;
                        }
                        else {
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0x878;
                        }
                        break;
                    case 0x8006a18:
                        if (*(arg2 + 0x68) == 0x10) {
                            uVar14 = 1;
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0x950;
                        }
                        else {
                            uVar14 = 1;
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0xa28;
                        }
                        break;
                    case 0x8006a3c:
                        if (*(arg2 + 0x68) == 0x10) {
                            iVar12 = 0x1be0;
                        }
                        else {
                            iVar12 = 0x1cb8;
                        }
                        piVar23 = arg1 + arg2_01 * 0x1bf8 + iVar12;
                        uVar14 = 4;
                        break;
                    case 0x8006a58:
                        if ((*(arg2 + 0x68) & 0xfffffffe) == 0x20) {
                            uVar14 = 3;
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0xb00;
                        }
                        else {
                            uVar14 = 3;
                            piVar23 = arg1 + arg2_01 * 0x1bf8 + 0xbd8;
                        }
                    }
                    goto code_r0x08006ac8;
                }
            }
            else {
                uVar14 = *(arg2 + 0x20);
            }
code_r0x08006f18:
            _printk(0x80017f2,"qce_ablk_cipher_req",iVar11,uVar14);
            if (8 < uVar10) goto code_r0x08006f84;
            iVar11 = -0x16;
            arg1 = arg1 + arg2_01 * 0x1bf8;
            piVar1 = arg1 + 0x740;
            *(arg1 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar7 = '\x01';
                bVar9 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                    *piVar1 = 0;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x08006f64;
        }
        uVar14 = *(arg2 + 0x20);
        iVar12 = arg1 + arg2_01 * 0x1bf8;
        if (*(arg2 + 0x20) == 1) {
            piVar23 = iVar12 + 0xd88;
            uVar14 = 1;
        }
        else {
            piVar23 = iVar12 + 0xcb0;
        }
code_r0x08006ac8:
        if (piVar23 == NULL) goto code_r0x08006f18;
        iVar11 = sym._ce_setup_cipher(arg1,arg2,*puVar25,0);
    }
    else {
        if (*(arg1 + 0x40) != '\0') goto code_r0x080068dc;
code_r0x080069e0:
        iVar11 = sym._ce_setup_cipher_direct(arg1,arg2,*puVar25,0);
        piVar23 = NULL;
    }
    if (-1 < iVar11) {
        iVar12 = iVar17 + arg2_01 * 0x1bf8;
        *(iVar12 + 0x1bd4) = *(arg2 + 0x20);
        uVar5 = *(arg2 + 0x94);
        *(iVar12 + 0x1b98) = puVar25;
        *(iVar12 + 0x1bf0) = uVar5;
        uVar24 = *(arg2 + 8);
        *(iVar12 + 8) = 1;
        *(iVar12 + 0x1b88) = uVar24;
        *(iVar12 + 0x1bec) = *puVar25;
        if (8 < uVar10) goto code_r0x08006f84;
        uVar14 = 0;
        cVar7 = *(arg1 + 0x40);
        iVar12 = arg1 + arg2_01 * 0x1bf8;
        *(iVar12 + 0x770) = 0;
        *(iVar12 + 0x790) = 0;
        if ((cVar7 == '\0') || (piVar23 == NULL)) {
code_r0x08006b90:
            uVar20 = *puVar25;
            puVar15 = iVar17 + arg2_01 * 0x1bf8 + 0x30;
            if (uVar20 != 0) {
                iVar12 = *(*(puVar25 + 4) + 0x10);
                puVar18 = *(iVar17 + arg2_01 * 0x1bf8 + 0x28) + uVar14 * 8;
                do {
                    if (uVar14 == 0x200) {
                        pcVar13 = "_qce_sps_add_data";
                        goto code_r0x08006df8;
                    }
                    uVar19 = uVar20;
                    if (0x1fe < uVar20 >> 6) {
                        uVar19 = 0x7fc0;
                    }
                    uVar20 = uVar20 - uVar19;
                    *puVar18 = iVar12;
                    puVar18[1] = iVar12 >> 0x10 & 0xf0000 | uVar19;
                    iVar12 = iVar12 + uVar19;
                    uVar14 = *puVar15 + 1;
                    *puVar15 = *puVar15 + 1;
                    puVar18 = puVar18 + 2;
                } while (uVar20 != 0);
            }
            if (uVar14 != 0) {
                iVar12 = *(iVar17 + arg2_01 * 0x1bf8 + 0x28) + (uVar14 - 1) * 8;
                *(iVar12 + 4) = *(iVar12 + 4) | 0x50000000;
            }
            if (*(arg1 + 0x78) != '\0') {
                iVar16 = iVar17 + arg2_01 * 0x1bf8;
                uVar6 = *(iVar16 + 7000);
                iVar12 = (*(iVar16 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
                puVar18 = *(iVar16 + 0x28) + *puVar15 * 8;
                *puVar18 = iVar12;
                puVar18[1] = uVar6 | iVar12 >> 0x10 & 0xf0000 | 0xa000000;
                uVar20 = *puVar15 + 1;
                uVar14 = uVar20;
                *puVar15 = uVar20;
                if (0x1ff < uVar20) goto code_r0x08006dbc;
            }
            uVar19 = *puVar25;
            puVar15 = iVar17 + arg2_01 * 0x1bf8 + 0x50;
            uVar20 = *puVar15;
            uVar14 = uVar20;
            if (uVar19 != 0) {
                iVar12 = *(*(puVar25 + 6) + 0x10);
                puVar18 = *(iVar17 + arg2_01 * 0x1bf8 + 0x48) + uVar14 * 8;
                do {
                    if (uVar14 == 0x200) goto code_r0x08006dd0;
                    uVar20 = uVar19;
                    if (0x1fe < uVar19 >> 6) {
                        uVar20 = 0x7fc0;
                    }
                    uVar19 = uVar19 - uVar20;
                    *puVar18 = iVar12;
                    puVar18[1] = iVar12 >> 0x10 & 0xf0000 | uVar20;
                    iVar12 = iVar12 + uVar20;
                    uVar20 = *puVar15 + 1;
                    uVar14 = uVar20;
                    *puVar15 = uVar20;
                    puVar18 = puVar18 + 2;
                } while (uVar19 != 0);
            }
            if ((*(arg1 + 0x78) == '\0') && (0x7fc0 < *puVar25)) {
                *(arg2_00 + 0x10) = 0;
            }
            else {
                *(arg2_00 + 0x10) = 2;
                if (2 < *(arg2 + 0x94) - 1U) {
                    if (uVar20 == 0x200) {
code_r0x08006dd0:
                        pcVar13 = "_qce_sps_add_data";
                        uVar14 = 0x200;
                        goto code_r0x08006df8;
                    }
                    iVar17 = iVar17 + arg2_01 * 0x1bf8;
                    iVar12 = (*(arg1 + 0x18) + *(iVar17 + 0x1b60)) - *(arg1 + 0x10);
                    puVar18 = *(iVar17 + 0x48) + uVar20 * 8;
                    *puVar18 = iVar12;
                    puVar18[1] = iVar12 >> 0x10 & 0xf0000 | 0x80;
                    *puVar15 = *puVar15 + 1;
                }
            }
            sym.select_mode(arg1,arg2_00);
            iVar11 = sym._qce_sps_transfer(arg1,arg2_01);
            piVar1 = arg1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x08006f94;
                cVar7 = '\x01';
                bVar9 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                    *piVar1 = 0;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08006f94:
            if (iVar11 == 0) {
                return 0;
            }
        }
        else {
            iVar16 = iVar17 + arg2_01 * 0x1bf8;
            iVar12 = (*piVar23 - *(arg1 + 0x10)) + *(arg1 + 0x18);
            uVar6 = *(piVar23 + 0x1a);
            puVar18 = *(iVar16 + 0x28);
            *puVar18 = iVar12;
            puVar18[1] = uVar6 | iVar12 >> 0x10 & 0xf0000 | 0xc000000;
            uVar20 = *(iVar16 + 0x30) + 1;
            uVar14 = uVar20;
            *(iVar16 + 0x30) = uVar20;
            if (uVar20 < 0x200) goto code_r0x08006b90;
code_r0x08006dbc:
            pcVar13 = "_qce_sps_add_cmd";
code_r0x08006df8:
            _printk(0x8001aeb,pcVar13,uVar14,0x200);
            iVar11 = -0xc;
        }
    }
    if (2 < *(arg2 + 0x94) - 1U) {
        iVar17 = *(puVar25 + 6);
        if (((*(puVar25 + 4) != iVar17) && (uVar20 = *puVar3, uVar20 != 0)) && (0 < uVar20)) {
            uVar24 = *arg1;
            do {
                dma_unmap_sg_attrs(uVar24,iVar17,1,2,0);
                iVar17 = sg_next(iVar17);
                uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
        }
        uVar20 = *puVar2;
        if (uVar20 != 0) {
            iVar17 = *(puVar25 + 4);
            bVar9 = iVar17 != *(puVar25 + 6);
            if (0 < uVar20) {
                uVar24 = *arg1;
                do {
                    dma_unmap_sg_attrs(uVar24,iVar17,1,bVar9,0);
                    iVar17 = sg_next(iVar17);
                    uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
            }
        }
    }
    if (uVar10 < 9) {
        arg1 = arg1 + arg2_01 * 0x1bf8;
        piVar1 = arg1 + 0x740;
        *(arg1 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            cVar7 = '\x01';
            bVar9 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
                *piVar1 = 0;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
joined_r0x08006f64:
        if (iVar4 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2_01);
        }
        return iVar11;
    }
code_r0x08006f84:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8006f88);
    (*pcVar8)();
}


// ===== sym._ce_setup_cipher @ 0x08006fe4 (size 3732) =====

void sym._ce_setup_cipher(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    code *pcVar6;
    ulong uVar7;
    uint32_t *puVar8;
    int64_t in_x4;
    uint32_t uVar9;
    uint32_t uVar10;
    uint uVar11;
    uint32_t *puVar12;
    int iVar13;
    uint32_t uVar14;
    int *piVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint8_t *puVar19;
    int64_t *piVar20;
    uint32_t uVar21;
    uint32_t *puVar22;
    int64_t iVar23;
    ulong *in_x18;
    int iVar24;
    uint32_t uVar25;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint32_t auStack_a8 [2];
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar23 = sp_el0;
    iStack_68 = *(iVar23 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (*(arg2 + 0x94) < 4) {
        iVar24 = arg3;
        uVar10 = *(arg2 + 0x78);
    //switch table (4 cases) at 0x8000a28
        switch(*(*(arg2 + 0x94) + 0x8000a28) * 4 + 0x8007078) {
        case 0x800707c:
            piVar15 = arg1 + 0x134;
            break;
        case 0x8007088:
            piVar15 = arg1 + 0x13c;
            break;
        case 0x8007094:
            piVar15 = arg1 + 0x140;
            break;
        case 0x80070a0:
            piVar15 = arg1 + 0x138;
        }
        uVar25 = *(arg2 + 0x68) >> (*(arg2 + 0x20) == 3);
        uVar18 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *piVar15 << 5;
        uVar21 = uVar18 | 0xe;
        puVar22 = uVar21;
        *(arg1 + 0x8c) = uVar21;
        *(arg1 + 0x90) = uVar18 | 0x20e;
        *(*(in_x4 + 8) + 4) = uVar21;
        *(*(in_x4 + 0x10) + 4) = *(arg1 + 0x90);
        uVar21 = *(arg2 + 0x90);
        puVar12 = *(in_x4 + 200);
        if ((uVar21 & 1) == 0) {
            puVar22 = *(puVar12 + 3);
            *puVar12 = *(arg1 + 0x50) + 0x1a120U & 0xffffff | *(puVar12 + 3) << 0x18;
            if ((uVar21 >> 1 & 1) == 0) {
                puVar12 = &stack0xffffffffffffff58;
                puVar19 = *(arg2 + 0x60);
                uVar21 = uVar25 >> 2;
                if (uVar25 < 4) {
                    uVar16 = 0;
                }
                else {
                    uVar16 = 0;
                    uVar18 = uVar21;
                    do {
                        uVar17 = uVar16;
                        if (0x3f < uVar17) goto code_r0x08007e6c;
                        uVar18 = uVar18 - 1;
                        uVar9 = (*(puVar19 + uVar17) & 0xff00ff00) >> 8 | (*(puVar19 + uVar17) & 0xff00ff) << 8;
                        *(puVar12 + uVar17) = uVar9 >> 0x10 | uVar9 << 0x10;
                        uVar16 = uVar17 + 4;
                    } while (uVar18 != 0);
                    puVar19 = puVar19 + uVar16;
                    puVar12 = &stack0xffffffffffffff5c + uVar17;
                }
                uVar18 = uVar25 & 3;
                puVar22 = uVar18;
                if (uVar18 == 1) {
                    uVar18 = *puVar19 << 0x18;
code_r0x080071ec:
                    if (0x3c < uVar16) goto code_r0x08007e6c;
                    *puVar12 = uVar18;
                }
                else {
                    if (uVar18 == 2) {
                        puVar22 = *puVar19;
                        uVar18 = *puVar19 << 0x18 | puVar19[1] << 0x10;
                        goto code_r0x080071ec;
                    }
                    if (uVar18 == 3) {
                        puVar22 = *puVar19;
                        uVar18 = *puVar19 << 0x18 | puVar19[1] << 0x10 | puVar19[2] << 8;
                        goto code_r0x080071ec;
                    }
                }
                bVar4 = false;
                bVar3 = false;
            }
            else {
                bVar3 = false;
                uVar21 = 0;
                bVar4 = true;
            }
        }
        else {
            bVar4 = false;
            uVar21 = 0;
            bVar3 = true;
            *puVar12 = *(arg1 + 0x50) + 0x1b000U & 0xffffff | *(puVar12 + 3) << 0x18;
        }
        if (*arg2 == 2) {
            uVar18 = *(arg2 + 0x20);
            if (uVar18 == 4) {
                iVar23 = *(in_x4 + 0xb0);
                uVar18 = *(arg2 + 0x68);
                puVar22 = uVar18;
                uVar9 = (*(arg2 + 0x38) & 0xff00ff00) >> 8 | (*(arg2 + 0x38) & 0xff00ff) << 8;
                uVar14 = (*(arg2 + 0x3c) & 0xff00ff00) >> 8 | (*(arg2 + 0x3c) & 0xff00ff) << 8;
                uVar1 = (*(arg2 + 0x40) & 0xff00ff00) >> 8 | (*(arg2 + 0x40) & 0xff00ff) << 8;
                uVar2 = (*(arg2 + 0x44) & 0xff00ff00) >> 8 | (*(arg2 + 0x44) & 0xff00ff) << 8;
                *(iVar23 + 4) = uVar9 >> 0x10 | uVar9 << 0x10;
                *(iVar23 + 0x14) = uVar14 >> 0x10 | uVar14 << 0x10;
                *(iVar23 + 0x24) = uVar1 >> 0x10 | uVar1 << 0x10;
                *(iVar23 + 0x34) = uVar2 >> 0x10 | uVar2 << 0x10;
                if (*(arg2 + 0x30) == 0x10) {
                    puVar12 = arg1 + 0xec;
code_r0x08007270:
                    uVar9 = *puVar12;
                }
                else {
                    if (*(arg2 + 0x30) == 0x20) {
                        puVar12 = arg1 + 0xf0;
                        goto code_r0x08007270;
                    }
                    uVar9 = 0;
                }
                if (*(arg2 + 0x1c) != 0) {
                    uVar9 = uVar9 | 0x4000;
                }
                uVar9 = *(arg2 + 0x34) * 0x200 - 0x200U | uVar9;
                if (bVar3) {
                    uVar9 = uVar9 | 0x40000;
                }
                else {
                    uVar9 = uVar9 & 0xfffbffff;
                    if (3 < uVar18) {
                        uVar14 = uVar18 >> 2;
                        iVar23 = *(in_x4 + 0xa0);
                        if (uVar14 < 2) {
                            uVar14 = 1;
                        }
                        *(iVar23 + 4) = auStack_a8[0];
                        if (7 < uVar18) {
                            puVar22 = auStack_a8[1];
                            *(iVar23 + 0x14) = auStack_a8[1];
                            if (uVar14 != 2) {
                                puVar22 = uStack_a0 & 0xffffffff;
                                *(iVar23 + 0x24) = uStack_a0;
                                if (uVar14 != 3) {
                                    puVar22 = uStack_a0._4_4_;
                                    *(iVar23 + 0x34) = uStack_a0._4_4_;
                                    if (uVar14 != 4) {
                                        puVar22 = uStack_98 & 0xffffffff;
                                        *(iVar23 + 0x44) = uStack_98;
                                        if (uVar14 != 5) {
                                            puVar22 = uStack_98._4_4_;
                                            *(iVar23 + 0x54) = uStack_98._4_4_;
                                            if (uVar14 != 6) {
                                                puVar22 = uStack_90 & 0xffffffff;
                                                *(iVar23 + 100) = uStack_90;
                                                if (uVar14 != 7) {
                                                    puVar22 = uStack_90._4_4_;
                                                    *(iVar23 + 0x74) = uStack_90._4_4_;
                                                    if (uVar14 != 8) {
                                                        puVar22 = uStack_88 & 0xffffffff;
                                                        *(iVar23 + 0x84) = uStack_88;
                                                        if (uVar14 != 9) {
                                                            puVar22 = uStack_88._4_4_;
                                                            *(iVar23 + 0x94) = uStack_88._4_4_;
                                                            if (uVar14 != 10) {
                                                                puVar22 = uStack_80 & 0xffffffff;
                                                                *(iVar23 + 0xa4) = uStack_80;
                                                                if (uVar14 != 0xb) {
                                                                    puVar22 = uStack_80._4_4_;
                                                                    *(iVar23 + 0xb4) = uStack_80._4_4_;
                                                                    if (uVar14 != 0xc) {
                                                                        puVar22 = uStack_78 & 0xffffffff;
                                                                        *(iVar23 + 0xc4) = uStack_78;
                                                                        if (uVar14 != 0xd) {
                                                                            puVar22 = uStack_78._4_4_;
                                                                            *(iVar23 + 0xd4) = uStack_78._4_4_;
                                                                            if (uVar14 != 0xe) {
                                                                                puVar22 = uStack_70 & 0xffffffff;
                                                                                *(iVar23 + 0xe4) = uStack_70;
                                                                                if (uVar14 != 0xf) {
                                                                                    puVar22 = uStack_70._4_4_;
                                                                                    *(iVar23 + 0xf4) = uStack_70._4_4_;
                                                                                    if (uVar14 != 0x10)
                                                                                    goto code_r0x08007e74;
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
                }
                *(*(in_x4 + 0x88) + 4) = uVar9;
                iVar13 = iVar24;
                if (*(arg2 + 0x1c) != 0) {
                    iVar13 = iVar24 - *(arg2 + 0x34);
                }
                piVar20 = in_x4 + 0x98;
                *(*(in_x4 + 0x90) + 4) = iVar13;
                goto code_r0x080073ec;
            }
        }
        else {
            piVar20 = in_x4 + 0x88;
code_r0x080073ec:
            *(*piVar20 + 4) = 0;
            uVar18 = *(arg2 + 0x20);
        }
        if (uVar18 < 5) {
    //switch table (5 cases) at 0x8000a2c
            puVar22 = *(uVar18 + 0x8000a2c) * 4 + 0x800741c;
            switch(uVar18) {
            case 0:
                if (uVar25 == 0x10) {
                    uVar25 = *(arg1 + 0x94);
                }
                else {
                    uVar25 = *(arg1 + 0x98);
                }
                break;
            case 1:
                if (uVar25 == 0x10) {
                    uVar25 = *(arg1 + 0x9c);
                }
                else {
                    uVar25 = *(arg1 + 0xa0);
                }
                break;
            case 2:
                goto code_r0x08007480;
            case 3:
                if (uVar25 == 0x10) {
                    uVar25 = *(arg1 + 0xa4);
                }
                else {
                    uVar25 = *(arg1 + 0xa8);
                }
                break;
            case 4:
                iVar23 = 0xb4;
                if (uVar25 != 0x10) {
                    iVar23 = 0xb8;
                }
                uVar25 = *(arg1 + iVar23) | 0x2100;
            }
        }
        else {
code_r0x08007480:
            if (uVar25 == 0x10) {
                uVar25 = *(arg1 + 0xac);
            }
            else {
                uVar25 = *(arg1 + 0xb0);
            }
        }
        if (*(arg2 + 0x18) == 1) {
            if (uVar18 != 1) {
                if (0x10 < uVar10) {
code_r0x08007a7c:
                    _printk(0x80014ba,"_ce_setup_cipher","_ce_setup_cipher");
                    uVar7 = 0xffffffea;
                    goto code_r0x08007e30;
                }
                puVar22 = &stack0xffffffffffffff48;
                puVar12 = *(arg2 + 0x70);
                if (uVar10 < 4) {
                    uVar16 = 0xfffffffffffffff3;
                    puVar8 = puVar12;
                }
                else {
                    uVar21 = uVar10 >> 2;
                    puVar8 = puVar12 + 1;
                    uVar18 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                    uStack_b8 = uVar18;
                    if (uVar21 - 1 == 0) {
                        puVar22 = puVar22 | 4;
                    }
                    else {
                        uVar9 = (puVar12[1] & 0xff00ff00) >> 8 | (puVar12[1] & 0xff00ff) << 8;
                        uStack_b8 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar18);
                        if (uVar21 == 2) {
                            puVar8 = puVar12 + 2;
                            puVar22 = &stack0xffffffffffffff50;
                        }
                        else {
                            uVar18 = (puVar12[2] & 0xff00ff00) >> 8 | (puVar12[2] & 0xff00ff) << 8;
                            uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                            uStack_b0 = uVar18;
                            if (uVar21 == 3) {
                                puVar8 = puVar12 + 3;
                                puVar22 = &stack0xffffffffffffff54;
                            }
                            else {
                                puVar8 = puVar12 + 4;
                                uVar9 = (puVar12[3] & 0xff00ff00) >> 8 | (puVar12[3] & 0xff00ff) << 8;
                                puVar22 = &stack0xffffffffffffff58;
                                uStack_b0 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar18);
                            }
                        }
                    }
                    uVar16 = (uVar21 - 1) * 4 - 9;
                }
                uVar10 = uVar10 & 3;
                if (uVar10 == 1) {
                    uVar10 = *puVar8 << 0x18;
code_r0x080077cc:
                    if (uVar16 < 4) {
code_r0x08007e6c:
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(1,0x8007e70);
                        (*pcVar6)();
                    }
                    *puVar22 = uVar10;
                }
                else {
                    if (uVar10 == 2) {
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10;
                        goto code_r0x080077cc;
                    }
                    if (uVar10 == 3) {
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10 | *(puVar8 + 2) << 8;
                        goto code_r0x080077cc;
                    }
                }
                iVar23 = *(in_x4 + 0x40);
                *(iVar23 + 4) = uStack_b8;
                *(iVar23 + 0x14) = uStack_b8._4_4_;
            }
            if (bVar3) {
code_r0x080077f0:
                bVar3 = true;
                bVar5 = true;
            }
            else {
                iVar23 = *(in_x4 + 0x30);
                bVar3 = false;
                *(iVar23 + 4) = auStack_a8[0];
                *(iVar23 + 0x14) = auStack_a8[1];
                *(iVar23 + 0x24) = uStack_a0;
                *(iVar23 + 0x34) = uStack_a0._4_4_;
                *(iVar23 + 0x44) = uStack_98;
                bVar5 = true;
                *(iVar23 + 0x54) = uStack_98._4_4_;
            }
        }
        else if (*(arg2 + 0x18) == 0) {
            if (uVar18 != 1) {
                if (0x10 < uVar10) goto code_r0x08007a7c;
                puVar22 = &stack0xffffffffffffff48;
                puVar12 = *(arg2 + 0x70);
                if (uVar10 < 4) {
                    uVar16 = 0xfffffffffffffff3;
                    puVar8 = puVar12;
                }
                else {
                    uVar21 = uVar10 >> 2;
                    puVar8 = puVar12 + 1;
                    uVar18 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                    uStack_b8 = uVar18;
                    if (uVar21 - 1 == 0) {
                        puVar22 = puVar22 | 4;
                    }
                    else {
                        uVar9 = (puVar12[1] & 0xff00ff00) >> 8 | (puVar12[1] & 0xff00ff) << 8;
                        uStack_b8 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar18);
                        if (uVar21 == 2) {
                            puVar8 = puVar12 + 2;
                            puVar22 = &stack0xffffffffffffff50;
                        }
                        else {
                            uVar18 = (puVar12[2] & 0xff00ff00) >> 8 | (puVar12[2] & 0xff00ff) << 8;
                            uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                            uStack_b0 = uVar18;
                            if (uVar21 == 3) {
                                puVar8 = puVar12 + 3;
                                puVar22 = &stack0xffffffffffffff54;
                            }
                            else {
                                puVar8 = puVar12 + 4;
                                uVar9 = (puVar12[3] & 0xff00ff00) >> 8 | (puVar12[3] & 0xff00ff) << 8;
                                puVar22 = &stack0xffffffffffffff58;
                                uStack_b0 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar18);
                            }
                        }
                    }
                    uVar16 = (uVar21 - 1) * 4 - 9;
                }
                uVar10 = uVar10 & 3;
                if (uVar10 == 1) {
                    uVar10 = *puVar8 << 0x18;
code_r0x08007718:
                    if (uVar16 < 4) goto code_r0x08007e6c;
                    *puVar22 = uVar10;
                }
                else {
                    if (uVar10 == 2) {
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10;
                        goto code_r0x08007718;
                    }
                    if (uVar10 == 3) {
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10 | *(puVar8 + 2) << 8;
                        goto code_r0x08007718;
                    }
                }
                iVar23 = *(in_x4 + 0x40);
                *(iVar23 + 4) = uStack_b8;
                *(iVar23 + 0x14) = uStack_b8._4_4_;
            }
            if (bVar3) goto code_r0x080077f0;
            iVar23 = *(in_x4 + 0x30);
            bVar3 = false;
            *(iVar23 + 4) = auStack_a8[0];
            bVar5 = true;
            *(iVar23 + 0x14) = auStack_a8[1];
        }
        else {
            if (uVar18 == 3) {
                uStack_c8 = 0;
                uStack_c0 = 0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                if (!bVar4 && !bVar3) {
                    uVar9 = *(arg2 + 0x68);
                    uVar18 = uVar9 >> 3;
                    puVar12 = *(arg2 + 0x60) + (uVar9 >> 1);
                    if (uVar9 < 8) {
                        bVar5 = false;
                        puVar22 = &stack0xffffffffffffff44;
                        puVar8 = puVar12;
                    }
                    else {
                        uVar14 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
                        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                        uStack_c0 = uVar14 << 0x20;
                        if (uVar18 == 1) {
                            bVar5 = false;
                            puVar22 = &stack0xffffffffffffff40;
                            puVar8 = puVar12 + 1;
                        }
                        else {
                            uVar1 = puVar12[1];
                            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                            uStack_c0 = CONCAT44(uVar14,uVar1 >> 0x10 | uVar1 << 0x10);
                            if (uVar18 == 2) {
                                bVar5 = false;
                                puVar22 = &stack0xffffffffffffff3c;
                                puVar8 = puVar12 + 2;
                            }
                            else {
                                uVar14 = puVar12[2];
                                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                                uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                                uStack_c8 = uVar14 << 0x20;
                                if (uVar18 == 3) {
                                    bVar5 = false;
                                    puVar22 = &stack0xffffffffffffff38;
                                    puVar8 = puVar12 + 3;
                                }
                                else {
                                    uVar1 = puVar12[3];
                                    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                                    uStack_c8 = CONCAT44(uVar14,uVar1 >> 0x10 | uVar1 << 0x10);
                                    if (uVar18 == 4) {
                                        bVar5 = false;
                                        puVar22 = &stack0xffffffffffffff34;
                                        puVar8 = puVar12 + 4;
                                    }
                                    else {
                                        uVar14 = puVar12[4];
                                        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                                        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                                        uStack_d0 = uVar14 << 0x20;
                                        if (uVar18 == 5) {
                                            bVar5 = false;
                                            puVar22 = &stack0xffffffffffffff30;
                                            puVar8 = puVar12 + 5;
                                        }
                                        else {
                                            uVar1 = puVar12[5];
                                            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                                            uStack_d0 = CONCAT44(uVar14,uVar1 >> 0x10 | uVar1 << 0x10);
                                            if (uVar18 == 6) {
                                                bVar5 = false;
                                                puVar22 = &stack0xffffffffffffff2c;
                                                puVar8 = puVar12 + 6;
                                            }
                                            else {
                                                uVar14 = puVar12[6];
                                                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                                                uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                                                uStack_d8 = uVar14 << 0x20;
                                                if (uVar18 == 7) {
                                                    bVar5 = false;
                                                    puVar22 = &stack0xffffffffffffff28;
                                                    puVar8 = puVar12 + 7;
                                                }
                                                else {
                                                    puVar8 = puVar12 + 8;
                                                    uVar1 = puVar12[7];
                                                    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                                                    uStack_d8 = CONCAT44(uVar14,uVar1 >> 0x10 | uVar1 << 0x10);
                                                    if (uVar18 != 8) goto code_r0x08007e6c;
                                                    bVar5 = true;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    uVar14 = uVar9 >> 1 & 3;
                    if (uVar14 == 1) {
                        uVar14 = *puVar8 << 0x18;
code_r0x08007928:
                        if (bVar5) goto code_r0x08007e6c;
                        *puVar22 = uVar14;
                    }
                    else {
                        if (uVar14 == 2) {
                            uVar14 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10;
                            goto code_r0x08007928;
                        }
                        if (uVar14 == 3) {
                            uVar14 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10 | *(puVar8 + 2) << 8;
                            goto code_r0x08007928;
                        }
                    }
                    if (7 < uVar9) {
                        iVar23 = *(in_x4 + 0x38);
                        if (uVar18 < 2) {
                            uVar18 = 1;
                        }
                        *(iVar23 + 4) = uStack_c0._4_4_;
                        if (0xf < uVar9) {
                            *(iVar23 + 0x14) = uStack_c0;
                            if (uVar18 != 2) {
                                *(iVar23 + 0x24) = uStack_c8._4_4_;
                                if (uVar18 != 3) {
                                    *(iVar23 + 0x34) = uStack_c8;
                                    if (uVar18 != 4) {
                                        *(iVar23 + 0x44) = uStack_d0._4_4_;
                                        if (uVar18 != 5) {
                                            *(iVar23 + 0x54) = uStack_d0;
                                            if (uVar18 != 6) {
                                                *(iVar23 + 100) = uStack_d8._4_4_;
                                                if (uVar18 != 7) {
                                                    *(iVar23 + 0x74) = uStack_d8;
                                                    if (uVar18 != 8) goto code_r0x08007e74;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (*(arg2 + 0x91) == '\x02') {
                    uVar18 = *(arg2 + 0x80);
                    if (0x3ff < uVar18) {
                        uVar18 = 0x400;
                    }
                }
                else if (*(arg2 + 0x91) == '\x01') {
                    uVar18 = *(arg2 + 0x80);
                    if (0x1ff < uVar18) {
                        uVar18 = 0x200;
                    }
                }
                else {
                    uVar18 = *(arg2 + 0x80);
                }
                *(*(in_x4 + 0x70) + 4) = uVar18;
                uVar18 = *(arg2 + 0x20);
            }
            if (uVar18 != 1) {
                if (0x10 < uVar10) goto code_r0x08007a7c;
                puVar22 = *(arg2 + 0x70);
                if (uVar18 == 3) {
                    sym._byte_stream_swap_to_net_words(&stack0xffffffffffffff48,puVar22,uVar10);
                }
                else {
                    puVar12 = &stack0xffffffffffffff48;
                    if (uVar10 < 4) {
                        iVar23 = 0;
                        puVar8 = puVar22;
                    }
                    else {
                        uVar18 = uVar10 >> 2;
                        puVar8 = puVar22 + 1;
                        uVar9 = (*puVar22 & 0xff00ff00) >> 8 | (*puVar22 & 0xff00ff) << 8;
                        uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar9);
                        if (uVar18 - 1 == 0) {
                            puVar12 = puVar12 | 4;
                        }
                        else {
                            uVar14 = (puVar22[1] & 0xff00ff00) >> 8 | (puVar22[1] & 0xff00ff) << 8;
                            uStack_b8 = CONCAT44(uVar14 >> 0x10 | uVar14 << 0x10,uVar9);
                            if (uVar18 == 2) {
                                puVar8 = puVar22 + 2;
                                puVar12 = &stack0xffffffffffffff50;
                            }
                            else {
                                uVar9 = (puVar22[2] & 0xff00ff00) >> 8 | (puVar22[2] & 0xff00ff) << 8;
                                uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
                                if (uVar18 == 3) {
                                    puVar8 = puVar22 + 3;
                                    puVar12 = &stack0xffffffffffffff54;
                                }
                                else {
                                    puVar8 = puVar22 + 4;
                                    uVar14 = (puVar22[3] & 0xff00ff00) >> 8 | (puVar22[3] & 0xff00ff) << 8;
                                    puVar12 = &stack0xffffffffffffff58;
                                    uStack_b0 = CONCAT44(uVar14 >> 0x10 | uVar14 << 0x10,uVar9);
                                }
                            }
                        }
                        iVar23 = (uVar18 - 1) * 4 + 4;
                    }
                    uVar10 = uVar10 & 3;
                    if (uVar10 == 1) {
                        uVar10 = *puVar8 << 0x18;
                    }
                    else if (uVar10 == 2) {
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10;
                    }
                    else {
                        if (uVar10 != 3) goto code_r0x08007b60;
                        uVar10 = *puVar8 << 0x18 | *(puVar8 + 1) << 0x10 | *(puVar8 + 2) << 8;
                    }
                    if (iVar23 - 0xdU < 4) goto code_r0x08007e6c;
                    *puVar12 = uVar10;
                }
code_r0x08007b60:
                iVar23 = *(in_x4 + 0x40);
                *(iVar23 + 4) = uStack_b8;
                *(iVar23 + 0x14) = uStack_b8._4_4_;
                *(iVar23 + 0x24) = uStack_b0;
                *(iVar23 + 0x34) = uStack_b0._4_4_;
                if (*(arg2 + 0x20) == 4) {
                    iVar23 = *(in_x4 + 0x48);
                    *(iVar23 + 4) = uStack_b8;
                    *(iVar23 + 0x14) = uStack_b8._4_4_;
                    *(iVar23 + 0x24) = uStack_b0;
                    *(iVar23 + 0x34) = uStack_b0._4_4_;
                    *(*(in_x4 + 0x40) + 0x34) = *(*(in_x4 + 0x40) + 0x34) + 1;
                }
            }
            if (!bVar3 && *arg2 != 1) {
                if (uVar21 != 0) {
                    iVar23 = *(in_x4 + 0x30);
                    *(iVar23 + 4) = auStack_a8[0];
                    if (uVar21 != 1) {
                        *(iVar23 + 0x14) = auStack_a8[1];
                        if (uVar21 != 2) {
                            *(iVar23 + 0x24) = uStack_a0;
                            if (uVar21 != 3) {
                                *(iVar23 + 0x34) = uStack_a0._4_4_;
                                if (uVar21 != 4) {
                                    *(iVar23 + 0x44) = uStack_98;
                                    if (uVar21 != 5) {
                                        *(iVar23 + 0x54) = uStack_98._4_4_;
                                        if (uVar21 != 6) {
                                            *(iVar23 + 100) = uStack_90;
                                            if (uVar21 != 7) {
                                                *(iVar23 + 0x74) = uStack_90._4_4_;
                                                if (uVar21 != 8) {
                                                    *(iVar23 + 0x84) = uStack_88;
                                                    if (uVar21 != 9) {
                                                        *(iVar23 + 0x94) = uStack_88._4_4_;
                                                        if (uVar21 != 10) {
                                                            *(iVar23 + 0xa4) = uStack_80;
                                                            if (uVar21 != 0xb) {
                                                                *(iVar23 + 0xb4) = uStack_80._4_4_;
                                                                if (uVar21 != 0xc) {
                                                                    *(iVar23 + 0xc4) = uStack_78;
                                                                    if (uVar21 != 0xd) {
                                                                        *(iVar23 + 0xd4) = uStack_78._4_4_;
                                                                        if (uVar21 != 0xe) {
                                                                            *(iVar23 + 0xe4) = uStack_70;
                                                                            if (uVar21 != 0xf) {
                                                                                *(iVar23 + 0xf4) = uStack_70._4_4_;
                                                                                if (uVar21 != 0x10)
                                                                                goto code_r0x08007e74;
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
                bVar3 = false;
            }
            bVar5 = false;
        }
        iVar23 = *(in_x4 + 0x18);
        if (*(arg2 + 0x18) < 2) {
            if (*(arg2 + 0x1c) == 0) {
                uVar10 = *(iVar23 + 4) | 0x400;
            }
            else {
                uVar10 = *(iVar23 + 4) & 0xfffffbff;
            }
            *(iVar23 + 4) = uVar10;
        }
        else {
            uVar10 = uVar25 | 0x8000;
            if (!bVar4) {
                uVar10 = uVar25;
            }
            uVar10 = uVar10 | (*(arg2 + 0x1c) == 0) << 10;
        }
        uVar21 = 0x4000;
        if (!bVar3) {
            uVar21 = 0;
        }
        iVar13 = 0;
        *(iVar23 + 4) = uVar10 & 0xffffbfff | uVar21;
        if (*(arg2 + 0xa4) == '\0') {
            if ((*(arg2 + 0x20) == 4) && (*(arg2 + 0x1c) == 1)) {
                iVar13 = *(arg2 + 0x34) + *(arg2 + 0x80);
            }
            else {
                iVar13 = *(arg2 + 0x80);
            }
        }
        *(*(in_x4 + 0x20) + 4) = iVar13;
        *(*(in_x4 + 0x28) + 4) = arg4 & 0xffff;
        *(*(in_x4 + 0xc0) + 4) = iVar24;
        if (!bVar5) {
            *(*(in_x4 + 0x78) + 4) = *(arg2 + 0x9c);
            *(*(in_x4 + 0x80) + 4) = *(arg2 + 0xa0) != 0 | *(arg2 + 0xa0) << 4;
            iVar24 = *(arg2 + 0x7c);
            *(arg1 + 0x10c) = 0xffffffffffffffff;
            iVar24 = -(iVar24 != 0x40);
            *(arg1 + 0x104) = iVar24;
            *(arg1 + 0x108) = iVar24;
            *(*(in_x4 + 0x68) + 4) = 0xffffffff;
            *(*(in_x4 + 0x60) + 4) = *(arg1 + 0x10c);
            *(*(in_x4 + 0x58) + 4) = *(arg1 + 0x108);
            *(*(in_x4 + 0x50) + 4) = *(arg1 + 0x104);
        }
        iVar23 = *(in_x4 + 200);
        uVar7 = 0;
        *(iVar23 + 4) = 0;
        uVar11 = 3;
        if (2 < *(arg2 + 0x94) - 1U) {
            uVar11 = 7;
        }
        *(iVar23 + 4) = uVar11;
    }
    else {
        _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
        uVar7 = 0xffffffea;
    }
code_r0x08007e30:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x08007e74:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8007e78);
    (*pcVar6)();
}


// ===== sym._ce_setup_cipher_direct @ 0x08007e78 (size 4128) =====

int sym._ce_setup_cipher_direct(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    bool bVar5;
    bool bVar6;
    code *pcVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    ulong *arg1_00;
    int64_t iVar11;
    ulong *puVar12;
    char *pcVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    int *piVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t *extraout_x11;
    uint32_t *puVar22;
    uint32_t *extraout_x11_00;
    uint8_t *puVar23;
    uint *puVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar25;
    uint64_t unaff_x22;
    ulong *unaff_x23;
    uint32_t uVar26;
    uint64_t uVar27;
    ulong uVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    int64_t iVar31;
    ulong uVar32;
    int *unaff_x26;
    int64_t *piVar33;
    uint32_t uVar34;
    ulong *unaff_x28;
    ulong *puVar35;
    ulong unaff_x30;
    uchar auVar36 [16];
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    ulong *puStack_140;
    int64_t *piStack_138;
    int *piStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    ulong *puStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    ulong *puStack_100;
    int64_t iStack_f8;
    uint32_t uStack_f0;
    uint32_t uStack_ec;
    uint32_t uStack_e8;
    uint32_t uStack_e4;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar31 = sp_el0;
    iStack_68 = *(iVar31 + 0x5e0);
    uVar30 = arg4 & 0xffffffff;
    uVar27 = arg3 & 0xffffffff;
    piVar33 = arg1 + 0x48;
    uVar9 = *(arg2 + 0x78);
    puVar25 = uVar9;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    sym.writel_relaxed(0,*piVar33 + 0x1a100);
    if (*(arg2 + 0x94) < 4) {
    //switch table (4 cases) at 0x8000a34
        switch(*(*(arg2 + 0x94) * 4 + 0x8000a34) + 0x8007f00) {
        case 0x8007f18:
            piVar16 = arg1 + 0x134;
            break;
        case 0x8007f24:
            piVar16 = arg1 + 0x138;
            break;
        case 0x8007f30:
            piVar16 = arg1 + 0x13c;
            break;
        case 0x8007f3c:
            piVar16 = arg1 + 0x140;
        }
        uVar14 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *piVar16 << 5;
        uVar15 = uVar14 | 0xe;
        *(arg1 + 0x8c) = uVar15;
        *(arg1 + 0x90) = uVar14 | 0x20e;
        uStack_dc = uVar9;
        sym.writel_relaxed(uVar15,*(arg1 + 0x48) + 0x1a400);
        sym.writel_relaxed(*(arg1 + 0x90),*(arg1 + 0x48) + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        iVar10 = *(arg2 + 0x20);
        uVar9 = *(arg2 + 0x68);
        uVar15 = uVar9 >> (iVar10 == 3);
        puVar22 = extraout_x11;
        if ((*(arg2 + 0x90) & 1) == 0) {
            if ((*(arg2 + 0x90) >> 1 & 1) == 0) {
                puVar24 = &stack0xffffffffffffff58;
                puVar22 = *(arg2 + 0x60);
                if (uVar15 < 4) {
                    uVar20 = 0;
                }
                else {
                    uVar20 = 0;
                    uVar14 = uVar15 >> 2;
                    do {
                        uVar21 = uVar20;
                        if (0x3f < uVar21) goto code_r0x08008e90;
                        uVar14 = uVar14 - 1;
                        uVar26 = (*(puVar22 + uVar21) & 0xff00ff00) >> 8 | (*(puVar22 + uVar21) & 0xff00ff) << 8;
                        *(puVar24 + uVar21) = uVar26 >> 0x10 | uVar26 << 0x10;
                        uVar20 = uVar21 + 4;
                    } while (uVar14 != 0);
                    puVar22 = puVar22 + uVar20;
                    puVar24 = &stack0xffffffffffffff5c + uVar21;
                }
                uVar14 = uVar15 & 3;
                if (uVar14 == 1) {
                    puVar22 = *puVar22 << 0x18;
code_r0x08008074:
                    if (0x3c < uVar20) goto code_r0x08008e90;
                    *puVar24 = puVar22;
                }
                else {
                    if (uVar14 == 2) {
                        puVar22 = *puVar22 << 0x18 | *(puVar22 + 1) << 0x10;
                        goto code_r0x08008074;
                    }
                    if (uVar14 == 3) {
                        puVar22 = *puVar22 << 0x18 | *(puVar22 + 1) << 0x10 | *(puVar22 + 2) << 8;
                        goto code_r0x08008074;
                    }
                }
                unaff_x28 = NULL;
                unaff_x23 = NULL;
                uStack_e0 = uVar15 >> 2;
            }
            else {
                unaff_x28 = NULL;
                uStack_e0 = 0;
                unaff_x23 = 0x1;
            }
        }
        else {
            unaff_x23 = NULL;
            uStack_e0 = 0;
            unaff_x28 = 0x1;
        }
        if (*arg2 == 2) {
            if (iVar10 == 4) {
                uStack_e8 = arg3;
                uStack_e4 = arg4;
                iVar31 = 0;
                do {
                    sym.writel_relaxed(0,*piVar33 + iVar31 + 0x1a310);
                    sym.writel_relaxed(0,*piVar33 + iVar31 + 0x1d040);
                    iVar31 = iVar31 + 4;
                } while (iVar31 != 0x40);
                sym.writel_relaxed(0,*piVar33 + 0x1a390);
                sym.writel_relaxed(0,*piVar33 + 0x1a394);
                sym.writel_relaxed(0,*piVar33 + 0x1a398);
                sym.writel_relaxed(0,*piVar33 + 0x1a39c);
                uVar14 = (*(arg2 + 0x38) & 0xff00ff00) >> 8 | (*(arg2 + 0x38) & 0xff00ff) << 8;
                uVar26 = (*(arg2 + 0x3c) & 0xff00ff00) >> 8 | (*(arg2 + 0x3c) & 0xff00ff) << 8;
                uVar29 = (*(arg2 + 0x40) & 0xff00ff00) >> 8 | (*(arg2 + 0x40) & 0xff00ff) << 8;
                uVar34 = (*(arg2 + 0x44) & 0xff00ff00) >> 8 | (*(arg2 + 0x44) & 0xff00ff) << 8;
                sym.writel_relaxed(uVar14 >> 0x10 | uVar14 << 0x10,*piVar33 + 0x1a350);
                sym.writel_relaxed(uVar26 >> 0x10 | uVar26 << 0x10,*piVar33 + 0x1a354);
                sym.writel_relaxed(uVar29 >> 0x10 | uVar29 << 0x10,*piVar33 + 0x1a358);
                sym.writel_relaxed(uVar34 >> 0x10 | uVar34 << 0x10,*piVar33 + 0x1a35c);
                if (*(arg2 + 0x30) == 0x10) {
                    puVar22 = arg1 + 0xec;
code_r0x080081ec:
                    uVar14 = *puVar22;
                }
                else {
                    uVar14 = 0;
                    if (*(arg2 + 0x30) == 0x20) {
                        puVar22 = arg1 + 0xf0;
                        goto code_r0x080081ec;
                    }
                }
                uVar30 = uStack_e4;
                if (*(arg2 + 0x1c) != 0) {
                    uVar14 = uVar14 | 0x4000;
                }
                uVar14 = *(arg2 + 0x34) * 0x200 - 0x200U | uVar14;
                if (unaff_x28 == 0) {
                    uVar14 = uVar14 & 0xfffbffff;
                    if (3 < uVar9) {
                        uVar9 = uVar9 >> 2;
                        if (uVar9 < 2) {
                            uVar9 = 1;
                        }
                        iVar31 = 0;
                        uStack_f0 = 0;
                        do {
                            if (iVar31 == 0x40) goto code_r0x08008e8c;
                            sym.writel_relaxed(*(&stack0xffffffffffffff58 + iVar31),*piVar33 + iVar31 + 0x1d040);
                            iVar31 = iVar31 + 4;
                        } while (uVar9 * 4 - iVar31 != 0);
                        uVar30 = uStack_e4;
                        unaff_x28 = uStack_f0;
                    }
                }
                else {
                    uVar14 = uVar14 | 0x40000;
                }
                sym.writel_relaxed(uVar14,*piVar33 + 0x1a300);
                uVar27 = uStack_e8;
                uVar20 = uVar27;
                if (*(arg2 + 0x1c) != 0) {
                    uVar20 = uStack_e8 - *(arg2 + 0x34);
                }
                sym.writel_relaxed(uVar20,*piVar33 + 0x1a304);
                iVar31 = 0x1a308;
                goto code_r0x080082cc;
            }
        }
        else {
            iVar31 = 0x1a300;
code_r0x080082cc:
            sym.writel_relaxed(0,*piVar33 + iVar31);
            puVar22 = extraout_x11_00;
        }
        uVar9 = uStack_dc;
        DataSynchronizationBarrier(3,3,0);
        uVar14 = *(arg2 + 0x20);
        if (uVar14 < 5) {
    //switch table (5 cases) at 0x8000a44
            puVar22 = *(uVar14 * 4 + 0x8000a44);
            switch(puVar22 + 0x20020bd) {
            case 0x8008308:
                if (uVar15 == 0x10) {
                    puVar17 = arg1 + 0x94;
                }
                else {
                    puVar17 = arg1 + 0x98;
                }
                break;
            case 0x800831c:
                if (uVar15 == 0x10) {
                    puVar17 = arg1 + 0x9c;
                }
                else {
                    puVar17 = arg1 + 0xa0;
                }
                break;
            case 0x8008330:
                goto code_r0x08008330;
            case 0x8008344:
                if (uVar15 == 0x10) {
                    puVar17 = arg1 + 0xa4;
                }
                else {
                    puVar17 = arg1 + 0xa8;
                }
                break;
            case 0x8008358:
                if (uVar15 == 0x10) {
                    puVar17 = arg1 + 0xb4;
                }
                else {
                    puVar17 = arg1 + 0xb8;
                }
            }
        }
        else {
code_r0x08008330:
            if (uVar15 == 0x10) {
                puVar17 = arg1 + 0xac;
            }
            else {
                puVar17 = arg1 + 0xb0;
            }
        }
        puVar25 = uStack_dc;
        uVar34 = unaff_x28;
        uVar26 = uVar27;
        uVar29 = uVar30;
        uVar15 = unaff_x23;
        if (*(arg2 + 0x18) == 1) {
            if (uVar14 == 1) {
                uVar9 = *(arg1 + 200);
                uVar20 = uStack_a8;
            }
            else {
                puVar22 = &stack0xffffffffffffff48;
                puVar17 = *(arg2 + 0x70);
                if (uStack_dc < 4) {
                    bVar5 = false;
                    puVar18 = puVar17;
                }
                else {
                    puVar18 = puVar17 + 1;
                    uVar9 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                    uVar15 = uVar9 >> 0x10 | uVar9 << 0x10;
                    uVar9 = uStack_dc >> 2;
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar15);
                    if (uVar9 == 1) {
                        bVar5 = false;
                        puVar22 = puVar22 | 4;
                    }
                    else {
                        uVar14 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
                        uStack_b8 = CONCAT44(uVar14 >> 0x10 | uVar14 << 0x10,uVar15);
                        if (uVar9 == 2) {
                            bVar5 = false;
                            puVar18 = puVar17 + 2;
                            puVar22 = &stack0xffffffffffffff50;
                        }
                        else {
                            uVar15 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
                            uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
                            if (uVar9 == 3) {
                                bVar5 = false;
                                puVar18 = puVar17 + 3;
                                puVar22 = &stack0xffffffffffffff54;
                            }
                            else {
                                uVar14 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
                                uStack_b0 = CONCAT44(uVar14 >> 0x10 | uVar14 << 0x10,uVar15);
                                if (uVar9 != 4) goto code_r0x08008e90;
                                puVar18 = puVar17 + 4;
                                puVar22 = &stack0xffffffffffffff58;
                                bVar5 = true;
                            }
                        }
                    }
                }
                uVar9 = uStack_dc & 3;
                if (uVar9 == 1) {
                    uVar9 = *puVar18 << 0x18;
code_r0x08008714:
                    if (bVar5) {
code_r0x08008e90:
    //WARNING: Does not return
                        pcVar7 = SoftwareBreakpoint(1,0x8008e94);
                        (*pcVar7)();
                    }
                    *puVar22 = uVar9;
                }
                else {
                    if (uVar9 == 2) {
                        uVar9 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10;
                        goto code_r0x08008714;
                    }
                    if (uVar9 == 3) {
                        uVar9 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10 | *(puVar18 + 2) << 8;
                        goto code_r0x08008714;
                    }
                }
                sym.writel_relaxed(uStack_b8 & 0xffffffff,*(arg1 + 0x48) + 0x1a20c);
                sym.writel_relaxed(uStack_b8 >> 0x20,*(arg1 + 0x48) + 0x1a210);
                uVar9 = *(arg1 + 0xc4);
                uVar20 = uStack_a8;
            }
            unaff_x22 = uVar9;
            uStack_a8 = uVar20;
            if ((unaff_x28 & 1) == 0) {
                uStack_a8._0_4_ = uVar20;
                uVar9 = uStack_a8;
                sym.writel_relaxed(uVar20 & 0xffffffff,*piVar33 + 0x1d000);
                sym.writel_relaxed(uVar20 & 0xffffffff,*piVar33 + 0x1d004);
                sym.writel_relaxed(uVar20 & 0xffffffff,*piVar33 + 0x1d008);
                sym.writel_relaxed(uVar20 & 0xffffffff,*piVar33 + 0x1d00c);
                sym.writel_relaxed(uVar20 & 0xffffffff,*piVar33 + 0x1d010);
                iVar31 = 0x1d014;
code_r0x080087cc:
                sym.writel_relaxed(uVar9,*piVar33 + iVar31);
                puVar25 = unaff_x23;
            }
        }
        else if (*(arg2 + 0x18) == 0) {
            if (uVar14 == 1) {
                uVar9 = *(arg1 + 0xc0);
            }
            else {
                uVar9 = *(arg1 + 0xbc);
                puVar22 = &stack0xffffffffffffff48;
                puVar17 = *(arg2 + 0x70);
                if (uStack_dc < 4) {
                    bVar5 = false;
                    puVar18 = puVar17;
                }
                else {
                    puVar18 = puVar17 + 1;
                    uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
                    uVar15 = uStack_dc >> 2;
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar14);
                    if (uVar15 == 1) {
                        bVar5 = false;
                        puVar22 = puVar22 | 4;
                    }
                    else {
                        uVar26 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
                        uStack_b8 = CONCAT44(uVar26 >> 0x10 | uVar26 << 0x10,uVar14);
                        if (uVar15 == 2) {
                            bVar5 = false;
                            puVar18 = puVar17 + 2;
                            puVar22 = &stack0xffffffffffffff50;
                        }
                        else {
                            uVar14 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
                            uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar14);
                            if (uVar15 == 3) {
                                bVar5 = false;
                                puVar18 = puVar17 + 3;
                                puVar22 = &stack0xffffffffffffff54;
                            }
                            else {
                                uVar26 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
                                uStack_b0 = CONCAT44(uVar26 >> 0x10 | uVar26 << 0x10,uVar14);
                                if (uVar15 != 4) goto code_r0x08008e90;
                                puVar18 = puVar17 + 4;
                                puVar22 = &stack0xffffffffffffff58;
                                bVar5 = true;
                            }
                        }
                    }
                }
                uVar15 = uStack_dc & 3;
                if (uVar15 == 1) {
                    uVar15 = *puVar18 << 0x18;
code_r0x08008638:
                    if (bVar5) goto code_r0x08008e90;
                    *puVar22 = uVar15;
                }
                else {
                    if (uVar15 == 2) {
                        uVar15 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10;
                        goto code_r0x08008638;
                    }
                    if (uVar15 == 3) {
                        uVar15 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10 | *(puVar18 + 2) << 8;
                        goto code_r0x08008638;
                    }
                }
                sym.writel_relaxed(uStack_b8 & 0xffffffff,*piVar33 + 0x1a20c);
                sym.writel_relaxed(uStack_b8 >> 0x20,*piVar33 + 0x1a210);
            }
            unaff_x22 = uVar9;
            if ((unaff_x28 & 1) == 0) {
                iVar31 = 0x1d004;
                sym.writel_relaxed(uStack_a8 & 0xffffffff,*piVar33 + 0x1d000);
                uVar9 = uStack_a8._4_4_;
                goto code_r0x080087cc;
            }
        }
        else {
            unaff_x22 = *puVar17;
            uStack_ec = uVar15;
            uStack_e8 = uVar26;
            uStack_e4 = uVar29;
            if (uVar14 == 3) {
                uStack_c8 = 0;
                uStack_c0 = 0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                if ((unaff_x28 & 1) == 0 && uVar15 == 0) {
                    uVar14 = *(arg2 + 0x68);
                    uVar15 = uVar14 >> 3;
                    puVar17 = *(arg2 + 0x60) + (uVar14 >> 1);
                    if (uVar14 < 8) {
                        bVar5 = false;
                        puVar22 = &stack0xffffffffffffff44;
                        puVar18 = puVar17;
                    }
                    else {
                        uVar26 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                        uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                        uStack_c0 = uVar26 << 0x20;
                        if (uVar15 == 1) {
                            bVar5 = false;
                            puVar22 = &stack0xffffffffffffff40;
                            puVar18 = puVar17 + 1;
                        }
                        else {
                            uVar29 = puVar17[1];
                            uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
                            uStack_c0 = CONCAT44(uVar26,uVar29 >> 0x10 | uVar29 << 0x10);
                            if (uVar15 == 2) {
                                bVar5 = false;
                                puVar22 = &stack0xffffffffffffff3c;
                                puVar18 = puVar17 + 2;
                            }
                            else {
                                uVar26 = puVar17[2];
                                uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
                                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                                uStack_c8 = uVar26 << 0x20;
                                if (uVar15 == 3) {
                                    bVar5 = false;
                                    puVar22 = &stack0xffffffffffffff38;
                                    puVar18 = puVar17 + 3;
                                }
                                else {
                                    uVar29 = puVar17[3];
                                    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
                                    uStack_c8 = CONCAT44(uVar26,uVar29 >> 0x10 | uVar29 << 0x10);
                                    if (uVar15 == 4) {
                                        bVar5 = false;
                                        puVar22 = &stack0xffffffffffffff34;
                                        puVar18 = puVar17 + 4;
                                    }
                                    else {
                                        uVar26 = puVar17[4];
                                        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
                                        uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                                        uStack_d0 = uVar26 << 0x20;
                                        if (uVar15 == 5) {
                                            bVar5 = false;
                                            puVar22 = &stack0xffffffffffffff30;
                                            puVar18 = puVar17 + 5;
                                        }
                                        else {
                                            uVar29 = puVar17[5];
                                            uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
                                            uStack_d0 = CONCAT44(uVar26,uVar29 >> 0x10 | uVar29 << 0x10);
                                            if (uVar15 == 6) {
                                                bVar5 = false;
                                                puVar22 = &stack0xffffffffffffff2c;
                                                puVar18 = puVar17 + 6;
                                            }
                                            else {
                                                uVar26 = puVar17[6];
                                                uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
                                                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                                                uStack_d8 = uVar26 << 0x20;
                                                if (uVar15 == 7) {
                                                    bVar5 = false;
                                                    puVar22 = &stack0xffffffffffffff28;
                                                    puVar18 = puVar17 + 7;
                                                }
                                                else {
                                                    puVar18 = puVar17 + 8;
                                                    uVar29 = puVar17[7];
                                                    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
                                                    uStack_d8 = CONCAT44(uVar26,uVar29 >> 0x10 | uVar29 << 0x10);
                                                    if (uVar15 != 8) goto code_r0x08008e90;
                                                    bVar5 = true;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    uVar26 = uVar14 >> 1 & 3;
                    if (uVar26 == 1) {
                        uVar26 = *puVar18 << 0x18;
code_r0x080088e0:
                        if (bVar5) goto code_r0x08008e90;
                        *puVar22 = uVar26;
                    }
                    else {
                        if (uVar26 == 2) {
                            uVar26 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10;
                            goto code_r0x080088e0;
                        }
                        if (uVar26 == 3) {
                            uVar26 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10 | *(puVar18 + 2) << 8;
                            goto code_r0x080088e0;
                        }
                    }
                    if (7 < uVar14) {
                        if (uVar15 < 2) {
                            uVar15 = 1;
                        }
                        sym.writel_relaxed(uStack_c0 >> 0x20,*piVar33 + 0x1d020);
                        if (((((0xf < uVar14) &&
                              (sym.writel_relaxed(uStack_c0 & 0xffffffff,*piVar33 + 0x1d024), uVar15 != 2)) &&
                             (sym.writel_relaxed(uStack_c8 >> 0x20,*piVar33 + 0x1d028), uVar15 != 3)) &&
                            ((sym.writel_relaxed(uStack_c8 & 0xffffffff,*piVar33 + 0x1d02c), uVar15 != 4 &&
                             (sym.writel_relaxed(uStack_d0 >> 0x20,*piVar33 + 0x1d030), uVar15 != 5)))) &&
                           ((sym.writel_relaxed(uStack_d0 & 0xffffffff,*piVar33 + 0x1d034), uVar15 != 6 &&
                            ((sym.writel_relaxed(uStack_d8 >> 0x20,*piVar33 + 0x1d038), uVar15 != 7 &&
                             (sym.writel_relaxed(uStack_d8 & 0xffffffff,*piVar33 + 0x1d03c), uVar15 != 8)))))) {
code_r0x08008e8c:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(0x5512,0x8008e90);
                            (*pcVar7)();
                        }
                    }
                }
                if (*(arg2 + 0x91) == '\x02') {
                    uVar15 = *(arg2 + 0x80);
                    if (0x3ff < uVar15) {
                        uVar15 = 0x400;
                    }
                    uVar27 = uVar15;
                }
                else if (*(arg2 + 0x91) == '\x01') {
                    uVar15 = *(arg2 + 0x80);
                    if (0x1ff < uVar15) {
                        uVar15 = 0x200;
                    }
                    uVar27 = uVar15;
                }
                else {
                    uVar27 = *(arg2 + 0x80);
                }
                sym.writel_relaxed(uVar27,*piVar33 + 0x1a230);
                uVar14 = *(arg2 + 0x20);
            }
            if (uVar14 != 1) {
                if (uVar14 == 3) {
                    sym._byte_stream_swap_to_net_words(&stack0xffffffffffffff48,*(arg2 + 0x70),puVar25);
                }
                else {
                    puVar22 = &stack0xffffffffffffff48;
                    puVar17 = *(arg2 + 0x70);
                    if (uVar9 < 4) {
                        bVar5 = false;
                        puVar18 = puVar17;
                    }
                    else {
                        puVar18 = puVar17 + 1;
                        uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                        uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
                        uVar15 = uVar9 >> 2;
                        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar14);
                        if (uVar15 == 1) {
                            bVar5 = false;
                            puVar22 = puVar22 | 4;
                        }
                        else {
                            uVar26 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
                            uStack_b8 = CONCAT44(uVar26 >> 0x10 | uVar26 << 0x10,uVar14);
                            if (uVar15 == 2) {
                                bVar5 = false;
                                puVar18 = puVar17 + 2;
                                puVar22 = &stack0xffffffffffffff50;
                            }
                            else {
                                uVar14 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
                                uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar14);
                                if (uVar15 == 3) {
                                    bVar5 = false;
                                    puVar18 = puVar17 + 3;
                                    puVar22 = &stack0xffffffffffffff54;
                                }
                                else {
                                    uVar26 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
                                    uStack_b0 = CONCAT44(uVar26 >> 0x10 | uVar26 << 0x10,uVar14);
                                    if (uVar15 != 4) goto code_r0x08008e90;
                                    puVar18 = puVar17 + 4;
                                    puVar22 = &stack0xffffffffffffff58;
                                    bVar5 = true;
                                }
                            }
                        }
                    }
                    uVar9 = uVar9 & 3;
                    if (uVar9 == 1) {
                        uVar9 = *puVar18 << 0x18;
                    }
                    else if (uVar9 == 2) {
                        uVar9 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10;
                    }
                    else {
                        if (uVar9 != 3) goto code_r0x08008b6c;
                        uVar9 = *puVar18 << 0x18 | *(puVar18 + 1) << 0x10 | *(puVar18 + 2) << 8;
                    }
                    if (bVar5) goto code_r0x08008e90;
                    *puVar22 = uVar9;
                }
code_r0x08008b6c:
                uVar27 = uStack_b8;
                sym.writel_relaxed(uStack_b8 & 0xffffffff,*piVar33 + 0x1a20c);
                uVar9 = uStack_b8._4_4_;
                sym.writel_relaxed(uStack_b8._4_4_,*piVar33 + 0x1a210);
                uVar30 = uStack_b0;
                sym.writel_relaxed(uStack_b0 & 0xffffffff,*piVar33 + 0x1a214);
                uVar15 = uStack_b0._4_4_;
                sym.writel_relaxed(uStack_b0._4_4_,*piVar33 + 0x1a218);
                if (*(arg2 + 0x20) == 4) {
                    sym.writel_relaxed(uVar27 & 0xffffffff,*piVar33 + 0x1a220);
                    sym.writel_relaxed(uVar9,*piVar33 + 0x1a224);
                    sym.writel_relaxed(uVar30 & 0xffffffff,*piVar33 + 0x1a228);
                    sym.writel_relaxed(uVar15,*piVar33 + 0x1a22c);
                    sym.writel_relaxed(uVar15 + 1,*piVar33 + 0x1a218);
                }
            }
            uVar9 = uStack_ec;
            unaff_x23 = uStack_ec;
            if (((uStack_ec | uVar34 | *arg2 == 1) == 1) || (uStack_e0 == 0)) {
                uVar27 = uStack_e8;
                uVar30 = uStack_e4;
            }
            else {
                uVar27 = uStack_e0;
                iVar31 = 0;
                do {
                    if (iVar31 == 0x40) goto code_r0x08008e8c;
                    sym.writel_relaxed(*(&stack0xffffffffffffff58 + iVar31),*piVar33 + iVar31 + 0x1d000);
                    iVar31 = iVar31 + 4;
                } while (uVar27 * 4 - iVar31 != 0);
                uVar27 = uStack_e8;
                unaff_x23 = uVar9;
                uVar30 = uStack_e4;
                puVar25 = unaff_x28;
            }
        }
        unaff_x26 = 0x1a120;
        uVar9 = unaff_x22 | 0x8000;
        if (unaff_x23 == 0) {
            uVar9 = unaff_x22;
        }
        uVar15 = 0x4000;
        if (uVar34 == 0) {
            uVar15 = 0;
        }
        sym.writel_relaxed(uVar15 | (*(arg2 + 0x1c) == 0) << 10 | uVar9 & 0xffffbfff,*piVar33 + 0x1a200);
        if ((*(arg2 + 0x20) == 4) && (*(arg2 + 0x1c) == 1)) {
            uVar9 = *(arg2 + 0x34) + *(arg2 + 0x80);
        }
        else {
            uVar9 = *(arg2 + 0x80);
        }
        sym.writel_relaxed(uVar9,*piVar33 + 0x1a204);
        if (*(arg2 + 0x98) != '\0') {
            sym.writel_relaxed(*(arg2 + 0x9c),*piVar33 + 0x1a500);
        }
        sym.writel_relaxed(*(arg2 + 0xa0) != 0 | *(arg2 + 0xa0) << 4,*(arg1 + 0x48) + 0x1a504);
        sym.writel_relaxed(uVar30 & 0xffff,*(arg1 + 0x48) + 0x1a208);
        iVar10 = -(*(arg2 + 0x7c) != 0x40);
        *(arg1 + 0x10c) = 0xffffffffffffffff;
        *(arg1 + 0x104) = iVar10;
        *(arg1 + 0x108) = iVar10;
        sym.writel_relaxed(0xffffffff,*(arg1 + 0x48) + 0x1a21c);
        sym.writel_relaxed(*(arg1 + 0x10c),*(arg1 + 0x48) + 0x1a234);
        sym.writel_relaxed(*(arg1 + 0x108),*(arg1 + 0x48) + 0x1a238);
        sym.writel_relaxed(*(arg1 + 0x104),*(arg1 + 0x48) + 0x1a23c);
        sym.writel_relaxed(uVar27,*(arg1 + 0x48) + 0x1a110);
        piVar16 = 0x1b000;
        if (uVar34 == 0) {
            piVar16 = unaff_x26;
        }
        uVar9 = 5;
        if (uVar34 == 0) {
            uVar9 = 7;
        }
        sym.writel_relaxed(uVar9,*(arg1 + 0x48) + piVar16);
        DataSynchronizationBarrier(3,3,0);
        iVar10 = 0;
    }
    else {
        _printk(0x8001fa8,"qce_crypto_config","qce_crypto_config");
        iVar10 = -0x16;
    }
    iVar31 = sp_el0;
    if (*(iVar31 + 0x5e0) == iStack_68) {
        return iVar10;
    }
    auVar36 = __stack_chk_fail(iVar10);
    puVar12 = auVar36._8_8_;
    arg1_00 = auVar36._0_8_;
    *extraout_x18 = sym.qce_process_sha_req;
    pcStack_148 = sym.qce_process_sha_req;
    iVar31 = sp_el0;
    iStack_158 = *(iVar31 + 0x5e0);
    piVar16 = arg1_00 + 0x102fc;
    puStack_150 = &stack0xffffffffffffffa0;
    puStack_140 = unaff_x28;
    piStack_138 = piVar33;
    piStack_130 = unaff_x26;
    uStack_128 = uVar30;
    uStack_120 = uVar27;
    puStack_118 = unaff_x23;
    uStack_110 = unaff_x22;
    iStack_108 = arg2;
    puStack_100 = puVar25;
    iStack_f8 = arg1;
    if (puVar12 == NULL) {
        puVar35 = arg1_00 + 0x2070;
        *(arg1_00 + 0x103d4) = 8;
        puVar25 = 0x8;
    }
    else {
        uVar9 = sym.qce_alloc_req_info(auVar36._0_4_);
        if (uVar9 < 0) {
            iVar10 = -0x10;
            puVar35 = unaff_x28;
            goto code_r0x08009d5c;
        }
        *(puVar12 + 0x54) = uVar9;
        puVar25 = uVar9;
        puVar35 = puVar12;
        if (9 < uVar9) goto code_r0x0800a08c;
    }
    iVar10 = *(puVar35 + 8);
    iVar31 = puVar35[9];
    if (iVar10 < 1) {
        unaff_x26 = arg1_00 + puVar25 * 0x37f + 0x45e;
        *(arg1_00 + puVar25 * 0x37f + 0x45e) = 0;
        cVar2 = *(arg1_00 + 8);
joined_r0x08009008:
        if (cVar2 != '\0') goto code_r0x0800900c;
code_r0x08009058:
        uVar9 = *(puVar35 + 7);
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        sym.writel_relaxed(0,arg1_00[9] + 0x1a100);
        uVar14 = *(arg1_00 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1_00 + 0x134) << 5;
        uVar15 = uVar14 | 0xe;
        *(arg1_00 + 0x8c) = uVar15;
        *(arg1_00 + 0x12) = uVar14 | 0x20e;
        sym.writel_relaxed(uVar15,arg1_00[9] + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        iVar10 = *(puVar35 + 1);
        if (iVar10 == 4) {
            sym.writel_relaxed(0,arg1_00[9] + 0x1a300);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a200);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a204);
            iVar11 = 0;
            do {
                sym.writel_relaxed(0,arg1_00[9] + iVar11 + 0x1a310);
                sym.writel_relaxed(0,arg1_00[9] + iVar11 + 0x1d040);
                iVar11 = iVar11 + 4;
            } while (iVar11 != 0x40);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a390);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a394);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a398);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a39c);
            iVar11 = 0xd4;
            if (*(puVar35 + 7) != 0x10) {
                iVar11 = 0xd8;
            }
            uVar15 = *(arg1_00 + iVar11);
            iVar10 = *(puVar35 + 1);
        }
        else {
            uVar15 = 0;
        }
        if (iVar10 - 2U < 3) {
            uVar14 = *(puVar35 + 7);
            puVar22 = &stack0xfffffffffffffe48;
            puVar23 = puVar35[6];
            if (uVar14 < 4) {
                uVar27 = 0;
            }
            else {
                uVar26 = uVar14 >> 2;
                uVar27 = 0;
                do {
                    uVar30 = uVar27;
                    if (0x3f < uVar30) goto code_r0x0800a088;
                    uVar26 = uVar26 - 1;
                    uVar29 = (*(puVar23 + uVar30) & 0xff00ff00) >> 8 | (*(puVar23 + uVar30) & 0xff00ff) << 8;
                    *(puVar22 + uVar30) = uVar29 >> 0x10 | uVar29 << 0x10;
                    uVar27 = uVar30 + 4;
                } while (uVar26 != 0);
                puVar23 = puVar23 + uVar27;
                puVar22 = &stack0xfffffffffffffe4c + uVar30;
            }
            uVar14 = uVar14 & 3;
            if (uVar14 == 1) {
                uVar14 = *puVar23 << 0x18;
code_r0x08009468:
                if (0x3c < uVar27) goto code_r0x0800a088;
                *puVar22 = uVar14;
            }
            else {
                if (uVar14 == 2) {
                    uVar14 = *puVar23 << 0x18 | puVar23[1] << 0x10;
                    goto code_r0x08009468;
                }
                if (uVar14 == 3) {
                    uVar14 = *puVar23 << 0x18 | puVar23[1] << 0x10 | puVar23[2] << 8;
                    goto code_r0x08009468;
                }
            }
            if ((*(puVar35 + 10) & 1) == 0) {
                if ((*(puVar35 + 10) >> 1 & 1) == 0) {
                    if (uVar9 < 4) {
                        bVar5 = false;
                        goto joined_r0x080094b0;
                    }
                    uVar9 = uVar9 >> 2;
                    if (uVar9 < 2) {
                        uVar9 = 1;
                    }
                    iVar11 = 0;
                    do {
                        if (iVar11 == 0x40) goto code_r0x0800a08c;
                        sym.writel_relaxed(*(&stack0xfffffffffffffe48 + iVar11),arg1_00[9] + iVar11 + 0x1d040);
                        iVar11 = iVar11 + 4;
                    } while (uVar9 * 4 - iVar11 != 0);
                    bVar8 = false;
                    iVar10 = *(puVar35 + 1);
                }
                else {
                    bVar8 = true;
                }
                bVar5 = false;
            }
            else {
                bVar5 = true;
joined_r0x080094b0:
                bVar8 = false;
            }
            if (iVar10 != 4) goto code_r0x0800922c;
code_r0x08009764:
            sym.writel_relaxed(uVar15,arg1_00[9] + 0x1a300);
            sym.writel_relaxed(*(puVar35 + 8),arg1_00[9] + 0x1a304);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a308);
            sym.writel_relaxed(0,arg1_00[9] + 0x1a200);
            sym.writel_relaxed(*(puVar35 + 8),arg1_00[9] + 0x1a110);
            sym.writel_relaxed(*(arg1_00 + 0x12),arg1_00[9] + 0x1a400);
            iVar11 = 0x1b000;
            if (!bVar5) {
                iVar11 = 0x1a120;
            }
            uVar9 = 5;
            if (!bVar5) {
                uVar9 = 7;
            }
            sym.writel_relaxed(uVar9,arg1_00[9] + iVar11);
            DataSynchronizationBarrier(3,3,0);
            iVar10 = 0;
        }
        else {
            bVar8 = false;
            bVar5 = false;
code_r0x0800922c:
            if ((*(puVar35 + 0x3d) != '\0') || ((*(puVar35 + 8) & 0x3f) == 0)) {
                bVar6 = true;
                iVar11 = 0xdc;
                switch(iVar10) {
                case 0:
                    break;
                case 1:
                    bVar6 = false;
                    iVar11 = 0xe0;
                    break;
                case 2:
                    bVar6 = true;
                    iVar11 = 0xe4;
                    break;
                case 3:
                    bVar6 = false;
                    iVar11 = 0xe8;
                    break;
                default:
                    iVar10 = -0x16;
                    goto code_r0x08009814;
                }
                if (*(puVar35 + 0x3c) == '\0') {
                    puVar22 = puVar35[2];
                    uVar9 = (*puVar22 & 0xff00ff00) >> 8 | (*puVar22 & 0xff00ff) << 8;
                    uVar29 = uVar9 >> 0x10 | uVar9 << 0x10;
                    uVar9 = (puVar22[1] & 0xff00ff00) >> 8 | (puVar22[1] & 0xff00ff) << 8;
                    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                    uStack_178 = CONCAT44(uVar9,uVar29);
                    uVar15 = (puVar22[2] & 0xff00ff00) >> 8 | (puVar22[2] & 0xff00ff) << 8;
                    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
                    uVar15 = (puVar22[3] & 0xff00ff00) >> 8 | (puVar22[3] & 0xff00ff) << 8;
                    uVar26 = uVar15 >> 0x10 | uVar15 << 0x10;
                    uStack_170 = CONCAT44(uVar26,uVar14);
                    uVar15 = (puVar22[4] & 0xff00ff00) >> 8 | (puVar22[4] & 0xff00ff) << 8;
                    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                    if (!bVar6) {
                        uVar34 = (puVar22[5] & 0xff00ff00) >> 8 | (puVar22[5] & 0xff00ff) << 8;
                        uStack_168._4_4_ = uVar34 >> 0x10 | uVar34 << 0x10;
                        uVar34 = (puVar22[6] & 0xff00ff00) >> 8 | (puVar22[6] & 0xff00ff) << 8;
                        uVar4 = (puVar22[7] & 0xff00ff00) >> 8 | (puVar22[7] & 0xff00ff) << 8;
                        uStack_160 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,uVar34 >> 0x10 | uVar34 << 0x10);
                    }
                    uStack_168 = CONCAT44(uStack_168._4_4_,uVar15);
                    uVar27 = uVar29;
                }
                else if (bVar6) {
                    uVar9 = 0xefcdab89;
                    uVar15 = 0xc3d2e1f0;
                    uVar14 = 0x98badcfe;
                    uVar27 = 0x67452301;
                    uVar26 = 0x10325476;
                    uStack_178 = _obj._std_init_vector_sha1;
                    uStack_170 = *0x80023ac;
                    uStack_168 = CONCAT44(uStack_168._4_4_,*0x80023b4);
                }
                else {
                    uVar9 = 0xbb67ae85;
                    uVar26 = 0xa54ff53a;
                    uVar27 = 0x6a09e667;
                    uVar15 = 0x510e527f;
                    uVar14 = 0x3c6ef372;
                    uStack_178 = _obj._std_init_vector_sha256;
                    uStack_170 = *0x80023c0;
                    uStack_168 = *0x80023c8;
                    uStack_160 = *0x80023d0;
                }
                uVar29 = *(arg1_00 + iVar11);
                sym.writel_relaxed(uVar27,arg1_00[9] + 0x1a310);
                sym.writel_relaxed(uVar9,arg1_00[9] + 0x1a314);
                sym.writel_relaxed(uVar14,arg1_00[9] + 0x1a318);
                sym.writel_relaxed(uVar26,arg1_00[9] + 0x1a31c);
                sym.writel_relaxed(uVar15,arg1_00[9] + 0x1a320);
                if ((*(puVar35 + 1) | 2) == 3) {
                    sym.writel_relaxed(uStack_168 >> 0x20,arg1_00[9] + 0x1a324);
                    sym.writel_relaxed(uStack_160 & 0xffffffff,arg1_00[9] + 0x1a328);
                    sym.writel_relaxed(uStack_160 >> 0x20,arg1_00[9] + 0x1a32c);
                }
                sym.writel_relaxed(*(puVar35 + 4),arg1_00[9] + 0x1a390);
                sym.writel_relaxed(*(puVar35 + 0x24),arg1_00[9] + 0x1a394);
                uVar15 = uVar29 & 0xfffcffff | *(puVar35 + 0x3d) << 0x10 | *(puVar35 + 0x3c) << 0x11;
                uVar9 = uVar15 | 0x40000;
                if (!bVar5) {
                    uVar9 = uVar15;
                }
                uVar15 = uVar9 | 0x80000;
                if (!bVar8) {
                    uVar15 = uVar9;
                }
                goto code_r0x08009764;
            }
            iVar10 = -5;
        }
code_r0x08009814:
        piVar33 = NULL;
        goto code_r0x08009c28;
    }
    iVar11 = puVar35[3];
    uVar9 = 0;
    do {
        uVar15 = uVar9;
        uVar9 = uVar15 + 1;
        iVar10 = iVar10 - *(iVar11 + 0xc);
        iVar11 = sg_next();
    } while (0 < iVar10);
    unaff_x26 = arg1_00 + puVar25 * 0x37f + 0x45e;
    *(arg1_00 + puVar25 * 0x37f + 0x45e) = uVar9;
    if (0x7ffffffe < uVar15) {
        cVar2 = *(arg1_00 + 8);
        goto joined_r0x08009008;
    }
    uVar28 = *arg1_00;
    uVar32 = puVar35[3];
    do {
        dma_map_sg_attrs(uVar28,uVar32,1,1,0);
        uVar32 = sg_next(uVar32);
        uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (*(arg1_00 + 8) == '\0') goto code_r0x08009058;
code_r0x0800900c:
    if (8 < puVar25) goto code_r0x0800a08c;
    switch(*(puVar35 + 1)) {
    case 0:
        iVar11 = 0x1010;
        break;
    case 1:
        iVar11 = 0x10e8;
        break;
    case 2:
        iVar11 = 0x11c0;
        break;
    case 3:
        iVar11 = 0x1298;
        break;
    case 4:
        if (*(puVar35 + 7) == 0x10) {
            iVar11 = 0x1370;
        }
        else {
            iVar11 = 0x1448;
        }
        break;
    default:
        goto code_r0x080094cc;
    }
    piVar33 = arg1_00 + iVar11 + puVar25 * 0x1bf8;
    if (piVar33 == NULL) {
code_r0x080094cc:
        _printk(0x8001463,"qce_process_sha_req");
        iVar10 = -0x16;
        piVar1 = arg1_00 + puVar25 * 0x37f + 0xe8;
        *(arg1_00 + puVar25 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar19 = *piVar1;
            cVar2 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar19 != 0) goto code_r0x08009d5c;
        goto code_r0x08009f7c;
    }
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar9 = *(puVar35 + 7);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar14 = *(arg1_00 + 0x2e) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1_00 + 0x134) << 5;
    uVar15 = uVar14 | 0xe;
    *(arg1_00 + 0x8c) = uVar15;
    *(arg1_00 + 0x12) = uVar14 | 0x20e;
    *(piVar33[1] + 4) = uVar15;
    *(piVar33[2] + 4) = *(arg1_00 + 0x12);
    iVar10 = *(puVar35 + 1);
    if (iVar10 - 2U < 3) {
        puVar22 = piVar33[0x19];
        uVar15 = *(puVar35 + 10) & 3;
        bVar8 = uVar15 == 2;
        if ((*(puVar35 + 10) & 1) == 0) {
            *puVar22 = *(arg1_00 + 10) + 0x1a120U & 0xffffff | *(puVar22 + 3) << 0x18;
            if (uVar15 == 2) {
                bVar5 = false;
                bVar8 = true;
            }
            else {
                uVar15 = *(puVar35 + 7);
                puVar22 = &stack0xfffffffffffffe48;
                iVar11 = piVar33[0x14];
                puVar23 = puVar35[6];
                if (uVar15 < 4) {
                    uVar27 = 0;
                }
                else {
                    uVar14 = uVar15 >> 2;
                    uVar27 = 0;
                    do {
                        uVar30 = uVar27;
                        if (0x3f < uVar30) goto code_r0x0800a088;
                        uVar14 = uVar14 - 1;
                        uVar26 = (*(puVar23 + uVar30) & 0xff00ff00) >> 8 | (*(puVar23 + uVar30) & 0xff00ff) << 8;
                        *(puVar22 + uVar30) = uVar26 >> 0x10 | uVar26 << 0x10;
                        uVar27 = uVar30 + 4;
                    } while (uVar14 != 0);
                    puVar23 = puVar23 + uVar27;
                    puVar22 = &stack0xfffffffffffffe4c + uVar30;
                }
                uVar15 = uVar15 & 3;
                if (uVar15 == 1) {
                    uVar15 = *puVar23 << 0x18;
code_r0x0800993c:
                    if (0x3c < uVar27) {
code_r0x0800a088:
    //WARNING: Does not return
                        pcVar7 = SoftwareBreakpoint(1,0x800a08c);
                        (*pcVar7)();
                    }
                    *puVar22 = uVar15;
                }
                else {
                    if (uVar15 == 2) {
                        uVar15 = *puVar23 << 0x18 | puVar23[1] << 0x10;
                        goto code_r0x0800993c;
                    }
                    if (uVar15 == 3) {
                        uVar15 = *puVar23 << 0x18 | puVar23[1] << 0x10 | puVar23[2] << 8;
                        goto code_r0x0800993c;
                    }
                }
                if (3 < uVar9) {
                    uVar15 = uVar9 >> 2;
                    if (uVar15 < 2) {
                        uVar15 = 1;
                    }
                    *(iVar11 + 4) = uStack_1b8;
                    if (7 < uVar9) {
                        *(iVar11 + 0x14) = uStack_1b8._4_4_;
                        if (uVar15 != 2) {
                            *(iVar11 + 0x24) = uStack_1b0;
                            if (uVar15 != 3) {
                                *(iVar11 + 0x34) = uStack_1b0._4_4_;
                                if (uVar15 != 4) {
                                    *(iVar11 + 0x44) = uStack_1a8;
                                    if (uVar15 != 5) {
                                        *(iVar11 + 0x54) = uStack_1a8._4_4_;
                                        if (uVar15 != 6) {
                                            *(iVar11 + 100) = uStack_1a0;
                                            if (uVar15 != 7) {
                                                *(iVar11 + 0x74) = uStack_1a0._4_4_;
                                                if (uVar15 != 8) {
                                                    *(iVar11 + 0x84) = uStack_198;
                                                    if (uVar15 == 9) {
                                                        bVar5 = false;
                                                        bVar8 = false;
                                                    }
                                                    else {
                                                        *(iVar11 + 0x94) = uStack_198._4_4_;
                                                        if (uVar15 != 10) {
                                                            *(iVar11 + 0xa4) = uStack_190;
                                                            if (uVar15 != 0xb) {
                                                                *(iVar11 + 0xb4) = uStack_190._4_4_;
                                                                if (uVar15 != 0xc) {
                                                                    *(iVar11 + 0xc4) = uStack_188;
                                                                    if (uVar15 != 0xd) {
                                                                        *(iVar11 + 0xd4) = uStack_188._4_4_;
                                                                        if (uVar15 != 0xe) {
                                                                            *(iVar11 + 0xe4) = uStack_180;
                                                                            if (uVar15 != 0xf) {
                                                                                *(iVar11 + 0xf4) = uStack_180._4_4_;
                                                                                if (uVar15 != 0x10)
                                                                                goto code_r0x0800a08c;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        bVar5 = false;
                                                        bVar8 = false;
                                                    }
                                                    goto code_r0x080099e4;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                bVar5 = false;
                bVar8 = false;
            }
        }
        else {
            bVar5 = true;
            *puVar22 = *(arg1_00 + 10) + 0x1b000U & 0xffffff | *(puVar22 + 3) << 0x18;
        }
code_r0x080099e4:
        iVar10 = *(puVar35 + 1);
        if (iVar10 != 4) goto code_r0x080099f0;
code_r0x08009bf4:
        *(piVar33[0x12] + 4) = *(puVar35 + 8);
        *(piVar33[3] + 4) = 0;
        *(piVar33[0x13] + 4) = 0;
        iVar19 = *(puVar35 + 8);
        if (iVar19 == 0) {
            iVar19 = *(arg1_00 + 0x2e);
        }
        iVar10 = 0;
        *(piVar33[0x18] + 4) = iVar19;
    }
    else {
        bVar8 = false;
        bVar5 = false;
code_r0x080099f0:
        if ((*(puVar35 + 0x3d) != '\0') || ((*(puVar35 + 8) & 0x3f) == 0)) {
            uStack_168._4_4_ = 0;
            switch(iVar10) {
            case 0:
            case 2:
                if (*(puVar35 + 0x3c) == '\0') {
                    bVar6 = true;
code_r0x08009ae4:
                    puVar22 = puVar35[2];
                    uVar9 = (*puVar22 & 0xff00ff00) >> 8 | (*puVar22 & 0xff00ff) << 8;
                    uVar14 = uVar9 >> 0x10 | uVar9 << 0x10;
                    uVar9 = (puVar22[1] & 0xff00ff00) >> 8 | (puVar22[1] & 0xff00ff) << 8;
                    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                    uStack_178 = CONCAT44(uVar9,uVar14);
                    uVar15 = (puVar22[2] & 0xff00ff00) >> 8 | (puVar22[2] & 0xff00ff) << 8;
                    uVar29 = uVar15 >> 0x10 | uVar15 << 0x10;
                    uVar15 = (puVar22[3] & 0xff00ff00) >> 8 | (puVar22[3] & 0xff00ff) << 8;
                    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                    uStack_170 = CONCAT44(uVar15,uVar29);
                    uVar26 = (puVar22[4] & 0xff00ff00) >> 8 | (puVar22[4] & 0xff00ff) << 8;
                    uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                    if (!bVar6) {
                        uVar34 = (puVar22[5] & 0xff00ff00) >> 8 | (puVar22[5] & 0xff00ff) << 8;
                        uStack_168._4_4_ = uVar34 >> 0x10 | uVar34 << 0x10;
                        uVar34 = (puVar22[6] & 0xff00ff00) >> 8 | (puVar22[6] & 0xff00ff) << 8;
                        uVar4 = (puVar22[7] & 0xff00ff00) >> 8 | (puVar22[7] & 0xff00ff) << 8;
                        uStack_160 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,uVar34 >> 0x10 | uVar34 << 0x10);
                    }
                    uStack_168 = CONCAT44(uStack_168._4_4_,uVar26);
                }
                else {
                    uVar9 = 0xefcdab89;
                    uVar26 = 0xc3d2e1f0;
                    uVar29 = 0x98badcfe;
                    uVar14 = 0x67452301;
                    uVar15 = 0x10325476;
                    uStack_178 = _obj._std_init_vector_sha1;
                    uStack_170 = *0x80023ac;
                    uStack_168 = *0x80023b4;
                }
                break;
            case 1:
            case 3:
                if (*(puVar35 + 0x3c) == '\0') {
                    bVar6 = false;
                    goto code_r0x08009ae4;
                }
                uVar9 = 0xbb67ae85;
                uVar15 = 0xa54ff53a;
                uVar14 = 0x6a09e667;
                uVar26 = 0x510e527f;
                uVar29 = 0x3c6ef372;
                uStack_178 = _obj._std_init_vector_sha256;
                uStack_170 = *0x80023c0;
                uStack_168 = *0x80023c8;
                uStack_160 = *0x80023d0;
                break;
            default:
                iVar10 = -0x16;
                goto code_r0x08009c28;
            }
            iVar11 = piVar33[0x15];
            *(iVar11 + 4) = uVar14;
            *(iVar11 + 0x14) = uVar9;
            *(iVar11 + 0x24) = uVar29;
            *(iVar11 + 0x34) = uVar15;
            *(iVar11 + 0x44) = uVar26;
            if ((*(puVar35 + 1) | 2) == 3) {
                *(iVar11 + 0x54) = uStack_168._4_4_;
                *(iVar11 + 100) = uStack_160;
                *(iVar11 + 0x74) = uStack_160._4_4_;
            }
            iVar11 = piVar33[0x17];
            *(iVar11 + 4) = *(puVar35 + 4);
            *(iVar11 + 0x14) = *(puVar35 + 0x24);
            uVar9 = *(piVar33[0x11] + 4) & 0xfff0ffff;
            if (*(puVar35 + 0x3d) != '\0') {
                uVar9 = uVar9 | 0x10000;
            }
            if (*(puVar35 + 0x3c) != '\0') {
                uVar9 = uVar9 | 0x20000;
            }
            uVar15 = uVar9 | 0x40000;
            if (!bVar5) {
                uVar15 = uVar9;
            }
            uVar9 = uVar15 | 0x80000;
            if (!bVar8) {
                uVar9 = uVar15;
            }
            *(piVar33[0x11] + 4) = uVar9;
            goto code_r0x08009bf4;
        }
        iVar10 = -5;
    }
code_r0x08009c28:
    if (-1 < iVar10) {
        arg1_00[puVar25 * 0x37f + 0x45b] = iVar31;
        uVar32 = *puVar35;
        *(arg1_00 + puVar25 * 0x37f + 0x466) = 0;
        *(arg1_00 + puVar25 * 0x37f + 0xe9) = 0;
        arg1_00[puVar25 * 0x37f + 0x459] = uVar32;
        *(arg1_00 + puVar25 * 0x1bf8 + 0x232c) = *(puVar35 + 8);
        if (8 < puVar25) goto code_r0x0800a08c;
        cVar2 = *(arg1_00 + 8);
        *(arg1_00 + puVar25 * 0x37f + 0xee) = 0;
        *(arg1_00 + puVar25 * 0x37f + 0xf2) = 0;
        if ((cVar2 == '\0') || (piVar33 == NULL)) {
code_r0x08009cbc:
            iVar10 = sym._qce_sps_add_sg_data
                               (arg1_00,*(iVar31 + 0x38),*(iVar31 + 0x30),arg1_00 + puVar25 * 0x37f + 0xec);
            if (iVar10 != 0) goto code_r0x08009ce0;
            if (*(iVar31 + 0x30) == 0) {
                uVar15 = *(arg1_00 + 0x2e);
                puVar22 = arg1_00 + puVar25 * 0x37f + 0xee;
                uVar9 = *puVar22;
                uVar27 = uVar9;
                if (uVar15 != 0) {
                    iVar31 = (arg1_00[3] + *(arg1_00 + puVar25 * 0x37f + 0x456)) - arg1_00[2];
                    puVar24 = arg1_00[puVar25 * 0x37f + 0xed] + uVar27 * 8;
                    do {
                        if (uVar27 == 0x200) goto code_r0x08009fac;
                        uVar9 = uVar15;
                        if (0x1fe < uVar15 >> 6) {
                            uVar9 = 0x7fc0;
                        }
                        uVar15 = uVar15 - uVar9;
                        *puVar24 = iVar31;
                        puVar24[1] = iVar31 >> 0x10 & 0xf0000 | uVar9;
                        iVar31 = iVar31 + uVar9;
                        uVar9 = *puVar22 + 1;
                        uVar27 = uVar9;
                        *puVar22 = uVar9;
                        puVar24 = puVar24 + 2;
                    } while (uVar15 != 0);
                }
            }
            else {
                uVar9 = *(arg1_00 + puVar25 * 0x37f + 0xee);
            }
            if (uVar9 != 0) {
                iVar31 = arg1_00[puVar25 * 0x37f + 0xed] + (uVar9 - 1) * 8;
                *(iVar31 + 4) = *(iVar31 + 4) | 0x50000000;
            }
            if (*(arg1_00 + 0xf) != '\0') {
                uVar3 = *(arg1_00 + puVar25 * 0x37f + 0x453);
                iVar31 = (arg1_00[puVar25 * 0x37f + 0x439] - arg1_00[2]) + arg1_00[3];
                puVar22 = arg1_00 + puVar25 * 0x37f + 0xee;
                puVar24 = arg1_00[puVar25 * 0x37f + 0xed] + *puVar22 * 8;
                *puVar24 = iVar31;
                puVar24[1] = uVar3 | iVar31 >> 0x10 & 0xf0000 | 0xa000000;
                uVar9 = *puVar22 + 1;
                *puVar22 = uVar9;
                if (0x1ff < uVar9) goto code_r0x08009f98;
            }
            puVar22 = arg1_00 + puVar25 * 0x37f + 0xf2;
            if (*puVar22 != 0x200) {
                puVar24 = arg1_00[puVar25 * 0x37f + 0xf1] + *puVar22 * 8;
                iVar31 = (arg1_00[3] + *(arg1_00 + puVar25 * 0x37f + 0x454)) - arg1_00[2];
                *puVar24 = iVar31;
                puVar24[1] = iVar31 >> 0x10 & 0xf0000 | 0x80;
                uVar15 = *puVar22;
                uVar9 = uVar15 + 1;
                *puVar22 = uVar9;
                if (puVar12 != NULL) {
                    sym.select_mode(arg1_00,arg1_00 + puVar25 * 0x37f + 0xe8);
                    iVar10 = sym._qce_sps_transfer(arg1_00,puVar25);
                    goto code_r0x0800a098;
                }
                if (uVar9 != 0) {
                    iVar31 = arg1_00[puVar25 * 0x37f + 0xf1] + uVar15 * 8;
                    *(iVar31 + 4) = *(iVar31 + 4) | 0x80000000;
                }
                iVar10 = sym._qce_sps_transfer(arg1_00,puVar25);
                goto joined_r0x08009f74;
            }
code_r0x08009fac:
            pcVar13 = "_qce_sps_add_data";
            uVar9 = 0x200;
        }
        else {
            uVar3 = *(piVar33 + 0x1a);
            iVar11 = (*piVar33 - arg1_00[2]) + arg1_00[3];
            puVar24 = arg1_00[puVar25 * 0x37f + 0xed];
            *puVar24 = iVar11;
            puVar24[1] = uVar3 | iVar11 >> 0x10 & 0xf0000 | 0xc000000;
            uVar9 = *(arg1_00 + puVar25 * 0x37f + 0xee) + 1;
            *(arg1_00 + puVar25 * 0x37f + 0xee) = uVar9;
            if (uVar9 < 0x200) goto code_r0x08009cbc;
code_r0x08009f98:
            pcVar13 = "_qce_sps_add_cmd";
        }
        _printk(0x8001aeb,pcVar13,uVar9,0x200);
        iVar10 = -0xc;
    }
code_r0x08009ce0:
    while( true ) {
        iVar19 = *unaff_x26;
        if ((iVar19 != 0) && (0 < iVar19)) {
            uVar28 = *arg1_00;
            uVar32 = puVar35[3];
            do {
                dma_unmap_sg_attrs(uVar28,uVar32,1,1,0);
                uVar32 = sg_next(uVar32);
                iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
        }
        if (8 < puVar25) break;
        piVar1 = arg1_00 + puVar25 * 0x37f + 0xe8;
        *(arg1_00 + puVar25 * 0x37f + 0xe9) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar19 = *piVar1;
            cVar2 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar19 == 0) {
code_r0x08009f7c:
            _printk(0x800191f,"qce_free_req_info",puVar25);
        }
code_r0x08009d5c:
        do {
            iVar31 = sp_el0;
            if (*(iVar31 + 0x5e0) == iStack_158) {
                return iVar10;
            }
            __stack_chk_fail();
code_r0x0800a098:
            Hint_Prefetch(piVar16,2,0,1);
            do {
                if (*piVar16 != 1) goto joined_r0x08009f74;
                cVar2 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar16,0x10);
                if (bVar5) {
                    *piVar16 = 0;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
joined_r0x08009f74:
        } while (iVar10 == 0);
    }
code_r0x0800a08c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x800a090);
    (*pcVar7)();
}


// ===== sym.qce_process_sha_req @ 0x08008e98 (size 4696) =====

int sym.qce_process_sha_req(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    code *pcVar9;
    bool bVar10;
    uint32_t uVar11;
    int iVar12;
    int64_t iVar13;
    char *pcVar14;
    int64_t *piVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    int iVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iVar21;
    uint32_t uVar22;
    uint8_t *puVar23;
    uint *puVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong *in_x18;
    uint64_t unaff_x20;
    uint32_t uVar27;
    ulong uVar28;
    int64_t iVar29;
    ulong uVar30;
    int *unaff_x26;
    ulong *unaff_x28;
    ulong unaff_x30;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    piVar1 = arg1 + 0x102fc;
    if (arg2 == 0) {
        unaff_x20 = 8;
        unaff_x28 = arg1 + 0x10380;
        *(arg1 + 0x103d4) = 8;
    }
    else {
        uVar11 = sym.qce_alloc_req_info(arg1);
        if (uVar11 < 0) {
            iVar12 = -0x10;
            goto code_r0x08009d5c;
        }
        unaff_x20 = uVar11;
        *(arg2 + 0x54) = uVar11;
        unaff_x28 = arg2;
        if (9 < uVar11) goto code_r0x0800a08c;
    }
    iVar12 = *(unaff_x28 + 8);
    iVar29 = unaff_x28[9];
    iVar16 = arg1 + 0x740;
    if (iVar12 < 1) {
        iVar13 = iVar16 + unaff_x20 * 0x1bf8;
        unaff_x26 = iVar13 + 0x1bb0;
        *(iVar13 + 0x1bb0) = 0;
        cVar3 = *(arg1 + 0x40);
joined_r0x08009008:
        if (cVar3 != '\0') goto code_r0x0800900c;
code_r0x08009058:
        uVar11 = *(unaff_x28 + 7);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a100);
        uVar22 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1 + 0x134) << 5;
        uVar27 = uVar22 | 0xe;
        *(arg1 + 0x8c) = uVar27;
        *(arg1 + 0x90) = uVar22 | 0x20e;
        sym.writel_relaxed(uVar27,*(arg1 + 0x48) + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        iVar12 = *(unaff_x28 + 1);
        if (iVar12 == 4) {
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a300);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a200);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a204);
            iVar13 = 0;
            do {
                sym.writel_relaxed(0,*(arg1 + 0x48) + iVar13 + 0x1a310);
                sym.writel_relaxed(0,*(arg1 + 0x48) + iVar13 + 0x1d040);
                iVar13 = iVar13 + 4;
            } while (iVar13 != 0x40);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a390);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a394);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a398);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a39c);
            iVar13 = 0xd4;
            if (*(unaff_x28 + 7) != 0x10) {
                iVar13 = 0xd8;
            }
            uVar27 = *(arg1 + iVar13);
            iVar12 = *(unaff_x28 + 1);
        }
        else {
            uVar27 = 0;
        }
        if (iVar12 - 2U < 3) {
            uVar22 = *(unaff_x28 + 7);
            puVar17 = &uStack_c8;
            puVar23 = unaff_x28[6];
            if (uVar22 < 4) {
                uVar19 = 0;
            }
            else {
                uVar25 = uVar22 >> 2;
                uVar19 = 0;
                do {
                    uVar20 = uVar19;
                    if (0x3f < uVar20) goto code_r0x0800a088;
                    uVar25 = uVar25 - 1;
                    uVar26 = (*(puVar23 + uVar20) & 0xff00ff00) >> 8 | (*(puVar23 + uVar20) & 0xff00ff) << 8;
                    *(puVar17 + uVar20) = uVar26 >> 0x10 | uVar26 << 0x10;
                    uVar19 = uVar20 + 4;
                } while (uVar25 != 0);
                puVar23 = puVar23 + uVar19;
                puVar17 = &uStack_c8 + uVar20 + 4;
            }
            uVar22 = uVar22 & 3;
            if (uVar22 == 1) {
                uVar22 = *puVar23 << 0x18;
code_r0x08009468:
                if (0x3c < uVar19) goto code_r0x0800a088;
                *puVar17 = uVar22;
            }
            else {
                if (uVar22 == 2) {
                    uVar22 = *puVar23 << 0x18 | puVar23[1] << 0x10;
                    goto code_r0x08009468;
                }
                if (uVar22 == 3) {
                    uVar22 = *puVar23 << 0x18 | puVar23[1] << 0x10 | puVar23[2] << 8;
                    goto code_r0x08009468;
                }
            }
            if ((*(unaff_x28 + 10) & 1) == 0) {
                if ((*(unaff_x28 + 10) >> 1 & 1) == 0) {
                    if (uVar11 < 4) {
                        bVar7 = false;
                        goto joined_r0x080094b0;
                    }
                    uVar11 = uVar11 >> 2;
                    if (uVar11 < 2) {
                        uVar11 = 1;
                    }
                    iVar13 = 0;
                    do {
                        if (iVar13 == 0x40) goto code_r0x0800a08c;
                        sym.writel_relaxed(*(&uStack_c8 + iVar13),*(arg1 + 0x48) + iVar13 + 0x1d040);
                        iVar13 = iVar13 + 4;
                    } while (uVar11 * 4 - iVar13 != 0);
                    bVar10 = false;
                    iVar12 = *(unaff_x28 + 1);
                }
                else {
                    bVar10 = true;
                }
                bVar7 = false;
            }
            else {
                bVar7 = true;
joined_r0x080094b0:
                bVar10 = false;
            }
            if (iVar12 != 4) goto code_r0x0800922c;
code_r0x08009764:
            sym.writel_relaxed(uVar27,*(arg1 + 0x48) + 0x1a300);
            sym.writel_relaxed(*(unaff_x28 + 8),*(arg1 + 0x48) + 0x1a304);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a308);
            sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a200);
            sym.writel_relaxed(*(unaff_x28 + 8),*(arg1 + 0x48) + 0x1a110);
            sym.writel_relaxed(*(arg1 + 0x90),*(arg1 + 0x48) + 0x1a400);
            iVar13 = 0x1b000;
            if (!bVar7) {
                iVar13 = 0x1a120;
            }
            uVar11 = 5;
            if (!bVar7) {
                uVar11 = 7;
            }
            sym.writel_relaxed(uVar11,*(arg1 + 0x48) + iVar13);
            DataSynchronizationBarrier(3,3,0);
            iVar12 = 0;
        }
        else {
            bVar10 = false;
            bVar7 = false;
code_r0x0800922c:
            if ((*(unaff_x28 + 0x3d) != '\0') || ((*(unaff_x28 + 8) & 0x3f) == 0)) {
                bVar8 = true;
                iVar13 = 0xdc;
    //switch table (4 cases) at 0x8000a7c
                switch(iVar12) {
                case 0:
                    break;
                case 1:
                    bVar8 = false;
                    iVar13 = 0xe0;
                    break;
                case 2:
                    bVar8 = true;
                    iVar13 = 0xe4;
                    break;
                case 3:
                    bVar8 = false;
                    iVar13 = 0xe8;
                    break;
                default:
                    iVar12 = -0x16;
                    goto code_r0x08009814;
                }
                if (*(unaff_x28 + 0x3c) == '\0') {
                    puVar17 = unaff_x28[2];
                    uVar11 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                    uVar26 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uVar11 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
                    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uStack_88 = CONCAT44(uVar11,uVar26);
                    uVar27 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
                    uVar22 = uVar27 >> 0x10 | uVar27 << 0x10;
                    uVar27 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
                    uVar25 = uVar27 >> 0x10 | uVar27 << 0x10;
                    uStack_80 = CONCAT44(uVar25,uVar22);
                    uVar27 = (puVar17[4] & 0xff00ff00) >> 8 | (puVar17[4] & 0xff00ff) << 8;
                    uVar27 = uVar27 >> 0x10 | uVar27 << 0x10;
                    if (!bVar8) {
                        uVar5 = (puVar17[5] & 0xff00ff00) >> 8 | (puVar17[5] & 0xff00ff) << 8;
                        uStack_78._4_4_ = uVar5 >> 0x10 | uVar5 << 0x10;
                        uVar5 = (puVar17[6] & 0xff00ff00) >> 8 | (puVar17[6] & 0xff00ff) << 8;
                        uVar6 = (puVar17[7] & 0xff00ff00) >> 8 | (puVar17[7] & 0xff00ff) << 8;
                        uStack_70 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
                    }
                    uStack_78 = CONCAT44(uStack_78._4_4_,uVar27);
                    uVar19 = uVar26;
                }
                else if (bVar8) {
                    uVar11 = 0xefcdab89;
                    uVar27 = 0xc3d2e1f0;
                    uVar22 = 0x98badcfe;
                    uVar19 = 0x67452301;
                    uVar25 = 0x10325476;
                    uStack_88 = _obj._std_init_vector_sha1;
                    uStack_80 = *0x80023ac;
                    uStack_78 = CONCAT44(uStack_78._4_4_,*0x80023b4);
                }
                else {
                    uVar11 = 0xbb67ae85;
                    uVar25 = 0xa54ff53a;
                    uVar19 = 0x6a09e667;
                    uVar27 = 0x510e527f;
                    uVar22 = 0x3c6ef372;
                    uStack_88 = _obj._std_init_vector_sha256;
                    uStack_80 = *0x80023c0;
                    uStack_78 = *0x80023c8;
                    uStack_70 = *0x80023d0;
                }
                uVar26 = *(arg1 + iVar13);
                sym.writel_relaxed(uVar19,*(arg1 + 0x48) + 0x1a310);
                sym.writel_relaxed(uVar11,*(arg1 + 0x48) + 0x1a314);
                sym.writel_relaxed(uVar22,*(arg1 + 0x48) + 0x1a318);
                sym.writel_relaxed(uVar25,*(arg1 + 0x48) + 0x1a31c);
                sym.writel_relaxed(uVar27,*(arg1 + 0x48) + 0x1a320);
                if ((*(unaff_x28 + 1) | 2) == 3) {
                    sym.writel_relaxed(uStack_78 >> 0x20,*(arg1 + 0x48) + 0x1a324);
                    sym.writel_relaxed(uStack_70 & 0xffffffff,*(arg1 + 0x48) + 0x1a328);
                    sym.writel_relaxed(uStack_70 >> 0x20,*(arg1 + 0x48) + 0x1a32c);
                }
                sym.writel_relaxed(*(unaff_x28 + 4),*(arg1 + 0x48) + 0x1a390);
                sym.writel_relaxed(*(unaff_x28 + 0x24),*(arg1 + 0x48) + 0x1a394);
                uVar27 = uVar26 & 0xfffcffff | *(unaff_x28 + 0x3d) << 0x10 | *(unaff_x28 + 0x3c) << 0x11;
                uVar11 = uVar27 | 0x40000;
                if (!bVar7) {
                    uVar11 = uVar27;
                }
                uVar27 = uVar11 | 0x80000;
                if (!bVar10) {
                    uVar27 = uVar11;
                }
                goto code_r0x08009764;
            }
            iVar12 = -5;
        }
code_r0x08009814:
        piVar15 = NULL;
        goto code_r0x08009c28;
    }
    iVar13 = unaff_x28[3];
    uVar11 = 0;
    do {
        uVar27 = uVar11;
        uVar11 = uVar27 + 1;
        iVar12 = iVar12 - *(iVar13 + 0xc);
        iVar13 = sg_next();
    } while (0 < iVar12);
    iVar13 = iVar16 + unaff_x20 * 0x1bf8;
    unaff_x26 = iVar13 + 0x1bb0;
    *(iVar13 + 0x1bb0) = uVar11;
    if (0x7ffffffe < uVar27) {
        cVar3 = *(arg1 + 0x40);
        goto joined_r0x08009008;
    }
    uVar28 = *arg1;
    uVar30 = unaff_x28[3];
    do {
        dma_map_sg_attrs(uVar28,uVar30,1,1,0);
        uVar30 = sg_next(uVar30);
        uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (*(arg1 + 0x40) == '\0') goto code_r0x08009058;
code_r0x0800900c:
    if (8 < unaff_x20) goto code_r0x0800a08c;
    //switch table (4 cases) at 0x8000a58
    switch(*(unaff_x28 + 1)) {
    case 0:
        iVar13 = 0x1010;
        break;
    case 1:
        iVar13 = 0x10e8;
        break;
    case 2:
        iVar13 = 0x11c0;
        break;
    case 3:
        iVar13 = 0x1298;
        break;
    case 4:
        if (*(unaff_x28 + 7) == 0x10) {
            iVar13 = 0x1370;
        }
        else {
            iVar13 = 0x1448;
        }
        break;
    default:
        goto code_r0x080094cc;
    }
    piVar15 = arg1 + unaff_x20 * 0x1bf8 + iVar13;
    if (piVar15 == NULL) {
code_r0x080094cc:
        _printk(0x8001463,"qce_process_sha_req");
        iVar12 = -0x16;
        iVar16 = arg1 + unaff_x20 * 0x1bf8;
        piVar2 = iVar16 + 0x740;
        *(iVar16 + 0x748) = 5;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar18 = *piVar2;
            cVar3 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar18 != 0) goto code_r0x08009d5c;
        goto code_r0x08009f7c;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar11 = *(unaff_x28 + 7);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar22 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1 + 0x134) << 5;
    uVar27 = uVar22 | 0xe;
    *(arg1 + 0x8c) = uVar27;
    *(arg1 + 0x90) = uVar22 | 0x20e;
    *(piVar15[1] + 4) = uVar27;
    *(piVar15[2] + 4) = *(arg1 + 0x90);
    iVar12 = *(unaff_x28 + 1);
    if (iVar12 - 2U < 3) {
        puVar17 = piVar15[0x19];
        uVar27 = *(unaff_x28 + 10) & 3;
        bVar10 = uVar27 == 2;
        if ((*(unaff_x28 + 10) & 1) == 0) {
            *puVar17 = *(arg1 + 0x50) + 0x1a120U & 0xffffff | *(puVar17 + 3) << 0x18;
            if (uVar27 == 2) {
                bVar7 = false;
                bVar10 = true;
            }
            else {
                uVar27 = *(unaff_x28 + 7);
                puVar17 = &uStack_c8;
                iVar13 = piVar15[0x14];
                puVar23 = unaff_x28[6];
                if (uVar27 < 4) {
                    uVar19 = 0;
                }
                else {
                    uVar22 = uVar27 >> 2;
                    uVar19 = 0;
                    do {
                        uVar20 = uVar19;
                        if (0x3f < uVar20) goto code_r0x0800a088;
                        uVar22 = uVar22 - 1;
                        uVar25 = (*(puVar23 + uVar20) & 0xff00ff00) >> 8 | (*(puVar23 + uVar20) & 0xff00ff) << 8;
                        *(puVar17 + uVar20) = uVar25 >> 0x10 | uVar25 << 0x10;
                        uVar19 = uVar20 + 4;
                    } while (uVar22 != 0);
                    puVar23 = puVar23 + uVar19;
                    puVar17 = &uStack_c8 + uVar20 + 4;
                }
                uVar27 = uVar27 & 3;
                if (uVar27 == 1) {
                    uVar27 = *puVar23 << 0x18;
code_r0x0800993c:
                    if (0x3c < uVar19) {
code_r0x0800a088:
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(1,0x800a08c);
                        (*pcVar9)();
                    }
                    *puVar17 = uVar27;
                }
                else {
                    if (uVar27 == 2) {
                        uVar27 = *puVar23 << 0x18 | puVar23[1] << 0x10;
                        goto code_r0x0800993c;
                    }
                    if (uVar27 == 3) {
                        uVar27 = *puVar23 << 0x18 | puVar23[1] << 0x10 | puVar23[2] << 8;
                        goto code_r0x0800993c;
                    }
                }
                if (3 < uVar11) {
                    uVar27 = uVar11 >> 2;
                    if (uVar27 < 2) {
                        uVar27 = 1;
                    }
                    *(iVar13 + 4) = uStack_c8;
                    if (7 < uVar11) {
                        *(iVar13 + 0x14) = uStack_c8._4_4_;
                        if (uVar27 != 2) {
                            *(iVar13 + 0x24) = uStack_c0;
                            if (uVar27 != 3) {
                                *(iVar13 + 0x34) = uStack_c0._4_4_;
                                if (uVar27 != 4) {
                                    *(iVar13 + 0x44) = uStack_b8;
                                    if (uVar27 != 5) {
                                        *(iVar13 + 0x54) = uStack_b8._4_4_;
                                        if (uVar27 != 6) {
                                            *(iVar13 + 100) = uStack_b0;
                                            if (uVar27 != 7) {
                                                *(iVar13 + 0x74) = uStack_b0._4_4_;
                                                if (uVar27 != 8) {
                                                    *(iVar13 + 0x84) = uStack_a8;
                                                    if (uVar27 == 9) {
                                                        bVar7 = false;
                                                        bVar10 = false;
                                                    }
                                                    else {
                                                        *(iVar13 + 0x94) = uStack_a8._4_4_;
                                                        if (uVar27 != 10) {
                                                            *(iVar13 + 0xa4) = uStack_a0;
                                                            if (uVar27 != 0xb) {
                                                                *(iVar13 + 0xb4) = uStack_a0._4_4_;
                                                                if (uVar27 != 0xc) {
                                                                    *(iVar13 + 0xc4) = uStack_98;
                                                                    if (uVar27 != 0xd) {
                                                                        *(iVar13 + 0xd4) = uStack_98._4_4_;
                                                                        if (uVar27 != 0xe) {
                                                                            *(iVar13 + 0xe4) = uStack_90;
                                                                            if (uVar27 != 0xf) {
                                                                                *(iVar13 + 0xf4) = uStack_90._4_4_;
                                                                                if (uVar27 != 0x10)
                                                                                goto code_r0x0800a08c;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        bVar7 = false;
                                                        bVar10 = false;
                                                    }
                                                    goto code_r0x080099e4;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                bVar7 = false;
                bVar10 = false;
            }
        }
        else {
            bVar7 = true;
            *puVar17 = *(arg1 + 0x50) + 0x1b000U & 0xffffff | *(puVar17 + 3) << 0x18;
        }
code_r0x080099e4:
        iVar12 = *(unaff_x28 + 1);
        if (iVar12 != 4) goto code_r0x080099f0;
code_r0x08009bf4:
        *(piVar15[0x12] + 4) = *(unaff_x28 + 8);
        *(piVar15[3] + 4) = 0;
        *(piVar15[0x13] + 4) = 0;
        iVar18 = *(unaff_x28 + 8);
        if (iVar18 == 0) {
            iVar18 = *(arg1 + 0x170);
        }
        iVar12 = 0;
        *(piVar15[0x18] + 4) = iVar18;
    }
    else {
        bVar10 = false;
        bVar7 = false;
code_r0x080099f0:
        if ((*(unaff_x28 + 0x3d) != '\0') || ((*(unaff_x28 + 8) & 0x3f) == 0)) {
            uStack_78._4_4_ = 0;
    //switch table (3 cases) at 0x8000a6c
            switch(iVar12) {
            case 0:
            case 2:
                if (*(unaff_x28 + 0x3c) == '\0') {
                    bVar8 = true;
code_r0x08009ae4:
                    puVar17 = unaff_x28[2];
                    uVar11 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                    uVar22 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uVar11 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
                    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                    uStack_88 = CONCAT44(uVar11,uVar22);
                    uVar27 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
                    uVar26 = uVar27 >> 0x10 | uVar27 << 0x10;
                    uVar27 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
                    uVar27 = uVar27 >> 0x10 | uVar27 << 0x10;
                    uStack_80 = CONCAT44(uVar27,uVar26);
                    uVar25 = (puVar17[4] & 0xff00ff00) >> 8 | (puVar17[4] & 0xff00ff) << 8;
                    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                    if (!bVar8) {
                        uVar5 = (puVar17[5] & 0xff00ff00) >> 8 | (puVar17[5] & 0xff00ff) << 8;
                        uStack_78._4_4_ = uVar5 >> 0x10 | uVar5 << 0x10;
                        uVar5 = (puVar17[6] & 0xff00ff00) >> 8 | (puVar17[6] & 0xff00ff) << 8;
                        uVar6 = (puVar17[7] & 0xff00ff00) >> 8 | (puVar17[7] & 0xff00ff) << 8;
                        uStack_70 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
                    }
                    uStack_78 = CONCAT44(uStack_78._4_4_,uVar25);
                }
                else {
                    uVar11 = 0xefcdab89;
                    uVar25 = 0xc3d2e1f0;
                    uVar26 = 0x98badcfe;
                    uVar22 = 0x67452301;
                    uVar27 = 0x10325476;
                    uStack_88 = _obj._std_init_vector_sha1;
                    uStack_80 = *0x80023ac;
                    uStack_78 = *0x80023b4;
                }
                break;
            case 1:
            case 3:
                if (*(unaff_x28 + 0x3c) == '\0') {
                    bVar8 = false;
                    goto code_r0x08009ae4;
                }
                uVar11 = 0xbb67ae85;
                uVar27 = 0xa54ff53a;
                uVar22 = 0x6a09e667;
                uVar25 = 0x510e527f;
                uVar26 = 0x3c6ef372;
                uStack_88 = _obj._std_init_vector_sha256;
                uStack_80 = *0x80023c0;
                uStack_78 = *0x80023c8;
                uStack_70 = *0x80023d0;
                break;
            default:
                iVar12 = -0x16;
                goto code_r0x08009c28;
            }
            iVar13 = piVar15[0x15];
            *(iVar13 + 4) = uVar22;
            *(iVar13 + 0x14) = uVar11;
            *(iVar13 + 0x24) = uVar26;
            *(iVar13 + 0x34) = uVar27;
            *(iVar13 + 0x44) = uVar25;
            if ((*(unaff_x28 + 1) | 2) == 3) {
                *(iVar13 + 0x54) = uStack_78._4_4_;
                *(iVar13 + 100) = uStack_70;
                *(iVar13 + 0x74) = uStack_70._4_4_;
            }
            iVar13 = piVar15[0x17];
            *(iVar13 + 4) = *(unaff_x28 + 4);
            *(iVar13 + 0x14) = *(unaff_x28 + 0x24);
            uVar11 = *(piVar15[0x11] + 4) & 0xfff0ffff;
            if (*(unaff_x28 + 0x3d) != '\0') {
                uVar11 = uVar11 | 0x10000;
            }
            if (*(unaff_x28 + 0x3c) != '\0') {
                uVar11 = uVar11 | 0x20000;
            }
            uVar27 = uVar11 | 0x40000;
            if (!bVar7) {
                uVar27 = uVar11;
            }
            uVar11 = uVar27 | 0x80000;
            if (!bVar10) {
                uVar11 = uVar27;
            }
            *(piVar15[0x11] + 4) = uVar11;
            goto code_r0x08009bf4;
        }
        iVar12 = -5;
    }
code_r0x08009c28:
    if (-1 < iVar12) {
        iVar13 = iVar16 + unaff_x20 * 0x1bf8;
        *(iVar13 + 0x1b98) = iVar29;
        uVar30 = *unaff_x28;
        *(iVar13 + 0x1bf0) = 0;
        *(iVar13 + 8) = 0;
        *(iVar13 + 0x1b88) = uVar30;
        *(iVar13 + 0x1bec) = *(unaff_x28 + 8);
        if (8 < unaff_x20) goto code_r0x0800a08c;
        cVar3 = *(arg1 + 0x40);
        iVar13 = arg1 + unaff_x20 * 0x1bf8;
        *(iVar13 + 0x770) = 0;
        *(iVar13 + 0x790) = 0;
        if ((cVar3 == '\0') || (piVar15 == NULL)) {
code_r0x08009cbc:
            iVar12 = sym._qce_sps_add_sg_data
                               (arg1,*(iVar29 + 0x38),*(iVar29 + 0x30),iVar16 + unaff_x20 * 0x1bf8 + 0x20);
            if (iVar12 != 0) goto code_r0x08009ce0;
            if (*(iVar29 + 0x30) == 0) {
                uVar27 = *(arg1 + 0x170);
                puVar17 = iVar16 + unaff_x20 * 0x1bf8 + 0x30;
                uVar11 = *puVar17;
                uVar19 = uVar11;
                if (uVar27 != 0) {
                    iVar13 = iVar16 + unaff_x20 * 0x1bf8;
                    iVar29 = (*(arg1 + 0x18) + *(iVar13 + 0x1b70)) - *(arg1 + 0x10);
                    puVar24 = *(iVar13 + 0x28) + uVar19 * 8;
                    do {
                        if (uVar19 == 0x200) goto code_r0x08009fac;
                        uVar11 = uVar27;
                        if (0x1fe < uVar27 >> 6) {
                            uVar11 = 0x7fc0;
                        }
                        uVar27 = uVar27 - uVar11;
                        *puVar24 = iVar29;
                        puVar24[1] = iVar29 >> 0x10 & 0xf0000 | uVar11;
                        iVar29 = iVar29 + uVar11;
                        uVar11 = *puVar17 + 1;
                        uVar19 = uVar11;
                        *puVar17 = uVar11;
                        puVar24 = puVar24 + 2;
                    } while (uVar27 != 0);
                }
            }
            else {
                uVar11 = *(iVar16 + unaff_x20 * 0x1bf8 + 0x30);
            }
            if (uVar11 != 0) {
                iVar29 = *(iVar16 + unaff_x20 * 0x1bf8 + 0x28) + (uVar11 - 1) * 8;
                *(iVar29 + 4) = *(iVar29 + 4) | 0x50000000;
            }
            if (*(arg1 + 0x78) != '\0') {
                iVar13 = iVar16 + unaff_x20 * 0x1bf8;
                uVar4 = *(iVar13 + 7000);
                iVar29 = (*(iVar13 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
                puVar17 = iVar16 + unaff_x20 * 0x1bf8 + 0x30;
                puVar24 = *(iVar13 + 0x28) + *puVar17 * 8;
                *puVar24 = iVar29;
                puVar24[1] = uVar4 | iVar29 >> 0x10 & 0xf0000 | 0xa000000;
                uVar11 = *puVar17 + 1;
                *puVar17 = uVar11;
                if (0x1ff < uVar11) goto code_r0x08009f98;
            }
            iVar29 = iVar16 + unaff_x20 * 0x1bf8;
            puVar17 = iVar29 + 0x50;
            if (*puVar17 != 0x200) {
                puVar24 = *(iVar29 + 0x48) + *puVar17 * 8;
                iVar13 = (*(arg1 + 0x18) + *(iVar29 + 0x1b60)) - *(arg1 + 0x10);
                *puVar24 = iVar13;
                puVar24[1] = iVar13 >> 0x10 & 0xf0000 | 0x80;
                uVar27 = *puVar17;
                uVar11 = uVar27 + 1;
                *puVar17 = uVar11;
                if (arg2 != 0) {
                    sym.select_mode(arg1,iVar16 + unaff_x20 * 0x1bf8);
                    iVar12 = sym._qce_sps_transfer(arg1,unaff_x20);
                    goto code_r0x0800a098;
                }
                if (uVar11 != 0) {
                    iVar16 = *(iVar29 + 0x48) + uVar27 * 8;
                    *(iVar16 + 4) = *(iVar16 + 4) | 0x80000000;
                }
                iVar12 = sym._qce_sps_transfer(arg1,unaff_x20);
                goto joined_r0x08009f74;
            }
code_r0x08009fac:
            pcVar14 = "_qce_sps_add_data";
            uVar11 = 0x200;
        }
        else {
            uVar4 = *(piVar15 + 0x1a);
            iVar21 = iVar16 + unaff_x20 * 0x1bf8;
            iVar13 = (*piVar15 - *(arg1 + 0x10)) + *(arg1 + 0x18);
            puVar24 = *(iVar21 + 0x28);
            *puVar24 = iVar13;
            puVar24[1] = uVar4 | iVar13 >> 0x10 & 0xf0000 | 0xc000000;
            uVar11 = *(iVar21 + 0x30) + 1;
            *(iVar21 + 0x30) = uVar11;
            if (uVar11 < 0x200) goto code_r0x08009cbc;
code_r0x08009f98:
            pcVar14 = "_qce_sps_add_cmd";
        }
        _printk(0x8001aeb,pcVar14,uVar11,0x200);
        iVar12 = -0xc;
    }
code_r0x08009ce0:
    while( true ) {
        iVar18 = *unaff_x26;
        if ((iVar18 != 0) && (0 < iVar18)) {
            uVar28 = *arg1;
            uVar30 = unaff_x28[3];
            do {
                dma_unmap_sg_attrs(uVar28,uVar30,1,1,0);
                uVar30 = sg_next(uVar30);
                iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
        }
        if (8 < unaff_x20) break;
        iVar16 = arg1 + unaff_x20 * 0x1bf8;
        piVar2 = iVar16 + 0x740;
        *(iVar16 + 0x748) = 5;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar18 = *piVar2;
            cVar3 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar18 == 0) {
code_r0x08009f7c:
            _printk(0x800191f,"qce_free_req_info",unaff_x20 & 0xffffffff);
        }
code_r0x08009d5c:
        do {
            iVar16 = sp_el0;
            if (*(iVar16 + 0x5e0) == iStack_68) {
                return iVar12;
            }
            __stack_chk_fail();
code_r0x0800a098:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto joined_r0x08009f74;
                cVar3 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
joined_r0x08009f74:
        } while (iVar12 == 0);
    }
code_r0x0800a08c:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800a090);
    (*pcVar9)();
}


// ===== sym.qce_f8_req @ 0x0800a0f0 (size 1732) =====

int sym.qce_f8_req(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    ushort uVar4;
    uint16_t uVar5;
    int iVar6;
    char cVar7;
    bool bVar8;
    uint32_t uVar9;
    code *pcVar10;
    uint32_t uVar11;
    int iVar12;
    uint64_t uVar13;
    ulong uVar14;
    char *pcVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint32_t *puVar19;
    int64_t iVar20;
    uint64_t uVar21;
    uint *puVar22;
    ulong *in_x18;
    uint64_t arg2_00;
    uint64_t uVar23;
    int64_t *piVar24;
    int64_t iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = sym.qce_alloc_req_info(arg1);
    if (uVar11 < 0) {
        return -0x10;
    }
    arg2_00 = uVar11;
    *(arg2 + 0x34) = uVar11;
    if (9 < uVar11) {
code_r0x0800a740:
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5512,0x800a744);
        (*pcVar10)();
    }
    iVar16 = arg1 + 0x740;
    if (*(arg2 + 0x30) == 1) {
        iVar20 = 0x1800;
    }
    else {
        if (*(arg2 + 0x30) != 0) {
            if (8 < uVar11) goto code_r0x0800a740;
            arg1 = arg1 + arg2_00 * 0x1bf8;
            piVar1 = arg1 + 0x740;
            *(arg1 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar6 = *piVar1;
                cVar7 = '\x01';
                bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                    *piVar1 = 0;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
            DataMemoryBarrier(2,3);
            iVar12 = -0x16;
            goto joined_r0x0800a1c8;
        }
        iVar20 = 0x1728;
    }
    piVar2 = iVar16 + arg2_00 * 0x1bf8 + iVar20;
    uVar23 = *arg2;
    if ((uVar23 == 0) || (0x1e < *(arg2 + 0x18))) {
        if (8 < uVar11) goto code_r0x0800a740;
        arg1 = arg1 + arg2_00 * 0x1bf8;
        piVar1 = arg1 + 0x740;
        *(arg1 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar6 = *piVar1;
            cVar7 = '\x01';
            bVar8 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
                *piVar1 = 0;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        iVar12 = -0x16;
        goto joined_r0x0800a1c8;
    }
    uVar17 = *(arg2 + 8);
    piVar24 = *arg1;
    uVar4 = *(arg2 + 0x10);
    uVar13 = is_vmalloc_addr(uVar23);
    if (((uVar13 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar14 = dev_driver_string(piVar24);
        iVar16 = piVar24[0xe];
        if (iVar16 == 0) {
            iVar16 = *piVar24;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar14,iVar16);
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x800a288);
        (*pcVar10)();
    }
    if ((uVar13 & 1) == 0) {
        uVar23 = dma_map_page_attrs(piVar24,(((uVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar23 & 0xfff,uVar4,uVar23 != uVar17,0);
    }
    else {
        uVar23 = 0xffffffffffffffff;
    }
    iVar20 = iVar16 + arg2_00 * 0x1bf8;
    *(iVar20 + 0x1bd8) = uVar23;
    uVar13 = *(arg2 + 8);
    if (*arg2 == uVar13) {
        uVar13 = 0;
    }
    else {
        piVar24 = *arg1;
        uVar4 = *(arg2 + 0x10);
        uVar23 = is_vmalloc_addr(uVar13);
        if (((uVar23 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar14 = dev_driver_string(piVar24);
            iVar16 = piVar24[0xe];
            if (iVar16 == 0) {
                iVar16 = *piVar24;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar14,iVar16);
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x800,0x800a358);
            (*pcVar10)();
        }
        if ((uVar23 & 1) == 0) {
            uVar13 = dma_map_page_attrs(piVar24,(((uVar13 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                 0x200000000,uVar13 & 0xfff,uVar4,2,0);
            uVar23 = uVar13;
        }
        else {
            uVar13 = 0xffffffffffffffff;
            uVar23 = 0xffffffffffffffff;
        }
    }
    iVar25 = iVar16 + arg2_00 * 0x1bf8;
    *(iVar25 + 0x1be0) = uVar13;
    *(iVar25 + 0x1be8) = *(arg2 + 0x10);
    if (*(arg1 + 0x40) == '\0') {
        sym._ce_f8_setup_direct(arg1,arg2,1,0);
    }
    else {
        sym._ce_f8_setup(arg1,arg2,1,0);
    }
    iVar18 = iVar16 + arg2_00 * 0x1bf8;
    *(iVar18 + 0x1b98) = arg3;
    *(iVar18 + 0x1b88) = arg4;
    *(iVar18 + 0x1bf0) = 0;
    *(iVar18 + 8) = 3;
    *(iVar18 + 0x1bec) = *(arg2 + 0x10);
    if (8 < uVar11) goto code_r0x0800a740;
    cVar7 = *(arg1 + 0x40);
    puVar3 = iVar20 + 0x1bd8;
    iVar20 = arg1 + arg2_00 * 0x1bf8;
    *(iVar20 + 0x770) = 0;
    *(iVar20 + 0x790) = 0;
    if (cVar7 == '\0') {
        uVar13 = 0;
code_r0x0800a470:
        uVar17 = *(arg2 + 0x10);
        puVar19 = iVar16 + arg2_00 * 0x1bf8 + 0x30;
        if (*(arg2 + 0x10) != 0) {
            uVar21 = *puVar3;
            puVar22 = *(iVar16 + arg2_00 * 0x1bf8 + 0x28) + uVar13 * 8;
            do {
                if (uVar13 == 0x200) {
                    pcVar15 = "_qce_sps_add_data";
                    goto code_r0x0800a678;
                }
                uVar11 = uVar17;
                if (0x1fe < uVar17 >> 6) {
                    uVar11 = 0x7fc0;
                }
                uVar9 = uVar17 - uVar11;
                uVar17 = uVar9;
                *puVar22 = uVar21;
                puVar22[1] = uVar21 >> 0x10 & 0xf0000 | uVar11;
                uVar21 = uVar21 + uVar11;
                uVar13 = *puVar19 + 1;
                *puVar19 = *puVar19 + 1;
                puVar22 = puVar22 + 2;
            } while (uVar9 != 0);
        }
        if (uVar13 == 0) {
            uVar13 = 0;
        }
        else {
            iVar20 = *(iVar16 + arg2_00 * 0x1bf8 + 0x28) + (uVar13 - 1) * 8;
            *(iVar20 + 4) = *(iVar20 + 4) | 0x50000000;
            uVar13 = *puVar19;
        }
        iVar18 = iVar16 + arg2_00 * 0x1bf8;
        iVar20 = (*(iVar18 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar5 = *(iVar18 + 7000);
        puVar22 = *(iVar18 + 0x28) + uVar13 * 8;
        *puVar22 = iVar20;
        puVar22[1] = uVar5 | iVar20 >> 0x10 & 0xf0000 | 0xa000000;
        uVar11 = *puVar19 + 1;
        uVar13 = uVar11;
        *puVar19 = uVar11;
        if (0x1ff < uVar11) goto code_r0x0800a63c;
        uVar13 = *(arg2 + 0x10);
        iVar20 = iVar16 + arg2_00 * 0x1bf8;
        puVar19 = iVar20 + 0x50;
        uVar17 = *puVar19;
        if (*(arg2 + 0x10) != 0) {
            uVar23 = uVar23 & 0xffffffff;
            puVar22 = *(iVar16 + arg2_00 * 0x1bf8 + 0x48) + uVar17 * 8;
            do {
                if (uVar17 == 0x200) {
                    pcVar15 = "_qce_sps_add_data";
                    uVar13 = 0x200;
                    goto code_r0x0800a678;
                }
                uVar11 = uVar13;
                if (0x1fe < uVar13 >> 6) {
                    uVar11 = 0x7fc0;
                }
                uVar9 = uVar13 - uVar11;
                uVar13 = uVar9;
                *puVar22 = uVar23;
                puVar22[1] = uVar23 >> 0x10 & 0xf0000 | uVar11;
                uVar23 = uVar23 + uVar11;
                uVar17 = *puVar19 + 1;
                *puVar19 = *puVar19 + 1;
                puVar22 = puVar22 + 2;
            } while (uVar9 != 0);
        }
        iVar12 = sym._qce_sps_add_data
                           ((*(arg1 + 0x18) + *(iVar16 + arg2_00 * 0x1bf8 + 0x1b60)) - *(arg1 + 0x10),0x80,
                            iVar20 + 0x40);
        if (iVar12 == 0) {
            sym.select_mode(arg1,iVar16 + arg2_00 * 0x1bf8);
            iVar12 = sym._qce_sps_transfer(arg1,arg2_00);
            piVar1 = arg1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x0800a750;
                cVar7 = '\x01';
                bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                    *piVar1 = 0;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800a750:
            if (iVar12 == 0) {
                return 0;
            }
        }
    }
    else {
        iVar18 = iVar16 + arg2_00 * 0x1bf8;
        iVar20 = (*piVar2 - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar5 = *(piVar2 + 0x1a);
        puVar22 = *(iVar18 + 0x28);
        *puVar22 = iVar20;
        puVar22[1] = uVar5 | iVar20 >> 0x10 & 0xf0000 | 0xc000000;
        uVar11 = *(iVar18 + 0x30) + 1;
        uVar13 = uVar11;
        *(iVar18 + 0x30) = uVar11;
        if (uVar11 < 0x200) goto code_r0x0800a470;
code_r0x0800a63c:
        pcVar15 = "_qce_sps_add_cmd";
code_r0x0800a678:
        _printk(0x8001aeb,pcVar15,uVar13,0x200);
        iVar12 = -0xc;
    }
    if (*(iVar25 + 0x1be0) != 0) {
        dma_unmap_page_attrs(*arg1,*(iVar25 + 0x1be0),*(arg2 + 0x10),2,0);
    }
    iVar16 = *puVar3;
    if (iVar16 != 0) {
        dma_unmap_page_attrs(*arg1,iVar16,*(arg2 + 0x10),*arg2 != *(arg2 + 8),0);
    }
    arg1 = arg1 + arg2_00 * 0x1bf8;
    piVar1 = arg1 + 0x740;
    *(arg1 + 0x748) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar8 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
            *piVar1 = 0;
            cVar7 = ExclusiveMonitorsStatus();
        }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800a1c8:
    if (iVar6 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2_00);
    }
    return iVar12;
}


// ===== sym._ce_f8_setup @ 0x0800a7b4 (size 272) =====

void sym._ce_f8_setup(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t in_w4;
    int64_t in_x5;
    int64_t iVar7;
    
    iVar1 = *(arg2 + 0x30);
    uVar3 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1 + 0x134) << 5;
    uVar2 = uVar3 | 0xe;
    *(arg1 + 0x8c) = uVar2;
    *(arg1 + 0x90) = uVar3 | 0x20e;
    iVar7 = 0xcc;
    if (iVar1 != 0) {
        iVar7 = 0xd0;
    }
    uVar3 = *(arg1 + iVar7);
    *(*(in_x5 + 8) + 4) = uVar2;
    *(*(in_x5 + 0x10) + 4) = *(arg1 + 0x90);
    uVar2 = (*(arg2 + 0x19) & 0xff00ff00) >> 8 | (*(arg2 + 0x19) & 0xff00ff) << 8;
    iVar7 = *(in_x5 + 0x30);
    uVar4 = (*(arg2 + 0x1d) & 0xff00ff00) >> 8 | (*(arg2 + 0x1d) & 0xff00ff) << 8;
    uVar5 = (*(arg2 + 0x21) & 0xff00ff00) >> 8 | (*(arg2 + 0x21) & 0xff00ff) << 8;
    uVar6 = (*(arg2 + 0x25) & 0xff00ff00) >> 8 | (*(arg2 + 0x25) & 0xff00ff) << 8;
    *(iVar7 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(iVar7 + 0x14) = uVar4 >> 0x10 | uVar4 << 0x10;
    *(iVar7 + 0x24) = uVar5 >> 0x10 | uVar5 << 0x10;
    *(iVar7 + 0x34) = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar2 = uVar3 | 0x10000;
    if (*(arg2 + 0x2c) != 1) {
        uVar2 = uVar3;
    }
    *(*(in_x5 + 0x18) + 4) = uVar2;
    *(*(in_x5 + 0x28) + 4) = arg4 & 0xffff;
    *(*(in_x5 + 0x20) + 4) = in_w4 & 0xffff;
    *(*(in_x5 + 0xc0) + 4) = *(arg2 + 0x10);
    iVar7 = *(in_x5 + 0x40);
    *(iVar7 + 4) = *(arg2 + 0x14);
    uVar2 = 0;
    if ((arg3 & 0xffff) != 1) {
        uVar2 = arg3;
    }
    *(iVar7 + 0x14) = *(arg2 + 0x18) | uVar2 << 0x10;
    **(in_x5 + 200) = *(arg1 + 0x50) + 0x1a120U & 0xffffff | *(*(in_x5 + 200) + 3) << 0x18;
    return;
}


// ===== sym._ce_f8_setup_direct @ 0x0800a8c4 (size 536) =====

void sym._ce_f8_setup_direct(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0xcc;
    if (*(arg2 + 0x30) != 0) {
        iVar1 = 0xd0;
    }
    uVar2 = *(arg1 + iVar1);
    sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a100);
    uVar4 = *(arg1 + 0x170) * 0x4000 - 0x20000U & 0xfffe0000 | *(arg1 + 0x134) << 5;
    uVar3 = uVar4 | 0xe;
    *(arg1 + 0x8c) = uVar3;
    *(arg1 + 0x90) = uVar4 | 0x20e;
    sym.writel_relaxed(uVar3,*(arg1 + 0x48) + 0x1a400);
    sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a300);
    sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a304);
    uVar3 = (*(arg2 + 0x19) & 0xff00ff00) >> 8 | (*(arg2 + 0x19) & 0xff00ff) << 8;
    uVar4 = (*(arg2 + 0x1d) & 0xff00ff00) >> 8 | (*(arg2 + 0x1d) & 0xff00ff) << 8;
    uVar5 = (*(arg2 + 0x21) & 0xff00ff00) >> 8 | (*(arg2 + 0x21) & 0xff00ff) << 8;
    uVar6 = (*(arg2 + 0x25) & 0xff00ff00) >> 8 | (*(arg2 + 0x25) & 0xff00ff) << 8;
    sym.writel_relaxed(uVar3 >> 0x10 | uVar3 << 0x10,*(arg1 + 0x48) + 0x1d000);
    sym.writel_relaxed(uVar4 >> 0x10 | uVar4 << 0x10,*(arg1 + 0x48) + 0x1d004);
    sym.writel_relaxed(uVar5 >> 0x10 | uVar5 << 0x10,*(arg1 + 0x48) + 0x1d008);
    sym.writel_relaxed(uVar6 >> 0x10 | uVar6 << 0x10,*(arg1 + 0x48) + 0x1d00c);
    uVar3 = uVar2 | 0x10000;
    if (*(arg2 + 0x2c) != 1) {
        uVar3 = uVar2;
    }
    sym.writel_relaxed(uVar3,*(arg1 + 0x48) + 0x1a200);
    sym.writel_relaxed(arg4 & 0xffff,*(arg1 + 0x48) + 0x1a208);
    sym.writel_relaxed(in_w4 & 0xffff,*(arg1 + 0x48) + 0x1a204);
    sym.writel_relaxed(*(arg2 + 0x10),*(arg1 + 0x48) + 0x1a110);
    sym.writel_relaxed(*(arg2 + 0x14),*(arg1 + 0x48) + 0x1a20c);
    uVar3 = 0;
    if ((arg3 & 0xffff) != 1) {
        uVar3 = arg3;
    }
    sym.writel_relaxed(*(arg2 + 0x18) | uVar3 << 0x10,*(arg1 + 0x48) + 0x1a210);
    sym.writel_relaxed(*(arg1 + 0x90),*(arg1 + 0x48) + 0x1a400);
    sym.writel_relaxed(7,*(arg1 + 0x48) + 0x1a120);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.qce_f8_multi_pkt_req @ 0x0800aadc (size 1688) =====

int sym.qce_f8_multi_pkt_req(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    uint16_t uVar5;
    int iVar6;
    bool bVar7;
    uint32_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t *piVar19;
    uint *puVar20;
    ulong *in_x18;
    uint64_t arg2_00;
    int64_t iVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    int64_t *piVar24;
    uint64_t uVar25;
    uint64_t uVar26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar26 = *arg2;
    uVar5 = *(arg2 + 2);
    uVar10 = sym.qce_alloc_req_info(arg1);
    if (uVar10 < 0) {
        return -0x10;
    }
    arg2_00 = uVar10;
    *(arg2 + 0x3c) = uVar10;
    if (9 < uVar10) {
code_r0x0800b114:
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5512,0x800b118);
        (*pcVar9)();
    }
    iVar18 = arg1 + 0x740;
    if (*(arg2 + 0x38) == 1) {
        iVar17 = 0x1800;
    }
    else {
        if (*(arg2 + 0x38) != 0) {
            if (8 < uVar10) goto code_r0x0800b114;
            iVar11 = -0x16;
            arg1 = arg1 + arg2_00 * 0x1bf8;
            piVar1 = arg1 + 0x740;
            *(arg1 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar6 = *piVar1;
                cVar4 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x0800b0c8;
        }
        iVar17 = 0x1728;
    }
    piVar19 = iVar18 + arg2_00 * 0x1bf8 + iVar17;
    piVar24 = *arg1;
    uVar22 = *(arg2 + 8);
    uVar23 = *(arg2 + 0x10);
    uVar25 = *(arg2 + 0x18) * uVar26;
    uVar12 = is_vmalloc_addr(uVar22);
    if (((uVar12 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar13 = dev_driver_string(piVar24);
        iVar18 = piVar24[0xe];
        if (iVar18 == 0) {
            iVar18 = *piVar24;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar18);
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x800,0x800ac48);
        (*pcVar9)();
    }
    if ((uVar12 & 1) == 0) {
        uVar22 = dma_map_page_attrs(piVar24,(((uVar22 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar22 & 0xfff,uVar25,uVar22 != uVar23,0);
    }
    else {
        uVar22 = 0xffffffffffffffff;
    }
    iVar17 = iVar18 + arg2_00 * 0x1bf8;
    *(iVar17 + 0x1bd8) = uVar22;
    uVar23 = *(arg2 + 0x10);
    if (*(arg2 + 8) == uVar23) {
        uVar23 = 0;
    }
    else {
        piVar24 = *arg1;
        uVar22 = is_vmalloc_addr(uVar23);
        if (((uVar22 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
            obj.dma_map_single_attrs.__already_done = 0x1;
            uVar13 = dev_driver_string(piVar24);
            iVar18 = piVar24[0xe];
            if (iVar18 == 0) {
                iVar18 = *piVar24;
            }
            __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar13,iVar18);
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x800ad18);
            (*pcVar9)();
        }
        if ((uVar22 & 1) == 0) {
            uVar23 = dma_map_page_attrs(piVar24,(((uVar23 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                 0x200000000,uVar23 & 0xfff,uVar25,2,0);
            uVar22 = uVar23;
        }
        else {
            uVar23 = 0xffffffffffffffff;
            uVar22 = uVar23;
        }
    }
    iVar21 = iVar18 + arg2_00 * 0x1bf8;
    cVar4 = *(arg1 + 0x40);
    *(iVar21 + 0x1be0) = uVar23;
    iVar11 = uVar25;
    *(iVar21 + 0x1be8) = iVar11;
    if (cVar4 == '\0') {
        sym._ce_f8_setup_direct(arg1,arg2 + 8,uVar26,uVar5);
    }
    else {
        sym._ce_f8_setup(arg1,arg2 + 8,uVar26,uVar5);
    }
    iVar15 = iVar18 + arg2_00 * 0x1bf8;
    *(iVar15 + 0x1b98) = arg3;
    *(iVar15 + 0x1bf0) = 0;
    *(iVar15 + 8) = 3;
    *(iVar15 + 0x1b88) = arg4;
    *(iVar15 + 0x1bec) = iVar11;
    if (8 < uVar10) goto code_r0x0800b114;
    cVar4 = *(arg1 + 0x40);
    puVar2 = iVar17 + 0x1bd8;
    iVar17 = arg1 + arg2_00 * 0x1bf8;
    *(iVar17 + 0x770) = 0;
    *(iVar17 + 0x790) = 0;
    if (cVar4 == '\0') {
        puVar16 = iVar18 + arg2_00 * 0x1bf8 + 0x30;
        if (iVar11 == 0) {
code_r0x0800aed0:
            uVar26 = 0;
        }
        else {
            uVar10 = 0;
            uVar26 = *puVar2;
            piVar19 = iVar18 + arg2_00 * 0x1bf8 + 0x28;
            puVar20 = *piVar19;
            uVar23 = uVar25;
            do {
                if (uVar10 == 0x200) goto code_r0x0800b034;
                uVar10 = uVar23;
                if (0x1fe < uVar23 >> 6) {
                    uVar10 = 0x7fc0;
                }
                uVar8 = uVar23 - uVar10;
                uVar23 = uVar8;
                *puVar20 = uVar26;
                puVar20[1] = uVar26 >> 0x10 & 0xf0000 | uVar10;
                uVar3 = *puVar16;
                uVar26 = uVar26 + uVar10;
                uVar10 = uVar3 + 1;
                *puVar16 = uVar10;
                puVar20 = puVar20 + 2;
            } while (uVar8 != 0);
            if (uVar10 == 0) goto code_r0x0800aed0;
            iVar17 = *piVar19 + uVar3 * 8;
            *(iVar17 + 4) = *(iVar17 + 4) | 0x50000000;
            uVar26 = *puVar16;
        }
        iVar15 = iVar18 + arg2_00 * 0x1bf8;
        iVar17 = (*(iVar15 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar5 = *(iVar15 + 7000);
        puVar20 = *(iVar15 + 0x28) + uVar26 * 8;
        *puVar20 = iVar17;
        puVar20[1] = uVar5 | iVar17 >> 0x10 & 0xf0000 | 0xa000000;
        uVar10 = *puVar16 + 1;
        *puVar16 = uVar10;
        if (0x1ff < uVar10) goto code_r0x0800b020;
        puVar16 = iVar18 + arg2_00 * 0x1bf8 + 0x50;
        uVar10 = *puVar16;
        uVar26 = uVar10;
        if (iVar11 != 0) {
            uVar22 = uVar22 & 0xffffffff;
            puVar20 = *(iVar18 + arg2_00 * 0x1bf8 + 0x48) + uVar26 * 8;
            uVar23 = uVar25;
            do {
                if (uVar26 == 0x200) goto code_r0x0800b034;
                uVar10 = uVar23;
                if (0x1fe < uVar23 >> 6) {
                    uVar10 = 0x7fc0;
                }
                uVar3 = uVar23 - uVar10;
                uVar23 = uVar3;
                *puVar20 = uVar22;
                puVar20[1] = uVar22 >> 0x10 & 0xf0000 | uVar10;
                uVar22 = uVar22 + uVar10;
                uVar10 = *puVar16 + 1;
                uVar26 = uVar10;
                *puVar16 = uVar10;
                puVar20 = puVar20 + 2;
            } while (uVar3 != 0);
        }
        if (uVar10 != 0x200) {
            iVar17 = iVar18 + arg2_00 * 0x1bf8;
            iVar15 = (*(arg1 + 0x18) + *(iVar17 + 0x1b60)) - *(arg1 + 0x10);
            puVar20 = *(iVar17 + 0x48) + uVar10 * 8;
            *puVar20 = iVar15;
            puVar20[1] = iVar15 >> 0x10 & 0xf0000 | 0x80;
            *puVar16 = *puVar16 + 1;
            sym.select_mode(arg1,iVar18 + arg2_00 * 0x1bf8);
            iVar11 = sym._qce_sps_transfer(arg1,arg2_00);
            piVar1 = arg1 + 0x102fc;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                if (*piVar1 != 1) goto code_r0x0800b124;
                cVar4 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800b124:
            if (iVar11 == 0) {
                return 0;
            }
            goto code_r0x0800b054;
        }
code_r0x0800b034:
        pcVar14 = "_qce_sps_add_data";
        uVar10 = 0x200;
code_r0x0800b048:
        _printk(0x8001aeb,pcVar14,uVar10,0x200);
        iVar11 = -0xc;
    }
    else {
        iVar18 = iVar18 + arg2_00 * 0x1bf8;
        iVar17 = (*piVar19 - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar5 = *(piVar19 + 0x1a);
        puVar20 = *(iVar18 + 0x28);
        *puVar20 = iVar17;
        puVar20[1] = uVar5 | iVar17 >> 0x10 & 0xf0000 | 0xc000000;
        uVar10 = *(iVar18 + 0x30) + 1;
        *(iVar18 + 0x30) = uVar10;
        if (0x1ff < uVar10) {
code_r0x0800b020:
            pcVar14 = "_qce_sps_add_cmd";
            goto code_r0x0800b048;
        }
        iVar11 = 0;
    }
code_r0x0800b054:
    if (*(iVar21 + 0x1be0) != 0) {
        dma_unmap_page_attrs(*arg1,*(iVar21 + 0x1be0),uVar25,2,0);
    }
    dma_unmap_page_attrs(*arg1,*puVar2,uVar25,*(arg2 + 8) != *(arg2 + 0x10),0);
    arg1 = arg1 + arg2_00 * 0x1bf8;
    piVar1 = arg1 + 0x740;
    *(arg1 + 0x748) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800b0c8:
    if (iVar6 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2_00);
    }
    return iVar11;
}


// ===== sym.qce_f9_req @ 0x0800b174 (size 1908) =====

int sym.qce_f9_req(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    char cVar5;
    ushort uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    bool bVar12;
    code *pcVar13;
    uint32_t uVar14;
    int iVar15;
    uint64_t uVar16;
    ulong uVar17;
    char *pcVar18;
    int64_t iVar19;
    uint32_t *puVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint64_t uVar23;
    uint *puVar24;
    int64_t iVar25;
    ulong *in_x18;
    uint64_t arg2_00;
    int64_t *piVar26;
    uint64_t uVar27;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar14 = sym.qce_alloc_req_info(arg1);
    if (uVar14 < 0) {
        return -0x10;
    }
    arg2_00 = uVar14;
    *(arg2 + 0x30) = uVar14;
    if (9 < uVar14) {
code_r0x0800b888:
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5512,0x800b88c);
        (*pcVar13)();
    }
    iVar19 = arg1 + 0x740;
    if (*(arg2 + 0x2c) == 1) {
        iVar21 = 0x19b0;
    }
    else {
        if (*(arg2 + 0x2c) != 0) {
            if (8 < uVar14) goto code_r0x0800b888;
            iVar15 = -0x16;
            arg1 = arg1 + arg2_00 * 0x1bf8;
            piVar1 = arg1 + 0x740;
            *(arg1 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar5 = '\x01';
                bVar12 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar12) {
                    *piVar1 = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            goto joined_r0x0800b83c;
        }
        iVar21 = 0x18d8;
    }
    uVar27 = *arg2;
    piVar2 = iVar19 + arg2_00 * 0x1bf8 + iVar21;
    piVar26 = *arg1;
    uVar6 = *(arg2 + 8);
    uVar16 = is_vmalloc_addr(uVar27);
    if (((uVar16 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
        obj.dma_map_single_attrs.__already_done = 0x1;
        uVar17 = dev_driver_string(piVar26);
        iVar19 = piVar26[0xe];
        if (iVar19 == 0) {
            iVar19 = *piVar26;
        }
        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar19);
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x800,0x800b2b8);
        (*pcVar13)();
    }
    if ((uVar16 & 1) == 0) {
        uVar17 = dma_map_page_attrs(piVar26,(((uVar27 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                             0x200000000,uVar27 & 0xfff,uVar6,1,0);
    }
    else {
        uVar17 = 0xffffffffffffffff;
    }
    iVar15 = *(arg1 + 0x170);
    iVar3 = *(arg1 + 0x134);
    iVar25 = iVar19 + arg2_00 * 0x1bf8;
    *(iVar25 + 0x1bd8) = uVar17;
    *(iVar25 + 0x1be8) = *(arg2 + 8);
    iVar21 = 0xfc;
    if (*(arg2 + 0x2c) != 0) {
        iVar21 = 0x100;
    }
    uVar9 = iVar15 * 0x4000 - 0x20000U & 0xfffe0000 | iVar3 << 5;
    uVar8 = uVar9 | 0xe;
    uVar4 = *(arg1 + iVar21);
    *(arg1 + 0x8c) = uVar8;
    *(arg1 + 0x90) = uVar9 | 0x20e;
    if (*(arg1 + 0x40) == '\0') {
        sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a100);
        sym.writel_relaxed(*(arg1 + 0x8c),*(arg1 + 0x48) + 0x1a400);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a200);
        sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a204);
        uVar8 = (*(arg2 + 0x1c) & 0xff00ff00) >> 8 | (*(arg2 + 0x1c) & 0xff00ff) << 8;
        uVar9 = (*(arg2 + 0x20) & 0xff00ff00) >> 8 | (*(arg2 + 0x20) & 0xff00ff) << 8;
        uVar10 = (*(arg2 + 0x24) & 0xff00ff00) >> 8 | (*(arg2 + 0x24) & 0xff00ff) << 8;
        uVar11 = (*(arg2 + 0x28) & 0xff00ff00) >> 8 | (*(arg2 + 0x28) & 0xff00ff) << 8;
        sym.writel_relaxed(uVar8 >> 0x10 | uVar8 << 0x10,*(arg1 + 0x48) + 0x1a310);
        sym.writel_relaxed(uVar9 >> 0x10 | uVar9 << 0x10,*(arg1 + 0x48) + 0x1a314);
        sym.writel_relaxed(uVar10 >> 0x10 | uVar10 << 0x10,*(arg1 + 0x48) + 0x1a318);
        sym.writel_relaxed(uVar11 >> 0x10 | uVar11 << 0x10,*(arg1 + 0x48) + 0x1a31c);
        sym.writel_relaxed(*(arg2 + 10),*(arg1 + 0x48) + 0x1a320);
        sym.writel_relaxed(*(arg2 + 0x10),*(arg1 + 0x48) + 0x1a390);
        sym.writel_relaxed(*(arg2 + 0x14),*(arg1 + 0x48) + 0x1a394);
        uVar8 = uVar4 | 0x800000;
        if (*(arg2 + 0x18) != 1) {
            uVar8 = uVar4;
        }
        sym.writel_relaxed(uVar8,*(arg1 + 0x48) + 0x1a300);
        sym.writel_relaxed(*(arg2 + 8),*(arg1 + 0x48) + 0x1a304);
        sym.writel_relaxed(0,*(arg1 + 0x48) + 0x1a308);
        sym.writel_relaxed(*(arg2 + 8),*(arg1 + 0x48) + 0x1a110);
        sym.writel_relaxed(*(arg1 + 0x90),*(arg1 + 0x48) + 0x1a400);
        sym.writel_relaxed(7,*(arg1 + 0x48) + 0x1a120);
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        *(piVar2[1] + 4) = uVar8;
        *(piVar2[2] + 4) = *(arg1 + 0x90);
        iVar21 = piVar2[0x15];
        uVar8 = (*(arg2 + 0x1c) & 0xff00ff00) >> 8 | (*(arg2 + 0x1c) & 0xff00ff) << 8;
        uVar9 = (*(arg2 + 0x20) & 0xff00ff00) >> 8 | (*(arg2 + 0x20) & 0xff00ff) << 8;
        uVar10 = (*(arg2 + 0x24) & 0xff00ff00) >> 8 | (*(arg2 + 0x24) & 0xff00ff) << 8;
        uVar11 = (*(arg2 + 0x28) & 0xff00ff00) >> 8 | (*(arg2 + 0x28) & 0xff00ff) << 8;
        *(iVar21 + 4) = uVar8 >> 0x10 | uVar8 << 0x10;
        *(iVar21 + 0x14) = uVar9 >> 0x10 | uVar9 << 0x10;
        *(iVar21 + 0x24) = uVar10 >> 0x10 | uVar10 << 0x10;
        *(iVar21 + 0x34) = uVar11 >> 0x10 | uVar11 << 0x10;
        *(iVar21 + 0x44) = *(arg2 + 10);
        iVar21 = piVar2[0x17];
        *(iVar21 + 4) = *(arg2 + 0x10);
        *(iVar21 + 0x14) = *(arg2 + 0x14);
        uVar8 = uVar4 | 0x800000;
        if (*(arg2 + 0x18) != 1) {
            uVar8 = uVar4;
        }
        *(piVar2[0x11] + 4) = uVar8;
        *(piVar2[0x12] + 4) = *(arg2 + 8);
        *(piVar2[0x13] + 4) = 0;
        *(piVar2[0x18] + 4) = *(arg2 + 8);
        *piVar2[0x19] = *(arg1 + 0x50) + 0x1a120U & 0xffffff | *(piVar2[0x19] + 3) << 0x18;
    }
    iVar21 = iVar19 + arg2_00 * 0x1bf8;
    *(iVar21 + 0x1b98) = arg3;
    *(iVar21 + 0x1bf0) = 0;
    *(iVar21 + 8) = 4;
    *(iVar21 + 0x1b88) = arg4;
    *(iVar21 + 0x1bec) = *(arg2 + 8);
    if (8 < uVar14) goto code_r0x0800b888;
    cVar5 = *(arg1 + 0x40);
    iVar21 = arg1 + arg2_00 * 0x1bf8;
    *(iVar21 + 0x770) = 0;
    *(iVar21 + 0x790) = 0;
    if (cVar5 == '\0') {
        uVar16 = 0;
code_r0x0800b630:
        uVar27 = *(arg2 + 8);
        puVar20 = iVar19 + arg2_00 * 0x1bf8 + 0x30;
        if (*(arg2 + 8) != 0) {
            uVar23 = *(iVar25 + 0x1bd8);
            puVar24 = *(iVar19 + arg2_00 * 0x1bf8 + 0x28) + uVar16 * 8;
            do {
                if (uVar16 == 0x200) {
                    pcVar18 = "_qce_sps_add_data";
                    goto code_r0x0800b7ec;
                }
                uVar14 = uVar27;
                if (0x1fe < uVar27 >> 6) {
                    uVar14 = 0x7fc0;
                }
                uVar4 = uVar27 - uVar14;
                uVar27 = uVar4;
                *puVar24 = uVar23;
                puVar24[1] = uVar23 >> 0x10 & 0xf0000 | uVar14;
                uVar23 = uVar23 + uVar14;
                uVar16 = *puVar20 + 1;
                *puVar20 = *puVar20 + 1;
                puVar24 = puVar24 + 2;
            } while (uVar4 != 0);
        }
        if (uVar16 == 0) {
            uVar16 = 0;
        }
        else {
            iVar21 = *(iVar19 + arg2_00 * 0x1bf8 + 0x28) + (uVar16 - 1) * 8;
            *(iVar21 + 4) = *(iVar21 + 4) | 0x50000000;
            uVar16 = *puVar20;
        }
        iVar22 = iVar19 + arg2_00 * 0x1bf8;
        iVar21 = (*(iVar22 + 0x1a88) - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar7 = *(iVar22 + 7000);
        puVar24 = *(iVar22 + 0x28) + uVar16 * 8;
        *puVar24 = iVar21;
        puVar24[1] = uVar7 | iVar21 >> 0x10 & 0xf0000 | 0xa000000;
        uVar14 = *puVar20 + 1;
        uVar16 = uVar14;
        *puVar20 = uVar14;
        if (0x1ff < uVar14) goto code_r0x0800b7b0;
        iVar21 = iVar19 + arg2_00 * 0x1bf8;
        puVar20 = iVar21 + 0x50;
        if (*puVar20 == 0x200) {
            pcVar18 = "_qce_sps_add_data";
            uVar16 = 0x200;
            goto code_r0x0800b7ec;
        }
        iVar22 = (*(arg1 + 0x18) + *(iVar21 + 0x1b60)) - *(arg1 + 0x10);
        puVar24 = *(iVar21 + 0x48) + *puVar20 * 8;
        *puVar24 = iVar22;
        puVar24[1] = iVar22 >> 0x10 & 0xf0000 | 0x80;
        *puVar20 = *puVar20 + 1;
        sym.select_mode(arg1,iVar19 + arg2_00 * 0x1bf8);
        iVar15 = sym._qce_sps_transfer(arg1,arg2_00);
        piVar1 = arg1 + 0x102fc;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            if (*piVar1 != 1) goto code_r0x0800b898;
            cVar5 = '\x01';
            bVar12 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
                *piVar1 = 0;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800b898:
        if (iVar15 == 0) {
            return 0;
        }
    }
    else {
        iVar22 = iVar19 + arg2_00 * 0x1bf8;
        iVar21 = (*piVar2 - *(arg1 + 0x10)) + *(arg1 + 0x18);
        uVar7 = *(piVar2 + 0x1a);
        puVar24 = *(iVar22 + 0x28);
        *puVar24 = iVar21;
        puVar24[1] = uVar7 | iVar21 >> 0x10 & 0xf0000 | 0xc000000;
        uVar14 = *(iVar22 + 0x30) + 1;
        uVar16 = uVar14;
        *(iVar22 + 0x30) = uVar14;
        if (uVar14 < 0x200) goto code_r0x0800b630;
code_r0x0800b7b0:
        pcVar18 = "_qce_sps_add_cmd";
code_r0x0800b7ec:
        _printk(0x8001aeb,pcVar18,uVar16,0x200);
        iVar15 = -0xc;
    }
    dma_unmap_page_attrs(*arg1,*(iVar25 + 0x1bd8),*(arg2 + 8),1,0);
    arg1 = arg1 + arg2_00 * 0x1bf8;
    piVar1 = arg1 + 0x740;
    *(arg1 + 0x748) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar12 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
            *piVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
joined_r0x0800b83c:
    if (iVar3 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2_00);
    }
    return iVar15;
}


// ===== sym.qce_enable_clk @ 0x0800b8e8 (size 460) =====

int sym.qce_enable_clk(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x104b9) != '\0') {
        return 0;
    }
    iVar2 = *(arg1 + 0x58);
    if (iVar2 != 0) {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 != 0) {
code_r0x0800b9e0:
            _printk(0x800113b,"qce_enable_clk");
            return iVar1;
        }
        iVar1 = clk_enable(iVar2);
        if (iVar1 != 0) {
            clk_unprepare(iVar2);
            goto code_r0x0800b9e0;
        }
    }
    if (*(arg1 + 0x43) != '\0') {
        return 0;
    }
    iVar2 = *(arg1 + 0x60);
    if (iVar2 != 0) {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) goto code_r0x0800b97c;
            clk_unprepare(iVar2);
        }
        _printk(0x800167d,"qce_enable_clk");
        goto code_r0x0800ba98;
    }
code_r0x0800b97c:
    iVar2 = *(arg1 + 0x68);
    if (iVar2 == 0) {
code_r0x0800b99c:
        iVar2 = *(arg1 + 0x70);
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(iVar2);
        }
        _printk(0x8001df2,"qce_enable_clk");
        iVar2 = *(arg1 + 0x68);
        if (iVar2 != 0) {
            clk_disable(iVar2);
            clk_unprepare(iVar2);
        }
    }
    else {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) goto code_r0x0800b99c;
            clk_unprepare(iVar2);
        }
        _printk(0x8001c8e,"qce_enable_clk");
    }
    iVar2 = *(arg1 + 0x60);
    if (iVar2 != 0) {
        clk_disable(iVar2);
        clk_unprepare(iVar2);
    }
code_r0x0800ba98:
    iVar2 = *(arg1 + 0x58);
    if (iVar2 != 0) {
        clk_disable(iVar2);
        clk_unprepare(iVar2);
        return iVar1;
    }
    return iVar1;
}


// ===== sym.qce_disable_clk @ 0x0800bab4 (size 160) =====

ulong sym.qce_disable_clk(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x104b9) == '\0') {
        iVar1 = *(arg1 + 0x70);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(arg1 + 0x68);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(arg1 + 0x60);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
        iVar1 = *(arg1 + 0x58);
        if (iVar1 != 0) {
            clk_disable(iVar1);
            clk_unprepare(iVar1);
        }
    }
    return 0;
}


// ===== sym.qce_open @ 0x0800bb54 (size 4080) =====

int64_t * sym.qce_open(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int *piVar15;
    ulong *puVar16;
    uint *puVar17;
    int64_t *arg1_00;
    uint64_t uVar18;
    ulong uVar19;
    code *pcVar20;
    uint32_t *puVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t iVar24;
    char *pcVar25;
    int iVar26;
    uint32_t *puVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *unaff_x21;
    int64_t iVar28;
    uint32_t *unaff_x23;
    uint32_t *unaff_x24;
    int64_t iVar29;
    code *unaff_x25;
    int64_t *unaff_x26;
    code *unaff_x27;
    code *unaff_x28;
    ulong unaff_x30;
    uint32_t *puStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    code *pcStack_150;
    code *pcStack_148;
    int64_t *piStack_140;
    code *pcStack_138;
    uint32_t *puStack_130;
    uint32_t *puStack_128;
    code *pcStack_120;
    uint32_t *puStack_118;
    int64_t iStack_110;
    int64_t *piStack_108;
    ulong uStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    piVar11 = kmalloc_order_trace(0x10500,0xdc0,5);
    if (piVar11 == NULL) {
        *arg2 = 0xfffffff4;
        _printk(0x800104a,"qce_open",0xfffffff4);
        goto code_r0x0800c404;
    }
    *piVar11 = arg1 + 0x10;
    mutex_lock(obj.qce_iomap_mutex);
    if (*(arg1 + 0x300) == 0) {
        *arg2 = 0xffffffea;
        _printk(0x8002265,"qce_open");
    }
    else {
        unaff_x26 = piVar11 + 0x205f;
        unaff_x24 = arg1 + 0x300;
        iVar12 = of_find_property(*(arg1 + 0x300),"qcom,ce-hw-shared",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x3c) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,ce-hw-key",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x41) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-cbc-ecb-ctr-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x10) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aead-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x81) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-xts-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x82) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-ahash-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x83) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-hmac-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x84) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,use-sw-aes-ccm-algo",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x85) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,clk-mgmt-sus-res",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x42) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,support-core-clk-only",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x43) = iVar12 != 0;
        iVar12 = of_find_property(iVar13,"qcom,request-bw-before-clk",0);
        iVar13 = *unaff_x24;
        *(piVar11 + 0x44) = iVar12 != 0;
        *(piVar11 + 0x104ba) = 1;
        iVar7 = of_property_read_variable_u32_array(iVar13,"qcom,bam-pipe-pair",piVar11 + 0x134,1,0);
        if (iVar7 < 0) {
            _printk(0x8001ffb,"__qce_get_device_tree_data");
            *(piVar11 + 0x104ba) = 0;
            *(piVar11 + 0x134) = 2;
        }
        iVar12 = of_find_property(*unaff_x24,"qcom,offload-ops-support",0);
        if (iVar12 == 0) {
code_r0x0800bddc:
            iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-device",piVar11 + 0x25,1,0);
            if (iVar7 < 0) {
                unaff_x21 = 0xffffffea;
                uVar19 = 0x8001a31;
            }
            else {
                iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-hw-instance",piVar11 + 300,1,0);
                if (iVar7 < 0) {
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x800228a;
                }
                else {
                    unaff_x21 = piVar11 + 0x26;
                    iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,bam-ee",unaff_x21,1,0);
                    if (iVar7 < 0) {
                        _printk(0x8000d72,"__qce_get_device_tree_data");
                        *unaff_x21 = 1;
                    }
                    unaff_x23 = piVar11 + 0x7c;
                    iVar7 = of_property_read_variable_u32_array(*unaff_x24,"qcom,ce-opp-freq",unaff_x23,1,0);
                    if (iVar7 < 0) {
                        _printk(0x80012c0,"__qce_get_device_tree_data");
                        *unaff_x23 = 100000000;
                    }
                    iVar12 = of_find_property(*unaff_x24,"qcom,smmu-s1-enable",0);
                    if (iVar12 != 0) {
                        *(piVar11 + 0x2097) = 1;
                    }
                    iVar12 = of_find_property(*(arg1 + 0x300),"qcom,no-clock-support",0);
                    *(piVar11 + 0x104b9) = iVar12 != 0;
                    *(piVar11 + 0x154) = *(piVar11 + 0x134) << 1;
                    *(piVar11 + 0x2b) = piVar11[0x27] << 1;
                    *(piVar11 + 0x144) = *(piVar11 + 0x134) << 1 | 1;
                    *(piVar11 + 0x29) = piVar11[0x27] << 1 | 1;
                    *(piVar11 + 0x15c) = *(piVar11 + 0x13c) << 1;
                    *(piVar11 + 0x14c) = *(piVar11 + 0x13c) << 1 | 1;
                    *(piVar11 + 0x2c) = piVar11[0x28] << 1;
                    *(piVar11 + 0x2a) = piVar11[0x28] << 1 | 1;
                    piVar14 = platform_get_resource_byname(arg1,0x200,"crypto-base");
                    if (piVar14 == NULL) {
                        unaff_x21 = 0xffffffed;
                        uVar19 = 0x800109e;
                    }
                    else {
                        unaff_x25 = _printk;
                        unaff_x24 = 0x68000000000713;
                        *(piVar11 + 10) = *piVar14;
                        puVar21 = unaff_x24;
                        if (arm64_use_ng_mappings != 0x0) {
                            puVar21 = 0x68000000000f13;
                        }
                        iVar12 = __ioremap(*piVar14,(piVar14[1] - *piVar14) + 1,puVar21);
                        piVar11[9] = iVar12;
                        if (iVar12 != 0) {
                            piVar15 = platform_get_resource_byname(arg1,0x200,"crypto-bam-base");
                            if (piVar15 == NULL) {
                                _printk(0x80021e9,"__qce_get_device_tree_data");
                                unaff_x27 = NULL;
                                arg1 = 0xffffffed;
code_r0x0800c274:
                                if (piVar11[9] != 0) {
                                    iounmap();
                                }
                                *arg2 = arg1;
                                if (unaff_x27 == 0) goto code_r0x0800c3ec;
                            }
                            else {
                                *(piVar11 + 0x34) = *piVar15;
                                *(piVar11 + 7) = (piVar15[2] - *piVar15) + 1;
                                puVar16 = platform_get_resource(arg1,0x400,0);
                                if (puVar16 == NULL) {
                                    _printk(0x8000f29,"__qce_get_device_tree_data");
                                    if (piVar11[0x24] != 0) {
                                        iounmap();
                                    }
                                    arg1 = 0;
                                    unaff_x27 = 0x1;
                                    goto code_r0x0800c274;
                                }
                                uVar19 = *puVar16;
                                *arg2 = 0;
                                *(piVar11 + 0x23) = uVar19;
                            }
                            if (piVar11[0x2097] != '\0') {
                                arg1 = *piVar11;
                                puVar17 = *(arg1 + 0x2c0);
                                if (puVar17 == NULL) {
                                    puVar17 = devm_kmalloc(arg1,0x10,0xdc0);
                                    *(arg1 + 0x2c0) = puVar17;
                                    if (puVar17 == NULL) {
                                        *arg2 = 0xfffffffb;
                                        goto code_r0x0800c3ec;
                                    }
                                }
                                *puVar17 = 0xffffffff;
                                if (*(arg1 + 0x2c0) != 0) {
                                    *(*(arg1 + 0x2c0) + 8) = 0xffffffffffffffff;
                                }
                            }
                            *(piVar11 + 0xe8) = 0;
                            *(piVar11 + 0x467) = 0;
                            arg1 = 0x12000;
                            *(piVar11 + 0x7e6) = 0;
                            *(piVar11 + 0xb65) = 0;
                            *(piVar11 + 0xee4) = 0;
                            *(piVar11 + 0x1263) = 0;
                            *(piVar11 + 0x15e2) = 0;
                            *(piVar11 + 0x1961) = 0;
                            *(piVar11 + 0x1ce0) = 0;
                            *unaff_x26 = 0;
                            *(piVar11 + 4) = 0x5a000;
                            iVar12 = dma_alloc_attrs(*piVar11,0x5a000,piVar11 + 3,0xcc0,0);
                            piVar11[2] = iVar12;
                            if (iVar12 == 0) {
                                *arg2 = 0xfffffff4;
                                _printk(0x8001ea8,"qce_open");
                            }
                            else {
                                *(piVar11 + 6) = 0x12000;
                                iVar12 = kmalloc_order_trace(0x12000,0xdc0,5);
                                piVar11[5] = iVar12;
                                pcVar20 = unaff_x28;
                                if (iVar12 != 0) {
                                    unaff_x27 = _printk;
                                    unaff_x28 = kmalloc_caches;
                                    iVar12 = 0x38;
                                    if (android_kmalloc_64_create != 0x0) {
                                        iVar12 = 0x30;
                                    }
                                    iVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x40);
                                    piVar11[0x2095] = iVar12;
                                    pcVar20 = unaff_x28;
                                    if (iVar12 != 0) {
                                        if (*(piVar11 + 0x104b9) == '\0') {
                                            arg1 = clk_get(*piVar11,"core_clk_src");
                                            piVar11[0xb] = arg1;
                                            if (arg1 < 0xfffffffffffff001) {
                                                if ((*(piVar11 + 0x44) != '\0') ||
                                                   (uVar8 = clk_set_rate(arg1,*unaff_x23), uVar8 == 0)) {
                                                    if (*(piVar11 + 0x43) == '\0') goto code_r0x0800c314;
code_r0x0800c12c:
                                                    piVar11[0xd] = 0;
                                                    piVar11[0xe] = 0;
                                                    piVar11[0xc] = 0;
                                                    goto code_r0x0800c368;
                                                }
                                                arg1 = uVar8;
                                                _printk(0x8000e66,"__qce_init_clk",*unaff_x23 / 1000000);
                                                iVar12 = piVar11[0xb];
joined_r0x0800c4f4:
                                                if (iVar12 != 0) {
                                                    clk_put();
                                                }
                                                _printk(0x800130f,"__qce_init_clk",arg1 & 0xffffffff);
                                            }
                                            else {
                                                if (*(piVar11 + 0x43) == '\0') {
                                                    _printk(0x8000f53,"__qce_init_clk");
                                                    piVar11[0xb] = 0;
                                                    if (*(piVar11 + 0x43) != '\0') goto code_r0x0800c12c;
code_r0x0800c314:
                                                    pcVar20 = clk_get(*piVar11,"core_clk");
                                                    piVar11[0xc] = pcVar20;
                                                    if (pcVar20 < 0xfffffffffffff001) {
                                                        pcVar20 = clk_get(*piVar11,"iface_clk");
                                                        piVar11[0xd] = pcVar20;
                                                        if (pcVar20 < 0xfffffffffffff001) {
                                                            pcVar20 = clk_get(*piVar11,"bus_clk");
                                                            piVar11[0xe] = pcVar20;
                                                            if (pcVar20 < 0xfffffffffffff001) goto code_r0x0800c368;
                                                            _printk(0x8000aad,"__qce_init_clk");
                                                            if (piVar11[0xd] == 0) {
                                                                iVar12 = piVar11[0xc];
                                                            }
                                                            else {
                                                                clk_put();
                                                                iVar12 = piVar11[0xc];
                                                            }
                                                        }
                                                        else {
                                                            _printk(0x8001511,"__qce_init_clk");
                                                            iVar12 = piVar11[0xc];
                                                        }
                                                        arg1 = pcVar20;
                                                        if (iVar12 == 0) {
                                                            iVar12 = piVar11[0xb];
                                                        }
                                                        else {
                                                            clk_put();
                                                            iVar12 = piVar11[0xb];
                                                        }
                                                    }
                                                    else {
                                                        _printk(0x800209a,"__qce_init_clk");
                                                        iVar12 = piVar11[0xb];
                                                        arg1 = pcVar20;
                                                    }
                                                    goto joined_r0x0800c4f4;
                                                }
                                                piVar11[0xb] = 0;
                                                _printk(0x8001f28,"__qce_init_clk");
                                            }
                                            *arg2 = arg1;
                                            pcVar20 = kmalloc_caches;
                                            if (arg1 != 0) goto code_r0x0800c3b4;
                                        }
                                        else {
code_r0x0800c368:
                                            *arg2 = 0;
                                        }
                                        iVar7 = sym.qce_enable_clk(piVar11);
                                        *arg2 = iVar7;
                                        if (iVar7 == 0) {
                                            uVar22 = sym.readl_relaxed(piVar11[9] + 0x1a000);
                                            DataSynchronizationBarrier(3,3,0);
                                            uVar18 = uVar22 >> 0x18 & 0xff;
                                            uVar8 = uVar22 >> 0x10 & 0xff;
                                            unaff_x23 = uVar22 & 0xffff;
                                            if (uVar18 == 5) {
                                                *(piVar11 + 0xf) = 2 < uVar8;
                                                if ((uVar8 < 4) && ((uVar8 != 3 || ((uVar22 & 0xffff) == 0)))) {
                                                    *(piVar11 + 0x79) = 0;
                                                }
                                                else {
                                                    *(piVar11 + 0x79) = 1;
                                                }
                                                *(piVar11 + 0x174) = uVar8;
                                                *(piVar11 + 0x2f) = 5;
                                                uVar9 = sym.readl_relaxed(piVar11[9] + 0x1a108);
                                                *(piVar11 + 0x11) = uVar9;
                                                _dev_info(*piVar11,"QTI Crypto %d.%d.%d device found @0x%x\n",5,uVar8
                                                          ,unaff_x23,piVar11[10]);
                                                *(piVar11 + 0x2e) = 0x40;
                                                uVar8 = *(piVar11 + 0x134) << 5;
                                                *(piVar11 + 0x94) = 0x5200000042;
                                                *(piVar11 + 0xac) = 0x9200000082;
                                                *(piVar11 + 0x9c) = 0x1200000002;
                                                *(piVar11 + 0x8c) = uVar8 | 0xe000e;
                                                *(piVar11 + 0x12) = uVar8 | 0xe020e;
                                                *(piVar11 + 0xb4) = 0x211200002102;
                                                *(piVar11 + 0xc4) = 0x900000049;
                                                *(piVar11 + 0xbc) = 0x100000041;
                                                *(piVar11 + 0xcc) = 0x500000004;
                                                *(piVar11 + 0xe4) = 0x24100000041;
                                                *(piVar11 + 0xa4) = 0xd2000000c2;
                                                *(piVar11 + 0xd4) = 0x31e42;
                                                *(piVar11 + 0x1b) = 0x31e52;
                                                *(piVar11 + 0xdc) = 0x20100000001;
                                                *arg2 = 0;
                                                *(piVar11 + 0xf4) = 0x30041;
                                                *(piVar11 + 0x1f) = 0x30241;
                                                *(piVar11 + 0xec) = 0x430002;
                                                *(piVar11 + 0x1e) = 0x430012;
                                                uStack_78 = 0;
                                                uStack_70 = 0;
                                                *(piVar11 + 0xfc) = 0x30003;
                                                *(piVar11 + 0x20) = 0x30004;
                                                uStack_88 = 0;
                                                uStack_80 = 0;
                                                *(piVar11 + 0x104) = 0xffffffffffffffff;
                                                *(piVar11 + 0x10c) = 0xffffffffffffffff;
                                                uStack_98 = 0;
                                                uStack_90 = 0;
                                                uStack_a8 = 0;
                                                uStack_a0 = 0;
                                                uStack_b8 = 0;
                                                uStack_b0 = 0;
                                                uStack_c8 = 0;
                                                uStack_c0 = 0;
                                                uStack_d8 = 0;
                                                uStack_d0 = 0;
                                                iStack_e8 = 0;
                                                uStack_e0 = 0;
                                                uStack_f8 = 0;
                                                uStack_f0 = 0;
                                                mutex_lock(obj.bam_register_lock);
                                                if (_obj.qce50_bam_list != obj.qce50_bam_list) {
                                                    pcVar20 = _obj.qce50_bam_list;
                                                    do {
                                                        if (*(pcVar20 + 0x1c) == *(piVar11 + 0x34)) {
                                                            if (pcVar20 != NULL) {
                                                                *(pcVar20 + 0x18) = *(pcVar20 + 0x18) + 1;
                                                                piVar11[0x2d] = *(pcVar20 + 0x10);
                                                                *(piVar11 + 0x11c) = *(pcVar20 + 0x1c);
                                                                iVar12 = *(pcVar20 + 0x20);
                                                                piVar11[1] = pcVar20;
                                                                piVar11[0x24] = iVar12;
                                                                *(piVar11 + 8) = pcVar20[0x28];
                                                                goto code_r0x0800c89c;
                                                            }
                                                            break;
                                                        }
                                                        pcVar20 = *pcVar20;
                                                    } while (pcVar20 != obj.qce50_bam_list);
                                                }
                                                iVar12 = 0x38;
                                                if (android_kmalloc_64_create != 0x0) {
                                                    iVar12 = 0x30;
                                                }
                                                puVar21 = kmem_cache_alloc_trace
                                                                    (*(kmalloc_caches + iVar12),0xdc0,0x30);
                                                if (puVar21 == NULL) {
code_r0x0800cac8:
                                                    arg1 = 0xfffffff4;
                                                }
                                                else {
                                                    uVar8 = *(piVar11 + 0x34);
                                                    unaff_x25 = uVar8;
                                                    iVar12 = piVar11[7];
                                                    puVar27 = unaff_x24;
                                                    if (arm64_use_ng_mappings != 0x0) {
                                                        puVar27 = 0x68000000000f13;
                                                    }
                                                    puVar21[6] = 1;
                                                    puVar21[7] = uVar8;
                                                    iVar12 = __ioremap(unaff_x25,iVar12,puVar27);
                                                    *(puVar21 + 8) = iVar12;
                                                    unaff_x23 = puVar21;
                                                    if (iVar12 == 0) {
                                                        kfree(puVar21);
                                                        _printk(0x8000c9b,"qce_sps_get_bam");
                                                        goto code_r0x0800cac8;
                                                    }
                                                    piVar11[0x24] = iVar12;
                                                    *(piVar11 + 0x11c) = uVar8;
                                                    unaff_x24 = puVar21 + 4;
                                                    unaff_x24[0] = 0;
                                                    unaff_x24[1] = 0;
                                                    uVar10 = sym.readl_relaxed(iVar12 + 0x7c);
                                                    uVar8 = uVar10 & 0x8000000;
                                                    unaff_x25 = uVar8;
                                                    *(puVar21 + 10) = uVar10 >> 0x1b & 1;
                                                    if ((uVar10 >> 0x1b & 1) == 0) {
                                                        _printk(0x80011a6,"qce_sps_get_bam",uVar10);
                                                        *(piVar11 + 0xf) = 0;
                                                    }
                                                    uStack_f0 = *(piVar11 + 0x11c);
                                                    iStack_e8 = piVar11[0x24];
                                                    *(piVar11 + 8) = uVar8 >> 0x1b;
                                                    uStack_b8 = CONCAT44(0x10,uStack_b8);
                                                    uStack_d8 = CONCAT44(0x40,uStack_d8);
                                                    uStack_e0 = CONCAT44(piVar11[0x23],uStack_e0);
                                                    if (uVar8 == 0) {
                                                        uVar8 = 1;
                                                    }
                                                    else {
                                                        uVar8 = *(piVar11 + 0x3c) != 0;
                                                    }
                                                    uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
                                                    uStack_88 = CONCAT44(2,*unaff_x21);
                                                    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x400);
                                                    iVar7 = sps_register_bam_device(&uStack_f8,unaff_x24);
                                                    puVar27 = *0x8000878;
                                                    if (iVar7 == 0) {
                                                        piVar11[1] = puVar21;
                                                        uVar22 = __list_add_valid(puVar21,puVar27,obj.qce50_bam_list);
                                                        if ((uVar22 & 1) != 0) {
                                                            *0x8000878 = puVar21;
                                                            *puVar21 = obj.qce50_bam_list;
                                                            *(puVar21 + 2) = puVar27;
                                                            *puVar27 = puVar21;
                                                        }
                                                        piVar11[0x2d] = *unaff_x24;
                                                        unaff_x21 = puVar27;
code_r0x0800c89c:
                                                        mutex_unlock(obj.bam_register_lock);
                                                        arg1 = obj.qce50_bam_list;
                                                        if (*(piVar11 + 0x104ba) == '\0') {
code_r0x0800c8f4:
                                                            if (*(piVar11 + 0x104bb) == '\0') goto code_r0x0800ca10;
                                                            unaff_x21 = piVar11 + 0x47;
                                                            uVar8 = sym.qce_sps_init_ep_conn(piVar11,unaff_x21,1,1);
                                                            arg1 = uVar8;
                                                            if (uVar8 == 0) {
                                                                unaff_x23 = 0x1;
                                                                uVar8 = sym.qce_sps_init_ep_conn
                                                                                  (piVar11,piVar11 + 0xa3,1,0);
                                                                if (uVar8 == 0) {
                                                                    if (*(piVar11 + 0x104bb) != '\0') {
                                                                        unaff_x21 = piVar11 + 0x5e;
                                                                        uVar8 = sym.qce_sps_init_ep_conn
                                                                                          (piVar11,unaff_x21,2,1);
                                                                        arg1 = uVar8;
                                                                        if (uVar8 != 0) goto code_r0x0800c96c;
                                                                        unaff_x23 = 0x2;
                                                                        uVar8 = sym.qce_sps_init_ep_conn
                                                                                          (piVar11,piVar11 + 0xba,2,0
                                                                                          );
                                                                        if (uVar8 != 0) goto code_r0x0800c93c;
                                                                        if (*(piVar11 + 0x104bb) != '\0') {
                                                                            unaff_x21 = piVar11 + 0x75;
                                                                            uVar8 = sym.qce_sps_init_ep_conn
                                                                                              (piVar11,unaff_x21,3,1)
                                                                            ;
                                                                            arg1 = uVar8;
                                                                            if (uVar8 != 0) goto code_r0x0800c96c;
                                                                            unaff_x23 = 0x3;
                                                                            uVar8 = sym.qce_sps_init_ep_conn
                                                                                              (piVar11,piVar11 + 0xd1,
                                                                                               3,0);
                                                                            if (uVar8 != 0) goto code_r0x0800c93c;
                                                                        }
                                                                    }
code_r0x0800ca10:
                                                                    _printk(0x8000db1,"qce_sps_init",
                                                                            *(piVar11 + 0x11c),piVar11[0x23]);
                                                                    *arg2 = 0;
                                                                    sym.qce_setup_ce_sps_data(piVar11);
                                                                    sym.qce_disable_clk(piVar11);
                                                                    sym.setup_dummy_req(piVar11);
                                                                    *(piVar11 + 0x2060) = 0;
                                                                    *(piVar11 + 0x2090) = 0;
                                                                    init_timer_key(piVar11 + 0x2061,
                                                                                   
                                                            sym.qce_multireq_timeout.690bdae42169b8376f8634d9b6b718d8.cfi_jt
                                                            ,0,0,0);
                                                            iVar12 = __printk;
                                                            *(piVar11 + 0x10484) = 0;
                                                            *(piVar11 + 0x102fc) = 0;
                                                            *(piVar11 + 0x2091) = _segment.ehdr;
                                                            piVar11[0x2063] = iVar12 + 5;
                                                            _segment.ehdr = _segment.ehdr + 1;
                                                            mutex_unlock(obj.qce_iomap_mutex);
                                                            goto code_r0x0800c404;
                                                            }
code_r0x0800c93c:
                                                            arg1 = uVar8;
                                                            unaff_x21 = *unaff_x21;
                                                            sps_disconnect(unaff_x21);
                                                            dma_free_attrs(*piVar11,piVar11[unaff_x23 * 0x17 + 0x3b],
                                                                           piVar11[unaff_x23 * 0x17 + 0x38],
                                                                           piVar11[unaff_x23 * 0x17 + 0x39],0);
                                                            sps_free_endpoint(unaff_x21);
                                                            }
                                                        }
                                                        else {
                                                            unaff_x21 = piVar11 + 0x30;
                                                            uVar8 = sym.qce_sps_init_ep_conn(piVar11,unaff_x21,0,1);
                                                            arg1 = uVar8;
                                                            if (uVar8 == 0) {
                                                                uVar8 = sym.qce_sps_init_ep_conn
                                                                                  (piVar11,piVar11 + 0x8c,0,0);
                                                                if (uVar8 == 0) goto code_r0x0800c8f4;
                                                                unaff_x23 = NULL;
                                                                goto code_r0x0800c93c;
                                                            }
                                                        }
code_r0x0800c96c:
                                                        sym.qce_sps_release_bam(piVar11);
                                                        goto code_r0x0800cad8;
                                                    }
                                                    _printk(0x80015b9,"qce_sps_get_bam",iVar7);
                                                    iounmap(*(puVar21 + 8));
                                                    kfree(puVar21);
                                                    arg1 = 0xfffffffb;
                                                }
                                                mutex_unlock(obj.bam_register_lock);
                                            }
                                            else {
                                                _printk(0x80022c0,"_probe_ce_engine",piVar11[10],uVar18,uVar8,
                                                        unaff_x23);
                                                arg1 = 0xfffffffa;
                                            }
code_r0x0800cad8:
                                            *arg2 = arg1;
                                            sym.qce_disable_clk(piVar11);
                                            cVar1 = *(piVar11 + 0x104b9);
                                        }
                                        else {
                                            cVar1 = *(piVar11 + 0x104b9);
                                        }
                                        pcVar20 = kmalloc_caches;
                                        if (cVar1 == '\0') {
                                            if (piVar11[0xe] != 0) {
                                                clk_put();
                                            }
                                            if (piVar11[0xd] != 0) {
                                                clk_put();
                                            }
                                            if (piVar11[0xc] != 0) {
                                                clk_put();
                                            }
                                            pcVar20 = kmalloc_caches;
                                            if (piVar11[0xb] != 0) {
                                                clk_put();
                                            }
                                        }
                                    }
                                }
code_r0x0800c3b4:
                                kfree(piVar11[0x2095]);
                                kfree(piVar11[5]);
                                unaff_x28 = pcVar20;
                                if (piVar11[2] != 0) {
                                    dma_free_attrs(*piVar11,piVar11[4],piVar11[2],piVar11[3],0);
                                }
                            }
                            if (piVar11[9] != 0) {
                                iounmap();
                            }
                            goto code_r0x0800c3ec;
                        }
                        unaff_x21 = 0xfffffff4;
                        uVar19 = 0x8002036;
                    }
                }
            }
        }
        else {
            iVar12 = *unaff_x24;
            *(piVar11 + 0x104bb) = 1;
            iVar7 = of_property_read_variable_u32_array(iVar12,"qcom,bam-pipe-offload-cpb-hlos",piVar11 + 0x28,1,0);
            if (iVar7 < 0) {
                unaff_x21 = 0xffffffea;
                uVar19 = 0x8000d33;
            }
            else {
                iVar7 = of_property_read_variable_u32_array
                                  (*unaff_x24,"qcom,bam-pipe-offload-hlos-hlos",piVar11 + 0x27,1,0);
                if (iVar7 < 0) {
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x8001da8;
                }
                else {
                    iVar7 = of_property_read_variable_u32_array
                                      (*unaff_x24,"qcom,bam-pipe-offload-hlos-cpb",piVar11 + 0x13c,1,0);
                    if (-1 < iVar7) goto code_r0x0800bddc;
                    unaff_x21 = 0xffffffea;
                    uVar19 = 0x8001172;
                }
            }
        }
        _printk(uVar19,"__qce_get_device_tree_data");
        *arg2 = unaff_x21;
    }
code_r0x0800c3ec:
    mutex_unlock(obj.qce_iomap_mutex);
    kfree(piVar11);
    piVar11 = NULL;
code_r0x0800c404:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return piVar11;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.qce_setup_ce_sps_data;
    pcStack_158 = sym.qce_setup_ce_sps_data;
    iVar12 = sp_el0;
    iStack_168 = *(iVar12 + 0x5e0);
    iVar12 = 0;
    iVar29 = 0x1e58;
    iVar23 = arg1_00[5];
    iVar2 = arg1_00[6];
    iVar13 = iVar23 << 8;
    puVar21 = (arg1_00[2] + arg1_00[0x2e]) - 1U & -arg1_00[0x2e];
    piVar14 = arg1_00;
    iVar28 = 0;
    puStack_160 = &stack0xffffffffffffffa0;
    pcStack_150 = unaff_x28;
    pcStack_148 = unaff_x27;
    piStack_140 = unaff_x26;
    pcStack_138 = unaff_x25;
    puStack_130 = unaff_x24;
    puStack_128 = unaff_x23;
    pcStack_120 = arg1;
    puStack_118 = unaff_x21;
    iStack_110 = arg2;
    piStack_108 = piVar11;
    do {
        *(arg1_00 + iVar28 + 0x768) = iVar23;
        iVar24 = _sps_bam_disable_irqs;
        iVar3 = _log_post_read_mmio;
        uVar22 = (iVar13 >> 8) + 0x8000000000;
        *(arg1_00 + iVar28 + 0x788) = iVar23 + 0x1000;
        iVar3 = uVar22 + iVar3;
        if (uVar22 >> 0x26 != 0) {
            iVar3 = (iVar13 >> 8) - iVar24;
        }
        *(arg1_00 + iVar28 + 0x760) = iVar3;
        iVar24 = iVar13 + 0x100000 >> 8;
        uVar22 = iVar24 + 0x8000000000;
        iVar3 = _log_post_read_mmio + uVar22;
        if (uVar22 >> 0x26 != 0) {
            iVar3 = iVar24 - _sps_bam_disable_irqs;
        }
        iVar24 = arg1_00[8];
        *(arg1_00 + iVar28 + 0x780) = iVar3;
        if (iVar24 != '\0') {
            uVar10 = iVar12;
            puStack_170 = puVar21 + arg1_00[0x2e] + -1 & -arg1_00[0x2e];
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,3);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1_00,uVar10,&puStack_170,3);
            sym._setup_cipher_des_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_cipher_des_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_cipher_des_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_cipher_des_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,3);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,4);
            sym._setup_auth_cmdlistptrs(arg1_00,uVar10,&puStack_170,4);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,0);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,1);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            sym._setup_aead_cmdlistptrs(arg1_00,uVar10,&puStack_170,2);
            uVar8 = *(arg1_00 + 0x2e);
            iVar3 = arg1_00[10];
            puStack_170 = puStack_170 + uVar8 + -1 & -uVar8;
            *(arg1_00 + iVar28 + 0x1d90) = puStack_170;
            *puStack_170 = iVar3 + 0x1a110U & 0xffffff;
            puStack_170[1] = uVar8;
            puStack_170[2] = 0xffffffff;
            puStack_170[3] = 0;
            iVar3 = arg1_00[10];
            uVar8 = *(arg1_00 + 0x9c);
            puStack_170[6] = 0xffffffff;
            puStack_170[7] = 0;
            puStack_170[4] = iVar3 + 0x1a200U & 0xffffff;
            puStack_170[5] = uVar8;
            iVar3 = arg1_00[10];
            puStack_170[9] = 0;
            puStack_170[10] = 0xffffffff;
            puStack_170[0xb] = 0;
            puStack_170[8] = iVar3 + 0x1a204U & 0xffffff;
            iVar3 = arg1_00[10];
            puStack_170[0xd] = 0;
            puStack_170[0xe] = 0xffffffff;
            puStack_170[0xf] = 0;
            puStack_170[0xc] = iVar3 + 0x1a208U & 0xffffff;
            iVar3 = arg1_00[10];
            puStack_170[0x11] = 0;
            puStack_170[0x12] = 0xffffffff;
            puStack_170[0x13] = 0;
            puStack_170[0x10] = iVar3 + 0x1a300U & 0xffffff;
            iVar3 = arg1_00[10];
            puStack_170[0x15] = 0;
            puStack_170[0x16] = 0xffffffff;
            puStack_170[0x17] = 0;
            puStack_170[0x14] = iVar3 + 0x1a304U & 0xffffff;
            iVar3 = arg1_00[10];
            puStack_170[0x19] = 0;
            puStack_170[0x1a] = 0xffffffff;
            puStack_170[0x1b] = 0;
            puStack_170[0x18] = iVar3 + 0x1a308U & 0xffffff;
            iVar3 = arg1_00[10];
            puStack_170[0x1d] = 7;
            puStack_170[0x1e] = 0xffffffff;
            puStack_170[0x1f] = 0;
            puStack_170[0x1c] = iVar3 + 0x1a120U & 0xffffff;
            if (arg1_00 + iVar29 != 0) {
                *(arg1_00 + iVar28 + 0x1e58) = puStack_170 + 0x1c;
            }
            puStack_170 = puStack_170 + 0x20;
            *(arg1_00 + iVar28 + 0x1e60) = 0x80;
            sym._setup_aead_ccm_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            sym._setup_aead_ccm_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            sym._setup_f8_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            sym._setup_f8_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            sym._setup_f9_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            piVar14 = sym._setup_f9_cmdlistptrs(arg1_00,uVar10,&puStack_170);
            iVar3 = arg1_00[10];
            puVar27 = puStack_170 + arg1_00[0x2e] + -1 & -arg1_00[0x2e];
            puVar21 = puVar27 + 4;
            *(arg1_00 + iVar28 + 0x21c8) = puVar27;
            *puVar27 = iVar3 + 0x1a400U & 0xffffff;
            puVar27[3] = 0;
            puVar27[1] = 0xe01ef;
            puVar27[2] = 0xffffffff;
            *(arg1_00 + iVar28 + 0x2298) = puVar21 - puStack_170;
        }
        iVar7 = arg1_00[0x2e];
        iVar12 = iVar12 + 1;
        iVar3 = arg1_00[3];
        iVar13 = iVar13 + 0x200000;
        iVar24 = arg1_00[2];
        uVar22 = puVar21 + iVar7 + -1 & -iVar7;
        iVar26 = uVar22 + 0x80;
        *(arg1_00 + iVar28 + 0x22a4) = iVar26;
        *(arg1_00 + iVar28 + 0x22c0) = uVar22 + 0x80;
        *(arg1_00 + iVar28 + 0x22a0) = uVar22;
        iVar29 = iVar29 + 0x1bf8;
        *(arg1_00 + iVar28 + 0x22b8) = uVar22;
        puVar21 = uVar22 + 0x100 + (iVar7 << 1);
        iVar23 = iVar23 + 0x2000;
        *(arg1_00 + iVar28 + 0x22a8) = (uVar22 + iVar3) - iVar24;
        *(arg1_00 + iVar28 + 0x22ac) = (iVar3 + iVar26) - iVar24;
        *(arg1_00 + iVar28 + 0x22b0) = uVar22 + 0x100;
        iVar28 = iVar28 + 0x1bf8;
    } while (iVar12 != 9);
    puStack_170 = puVar21;
    if ((arg1_00[4] < puVar21 - arg1_00[2]) || (iVar2 + -0x12000 < 0)) {
        panic("qce50: Not enough coherent memory. Allocate %x , need %lx\n");
    }
    else {
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_168) {
            return piVar14;
        }
    }
    iVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.setup_dummy_req;
    uVar5 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._24_8_;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._8_8_;
    uVar19 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._0_8_;
    iVar12 = iVar13 + 0x103d8;
    pcVar25 = *(iVar13 + 0x104a8);
    *(pcVar25 + 0x10) = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._16_8_;
    uVar6 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._48_8_;
    *(pcVar25 + 0x18) = uVar5;
    uVar5 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._56_8_;
    *pcVar25 = uVar19;
    *(pcVar25 + 8) = uVar4;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._40_8_;
    uVar19 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._32_8_;
    *(pcVar25 + 0x30) = uVar6;
    *(pcVar25 + 0x38) = uVar5;
    *(pcVar25 + 0x20) = uVar19;
    *(pcVar25 + 0x28) = uVar4;
    piVar11 = sg_init_one(iVar12,*(iVar13 + 0x104a8),0x40);
    *(iVar13 + 0x10388) = 0;
    *(iVar13 + 0x10398) = iVar12;
    *(iVar13 + 0x103a0) = 0;
    *(iVar13 + 0x103bc) = 0x101;
    *(iVar13 + 0x10380) = sym.__typeid__ZTSFvPvPhS0_iE_global_addr;
    *(iVar13 + 0x103c0) = 0x40;
    *(iVar13 + 0x103d0) = 0;
    *(iVar13 + 0x103c8) = iVar13 + 0x10400;
    *(iVar13 + 0x103a8) = 0;
    *(iVar13 + 0x103b0) = 0;
    *(iVar13 + 0x10438) = iVar12;
    *(iVar13 + 0x10430) = 0x40;
    return piVar11;
}


// ===== sym.qce_setup_ce_sps_data @ 0x0800cb44 (size 1648) =====

void sym.qce_setup_ce_sps_data(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    char cVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t arg2;
    ulong uVar9;
    ulong uVar10;
    ulong uVar11;
    ulong uVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    char *pcVar17;
    int iVar18;
    uint32_t *puVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uint32_t *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_68 = *(iVar20 + 0x5e0);
    iVar21 = 0;
    iVar20 = 0;
    iVar23 = 0x1e58;
    iVar15 = *(arg1 + 0x28);
    iVar3 = *(arg1 + 0x30);
    iVar22 = iVar15 << 8;
    puVar13 = (*(arg1 + 0x10) + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
    do {
        iVar2 = arg1 + iVar21;
        *(iVar2 + 0x768) = iVar15;
        iVar16 = _sps_bam_disable_irqs;
        iVar1 = _log_post_read_mmio;
        uVar14 = (iVar22 >> 8) + 0x8000000000;
        *(iVar2 + 0x788) = iVar15 + 0x1000;
        iVar1 = uVar14 + iVar1;
        if (uVar14 >> 0x26 != 0) {
            iVar1 = (iVar22 >> 8) - iVar16;
        }
        *(iVar2 + 0x760) = iVar1;
        iVar16 = iVar22 + 0x100000 >> 8;
        uVar14 = iVar16 + 0x8000000000;
        iVar1 = _log_post_read_mmio + uVar14;
        if (uVar14 >> 0x26 != 0) {
            iVar1 = iVar16 - _sps_bam_disable_irqs;
        }
        cVar6 = *(arg1 + 0x40);
        *(iVar2 + 0x780) = iVar1;
        if (cVar6 != '\0') {
            arg2 = iVar20;
            puStack_70 = puVar13 + *(arg1 + 0x170) + -1 & -*(arg1 + 0x170);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,3);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_cipher_aes_cmdlistptrs(arg1,arg2,&puStack_70,3);
            sym._setup_cipher_des_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_cipher_des_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_cipher_des_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_cipher_des_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,3);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,4);
            sym._setup_auth_cmdlistptrs(arg1,arg2,&puStack_70,4);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,0);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,1);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,2);
            sym._setup_aead_cmdlistptrs(arg1,arg2,&puStack_70,2);
            uVar8 = *(arg1 + 0x170);
            iVar5 = *(arg1 + 0x50);
            puStack_70 = puStack_70 + uVar8 + -1 & -uVar8;
            *(iVar2 + 0x1d90) = puStack_70;
            *puStack_70 = iVar5 + 0x1a110U & 0xffffff;
            puStack_70[1] = uVar8;
            puStack_70[2] = 0xffffffff;
            puStack_70[3] = 0;
            iVar5 = *(arg1 + 0x50);
            uVar8 = *(arg1 + 0x9c);
            puStack_70[6] = 0xffffffff;
            puStack_70[7] = 0;
            puStack_70[4] = iVar5 + 0x1a200U & 0xffffff;
            puStack_70[5] = uVar8;
            iVar5 = *(arg1 + 0x50);
            puStack_70[9] = 0;
            puStack_70[10] = 0xffffffff;
            puStack_70[0xb] = 0;
            puStack_70[8] = iVar5 + 0x1a204U & 0xffffff;
            iVar5 = *(arg1 + 0x50);
            puStack_70[0xd] = 0;
            puStack_70[0xe] = 0xffffffff;
            puStack_70[0xf] = 0;
            puStack_70[0xc] = iVar5 + 0x1a208U & 0xffffff;
            iVar5 = *(arg1 + 0x50);
            puStack_70[0x11] = 0;
            puStack_70[0x12] = 0xffffffff;
            puStack_70[0x13] = 0;
            puStack_70[0x10] = iVar5 + 0x1a300U & 0xffffff;
            iVar5 = *(arg1 + 0x50);
            puStack_70[0x15] = 0;
            puStack_70[0x16] = 0xffffffff;
            puStack_70[0x17] = 0;
            puStack_70[0x14] = iVar5 + 0x1a304U & 0xffffff;
            iVar5 = *(arg1 + 0x50);
            puStack_70[0x19] = 0;
            puStack_70[0x1a] = 0xffffffff;
            puStack_70[0x1b] = 0;
            puStack_70[0x18] = iVar5 + 0x1a308U & 0xffffff;
            iVar5 = *(arg1 + 0x50);
            puStack_70[0x1d] = 7;
            puStack_70[0x1e] = 0xffffffff;
            puStack_70[0x1f] = 0;
            puStack_70[0x1c] = iVar5 + 0x1a120U & 0xffffff;
            if (arg1 + iVar23 != 0) {
                *(iVar2 + 0x1e58) = puStack_70 + 0x1c;
            }
            iVar1 = arg1 + iVar21;
            puStack_70 = puStack_70 + 0x20;
            *(iVar1 + 0x1e60) = 0x80;
            sym._setup_aead_ccm_cmdlistptrs(arg1,arg2,&puStack_70);
            sym._setup_aead_ccm_cmdlistptrs(arg1,arg2,&puStack_70);
            sym._setup_f8_cmdlistptrs(arg1,arg2,&puStack_70);
            sym._setup_f8_cmdlistptrs(arg1,arg2,&puStack_70);
            sym._setup_f9_cmdlistptrs(arg1,arg2,&puStack_70);
            sym._setup_f9_cmdlistptrs(arg1,arg2,&puStack_70);
            iVar5 = *(arg1 + 0x50);
            puVar19 = puStack_70 + *(arg1 + 0x170) + -1 & -*(arg1 + 0x170);
            puVar13 = puVar19 + 4;
            *(iVar1 + 0x21c8) = puVar19;
            *puVar19 = iVar5 + 0x1a400U & 0xffffff;
            puVar19[3] = 0;
            puVar19[1] = 0xe01ef;
            puVar19[2] = 0xffffffff;
            *(iVar1 + 0x2298) = puVar13 - puStack_70;
        }
        iVar7 = *(arg1 + 0x170);
        iVar20 = iVar20 + 1;
        iVar5 = *(arg1 + 0x18);
        iVar22 = iVar22 + 0x200000;
        iVar4 = *(arg1 + 0x10);
        uVar14 = puVar13 + iVar7 + -1 & -iVar7;
        iVar18 = uVar14 + 0x80;
        *(iVar2 + 0x22a4) = iVar18;
        iVar21 = iVar21 + 0x1bf8;
        *(iVar2 + 0x22c0) = uVar14 + 0x80;
        *(iVar2 + 0x22a0) = uVar14;
        iVar23 = iVar23 + 0x1bf8;
        *(iVar2 + 0x22b8) = uVar14;
        puVar13 = uVar14 + 0x100 + (iVar7 << 1);
        iVar15 = iVar15 + 0x2000;
        *(iVar2 + 0x22a8) = (uVar14 + iVar5) - iVar4;
        *(iVar2 + 0x22ac) = (iVar5 + iVar18) - iVar4;
        *(iVar2 + 0x22b0) = uVar14 + 0x100;
    } while (iVar20 != 9);
    puStack_70 = puVar13;
    if ((*(arg1 + 0x20) < puVar13 - *(arg1 + 0x10)) || (iVar3 + -0x12000 < 0)) {
        panic("qce50: Not enough coherent memory. Allocate %x , need %lx\n");
    }
    else {
        iVar20 = sp_el0;
        if (*(iVar20 + 0x5e0) == iStack_68) {
            return;
        }
    }
    iVar22 = __stack_chk_fail();
    *extraout_x18 = sym.setup_dummy_req;
    uVar11 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._24_8_;
    uVar10 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._8_8_;
    uVar9 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._0_8_;
    iVar20 = iVar22 + 0x103d8;
    pcVar17 = *(iVar22 + 0x104a8);
    *(pcVar17 + 0x10) = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._16_8_;
    uVar12 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._48_8_;
    *(pcVar17 + 0x18) = uVar11;
    uVar11 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._56_8_;
    *pcVar17 = uVar9;
    *(pcVar17 + 8) = uVar10;
    uVar10 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._40_8_;
    uVar9 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._32_8_;
    *(pcVar17 + 0x30) = uVar12;
    *(pcVar17 + 0x38) = uVar11;
    *(pcVar17 + 0x20) = uVar9;
    *(pcVar17 + 0x28) = uVar10;
    sg_init_one(iVar20,*(iVar22 + 0x104a8),0x40);
    *(iVar22 + 0x10388) = 0;
    *(iVar22 + 0x10398) = iVar20;
    *(iVar22 + 0x103a0) = 0;
    *(iVar22 + 0x103bc) = 0x101;
    *(iVar22 + 0x10380) = sym.__typeid__ZTSFvPvPhS0_iE_global_addr;
    *(iVar22 + 0x103c0) = 0x40;
    *(iVar22 + 0x103d0) = 0;
    *(iVar22 + 0x103c8) = iVar22 + 0x10400;
    *(iVar22 + 0x103a8) = 0;
    *(iVar22 + 0x103b0) = 0;
    *(iVar22 + 0x10438) = iVar20;
    *(iVar22 + 0x10430) = 0x40;
    return;
}


// ===== sym.setup_dummy_req @ 0x0800d1b4 (size 196) =====

void sym.setup_dummy_req(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._24_8_;
    uVar3 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._8_8_;
    uVar2 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._0_8_;
    iVar1 = arg1 + 0x103d8;
    pcVar6 = *(arg1 + 0x104a8);
    *(pcVar6 + 0x10) = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._16_8_;
    uVar5 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._48_8_;
    *(pcVar6 + 0x18) = uVar4;
    uVar4 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._56_8_;
    *pcVar6 = uVar2;
    *(pcVar6 + 8) = uVar3;
    uVar3 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._40_8_;
    uVar2 = str.abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopqopqrpqrs._32_8_;
    *(pcVar6 + 0x30) = uVar5;
    *(pcVar6 + 0x38) = uVar4;
    *(pcVar6 + 0x20) = uVar2;
    *(pcVar6 + 0x28) = uVar3;
    sg_init_one(iVar1,*(arg1 + 0x104a8),0x40);
    *(arg1 + 0x10388) = 0;
    *(arg1 + 0x10398) = iVar1;
    *(arg1 + 0x103a0) = 0;
    *(arg1 + 0x103bc) = 0x101;
    *(arg1 + 0x10380) = sym.__typeid__ZTSFvPvPhS0_iE_global_addr;
    *(arg1 + 0x103c0) = 0x40;
    *(arg1 + 0x103d0) = 0;
    *(arg1 + 0x103c8) = arg1 + 0x10400;
    *(arg1 + 0x103a8) = 0;
    *(arg1 + 0x103b0) = 0;
    *(arg1 + 0x10438) = iVar1;
    *(arg1 + 0x10430) = 0x40;
    return;
}


// ===== sym.qce_multireq_timeout @ 0x0800d278 (size 560) =====

void sym.qce_multireq_timeout(int64_t arg1)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x194);
    if ((iVar7 == 0) || (iVar7 != *(arg1 + 0x198))) {
        *(arg1 + 0x198) = iVar7;
code_r0x0800d320:
        mod_timer(arg1,__printk + 5);
        return;
    }
    uVar5 = daif;
    if ((uVar5 & 0x80) == 0) {
        uVar6 = daif;
        daif = uVar6 | 0xc0;
    }
    piVar1 = arg1 + -0xc;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar7 = *piVar1;
        if (iVar7 != 0) goto code_r0x0800d358;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = 2;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
code_r0x0800d358:
    if (iVar7 != 0) {
        daif = uVar5;
        goto code_r0x0800d320;
    }
    piVar2 = arg1 + -0x1c08;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
            *piVar2 = 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar7 == 0) {
        iVar7 = sym.qce_process_sha_req(arg1 + -0x10308,0);
        *(arg1 + 0x188) = *(arg1 + 0x188) + 1;
        if (iVar7 == 0) goto code_r0x0800d3a4;
    }
    _printk(0x8001c44,"qce_multireq_timeout",*(arg1 + 0x180));
code_r0x0800d3a4:
    Hint_Prefetch(piVar1,2,0,1);
    do {
        if (*piVar1 != 2) goto code_r0x0800d3c4;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = 0;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
code_r0x0800d3c4:
    *(arg1 + 0x178) = 0;
    daif = uVar5;
    del_timer(arg1);
    *(arg1 + 0x184) = *(arg1 + 0x184) + 1;
    return;
}


// ===== sym.qce_close @ 0x0800d4a8 (size 388) =====

ulong sym.qce_close(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (arg1 == 0) {
        return 0xffffffed;
    }
    *in_x18 = unaff_x30;
    mutex_lock(obj.qce_iomap_mutex);
    sym.qce_enable_clk(arg1);
    iVar3 = 0;
    do {
        if (iVar3 == 0) {
            if (*(arg1 + 0x104ba) != '\0') goto code_r0x0800d4fc;
        }
        else {
            if (*(arg1 + 0x104bb) == '\0') break;
code_r0x0800d4fc:
            iVar1 = arg1 + iVar3;
            uVar2 = *(iVar1 + 0x460);
            sps_disconnect(uVar2);
            dma_free_attrs(*arg1,*(iVar1 + 0x4b8),*(iVar1 + 0x4a0),*(iVar1 + 0x4a8),0);
            sps_free_endpoint(uVar2);
            uVar2 = *(iVar1 + 0x180);
            sps_disconnect(uVar2);
            dma_free_attrs(*arg1,*(iVar1 + 0x1d8),*(iVar1 + 0x1c0),*(iVar1 + 0x1c8),0);
            sps_free_endpoint(uVar2);
        }
        iVar3 = iVar3 + 0xb8;
    } while (iVar3 != 0x2e0);
    sym.qce_sps_release_bam(arg1);
    if (*(arg1 + 0x48) != 0) {
        iounmap();
    }
    if (*(arg1 + 0x10) != 0) {
        dma_free_attrs(*arg1,*(arg1 + 0x20),*(arg1 + 0x10),*(arg1 + 0x18),0);
    }
    kfree(*(arg1 + 0x104a8));
    kfree(*(arg1 + 0x28));
    sym.qce_disable_clk(arg1);
    if (*(arg1 + 0x104b9) == '\0') {
        if (*(arg1 + 0x70) != 0) {
            clk_put();
        }
        if (*(arg1 + 0x68) != 0) {
            clk_put();
        }
        if (*(arg1 + 0x60) != 0) {
            clk_put();
        }
        if (*(arg1 + 0x58) != 0) {
            clk_put();
        }
    }
    mutex_unlock(obj.qce_iomap_mutex);
    kfree(arg1);
    return 0;
}


// ===== sym.qce_hw_support @ 0x0800d62c (size 220) =====

ulong sym.qce_hw_support(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint uVar3;
    
    if (arg2 != 0) {
        *arg2 = 0x1000000;
        *(arg2 + 4) = 1;
        *(arg2 + 6) = 1;
        uVar1 = *(arg1 + 0x88);
        *(arg2 + 10) = 1;
        *(arg2 + 8) = ((uVar1 ^ 0xffffffff) & 0x18c) == 0;
        *(arg2 + 0xb) = *(arg1 + 0x3c) == 1;
        uVar2 = *(arg1 + 0x41);
        *(arg2 + 7) = 1;
        *(arg2 + 0xc) = uVar2;
        *(arg2 + 0x13) = *(arg1 + 0x42);
        *(arg2 + 0x14) = *(arg1 + 0x44);
        *(arg2 + 9) = *(arg1 + 0x174) == 0;
        *(arg2 + 0xd) = *(arg1 + 0x80);
        *(arg2 + 0xe) = *(arg1 + 0x81);
        *(arg2 + 0xf) = *(arg1 + 0x82);
        *(arg2 + 0x10) = *(arg1 + 0x83);
        *(arg2 + 0x11) = *(arg1 + 0x84);
        *(arg2 + 0x12) = *(arg1 + 0x85);
        *(arg2 + 0x18) = *(arg1 + 0x128);
        *(arg2 + 0x1c) = *(arg1 + 300);
        uVar3 = 8;
        if (*(arg1 + 0x78) == '\0') {
            uVar3 = 1;
        }
        *(arg2 + 0x20) = uVar3;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qce_dump_req @ 0x0800d708 (size 568) =====

void sym.qce_dump_req(int64_t arg1)

{
    ulong *in_x18;
    int iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x740);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",0,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,0);
    }
    iVar1 = *(arg1 + 0x2338);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",1,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,1);
    }
    iVar1 = *(arg1 + 0x3f30);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",2,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,2);
    }
    iVar1 = *(arg1 + 0x5b28);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",3,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,3);
    }
    iVar1 = *(arg1 + 0x7720);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",4,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,4);
    }
    iVar1 = *(arg1 + 0x9318);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",5,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,5);
    }
    iVar1 = *(arg1 + 0xaf10);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",6,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,6);
    }
    iVar1 = *(arg1 + 0xcb08);
    _printk(0x8000bcc,"qce_dump_req","qce_dump_req",7,iVar1 != 0);
    if (iVar1 != 0) {
        sym._qce_dump_descr_fifos(arg1,7);
    }
    return;
}


// ===== sym._qce_dump_descr_fifos @ 0x0800d960 (size 484) =====

void sym._qce_dump_descr_fifos(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1 + (arg2 & 0xffffffffU) * 0x1bf8;
    puVar7 = *(iVar3 + 0x768);
    _printk(0x8000f9a,"_qce_dump_descr_fifos");
    _printk(0x8000fd7,"_qce_dump_descr_fifos");
    _printk(0x8000f9a,"_qce_dump_descr_fifos");
    if (*(iVar3 + 0x770) != 0) {
        uVar2 = 0;
        do {
            _printk(0x8000e9b,"_qce_dump_descr_fifos",uVar2,*puVar7,puVar7[1] & 0xffff,puVar7[1] >> 0x10);
            if (((puVar7[1] >> 0x1b & 1) != 0) && (uVar1 = puVar7[1] >> 4 & 0xfff, uVar1 != 0)) {
                uVar5 = 0;
                puVar6 = (*(arg1 + 0x10) - *(arg1 + 0x18)) + *puVar7;
                do {
                    _printk(0x80016f1,"_qce_dump_descr_fifos",uVar5,*puVar6 & 0xffffff,puVar6[1]);
                    uVar5 = uVar5 + 1;
                    puVar6 = puVar6 + 4;
                } while (uVar1 != uVar5);
            }
            puVar7 = puVar7 + 2;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar3 + 0x770));
    }
    _printk(0x8000f9a,"_qce_dump_descr_fifos");
    _printk(0x800187e,"_qce_dump_descr_fifos");
    _printk(0x8000f9a,"_qce_dump_descr_fifos");
    iVar3 = arg1 + (arg2 & 0xffffffffU) * 0x1bf8;
    if (*(iVar3 + 0x790) != 0) {
        uVar2 = 0;
        puVar4 = *(arg1 + (arg2 & 0xffffffffU) * 0x1bf8 + 0x788);
        do {
            _printk(0x8000e9b,"_qce_dump_descr_fifos",uVar2,*puVar4,puVar4[1] & 0xffff,puVar4[1] >> 0x10);
            uVar2 = uVar2 + 1;
            puVar4 = puVar4 + 2;
        } while (uVar2 < *(iVar3 + 0x790));
    }
    return;
}


// ===== sym._qce_sps_add_sg_data_off @ 0x0800db44 (size 452) =====

ulong sym._qce_sps_add_sg_data_off(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t in_x4;
    int iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t iVar7;
    uint *puVar8;
    uint *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar3 = 0xfffffffe;
    }
    else {
        uVar6 = arg3 & 0xffffffff;
        iVar7 = *(in_x4 + 8);
        uVar1 = *(in_x4 + 0x10);
        uVar11 = *(arg2 + 0x18);
        uVar4 = arg4;
        while (uVar4 != 0) {
            uVar10 = arg4;
            if (arg2 == 0) {
                _printk(0x8000c58,"_qce_sps_add_sg_data_off",arg4 & 0xffffffff,arg3 & 0xffffffff);
                return 0xfffffffe;
            }
            uVar2 = *(arg2 + 0x18);
            uVar4 = uVar10 - uVar2;
            if (uVar10 < uVar2) {
                uVar11 = uVar2 - uVar10;
                break;
            }
            arg2 = sg_next(arg2);
            arg4 = uVar4;
            if (arg2 != 0) {
                uVar11 = *(arg2 + 0x18);
            }
        }
        uVar3 = 0;
        if ((arg3 != 0) && (uVar3 = 0, arg2 != 0)) {
            puVar9 = iVar7 + uVar1 * 8;
            while( true ) {
                uVar4 = uVar6;
                uVar1 = uVar4;
                if (uVar11 <= uVar4) {
                    uVar1 = uVar11;
                }
                uVar11 = uVar1;
                if (*(arg1 + 0x174) == 0) {
                    uVar11 = (uVar1 + *(arg1 + 0x170)) - 1 & -*(arg1 + 0x170);
                }
                if (uVar11 != 0) {
                    iVar5 = *(in_x4 + 0x10);
                    iVar7 = *(arg2 + 0x10) + (arg4 & 0xffffffffU);
                    puVar8 = puVar9;
                    do {
                        if (iVar5 == 0x200) {
                            _printk(0x8001aeb,"_qce_sps_add_sg_data_off",0x200,0x200);
                            goto code_r0x0800dc9c;
                        }
                        uVar10 = uVar11;
                        if (0x1fe < uVar11 >> 6) {
                            uVar10 = 0x7fc0;
                        }
                        uVar11 = uVar11 - uVar10;
                        puVar9 = puVar8 + 2;
                        *puVar8 = iVar7;
                        puVar8[1] = iVar7 >> 0x10 & 0xf0000 | uVar10;
                        iVar7 = iVar7 + uVar10;
                        iVar5 = *(in_x4 + 0x10) + 1;
                        *(in_x4 + 0x10) = iVar5;
                        puVar8 = puVar9;
                    } while (uVar11 != 0);
                }
                uVar4 = uVar4 - uVar1;
                uVar6 = uVar4;
                if (uVar4 == 0) {
                    return 0;
                }
                arg2 = sg_next(arg2);
                if (arg2 == 0) break;
                uVar11 = *(arg2 + 0x18);
                arg4 = 0;
            }
            _printk(0x8000f08,"_qce_sps_add_sg_data_off",uVar4);
code_r0x0800dc9c:
            uVar3 = 0xfffffff4;
        }
    }
    return uVar3;
}


// ===== sym._qce_ccm_get_around_output @ 0x0800dd08 (size 308) =====

void sym._qce_ccm_get_around_output(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg3 == 1) && (*(arg1 + 0x78) != '\0')) && (*(arg1 + 0x79) == '\0')) {
        uVar1 = *(arg1 + 0x170);
        uVar2 = *(arg2 + 0x50);
        if (uVar1 != 0) {
            iVar3 = (*(arg1 + 0x18) + *(arg2 + 0x1b70)) - *(arg1 + 0x10);
            puVar4 = *(arg2 + 0x48) + uVar2 * 8;
            do {
                if (uVar2 == 0x200) {
                    _printk(0x8001aeb,"_qce_sps_add_data",0x200,0x200);
                    uVar1 = *(arg2 + 0x50);
                    uVar2 = uVar1;
                    goto joined_r0x0800de18;
                }
                uVar5 = uVar1;
                if (0x1fe < uVar1 >> 6) {
                    uVar5 = 0x7fc0;
                }
                uVar1 = uVar1 - uVar5;
                *puVar4 = iVar3;
                puVar4[1] = iVar3 >> 0x10 & 0xf0000 | uVar5;
                iVar3 = iVar3 + uVar5;
                uVar5 = *(arg2 + 0x50) + 1;
                uVar2 = uVar5;
                *(arg2 + 0x50) = uVar5;
                puVar4 = puVar4 + 2;
            } while (uVar1 != 0);
        }
        uVar1 = uVar2;
joined_r0x0800de18:
        if (uVar1 == 0x200) {
            _printk(0x8001aeb,"_qce_sps_add_data",0x200,0x200);
        }
        else {
            iVar3 = (*(arg1 + 0x18) + *(arg2 + 0x1b64)) - *(arg1 + 0x10);
            puVar4 = *(arg2 + 0x48) + uVar2 * 8;
            *puVar4 = iVar3;
            puVar4[1] = iVar3 >> 0x10 & 0xf0000 | 0x80;
            *(arg2 + 0x50) = *(arg2 + 0x50) + 1;
        }
    }
    return;
}


// ===== sym.writel_relaxed @ 0x0800de3c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800de58);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800de80);
    return;
}


// ===== sym._byte_stream_swap_to_net_words @ 0x0800deb4 (size 348) =====

int64_t sym._byte_stream_swap_to_net_words(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    bool bVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uchar uVar5;
    code *pcVar6;
    ulong *puVar7;
    int64_t *piVar8;
    uint64_t in_x3;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uchar *puVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar20 [16];
    uint uStack_28;
    uint32_t uStack_24;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_18 = *(iVar14 + 0x5e0);
    uVar12 = arg3;
    uVar10 = 0x10 - uVar12;
    _uStack_28 = 0;
    uStack_20 = 0;
    if (0x10 - uVar12 < 0x10) {
        uVar16 = uVar12 - 1;
        uVar3 = 0x10 - uVar10;
        if (uVar16 <= 0x10 - uVar10) {
            uVar3 = uVar16;
        }
        uVar11 = uVar10;
        if (1 < uVar3) {
            uVar4 = 0x10 - uVar10;
            if (uVar16 <= 0x10 - uVar10) {
                uVar4 = uVar16;
            }
            if (uVar4 <= uVar12 - 1) {
                uVar16 = uVar3 + 1;
                uVar4 = 2;
                if ((uVar16 & 1) != 0) {
                    uVar4 = uVar16 & 1;
                }
                uVar11 = (uVar16 - uVar4) + uVar10;
                iVar14 = ~uVar3 + uVar4;
                puVar19 = &uStack_28 + uVar10 + 1;
                uVar15 = uVar12;
                do {
                    iVar14 = iVar14 + 2;
                    uVar5 = *(arg2 + (uVar15 - 1));
                    *puVar19 = *(arg2 + (uVar15 - 2));
                    puVar19[-1] = uVar5;
                    puVar19 = puVar19 + 2;
                    uVar15 = uVar15 - 2;
                } while (iVar14 != 0);
                arg3 = uVar12 - (uVar16 - uVar4);
            }
        }
        uVar12 = arg3;
        do {
            uVar12 = uVar12 - 1;
            if (uVar11 == 0x10) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(1,0x800e00c);
                (*pcVar6)();
            }
            *(&uStack_28 + uVar11) = *(arg2 + uVar12);
            uVar11 = uVar11 + 1;
        } while (uVar11 != 0x10);
        uVar12 = (uStack_28 & 0xff00ff00) >> 8 | (uStack_28 & 0xff00ff) << 8;
        uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
        uVar15 = (uStack_24 & 0xff00ff00) >> 8 | (uStack_24 & 0xff00ff) << 8;
        uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
        uVar18 = (uStack_20 & 0xff00ff00) >> 8 | (uStack_20 & 0xff00ff) << 8;
        uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
        uVar9 = (uStack_20._4_4_ & 0xff00ff00) >> 8 | (uStack_20._4_4_ & 0xff00ff) << 8;
        uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    }
    else {
        uVar12 = 0;
        uVar15 = 0;
        uVar18 = 0;
        uVar9 = 0;
    }
    *arg1 = uVar12;
    *(arg1 + 4) = uVar15;
    *(arg1 + 8) = uVar18;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    *(arg1 + 0xc) = uVar9;
    if (iVar14 == iStack_18) {
        return arg1;
    }
    auVar20 = __stack_chk_fail();
    piVar8 = auVar20._8_8_;
    puVar7 = auVar20._0_8_;
    *extraout_x18 = sym.qce_sps_init_ep_conn;
    uVar10 = arg3 & 0xffffffff;
    iVar14 = sps_alloc_endpoint();
    if (iVar14 == 0) {
        _printk(0x80015f0,"qce_sps_init_ep_conn",in_x3 & 1);
        return 0xfffffff4;
    }
    piVar1 = piVar8 + 1;
    *piVar8 = iVar14;
    uVar12 = sps_get_config(iVar14,piVar1);
    if (uVar12 == 0) {
        bVar2 = (in_x3 & 1) == 0;
        if (bVar2) {
            uVar13 = 0x20000000;
            *piVar1 = 0x7fffffffffffffff;
            iVar17 = puVar7[0x2d];
        }
        else {
            uVar13 = 0x20000001;
            iVar17 = 0x7fffffffffffffff;
            *piVar1 = puVar7[0x2d];
        }
        piVar8[4] = iVar17;
        *(piVar8 + 0x34) = bVar2;
        *(piVar8 + 0x3c) = uVar13;
        *(piVar8 + 3) = *(puVar7 + uVar10 * 4 + 0x144);
        *(piVar8 + 6) = *(puVar7 + uVar10 * 4 + 0x154);
        uVar13 = *(puVar7 + uVar10 * 4 + 0x134);
        *(piVar8 + 0x10) = 0x10;
        *(piVar8 + 0x84) = uVar13;
        *(piVar8 + 0xb) = 0x9000;
        iVar17 = dma_alloc_attrs(*puVar7,0x9000,piVar8 + 9,0xdc0,0);
        piVar8[8] = iVar17;
        if (iVar17 == 0) {
            _printk(0x8001ea8,"qce_sps_init_ep_conn");
            uVar10 = 0xfffffff4;
        }
        else {
            uVar12 = sps_connect(iVar14,piVar1);
            if (uVar12 == 0) {
                *(piVar8 + 0x9c) = 0;
                piVar8[0x14] = 0;
                piVar8[0x16] = puVar7;
                if ((in_x3 & 1) == 0) {
                    piVar8[0x15] = 0;
                    *(piVar8 + 0x13) = 0x20;
                    return 0;
                }
                *(piVar8 + 0x13) = 0x21;
                piVar8[0x15] = sym._sps_producer_callback.690bdae42169b8376f8634d9b6b718d8.cfi_jt;
                uVar12 = sps_register_event(*piVar8,piVar8 + 0x13);
                uVar10 = uVar12;
                if (uVar12 == 0) {
                    return 0;
                }
                _printk(0x8001a71,"qce_sps_init_ep_conn",uVar10);
            }
            else {
                uVar10 = uVar12;
                _printk(0x8001411,"qce_sps_init_ep_conn",iVar14,uVar10);
            }
            dma_free_attrs(*puVar7,piVar8[0xb],piVar8[8],piVar8[9],0);
        }
    }
    else {
        uVar10 = uVar12;
        _printk(0x800163e,"qce_sps_init_ep_conn",iVar14,uVar10);
    }
    sps_free_endpoint(iVar14);
    return uVar10;
}


// ===== sym.qce_sps_init_ep_conn @ 0x0800e010 (size 528) =====

int sym.qce_sps_init_ep_conn(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sps_alloc_endpoint();
    if (iVar4 == 0) {
        _printk(0x80015f0,"qce_sps_init_ep_conn",arg4 & 1);
        return -0xc;
    }
    puVar1 = arg2 + 8;
    *arg2 = iVar4;
    iVar3 = sps_get_config(iVar4,puVar1);
    if (iVar3 == 0) {
        bVar2 = (arg4 & 1U) == 0;
        if (bVar2) {
            uVar6 = 0x20000000;
            *puVar1 = 0x7fffffffffffffff;
            uVar7 = *(arg1 + 0x168);
        }
        else {
            uVar6 = 0x20000001;
            uVar7 = 0x7fffffffffffffff;
            *puVar1 = *(arg1 + 0x168);
        }
        *(arg2 + 0x20) = uVar7;
        iVar5 = arg1 + (arg3 & 0xffffffffU) * 4;
        *(arg2 + 0x34) = bVar2;
        *(arg2 + 0x3c) = uVar6;
        *(arg2 + 0x18) = *(iVar5 + 0x144);
        *(arg2 + 0x30) = *(iVar5 + 0x154);
        uVar6 = *(iVar5 + 0x134);
        *(arg2 + 0x80) = 0x10;
        *(arg2 + 0x84) = uVar6;
        *(arg2 + 0x58) = 0x9000;
        iVar5 = dma_alloc_attrs(*arg1,0x9000,arg2 + 0x48,0xdc0,0);
        *(arg2 + 0x40) = iVar5;
        if (iVar5 == 0) {
            _printk(0x8001ea8,"qce_sps_init_ep_conn");
            iVar3 = -0xc;
        }
        else {
            iVar3 = sps_connect(iVar4,puVar1);
            if (iVar3 == 0) {
                *(arg2 + 0x9c) = 0;
                *(arg2 + 0xa0) = 0;
                *(arg2 + 0xb0) = arg1;
                if ((arg4 & 1U) == 0) {
                    *(arg2 + 0xa8) = 0;
                    *(arg2 + 0x98) = 0x20;
                    return 0;
                }
                *(arg2 + 0x98) = 0x21;
                *(arg2 + 0xa8) = sym._sps_producer_callback.690bdae42169b8376f8634d9b6b718d8.cfi_jt;
                iVar3 = sps_register_event(*arg2,arg2 + 0x98);
                if (iVar3 == 0) {
                    return 0;
                }
                _printk(0x8001a71,"qce_sps_init_ep_conn",iVar3);
            }
            else {
                _printk(0x8001411,"qce_sps_init_ep_conn",iVar4,iVar3);
            }
            dma_free_attrs(*arg1,*(arg2 + 0x58),*(arg2 + 0x40),*(arg2 + 0x48),0);
        }
    }
    else {
        _printk(0x800163e,"qce_sps_init_ep_conn",iVar4,iVar3);
    }
    sps_free_endpoint(iVar4);
    return iVar3;
}


// ===== sym.qce_sps_release_bam @ 0x0800e220 (size 172) =====

void sym.qce_sps_release_bam(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.bam_register_lock);
    piVar5 = *(arg1 + 8);
    if (piVar5 != NULL) {
        iVar3 = piVar5[3] + -1;
        *(piVar5 + 3) = iVar3;
        if (iVar3 == 0) {
            if (*(arg1 + 0x168) != 0) {
                sps_deregister_bam_device();
                *(arg1 + 0x168) = 0;
            }
            iounmap(piVar5[4]);
            uVar4 = __list_del_entry_valid(piVar5);
            if ((uVar4 & 1) != 0) {
                iVar1 = *piVar5;
                piVar2 = piVar5[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            kfree(piVar5);
        }
    }
    *(arg1 + 8) = 0;
    mutex_unlock(obj.bam_register_lock);
    return;
}


// ===== sym._sps_producer_callback @ 0x0800e2cc (size 356) =====

void sym._sps_producer_callback(int64_t arg1)

{
    uint32_t uVar1;
    int16_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t arg2;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x18) >> 0x10 == 0xdead) {
        uVar1 = *(arg1 + 0x18) & 0xff;
        arg2 = uVar1;
        if (uVar1 < 9) {
            arg1 = *arg1;
            if (*(arg1 + uVar1 * 0x1bf8 + 0x740) != 0) {
                iVar5 = arg1 + arg2 * 0x1bf8;
                if ((1 < *(iVar5 + 0x748) - 1U) || (iVar7 = arg1 + arg2 * 0x1bf8, *(iVar7 + 0x750) != 0)) {
                    sym._qce_req_complete(arg1,arg2);
                    return;
                }
                iVar2 = *(iVar5 + 0x2330);
                *(iVar7 + 0x750) = 2;
                if (iVar2 != 0) {
                    return;
                }
                iVar5 = *(arg1 + 0x10);
                iVar7 = *(arg1 + 0x18);
                iVar6 = arg1 + arg2 * 0x1bf8;
                *(iVar6 + 0x790) = 0;
                iVar5 = (iVar7 + *(iVar6 + 0x22a0)) - iVar5;
                puVar8 = *(iVar6 + 0x788);
                *puVar8 = iVar5;
                puVar8[1] = iVar5 >> 0x10 & 0xf0000 | 0x80;
                uVar1 = *(iVar6 + 0x790);
                *(iVar6 + 0x790) = uVar1 + 1;
                if (uVar1 != 0xffffffff) {
                    iVar5 = *(iVar6 + 0x788) + uVar1 * 8;
                    *(iVar5 + 4) = *(iVar5 + 4) | 0x80000000;
                }
                iVar3 = sps_transfer(*(arg1 + 0x180),iVar6 + 0x780);
                if (iVar3 == 0) {
                    return;
                }
                _printk(0x800213f,"_sps_producer_callback",*(arg1 + 0x180),iVar3);
                return;
            }
            uVar4 = 0x800100b;
        }
        else {
            uVar4 = 0x8000ade;
        }
    }
    else {
        uVar4 = 0x8000ade;
    }
    _printk(uVar4,"_sps_producer_callback");
    return;
}


// ===== sym._qce_req_complete @ 0x0800e434 (size 336) =====

void sym._qce_req_complete(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint32_t arg3;
    uint64_t arg2_00;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    iVar6 = arg1 + (arg2 & 0xffffffffU) * 0x1bf8;
    uVar2 = *(iVar6 + 0x748);
    arg3 = arg2;
    if (uVar2 < 5) {
    //switch table (5 cases) at 0x8002380
        switch(*(uVar2 * 4 + 0x8002380) + 0x800e464) {
        case 0x800e478:
            sym._sha_complete(arg1,arg2_00,arg3);
            break;
        case 0x800e488:
            sym._f9_complete(arg1,arg2_00);
            break;
        case 0x800e498:
            sym._aead_complete(arg1,arg2_00,arg3);
            break;
        case 0x800e4a8:
            sym._f8_complete(arg1,arg2_00,arg3);
            break;
        case 0x800e4b8:
            sym._ablk_cipher_complete(arg1,arg2_00,arg2_00);
        }
    }
    else {
        piVar1 = arg1 + arg2_00 * 0x1bf8 + 0x740;
        *(iVar6 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar3 == 0) {
            _printk(0x800191f,"qce_free_req_info");
        }
        else if (arg3 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
    }
    return;
}


// ===== sym._ablk_cipher_complete @ 0x0800e584 (size 1684) =====

void sym._ablk_cipher_complete(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *puVar9;
    uint32_t uVar10;
    code *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    code *unaff_x19;
    uint32_t *puVar13;
    code *pcVar14;
    int64_t unaff_x23;
    ulong uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    pcVar14 = arg2 & 0xffffffff;
    uVar8 = arg2;
    iVar18 = arg1 + uVar8 * 0x1bf8;
    iVar17 = uVar8;
    uStack_70 = 0;
    pcVar11 = *(iVar18 + 0x22c8);
    puVar13 = *(iVar18 + 0x22d8);
    uStack_78 = 0;
    if (2 < *(iVar18 + 0x2330) - 1U) {
        unaff_x23 = *(puVar13 + 4);
        iVar7 = *(puVar13 + 6);
        iVar12 = unaff_x23;
        if ((unaff_x23 != iVar7) && (iVar6 = *(arg1 + iVar17 * 0x1bf8 + 0x22f4), iVar12 = iVar7, 0 < iVar6)) {
            uVar15 = *arg1;
            do {
                dma_unmap_sg_attrs(uVar15,iVar7,1,2,0);
                iVar7 = sg_next(iVar7);
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            unaff_x23 = *(puVar13 + 4);
            iVar12 = *(puVar13 + 6);
        }
        bVar5 = unaff_x23 != iVar12;
        uVar10 = *(arg1 + iVar17 * 0x1bf8 + 0x22f0);
        unaff_x19 = uVar10;
        if (0 < uVar10) {
            uVar15 = *arg1;
            do {
                dma_unmap_sg_attrs(uVar15,unaff_x23,1,bVar5,0);
                unaff_x23 = sg_next(unaff_x23);
                uVar10 = unaff_x19 - 1;
                unaff_x19 = uVar10;
            } while (uVar10 != 0);
        }
    }
    uVar16 = arg2 & 0xffffffff;
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar2 = *(arg1 + pcVar14 * 0x1bf8 + 0x2330);
        if (3 < uVar2) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x5512,0x800eb3c);
            (*pcVar11)();
        }
        iVar6 = sps_transfer_one(*(arg1 + uVar2 * 0xb8 + 0x460),
                                 (*(arg1 + uVar16 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar6 == 0) goto code_r0x0800e6f4;
        _printk(0x8002347,"_qce_unlock_other_pipes",iVar6);
        iVar17 = arg1 + uVar16 * 0x1bf8;
        piVar1 = iVar17 + 0x740;
        *(iVar17 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar6 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar8 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (pcVar11 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
            __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar11,0x8000880);
        }
        puVar9 = NULL;
        iVar7 = 0xfffffffa;
    }
    else {
code_r0x0800e6f4:
        iVar7 = 0;
        iVar19 = arg1 + iVar17 * 0x1bf8;
        iVar12 = *(iVar19 + 0x22b8);
        uVar10 = *(iVar12 + 0x60);
        *(iVar12 + 0x60) = 0;
        if ((2 < *(iVar18 + 0x2330) - 1U) &&
           (uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8,
           ((uVar10 >> 0x10 | uVar10 << 0x10) & 0x104001) != 0)) {
            _printk(0x800196f,"_ablk_cipher_complete");
            iVar7 = 0xfffffffa;
        }
        iVar18 = arg1 + iVar17 * 0x1bf8;
        if (*(iVar18 + 0x758) != 0 || *(iVar18 + 0x754) != 0) {
            _printk(0x8001aab,"_ablk_cipher_complete");
            iVar7 = 0xfffffffa;
        }
        iVar12 = arg1 + iVar17 * 0x1bf8;
        uVar10 = *(iVar12 + 0x2314);
        if (uVar10 == 1) {
            iVar17 = arg1 + uVar16 * 0x1bf8;
            piVar1 = iVar17 + 0x740;
            *(iVar17 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar6 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar6 == 0) {
                _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
            }
            else if (uVar8 < 8) {
                piVar1 = arg1 + 0x10300;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            unaff_x19 = iVar18 + 0x754;
            if (pcVar11 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800eaf0;
            goto code_r0x0800e7d0;
        }
        if (*(arg1 + 0x174) == 0) {
            if (uVar10 == 0) {
                if (*(arg1 + iVar17 * 0x1bf8 + 0x2310) == 1) {
                    iVar18 = arg1 + iVar17 * 0x1bf8;
                    uStack_78 = *(iVar18 + 0x2300);
                    uStack_70 = *(iVar18 + 0x2308);
                    goto code_r0x0800e808;
                }
                uVar10 = *(iVar12 + 0x2314);
                iVar18 = ((**(puVar13 + 4) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + (*(puVar13 + 4))[1] +
                         *(*(puVar13 + 4) + 0xc);
                uStack_78 = *(iVar18 + -0x10);
                uStack_70 = *(iVar18 + -8);
            }
            if ((uVar10 & 0xfffffffe) == 2) {
                uStack_78 = **(puVar13 + 2);
                uVar15 = (*(puVar13 + 2))[1];
                if (uVar10 == 3) {
                    uVar10 = 1;
                }
                else {
                    uVar10 = *puVar13 >> 4;
                }
                uStack_70._4_4_ = uVar15 >> 0x20;
                uVar3 = (uStack_70._4_4_ & 0xff00ff00) >> 8 | (uStack_70._4_4_ & 0xff00ff) << 8;
                uVar10 = (uVar3 >> 0x10 | uVar3 << 0x10) + uVar10;
                uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
                uStack_70 = CONCAT44(uVar10 >> 0x10 | uVar10 << 0x10,uVar15);
            }
        }
        else {
            iVar18 = *(iVar19 + 0x22b8);
            uStack_78 = *(iVar18 + 0x50);
            uStack_70 = *(iVar18 + 0x58);
        }
code_r0x0800e808:
        if (*(arg1 + iVar17 * 0x1bf8 + 0x740) == 0) {
            _printk(0x800100b,"_ablk_cipher_complete",arg2 & 0xffffffff);
            pcVar11 = pcVar14;
            goto code_r0x0800e898;
        }
        iVar17 = arg1 + uVar16 * 0x1bf8;
        piVar1 = iVar17 + 0x740;
        *(iVar17 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar6 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar8 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (pcVar11 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
            __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar11,0x80008c0);
        }
        puVar9 = &uStack_78;
        unaff_x23 = iVar7;
    }
    (*pcVar11)(puVar13,0,puVar9,iVar7);
    unaff_x19 = pcVar11;
    pcVar11 = pcVar14;
    iVar7 = unaff_x23;
code_r0x0800e898:
    while (iVar17 = sp_el0, *(iVar17 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x0800eaf0:
        __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar11,0x80008a0);
code_r0x0800e7d0:
        (*pcVar11)(puVar13,0,0,*unaff_x19 | iVar7);
    }
    return;
}


// ===== sym._sha_complete @ 0x0800ec18 (size 1068) =====

void sym._sha_complete(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int *piVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    code *unaff_x20;
    uint64_t unaff_x23;
    ulong uVar13;
    ulong uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uVar9 = arg2;
    iVar10 = arg1 + uVar9 * 0x1bf8;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar12 = *(iVar10 + 0x22d8);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if (iVar12 == 0) {
        _printk(0x80010c7,"_sha_complete",arg3);
        goto code_r0x0800ee18;
    }
    iVar16 = uVar9;
    unaff_x20 = *(iVar10 + 0x22c8);
    iVar8 = *(arg1 + iVar16 * 0x1bf8 + 0x22f0);
    if (0 < iVar8) {
        uVar13 = *arg1;
        uVar14 = *(iVar12 + 0x38);
        do {
            dma_unmap_sg_attrs(uVar13,uVar14,1,1,0);
            uVar14 = sg_next(uVar14);
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
    }
    uVar15 = arg2 & 0xffffffff;
    unaff_x23 = arg1 + 0x740 + iVar16 * 0x1bf8;
    puVar11 = *(unaff_x23 + 0x1b78);
    uStack_78 = puVar11[2];
    uStack_70 = puVar11[3];
    uStack_88 = *puVar11;
    uStack_80 = puVar11[1];
    uVar3 = (*(puVar11 + 8) & 0xff00ff00) >> 8 | (*(puVar11 + 8) & 0xff00ff) << 8;
    uVar4 = (*(puVar11 + 0x44) & 0xff00ff00) >> 8 | (*(puVar11 + 0x44) & 0xff00ff) << 8;
    uStack_90 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,uVar3 >> 0x10 | uVar3 << 0x10);
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar2 = *(arg1 + 0x740 + (arg2 & 0xffffffffU) * 0x1bf8 + 0x1bf0);
        if (3 < uVar2) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x800efa4);
            (*pcVar7)();
        }
        iVar8 = sps_transfer_one(*(arg1 + uVar2 * 0xb8 + 0x460),
                                 (*(arg1 + uVar15 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar8 != 0) {
            _printk(0x8002347,"_qce_unlock_other_pipes",iVar8);
            iVar10 = arg1 + uVar15 * 0x1bf8;
            piVar1 = iVar10 + 0x740;
            *(iVar10 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar8 = *piVar1;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = 0;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar8 == 0) {
                _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
            }
            else if (uVar9 < 8) {
                piVar1 = arg1 + 0x10300;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                        *piVar1 = *piVar1 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
            }
            if (unaff_x20 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
                __cfi_slowpath_diag(0xc38ab2d8abd71a2f,unaff_x20,0x80008e0);
            }
            uVar15 = 0xfffffffa;
            goto code_r0x0800ee14;
        }
        puVar11 = *(unaff_x23 + 0x1b78);
    }
    uVar3 = *(puVar11 + 0xc);
    *(puVar11 + 0xc) = 0;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    if (((uVar3 >> 0x10 | uVar3 << 0x10) & 0x104001) == 0) {
        if (*(arg1 + iVar16 * 0x1bf8 + 0x754) != 0) {
            uVar14 = 0x8000de3;
            goto code_r0x0800ee9c;
        }
        unaff_x23 = 0;
    }
    else {
        uVar14 = 0x80019a4;
code_r0x0800ee9c:
        _printk(uVar14,"_sha_complete");
        unaff_x23 = 0xfffffffa;
    }
    if (*(arg1 + iVar16 * 0x1bf8 + 0x740) != 0) {
        iVar10 = arg1 + uVar15 * 0x1bf8;
        piVar1 = iVar10 + 0x740;
        *(iVar10 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 0;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar8 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar9 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = *piVar1 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
        }
        if (unaff_x20 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800ef7c;
        goto code_r0x0800ee04;
    }
    _printk(0x800100b,"_sha_complete",arg2 & 0xffffffff);
code_r0x0800ee18:
    while (iVar10 = sp_el0, *(iVar10 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x0800ef7c:
        __cfi_slowpath_diag(0xc38ab2d8abd71a2f,unaff_x20,0x8000900);
code_r0x0800ee04:
        uVar15 = unaff_x23 & 0xffffffff;
code_r0x0800ee14:
        (*unaff_x20)(iVar12,&uStack_88,&uStack_90,uVar15);
    }
    return;
}


// ===== sym._aead_complete @ 0x0800f044 (size 1608) =====

void sym._aead_complete(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int *piVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint uVar10;
    uint uVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong *in_x18;
    code *pcVar14;
    int64_t iVar15;
    ulong uVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar9 = arg2;
    iVar12 = arg1 + uVar9 * 0x1bf8;
    iVar18 = uVar9;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar15 = *(iVar12 + 0x22d8);
    uStack_88 = 0;
    uStack_80 = 0;
    pcVar14 = *(iVar12 + 0x22c8);
    iVar12 = *(iVar15 + 0x40);
    iVar8 = *(iVar15 + 0x48);
    iVar17 = iVar12;
    if ((iVar12 != iVar8) && (iVar7 = *(arg1 + iVar18 * 0x1bf8 + 0x22f4), iVar17 = iVar8, 0 < iVar7)) {
        uVar16 = *arg1;
        do {
            dma_unmap_sg_attrs(uVar16,iVar8,1,2,0);
            iVar8 = sg_next(iVar8);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar12 = *(iVar15 + 0x40);
        iVar17 = *(iVar15 + 0x48);
    }
    bVar5 = iVar12 != iVar17;
    iVar7 = *(arg1 + iVar18 * 0x1bf8 + 0x22f0);
    if (0 < iVar7) {
        uVar16 = *arg1;
        do {
            dma_unmap_sg_attrs(uVar16,iVar12,1,bVar5,0);
            iVar12 = sg_next(iVar12);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
    }
    iVar12 = *(arg1 + iVar18 * 0x1bf8 + 0x22e8);
    if ((iVar12 != 0) && (iVar7 = *(arg1 + iVar18 * 0x1bf8 + 0x22e0), 0 < iVar7)) {
        uVar16 = *arg1;
        do {
            dma_unmap_sg_attrs(uVar16,iVar12,1,1,0);
            iVar12 = sg_next(iVar12);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
    }
    uVar11 = 0x1bf8;
    iVar12 = arg1 + iVar18 * 0x1bf8;
    puVar13 = *(iVar12 + 0x22b8);
    uStack_78 = puVar13[2];
    uStack_70 = puVar13[3];
    uStack_88 = *puVar13;
    uStack_80 = puVar13[1];
    if (*(iVar12 + 0x2310) == 1) {
        if (*(arg1 + 0x78) == '\0') {
            uVar6 = sym.readl_relaxed(*(arg1 + 0x48) + 0x1a100);
        }
        else {
            if (*(arg1 + 0x79) == '\0') {
                puVar13 = *(arg1 + iVar18 * 0x1bf8 + 0x22c0);
            }
            uVar6 = (*(puVar13 + 0xc) & 0xff00ff00) >> 8 | (*(puVar13 + 0xc) & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        }
    }
    else {
        uVar6 = 0;
    }
    uVar19 = arg2 & 0xffffffff;
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar3 = *(arg1 + (arg2 & 0xffffffffU) * 0x1bf8 + 0x2330);
        if (3 < uVar3) {
    //WARNING: Does not return
            pcVar14 = SoftwareBreakpoint(0x5512,0x800f5b0);
            (*pcVar14)();
        }
        iVar7 = sps_transfer_one(*(arg1 + uVar3 * 0xb8 + 0x460),
                                 (*(arg1 + uVar19 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar7 != 0) {
            _printk(0x8002347,"_qce_unlock_other_pipes",iVar7);
            iVar12 = arg1 + uVar19 * 0x1bf8;
            piVar1 = iVar12 + 0x740;
            *(iVar12 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar7 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar7 == 0) {
                _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
            }
            else if (uVar9 < 8) {
                piVar1 = arg1 + 0x10300;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            if (pcVar14 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
                __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar14,0x8000920);
            }
            puVar13 = NULL;
            uVar10 = 0xfffffffa;
            goto code_r0x0800f3e8;
        }
    }
    iVar8 = *(iVar12 + 0x22b8);
    uVar2 = *(iVar8 + 0x60);
    *(iVar8 + 0x60) = 0;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    if (((uVar2 >> 0x10 | uVar2 << 0x10) & 0x104001) == 0) {
        iVar8 = arg1 + iVar18 * 0x1bf8;
        if (*(iVar8 + 0x758) != 0 || *(iVar8 + 0x754) != 0) {
            _printk(0x8001bbd,"_aead_complete");
            goto code_r0x0800f470;
        }
        uVar11 = 0;
        bVar5 = true;
    }
    else {
        _printk(0x80010f7,"_aead_complete");
code_r0x0800f470:
        bVar5 = false;
        uVar11 = 0xfffffffa;
    }
    if (*(arg1 + iVar18 * 0x1bf8 + 0x740) == 0) {
        _printk(0x800100b,"_aead_complete",arg2 & 0xffffffff);
        goto code_r0x0800f3ec;
    }
    if (*(arg1 + iVar18 * 0x1bf8 + 0x2314) == 4) {
        if ((bVar5) && (uVar11 = 0, 0x7fffffff < uVar6 && *(iVar12 + 0x2310) == 1)) {
            uVar11 = 0xffffffb6;
        }
        iVar12 = arg1 + uVar19 * 0x1bf8;
        piVar1 = iVar12 + 0x740;
        *(iVar12 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 0;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar7 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar9 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (pcVar14 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800f564;
        goto code_r0x0800f358;
    }
    iVar12 = *(iVar12 + 0x22b8);
    iVar8 = arg1 + uVar19 * 0x1bf8;
    uStack_98 = *(iVar12 + 0x50);
    uStack_90 = *(iVar12 + 0x58);
    piVar1 = iVar8 + 0x740;
    *(iVar8 + 0x748) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar7 == 0) {
        _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
    }
    else if (uVar9 < 8) {
        piVar1 = arg1 + 0x10300;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
    }
    if (pcVar14 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
        __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar14,0x8000960);
    }
    puVar13 = &uStack_98;
    uVar10 = uVar11;
code_r0x0800f3e8:
    while( true ) {
        (*pcVar14)(iVar15,&uStack_88,puVar13,uVar10);
code_r0x0800f3ec:
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x0800f564:
        __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar14,0x8000940);
code_r0x0800f358:
        puVar13 = NULL;
        uVar10 = uVar11;
    }
    return;
}


// ===== sym._f8_complete @ 0x0800f68c (size 912) =====

void sym._f8_complete(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint16_t uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    code *pcVar11;
    ulong uVar12;
    uint32_t uVar13;
    uint uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = arg2;
    iVar15 = uVar13;
    iVar16 = arg1 + uVar13 * 0x1bf8;
    pcVar11 = *(iVar16 + 0x22c8);
    uVar12 = *(iVar16 + 0x22d8);
    if (*(iVar16 + 0x2320) != 0) {
        dma_unmap_page_attrs(*arg1,*(iVar16 + 0x2320),*(arg1 + iVar15 * 0x1bf8 + 9000),2,0);
    }
    iVar9 = *(arg1 + iVar15 * 0x1bf8 + 0x2318);
    if (iVar9 != 0) {
        dma_unmap_page_attrs(*arg1,iVar9,*(arg1 + iVar15 * 0x1bf8 + 9000),*(iVar16 + 0x2320) != 0,0);
    }
    uVar17 = arg2 & 0xffffffff;
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar5 = *(arg1 + (arg2 & 0xffffffffU) * 0x1bf8 + 0x2330);
        if (3 < uVar5) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x5512,0x800f9a4);
            (*pcVar11)();
        }
        iVar8 = sps_transfer_one(*(arg1 + uVar5 * 0xb8 + 0x460),
                                 (*(arg1 + uVar17 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar8 == 0) goto code_r0x0800f788;
        _printk(0x8002347,"_qce_unlock_other_pipes",iVar8);
        iVar15 = arg1 + uVar17 * 0x1bf8;
        piVar1 = iVar15 + 0x740;
        *(iVar15 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar8 = *piVar1;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar8 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar13 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
        }
        uVar14 = 0xfffffffa;
        if (pcVar11 == sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800f844;
        uVar10 = 0x8000980;
    }
    else {
code_r0x0800f788:
        iVar16 = arg1 + iVar15 * 0x1bf8;
        piVar2 = iVar16 + 0x22b8;
        iVar16 = *(iVar16 + 0x22b8);
        uVar3 = *(iVar16 + 0x60);
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        if ((uVar3 & 0x104001) == 0) {
            iVar15 = arg1 + iVar15 * 0x1bf8;
            if (*(iVar15 + 0x758) != 0 || *(iVar15 + 0x754) != 0) {
                _printk(0x8000cd0,"_f8_complete");
                goto code_r0x0800f8cc;
            }
            uVar14 = 0;
        }
        else {
            uVar4 = *(iVar16 + 100);
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            _printk(0x800153e,"_f8_complete",uVar3,uVar4 >> 0x10 | uVar4 << 0x10,arg2 & 0xffffffff);
code_r0x0800f8cc:
            uVar14 = 0xfffffffa;
        }
        *(*piVar2 + 0x60) = 0;
        iVar15 = arg1 + uVar17 * 0x1bf8;
        piVar1 = iVar15 + 0x740;
        *(*piVar2 + 100) = 0;
        *(iVar15 + 0x748) = 5;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar8 = *piVar1;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = 0;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar8 == 0) {
            _printk(0x800191f,"qce_free_req_info",arg2 & 0xffffffff);
        }
        else if (uVar13 < 8) {
            piVar1 = arg1 + 0x10300;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
        }
        if (pcVar11 == sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800f844;
        uVar10 = 0x80009a0;
    }
    __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar11,uVar10);
code_r0x0800f844:
    (*pcVar11)(uVar12,0,0,uVar14);
    return;
}


// ===== sym._f9_complete @ 0x0800fa1c (size 908) =====

void sym._f9_complete(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    code *pcVar10;
    ulong uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar7 = arg2;
    uVar13 = arg1 + 0x740 + uVar7 * 0x1bf8;
    uVar12 = arg2 & 0xffffffff;
    pcVar10 = *(uVar13 + 0x1b88);
    uVar11 = *(uVar13 + 0x1b98);
    dma_unmap_page_attrs(*arg1,*(uVar13 + 0x1bd8),*(uVar13 + 0x1be8),1,0);
    puVar8 = *(uVar13 + 0x1b78);
    uVar3 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
    uStack_5c = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((*(arg1 + 0x78) == '\0') && (*(arg1 + 0x40) != '\0')) {
        uVar2 = *(arg1 + 0x740 + uVar12 * 0x1bf8 + 0x1bf0);
        if (3 < uVar2) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5512,0x800fd0c);
            (*pcVar10)();
        }
        iVar6 = sps_transfer_one(*(arg1 + uVar2 * 0xb8 + 0x460),
                                 (*(arg1 + uVar12 * 0x1bf8 + 0x21c8) + *(arg1 + 0x18)) - *(arg1 + 0x10),0,0,0xa00);
        if (iVar6 != 0) {
            _printk(0x8002347,"_qce_unlock_other_pipes",iVar6);
            iVar9 = arg1 + uVar12 * 0x1bf8;
            piVar1 = iVar9 + 0x740;
            *(iVar9 + 0x748) = 5;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar6 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar6 == 0) {
                _printk(0x800191f,"qce_free_req_info",uVar12);
            }
            else if (uVar7 < 8) {
                piVar1 = arg1 + 0x10300;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            if (pcVar10 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) {
                __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar10,0x80009c0);
            }
            puVar8 = NULL;
            uVar12 = 0xfffffffa;
            goto code_r0x0800fba8;
        }
        puVar8 = *(uVar13 + 0x1b78);
    }
    uVar3 = puVar8[0x18];
    puVar8[0x18] = 0;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    if (((uVar3 >> 0x10 | uVar3 << 0x10) & 0x104001) == 0) {
        iVar9 = arg1 + uVar7 * 0x1bf8;
        if (*(iVar9 + 0x758) == 0 && *(iVar9 + 0x754) == 0) {
            uVar13 = 0;
            goto code_r0x0800fb34;
        }
        _printk(0x8001e71,"_f9_complete");
    }
    else {
        _printk(0x8000d07,"_f9_complete");
    }
    uVar13 = 0xfffffffa;
code_r0x0800fb34:
    iVar9 = arg1 + uVar12 * 0x1bf8;
    piVar1 = iVar9 + 0x740;
    *(iVar9 + 0x748) = 5;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar6 == 0) {
        _printk(0x800191f,"qce_free_req_info",uVar12);
    }
    else if (uVar7 < 8) {
        piVar1 = arg1 + 0x10300;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
    }
    if (pcVar10 != sym.__typeid__ZTSFvPvPhS0_iE_global_addr) goto code_r0x0800fce4;
    while( true ) {
        puVar8 = &uStack_5c;
        uVar12 = uVar13 & 0xffffffff;
code_r0x0800fba8:
        (*pcVar10)(uVar11,puVar8,0,uVar12);
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x0800fce4:
        __cfi_slowpath_diag(0xc38ab2d8abd71a2f,pcVar10,0x80009e0);
    }
    return;
}


// ===== sym._setup_cipher_aes_cmdlistptrs @ 0x0800fda8 (size 2312) =====

//WARNING: Removing unreachable block (ram,0x08010550)
//WARNING: Removing unreachable block (ram,0x080103e4)

void sym._setup_cipher_aes_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    code *pcVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint64_t in_x4;
    uint32_t *puVar13;
    uint32_t uVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int *piVar19;
    uint32_t *puVar20;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar12 = arg4;
    if (8 < arg2) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5512,0x80106b0);
        (*pcVar10)();
    }
    *in_x18 = unaff_x30;
    puVar15 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
    *arg3 = puVar15;
    if (3 < uVar12) {
        _printk(0x800134a,"_setup_cipher_aes_cmdlistptrs",arg4 & 0xffffffff);
        return;
    }
    uVar16 = arg2;
    //switch table (4 cases) at 0x8002394
    switch(*((arg4 & 0xffffffffU) + 0x8002394) * 4 + 0x800fe0c) {
    case 0x800fe10:
        if ((in_x4 & 1) == 0) {
            iVar18 = arg1 + uVar16 * 0x1bf8;
            bVar5 = false;
            bVar7 = false;
            uVar14 = 0;
            bVar8 = false;
            iVar17 = iVar18 + 0x878;
            puVar11 = arg1 + 0x98;
            if (uVar12 != 0) {
                puVar11 = arg1 + 0xb0;
            }
            bVar6 = true;
            bVar9 = true;
            *(iVar18 + 0x878) = puVar15;
        }
        else {
            bVar7 = false;
            iVar18 = arg1 + uVar16 * 0x1bf8;
            uVar14 = 0;
            bVar8 = false;
            puVar11 = arg1 + 0x94;
            if (uVar12 != 0) {
                puVar11 = arg1 + 0xac;
            }
            iVar17 = iVar18 + 0x7a0;
            bVar5 = true;
            bVar6 = true;
            bVar9 = true;
            *(iVar18 + 0x7a0) = puVar15;
        }
        break;
    case 0x800fe54:
        if ((in_x4 & 1) == 0) {
            bVar5 = false;
            bVar7 = false;
            uVar14 = 0;
            iVar18 = arg1 + uVar16 * 0x1bf8;
            bVar9 = false;
            puVar11 = arg1 + 0xa0;
            bVar6 = true;
            iVar17 = iVar18 + 0xa28;
            bVar8 = true;
            *(iVar18 + 0xa28) = puVar15;
        }
        else {
            bVar7 = false;
            uVar14 = 0;
            bVar9 = false;
            iVar18 = arg1 + uVar16 * 0x1bf8;
            puVar11 = arg1 + 0x9c;
            bVar5 = true;
            bVar6 = true;
            iVar17 = iVar18 + 0x950;
            bVar8 = true;
            *(iVar18 + 0x950) = puVar15;
        }
        break;
    case 0x800fe8c:
        if ((in_x4 & 1) == 0) {
            bVar5 = false;
            bVar6 = false;
            bVar8 = false;
            iVar18 = arg1 + uVar16 * 0x1bf8;
            puVar11 = arg1 + 0xa8;
            uVar14 = 8;
            bVar7 = true;
            iVar17 = iVar18 + 0xbd8;
            bVar9 = true;
            *(iVar18 + 0xbd8) = puVar15;
        }
        else {
            bVar6 = false;
            bVar8 = false;
            puVar11 = arg1 + 0xa4;
            iVar18 = arg1 + uVar16 * 0x1bf8;
            uVar14 = 4;
            bVar5 = true;
            bVar7 = true;
            iVar17 = iVar18 + 0xb00;
            bVar9 = true;
            *(iVar18 + 0xb00) = puVar15;
        }
    }
    uVar2 = *puVar11;
    piVar19 = arg1 + 0x50;
    iVar4 = *piVar19;
    puVar15[1] = 0;
    puVar15[2] = 0xffffffff;
    puVar15[3] = 0;
    *puVar15 = iVar4 + 0x1a100U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[5] = 0;
    puVar15[6] = 0xffffffff;
    puVar15[7] = 0;
    puVar15[4] = iVar4 + 0x1a104U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[9] = 0;
    puVar15[10] = 0xffffffff;
    puVar15[0xb] = 0;
    puVar15[8] = iVar4 + 0x1a11cU & 0xffffff;
    iVar4 = *piVar19;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0xffffffff;
    puVar15[0xf] = 0;
    puVar15[0xc] = iVar4 + 0x1a124U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0xffffffff;
    puVar15[0x13] = 0;
    puVar15[0x10] = iVar4 + 0x1a128U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[0x15] = 0;
    puVar15[0x16] = 0xffffffff;
    puVar15[0x17] = 0;
    puVar15[0x14] = iVar4 + 0x1a13cU & 0xffffff;
    uVar3 = *(arg1 + 0x8c);
    puVar15[0x18] = *piVar19 + 0x1a400U & 0xffffff;
    puVar15[0x19] = uVar3;
    puVar15[0x1a] = 0xffffffff;
    puVar15[0x1b] = 0;
    if (iVar17 + 8 != NULL) {
        *(iVar17 + 8) = puVar15 + 0x18;
    }
    puVar15[0x1c] = *piVar19 + 0x1a110U & 0xffffff;
    puVar15[0x1d] = 0;
    puVar15[0x1e] = 0xffffffff;
    puVar15[0x1f] = 0;
    if (iVar17 + 0xc0 != NULL) {
        *(iVar17 + 0xc0) = puVar15 + 0x1c;
    }
    puVar15[0x20] = *piVar19 + 0x1a200U & 0xffffff;
    puVar15[0x21] = uVar2;
    puVar15[0x22] = 0xffffffff;
    puVar15[0x23] = 0;
    if (iVar17 + 0x18 != NULL) {
        *(iVar17 + 0x18) = puVar15 + 0x20;
    }
    puVar15[0x24] = *piVar19 + 0x1a204U & 0xffffff;
    puVar15[0x25] = 0;
    puVar15[0x26] = 0xffffffff;
    puVar15[0x27] = 0;
    if (iVar17 + 0x20 != NULL) {
        *(iVar17 + 0x20) = puVar15 + 0x24;
    }
    puVar15[0x28] = *piVar19 + 0x1a208U & 0xffffff;
    puVar15[0x29] = 0;
    puVar15[0x2a] = 0xffffffff;
    puVar15[0x2b] = 0;
    if (iVar17 + 0x28 != NULL) {
        *(iVar17 + 0x28) = puVar15 + 0x28;
    }
    uVar2 = *(arg1 + 0x110);
    puVar15[0x2c] = *(arg1 + 0x50) + 0x1a21cU & 0xffffff;
    puVar15[0x2d] = uVar2;
    puVar15[0x2e] = 0xffffffff;
    puVar15[0x2f] = 0;
    if (iVar17 + 0x68 != NULL) {
        *(iVar17 + 0x68) = puVar15 + 0x2c;
    }
    uVar2 = *(arg1 + 0x10c);
    puVar15[0x30] = *(arg1 + 0x50) + 0x1a234U & 0xffffff;
    puVar15[0x31] = uVar2;
    puVar15[0x32] = 0xffffffff;
    puVar15[0x33] = 0;
    if (iVar17 + 0x60 != NULL) {
        *(iVar17 + 0x60) = puVar15 + 0x30;
    }
    uVar2 = *(arg1 + 0x108);
    puVar15[0x34] = *(arg1 + 0x50) + 0x1a238U & 0xffffff;
    puVar15[0x35] = uVar2;
    puVar15[0x36] = 0xffffffff;
    puVar15[0x37] = 0;
    if (iVar17 + 0x58 != NULL) {
        *(iVar17 + 0x58) = puVar15 + 0x34;
    }
    uVar2 = *(arg1 + 0x104);
    puVar15[0x38] = *(arg1 + 0x50) + 0x1a23cU & 0xffffff;
    puVar15[0x39] = uVar2;
    puVar15[0x3a] = 0xffffffff;
    puVar15[0x3b] = 0;
    if (iVar17 + 0x50 != NULL) {
        *(iVar17 + 0x50) = puVar15 + 0x38;
    }
    puVar15[0x3c] = *piVar19 + 0x1a300U & 0xffffff;
    puVar15[0x3d] = 0;
    puVar15[0x3e] = 0xffffffff;
    puVar15[0x3f] = 0;
    if (iVar17 + 0x88 != NULL) {
        *(iVar17 + 0x88) = puVar15 + 0x3c;
    }
    iVar4 = *piVar19;
    puVar15[0x43] = 0;
    puVar15[0x41] = 0;
    puVar15[0x42] = 0xffffffff;
    puVar15[0x40] = iVar4 + 0x1a500U & 0xffffff;
    if (iVar17 + 0x78 != NULL) {
        *(iVar17 + 0x78) = puVar15 + 0x40;
    }
    iVar4 = *piVar19;
    puVar15[0x47] = 0;
    puVar15[0x45] = 0;
    puVar15[0x46] = 0xffffffff;
    puVar15[0x44] = iVar4 + 0x1a504U & 0xffffff;
    if (iVar17 + 0x80 != NULL) {
        *(iVar17 + 0x80) = puVar15 + 0x44;
    }
    iVar4 = *piVar19;
    puVar15[0x4b] = 0;
    puVar15[0x49] = 0;
    puVar15[0x4a] = 0xffffffff;
    puVar15[0x48] = iVar4 + 0x1d000U & 0xffffff;
    if (iVar17 + 0x30 != NULL) {
        *(iVar17 + 0x30) = puVar15 + 0x48;
    }
    iVar4 = *piVar19;
    puVar15[0x4f] = 0;
    puVar15[0x4d] = 0;
    puVar15[0x4e] = 0xffffffff;
    puVar15[0x4c] = iVar4 + 0x1d004U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[0x53] = 0;
    puVar15[0x51] = 0;
    puVar15[0x52] = 0xffffffff;
    puVar15[0x50] = iVar4 + 0x1d008U & 0xffffff;
    iVar4 = *piVar19;
    puVar15[0x55] = 0;
    puVar15[0x56] = 0xffffffff;
    puVar15[0x57] = 0;
    puVar15[0x54] = iVar4 + 0x1d00cU & 0xffffff;
    if (bVar5) {
        puVar11 = puVar15 + 0x54;
        puVar20 = puVar15 + 0x58;
    }
    else {
        iVar4 = *piVar19;
        puVar15[0x5b] = 0;
        puVar15[0x58] = iVar4 + 0x1d010U & 0xffffff;
        puVar15[0x59] = 0;
        puVar15[0x5a] = 0xffffffff;
        iVar4 = *piVar19;
        puVar15[0x5f] = 0;
        puVar15[0x5d] = 0;
        puVar15[0x5e] = 0xffffffff;
        puVar15[0x5c] = iVar4 + 0x1d014U & 0xffffff;
        iVar4 = *piVar19;
        puVar15[0x61] = 0;
        puVar15[0x62] = 0xffffffff;
        puVar15[99] = 0;
        puVar15[0x60] = iVar4 + 0x1d018U & 0xffffff;
        iVar4 = *piVar19;
        puVar15[0x65] = 0;
        puVar15[0x66] = 0xffffffff;
        puVar11 = puVar15 + 100;
        puVar15[0x67] = 0;
        puVar20 = puVar15 + 0x68;
        puVar15[100] = iVar4 + 0x1d01cU & 0xffffff;
    }
    if (bVar6) goto code_r0x080104f8;
    *puVar20 = *piVar19 + 0x1d020U & 0xffffff;
    puVar11[5] = 0;
    puVar11[6] = 0xffffffff;
    puVar11[7] = 0;
    if (iVar17 + 0x38 != NULL) {
        *(iVar17 + 0x38) = puVar20;
    }
    puVar13 = puVar11 + 8;
    if (bVar7) {
        if (uVar14 < 3) {
            uVar14 = 2;
        }
        puVar11[8] = *piVar19 + 0x1d024U & 0xffffff;
        puVar20[5] = 0;
        puVar20[6] = 0xffffffff;
        puVar20[7] = 0;
        iVar4 = *piVar19;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0xffffffff;
        puVar11[0xf] = 0;
        puVar11[0xc] = iVar4 + 0x1d028U & 0xffffff;
        puVar20 = puVar11 + 0x10;
        *puVar20 = *piVar19 + 0x1d02cU & 0xffffff;
        puVar11[0x11] = 0;
        puVar11[0x12] = 0xffffffff;
        puVar11[0x13] = 0;
        if (uVar14 != 4) {
            iVar4 = *piVar19;
            puVar11[0x17] = 0;
            puVar11[0x15] = 0;
            puVar11[0x16] = 0xffffffff;
            puVar11[0x14] = iVar4 + 0x1d030U & 0xffffff;
            puVar20 = puVar11 + 0x18;
            *puVar20 = *piVar19 + 0x1d034U & 0xffffff;
            puVar11[0x19] = 0;
            puVar11[0x1a] = 0xffffffff;
            puVar11[0x1b] = 0;
            if (uVar14 != 6) {
                iVar4 = *piVar19;
                puVar11[0x1d] = 0;
                puVar11[0x1e] = 0xffffffff;
                puVar11[0x1f] = 0;
                puVar11[0x1c] = iVar4 + 0x1d038U & 0xffffff;
                puVar20 = puVar11 + 0x20;
                *puVar20 = *piVar19 + 0x1d03cU & 0xffffff;
                puVar13 = puVar11 + 0x24;
                puVar11[0x21] = 0;
                puVar11[0x22] = 0xffffffff;
                puVar11[0x23] = 0;
                goto code_r0x080104c8;
            }
        }
        puVar13 = puVar20 + 4;
    }
code_r0x080104c8:
    *puVar13 = *piVar19 + 0x1a230U & 0xffffff;
    puVar20[5] = 0;
    puVar20[6] = 0xffffffff;
    puVar20[7] = 0;
    if (iVar17 + 0x70 != NULL) {
        *(iVar17 + 0x70) = puVar13;
    }
    puVar20 = puVar20 + 8;
code_r0x080104f8:
    if (!bVar8) {
        iVar4 = *piVar19;
        puVar20[3] = 0;
        puVar20[1] = 0;
        puVar20[2] = 0xffffffff;
        *puVar20 = iVar4 + 0x1a20cU & 0xffffff;
        if (iVar17 + 0x40 != NULL) {
            *(iVar17 + 0x40) = puVar20;
        }
        if (bVar9) {
            iVar4 = *piVar19;
            puVar20[7] = 0;
            puVar20[5] = 0;
            puVar20[6] = 0xffffffff;
            puVar20[4] = iVar4 + 0x1a210U & 0xffffff;
            iVar4 = *piVar19;
            puVar20[9] = 0;
            puVar20[10] = 0xffffffff;
            puVar20[0xb] = 0;
            puVar20[8] = iVar4 + 0x1a214U & 0xffffff;
            iVar4 = *piVar19;
            puVar20[0xd] = 0;
            puVar20[0xe] = 0xffffffff;
            puVar20[0xf] = 0;
            puVar20[0xc] = iVar4 + 0x1a218U & 0xffffff;
            puVar20 = puVar20 + 0x10;
        }
        else {
            puVar20 = puVar20 + 4;
        }
    }
    iVar4 = *piVar19;
    puVar20[3] = 0;
    puVar20[1] = 0;
    puVar20[2] = 0xffffffff;
    puVar1 = iVar17 + 0x90;
    *puVar20 = iVar4 + 0x1a304U & 0xffffff;
    if (uVar12 == 3) {
        iVar18 = 1;
        puVar11 = puVar20;
    }
    else {
        if (puVar1 != NULL) {
            *puVar1 = puVar20;
        }
        iVar18 = 2;
        puVar20[4] = *piVar19 + 0x1a308U & 0xffffff;
        puVar20[5] = 0;
        puVar20[6] = 0xffffffff;
        puVar20[7] = 0;
        puVar11 = puVar20 + 4;
    }
    if (puVar1 != NULL) {
        *puVar1 = puVar11;
    }
    iVar4 = *(arg1 + 0x50);
    uVar12 = *(arg1 + 0x90);
    puVar20 = puVar20 + iVar18 * 4;
    puVar20[2] = 0xffffffff;
    puVar20[3] = 0;
    *puVar20 = iVar4 + 0x1a400U & 0xffffff;
    puVar20[1] = uVar12;
    if (iVar17 + 0x10 != NULL) {
        *(iVar17 + 0x10) = puVar20;
    }
    puVar20[4] = *piVar19 + 0x1a120U & 0xffffff;
    puVar20[5] = 7;
    puVar20[6] = 0xffffffff;
    puVar20[7] = 0;
    if (iVar17 + 200 != NULL) {
        *(iVar17 + 200) = puVar20 + 4;
    }
    *(iVar17 + 0xd0) = (puVar20 + 8) - puVar15;
    *arg3 = puVar20 + 8;
    return;
}


// ===== sym._setup_cipher_des_cmdlistptrs @ 0x080106b0 (size 968) =====

void sym._setup_cipher_des_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    bool bVar5;
    code *pcVar6;
    uint32_t in_w4;
    uint32_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (8 < arg2) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8010a78);
        (*pcVar6)();
    }
    *in_x18 = unaff_x30;
    puVar7 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
    uVar8 = arg2;
    *arg3 = puVar7;
    if (arg4 == 1) {
        bVar4 = false;
        if ((in_w4 & 1) == 0) {
            puVar12 = arg1 + 200;
            iVar10 = arg1 + uVar8 * 0x1bf8;
            bVar5 = true;
            iVar9 = iVar10 + 0xf38;
            *(iVar10 + 0xf38) = puVar7;
        }
        else {
            bVar5 = false;
            puVar12 = arg1 + 0xc4;
            iVar10 = arg1 + uVar8 * 0x1bf8;
            iVar9 = iVar10 + 0xe60;
            *(iVar10 + 0xe60) = puVar7;
        }
    }
    else {
        if (arg4 != 0) {
            _printk(0x8001844,"_setup_cipher_des_cmdlistptrs",arg4 & 0xffffffff);
            return;
        }
        if ((in_w4 & 1) == 0) {
            puVar12 = arg1 + 0xc0;
            bVar4 = true;
            iVar10 = arg1 + uVar8 * 0x1bf8;
            bVar5 = true;
            iVar9 = iVar10 + 0xd88;
            *(iVar10 + 0xd88) = puVar7;
        }
        else {
            bVar5 = false;
            puVar12 = arg1 + 0xbc;
            bVar4 = true;
            iVar10 = arg1 + uVar8 * 0x1bf8;
            iVar9 = iVar10 + 0xcb0;
            *(iVar10 + 0xcb0) = puVar7;
        }
    }
    iVar1 = *(arg1 + 0x50);
    uVar2 = *puVar12;
    puVar7[3] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0xffffffff;
    *puVar7 = iVar1 + 0x1a100U & 0xffffff;
    uVar3 = *(arg1 + 0x8c);
    puVar7[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
    puVar7[5] = uVar3;
    puVar7[6] = 0xffffffff;
    puVar7[7] = 0;
    if (iVar9 + 8 != NULL) {
        *(iVar9 + 8) = puVar7 + 4;
    }
    puVar7[8] = *(arg1 + 0x50) + 0x1a110U & 0xffffff;
    puVar7[9] = 0;
    puVar7[10] = 0xffffffff;
    puVar7[0xb] = 0;
    if (iVar9 + 0xc0 != NULL) {
        *(iVar9 + 0xc0) = puVar7 + 8;
    }
    puVar7[0xc] = *(arg1 + 0x50) + 0x1a200U & 0xffffff;
    puVar7[0xd] = uVar2;
    puVar7[0xe] = 0xffffffff;
    puVar7[0xf] = 0;
    if (iVar9 + 0x18 != NULL) {
        *(iVar9 + 0x18) = puVar7 + 0xc;
    }
    puVar7[0x10] = *(arg1 + 0x50) + 0x1a204U & 0xffffff;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0xffffffff;
    puVar7[0x13] = 0;
    if (iVar9 + 0x20 != NULL) {
        *(iVar9 + 0x20) = puVar7 + 0x10;
    }
    puVar7[0x14] = *(arg1 + 0x50) + 0x1a208U & 0xffffff;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0xffffffff;
    puVar7[0x17] = 0;
    if (iVar9 + 0x28 != NULL) {
        *(iVar9 + 0x28) = puVar7 + 0x14;
    }
    puVar7[0x18] = *(arg1 + 0x50) + 0x1a300U & 0xffffff;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0xffffffff;
    puVar7[0x1b] = 0;
    if (iVar9 + 0x88 != NULL) {
        *(iVar9 + 0x88) = puVar7 + 0x18;
    }
    puVar7[0x1c] = *(arg1 + 0x50) + 0x1d000U & 0xffffff;
    puVar7[0x1d] = 0;
    puVar7[0x1e] = 0xffffffff;
    puVar7[0x1f] = 0;
    if (iVar9 + 0x30 != NULL) {
        *(iVar9 + 0x30) = puVar7 + 0x1c;
    }
    puVar12 = puVar7 + 0x20;
    *puVar12 = *(arg1 + 0x50) + 0x1d004U & 0xffffff;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0xffffffff;
    puVar7[0x23] = 0;
    if (bVar4) {
        puVar11 = puVar7 + 0x24;
    }
    else {
        iVar1 = *(arg1 + 0x50);
        puVar7[0x25] = 0;
        puVar7[0x26] = 0xffffffff;
        puVar7[0x27] = 0;
        puVar7[0x24] = iVar1 + 0x1d008U & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar7[0x29] = 0;
        puVar7[0x2a] = 0xffffffff;
        puVar7[0x2b] = 0;
        puVar7[0x28] = iVar1 + 0x1d00cU & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar7[0x2d] = 0;
        puVar7[0x2e] = 0xffffffff;
        puVar7[0x2f] = 0;
        puVar7[0x2c] = iVar1 + 0x1d010U & 0xffffff;
        puVar12 = puVar7 + 0x30;
        *puVar12 = *(arg1 + 0x50) + 0x1d014U & 0xffffff;
        puVar11 = puVar7 + 0x34;
        puVar7[0x31] = 0;
        puVar7[0x32] = 0xffffffff;
        puVar7[0x33] = 0;
    }
    if (!bVar5) {
        *puVar11 = *(arg1 + 0x50) + 0x1a20cU & 0xffffff;
        puVar12[5] = 0;
        puVar12[6] = 0xffffffff;
        puVar12[7] = 0;
        if (iVar9 + 0x40 != NULL) {
            *(iVar9 + 0x40) = puVar11;
        }
        iVar1 = *(arg1 + 0x50);
        puVar12[9] = 0;
        puVar12[10] = 0xffffffff;
        puVar12[0xb] = 0;
        puVar11 = puVar12 + 0xc;
        puVar12[8] = iVar1 + 0x1a210U & 0xffffff;
    }
    iVar1 = *(arg1 + 0x50);
    uVar2 = *(arg1 + 0x90);
    puVar11[2] = 0xffffffff;
    puVar11[3] = 0;
    *puVar11 = iVar1 + 0x1a400U & 0xffffff;
    puVar11[1] = uVar2;
    if (iVar9 + 0x10 != NULL) {
        *(iVar9 + 0x10) = puVar11;
    }
    puVar11[4] = *(arg1 + 0x50) + 0x1a120U & 0xffffff;
    puVar11[5] = 7;
    puVar11[6] = 0xffffffff;
    puVar11[7] = 0;
    if (iVar9 + 200 != NULL) {
        *(iVar9 + 200) = puVar11 + 4;
    }
    *(iVar9 + 0xd0) = (puVar11 + 8) - puVar7;
    *arg3 = puVar11 + 8;
    return;
}


// ===== sym._setup_auth_cmdlistptrs @ 0x08010a78 (size 2316) =====

void sym._setup_auth_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    int iVar3;
    bool bVar4;
    bool bVar5;
    int64_t iVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t in_x4;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int *piVar14;
    uint32_t uVar15;
    int iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int iVar19;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (8 < arg2) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8011220);
        (*pcVar7)();
    }
    *in_x18 = unaff_x30;
    puVar9 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
    *arg3 = puVar9;
    if (4 < arg4) {
        _printk(0x8001844,"_setup_auth_cmdlistptrs",arg4 & 0xffffffff);
        return;
    }
    uVar10 = arg2;
    //switch table (5 cases) at 0x8002398
    switch(*((arg4 & 0xffffffffU) + 0x8002398) * 4 + 0x8010ae0) {
    case 0x8010ae4:
        iVar16 = *(arg1 + 0x50);
        uVar15 = *(arg1 + 0xdc);
        iVar12 = arg1 + uVar10 * 0x1bf8;
        puVar2 = iVar12 + 0x1018;
        *(iVar12 + 0x1010) = puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0xffffffff;
        puVar9[3] = 0;
        *puVar9 = iVar16 + 0x1a100U & 0xffffff;
        iVar12 = iVar12 + 0x1010;
        uVar11 = *(arg1 + 0x8c);
        puVar9[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar9[5] = uVar11;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0;
        uVar11 = 0;
        break;
    case 0x8010b64:
        iVar16 = *(arg1 + 0x50);
        iVar13 = arg1 + uVar10 * 0x1bf8;
        uVar15 = *(arg1 + 0xe0);
        *(iVar13 + 0x10e8) = puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0xffffffff;
        puVar9[3] = 0;
        *puVar9 = iVar16 + 0x1a100U & 0xffffff;
        iVar12 = iVar13 + 0x10e8;
        uVar11 = *(arg1 + 0x8c);
        puVar9[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar9[5] = uVar11;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0;
        if (iVar13 + 0x10f0 != NULL) {
            *(iVar13 + 0x10f0) = puVar9 + 4;
        }
        iVar16 = *(arg1 + 0x50);
        uVar11 = 0;
        bVar5 = false;
        puVar9[9] = 0;
        puVar9[10] = 0xffffffff;
        bVar4 = true;
        uVar8 = 8;
        goto code_r0x08010dc0;
    case 0x8010bf8:
        iVar16 = *(arg1 + 0x50);
        uVar15 = *(arg1 + 0xe4);
        iVar12 = arg1 + uVar10 * 0x1bf8;
        puVar2 = iVar12 + 0x11c8;
        *(iVar12 + 0x11c0) = puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0xffffffff;
        puVar9[3] = 0;
        *puVar9 = iVar16 + 0x1a100U & 0xffffff;
        iVar12 = iVar12 + 0x11c0;
        uVar11 = *(arg1 + 0x8c);
        puVar9[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar9[5] = uVar11;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0;
        uVar11 = 0x10;
        break;
    case 0x8010c7c:
        iVar16 = *(arg1 + 0x50);
        uVar15 = *(arg1 + 0xe8);
        iVar13 = arg1 + uVar10 * 0x1bf8;
        *(iVar13 + 0x1298) = puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0xffffffff;
        puVar9[3] = 0;
        *puVar9 = iVar16 + 0x1a100U & 0xffffff;
        iVar12 = iVar13 + 0x1298;
        uVar11 = *(arg1 + 0x8c);
        puVar9[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar9[5] = uVar11;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0;
        if (iVar13 + 0x12a0 != NULL) {
            *(iVar13 + 0x12a0) = puVar9 + 4;
        }
        iVar16 = *(arg1 + 0x50);
        puVar9[9] = 0;
        puVar9[10] = 0xffffffff;
        bVar5 = false;
        uVar8 = 8;
        bVar4 = true;
        uVar11 = 0x10;
        puVar9[8] = iVar16 + 0x1a204U & 0xffffff;
        goto code_r0x08010dc8;
    case 0x8010d18:
        iVar13 = arg1 + uVar10 * 0x1bf8;
        if ((in_x4 & 1) == 0) {
            puVar17 = arg1 + 0xd8;
            iVar12 = iVar13 + 0x1448;
            uVar11 = 8;
            *(iVar13 + 0x1448) = puVar9;
        }
        else {
            puVar17 = arg1 + 0xd4;
            iVar12 = iVar13 + 0x1370;
            uVar11 = 4;
            *(iVar13 + 0x1370) = puVar9;
        }
        iVar16 = *(arg1 + 0x50);
        uVar15 = *puVar17;
        puVar9[3] = 0;
        puVar9[1] = 0;
        puVar9[2] = 0xffffffff;
        *puVar9 = iVar16 + 0x1a100U & 0xffffff;
        uVar8 = *(arg1 + 0x8c);
        puVar9[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar9[5] = uVar8;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0;
        if (iVar12 + 8 != NULL) {
            *(iVar12 + 8) = puVar9 + 4;
        }
        iVar16 = *(arg1 + 0x50);
        bVar4 = false;
        uVar8 = 0;
        puVar9[9] = 0;
        puVar9[10] = 0xffffffff;
        bVar5 = true;
code_r0x08010dc0:
        puVar9[8] = iVar16 + 0x1a204U & 0xffffff;
code_r0x08010dc8:
        iVar13 = 3;
        puVar9[0xb] = 0;
        goto code_r0x08010dcc;
    }
    if (puVar2 == NULL) {
        bVar5 = false;
        bVar4 = true;
        uVar8 = 5;
        iVar13 = 2;
    }
    else {
        bVar5 = false;
        bVar4 = true;
        uVar8 = 5;
        iVar13 = 2;
        *puVar2 = puVar9 + 4;
    }
code_r0x08010dcc:
    puVar17 = puVar9 + iVar13 * 4;
    piVar14 = arg1 + 0x50;
    iVar16 = *piVar14;
    puVar17[3] = 0;
    puVar17[1] = 0;
    puVar17[2] = 0xffffffff;
    *puVar17 = iVar16 + 0x1a110U & 0xffffff;
    if (iVar12 + 0xc0 != NULL) {
        *(iVar12 + 0xc0) = puVar17;
    }
    puVar17[4] = *piVar14 + 0x1a200U & 0xffffff;
    puVar17[5] = 0;
    puVar17[6] = 0xffffffff;
    puVar17[7] = 0;
    if (iVar12 + 0x18 != NULL) {
        *(iVar12 + 0x18) = puVar17 + 4;
    }
    puVar17[8] = *piVar14 + 0x1a300U & 0xffffff;
    puVar17[9] = uVar15;
    puVar17[10] = 0xffffffff;
    puVar17[0xb] = 0;
    if (iVar12 + 0x88 != NULL) {
        *(iVar12 + 0x88) = puVar17 + 8;
    }
    puVar17[0xc] = *piVar14 + 0x1a304U & 0xffffff;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0xffffffff;
    puVar17[0xf] = 0;
    if (iVar12 + 0x90 != NULL) {
        *(iVar12 + 0x90) = puVar17 + 0xc;
    }
    puVar17[0x10] = *piVar14 + 0x1a308U & 0xffffff;
    puVar17[0x11] = 0;
    puVar17[0x12] = 0xffffffff;
    puVar17[0x13] = 0;
    if (iVar12 + 0x98 != NULL) {
        *(iVar12 + 0x98) = puVar17 + 0x10;
    }
    iVar16 = 0x1d040;
    if (arg4 == 4) {
        iVar19 = 0x1a310;
        iVar13 = 0;
        do {
            iVar1 = iVar13 + 0x10;
            uVar8 = iVar19 + *piVar14;
            iVar19 = iVar19 + 4;
            *(puVar17 + iVar13 + 0x54) = 0xffffffff00000000;
            *(puVar17 + iVar13 + 0x5c) = 0;
            *(puVar17 + iVar13 + 0x50) = uVar8 & 0xffffff;
            iVar13 = iVar1;
        } while (iVar1 != 0x100);
        iVar13 = 0;
        iVar19 = 0x1d040;
        do {
            iVar6 = iVar1 + iVar13;
            iVar13 = iVar13 + 0x10;
            uVar8 = iVar19 + *piVar14;
            iVar19 = iVar19 + 4;
            *(puVar17 + iVar6 + 0x54) = 0xffffffff00000000;
            *(puVar17 + iVar6 + 0x5c) = 0;
            *(puVar17 + iVar6 + 0x50) = uVar8 & 0xffffff;
        } while (iVar13 != 0x100);
        iVar19 = *piVar14;
        iVar6 = iVar1 + iVar13;
        puVar18 = puVar17 + iVar13 + iVar1 + 0x50;
        *(puVar17 + iVar6 + 0x54) = 0xffffffff00000000;
        *(puVar17 + iVar6 + 0x5c) = 0;
        *(puVar17 + iVar6 + 0x50) = iVar19 + 0x1a390U & 0xffffff;
    }
    else {
        iVar19 = *piVar14;
        puVar17[0x17] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0xffffffff;
        puVar17[0x14] = iVar19 + 0x1a310U & 0xffffff;
        if (iVar12 + 0xa8 != NULL) {
            *(iVar12 + 0xa8) = puVar17 + 0x14;
        }
        puVar18 = puVar17 + 0x18;
        if (bVar4) {
            iVar19 = *piVar14;
            puVar17[0x1b] = 0;
            if (uVar8 < 3) {
                uVar8 = 2;
            }
            puVar17[0x19] = 0;
            puVar17[0x1a] = 0xffffffff;
            *puVar18 = iVar19 + 0x1a314U & 0xffffff;
            puVar18 = puVar17 + 0x1c;
            if (!bVar5) {
                iVar19 = *piVar14;
                puVar17[0x1d] = 0;
                puVar17[0x1e] = 0xffffffff;
                puVar17[0x1f] = 0;
                *puVar18 = iVar19 + 0x1a318U & 0xffffff;
                puVar18 = puVar17 + 0x20;
                if (uVar8 != 3) {
                    iVar19 = *piVar14;
                    puVar17[0x23] = 0;
                    puVar17[0x21] = 0;
                    puVar17[0x22] = 0xffffffff;
                    *puVar18 = iVar19 + 0x1a31cU & 0xffffff;
                    puVar18 = puVar17 + 0x24;
                    if (uVar8 != 4) {
                        iVar19 = *piVar14;
                        puVar17[0x25] = 0;
                        puVar17[0x26] = 0xffffffff;
                        puVar17[0x27] = 0;
                        *puVar18 = iVar19 + 0x1a320U & 0xffffff;
                        puVar18 = puVar17 + 0x28;
                        if (uVar8 != 5) {
                            iVar19 = *piVar14;
                            puVar17[0x2b] = 0;
                            puVar17[0x29] = 0;
                            puVar17[0x2a] = 0xffffffff;
                            *puVar18 = iVar19 + 0x1a324U & 0xffffff;
                            puVar18 = puVar17 + 0x2c;
                            if (uVar8 != 6) {
                                iVar19 = *piVar14;
                                puVar17[0x2d] = 0;
                                puVar17[0x2e] = 0xffffffff;
                                puVar17[0x2f] = 0;
                                *puVar18 = iVar19 + 0x1a328U & 0xffffff;
                                puVar18 = puVar17 + 0x30;
                                if (uVar8 != 7) {
                                    iVar19 = *piVar14;
                                    puVar17[0x33] = 0;
                                    puVar17[0x31] = 0;
                                    puVar17[0x32] = 0xffffffff;
                                    *puVar18 = iVar19 + 0x1a32cU & 0xffffff;
                                    puVar18 = puVar17 + 0x34;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar19 = *piVar14;
        puVar18[3] = 0;
        puVar18[1] = 0;
        puVar18[2] = 0xffffffff;
        *puVar18 = iVar19 + 0x1a390U & 0xffffff;
        if (iVar12 + 0xb8 != NULL) {
            *(iVar12 + 0xb8) = puVar18;
        }
    }
    iVar19 = *piVar14;
    puVar18[7] = 0;
    puVar18[5] = 0;
    puVar18[6] = 0xffffffff;
    puVar17 = puVar18 + 8;
    puVar18[4] = iVar19 + 0x1a394U & 0xffffff;
    if (uVar11 != 0) {
        iVar19 = *piVar14;
        puVar18[9] = 0;
        puVar18[10] = 0xffffffff;
        puVar18[0xb] = 0;
        puVar18[8] = iVar19 + 0x1d040U & 0xffffff;
        if (iVar12 + 0xa0 != NULL) {
            *(iVar12 + 0xa0) = puVar17;
        }
        puVar17 = puVar18 + 0xc;
        if (1 < uVar11) {
            iVar19 = uVar11 - 1;
            puVar18 = puVar17;
            do {
                iVar16 = iVar16 + 4;
                iVar3 = *piVar14;
                iVar19 = iVar19 + -1;
                puVar18[1] = 0;
                puVar18[2] = 0xffffffff;
                puVar18[3] = 0;
                puVar17 = puVar18 + 4;
                *puVar18 = iVar16 + iVar3 & 0xffffff;
                puVar18 = puVar17;
            } while (iVar19 != 0);
        }
    }
    iVar16 = *(arg1 + 0x50);
    uVar11 = *(arg1 + 0x90);
    puVar17[2] = 0xffffffff;
    puVar17[3] = 0;
    *puVar17 = iVar16 + 0x1a400U & 0xffffff;
    puVar17[1] = uVar11;
    if (iVar12 + 0x10 != NULL) {
        *(iVar12 + 0x10) = puVar17;
    }
    puVar17[4] = *piVar14 + 0x1a120U & 0xffffff;
    puVar17[5] = 7;
    puVar17[6] = 0xffffffff;
    puVar17[7] = 0;
    if (iVar12 + 200 != NULL) {
        *(iVar12 + 200) = puVar17 + 4;
    }
    *(iVar12 + 0xd0) = (puVar17 + 8) - puVar9;
    *arg3 = puVar17 + 8;
    return;
}


// ===== sym._setup_aead_cmdlistptrs @ 0x08011220 (size 1376) =====

void sym._setup_aead_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t *puVar5;
    uint32_t in_w4;
    uint32_t in_w5;
    uint32_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int *piVar10;
    int iVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    uint *puVar14;
    int iVar15;
    uint uVar16;
    
    if (8 < arg2) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8011780);
        (*pcVar4)();
    }
    iVar15 = arg4;
    puVar6 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
    uVar7 = arg2;
    *arg3 = puVar6;
    if (iVar15 == 2) {
        if (in_w4 == 0x20) {
            bVar3 = false;
            iVar8 = arg1 + uVar7 * 0x1bf8;
            iVar9 = 0xe58;
            if ((in_w5 & 1) == 0) {
                iVar9 = 0x11b8;
            }
            puVar14 = arg1 + 0x98;
        }
        else {
            if (in_w4 != 0x10) {
                return;
            }
            bVar3 = false;
            iVar8 = arg1 + uVar7 * 0x1bf8;
            iVar9 = 0xd80;
            if ((in_w5 & 1) == 0) {
                iVar9 = 0x10e0;
            }
            puVar14 = arg1 + 0x94;
        }
    }
    else {
        if (iVar15 == 1) {
            iVar9 = 0x1008;
            if ((in_w5 & 1) == 0) {
                iVar9 = 0x1368;
            }
            puVar14 = arg1 + 0xc4;
        }
        else {
            if (iVar15 != 0) {
                return;
            }
            iVar9 = 0xf30;
            if ((in_w5 & 1) == 0) {
                iVar9 = 0x1290;
            }
            puVar14 = arg1 + 0xbc;
        }
        iVar8 = arg1 + uVar7 * 0x1bf8;
        bVar3 = true;
    }
    iVar8 = iVar8 + iVar9;
    *(iVar8 + 0x7a0) = puVar6;
    uVar16 = *puVar14;
    piVar10 = arg1 + 0x50;
    iVar15 = *piVar10;
    puVar6[1] = 0;
    puVar6[2] = 0xffffffff;
    puVar6[3] = 0;
    *puVar6 = iVar15 + 0x1a100U & 0xffffff;
    uVar1 = *(arg1 + 0x8c);
    puVar6[4] = *piVar10 + 0x1a400U & 0xffffff;
    puVar6[5] = uVar1;
    puVar6[6] = 0xffffffff;
    puVar6[7] = 0;
    if (iVar8 + 0x7a8 != NULL) {
        *(iVar8 + 0x7a8) = puVar6 + 4;
    }
    uVar1 = in_w4 >> 2;
    iVar15 = 0x1d000;
    puVar6[8] = *piVar10 + 0x1d000U & 0xffffff;
    puVar6[9] = 0;
    puVar6[10] = 0xffffffff;
    puVar6[0xb] = 0;
    if (iVar8 + 2000 != NULL) {
        *(iVar8 + 2000) = puVar6 + 8;
    }
    if (uVar1 < 3) {
        uVar1 = 2;
    }
    iVar11 = uVar1 - 1;
    puVar5 = puVar6 + 0x1c;
    do {
        puVar12 = puVar5;
        iVar15 = iVar15 + 4;
        iVar2 = *piVar10;
        puVar12[-0xf] = 0;
        puVar12[-0xe] = 0xffffffff;
        puVar12[-0xd] = 0;
        iVar11 = iVar11 + -1;
        puVar12[-0x10] = iVar15 + iVar2 & 0xffffff;
        puVar5 = puVar12 + 4;
    } while (iVar11 != 0);
    puVar12[-0xc] = *piVar10 + 0x1a20cU & 0xffffff;
    puVar12[-0xb] = 0;
    puVar12[-10] = 0xffffffff;
    puVar12[-9] = 0;
    if (iVar8 + 0x7e0 != NULL) {
        *(iVar8 + 0x7e0) = puVar12 + -0xc;
    }
    puVar12[-8] = *piVar10 + 0x1a210U & 0xffffff;
    puVar12[-7] = 0;
    puVar12[-6] = 0xffffffff;
    puVar12[-5] = 0;
    if (bVar3) {
        puVar5 = puVar12 + -4;
        puVar12 = puVar12 + -8;
    }
    else {
        iVar15 = *piVar10;
        puVar12[-1] = 0;
        puVar12[-3] = 0;
        puVar12[-2] = 0xffffffff;
        puVar12[-4] = iVar15 + 0x1a214U & 0xffffff;
        *puVar12 = *piVar10 + 0x1a218U & 0xffffff;
        puVar12[1] = 0;
        puVar12[2] = 0xffffffff;
        puVar12[3] = 0;
    }
    iVar15 = 5;
    if ((in_w5 & 1) == 0) {
        iVar15 = 8;
    }
    *puVar5 = *piVar10 + 0x1a310U & 0xffffff;
    puVar12[5] = 0;
    puVar12[6] = 0xffffffff;
    puVar12[7] = 0;
    if (iVar8 + 0x848 != NULL) {
        *(iVar8 + 0x848) = puVar5;
    }
    iVar15 = iVar15 + -1;
    iVar11 = 0x1a314;
    iVar9 = 0;
    do {
        iVar13 = iVar9;
        iVar15 = iVar15 + -1;
        uVar1 = iVar11 + *piVar10;
        iVar11 = iVar11 + 4;
        *(puVar12 + iVar13 + 0x24) = 0xffffffff00000000;
        *(puVar12 + iVar13 + 0x2c) = 0;
        *(puVar12 + iVar13 + 0x20) = uVar1 & 0xffffff;
        iVar9 = iVar13 + 0x10;
    } while (iVar15 != 0);
    puVar5 = puVar12 + iVar13 + 0x30;
    *puVar5 = *piVar10 + 0x1a390U & 0xffffff;
    *(puVar12 + iVar13 + 0x34) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x3c) = 0;
    if (iVar8 + 0x858 != NULL) {
        *(iVar8 + 0x858) = puVar5;
    }
    iVar15 = *piVar10;
    *(puVar12 + iVar13 + 0x44) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x4c) = 0;
    *(puVar12 + iVar13 + 0x40) = iVar15 + 0x1a394U & 0xffffff;
    puVar5 = puVar12 + iVar13 + 0x50;
    *puVar5 = *piVar10 + 0x1d040U & 0xffffff;
    *(puVar12 + iVar13 + 0x54) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x5c) = 0;
    if (iVar8 + 0x840 != NULL) {
        *(iVar8 + 0x840) = puVar5;
    }
    iVar15 = 0;
    do {
        iVar13 = iVar9;
        iVar2 = *piVar10;
        iVar11 = iVar15 + 4;
        *(puVar12 + iVar13 + 0x54) = 0xffffffff00000000;
        *(puVar12 + iVar13 + 0x5c) = 0;
        *(puVar12 + iVar13 + 0x50) = iVar15 + iVar2 + 0x1d044U & 0xffffff;
        iVar9 = iVar13 + 0x10;
        iVar15 = iVar11;
    } while (iVar11 != 0x3c);
    puVar5 = puVar12 + iVar13 + 0x60;
    *puVar5 = *piVar10 + 0x1a110U & 0xffffff;
    *(puVar12 + iVar13 + 100) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x6c) = 0;
    if (iVar8 + 0x860 != NULL) {
        *(iVar8 + 0x860) = puVar5;
    }
    puVar5 = puVar12 + iVar13 + 0x70;
    *puVar5 = *piVar10 + 0x1a200U & 0xffffff;
    *(puVar12 + iVar13 + 0x74) = uVar16;
    *(puVar12 + iVar13 + 0x78) = 0xffffffff;
    if (iVar8 + 0x7b8 != NULL) {
        *(iVar8 + 0x7b8) = puVar5;
    }
    puVar5 = puVar12 + iVar13 + 0x80;
    *puVar5 = *piVar10 + 0x1a204U & 0xffffff;
    *(puVar12 + iVar13 + 0x84) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x8c) = 0;
    if (iVar8 + 0x7c0 != NULL) {
        *(iVar8 + 0x7c0) = puVar5;
    }
    puVar5 = puVar12 + iVar13 + 0x90;
    *puVar5 = *piVar10 + 0x1a208U & 0xffffff;
    *(puVar12 + iVar13 + 0x94) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0x9c) = 0;
    if (iVar8 + 0x7c8 != NULL) {
        *(iVar8 + 0x7c8) = puVar5;
    }
    if ((in_w5 & 1) == 0) {
        iVar15 = *(arg1 + 0x50);
        uVar16 = *(arg1 + 0xf8);
    }
    else {
        iVar15 = *(arg1 + 0x50);
        uVar16 = *(arg1 + 0xf4);
    }
    *(puVar12 + iVar13 + 0xa0) = iVar15 + 0x1a300U & 0xffffff;
    *(puVar12 + iVar13 + 0xa4) = uVar16;
    *(puVar12 + iVar13 + 0xa8) = 0xffffffff;
    if (iVar8 + 0x828 != NULL) {
        *(iVar8 + 0x828) = puVar12 + iVar13 + 0xa0;
    }
    puVar5 = puVar12 + iVar13 + 0xb0;
    *puVar5 = *piVar10 + 0x1a304U & 0xffffff;
    *(puVar12 + iVar13 + 0xb4) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0xbc) = 0;
    if (iVar8 + 0x830 != NULL) {
        *(iVar8 + 0x830) = puVar5;
    }
    puVar5 = puVar12 + iVar13 + 0xc0;
    *puVar5 = *piVar10 + 0x1a308U & 0xffffff;
    *(puVar12 + iVar13 + 0xc4) = 0xffffffff00000000;
    *(puVar12 + iVar13 + 0xcc) = 0;
    if (iVar8 + 0x838 != NULL) {
        *(iVar8 + 0x838) = puVar5;
    }
    uVar16 = *(arg1 + 0x90);
    puVar5 = puVar12 + iVar13 + 0xd0;
    *puVar5 = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
    *(puVar12 + iVar13 + 0xd4) = uVar16;
    *(puVar12 + iVar13 + 0xd8) = 0xffffffff;
    if (iVar8 + 0x7b0 != NULL) {
        *(iVar8 + 0x7b0) = puVar5;
    }
    puVar5 = puVar12 + iVar13 + 0xe0;
    *puVar5 = *piVar10 + 0x1a120U & 0xffffff;
    *(puVar12 + iVar13 + 0xe4) = 0xffffffff00000007;
    *(puVar12 + iVar13 + 0xec) = 0;
    if (iVar8 + 0x868 != NULL) {
        *(iVar8 + 0x868) = puVar5;
    }
    *(iVar8 + 0x870) = puVar12 + ((iVar13 + 0x10) - puVar6) + 0xe0;
    *arg3 = puVar12 + iVar13 + 0xf0;
    return;
}


// ===== sym._setup_aead_ccm_cmdlistptrs @ 0x08011780 (size 2232) =====

void sym._setup_aead_ccm_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t in_w3;
    uint32_t *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    int *piVar10;
    uint32_t *puVar11;
    int64_t iVar12;
    int iVar13;
    uint32_t *puVar14;
    
    if (arg2 < 9) {
        puVar7 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
        iVar9 = arg1 + arg2 * 0x1bf8;
        *arg3 = puVar7;
        if ((in_w3 & 1) == 0) {
            puVar14 = arg1 + 0xf0;
            iVar8 = iVar9 + 0x1cb8;
            puVar11 = arg1 + 0xb8;
            *(iVar9 + 0x1cb8) = puVar7;
        }
        else {
            puVar14 = arg1 + 0xec;
            iVar8 = iVar9 + 0x1be0;
            puVar11 = arg1 + 0xb4;
            *(iVar9 + 0x1be0) = puVar7;
        }
        uVar1 = *puVar14;
        piVar10 = arg1 + 0x50;
        iVar13 = *piVar10;
        uVar2 = *puVar11;
        puVar7[1] = 0;
        puVar7[2] = 0xffffffff;
        puVar7[3] = 0;
        *puVar7 = iVar13 + 0x1a100U & 0xffffff;
        uVar3 = *(arg1 + 0x8c);
        puVar7[4] = *piVar10 + 0x1a400U & 0xffffff;
        puVar7[5] = uVar3;
        puVar7[6] = 0xffffffff;
        puVar7[7] = 0;
        if (iVar8 + 8 != NULL) {
            *(iVar8 + 8) = puVar7 + 4;
        }
        iVar13 = *piVar10;
        puVar7[9] = 0;
        puVar7[10] = 0xffffffff;
        puVar7[0xb] = 0;
        puVar7[8] = iVar13 + 0x1a200U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0xffffffff;
        puVar7[0xf] = 0;
        puVar7[0xc] = iVar13 + 0x1a208U & 0xffffff;
        puVar7[0x10] = *piVar10 + 0x1a110U & 0xffffff;
        puVar7[0x11] = 0;
        puVar7[0x12] = 0xffffffff;
        puVar7[0x13] = 0;
        if (iVar8 + 0xc0 != NULL) {
            *(iVar8 + 0xc0) = puVar7 + 0x10;
        }
        puVar7[0x14] = *piVar10 + 0x1a200U & 0xffffff;
        puVar7[0x15] = uVar2;
        puVar7[0x16] = 0xffffffff;
        puVar7[0x17] = 0;
        if (iVar8 + 0x18 != NULL) {
            *(iVar8 + 0x18) = puVar7 + 0x14;
        }
        puVar7[0x18] = *piVar10 + 0x1a204U & 0xffffff;
        puVar7[0x19] = 0;
        puVar7[0x1a] = 0xffffffff;
        puVar7[0x1b] = 0;
        if (iVar8 + 0x20 != NULL) {
            *(iVar8 + 0x20) = puVar7 + 0x18;
        }
        puVar7[0x1c] = *piVar10 + 0x1a208U & 0xffffff;
        puVar7[0x1d] = 0;
        puVar7[0x1e] = 0xffffffff;
        puVar7[0x1f] = 0;
        if (iVar8 + 0x28 != NULL) {
            *(iVar8 + 0x28) = puVar7 + 0x1c;
        }
        uVar2 = *(arg1 + 0x110);
        puVar7[0x20] = *(arg1 + 0x50) + 0x1a21cU & 0xffffff;
        puVar7[0x21] = uVar2;
        puVar7[0x22] = 0xffffffff;
        puVar7[0x23] = 0;
        if (iVar8 + 0x68 != NULL) {
            *(iVar8 + 0x68) = puVar7 + 0x20;
        }
        uVar2 = *(arg1 + 0x10c);
        puVar7[0x24] = *(arg1 + 0x50) + 0x1a23cU & 0xffffff;
        puVar7[0x25] = uVar2;
        puVar7[0x26] = 0xffffffff;
        puVar7[0x27] = 0;
        if (iVar8 + 0x60 != NULL) {
            *(iVar8 + 0x60) = puVar7 + 0x24;
        }
        uVar2 = *(arg1 + 0x108);
        puVar7[0x28] = *(arg1 + 0x50) + 0x1a238U & 0xffffff;
        puVar7[0x29] = uVar2;
        puVar7[0x2a] = 0xffffffff;
        puVar7[0x2b] = 0;
        if (iVar8 + 0x58 != NULL) {
            *(iVar8 + 0x58) = puVar7 + 0x28;
        }
        uVar2 = *(arg1 + 0x104);
        puVar7[0x2c] = *(arg1 + 0x50) + 0x1a234U & 0xffffff;
        puVar7[0x2d] = uVar2;
        puVar7[0x2e] = 0xffffffff;
        puVar7[0x2f] = 0;
        if (iVar8 + 0x50 != NULL) {
            *(iVar8 + 0x50) = puVar7 + 0x2c;
        }
        puVar7[0x30] = *piVar10 + 0x1a300U & 0xffffff;
        puVar7[0x31] = uVar1;
        puVar7[0x32] = 0xffffffff;
        puVar7[0x33] = 0;
        if (iVar8 + 0x88 != NULL) {
            *(iVar8 + 0x88) = puVar7 + 0x30;
        }
        puVar7[0x34] = *piVar10 + 0x1a304U & 0xffffff;
        puVar7[0x35] = 0;
        puVar7[0x36] = 0xffffffff;
        puVar7[0x37] = 0;
        if (iVar8 + 0x90 != NULL) {
            *(iVar8 + 0x90) = puVar7 + 0x34;
        }
        puVar7[0x38] = *piVar10 + 0x1a308U & 0xffffff;
        puVar7[0x39] = 0;
        puVar7[0x3a] = 0xffffffff;
        puVar7[0x3b] = 0;
        if (iVar8 + 0x98 != NULL) {
            *(iVar8 + 0x98) = puVar7 + 0x38;
        }
        iVar13 = *piVar10;
        puVar7[0x3f] = 0;
        puVar7[0x3d] = 0;
        puVar7[0x3e] = 0xffffffff;
        puVar7[0x3c] = iVar13 + 0x1a310U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x41] = 0;
        puVar7[0x42] = 0xffffffff;
        puVar7[0x43] = 0;
        puVar7[0x40] = iVar13 + 0x1a314U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x45] = 0;
        puVar7[0x46] = 0xffffffff;
        puVar7[0x47] = 0;
        puVar7[0x44] = iVar13 + 0x1a318U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x49] = 0;
        puVar7[0x4a] = 0xffffffff;
        puVar7[0x4b] = 0;
        puVar7[0x48] = iVar13 + 0x1a31cU & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x4d] = 0;
        puVar7[0x4e] = 0xffffffff;
        puVar7[0x4f] = 0;
        puVar7[0x4c] = iVar13 + 0x1a320U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x51] = 0;
        puVar7[0x52] = 0xffffffff;
        puVar7[0x53] = 0;
        puVar7[0x50] = iVar13 + 0x1a324U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x55] = 0;
        puVar7[0x56] = 0xffffffff;
        puVar7[0x57] = 0;
        puVar7[0x54] = iVar13 + 0x1a328U & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x59] = 0;
        puVar7[0x5a] = 0xffffffff;
        puVar7[0x5b] = 0;
        puVar7[0x58] = iVar13 + 0x1a32cU & 0xffffff;
        iVar13 = *piVar10;
        puVar7[0x5d] = 0;
        puVar7[0x5e] = 0xffffffff;
        puVar7[0x5f] = 0;
        puVar7[0x5c] = iVar13 + 0x1a390U & 0xffffff;
        iVar4 = *piVar10;
        puVar7[0x61] = 0;
        puVar7[0x62] = 0xffffffff;
        puVar7[99] = 0;
        iVar13 = 0x1d040;
        puVar7[0x60] = iVar4 + 0x1a394U & 0xffffff;
        iVar9 = 0;
        do {
            iVar12 = iVar9;
            uVar1 = iVar13 + *piVar10;
            iVar13 = iVar13 + 4;
            *(puVar7 + iVar12 + 0x194) = 0xffffffff00000000;
            *(puVar7 + iVar12 + 0x19c) = 0;
            *(puVar7 + iVar12 + 400) = uVar1 & 0xffffff;
            iVar9 = iVar12 + 0x10;
        } while (iVar12 + 0x10 != 0x100);
        iVar13 = *piVar10;
        *(puVar7 + iVar12 + 0x1ac) = 0;
        *(puVar7 + iVar12 + 0x1a4) = 0xffffffff00000000;
        *(puVar7 + iVar12 + 0x1a0) = iVar13 + 0x1d040U & 0xffffff;
        if (iVar8 + 0xa0 != NULL) {
            *(iVar8 + 0xa0) = puVar7 + iVar12 + 0x1a0;
        }
        iVar13 = *piVar10;
        *(puVar7 + iVar12 + 0x1bc) = 0;
        *(puVar7 + iVar12 + 0x1b4) = 0xffffffff00000000;
        *(puVar7 + iVar12 + 0x1b0) = iVar13 + 0x1d044U & 0xffffff;
        iVar13 = *piVar10;
        *(puVar7 + iVar12 + 0x1c4) = 0xffffffff00000000;
        *(puVar7 + iVar12 + 0x1cc) = 0;
        *(puVar7 + iVar12 + 0x1c0) = iVar13 + 0x1d048U & 0xffffff;
        iVar13 = *piVar10;
        *(puVar7 + iVar12 + 0x1d4) = 0xffffffff00000000;
        *(puVar7 + iVar12 + 0x1dc) = 0;
        *(puVar7 + iVar12 + 0x1d0) = iVar13 + 0x1d04cU & 0xffffff;
        if ((in_w3 & 1) == 0) {
            iVar13 = *piVar10;
            *(puVar7 + iVar12 + 0x1ec) = 0;
            *(puVar7 + iVar12 + 0x1e4) = 0xffffffff00000000;
            *(puVar7 + iVar12 + 0x1e0) = iVar13 + 0x1d050U & 0xffffff;
            iVar13 = *piVar10;
            *(puVar7 + iVar12 + 500) = 0xffffffff00000000;
            *(puVar7 + iVar12 + 0x1fc) = 0;
            *(puVar7 + iVar12 + 0x1f0) = iVar13 + 0x1d054U & 0xffffff;
            iVar13 = *piVar10;
            *(puVar7 + iVar12 + 0x204) = 0xffffffff00000000;
            *(puVar7 + iVar12 + 0x20c) = 0;
            *(puVar7 + iVar12 + 0x200) = iVar13 + 0x1d058U & 0xffffff;
            iVar13 = *piVar10;
            *(puVar7 + iVar12 + 0x214) = 0xffffffff00000000;
            iVar5 = iVar12 + 0x220;
            *(puVar7 + iVar12 + 0x21c) = 0;
            iVar9 = iVar12 + 0x210;
            *(puVar7 + iVar12 + 0x210) = iVar13 + 0x1d05cU & 0xffffff;
        }
        else {
            iVar9 = iVar12 + 0x1d0;
            iVar5 = iVar12 + 0x1e0;
        }
        *(puVar7 + iVar5) = *piVar10 + 0x1a350U & 0xffffff;
        *(puVar7 + iVar9 + 0x14) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x1c) = 0;
        if (iVar8 + 0xb0 != NULL) {
            *(iVar8 + 0xb0) = puVar7 + iVar5;
        }
        iVar13 = *piVar10;
        *(puVar7 + iVar9 + 0x24) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x2c) = 0;
        *(puVar7 + iVar9 + 0x20) = iVar13 + 0x1a354U & 0xffffff;
        iVar13 = *piVar10;
        *(puVar7 + iVar9 + 0x34) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x3c) = 0;
        *(puVar7 + iVar9 + 0x30) = iVar13 + 0x1a358U & 0xffffff;
        iVar13 = *piVar10;
        *(puVar7 + iVar9 + 0x44) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x4c) = 0;
        *(puVar7 + iVar9 + 0x40) = iVar13 + 0x1a35cU & 0xffffff;
        puVar14 = puVar7 + iVar9 + 0x50;
        *puVar14 = *piVar10 + 0x1d000U & 0xffffff;
        *(puVar7 + iVar9 + 0x54) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x5c) = 0;
        if (iVar8 + 0x30 != NULL) {
            *(iVar8 + 0x30) = puVar14;
        }
        iVar13 = *piVar10;
        *(puVar7 + iVar9 + 0x6c) = 0;
        *(puVar7 + iVar9 + 100) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x60) = iVar13 + 0x1d004U & 0xffffff;
        iVar13 = *piVar10;
        *(puVar7 + iVar9 + 0x74) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x7c) = 0;
        *(puVar7 + iVar9 + 0x70) = iVar13 + 0x1d008U & 0xffffff;
        puVar14 = puVar7 + iVar9 + 0x80;
        *puVar14 = *piVar10 + 0x1d00cU & 0xffffff;
        *(puVar7 + iVar9 + 0x84) = 0xffffffff00000000;
        *(puVar7 + iVar9 + 0x8c) = 0;
        if ((in_w3 & 1) == 0) {
            iVar13 = *piVar10;
            *(puVar7 + iVar9 + 0x94) = 0xffffffff00000000;
            *(puVar7 + iVar9 + 0x9c) = 0;
            *(puVar7 + iVar9 + 0x90) = iVar13 + 0x1d010U & 0xffffff;
            iVar13 = *piVar10;
            *(puVar7 + iVar9 + 0xa4) = 0xffffffff00000000;
            *(puVar7 + iVar9 + 0xac) = 0;
            *(puVar7 + iVar9 + 0xa0) = iVar13 + 0x1d014U & 0xffffff;
            iVar13 = *piVar10;
            *(puVar7 + iVar9 + 0xb4) = 0xffffffff00000000;
            *(puVar7 + iVar9 + 0xbc) = 0;
            *(puVar7 + iVar9 + 0xb0) = iVar13 + 0x1d018U & 0xffffff;
            puVar14 = puVar7 + iVar9 + 0xc0;
            *puVar14 = *piVar10 + 0x1d01cU & 0xffffff;
            iVar12 = iVar9 + 0xd0;
            *(puVar7 + iVar9 + 0xc4) = 0xffffffff00000000;
            *(puVar7 + iVar9 + 0xcc) = 0;
        }
        else {
            iVar12 = iVar9 + 0x90;
        }
        *(puVar7 + iVar12) = *piVar10 + 0x1a20cU & 0xffffff;
        puVar14[5] = 0;
        puVar14[6] = 0xffffffff;
        puVar14[7] = 0;
        if (iVar8 + 0x40 != NULL) {
            *(iVar8 + 0x40) = puVar7 + iVar12;
        }
        iVar13 = *piVar10;
        puVar14[0xb] = 0;
        puVar14[9] = 0;
        puVar14[10] = 0xffffffff;
        puVar14[8] = iVar13 + 0x1a210U & 0xffffff;
        iVar13 = *piVar10;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0xffffffff;
        puVar14[0xf] = 0;
        puVar14[0xc] = iVar13 + 0x1a214U & 0xffffff;
        iVar13 = *piVar10;
        puVar14[0x11] = 0;
        puVar14[0x12] = 0xffffffff;
        puVar14[0x13] = 0;
        puVar14[0x10] = iVar13 + 0x1a218U & 0xffffff;
        puVar14[0x14] = *piVar10 + 0x1a220U & 0xffffff;
        puVar14[0x15] = 0;
        puVar14[0x16] = 0xffffffff;
        puVar14[0x17] = 0;
        if (iVar8 + 0x48 != NULL) {
            *(iVar8 + 0x48) = puVar14 + 0x14;
        }
        iVar13 = *(arg1 + 0x50);
        puVar14[0x19] = 0;
        puVar14[0x1a] = 0xffffffff;
        puVar14[0x1b] = 0;
        puVar14[0x18] = iVar13 + 0x1a224U & 0xffffff;
        iVar13 = *(arg1 + 0x50);
        puVar14[0x1d] = 0;
        puVar14[0x1e] = 0xffffffff;
        puVar14[0x1f] = 0;
        puVar14[0x1c] = iVar13 + 0x1a228U & 0xffffff;
        iVar13 = *(arg1 + 0x50);
        puVar14[0x21] = 0;
        puVar14[0x22] = 0xffffffff;
        puVar14[0x23] = 0;
        puVar14[0x20] = iVar13 + 0x1a22cU & 0xffffff;
        uVar1 = *(arg1 + 0x90);
        puVar14[0x24] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar14[0x25] = uVar1;
        puVar14[0x26] = 0xffffffff;
        puVar14[0x27] = 0;
        if (iVar8 + 0x10 != NULL) {
            *(iVar8 + 0x10) = puVar14 + 0x24;
        }
        puVar14[0x28] = *piVar10 + 0x1a120U & 0xffffff;
        puVar14[0x29] = 7;
        puVar14[0x2a] = 0xffffffff;
        puVar14[0x2b] = 0;
        if (iVar8 + 200 != NULL) {
            *(iVar8 + 200) = puVar14 + 0x28;
        }
        *(iVar8 + 0xd0) = (puVar14 + 0x2c) - puVar7;
        *arg3 = puVar14 + 0x2c;
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8012038);
    (*pcVar6)();
}


// ===== sym._setup_f8_cmdlistptrs @ 0x08012038 (size 836) =====

void sym._setup_f8_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int in_w3;
    uint32_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    
    if (arg2 < 9) {
        puVar5 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
        iVar7 = arg1 + arg2 * 0x1bf8;
        *arg3 = puVar5;
        if (in_w3 == 0) {
            puVar8 = arg1 + 0xcc;
            iVar6 = iVar7 + 0x1e68;
            *(iVar7 + 0x1e68) = puVar5;
        }
        else {
            puVar8 = arg1 + 0xd0;
            iVar6 = iVar7 + 8000;
            *(iVar7 + 8000) = puVar5;
        }
        iVar1 = *(arg1 + 0x50);
        uVar2 = *puVar8;
        puVar5[3] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0xffffffff;
        *puVar5 = iVar1 + 0x1a100U & 0xffffff;
        uVar3 = *(arg1 + 0x8c);
        puVar5[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar5[5] = uVar3;
        puVar5[6] = 0xffffffff;
        puVar5[7] = 0;
        if (iVar6 + 8 != NULL) {
            *(iVar6 + 8) = puVar5 + 4;
        }
        puVar5[8] = *(arg1 + 0x50) + 0x1a110U & 0xffffff;
        puVar5[9] = 0;
        puVar5[10] = 0xffffffff;
        puVar5[0xb] = 0;
        if (iVar6 + 0xc0 != NULL) {
            *(iVar6 + 0xc0) = puVar5 + 8;
        }
        puVar5[0xc] = *(arg1 + 0x50) + 0x1a200U & 0xffffff;
        puVar5[0xd] = uVar2;
        puVar5[0xe] = 0xffffffff;
        puVar5[0xf] = 0;
        if (iVar6 + 0x18 != NULL) {
            *(iVar6 + 0x18) = puVar5 + 0xc;
        }
        puVar5[0x10] = *(arg1 + 0x50) + 0x1a204U & 0xffffff;
        puVar5[0x11] = 0;
        puVar5[0x12] = 0xffffffff;
        puVar5[0x13] = 0;
        if (iVar6 + 0x20 != NULL) {
            *(iVar6 + 0x20) = puVar5 + 0x10;
        }
        puVar5[0x14] = *(arg1 + 0x50) + 0x1a208U & 0xffffff;
        puVar5[0x15] = 0;
        puVar5[0x16] = 0xffffffff;
        puVar5[0x17] = 0;
        if (iVar6 + 0x28 != NULL) {
            *(iVar6 + 0x28) = puVar5 + 0x14;
        }
        puVar5[0x18] = *(arg1 + 0x50) + 0x1a300U & 0xffffff;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0xffffffff;
        puVar5[0x1b] = 0;
        if (iVar6 + 0x88 != NULL) {
            *(iVar6 + 0x88) = puVar5 + 0x18;
        }
        puVar5[0x1c] = *(arg1 + 0x50) + 0x1a304U & 0xffffff;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0xffffffff;
        puVar5[0x1f] = 0;
        if (iVar6 + 0x90 != NULL) {
            *(iVar6 + 0x90) = puVar5 + 0x1c;
        }
        puVar5[0x20] = *(arg1 + 0x50) + 0x1a308U & 0xffffff;
        puVar5[0x21] = 0;
        puVar5[0x22] = 0xffffffff;
        puVar5[0x23] = 0;
        if (iVar6 + 0x98 != NULL) {
            *(iVar6 + 0x98) = puVar5 + 0x20;
        }
        puVar5[0x24] = *(arg1 + 0x50) + 0x1d000U & 0xffffff;
        puVar5[0x25] = 0;
        puVar5[0x26] = 0xffffffff;
        puVar5[0x27] = 0;
        if (iVar6 + 0x30 != NULL) {
            *(iVar6 + 0x30) = puVar5 + 0x24;
        }
        iVar1 = *(arg1 + 0x50);
        puVar5[0x2b] = 0;
        puVar5[0x29] = 0;
        puVar5[0x2a] = 0xffffffff;
        puVar5[0x28] = iVar1 + 0x1d004U & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar5[0x2d] = 0;
        puVar5[0x2e] = 0xffffffff;
        puVar5[0x2f] = 0;
        puVar5[0x2c] = iVar1 + 0x1d008U & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar5[0x31] = 0;
        puVar5[0x32] = 0xffffffff;
        puVar5[0x33] = 0;
        puVar5[0x30] = iVar1 + 0x1d00cU & 0xffffff;
        puVar5[0x34] = *(arg1 + 0x50) + 0x1a20cU & 0xffffff;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0xffffffff;
        puVar5[0x37] = 0;
        if (iVar6 + 0x40 != NULL) {
            *(iVar6 + 0x40) = puVar5 + 0x34;
        }
        iVar1 = *(arg1 + 0x50);
        puVar5[0x39] = 0;
        puVar5[0x3a] = 0xffffffff;
        puVar5[0x3b] = 0;
        puVar5[0x38] = iVar1 + 0x1a210U & 0xffffff;
        uVar2 = *(arg1 + 0x90);
        puVar5[0x3c] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar5[0x3d] = uVar2;
        puVar5[0x3e] = 0xffffffff;
        puVar5[0x3f] = 0;
        if (iVar6 + 0x10 != NULL) {
            *(iVar6 + 0x10) = puVar5 + 0x3c;
        }
        iVar1 = *(arg1 + 0x50);
        puVar5[0x43] = 0;
        puVar5[0x41] = 7;
        puVar5[0x42] = 0xffffffff;
        puVar5[0x40] = iVar1 + 0x1a120U & 0xffffff;
        if (iVar6 + 200 != NULL) {
            *(iVar6 + 200) = puVar5 + 0x40;
        }
        *(iVar6 + 0xd0) = 0x110;
        *arg3 = puVar5 + 0x44;
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x801237c);
    (*pcVar4)();
}


// ===== sym._setup_f9_cmdlistptrs @ 0x0801237c (size 768) =====

void sym._setup_f9_cmdlistptrs(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int in_w3;
    uint32_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    
    if (arg2 < 9) {
        iVar7 = arg1 + arg2 * 0x1bf8;
        puVar5 = (*arg3 + *(arg1 + 0x170)) - 1U & -*(arg1 + 0x170);
        *arg3 = puVar5;
        if (in_w3 == 0) {
            puVar8 = arg1 + 0xfc;
            iVar6 = iVar7 + 0x2018;
            *(iVar7 + 0x2018) = puVar5;
        }
        else {
            puVar8 = arg1 + 0x100;
            iVar6 = iVar7 + 0x20f0;
            *(iVar7 + 0x20f0) = puVar5;
        }
        iVar1 = *(arg1 + 0x50);
        uVar2 = *puVar8;
        puVar5[3] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0xffffffff;
        *puVar5 = iVar1 + 0x1a100U & 0xffffff;
        uVar3 = *(arg1 + 0x8c);
        puVar5[4] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar5[5] = uVar3;
        puVar5[6] = 0xffffffff;
        puVar5[7] = 0;
        if (iVar6 + 8 != NULL) {
            *(iVar6 + 8) = puVar5 + 4;
        }
        puVar5[8] = *(arg1 + 0x50) + 0x1a110U & 0xffffff;
        puVar5[9] = 0;
        puVar5[10] = 0xffffffff;
        puVar5[0xb] = 0;
        if (iVar6 + 0xc0 != NULL) {
            *(iVar6 + 0xc0) = puVar5 + 8;
        }
        puVar5[0xc] = *(arg1 + 0x50) + 0x1a200U & 0xffffff;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0xffffffff;
        puVar5[0xf] = 0;
        if (iVar6 + 0x18 != NULL) {
            *(iVar6 + 0x18) = puVar5 + 0xc;
        }
        puVar5[0x10] = *(arg1 + 0x50) + 0x1a300U & 0xffffff;
        puVar5[0x11] = uVar2;
        puVar5[0x12] = 0xffffffff;
        puVar5[0x13] = 0;
        if (iVar6 + 0x88 != NULL) {
            *(iVar6 + 0x88) = puVar5 + 0x10;
        }
        puVar5[0x14] = *(arg1 + 0x50) + 0x1a304U & 0xffffff;
        puVar5[0x15] = 0;
        puVar5[0x16] = 0xffffffff;
        puVar5[0x17] = 0;
        if (iVar6 + 0x90 != NULL) {
            *(iVar6 + 0x90) = puVar5 + 0x14;
        }
        puVar5[0x18] = *(arg1 + 0x50) + 0x1a308U & 0xffffff;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0xffffffff;
        puVar5[0x1b] = 0;
        if (iVar6 + 0x98 != NULL) {
            *(iVar6 + 0x98) = puVar5 + 0x18;
        }
        puVar5[0x1c] = *(arg1 + 0x50) + 0x1a310U & 0xffffff;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0xffffffff;
        puVar5[0x1f] = 0;
        if (iVar6 + 0xa8 != NULL) {
            *(iVar6 + 0xa8) = puVar5 + 0x1c;
        }
        iVar1 = *(arg1 + 0x50);
        puVar5[0x21] = 0;
        puVar5[0x22] = 0xffffffff;
        puVar5[0x23] = 0;
        puVar5[0x20] = iVar1 + 0x1a314U & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar5[0x25] = 0;
        puVar5[0x26] = 0xffffffff;
        puVar5[0x27] = 0;
        puVar5[0x24] = iVar1 + 0x1a318U & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar5[0x29] = 0;
        puVar5[0x2a] = 0xffffffff;
        puVar5[0x2b] = 0;
        puVar5[0x28] = iVar1 + 0x1a31cU & 0xffffff;
        iVar1 = *(arg1 + 0x50);
        puVar5[0x2d] = 0;
        puVar5[0x2e] = 0xffffffff;
        puVar5[0x2f] = 0;
        puVar5[0x2c] = iVar1 + 0x1a320U & 0xffffff;
        puVar5[0x30] = *(arg1 + 0x50) + 0x1a390U & 0xffffff;
        puVar5[0x31] = 0;
        puVar5[0x32] = 0xffffffff;
        puVar5[0x33] = 0;
        if (iVar6 + 0xb8 != NULL) {
            *(iVar6 + 0xb8) = puVar5 + 0x30;
        }
        iVar1 = *(arg1 + 0x50);
        puVar5[0x37] = 0;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0xffffffff;
        puVar5[0x34] = iVar1 + 0x1a394U & 0xffffff;
        uVar2 = *(arg1 + 0x90);
        puVar5[0x38] = *(arg1 + 0x50) + 0x1a400U & 0xffffff;
        puVar5[0x39] = uVar2;
        puVar5[0x3a] = 0xffffffff;
        puVar5[0x3b] = 0;
        if (iVar6 + 0x10 != NULL) {
            *(iVar6 + 0x10) = puVar5 + 0x38;
        }
        puVar5[0x3c] = *(arg1 + 0x50) + 0x1a120U & 0xffffff;
        puVar5[0x3d] = 7;
        puVar5[0x3e] = 0xffffffff;
        puVar5[0x3f] = 0;
        if (iVar6 + 200 != NULL) {
            *(iVar6 + 200) = puVar5 + 0x3c;
        }
        *(iVar6 + 0xd0) = 0x100;
        *arg3 = puVar5 + 0x40;
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x801267c);
    (*pcVar4)();
}


// ===== sym.qce_dummy_complete @ 0x0801267c (size 64) =====

void sym.qce_dummy_complete(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        return;
    }
    *in_x18 = unaff_x30;
    _printk(0x800232a,"qce_dummy_complete");
    return;
}


// ===== sym.__cfi_check_fail @ 0x080126bc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08012700

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
    //switch table (4 cases) at 0x800239d
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012714);
    (*pcVar1)();
}

