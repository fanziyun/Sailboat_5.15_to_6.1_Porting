// decompiled from msm-mmrm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 996) =====

//WARNING: Switch with 1 destination removed at 0x08004754

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 < -0x32ea6c9893ca3a8f) {
            if (arg1 < -0x5bf7dd890c59a3e0) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x8003478 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x08004714;
                }
                if (arg1 != -0x5db51ada5c8882aa) goto code_r0x08004714;
                pcVar2 = sym.mmrm_client_set_value.cfi_jt;
            }
            else if (arg1 == -0x5bf7dd890c59a3e0) {
                pcVar2 = sym.mmrm_client_set_value_in_range.cfi_jt;
            }
            else {
                if (arg1 != -0x4b1e3b0bdfc09bb8) {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x08004714;
                    pcVar2 = sym.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt;
code_r0x08003360:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08004714;
                }
                pcVar2 = sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP21mmrm_client_res_valueE_global_addr;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x32ea6c9893ca3a8f) {
                pcVar2 = sym.__typeid__ZTSFiP12mmrm_clk_mgrPciE_global_addr;
            }
            else {
                if (arg1 != -0x21def610a1890a50) goto code_r0x08004714;
                pcVar2 = sym.mmrm_client_check_scaling_supported.cfi_jt;
            }
        }
        else if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.simple_open.cfi_jt;
        }
        else {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
                goto code_r0x08003360;
            }
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08004714;
            pcVar2 = sym.msm_mmrm_debugfs_info_read.d3c56b11a9102df9ebdb7e4e0935e271.cfi_jt;
        }
    }
    else if (arg1 < 0x50855e51d35e4944) {
        if (arg1 < 0x2bc98faf45c6e3ec) {
            if (arg1 == 0x1e3d0ffe3d0499e9) {
                if ((pcVar1 + -0x80034b0 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08004714;
            }
            if (arg1 != 0x2a9bc774f672d8f8) goto code_r0x08004714;
            pcVar2 = sym.mmrm_client_deregister.cfi_jt;
        }
        else if (arg1 == 0x2bc98faf45c6e3ec) {
            pcVar2 = sym.__typeid__ZTSFiP12mmrm_clk_mgrE_global_addr;
        }
        else if (arg1 == 0x332ffa0fac01fbfa) {
            pcVar2 = sym.mmrm_client_get_value.cfi_jt;
        }
        else {
            if (arg1 != 0x485456f0db1156d2) goto code_r0x08004714;
            pcVar2 = sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientE_global_addr;
        }
    }
    else if (arg1 < 0x7638947d0b03083c) {
        if (arg1 == 0x50855e51d35e4944) {
            pcVar2 = sym.mmrm_client_register.cfi_jt;
        }
        else if (arg1 == 0x641c72c3cc89bd4f) {
            pcVar2 = sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_datamE_global_addr;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x08004714;
            pcVar2 = sym.__typeid__ZTSFiPvE_global_addr;
        }
    }
    else if (arg1 == 0x7638947d0b03083c) {
        pcVar2 = 
        sym.__typeid__ZTSFP11mmrm_clientP12mmrm_clk_mgr20mmrm_clk_client_desc20mmrm_client_priorityPvPFiP25mmrm_client_notifier_dataEE_global_addr
        ;
    }
    else if (arg1 == 0x795263802c8cc184) {
        pcVar2 = 
        sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_dataP21mmrm_client_res_valueE_global_addr;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004714;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004714:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004768);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_dataP21mmrm_client_res_valueE_global_addr @ 0x080033f0 (size 8) =====

void sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_dataP21mmrm_client_res_valueE_global_addr
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mmrm_sw_clk_client_setval(param_1,param_2,param_3,*(param_4 + 8));
    return;
}


// ===== sym.mmrm_client_set_value.cfi_jt @ 0x080033f8 (size 8) =====

int sym.mmrm_client_set_value.cfi_jt(int *param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (param_2 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001c8a,"err ","mmrm_client_set_value",param_1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*param_1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_setval(*(iVar1 + 0x60),param_1,param_2,param_3);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001d8a,"err ","mmrm_client_set_value");
                    }
                    goto code_r0x080038f4;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_set_value");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_set_value");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_set_value");
        }
        iVar2 = 0;
    }
code_r0x080038f4:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_set_value",iVar2);
    }
    return iVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003400 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt);
    return;
}


// ===== sym.mmrm_client_check_scaling_supported.cfi_jt @ 0x08003408 (size 8) =====

ulong sym.mmrm_client_check_scaling_supported.cfi_jt(int param_1)

{
    ulong uVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == -0x205) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_check_scaling_supported");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return 0;
        }
        uVar1 = 0x8000b8f;
        pcVar2 = "err ";
    }
    else {
        if ((param_1 != 0) || (*(CONCAT44(*0x8000004,_segment.ehdr) + 8) != '\0')) {
            return 1;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
            return 0;
        }
        uVar1 = 0x80009f6;
        pcVar2 = "high";
    }
    _printk(uVar1,pcVar2,"mmrm_client_check_scaling_supported");
    return 0;
}


// ===== sym.mmrm_client_deregister.cfi_jt @ 0x08003410 (size 8) =====

int sym.mmrm_client_deregister.cfi_jt(int *param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar2 = -0x16;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
        uVar3 = 0x8000c37;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 == -0x205) {
            iVar2 = 0;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
            uVar3 = 0x8001058;
        }
        else {
            if (*param_1 != 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x8001b49,"err ","mmrm_client_deregister");
                }
                return 0;
            }
            if (*(iVar1 + 8) == '\0') {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
                    return 0;
                }
                _printk(0x80009f6,"high","mmrm_client_deregister");
                return 0;
            }
            iVar2 = sym.mmrm_clk_client_deregister(*(iVar1 + 0x60),param_1);
            if (iVar2 == 0) {
                return 0;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
            uVar3 = 0x8000505;
        }
    }
    _printk(uVar3,"err ","mmrm_client_deregister");
code_r0x08003780:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_deregister",iVar2);
    }
    return iVar2;
}


// ===== sym.mmrm_client_register.cfi_jt @ 0x08003418 (size 8) =====

int64_t sym.mmrm_client_register.cfi_jt(int *param_1)

{
    ulong uVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar1 = 0x8000a28;
code_r0x080036e4:
            _printk(uVar1,"err ","mmrm_client_register");
        }
    }
    else {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar2 == -0x205) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar1 = 0x8001058;
                goto code_r0x080036e4;
            }
        }
        else if (*param_1 == 0) {
            if (*(iVar2 + 8) == '\0') {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
                    return 0;
                }
                uVar1 = 0x80009f6;
                pcVar3 = "high";
                goto code_r0x080036cc;
            }
            iVar2 = sym.mmrm_clk_client_register(*(iVar2 + 0x60));
            if (iVar2 != 0) {
                return iVar2;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar1 = 0x8000a54;
                goto code_r0x080036e4;
            }
        }
        else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001b49,"err ","mmrm_client_register");
        }
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
        return 0;
    }
    uVar1 = 0x8000b8f;
    pcVar3 = "err ";
code_r0x080036cc:
    _printk(uVar1,pcVar3,"mmrm_client_register");
    return 0;
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_datamE_global_addr @ 0x08003420 (size 8) =====

ulong sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_datamE_global_addr
                (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t param_4)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint16_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int *piVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong uVar23;
    uint64_t uVar24;
    int iVar25;
    int64_t iVar26;
    uint16_t *puVar27;
    int64_t iVar28;
    uint32_t uVar29;
    uint64_t *puVar30;
    int64_t *piVar31;
    ulong *puVar32;
    int iVar33;
    int64_t iVar34;
    uint64_t uVar35;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_70 = *(iVar21 + 0x5e0);
    if (param_2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar23 = 0x8001a3f;
code_r0x080063a8:
            _printk(uVar23,"err ");
        }
code_r0x08006b10:
        uVar23 = 0xffffffea;
code_r0x08006b14:
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","mmrm_sw_clk_client_setval",uVar23);
        }
    }
    else {
        uVar5 = *(param_2 + 4);
        uVar24 = uVar5;
        if (*(param_1 + 0x48) <= uVar5) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001a64,"err ","mmrm_sw_clk_client_setval",uVar5);
            }
            goto code_r0x08006b10;
        }
        if (param_3 == NULL) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001183,"err ","mmrm_sw_clk_client_setval");
            }
            goto code_r0x08006b10;
        }
        iVar26 = *(param_1 + 0x40);
        iVar21 = iVar26 + uVar24 * 400;
        puVar30 = iVar21 + 0x80;
        if ((*puVar30 == 0) || (0xfffffffffffff000 < *puVar30)) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar23 = 0x8001e7d;
                goto code_r0x080063a8;
            }
            goto code_r0x08006b10;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x80017d1,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),param_4);
        }
        iVar28 = iVar26 + uVar24 * 400;
        uVar5 = param_3[1] & 1;
        if ((*(iVar28 + 0x178) != param_4) || (*(iVar26 + uVar24 * 400 + 0x18c) != *param_3)) {
            if (param_4 != 0) {
                uVar10 = qcom_clk_get_voltage(*puVar30,param_4);
                if (uVar10 < 0x181) {
                    if (uVar10 < 0x40) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x8001c0e,"high","mmrm_sw_get_req_level",*(iVar26 + uVar24 * 400 + 0xa0));
                        }
                        uVar10 = 0;
                    }
                    else {
                        uVar16 = uVar10 - 0x40 >> 6;
                        uVar13 = uVar16 | uVar10 << 0x1a;
                        if ((5 < uVar13) || ((0x2fU >> (uVar16 & 0x1f) & 1) == 0)) goto code_r0x080063d4;
                        uVar10 = *(uVar13 * 4 + 0x8002b28);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x8001ee9,"high","mmrm_sw_get_req_level",uVar10);
                        }
                    }
                    if ((*param_3 != 0) && (*param_3 <= *(iVar26 + uVar24 * 400 + 0xb0))) goto code_r0x0800640c;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001aac,"err ","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0));
                    }
                }
                else {
code_r0x080063d4:
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001bbe,"err ","mmrm_sw_get_req_level",*(iVar26 + uVar24 * 400 + 0xa0),uVar10,
                                param_4);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar23 = 0x8001374;
code_r0x08006af0:
                        _printk(uVar23,"err ","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),param_4);
                    }
                }
                goto code_r0x08006b10;
            }
            uVar10 = 0;
code_r0x0800640c:
            mutex_lock(param_1);
            uVar16 = *param_3;
            iVar11 = *(param_1 + 0x80);
            piVar18 = iVar26 + uVar24 * 400 + 0xa0;
            iVar33 = *piVar18;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x800191f,"high","mmrm_sw_check_req_level",iVar33,uVar10,*(param_1 + 0x84));
            }
            uVar13 = *(param_1 + 0x84);
            uVar14 = uVar10;
            if (uVar10 < uVar13) {
                uVar22 = *(param_1 + 0x48);
                uVar14 = uVar10;
                if (*(param_1 + 0x48) != 0) {
                    uVar14 = *(param_1 + 0x40);
                    uVar35 = 0;
                    do {
                        uVar19 = uVar35;
                        if ((((*(uVar14 + 0x80) != 0) && (*(uVar14 + 0x80) < 0xfffffffffffff001)) &&
                            (*(uVar14 + 0x178) != 0)) && (*(uVar14 + 0xa0) != iVar33)) {
                            uVar29 = *(uVar14 + 0x180);
                            if (uVar29 == uVar13) {
                                uVar14 = uVar13;
                                goto code_r0x080065b0;
                            }
                            uVar19 = uVar14;
                            if (uVar29 <= uVar10 || uVar13 <= uVar29) {
                                uVar19 = uVar35;
                            }
                        }
                        uVar22 = uVar22 - 1;
                        uVar14 = uVar14 + 400;
                        uVar35 = uVar19;
                    } while (uVar22 != 0);
                    uVar14 = uVar10;
                    if ((uVar19 != 0) && (uVar14 = uVar10, uVar19 < 0xfffffffffffff001)) {
                        uVar13 = *(uVar19 + 0x180);
                        if (*(uVar19 + 0x180) <= uVar10) {
                            uVar13 = uVar10;
                        }
                        uVar14 = uVar13;
                    }
                }
            }
code_r0x080065b0:
            uVar13 = uVar14;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x8000e7c,"high","mmrm_sw_check_req_level");
                if (param_4 != 0) goto code_r0x080065c4;
code_r0x08006678:
                iVar33 = 0;
            }
            else {
                if (param_4 == 0) goto code_r0x08006678;
code_r0x080065c4:
                if (4 < uVar13) goto code_r0x08007394;
                iVar33 = *(iVar26 + uVar24 * 400 + uVar10 * 0x14 + uVar14 * 4 + 0x108) * uVar16;
            }
            piVar1 = iVar28 + 0x178;
            if (*piVar1 == 0) {
                uVar16 = *(param_1 + 0x84);
                iVar25 = 0;
            }
            else {
                uVar29 = *(iVar26 + uVar24 * 400 + 0x180);
                if (4 < uVar29) goto code_r0x08007394;
                uVar16 = *(param_1 + 0x84);
                if (4 < uVar16) goto code_r0x08007394;
                iVar28 = iVar26 + uVar24 * 400;
                iVar25 = *(iVar28 + 0x18c) * *(iVar28 + uVar29 * 0x14 + uVar16 * 4 + 0x108);
            }
            if (uVar13 == uVar16) {
                uVar16 = iVar33 - iVar25;
code_r0x080067a8:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x800206e,"high","mmrm_sw_check_peak_current",*piVar18,iVar11,iVar33,iVar25,uVar16);
                }
                uVar29 = uVar16 + iVar11;
                if (uVar29 < 1) {
                    *(param_1 + 0x80) = 0;
                    *(param_1 + 0x84) = uVar13;
                }
                else {
                    if (*(param_1 + 0x7c) <= uVar29) {
                        if ((*(iVar26 + uVar24 * 400 + 0x88) != 1) || (obj.msm_mmrm_enable_throttle_feature == 0x0)) {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                _printk(0x80015bb,"err ","mmrm_sw_check_peak_current",*piVar18,iVar21);
                            }
                            sym.mmrm_sw_dump_enabled_client_info(param_1 + 0x38);
                            goto code_r0x08006d88;
                        }
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_a8 = 0;
                        __init_swait_queue_head(&uStack_a8,"&x->wait",obj.mmrm_init_sw_clk_mgr.__key);
                        uVar15 = *(param_1 + 0x78);
                        if (uVar15 != 0) {
                            uVar14 = 0;
                            puVar27 = param_1 + 0x54;
                            do {
                                if (uVar14 == 5) goto code_r0x08007394;
                                iVar28 = *(param_1 + 0x40);
                                uVar22 = *puVar27;
                                uVar35 = iVar28 + uVar22 * 400;
                                if ((uVar35 != 0) && (uVar35 < 0xfffffffffffff001)) {
                                    iVar12 = iVar28 + uVar22 * 400;
                                    uVar6 = *(iVar12 + 0x180);
                                    if ((4 < uVar6) || (4 < *(param_1 + 0x84))) goto code_r0x08007394;
                                    iVar20 = *(param_1 + 0x84) * 4;
                                    iVar34 = iVar28 + uVar22 * 400 + 0x108;
                                    uVar7 = *(iVar34 + iVar20);
                                    uVar6 = *(iVar34 + uVar6 * 0x14 + iVar20);
                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                        _printk(0x8001f0d,"high","mmrm_sw_throttle_low_priority_client",
                                                *(iVar28 + uVar22 * 400 + 0xa0),uVar35);
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) goto code_r0x08006cb8;
code_r0x08006d20:
                                        _printk(0x8001d45,"high","mmrm_sw_throttle_low_priority_client",uVar6,uVar7)
                                        ;
                                        uVar17 = uVar6 - uVar7;
                                        if (uVar7 <= uVar6 && uVar17 != 0) {
code_r0x08006cc0:
                                            if (uVar16 < uVar17) {
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x8001800,"high","mmrm_sw_throttle_low_priority_client",
                                                            *(iVar28 + uVar22 * 400 + 0xa0),uVar35);
                                                }
                                                puVar2 = iVar12 + 0x180;
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x800183a,"high","mmrm_sw_throttle_low_priority_client",
                                                            uVar6,uVar7,uVar16);
                                                }
                                                uStack_90 = CONCAT44(uStack_90._4_4_,1);
                                                if (4 < *puVar2) goto code_r0x08007394;
                                                iVar34 = iVar28 + uVar22 * 400;
                                                puVar3 = iVar34 + 0xb8;
                                                uStack_88 = puVar3[*puVar2];
                                                uStack_80 = *(iVar34 + 0xb8);
                                                uStack_78 = *(iVar34 + 0x90);
                                                iVar12 = ktime_get();
                                                pcVar9 = *(iVar34 + 0x98);
                                                iVar11 = 0;
                                                if (pcVar9 != NULL) {
                                                    __cfi_slowpath_diag(0xb912697328ee41f,pcVar9,0x8000400);
                                                    iVar11 = (*pcVar9)(&uStack_90);
                                                }
                                                iVar34 = ktime_get();
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x800097c,"high","mmrm_sw_throttle_low_priority_client",
                                                            iVar34 - iVar12);
                                                    if (iVar11 != 0) goto code_r0x08006fac;
