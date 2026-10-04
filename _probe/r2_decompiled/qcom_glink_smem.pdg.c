// decompiled from qcom_glink_smem by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x080018e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x4a9ac5eb60f9335) {
        if (arg1 < -0x277a3e03fe755ab5) {
            if (arg1 == -0x7b4aab58b2360ab5) {
                pcVar2 = sym.glink_smem_rx_advance.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
            }
            else {
                if (arg1 != -0x4b32cbb75708e89d) goto code_r0x080018a4;
                pcVar2 = sym.qcom_glink_smem_unregister.cfi_jt;
            }
        }
        else if (arg1 == -0x277a3e03fe755ab5) {
            pcVar2 = sym.qcom_glink_smem_register.cfi_jt;
        }
        else {
            if (arg1 != -0x1603dc51a55e8218) goto code_r0x080018a4;
            pcVar2 = sym.qcom_glink_smem_start.cfi_jt;
        }
    }
    else if (arg1 < 0x51abad1cc76803c3) {
        if (arg1 != -0x4a9ac5eb60f9335) {
            if ((arg1 == 0xa95a1513bc7540d) && ((pcVar1 + -0x80011c8 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x080018a4;
        }
        pcVar2 = sym.glink_smem_rx_peak.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
    }
    else if (arg1 == 0x51abad1cc76803c3) {
        pcVar2 = sym.glink_smem_tx_write.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
    }
    else {
        if (arg1 != 0x5b83a3fd302a5421) goto code_r0x080018a4;
        pcVar2 = sym.qcom_glink_smem_release.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080018a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018f8);
    (*pcVar1)();
}


// ===== sym.glink_smem_rx_peak.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011a0 (size 8) =====

void sym.glink_smem_rx_peak.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt
               (uint64_t *param_1,int64_t param_2,int param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *param_1;
    if (*param_1[6] <= uVar5) {
        uVar1 = *param_1[6] + param_3;
        iVar4 = 0;
        if (uVar5 <= uVar1) {
            iVar4 = uVar5;
        }
        uVar6 = uVar1 - iVar4;
        uVar5 = uVar5 - uVar6;
        uVar2 = param_4;
        if (uVar5 <= param_4) {
            uVar2 = uVar5;
        }
        if (uVar2 != 0) {
            __memcpy_fromio(param_2,param_1[8] + uVar6,uVar2);
        }
        if (uVar5 < param_4) {
            __memcpy_fromio(param_2 + uVar2,param_1[8],param_4 - uVar2);
        }
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8001674);
    (*pcVar3)();
}


// ===== sym.qcom_glink_smem_start.cfi_jt @ 0x080011a8 (size 8) =====

void sym.qcom_glink_smem_start.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_glink_native_start();
    return;
}


// ===== sym.qcom_glink_smem_register.cfi_jt @ 0x080011b0 (size 8) =====

void sym.qcom_glink_smem_register.cfi_jt(int64_t param_1,ulong param_2)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    int64_t iStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    iStack_58 = 0;
    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x390);
    if (iVar4 == 0) {
        uVar9 = 0xfffffffffffffff4;
        goto code_r0x08001474;
    }
    piVar8 = *(param_1 + 0x60);
    *(iVar4 + 0x60) = param_1;
    *(iVar4 + 0x2f0) = param_2;
    *(iVar4 + 0x330) = sym.qcom_glink_smem_release.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
    iVar7 = piVar8[0xe];
    if (iVar7 == 0) {
        iVar7 = *piVar8;
    }
    dev_set_name(iVar4,"%s:%pOFn",iVar7,param_2);
    iVar2 = device_register(iVar4);
    if (iVar2 != 0) {
        _printk(0x8000132);
        put_device(iVar4);
        uVar9 = iVar2;
        goto code_r0x08001474;
    }
    uVar3 = of_property_read_variable_u32_array(*(iVar4 + 0x2f0),"qcom,remote-pid",&uStack_4c,1,0);
    if (uVar3 < 0) {
        uVar9 = uVar3;
        pcVar6 = "failed to parse qcom,remote-pid\n";
code_r0x0800141c:
        _dev_err(iVar4,pcVar6);
    }
    else {
        iVar7 = devm_kmalloc(iVar4,0x50,0xdc0);
        iVar5 = devm_kmalloc(iVar4,0x50,0xdc0);
        uVar9 = 0xfffffff4;
        if ((iVar7 != 0) && (iVar5 != 0)) {
            uVar3 = qcom_smem_alloc(uStack_4c,0x1de,0x20);
            if ((uVar3 != 0xffffffef) && (uVar9 = uVar3, uVar3 != 0)) {
                pcVar6 = "failed to allocate glink descriptors\n";
                goto code_r0x0800141c;
            }
            uVar9 = qcom_smem_get(uStack_4c,0x1de,&iStack_58);
            if (uVar9 < 0xfffffffffffff001) {
                if (iStack_58 == 0x20) {
                    puVar1 = uVar9 + 8;
                    *(iVar5 + 0x30) = uVar9;
                    *(iVar5 + 0x38) = uVar9 + 4;
                    *(iVar7 + 0x30) = puVar1;
                    *(iVar7 + 0x38) = uVar9 + 0xc;
                    uVar3 = qcom_smem_alloc(uStack_4c,0x1df,0x4000);
                    if ((uVar3 != 0xffffffef) && (uVar9 = uVar3, uVar3 != 0)) {
                        pcVar6 = "failed to allocate TX fifo\n";
                        goto code_r0x0800141c;
                    }
                    uVar9 = qcom_smem_get(uStack_4c,0x1df,iVar5);
                    *(iVar5 + 0x40) = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        *(iVar7 + 8) = sym.glink_smem_rx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x10) = sym.glink_smem_rx_peak.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x18) = sym.glink_smem_rx_advance.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x48) = uStack_4c;
                        *(iVar5 + 0x48) = uStack_4c;
                        *(iVar5 + 8) = sym.glink_smem_tx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar5 + 0x20) = sym.glink_smem_tx_write.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *puVar1 = 0;
                        **(iVar5 + 0x38) = 0;
                        uVar9 = qcom_glink_native_probe(iVar4,9,iVar7,iVar5,0);
                        if (uVar9 < 0xfffffffffffff001) goto code_r0x08001474;
                        uVar9 = uVar9 & 0xffffffff;
                    }
                    else {
                        _dev_err(iVar4,"failed to acquire TX fifo\n");
                        uVar9 = *(iVar5 + 0x40);
                    }
                }
                else {
                    _dev_err(iVar4,"glink descriptor of invalid size\n");
                    uVar9 = 0xffffffea;
                }
            }
            else {
                _dev_err(iVar4,"failed to acquire xprt descriptor\n");
            }
        }
    }
    device_unregister(iVar4);
    uVar9 = uVar9;
