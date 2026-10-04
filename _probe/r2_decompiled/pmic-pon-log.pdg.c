// decompiled from pmic-pon-log by radare2+r2ghidra (pdg); repaired by ko_repair

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====



//WARNING: Switch with 1 destination removed at 0x08002508

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x80010f0 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080024c8;
        }
        if (arg1 != -0xec78b8726b9c1e8) goto code_r0x080024c8;
        pcVar2 = sym.pon_log_full_show.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080024c8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080024c8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800251c);
    (*pcVar1)();
}




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


//WARNING: Type propagation algorithm not settling

uint64_t sym.pmic_pon_log_probe.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt(int64_t param_1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    bool bVar5;
    uint16_t uVar6;
    bool bVar7;
    code *pcVar8;
    uint32_t uVar9;
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
    uint16_t uVar22;
    uint32_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    int iVar27;
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
        uVar24 = 0xfffffff4;
code_r0x08001e98:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_70) {
            return uVar24 & 0xffffffff;
        }
        __stack_chk_fail();
code_r0x08002140:
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(1,0x8002144);
        (*pcVar8)();
    }
    uVar13 = *(param_1 + 0x300);
    *piVar12 = iVar18;
    uVar14 = of_count_phandle_with_args(uVar13,"nvmem",0);
    uVar24 = uVar14 & 0xffffffff;
    iVar11 = uVar14;
    if (iVar11 < 0) {
        if (iVar11 == -0x205) {
code_r0x08001e94:
            uVar24 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar18,"failed to get nvmem count, ret=%d\n",uVar24);
        }
        goto code_r0x08001e98;
    }
    if (iVar11 == 0) {
        _dev_err(iVar18,"nvmem property empty\n");
        uVar24 = 0xffffffea;
        goto code_r0x08001e98;
    }
    *(piVar12 + 5) = iVar11;
    puVar15 = devm_kmalloc(iVar18,(uVar14 & 0xffffffff) << 3,0xdc0);
    piVar12[4] = puVar15;
    if (puVar15 == NULL) goto code_r0x08001e64;
    if (0 < piVar12[5]) {
        uVar14 = 0;
        do {
            scnprintf(&uStack_100,0xc,"pon_log%d",uVar14 & 0xffffffff);
            uVar13 = devm_nvmem_device_get(iVar18,&uStack_100);
            *(piVar12[4] + uVar14 * 8) = uVar13;
            puVar15 = piVar12[4];
            uVar24 = puVar15[uVar14];
            if (((uVar24 != 0x205) && (uVar14 == 0)) && (0xfffffffffffff000 < uVar24)) {
                uVar13 = devm_nvmem_device_get(iVar18,"pon_log");
                *piVar12[4] = uVar13;
                puVar15 = piVar12[4];
                uVar24 = *puVar15;
            }
            if (0xfffffffffffff000 < uVar24) {
                if (uVar24 == -0x205) goto code_r0x08001e94;
                _dev_err(iVar18,"failed to get nvmem device %d, ret=%d\n",uVar14 & 0xffffffff,uVar24 & 0xffffffff);
                goto code_r0x08001e98;
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < piVar12[5]);
    }
    uVar24 = nvmem_device_read(*puVar15,0x45,1,auStack_10c);
    if (uVar24 < 0) {
        uVar24 = uVar24 & 0xffffffff;
        goto code_r0x08001e98;
    }
    *(piVar12 + 0x2c) = auStack_10c[0] + 1;
    if (piVar12[5] <= auStack_10c[0]) {
        _dev_err(iVar18,"Missing nvmem handles; found %d, expected %d\n");
        uVar24 = 0xffffffed;
        goto code_r0x08001e98;
    }
    uVar14 = (auStack_10c[0] + 1) * 0x75;
    *(piVar12 + 0x14) = uVar14 >> 2;
    iVar16 = devm_kmalloc(iVar18,uVar14 & 0xfffc,0xdc0);
    piVar12[1] = iVar16;
    if (iVar16 == 0) goto code_r0x08001e64;
    iVar16 = ipc_log_context_create(3,"pmic_pon",0);
    puVar21 = piVar12[4];
    piVar12[3] = iVar16;
    *(param_1 + 0xa8) = piVar12;
    uStack_104 = 0;
    auStack_108[0] = 0;
    uVar24 = nvmem_device_read(*puVar21,0x46,1,auStack_108);
    uVar3 = auStack_108[0];
    if (uVar24 < 0) {
code_r0x08001f00:
        uVar24 = uVar24 & 0xffffffff;
    }
    else {
        if (auStack_108[0] + 0x40 < 0x8b) {
            iVar16 = *piVar12;
            pcVar19 = "unexpected PON log end address: %02X\n";
        }
        else {
            uVar24 = nvmem_device_read(*piVar12[4],0x47,1,auStack_108);
            if (uVar24 < 0) goto code_r0x08001f00;
            iVar11 = *(piVar12 + 0x2c);
            if (auStack_108[0] < iVar11) {
                iVar1 = *(piVar12 + 0x14);
                if (0 < iVar1) {
                    iVar27 = 1;
                    uVar23 = ((iVar11 * 0x75 & uVar3 + auStack_108[0] * 0x75 + iVar1 * -4 + -0x4b >> 0x1f) +
                              auStack_108[0] * 0x75 + uVar3 + iVar1 * -4) - 0x4b;
                    do {
                        uVar9 = iVar11 * 0x75;
                        uVar25 = 0;
                        if (uVar9 != 0) {
                            uVar25 = uVar23 / uVar9;
                        }
                        uVar25 = uVar23 - uVar25 * uVar9;
                        uVar9 = uVar25 / 0x75;
                        uVar25 = uVar25 % 0x75;
                        iVar11 = uVar25 + 0x4b;
                        if (uVar25 < 0x72) {
                            puVar20 = &uStack_104;
                            iVar16 = 4;
                            uVar13 = *(piVar12[4] + uVar9 * 8);
                        }
                        else {
                            uVar14 = 0x75 - uVar25;
                            uVar24 = nvmem_device_read(*(piVar12[4] + uVar9 * 8),iVar11,uVar14,&uStack_104);
                            if (uVar24 < 0) goto code_r0x08001f00;
                            iVar1 = *(piVar12 + 0x2c);
                            iVar11 = 0x4b;
                            iVar4 = 0;
                            if (iVar1 != 0) {
                                iVar4 = (uVar9 + 1) / iVar1;
                            }
                            uVar13 = *(piVar12[4] + ((uVar9 + 1) - iVar4 * iVar1) * 8);
                            iVar16 = 4 - uVar14;
                            puVar20 = &uStack_104 + uVar14;
                        }
                        uVar14 = nvmem_device_read(uVar13,iVar11,iVar16,puVar20);
                        uVar24 = uVar14 & 0xffffffff;
                        if (uVar14 < 0) goto code_r0x08001f64;
                        uVar9 = uStack_104._1_1_;
                        uVar22 = uStack_104._3_1_;
                        if (((uStack_104 == '\0') && (uVar9 == 0)) && ((uStack_104._2_1_ == '\0' && (uVar22 == 0))))
                        goto code_r0x08001c70;
                        uVar10 = uVar9 - 1;
                        iVar16 = piVar12[3];
                        uVar6 = CONCAT11(uStack_104._2_1_,uStack_104._3_1_);
                        uVar25 = uVar10 < 0x20 & 0x8fff8b61U >> (uVar10 & 0x1f);
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
                        uVar26 = uVar25;
                        switch(uVar10) {
                        case 0:
                            if (uVar6 < 0x18a0) {
                                if (uVar6 < 0x202) {
                                    iVar17 = 0;
                                    switch(uVar6) {
                                    case 0x84:
                                        break;
                                    case 0x85:
                                        iVar17 = 1;
                                        break;
                                    case 0x86:
                                        iVar17 = 2;
                                        break;
                                    case 0x87:
                                        iVar17 = 3;
                                        break;
                                    default:
code_r0x08001d24:
                                        pcVar19 = "PON Trigger: ";
                                        goto code_r0x08001e18;
                                    }
                                }
                                else if (uVar6 == 0x202) {
                                    iVar17 = 4;
                                }
                                else if (uVar6 == 0x621) {
                                    iVar17 = 5;
                                }
                                else {
                                    if (uVar6 != 0x640) goto code_r0x08001d24;
                                    iVar17 = 6;
                                }
                            }
                            else if (uVar6 < 0x31c2) {
                                if (uVar6 == 0x18a0) {
                                    iVar17 = 7;
                                }
                                else if (uVar6 == 0x18c0) {
                                    iVar17 = 8;
                                }
                                else {
                                    if (uVar6 != 0x2763) goto code_r0x08001d24;
                                    iVar17 = 9;
                                }
                            }
                            else if (uVar6 == 0x31c2) {
                                iVar17 = 10;
                            }
                            else if (uVar6 == 0x71c2) {
                                iVar17 = 0xb;
                            }
                            else {
                                if (uVar6 != 0x8732) goto code_r0x08001d24;
                                iVar17 = 0xc;
                            }
                            uVar9 = scnprintf(&Stack_f0,0x80,"PON Trigger: ");
                            if (uVar9 < 0x81) {
                                pcVar8 = obj.pmic_pon_pon_trigger_map;
                                goto code_r0x08001dcc;
                            }
                            goto code_r0x0800219c;
                        case 1:
                            pcVar19 = "OTP Copy Complete: last addr written=0x%04X";
                            break;
                        case 2:
                            pcVar19 = "Trim Complete: %u bytes written";
                            break;
                        case 3:
                            pcVar19 = "XVLO Check Complete";
                            goto code_r0x080018f0;
                        case 4:
                            pcVar19 = "PMICs Detected: SID Mask=0x%04X";
                            break;
                        case 5:
                            if (uVar6 < 0x11d0) {
                                iVar17 = 0;
                                switch(uVar6) {
                                case 0x80:
                                    break;
                                case 0x81:
                                    iVar17 = 1;
                                    break;
                                case 0x82:
                                    iVar17 = 2;
                                    break;
                                case 0x83:
                                    iVar17 = 3;
                                    break;
                                case 0x84:
                                    iVar17 = 4;
                                    break;
                                case 0x85:
                                    iVar17 = 5;
                                    break;
                                case 0x86:
                                    iVar17 = 6;
                                    break;
                                case 0x87:
                                    iVar17 = 7;
                                    break;
                                default:
code_r0x08001e08:
                                    pcVar19 = "Reset Trigger: ";
code_r0x08001e18:
                                    uVar9 = scnprintf(&Stack_f0,0x80,pcVar19);
                                    if (uVar9 < 0x81) {
                                        scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"SID=0x%X, PID=0x%02X, IRQ=0x%X",
                                                  uStack_104._2_1_ >> 4,uVar6 >> 4 & 0xff,uStack_104 >> 0x18 & 7);
                                        goto joined_r0x080016e0;
                                    }
                                    goto code_r0x0800219c;
                                }
                            }
                            else if (uVar6 < 0x31f5) {
                                if (uVar6 == 0x11d0) {
                                    iVar17 = 10;
                                }
                                else if (uVar6 == 0x21d0) {
                                    iVar17 = 0xb;
                                }
                                else {
                                    if (uVar6 != 0x21e3) goto code_r0x08001e08;
                                    iVar17 = 8;
                                }
                            }
                            else if (uVar6 == 0x31f5) {
                                iVar17 = 9;
                            }
                            else if (uVar6 == 0x41d0) {
                                iVar17 = 0xc;
                            }
                            else {
                                if (uVar6 != 0x51d0) goto code_r0x08001e08;
                                iVar17 = 0xd;
                            }
                            uVar9 = scnprintf(&Stack_f0,0x80,"Reset Trigger: ");
                            if (uVar9 < 0x81) {
                                pcVar8 = obj.pmic_pon_reset_trigger_map;
code_r0x08001dcc:
                                scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,0x8000441,*(pcVar8 + iVar17 * 0x10 + 8));
                                goto joined_r0x080016e0;
                            }
                            goto code_r0x0800219c;
                        case 6:
                            if ((7 < uVar22) || ((0x6dUL >> (uStack_104._3_1_ & 0x3f) & 1) != 0)) {
                                pcVar19 = "Reset Type: UNKNOWN (%u)";
                                uVar6 = uVar22;
                                break;
                            }
                            scnprintf(&Stack_f0,0x80,"Reset Type: %s",
                                      *(obj.pmic_pon_reset_type_label + uStack_104._3_1_ * 8));
                            goto joined_r0x080016e0;
                        case 7:
                            pcVar19 = "Warm Reset Count: %u";
                            break;
                        case 8:
                            if (uVar22 == 0) {
                                uVar26 = 1;
                                if ((uStack_104._2_1_ == '\0') || (uVar25 == 0)) {
                                    uVar25 = 0;
                                    uVar9 = 1;
                                    goto code_r0x08001a88;
                                }
                                uVar14 = 0;
                                uVar13 = 0x8000a63;
                            }
                            else {
                                uVar9 = uVar25 ^ 1;
code_r0x08001a88:
                                uVar10 = scnprintf(&Stack_f0,0x80,"FAULT_REASON1=");
                                if (0x80 < uVar10) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x18,0x8000d50);
                                uVar26 = uVar25 != 0;
                                if ((uStack_104._2_1_ == '\0' & (uVar9 ^ 0xffffffff)) != 0) goto joined_r0x080016e0;
                                uVar14 = iVar11 + uVar10;
                                if (0x80 < iVar11 + uVar10) {
code_r0x0800219c:
    //WARNING: Does not return
                                    pcVar8 = SoftwareBreakpoint(0x5512,0x80021a0);
                                    (*pcVar8)();
                                }
                                uVar13 = 0x8000af0;
                                if (uVar9 == 0 && uStack_104._3_1_ == '\0') {
                                    uVar13 = 0x8000a63;
                                }
                            }
                            uVar9 = uVar14;
                            iVar17 = &Stack_f0 + uVar14;
                            goto code_r0x08001580;
                        case 9:
                            uVar9 = scnprintf(&Stack_f0,0x80,"FAULT_REASON3=");
                            if (uVar9 < 0x81) {
                                sym.pmic_pon_log_print_reason
                                          (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x18,0x8000dd0);
                                if (uVar22 != 0) goto joined_r0x080016e0;
                                goto code_r0x08001b40;
                            }
                            goto code_r0x0800219c;
                        case 10:
                            pcVar19 = "PBS PC at Fault: 0x%04X";
                            break;
                        case 0xb:
                            bVar5 = uStack_104._3_1_ == 0;
                            bVar7 = uStack_104._2_1_ == '\0';
                            uVar9 = scnprintf(&Stack_f0,0x80,"Fundamental Reset: ");
                            uVar26 = bVar5 && bVar7;
                            uVar10 = uVar26 | uVar25 ^ 1;
                            if ((uStack_104._2_1_ != '\0') || (uVar10 != 0)) {
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"PON_PBL_STATUS=");
                                uVar9 = iVar11 + uVar9;
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x10 & 0xff,
                                                    0x8000e10);
                                uVar9 = iVar11 + uVar9;
                            }
                            uVar26 = uVar25 & (uVar26 ^ 1);
                            if ((uStack_104._3_1_ != '\0' | uVar10) != 1) goto joined_r0x080016e0;
                            if (uVar9 < 0x81) {
                                uVar13 = 0x8000af0;
                                if (uStack_104._2_1_ == '\0' && uVar10 == 0) {
                                    uVar13 = 0x8000a63;
                                }
                                iVar11 = scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"%sS3_RESET_REASON=",uVar13);
                                uVar9 = iVar11 + uVar9;
                                if (uVar9 < 0x81) {
                                    iVar17 = &Stack_f0 + uVar9;
                                    pcVar8 = obj.pmic_pon_s3_reset_reason;
                                    uVar3 = uStack_104._3_1_;
                                    goto code_r0x080015a8;
                                }
                            }
                            goto code_r0x0800219c;
                        case 0xc:
                            pcVar19 = "Begin PON Sequence";
                            goto code_r0x080018f0;
                        case 0xd:
                            pcVar19 = "PON Successful";
                            goto code_r0x080018f0;
                        case 0xe:
                            pcVar19 = "Waiting on PS_HOLD";
code_r0x080018f0:
                            scnprintf(&Stack_f0,0x80,pcVar19);
                            goto joined_r0x080016e0;
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
                            bVar5 = uStack_104._3_1_ == 0;
                            bVar7 = uStack_104._2_1_ == '\0';
                            uVar9 = scnprintf(&Stack_f0,0x80,"PMIC SID%u ",uVar9 - 0xf);
                            uVar14 = uVar9;
                            uVar26 = bVar5 && bVar7;
                            uVar10 = uVar26 | uVar25 ^ 1;
                            if ((uStack_104._3_1_ != '\0') || (uVar10 != 0)) {
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = scnprintf(&Stack_f0 + uVar14,0x80 - uVar9,"FAULT_REASON1=");
                                uVar9 = iVar11 + uVar9;
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x18,0x8000d50);
                                uVar14 = iVar11 + uVar9;
                            }
                            uVar9 = uVar14;
                            uVar26 = uVar25 & (uVar26 ^ 1);
                            if ((uStack_104._2_1_ != '\0' | uVar10) != 1) goto joined_r0x080016e0;
                            if (uVar9 < 0x81) {
                                iVar17 = &Stack_f0 + uVar14;
                                uVar13 = 0x8000af0;
                                if (uStack_104._3_1_ == '\0' && uVar10 == 0) {
                                    uVar13 = 0x8000a63;
                                }
code_r0x08001580:
                                iVar11 = scnprintf(iVar17,0x80 - uVar9,"%sFAULT_REASON2=",uVar13);
                                uVar9 = iVar11 + uVar9;
                                if (uVar9 < 0x81) {
                                    iVar17 = &Stack_f0 + uVar9;
                                    pcVar8 = obj.pmic_pon_fault_reason2;
                                    uVar3 = uStack_104._2_1_;
code_r0x080015a8:
                                    sym.pmic_pon_log_print_reason(iVar17,0x80 - uVar9,uVar3,pcVar8);
                                    goto joined_r0x080016e0;
                                }
                            }
                            goto code_r0x0800219c;
                        default:
                            scnprintf(&Stack_f0,0x80,"Unknown Event (0x%02X): data=0x%04X",uStack_104._1_1_,uVar6);
                            if (uVar25 == 0) goto code_r0x08001b40;
                            goto code_r0x08001df4;
                        case 0x1f:
                            uVar13 = 0x80004a8;
                            if (uVar6 != 0) {
                                uVar13 = 0x8000a63;
                            }
                            scnprintf(&Stack_f0,0x80,"VREG Check: %sVREG_FAULT detected",uVar13);
                            if ((uVar25 != 0) && (uVar6 != 0)) goto code_r0x08001df4;
                            goto code_r0x08001b40;
                        }
                        scnprintf(&Stack_f0,0x80,pcVar19,uVar6);