code_r0x08007170:
                                                    if ((100000000 < iVar34 - iVar12) &&
                                                       (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                                                        _printk(0x8001af9,"err ",
                                                                "mmrm_sw_throttle_low_priority_client",iVar34 - iVar12
                                                                ,100000000);
                                                    }
                                                    iVar12 = iVar28 + uVar22 * 400;
                                                    if ((*(iVar12 + 0x184) == '\0') &&
                                                       (iVar11 = clk_set_rate(*(iVar28 + uVar22 * 400 + 0x80),*puVar3)
                                                       , iVar11 != 0)) {
                                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                            uVar23 = 0x80013f2;
code_r0x080072f8:
                                                            _printk(uVar23,"err ",
                                                                    "mmrm_sw_throttle_low_priority_client",
                                                                    *(iVar28 + uVar22 * 400 + 0xa0));
                                                        }
                                                        goto code_r0x08006fbc;
                                                    }
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                        _printk(0x80016a7,"high",
                                                                "mmrm_sw_throttle_low_priority_client",uVar35,*puVar3)
                                                        ;
                                                    }
                                                    iVar34 = 0x38;
                                                    if (android_kmalloc_64_create != 0x0) {
                                                        iVar34 = 0x30;
                                                    }
                                                    piVar31 = kmem_cache_alloc_trace
                                                                        (*(kmalloc_caches + iVar34),0xdc0,0x20);
                                                    if ((piVar31 != NULL) && (piVar31 < 0xfffffffffffff001)) {
                                                        puVar32 = *(param_1 + 0x90);
                                                        *(piVar31 + 2) = uVar14;
                                                        *(piVar31 + 0x14) = uVar17;
                                                        *(piVar31 + 3) = *puVar2;
                                                        uVar14 = __list_add_valid(piVar31,puVar32,param_1 + 0x88);
                                                        if ((uVar14 & 1) != 0) {
                                                            *(param_1 + 0x90) = piVar31;
                                                            *piVar31 = param_1 + 0x88;
                                                            piVar31[1] = puVar32;
                                                            *puVar32 = piVar31;
                                                        }
                                                        *(iVar12 + 0x184) = 0;
                                                        *puVar2 = 0;
                                                        uVar29 = uVar29 - uVar17;
                                                        *(iVar28 + uVar22 * 400 + 0x178) = *puVar3;
                                                        break;
                                                    }
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                        _printk(0x800142c,"err ",
                                                                "mmrm_sw_throttle_low_priority_client");
                                                        uVar23 = 0xfffffff4;
                                                    }
                                                    else {
                                                        uVar23 = 0xfffffff4;
                                                    }
                                                }
                                                else {
                                                    if (iVar11 == 0) goto code_r0x08007170;
code_r0x08006fac:
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                        uVar23 = 0x8000ea0;
                                                        goto code_r0x080072f8;
                                                    }
code_r0x08006fbc:
                                                    uVar23 = 0xffffffea;
                                                }
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                    _printk(0x8001c49,"err ","mmrm_sw_check_peak_current");
                                                }
                                                sym.mmrm_sw_dump_enabled_client_info(param_1 + 0x38);
                                                goto code_r0x08006d8c;
                                            }
                                        }
                                    }
                                    else {
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) goto code_r0x08006d20;
code_r0x08006cb8:
                                        uVar17 = uVar6 - uVar7;
                                        if (uVar7 <= uVar6 && uVar17 != 0) goto code_r0x08006cc0;
                                    }
                                    uVar15 = *(param_1 + 0x78);
                                }
                                uVar14 = uVar14 + 1;
                                puVar27 = puVar27 + 4;
                            } while (uVar14 < uVar15);
                        }
                    }
                    *(param_1 + 0x80) = uVar29;
                    *(param_1 + 0x84) = uVar13;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    piVar31 = *(param_1 + 0x88);
                    while (piVar8 = piVar31, piVar8 != param_1 + 0x88) {
                        piVar31 = *piVar8;
                        if (((piVar8 != NULL) && (piVar8 < 0xfffffffffffff001)) &&
                           (*(piVar8 + 0x14) + *(param_1 + 0x80) <= *(param_1 + 0x7c))) {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                _printk(0x800075d,"high","mmrm_reinstate_throttled_client",piVar8[2]);
                            }
                            if (4 < *(piVar8 + 2)) goto code_r0x08007394;
                            iVar28 = *(param_1 + 0x40);
                            uVar22 = *(param_1 + *(piVar8 + 2) * 8 + 0x54);
                            uVar14 = iVar28 + uVar22 * 400;
                            if ((uVar14 != 0) && (uVar14 < 0xfffffffffffff001)) {
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                    _printk(0x80019ba,"high","mmrm_reinstate_throttled_client",uVar14,
                                            *(iVar28 + uVar22 * 400 + 0xa0));
                                }
                                uStack_90 = CONCAT44(uStack_90._4_4_,1);
                                uStack_88 = *(iVar28 + uVar22 * 400 + 0xb8);
                                if (4 < *(piVar8 + 3)) goto code_r0x08007394;
                                iVar34 = iVar28 + uVar22 * 400;
                                uStack_80 = *(iVar34 + *(piVar8 + 3) * 8 + 0xb8);
                                uStack_78 = *(iVar34 + 0x90);
                                iVar12 = ktime_get();
                                pcVar9 = *(iVar34 + 0x98);
                                if (pcVar9 != NULL) {
                                    __cfi_slowpath_diag(0xb912697328ee41f,pcVar9,0x8000420);
                                    iVar11 = (*pcVar9)(&uStack_90);
                                    iVar34 = ktime_get();
                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                        _printk(0x8001016,"high","mmrm_reinstate_throttled_client",iVar34 - iVar12);
                                    }
                                    if ((iVar11 != 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                                        _printk(0x8000636,"err ","mmrm_reinstate_throttled_client",
                                                *(iVar28 + uVar22 * 400 + 0xa0));
                                    }
                                    if ((100000000 < iVar34 - iVar12) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)
                                       ) {
                                        _printk(0x800224c,"err ","mmrm_reinstate_throttled_client");
                                    }
                                }
                                uVar14 = __list_del_entry_valid(piVar8);
                                if ((uVar14 & 1) != 0) {
                                    iVar28 = *piVar8;
                                    piVar4 = piVar8[1];
                                    *(iVar28 + 8) = piVar4;
                                    *piVar4 = iVar28;
                                }
                                *piVar8 = -0x2152ffffffffff00;
                                piVar8[1] = -0x2152fffffffffede;
                                kfree(piVar8);
                            }
                        }
                    }
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000725,"high","mmrm_sw_check_peak_current",*(param_1 + 0x80),*(param_1 + 0x84));
                }
                *piVar1 = param_4;
                iVar28 = iVar26 + uVar24 * 400;
                *(iVar28 + 0x180) = uVar10;
                *(iVar28 + 0x184) = uVar5;
                *(iVar28 + 0x18c) = *param_3;
                mutex_unlock(param_1);
                if (uVar5 == 0) goto code_r0x08006ab8;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8001d0e,"high","mmrm_sw_clk_client_setval",*piVar18);
                }
                goto code_r0x08006b94;
            }
            if (uVar13 < 5) {
                uVar22 = *(param_1 + 0x48);
                if (*(param_1 + 0x48) == 0) {
                    iVar11 = 0;
                }
                else {
                    iVar11 = 0;
                    iVar28 = *(param_1 + 0x40);
                    do {
                        if (((*(iVar28 + 0x80) != 0) && (*(iVar28 + 0x80) < 0xfffffffffffff001)) &&
                           ((*(iVar28 + 0x178) != 0 && (iVar28 != iVar21)))) {
                            if (4 < *(iVar28 + 0x180)) goto code_r0x08007394;
                            iVar11 = iVar11 + *(iVar28 + 0x18c) *
                                              *(iVar28 + uVar14 * 4 + 0x108 + *(iVar28 + 0x180) * 0x14);
                        }
                        uVar22 = uVar22 - 1;
                        iVar28 = iVar28 + 400;
                    } while (uVar22 != 0);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000ff1,"high","mmrm_sw_calculate_total_current",iVar11);
                }
                uVar16 = 0;
                iVar11 = iVar11 + iVar33;
                goto code_r0x080067a8;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x80021c1,"err ","mmrm_sw_calculate_total_current");
            }
code_r0x08006d88:
            uVar23 = 0xffffffea;
code_r0x08006d8c:
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001eaa,"err ","mmrm_sw_clk_client_setval",*piVar18,*(param_1 + 0x80));
            }
            mutex_unlock(param_1);
            goto code_r0x08006b14;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001334,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),param_4);
        }
        iVar28 = iVar26 + uVar24 * 400;
        if (uVar5 != *(iVar28 + 0x184)) {
            mutex_lock(param_1);
            *(iVar28 + 0x184) = uVar5;
            mutex_unlock(param_1);
            if (uVar5 == 0) {
code_r0x08006ab8:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80013bb,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),param_4);
                }
                iVar11 = clk_set_rate(*puVar30,param_4);
                if (iVar11 != 0) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar23 = 0x8000e3f;
                        goto code_r0x08006af0;
                    }
                    goto code_r0x08006b10;
                }
            }
        }
code_r0x08006b94:
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001580,"high","mmrm_sw_clk_client_setval",param_4,iVar21);
        }
        uVar23 = 0;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_70) {
        return uVar23;
    }
    __stack_chk_fail();
code_r0x08007394:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8007398);
    (*pcVar9)();
}


// ===== sym.init_module.cfi_jt @ 0x08003428 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8000873,"high","msm_mmrm_init");
        }
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001dbf,"err ","msm_mmrm_init");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","msm_mmrm_init",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.mmrm_client_get_clk_count.cfi_jt @ 0x08003430 (size 8) =====

uint sym.mmrm_client_get_clk_count.cfi_jt(void)

{
    if (_segment.ehdr != -0x205) {
        return *(*(_segment.ehdr + 0x60) + 0x48);
    }
    return 0;
}


// ===== sym.mmrm_client_set_value_in_range.cfi_jt @ 0x08003438 (size 8) =====

int sym.mmrm_client_set_value_in_range.cfi_jt(int *param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == NULL) || (param_2 == 0)) || (param_3 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800121d,"err ","mmrm_client_set_value_in_range",param_1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*param_1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_setval_inrange(*(iVar1 + 0x60),param_1,param_2,param_3);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001d8a,"err ","mmrm_client_set_value_in_range");
                    }
                    goto code_r0x08003ab0;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_set_value_in_range");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_set_value_in_range");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_set_value_in_range");
        }
        iVar2 = 0;
    }
code_r0x08003ab0:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_set_value_in_range",iVar2);
    }
    return iVar2;
}


// ===== sym.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003440 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080040a4)

int sym.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *arg2;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
        _printk(0x8000bb0,"high","msm_mmrm_probe");
    }
    if (param_1 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80012a9,"err ","msm_mmrm_probe");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return -0x16;
        }
        pcVar4 = "msm_mmrm_probe";
        iVar2 = -0x16;
    }
    else {
        iVar2 = of_device_is_compatible(*(param_1 + 0x300),0x800162d);
        if (iVar2 == 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
                return -0x16;
            }
            _printk(0x8000a84,"err ","msm_mmrm_probe");
            return -0x16;
        }
        _segment.ehdr = kmem_cache_alloc_trace(_simple_open,0xdc0,0x78);
        if (_segment.ehdr == NULL) {
            iVar2 = -0xc;
            _segment.ehdr = NULL;
        }
        else {
            iVar2 = sym.mmrm_count_clk_clients_frm_dt(param_1);
            bVar1 = (_segment.ehdr & 0x10002) == 0x10002;
            if (iVar2 == 0) {
                if (bVar1) {
                    _printk(0x800056c,"high","msm_mmrm_probe_init");
                }
                *(_segment.ehdr + 1) = 0;
                return 0;
            }
            if (bVar1) {
                _printk(0x8000f24,"high","msm_mmrm_probe_init",iVar2);
            }
            *(_segment.ehdr + 1) = 1;
            iVar3 = sym.mmrm_get_platform_data(param_1 + 0x10);
            *_segment.ehdr = iVar3;
            if (*_segment.ehdr == 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80012d1,"err ","msm_mmrm_probe_init");
                    iVar2 = -0x16;
                }
                else {
                    iVar2 = -0x16;
                }
            }
            else {
                iVar3 = sym.msm_mmrm_debugfs_init();
                arg2 = _segment.ehdr;
                _segment.ehdr[0xe] = iVar3;
                if ((iVar3 == 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                    _printk(0x8001747,"err ","msm_mmrm_probe_init");
                    arg2 = _segment.ehdr;
                }
                *(param_1 + 0xa8) = arg2;
                iVar2 = sym.mmrm_read_platform_resources(param_1,arg2);
                if (iVar2 == 0) {
                    iVar2 = sym.mmrm_init(_segment.ehdr);
                    if (iVar2 == 0) {
                        iVar2 = sysfs_create_group(param_1 + 0x10,obj.mmrm_fs_attrs_group);
                        if ((iVar2 != 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                            _printk(0x80005af,"err ","msm_mmrm_probe_init");
                            return 0;
                        }
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800163b,"err ","msm_mmrm_probe_init");
                    }
                    debugfs_remove(_segment.ehdr[0xe]);
                }
                else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80007db,"err ","msm_mmrm_probe_init");
                }
                sym.mmrm_free_platform_resources(_segment.ehdr);
            }
            kfree(_segment.ehdr);
            _segment.ehdr = 0xfffffffffffffdfb;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return iVar2;
        }
        pcVar4 = "msm_mmrm_probe_init";
    }
    _printk(0x8000781,"err ",pcVar4,iVar2);
    return iVar2;
}


// ===== sym.msm_mmrm_remove.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003448 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004294)

uint sym.msm_mmrm_remove.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80012a9,"err ","msm_mmrm_remove");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","msm_mmrm_remove",0xffffffea);
            return 0xffffffea;
        }
    }
    else {
        _segment.ehdr = *(param_1 + 0xa8);
        if (_segment.ehdr != 0) {
            if (*(_segment.ehdr + 8) != '\0') {
                sysfs_remove_group(param_1 + 0x10,obj.mmrm_fs_attrs_group);
                debugfs_remove(*(_segment.ehdr + 0x70));
                sym.mmrm_deinit(_segment.ehdr);
                sym.mmrm_free_platform_resources(_segment.ehdr);
            }
            iVar1 = _segment.ehdr;
            *(param_1 + 0xa8) = 0;
            kfree(iVar1);
            _segment.ehdr = 0xfffffffffffffdfb;
            return 0;
        }
        _segment.ehdr = 0;
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientE_global_addr @ 0x08003450 (size 8) =====

uint sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientE_global_addr(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001a3f,"err ");
        }
    }
    else {
        if (*(param_2 + 4) < *(param_1 + 0x48)) {
            mutex_lock(param_1);
            iVar3 = *(param_1 + 0x40);
            uVar1 = *(param_2 + 4);
            iVar4 = iVar3 + uVar1 * 400;
            iVar2 = *(iVar4 + 0x188);
            if ((iVar2 == 0) || (iVar2 = iVar2 + -1, *(iVar4 + 0x188) = iVar2, iVar2 == 0)) {
                iVar3 = iVar3 + uVar1 * 400;
                kfree(*(iVar3 + 0x170));
                *(iVar3 + 0x80) = 0;
                *(iVar3 + 0x88) = 0;
                *(iVar3 + 0x90) = 0;
                *(iVar3 + 0x98) = 0;
                *(iVar3 + 0x170) = 0;
                *(iVar3 + 0x178) = 0;
                *(iVar3 + 0x180) = 0;
            }
            mutex_unlock(param_1);
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001a64,"err ","mmrm_sw_clk_client_deregister");
        }
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_deregister",0xffffffea);
    }
    return 0xffffffea;
}


// ===== sym.mmrm_client_get_value.cfi_jt @ 0x08003458 (size 8) =====

int sym.mmrm_client_get_value.cfi_jt(int *param_1,int64_t param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (param_2 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80007a2,"err ","mmrm_client_get_value",param_1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*param_1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_getval(*(iVar1 + 0x60),param_1,param_2);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8000537,"err ","mmrm_client_get_value");
                    }
                    goto code_r0x08003c60;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_get_value");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_get_value");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_get_value");
        }
        iVar2 = 0;
    }
code_r0x08003c60:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_get_value",iVar2);
    }
    return iVar2;
}


// ===== sym.simple_open.cfi_jt @ 0x08003460 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrE_global_addr @ 0x08003468 (size 8) =====