code_r0x08001474:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar9);
    *extraout_x18 = sym.qcom_glink_smem_release;
    kfree();
    return;
}


// ===== sym.glink_smem_tx_write.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011b8 (size 8) =====

void sym.glink_smem_tx_write.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt
               (uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *param_1[7];
    uVar5 = uVar1;
    uVar4 = *param_1 - uVar5;
    if (*param_1 < uVar5) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8001824);
        (*pcVar2)();
    }
    uVar6 = param_3;
    if (uVar4 <= param_3) {
        uVar6 = uVar4;
    }
    if (uVar6 != 0) {
        memcpy(param_1[8] + uVar5,param_2,uVar6);
    }
    if (uVar4 < param_3) {
        memcpy(param_1[8],param_2 + uVar6,param_3 - uVar6);
    }
    uVar4 = *param_1;
    uVar1 = uVar1 + param_3;
    iVar3 = 0;
    if (uVar4 <= uVar1) {
        iVar3 = uVar4;
    }
    uVar1 = uVar1 - iVar3;
    uVar6 = uVar1;
    uVar5 = uVar4 - uVar6;
    if (uVar6 <= uVar4) {
        uVar4 = param_5;
        if (uVar5 <= param_5) {
            uVar4 = uVar5;
        }
        if (uVar4 != 0) {
            memcpy(param_1[8] + uVar6,param_4,uVar4);
        }
        if (uVar5 < param_5) {
            memcpy(param_1[8],param_4 + uVar4,param_5 - uVar4);
        }
        uVar4 = *param_1;
        uVar1 = uVar1 + param_5;
        iVar3 = 0;
        if (uVar4 <= uVar1) {
            iVar3 = uVar4;
        }
        DataSynchronizationBarrier(3,2,0);
        uVar1 = (uVar1 - iVar3) + 7 & 0xfffffff8;
        iVar3 = 0;
        if (uVar4 <= uVar1) {
            iVar3 = uVar4;
        }
        *param_1[7] = uVar1 - iVar3;
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8001834);
    (*pcVar2)();
}


