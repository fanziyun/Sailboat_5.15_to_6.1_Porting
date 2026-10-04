// decompiled from pmic-pon-log by radare2+r2ghidra (pdg)

// ===== sym.pon_log_full_show.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt @ 0x080010d8 (size 8) =====

int64_t sym.pon_log_full_show.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = strnlen(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,0x1000);
    iVar1 = snprintf(param_3,iVar2 + 1,0x8000b2a,reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt);
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_context_destroy(*(*(param_1 + 0xa8) + 0x18));
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_group);
        kobject_put(_segment.ehdr);
    }
    return 0;
}


// ===== sym.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt @ 0x080010f8 (size 8) =====

uint64_t sym.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt(int64_t param_1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t *piVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    char *pcVar19;
    uint *puVar20;
    ulong *puVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    int iVar25;
    ulong unaff_x30;
    uint8_t auStack_10c [4];
    uint8_t auStack_108 [4];
    uint uStack_104;
    ulong uStack_100;
    uint uStack_f8;
    unkbyte6 Stack_f0;
    ushort uStack_ea;
    unkbyte6 Stack_e8;
    ushort uStack_e2;
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
    iVar16 = sp_el0;
    iVar18 = param_1 + 0x10;
    iStack_70 = *(iVar16 + 0x5e0);
    uStack_f8 = 0;
    uStack_100 = 0;
    auStack_10c[0] = 0;
    piVar12 = devm_kmalloc(iVar18,0x30,0xdc0);
    if (piVar12 == NULL) {
code_r0x08001e64:
        uVar23 = 0xfffffff4;
code_r0x08001e98:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_70) {
            return uVar23 & 0xffffffff;
        }
        __stack_chk_fail();
code_r0x08002140:
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(1,0x8002144);
        (*pcVar9)();
    }
    uVar13 = *(param_1 + 0x300);
    *piVar12 = iVar18;
    uVar14 = of_count_phandle_with_args(uVar13,"",0);
    uVar23 = uVar14 & 0xffffffff;
    iVar11 = uVar14;
    if (iVar11 < 0) {
        if (iVar11 == -0x205) {
code_r0x08001e94:
            uVar23 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar18,"",uVar23);
        }
        goto code_r0x08001e98;
    }
    if (iVar11 == 0) {
        _dev_err(iVar18,"");
        uVar23 = 0xffffffea;
        goto code_r0x08001e98;
    }
    *(piVar12 + 5) = iVar11;
    puVar15 = devm_kmalloc(iVar18,(uVar14 & 0xffffffff) << 3,0xdc0);
    piVar12[4] = puVar15;
    if (puVar15 == NULL) goto code_r0x08001e64;
    if (0 < piVar12[5]) {
        uVar14 = 0;
        do {
            scnprintf(&uStack_100,0xc,"",uVar14 & 0xffffffff);
            uVar13 = devm_nvmem_device_get(iVar18,&uStack_100);
            *(piVar12[4] + uVar14 * 8) = uVar13;
            puVar15 = piVar12[4];
            uVar23 = puVar15[uVar14];
            if (((uVar23 != 0x205) && (uVar14 == 0)) && (0xfffffffffffff000 < uVar23)) {
                uVar13 = devm_nvmem_device_get(iVar18,"");
                *piVar12[4] = uVar13;
                puVar15 = piVar12[4];
                uVar23 = *puVar15;
            }
            if (0xfffffffffffff000 < uVar23) {
                if (uVar23 == -0x205) goto code_r0x08001e94;
                _dev_err(iVar18,"",uVar14 & 0xffffffff,uVar23 & 0xffffffff);
                goto code_r0x08001e98;
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < piVar12[5]);
    }
    uVar23 = nvmem_device_read(*puVar15,0x45,1,auStack_10c);
    if (uVar23 < 0) {
        uVar23 = uVar23 & 0xffffffff;
        goto code_r0x08001e98;
    }
    *(piVar12 + 0x2c) = auStack_10c[0] + 1;
    if (piVar12[5] <= auStack_10c[0]) {
        _dev_err(iVar18,"");
        uVar23 = 0xffffffed;
        goto code_r0x08001e98;
    }
    uVar14 = (auStack_10c[0] + 1) * 0x75;
    *(piVar12 + 0x14) = uVar14 >> 2;
    iVar16 = devm_kmalloc(iVar18,uVar14 & 0xfffc,0xdc0);
    piVar12[1] = iVar16;
    if (iVar16 == 0) goto code_r0x08001e64;
    iVar16 = ipc_log_context_create(3,"",0);
    puVar21 = piVar12[4];
    piVar12[3] = iVar16;
    *(param_1 + 0xa8) = piVar12;
    uStack_104 = 0;
    auStack_108[0] = 0;
    uVar23 = nvmem_device_read(*puVar21,0x46,1,auStack_108);
    uVar3 = auStack_108[0];
    if (uVar23 < 0) {
code_r0x08001f00:
        uVar23 = uVar23 & 0xffffffff;
    }
    else {
        if (auStack_108[0] + 0x40 < 0x8b) {
            iVar16 = *piVar12;
            pcVar19 = "";
        }
        else {
            uVar23 = nvmem_device_read(*piVar12[4],0x47,1,auStack_108);
            if (uVar23 < 0) goto code_r0x08001f00;
            iVar11 = *(piVar12 + 0x2c);
            if (auStack_108[0] < iVar11) {
                iVar1 = *(piVar12 + 0x14);
                if (0 < iVar1) {
                    iVar25 = 1;
                    uVar22 = ((iVar11 * 0x75 & uVar3 + auStack_108[0] * 0x75 + iVar1 * -4 + -0x4b >> 0x1f) +
                              auStack_108[0] * 0x75 + uVar3 + iVar1 * -4) - 0x4b;
                    do {
                        uVar10 = iVar11 * 0x75;
                        uVar6 = 0;
                        if (uVar10 != 0) {
                            uVar6 = uVar22 / uVar10;
                        }
                        uVar6 = uVar22 - uVar6 * uVar10;
                        uVar10 = uVar6 / 0x75;
                        uVar6 = uVar6 % 0x75;
                        iVar11 = uVar6 + 0x4b;
                        if (uVar6 < 0x72) {
                            puVar20 = &uStack_104;
                            iVar16 = 4;
                            uVar13 = *(piVar12[4] + uVar10 * 8);
                        }
                        else {
                            uVar14 = 0x75 - uVar6;
                            uVar23 = nvmem_device_read(*(piVar12[4] + uVar10 * 8),iVar11,uVar14,&uStack_104);
                            if (uVar23 < 0) goto code_r0x08001f00;
                            iVar1 = *(piVar12 + 0x2c);
                            iVar11 = 0x4b;
                            iVar4 = 0;
                            if (iVar1 != 0) {
                                iVar4 = (uVar10 + 1) / iVar1;
                            }
                            uVar13 = *(piVar12[4] + ((uVar10 + 1) - iVar4 * iVar1) * 8);
                            iVar16 = 4 - uVar14;
                            puVar20 = &uStack_104 + uVar14;
                        }
                        uVar14 = nvmem_device_read(uVar13,iVar11,iVar16,puVar20);
                        uVar23 = uVar14 & 0xffffffff;
                        if (uVar14 < 0) goto code_r0x08001f64;
                        uVar10 = uStack_104._1_1_;
                        if (((uStack_104 != '\0') || (uVar10 != 0)) ||
                           ((uStack_104._2_1_ != '\0' || (uStack_104._3_1_ != '\0')))) {
                            uVar5 = uVar10 - 1;
                            iVar16 = piVar12[3];
                            uVar6 = uVar5 < 0x20 & 0x8fff8b61U >> (uVar5 & 0x1f);
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_88 = 0;
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
                            Stack_e8 = 0;
                            uStack_e2 = 0;
                            uStack_e0 = 0;
                            Stack_f0 = 0;
                            uStack_ea = 0;
                            switch(uVar5) {
                            case 0:
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                                bVar7 = uStack_104._3_1_ == '\0';
                                bVar8 = uStack_104._2_1_ == '\0';
                                uVar10 = scnprintf(&Stack_f0,0x80,"",uVar10 - 0xf);
                                uVar24 = bVar7 && bVar8;
                                uVar5 = uVar24 | uVar6 ^ 1;
                                if ((uStack_104._3_1_ != '\0') || (uVar5 != 0)) {
                                    if (0x80 < uVar10) {
code_r0x0800219c:
    //WARNING: Does not return
                                        pcVar9 = SoftwareBreakpoint(0x5512,0x80021a0);
                                        (*pcVar9)();
                                    }
                                    iVar11 = scnprintf(&Stack_f0 + uVar10,0x80 - uVar10,"");
                                    uVar10 = iVar11 + uVar10;
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    iVar11 = sym.pmic_pon_log_print_reason
                                                       (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x18,0x8000d50
                                                       );
                                    uVar10 = iVar11 + uVar10;
                                }
                                uVar6 = uVar6 & (uVar24 ^ 1);
                                if ((uStack_104._2_1_ != '\0' | uVar5) == 1) {
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    uVar13 = 0x8000af0;
                                    if (uStack_104._3_1_ == '\0' && uVar5 == 0) {
                                        uVar13 = 0x8000a63;
                                    }
                                    iVar11 = scnprintf(&Stack_f0 + uVar10,0x80 - uVar10,"",uVar13);
                                    uVar10 = iVar11 + uVar10;
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    sym.pmic_pon_log_print_reason
                                              (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x10 & 0xff,0x8000d90);
                                }
                                break;
                            default:
                                scnprintf(&Stack_f0,0x80,"",uStack_104._1_1_,
                                          CONCAT11(uStack_104._2_1_,uStack_104._3_1_));
                            }
                            if (uVar6 != 0) {
                                _printk(0x80007da,&Stack_f0);
                            }
                            uVar14 = uStack_104;
                            if (uVar14 < 8) {
                                ipc_log_string(iVar16,"",*(obj.pmic_pon_state_label + uVar14 * 8),&Stack_f0);
                            }
                            else {
                                ipc_log_string(iVar16,"",uVar14,&Stack_f0);
                            }
                            iVar16 = strnlen(&Stack_f0,0x80);
                            if (iVar16 + 2U < 0x80) {
                                uVar14 = strlen(&Stack_f0);
                                if (0x7e < uVar14) goto code_r0x08002140;
                                *(&Stack_f0 + uVar14) = 10;
                                if (CONCAT26(uStack_ea,Stack_f0) == 0x63637553204e4f50 &&
                                    CONCAT62(Stack_e8,uStack_ea) == 0x6c75667373656363) {
                                    uVar14 = strlen(&Stack_f0);
                                    if (0x7e < uVar14) goto code_r0x08002140;
                                    *(&Stack_f0 + uVar14) = 10;
                                }
                            }
                            else {
                                _printk(0x8000955);
                            }
                            iVar16 = strnlen(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,0x1000);
                            iVar17 = strnlen(&Stack_f0,0x80);
                            if (iVar17 + iVar16 < 0x1000) {
                                strncat(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,&Stack_f0,
                                        iVar17);
                            }
                            else {
                                _printk(0x80004c8);
                            }
                            iVar16 = piVar12[2];
                            *(piVar12 + 2) = iVar16 + 1;
                            *(piVar12[1] + iVar16 * 4) = uStack_104;
                        }
                        if (*(piVar12 + 0x14) <= iVar25) break;
                        iVar11 = *(piVar12 + 0x2c);
                        uVar22 = uVar22 + 4;
                        iVar25 = iVar25 + 1;
                    } while( true );
                }
                uVar23 = 0;
                goto code_r0x08001f78;
            }
            iVar16 = *piVar12;
            pcVar19 = "";
        }
        _dev_err(iVar16,pcVar19,auStack_108[0]);
        uVar23 = 0xffffffea;
    }
code_r0x08001f64:
    _dev_err(iVar18,"",uVar23);
code_r0x08001f78:
    _segment.ehdr = kobject_create_and_add("",_devm_kmalloc);
    if (_segment.ehdr == 0) goto code_r0x08002108;
code_r0x08001f9c:
    iVar11 = sysfs_create_group(_segment.ehdr,obj.attr_group);
    if (iVar11 != 0) {
        _printk(0x8000845,"");
    }
    iVar18 = of_find_property(*(param_1 + 0x300),"",0);
    if (iVar18 != 0) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar22 = piVar12[2] - 1;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        Stack_e8 = 0;
        uStack_e2 = 0;
        uStack_e0 = 0;
        Stack_f0 = 0;
        uStack_ea = 0;
        if (-1 < uVar22) {
            bVar7 = false;
            uVar10 = 0;
            uVar6 = uVar22;
            do {
                uVar14 = uVar6;
                cVar2 = *(piVar12[1] + uVar14 * 4 + 1);
                if (cVar2 == '\b') {
                    uVar10 = *(piVar12[1] + uVar14 * 4 + 2);
                    uVar10 = (((uVar10 & 0xff00) << 0x10) >> 8 | uVar10 << 0x18) >> 0x10;
                }
                else if (cVar2 == '\x0e') {
                    if (bVar7) {
                        if (uVar10 < 1) goto code_r0x08002060;
                        bVar7 = true;
                        uVar10 = uVar10 - 1;
                    }
                    else {
                        bVar7 = true;
                        uVar22 = uVar6;
                    }
                }
                uVar6 = uVar6 - 1;
            } while (-1 < uVar6);
        }
        uVar14 = 0;
code_r0x08002060:
        if (uVar14 <= uVar22) {
            iVar18 = piVar12[1];
            do {
                iVar11 = uVar14;
                param_1 = iVar11;
                uVar3 = *(iVar18 + iVar11 * 4 + 1);
                if (uVar3 - 0x10 < 0xd) {
                    iVar16 = iVar18 + param_1 * 4;
                    uVar10 = *(iVar16 + 3);
                    if (uVar10 == 0) {
                        uVar3 = *(iVar16 + 2);
                        if ((uVar3 & 0xbf) == 0) goto code_r0x0800207c;
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
                        iVar18 = piVar12[1];
                        pcVar19 = "";
                    }
                    else {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar10,0x8000d50);
                        iVar18 = piVar12[1];
                        pcVar19 = "";
                    }
                    panic(pcVar19,*(iVar18 + param_1 * 4 + 1) - 0xf,&Stack_f0);
                    goto code_r0x0800219c;
                }
                if (uVar3 == 10) {
                    uVar3 = *(iVar18 + param_1 * 4 + 3);
                    uVar10 = uVar3;
                    if (uVar3 != 0) {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000dd0);
                        panic("",&Stack_f0);
code_r0x080021c4:
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar10,0x8000d50);
                        iVar18 = panic("",&Stack_f0);
                        *extraout_x18 = sym.pmic_pon_log_remove;
                        ipc_log_context_destroy(*(*(iVar18 + 0xa8) + 0x18));
                        if (_segment.ehdr != 0) {
                            sysfs_remove_group(_segment.ehdr,obj.attr_group);
                            kobject_put(_segment.ehdr);
                        }
                        return 0;
                    }
                }
                else if (uVar3 == 9) {
                    iVar16 = iVar18 + param_1 * 4;
                    uVar3 = *(iVar16 + 3);
                    uVar10 = uVar3;
                    if (uVar3 != 0) goto code_r0x080021c4;
                    uVar3 = *(iVar16 + 2);
                    if ((uVar3 & 0xbf) != 0) goto code_r0x080020e4;
                }