ulong sym.__typeid__ZTSFiP12mmrm_clk_mgrE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x88);
    while (piVar3 != param_1 + 0x88) {
        piVar6 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar6;
    }
    if (param_1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8000610,"err ","mmrm_destroy_sw_clk_mgr");
        }
        uVar5 = 0xffffffea;
    }
    else {
        kfree(*(param_1 + 0x40));
        kfree(param_1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.__typeid__ZTSFiPvE_global_addr @ 0x08003470 (size 8) =====

uint sym.__typeid__ZTSFiPvE_global_addr(int64_t param_1)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    uint16_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int iVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = kmem_cache_alloc_trace(_simple_open,0xdc0,0xa0);
    if (iVar6 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000d65,"err ","mmrm_init_sw_clk_mgr");
        }
    }
    else {
        iVar11 = *(param_1 + 0x50);
        *(iVar6 + 0x38) = param_1;
        iVar7 = __kmalloc(iVar11 * 400,0xdc0);
        *(iVar6 + 0x40) = iVar7;
        if (iVar7 != 0) {
            iVar11 = *(param_1 + 0x50);
            *(iVar6 + 0x48) = iVar11;
            *(iVar6 + 0x4c) = 0;
            *(iVar6 + 0x88) = iVar6 + 0x88;
            *(iVar6 + 0x90) = iVar6 + 0x88;
            if (iVar11 == 0) {
                uVar10 = 0;
            }
            else {
                iVar12 = 0;
                uVar13 = 1;
                iVar14 = 0x18c;
                while( true ) {
                    piVar1 = *(param_1 + 0x48) + iVar12;
                    iVar7 = iVar7 + iVar14;
                    *(iVar7 + -0xec) = piVar1[1] | *piVar1 << 0x10;
                    *(iVar7 + -0xa0) = piVar1[2];
                    *(iVar7 + -0x8c) = piVar1[3];
                    *(iVar7 + -0xdc) = piVar1[4];
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8002366,"high","mmrm_sw_prepare_table");
                    }
                    uVar10 = *(iVar6 + 0x48);
                    if (uVar10 <= uVar13) break;
                    iVar7 = *(iVar6 + 0x40);
                    uVar13 = uVar13 + 1;
                    iVar14 = iVar14 + 400;
                    iVar12 = iVar12 + 0x14;
                }
            }
            uVar2 = *(param_1 + 0x58);
            *(iVar6 + 0x80) = 0;
            uVar4 = *(param_1 + 0x30);
            uVar13 = uVar4;
            *(iVar6 + 0x7c) = uVar2;
            *(iVar6 + 0x78) = uVar4;
            if (uVar4 != 0) {
                uVar8 = 0;
                uVar9 = uVar10;
                do {
                    if (uVar9 != 0) {
                        if (4 < uVar8) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80056bc);
                            (*pcVar5)();
                        }
                        iVar3 = *(param_1 + 0x1c + uVar8 * 4);
                        iVar11 = 0;
                        do {
                            if (*(*(iVar6 + 0x40) + iVar11 * 400 + 0xa0) == iVar3) {
                                piVar1 = iVar6 + 0x50 + uVar8 * 8;
                                *piVar1 = iVar3;
                                uVar13 = *(iVar6 + 0x78);
                                *(piVar1 + 1) = iVar11;
                                break;
                            }
                            iVar11 = iVar11 + 1;
                        } while (uVar10 != iVar11);
                    }
                    uVar8 = uVar8 + 1;
                    if (uVar13 <= uVar8) break;
                    uVar9 = *(iVar6 + 0x48);
                    uVar10 = uVar9;
                } while( true );
            }
            __mutex_init(iVar6,"&sw_clk_mgr->lock",obj.mmrm_init_sw_clk_mgr.__key);
            *(param_1 + 0x60) = iVar6;
            *(iVar6 + 0x30) = *(param_1 + 0x18);
            *(iVar6 + 0x98) = reloc.mmrm_sw_clk_client_register.b648143898d6f8ed64c0dcecf542e514.cfi_jt;
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000c9e,"err ","mmrm_init_sw_clk_mgr",*(param_1 + 0x50));
        }
        kfree(iVar6);
        *(param_1 + 0x60) = 0;
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_init_sw_clk_mgr",0xfffffff4);
    }
    return 0xfffffff4;
}


// ===== sym.mmrm_sysfs_enable_throttle_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003478 (size 8) =====

int64_t sym.mmrm_sysfs_enable_throttle_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",obj.msm_mmrm_enable_throttle_feature);
    _printk(0x8001f75,"mmrm_sysfs_enable_throttle_get",obj.msm_mmrm_enable_throttle_feature);
    return iVar1;
}


// ===== sym.mmrm_sysfs_debug_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003480 (size 8) =====

int64_t sym.mmrm_sysfs_debug_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",_segment.ehdr);
    _printk(0x8001f75,"mmrm_sysfs_debug_get",_segment.ehdr);
    return iVar1;
}


// ===== sym.mmrm_sysfs_allow_multiple_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003488 (size 8) =====

int64_t sym.mmrm_sysfs_allow_multiple_get.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",obj.drv_data);
    _printk(0x8001f75,"mmrm_sysfs_allow_multiple_get",obj.drv_data);
    return iVar1;
}


// ===== sym.dump_clk_res_info_show.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003490 (size 8) =====

int64_t sym.dump_clk_res_info_show.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int iVar3;
    uint *puVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    iVar2 = scnprintf(param_3,0x1000,"threshold: %d\n",*(_segment.ehdr + 0x58));
    iVar3 = 0x1000 - iVar2;
    if (*(iVar1 + 0x50) != 0 && 1 < iVar3) {
        puVar4 = *(iVar1 + 0x48);
        param_3 = param_3 + iVar2;
        uVar5 = 1;
        do {
            iVar2 = scnprintf(param_3,iVar3,"%d\t%d\t% 8d\t%d\t%d\n",*puVar4,puVar4[1],puVar4[2],puVar4[3],
                              puVar4[4]);
            iVar3 = iVar3 - iVar2;
            if (*(iVar1 + 0x50) <= uVar5) break;
            param_3 = param_3 + iVar2;
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 5;
        } while (1 < iVar3);
    }
    return 0x1000 - iVar3;
}


// ===== sym.dump_enabled_client_info_show.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x08003498 (size 8) =====

int64_t sym.dump_enabled_client_info_show.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.mmrm_clk_print_enabled_client_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x60),param_3,0x1000);
    if ((iVar1 == 0) && ((~_segment.ehdr & 0x10001) == 0)) {
        _printk(0x8001303,"err ","dump_enabled_client_info_show");
    }
    return iVar1;
}


// ===== sym.msm_mmrm_debugfs_info_read.d3c56b11a9102df9ebdb7e4e0935e271.cfi_jt @ 0x080034a0 (size 8) =====

ulong sym.msm_mmrm_debugfs_info_read.d3c56b11a9102df9ebdb7e4e0935e271.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x1000);
    if (iVar1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8000941,"err ","msm_mmrm_debugfs_info_read");
        }
        uVar2 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = simple_read_from_buffer(param_2,param_3,param_4,iVar1,0);
        kfree(iVar1);
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFP11mmrm_clientP12mmrm_clk_mgr20mmrm_clk_client_desc20mmrm_client_priorityPvPFiP25mmrm_client_notifier_dataEE_global_addr @ 0x080034a8 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint * sym.__typeid__ZTSFP11mmrm_clientP12mmrm_clk_mgr20mmrm_clk_client_desc20mmrm_client_priorityPvPFiP25mmrm_client_notifier_dataEE_global_addr
                 (int64_t param_1,int *param_2,uint param_3,ulong param_4,ulong param_5)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t arg2;
    uint64_t uVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t *puVar13;
    int64_t iVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int *piVar18;
    int64_t *piVar19;
    int *piVar20;
    ulong *in_x18;
    ulong uVar21;
    uint *puVar22;
    int64_t iVar23;
    ulong *puVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock();
    uVar5 = *(param_1 + 0x48);
    if (uVar5 == *(param_1 + 0x4c)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001cd1,"err ","mmrm_sw_clk_client_register");
        }
    }
    else {
        uVar8 = param_2[1] | *param_2 << 0x10;
        if (uVar5 == 0) {
            uVar25 = 0;
code_r0x08005868:
            if (uVar25 == uVar5) goto code_r0x08005870;
            iVar23 = *(param_1 + 0x40);
            uVar17 = uVar25 & 0xffffffff;
            arg2 = iVar23 + (uVar25 & 0xffffffff) * 400;
            puVar1 = arg2 + 0x170;
            puVar22 = *(arg2 + 0x170);
            if (puVar22 == NULL) {
                iVar11 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar11 = 0x30;
                }
                puVar22 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,8);
                if (puVar22 == NULL) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8000f98,"err ","mmrm_sw_clk_client_register");
                        uVar21 = 0xfffffff4;
                    }
                    else {
                        uVar21 = 0xfffffff4;
                    }
                }
                else {
                    *puVar22 = 0;
                    puVar22[1] = uVar25;
                    iVar11 = iVar23 + uVar17 * 400;
                    *(iVar11 + 0x188) = 1;
                    *puVar1 = puVar22;
                    strlcpy(arg2,param_2 + 2,0x80);
                    uVar21 = *(param_2 + 0x22);
                    puVar24 = iVar11 + 0x80;
                    *puVar24 = uVar21;
                    *(iVar11 + 0x88) = param_3;
                    *(iVar11 + 0x90) = param_4;
                    *(iVar11 + 0x98) = param_5;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x800217a,"high","mmrm_sw_clk_client_register",*(iVar23 + uVar17 * 400 + 0xa0),arg2
                                ,param_3,param_4,param_5);
                        uVar21 = *puVar24;
                    }
                    iVar12 = *(param_1 + 0x38);
                    uVar25 = clk_round_rate(uVar21,1);
                    iVar11 = clk_round_rate(*puVar24,0xffffffffffffffff);
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001b76,"high","mmrm_sw_update_freq",*(iVar23 + uVar17 * 400 + 0xa0),uVar25,
                                iVar11);
                    }
                    iVar16 = iVar23 + uVar17 * 400;
                    *(iVar16 + 0xb8) = uVar25;
                    *(iVar16 + 0xc0) = uVar25;
                    *(iVar16 + 200) = uVar25;
                    puVar13 = iVar16 + 0xd0;
                    *puVar13 = uVar25;
                    *(iVar16 + 0xd8) = uVar25;
                    if (uVar25 < iVar11) {
                        uVar7 = uVar25;
                        do {
                            uVar6 = clk_round_rate(*puVar24,uVar25);
                            if (uVar7 < uVar6) {
                                uVar5 = qcom_clk_get_voltage(*puVar24,uVar6);
                                if (0x180 < uVar5) break;
                                uVar7 = uVar6;
                                if (uVar5 < 0x41) {
                                    iVar14 = 0;
                                }
                                else {
                                    uVar8 = uVar5 - 0x80 >> 6;
                                    uVar5 = uVar8 | uVar5 << 0x1a;
                                    if ((4 < uVar5) || ((0x17U >> (uVar8 & 0x1f) & 1) == 0)) goto code_r0x08005a50;
                                    iVar14 = *(uVar5 * 8 + 0x8002b00);
                                }
                                do {
                                    iVar2 = iVar14 + 1;
                                    *(iVar23 + uVar17 * 400 + 0xb8 + iVar14 * 8) = uVar6;
                                    iVar14 = iVar2;
                                } while (iVar2 != 5);
                            }
code_r0x08005a50:
                            uVar25 = uVar25 + 1000000;
                        } while (uVar25 < iVar11);
                    }
                    piVar20 = iVar23 + uVar17 * 400 + 0xa0;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,**(iVar12 + 0x38),*(iVar16 + 0xb8))
                        ;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x18),
                                *(iVar16 + 0xc0));
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x30),
                                *(iVar16 + 200));
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x48),*puVar13
                               );
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x60),
                                *(iVar16 + 0xd8));
                        uVar5 = *(param_1 + 0x48);
                    }
                    else {
                        uVar5 = *(param_1 + 0x48);
                    }
                    if (uVar5 != 0) {
                        iVar12 = *(param_1 + 0x38);
                        iVar11 = 0;
                        piVar18 = *(param_1 + 0x40) + 0xa0;
                        do {
                            if (*piVar20 == *piVar18) {
                                if (*(iVar12 + 0x48) + iVar11 != 0) {
                                    iVar11 = *(iVar12 + 0x48) + iVar11;
                                    uVar5 = *(iVar11 + 8);
                                    uVar8 = *(iVar11 + 0xc);
                                    iVar23 = iVar23 + uVar17 * 400;
                                    uVar25 = *puVar13;
                                    iVar11 = 0x10;
                                    piVar19 = iVar23 + 0xb8;
                                    piVar20 = iVar23 + 0xf4;
                                    piVar18 = iVar23 + 0x118;
                                    do {
                                        puVar15 = *(iVar12 + 0x38) + iVar11;
                                        iVar11 = iVar11 + 0x18;
                                        uVar3 = puVar15[-1];
                                        uVar4 = *puVar15;
                                        uVar17 = 0;
                                        if (uVar25 != 0) {
                                            uVar17 = (*piVar19 *
                                                      ((uVar5 & 0xffff0000) + ((uVar5 & 0xffff) * 100 & 0x7f0000) / 100)
                                                     & 0xffffffffffff0000) / uVar25;
                                        }
                                        uVar17 = ((uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100) *
                                                 uVar17;
                                        uVar7 = ((uVar4 & 0xffff0000) + ((uVar4 & 0xffff) * 100 & 0x7f0000) / 100) *
                                                ((uVar8 & 0xffff0000) + ((uVar8 & 0xffff) * 100 & 0x7f0000) / 100);
                                        iVar9 = uVar17 >> 0x20;
                                        if (0x7ffe0000 < (uVar17 & 0xffff0000)) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        iVar10 = uVar7 >> 0x20;
                                        if (0x7ffe0000 < (uVar7 & 0xffff0000)) {
                                            iVar10 = iVar10 + 1;
                                        }
                                        piVar20[-5] = iVar9;
                                        uVar6 = uVar7 + (uVar17 & 0xffffffffffff0000) & 0xffffffffffff0000;
                                        *piVar20 = iVar10;
                                        uVar3 = *(*(iVar12 + 0x38) + 8);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-4] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x20);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-3] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x38);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-2] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x50);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-1] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x68);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        *piVar18 = iVar9;
                                        piVar19 = piVar19 + 1;
                                        piVar20 = piVar20 + 1;
                                        piVar18 = piVar18 + 5;
                                    } while (iVar11 != 0x88);
                                    goto code_r0x08005918;
                                }
                                break;
                            }
                            iVar11 = iVar11 + 0x14;
                            piVar18 = piVar18 + 100;
                        } while (uVar5 * 0x14 - iVar11 != 0);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001fc0,"high","mmrm_sw_update_curr",*piVar20);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x80023b1,"err ","mmrm_sw_clk_client_register",*piVar20);
                    }
                    kfree(puVar22);
                    uVar21 = 0xffffffea;
                }
                *puVar1 = 0;
                iVar23 = iVar23 + uVar17 * 400;
                *(iVar23 + 0x80) = 0;
                *(iVar23 + 0x88) = 0;
                *(iVar23 + 0x90) = 0;
                *(iVar23 + 0x98) = 0;
                goto code_r0x08005884;
            }
            if (obj.drv_data != 0x0) {
                iVar11 = iVar23 + uVar17 * 400;
                *(iVar11 + 0x188) = *(iVar11 + 0x188) + 1;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8001665,"high","mmrm_sw_clk_client_register",*(iVar23 + uVar17 * 400 + 0xa0));
                    puVar22 = *puVar1;
                }
code_r0x08005918:
                sym.mmrm_sw_print_client_data(param_1 + 0x38,arg2);
                mutex_unlock(param_1);
                return puVar22;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08005880;
            uVar21 = 0x800110d;
            uVar8 = *(iVar23 + uVar17 * 400 + 0xa0);
        }
        else {
            uVar25 = 0;
            puVar15 = *(param_1 + 0x40) + 0xa0;
            do {
                if (uVar8 == *puVar15) goto code_r0x08005868;
                uVar25 = uVar25 + 1;
                puVar15 = puVar15 + 100;
            } while (uVar5 != uVar25);
code_r0x08005870:
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08005880;
            uVar21 = 0x800127b;
        }
        _printk(uVar21,"err ","mmrm_sw_clk_client_register",uVar8);
    }
code_r0x08005880:
    uVar21 = 0xffffffea;
code_r0x08005884:
    mutex_unlock(param_1);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_register",uVar21);
    }
    return NULL;
}


// ===== sym.mmrm_sysfs_enable_throttle_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x080034b0 (size 8) =====

int64_t sym.mmrm_sysfs_enable_throttle_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (param_3 == 0) {
        puVar3 = NULL;
    }
    else {
        puVar3 = &uStack_2c;
        uVar4 = 0x10;
        if ((*(param_3 + 1) & 0xdf) != 0x58) {
            uVar4 = 10;
        }
        iVar2 = kstrtouint(param_3,uVar4,puVar3);
        if (iVar2 != 0) goto code_r0x08004488;
    }
    obj.msm_mmrm_enable_throttle_feature = SUB41(uStack_2c,0);
code_r0x08004488:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.mmrm_sysfs_allow_multiple_get;
        iVar2 = scnprintf(puVar3,0x1000,"0x%x\n",obj.drv_data);
        _printk(0x8001f75,"mmrm_sysfs_allow_multiple_get",obj.drv_data);
        return iVar2;
    }
    return param_4;
}


// ===== sym.mmrm_sysfs_allow_multiple_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x080034b8 (size 8) =====

int64_t sym.mmrm_sysfs_allow_multiple_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint *arg2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (param_3 == 0) {
        arg2 = NULL;
    }
    else {
        arg2 = &uStack_2c;
        uVar3 = 0x10;
        if ((*(param_3 + 1) & 0xdf) != 0x58) {
            uVar3 = 10;
        }
        iVar2 = kstrtouint(param_3,uVar3);
        if (iVar2 != 0) goto code_r0x0800458c;
    }
    obj.drv_data = SUB41(uStack_2c,0);
code_r0x0800458c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.dump_enabled_client_info_show;
        iVar2 = sym.mmrm_clk_print_enabled_client_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x60),arg2,0x1000);
        if ((iVar2 == 0) && ((~_segment.ehdr & 0x10001) == 0)) {
            _printk(0x8001303,"err ","dump_enabled_client_info_show");
        }
        return iVar2;
    }
    return param_4;
}


// ===== sym.mmrm_sysfs_debug_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt @ 0x080034c0 (size 8) =====