// ===== sym.qcom_glink_smem_unregister.cfi_jt @ 0x080011c0 (size 8) =====

void sym.qcom_glink_smem_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        qcom_glink_native_remove();
        qcom_glink_native_unregister(param_1);
    }
    return;
}


// ===== sym.glink_smem_rx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011c8 (size 8) =====

void sym.glink_smem_rx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt
               (uint64_t *param_1,ulong param_2,int param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (param_1[8] == 0) {
        param_3 = &uStack_30;
        uVar5 = qcom_smem_get(param_1[9],0x1e0);
        if (0xfffffffffffff000 < uVar5) {
            _printk(0x8000153);
            uVar5 = 0;
            goto code_r0x0800157c;
        }
        param_1[8] = uVar5;
        *param_1 = uStack_30;
    }
    uVar1 = *param_1[6];
    uVar2 = *param_1[7];
    if (uVar2 < uVar1) {
        uVar8 = *param_1;
        uVar5 = (uVar2 - uVar1) + uVar8;
    }
    else {
        uVar5 = uVar2 - uVar1;
        uVar8 = *param_1;
    }
    uStack_30 = uVar5;
    if (uVar8 < uVar5) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80015c4);
        (*pcVar4)();
    }
code_r0x0800157c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar5);
    puVar6 = auVar10._0_8_;
    *extraout_x18 = sym.glink_smem_rx_peak;
    uVar5 = *puVar6;
    if (*puVar6[6] <= uVar5) {
        uVar1 = *puVar6[6] + param_3;
        iVar7 = 0;
        if (uVar5 <= uVar1) {
            iVar7 = uVar5;
        }
        uVar9 = uVar1 - iVar7;
        uVar5 = uVar5 - uVar9;
        uVar8 = param_4;
        if (uVar5 <= param_4) {
            uVar8 = uVar5;
        }
        if (uVar8 != 0) {
            __memcpy_fromio(auVar10._8_8_,puVar6[8] + uVar9,uVar8);
        }
        if (uVar5 < param_4) {
            __memcpy_fromio(auVar10._8_8_ + uVar8,puVar6[8],param_4 - uVar8);
        }
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8001674);
    (*pcVar4)();
}


// ===== sym.glink_smem_tx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011d0 (size 8) =====

uint64_t sym.glink_smem_tx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt(uint64_t *param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *param_1[6] - *param_1[7];
    if (*param_1[6] < *param_1[7] || uVar3 == 0) {
        uVar4 = *param_1;
        uVar3 = uVar3 + uVar4;
    }
    else {
        uVar4 = *param_1;
    }
    uVar1 = 0;
    if (0xf < uVar3) {
        uVar1 = uVar3 - 0x10;
    }
    if (uVar1 <= uVar4) {
        return uVar1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x80016f4);
    (*pcVar2)();
}


