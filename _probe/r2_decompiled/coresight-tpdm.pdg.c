// decompiled from coresight-tpdm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x0800b280

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7a682b931f8f094) {
        if (arg1 < -0x333e5f8f10676d42) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x8002230 >> 3 | pcVar1 << 0x3d) < 0x46) {
                    return;
                }
                goto code_r0x0800b240;
            }
            if (arg1 != -0x57be845bca9148ef) goto code_r0x0800b240;
            pcVar2 = sym.tpdm_freeze.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
        }
        else if (arg1 == -0x333e5f8f10676d42) {
            pcVar2 = sym.tpdm_probe.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x4b596879dd0fbb8) goto code_r0x0800b240;
            pcVar2 = sym.tpdm_disable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
        }
    }
    else if (arg1 < 0x5ca94cbce5f388f2) {
        if (arg1 != 0x7a682b931f8f094) {
            if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x8002460 >> 3 | pcVar1 << 0x3d) < 0x44)) {
                return;
            }
            goto code_r0x0800b240;
        }
        pcVar2 = sym.tpdm_enable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
    }
    else if (arg1 == 0x5ca94cbce5f388f2) {
        pcVar2 = sym.tpdm_remove.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
    }
    else if (arg1 == 0x76439dfb02cc8756) {
        pcVar2 = sym.tpdm_trace_id.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800b240;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800b240:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800b294);
    (*pcVar1)();
}


// ===== sym.tpdm_probe.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080021f0 (size 8) =====

uint64_t sym.tpdm_probe.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *arg1;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    ulong unaff_x30;
    int iStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    code *pcStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    pcStack_80 = NULL;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    iStack_ac = 0;
    iStack_78 = coresight_alloc_device_name(obj.tpdm_devs,param_1);
    if (iStack_78 != 0) {
        uVar4 = coresight_get_platform_data(param_1);
        if (0xfffffffffffff000 < uVar4) goto code_r0x08002ae4;
        *(param_1 + 0x90) = uVar4;
        iVar5 = of_find_property(*(param_1 + 0x2f0),"qcom,hw-enable-check",0);
        if (iVar5 != 0) {
            iVar2 = qcom_scm_get_sec_dump_state(&iStack_ac);
            uVar4 = 0xfffffffa;
            if ((iVar2 != 0) || (iStack_ac == 0)) goto code_r0x08002ae4;
        }
        arg1 = devm_kmalloc(param_1,0xd0,0xdc0);
        if (arg1 != NULL) {
            arg1[1] = param_1;
            *(param_1 + 0x98) = arg1;
            iVar5 = devm_ioremap_resource(param_1,param_1 + 0x390);
            *arg1 = iVar5;
            if (iVar5 != 0) {
                __mutex_init(arg1 + 7,"&drvdata->lock",obj.tpdm_probe.__key);
                uStack_58 = 0;
                uStack_50 = 0;
                uVar10 = *(arg1[1] + 0x2f0);
                iVar5 = of_find_property(uVar10,"qcom,clk-enable",0);
                *(arg1 + 0x69) = iVar5 != 0;
                iVar5 = of_find_property(uVar10,"qcom,msr-fix-req",0);
                *(arg1 + 0xc9) = iVar5 != 0;
                iVar5 = of_find_property(uVar10,"qcom,cmb-msr-skip",0);
                *(arg1 + 0xca) = iVar5 != 0;
                uVar3 = of_property_read_string_helper(uVar10,"qcom,tpdm-clks",0,0,0);
                *(arg1 + 3) = uVar3;
                if (0 < uVar3) {
                    iVar5 = devm_kmalloc(arg1[1],uVar3 << 3,0xdc0);
                    arg1[4] = iVar5;
                    if (iVar5 == 0) goto code_r0x08002b18;
                    if (0 < arg1[3]) {
                        uVar4 = 0;
                        do {
                            iVar2 = of_property_read_string_helper
                                              (uVar10,"qcom,tpdm-clks",&uStack_50,1,uVar4 & 0xffffffff);
                            if (iVar2 < 0) goto code_r0x08002b18;
                            uVar6 = devm_clk_get(arg1[1],uStack_50);
                            *(arg1[4] + uVar4 * 8) = uVar6;
                            uVar7 = *(arg1[4] + uVar4 * 8);
                            if (0xfffffffffffff000 < uVar7) goto code_r0x08002948;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < arg1[3]);
                    }
                }
                uVar3 = of_property_read_string_helper(uVar10,"qcom,tpdm-regs",0,0,0);
                *(arg1 + 5) = uVar3;
                if (0 < uVar3) {
                    iVar5 = devm_kmalloc(arg1[1],uVar3 << 3,0xdc0);
                    arg1[6] = iVar5;
                    if (iVar5 == 0) goto code_r0x08002b18;
                    if (0 < arg1[5]) {
                        uVar4 = 0;
                        do {
                            iVar2 = of_property_read_string_helper
                                              (uVar10,"qcom,tpdm-regs",&uStack_58,1,uVar4 & 0xffffffff);
                            if (iVar2 < 0) goto code_r0x08002b18;
                            uVar6 = devm_regulator_get(arg1[1],uStack_58);
                            *(arg1[6] + uVar4 * 8) = uVar6;
                            uVar7 = *(arg1[6] + uVar4 * 8);
                            if (0xfffffffffffff000 < uVar7) goto code_r0x08002948;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < arg1[5]);
                    }
                }
                goto code_r0x0800294c;
            }
        }
    }
    goto code_r0x08002ae0;
code_r0x08002948:
    if (uVar7 != 0) {
code_r0x08002b18:
        _dev_err(arg1[1],"TPDM parse of data fail\n");
        uVar4 = 0xffffffea;
        goto code_r0x08002ae4;
    }
code_r0x0800294c:
    uStack_90 = *(param_1 + 0x90);
    uStack_a8 = 0x100000004;
    pcStack_98 = obj.tpdm_cs_ops;
    pcStack_80 = obj.tpdm_attr_grps;
    iStack_88 = param_1;
    uVar4 = coresight_register(&uStack_a8);
    arg1[2] = uVar4;
    if (0xfffffffffffff000 < uVar4) goto code_r0x08002ae4;
    uVar3 = *(*arg1 + 0xfe8) >> 4 & 0xf;
    *(arg1 + 0xc4) = uVar3;
    if (uVar3 != 0) {
        *(arg1 + 0x19) = 1;
    }
    uVar4 = 0;
    piVar1 = arg1 + 0xe;
    uVar3 = *(*arg1 + 0xfe0);
    do {
        uVar7 = 1L << (uVar4 & 0x3f);
        if ((uVar7 & uVar3) != 0) {
            uVar8 = uVar4 >> 6 & 0x3ffffff;
            uVar9 = arg1[uVar8 + 0xf];
            piVar1[uVar8] = piVar1[uVar8] | uVar7;
            arg1[uVar8 + 0xf] = uVar9 | uVar7;
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
    if ((*piVar1 >> 5 & 1) == 0) {
code_r0x08002a2c:
        if ((*piVar1 >> 4 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1[1],0x148,0xdc0);
            arg1[0x14] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 3 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1[1],0x94,0xdc0);
            arg1[0x15] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 1 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1[1],0x18c,0xdc0);
            arg1[0x16] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 2 & 1) == 0) {
            if ((*piVar1 >> 6 & 1) != 0) {
                iVar5 = devm_kmalloc(arg1[1],0xc0,0xdc0);
                arg1[0x17] = iVar5;
                if (iVar5 == 0) goto code_r0x08002ad8;
                uVar10 = devm_kmalloc(arg1[1],2,0xdc0);
                *(arg1[0x17] + 0xb8) = uVar10;
                iVar5 = *(arg1[0x17] + 0xb8);
                goto joined_r0x08002b44;
            }
        }
        else {
            iVar5 = devm_kmalloc(arg1[1],0xc0,0xdc0);
            arg1[0x17] = iVar5;
joined_r0x08002b44:
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        sym.tpdm_init_default_data(arg1);
        uVar3 = *(*arg1 + 0xfc8);
        *(arg1 + 0x10) = uVar3 >> 0x1b & 3;
        *(arg1 + 0x84) = uVar3 >> 0x19 & 3;
        *(arg1 + 0x18) = _segment.ehdr;
        *(arg1 + 0x11) = uVar3 >> 0x17 & 3;
        *(arg1 + 0x8c) = (uVar3 >> 6 & 0x1f) + 1;
        *(arg1 + 0x12) = (uVar3 >> 4 & 3) + 1;
        _segment.ehdr = _segment.ehdr + 1;
        __pm_runtime_idle(param_1,5);
        uVar4 = 0;
        goto code_r0x08002ae4;
    }
    iVar5 = devm_kmalloc(arg1[1],0x298,0xdc0);
    arg1[0x13] = iVar5;
    if (iVar5 != 0) goto code_r0x08002a2c;
code_r0x08002ad8:
    coresight_unregister(arg1[2]);
code_r0x08002ae0:
    uVar4 = 0xfffffff4;
code_r0x08002ae4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = 0x8002bb0;
    coresight_disable(*(*(iVar5 + 0x98) + 0x10));
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tpdm_driver);
    return;
}


// ===== sym.tpdm_enable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002200 (size 8) =====

ulong sym.tpdm_enable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint *puVar2;
    char cVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    int iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(param_1 + 0x98) + 0x98);
    if (piVar11[0xd] != '\0') {
        _dev_err(piVar11[1],"TPDM setup already enabled,Skipping enablei\n");
        return 0;
    }
    mutex_lock(piVar11 + 7);
    *(*piVar11 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    if (*(piVar11 + 0x69) != '\0') {
        *(*piVar11 + 0x220) = 1;
    }
    if ((piVar11[0xf] >> 5 & 1) != 0) {
        uVar7 = 0;
        iVar6 = 0x18;
        do {
            if ((*(piVar11[0x13] + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
                *(*piVar11 + iVar6 + -0x18) = *(piVar11[0x13] + iVar6);
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 4;
        } while (iVar6 != 0x298);
    }
    if ((piVar11[0xf] >> 4 & 1) != 0) {
        if (*(piVar11[0x14] + 8) == 0) {
            *(*piVar11 + 0x284) = 0;
        }
        else {
            *(*piVar11 + 0x284) = *(piVar11[0x14] + 8);
        }
        iVar6 = piVar11[0x14];
        if (*(iVar6 + 0xc) == 0) {
            iVar9 = *(iVar6 + 0x10);
            if (iVar9 != 0) goto code_r0x08002e4c;
code_r0x08002d84:
            if (*(iVar6 + 0x14) != 0) goto code_r0x08002e64;
code_r0x08002d8c:
            iVar9 = *(iVar6 + 0x18);
        }
        else {
            *(*piVar11 + 0x28c) = 0xffffffff;
            *(*piVar11 + 0x288) = *(piVar11[0x14] + 0xc);
            iVar6 = piVar11[0x14];
            iVar9 = *(iVar6 + 0x10);
            if (iVar9 == 0) goto code_r0x08002d84;
code_r0x08002e4c:
            *(*piVar11 + 0x28c) = iVar9;
            iVar6 = piVar11[0x14];
            if (*(iVar6 + 0x14) == 0) goto code_r0x08002d8c;
code_r0x08002e64:
            *(*piVar11 + 0x294) = 0xffffffff;
            *(*piVar11 + 0x290) = *(piVar11[0x14] + 0x14);
            iVar9 = *(piVar11[0x14] + 0x18);
        }
        if (iVar9 != 0) {
            *(*piVar11 + 0x294) = iVar9;
        }
        if (*(piVar11 + 0x84) == 1) {
            *(*piVar11 + 0x298) = *(piVar11[0x14] + 0x1c);
            *(*piVar11 + 0x318) = *(piVar11[0x14] + 0x9c);
        }
        else if ((*(piVar11 + 0x84) == 0) && (*(piVar11 + 0x8c) != 0)) {
            uVar7 = 0;
            iVar6 = 0x318;
            do {
                if (uVar7 == 0x20) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ab4);
                    (*pcVar5)();
                }
                uVar7 = uVar7 + 1;
                *(*piVar11 + iVar6 + -0x80) = *(piVar11[0x14] + iVar6 + -0x2fc);
                iVar1 = piVar11[0x14] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x27c);
            } while (uVar7 < *(piVar11 + 0x8c));
        }
        iVar6 = piVar11[0x14];
        if (*(iVar6 + 0x11c) != 0) {
            *(*piVar11 + 0x398) = *(iVar6 + 0x11c);
            iVar6 = piVar11[0x14];
        }
        *(*piVar11 + 0x39c) = *(iVar6 + 0x120);
        *(*piVar11 + 0x3a0) = *(piVar11[0x14] + 0x124);
        *(*piVar11 + 0x3a4) = *(piVar11[0x14] + 0x128);
        *(*piVar11 + 0x3a8) = *(piVar11[0x14] + 300);
        *(*piVar11 + 0x3ac) = *(piVar11[0x14] + 0x130);
        *(*piVar11 + 0x3b0) = *(piVar11[0x14] + 0x134);
        if (piVar11[0x19] != '\0') {
            *(*piVar11 + 0x4f0) = *(piVar11[0x14] + 0x138);
            *(*piVar11 + 0x4f4) = *(piVar11[0x14] + 0x13c);
            *(*piVar11 + 0x4f8) = *(piVar11[0x14] + 0x140);
            *(*piVar11 + 0x4fc) = *(piVar11[0x14] + 0x144);
        }
        *(*piVar11 + 0x280) =
             *(*piVar11 + 0x280) & 0xfffffff8 | *(*piVar11 + 0x280) & 3 | (*(piVar11[0x14] + 4) == 1) << 2;
        *(*piVar11 + 0x280) = *(*piVar11 + 0x280) | 1;
    }
    if ((piVar11[0xf] >> 3 & 1) == 0) goto code_r0x0800317c;
    iVar6 = piVar11[0x15];
    if (*(iVar6 + 0xc) == 0) {
        iVar9 = *(iVar6 + 0x10);
        if (iVar9 != 0) goto code_r0x080035c0;
code_r0x0800300c:
        if (*(iVar6 + 0x14) != 0) goto code_r0x080035d8;
code_r0x08003014:
        iVar9 = *(iVar6 + 0x18);
    }
    else {
        *(*piVar11 + 0x508) = 0xf;
        *(*piVar11 + 0x504) = *(piVar11[0x15] + 0xc);
        iVar6 = piVar11[0x15];
        iVar9 = *(iVar6 + 0x10);
        if (iVar9 == 0) goto code_r0x0800300c;
code_r0x080035c0:
        *(*piVar11 + 0x508) = iVar9;
        iVar6 = piVar11[0x15];
        if (*(iVar6 + 0x14) == 0) goto code_r0x08003014;
code_r0x080035d8:
        *(*piVar11 + 0x510) = 0xf;
        *(*piVar11 + 0x50c) = *(piVar11[0x15] + 0x14);
        iVar9 = *(piVar11[0x15] + 0x18);
    }
    if (iVar9 != 0) {
        *(*piVar11 + 0x510) = iVar9;
    }
    if (piVar11[0x10] == 1) {
        *(*piVar11 + 0x514) = *(piVar11[0x15] + 0x1c);
        *(*piVar11 + 0x534) = *(piVar11[0x15] + 0x3c);
        *(*piVar11 + 0x554) = *(piVar11[0x15] + 0x5c);
        cVar3 = piVar11[0x19];
    }
    else {
        if (piVar11[0x10] == 0) {
            iVar6 = 0x554;
            do {
                *(*piVar11 + iVar6 + -0x40) = *(piVar11[0x15] + iVar6 + -0x538);
                *(*piVar11 + iVar6 + -0x20) = *(piVar11[0x15] + iVar6 + -0x518);
                iVar1 = piVar11[0x15] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x4f8);
            } while (iVar6 != 0x574);
        }
        cVar3 = piVar11[0x19];
    }
    if (cVar3 != '\0') {
        *(*piVar11 + 0x768) = *(piVar11[0x15] + 0x7c);
        *(*piVar11 + 0x76c) = *(piVar11[0x15] + 0x80);
        *(*piVar11 + 0x770) = *(piVar11[0x15] + 0x84);
        *(*piVar11 + 0x774) = *(piVar11[0x15] + 0x88);
        *(*piVar11 + 0x778) = *(piVar11[0x15] + 0x8c);
        *(*piVar11 + 0x77c) = *(piVar11[0x15] + 0x90);
    }
    *(*piVar11 + 0x500) =
         *(*piVar11 + 0x500) & 0xffffffe8 | *(piVar11[0x15] + 8) << 4 |
         *(*piVar11 + 0x500) & 3 | (*(piVar11[0x15] + 4) == 1) << 2;
    *(*piVar11 + 0x500) = *(*piVar11 + 0x500) | 1;
code_r0x0800317c:
    if ((piVar11[0xf] >> 1 & 1) != 0) {
        iVar6 = 0x808;
        do {
            iVar1 = piVar11[0x16] + iVar6;
            puVar2 = *piVar11 + iVar6;
            iVar6 = iVar6 + 4;
            *puVar2 = *(iVar1 + -0x804);
        } while (iVar6 != 0x848);
        *(*piVar11 + 0x848) = *(piVar11[0x16] + 0x44);
        *(*piVar11 + 0x84c) = *(piVar11[0x16] + 0x48);
        *(*piVar11 + 0x850) = *(piVar11[0x16] + 0x4c);
        *(*piVar11 + 0x854) = *(piVar11[0x16] + 0x50);
        *(*piVar11 + 0x858) = *(piVar11[0x16] + 0x54);
        *(*piVar11 + 0x85c) = *(piVar11[0x16] + 0x58);
        *(*piVar11 + 0x860) = *(piVar11[0x16] + 0x5c);
        *(*piVar11 + 0x864) = *(piVar11[0x16] + 0x60);
        *(*piVar11 + 0x788) = *(piVar11[0x16] + 100);
        *(*piVar11 + 0x7a8) = *(piVar11[0x16] + 0x84);
        *(*piVar11 + 0x78c) = *(piVar11[0x16] + 0x68);
        *(*piVar11 + 0x7ac) = *(piVar11[0x16] + 0x88);
        *(*piVar11 + 0x790) = *(piVar11[0x16] + 0x6c);
        *(*piVar11 + 0x7b0) = *(piVar11[0x16] + 0x8c);
        *(*piVar11 + 0x794) = *(piVar11[0x16] + 0x70);
        *(*piVar11 + 0x7b4) = *(piVar11[0x16] + 0x90);
        *(*piVar11 + 0x798) = *(piVar11[0x16] + 0x74);
        *(*piVar11 + 0x7b8) = *(piVar11[0x16] + 0x94);
        *(*piVar11 + 0x79c) = *(piVar11[0x16] + 0x78);
        *(*piVar11 + 0x7bc) = *(piVar11[0x16] + 0x98);
        *(*piVar11 + 0x7a0) = *(piVar11[0x16] + 0x7c);
        *(*piVar11 + 0x7c0) = *(piVar11[0x16] + 0x9c);
        *(*piVar11 + 0x7a4) = *(piVar11[0x16] + 0x80);
        *(*piVar11 + 0x7c4) = *(piVar11[0x16] + 0xa0);
        *(*piVar11 + 0x7c8) = *(piVar11[0x16] + 0xa8);
        *(*piVar11 + 0x7e8) = *(piVar11[0x16] + 200);
        *(*piVar11 + 0x7cc) = *(piVar11[0x16] + 0xac);
        *(*piVar11 + 0x7ec) = *(piVar11[0x16] + 0xcc);
        *(*piVar11 + 2000) = *(piVar11[0x16] + 0xb0);
        *(*piVar11 + 0x7f0) = *(piVar11[0x16] + 0xd0);
        *(*piVar11 + 0x7d4) = *(piVar11[0x16] + 0xb4);
        *(*piVar11 + 0x7f4) = *(piVar11[0x16] + 0xd4);
        *(*piVar11 + 0x7d8) = *(piVar11[0x16] + 0xb8);
        *(*piVar11 + 0x7f8) = *(piVar11[0x16] + 0xd8);
        *(*piVar11 + 0x7dc) = *(piVar11[0x16] + 0xbc);
        *(*piVar11 + 0x7fc) = *(piVar11[0x16] + 0xdc);
        *(*piVar11 + 0x7e0) = *(piVar11[0x16] + 0xc0);
        *(*piVar11 + 0x800) = *(piVar11[0x16] + 0xe0);
        *(*piVar11 + 0x7e4) = *(piVar11[0x16] + 0xc4);
        *(*piVar11 + 0x804) = *(piVar11[0x16] + 0xe4);
        *(*piVar11 + 0x86c) = *(piVar11[0x16] + 0xec);
        *(*piVar11 + 0x870) = *(piVar11[0x16] + 0xf0);
        *(*piVar11 + 0x874) = *(piVar11[0x16] + 0xf4);
        *(*piVar11 + 0x878) = *(piVar11[0x16] + 0xf8);
        *(*piVar11 + 0x87c) = *(piVar11[0x16] + 0xfc);
        *(*piVar11 + 0x880) = *(piVar11[0x16] + 0x100);
        *(*piVar11 + 0x884) = *(piVar11[0x16] + 0x104);
        *(*piVar11 + 0x888) = *(piVar11[0x16] + 0x108);
        uVar10 = *(*piVar11 + 0x784);
        iVar6 = piVar11[0x16];
        if (*(iVar6 + 0xa4) == '\0') {
            uVar10 = uVar10 & 0xfffffffe;
        }
        else if (*(iVar6 + 0xa5) == '\0') {
            uVar10 = uVar10 & 0xfffffffb | 1;
        }
        else {
            uVar10 = uVar10 | 5;
        }
        *(*piVar11 + 0x784) = uVar10 & 0xfffffffd | *(iVar6 + 0xe8) << 1;
        if ((*(piVar11 + 0xc9) == '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0x980;
            do {
                iVar1 = piVar11[0x16] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x874);
            } while (iVar6 != 0xa00);
        }
        uVar10 = *piVar11[0x16];
        uVar4 = uVar10 >> 2;
        *(*piVar11 + 0x780) =
             *(*piVar11 + 0x780) & 0xffffe000 | *(*piVar11 + 0x780) & 0x181 | (uVar10 & 7) << 9 | uVar4 & 0x7c |
             uVar4 & 2 | *(piVar11[0x16] + 0xe9) << 0xc;
        *(*piVar11 + 0x780) = *(*piVar11 + 0x780) | 1;
        if ((*(piVar11 + 0xc9) != '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0x980;
            do {
                iVar1 = piVar11[0x16] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x874);
            } while (iVar6 != 0xa00);
        }
    }
    if ((piVar11[0xf] >> 2 & 1) == 0) {
        if ((piVar11[0xf] >> 6 & 1) != 0) {
            puVar8 = *(piVar11[0x17] + 0xb8);
            *(*piVar11 + 0xa08) = *(piVar11[0x17] + 8);
            *(*piVar11 + 0xa10) = *(piVar11[0x17] + 0x10);
            *(*piVar11 + 0xa18) = *(piVar11[0x17] + 0x1c);
            *(*piVar11 + 0xa20) = *(piVar11[0x17] + 0x24);
            *(*piVar11 + 0xa0c) = *(piVar11[0x17] + 0xc);
            *(*piVar11 + 0xa14) = *(piVar11[0x17] + 0x14);
            *(*piVar11 + 0xa1c) = *(piVar11[0x17] + 0x20);
            *(*piVar11 + 0xa24) = *(piVar11[0x17] + 0x28);
            iVar6 = piVar11[0x17];
            *(*piVar11 + 0xa04) =
                 *(*piVar11 + 0xa04) & 0xfffffff8 | *(iVar6 + 0x18) | *(iVar6 + 0x2c) << 1 | *(iVar6 + 0x2d) << 2;
            if ((*(piVar11 + 0xca) == '\0') && (piVar11[0x19] != '\0')) {
                iVar6 = 0xa80;
                do {
                    iVar1 = piVar11[0x17] + iVar6;
                    puVar2 = *piVar11 + iVar6;
                    iVar6 = iVar6 + 4;
                    *puVar2 = *(iVar1 + -0xa50);
                } while (iVar6 != 0xb00);
            }
            uVar10 = *(*piVar11 + 0xa00) & 0xffe000f9;
            if (*piVar11[0x17] != '\0') {
                uVar10 = *(*piVar11 + 0xa00) | 2;
            }
            uVar10 = uVar10 & 0xffe00000 | (*puVar8 & 7) << 0x12 |
                     uVar10 & 0xfb | (*(piVar11[0x17] + 4) & 3) << 8 | puVar8[1] << 10;
            *(*piVar11 + 0xa00) = uVar10;
            *(*piVar11 + 0xa00) = uVar10 | 1;
        }
    }
    else {
        *(*piVar11 + 0xa08) = *(piVar11[0x17] + 8);
        *(*piVar11 + 0xa10) = *(piVar11[0x17] + 0x10);
        *(*piVar11 + 0xa18) = *(piVar11[0x17] + 0x1c);
        *(*piVar11 + 0xa20) = *(piVar11[0x17] + 0x24);
        *(*piVar11 + 0xa0c) = *(piVar11[0x17] + 0xc);
        *(*piVar11 + 0xa14) = *(piVar11[0x17] + 0x14);
        *(*piVar11 + 0xa1c) = *(piVar11[0x17] + 0x20);
        *(*piVar11 + 0xa24) = *(piVar11[0x17] + 0x28);
        iVar6 = piVar11[0x17];
        *(*piVar11 + 0xa04) =
             *(*piVar11 + 0xa04) & 0xfffffff8 | *(iVar6 + 0x18) | *(iVar6 + 0x2c) << 1 | *(iVar6 + 0x2d) << 2;
        if ((*(piVar11 + 0xca) == '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0xa80;
            do {
                iVar1 = piVar11[0x17] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0xa50);
            } while (iVar6 != 0xb00);
        }
        uVar10 = *(*piVar11 + 0xa00) & 0xfffffcf9;
        if (*piVar11[0x17] != '\0') {
            uVar10 = *(*piVar11 + 0xa00) | 2;
        }
        uVar10 = uVar10 & 0xfffffc00 | uVar10 & 0xfb | (*(piVar11[0x17] + 4) & 3) << 8;
        *(*piVar11 + 0xa00) = uVar10;
        *(*piVar11 + 0xa00) = uVar10 | 1;
    }
    DataSynchronizationBarrier(3,3,0);
    *(*piVar11 + 0xfb0) = 0;
    *(piVar11 + 0xd) = 1;
    mutex_unlock(piVar11 + 7);
    _dev_info(piVar11[1],"TPDM tracing enabled\n");
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08002208 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tpdm_driver);
    return;
}