int64_t sym.mmrm_sysfs_debug_set.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (param_3 == 0) {
        puVar3 = NULL;
    }
    else {
        puVar3 = &uStack_2c;
        uVar4 = 0x10;
        if ((*(param_3 + 1) & 0xdf) != 0x58) {
            uVar4 = 10;
        }
        iVar2 = kstrtouint(param_3,uVar4,puVar3);
        if (iVar2 != 0) goto code_r0x08004384;
    }
    _segment.ehdr = uStack_2c;
code_r0x08004384:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.mmrm_sysfs_enable_throttle_get;
        iVar2 = scnprintf(puVar3,0x1000,"0x%x\n",obj.msm_mmrm_enable_throttle_feature);
        _printk(0x8001f75,"mmrm_sysfs_enable_throttle_get",obj.msm_mmrm_enable_throttle_feature);
        return iVar2;
    }
    return param_4;
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP21mmrm_client_res_valueE_global_addr @ 0x080034c8 (size 8) =====

uint sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP21mmrm_client_res_valueE_global_addr
               (int64_t param_1,int64_t param_2,ulong *param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08007490;
        uVar2 = 0x8001a3f;
    }
    else {
        uVar1 = *(param_2 + 4);
        if (*(param_1 + 0x48) <= uVar1) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001a64,"err ","mmrm_sw_clk_client_getval");
            }
            goto code_r0x08007490;
        }
        if (*(*(param_1 + 0x40) + uVar1 * 400 + 0x80) != 0) {
            iVar3 = *(param_1 + 0x40) + uVar1 * 400;
            *param_3 = *(iVar3 + 0x178);
            param_3[1] = *(iVar3 + 0x178);
            param_3[2] = *(iVar3 + 0x178);
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08007490;
        uVar2 = 0x8001e7d;
    }
    _printk(uVar2,"err ");
code_r0x08007490:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_getval",0xffffffea);
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFiP12mmrm_clk_mgrPciE_global_addr @ 0x080034d0 (size 8) =====

int sym.__typeid__ZTSFiP12mmrm_clk_mgrPciE_global_addr(int64_t param_1,int64_t param_2,int param_3)

{
    bool bVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = scnprintf(param_2,param_3,"  csid    clk_rate     vdd_level   cur_ma   num_hw_blocks\n");
    uVar8 = param_3 - uVar3;
    if ((param_1 != -0x38) && (param_1 != -0x7c)) {
        uVar6 = *(param_1 + 0x48);
        param_2 = param_2 + uVar3;
        bVar1 = 1 < uVar8;
        if ((*(param_1 + 0x48) != 0) && (1 < uVar8)) {
            uVar9 = 1;
            iVar10 = 0x18c;
            do {
                iVar7 = *(param_1 + 0x40);
                if ((iVar7 + iVar10 != 0x18c) && (iVar5 = *(iVar7 + iVar10 + -0x14), iVar5 != 0)) {
                    uVar3 = *(iVar7 + iVar10 + -0xc);
                    if ((4 < uVar3) || (4 < *(param_1 + 0x84))) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800763c);
                        (*pcVar2)();
                    }
                    uVar3 = scnprintf(param_2,uVar8,"0x%x    %zu   %zu   %zu   %zu\n",*(iVar7 + iVar10 + -0xec),
                                      iVar5,uVar3,
                                      *(iVar7 + iVar10) *
                                      *(iVar7 + uVar3 * 0x14 + *(param_1 + 0x84) * 4 + iVar10 + -0x84));
                    uVar6 = *(param_1 + 0x48);
                    uVar8 = uVar8 - uVar3;
                    param_2 = param_2 + uVar3;
                }
                bVar1 = 1 < uVar8;
                if (uVar6 <= uVar9) break;
                uVar9 = uVar9 + 1;
                iVar10 = iVar10 + 400;
            } while (1 < uVar8);
        }
        if (bVar1) {
            iVar4 = scnprintf(param_2,uVar8,"aggreg_val(%zu) aggreg_level(%zu)\n",*(param_1 + 0x80),
                              *(param_1 + 0x84));
            uVar8 = uVar8 - iVar4;
        }
    }
    return param_3 - uVar8;
}


// ===== sym.mmrm_client_check_scaling_supported @ 0x080034d8 (size 228) =====

ulong sym.mmrm_client_check_scaling_supported(int param_1)

{
    ulong uVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == -0x205) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_check_scaling_supported");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return 0;
        }
        uVar1 = 0x8000b8f;
        pcVar2 = "err ";
    }
    else {
        if ((param_1 != 0) || (*(CONCAT44(*0x8000004,_segment.ehdr) + 8) != '\0')) {
            return 1;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
            return 0;
        }
        uVar1 = 0x80009f6;
        pcVar2 = "high";
    }
    _printk(uVar1,pcVar2,"mmrm_client_check_scaling_supported");
    return 0;
}


// ===== sym.mmrm_client_register @ 0x080035bc (size 320) =====

int64_t sym.mmrm_client_register(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar1 = 0x8000a28;
code_r0x080036e4:
            _printk(uVar1,"err ","mmrm_client_register");
        }
    }
    else {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar2 == -0x205) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar1 = 0x8001058;
                goto code_r0x080036e4;
            }
        }
        else if (*arg1 == 0) {
            if (*(iVar2 + 8) == '\0') {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
                    return 0;
                }
                uVar1 = 0x80009f6;
                pcVar3 = "high";
                goto code_r0x080036cc;
            }
            iVar2 = sym.mmrm_clk_client_register(*(iVar2 + 0x60));
            if (iVar2 != 0) {
                return iVar2;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar1 = 0x8000a54;
                goto code_r0x080036e4;
            }
        }
        else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001b49,"err ","mmrm_client_register");
        }
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
        return 0;
    }
    uVar1 = 0x8000b8f;
    pcVar3 = "err ";
code_r0x080036cc:
    _printk(uVar1,pcVar3,"mmrm_client_register");
    return 0;
}


// ===== sym.mmrm_client_deregister @ 0x080036fc (size 376) =====

int sym.mmrm_client_deregister(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = -0x16;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
        uVar3 = 0x8000c37;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 == -0x205) {
            iVar2 = 0;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
            uVar3 = 0x8001058;
        }
        else {
            if (*arg1 != 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x8001b49,"err ","mmrm_client_deregister");
                }
                return 0;
            }
            if (*(iVar1 + 8) == '\0') {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) {
                    return 0;
                }
                _printk(0x80009f6,"high","mmrm_client_deregister");
                return 0;
            }
            iVar2 = sym.mmrm_clk_client_deregister(*(iVar1 + 0x60),arg1);
            if (iVar2 == 0) {
                return 0;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08003780;
            uVar3 = 0x8000505;
        }
    }
    _printk(uVar3,"err ","mmrm_client_deregister");
code_r0x08003780:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_deregister",iVar2);
    }
    return iVar2;
}


// ===== sym.mmrm_client_set_value @ 0x08003874 (size 436) =====

int sym.mmrm_client_set_value(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001c8a,"err ","mmrm_client_set_value",arg1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*arg1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_setval(*(iVar1 + 0x60),arg1,arg2,arg3);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001d8a,"err ","mmrm_client_set_value");
                    }
                    goto code_r0x080038f4;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_set_value");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_set_value");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_set_value");
        }
        iVar2 = 0;
    }
code_r0x080038f4:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_set_value",iVar2);
    }
    return iVar2;
}


// ===== sym.mmrm_client_set_value_in_range @ 0x08003a28 (size 440) =====

int sym.mmrm_client_set_value_in_range(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800121d,"err ","mmrm_client_set_value_in_range",arg1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*arg1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_setval_inrange(*(iVar1 + 0x60),arg1,arg2,arg3);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001d8a,"err ","mmrm_client_set_value_in_range");
                    }
                    goto code_r0x08003ab0;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_set_value_in_range");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_set_value_in_range");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_set_value_in_range");
        }
        iVar2 = 0;
    }
code_r0x08003ab0:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_set_value_in_range",iVar2);
    }
    return iVar2;
}


// ===== sym.mmrm_client_get_value @ 0x08003be0 (size 428) =====

int sym.mmrm_client_get_value(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80007a2,"err ","mmrm_client_get_value",arg1);
        }
        iVar2 = -0x16;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar1 != -0x205) {
            if (*arg1 == 0) {
                if (*(iVar1 + 8) != '\0') {
                    iVar2 = sym.mmrm_clk_client_getval(*(iVar1 + 0x60),arg1,arg2);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8000537,"err ","mmrm_client_get_value");
                    }
                    goto code_r0x08003c60;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80009f6,"high","mmrm_client_get_value");
                }
            }
            else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001b49,"err ","mmrm_client_get_value");
            }
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001058,"err ","mmrm_client_get_value");
        }
        iVar2 = 0;
    }
code_r0x08003c60:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_client_get_value",iVar2);
    }
    return iVar2;
}


// ===== sym.mmrm_client_get_clk_count @ 0x08003d8c (size 48) =====

uint sym.mmrm_client_get_clk_count(int64_t arg1)

{
    if (_segment.ehdr != -0x205) {
        return *(*(_segment.ehdr + 0x60) + 0x48);
    }
    return 0;
}


// ===== sym.msm_mmrm_probe @ 0x08003dbc (size 952) =====

//WARNING: Removing unreachable block (ram,0x080040a4)

int sym.msm_mmrm_probe(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *arg2;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
        _printk(0x8000bb0,"high","msm_mmrm_probe");
    }
    if (arg1 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80012a9,"err ","msm_mmrm_probe");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return -0x16;
        }
        pcVar4 = "msm_mmrm_probe";
        iVar2 = -0x16;
    }
    else {
        iVar2 = of_device_is_compatible(*(arg1 + 0x300),0x800162d);
        if (iVar2 == 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
                return -0x16;
            }
            _printk(0x8000a84,"err ","msm_mmrm_probe");
            return -0x16;
        }
        _segment.ehdr = kmem_cache_alloc_trace(_simple_open,0xdc0,0x78);
        if (_segment.ehdr == NULL) {
            iVar2 = -0xc;
            _segment.ehdr = NULL;
        }
        else {
            iVar2 = sym.mmrm_count_clk_clients_frm_dt(arg1);
            bVar1 = (_segment.ehdr & 0x10002) == 0x10002;
            if (iVar2 == 0) {
                if (bVar1) {
                    _printk(0x800056c,"high","msm_mmrm_probe_init");
                }
                *(_segment.ehdr + 1) = 0;
                return 0;
            }
            if (bVar1) {
                _printk(0x8000f24,"high","msm_mmrm_probe_init",iVar2);
            }
            *(_segment.ehdr + 1) = 1;
            iVar3 = sym.mmrm_get_platform_data(arg1 + 0x10);
            *_segment.ehdr = iVar3;
            if (*_segment.ehdr == 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80012d1,"err ","msm_mmrm_probe_init");
                    iVar2 = -0x16;
                }
                else {
                    iVar2 = -0x16;
                }
            }
            else {
                iVar3 = sym.msm_mmrm_debugfs_init();
                arg2 = _segment.ehdr;
                _segment.ehdr[0xe] = iVar3;
                if ((iVar3 == 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                    _printk(0x8001747,"err ","msm_mmrm_probe_init");
                    arg2 = _segment.ehdr;
                }
                *(arg1 + 0xa8) = arg2;
                iVar2 = sym.mmrm_read_platform_resources(arg1,arg2);
                if (iVar2 == 0) {
                    iVar2 = sym.mmrm_init(_segment.ehdr);
                    if (iVar2 == 0) {
                        iVar2 = sysfs_create_group(arg1 + 0x10,obj.mmrm_fs_attrs_group);
                        if ((iVar2 != 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                            _printk(0x80005af,"err ","msm_mmrm_probe_init");
                            return 0;
                        }
                        return 0;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800163b,"err ","msm_mmrm_probe_init");
                    }
                    debugfs_remove(_segment.ehdr[0xe]);
                }
                else if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80007db,"err ","msm_mmrm_probe_init");
                }
                sym.mmrm_free_platform_resources(_segment.ehdr);
            }
            kfree(_segment.ehdr);
            _segment.ehdr = 0xfffffffffffffdfb;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
            return iVar2;
        }
        pcVar4 = "msm_mmrm_probe_init";
    }
    _printk(0x8000781,"err ",pcVar4,iVar2);
    return iVar2;
}


// ===== sym.msm_mmrm_remove @ 0x08004174 (size 320) =====

//WARNING: Removing unreachable block (ram,0x08004294)

uint sym.msm_mmrm_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80012a9,"err ","msm_mmrm_remove");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","msm_mmrm_remove",0xffffffea);
            return 0xffffffea;
        }
    }
    else {
        _segment.ehdr = *(arg1 + 0xa8);
        if (_segment.ehdr != 0) {
            if (*(_segment.ehdr + 8) != '\0') {
                sysfs_remove_group(arg1 + 0x10,obj.mmrm_fs_attrs_group);
                debugfs_remove(*(_segment.ehdr + 0x70));
                sym.mmrm_deinit(_segment.ehdr);
                sym.mmrm_free_platform_resources(_segment.ehdr);
            }
            iVar1 = _segment.ehdr;
            *(arg1 + 0xa8) = 0;
            kfree(iVar1);
            _segment.ehdr = 0xfffffffffffffdfb;
            return 0;
        }
        _segment.ehdr = 0;
    }
    return 0xffffffea;
}


// ===== sym.mmrm_sysfs_debug_get @ 0x080042b4 (size 100) =====

int64_t sym.mmrm_sysfs_debug_get(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",_segment.ehdr);
    _printk(0x8001f75,"mmrm_sysfs_debug_get",_segment.ehdr);
    return iVar1;
}


// ===== sym.mmrm_sysfs_debug_set @ 0x08004318 (size 160) =====

int64_t sym.mmrm_sysfs_debug_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (arg2 == 0) {
        puVar3 = NULL;
    }
    else {
        puVar3 = &uStack_2c;
        uVar4 = 0x10;
        if ((*(arg2 + 1) & 0xdf) != 0x58) {
            uVar4 = 10;
        }
        arg1 = kstrtouint(arg2,uVar4,puVar3);
        noname_1 = extraout_q0;
        if (arg1 != 0) goto code_r0x08004384;
    }
    _segment.ehdr = uStack_2c;
code_r0x08004384:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail(noname_1,arg1);
        *extraout_x18 = sym.mmrm_sysfs_enable_throttle_get;
        iVar2 = scnprintf(puVar3,0x1000,"0x%x\n",obj.msm_mmrm_enable_throttle_feature);
        _printk(0x8001f75,"mmrm_sysfs_enable_throttle_get",obj.msm_mmrm_enable_throttle_feature);
        return iVar2;
    }
    return arg3;
}


// ===== sym.mmrm_sysfs_enable_throttle_get @ 0x080043b8 (size 100) =====

int64_t sym.mmrm_sysfs_enable_throttle_get(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",obj.msm_mmrm_enable_throttle_feature);
    _printk(0x8001f75,"mmrm_sysfs_enable_throttle_get",obj.msm_mmrm_enable_throttle_feature);
    return iVar1;
}


// ===== sym.mmrm_sysfs_enable_throttle_set @ 0x0800441c (size 160) =====

int64_t sym.mmrm_sysfs_enable_throttle_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint *puVar3;
    uint uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (arg2 == 0) {
        puVar3 = NULL;
    }
    else {
        puVar3 = &uStack_2c;
        uVar4 = 0x10;
        if ((*(arg2 + 1) & 0xdf) != 0x58) {
            uVar4 = 10;
        }
        arg1 = kstrtouint(arg2,uVar4,puVar3);
        noname_1 = extraout_q0;
        if (arg1 != 0) goto code_r0x08004488;
    }
    obj.msm_mmrm_enable_throttle_feature = SUB41(uStack_2c,0);
code_r0x08004488:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail(noname_1,arg1);
        *extraout_x18 = sym.mmrm_sysfs_allow_multiple_get;
        iVar2 = scnprintf(puVar3,0x1000,"0x%x\n",obj.drv_data);
        _printk(0x8001f75,"mmrm_sysfs_allow_multiple_get",obj.drv_data);
        return iVar2;
    }
    return arg3;
}


// ===== sym.mmrm_sysfs_allow_multiple_get @ 0x080044bc (size 100) =====

int64_t sym.mmrm_sysfs_allow_multiple_get(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",obj.drv_data);
    _printk(0x8001f75,"mmrm_sysfs_allow_multiple_get",obj.drv_data);
    return iVar1;
}


// ===== sym.mmrm_sysfs_allow_multiple_set @ 0x08004520 (size 160) =====

int64_t sym.mmrm_sysfs_allow_multiple_set(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint *arg2_00;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    if (arg2 == 0) {
        arg2_00 = NULL;
    }
    else {
        arg2_00 = &uStack_2c;
        uVar3 = 0x10;
        if ((*(arg2 + 1) & 0xdf) != 0x58) {
            uVar3 = 10;
        }
        arg1 = kstrtouint(arg2,uVar3);
        noname_1 = extraout_q0;
        if (arg1 != 0) goto code_r0x0800458c;
    }
    obj.drv_data = SUB41(uStack_2c,0);
code_r0x0800458c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail(noname_1,arg1);
        *extraout_x18 = sym.dump_enabled_client_info_show;
        iVar2 = sym.mmrm_clk_print_enabled_client_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x60),arg2_00,0x1000);
        if ((iVar2 == 0) && ((~_segment.ehdr & 0x10001) == 0)) {
            _printk(0x8001303,"err ","dump_enabled_client_info_show");
        }
        return iVar2;
    }
    return arg3;
}