code_r0x0800207c:
                uVar14 = iVar11 + 1U;
                if (uVar22 < iVar11 + 1U) break;
            } while( true );
        }
    }
    goto code_r0x08001e98;
code_r0x080020e4:
    sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
    panic("",&Stack_f0);
code_r0x08002108:
    _printk(0x80008eb,"");
    goto code_r0x08001f9c;
}


// ===== sym.pmic_pon_log_probe @ 0x08001100 (size 10772) =====

uint64_t sym.pmic_pon_log_probe(int64_t arg1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    code *pcVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t *piVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    char *pcVar19;
    uint *puVar20;
    ulong *puVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    int iVar25;
    ulong unaff_x30;
    uint8_t auStack_10c [4];
    uint8_t auStack_108 [4];
    uint uStack_104;
    ulong uStack_100;
    uint uStack_f8;
    unkbyte6 Stack_f0;
    ushort uStack_ea;
    unkbyte6 Stack_e8;
    ushort uStack_e2;
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
    iVar16 = sp_el0;
    iVar18 = arg1 + 0x10;
    iStack_70 = *(iVar16 + 0x5e0);
    uStack_f8 = 0;
    uStack_100 = 0;
    auStack_10c[0] = 0;
    piVar12 = devm_kmalloc(iVar18,0x30,0xdc0);
    if (piVar12 == NULL) {
code_r0x08001e64:
        uVar23 = 0xfffffff4;
code_r0x08001e98:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_70) {
            return uVar23 & 0xffffffff;
        }
        __stack_chk_fail();
code_r0x08002140:
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(1,0x8002144);
        (*pcVar9)();
    }
    uVar13 = *(arg1 + 0x300);
    *piVar12 = iVar18;
    uVar14 = of_count_phandle_with_args(uVar13,"",0);
    uVar23 = uVar14 & 0xffffffff;
    iVar11 = uVar14;
    if (iVar11 < 0) {
        if (iVar11 == -0x205) {
code_r0x08001e94:
            uVar23 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar18,"",uVar23);
        }
        goto code_r0x08001e98;
    }
    if (iVar11 == 0) {
        _dev_err(iVar18,"");
        uVar23 = 0xffffffea;
        goto code_r0x08001e98;
    }
    *(piVar12 + 5) = iVar11;
    puVar15 = devm_kmalloc(iVar18,(uVar14 & 0xffffffff) << 3,0xdc0);
    piVar12[4] = puVar15;
    if (puVar15 == NULL) goto code_r0x08001e64;
    if (0 < piVar12[5]) {
        uVar14 = 0;
        do {
            scnprintf(&uStack_100,0xc,"",uVar14 & 0xffffffff);
            uVar13 = devm_nvmem_device_get(iVar18,&uStack_100);
            *(piVar12[4] + uVar14 * 8) = uVar13;
            puVar15 = piVar12[4];
            uVar23 = puVar15[uVar14];
            if (((uVar23 != 0x205) && (uVar14 == 0)) && (0xfffffffffffff000 < uVar23)) {
                uVar13 = devm_nvmem_device_get(iVar18,"");
                *piVar12[4] = uVar13;
                puVar15 = piVar12[4];
                uVar23 = *puVar15;
            }
            if (0xfffffffffffff000 < uVar23) {
                if (uVar23 == -0x205) goto code_r0x08001e94;
                _dev_err(iVar18,"",uVar14 & 0xffffffff,uVar23 & 0xffffffff);
                goto code_r0x08001e98;
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < piVar12[5]);
    }
    uVar23 = nvmem_device_read(*puVar15,0x45,1,auStack_10c);
    if (uVar23 < 0) {
        uVar23 = uVar23 & 0xffffffff;
        goto code_r0x08001e98;
    }
    *(piVar12 + 0x2c) = auStack_10c[0] + 1;
    if (piVar12[5] <= auStack_10c[0]) {
        _dev_err(iVar18,"");
        uVar23 = 0xffffffed;
        goto code_r0x08001e98;
    }
    uVar14 = (auStack_10c[0] + 1) * 0x75;
    *(piVar12 + 0x14) = uVar14 >> 2;
    iVar16 = devm_kmalloc(iVar18,uVar14 & 0xfffc,0xdc0);
    piVar12[1] = iVar16;
    if (iVar16 == 0) goto code_r0x08001e64;
    iVar16 = ipc_log_context_create(3,"",0);
    puVar21 = piVar12[4];
    piVar12[3] = iVar16;
    *(arg1 + 0xa8) = piVar12;
    uStack_104 = 0;
    auStack_108[0] = 0;
    uVar23 = nvmem_device_read(*puVar21,0x46,1,auStack_108);
    uVar3 = auStack_108[0];
    if (uVar23 < 0) {
code_r0x08001f00:
        uVar23 = uVar23 & 0xffffffff;
    }
    else {
        if (auStack_108[0] + 0x40 < 0x8b) {
            iVar16 = *piVar12;
            pcVar19 = "";
        }
        else {
            uVar23 = nvmem_device_read(*piVar12[4],0x47,1,auStack_108);
            if (uVar23 < 0) goto code_r0x08001f00;
            iVar11 = *(piVar12 + 0x2c);
            if (auStack_108[0] < iVar11) {
                iVar1 = *(piVar12 + 0x14);
                if (0 < iVar1) {
                    iVar25 = 1;
                    uVar22 = ((iVar11 * 0x75 & uVar3 + auStack_108[0] * 0x75 + iVar1 * -4 + -0x4b >> 0x1f) +
                              auStack_108[0] * 0x75 + uVar3 + iVar1 * -4) - 0x4b;
                    do {
                        uVar10 = iVar11 * 0x75;
                        uVar6 = 0;
                        if (uVar10 != 0) {
                            uVar6 = uVar22 / uVar10;
                        }
                        uVar6 = uVar22 - uVar6 * uVar10;
                        uVar10 = uVar6 / 0x75;
                        uVar6 = uVar6 % 0x75;
                        iVar11 = uVar6 + 0x4b;
                        if (uVar6 < 0x72) {
                            puVar20 = &uStack_104;
                            iVar16 = 4;
                            uVar13 = *(piVar12[4] + uVar10 * 8);
                        }
                        else {
                            uVar14 = 0x75 - uVar6;
                            uVar23 = nvmem_device_read(*(piVar12[4] + uVar10 * 8),iVar11,uVar14,&uStack_104);
                            if (uVar23 < 0) goto code_r0x08001f00;
                            iVar1 = *(piVar12 + 0x2c);
                            iVar11 = 0x4b;
                            iVar4 = 0;
                            if (iVar1 != 0) {
                                iVar4 = (uVar10 + 1) / iVar1;
                            }
                            uVar13 = *(piVar12[4] + ((uVar10 + 1) - iVar4 * iVar1) * 8);
                            iVar16 = 4 - uVar14;
                            puVar20 = &uStack_104 + uVar14;
                        }
                        uVar14 = nvmem_device_read(uVar13,iVar11,iVar16,puVar20);
                        uVar23 = uVar14 & 0xffffffff;
                        if (uVar14 < 0) goto code_r0x08001f64;
                        uVar10 = uStack_104._1_1_;
                        if (((uStack_104 != '\0') || (uVar10 != 0)) ||
                           ((uStack_104._2_1_ != '\0' || (uStack_104._3_1_ != '\0')))) {
                            uVar5 = uVar10 - 1;
                            iVar16 = piVar12[3];
                            uVar6 = uVar5 < 0x20 & 0x8fff8b61U >> (uVar5 & 0x1f);
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_88 = 0;
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
                            Stack_e8 = 0;
                            uStack_e2 = 0;
                            uStack_e0 = 0;
                            Stack_f0 = 0;
                            uStack_ea = 0;
    //switch table (1931 cases) at 0x8000188
                            switch(uVar5) {
                            case 0:
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                                bVar7 = uStack_104._3_1_ == '\0';
                                bVar8 = uStack_104._2_1_ == '\0';
                                uVar10 = scnprintf(&Stack_f0,0x80,"",uVar10 - 0xf);
                                uVar24 = bVar7 && bVar8;
                                uVar5 = uVar24 | uVar6 ^ 1;
                                if ((uStack_104._3_1_ != '\0') || (uVar5 != 0)) {
                                    if (0x80 < uVar10) {
code_r0x0800219c:
    //WARNING: Does not return
                                        pcVar9 = SoftwareBreakpoint(0x5512,0x80021a0);
                                        (*pcVar9)();
                                    }
                                    iVar11 = scnprintf(&Stack_f0 + uVar10,0x80 - uVar10,"");
                                    uVar10 = iVar11 + uVar10;
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    iVar11 = sym.pmic_pon_log_print_reason
                                                       (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x18,0x8000d50
                                                       );
                                    uVar10 = iVar11 + uVar10;
                                }
                                uVar6 = uVar6 & (uVar24 ^ 1);
                                if ((uStack_104._2_1_ != '\0' | uVar5) == 1) {
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    uVar13 = 0x8000af0;
                                    if (uStack_104._3_1_ == '\0' && uVar5 == 0) {
                                        uVar13 = 0x8000a63;
                                    }
                                    iVar11 = scnprintf(&Stack_f0 + uVar10,0x80 - uVar10,"",uVar13);
                                    uVar10 = iVar11 + uVar10;
                                    if (0x80 < uVar10) goto code_r0x0800219c;
                                    sym.pmic_pon_log_print_reason
                                              (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x10 & 0xff,0x8000d90);
                                }
                                break;
                            default:
                                scnprintf(&Stack_f0,0x80,"",uStack_104._1_1_,
                                          CONCAT11(uStack_104._2_1_,uStack_104._3_1_));
                            }
                            if (uVar6 != 0) {
                                _printk(0x80007da,&Stack_f0);
                            }
                            uVar14 = uStack_104;
                            if (uVar14 < 8) {
                                ipc_log_string(iVar16,"",*(obj.pmic_pon_state_label + uVar14 * 8),&Stack_f0);
                            }
                            else {
                                ipc_log_string(iVar16,"",uVar14,&Stack_f0);
                            }
                            iVar16 = strnlen(&Stack_f0,0x80);
                            if (iVar16 + 2U < 0x80) {
                                uVar14 = strlen(&Stack_f0);
                                if (0x7e < uVar14) goto code_r0x08002140;
                                *(&Stack_f0 + uVar14) = 10;
                                if (CONCAT26(uStack_ea,Stack_f0) == 0x63637553204e4f50 &&
                                    CONCAT62(Stack_e8,uStack_ea) == 0x6c75667373656363) {
                                    uVar14 = strlen(&Stack_f0);
                                    if (0x7e < uVar14) goto code_r0x08002140;
                                    *(&Stack_f0 + uVar14) = 10;
                                }
                            }
                            else {
                                _printk(0x8000955);
                            }
                            iVar16 = strnlen(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,0x1000);
                            iVar17 = strnlen(&Stack_f0,0x80);
                            if (iVar17 + iVar16 < 0x1000) {
                                strncat(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,&Stack_f0,
                                        iVar17);
                            }
                            else {
                                _printk(0x80004c8);
                            }
                            iVar16 = piVar12[2];
                            *(piVar12 + 2) = iVar16 + 1;
                            *(piVar12[1] + iVar16 * 4) = uStack_104;
                        }
                        if (*(piVar12 + 0x14) <= iVar25) break;
                        iVar11 = *(piVar12 + 0x2c);
                        uVar22 = uVar22 + 4;
                        iVar25 = iVar25 + 1;
                    } while( true );
                }
                uVar23 = 0;
                goto code_r0x08001f78;
            }
            iVar16 = *piVar12;
            pcVar19 = "";
        }
        _dev_err(iVar16,pcVar19,auStack_108[0]);
        uVar23 = 0xffffffea;
    }
code_r0x08001f64:
    _dev_err(iVar18,"",uVar23);
code_r0x08001f78:
    _segment.ehdr = kobject_create_and_add("",_devm_kmalloc);
    if (_segment.ehdr == 0) goto code_r0x08002108;
code_r0x08001f9c:
    iVar11 = sysfs_create_group(_segment.ehdr,obj.attr_group);
    if (iVar11 != 0) {
        _printk(0x8000845,"");
    }
    iVar18 = of_find_property(*(arg1 + 0x300),"",0);
    if (iVar18 != 0) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar22 = piVar12[2] - 1;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        Stack_e8 = 0;
        uStack_e2 = 0;
        uStack_e0 = 0;
        Stack_f0 = 0;
        uStack_ea = 0;
        if (-1 < uVar22) {
            bVar7 = false;
            uVar10 = 0;
            uVar6 = uVar22;
            do {
                uVar14 = uVar6;
                cVar2 = *(piVar12[1] + uVar14 * 4 + 1);
                if (cVar2 == '\b') {
                    uVar10 = *(piVar12[1] + uVar14 * 4 + 2);
                    uVar10 = (((uVar10 & 0xff00) << 0x10) >> 8 | uVar10 << 0x18) >> 0x10;
                }
                else if (cVar2 == '\x0e') {
                    if (bVar7) {
                        if (uVar10 < 1) goto code_r0x08002060;
                        bVar7 = true;
                        uVar10 = uVar10 - 1;
                    }
                    else {
                        bVar7 = true;
                        uVar22 = uVar6;
                    }
                }
                uVar6 = uVar6 - 1;
            } while (-1 < uVar6);
        }
        uVar14 = 0;
code_r0x08002060:
        if (uVar14 <= uVar22) {
            iVar18 = piVar12[1];
            do {
                iVar11 = uVar14;
                arg1 = iVar11;
                uVar3 = *(iVar18 + iVar11 * 4 + 1);
                if (uVar3 - 0x10 < 0xd) {
                    iVar16 = iVar18 + arg1 * 4;
                    uVar10 = *(iVar16 + 3);
                    if (uVar10 == 0) {
                        uVar3 = *(iVar16 + 2);
                        if ((uVar3 & 0xbf) == 0) goto code_r0x0800207c;
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
                        iVar18 = piVar12[1];
                        pcVar19 = "";
                    }
                    else {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar10,0x8000d50);
                        iVar18 = piVar12[1];
                        pcVar19 = "";
                    }
                    panic(pcVar19,*(iVar18 + arg1 * 4 + 1) - 0xf,&Stack_f0);
                    goto code_r0x0800219c;
                }
                if (uVar3 == 10) {
                    uVar3 = *(iVar18 + arg1 * 4 + 3);
                    uVar10 = uVar3;
                    if (uVar3 != 0) {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000dd0);
                        panic("",&Stack_f0);
code_r0x080021c4:
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar10,0x8000d50);
                        iVar18 = panic("",&Stack_f0);
                        *extraout_x18 = sym.pmic_pon_log_remove;
                        ipc_log_context_destroy(*(*(iVar18 + 0xa8) + 0x18));
                        if (_segment.ehdr != 0) {
                            sysfs_remove_group(_segment.ehdr,obj.attr_group);
                            kobject_put(_segment.ehdr);
                        }
                        return 0;
                    }
                }
                else if (uVar3 == 9) {
                    iVar16 = iVar18 + arg1 * 4;
                    uVar3 = *(iVar16 + 3);
                    uVar10 = uVar3;
                    if (uVar3 != 0) goto code_r0x080021c4;
                    uVar3 = *(iVar16 + 2);
                    if ((uVar3 & 0xbf) != 0) goto code_r0x080020e4;
                }