// ===== sym.qcom_glink_smem_release.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011d8 (size 8) =====

void sym.qcom_glink_smem_release.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.glink_smem_rx_advance.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt @ 0x080011e0 (size 8) =====

void sym.glink_smem_rx_advance.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt(uint64_t *param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar3 = *param_1;
    uVar2 = *param_1[6] + param_2;
    if (uVar3 <= uVar2) {
        iVar1 = 0;
        if (uVar3 != 0) {
            iVar1 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - iVar1 * uVar3;
    }
    *param_1[6] = uVar2;
    return;
}


// ===== sym.qcom_glink_smem_register @ 0x080011e8 (size 732) =====

void sym.qcom_glink_smem_register(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    int64_t iStack_58;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    iStack_58 = 0;
    iVar4 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x390);
    if (iVar4 == 0) {
        uVar9 = 0xfffffffffffffff4;
        goto code_r0x08001474;
    }
    piVar8 = *(arg1 + 0x60);
    *(iVar4 + 0x60) = arg1;
    *(iVar4 + 0x2f0) = arg2;
    *(iVar4 + 0x330) = sym.qcom_glink_smem_release.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
    iVar7 = piVar8[0xe];
    if (iVar7 == 0) {
        iVar7 = *piVar8;
    }
    dev_set_name(iVar4,"%s:%pOFn",iVar7,arg2);
    iVar2 = device_register(iVar4);
    if (iVar2 != 0) {
        _printk(0x8000132);
        put_device(iVar4);
        uVar9 = iVar2;
        goto code_r0x08001474;
    }
    uVar3 = of_property_read_variable_u32_array(*(iVar4 + 0x2f0),"qcom,remote-pid",&uStack_4c,1,0);
    if (uVar3 < 0) {
        uVar9 = uVar3;
        pcVar6 = "failed to parse qcom,remote-pid\n";
code_r0x0800141c:
        _dev_err(iVar4,pcVar6);
    }
    else {
        iVar7 = devm_kmalloc(iVar4,0x50,0xdc0);
        iVar5 = devm_kmalloc(iVar4,0x50,0xdc0);
        uVar9 = 0xfffffff4;
        if ((iVar7 != 0) && (iVar5 != 0)) {
            uVar3 = qcom_smem_alloc(uStack_4c,0x1de,0x20);
            if ((uVar3 != 0xffffffef) && (uVar9 = uVar3, uVar3 != 0)) {
                pcVar6 = "failed to allocate glink descriptors\n";
                goto code_r0x0800141c;
            }
            uVar9 = qcom_smem_get(uStack_4c,0x1de,&iStack_58);
            if (uVar9 < 0xfffffffffffff001) {
                if (iStack_58 == 0x20) {
                    puVar1 = uVar9 + 8;
                    *(iVar5 + 0x30) = uVar9;
                    *(iVar5 + 0x38) = uVar9 + 4;
                    *(iVar7 + 0x30) = puVar1;
                    *(iVar7 + 0x38) = uVar9 + 0xc;
                    uVar3 = qcom_smem_alloc(uStack_4c,0x1df,0x4000);
                    if ((uVar3 != 0xffffffef) && (uVar9 = uVar3, uVar3 != 0)) {
                        pcVar6 = "failed to allocate TX fifo\n";
                        goto code_r0x0800141c;
                    }
                    uVar9 = qcom_smem_get(uStack_4c,0x1df,iVar5);
                    *(iVar5 + 0x40) = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                        *(iVar7 + 8) = sym.glink_smem_rx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x10) = sym.glink_smem_rx_peak.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x18) = sym.glink_smem_rx_advance.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar7 + 0x48) = uStack_4c;
                        *(iVar5 + 0x48) = uStack_4c;
                        *(iVar5 + 8) = sym.glink_smem_tx_avail.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *(iVar5 + 0x20) = sym.glink_smem_tx_write.286f2928fc0d3735c0a38e11c2a5eb1a.cfi_jt;
                        *puVar1 = 0;
                        **(iVar5 + 0x38) = 0;
                        uVar9 = qcom_glink_native_probe(iVar4,9,iVar7,iVar5,0);
                        if (uVar9 < 0xfffffffffffff001) goto code_r0x08001474;
                        uVar9 = uVar9 & 0xffffffff;
                    }
                    else {
                        _dev_err(iVar4,"failed to acquire TX fifo\n");
                        uVar9 = *(iVar5 + 0x40);
                    }
                }
                else {
                    _dev_err(iVar4,"glink descriptor of invalid size\n");
                    uVar9 = 0xffffffea;
                }
            }
            else {
                _dev_err(iVar4,"failed to acquire xprt descriptor\n");
            }
        }
    }
    device_unregister(iVar4);
    uVar9 = uVar9;