// ===== sym.tpdm_disable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002210 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.tpdm_disable.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(param_1 + 0x98) + 0x98);
    if (piVar2[0xd] != '\0') {
        mutex_lock(piVar2 + 7);
        *(*piVar2 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((piVar2[0xf] >> 4 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x280) = *(*piVar2 + 0x280) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if ((uVar1 >> 3 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x500) = *(*piVar2 + 0x500) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if ((uVar1 >> 1 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x780) = *(*piVar2 + 0x780) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if (((uVar1 >> 2 & 1) != 0) || ((piVar2[0xf] >> 6 & 1) != 0)) {
            *(*piVar2 + 0xa00) = *(*piVar2 + 0xa00) & 0xfffffffe;
        }
        if (*(piVar2 + 0x69) != '\0') {
            *(*piVar2 + 0x220) = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        *(*piVar2 + 0xfb0) = 0;
        *(piVar2 + 0xd) = 0;
        mutex_unlock(piVar2 + 7);
        _dev_info(piVar2[1],"TPDM tracing disabled\n");
        return;
    }
    _dev_err(piVar2[1],"TPDM setup already disabled, Skipping disable\n");
    return;
}


// ===== sym.tpdm_trace_id.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002218 (size 8) =====

uint sym.tpdm_trace_id.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    return *(*(*(param_1 + 0x98) + 0x98) + 0xc0);
}


// ===== sym.tpdm_remove.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002220 (size 8) =====

void sym.tpdm_remove.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0x98) + 0x10));
    return;
}


// ===== sym.tpdm_freeze.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.tpdm_freeze.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_disable(*(*(param_1 + 0x98) + 0x10));
    return 0;
}


// ===== sym.cmb_ts_all_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002230 (size 8) =====

int64_t sym.cmb_ts_all_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x2d));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_mask_msb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002238 (size 8) =====

int64_t sym.cmb_trig_patt_mask_msb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x28));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_clear_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002240 (size 8) =====

int64_t sym.tc_clear_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x10));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_capture_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002248 (size 8) =====

int64_t sym.bc_capture_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (**(iVar3 + 0xa0) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(param_3,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.gp_regs_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002250 (size 8) =====

int64_t sym.gp_regs_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 5 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            if ((*(*(iVar4 + 0x98) + (uVar3 >> 6 & 0x3ffffff) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
                iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                                  *(*(iVar4 + 0x98) + uVar3 * 4 + 0x18));
                iVar2 = iVar2 + iVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0xa0);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_select_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002258 (size 8) =====

int64_t sym.dsb_select_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar3 + 0xb0) + 0xec));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",1,*(*(iVar3 + 0xb0) + 0xf0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",2,*(*(iVar3 + 0xb0) + 0xf4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",3,*(*(iVar3 + 0xb0) + 0xf8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",4,*(*(iVar3 + 0xb0) + 0xfc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",5,*(*(iVar3 + 0xb0) + 0x100));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",6,*(*(iVar3 + 0xb0) + 0x104));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",7,*(*(iVar3 + 0xb0) + 0x108));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_shadow_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002260 (size 8) =====

int64_t sym.tc_shadow_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            iVar3 = 0;
            iVar2 = 0;
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar5 = 0x594;
            do {
                iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",iVar3,
                                  *(*piVar4 + iVar5));
                iVar5 = iVar5 + 4;
                iVar2 = iVar2 + iVar1;
                iVar3 = iVar3 + 1;
            } while (iVar5 != 0x644);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.cmb_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002268 (size 8) =====

int64_t sym.cmb_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb8) + 8));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb8) + 0xc));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_shadow_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002270 (size 8) =====

int64_t sym.bc_shadow_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (*(piVar4 + 0x8c) == 0) {
                iVar2 = 0;
            }
            else {
                uVar3 = 0;
                iVar2 = 0;
                iVar5 = 0x3d0;
                do {
                    iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3,
                                      *(*piVar4 + iVar5));
                    iVar2 = iVar2 + iVar1;
                    uVar3 = uVar3 + 1;
                    iVar5 = iVar5 + 4;
                } while (uVar3 < *(piVar4 + 0x8c));
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.tc_clear_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002278 (size 8) =====

int64_t sym.tc_clear_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_edge_ctrl_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002280 (size 8) =====

int64_t sym.dsb_edge_ctrl_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar3 + 0xb0) + 0x44));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",1,*(*(iVar3 + 0xb0) + 0x48));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",2,*(*(iVar3 + 0xb0) + 0x4c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",3,*(*(iVar3 + 0xb0) + 0x50));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",4,*(*(iVar3 + 0xb0) + 0x54));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",5,*(*(iVar3 + 0xb0) + 0x58));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",6,*(*(iVar3 + 0xb0) + 0x5c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",7,*(*(iVar3 + 0xb0) + 0x60));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_ovsr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002288 (size 8) =====

int64_t sym.bc_ovsr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c0);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_trig_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002290 (size 8) =====

int64_t sym.tc_trig_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x1c));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x20));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x24));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x28));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x2c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x30));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x34));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x38));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_available_modes_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002298 (size 8) =====

int64_t sym.cmb_available_modes_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80016ce,"continuous trace_on_change");
    return iVar1;
}


// ===== sym.dsb_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022a0 (size 8) =====

int64_t sym.dsb_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar3 * 4 + 0x10c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
    }
    return iVar2;
}


// ===== sym.tc_retrieval_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022a8 (size 8) =====

int64_t sym.tc_retrieval_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa8) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(param_3,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_val_lsb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022b0 (size 8) =====

int64_t sym.cmb_trig_patt_val_lsb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x1c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_shadow_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022b8 (size 8) =====

int64_t sym.bc_shadow_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (*(piVar4 + 0x8c) == 0) {
                iVar2 = 0;
            }
            else {
                uVar3 = 0;
                iVar2 = 0;
                iVar5 = 0x450;
                do {
                    iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3,
                                      *(*piVar4 + iVar5));
                    iVar2 = iVar2 + iVar1;
                    uVar3 = uVar3 + 1;
                    iVar5 = iVar5 + 4;
                } while (uVar3 < *(piVar4 + 0x8c));
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.dsb_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022c0 (size 8) =====

int64_t sym.dsb_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 100));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0x68));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0x6c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0x70));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0x74));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0x78));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0x7c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0x80));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.enable_datasets_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022c8 (size 8) =====

int64_t sym.enable_datasets_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%*pb\n",0x20,*(*(param_1 + 0x60) + 0x98) + 0x78);
    iVar2 = iVar1;
    if (iVar2 - 0xfffU < 2) {
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(param_3 + iVar2,2,0x8001559);
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_trig_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022d0 (size 8) =====

int64_t sym.dsb_trig_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xe8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022d8 (size 8) =====

int64_t sym.bc_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar3 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%u 0x%x\n",0,*(*(iVar3 + 0xa0) + 0x138));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",1,*(*(iVar3 + 0xa0) + 0x13c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",2,*(*(iVar3 + 0xa0) + 0x140));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",3,*(*(iVar3 + 0xa0) + 0x144));
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.tc_sw_inc_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022e0 (size 8) =====

int64_t sym.tc_sw_inc_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x700);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.dsb_trig_type_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022e8 (size 8) =====

int64_t sym.dsb_trig_type_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xe9));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_enable_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022f0 (size 8) =====

int64_t sym.bc_enable_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x14));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_enable_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080022f8 (size 8) =====

int64_t sym.bc_enable_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0xc));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_patt_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002300 (size 8) =====

int64_t sym.dsb_patt_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xa4));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_lanes_select_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002308 (size 8) =====

int64_t sym.mcmb_lanes_select_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(*(iVar2 + 0xb8) + 0xb8) + 1));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_edge_ctrl_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002310 (size 8) =====

int64_t sym.dsb_edge_ctrl_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar3 * 4 + 4));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x10);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_val_msb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002318 (size 8) =====

int64_t sym.cmb_trig_patt_val_msb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x20));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_trig_lane_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002320 (size 8) =====

int64_t sym.mcmb_trig_lane_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,**(*(iVar2 + 0xb8) + 0xb8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_shadow_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002328 (size 8) =====

int64_t sym.tc_shadow_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            iVar3 = 0;
            iVar2 = 0;
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar5 = 0x644;
            do {
                iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",iVar3,
                                  *(*piVar4 + iVar5));
                iVar5 = iVar5 + 4;
                iVar2 = iVar2 + iVar1;
                iVar3 = iVar3 + 1;
            } while (iVar5 != 0x6f4);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_mask_lsb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002330 (size 8) =====

int64_t sym.cmb_trig_patt_mask_lsb_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x24));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_retrieval_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002338 (size 8) =====

int64_t sym.bc_retrieval_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa0) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(param_3,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.cmb_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002340 (size 8) =====

int64_t sym.cmb_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        pcVar1 = "continuous";
        if (**(iVar3 + 0xb8) != '\0') {
            pcVar1 = "trace_on_change";
        }
        iVar2 = scnprintf(param_3,0x1000,"trace_mode: %s cycle_acc: %d\n",pcVar1,*(*(iVar3 + 0xb8) + 4));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.bc_clear_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002348 (size 8) =====

int64_t sym.bc_clear_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_read_interface_state_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002350 (size 8) =====

int64_t sym.cmb_read_interface_state_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if (((piVar4[0xe] >> 2 & 1) != 0) || ((piVar4[0xe] >> 6 & 1) != 0)) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0xa74);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_enable_ganging_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002358 (size 8) =====

int64_t sym.bc_enable_ganging_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x11c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_count_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002360 (size 8) =====

int64_t sym.bc_count_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c8);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_count_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002368 (size 8) =====

int64_t sym.tc_count_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x58c);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.cmb_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002370 (size 8) =====

int64_t sym.cmb_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb8) + uVar3 * 4 + 0x30));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
    }
    return iVar2;
}


// ===== sym.bc_trig_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002378 (size 8) =====

int64_t sym.bc_trig_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar3 * 4 + 0x9c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_count_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002380 (size 8) =====

int64_t sym.bc_count_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3cc);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.available_datasets_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002388 (size 8) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.available_datasets_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) & 1) == 0) {
        iVar3 = 0;
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%-8s","IMPLDEF");
        iVar3 = iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 1 & 1) != 0) {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s",0x80016ba);
        iVar3 = iVar3 + iVar1;
    }
    if ((*(iVar4 + 0x70) >> 2 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s",0x800141c);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 3 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s",0x80011fe);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 4 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s",0x8001556);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 5 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s",0x80013ef);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 6 & 1) != 0) {
        iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%-8s","MCMB");
        iVar3 = iVar3 + iVar1;
    }
    iVar1 = scnprintf(param_3 + iVar3,0x1000 - iVar3,0x8001559);
    return iVar3 + iVar1;
}


// ===== sym.bc_counter_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002390 (size 8) =====

int64_t sym.bc_counter_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c4);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_ovsr_impl_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002398 (size 8) =====

int64_t sym.tc_ovsr_impl_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x584);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.cmb_trig_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023a0 (size 8) =====

int64_t sym.cmb_trig_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x2c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_sat_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023a8 (size 8) =====

int64_t sym.bc_sat_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_sat_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023b0 (size 8) =====

int64_t sym.tc_sat_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xa8) + 8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_counter_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023b8 (size 8) =====

int64_t sym.tc_counter_sel_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x588);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_clear_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023c0 (size 8) =====

int64_t sym.bc_clear_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x10));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_trig_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023c8 (size 8) =====

int64_t sym.tc_trig_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x3c));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x40));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x44));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x48));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x4c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x50));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x54));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x58));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_sw_inc_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023d0 (size 8) =====

int64_t sym.bc_sw_inc_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x4d0);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.dsb_trig_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023d8 (size 8) =====

int64_t sym.dsb_trig_patt_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 0xa8));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0xac));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0xb0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0xb4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0xb8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0xbc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0xc0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xc4));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_enable_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023e0 (size 8) =====

int64_t sym.tc_enable_counters_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0xc));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_trig_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.tc_trig_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x5c));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x60));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 100));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x68));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x6c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x70));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x74));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x78));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_read_ctl_reg_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023f0 (size 8) =====

int64_t sym.cmb_read_ctl_reg_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    if (((piVar5[0xe] >> 2 & 1) == 0) && ((piVar5[0xe] >> 6 & 1) == 0)) {
        iVar4 = -1;
    }
    else {
        piVar1 = piVar5 + 7;
        mutex_lock(piVar1);
        if (piVar5[0xd] == '\0') {
            mutex_unlock(piVar1);
            iVar4 = -1;
        }
        else {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar5 + 0xa70);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            if ((piVar5[0xe] >> 2 & 1) == 0) {
                iVar3 = scnprintf(param_3,0x1000,"Lane %u SEL: %lx\n",uVar2 >> 1 & 7,uVar2 & 1);
            }
            else {
                iVar3 = scnprintf(param_3,0x1000,"SEL: %lx\n",uVar2);
            }
            iVar4 = iVar3;
        }
    }
    return iVar4;
}


// ===== sym.dsb_patt_type_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080023f8 (size 8) =====

int64_t sym.dsb_patt_type_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xa5));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002400 (size 8) =====

int64_t sym.dsb_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,**(iVar2 + 0xb0));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002408 (size 8) =====

int64_t sym.dsb_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 0x84));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0x88));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0x8c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0x90));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0x94));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0x98));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0x9c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xa0));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002410 (size 8) =====

int64_t sym.cmb_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb8) + 0x10));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb8) + 0x14));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_enable_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002418 (size 8) =====

int64_t sym.tc_enable_irq_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x14));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_overflow_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.bc_overflow_val_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa0) + 0x120));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa0) + 0x124));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa0) + 0x128));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa0) + 300));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa0) + 0x130));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa0) + 0x134));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_count_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002428 (size 8) =====

int64_t sym.tc_count_val_hi_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x590);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.dsb_trig_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002430 (size 8) =====

int64_t sym.dsb_trig_patt_mask_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(param_3,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 200));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0xcc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0xd0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0xd4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0xd8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0xdc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0xe0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xe4));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_patt_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002438 (size 8) =====

int64_t sym.cmb_patt_ts_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002440 (size 8) =====

int64_t sym.tc_msr_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar3 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"%u 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x7c));
        iVar2 = iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x80));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x84));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x88));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x8c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%u 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x90));
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.bc_trig_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002448 (size 8) =====

int64_t sym.bc_trig_val_lo_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar3 * 4 + 0x1c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_ovsr_gp_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002450 (size 8) =====

int64_t sym.tc_ovsr_gp_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    if ((piVar4[0xe] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x580);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(param_3,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_capture_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002458 (size 8) =====

int64_t sym.tc_capture_mode_show.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (**(iVar3 + 0xa8) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(param_3,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tc_clear_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002460 (size 8) =====

int64_t sym.tc_clear_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa8) + 0x18) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.tc_trig_sel_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(puVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xa8) + 0x1c));
        iVar3 = iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xa8) + 0x20));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xa8) + 0x24));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xa8) + 0x28));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xa8) + 0x2c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xa8) + 0x30));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar4 + 0xa8) + 0x34));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar4 + 0xa8) + 0x38));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.tc_enable_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002468 (size 8) =====

int64_t sym.tc_enable_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0x14) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_clear_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x18));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_select_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002470 (size 8) =====

int64_t sym.dsb_select_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar5 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = sscanf(param_3,"%lx %lx",puVar5,&uStack_48);
    if (iVar3 == 2) {
        iVar4 = -1;
        if ((((*(iVar9 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) {
            mutex_lock(iVar9 + 0x38);
            uVar6 = uStack_40;
            uVar8 = uStack_40;
            while (uVar6 <= uStack_48) {
                iVar7 = uVar8;
                iVar3 = iVar7 + 0x1f;
                if (-1 < iVar7) {
                    iVar3 = iVar7;
                }
                uVar1 = iVar3 >> 5;
                if (7 < uVar1) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8009b38);
                    (*pcVar2)();
                }
                iVar4 = *(iVar9 + 0xb0) + uVar1 * 4;
                uVar6 = iVar7 + 1;
                uVar8 = uVar6;
                *(iVar4 + 0xec) = *(iVar4 + 0xec) | 1L << (iVar7 + uVar1 * -0x20 & 0x3f);
            }
            mutex_unlock(iVar9 + 0x38);
            iVar4 = param_4;
        }
    }
    else {
        iVar4 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar9 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.dsb_msr_show;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if (*(iVar9 + 200) == '\0') {
        iVar4 = -0x16;
    }
    else if ((*(iVar9 + 0x70) >> 1 & 1) == 0) {
        iVar4 = -1;
    }
    else {
        uVar8 = 0;
        iVar4 = 0;
        do {
            iVar3 = scnprintf(puVar5 + iVar4,0x1000 - iVar4,"%u 0x%x\n",uVar8 & 0xffffffff,
                              *(*(iVar9 + 0xb0) + uVar8 * 4 + 0x10c));
            uVar8 = uVar8 + 1;
            iVar4 = iVar4 + iVar3;
        } while (uVar8 != 0x20);
    }
    return iVar4;
}


// ===== sym.cmb_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002478 (size 8) =====

int64_t sym.cmb_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar2 = &uStack_40 + 4;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = sscanf(param_3,"%u %u",iVar2,&uStack_40);
    if (iVar1 == 2) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(iVar4 + 0xb8) = uStack_40._4_4_ != 0;
            *(*(iVar4 + 0xb8) + 4) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_patt_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(iVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xb8) + 8));
        iVar3 = iVar1;
        iVar1 = scnprintf(iVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xb8) + 0xc));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.cmb_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002480 (size 8) =====

void sym.cmb_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    uVar3 = 0xffffffffffffffea;
    if ((iVar2 == 2) && (uStack_40 < 2)) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            uVar3 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            if (1 < uStack_40) goto code_r0x0800a03c;
            *(*(iVar4 + 0xb8) + uStack_40 * 4 + 8) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800a03c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800a040);
    (*pcVar1)();
}


// ===== sym.cmb_patt_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002488 (size 8) =====

int64_t sym.cmb_patt_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x18) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_ts_all_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb8) + 0x2d));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_clear_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002490 (size 8) =====

int64_t sym.bc_clear_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0x10) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_enable_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x14));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002498 (size 8) =====

void sym.cmb_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    uVar3 = 0xffffffffffffffea;
    if ((iVar2 == 2) && (uStack_40 < 2)) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            uVar3 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            if (1 < uStack_40) goto code_r0x0800a1f0;
            *(*(iVar4 + 0xb8) + uStack_40 * 4 + 0x10) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800a1f0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800a1f4);
    (*pcVar1)();
}


// ===== sym.bc_count_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024a0 (size 8) =====

int64_t sym.bc_count_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar3 != 0) {
        param_4 = -0x16;
        goto code_r0x08005ae4;
    }
    if ((piVar6[0xf] >> 4 & 1) == 0) {
        param_4 = -1;
        goto code_r0x08005ae4;
    }
    mutex_lock(piVar6 + 7);
    if (piVar6[0xd] == '\0') {
code_r0x08005ad8:
        param_4 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((1L << (*(*piVar6 + 0x3c4) & 0x3f) & *(*piVar6 + 0x288)) >> (*(*piVar6 + 0x3c4) & 0x3f) != 0)
        goto code_r0x08005ad8;
        *(*piVar6 + 0x3c8) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
    }
    mutex_unlock(piVar6 + 7);
code_r0x08005ae4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8005b40;
    piVar6 = *(*(iVar4 + 0x60) + 0x98);
    if ((piVar6[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar6 + 7;
        mutex_lock(piVar1);
        if (piVar6[0xd] != '\0') {
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar6 + 0x3cc);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.dsb_edge_ctrl_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024a8 (size 8) =====

int64_t sym.dsb_edge_ctrl_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    puVar6 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_50 = 0;
    iVar11 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = sscanf(param_3,"%lx %lx %lx",puVar6,&uStack_48,&iStack_50);
    if (iVar4 == 3) {
        iVar5 = -1;
        if ((((*(iVar11 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) {
            mutex_lock(iVar11 + 0x38);
            uVar7 = uStack_40;
            uVar9 = uStack_40;
            while (uVar7 <= uStack_48) {
                iVar8 = uVar9;
                iVar4 = iVar8 + 0x1f;
                if (-1 < iVar8) {
                    iVar4 = iVar8;
                }
                uVar1 = iVar4 >> 5;
                if (7 < uVar1) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8008a84);
                    (*pcVar3)();
                }
                iVar5 = *(iVar11 + 0xb0) + uVar1 * 4;
                uVar7 = iVar8 + 1;
                uVar9 = uVar7;
                uVar2 = *(iVar5 + 0x44);
                uVar10 = 1L << (iVar8 + uVar1 * -0x20 & 0x3f);
                uVar1 = uVar2 & (uVar10 ^ 0xffffffff);
                if (iStack_50 != 0) {
                    uVar1 = uVar2 | uVar10;
                }
                *(iVar5 + 0x44) = uVar1;
            }
            mutex_unlock(iVar11 + 0x38);
            iVar5 = param_4;
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    iVar11 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.dsb_patt_val_show;
    iVar11 = *(*(iVar11 + 0x60) + 0x98);
    if ((*(iVar11 + 0x70) >> 1 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar11 + 0x38);
        iVar4 = scnprintf(puVar6,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar11 + 0xb0) + 100));
        iVar5 = iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar11 + 0xb0) + 0x68));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar11 + 0xb0) + 0x6c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar11 + 0xb0) + 0x70));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar11 + 0xb0) + 0x74));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar11 + 0xb0) + 0x78));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar11 + 0xb0) + 0x7c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar11 + 0xb0) + 0x80));
        iVar5 = iVar5 + iVar4;
        mutex_unlock(iVar11 + 0x38);
    }
    return iVar5;
}


// ===== sym.dsb_trig_type_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024b0 (size 8) =====

int64_t sym.dsb_trig_type_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb0) + 0xe9) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_select_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(piVar2,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar4 + 0xb0) + 0xec));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",1,*(*(iVar4 + 0xb0) + 0xf0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",2,*(*(iVar4 + 0xb0) + 0xf4));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",3,*(*(iVar4 + 0xb0) + 0xf8));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",4,*(*(iVar4 + 0xb0) + 0xfc));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",5,*(*(iVar4 + 0xb0) + 0x100));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",6,*(*(iVar4 + 0xb0) + 0x104));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",7,*(*(iVar4 + 0xb0) + 0x108));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.cmb_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024b8 (size 8) =====

void sym.cmb_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        uVar3 = 0xffffffffffffffea;
    }
    else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        uVar3 = 0xffffffffffffffff;
    }
    else {
        iVar2 = sscanf(param_3,"%u %x",&uStack_40 + 4,&uStack_40);
        uVar3 = 0xffffffffffffffea;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 0x20)) {
            mutex_lock(iVar4 + 0x38);
            if (0x1f < uStack_40._4_4_) goto code_r0x0800abf4;
            *(*(iVar4 + 0xb8) + uStack_40._4_4_ * 4 + 0x30) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800abf4:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800abf8);
    (*pcVar1)();
}


// ===== sym.tc_sat_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024c0 (size 8) =====

int64_t sym.tc_sat_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 8) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_enable_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0xc));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_enable_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024c8 (size 8) =====

int64_t sym.bc_enable_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0xc) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_clear_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x10));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_trig_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024d0 (size 8) =====