// ===== sym.dump_enabled_client_info_show @ 0x080045c0 (size 128) =====

int64_t sym.dump_enabled_client_info_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.mmrm_clk_print_enabled_client_info(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x60),arg1,0x1000);
    if ((iVar1 == 0) && ((~_segment.ehdr & 0x10001) == 0)) {
        _printk(0x8001303,"err ","dump_enabled_client_info_show");
    }
    return iVar1;
}


// ===== sym.dump_clk_res_info_show @ 0x08004640 (size 208) =====

int64_t sym.dump_clk_res_info_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int iVar3;
    uint *puVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    iVar2 = scnprintf(arg1,0x1000,"threshold: %d\n",*(_segment.ehdr + 0x58));
    iVar3 = 0x1000 - iVar2;
    if (*(iVar1 + 0x50) != 0 && 1 < iVar3) {
        puVar4 = *(iVar1 + 0x48);
        arg1 = arg1 + iVar2;
        uVar5 = 1;
        do {
            iVar2 = scnprintf(arg1,iVar3,"%d\t%d\t% 8d\t%d\t%d\n",*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4]
                             );
            iVar3 = iVar3 - iVar2;
            if (*(iVar1 + 0x50) <= uVar5) break;
            arg1 = arg1 + iVar2;
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 5;
        } while (1 < iVar3);
    }
    return 0x1000 - iVar3;
}


// ===== sym.__cfi_check_fail @ 0x08004710 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004754

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
    //switch table (4 cases) at 0x8000500
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004768);
    (*pcVar1)();
}


// ===== sym.mmrm_get_platform_data @ 0x08004768 (size 56) =====

ulong sym.mmrm_get_platform_data(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_match_node(obj.mmrm_dt_match,*(arg1 + 0x2f0));
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = *(iVar1 + 0xc0);
    }
    return uVar2;
}


// ===== sym.mmrm_init @ 0x080047a0 (size 192) =====

int sym.mmrm_init(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.mmrm_get_clk_mgr_ops(arg1);
    if (iVar1 == 0) {
        pcVar2 = **(arg1 + 0x68);
        if (pcVar2 != sym.__typeid__ZTSFiPvE_global_addr) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar2,0x80003c0);
        }
        iVar1 = (*pcVar2)(arg1);
        if (iVar1 == 0) {
            return 0;
        }
    }
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x80014f4,"err ","mmrm_init");
    }
    return iVar1;
}


// ===== sym.mmrm_deinit @ 0x08004860 (size 252) =====

int sym.mmrm_deinit(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x68) == 0)) || (pcVar2 = *(*(arg1 + 0x68) + 8), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80020f4,"err ","mmrm_deinit");
        }
        iVar1 = -0x16;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12mmrm_clk_mgrE_global_addr) {
            __cfi_slowpath_diag(0x2bc98faf45c6e3ec,pcVar2,0x80003e0);
        }
        iVar1 = (*pcVar2)(*(arg1 + 0x60));
        if (iVar1 != 0) {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x800187c,"err ","mmrm_deinit");
            }
            *(arg1 + 0x60) = 0;
        }
    }
    return iVar1;
}


// ===== sym.mmrm_count_clk_clients_frm_dt @ 0x0800495c (size 192) =====

uint64_t sym.mmrm_count_clk_clients_frm_dt(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint *puVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *puVar10;
    uint uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_28 = *(iVar13 + 0x5e0);
    uStack_2c = 0;
    of_find_property(*(arg1 + 0x300),"mmrm-client-info",&uStack_2c);
    uVar12 = uStack_2c;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
        _printk(0x80016f0,"high","mmrm_count_clk_clients_frm_dt",uVar12 / 0x14);
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_28) {
        return uVar12 / 0x14;
    }
    auVar16 = __stack_chk_fail();
    puVar10 = auVar16._8_8_;
    *extraout_x18 = sym.mmrm_read_platform_resources;
    pcStack_88 = sym.mmrm_read_platform_resources;
    iVar13 = sp_el0;
    iStack_98 = *(iVar13 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffe0;
    if (*(auVar16._0_8_ + 0x300) == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x800151e,"err ","mmrm_read_platform_resources");
        }
        uVar7 = 0xffffffea;
    }
    else {
        piVar15 = *puVar10;
        puVar10[2] = auVar16._0_8_;
        uVar12 = *(piVar15 + 2);
        if (0 < *(piVar15 + 2)) {
            iVar13 = *piVar15;
            do {
                iVar6 = strcmp(iVar13,"qcom,mmrm_clk_mgr_scheme");
                if (iVar6 == 0) {
                    uVar11 = *(iVar13 + 0x80);
                    goto code_r0x08004ac0;
                }
                iVar13 = iVar13 + 0x84;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        uVar11 = 0;
code_r0x08004ac0:
        *(puVar10 + 3) = uVar11;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001544,"high","mmrm_read_clk_pltfrm_rsrc_frm_drv_data");
        }
        *(puVar10 + 6) = *(piVar15 + 0x14);
        if (((((*(piVar15 + 0x14) != 0) &&
              (*(puVar10 + 0x1c) = piVar15[1][1] | *piVar15[1] << 0x10, 1 < *(piVar15 + 0x14))) &&
             (*(puVar10 + 4) = *(piVar15[1] + 0xc) | *(piVar15[1] + 8) << 0x10, 2 < *(piVar15 + 0x14))) &&
            ((*(puVar10 + 0x24) = *(piVar15[1] + 0x14) | *(piVar15[1] + 0x10) << 0x10, 3 < *(piVar15 + 0x14) &&
             (*(puVar10 + 5) = *(piVar15[1] + 0x1c) | *(piVar15[1] + 0x18) << 0x10, 4 < *(piVar15 + 0x14))))) &&
           (*(puVar10 + 0x2c) = *(piVar15[1] + 0x24) | *(piVar15[1] + 0x20) << 0x10, 5 < *(piVar15 + 0x14)))
        goto code_r0x0800515c;
        iVar13 = puVar10[2];
        uVar7 = of_property_read_string_helper(*(iVar13 + 0x300),"mm-rail-corners",0,0,0);
        if (uVar7 < 1) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x80018a9,"err ","mmrm_load_mm_rail_corner_table");
            }
            *(puVar10 + 8) = 0;
code_r0x08004cec:
            if (*(puVar10 + 3) == 1) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800231d,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                }
                uVar7 = 0xffffffea;
            }
            else {
                if (*(puVar10 + 3) != 0) {
code_r0x08005114:
                    uVar7 = 0;
                    goto code_r0x08005118;
                }
                iVar13 = puVar10[2];
                uStack_9c = 0;
                iVar6 = of_property_read_variable_u32_array
                                  (*(iVar13 + 0x300),"mmrm-peak-threshold",puVar10 + 0xb,1,0);
                if (iVar6 < 0) {
                    uVar7 = 0xffffffed;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar9 = 0x8001087;
code_r0x08004f7c:
                        _printk(uVar9,"err ","mmrm_load_nom_clk_src_table");
                    }
                }
                else {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x800212d,"high","mmrm_load_nom_clk_src_table",*(puVar10 + 0xb));
                    }
                    of_find_property(*(iVar13 + 0x300),"mmrm-client-info",&uStack_9c);
                    if ((uStack_9c < 0x14) || (uStack_9c % 0x14 != 0)) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                            _printk(0x8002507,"err ","mmrm_load_nom_clk_src_table");
                        }
                        *(puVar10 + 10) = 0;
                        uVar7 = 0;
                        goto code_r0x08005118;
                    }
                    iVar8 = devm_kmalloc(iVar13 + 0x10,uStack_9c,0xdc0);
                    puVar10[9] = iVar8;
                    if (iVar8 != 0) {
                        uVar12 = uStack_9c / 0x14;
                        uVar7 = _segment.ehdr ^ 0xffffffff;
                        *(puVar10 + 10) = uVar12;
                        if ((uVar7 & 0x10002) == 0) {
                            _printk(0x80016f0,"high","mmrm_load_nom_clk_src_table",uVar12 & 0xffffffff);
                        }
                        if (0 < uVar12) {
                            iVar8 = 0;
                            iVar6 = 4;
                            do {
                                iVar1 = puVar10[9] + iVar8;
                                of_property_read_u32_index(*(iVar13 + 0x300),"mmrm-client-info",iVar6 + -4,iVar1);
                                of_property_read_u32_index(*(iVar13 + 0x300),"mmrm-client-info",iVar6 + -3,iVar1 + 4)
                                ;
                                of_property_read_u32_index(*(iVar13 + 0x300),"mmrm-client-info",iVar6 + -2,iVar1 + 8)
                                ;
                                of_property_read_u32_index
                                          (*(iVar13 + 0x300),"mmrm-client-info",iVar6 + -1,iVar1 + 0xc);
                                of_property_read_u32_index(*(iVar13 + 0x300),"mmrm-client-info",iVar6,iVar1 + 0x10);
                                iVar8 = iVar8 + 0x14;
                                iVar6 = iVar6 + 5;
                            } while (((uVar12 & 0xffffffff) + (uVar12 & 0xffffffff) * 4) * 4 - iVar8 != 0);
                            iVar13 = 0;
                            uVar7 = _segment.ehdr;
                            do {
                                if (((uVar7 ^ 0xffffffff) & 0x10002) == 0) {
                                    puVar3 = puVar10[9] + iVar13;
                                    _printk(0x8002013,"high","mmrm_load_nom_clk_src_table",*puVar3,puVar3[1],
                                            puVar3[2],puVar3[3]);
                                    uVar7 = _segment.ehdr;
                                }
                                iVar13 = iVar13 + 0x14;
                            } while ((uVar12 & 0xffffffff) * 0x14 - iVar13 != 0);
                        }
                        goto code_r0x08005114;
                    }
                    uVar7 = 0xfffffff4;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar9 = 0x800197a;
                        goto code_r0x08004f7c;
                    }
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80022e6,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                }
                puVar10[9] = 0;
                *(puVar10 + 10) = 0;
            }
        }
        else {
            uVar12 = uVar7;
            iVar8 = devm_kmalloc(iVar13 + 0x10,(uVar12 + uVar7 * 2) * 8,0xdc0);
            puVar10[7] = iVar8;
            uVar4 = _segment.ehdr;
            if (iVar8 != 0) {
                *(puVar10 + 8) = uVar7;
                if (((uVar4 ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000b51,"high","mmrm_load_mm_rail_corner_table",uVar7);
                }
                uVar14 = 0;
                iVar8 = 0x10;
                do {
                    iVar1 = puVar10[7] + iVar8;
                    of_property_read_string_helper
                              (*(iVar13 + 0x300),"mm-rail-corners",iVar1 + -0x10,1,uVar14 & 0xffffffff);
                    of_property_read_u32_index(*(iVar13 + 0x300),"mm-rail-fact-volt",uVar14 & 0xffffffff,iVar1 + -8);
                    of_property_read_u32_index(*(iVar13 + 0x300),"scaling-fact-dyn",uVar14 & 0xffffffff,iVar1 + -4);
                    of_property_read_u32_index(*(iVar13 + 0x300),"scaling-fact-leak",uVar14 & 0xffffffff,iVar1);
                    uVar14 = uVar14 + 1;
                    iVar8 = iVar8 + 0x18;
                } while (uVar12 != uVar14);
                iVar13 = 0;
                uVar7 = _segment.ehdr;
                do {
                    if (((uVar7 ^ 0xffffffff) & 0x10002) == 0) {
                        puVar2 = puVar10[7] + iVar13;
                        _printk(0x8001785,"high","mmrm_load_mm_rail_corner_table",*puVar2,*(puVar2 + 1),
                                *(puVar2 + 0xc),*(puVar2 + 2));
                        uVar7 = _segment.ehdr;
                    }
                    uVar12 = uVar12 - 1;
                    iVar13 = iVar13 + 0x18;
                } while (uVar12 != 0);
                goto code_r0x08004cec;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8000ac8,"err ","mmrm_load_mm_rail_corner_table");
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) goto code_r0x08005064;
code_r0x08004eec:
                uVar7 = 0xfffffff4;
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08004eec;
code_r0x08005064:
                _printk(0x8000bfd,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                uVar7 = 0xfffffff4;
            }
        }
        uVar4 = _segment.ehdr;
        puVar10[7] = 0;
        *(puVar10 + 8) = 0;
        if (((uVar4 ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800081c,"err ","mmrm_read_platform_resources");
        }
    }
code_r0x08005118:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_98) {
        return uVar7;
    }
    __stack_chk_fail();
code_r0x0800515c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8005160);
    (*pcVar5)();
}


// ===== sym.mmrm_read_platform_resources @ 0x08004a1c (size 1860) =====

uint sym.mmrm_read_platform_resources(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    uint *puVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    if (*(arg1 + 0x300) == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x800151e,"err ","mmrm_read_platform_resources");
        }
        uVar10 = 0xffffffea;
    }
    else {
        piVar13 = *arg2;
        *(arg2 + 0x10) = arg1;
        uVar14 = *(piVar13 + 2);
        if (0 < *(piVar13 + 2)) {
            iVar11 = *piVar13;
            do {
                iVar6 = strcmp(iVar11,"qcom,mmrm_clk_mgr_scheme");
                if (iVar6 == 0) {
                    uVar10 = *(iVar11 + 0x80);
                    goto code_r0x08004ac0;
                }
                iVar11 = iVar11 + 0x84;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        uVar10 = 0;
code_r0x08004ac0:
        *(arg2 + 0x18) = uVar10;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001544,"high","mmrm_read_clk_pltfrm_rsrc_frm_drv_data");
        }
        *(arg2 + 0x30) = *(piVar13 + 0x14);
        if (((((*(piVar13 + 0x14) != 0) &&
              (*(arg2 + 0x1c) = piVar13[1][1] | *piVar13[1] << 0x10, 1 < *(piVar13 + 0x14))) &&
             (*(arg2 + 0x20) = *(piVar13[1] + 0xc) | *(piVar13[1] + 8) << 0x10, 2 < *(piVar13 + 0x14))) &&
            ((*(arg2 + 0x24) = *(piVar13[1] + 0x14) | *(piVar13[1] + 0x10) << 0x10, 3 < *(piVar13 + 0x14) &&
             (*(arg2 + 0x28) = *(piVar13[1] + 0x1c) | *(piVar13[1] + 0x18) << 0x10, 4 < *(piVar13 + 0x14))))) &&
           (*(arg2 + 0x2c) = *(piVar13[1] + 0x24) | *(piVar13[1] + 0x20) << 0x10, 5 < *(piVar13 + 0x14)))
        goto code_r0x0800515c;
        iVar11 = *(arg2 + 0x10);
        uVar7 = of_property_read_string_helper(*(iVar11 + 0x300),"mm-rail-corners",0,0,0);
        if (uVar7 < 1) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x80018a9,"err ","mmrm_load_mm_rail_corner_table");
            }
            *(arg2 + 0x40) = 0;