code_r0x08001474:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar9);
    *extraout_x18 = sym.qcom_glink_smem_release;
    kfree();
    return;
}


// ===== sym.qcom_glink_smem_release @ 0x080014c4 (size 36) =====

void sym.qcom_glink_smem_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.glink_smem_rx_avail @ 0x080014e8 (size 228) =====

void sym.glink_smem_rx_avail(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    int in_w2;
    uint64_t in_x3;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (*(arg1 + 0x40) == 0) {
        in_w2 = &uStack_30;
        uVar5 = qcom_smem_get(*(arg1 + 0x48),0x1e0);
        if (0xfffffffffffff000 < uVar5) {
            _printk(0x8000153);
            uVar5 = 0;
            goto code_r0x0800157c;
        }
        *(arg1 + 0x40) = uVar5;
        *arg1 = uStack_30;
    }
    uVar1 = **(arg1 + 0x30);
    uVar2 = **(arg1 + 0x38);
    if (uVar2 < uVar1) {
        uVar8 = *arg1;
        uVar5 = (uVar2 - uVar1) + uVar8;
    }
    else {
        uVar5 = uVar2 - uVar1;
        uVar8 = *arg1;
    }
    uStack_30 = uVar5;
    if (uVar8 < uVar5) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80015c4);
        (*pcVar4)();
    }
code_r0x0800157c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar5);
    puVar6 = auVar10._0_8_;
    *extraout_x18 = sym.glink_smem_rx_peak;
    uVar5 = *puVar6;
    if (*puVar6[6] <= uVar5) {
        uVar1 = *puVar6[6] + in_w2;
        iVar7 = 0;
        if (uVar5 <= uVar1) {
            iVar7 = uVar5;
        }
        uVar9 = uVar1 - iVar7;
        uVar5 = uVar5 - uVar9;
        uVar8 = in_x3;
        if (uVar5 <= in_x3) {
            uVar8 = uVar5;
        }
        if (uVar8 != 0) {
            __memcpy_fromio(auVar10._8_8_,puVar6[8] + uVar9,uVar8);
        }
        if (uVar5 < in_x3) {
            __memcpy_fromio(auVar10._8_8_ + uVar8,puVar6[8],in_x3 - uVar8);
        }
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8001674);
    (*pcVar4)();
}


// ===== sym.glink_smem_rx_peak @ 0x080015cc (size 168) =====

void sym.glink_smem_rx_peak(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *arg1;
    if (**(arg1 + 0x30) <= uVar5) {
        uVar1 = **(arg1 + 0x30) + arg3;
        iVar4 = 0;
        if (uVar5 <= uVar1) {
            iVar4 = uVar5;
        }
        uVar6 = uVar1 - iVar4;
        uVar5 = uVar5 - uVar6;
        uVar2 = arg4;
        if (uVar5 <= arg4) {
            uVar2 = uVar5;
        }
        if (uVar2 != 0) {
            __memcpy_fromio(arg2,*(arg1 + 0x40) + uVar6,uVar2);
        }
        if (uVar5 < arg4) {
            __memcpy_fromio(arg2 + uVar2,*(arg1 + 0x40),arg4 - uVar2);
        }
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8001674);
    (*pcVar3)();
}