joined_r0x080016e0:
                        if (uVar26 != 0) {
code_r0x08001df4:
                            _printk(0x80007da,&Stack_f0);
                        }
code_r0x08001b40:
                        uVar14 = uStack_104;
                        if (uVar14 < 8) {
                            ipc_log_string(iVar16,"State=%s; %s\n",*(obj.pmic_pon_state_label + uVar14 * 8),&Stack_f0
                                          );
                        }
                        else {
                            ipc_log_string(iVar16,"State=Unknown (0x%02X); %s\n",uVar14,&Stack_f0);
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
                            strncat(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,&Stack_f0,iVar17
                                   );
                        }
                        else {
                            _printk(0x80004c8);
                        }
                        iVar16 = piVar12[2];
                        *(piVar12 + 2) = iVar16 + 1;
                        *(piVar12[1] + iVar16 * 4) = uStack_104;
code_r0x08001c70:
                        if (*(piVar12 + 0x14) <= iVar27) break;
                        iVar11 = *(piVar12 + 0x2c);
                        uVar23 = uVar23 + 4;
                        iVar27 = iVar27 + 1;
                    } while( true );
                }
                uVar24 = 0;
                goto code_r0x08001f78;
            }
            iVar16 = *piVar12;
            pcVar19 = "unexpected PON log end SDAM index: %d\n";
        }
        _dev_err(iVar16,pcVar19,auStack_108[0]);
        uVar24 = 0xffffffea;
    }