code_r0x08004cec:
            if (*(arg2 + 0x18) == 1) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800231d,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                }
                uVar10 = 0xffffffea;
            }
            else {
                if (*(arg2 + 0x18) != 0) {
code_r0x08005114:
                    uVar10 = 0;
                    goto code_r0x08005118;
                }
                iVar11 = *(arg2 + 0x10);
                uStack_6c = 0;
                iVar6 = of_property_read_variable_u32_array(*(iVar11 + 0x300),"mmrm-peak-threshold",arg2 + 0x58,1,0)
                ;
                if (iVar6 < 0) {
                    uVar10 = 0xffffffed;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar9 = 0x8001087;
code_r0x08004f7c:
                        _printk(uVar9,"err ","mmrm_load_nom_clk_src_table");
                    }
                }
                else {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x800212d,"high","mmrm_load_nom_clk_src_table",*(arg2 + 0x58));
                    }
                    of_find_property(*(iVar11 + 0x300),"mmrm-client-info",&uStack_6c);
                    if ((uStack_6c < 0x14) || (uStack_6c % 0x14 != 0)) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                            _printk(0x8002507,"err ","mmrm_load_nom_clk_src_table");
                        }
                        *(arg2 + 0x50) = 0;
                        uVar10 = 0;
                        goto code_r0x08005118;
                    }
                    iVar8 = devm_kmalloc(iVar11 + 0x10,uStack_6c,0xdc0);
                    *(arg2 + 0x48) = iVar8;
                    if (iVar8 != 0) {
                        uVar14 = uStack_6c / 0x14;
                        uVar7 = _segment.ehdr ^ 0xffffffff;
                        *(arg2 + 0x50) = uVar14;
                        if ((uVar7 & 0x10002) == 0) {
                            _printk(0x80016f0,"high","mmrm_load_nom_clk_src_table",uVar14 & 0xffffffff);
                        }
                        if (0 < uVar14) {
                            iVar8 = 0;
                            iVar6 = 4;
                            do {
                                iVar1 = *(arg2 + 0x48) + iVar8;
                                of_property_read_u32_index(*(iVar11 + 0x300),"mmrm-client-info",iVar6 + -4,iVar1);
                                of_property_read_u32_index(*(iVar11 + 0x300),"mmrm-client-info",iVar6 + -3,iVar1 + 4)
                                ;
                                of_property_read_u32_index(*(iVar11 + 0x300),"mmrm-client-info",iVar6 + -2,iVar1 + 8)
                                ;
                                of_property_read_u32_index
                                          (*(iVar11 + 0x300),"mmrm-client-info",iVar6 + -1,iVar1 + 0xc);
                                of_property_read_u32_index(*(iVar11 + 0x300),"mmrm-client-info",iVar6,iVar1 + 0x10);
                                iVar8 = iVar8 + 0x14;
                                iVar6 = iVar6 + 5;
                            } while (((uVar14 & 0xffffffff) + (uVar14 & 0xffffffff) * 4) * 4 - iVar8 != 0);
                            iVar11 = 0;
                            uVar7 = _segment.ehdr;
                            do {
                                if (((uVar7 ^ 0xffffffff) & 0x10002) == 0) {
                                    puVar3 = *(arg2 + 0x48) + iVar11;
                                    _printk(0x8002013,"high","mmrm_load_nom_clk_src_table",*puVar3,puVar3[1],
                                            puVar3[2],puVar3[3]);
                                    uVar7 = _segment.ehdr;
                                }
                                iVar11 = iVar11 + 0x14;
                            } while ((uVar14 & 0xffffffff) * 0x14 - iVar11 != 0);
                        }
                        goto code_r0x08005114;
                    }
                    uVar10 = 0xfffffff4;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar9 = 0x800197a;
                        goto code_r0x08004f7c;
                    }
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x80022e6,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                }
                *(arg2 + 0x48) = 0;
                *(arg2 + 0x50) = 0;
            }
        }
        else {
            uVar14 = uVar7;
            iVar8 = devm_kmalloc(iVar11 + 0x10,(uVar14 + uVar7 * 2) * 8,0xdc0);
            *(arg2 + 0x38) = iVar8;
            uVar4 = _segment.ehdr;
            if (iVar8 != 0) {
                *(arg2 + 0x40) = uVar7;
                if (((uVar4 ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000b51,"high","mmrm_load_mm_rail_corner_table",uVar7);
                }
                uVar12 = 0;
                iVar8 = 0x10;
                do {
                    iVar1 = *(arg2 + 0x38) + iVar8;
                    of_property_read_string_helper
                              (*(iVar11 + 0x300),"mm-rail-corners",iVar1 + -0x10,1,uVar12 & 0xffffffff);
                    of_property_read_u32_index(*(iVar11 + 0x300),"mm-rail-fact-volt",uVar12 & 0xffffffff,iVar1 + -8);
                    of_property_read_u32_index(*(iVar11 + 0x300),"scaling-fact-dyn",uVar12 & 0xffffffff,iVar1 + -4);
                    of_property_read_u32_index(*(iVar11 + 0x300),"scaling-fact-leak",uVar12 & 0xffffffff,iVar1);
                    uVar12 = uVar12 + 1;
                    iVar8 = iVar8 + 0x18;
                } while (uVar14 != uVar12);
                iVar11 = 0;
                uVar7 = _segment.ehdr;
                do {
                    if (((uVar7 ^ 0xffffffff) & 0x10002) == 0) {
                        puVar2 = *(arg2 + 0x38) + iVar11;
                        _printk(0x8001785,"high","mmrm_load_mm_rail_corner_table",*puVar2,*(puVar2 + 1),
                                *(puVar2 + 0xc),*(puVar2 + 2));
                        uVar7 = _segment.ehdr;
                    }
                    uVar14 = uVar14 - 1;
                    iVar11 = iVar11 + 0x18;
                } while (uVar14 != 0);
                goto code_r0x08004cec;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8000ac8,"err ","mmrm_load_mm_rail_corner_table");
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) goto code_r0x08005064;
code_r0x08004eec:
                uVar10 = 0xfffffff4;
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08004eec;
code_r0x08005064:
                _printk(0x8000bfd,"err ","mmrm_read_clk_pltfrm_rsrc_frm_dt");
                uVar10 = 0xfffffff4;
            }
        }
        uVar7 = _segment.ehdr;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x40) = 0;
        if (((uVar7 ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800081c,"err ","mmrm_read_platform_resources");
        }
    }
code_r0x08005118:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    __stack_chk_fail();
code_r0x0800515c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8005160);
    (*pcVar5)();
}


// ===== sym.mmrm_free_platform_resources @ 0x08005160 (size 36) =====

ulong sym.mmrm_free_platform_resources(int64_t arg1)

{
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x40) = 0;
    return 0;
}


// ===== sym.msm_mmrm_debugfs_info_read @ 0x08005184 (size 188) =====

ulong sym.msm_mmrm_debugfs_info_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x1000);
    if (iVar1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8000941,"err ","msm_mmrm_debugfs_info_read");
        }
        uVar2 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = simple_read_from_buffer(arg1,arg2,arg3,iVar1,0);
        kfree(iVar1);
    }
    return uVar2;
}


// ===== sym.msm_mmrm_debugfs_init @ 0x08005240 (size 412) =====

uint64_t sym.msm_mmrm_debugfs_init(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = 0;
    uVar1 = debugfs_create_dir("msm_mmrm",0);
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar3 = 0x80010d0;
            pcVar4 = "mmrm";
code_r0x080053d0:
            _printk(uVar3,"err ","msm_mmrm_debugfs_init",pcVar4);
        }
    }
    else {
        iVar2 = debugfs_create_file("info",0x124,uVar1,&uStack_2c,obj.msm_mmrm_debugfs_info_fops);
        if (iVar2 != 0) {
            debugfs_create_u32("debug_level",0x1a4,uVar1,obj.msm_mmrm_debug);
            debugfs_create_u8("allow_multiple_register",0x1a4,uVar1,obj.drv_data);
            debugfs_create_u8("enable_throttle_feature",0x1a4,uVar1,obj.msm_mmrm_enable_throttle_feature);
            goto code_r0x08005360;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar3 = 0x8000b07;
            pcVar4 = "info";
            goto code_r0x080053d0;
        }
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8001fa4,"err ","msm_mmrm_debugfs_init");
    }
    uVar1 = 0;
code_r0x08005360:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_mmrm_debugfs_deinit;
    uVar1 = debugfs_remove();
    return uVar1;
}


// ===== sym.msm_mmrm_debugfs_deinit @ 0x080053dc (size 36) =====

void sym.msm_mmrm_debugfs_deinit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove();
    return;
}


// ===== sym.mmrm_init_sw_clk_mgr @ 0x08005400 (size 700) =====

uint sym.mmrm_init_sw_clk_mgr(int64_t arg1)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    uint16_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int iVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = kmem_cache_alloc_trace(_simple_open,0xdc0,0xa0);
    if (iVar6 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000d65,"err ","mmrm_init_sw_clk_mgr");
        }
    }
    else {
        iVar11 = *(arg1 + 0x50);
        *(iVar6 + 0x38) = arg1;
        iVar7 = __kmalloc(iVar11 * 400,0xdc0);
        *(iVar6 + 0x40) = iVar7;
        if (iVar7 != 0) {
            iVar11 = *(arg1 + 0x50);
            *(iVar6 + 0x48) = iVar11;
            *(iVar6 + 0x4c) = 0;
            *(iVar6 + 0x88) = iVar6 + 0x88;
            *(iVar6 + 0x90) = iVar6 + 0x88;
            if (iVar11 == 0) {
                uVar10 = 0;
            }
            else {
                iVar12 = 0;
                uVar13 = 1;
                iVar14 = 0x18c;
                while( true ) {
                    piVar1 = *(arg1 + 0x48) + iVar12;
                    iVar7 = iVar7 + iVar14;
                    *(iVar7 + -0xec) = piVar1[1] | *piVar1 << 0x10;
                    *(iVar7 + -0xa0) = piVar1[2];
                    *(iVar7 + -0x8c) = piVar1[3];
                    *(iVar7 + -0xdc) = piVar1[4];
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8002366,"high","mmrm_sw_prepare_table");
                    }
                    uVar10 = *(iVar6 + 0x48);
                    if (uVar10 <= uVar13) break;
                    iVar7 = *(iVar6 + 0x40);
                    uVar13 = uVar13 + 1;
                    iVar14 = iVar14 + 400;
                    iVar12 = iVar12 + 0x14;
                }
            }
            uVar2 = *(arg1 + 0x58);
            *(iVar6 + 0x80) = 0;
            uVar4 = *(arg1 + 0x30);
            uVar13 = uVar4;
            *(iVar6 + 0x7c) = uVar2;
            *(iVar6 + 0x78) = uVar4;
            if (uVar4 != 0) {
                uVar8 = 0;
                uVar9 = uVar10;
                do {
                    if (uVar9 != 0) {
                        if (4 < uVar8) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80056bc);
                            (*pcVar5)();
                        }
                        iVar3 = *(arg1 + 0x1c + uVar8 * 4);
                        iVar11 = 0;
                        do {
                            if (*(*(iVar6 + 0x40) + iVar11 * 400 + 0xa0) == iVar3) {
                                piVar1 = iVar6 + 0x50 + uVar8 * 8;
                                *piVar1 = iVar3;
                                uVar13 = *(iVar6 + 0x78);
                                *(piVar1 + 1) = iVar11;
                                break;
                            }
                            iVar11 = iVar11 + 1;
                        } while (uVar10 != iVar11);
                    }
                    uVar8 = uVar8 + 1;
                    if (uVar13 <= uVar8) break;
                    uVar9 = *(iVar6 + 0x48);
                    uVar10 = uVar9;
                } while( true );
            }
            __mutex_init(iVar6,"&sw_clk_mgr->lock",obj.mmrm_init_sw_clk_mgr.__key);
            *(arg1 + 0x60) = iVar6;
            *(iVar6 + 0x30) = *(arg1 + 0x18);
            *(iVar6 + 0x98) = reloc.mmrm_sw_clk_client_register.b648143898d6f8ed64c0dcecf542e514.cfi_jt;
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000c9e,"err ","mmrm_init_sw_clk_mgr",*(arg1 + 0x50));
        }
        kfree(iVar6);
        *(arg1 + 0x60) = 0;
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_init_sw_clk_mgr",0xfffffff4);
    }
    return 0xfffffff4;
}


// ===== sym.mmrm_destroy_sw_clk_mgr @ 0x080056bc (size 232) =====

ulong sym.mmrm_destroy_sw_clk_mgr(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x88);
    while (piVar3 != arg1 + 0x88) {
        piVar6 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3);
        piVar3 = piVar6;
    }
    if (arg1 == 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8000610,"err ","mmrm_destroy_sw_clk_mgr");
        }
        uVar5 = 0xffffffea;
    }
    else {
        kfree(*(arg1 + 0x40));
        kfree(arg1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.mmrm_sw_clk_client_register @ 0x080057a4 (size 2328) =====

//WARNING: Type propagation algorithm not settling

uint * sym.mmrm_sw_clk_client_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t arg2_00;
    uint64_t uVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    ulong in_x4;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t *puVar13;
    int64_t iVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int *piVar18;
    int64_t *piVar19;
    int *piVar20;
    ulong *in_x18;
    ulong uVar21;
    uint *puVar22;
    int64_t iVar23;
    ulong *puVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock();
    uVar5 = *(arg1 + 0x48);
    if (uVar5 == *(arg1 + 0x4c)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001cd1,"err ","mmrm_sw_clk_client_register");
        }
    }
    else {
        uVar8 = *(arg2 + 4) | *arg2 << 0x10;
        if (uVar5 == 0) {
            uVar25 = 0;
code_r0x08005868:
            if (uVar25 == uVar5) goto code_r0x08005870;
            iVar23 = *(arg1 + 0x40);
            uVar17 = uVar25 & 0xffffffff;
            arg2_00 = iVar23 + (uVar25 & 0xffffffff) * 400;
            puVar1 = arg2_00 + 0x170;
            puVar22 = *(arg2_00 + 0x170);
            if (puVar22 == NULL) {
                iVar11 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar11 = 0x30;
                }
                puVar22 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,8);
                if (puVar22 == NULL) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8000f98,"err ","mmrm_sw_clk_client_register");
                        uVar21 = 0xfffffff4;
                    }
                    else {
                        uVar21 = 0xfffffff4;
                    }
                }
                else {
                    *puVar22 = 0;
                    puVar22[1] = uVar25;
                    iVar11 = iVar23 + uVar17 * 400;
                    *(iVar11 + 0x188) = 1;
                    *puVar1 = puVar22;
                    strlcpy(arg2_00,arg2 + 8,0x80);
                    uVar21 = *(arg2 + 0x88);
                    puVar24 = iVar11 + 0x80;
                    *puVar24 = uVar21;
                    *(iVar11 + 0x88) = arg3;
                    *(iVar11 + 0x90) = arg4;
                    *(iVar11 + 0x98) = in_x4;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x800217a,"high","mmrm_sw_clk_client_register",*(iVar23 + uVar17 * 400 + 0xa0),
                                arg2_00,arg3 & 0xffffffff,arg4);
                        uVar21 = *puVar24;
                    }
                    iVar12 = *(arg1 + 0x38);
                    uVar25 = clk_round_rate(uVar21,1);
                    iVar11 = clk_round_rate(*puVar24,0xffffffffffffffff);
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001b76,"high","mmrm_sw_update_freq",*(iVar23 + uVar17 * 400 + 0xa0),uVar25,
                                iVar11);
                    }
                    iVar16 = iVar23 + uVar17 * 400;
                    *(iVar16 + 0xb8) = uVar25;
                    *(iVar16 + 0xc0) = uVar25;
                    *(iVar16 + 200) = uVar25;
                    puVar13 = iVar16 + 0xd0;
                    *puVar13 = uVar25;
                    *(iVar16 + 0xd8) = uVar25;
                    if (uVar25 < iVar11) {
                        uVar7 = uVar25;
                        do {
                            uVar6 = clk_round_rate(*puVar24,uVar25);
                            if (uVar7 < uVar6) {
                                uVar5 = qcom_clk_get_voltage(*puVar24,uVar6);
                                if (0x180 < uVar5) break;
                                uVar7 = uVar6;
                                if (uVar5 < 0x41) {
                                    iVar14 = 0;
                                }
                                else {
                                    uVar8 = uVar5 - 0x80 >> 6;
                                    uVar5 = uVar8 | uVar5 << 0x1a;
                                    if ((4 < uVar5) || ((0x17U >> (uVar8 & 0x1f) & 1) == 0)) goto code_r0x08005a50;
                                    iVar14 = *(uVar5 * 8 + 0x8002b00);
                                }
                                do {
                                    iVar2 = iVar14 + 1;
                                    *(iVar23 + uVar17 * 400 + 0xb8 + iVar14 * 8) = uVar6;
                                    iVar14 = iVar2;
                                } while (iVar2 != 5);
                            }
code_r0x08005a50:
                            uVar25 = uVar25 + 1000000;
                        } while (uVar25 < iVar11);
                    }
                    piVar20 = iVar23 + uVar17 * 400 + 0xa0;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,**(iVar12 + 0x38),*(iVar16 + 0xb8))
                        ;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x18),
                                *(iVar16 + 0xc0));
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x30),
                                *(iVar16 + 200));
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x48),*puVar13
                               );
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001148,"high","mmrm_sw_update_freq",*piVar20,*(*(iVar12 + 0x38) + 0x60),
                                *(iVar16 + 0xd8));
                        uVar5 = *(arg1 + 0x48);
                    }
                    else {
                        uVar5 = *(arg1 + 0x48);
                    }
                    if (uVar5 != 0) {
                        iVar12 = *(arg1 + 0x38);
                        iVar11 = 0;
                        piVar18 = *(arg1 + 0x40) + 0xa0;
                        do {
                            if (*piVar20 == *piVar18) {
                                if (*(iVar12 + 0x48) + iVar11 != 0) {
                                    iVar11 = *(iVar12 + 0x48) + iVar11;
                                    uVar5 = *(iVar11 + 8);
                                    uVar8 = *(iVar11 + 0xc);
                                    iVar23 = iVar23 + uVar17 * 400;
                                    uVar25 = *puVar13;
                                    iVar11 = 0x10;
                                    piVar19 = iVar23 + 0xb8;
                                    piVar20 = iVar23 + 0xf4;
                                    piVar18 = iVar23 + 0x118;
                                    do {
                                        puVar15 = *(iVar12 + 0x38) + iVar11;
                                        iVar11 = iVar11 + 0x18;
                                        uVar3 = puVar15[-1];
                                        uVar4 = *puVar15;
                                        uVar17 = 0;
                                        if (uVar25 != 0) {
                                            uVar17 = (*piVar19 *
                                                      ((uVar5 & 0xffff0000) + ((uVar5 & 0xffff) * 100 & 0x7f0000) / 100)
                                                     & 0xffffffffffff0000) / uVar25;
                                        }
                                        uVar17 = ((uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100) *
                                                 uVar17;
                                        uVar7 = ((uVar4 & 0xffff0000) + ((uVar4 & 0xffff) * 100 & 0x7f0000) / 100) *
                                                ((uVar8 & 0xffff0000) + ((uVar8 & 0xffff) * 100 & 0x7f0000) / 100);
                                        iVar9 = uVar17 >> 0x20;
                                        if (0x7ffe0000 < (uVar17 & 0xffff0000)) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        iVar10 = uVar7 >> 0x20;
                                        if (0x7ffe0000 < (uVar7 & 0xffff0000)) {
                                            iVar10 = iVar10 + 1;
                                        }
                                        piVar20[-5] = iVar9;
                                        uVar6 = uVar7 + (uVar17 & 0xffffffffffff0000) & 0xffffffffffff0000;
                                        *piVar20 = iVar10;
                                        uVar3 = *(*(iVar12 + 0x38) + 8);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-4] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x20);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-3] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x38);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-2] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x50);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        piVar18[-1] = iVar9;
                                        uVar3 = *(*(iVar12 + 0x38) + 0x68);
                                        uVar17 = (uVar3 & 0xffff0000) + ((uVar3 & 0xffff) * 100 & 0x7f0000) / 100;
                                        uVar7 = 0;
                                        if (uVar17 != 0) {
                                            uVar7 = uVar6 / uVar17;
                                        }
                                        iVar9 = uVar7 >> 0x10;
                                        if (0x7ffe < uVar7) {
                                            iVar9 = iVar9 + 1;
                                        }
                                        *piVar18 = iVar9;
                                        piVar19 = piVar19 + 1;
                                        piVar20 = piVar20 + 1;
                                        piVar18 = piVar18 + 5;
                                    } while (iVar11 != 0x88);
                                    goto code_r0x08005918;
                                }
                                break;
                            }
                            iVar11 = iVar11 + 0x14;
                            piVar18 = piVar18 + 100;
                        } while (uVar5 * 0x14 - iVar11 != 0);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                        _printk(0x8001fc0,"high","mmrm_sw_update_curr",*piVar20);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x80023b1,"err ","mmrm_sw_clk_client_register",*piVar20);
                    }
                    kfree(puVar22);
                    uVar21 = 0xffffffea;
                }
                *puVar1 = 0;
                iVar23 = iVar23 + uVar17 * 400;
                *(iVar23 + 0x80) = 0;
                *(iVar23 + 0x88) = 0;
                *(iVar23 + 0x90) = 0;
                *(iVar23 + 0x98) = 0;
                goto code_r0x08005884;
            }
            if (obj.drv_data != 0x0) {
                iVar11 = iVar23 + uVar17 * 400;
                *(iVar11 + 0x188) = *(iVar11 + 0x188) + 1;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8001665,"high","mmrm_sw_clk_client_register",*(iVar23 + uVar17 * 400 + 0xa0));
                    puVar22 = *puVar1;
                }