// ===== sym.glink_smem_rx_advance @ 0x08001678 (size 48) =====

void sym.glink_smem_rx_advance(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar3 = *arg1;
    uVar2 = **(arg1 + 0x30) + arg2;
    if (uVar3 <= uVar2) {
        iVar1 = 0;
        if (uVar3 != 0) {
            iVar1 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - iVar1 * uVar3;
    }
    **(arg1 + 0x30) = uVar2;
    return;
}


// ===== sym.glink_smem_tx_avail @ 0x080016a8 (size 76) =====

uint64_t sym.glink_smem_tx_avail(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    uVar3 = **(arg1 + 0x30) - **(arg1 + 0x38);
    if (**(arg1 + 0x30) < **(arg1 + 0x38) || uVar3 == 0) {
        uVar4 = *arg1;
        uVar3 = uVar3 + uVar4;
    }
    else {
        uVar4 = *arg1;
    }
    uVar1 = 0;
    if (0xf < uVar3) {
        uVar1 = uVar3 - 0x10;
    }
    if (uVar1 <= uVar4) {
        return uVar1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x80016f4);
    (*pcVar2)();
}


// ===== sym.glink_smem_tx_write @ 0x080016f8 (size 316) =====

void sym.glink_smem_tx_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint64_t in_x4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    uVar2 = **(arg1 + 0x38);
    uVar7 = uVar2;
    uVar6 = *arg1 - uVar7;
    if (*arg1 < uVar7) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8001824);
        (*pcVar3)();
    }
    uVar1 = uVar4;
    if (uVar6 <= uVar4) {
        uVar1 = uVar6;
    }
    if (uVar1 != 0) {
        memcpy(*(arg1 + 0x40) + uVar7,arg2,uVar1);
    }
    if (uVar6 < uVar4) {
        memcpy(*(arg1 + 0x40),arg2 + uVar1,uVar4 - uVar1);
    }
    uVar6 = *arg1;
    uVar2 = uVar2 + arg3;
    iVar5 = 0;
    if (uVar6 <= uVar2) {
        iVar5 = uVar6;
    }
    uVar2 = uVar2 - iVar5;
    uVar7 = uVar2;
    uVar4 = uVar6 - uVar7;
    if (uVar7 <= uVar6) {
        uVar6 = in_x4;
        if (uVar4 <= in_x4) {
            uVar6 = uVar4;
        }
        if (uVar6 != 0) {
            memcpy(*(arg1 + 0x40) + uVar7,arg4,uVar6);
        }
        if (uVar4 < in_x4) {
            memcpy(*(arg1 + 0x40),arg4 + uVar6,in_x4 - uVar6);
        }
        uVar6 = *arg1;
        uVar2 = uVar2 + in_x4;
        iVar5 = 0;
        if (uVar6 <= uVar2) {
            iVar5 = uVar6;
        }
        DataSynchronizationBarrier(3,2,0);
        uVar2 = (uVar2 - iVar5) + 7 & 0xfffffff8;
        iVar5 = 0;
        if (uVar6 <= uVar2) {
            iVar5 = uVar6;
        }
        **(arg1 + 0x38) = uVar2 - iVar5;
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8001834);
    (*pcVar3)();
}


// ===== sym.qcom_glink_smem_start @ 0x0800183c (size 36) =====

void sym.qcom_glink_smem_start(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qcom_glink_native_start();
    return;
}


// ===== sym.qcom_glink_smem_unregister @ 0x08001860 (size 64) =====

void sym.qcom_glink_smem_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        qcom_glink_native_remove();
        qcom_glink_native_unregister(arg1);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080018a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018e4

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
    //switch table (4 cases) at 0x80001f2
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018f8);
    (*pcVar1)();
}