code_r0x08001f64:
    _dev_err(iVar18,"PMIC PON log parsing failed, ret=%d\n",uVar24);
code_r0x08001f78:
    _segment.ehdr = kobject_create_and_add("pmic_pon_log",_devm_kmalloc);
    if (_segment.ehdr == 0) goto code_r0x08002108;
code_r0x08001f9c:
    iVar11 = sysfs_create_group(_segment.ehdr,obj.attr_group);
    if (iVar11 != 0) {
        _printk(0x8000845,"pmic_pon_log_probe");
    }
    iVar18 = of_find_property(*(param_1 + 0x300),"qcom,pmic-fault-panic",0);
    if (iVar18 != 0) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar23 = piVar12[2] - 1;
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
        if (-1 < uVar23) {
            bVar5 = false;
            uVar9 = 0;
            uVar25 = uVar23;
            do {
                uVar14 = uVar25;
                cVar2 = *(piVar12[1] + uVar14 * 4 + 1);
                if (cVar2 == '\b') {
                    uVar9 = *(piVar12[1] + uVar14 * 4 + 2);
                    uVar9 = (((uVar9 & 0xff00) << 0x10) >> 8 | uVar9 << 0x18) >> 0x10;
                }
                else if (cVar2 == '\x0e') {
                    if (bVar5) {
                        if (uVar9 < 1) goto code_r0x08002060;
                        bVar5 = true;
                        uVar9 = uVar9 - 1;
                    }
                    else {
                        bVar5 = true;
                        uVar23 = uVar25;
                    }
                }
                uVar25 = uVar25 - 1;
            } while (-1 < uVar25);
        }
        uVar14 = 0;