code_r0x08005918:
                sym.mmrm_sw_print_client_data(arg1 + 0x38,arg2_00);
                mutex_unlock(arg1);
                return puVar22;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08005880;
            uVar21 = 0x800110d;
            uVar8 = *(iVar23 + uVar17 * 400 + 0xa0);
        }
        else {
            uVar25 = 0;
            puVar15 = *(arg1 + 0x40) + 0xa0;
            do {
                if (uVar8 == *puVar15) goto code_r0x08005868;
                uVar25 = uVar25 + 1;
                puVar15 = puVar15 + 100;
            } while (uVar5 != uVar25);
code_r0x08005870:
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08005880;
            uVar21 = 0x800127b;
        }
        _printk(uVar21,"err ","mmrm_sw_clk_client_register",uVar8);
    }
code_r0x08005880:
    uVar21 = 0xffffffea;
code_r0x08005884:
    mutex_unlock(arg1);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_register",uVar21);
    }
    return NULL;
}


// ===== sym.mmrm_sw_clk_client_deregister @ 0x080060bc (size 324) =====

uint sym.mmrm_sw_clk_client_deregister(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001a3f,"err ");
        }
    }
    else {
        if (*(arg2 + 4) < *(arg1 + 0x48)) {
            mutex_lock(arg1);
            iVar3 = *(arg1 + 0x40);
            uVar1 = *(arg2 + 4);
            iVar4 = iVar3 + uVar1 * 400;
            iVar2 = *(iVar4 + 0x188);
            if ((iVar2 == 0) || (iVar2 = iVar2 + -1, *(iVar4 + 0x188) = iVar2, iVar2 == 0)) {
                iVar3 = iVar3 + uVar1 * 400;
                kfree(*(iVar3 + 0x170));
                *(iVar3 + 0x80) = 0;
                *(iVar3 + 0x88) = 0;
                *(iVar3 + 0x90) = 0;
                *(iVar3 + 0x98) = 0;
                *(iVar3 + 0x170) = 0;
                *(iVar3 + 0x178) = 0;
                *(iVar3 + 0x180) = 0;
            }
            mutex_unlock(arg1);
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001a64,"err ","mmrm_sw_clk_client_deregister");
        }
    }
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_deregister",0xffffffea);
    }
    return 0xffffffea;
}


// ===== sym.mmrm_sw_clk_client_setval @ 0x08006200 (size 4504) =====

ulong sym.mmrm_sw_clk_client_setval(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint16_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int *piVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong uVar23;
    uint64_t uVar24;
    int iVar25;
    int64_t iVar26;
    uint16_t *puVar27;
    int64_t iVar28;
    uint32_t uVar29;
    uint64_t *puVar30;
    int64_t *piVar31;
    ulong *puVar32;
    int iVar33;
    int64_t iVar34;
    uint64_t uVar35;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_70 = *(iVar21 + 0x5e0);
    if (arg2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            uVar23 = 0x8001a3f;
code_r0x080063a8:
            _printk(uVar23,"err ");
        }
code_r0x08006b10:
        uVar23 = 0xffffffea;
code_r0x08006b14:
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","mmrm_sw_clk_client_setval",uVar23);
        }
    }
    else {
        uVar5 = *(arg2 + 4);
        uVar24 = uVar5;
        if (*(arg1 + 0x48) <= uVar5) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001a64,"err ","mmrm_sw_clk_client_setval",uVar5);
            }
            goto code_r0x08006b10;
        }
        if (arg3 == 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001183,"err ","mmrm_sw_clk_client_setval");
            }
            goto code_r0x08006b10;
        }
        iVar26 = *(arg1 + 0x40);
        iVar21 = iVar26 + uVar24 * 400;
        puVar30 = iVar21 + 0x80;
        if ((*puVar30 == 0) || (0xfffffffffffff000 < *puVar30)) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar23 = 0x8001e7d;
                goto code_r0x080063a8;
            }
            goto code_r0x08006b10;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x80017d1,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),arg4);
        }
        iVar28 = iVar26 + uVar24 * 400;
        uVar5 = *(arg3 + 4) & 1;
        if ((*(iVar28 + 0x178) != arg4) || (*(iVar26 + uVar24 * 400 + 0x18c) != *arg3)) {
            if (arg4 != 0) {
                uVar10 = qcom_clk_get_voltage(*puVar30,arg4);
                if (uVar10 < 0x181) {
                    if (uVar10 < 0x40) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x8001c0e,"high","mmrm_sw_get_req_level",*(iVar26 + uVar24 * 400 + 0xa0));
                        }
                        uVar10 = 0;
                    }
                    else {
                        uVar13 = uVar10 - 0x40 >> 6;
                        uVar16 = uVar13 | uVar10 << 0x1a;
                        if ((5 < uVar16) || ((0x2fU >> (uVar13 & 0x1f) & 1) == 0)) goto code_r0x080063d4;
                        uVar10 = *(uVar16 * 4 + 0x8002b28);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x8001ee9,"high","mmrm_sw_get_req_level",uVar10);
                        }
                    }
                    if ((*arg3 != 0) && (*arg3 <= *(iVar26 + uVar24 * 400 + 0xb0))) goto code_r0x0800640c;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001aac,"err ","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0));
                    }
                }
                else {
code_r0x080063d4:
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8001bbe,"err ","mmrm_sw_get_req_level",*(iVar26 + uVar24 * 400 + 0xa0),uVar10,
                                arg4);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar23 = 0x8001374;
code_r0x08006af0:
                        _printk(uVar23,"err ","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),arg4);
                    }
                }
                goto code_r0x08006b10;
            }
            uVar10 = 0;
code_r0x0800640c:
            mutex_lock(arg1);
            iVar33 = *arg3;
            iVar11 = *(arg1 + 0x80);
            piVar18 = iVar26 + uVar24 * 400 + 0xa0;
            iVar25 = *piVar18;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x800191f,"high","mmrm_sw_check_req_level",iVar25,uVar10,*(arg1 + 0x84));
            }
            uVar13 = *(arg1 + 0x84);
            uVar14 = uVar10;
            if (uVar10 < uVar13) {
                uVar22 = *(arg1 + 0x48);
                uVar14 = uVar10;
                if (*(arg1 + 0x48) != 0) {
                    uVar14 = *(arg1 + 0x40);
                    uVar35 = 0;
                    do {
                        uVar19 = uVar35;
                        if ((((*(uVar14 + 0x80) != 0) && (*(uVar14 + 0x80) < 0xfffffffffffff001)) &&
                            (*(uVar14 + 0x178) != 0)) && (*(uVar14 + 0xa0) != iVar25)) {
                            uVar16 = *(uVar14 + 0x180);
                            if (uVar16 == uVar13) {
                                uVar14 = uVar13;
                                goto code_r0x080065b0;
                            }
                            uVar19 = uVar14;
                            if (uVar16 <= uVar10 || uVar13 <= uVar16) {
                                uVar19 = uVar35;
                            }
                        }
                        uVar22 = uVar22 - 1;
                        uVar14 = uVar14 + 400;
                        uVar35 = uVar19;
                    } while (uVar22 != 0);
                    uVar14 = uVar10;
                    if ((uVar19 != 0) && (uVar14 = uVar10, uVar19 < 0xfffffffffffff001)) {
                        uVar13 = *(uVar19 + 0x180);
                        if (*(uVar19 + 0x180) <= uVar10) {
                            uVar13 = uVar10;
                        }
                        uVar14 = uVar13;
                    }
                }
            }
code_r0x080065b0:
            uVar13 = uVar14;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x8000e7c,"high","mmrm_sw_check_req_level");
                if (arg4 != 0) goto code_r0x080065c4;
code_r0x08006678:
                iVar33 = 0;
            }
            else {
                if (arg4 == 0) goto code_r0x08006678;
code_r0x080065c4:
                if (4 < uVar13) goto code_r0x08007394;
                iVar33 = *(iVar26 + uVar24 * 400 + uVar10 * 0x14 + uVar14 * 4 + 0x108) * iVar33;
            }
            piVar1 = iVar28 + 0x178;
            if (*piVar1 == 0) {
                uVar16 = *(arg1 + 0x84);
                iVar25 = 0;
            }
            else {
                uVar29 = *(iVar26 + uVar24 * 400 + 0x180);
                if (4 < uVar29) goto code_r0x08007394;
                uVar16 = *(arg1 + 0x84);
                if (4 < uVar16) goto code_r0x08007394;
                iVar28 = iVar26 + uVar24 * 400;
                iVar25 = *(iVar28 + 0x18c) * *(iVar28 + uVar29 * 0x14 + uVar16 * 4 + 0x108);
            }
            if (uVar13 == uVar16) {
                uVar16 = iVar33 - iVar25;
code_r0x080067a8:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x800206e,"high","mmrm_sw_check_peak_current",*piVar18,iVar11,iVar33,iVar25,uVar16);
                }
                uVar29 = uVar16 + iVar11;
                if (uVar29 < 1) {
                    *(arg1 + 0x80) = 0;
                    *(arg1 + 0x84) = uVar13;
                }
                else {
                    if (*(arg1 + 0x7c) <= uVar29) {
                        if ((*(iVar26 + uVar24 * 400 + 0x88) != 1) || (obj.msm_mmrm_enable_throttle_feature == 0x0)) {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                _printk(0x80015bb,"err ","mmrm_sw_check_peak_current",*piVar18,iVar21);
                            }
                            sym.mmrm_sw_dump_enabled_client_info(arg1 + 0x38);
                            goto code_r0x08006d88;
                        }
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_a8 = 0;
                        __init_swait_queue_head(&uStack_a8,"&x->wait",obj.mmrm_init_sw_clk_mgr.__key);
                        uVar15 = *(arg1 + 0x78);
                        if (uVar15 != 0) {
                            uVar14 = 0;
                            puVar27 = arg1 + 0x54;
                            do {
                                if (uVar14 == 5) goto code_r0x08007394;
                                iVar28 = *(arg1 + 0x40);
                                uVar22 = *puVar27;
                                uVar35 = iVar28 + uVar22 * 400;
                                if ((uVar35 != 0) && (uVar35 < 0xfffffffffffff001)) {
                                    iVar12 = iVar28 + uVar22 * 400;
                                    uVar6 = *(iVar12 + 0x180);
                                    if ((4 < uVar6) || (4 < *(arg1 + 0x84))) goto code_r0x08007394;
                                    iVar20 = *(arg1 + 0x84) * 4;
                                    iVar34 = iVar28 + uVar22 * 400 + 0x108;
                                    uVar7 = *(iVar34 + iVar20);
                                    uVar6 = *(iVar34 + uVar6 * 0x14 + iVar20);
                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                        _printk(0x8001f0d,"high","mmrm_sw_throttle_low_priority_client",
                                                *(iVar28 + uVar22 * 400 + 0xa0),uVar35);
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) != 0) goto code_r0x08006cb8;
code_r0x08006d20:
                                        _printk(0x8001d45,"high","mmrm_sw_throttle_low_priority_client",uVar6,uVar7)
                                        ;
                                        uVar17 = uVar6 - uVar7;
                                        if (uVar7 <= uVar6 && uVar17 != 0) {
code_r0x08006cc0:
                                            if (uVar16 < uVar17) {
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x8001800,"high","mmrm_sw_throttle_low_priority_client",
                                                            *(iVar28 + uVar22 * 400 + 0xa0),uVar35);
                                                }
                                                puVar2 = iVar12 + 0x180;
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x800183a,"high","mmrm_sw_throttle_low_priority_client",
                                                            uVar6,uVar7,uVar16);
                                                }
                                                uStack_90 = CONCAT44(uStack_90._4_4_,1);
                                                if (4 < *puVar2) goto code_r0x08007394;
                                                iVar34 = iVar28 + uVar22 * 400;
                                                puVar3 = iVar34 + 0xb8;
                                                uStack_88 = puVar3[*puVar2];
                                                uStack_80 = *(iVar34 + 0xb8);
                                                uStack_78 = *(iVar34 + 0x90);
                                                iVar12 = ktime_get();
                                                pcVar9 = *(iVar34 + 0x98);
                                                iVar11 = 0;
                                                if (pcVar9 != NULL) {
                                                    __cfi_slowpath_diag(0xb912697328ee41f,pcVar9,0x8000400);
                                                    iVar11 = (*pcVar9)(&uStack_90);
                                                }
                                                iVar34 = ktime_get();
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                    _printk(0x800097c,"high","mmrm_sw_throttle_low_priority_client",
                                                            iVar34 - iVar12);
                                                    if (iVar11 != 0) goto code_r0x08006fac;
code_r0x08007170:
                                                    if ((100000000 < iVar34 - iVar12) &&
                                                       (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                                                        _printk(0x8001af9,"err ",
                                                                "mmrm_sw_throttle_low_priority_client",iVar34 - iVar12
                                                                ,100000000);
                                                    }
                                                    iVar12 = iVar28 + uVar22 * 400;
                                                    if ((*(iVar12 + 0x184) == '\0') &&
                                                       (iVar11 = clk_set_rate(*(iVar28 + uVar22 * 400 + 0x80),*puVar3)
                                                       , iVar11 != 0)) {
                                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                            uVar23 = 0x80013f2;
code_r0x080072f8:
                                                            _printk(uVar23,"err ",
                                                                    "mmrm_sw_throttle_low_priority_client",
                                                                    *(iVar28 + uVar22 * 400 + 0xa0));
                                                        }
                                                        goto code_r0x08006fbc;
                                                    }
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                                        _printk(0x80016a7,"high",
                                                                "mmrm_sw_throttle_low_priority_client",uVar35,*puVar3)
                                                        ;
                                                    }
                                                    iVar34 = 0x38;
                                                    if (android_kmalloc_64_create != 0x0) {
                                                        iVar34 = 0x30;
                                                    }
                                                    piVar31 = kmem_cache_alloc_trace
                                                                        (*(kmalloc_caches + iVar34),0xdc0,0x20);
                                                    if ((piVar31 != NULL) && (piVar31 < 0xfffffffffffff001)) {
                                                        puVar32 = *(arg1 + 0x90);
                                                        *(piVar31 + 2) = uVar14;
                                                        *(piVar31 + 0x14) = uVar17;
                                                        *(piVar31 + 3) = *puVar2;
                                                        uVar14 = __list_add_valid(piVar31,puVar32,arg1 + 0x88);
                                                        if ((uVar14 & 1) != 0) {
                                                            *(arg1 + 0x90) = piVar31;
                                                            *piVar31 = arg1 + 0x88;
                                                            piVar31[1] = puVar32;
                                                            *puVar32 = piVar31;
                                                        }
                                                        *(iVar12 + 0x184) = 0;
                                                        *puVar2 = 0;
                                                        uVar29 = uVar29 - uVar17;
                                                        *(iVar28 + uVar22 * 400 + 0x178) = *puVar3;
                                                        break;
                                                    }
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                        _printk(0x800142c,"err ",
                                                                "mmrm_sw_throttle_low_priority_client");
                                                        uVar23 = 0xfffffff4;
                                                    }
                                                    else {
                                                        uVar23 = 0xfffffff4;
                                                    }
                                                }
                                                else {
                                                    if (iVar11 == 0) goto code_r0x08007170;
code_r0x08006fac:
                                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                        uVar23 = 0x8000ea0;
                                                        goto code_r0x080072f8;
                                                    }