ulong sym.bc_trig_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        if (((((*(iVar3 + 0x70) >> 4 & 1) == 0) || (*(iVar3 + 0x8c) <= uStack_40)) || (*(iVar3 + 0x84) == 2)) ||
           ((*(iVar3 + 0x84) == 1 && (uStack_40 != 0)))) {
            param_4 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            if (0x1f < uStack_40) goto code_r0x08005250;
            *(*(iVar3 + 0xa0) + uStack_40 * 4 + 0x9c) = uStack_48;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x08005250:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005254);
    (*pcVar1)();
}


// ===== sym.tc_count_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024d8 (size 8) =====

int64_t sym.tc_count_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar2 != 0) {
        param_4 = -0x16;
        goto code_r0x08007e2c;
    }
    if ((piVar6[0xf] >> 3 & 1) == 0) {
        param_4 = -1;
        goto code_r0x08007e2c;
    }
    mutex_lock(piVar6 + 7);
    if (piVar6[0xd] == '\0') {
code_r0x08007e20:
        param_4 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*piVar6 + 0x588) >> 0xb & 3;
        if ((1L << uVar1 & *(*piVar6 + 0x504)) >> uVar1 != 0) goto code_r0x08007e20;
        *(*piVar6 + 0x590) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
    }
    mutex_unlock(piVar6 + 7);
code_r0x08007e2c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8007e88;
    piVar6 = *(*(iVar4 + 0x60) + 0x98);
    if ((piVar6[0xf] >> 3 & 1) == 0) {
        iVar4 = -1;
    }
    else {
        mutex_lock(piVar6 + 7);
        if (piVar6[0xd] == '\0') {
            iVar4 = -1;
        }
        else {
            iVar2 = 0;
            iVar4 = 0;
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar7 = 0x594;
            do {
                iVar3 = scnprintf(piVar5 + iVar4,0x1000 - iVar4,"Index: 0x%x Value: 0x%x\n",iVar2,*(*piVar6 + iVar7)
                                 );
                iVar7 = iVar7 + 4;
                iVar4 = iVar4 + iVar3;
                iVar2 = iVar2 + 1;
            } while (iVar7 != 0x644);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
        }
        mutex_unlock(piVar6 + 7);
    }
    return iVar4;
}


// ===== sym.cmb_trig_patt_val_lsb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024e0 (size 8) =====

int64_t sym.cmb_trig_patt_val_lsb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x1c) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_mask_lsb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x24));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024e8 (size 8) =====

void sym.dsb_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x08008f44;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 0x84) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08008f44:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008f48);
    (*pcVar1)();
}


// ===== sym.bc_sw_inc_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024f0 (size 8) =====

int64_t sym.bc_sw_inc_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                param_4 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0x4d0) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.bc_msr_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if (*(iVar2 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar4,0x1000,"%u 0x%x\n",0,*(*(iVar2 + 0xa0) + 0x138));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",1,*(*(iVar2 + 0xa0) + 0x13c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",2,*(*(iVar2 + 0xa0) + 0x140));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",3,*(*(iVar2 + 0xa0) + 0x144));
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


// ===== sym.bc_clear_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080024f8 (size 8) =====

int64_t sym.bc_clear_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa0) + 0x18) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.bc_trig_val_lo_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",uVar5 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar5 * 4 + 0x1c));
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + iVar1;
        } while (uVar5 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.tc_enable_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002500 (size 8) =====

int64_t sym.tc_enable_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint64_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 3 & 1) == 0) || (uStack_40 >> (*(iVar3 + 0x90) & 0x3f) != 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0xc) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_clear_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x10));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_count_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002508 (size 8) =====

int64_t sym.bc_count_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 != 0) {
        param_4 = -0x16;
        goto code_r0x08005cec;
    }
    if ((piVar5[0xf] >> 4 & 1) == 0) {
        param_4 = -1;
        goto code_r0x08005cec;
    }
    mutex_lock(piVar5 + 7);
    if (piVar5[0xd] == '\0') {
code_r0x08005ce0:
        param_4 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((1L << (*(*piVar5 + 0x3c4) & 0x3f) & *(*piVar5 + 0x288)) >> (*(*piVar5 + 0x3c4) & 0x3f) != 0)
        goto code_r0x08005ce0;
        *(*piVar5 + 0x3cc) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
    }
    mutex_unlock(piVar5 + 7);
code_r0x08005cec:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = 0x8005d48;
        piVar5 = *(*(iVar3 + 0x60) + 0x98);
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            iVar3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                iVar3 = -1;
            }
            else {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                if (*(piVar5 + 0x8c) == 0) {
                    iVar3 = 0;
                }
                else {
                    uVar6 = 0;
                    iVar3 = 0;
                    iVar1 = 0x3d0;
                    do {
                        iVar2 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",uVar6,
                                          *(*piVar5 + iVar1));
                        iVar3 = iVar3 + iVar2;
                        uVar6 = uVar6 + 1;
                        iVar1 = iVar1 + 4;
                    } while (uVar6 < *(piVar5 + 0x8c));
                }
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
        return iVar3;
    }
    return param_4;
}


// ===== sym.integration_test_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002510 (size 8) =====

int64_t sym.integration_test_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_30 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,10,&iStack_30);
    if (iVar2 == 0) {
        if ((iStack_30 - 3U < 0xfffffffffffffffe) || (piVar6[0xd] == '\0')) {
            param_4 = -0x16;
        }
        else {
            bVar1 = iStack_30 != 1;
            iStack_30 = 0xc01f1409;
            if (bVar1) {
                iStack_30 = 0xc00f1409;
            }
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xf00) = 1;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
        }
    }
    else {
        param_4 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.gp_regs_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 5 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        uVar7 = 0;
        iVar5 = 0;
        do {
            if ((*(*(iVar3 + 0x98) + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
                iVar2 = scnprintf(piVar4 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",uVar7 & 0xffffffff,
                                  *(*(iVar3 + 0x98) + uVar7 * 4 + 0x18));
                iVar5 = iVar5 + iVar2;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 0xa0);
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar5;
}


// ===== sym.dsb_patt_type_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002518 (size 8) =====

int64_t sym.dsb_patt_type_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb0) + 0xa5) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_trig_patt_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(piVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xb0) + 0xa8));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xb0) + 0xac));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xb0) + 0xb0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xb0) + 0xb4));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xb0) + 0xb8));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xb0) + 0xbc));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar4 + 0xb0) + 0xc0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar4 + 0xb0) + 0xc4));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.reset_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002520 (size 8) =====

int64_t sym.reset_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    ulong *puVar6;
    ushort *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int64_t unaff_x20;
    int64_t *piVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    iVar10 = *(*(param_1 + 0x60) + 0x98);
    iVar8 = param_4;
    iVar2 = kstrtoull(param_3,10,&uStack_40);
    if (iVar2 != 0) {
        param_4 = iVar2;
        goto code_r0x08004154;
    }
    unaff_x20 = iVar10 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar10 + 0x98) != 0) {
        puVar4 = 0x298;
        memset(*(iVar10 + 0x98),0,0x298);
    }
    if (*(iVar10 + 0xa0) != 0) {
        puVar4 = 0x148;
        memset(*(iVar10 + 0xa0),0,0x148);
    }
    puVar6 = *(iVar10 + 0xa8);
    if (puVar6 != NULL) {
        *(puVar6 + 0x12) = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
    }
    if (*(iVar10 + 0xb0) != 0) {
        puVar4 = 0x18c;
        memset(*(iVar10 + 0xb0),0,0x18c);
    }
    puVar6 = *(iVar10 + 0xb8);
    if (puVar6 != NULL) {
        puVar7 = puVar6[0x17];
        if (puVar7 != NULL) {
            *puVar7 = 0;
            puVar6 = *(iVar10 + 0xb8);
        }
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(*(iVar10 + 0xb8) + 0xb8) = puVar7;
    }
    if ((*(iVar10 + 0x70) >> 4 & 1) == 0) {
        if ((*(iVar10 + 0x70) >> 3 & 1) != 0) goto code_r0x080040fc;
code_r0x080040d8:
        if ((*(iVar10 + 0x70) >> 1 & 1) != 0) goto code_r0x0800410c;
code_r0x080040e0:
        if ((*(iVar10 + 0x70) >> 2 & 1) != 0) goto code_r0x08004130;
code_r0x08004128:
        if ((*(iVar10 + 0x70) >> 6 & 1) != 0) goto code_r0x08004130;
    }
    else {
        *(*(iVar10 + 0xa0) + 4) = 0;
        if ((*(iVar10 + 0x70) >> 3 & 1) == 0) goto code_r0x080040d8;
code_r0x080040fc:
        *(*(iVar10 + 0xa8) + 4) = 0;
        if ((*(iVar10 + 0x70) >> 1 & 1) == 0) goto code_r0x080040e0;
code_r0x0800410c:
        *(*(iVar10 + 0xb0) + 0xe8) = 1;
        *(*(iVar10 + 0xb0) + 0xe9) = 0;
        if ((*(iVar10 + 0x70) >> 2 & 1) == 0) goto code_r0x08004128;
code_r0x08004130:
        *(*(iVar10 + 0xb8) + 0x2c) = 1;
    }
    mutex_unlock(unaff_x20);
    if (*(iVar10 + 0x68) != '\0') {
        coresight_disable(*(iVar10 + 0x10));
    }
code_r0x08004154:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    piVar5 = &iStack_70;
    *extraout_x18 = sym.integration_test_store;
    pcStack_58 = sym.integration_test_store;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    piVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = unaff_x20;
    iStack_48 = param_4;
    iVar2 = kstrtoull(puVar4,10,&iStack_70);
    if (iVar2 == 0) {
        if ((iStack_70 - 3U < 0xfffffffffffffffe) || (piVar9[0xd] == '\0')) {
            iVar8 = -0x16;
        }
        else {
            bVar1 = iStack_70 != 1;
            iStack_70 = 0xc01f1409;
            if (bVar1) {
                iStack_70 = 0xc00f1409;
            }
            *(*piVar9 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar9 + 0xf00) = 1;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar9 + 0xfb0) = 0;
        }
    }
    else {
        iVar8 = iVar2;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.gp_regs_show;
        iVar8 = *(*(iVar8 + 0x60) + 0x98);
        if ((*(iVar8 + 0x70) >> 5 & 1) == 0) {
            iVar10 = -1;
        }
        else {
            mutex_lock(iVar8 + 0x38);
            uVar11 = 0;
            iVar10 = 0;
            do {
                if ((*(*(iVar8 + 0x98) + (uVar11 >> 6 & 0x3ffffff) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
                    iVar2 = scnprintf(piVar5 + iVar10,0x1000 - iVar10,"Index: 0x%x Value: 0x%x\n",uVar11 & 0xffffffff
                                      ,*(*(iVar8 + 0x98) + uVar11 * 4 + 0x18));
                    iVar10 = iVar10 + iVar2;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != 0xa0);
            mutex_unlock(iVar8 + 0x38);
        }
        return iVar10;
    }
    return iVar8;
}


// ===== sym.tc_counter_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002528 (size 8) =====

int64_t sym.tc_counter_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                param_4 = -1;
            }
            else {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x588) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_count_val_lo_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x58c);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(puVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return param_4;
}


// ===== sym.tc_capture_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002530 (size 8) =====

uint64_t sym.tc_capture_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                   (int64_t param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    if ((0x13 < param_4) || (iVar2 = sscanf(param_3,0x800115e,&uStack_50), param_3 = puVar5, iVar2 != 1)) {
        puVar5 = param_3;
        param_4 = 0xffffffffffffffea;
        goto code_r0x08006424;
    }
    if ((piVar7[0xf] >> 3 & 1) == 0) {
        param_4 = 0xffffffffffffffff;
        goto code_r0x08006424;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
        param_4 = 0xffffffffffffffff;
    }
    else {
        if (uStack_50 == 0x425441) {
            uVar6 = 0;
        }
        else {
            if ((uStack_50 != 0x425041) || (*(piVar7[0x15] + 4) != 1)) {
                param_4 = 0xffffffffffffffea;
                goto code_r0x08006514;
            }
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0x500) = *(*piVar7 + 0x500) | 8;
            DataSynchronizationBarrier(3,3,0);
            uVar6 = 1;
            *(*piVar7 + 0xfb0) = 0;
        }
        *piVar7[0x15] = uVar6;
    }
code_r0x08006514:
    mutex_unlock(piVar7 + 7);
code_r0x08006424:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x8006524;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        uVar4 = 0xffffffffffffffff;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa8) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(puVar5,0x1000,0x80016ce,uVar1);
        uVar4 = iVar2;
    }
    return uVar4;
}


// ===== sym.tc_trig_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002538 (size 8) =====

void sym.tc_trig_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                uVar3 = 0xffffffffffffffff;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007280;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x3c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                uVar3 = param_4;
            }
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08007280:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007284);
    (*pcVar1)();
}


// ===== sym.tc_clear_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002540 (size 8) =====

int64_t sym.tc_clear_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint64_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 3 & 1) == 0) || (uStack_40 >> (*(iVar3 + 0x90) & 0x3f) != 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0x10) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_enable_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x14));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002548 (size 8) =====

void sym.bc_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        uVar3 = 0xffffffffffffffea;
    }
    else if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        uVar3 = 0xffffffffffffffff;
    }
    else {
        iVar2 = sscanf(param_3,"%u %x",&uStack_40 + 4,&uStack_40);
        uVar3 = 0xffffffffffffffea;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 4)) {
            mutex_lock(iVar4 + 0x38);
            if (3 < uStack_40._4_4_) goto code_r0x08006334;
            *(*(iVar4 + 0xa0) + uStack_40._4_4_ * 4 + 0x138) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08006334:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006338);
    (*pcVar1)();
}


// ===== sym.bc_reset_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002550 (size 8) =====

int64_t sym.bc_reset_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
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
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                param_4 = -1;
            }
            else if (uStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar5 + 0x280) | 2;
                uStack_40 = uVar1;
                *(*piVar5 + 0x280) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x8004944;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = scnprintf(puVar4,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 8));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.dsb_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002558 (size 8) =====

void sym.dsb_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        uVar3 = 0xffffffffffffffea;
    }
    else if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        uVar3 = 0xffffffffffffffff;
    }
    else {
        iVar2 = sscanf(param_3,"%u %x",&uStack_40 + 4,&uStack_40);
        uVar3 = 0xffffffffffffffea;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 0x20)) {
            mutex_lock(iVar4 + 0x38);
            if (0x1f < uStack_40._4_4_) goto code_r0x08009ce0;
            *(*(iVar4 + 0xb0) + uStack_40._4_4_ * 4 + 0x10c) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08009ce0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8009ce4);
    (*pcVar1)();
}


// ===== sym.bc_retrieval_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002560 (size 8) =====

uint64_t sym.bc_retrieval_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                   (int64_t param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    int64_t unaff_x20;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    uVar8 = param_4;
    if ((0x13 < param_4) || (iVar3 = sscanf(param_3,0x800115e,&uStack_50), param_3 = puVar5, iVar3 != 1)) {
        puVar5 = param_3;
        param_4 = 0xffffffffffffffea;
        goto code_r0x0800478c;
    }
    if ((*(iVar9 + 0x70) >> 4 & 1) == 0) {
        param_4 = 0xffffffffffffffff;
        goto code_r0x0800478c;
    }
    unaff_x20 = iVar9 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar9 + 0x68) == '\0') {
        if (uStack_50 == 0x425441) {
            uVar7 = 0;
        }
        else {
            if (uStack_50 != 0x425041) {
                param_4 = 0xffffffffffffffea;
                goto code_r0x0800481c;
            }
            uVar7 = 1;
        }
        *(*(iVar9 + 0xa0) + 4) = uVar7;
    }
    else {
        param_4 = 0xffffffffffffffff;
    }
code_r0x0800481c:
    mutex_unlock(unaff_x20);
code_r0x0800478c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    puVar6 = &uStack_90;
    *extraout_x18 = sym.bc_reset_counters_store;
    pcStack_78 = sym.bc_reset_counters_store;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_90 = 0;
    piVar10 = *(*(iVar4 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar9;
    iStack_60 = unaff_x20;
    uStack_58 = param_4;
    iVar3 = kstrtoull(puVar5,0x10,&uStack_90);
    if (iVar3 == 0) {
        if ((piVar10[0xf] >> 4 & 1) == 0) {
            uVar8 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(piVar10 + 7);
            if (piVar10[0xd] == '\0') {
                uVar8 = 0xffffffffffffffff;
            }
            else if (uStack_90 != 0) {
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar10 + 0x280) | 2;
                uStack_90 = uVar1;
                *(*piVar10 + 0x280) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
            }
            mutex_unlock(piVar10 + 7);
        }
    }
    else {
        uVar8 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = 0x8004944;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if ((*(iVar9 + 0x70) >> 4 & 1) == 0) {
        uVar8 = 0xffffffffffffffff;
    }
    else {
        iVar3 = scnprintf(puVar6,0x1000,0x8001169,*(*(iVar9 + 0xa0) + 8));
        uVar8 = iVar3;
    }
    return uVar8;
}


// ===== sym.tc_reset_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002568 (size 8) =====

int64_t sym.tc_reset_counters_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
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
        if ((piVar5[0xe] >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                param_4 = -1;
            }
            else if (uStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar5 + 0x500) | 2;
                uStack_40 = uVar1;
                *(*piVar5 + 0x500) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x80067cc;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = scnprintf(puVar4,0x1000,0x80011bb,*(*(iVar3 + 0xa8) + 8));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tc_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002570 (size 8) =====

void sym.tc_msr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        uVar3 = 0xffffffffffffffea;
    }
    else if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
        uVar3 = 0xffffffffffffffff;
    }
    else {
        iVar2 = sscanf(param_3,"%u %x",&uStack_40 + 4,&uStack_40);
        uVar3 = 0xffffffffffffffea;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 6)) {
            mutex_lock(iVar4 + 0x38);
            if (5 < uStack_40._4_4_) goto code_r0x0800848c;
            *(*(iVar4 + 0xa8) + uStack_40._4_4_ * 4 + 0x7c) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800848c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008490);
    (*pcVar1)();
}


// ===== sym.cmb_read_ctl_reg_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002578 (size 8) =====

int64_t sym.cmb_read_ctl_reg_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t *unaff_x20;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = param_4;
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        if (((piVar7[0xe] >> 2 & 1) == 0) && ((piVar7[0xe] >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            unaff_x20 = piVar7 + 7;
            mutex_lock(unaff_x20);
            if (piVar7[0xd] == '\0') {
                param_4 = -1;
            }
            else {
                *(*piVar7 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xa70) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            mutex_unlock(unaff_x20);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    puVar5 = &uStack_80;
    *extraout_x18 = sym.cmb_markr_store;
    pcStack_68 = sym.cmb_markr_store;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    piVar8 = *(*(iVar3 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar7;
    piStack_50 = unaff_x20;
    iStack_48 = param_4;
    iVar2 = kstrtoull(puVar4,0x10,&uStack_80);
    if (iVar2 == 0) {
        if (((piVar8[0xe] >> 2 & 1) == 0) && ((piVar8[0xe] >> 6 & 1) == 0)) {
            iVar6 = -1;
        }
        else {
            mutex_lock(piVar8 + 7);
            if (piVar8[0xd] == '\0') {
                iVar6 = -1;
            }
            else {
                *(*piVar8 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xa28) = uStack_80;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xfb0) = 0;
            }
            mutex_unlock(piVar8 + 7);
        }
    }
    else {
        iVar6 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.mcmb_trig_lane_show;
    iVar6 = *(*(iVar6 + 0x60) + 0x98);
    if ((*(iVar6 + 0x70) >> 6 & 1) == 0) {
        iVar6 = -1;
    }
    else {
        iVar2 = scnprintf(puVar5,0x1000,0x80011bb,**(*(iVar6 + 0xb8) + 0xb8));
        iVar6 = iVar2;
    }
    return iVar6;
}


// ===== sym.gp_regs_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002580 (size 8) =====

void sym.gp_regs_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar5 + 0x70) >> 5 & 1) != 0) && (uStack_40 < 0xa0)) {
            mutex_lock(iVar5 + 0x38);
            if (0x9f < uStack_40) goto code_r0x080044ac;
            *(*(iVar5 + 0x98) + uStack_40 * 4 + 0x18) = uStack_48;
            iVar4 = (uStack_40 >> 6 & 0x3ffffff) * 8;
            *(*(iVar5 + 0x98) + iVar4) = *(*(iVar5 + 0x98) + iVar4) | 1L << (uStack_40 & 0x3f);
            mutex_unlock(iVar5 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080044ac:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80044b0);
    (*pcVar1)();
}


// ===== sym.cmb_trig_patt_val_msb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002588 (size 8) =====

int64_t sym.cmb_trig_patt_val_msb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x20) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_mask_msb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x28));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.mcmb_lanes_select_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002590 (size 8) =====

uchar * sym.mcmb_lanes_select_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
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
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        if ((*(iVar4 + 0x70) >> 6 & 1) == 0) {
            param_4 = 0xffffffffffffffff;
        }
        else {
            uStack_40 = uStack_40 & 0xff;
            mutex_lock(iVar4 + 0x38);
            *(*(*(iVar4 + 0xb8) + 0xb8) + 1) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
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
        pcVar1 = SoftwareBreakpoint(0x5502,0x800b294);
        (*pcVar1)();
    }
    return param_4;
}


// ===== sym.dsb_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002598 (size 8) =====

void sym.dsb_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x08008ce4;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 100) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08008ce4:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008ce8);
    (*pcVar1)();
}


// ===== sym.dsb_patt_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025a0 (size 8) =====

int64_t sym.dsb_patt_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb0) + 0xa4) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_patt_type_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb0) + 0xa5));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_ts_all_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025a8 (size 8) =====

int64_t sym.cmb_ts_all_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x2d) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_val_lsb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x1c));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_enable_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025b0 (size 8) =====

int64_t sym.bc_enable_irq_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0x14) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_clear_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x18));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_mask_lsb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025b8 (size 8) =====

int64_t sym.cmb_trig_patt_mask_lsb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x24) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_val_msb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x20));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_trig_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025c0 (size 8) =====

ulong sym.bc_trig_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        if (((((*(iVar3 + 0x70) >> 4 & 1) == 0) || (*(iVar3 + 0x8c) <= uStack_40)) || (*(iVar3 + 0x84) == 2)) ||
           ((*(iVar3 + 0x84) == 1 && (uStack_40 != 0)))) {
            param_4 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            if (0x1f < uStack_40) goto code_r0x08005090;
            *(*(iVar3 + 0xa0) + uStack_40 * 4 + 0x1c) = uStack_48;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
code_r0x08005090:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005094);
    (*pcVar1)();
}


// ===== sym.enable_datasets_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025c8 (size 8) =====

int64_t sym.enable_datasets_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *puVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ushort *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar11;
    int64_t iVar12;
    int64_t unaff_x20;
    int64_t *piVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(param_1 + 0x60) + 0x98);
    iVar11 = param_4;
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        unaff_x20 = iVar14 + 0x38;
        mutex_lock(unaff_x20);
        if (*(iVar14 + 0x68) == '\0') {
            uVar15 = 0;
            iVar12 = iVar14 + 0x78;
            do {
                uVar10 = uVar15 >> 6 & 0x3ffffff;
                uVar9 = 1L << (uVar15 & 0x3f);
                if (((*(iVar14 + 0x70 + uVar10 * 8) & uVar9) == 0) || ((uStack_40 & uVar9) == 0)) {
                    uVar9 = *(iVar12 + uVar10 * 8) & (uVar9 ^ 0xffffffffffffffff);
                }
                else {
                    uVar9 = *(iVar12 + uVar10 * 8) | uVar9;
                }
                uVar15 = uVar15 + 1;
                *(iVar12 + uVar10 * 8) = uVar9;
            } while (uVar15 != 0x20);
        }
        else {
            param_4 = -1;
        }
        mutex_unlock(unaff_x20);
    }
    else {
        param_4 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    puVar5 = &uStack_80;
    *extraout_x18 = sym.reset_store;
    pcStack_68 = sym.reset_store;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    uStack_80 = 0;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    iVar12 = iVar11;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar14;
    iStack_50 = unaff_x20;
    iStack_48 = param_4;
    iVar2 = kstrtoull(puVar4,10,&uStack_80);
    if (iVar2 != 0) {
        iVar11 = iVar2;
        goto code_r0x08004154;
    }
    unaff_x20 = iVar3 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar3 + 0x98) != 0) {
        puVar5 = 0x298;
        memset(*(iVar3 + 0x98),0,0x298);
    }
    if (*(iVar3 + 0xa0) != 0) {
        puVar5 = 0x148;
        memset(*(iVar3 + 0xa0),0,0x148);
    }
    puVar7 = *(iVar3 + 0xa8);
    if (puVar7 != NULL) {
        *(puVar7 + 0x12) = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
    }
    if (*(iVar3 + 0xb0) != 0) {
        puVar5 = 0x18c;
        memset(*(iVar3 + 0xb0),0,0x18c);
    }
    puVar7 = *(iVar3 + 0xb8);
    if (puVar7 != NULL) {
        puVar8 = puVar7[0x17];
        if (puVar8 != NULL) {
            *puVar8 = 0;
            puVar7 = *(iVar3 + 0xb8);
        }
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x14] = 0;
        puVar7[0x15] = 0;
        puVar7[0x12] = 0;
        puVar7[0x13] = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(*(iVar3 + 0xb8) + 0xb8) = puVar8;
    }
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) != 0) goto code_r0x080040fc;
code_r0x080040d8:
        if ((*(iVar3 + 0x70) >> 1 & 1) != 0) goto code_r0x0800410c;