code_r0x08002060:
        if (uVar14 <= uVar23) {
            iVar18 = piVar12[1];
            do {
                iVar11 = uVar14;
                param_1 = iVar11;
                uVar3 = *(iVar18 + iVar11 * 4 + 1);
                if (uVar3 - 0x10 < 0xd) {
                    iVar16 = iVar18 + param_1 * 4;
                    uVar9 = *(iVar16 + 3);
                    if (uVar9 == 0) {
                        uVar3 = *(iVar16 + 2);
                        if ((uVar3 & 0xbf) == 0) goto code_r0x0800207c;
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
                        iVar18 = piVar12[1];
                        pcVar19 = "PMIC SID%u FAULT; FAULT_REASON2=%s";
                    }
                    else {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar9,0x8000d50);
                        iVar18 = piVar12[1];
                        pcVar19 = "PMIC SID%u FAULT; FAULT_REASON1=%s";
                    }
                    panic(pcVar19,*(iVar18 + param_1 * 4 + 1) - 0xf,&Stack_f0);
                    goto code_r0x0800219c;
                }
                if (uVar3 == 10) {
                    uVar3 = *(iVar18 + param_1 * 4 + 3);
                    uVar9 = uVar3;
                    if (uVar3 != 0) {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000dd0);
                        panic("PMIC SID0 FAULT; FAULT_REASON3=%s",&Stack_f0);
code_r0x080021c4:
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar9,0x8000d50);
                        iVar18 = panic("PMIC SID0 FAULT; FAULT_REASON1=%s",&Stack_f0);
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
                    uVar9 = uVar3;
                    if (uVar3 != 0) goto code_r0x080021c4;
                    uVar3 = *(iVar16 + 2);
                    if ((uVar3 & 0xbf) != 0) goto code_r0x080020e4;
                }
code_r0x0800207c:
                uVar14 = iVar11 + 1U;
                if (uVar23 < iVar11 + 1U) break;
            } while( true );
        }
    }
    goto code_r0x08001e98;
code_r0x080020e4:
    sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
    panic("PMIC SID0 FAULT; FAULT_REASON2=%s",&Stack_f0);
code_r0x08002108:
    _printk(0x80008eb,"pmic_pon_log_probe");
    goto code_r0x08001f9c;
}



// ===== sym.pmic_pon_log_probe @ 0x08001100 (size 10772) =====


//WARNING: Type propagation algorithm not settling

uint64_t sym.pmic_pon_log_probe(int64_t arg1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    bool bVar5;
    uint16_t uVar6;
    bool bVar7;
    code *pcVar8;
    uint32_t uVar9;
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
    uint16_t uVar22;
    uint32_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    int iVar27;
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
        uVar24 = 0xfffffff4;
code_r0x08001e98:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_70) {
            return uVar24 & 0xffffffff;
        }
        __stack_chk_fail();