code_r0x08006fbc:
                                                    uVar23 = 0xffffffea;
                                                }
                                                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                                    _printk(0x8001c49,"err ","mmrm_sw_check_peak_current");
                                                }
                                                sym.mmrm_sw_dump_enabled_client_info(arg1 + 0x38);
                                                goto code_r0x08006d8c;
                                            }
                                        }
                                    }
                                    else {
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) goto code_r0x08006d20;
code_r0x08006cb8:
                                        uVar17 = uVar6 - uVar7;
                                        if (uVar7 <= uVar6 && uVar17 != 0) goto code_r0x08006cc0;
                                    }
                                    uVar15 = *(arg1 + 0x78);
                                }
                                uVar14 = uVar14 + 1;
                                puVar27 = puVar27 + 4;
                            } while (uVar14 < uVar15);
                        }
                    }
                    *(arg1 + 0x80) = uVar29;
                    *(arg1 + 0x84) = uVar13;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    piVar31 = *(arg1 + 0x88);
                    while (piVar8 = piVar31, piVar8 != arg1 + 0x88) {
                        piVar31 = *piVar8;
                        if (((piVar8 != NULL) && (piVar8 < 0xfffffffffffff001)) &&
                           (*(piVar8 + 0x14) + *(arg1 + 0x80) <= *(arg1 + 0x7c))) {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                _printk(0x800075d,"high","mmrm_reinstate_throttled_client",piVar8[2]);
                            }
                            if (4 < *(piVar8 + 2)) goto code_r0x08007394;
                            iVar28 = *(arg1 + 0x40);
                            uVar22 = *(arg1 + *(piVar8 + 2) * 8 + 0x54);
                            uVar14 = iVar28 + uVar22 * 400;
                            if ((uVar14 != 0) && (uVar14 < 0xfffffffffffff001)) {
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                    _printk(0x80019ba,"high","mmrm_reinstate_throttled_client",uVar14,
                                            *(iVar28 + uVar22 * 400 + 0xa0));
                                }
                                uStack_90 = CONCAT44(uStack_90._4_4_,1);
                                uStack_88 = *(iVar28 + uVar22 * 400 + 0xb8);
                                if (4 < *(piVar8 + 3)) goto code_r0x08007394;
                                iVar34 = iVar28 + uVar22 * 400;
                                uStack_80 = *(iVar34 + *(piVar8 + 3) * 8 + 0xb8);
                                uStack_78 = *(iVar34 + 0x90);
                                iVar12 = ktime_get();
                                pcVar9 = *(iVar34 + 0x98);
                                if (pcVar9 != NULL) {
                                    __cfi_slowpath_diag(0xb912697328ee41f,pcVar9,0x8000420);
                                    iVar11 = (*pcVar9)(&uStack_90);
                                    iVar34 = ktime_get();
                                    if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                        _printk(0x8001016,"high","mmrm_reinstate_throttled_client",iVar34 - iVar12);
                                    }
                                    if ((iVar11 != 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                                        _printk(0x8000636,"err ","mmrm_reinstate_throttled_client",
                                                *(iVar28 + uVar22 * 400 + 0xa0));
                                    }
                                    if ((100000000 < iVar34 - iVar12) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)
                                       ) {
                                        _printk(0x800224c,"err ","mmrm_reinstate_throttled_client");
                                    }
                                }
                                uVar14 = __list_del_entry_valid(piVar8);
                                if ((uVar14 & 1) != 0) {
                                    iVar28 = *piVar8;
                                    piVar4 = piVar8[1];
                                    *(iVar28 + 8) = piVar4;
                                    *piVar4 = iVar28;
                                }
                                *piVar8 = -0x2152ffffffffff00;
                                piVar8[1] = -0x2152fffffffffede;
                                kfree(piVar8);
                            }
                        }
                    }
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000725,"high","mmrm_sw_check_peak_current",*(arg1 + 0x80),*(arg1 + 0x84));
                }
                *piVar1 = arg4;
                iVar28 = iVar26 + uVar24 * 400;
                *(iVar28 + 0x180) = uVar10;
                *(iVar28 + 0x184) = uVar5;
                *(iVar28 + 0x18c) = *arg3;
                mutex_unlock(arg1);
                if (uVar5 == 0) goto code_r0x08006ab8;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8001d0e,"high","mmrm_sw_clk_client_setval",*piVar18);
                }
                goto code_r0x08006b94;
            }
            if (uVar13 < 5) {
                uVar22 = *(arg1 + 0x48);
                if (*(arg1 + 0x48) == 0) {
                    iVar11 = 0;
                }
                else {
                    iVar11 = 0;
                    iVar28 = *(arg1 + 0x40);
                    do {
                        if (((*(iVar28 + 0x80) != 0) && (*(iVar28 + 0x80) < 0xfffffffffffff001)) &&
                           ((*(iVar28 + 0x178) != 0 && (iVar28 != iVar21)))) {
                            if (4 < *(iVar28 + 0x180)) goto code_r0x08007394;
                            iVar11 = iVar11 + *(iVar28 + 0x18c) *
                                              *(iVar28 + uVar14 * 4 + 0x108 + *(iVar28 + 0x180) * 0x14);
                        }
                        uVar22 = uVar22 - 1;
                        iVar28 = iVar28 + 400;
                    } while (uVar22 != 0);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8000ff1,"high","mmrm_sw_calculate_total_current",iVar11);
                }
                uVar16 = 0;
                iVar11 = iVar11 + iVar33;
                goto code_r0x080067a8;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x80021c1,"err ","mmrm_sw_calculate_total_current");
            }
code_r0x08006d88:
            uVar23 = 0xffffffea;
code_r0x08006d8c:
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001eaa,"err ","mmrm_sw_clk_client_setval",*piVar18,*(arg1 + 0x80));
            }
            mutex_unlock(arg1);
            goto code_r0x08006b14;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001334,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),arg4);
        }
        iVar28 = iVar26 + uVar24 * 400;
        if (uVar5 != *(iVar28 + 0x184)) {
            mutex_lock(arg1);
            *(iVar28 + 0x184) = uVar5;
            mutex_unlock(arg1);
            if (uVar5 == 0) {
code_r0x08006ab8:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x80013bb,"high","mmrm_sw_clk_client_setval",*(iVar26 + uVar24 * 400 + 0xa0),arg4);
                }
                iVar11 = clk_set_rate(*puVar30,arg4);
                if (iVar11 != 0) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        uVar23 = 0x8000e3f;
                        goto code_r0x08006af0;
                    }
                    goto code_r0x08006b10;
                }
            }
        }
code_r0x08006b94:
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8001580,"high","mmrm_sw_clk_client_setval",arg4,iVar21);
        }
        uVar23 = 0;
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_70) {
        return uVar23;
    }
    __stack_chk_fail();
code_r0x08007394:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8007398);
    (*pcVar9)();
}


// ===== sym.mmrm_sw_clk_client_setval_inrange @ 0x08007398 (size 40) =====

void sym.mmrm_sw_clk_client_setval_inrange(int64_t arg2,int64_t arg1,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mmrm_sw_clk_client_setval(arg2,arg1,arg3,*(arg4 + 8));
    return;
}


// ===== sym.mmrm_sw_clk_client_getval @ 0x080073c0 (size 288) =====

uint sym.mmrm_sw_clk_client_getval(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08007490;
        uVar2 = 0x8001a3f;
    }
    else {
        uVar1 = *(arg2 + 4);
        if (*(arg1 + 0x48) <= uVar1) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8001a64,"err ","mmrm_sw_clk_client_getval");
            }
            goto code_r0x08007490;
        }
        if (*(*(arg1 + 0x40) + uVar1 * 400 + 0x80) != 0) {
            iVar3 = *(arg1 + 0x40) + uVar1 * 400;
            *arg3 = *(iVar3 + 0x178);
            *(arg3 + 8) = *(iVar3 + 0x178);
            *(arg3 + 0x10) = *(iVar3 + 0x178);
            return 0;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) goto code_r0x08007490;
        uVar2 = 0x8001e7d;
    }
    _printk(uVar2,"err ");
code_r0x08007490:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8000781,"err ","mmrm_sw_clk_client_getval",0xffffffea);
    }
    return 0xffffffea;
}


// ===== sym.mmrm_sw_clk_print_enabled_client_info @ 0x080074e0 (size 348) =====

int sym.mmrm_sw_clk_print_enabled_client_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = scnprintf(arg2,arg3 & 0xffffffff,"  csid    clk_rate     vdd_level   cur_ma   num_hw_blocks\n");
    uVar8 = arg3 - uVar3;
    if ((arg1 != -0x38) && (arg1 != -0x7c)) {
        uVar6 = *(arg1 + 0x48);
        arg2 = arg2 + uVar3;
        bVar1 = 1 < uVar8;
        if ((*(arg1 + 0x48) != 0) && (1 < uVar8)) {
            uVar9 = 1;
            iVar10 = 0x18c;
            do {
                iVar7 = *(arg1 + 0x40);
                if ((iVar7 + iVar10 != 0x18c) && (iVar5 = *(iVar7 + iVar10 + -0x14), iVar5 != 0)) {
                    uVar3 = *(iVar7 + iVar10 + -0xc);
                    if ((4 < uVar3) || (4 < *(arg1 + 0x84))) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x800763c);
                        (*pcVar2)();
                    }
                    uVar3 = scnprintf(arg2,uVar8,"0x%x    %zu   %zu   %zu   %zu\n",*(iVar7 + iVar10 + -0xec),iVar5,
                                      uVar3,*(iVar7 + iVar10) *
                                             *(iVar7 + uVar3 * 0x14 + *(arg1 + 0x84) * 4 + iVar10 + -0x84));
                    uVar6 = *(arg1 + 0x48);
                    uVar8 = uVar8 - uVar3;
                    arg2 = arg2 + uVar3;
                }
                bVar1 = 1 < uVar8;
                if (uVar6 <= uVar9) break;
                uVar9 = uVar9 + 1;
                iVar10 = iVar10 + 400;
            } while (1 < uVar8);
        }
        if (bVar1) {
            iVar4 = scnprintf(arg2,uVar8,"aggreg_val(%zu) aggreg_level(%zu)\n",*(arg1 + 0x80),*(arg1 + 0x84));
            uVar8 = uVar8 - iVar4;
        }
    }
    return arg3 - uVar8;
}


// ===== sym.mmrm_sw_print_client_data @ 0x0800763c (size 496) =====

//WARNING: Type propagation algorithm not settling

void sym.mmrm_sw_print_client_data(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint *puVar2;
    int64_t iVar3;
    int *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    piVar4 = arg2 + 0xf4;
    arg1 = *arg1;
    puVar2 = arg2 + 0x118;
    uVar1 = _segment.ehdr;
    do {
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x80023eb,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*(*(arg1 + 0x38) + iVar3),
                    piVar4[-5],*piVar4);
            uVar1 = _segment.ehdr;
        }
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8000cfc,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*piVar4 + piVar4[-5],puVar2[-4]);
            uVar1 = _segment.ehdr;
        }
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8000cfc,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*piVar4 + piVar4[-5],puVar2[-3]);
            uVar1 = _segment.ehdr;
        }
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8000cfc,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*piVar4 + piVar4[-5],puVar2[-2]);
            uVar1 = _segment.ehdr;
        }
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8000cfc,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*piVar4 + piVar4[-5],puVar2[-1]);
            uVar1 = _segment.ehdr;
        }
        if (((uVar1 ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8000cfc,"power","mmrm_sw_print_client_data",*(arg2 + 0xa0),*piVar4 + piVar4[-5],*puVar2);
            uVar1 = _segment.ehdr;
        }
        iVar3 = iVar3 + 0x18;
        piVar4 = piVar4 + 1;
        puVar2 = puVar2 + 5;
    } while (iVar3 != 0x78);
    return;
}


// ===== sym.mmrm_sw_dump_enabled_client_info @ 0x0800782c (size 320) =====

void sym.mmrm_sw_dump_enabled_client_info(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0x10);
    if (uVar3 != 0) {
        uVar5 = 0;
        iVar6 = 0x18c;
        do {
            iVar4 = *(arg1 + 8);
            iVar2 = *(iVar4 + iVar6 + -0x14);
            if ((iVar2 != 0) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
                uVar3 = *(iVar4 + iVar6 + -0xc);
                if ((4 < uVar3) || (4 < *(arg1 + 0x4c))) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x800796c);
                    (*pcVar1)();
                }
                _printk(0x800145c,"err ","mmrm_sw_dump_enabled_client_info",*(iVar4 + iVar6 + -0xec),iVar2,uVar3,
                        *(iVar4 + iVar6) * *(iVar4 + uVar3 * 0x14 + *(arg1 + 0x4c) * 4 + iVar6 + -0x84));
                uVar3 = *(arg1 + 0x10);
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 400;
        } while (uVar5 < uVar3);
    }
    if ((arg1 != -0x44) && (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0)) {
        _printk(0x80009be,"err ","mmrm_sw_dump_enabled_client_info",*(arg1 + 0x48),*(arg1 + 0x4c));
    }
    return;
}


// ===== sym.mmrm_get_clk_mgr_ops @ 0x0800796c (size 188) =====

uint sym.mmrm_get_clk_mgr_ops(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x18) == 1) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x800231d,"err ","mmrm_get_clk_mgr_ops");
            uVar1 = 0xffffffea;
        }
        else {
            uVar1 = 0xffffffea;
        }
    }
    else if (*(arg1 + 0x18) == 0) {
        *(arg1 + 0x68) = reloc.mmrm_init_sw_clk_mgr.cfi_jt;
        uVar1 = 0;
    }
    else {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80021e9,"err ","mmrm_get_clk_mgr_ops");
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.mmrm_clk_client_register @ 0x08007a28 (size 296) =====

void sym.mmrm_clk_client_register(int64_t arg1)

{
    ulong uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t in_x1;
    int64_t extraout_x1;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    ulong unaff_x30;
    uchar auStack_d8 [144];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    if (((arg1 != 0) && (unaff_x19 = arg1, *(arg1 + 0x98) != NULL)) &&
       (unaff_x20 = **(arg1 + 0x98), unaff_x20 != NULL)) {
        if (unaff_x20 !=
            sym.__typeid__ZTSFP11mmrm_clientP12mmrm_clk_mgr20mmrm_clk_client_desc20mmrm_client_priorityPvPFiP25mmrm_client_notifier_dataEE_global_addr
           ) goto code_r0x08007b24;
        while( true ) {
            uVar4 = *(in_x1 + 0xa0);
            uVar1 = *(in_x1 + 0xa8);
            uVar2 = *(in_x1 + 0x98);
            memcpy(auStack_d8,in_x1 + 8,0x90);
            uVar4 = (*unaff_x20)(arg1,auStack_d8,uVar2,uVar4,uVar1);
code_r0x08007acc:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_48) break;
            __stack_chk_fail(uVar4);
            in_x1 = extraout_x1;
code_r0x08007b24:
            __cfi_slowpath_diag(0x7638947d0b03083c,unaff_x20,0x8000440);
        }
        return;
    }
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x80022ae,"err ","mmrm_clk_client_register");
    }
    uVar4 = 0;
    arg1 = unaff_x19;
    goto code_r0x08007acc;
}


// ===== sym.mmrm_clk_client_deregister @ 0x08007b50 (size 192) =====

ulong sym.mmrm_clk_client_deregister(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x98) == 0)) || (pcVar2 = *(*(arg1 + 0x98) + 8), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80022ae,"err ","mmrm_clk_client_deregister");
        }
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientE_global_addr) {
            __cfi_slowpath_diag(0x485456f0db1156d2,pcVar2,0x8000460);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.mmrm_clk_client_setval @ 0x08007c10 (size 204) =====

ulong sym.mmrm_clk_client_setval(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x98) == 0)) || (pcVar2 = *(*(arg1 + 0x98) + 0x10), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80022ae,"err ","mmrm_clk_client_setval");
        }
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_datamE_global_addr) {
            __cfi_slowpath_diag(0x641c72c3cc89bd4f,pcVar2,0x8000480);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mmrm_clk_client_setval_inrange @ 0x08007cdc (size 204) =====

ulong sym.mmrm_clk_client_setval_inrange(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x98) == 0)) || (pcVar2 = *(*(arg1 + 0x98) + 0x18), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80022ae,"err ","mmrm_clk_client_setval_inrange");
        }
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != 
            sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP16mmrm_client_dataP21mmrm_client_res_valueE_global_addr) {
            __cfi_slowpath_diag(0x795263802c8cc184,pcVar2,0x80004a0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.mmrm_clk_client_getval @ 0x08007da8 (size 204) =====

ulong sym.mmrm_clk_client_getval(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x98) == 0)) || (pcVar2 = *(*(arg1 + 0x98) + 0x20), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80022ae,"err ","mmrm_clk_client_getval");
        }
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12mmrm_clk_mgrP11mmrm_clientP21mmrm_client_res_valueE_global_addr) {
            __cfi_slowpath_diag(0xb4e1c4f4203f6448,pcVar2,0x80004c0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.mmrm_clk_print_enabled_client_info @ 0x08007e74 (size 212) =====

ulong sym.mmrm_clk_print_enabled_client_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x98) == 0)) || (pcVar2 = *(*(arg1 + 0x98) + 0x28), pcVar2 == NULL)) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80022ae,"err ","mmrm_clk_print_enabled_client_info");
        }
        uVar1 = 0xffffffea;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFiP12mmrm_clk_mgrPciE_global_addr) {
            __cfi_slowpath_diag(0xcd1593676c35c571,pcVar2,0x80004e0);
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.init_module @ 0x0800800c (size 224) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x8000873,"high","msm_mmrm_init");
        }
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8001dbf,"err ","msm_mmrm_init");
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8000781,"err ","msm_mmrm_init",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080080ec (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_mmrm_probe.b505325075d1f83db8a6e3cf116fd6a8.cfi_jt);
    return;
}