code_r0x080040e0:
        if ((*(iVar3 + 0x70) >> 2 & 1) != 0) goto code_r0x08004130;
code_r0x08004128:
        if ((*(iVar3 + 0x70) >> 6 & 1) != 0) goto code_r0x08004130;
    }
    else {
        *(*(iVar3 + 0xa0) + 4) = 0;
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) goto code_r0x080040d8;
code_r0x080040fc:
        *(*(iVar3 + 0xa8) + 4) = 0;
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) goto code_r0x080040e0;
code_r0x0800410c:
        *(*(iVar3 + 0xb0) + 0xe8) = 1;
        *(*(iVar3 + 0xb0) + 0xe9) = 0;
        if ((*(iVar3 + 0x70) >> 2 & 1) == 0) goto code_r0x08004128;
code_r0x08004130:
        *(*(iVar3 + 0xb8) + 0x2c) = 1;
    }
    mutex_unlock(unaff_x20);
    if (*(iVar3 + 0x68) != '\0') {
        coresight_disable(*(iVar3 + 0x10));
    }
code_r0x08004154:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_78) {
        return iVar11;
    }
    iVar3 = __stack_chk_fail();
    piVar6 = &iStack_b0;
    *extraout_x18_00 = sym.integration_test_store;
    pcStack_98 = sym.integration_test_store;
    iVar14 = sp_el0;
    iStack_a8 = *(iVar14 + 0x5e0);
    iStack_b0 = 0;
    piVar13 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_a0 = &puStack_70;
    iStack_90 = unaff_x20;
    iStack_88 = iVar11;
    iVar2 = kstrtoull(puVar5,10,&iStack_b0);
    if (iVar2 == 0) {
        if ((iStack_b0 - 3U < 0xfffffffffffffffe) || (piVar13[0xd] == '\0')) {
            iVar12 = -0x16;
        }
        else {
            bVar1 = iStack_b0 != 1;
            iStack_b0 = 0xc01f1409;
            if (bVar1) {
                iStack_b0 = 0xc00f1409;
            }
            *(*piVar13 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar13 + 0xf00) = 1;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar13 + 0xfb0) = 0;
        }
    }
    else {
        iVar12 = iVar2;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_a8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_01 = sym.gp_regs_show;
        iVar11 = *(*(iVar11 + 0x60) + 0x98);
        if ((*(iVar11 + 0x70) >> 5 & 1) == 0) {
            iVar14 = -1;
        }
        else {
            mutex_lock(iVar11 + 0x38);
            uVar15 = 0;
            iVar14 = 0;
            do {
                if ((*(*(iVar11 + 0x98) + (uVar15 >> 6 & 0x3ffffff) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
                    iVar2 = scnprintf(piVar6 + iVar14,0x1000 - iVar14,"Index: 0x%x Value: 0x%x\n",uVar15 & 0xffffffff
                                      ,*(*(iVar11 + 0x98) + uVar15 * 4 + 0x18));
                    iVar14 = iVar14 + iVar2;
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 != 0xa0);
            mutex_unlock(iVar11 + 0x38);
        }
        return iVar14;
    }
    return iVar12;
}


// ===== sym.bc_counter_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025d0 (size 8) =====

int64_t sym.bc_counter_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if ((piVar6[0xd] == '\0') || (*(piVar6 + 0x8c) <= uStack_40)) {
                param_4 = -1;
            }
            else {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x3c4) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.bc_count_val_lo_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 4 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x3c8);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(puVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return param_4;
}


// ===== sym.tc_ovsr_gp_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025d8 (size 8) =====

int64_t sym.tc_ovsr_gp_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                param_4 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x580) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_ovsr_impl_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x584);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return param_4;
}


// ===== sym.bc_ovsr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025e0 (size 8) =====

int64_t sym.bc_ovsr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                param_4 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x3c0) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.bc_counter_sel_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 4 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x3c4);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return param_4;
}


// ===== sym.tc_retrieval_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025e8 (size 8) =====

uint64_t sym.tc_retrieval_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                   (int64_t param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    int64_t unaff_x20;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    uVar8 = param_4;
    if ((0x13 < param_4) || (iVar3 = sscanf(param_3,0x800115e,&uStack_50), param_3 = puVar5, iVar3 != 1)) {
        puVar5 = param_3;
        param_4 = 0xffffffffffffffea;
        goto code_r0x08006614;
    }
    if ((*(iVar9 + 0x70) >> 3 & 1) == 0) {
        param_4 = 0xffffffffffffffff;
        goto code_r0x08006614;
    }
    unaff_x20 = iVar9 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar9 + 0x68) == '\0') {
        if (uStack_50 == 0x425441) {
            uVar7 = 0;
        }
        else {
            if (uStack_50 != 0x425041) {
                param_4 = 0xffffffffffffffea;
                goto code_r0x080066a4;
            }
            uVar7 = 1;
        }
        *(*(iVar9 + 0xa8) + 4) = uVar7;
    }
    else {
        param_4 = 0xffffffffffffffff;
    }
code_r0x080066a4:
    mutex_unlock(unaff_x20);
code_r0x08006614:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    puVar6 = &uStack_90;
    *extraout_x18 = sym.tc_reset_counters_store;
    pcStack_78 = sym.tc_reset_counters_store;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_90 = 0;
    piVar10 = *(*(iVar4 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar9;
    iStack_60 = unaff_x20;
    uStack_58 = param_4;
    iVar3 = kstrtoull(puVar5,0x10,&uStack_90);
    if (iVar3 == 0) {
        if ((piVar10[0xe] >> 3 & 1) == 0) {
            uVar8 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(piVar10 + 7);
            if (piVar10[0xd] == '\0') {
                uVar8 = 0xffffffffffffffff;
            }
            else if (uStack_90 != 0) {
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar10 + 0x500) | 2;
                uStack_90 = uVar1;
                *(*piVar10 + 0x500) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
            }
            mutex_unlock(piVar10 + 7);
        }
    }
    else {
        uVar8 = 0xffffffffffffffea;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = 0x80067cc;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if ((*(iVar9 + 0x70) >> 3 & 1) == 0) {
        uVar8 = 0xffffffffffffffff;
    }
    else {
        iVar3 = scnprintf(puVar6,0x1000,0x80011bb,*(*(iVar9 + 0xa8) + 8));
        uVar8 = iVar3;
    }
    return uVar8;
}


// ===== sym.mcmb_trig_lane_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025f0 (size 8) =====

int64_t sym.mcmb_trig_lane_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,10,&uStack_40);
    iVar2 = -0x16;
    if ((iVar1 == 0) && (uStack_40 < 8)) {
        if ((*(iVar4 + 0x70) >> 6 & 1) == 0) {
            iVar2 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(*(iVar4 + 0xb8) + 0xb8) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            iVar2 = param_4;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar2 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.mcmb_lanes_select_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(puVar3,0x1000,0x80011bb,*(*(*(iVar2 + 0xb8) + 0xb8) + 1));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_ovsr_impl_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x080025f8 (size 8) =====

int64_t sym.tc_ovsr_impl_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                param_4 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x584) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_counter_sel_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x588);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return param_4;
}


// ===== sym.dsb_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002600 (size 8) =====

int64_t sym.dsb_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(iVar4 + 0xb0) = uStack_40 & 0xfffffff;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_edge_ctrl_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",uVar5 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar5 * 4 + 4));
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + iVar1;
        } while (uVar5 != 0x10);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.tc_sw_inc_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002608 (size 8) =====

int64_t sym.tc_sw_inc_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((piVar5[0xf] >> 3 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                param_4 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0x700) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.tc_msr_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if (*(iVar2 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar4,0x1000,"%u 0x%x\n",0,*(*(iVar2 + 0xa8) + 0x7c));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",1,*(*(iVar2 + 0xa8) + 0x80));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",2,*(*(iVar2 + 0xa8) + 0x84));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",3,*(*(iVar2 + 0xa8) + 0x88));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",4,*(*(iVar2 + 0xa8) + 0x8c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",5,*(*(iVar2 + 0xa8) + 0x90));
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_mask_msb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002610 (size 8) =====

int64_t sym.cmb_trig_patt_mask_msb_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x28) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_ts_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb8) + 0x2c));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_trig_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002618 (size 8) =====

void sym.dsb_trig_patt_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x080093ec;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 0xa8) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080093ec:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80093f0);
    (*pcVar1)();
}


// ===== sym.bc_enable_ganging_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002620 (size 8) =====

int64_t sym.bc_enable_ganging_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa0) + 0x11c) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.bc_overflow_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(puVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xa0) + 0x120));
        iVar3 = iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xa0) + 0x124));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xa0) + 0x128));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xa0) + 300));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xa0) + 0x130));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xa0) + 0x134));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.dsb_trig_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002628 (size 8) =====

void sym.dsb_trig_patt_mask_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x0800964c;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 200) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800964c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8009650);
    (*pcVar1)();
}


// ===== sym.dsb_edge_ctrl_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002630 (size 8) =====

int64_t sym.dsb_edge_ctrl_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = sscanf(param_3,"%lx %lx %lx",puVar6,&uStack_48,&uStack_50);
    if (iVar4 == 3) {
        iVar5 = -1;
        if (((((*(iVar9 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) && (uStack_50 < 3)) {
            mutex_lock(iVar9 + 0x38);
            if (uStack_40 <= uStack_48) {
                iVar4 = uStack_40 << 1;
                uVar8 = uStack_40;
                do {
                    iVar7 = uVar8;
                    iVar2 = iVar7 + 0xf;
                    if (-1 < iVar7) {
                        iVar2 = iVar7;
                    }
                    uVar1 = iVar2 >> 4;
                    if (0xf < uVar1) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x80087c8);
                        (*pcVar3)();
                    }
                    uVar8 = iVar7 + 1U;
                    iVar5 = *(iVar9 + 0xb0) + uVar1 * 4;
                    uVar1 = iVar4 + uVar1 * -0x20;
                    iVar4 = iVar4 + 2;
                    *(iVar5 + 4) = *(iVar5 + 4) & ((2L << (uVar1 + 1 & 0x3f)) + (-1L << (uVar1 & 0x3f)) ^ 0xffffffffU) |
                                   uStack_50 << (uVar1 & 0x3f);
                } while (iVar7 + 1U <= uStack_48);
            }
            mutex_unlock(iVar9 + 0x38);
            iVar5 = param_4;
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    iVar9 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.dsb_edge_ctrl_mask_show;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if ((*(iVar9 + 0x70) >> 1 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar9 + 0x38);
        iVar4 = scnprintf(puVar6,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar9 + 0xb0) + 0x44));
        iVar5 = iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",1,*(*(iVar9 + 0xb0) + 0x48));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",2,*(*(iVar9 + 0xb0) + 0x4c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",3,*(*(iVar9 + 0xb0) + 0x50));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",4,*(*(iVar9 + 0xb0) + 0x54));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",5,*(*(iVar9 + 0xb0) + 0x58));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",6,*(*(iVar9 + 0xb0) + 0x5c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",7,*(*(iVar9 + 0xb0) + 0x60));
        iVar5 = iVar5 + iVar4;
        mutex_unlock(iVar9 + 0x38);
    }
    return iVar5;
}


// ===== sym.cmb_trig_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002638 (size 8) =====

int64_t sym.cmb_trig_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb8) + 0x2c) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.cmb_msr_show;
        iVar4 = *(*(iVar4 + 0x60) + 0x98);
        if (*(iVar4 + 200) == '\0') {
            iVar3 = -0x16;
        }
        else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            iVar3 = -1;
        }
        else {
            uVar5 = 0;
            iVar3 = 0;
            do {
                iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"%u 0x%x\n",uVar5 & 0xffffffff,
                                  *(*(iVar4 + 0xb8) + uVar5 * 4 + 0x30));
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + iVar1;
            } while (uVar5 != 0x20);
        }
        return iVar3;
    }
    return param_4;
}


// ===== sym.bc_capture_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002640 (size 8) =====

uint64_t sym.bc_capture_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                   (int64_t param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    if ((0x13 < param_4) || (iVar2 = sscanf(param_3,0x800115e,&uStack_50), param_3 = puVar5, iVar2 != 1)) {
        puVar5 = param_3;
        param_4 = 0xffffffffffffffea;
        goto code_r0x0800459c;
    }
    if ((piVar7[0xf] >> 4 & 1) == 0) {
        param_4 = 0xffffffffffffffff;
        goto code_r0x0800459c;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
        param_4 = 0xffffffffffffffff;
    }
    else {
        if (uStack_50 == 0x425441) {
            uVar6 = 0;
        }
        else {
            if ((uStack_50 != 0x425041) || (*(piVar7[0x14] + 4) != 1)) {
                param_4 = 0xffffffffffffffea;
                goto code_r0x0800468c;
            }
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0x280) = *(*piVar7 + 0x280) | 8;
            DataSynchronizationBarrier(3,3,0);
            uVar6 = 1;
            *(*piVar7 + 0xfb0) = 0;
        }
        *piVar7[0x14] = uVar6;
    }
code_r0x0800468c:
    mutex_unlock(piVar7 + 7);
code_r0x0800459c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x800469c;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        uVar4 = 0xffffffffffffffff;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa0) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(puVar5,0x1000,0x80016ce,uVar1);
        uVar4 = iVar2;
    }
    return uVar4;
}


// ===== sym.bc_overflow_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002648 (size 8) =====

void sym.bc_overflow_val_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 4 & 1) != 0) && (uStack_40 < 6)) {
            mutex_lock(iVar4 + 0x38);
            if (5 < uStack_40) goto code_r0x0800558c;
            *(*(iVar4 + 0xa0) + uStack_40 * 4 + 0x120) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            uVar3 = param_4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x0800558c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005590);
    (*pcVar1)();
}


// ===== sym.bc_sat_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002650 (size 8) =====

int64_t sym.bc_sat_mode_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 8) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_enable_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0xc));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_trig_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002658 (size 8) =====

int64_t sym.dsb_trig_ts_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
            param_4 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb0) + 0xe8) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_trig_type_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb0) + 0xe9));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.tc_count_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002660 (size 8) =====

int64_t sym.tc_count_val_lo_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar6 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = 0;
    piVar7 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = kstrtoull(param_3,0x10,&iStack_40);
    if (iVar4 != 0) {
        param_4 = -0x16;
        goto code_r0x08007c20;
    }
    if ((piVar7[0xf] >> 3 & 1) == 0) {
        param_4 = -1;
        goto code_r0x08007c20;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
code_r0x08007c14:
        param_4 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar7 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*piVar7 + 0x588) >> 0xb & 3;
        if ((1L << uVar3 & *(*piVar7 + 0x504)) >> uVar3 != 0) goto code_r0x08007c14;
        *(*piVar7 + 0x58c) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar7 + 0xfb0) = 0;
    }
    mutex_unlock(piVar7 + 7);
code_r0x08007c20:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8007c7c;
    piVar7 = *(*(iVar5 + 0x60) + 0x98);
    if ((piVar7[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar7 + 7;
        mutex_lock(piVar1);
        if (piVar7[0xd] != '\0') {
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar7 + 0x590);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar4 = scnprintf(piVar6,0x1000,0x8001169,uVar2);
            return iVar4;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_trig_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002668 (size 8) =====

void sym.tc_trig_sel_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                uVar3 = 0xffffffffffffffff;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007000;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x1c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                uVar3 = param_4;
            }
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08007000:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007004);
    (*pcVar1)();
}


// ===== sym.cmb_markr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002670 (size 8) =====

int64_t sym.cmb_markr_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    piVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((piVar4[0xe] >> 2 & 1) == 0) && ((piVar4[0xe] >> 6 & 1) == 0)) {
            param_4 = -1;
        }
        else {
            mutex_lock(piVar4 + 7);
            if (piVar4[0xd] == '\0') {
                param_4 = -1;
            }
            else {
                *(*piVar4 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar4 + 0xa28) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar4 + 0xfb0) = 0;
            }
            mutex_unlock(piVar4 + 7);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mcmb_trig_lane_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(puVar3,0x1000,0x80011bb,**(*(iVar2 + 0xb8) + 0xb8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_trig_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt @ 0x08002678 (size 8) =====

void sym.tc_trig_val_hi_store.1684ad3ca460ef5a43e46e267c09b11a.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = sscanf(param_3,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        uVar3 = 0xffffffffffffffff;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                uVar3 = 0xffffffffffffffff;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007500;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x5c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                uVar3 = param_4;
            }
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x08007500:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007504);
    (*pcVar1)();
}


// ===== sym.tpdm_probe @ 0x08002680 (size 1340) =====