code_r0x08002140:
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(1,0x8002144);
        (*pcVar8)();
    }
    uVar13 = *(arg1 + 0x300);
    *piVar12 = iVar18;
    uVar14 = of_count_phandle_with_args(uVar13,"nvmem",0);
    uVar24 = uVar14 & 0xffffffff;
    iVar11 = uVar14;
    if (iVar11 < 0) {
        if (iVar11 == -0x205) {
code_r0x08001e94:
            uVar24 = 0xfffffdfb;
        }
        else {
            _dev_err(iVar18,"failed to get nvmem count, ret=%d\n",uVar24);
        }
        goto code_r0x08001e98;
    }
    if (iVar11 == 0) {
        _dev_err(iVar18,"nvmem property empty\n");
        uVar24 = 0xffffffea;
        goto code_r0x08001e98;
    }
    *(piVar12 + 5) = iVar11;
    puVar15 = devm_kmalloc(iVar18,(uVar14 & 0xffffffff) << 3,0xdc0);
    piVar12[4] = puVar15;
    if (puVar15 == NULL) goto code_r0x08001e64;
    if (0 < piVar12[5]) {
        uVar14 = 0;
        do {
            scnprintf(&uStack_100,0xc,"pon_log%d",uVar14 & 0xffffffff);
            uVar13 = devm_nvmem_device_get(iVar18,&uStack_100);
            *(piVar12[4] + uVar14 * 8) = uVar13;
            puVar15 = piVar12[4];
            uVar24 = puVar15[uVar14];
            if (((uVar24 != 0x205) && (uVar14 == 0)) && (0xfffffffffffff000 < uVar24)) {
                uVar13 = devm_nvmem_device_get(iVar18,"pon_log");
                *piVar12[4] = uVar13;
                puVar15 = piVar12[4];
                uVar24 = *puVar15;
            }
            if (0xfffffffffffff000 < uVar24) {
                if (uVar24 == -0x205) goto code_r0x08001e94;
                _dev_err(iVar18,"failed to get nvmem device %d, ret=%d\n",uVar14 & 0xffffffff,uVar24 & 0xffffffff);
                goto code_r0x08001e98;
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < piVar12[5]);
    }
    uVar24 = nvmem_device_read(*puVar15,0x45,1,auStack_10c);
    if (uVar24 < 0) {
        uVar24 = uVar24 & 0xffffffff;
        goto code_r0x08001e98;
    }
    *(piVar12 + 0x2c) = auStack_10c[0] + 1;
    if (piVar12[5] <= auStack_10c[0]) {
        _dev_err(iVar18,"Missing nvmem handles; found %d, expected %d\n");
        uVar24 = 0xffffffed;
        goto code_r0x08001e98;
    }
    uVar14 = (auStack_10c[0] + 1) * 0x75;
    *(piVar12 + 0x14) = uVar14 >> 2;
    iVar16 = devm_kmalloc(iVar18,uVar14 & 0xfffc,0xdc0);
    piVar12[1] = iVar16;
    if (iVar16 == 0) goto code_r0x08001e64;
    iVar16 = ipc_log_context_create(3,"pmic_pon",0);
    puVar21 = piVar12[4];
    piVar12[3] = iVar16;
    *(arg1 + 0xa8) = piVar12;
    uStack_104 = 0;
    auStack_108[0] = 0;
    uVar24 = nvmem_device_read(*puVar21,0x46,1,auStack_108);
    uVar3 = auStack_108[0];
    if (uVar24 < 0) {
code_r0x08001f00:
        uVar24 = uVar24 & 0xffffffff;
    }
    else {
        if (auStack_108[0] + 0x40 < 0x8b) {
            iVar16 = *piVar12;
            pcVar19 = "unexpected PON log end address: %02X\n";
        }
        else {
            uVar24 = nvmem_device_read(*piVar12[4],0x47,1,auStack_108);
            if (uVar24 < 0) goto code_r0x08001f00;
            iVar11 = *(piVar12 + 0x2c);
            if (auStack_108[0] < iVar11) {
                iVar1 = *(piVar12 + 0x14);
                if (0 < iVar1) {
                    iVar27 = 1;
                    uVar23 = ((iVar11 * 0x75 & uVar3 + auStack_108[0] * 0x75 + iVar1 * -4 + -0x4b >> 0x1f) +
                              auStack_108[0] * 0x75 + uVar3 + iVar1 * -4) - 0x4b;
                    do {
                        uVar9 = iVar11 * 0x75;
                        uVar25 = 0;
                        if (uVar9 != 0) {
                            uVar25 = uVar23 / uVar9;
                        }
                        uVar25 = uVar23 - uVar25 * uVar9;
                        uVar9 = uVar25 / 0x75;
                        uVar25 = uVar25 % 0x75;
                        iVar11 = uVar25 + 0x4b;
                        if (uVar25 < 0x72) {
                            puVar20 = &uStack_104;
                            iVar16 = 4;
                            uVar13 = *(piVar12[4] + uVar9 * 8);
                        }
                        else {
                            uVar14 = 0x75 - uVar25;
                            uVar24 = nvmem_device_read(*(piVar12[4] + uVar9 * 8),iVar11,uVar14,&uStack_104);
                            if (uVar24 < 0) goto code_r0x08001f00;
                            iVar1 = *(piVar12 + 0x2c);
                            iVar11 = 0x4b;
                            iVar4 = 0;
                            if (iVar1 != 0) {
                                iVar4 = (uVar9 + 1) / iVar1;
                            }
                            uVar13 = *(piVar12[4] + ((uVar9 + 1) - iVar4 * iVar1) * 8);
                            iVar16 = 4 - uVar14;
                            puVar20 = &uStack_104 + uVar14;
                        }
                        uVar14 = nvmem_device_read(uVar13,iVar11,iVar16,puVar20);
                        uVar24 = uVar14 & 0xffffffff;
                        if (uVar14 < 0) goto code_r0x08001f64;
                        uVar9 = uStack_104._1_1_;
                        uVar22 = uStack_104._3_1_;
                        if (((uStack_104 == '\0') && (uVar9 == 0)) && ((uStack_104._2_1_ == '\0' && (uVar22 == 0))))
                        goto code_r0x08001c70;
                        uVar10 = uVar9 - 1;
                        iVar16 = piVar12[3];
                        uVar6 = CONCAT11(uStack_104._2_1_,uStack_104._3_1_);
                        uVar25 = uVar10 < 0x20 & 0x8fff8b61U >> (uVar10 & 0x1f);
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
                        uVar26 = uVar25;
    //switch table (933 cases) at 0x8000188
                        switch(uVar10) {
                        case 0:
                            if (uVar6 < 0x18a0) {
                                if (uVar6 < 0x202) {
                                    iVar17 = 0;
    //switch table (3 cases) at 0x80001d8
                                    switch(uVar6) {
                                    case 0x84:
                                        break;
                                    case 0x85:
                                        iVar17 = 1;
                                        break;
                                    case 0x86:
                                        iVar17 = 2;
                                        break;
                                    case 0x87:
                                        iVar17 = 3;
                                        break;
                                    default:
code_r0x08001d24:
                                        pcVar19 = "PON Trigger: ";
                                        goto code_r0x08001e18;
                                    }
                                }
                                else if (uVar6 == 0x202) {
                                    iVar17 = 4;
                                }
                                else if (uVar6 == 0x621) {
                                    iVar17 = 5;
                                }
                                else {
                                    if (uVar6 != 0x640) goto code_r0x08001d24;
                                    iVar17 = 6;
                                }
                            }
                            else if (uVar6 < 0x31c2) {
                                if (uVar6 == 0x18a0) {
                                    iVar17 = 7;
                                }
                                else if (uVar6 == 0x18c0) {
                                    iVar17 = 8;
                                }
                                else {
                                    if (uVar6 != 0x2763) goto code_r0x08001d24;
                                    iVar17 = 9;
                                }
                            }
                            else if (uVar6 == 0x31c2) {
                                iVar17 = 10;
                            }
                            else if (uVar6 == 0x71c2) {
                                iVar17 = 0xb;
                            }
                            else {
                                if (uVar6 != 0x8732) goto code_r0x08001d24;
                                iVar17 = 0xc;
                            }
                            uVar9 = scnprintf(&Stack_f0,0x80,"PON Trigger: ");
                            if (uVar9 < 0x81) {
                                pcVar8 = obj.pmic_pon_pon_trigger_map;
                                goto code_r0x08001dcc;
                            }
                            goto code_r0x0800219c;
                        case 1:
                            pcVar19 = "OTP Copy Complete: last addr written=0x%04X";
                            break;
                        case 2:
                            pcVar19 = "Trim Complete: %u bytes written";
                            break;
                        case 3:
                            pcVar19 = "XVLO Check Complete";
                            goto code_r0x080018f0;
                        case 4:
                            pcVar19 = "PMICs Detected: SID Mask=0x%04X";
                            break;
                        case 5:
                            if (uVar6 < 0x11d0) {
                                iVar17 = 0;
                                switch(uVar6) {
                                case 0x80:
                                    break;
                                case 0x81:
                                    iVar17 = 1;
                                    break;
                                case 0x82:
                                    iVar17 = 2;
                                    break;
                                case 0x83:
                                    iVar17 = 3;
                                    break;
                                case 0x84:
                                    iVar17 = 4;
                                    break;
                                case 0x85:
                                    iVar17 = 5;
                                    break;
                                case 0x86:
                                    iVar17 = 6;
                                    break;
                                case 0x87:
                                    iVar17 = 7;
                                    break;
                                default:
code_r0x08001e08:
                                    pcVar19 = "Reset Trigger: ";
code_r0x08001e18:
                                    uVar9 = scnprintf(&Stack_f0,0x80,pcVar19);
                                    if (uVar9 < 0x81) {
                                        scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"SID=0x%X, PID=0x%02X, IRQ=0x%X",
                                                  uStack_104._2_1_ >> 4,uVar6 >> 4 & 0xff,uStack_104 >> 0x18 & 7);
                                        goto joined_r0x080016e0;
                                    }
                                    goto code_r0x0800219c;
                                }
                            }
                            else if (uVar6 < 0x31f5) {
                                if (uVar6 == 0x11d0) {
                                    iVar17 = 10;
                                }
                                else if (uVar6 == 0x21d0) {
                                    iVar17 = 0xb;
                                }
                                else {
                                    if (uVar6 != 0x21e3) goto code_r0x08001e08;
                                    iVar17 = 8;
                                }
                            }
                            else if (uVar6 == 0x31f5) {
                                iVar17 = 9;
                            }
                            else if (uVar6 == 0x41d0) {
                                iVar17 = 0xc;
                            }
                            else {
                                if (uVar6 != 0x51d0) goto code_r0x08001e08;
                                iVar17 = 0xd;
                            }
                            uVar9 = scnprintf(&Stack_f0,0x80,"Reset Trigger: ");
                            if (uVar9 < 0x81) {
                                pcVar8 = obj.pmic_pon_reset_trigger_map;
code_r0x08001dcc:
                                scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,0x8000441,*(pcVar8 + iVar17 * 0x10 + 8));
                                goto joined_r0x080016e0;
                            }
                            goto code_r0x0800219c;
                        case 6:
                            if ((7 < uVar22) || ((0x6dUL >> (uStack_104._3_1_ & 0x3f) & 1) != 0)) {
                                pcVar19 = "Reset Type: UNKNOWN (%u)";
                                uVar6 = uVar22;
                                break;
                            }
                            scnprintf(&Stack_f0,0x80,"Reset Type: %s",
                                      *(obj.pmic_pon_reset_type_label + uStack_104._3_1_ * 8));
                            goto joined_r0x080016e0;
                        case 7:
                            pcVar19 = "Warm Reset Count: %u";
                            break;
                        case 8:
                            if (uVar22 == 0) {
                                uVar26 = 1;
                                if ((uStack_104._2_1_ == '\0') || (uVar25 == 0)) {
                                    uVar25 = 0;
                                    uVar9 = 1;
                                    goto code_r0x08001a88;
                                }
                                uVar14 = 0;
                                uVar13 = 0x8000a63;
                            }
                            else {
                                uVar9 = uVar25 ^ 1;
code_r0x08001a88:
                                uVar10 = scnprintf(&Stack_f0,0x80,"FAULT_REASON1=");
                                if (0x80 < uVar10) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar10,0x80 - uVar10,uStack_104 >> 0x18,0x8000d50);
                                uVar26 = uVar25 != 0;
                                if ((uStack_104._2_1_ == '\0' & (uVar9 ^ 0xffffffff)) != 0) goto joined_r0x080016e0;
                                uVar14 = iVar11 + uVar10;
                                if (0x80 < iVar11 + uVar10) {
code_r0x0800219c:
    //WARNING: Does not return
                                    pcVar8 = SoftwareBreakpoint(0x5512,0x80021a0);
                                    (*pcVar8)();
                                }
                                uVar13 = 0x8000af0;
                                if (uVar9 == 0 && uStack_104._3_1_ == '\0') {
                                    uVar13 = 0x8000a63;
                                }
                            }
                            uVar9 = uVar14;
                            iVar17 = &Stack_f0 + uVar14;
                            goto code_r0x08001580;
                        case 9:
                            uVar9 = scnprintf(&Stack_f0,0x80,"FAULT_REASON3=");
                            if (uVar9 < 0x81) {
                                sym.pmic_pon_log_print_reason
                                          (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x18,0x8000dd0);
                                if (uVar22 != 0) goto joined_r0x080016e0;
                                goto code_r0x08001b40;
                            }
                            goto code_r0x0800219c;
                        case 10:
                            pcVar19 = "PBS PC at Fault: 0x%04X";
                            break;
                        case 0xb:
                            bVar5 = uStack_104._3_1_ == 0;
                            bVar7 = uStack_104._2_1_ == '\0';
                            uVar9 = scnprintf(&Stack_f0,0x80,"Fundamental Reset: ");
                            uVar26 = bVar5 && bVar7;
                            uVar10 = uVar26 | uVar25 ^ 1;
                            if ((uStack_104._2_1_ != '\0') || (uVar10 != 0)) {
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"PON_PBL_STATUS=");
                                uVar9 = iVar11 + uVar9;
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x10 & 0xff,
                                                    0x8000e10);
                                uVar9 = iVar11 + uVar9;
                            }
                            uVar26 = uVar25 & (uVar26 ^ 1);
                            if ((uStack_104._3_1_ != '\0' | uVar10) != 1) goto joined_r0x080016e0;
                            if (uVar9 < 0x81) {
                                uVar13 = 0x8000af0;
                                if (uStack_104._2_1_ == '\0' && uVar10 == 0) {
                                    uVar13 = 0x8000a63;
                                }
                                iVar11 = scnprintf(&Stack_f0 + uVar9,0x80 - uVar9,"%sS3_RESET_REASON=",uVar13);
                                uVar9 = iVar11 + uVar9;
                                if (uVar9 < 0x81) {
                                    iVar17 = &Stack_f0 + uVar9;
                                    pcVar8 = obj.pmic_pon_s3_reset_reason;
                                    uVar3 = uStack_104._3_1_;
                                    goto code_r0x080015a8;
                                }
                            }
                            goto code_r0x0800219c;
                        case 0xc:
                            pcVar19 = "Begin PON Sequence";
                            goto code_r0x080018f0;
                        case 0xd:
                            pcVar19 = "PON Successful";
                            goto code_r0x080018f0;
                        case 0xe:
                            pcVar19 = "Waiting on PS_HOLD";
code_r0x080018f0:
                            scnprintf(&Stack_f0,0x80,pcVar19);
                            goto joined_r0x080016e0;
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
                            bVar5 = uStack_104._3_1_ == 0;
                            bVar7 = uStack_104._2_1_ == '\0';
                            uVar9 = scnprintf(&Stack_f0,0x80,"PMIC SID%u ",uVar9 - 0xf);
                            uVar14 = uVar9;
                            uVar26 = bVar5 && bVar7;
                            uVar10 = uVar26 | uVar25 ^ 1;
                            if ((uStack_104._3_1_ != '\0') || (uVar10 != 0)) {
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = scnprintf(&Stack_f0 + uVar14,0x80 - uVar9,"FAULT_REASON1=");
                                uVar9 = iVar11 + uVar9;
                                if (0x80 < uVar9) goto code_r0x0800219c;
                                iVar11 = sym.pmic_pon_log_print_reason
                                                   (&Stack_f0 + uVar9,0x80 - uVar9,uStack_104 >> 0x18,0x8000d50);
                                uVar14 = iVar11 + uVar9;
                            }
                            uVar9 = uVar14;
                            uVar26 = uVar25 & (uVar26 ^ 1);
                            if ((uStack_104._2_1_ != '\0' | uVar10) != 1) goto joined_r0x080016e0;
                            if (uVar9 < 0x81) {
                                iVar17 = &Stack_f0 + uVar14;
                                uVar13 = 0x8000af0;
                                if (uStack_104._3_1_ == '\0' && uVar10 == 0) {
                                    uVar13 = 0x8000a63;
                                }
code_r0x08001580:
                                iVar11 = scnprintf(iVar17,0x80 - uVar9,"%sFAULT_REASON2=",uVar13);
                                uVar9 = iVar11 + uVar9;
                                if (uVar9 < 0x81) {
                                    iVar17 = &Stack_f0 + uVar9;
                                    pcVar8 = obj.pmic_pon_fault_reason2;
                                    uVar3 = uStack_104._2_1_;
code_r0x080015a8:
                                    sym.pmic_pon_log_print_reason(iVar17,0x80 - uVar9,uVar3,pcVar8);
                                    goto joined_r0x080016e0;
                                }
                            }
                            goto code_r0x0800219c;
                        default:
                            scnprintf(&Stack_f0,0x80,"Unknown Event (0x%02X): data=0x%04X",uStack_104._1_1_,uVar6);
                            if (uVar25 == 0) goto code_r0x08001b40;
                            goto code_r0x08001df4;
                        case 0x1f:
                            uVar13 = 0x80004a8;
                            if (uVar6 != 0) {
                                uVar13 = 0x8000a63;
                            }
                            scnprintf(&Stack_f0,0x80,"VREG Check: %sVREG_FAULT detected",uVar13);
                            if ((uVar25 != 0) && (uVar6 != 0)) goto code_r0x08001df4;
                            goto code_r0x08001b40;
                        }
                        scnprintf(&Stack_f0,0x80,pcVar19,uVar6);
joined_r0x080016e0:
                        if (uVar26 != 0) {
code_r0x08001df4:
                            _printk(0x80007da,&Stack_f0);
                        }
code_r0x08001b40:
                        uVar14 = uStack_104;
                        if (uVar14 < 8) {
                            ipc_log_string(iVar16,"State=%s; %s\n",*(obj.pmic_pon_state_label + uVar14 * 8),&Stack_f0
                                          );
                        }
                        else {
                            ipc_log_string(iVar16,"State=Unknown (0x%02X); %s\n",uVar14,&Stack_f0);
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
                            strncat(reloc.pmic_pon_log_remove.f838ea8440eb2de97a1dc62e25f56eb3.cfi_jt,&Stack_f0,iVar17
                                   );
                        }
                        else {
                            _printk(0x80004c8);
                        }
                        iVar16 = piVar12[2];
                        *(piVar12 + 2) = iVar16 + 1;
                        *(piVar12[1] + iVar16 * 4) = uStack_104;
code_r0x08001c70:
                        if (*(piVar12 + 0x14) <= iVar27) break;
                        iVar11 = *(piVar12 + 0x2c);
                        uVar23 = uVar23 + 4;
                        iVar27 = iVar27 + 1;
                    } while( true );
                }
                uVar24 = 0;
                goto code_r0x08001f78;
            }
            iVar16 = *piVar12;
            pcVar19 = "unexpected PON log end SDAM index: %d\n";
        }
        _dev_err(iVar16,pcVar19,auStack_108[0]);
        uVar24 = 0xffffffea;
    }