code_r0x0800207c:
                uVar14 = iVar11 + 1U;
                if (uVar22 < iVar11 + 1U) break;
            } while( true );
        }
    }
    goto code_r0x08001e98;
code_r0x080020e4:
    sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
    panic("",&Stack_f0);
code_r0x08002108:
    _printk(0x80008eb,"");
    goto code_r0x08001f9c;
}


// ===== sym.pmic_pon_log_remove @ 0x080021e8 (size 88) =====

ulong sym.pmic_pon_log_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_context_destroy(*(*(arg1 + 0xa8) + 0x18));
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_group);
        kobject_put(_segment.ehdr);
    }
    return 0;
}


// ===== sym.pmic_pon_log_print_reason @ 0x08002240 (size 552) =====

//WARNING: Type propagation algorithm not settling

int sym.pmic_pon_log_print_reason(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uchar uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 & 0xff) == 0) {
        iVar5 = scnprintf(arg1,arg2 & 0xffffffffU,"");
    }
    else {
        uVar4 = (arg3 & 1) == 0;
        uVar8 = arg3 & 0xff;
        if ((arg3 & 1) == 0) {
            iVar5 = 0;
        }
        else {
            iVar5 = scnprintf(arg1,arg2 & 0xffffffffU,"",0x8000a63,*arg4);
        }
        uVar1 = 0x8000a63;
        uVar2 = 0x8000a56;
        iVar6 = arg2;
        if ((uVar8 >> 1 & 1) != 0) {
            uVar3 = uVar1;
            if ((arg3 & 1) != 0) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 8));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 2 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 0x10));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 3 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 0x18));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 4 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 0x20));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 5 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 0x28));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 6 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar3,*(arg4 + 0x30));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if (uVar8 >> 7 != 0) {
            if (!uVar4) {
                uVar1 = uVar2;
            }
            iVar6 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"",uVar1,*(arg4 + 0x38));
            iVar5 = iVar6 + iVar5;
        }
    }
    return iVar5;
}


// ===== sym.pon_log_full_show @ 0x08002468 (size 92) =====

int64_t sym.pon_log_full_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = strnlen(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,0x1000);
    iVar1 = snprintf(arg1,iVar2 + 1,0x8000b2a,reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080024c4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002508

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
    //switch table (4 cases) at 0x80001e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800251c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002524 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002558 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt);
    return;
}