uint64_t sym.tpdm_probe(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *arg1_00;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar10;
    ulong unaff_x30;
    int iStack_ac;
    ulong uStack_a8;
    ulong uStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    code *pcStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    pcStack_80 = NULL;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    iStack_ac = 0;
    iStack_78 = coresight_alloc_device_name(obj.tpdm_devs,arg1);
    if (iStack_78 != 0) {
        uVar4 = coresight_get_platform_data(arg1);
        if (0xfffffffffffff000 < uVar4) goto code_r0x08002ae4;
        *(arg1 + 0x90) = uVar4;
        iVar5 = of_find_property(*(arg1 + 0x2f0),"qcom,hw-enable-check",0);
        if (iVar5 != 0) {
            iVar2 = qcom_scm_get_sec_dump_state(&stack0xffffffffffffff54);
            uVar4 = 0xfffffffa;
            if ((iVar2 != 0) || (iStack_ac == 0)) goto code_r0x08002ae4;
        }
        arg1_00 = devm_kmalloc(arg1,0xd0,0xdc0);
        if (arg1_00 != NULL) {
            arg1_00[1] = arg1;
            *(arg1 + 0x98) = arg1_00;
            iVar5 = devm_ioremap_resource(arg1,arg1 + 0x390);
            *arg1_00 = iVar5;
            if (iVar5 != 0) {
                __mutex_init(arg1_00 + 7,"&drvdata->lock",obj.tpdm_probe.__key);
                uStack_58 = 0;
                uStack_50 = 0;
                uVar10 = *(arg1_00[1] + 0x2f0);
                iVar5 = of_find_property(uVar10,"qcom,clk-enable",0);
                *(arg1_00 + 0x69) = iVar5 != 0;
                iVar5 = of_find_property(uVar10,"qcom,msr-fix-req",0);
                *(arg1_00 + 0xc9) = iVar5 != 0;
                iVar5 = of_find_property(uVar10,"qcom,cmb-msr-skip",0);
                *(arg1_00 + 0xca) = iVar5 != 0;
                uVar3 = of_property_read_string_helper(uVar10,"qcom,tpdm-clks",0,0,0);
                *(arg1_00 + 3) = uVar3;
                if (0 < uVar3) {
                    iVar5 = devm_kmalloc(arg1_00[1],uVar3 << 3,0xdc0);
                    arg1_00[4] = iVar5;
                    if (iVar5 == 0) goto code_r0x08002b18;
                    if (0 < arg1_00[3]) {
                        uVar4 = 0;
                        do {
                            iVar2 = of_property_read_string_helper
                                              (uVar10,"qcom,tpdm-clks",&stack0xffffffffffffffb0,1,uVar4 & 0xffffffff
                                              );
                            if (iVar2 < 0) goto code_r0x08002b18;
                            uVar6 = devm_clk_get(arg1_00[1],uStack_50);
                            *(arg1_00[4] + uVar4 * 8) = uVar6;
                            uVar7 = *(arg1_00[4] + uVar4 * 8);
                            if (0xfffffffffffff000 < uVar7) goto code_r0x08002948;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < arg1_00[3]);
                    }
                }
                uVar3 = of_property_read_string_helper(uVar10,"qcom,tpdm-regs",0,0,0);
                *(arg1_00 + 5) = uVar3;
                if (0 < uVar3) {
                    iVar5 = devm_kmalloc(arg1_00[1],uVar3 << 3,0xdc0);
                    arg1_00[6] = iVar5;
                    if (iVar5 == 0) goto code_r0x08002b18;
                    if (0 < arg1_00[5]) {
                        uVar4 = 0;
                        do {
                            iVar2 = of_property_read_string_helper
                                              (uVar10,"qcom,tpdm-regs",&stack0xffffffffffffffa8,1,uVar4 & 0xffffffff
                                              );
                            if (iVar2 < 0) goto code_r0x08002b18;
                            uVar6 = devm_regulator_get(arg1_00[1],uStack_58);
                            *(arg1_00[6] + uVar4 * 8) = uVar6;
                            uVar7 = *(arg1_00[6] + uVar4 * 8);
                            if (0xfffffffffffff000 < uVar7) goto code_r0x08002948;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < arg1_00[5]);
                    }
                }
                goto code_r0x0800294c;
            }
        }
    }
    goto code_r0x08002ae0;
code_r0x08002948:
    if (uVar7 != 0) {
code_r0x08002b18:
        _dev_err(arg1_00[1],"TPDM parse of data fail\n");
        uVar4 = 0xffffffea;
        goto code_r0x08002ae4;
    }
code_r0x0800294c:
    uStack_90 = *(arg1 + 0x90);
    uStack_a8 = 0x100000004;
    pcStack_98 = obj.tpdm_cs_ops;
    pcStack_80 = obj.tpdm_attr_grps;
    iStack_88 = arg1;
    uVar4 = coresight_register(&stack0xffffffffffffff58);
    arg1_00[2] = uVar4;
    if (0xfffffffffffff000 < uVar4) goto code_r0x08002ae4;
    uVar3 = *(*arg1_00 + 0xfe8) >> 4 & 0xf;
    *(arg1_00 + 0xc4) = uVar3;
    if (uVar3 != 0) {
        *(arg1_00 + 0x19) = 1;
    }
    uVar4 = 0;
    piVar1 = arg1_00 + 0xe;
    uVar3 = *(*arg1_00 + 0xfe0);
    do {
        uVar7 = 1L << (uVar4 & 0x3f);
        if ((uVar7 & uVar3) != 0) {
            uVar8 = uVar4 >> 6 & 0x3ffffff;
            uVar9 = arg1_00[uVar8 + 0xf];
            piVar1[uVar8] = piVar1[uVar8] | uVar7;
            arg1_00[uVar8 + 0xf] = uVar9 | uVar7;
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
    if ((*piVar1 >> 5 & 1) == 0) {
code_r0x08002a2c:
        if ((*piVar1 >> 4 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1_00[1],0x148,0xdc0);
            arg1_00[0x14] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 3 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1_00[1],0x94,0xdc0);
            arg1_00[0x15] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 1 & 1) != 0) {
            iVar5 = devm_kmalloc(arg1_00[1],0x18c,0xdc0);
            arg1_00[0x16] = iVar5;
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        if ((*piVar1 >> 2 & 1) == 0) {
            if ((*piVar1 >> 6 & 1) != 0) {
                iVar5 = devm_kmalloc(arg1_00[1],0xc0,0xdc0);
                arg1_00[0x17] = iVar5;
                if (iVar5 == 0) goto code_r0x08002ad8;
                uVar10 = devm_kmalloc(arg1_00[1],2,0xdc0);
                *(arg1_00[0x17] + 0xb8) = uVar10;
                iVar5 = *(arg1_00[0x17] + 0xb8);
                goto joined_r0x08002b44;
            }
        }
        else {
            iVar5 = devm_kmalloc(arg1_00[1],0xc0,0xdc0);
            arg1_00[0x17] = iVar5;
joined_r0x08002b44:
            if (iVar5 == 0) goto code_r0x08002ad8;
        }
        sym.tpdm_init_default_data(arg1_00);
        uVar3 = *(*arg1_00 + 0xfc8);
        *(arg1_00 + 0x10) = uVar3 >> 0x1b & 3;
        *(arg1_00 + 0x84) = uVar3 >> 0x19 & 3;
        *(arg1_00 + 0x18) = _segment.ehdr;
        *(arg1_00 + 0x11) = uVar3 >> 0x17 & 3;
        *(arg1_00 + 0x8c) = (uVar3 >> 6 & 0x1f) + 1;
        *(arg1_00 + 0x12) = (uVar3 >> 4 & 3) + 1;
        _segment.ehdr = _segment.ehdr + 1;
        __pm_runtime_idle(arg1,5);
        uVar4 = 0;
        goto code_r0x08002ae4;
    }
    iVar5 = devm_kmalloc(arg1_00[1],0x298,0xdc0);
    arg1_00[0x13] = iVar5;
    if (iVar5 != 0) goto code_r0x08002a2c;
code_r0x08002ad8:
    coresight_unregister(arg1_00[2]);
code_r0x08002ae0:
    uVar4 = 0xfffffff4;
code_r0x08002ae4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = 0x8002bb0;
    coresight_disable(*(*(iVar5 + 0x98) + 0x10));
    return 0;
}


// ===== sym.tpdm_freeze @ 0x08002bbc (size 48) =====

ulong sym.tpdm_freeze(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_disable(*(*(arg1 + 0x98) + 0x10));
    return 0;
}


// ===== sym.tpdm_init_default_data @ 0x08002bec (size 128) =====

//WARNING: Type propagation algorithm not settling

void sym.tpdm_init_default_data(int64_t arg1)

{
    uint32_t uVar1;
    
    if ((*(arg1 + 0x70) >> 4 & 1) == 0) {
        uVar1 = *(arg1 + 0x70);
    }
    else {
        *(*(arg1 + 0xa0) + 4) = 0;
        uVar1 = *(arg1 + 0x70);
    }
    if ((uVar1 >> 3 & 1) == 0) {
        uVar1 = *(arg1 + 0x70);
    }
    else {
        *(*(arg1 + 0xa8) + 4) = 0;
        uVar1 = *(arg1 + 0x70);
    }
    if ((uVar1 >> 1 & 1) == 0) {
        uVar1 = *(arg1 + 0x70);
    }
    else {
        *(*(arg1 + 0xb0) + 0xe8) = 1;
        *(*(arg1 + 0xb0) + 0xe9) = 0;
        uVar1 = *(arg1 + 0x70);
    }
    if (((uVar1 >> 2 & 1) != 0) || ((*(arg1 + 0x70) >> 6 & 1) != 0)) {
        *(*(arg1 + 0xb8) + 0x2c) = 1;
    }
    return;
}


// ===== sym.tpdm_trace_id @ 0x08002c6c (size 24) =====

uint sym.tpdm_trace_id(int64_t arg1)

{
    return *(*(*(arg1 + 0x98) + 0x98) + 0xc0);
}


// ===== sym.tpdm_enable @ 0x08002c84 (size 3632) =====

ulong sym.tpdm_enable(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    char cVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    int iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(*(arg1 + 0x98) + 0x98);
    if (piVar11[0xd] != '\0') {
        _dev_err(piVar11[1],"TPDM setup already enabled,Skipping enablei\n");
        return 0;
    }
    mutex_lock(piVar11 + 7);
    *(*piVar11 + 0xfb0) = 0xc5acce55;
    DataSynchronizationBarrier(3,3,0);
    if (*(piVar11 + 0x69) != '\0') {
        *(*piVar11 + 0x220) = 1;
    }
    if ((piVar11[0xf] >> 5 & 1) != 0) {
        uVar7 = 0;
        iVar6 = 0x18;
        do {
            if ((*(piVar11[0x13] + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
                *(*piVar11 + iVar6 + -0x18) = *(piVar11[0x13] + iVar6);
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 4;
        } while (iVar6 != 0x298);
    }
    if ((piVar11[0xf] >> 4 & 1) != 0) {
        if (*(piVar11[0x14] + 8) == 0) {
            *(*piVar11 + 0x284) = 0;
        }
        else {
            *(*piVar11 + 0x284) = *(piVar11[0x14] + 8);
        }
        iVar6 = piVar11[0x14];
        if (*(iVar6 + 0xc) == 0) {
            iVar9 = *(iVar6 + 0x10);
            if (iVar9 != 0) goto code_r0x08002e4c;
code_r0x08002d84:
            if (*(iVar6 + 0x14) != 0) goto code_r0x08002e64;
code_r0x08002d8c:
            iVar9 = *(iVar6 + 0x18);
        }
        else {
            *(*piVar11 + 0x28c) = 0xffffffff;
            *(*piVar11 + 0x288) = *(piVar11[0x14] + 0xc);
            iVar6 = piVar11[0x14];
            iVar9 = *(iVar6 + 0x10);
            if (iVar9 == 0) goto code_r0x08002d84;
code_r0x08002e4c:
            *(*piVar11 + 0x28c) = iVar9;
            iVar6 = piVar11[0x14];
            if (*(iVar6 + 0x14) == 0) goto code_r0x08002d8c;
code_r0x08002e64:
            *(*piVar11 + 0x294) = 0xffffffff;
            *(*piVar11 + 0x290) = *(piVar11[0x14] + 0x14);
            iVar9 = *(piVar11[0x14] + 0x18);
        }
        if (iVar9 != 0) {
            *(*piVar11 + 0x294) = iVar9;
        }
        if (*(piVar11 + 0x84) == 1) {
            *(*piVar11 + 0x298) = *(piVar11[0x14] + 0x1c);
            *(*piVar11 + 0x318) = *(piVar11[0x14] + 0x9c);
        }
        else if ((*(piVar11 + 0x84) == 0) && (*(piVar11 + 0x8c) != 0)) {
            uVar7 = 0;
            iVar6 = 0x318;
            do {
                if (uVar7 == 0x20) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8003ab4);
                    (*pcVar5)();
                }
                uVar7 = uVar7 + 1;
                *(*piVar11 + iVar6 + -0x80) = *(piVar11[0x14] + iVar6 + -0x2fc);
                iVar1 = piVar11[0x14] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x27c);
            } while (uVar7 < *(piVar11 + 0x8c));
        }
        iVar6 = piVar11[0x14];
        if (*(iVar6 + 0x11c) != 0) {
            *(*piVar11 + 0x398) = *(iVar6 + 0x11c);
            iVar6 = piVar11[0x14];
        }
        *(*piVar11 + 0x39c) = *(iVar6 + 0x120);
        *(*piVar11 + 0x3a0) = *(piVar11[0x14] + 0x124);
        *(*piVar11 + 0x3a4) = *(piVar11[0x14] + 0x128);
        *(*piVar11 + 0x3a8) = *(piVar11[0x14] + 300);
        *(*piVar11 + 0x3ac) = *(piVar11[0x14] + 0x130);
        *(*piVar11 + 0x3b0) = *(piVar11[0x14] + 0x134);
        if (piVar11[0x19] != '\0') {
            *(*piVar11 + 0x4f0) = *(piVar11[0x14] + 0x138);
            *(*piVar11 + 0x4f4) = *(piVar11[0x14] + 0x13c);
            *(*piVar11 + 0x4f8) = *(piVar11[0x14] + 0x140);
            *(*piVar11 + 0x4fc) = *(piVar11[0x14] + 0x144);
        }
        *(*piVar11 + 0x280) =
             *(*piVar11 + 0x280) & 0xfffffff8 | *(*piVar11 + 0x280) & 3 | (*(piVar11[0x14] + 4) == 1) << 2;
        *(*piVar11 + 0x280) = *(*piVar11 + 0x280) | 1;
    }
    if ((piVar11[0xf] >> 3 & 1) == 0) goto code_r0x0800317c;
    iVar6 = piVar11[0x15];
    if (*(iVar6 + 0xc) == 0) {
        iVar9 = *(iVar6 + 0x10);
        if (iVar9 != 0) goto code_r0x080035c0;
code_r0x0800300c:
        if (*(iVar6 + 0x14) != 0) goto code_r0x080035d8;
code_r0x08003014:
        iVar9 = *(iVar6 + 0x18);
    }
    else {
        *(*piVar11 + 0x508) = 0xf;
        *(*piVar11 + 0x504) = *(piVar11[0x15] + 0xc);
        iVar6 = piVar11[0x15];
        iVar9 = *(iVar6 + 0x10);
        if (iVar9 == 0) goto code_r0x0800300c;
code_r0x080035c0:
        *(*piVar11 + 0x508) = iVar9;
        iVar6 = piVar11[0x15];
        if (*(iVar6 + 0x14) == 0) goto code_r0x08003014;
code_r0x080035d8:
        *(*piVar11 + 0x510) = 0xf;
        *(*piVar11 + 0x50c) = *(piVar11[0x15] + 0x14);
        iVar9 = *(piVar11[0x15] + 0x18);
    }
    if (iVar9 != 0) {
        *(*piVar11 + 0x510) = iVar9;
    }
    if (piVar11[0x10] == 1) {
        *(*piVar11 + 0x514) = *(piVar11[0x15] + 0x1c);
        *(*piVar11 + 0x534) = *(piVar11[0x15] + 0x3c);
        *(*piVar11 + 0x554) = *(piVar11[0x15] + 0x5c);
        cVar3 = piVar11[0x19];
    }
    else {
        if (piVar11[0x10] == 0) {
            iVar6 = 0x554;
            do {
                *(*piVar11 + iVar6 + -0x40) = *(piVar11[0x15] + iVar6 + -0x538);
                *(*piVar11 + iVar6 + -0x20) = *(piVar11[0x15] + iVar6 + -0x518);
                iVar1 = piVar11[0x15] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x4f8);
            } while (iVar6 != 0x574);
        }
        cVar3 = piVar11[0x19];
    }
    if (cVar3 != '\0') {
        *(*piVar11 + 0x768) = *(piVar11[0x15] + 0x7c);
        *(*piVar11 + 0x76c) = *(piVar11[0x15] + 0x80);
        *(*piVar11 + 0x770) = *(piVar11[0x15] + 0x84);
        *(*piVar11 + 0x774) = *(piVar11[0x15] + 0x88);
        *(*piVar11 + 0x778) = *(piVar11[0x15] + 0x8c);
        *(*piVar11 + 0x77c) = *(piVar11[0x15] + 0x90);
    }
    *(*piVar11 + 0x500) =
         *(*piVar11 + 0x500) & 0xffffffe8 | *(piVar11[0x15] + 8) << 4 |
         *(*piVar11 + 0x500) & 3 | (*(piVar11[0x15] + 4) == 1) << 2;
    *(*piVar11 + 0x500) = *(*piVar11 + 0x500) | 1;
code_r0x0800317c:
    if ((piVar11[0xf] >> 1 & 1) != 0) {
        iVar6 = 0x808;
        do {
            iVar1 = piVar11[0x16] + iVar6;
            puVar2 = *piVar11 + iVar6;
            iVar6 = iVar6 + 4;
            *puVar2 = *(iVar1 + -0x804);
        } while (iVar6 != 0x848);
        *(*piVar11 + 0x848) = *(piVar11[0x16] + 0x44);
        *(*piVar11 + 0x84c) = *(piVar11[0x16] + 0x48);
        *(*piVar11 + 0x850) = *(piVar11[0x16] + 0x4c);
        *(*piVar11 + 0x854) = *(piVar11[0x16] + 0x50);
        *(*piVar11 + 0x858) = *(piVar11[0x16] + 0x54);
        *(*piVar11 + 0x85c) = *(piVar11[0x16] + 0x58);
        *(*piVar11 + 0x860) = *(piVar11[0x16] + 0x5c);
        *(*piVar11 + 0x864) = *(piVar11[0x16] + 0x60);
        *(*piVar11 + 0x788) = *(piVar11[0x16] + 100);
        *(*piVar11 + 0x7a8) = *(piVar11[0x16] + 0x84);
        *(*piVar11 + 0x78c) = *(piVar11[0x16] + 0x68);
        *(*piVar11 + 0x7ac) = *(piVar11[0x16] + 0x88);
        *(*piVar11 + 0x790) = *(piVar11[0x16] + 0x6c);
        *(*piVar11 + 0x7b0) = *(piVar11[0x16] + 0x8c);
        *(*piVar11 + 0x794) = *(piVar11[0x16] + 0x70);
        *(*piVar11 + 0x7b4) = *(piVar11[0x16] + 0x90);
        *(*piVar11 + 0x798) = *(piVar11[0x16] + 0x74);
        *(*piVar11 + 0x7b8) = *(piVar11[0x16] + 0x94);
        *(*piVar11 + 0x79c) = *(piVar11[0x16] + 0x78);
        *(*piVar11 + 0x7bc) = *(piVar11[0x16] + 0x98);
        *(*piVar11 + 0x7a0) = *(piVar11[0x16] + 0x7c);
        *(*piVar11 + 0x7c0) = *(piVar11[0x16] + 0x9c);
        *(*piVar11 + 0x7a4) = *(piVar11[0x16] + 0x80);
        *(*piVar11 + 0x7c4) = *(piVar11[0x16] + 0xa0);
        *(*piVar11 + 0x7c8) = *(piVar11[0x16] + 0xa8);
        *(*piVar11 + 0x7e8) = *(piVar11[0x16] + 200);
        *(*piVar11 + 0x7cc) = *(piVar11[0x16] + 0xac);
        *(*piVar11 + 0x7ec) = *(piVar11[0x16] + 0xcc);
        *(*piVar11 + 2000) = *(piVar11[0x16] + 0xb0);
        *(*piVar11 + 0x7f0) = *(piVar11[0x16] + 0xd0);
        *(*piVar11 + 0x7d4) = *(piVar11[0x16] + 0xb4);
        *(*piVar11 + 0x7f4) = *(piVar11[0x16] + 0xd4);
        *(*piVar11 + 0x7d8) = *(piVar11[0x16] + 0xb8);
        *(*piVar11 + 0x7f8) = *(piVar11[0x16] + 0xd8);
        *(*piVar11 + 0x7dc) = *(piVar11[0x16] + 0xbc);
        *(*piVar11 + 0x7fc) = *(piVar11[0x16] + 0xdc);
        *(*piVar11 + 0x7e0) = *(piVar11[0x16] + 0xc0);
        *(*piVar11 + 0x800) = *(piVar11[0x16] + 0xe0);
        *(*piVar11 + 0x7e4) = *(piVar11[0x16] + 0xc4);
        *(*piVar11 + 0x804) = *(piVar11[0x16] + 0xe4);
        *(*piVar11 + 0x86c) = *(piVar11[0x16] + 0xec);
        *(*piVar11 + 0x870) = *(piVar11[0x16] + 0xf0);
        *(*piVar11 + 0x874) = *(piVar11[0x16] + 0xf4);
        *(*piVar11 + 0x878) = *(piVar11[0x16] + 0xf8);
        *(*piVar11 + 0x87c) = *(piVar11[0x16] + 0xfc);
        *(*piVar11 + 0x880) = *(piVar11[0x16] + 0x100);
        *(*piVar11 + 0x884) = *(piVar11[0x16] + 0x104);
        *(*piVar11 + 0x888) = *(piVar11[0x16] + 0x108);
        uVar10 = *(*piVar11 + 0x784);
        iVar6 = piVar11[0x16];
        if (*(iVar6 + 0xa4) == '\0') {
            uVar10 = uVar10 & 0xfffffffe;
        }
        else if (*(iVar6 + 0xa5) == '\0') {
            uVar10 = uVar10 & 0xfffffffb | 1;
        }
        else {
            uVar10 = uVar10 | 5;
        }
        *(*piVar11 + 0x784) = uVar10 & 0xfffffffd | *(iVar6 + 0xe8) << 1;
        if ((*(piVar11 + 0xc9) == '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0x980;
            do {
                iVar1 = piVar11[0x16] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x874);
            } while (iVar6 != 0xa00);
        }
        uVar10 = *piVar11[0x16];
        uVar4 = uVar10 >> 2;
        *(*piVar11 + 0x780) =
             *(*piVar11 + 0x780) & 0xffffe000 | *(*piVar11 + 0x780) & 0x181 | (uVar10 & 7) << 9 | uVar4 & 0x7c |
             uVar4 & 2 | *(piVar11[0x16] + 0xe9) << 0xc;
        *(*piVar11 + 0x780) = *(*piVar11 + 0x780) | 1;
        if ((*(piVar11 + 0xc9) != '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0x980;
            do {
                iVar1 = piVar11[0x16] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0x874);
            } while (iVar6 != 0xa00);
        }
    }
    if ((piVar11[0xf] >> 2 & 1) == 0) {
        if ((piVar11[0xf] >> 6 & 1) != 0) {
            puVar8 = *(piVar11[0x17] + 0xb8);
            *(*piVar11 + 0xa08) = *(piVar11[0x17] + 8);
            *(*piVar11 + 0xa10) = *(piVar11[0x17] + 0x10);
            *(*piVar11 + 0xa18) = *(piVar11[0x17] + 0x1c);
            *(*piVar11 + 0xa20) = *(piVar11[0x17] + 0x24);
            *(*piVar11 + 0xa0c) = *(piVar11[0x17] + 0xc);
            *(*piVar11 + 0xa14) = *(piVar11[0x17] + 0x14);
            *(*piVar11 + 0xa1c) = *(piVar11[0x17] + 0x20);
            *(*piVar11 + 0xa24) = *(piVar11[0x17] + 0x28);
            iVar6 = piVar11[0x17];
            *(*piVar11 + 0xa04) =
                 *(*piVar11 + 0xa04) & 0xfffffff8 | *(iVar6 + 0x18) | *(iVar6 + 0x2c) << 1 | *(iVar6 + 0x2d) << 2;
            if ((*(piVar11 + 0xca) == '\0') && (piVar11[0x19] != '\0')) {
                iVar6 = 0xa80;
                do {
                    iVar1 = piVar11[0x17] + iVar6;
                    puVar2 = *piVar11 + iVar6;
                    iVar6 = iVar6 + 4;
                    *puVar2 = *(iVar1 + -0xa50);
                } while (iVar6 != 0xb00);
            }
            uVar10 = *(*piVar11 + 0xa00) & 0xffe000f9;
            if (*piVar11[0x17] != '\0') {
                uVar10 = *(*piVar11 + 0xa00) | 2;
            }
            uVar10 = uVar10 & 0xffe00000 | (*puVar8 & 7) << 0x12 |
                     uVar10 & 0xfb | (*(piVar11[0x17] + 4) & 3) << 8 | puVar8[1] << 10;
            *(*piVar11 + 0xa00) = uVar10;
            *(*piVar11 + 0xa00) = uVar10 | 1;
        }
    }
    else {
        *(*piVar11 + 0xa08) = *(piVar11[0x17] + 8);
        *(*piVar11 + 0xa10) = *(piVar11[0x17] + 0x10);
        *(*piVar11 + 0xa18) = *(piVar11[0x17] + 0x1c);
        *(*piVar11 + 0xa20) = *(piVar11[0x17] + 0x24);
        *(*piVar11 + 0xa0c) = *(piVar11[0x17] + 0xc);
        *(*piVar11 + 0xa14) = *(piVar11[0x17] + 0x14);
        *(*piVar11 + 0xa1c) = *(piVar11[0x17] + 0x20);
        *(*piVar11 + 0xa24) = *(piVar11[0x17] + 0x28);
        iVar6 = piVar11[0x17];
        *(*piVar11 + 0xa04) =
             *(*piVar11 + 0xa04) & 0xfffffff8 | *(iVar6 + 0x18) | *(iVar6 + 0x2c) << 1 | *(iVar6 + 0x2d) << 2;
        if ((*(piVar11 + 0xca) == '\0') && (piVar11[0x19] != '\0')) {
            iVar6 = 0xa80;
            do {
                iVar1 = piVar11[0x17] + iVar6;
                puVar2 = *piVar11 + iVar6;
                iVar6 = iVar6 + 4;
                *puVar2 = *(iVar1 + -0xa50);
            } while (iVar6 != 0xb00);
        }
        uVar10 = *(*piVar11 + 0xa00) & 0xfffffcf9;
        if (*piVar11[0x17] != '\0') {
            uVar10 = *(*piVar11 + 0xa00) | 2;
        }
        uVar10 = uVar10 & 0xfffffc00 | uVar10 & 0xfb | (*(piVar11[0x17] + 4) & 3) << 8;
        *(*piVar11 + 0xa00) = uVar10;
        *(*piVar11 + 0xa00) = uVar10 | 1;
    }
    DataSynchronizationBarrier(3,3,0);
    *(*piVar11 + 0xfb0) = 0;
    *(piVar11 + 0xd) = 1;
    mutex_unlock(piVar11 + 7);
    _dev_info(piVar11[1],"TPDM tracing enabled\n");
    return 0;
}


// ===== sym.tpdm_disable @ 0x08003ae0 (size 364) =====

//WARNING: Type propagation algorithm not settling

void sym.tpdm_disable(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(*(arg1 + 0x98) + 0x98);
    if (piVar2[0xd] != '\0') {
        mutex_lock(piVar2 + 7);
        *(*piVar2 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((piVar2[0xf] >> 4 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x280) = *(*piVar2 + 0x280) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if ((uVar1 >> 3 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x500) = *(*piVar2 + 0x500) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if ((uVar1 >> 1 & 1) == 0) {
            uVar1 = piVar2[0xf];
        }
        else {
            *(*piVar2 + 0x780) = *(*piVar2 + 0x780) & 0xfffffffe;
            uVar1 = piVar2[0xf];
        }
        if (((uVar1 >> 2 & 1) != 0) || ((piVar2[0xf] >> 6 & 1) != 0)) {
            *(*piVar2 + 0xa00) = *(*piVar2 + 0xa00) & 0xfffffffe;
        }
        if (*(piVar2 + 0x69) != '\0') {
            *(*piVar2 + 0x220) = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        *(*piVar2 + 0xfb0) = 0;
        *(piVar2 + 0xd) = 0;
        mutex_unlock(piVar2 + 7);
        _dev_info(piVar2[1],"TPDM tracing disabled\n");
        return;
    }
    _dev_err(piVar2[1],"TPDM setup already disabled, Skipping disable\n");
    return;
}


// ===== sym.available_datasets_show @ 0x08003c5c (size 444) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.available_datasets_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    uchar extraout_q0_03 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) & 1) == 0) {
        iVar3 = 0;
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%-8s","IMPLDEF");
        iVar3 = iVar1;
        uVar2 = *(iVar4 + 0x70);
        noname_1 = extraout_q0;
    }
    if ((uVar2 >> 1 & 1) != 0) {
        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%-8s",0x80016ba);
        iVar3 = iVar3 + iVar1;
        noname_1 = extraout_q0_00;
    }
    if ((*(iVar4 + 0x70) >> 2 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%-8s",0x800141c);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
        noname_1 = extraout_q0_01;
    }
    if ((uVar2 >> 3 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%-8s",0x80011fe);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
        noname_1 = extraout_q0_02;
    }
    if ((uVar2 >> 4 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%-8s",0x8001556);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
        noname_1 = extraout_q0_03;
    }
    if ((uVar2 >> 5 & 1) == 0) {
        uVar2 = *(iVar4 + 0x70);
    }
    else {
        iVar1 = scnprintf(noname_1,arg2 + iVar3,0x1000 - iVar3,"%-8s",0x80013ef);
        iVar3 = iVar3 + iVar1;
        uVar2 = *(iVar4 + 0x70);
    }
    if ((uVar2 >> 6 & 1) != 0) {
        iVar1 = scnprintf(arg2 + iVar3,0x1000 - iVar3,"%-8s","MCMB");
        iVar3 = iVar3 + iVar1;
    }
    iVar1 = scnprintf(arg2 + iVar3,0x1000 - iVar3,0x8001559);
    return iVar3 + iVar1;
}


// ===== sym.enable_datasets_show @ 0x08003e18 (size 128) =====

int64_t sym.enable_datasets_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%*pb\n",0x20,*(*(arg1 + 0x60) + 0x98) + 0x78);
    iVar2 = iVar1;
    if (iVar2 - 0xfffU < 2) {
        iVar2 = -0x16;
    }
    else {
        iVar1 = scnprintf(arg2 + iVar2,2,0x8001559);
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.enable_datasets_store @ 0x08003e98 (size 272) =====

int64_t sym.enable_datasets_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    ulong *puVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ushort *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar11;
    int64_t iVar12;
    int64_t unaff_x20;
    int64_t *piVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    iVar14 = *(*(arg1 + 0x60) + 0x98);
    iVar11 = arg3;
    iVar2 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar2 == 0) {
        unaff_x20 = iVar14 + 0x38;
        mutex_lock(unaff_x20);
        if (*(iVar14 + 0x68) == '\0') {
            uVar15 = 0;
            iVar12 = iVar14 + 0x78;
            do {
                uVar10 = uVar15 >> 6 & 0x3ffffff;
                uVar9 = 1L << (uVar15 & 0x3f);
                if (((*(iVar14 + 0x70 + uVar10 * 8) & uVar9) == 0) || ((uStack_40 & uVar9) == 0)) {
                    uVar9 = *(iVar12 + uVar10 * 8) & (uVar9 ^ 0xffffffffffffffff);
                }
                else {
                    uVar9 = *(iVar12 + uVar10 * 8) | uVar9;
                }
                uVar15 = uVar15 + 1;
                *(iVar12 + uVar10 * 8) = uVar9;
            } while (uVar15 != 0x20);
        }
        else {
            arg3 = -1;
        }
        mutex_unlock(unaff_x20);
    }
    else {
        arg3 = -0x16;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    puVar5 = &uStack_80;
    *extraout_x18 = sym.reset_store;
    pcStack_68 = sym.reset_store;
    iVar12 = sp_el0;
    iStack_78 = *(iVar12 + 0x5e0);
    uStack_80 = 0;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    iVar12 = iVar11;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar14;
    iStack_50 = unaff_x20;
    iStack_48 = arg3;
    iVar2 = kstrtoull(puVar4,10,&uStack_80);
    if (iVar2 != 0) {
        iVar11 = iVar2;
        goto code_r0x08004154;
    }
    unaff_x20 = iVar3 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar3 + 0x98) != 0) {
        puVar5 = 0x298;
        memset(*(iVar3 + 0x98),0,0x298);
    }
    if (*(iVar3 + 0xa0) != 0) {
        puVar5 = 0x148;
        memset(*(iVar3 + 0xa0),0,0x148);
    }
    puVar7 = *(iVar3 + 0xa8);
    if (puVar7 != NULL) {
        *(puVar7 + 0x12) = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
    }
    if (*(iVar3 + 0xb0) != 0) {
        puVar5 = 0x18c;
        memset(*(iVar3 + 0xb0),0,0x18c);
    }
    puVar7 = *(iVar3 + 0xb8);
    if (puVar7 != NULL) {
        puVar8 = puVar7[0x17];
        if (puVar8 != NULL) {
            *puVar8 = 0;
            puVar7 = *(iVar3 + 0xb8);
        }
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x14] = 0;
        puVar7[0x15] = 0;
        puVar7[0x12] = 0;
        puVar7[0x13] = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(*(iVar3 + 0xb8) + 0xb8) = puVar8;
    }
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) != 0) goto code_r0x080040fc;
code_r0x080040d8:
        if ((*(iVar3 + 0x70) >> 1 & 1) != 0) goto code_r0x0800410c;
code_r0x080040e0:
        if ((*(iVar3 + 0x70) >> 2 & 1) != 0) goto code_r0x08004130;
code_r0x08004128:
        if ((*(iVar3 + 0x70) >> 6 & 1) != 0) goto code_r0x08004130;
    }
    else {
        *(*(iVar3 + 0xa0) + 4) = 0;
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) goto code_r0x080040d8;
code_r0x080040fc:
        *(*(iVar3 + 0xa8) + 4) = 0;
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) goto code_r0x080040e0;
code_r0x0800410c:
        *(*(iVar3 + 0xb0) + 0xe8) = 1;
        *(*(iVar3 + 0xb0) + 0xe9) = 0;
        if ((*(iVar3 + 0x70) >> 2 & 1) == 0) goto code_r0x08004128;