code_r0x08001f64:
    _dev_err(iVar18,"PMIC PON log parsing failed, ret=%d\n",uVar24);
code_r0x08001f78:
    _segment.ehdr = kobject_create_and_add("pmic_pon_log",_devm_kmalloc);
    if (_segment.ehdr == 0) goto code_r0x08002108;
code_r0x08001f9c:
    iVar11 = sysfs_create_group(_segment.ehdr,obj.attr_group);
    if (iVar11 != 0) {
        _printk(0x8000845,"pmic_pon_log_probe");
    }
    iVar18 = of_find_property(*(arg1 + 0x300),"qcom,pmic-fault-panic",0);
    if (iVar18 != 0) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar23 = piVar12[2] - 1;
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
        if (-1 < uVar23) {
            bVar5 = false;
            uVar9 = 0;
            uVar25 = uVar23;
            do {
                uVar14 = uVar25;
                cVar2 = *(piVar12[1] + uVar14 * 4 + 1);
                if (cVar2 == '\b') {
                    uVar9 = *(piVar12[1] + uVar14 * 4 + 2);
                    uVar9 = (((uVar9 & 0xff00) << 0x10) >> 8 | uVar9 << 0x18) >> 0x10;
                }
                else if (cVar2 == '\x0e') {
                    if (bVar5) {
                        if (uVar9 < 1) goto code_r0x08002060;
                        bVar5 = true;
                        uVar9 = uVar9 - 1;
                    }
                    else {
                        bVar5 = true;
                        uVar23 = uVar25;
                    }
                }
                uVar25 = uVar25 - 1;
            } while (-1 < uVar25);
        }
        uVar14 = 0;