code_r0x08004130:
        *(*(iVar3 + 0xb8) + 0x2c) = 1;
    }
    mutex_unlock(unaff_x20);
    if (*(iVar3 + 0x68) != '\0') {
        coresight_disable(*(iVar3 + 0x10));
    }
code_r0x08004154:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_78) {
        return iVar11;
    }
    iVar3 = __stack_chk_fail();
    piVar6 = &iStack_b0;
    *extraout_x18_00 = sym.integration_test_store;
    pcStack_98 = sym.integration_test_store;
    iVar14 = sp_el0;
    iStack_a8 = *(iVar14 + 0x5e0);
    iStack_b0 = 0;
    piVar13 = *(*(iVar3 + 0x60) + 0x98);
    ppuStack_a0 = &puStack_70;
    iStack_90 = unaff_x20;
    iStack_88 = iVar11;
    iVar2 = kstrtoull(puVar5,10,&iStack_b0);
    if (iVar2 == 0) {
        if ((iStack_b0 - 3U < 0xfffffffffffffffe) || (piVar13[0xd] == '\0')) {
            iVar12 = -0x16;
        }
        else {
            bVar1 = iStack_b0 != 1;
            iStack_b0 = 0xc01f1409;
            if (bVar1) {
                iStack_b0 = 0xc00f1409;
            }
            *(*piVar13 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar13 + 0xf00) = 1;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xef0) = iStack_b0;
            *(*piVar13 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar13 + 0xfb0) = 0;
        }
    }
    else {
        iVar12 = iVar2;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_a8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_01 = sym.gp_regs_show;
        iVar11 = *(*(iVar11 + 0x60) + 0x98);
        if ((*(iVar11 + 0x70) >> 5 & 1) == 0) {
            iVar14 = -1;
        }
        else {
            mutex_lock(iVar11 + 0x38);
            uVar15 = 0;
            iVar14 = 0;
            do {
                if ((*(*(iVar11 + 0x98) + (uVar15 >> 6 & 0x3ffffff) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
                    iVar2 = scnprintf(piVar6 + iVar14,0x1000 - iVar14,"Index: 0x%x Value: 0x%x\n",uVar15 & 0xffffffff
                                      ,*(*(iVar11 + 0x98) + uVar15 * 4 + 0x18));
                    iVar14 = iVar14 + iVar2;
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 != 0xa0);
            mutex_unlock(iVar11 + 0x38);
        }
        return iVar14;
    }
    return iVar12;
}


// ===== sym.reset_store @ 0x08003fa8 (size 484) =====

int64_t sym.reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    ulong *puVar6;
    ushort *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int64_t unaff_x20;
    int64_t *piVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    iVar10 = *(*(arg1 + 0x60) + 0x98);
    iVar8 = arg3;
    iVar2 = kstrtoull(arg2,10,&uStack_40);
    if (iVar2 != 0) {
        arg3 = iVar2;
        goto code_r0x08004154;
    }
    unaff_x20 = iVar10 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar10 + 0x98) != 0) {
        puVar4 = 0x298;
        memset(*(iVar10 + 0x98),0,0x298);
    }
    if (*(iVar10 + 0xa0) != 0) {
        puVar4 = 0x148;
        memset(*(iVar10 + 0xa0),0,0x148);
    }
    puVar6 = *(iVar10 + 0xa8);
    if (puVar6 != NULL) {
        *(puVar6 + 0x12) = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
    }
    if (*(iVar10 + 0xb0) != 0) {
        puVar4 = 0x18c;
        memset(*(iVar10 + 0xb0),0,0x18c);
    }
    puVar6 = *(iVar10 + 0xb8);
    if (puVar6 != NULL) {
        puVar7 = puVar6[0x17];
        if (puVar7 != NULL) {
            *puVar7 = 0;
            puVar6 = *(iVar10 + 0xb8);
        }
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(*(iVar10 + 0xb8) + 0xb8) = puVar7;
    }
    if ((*(iVar10 + 0x70) >> 4 & 1) == 0) {
        if ((*(iVar10 + 0x70) >> 3 & 1) != 0) goto code_r0x080040fc;
code_r0x080040d8:
        if ((*(iVar10 + 0x70) >> 1 & 1) != 0) goto code_r0x0800410c;
code_r0x080040e0:
        if ((*(iVar10 + 0x70) >> 2 & 1) != 0) goto code_r0x08004130;
code_r0x08004128:
        if ((*(iVar10 + 0x70) >> 6 & 1) != 0) goto code_r0x08004130;
    }
    else {
        *(*(iVar10 + 0xa0) + 4) = 0;
        if ((*(iVar10 + 0x70) >> 3 & 1) == 0) goto code_r0x080040d8;
code_r0x080040fc:
        *(*(iVar10 + 0xa8) + 4) = 0;
        if ((*(iVar10 + 0x70) >> 1 & 1) == 0) goto code_r0x080040e0;
code_r0x0800410c:
        *(*(iVar10 + 0xb0) + 0xe8) = 1;
        *(*(iVar10 + 0xb0) + 0xe9) = 0;
        if ((*(iVar10 + 0x70) >> 2 & 1) == 0) goto code_r0x08004128;
code_r0x08004130:
        *(*(iVar10 + 0xb8) + 0x2c) = 1;
    }
    mutex_unlock(unaff_x20);
    if (*(iVar10 + 0x68) != '\0') {
        coresight_disable(*(iVar10 + 0x10));
    }
code_r0x08004154:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    piVar5 = &iStack_70;
    *extraout_x18 = sym.integration_test_store;
    pcStack_58 = sym.integration_test_store;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    piVar9 = *(*(iVar3 + 0x60) + 0x98);
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = unaff_x20;
    iStack_48 = arg3;
    iVar2 = kstrtoull(puVar4,10,&iStack_70);
    if (iVar2 == 0) {
        if ((iStack_70 - 3U < 0xfffffffffffffffe) || (piVar9[0xd] == '\0')) {
            iVar8 = -0x16;
        }
        else {
            bVar1 = iStack_70 != 1;
            iStack_70 = 0xc01f1409;
            if (bVar1) {
                iStack_70 = 0xc00f1409;
            }
            *(*piVar9 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar9 + 0xf00) = 1;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xef0) = iStack_70;
            *(*piVar9 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar9 + 0xfb0) = 0;
        }
    }
    else {
        iVar8 = iVar2;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.gp_regs_show;
        iVar8 = *(*(iVar8 + 0x60) + 0x98);
        if ((*(iVar8 + 0x70) >> 5 & 1) == 0) {
            iVar10 = -1;
        }
        else {
            mutex_lock(iVar8 + 0x38);
            uVar11 = 0;
            iVar10 = 0;
            do {
                if ((*(*(iVar8 + 0x98) + (uVar11 >> 6 & 0x3ffffff) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
                    iVar2 = scnprintf(piVar5 + iVar10,0x1000 - iVar10,"Index: 0x%x Value: 0x%x\n",uVar11 & 0xffffffff
                                      ,*(*(iVar8 + 0x98) + uVar11 * 4 + 0x18));
                    iVar10 = iVar10 + iVar2;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != 0xa0);
            mutex_unlock(iVar8 + 0x38);
        }
        return iVar10;
    }
    return iVar8;
}


// ===== sym.integration_test_store @ 0x0800418c (size 328) =====

int64_t sym.integration_test_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_30 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,10,&iStack_30);
    if (iVar2 == 0) {
        if ((iStack_30 - 3U < 0xfffffffffffffffe) || (piVar6[0xd] == '\0')) {
            arg3 = -0x16;
        }
        else {
            bVar1 = iStack_30 != 1;
            iStack_30 = 0xc01f1409;
            if (bVar1) {
                iStack_30 = 0xc00f1409;
            }
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xf00) = 1;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xef0) = iStack_30;
            *(*piVar6 + 0xf00) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
        }
    }
    else {
        arg3 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.gp_regs_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 5 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        uVar7 = 0;
        iVar5 = 0;
        do {
            if ((*(*(iVar3 + 0x98) + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
                iVar2 = scnprintf(piVar4 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",uVar7 & 0xffffffff,
                                  *(*(iVar3 + 0x98) + uVar7 * 4 + 0x18));
                iVar5 = iVar5 + iVar2;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 0xa0);
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar5;
}


// ===== sym.gp_regs_show @ 0x080042d4 (size 208) =====

int64_t sym.gp_regs_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 5 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            if ((*(*(iVar4 + 0x98) + (uVar3 >> 6 & 0x3ffffff) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
                iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                                  *(*(iVar4 + 0x98) + uVar3 * 4 + 0x18));
                iVar2 = iVar2 + iVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 0xa0);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.gp_regs_store @ 0x080043a4 (size 268) =====

void sym.gp_regs_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 5 & 1) != 0) && (uStack_40 < 0xa0)) {
            mutex_lock(iVar4 + 0x38);
            if (0x9f < uStack_40) goto code_r0x080044ac;
            *(*(iVar4 + 0x98) + uStack_40 * 4 + 0x18) = uStack_48;
            iVar3 = (uStack_40 >> 6 & 0x3ffffff) * 8;
            *(*(iVar4 + 0x98) + iVar3) = *(*(iVar4 + 0x98) + iVar3) | 1L << (uStack_40 & 0x3f);
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x080044ac:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80044b0);
    (*pcVar1)();
}


// ===== sym.bc_capture_mode_show @ 0x080044b0 (size 116) =====

int64_t sym.bc_capture_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (**(iVar3 + 0xa0) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(arg2,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.bc_capture_mode_store @ 0x08004524 (size 380) =====

uint64_t sym.bc_capture_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    int aiStack_50 [6];
    int64_t iStack_38;
    
    uVar6 = arg3;
    puVar4 = &stack0xffffffffffffffb0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    aiStack_50[4] = 0;
    aiStack_50[0] = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[3] = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    if ((0x13 < uVar6) ||
       (iVar2 = sscanf(arg2,0x800115e,&stack0xffffffffffffffb0), arg2 = puVar4, noname_1 = extraout_q0, iVar2 != 1)
       ) {
        puVar4 = arg2;
        uVar6 = 0xffffffffffffffea;
        goto code_r0x0800459c;
    }
    if ((piVar7[0xf] >> 4 & 1) == 0) {
        uVar6 = 0xffffffffffffffff;
        goto code_r0x0800459c;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
        uVar6 = 0xffffffffffffffff;
    }
    else {
        if (aiStack_50[0] == 0x425441) {
            uVar5 = 0;
        }
        else {
            if ((aiStack_50[0] != 0x425041) || (*(piVar7[0x14] + 4) != 1)) {
                uVar6 = 0xffffffffffffffea;
                goto code_r0x0800468c;
            }
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0x280) = *(*piVar7 + 0x280) | 8;
            DataSynchronizationBarrier(3,3,0);
            uVar5 = 1;
            *(*piVar7 + 0xfb0) = 0;
        }
        *piVar7[0x14] = uVar5;
    }
code_r0x0800468c:
    noname_1 = mutex_unlock(piVar7 + 7);
code_r0x0800459c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar3 = __stack_chk_fail(noname_1);
    *extraout_x18 = 0x800469c;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        uVar6 = 0xffffffffffffffff;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa0) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(puVar4,0x1000,0x80016ce,uVar1);
        uVar6 = iVar2;
    }
    return uVar6;
}


// ===== sym.bc_retrieval_mode_show @ 0x080046a0 (size 116) =====

int64_t sym.bc_retrieval_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa0) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(arg2,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.bc_retrieval_mode_store @ 0x08004714 (size 280) =====

uint64_t sym.bc_retrieval_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t unaff_x20;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    uVar8 = arg3;
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iVar10 = *(*(arg1 + 0x60) + 0x98);
    uVar9 = uVar8;
    if ((0x13 < uVar8) ||
       (iVar3 = sscanf(arg2,0x800115e,&uStack_50), arg2 = puVar5, noname_1 = extraout_q0, iVar3 != 1)) {
        puVar5 = arg2;
        uVar8 = 0xffffffffffffffea;
        goto code_r0x0800478c;
    }
    if ((*(iVar10 + 0x70) >> 4 & 1) == 0) {
        uVar8 = 0xffffffffffffffff;
        goto code_r0x0800478c;
    }
    unaff_x20 = iVar10 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar10 + 0x68) == '\0') {
        if (uStack_50 == 0x425441) {
            uVar7 = 0;
        }
        else {
            if (uStack_50 != 0x425041) {
                uVar8 = 0xffffffffffffffea;
                goto code_r0x0800481c;
            }
            uVar7 = 1;
        }
        *(*(iVar10 + 0xa0) + 4) = uVar7;
    }
    else {
        uVar8 = 0xffffffffffffffff;
    }
code_r0x0800481c:
    noname_1 = mutex_unlock(unaff_x20);
code_r0x0800478c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar4 = __stack_chk_fail(noname_1);
    puVar6 = &uStack_90;
    *extraout_x18 = sym.bc_reset_counters_store;
    pcStack_78 = sym.bc_reset_counters_store;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_90 = 0;
    piVar11 = *(*(iVar4 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar10;
    iStack_60 = unaff_x20;
    uStack_58 = uVar8;
    iVar3 = kstrtoull(puVar5,0x10,&uStack_90);
    if (iVar3 == 0) {
        if ((piVar11[0xf] >> 4 & 1) == 0) {
            uVar9 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(piVar11 + 7);
            if (piVar11[0xd] == '\0') {
                uVar9 = 0xffffffffffffffff;
            }
            else if (uStack_90 != 0) {
                *(*piVar11 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar11 + 0x280) | 2;
                uStack_90 = uVar1;
                *(*piVar11 + 0x280) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar11 + 0xfb0) = 0;
            }
            mutex_unlock(piVar11 + 7);
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_88) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = 0x8004944;
    iVar10 = *(*(iVar10 + 0x60) + 0x98);
    if ((*(iVar10 + 0x70) >> 4 & 1) == 0) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        iVar3 = scnprintf(puVar6,0x1000,0x8001169,*(*(iVar10 + 0xa0) + 8));
        uVar9 = iVar3;
    }
    return uVar9;
}


// ===== sym.bc_reset_counters_store @ 0x0800482c (size 284) =====

int64_t sym.bc_reset_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
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
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                arg3 = -1;
            }
            else if (uStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar5 + 0x280) | 2;
                uStack_40 = uVar1;
                *(*piVar5 + 0x280) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x8004944;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = scnprintf(puVar4,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 8));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.bc_sat_mode_show @ 0x08004948 (size 92) =====

int64_t sym.bc_sat_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_sat_mode_store @ 0x080049a4 (size 192) =====

int64_t sym.bc_sat_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 8) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_enable_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0xc));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_enable_counters_show @ 0x08004a64 (size 92) =====

int64_t sym.bc_enable_counters_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0xc));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_enable_counters_store @ 0x08004ac0 (size 192) =====

int64_t sym.bc_enable_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0xc) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_clear_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x10));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_clear_counters_show @ 0x08004b80 (size 92) =====

int64_t sym.bc_clear_counters_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x10));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_clear_counters_store @ 0x08004bdc (size 192) =====

int64_t sym.bc_clear_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0x10) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_enable_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x14));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_enable_irq_show @ 0x08004c9c (size 92) =====

int64_t sym.bc_enable_irq_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x14));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_enable_irq_store @ 0x08004cf8 (size 192) =====

int64_t sym.bc_enable_irq_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa0) + 0x14) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.bc_clear_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa0) + 0x18));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.bc_clear_irq_show @ 0x08004db8 (size 92) =====

int64_t sym.bc_clear_irq_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_clear_irq_store @ 0x08004e14 (size 192) =====

int64_t sym.bc_clear_irq_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa0) + 0x18) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.bc_trig_val_lo_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",uVar5 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar5 * 4 + 0x1c));
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + iVar1;
        } while (uVar5 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.bc_trig_val_lo_show @ 0x08004ed4 (size 184) =====

int64_t sym.bc_trig_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar3 * 4 + 0x1c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_trig_val_lo_store @ 0x08004f8c (size 264) =====

int64_t sym.bc_trig_val_lo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        if (((((*(iVar3 + 0x70) >> 4 & 1) == 0) || (*(iVar3 + 0x8c) <= uStack_40)) || (*(iVar3 + 0x84) == 2)) ||
           ((*(iVar3 + 0x84) == 1 && (uStack_40 != 0)))) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            if (0x1f < uStack_40) goto code_r0x08005090;
            *(*(iVar3 + 0xa0) + uStack_40 * 4 + 0x1c) = uStack_48;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x08005090:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005094);
    (*pcVar1)();
}


// ===== sym.bc_trig_val_hi_show @ 0x08005094 (size 184) =====

int64_t sym.bc_trig_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xa0) + uVar3 * 4 + 0x9c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x20);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_trig_val_hi_store @ 0x0800514c (size 264) =====

int64_t sym.bc_trig_val_hi_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        if (((((*(iVar3 + 0x70) >> 4 & 1) == 0) || (*(iVar3 + 0x8c) <= uStack_40)) || (*(iVar3 + 0x84) == 2)) ||
           ((*(iVar3 + 0x84) == 1 && (uStack_40 != 0)))) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            if (0x1f < uStack_40) goto code_r0x08005250;
            *(*(iVar3 + 0xa0) + uStack_40 * 4 + 0x9c) = uStack_48;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail();
code_r0x08005250:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005254);
    (*pcVar1)();
}


// ===== sym.bc_enable_ganging_show @ 0x08005254 (size 92) =====

int64_t sym.bc_enable_ganging_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa0) + 0x11c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.bc_enable_ganging_store @ 0x080052b0 (size 192) =====

int64_t sym.bc_enable_ganging_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa0) + 0x11c) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.bc_overflow_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(puVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xa0) + 0x120));
        iVar3 = iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xa0) + 0x124));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xa0) + 0x128));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xa0) + 300));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xa0) + 0x130));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xa0) + 0x134));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.bc_overflow_val_show @ 0x08005370 (size 312) =====

int64_t sym.bc_overflow_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa0) + 0x120));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa0) + 0x124));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa0) + 0x128));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa0) + 300));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa0) + 0x130));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa0) + 0x134));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.bc_overflow_val_store @ 0x080054a8 (size 232) =====

void sym.bc_overflow_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 4 & 1) != 0) && (uStack_40 < 6)) {
            mutex_lock(iVar4 + 0x38);
            if (5 < uStack_40) goto code_r0x0800558c;
            *(*(iVar4 + 0xa0) + uStack_40 * 4 + 0x120) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x0800558c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005590);
    (*pcVar1)();
}


// ===== sym.bc_ovsr_show @ 0x08005590 (size 200) =====

int64_t sym.bc_ovsr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c0);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_ovsr_store @ 0x0800565c (size 264) =====

int64_t sym.bc_ovsr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                arg3 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x3c0) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.bc_counter_sel_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 4 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x3c4);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return arg3;
}


// ===== sym.bc_counter_sel_show @ 0x08005764 (size 200) =====

int64_t sym.bc_counter_sel_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c4);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_counter_sel_store @ 0x08005830 (size 272) =====

int64_t sym.bc_counter_sel_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if ((piVar6[0xd] == '\0') || (*(piVar6 + 0x8c) <= uStack_40)) {
                arg3 = -1;
            }
            else {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x3c4) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.bc_count_val_lo_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 4 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x3c8);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(puVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return arg3;
}


// ===== sym.bc_count_val_lo_show @ 0x08005940 (size 200) =====

int64_t sym.bc_count_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3c8);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_count_val_lo_store @ 0x08005a0c (size 316) =====

int64_t sym.bc_count_val_lo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar5 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar3 != 0) {
        arg3 = -0x16;
        goto code_r0x08005ae4;
    }
    if ((piVar6[0xf] >> 4 & 1) == 0) {
        arg3 = -1;
        goto code_r0x08005ae4;
    }
    mutex_lock(piVar6 + 7);
    if (piVar6[0xd] == '\0') {
code_r0x08005ad8:
        arg3 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((1L << (*(*piVar6 + 0x3c4) & 0x3f) & *(*piVar6 + 0x288)) >> (*(*piVar6 + 0x3c4) & 0x3f) != 0)
        goto code_r0x08005ad8;
        *(*piVar6 + 0x3c8) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
    }
    mutex_unlock(piVar6 + 7);
code_r0x08005ae4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8005b40;
    piVar6 = *(*(iVar4 + 0x60) + 0x98);
    if ((piVar6[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar6 + 7;
        mutex_lock(piVar1);
        if (piVar6[0xd] != '\0') {
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar6 + 0x3cc);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(puVar5,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_count_val_hi_show @ 0x08005b48 (size 200) =====

int64_t sym.bc_count_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x3cc);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_count_val_hi_store @ 0x08005c14 (size 316) =====

int64_t sym.bc_count_val_hi_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar4 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar1 != 0) {
        arg3 = -0x16;
        goto code_r0x08005cec;
    }
    if ((piVar5[0xf] >> 4 & 1) == 0) {
        arg3 = -1;
        goto code_r0x08005cec;
    }
    mutex_lock(piVar5 + 7);
    if (piVar5[0xd] == '\0') {
code_r0x08005ce0:
        arg3 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar5 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        if ((1L << (*(*piVar5 + 0x3c4) & 0x3f) & *(*piVar5 + 0x288)) >> (*(*piVar5 + 0x3c4) & 0x3f) != 0)
        goto code_r0x08005ce0;
        *(*piVar5 + 0x3cc) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar5 + 0xfb0) = 0;
    }
    mutex_unlock(piVar5 + 7);
code_r0x08005cec:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = 0x8005d48;
        piVar5 = *(*(iVar3 + 0x60) + 0x98);
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            iVar3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                iVar3 = -1;
            }
            else {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                if (*(piVar5 + 0x8c) == 0) {
                    iVar3 = 0;
                }
                else {
                    uVar6 = 0;
                    iVar3 = 0;
                    iVar1 = 0x3d0;
                    do {
                        iVar2 = scnprintf(puVar4 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",uVar6,
                                          *(*piVar5 + iVar1));
                        iVar3 = iVar3 + iVar2;
                        uVar6 = uVar6 + 1;
                        iVar1 = iVar1 + 4;
                    } while (uVar6 < *(piVar5 + 0x8c));
                }
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
        return iVar3;
    }
    return arg3;
}


// ===== sym.bc_shadow_val_lo_show @ 0x08005d50 (size 272) =====

int64_t sym.bc_shadow_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (*(piVar4 + 0x8c) == 0) {
                iVar2 = 0;
            }
            else {
                uVar3 = 0;
                iVar2 = 0;
                iVar5 = 0x3d0;
                do {
                    iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3,
                                      *(*piVar4 + iVar5));
                    iVar2 = iVar2 + iVar1;
                    uVar3 = uVar3 + 1;
                    iVar5 = iVar5 + 4;
                } while (uVar3 < *(piVar4 + 0x8c));
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.bc_shadow_val_hi_show @ 0x08005e64 (size 272) =====

int64_t sym.bc_shadow_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            if (*(piVar4 + 0x8c) == 0) {
                iVar2 = 0;
            }
            else {
                uVar3 = 0;
                iVar2 = 0;
                iVar5 = 0x450;
                do {
                    iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",uVar3,
                                      *(*piVar4 + iVar5));
                    iVar2 = iVar2 + iVar1;
                    uVar3 = uVar3 + 1;
                    iVar5 = iVar5 + 4;
                } while (uVar3 < *(piVar4 + 0x8c));
            }
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.bc_sw_inc_show @ 0x08005f78 (size 200) =====

int64_t sym.bc_sw_inc_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 4 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x4d0);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.bc_sw_inc_store @ 0x08006044 (size 264) =====

int64_t sym.bc_sw_inc_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((piVar5[0xf] >> 4 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                arg3 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0x4d0) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.bc_msr_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if (*(iVar2 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar2 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar4,0x1000,"%u 0x%x\n",0,*(*(iVar2 + 0xa0) + 0x138));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",1,*(*(iVar2 + 0xa0) + 0x13c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",2,*(*(iVar2 + 0xa0) + 0x140));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",3,*(*(iVar2 + 0xa0) + 0x144));
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


// ===== sym.bc_msr_show @ 0x0800614c (size 240) =====

int64_t sym.bc_msr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar3 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar3 + 0x70) >> 4 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%u 0x%x\n",0,*(*(iVar3 + 0xa0) + 0x138));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",1,*(*(iVar3 + 0xa0) + 0x13c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",2,*(*(iVar3 + 0xa0) + 0x140));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",3,*(*(iVar3 + 0xa0) + 0x144));
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.bc_msr_store @ 0x0800623c (size 252) =====

void sym.bc_msr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar4 + 0x70) >> 4 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = sscanf(arg2,"%u %x",&uStack_40 + 4,&uStack_40);
        iVar3 = -0x16;
        noname_1 = extraout_q0;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 4)) {
            mutex_lock(iVar4 + 0x38);
            if (3 < uStack_40._4_4_) goto code_r0x08006334;
            *(*(iVar4 + 0xa0) + uStack_40._4_4_ * 4 + 0x138) = uStack_40;
            noname_1 = mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
code_r0x08006334:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006338);
    (*pcVar1)();
}


// ===== sym.tc_capture_mode_show @ 0x08006338 (size 116) =====

int64_t sym.tc_capture_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (**(iVar3 + 0xa8) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(arg2,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tc_capture_mode_store @ 0x080063ac (size 380) =====

uint64_t sym.tc_capture_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    int aiStack_50 [6];
    int64_t iStack_38;
    
    uVar6 = arg3;
    puVar4 = &stack0xffffffffffffffb0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    aiStack_50[4] = 0;
    aiStack_50[0] = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[3] = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    if ((0x13 < uVar6) ||
       (iVar2 = sscanf(arg2,0x800115e,&stack0xffffffffffffffb0), arg2 = puVar4, noname_1 = extraout_q0, iVar2 != 1)
       ) {
        puVar4 = arg2;
        uVar6 = 0xffffffffffffffea;
        goto code_r0x08006424;
    }
    if ((piVar7[0xf] >> 3 & 1) == 0) {
        uVar6 = 0xffffffffffffffff;
        goto code_r0x08006424;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
        uVar6 = 0xffffffffffffffff;
    }
    else {
        if (aiStack_50[0] == 0x425441) {
            uVar5 = 0;
        }
        else {
            if ((aiStack_50[0] != 0x425041) || (*(piVar7[0x15] + 4) != 1)) {
                uVar6 = 0xffffffffffffffea;
                goto code_r0x08006514;
            }
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0x500) = *(*piVar7 + 0x500) | 8;
            DataSynchronizationBarrier(3,3,0);
            uVar5 = 1;
            *(*piVar7 + 0xfb0) = 0;
        }
        *piVar7[0x15] = uVar5;
    }
code_r0x08006514:
    noname_1 = mutex_unlock(piVar7 + 7);
code_r0x08006424:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar3 = __stack_chk_fail(noname_1);
    *extraout_x18 = 0x8006524;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        uVar6 = 0xffffffffffffffff;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa8) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(puVar4,0x1000,0x80016ce,uVar1);
        uVar6 = iVar2;
    }
    return uVar6;
}


// ===== sym.tc_retrieval_mode_show @ 0x08006528 (size 116) =====

int64_t sym.tc_retrieval_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        uVar1 = 0x800115a;
        if (*(*(iVar3 + 0xa8) + 4) != 0) {
            uVar1 = 0x8001585;
        }
        iVar2 = scnprintf(arg2,0x1000,0x80016ce,uVar1);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tc_retrieval_mode_store @ 0x0800659c (size 280) =====

uint64_t sym.tc_retrieval_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t unaff_x20;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    uVar8 = arg3;
    puVar5 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iVar10 = *(*(arg1 + 0x60) + 0x98);
    uVar9 = uVar8;
    if ((0x13 < uVar8) ||
       (iVar3 = sscanf(arg2,0x800115e,&uStack_50), arg2 = puVar5, noname_1 = extraout_q0, iVar3 != 1)) {
        puVar5 = arg2;
        uVar8 = 0xffffffffffffffea;
        goto code_r0x08006614;
    }
    if ((*(iVar10 + 0x70) >> 3 & 1) == 0) {
        uVar8 = 0xffffffffffffffff;
        goto code_r0x08006614;
    }
    unaff_x20 = iVar10 + 0x38;
    mutex_lock(unaff_x20);
    if (*(iVar10 + 0x68) == '\0') {
        if (uStack_50 == 0x425441) {
            uVar7 = 0;
        }
        else {
            if (uStack_50 != 0x425041) {
                uVar8 = 0xffffffffffffffea;
                goto code_r0x080066a4;
            }
            uVar7 = 1;
        }
        *(*(iVar10 + 0xa8) + 4) = uVar7;
    }
    else {
        uVar8 = 0xffffffffffffffff;
    }
code_r0x080066a4:
    noname_1 = mutex_unlock(unaff_x20);
code_r0x08006614:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar4 = __stack_chk_fail(noname_1);
    puVar6 = &uStack_90;
    *extraout_x18 = sym.tc_reset_counters_store;
    pcStack_78 = sym.tc_reset_counters_store;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_90 = 0;
    piVar11 = *(*(iVar4 + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar10;
    iStack_60 = unaff_x20;
    uStack_58 = uVar8;
    iVar3 = kstrtoull(puVar5,0x10,&uStack_90);
    if (iVar3 == 0) {
        if ((piVar11[0xe] >> 3 & 1) == 0) {
            uVar9 = 0xffffffffffffffff;
        }
        else {
            mutex_lock(piVar11 + 7);
            if (piVar11[0xd] == '\0') {
                uVar9 = 0xffffffffffffffff;
            }
            else if (uStack_90 != 0) {
                *(*piVar11 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar11 + 0x500) | 2;
                uStack_90 = uVar1;
                *(*piVar11 + 0x500) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar11 + 0xfb0) = 0;
            }
            mutex_unlock(piVar11 + 7);
        }
    }
    else {
        uVar9 = 0xffffffffffffffea;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_88) {
        return uVar9;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_00 = 0x80067cc;
    iVar10 = *(*(iVar10 + 0x60) + 0x98);
    if ((*(iVar10 + 0x70) >> 3 & 1) == 0) {
        uVar9 = 0xffffffffffffffff;
    }
    else {
        iVar3 = scnprintf(puVar6,0x1000,0x80011bb,*(*(iVar10 + 0xa8) + 8));
        uVar9 = iVar3;
    }
    return uVar9;
}


// ===== sym.tc_reset_counters_store @ 0x080066b4 (size 284) =====

int64_t sym.tc_reset_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
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
        if ((piVar5[0xe] >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                arg3 = -1;
            }
            else if (uStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*piVar5 + 0x500) | 2;
                uStack_40 = uVar1;
                *(*piVar5 + 0x500) = uVar1;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x80067cc;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = scnprintf(puVar4,0x1000,0x80011bb,*(*(iVar3 + 0xa8) + 8));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.tc_sat_mode_show @ 0x080067d0 (size 92) =====

int64_t sym.tc_sat_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xa8) + 8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_sat_mode_store @ 0x0800682c (size 200) =====

int64_t sym.tc_sat_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 8) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_enable_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0xc));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.tc_enable_counters_show @ 0x080068f4 (size 92) =====

int64_t sym.tc_enable_counters_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0xc));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_enable_counters_store @ 0x08006950 (size 208) =====

int64_t sym.tc_enable_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 3 & 1) == 0) || (uStack_40 >> (*(iVar3 + 0x90) & 0x3f) != 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0xc) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_clear_counters_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x10));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.tc_clear_counters_show @ 0x08006a20 (size 92) =====

int64_t sym.tc_clear_counters_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x10));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_clear_counters_store @ 0x08006a7c (size 208) =====

int64_t sym.tc_clear_counters_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 3 & 1) == 0) || (uStack_40 >> (*(iVar3 + 0x90) & 0x3f) != 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0x10) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_enable_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x14));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.tc_enable_irq_show @ 0x08006b4c (size 92) =====

int64_t sym.tc_enable_irq_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x14));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_enable_irq_store @ 0x08006ba8 (size 192) =====

int64_t sym.tc_enable_irq_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xa8) + 0x14) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.tc_clear_irq_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x8001169,*(*(iVar3 + 0xa8) + 0x18));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.tc_clear_irq_show @ 0x08006c68 (size 92) =====

int64_t sym.tc_clear_irq_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,*(*(iVar2 + 0xa8) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.tc_clear_irq_store @ 0x08006cc4 (size 192) =====

int64_t sym.tc_clear_irq_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xa8) + 0x18) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.tc_trig_sel_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(puVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xa8) + 0x1c));
        iVar3 = iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xa8) + 0x20));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xa8) + 0x24));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xa8) + 0x28));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xa8) + 0x2c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xa8) + 0x30));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar4 + 0xa8) + 0x34));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar4 + 0xa8) + 0x38));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.tc_trig_sel_show @ 0x08006d84 (size 376) =====

int64_t sym.tc_trig_sel_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x1c));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x20));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x24));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x28));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x2c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x30));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x34));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x38));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_trig_sel_store @ 0x08006efc (size 264) =====

void sym.tc_trig_sel_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                iVar3 = -1;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007000;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x1c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                iVar3 = arg3;
            }
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x08007000:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007004);
    (*pcVar1)();
}


// ===== sym.tc_trig_val_lo_show @ 0x08007004 (size 376) =====

int64_t sym.tc_trig_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x3c));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x40));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x44));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x48));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x4c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x50));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x54));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x58));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_trig_val_lo_store @ 0x0800717c (size 264) =====

void sym.tc_trig_val_lo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                iVar3 = -1;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007280;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x3c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                iVar3 = arg3;
            }
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x08007280:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007284);
    (*pcVar1)();
}


// ===== sym.tc_trig_val_hi_show @ 0x08007284 (size 376) =====

int64_t sym.tc_trig_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x5c));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x60));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xa8) + 100));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x68));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x6c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x70));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xa8) + 0x74));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xa8) + 0x78));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.tc_trig_val_hi_store @ 0x080073fc (size 264) =====

void sym.tc_trig_val_hi_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 3 & 1) != 0) && (uStack_40 < 8)) {
            if ((*(iVar4 + 0x80) == 2) || ((*(iVar4 + 0x80) == 1 && (uStack_40 != 0)))) {
                iVar3 = -1;
            }
            else {
                mutex_lock(iVar4 + 0x38);
                if (7 < uStack_40) goto code_r0x08007500;
                *(*(iVar4 + 0xa8) + uStack_40 * 4 + 0x5c) = uStack_48;
                mutex_unlock(iVar4 + 0x38);
                iVar3 = arg3;
            }
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x08007500:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007504);
    (*pcVar1)();
}


// ===== sym.tc_ovsr_gp_show @ 0x08007504 (size 200) =====

int64_t sym.tc_ovsr_gp_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xe] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x580);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_ovsr_gp_store @ 0x080075d0 (size 264) =====

int64_t sym.tc_ovsr_gp_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                arg3 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x580) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_ovsr_impl_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x584);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return arg3;
}


// ===== sym.tc_ovsr_impl_show @ 0x080076d8 (size 200) =====

int64_t sym.tc_ovsr_impl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x584);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_ovsr_impl_store @ 0x080077a4 (size 264) =====

int64_t sym.tc_ovsr_impl_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                arg3 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x584) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_counter_sel_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x588);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(piVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return arg3;
}


// ===== sym.tc_counter_sel_show @ 0x080078ac (size 200) =====

int64_t sym.tc_counter_sel_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x588);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_counter_sel_store @ 0x08007978 (size 256) =====

int64_t sym.tc_counter_sel_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar3 == 0) {
        if ((piVar6[0xf] >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar6 + 7);
            if (piVar6[0xd] == '\0') {
                arg3 = -1;
            }
            else {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0x588) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
            }
            mutex_unlock(piVar6 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.tc_count_val_lo_show;
        piVar6 = *(*(iVar4 + 0x60) + 0x98);
        if ((piVar6[0xf] >> 3 & 1) != 0) {
            piVar1 = piVar6 + 7;
            mutex_lock(piVar1);
            if (piVar6[0xd] != '\0') {
                *(*piVar6 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                uVar2 = *(*piVar6 + 0x58c);
                DataSynchronizationBarrier(3,3,0);
                *(*piVar6 + 0xfb0) = 0;
                mutex_unlock(piVar1);
                iVar3 = scnprintf(puVar5,0x1000,0x8001169,uVar2);
                return iVar3;
            }
            mutex_unlock(piVar1);
        }
        return -1;
    }
    return arg3;
}


// ===== sym.tc_count_val_lo_show @ 0x08007a78 (size 200) =====

int64_t sym.tc_count_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x58c);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_count_val_lo_store @ 0x08007b44 (size 320) =====

int64_t sym.tc_count_val_lo_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar6 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar4 != 0) {
        arg3 = -0x16;
        goto code_r0x08007c20;
    }
    if ((piVar7[0xf] >> 3 & 1) == 0) {
        arg3 = -1;
        goto code_r0x08007c20;
    }
    mutex_lock(piVar7 + 7);
    if (piVar7[0xd] == '\0') {
code_r0x08007c14:
        arg3 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar7 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*piVar7 + 0x588) >> 0xb & 3;
        if ((1L << uVar3 & *(*piVar7 + 0x504)) >> uVar3 != 0) goto code_r0x08007c14;
        *(*piVar7 + 0x58c) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar7 + 0xfb0) = 0;
    }
    mutex_unlock(piVar7 + 7);
code_r0x08007c20:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = 0x8007c7c;
    piVar7 = *(*(iVar5 + 0x60) + 0x98);
    if ((piVar7[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar7 + 7;
        mutex_lock(piVar1);
        if (piVar7[0xd] != '\0') {
            *(*piVar7 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar7 + 0x590);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar7 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar4 = scnprintf(puVar6,0x1000,0x8001169,uVar2);
            return iVar4;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_count_val_hi_show @ 0x08007c84 (size 200) =====

int64_t sym.tc_count_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x590);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_count_val_hi_store @ 0x08007d50 (size 320) =====

int64_t sym.tc_count_val_hi_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    puVar5 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    piVar6 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar2 != 0) {
        arg3 = -0x16;
        goto code_r0x08007e2c;
    }
    if ((piVar6[0xf] >> 3 & 1) == 0) {
        arg3 = -1;
        goto code_r0x08007e2c;
    }
    mutex_lock(piVar6 + 7);
    if (piVar6[0xd] == '\0') {
code_r0x08007e20:
        arg3 = -1;
    }
    else if (iStack_40 != 0) {
        *(*piVar6 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*piVar6 + 0x588) >> 0xb & 3;
        if ((1L << uVar1 & *(*piVar6 + 0x504)) >> uVar1 != 0) goto code_r0x08007e20;
        *(*piVar6 + 0x590) = iStack_40;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar6 + 0xfb0) = 0;
    }
    mutex_unlock(piVar6 + 7);
code_r0x08007e2c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = 0x8007e88;
    piVar6 = *(*(iVar4 + 0x60) + 0x98);
    if ((piVar6[0xf] >> 3 & 1) == 0) {
        iVar4 = -1;
    }
    else {
        mutex_lock(piVar6 + 7);
        if (piVar6[0xd] == '\0') {
            iVar4 = -1;
        }
        else {
            iVar2 = 0;
            iVar4 = 0;
            *(*piVar6 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar7 = 0x594;
            do {
                iVar3 = scnprintf(puVar5 + iVar4,0x1000 - iVar4,"Index: 0x%x Value: 0x%x\n",iVar2,*(*piVar6 + iVar7)
                                 );
                iVar7 = iVar7 + 4;
                iVar4 = iVar4 + iVar3;
                iVar2 = iVar2 + 1;
            } while (iVar7 != 0x644);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar6 + 0xfb0) = 0;
        }
        mutex_unlock(piVar6 + 7);
    }
    return iVar4;
}


// ===== sym.tc_shadow_val_lo_show @ 0x08007e90 (size 252) =====

int64_t sym.tc_shadow_val_lo_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            iVar3 = 0;
            iVar2 = 0;
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar5 = 0x594;
            do {
                iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",iVar3,*(*piVar4 + iVar5));
                iVar5 = iVar5 + 4;
                iVar2 = iVar2 + iVar1;
                iVar3 = iVar3 + 1;
            } while (iVar5 != 0x644);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.tc_shadow_val_hi_show @ 0x08007f90 (size 252) =====

int64_t sym.tc_shadow_val_hi_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(piVar4 + 7);
        if (piVar4[0xd] == '\0') {
            iVar2 = -1;
        }
        else {
            iVar3 = 0;
            iVar2 = 0;
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            iVar5 = 0x644;
            do {
                iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",iVar3,*(*piVar4 + iVar5));
                iVar5 = iVar5 + 4;
                iVar2 = iVar2 + iVar1;
                iVar3 = iVar3 + 1;
            } while (iVar5 != 0x6f4);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
        }
        mutex_unlock(piVar4 + 7);
    }
    return iVar2;
}


// ===== sym.tc_sw_inc_show @ 0x08008090 (size 200) =====

int64_t sym.tc_sw_inc_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((piVar4[0xf] >> 3 & 1) != 0) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0x700);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.tc_sw_inc_store @ 0x0800815c (size 264) =====

int64_t sym.tc_sw_inc_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((piVar5[0xf] >> 3 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar5 + 7);
            if (piVar5[0xd] == '\0') {
                arg3 = -1;
            }
            else if (iStack_40 != 0) {
                *(*piVar5 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0x700) = iStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar5 + 0xfb0) = 0;
            }
            mutex_unlock(piVar5 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.tc_msr_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if (*(iVar2 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar2 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar4,0x1000,"%u 0x%x\n",0,*(*(iVar2 + 0xa8) + 0x7c));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",1,*(*(iVar2 + 0xa8) + 0x80));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",2,*(*(iVar2 + 0xa8) + 0x84));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",3,*(*(iVar2 + 0xa8) + 0x88));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",4,*(*(iVar2 + 0xa8) + 0x8c));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar4 + iVar3,0x1000 - iVar3,"%u 0x%x\n",5,*(*(iVar2 + 0xa8) + 0x90));
        iVar3 = iVar3 + iVar1;
    }
    return iVar3;
}


// ===== sym.tc_msr_show @ 0x08008264 (size 304) =====

int64_t sym.tc_msr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar3 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar3 + 0x70) >> 3 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%u 0x%x\n",0,*(*(iVar3 + 0xa8) + 0x7c));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",1,*(*(iVar3 + 0xa8) + 0x80));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",2,*(*(iVar3 + 0xa8) + 0x84));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",3,*(*(iVar3 + 0xa8) + 0x88));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",4,*(*(iVar3 + 0xa8) + 0x8c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",5,*(*(iVar3 + 0xa8) + 0x90));
        iVar2 = iVar2 + iVar1;
    }
    return iVar2;
}


// ===== sym.tc_msr_store @ 0x08008394 (size 252) =====

void sym.tc_msr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar4 + 0x70) >> 3 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = sscanf(arg2,"%u %x",&uStack_40 + 4,&uStack_40);
        iVar3 = -0x16;
        noname_1 = extraout_q0;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 6)) {
            mutex_lock(iVar4 + 0x38);
            if (5 < uStack_40._4_4_) goto code_r0x0800848c;
            *(*(iVar4 + 0xa8) + uStack_40._4_4_ * 4 + 0x7c) = uStack_40;
            noname_1 = mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
code_r0x0800848c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008490);
    (*pcVar1)();
}


// ===== sym.dsb_mode_show @ 0x08008490 (size 92) =====

int64_t sym.dsb_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x8001169,**(iVar2 + 0xb0));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_mode_store @ 0x080084ec (size 196) =====

int64_t sym.dsb_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(iVar4 + 0xb0) = uStack_40 & 0xfffffff;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_edge_ctrl_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar5 = 0;
        iVar3 = 0;
        do {
            iVar1 = scnprintf(puVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",uVar5 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar5 * 4 + 4));
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + iVar1;
        } while (uVar5 != 0x10);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.dsb_edge_ctrl_show @ 0x080085b0 (size 184) =====

int64_t sym.dsb_edge_ctrl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar3 * 4 + 4));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
        } while (uVar3 != 0x10);
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_edge_ctrl_store @ 0x08008668 (size 356) =====

int64_t sym.dsb_edge_ctrl_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    iVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = sscanf(arg2,"%lx %lx %lx",puVar6,&uStack_48,&uStack_50);
    if (iVar4 == 3) {
        iVar5 = -1;
        if (((((*(iVar9 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) && (uStack_50 < 3)) {
            mutex_lock(iVar9 + 0x38);
            if (uStack_40 <= uStack_48) {
                iVar4 = uStack_40 << 1;
                uVar8 = uStack_40;
                do {
                    iVar7 = uVar8;
                    iVar2 = iVar7 + 0xf;
                    if (-1 < iVar7) {
                        iVar2 = iVar7;
                    }
                    uVar1 = iVar2 >> 4;
                    if (0xf < uVar1) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x80087c8);
                        (*pcVar3)();
                    }
                    uVar8 = iVar7 + 1U;
                    iVar5 = *(iVar9 + 0xb0) + uVar1 * 4;
                    uVar1 = iVar4 + uVar1 * -0x20;
                    iVar4 = iVar4 + 2;
                    *(iVar5 + 4) = *(iVar5 + 4) & ((2L << (uVar1 + 1 & 0x3f)) + (-1L << (uVar1 & 0x3f)) ^ 0xffffffffU) |
                                   uStack_50 << (uVar1 & 0x3f);
                } while (iVar7 + 1U <= uStack_48);
            }
            mutex_unlock(iVar9 + 0x38);
            iVar5 = arg3;
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    iVar9 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.dsb_edge_ctrl_mask_show;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if ((*(iVar9 + 0x70) >> 1 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar9 + 0x38);
        iVar4 = scnprintf(puVar6,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar9 + 0xb0) + 0x44));
        iVar5 = iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",1,*(*(iVar9 + 0xb0) + 0x48));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",2,*(*(iVar9 + 0xb0) + 0x4c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",3,*(*(iVar9 + 0xb0) + 0x50));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",4,*(*(iVar9 + 0xb0) + 0x54));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",5,*(*(iVar9 + 0xb0) + 0x58));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",6,*(*(iVar9 + 0xb0) + 0x5c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index:0x%x Val:0x%x\n",7,*(*(iVar9 + 0xb0) + 0x60));
        iVar5 = iVar5 + iVar4;
        mutex_unlock(iVar9 + 0x38);
    }
    return iVar5;
}


// ===== sym.dsb_edge_ctrl_mask_show @ 0x080087cc (size 376) =====

int64_t sym.dsb_edge_ctrl_mask_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar3 + 0xb0) + 0x44));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",1,*(*(iVar3 + 0xb0) + 0x48));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",2,*(*(iVar3 + 0xb0) + 0x4c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",3,*(*(iVar3 + 0xb0) + 0x50));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",4,*(*(iVar3 + 0xb0) + 0x54));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",5,*(*(iVar3 + 0xb0) + 0x58));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",6,*(*(iVar3 + 0xb0) + 0x5c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",7,*(*(iVar3 + 0xb0) + 0x60));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_edge_ctrl_mask_store @ 0x08008944 (size 324) =====

int64_t sym.dsb_edge_ctrl_mask_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    puVar6 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_50 = 0;
    iVar11 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = sscanf(arg2,"%lx %lx %lx",puVar6,&uStack_48,&iStack_50);
    if (iVar4 == 3) {
        iVar5 = -1;
        if ((((*(iVar11 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) {
            mutex_lock(iVar11 + 0x38);
            uVar7 = uStack_40;
            uVar9 = uStack_40;
            while (uVar7 <= uStack_48) {
                iVar8 = uVar9;
                iVar4 = iVar8 + 0x1f;
                if (-1 < iVar8) {
                    iVar4 = iVar8;
                }
                uVar1 = iVar4 >> 5;
                if (7 < uVar1) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8008a84);
                    (*pcVar3)();
                }
                iVar5 = *(iVar11 + 0xb0) + uVar1 * 4;
                uVar7 = iVar8 + 1;
                uVar9 = uVar7;
                uVar2 = *(iVar5 + 0x44);
                uVar10 = 1L << (iVar8 + uVar1 * -0x20 & 0x3f);
                uVar1 = uVar2 & (uVar10 ^ 0xffffffff);
                if (iStack_50 != 0) {
                    uVar1 = uVar2 | uVar10;
                }
                *(iVar5 + 0x44) = uVar1;
            }
            mutex_unlock(iVar11 + 0x38);
            iVar5 = arg3;
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    iVar11 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.dsb_patt_val_show;
    iVar11 = *(*(iVar11 + 0x60) + 0x98);
    if ((*(iVar11 + 0x70) >> 1 & 1) == 0) {
        iVar5 = -1;
    }
    else {
        mutex_lock(iVar11 + 0x38);
        iVar4 = scnprintf(puVar6,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar11 + 0xb0) + 100));
        iVar5 = iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar11 + 0xb0) + 0x68));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar11 + 0xb0) + 0x6c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar11 + 0xb0) + 0x70));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar11 + 0xb0) + 0x74));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar11 + 0xb0) + 0x78));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar11 + 0xb0) + 0x7c));
        iVar5 = iVar5 + iVar4;
        iVar4 = scnprintf(puVar6 + iVar5,0x1000 - iVar5,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar11 + 0xb0) + 0x80));
        iVar5 = iVar5 + iVar4;
        mutex_unlock(iVar11 + 0x38);
    }
    return iVar5;
}