code_r0x08002060:
        if (uVar14 <= uVar23) {
            iVar18 = piVar12[1];
            do {
                iVar11 = uVar14;
                arg1 = iVar11;
                uVar3 = *(iVar18 + iVar11 * 4 + 1);
                if (uVar3 - 0x10 < 0xd) {
                    iVar16 = iVar18 + arg1 * 4;
                    uVar9 = *(iVar16 + 3);
                    if (uVar9 == 0) {
                        uVar3 = *(iVar16 + 2);
                        if ((uVar3 & 0xbf) == 0) goto code_r0x0800207c;
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
                        iVar18 = piVar12[1];
                        pcVar19 = "PMIC SID%u FAULT; FAULT_REASON2=%s";
                    }
                    else {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar9,0x8000d50);
                        iVar18 = piVar12[1];
                        pcVar19 = "PMIC SID%u FAULT; FAULT_REASON1=%s";
                    }
                    panic(pcVar19,*(iVar18 + arg1 * 4 + 1) - 0xf,&Stack_f0);
                    goto code_r0x0800219c;
                }
                if (uVar3 == 10) {
                    uVar3 = *(iVar18 + arg1 * 4 + 3);
                    uVar9 = uVar3;
                    if (uVar3 != 0) {
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000dd0);
                        panic("PMIC SID0 FAULT; FAULT_REASON3=%s",&Stack_f0);
code_r0x080021c4:
                        sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar9,0x8000d50);
                        iVar18 = panic("PMIC SID0 FAULT; FAULT_REASON1=%s",&Stack_f0);
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
                    uVar9 = uVar3;
                    if (uVar3 != 0) goto code_r0x080021c4;
                    uVar3 = *(iVar16 + 2);
                    if ((uVar3 & 0xbf) != 0) goto code_r0x080020e4;
                }