// ===== sym.dsb_patt_val_show @ 0x08008a88 (size 376) =====

int64_t sym.dsb_patt_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 100));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0x68));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0x6c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0x70));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0x74));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0x78));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0x7c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0x80));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_patt_val_store @ 0x08008c00 (size 232) =====

void sym.dsb_patt_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x08008ce4;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 100) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x08008ce4:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008ce8);
    (*pcVar1)();
}


// ===== sym.dsb_patt_mask_show @ 0x08008ce8 (size 376) =====

int64_t sym.dsb_patt_mask_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 0x84));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0x88));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0x8c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0x90));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0x94));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0x98));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0x9c));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xa0));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_patt_mask_store @ 0x08008e60 (size 232) =====

void sym.dsb_patt_mask_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x08008f44;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 0x84) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x08008f44:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8008f48);
    (*pcVar1)();
}


// ===== sym.dsb_patt_ts_show @ 0x08008f48 (size 92) =====

int64_t sym.dsb_patt_ts_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xa4));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_patt_ts_store @ 0x08008fa4 (size 200) =====

int64_t sym.dsb_patt_ts_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb0) + 0xa4) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_patt_type_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb0) + 0xa5));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_patt_type_show @ 0x0800906c (size 92) =====

int64_t sym.dsb_patt_type_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xa5));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_patt_type_store @ 0x080090c8 (size 200) =====

int64_t sym.dsb_patt_type_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb0) + 0xa5) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_trig_patt_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(piVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xb0) + 0xa8));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xb0) + 0xac));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar4 + 0xb0) + 0xb0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar4 + 0xb0) + 0xb4));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar4 + 0xb0) + 0xb8));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar4 + 0xb0) + 0xbc));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar4 + 0xb0) + 0xc0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar4 + 0xb0) + 0xc4));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.dsb_trig_patt_val_show @ 0x08009190 (size 376) =====

int64_t sym.dsb_trig_patt_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 0xa8));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0xac));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0xb0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0xb4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0xb8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0xbc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0xc0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xc4));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_trig_patt_val_store @ 0x08009308 (size 232) =====

void sym.dsb_trig_patt_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x080093ec;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 0xa8) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x080093ec:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80093f0);
    (*pcVar1)();
}


// ===== sym.dsb_trig_patt_mask_show @ 0x080093f0 (size 376) =====

int64_t sym.dsb_trig_patt_mask_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb0) + 200));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb0) + 0xcc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",2,*(*(iVar3 + 0xb0) + 0xd0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",3,*(*(iVar3 + 0xb0) + 0xd4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",4,*(*(iVar3 + 0xb0) + 0xd8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",5,*(*(iVar3 + 0xb0) + 0xdc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",6,*(*(iVar3 + 0xb0) + 0xe0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",7,*(*(iVar3 + 0xb0) + 0xe4));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_trig_patt_mask_store @ 0x08009568 (size 232) =====

void sym.dsb_trig_patt_mask_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    if (iVar2 == 2) {
        iVar3 = -1;
        if (((*(iVar4 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 8)) {
            mutex_lock(iVar4 + 0x38);
            if (7 < uStack_40) goto code_r0x0800964c;
            *(*(iVar4 + 0xb0) + uStack_40 * 4 + 200) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    else {
        iVar3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x0800964c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8009650);
    (*pcVar1)();
}


// ===== sym.dsb_trig_ts_show @ 0x08009650 (size 92) =====

int64_t sym.dsb_trig_ts_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xe8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_trig_ts_store @ 0x080096ac (size 200) =====

int64_t sym.dsb_trig_ts_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb0) + 0xe8) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_trig_type_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb0) + 0xe9));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dsb_trig_type_show @ 0x08009774 (size 92) =====

int64_t sym.dsb_trig_type_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb0) + 0xe9));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.dsb_trig_type_store @ 0x080097d0 (size 200) =====

int64_t sym.dsb_trig_type_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb0) + 0xe9) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.dsb_select_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(piVar2,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar4 + 0xb0) + 0xec));
        iVar3 = iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",1,*(*(iVar4 + 0xb0) + 0xf0));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",2,*(*(iVar4 + 0xb0) + 0xf4));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",3,*(*(iVar4 + 0xb0) + 0xf8));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",4,*(*(iVar4 + 0xb0) + 0xfc));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",5,*(*(iVar4 + 0xb0) + 0x100));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",6,*(*(iVar4 + 0xb0) + 0x104));
        iVar3 = iVar3 + iVar1;
        iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"Index:0x%x Val:0x%x\n",7,*(*(iVar4 + 0xb0) + 0x108));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.dsb_select_val_show @ 0x08009898 (size 376) =====

int64_t sym.dsb_select_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar3 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index:0x%x Val:0x%x\n",0,*(*(iVar3 + 0xb0) + 0xec));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",1,*(*(iVar3 + 0xb0) + 0xf0));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",2,*(*(iVar3 + 0xb0) + 0xf4));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",3,*(*(iVar3 + 0xb0) + 0xf8));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",4,*(*(iVar3 + 0xb0) + 0xfc));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",5,*(*(iVar3 + 0xb0) + 0x100));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",6,*(*(iVar3 + 0xb0) + 0x104));
        iVar2 = iVar2 + iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index:0x%x Val:0x%x\n",7,*(*(iVar3 + 0xb0) + 0x108));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.dsb_select_val_store @ 0x08009a10 (size 300) =====

int64_t sym.dsb_select_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar5 = &uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = sscanf(arg2,"%lx %lx",puVar5,&uStack_48);
    if (iVar3 == 2) {
        iVar4 = -1;
        if ((((*(iVar9 + 0x70) >> 1 & 1) != 0) && (uStack_40 < 0x100)) && (uStack_48 < 0x100)) {
            mutex_lock(iVar9 + 0x38);
            uVar6 = uStack_40;
            uVar8 = uStack_40;
            while (uVar6 <= uStack_48) {
                iVar7 = uVar8;
                iVar3 = iVar7 + 0x1f;
                if (-1 < iVar7) {
                    iVar3 = iVar7;
                }
                uVar1 = iVar3 >> 5;
                if (7 < uVar1) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8009b38);
                    (*pcVar2)();
                }
                iVar4 = *(iVar9 + 0xb0) + uVar1 * 4;
                uVar6 = iVar7 + 1;
                uVar8 = uVar6;
                *(iVar4 + 0xec) = *(iVar4 + 0xec) | 1L << (iVar7 + uVar1 * -0x20 & 0x3f);
            }
            mutex_unlock(iVar9 + 0x38);
            iVar4 = arg3;
        }
    }
    else {
        iVar4 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    iVar9 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.dsb_msr_show;
    iVar9 = *(*(iVar9 + 0x60) + 0x98);
    if (*(iVar9 + 200) == '\0') {
        iVar4 = -0x16;
    }
    else if ((*(iVar9 + 0x70) >> 1 & 1) == 0) {
        iVar4 = -1;
    }
    else {
        uVar8 = 0;
        iVar4 = 0;
        do {
            iVar3 = scnprintf(puVar5 + iVar4,0x1000 - iVar4,"%u 0x%x\n",uVar8 & 0xffffffff,
                              *(*(iVar9 + 0xb0) + uVar8 * 4 + 0x10c));
            uVar8 = uVar8 + 1;
            iVar4 = iVar4 + iVar3;
        } while (uVar8 != 0x20);
    }
    return iVar4;
}


// ===== sym.dsb_msr_show @ 0x08009b3c (size 172) =====

int64_t sym.dsb_msr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(noname_1,arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb0) + uVar3 * 4 + 0x10c));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
            noname_1 = extraout_q0;
        } while (uVar3 != 0x20);
    }
    return iVar2;
}


// ===== sym.dsb_msr_store @ 0x08009be8 (size 252) =====

void sym.dsb_msr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if ((*(iVar4 + 0x70) >> 1 & 1) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = sscanf(arg2,"%u %x",&uStack_40 + 4,&uStack_40);
        iVar3 = -0x16;
        noname_1 = extraout_q0;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 0x20)) {
            mutex_lock(iVar4 + 0x38);
            if (0x1f < uStack_40._4_4_) goto code_r0x08009ce0;
            *(*(iVar4 + 0xb0) + uStack_40._4_4_ * 4 + 0x10c) = uStack_40;
            noname_1 = mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
code_r0x08009ce0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8009ce4);
    (*pcVar1)();
}


// ===== sym.cmb_available_modes_show @ 0x08009ce4 (size 64) =====

int64_t sym.cmb_available_modes_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80016ce,"continuous trace_on_change");
    return iVar1;
}


// ===== sym.cmb_mode_show @ 0x08009d24 (size 128) =====

int64_t sym.cmb_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        pcVar1 = "continuous";
        if (**(iVar3 + 0xb8) != '\0') {
            pcVar1 = "trace_on_change";
        }
        iVar2 = scnprintf(arg2,0x1000,"trace_mode: %s cycle_acc: %d\n",pcVar1,*(*(iVar3 + 0xb8) + 4));
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.cmb_mode_store @ 0x08009da4 (size 232) =====

int64_t sym.cmb_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar2 = &uStack_40 + 4;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = sscanf(arg2,"%u %u",iVar2,&uStack_40);
    if (iVar1 == 2) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(iVar4 + 0xb8) = uStack_40._4_4_ != 0;
            *(*(iVar4 + 0xb8) + 4) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_patt_val_show;
    iVar4 = *(*(iVar4 + 0x60) + 0x98);
    if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        mutex_lock(iVar4 + 0x38);
        iVar1 = scnprintf(iVar2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar4 + 0xb8) + 8));
        iVar3 = iVar1;
        iVar1 = scnprintf(iVar2 + iVar3,0x1000 - iVar3,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar4 + 0xb8) + 0xc));
        iVar3 = iVar3 + iVar1;
        mutex_unlock(iVar4 + 0x38);
    }
    return iVar3;
}


// ===== sym.cmb_patt_val_show @ 0x08009e8c (size 192) =====

int64_t sym.cmb_patt_val_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb8) + 8));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb8) + 0xc));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_patt_val_store @ 0x08009f4c (size 244) =====

void sym.cmb_patt_val_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    iVar3 = -0x16;
    if ((iVar2 == 2) && (uStack_40 < 2)) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            iVar3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            if (1 < uStack_40) goto code_r0x0800a03c;
            *(*(iVar4 + 0xb8) + uStack_40 * 4 + 8) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x0800a03c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800a040);
    (*pcVar1)();
}


// ===== sym.cmb_patt_mask_show @ 0x0800a040 (size 192) =====

int64_t sym.cmb_patt_mask_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        mutex_lock(iVar3 + 0x38);
        iVar1 = scnprintf(arg2,0x1000,"Index: 0x%x Value: 0x%x\n",0,*(*(iVar3 + 0xb8) + 0x10));
        iVar2 = iVar1;
        iVar1 = scnprintf(arg2 + iVar2,0x1000 - iVar2,"Index: 0x%x Value: 0x%x\n",1,*(*(iVar3 + 0xb8) + 0x14));
        iVar2 = iVar2 + iVar1;
        mutex_unlock(iVar3 + 0x38);
    }
    return iVar2;
}


// ===== sym.cmb_patt_mask_store @ 0x0800a100 (size 244) =====

void sym.cmb_patt_mask_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = sscanf(arg2,"%lx %lx",&uStack_40,&uStack_48);
    iVar3 = -0x16;
    if ((iVar2 == 2) && (uStack_40 < 2)) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            iVar3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            if (1 < uStack_40) goto code_r0x0800a1f0;
            *(*(iVar4 + 0xb8) + uStack_40 * 4 + 0x10) = uStack_48;
            mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar3);
code_r0x0800a1f0:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800a1f4);
    (*pcVar1)();
}


// ===== sym.cmb_patt_ts_show @ 0x0800a1f4 (size 100) =====

int64_t sym.cmb_patt_ts_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x18));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_patt_ts_store @ 0x0800a258 (size 208) =====

int64_t sym.cmb_patt_ts_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x18) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_ts_all_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb8) + 0x2d));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_ts_all_show @ 0x0800a328 (size 100) =====

int64_t sym.cmb_ts_all_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x2d));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_ts_all_store @ 0x0800a38c (size 208) =====

int64_t sym.cmb_ts_all_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x2d) = iStack_40 != 0;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_val_lsb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(piVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x1c));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_val_lsb_show @ 0x0800a45c (size 100) =====

int64_t sym.cmb_trig_patt_val_lsb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x1c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_val_lsb_store @ 0x0800a4c0 (size 200) =====

int64_t sym.cmb_trig_patt_val_lsb_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x1c) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_mask_lsb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x24));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_mask_lsb_show @ 0x0800a588 (size 100) =====

int64_t sym.cmb_trig_patt_mask_lsb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x24));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_mask_lsb_store @ 0x0800a5ec (size 200) =====

int64_t sym.cmb_trig_patt_mask_lsb_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x24) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_val_msb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x20));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_val_msb_show @ 0x0800a6b4 (size 100) =====

int64_t sym.cmb_trig_patt_val_msb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x20));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_val_msb_store @ 0x0800a718 (size 200) =====

int64_t sym.cmb_trig_patt_val_msb_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x20) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_patt_mask_msb_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(iVar3 + 0xb8) + 0x28));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_patt_mask_msb_show @ 0x0800a7e0 (size 100) =====

int64_t sym.cmb_trig_patt_mask_msb_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(iVar2 + 0xb8) + 0x28));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_patt_mask_msb_store @ 0x0800a844 (size 200) =====

int64_t sym.cmb_trig_patt_mask_msb_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar3 + 0x38);
            *(*(iVar3 + 0xb8) + 0x28) = uStack_40;
            mutex_unlock(iVar3 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cmb_trig_ts_show;
    iVar3 = *(*(iVar3 + 0x60) + 0x98);
    if (((*(iVar3 + 0x70) >> 2 & 1) == 0) && ((*(iVar3 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar1 = scnprintf(puVar2,0x1000,0x80011bb,*(*(iVar3 + 0xb8) + 0x2c));
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.cmb_trig_ts_show @ 0x0800a90c (size 100) =====

int64_t sym.cmb_trig_ts_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (((*(iVar2 + 0x70) >> 2 & 1) == 0) && ((*(iVar2 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(iVar2 + 0xb8) + 0x2c));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.cmb_trig_ts_store @ 0x0800a970 (size 208) =====

int64_t sym.cmb_trig_ts_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar2 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&iStack_40);
    if (iVar1 == 0) {
        if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            *(*(iVar4 + 0xb8) + 0x2c) = iStack_40 != 0;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.cmb_msr_show;
        iVar4 = *(*(iVar4 + 0x60) + 0x98);
        if (*(iVar4 + 200) == '\0') {
            iVar3 = -0x16;
        }
        else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
            iVar3 = -1;
        }
        else {
            uVar5 = 0;
            iVar3 = 0;
            do {
                iVar1 = scnprintf(piVar2 + iVar3,0x1000 - iVar3,"%u 0x%x\n",uVar5 & 0xffffffff,
                                  *(*(iVar4 + 0xb8) + uVar5 * 4 + 0x30));
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + iVar1;
            } while (uVar5 != 0x20);
        }
        return iVar3;
    }
    return arg3;
}


// ===== sym.cmb_msr_show @ 0x0800aa40 (size 180) =====

int64_t sym.cmb_msr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar2 = -0x16;
    }
    else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        iVar2 = -1;
    }
    else {
        uVar3 = 0;
        iVar2 = 0;
        do {
            iVar1 = scnprintf(noname_1,arg2 + iVar2,0x1000 - iVar2,"%u 0x%x\n",uVar3 & 0xffffffff,
                              *(*(iVar4 + 0xb8) + uVar3 * 4 + 0x30));
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + iVar1;
            noname_1 = extraout_q0;
        } while (uVar3 != 0x20);
    }
    return iVar2;
}


// ===== sym.cmb_msr_store @ 0x0800aaf4 (size 260) =====

void sym.cmb_msr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 200) == '\0') {
        iVar3 = -0x16;
    }
    else if (((*(iVar4 + 0x70) >> 2 & 1) == 0) && ((*(iVar4 + 0x70) >> 6 & 1) == 0)) {
        iVar3 = -1;
    }
    else {
        iVar2 = sscanf(arg2,"%u %x",&uStack_40 + 4,&uStack_40);
        iVar3 = -0x16;
        noname_1 = extraout_q0;
        if ((iVar2 == 2) && (uStack_40._4_4_ < 0x20)) {
            mutex_lock(iVar4 + 0x38);
            if (0x1f < uStack_40._4_4_) goto code_r0x0800abf4;
            *(*(iVar4 + 0xb8) + uStack_40._4_4_ * 4 + 0x30) = uStack_40;
            noname_1 = mutex_unlock(iVar4 + 0x38);
            iVar3 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
code_r0x0800abf4:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800abf8);
    (*pcVar1)();
}


// ===== sym.cmb_read_interface_state_show @ 0x0800abf8 (size 208) =====

int64_t sym.cmb_read_interface_state_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    if (((piVar4[0xe] >> 2 & 1) != 0) || ((piVar4[0xe] >> 6 & 1) != 0)) {
        piVar1 = piVar4 + 7;
        mutex_lock(piVar1);
        if (piVar4[0xd] != '\0') {
            *(*piVar4 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar4 + 0xa74);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar4 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            iVar3 = scnprintf(arg2,0x1000,0x8001169,uVar2);
            return iVar3;
        }
        mutex_unlock(piVar1);
    }
    return -1;
}


// ===== sym.cmb_read_ctl_reg_show @ 0x0800accc (size 256) =====

int64_t sym.cmb_read_ctl_reg_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    if (((piVar5[0xe] >> 2 & 1) == 0) && ((piVar5[0xe] >> 6 & 1) == 0)) {
        iVar4 = -1;
    }
    else {
        piVar1 = piVar5 + 7;
        mutex_lock(piVar1);
        if (piVar5[0xd] == '\0') {
            mutex_unlock(piVar1);
            iVar4 = -1;
        }
        else {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar2 = *(*piVar5 + 0xa70);
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
            mutex_unlock(piVar1);
            if ((piVar5[0xe] >> 2 & 1) == 0) {
                iVar3 = scnprintf(arg2,0x1000,"Lane %u SEL: %lx\n",uVar2 >> 1 & 7,uVar2 & 1);
            }
            else {
                iVar3 = scnprintf(arg2,0x1000,"SEL: %lx\n",uVar2);
            }
            iVar4 = iVar3;
        }
    }
    return iVar4;
}


// ===== sym.cmb_read_ctl_reg_store @ 0x0800add0 (size 264) =====

int64_t sym.cmb_read_ctl_reg_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t *unaff_x20;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t *piStack_60;
    int64_t *piStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    piVar7 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = arg3;
    iVar2 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar2 == 0) {
        if (((piVar7[0xe] >> 2 & 1) == 0) && ((piVar7[0xe] >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            unaff_x20 = piVar7 + 7;
            mutex_lock(unaff_x20);
            if (piVar7[0xd] == '\0') {
                arg3 = -1;
            }
            else {
                *(*piVar7 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xa70) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar7 + 0xfb0) = 0;
            }
            mutex_unlock(unaff_x20);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    puVar5 = &uStack_80;
    *extraout_x18 = sym.cmb_markr_store;
    pcStack_68 = sym.cmb_markr_store;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    piVar8 = *(*(iVar3 + 0x60) + 0x98);
    puStack_70 = &stack0xffffffffffffffd0;
    piStack_60 = piVar7;
    piStack_50 = unaff_x20;
    iStack_48 = arg3;
    iVar2 = kstrtoull(puVar4,0x10,&uStack_80);
    if (iVar2 == 0) {
        if (((piVar8[0xe] >> 2 & 1) == 0) && ((piVar8[0xe] >> 6 & 1) == 0)) {
            iVar6 = -1;
        }
        else {
            mutex_lock(piVar8 + 7);
            if (piVar8[0xd] == '\0') {
                iVar6 = -1;
            }
            else {
                *(*piVar8 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xa28) = uStack_80;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar8 + 0xfb0) = 0;
            }
            mutex_unlock(piVar8 + 7);
        }
    }
    else {
        iVar6 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar6;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.mcmb_trig_lane_show;
    iVar6 = *(*(iVar6 + 0x60) + 0x98);
    if ((*(iVar6 + 0x70) >> 6 & 1) == 0) {
        iVar6 = -1;
    }
    else {
        iVar2 = scnprintf(puVar5,0x1000,0x80011bb,**(*(iVar6 + 0xb8) + 0xb8));
        iVar6 = iVar2;
    }
    return iVar6;
}


// ===== sym.cmb_markr_store @ 0x0800aed8 (size 264) =====

int64_t sym.cmb_markr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    piVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar1 == 0) {
        if (((piVar4[0xe] >> 2 & 1) == 0) && ((piVar4[0xe] >> 6 & 1) == 0)) {
            arg3 = -1;
        }
        else {
            mutex_lock(piVar4 + 7);
            if (piVar4[0xd] == '\0') {
                arg3 = -1;
            }
            else {
                *(*piVar4 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar4 + 0xa28) = uStack_40;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar4 + 0xfb0) = 0;
            }
            mutex_unlock(piVar4 + 7);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mcmb_trig_lane_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(puVar3,0x1000,0x80011bb,**(*(iVar2 + 0xb8) + 0xb8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_trig_lane_show @ 0x0800afe0 (size 96) =====

int64_t sym.mcmb_trig_lane_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,**(*(iVar2 + 0xb8) + 0xb8));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_trig_lane_store @ 0x0800b040 (size 208) =====

int64_t sym.mcmb_trig_lane_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,10,&uStack_40);
    iVar2 = -0x16;
    if ((iVar1 == 0) && (uStack_40 < 8)) {
        if ((*(iVar4 + 0x70) >> 6 & 1) == 0) {
            iVar2 = -1;
        }
        else {
            mutex_lock(iVar4 + 0x38);
            **(*(iVar4 + 0xb8) + 0xb8) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
            iVar2 = arg3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar2 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.mcmb_lanes_select_show;
    iVar2 = *(*(iVar2 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(puVar3,0x1000,0x80011bb,*(*(*(iVar2 + 0xb8) + 0xb8) + 1));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_lanes_select_show @ 0x0800b110 (size 96) =====

int64_t sym.mcmb_lanes_select_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if ((*(iVar2 + 0x70) >> 6 & 1) == 0) {
        iVar2 = -1;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80011bb,*(*(*(iVar2 + 0xb8) + 0xb8) + 1));
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.mcmb_lanes_select_store @ 0x0800b170 (size 204) =====

uchar * sym.mcmb_lanes_select_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0x10,&uStack_40);
    if (iVar2 == 0) {
        if ((*(iVar4 + 0x70) >> 6 & 1) == 0) {
            arg3 = -1;
        }
        else {
            uStack_40 = uStack_40 & 0xff;
            mutex_lock(iVar4 + 0x38);
            *(*(*(iVar4 + 0xb8) + 0xb8) + 1) = uStack_40;
            mutex_unlock(iVar4 + 0x38);
        }
    }
    else {
        arg3 = -0x16;
    }
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
        pcVar1 = SoftwareBreakpoint(0x5502,0x800b294);
        (*pcVar1)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x0800b23c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800b280

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
    //switch table (4 cases) at 0x8001068
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800b294);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800b2a4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tpdm_driver);
    return;
}


// ===== sym.cleanup_module @ 0x0800b2d0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tpdm_driver);
    return;
}


// ===== sym.tpdm_remove @ 0x0800b2fc (size 44) =====

void sym.tpdm_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0x98) + 0x10));
    return;
}