code_r0x0800207c:
                uVar14 = iVar11 + 1U;
                if (uVar23 < iVar11 + 1U) break;
            } while( true );
        }
    }
    goto code_r0x08001e98;
code_r0x080020e4:
    sym.pmic_pon_log_print_reason(&Stack_f0,0x80,uVar3,0x8000d90);
    panic("PMIC SID0 FAULT; FAULT_REASON2=%s",&Stack_f0);
code_r0x08002108:
    _printk(0x80008eb,"pmic_pon_log_probe");
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




// ===== sym.pmic_pon_log_print_reason @ 0x08002240 (size 548) =====



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
        iVar5 = scnprintf(arg1,arg2 & 0xffffffffU,"None");
    }
    else {
        uVar4 = (arg3 & 1) == 0;
        uVar8 = arg3 & 0xff;
        if ((arg3 & 1) == 0) {
            iVar5 = 0;
        }
        else {
            iVar5 = scnprintf(arg1,arg2 & 0xffffffffU,"%s%s",0x8000a63,*arg4);
        }
        uVar1 = 0x8000a63;
        uVar2 = 0x8000a56;
        iVar6 = arg2;
        if ((uVar8 >> 1 & 1) != 0) {
            uVar3 = uVar1;
            if ((arg3 & 1) != 0) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 8));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 2 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 0x10));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 3 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 0x18));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 4 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 0x20));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 5 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 0x28));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if ((uVar8 >> 6 & 1) != 0) {
            uVar3 = uVar1;
            if (!uVar4) {
                uVar3 = uVar2;
            }
            iVar7 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar3,*(arg4 + 0x30));
            uVar4 = false;
            iVar5 = iVar7 + iVar5;
        }
        if (uVar8 >> 7 != 0) {
            if (!uVar4) {
                uVar1 = uVar2;
            }
            iVar6 = scnprintf(arg1 + iVar5,iVar6 - iVar5,"%s%s",uVar1,*(arg4 + 0x38));
            iVar5 = iVar6 + iVar5;
        }
    }
    return iVar5;
}




// ===== sym.pon_log_full_show @ 0x08002468 (size 32) =====



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




// ===== sym.__cfi_check_fail @ 0x080024c4 (size 72) =====



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




// ===== case.0x8001478.1680 @ 0x0800250c (size 16) =====



void case.0x8001478.1680(ulong param_1,ulong param_2)

{
    code *pcVar1;
    
    __ubsan_handle_cfi_check_fail_abort(param_1,param_2,0);
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

