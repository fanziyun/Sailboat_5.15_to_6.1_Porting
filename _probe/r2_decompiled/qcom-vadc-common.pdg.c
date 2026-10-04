// decompiled from qcom-vadc-common by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08003bcc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x315ce073b0edafc3) {
        if (arg1 < -0x53c887a672ae5243) {
            if (arg1 == -0x70474ab62ac8967a) {
                if ((pcVar1 + -0x8002210 >> 3 | pcVar1 << 0x3d) < 0x14) {
                    return;
                }
                goto code_r0x08003b8c;
            }
            if (arg1 != -0x639142fed0e30da1) goto code_r0x08003b8c;
            pcVar2 = sym.qcom_vadc_scale.cfi_jt;
        }
        else {
            if (arg1 == -0x53c887a672ae5243) {
                pcVar2 = sym.qcom_adc5_avg_samples_from_dt.cfi_jt;
                goto code_r0x080021b0;
            }
            if (arg1 != -0x49174007d9b00305) goto code_r0x08003b8c;
            pcVar2 = sym.adc_tm_scale_therm_voltage_100k_gen3.cfi_jt;
        }
    }
    else if (arg1 < 0x23919759ad3b0c58) {
        if (arg1 != -0x315ce073b0edafc3) {
            if (arg1 != -0xb9e5cc6729217b3) goto code_r0x08003b8c;
            pcVar2 = sym.qcom_adc5_decimation_from_dt.cfi_jt;
code_r0x080021b0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08003b8c;
        }
        pcVar2 = sym.qcom_adc5_prescaling_from_dt.cfi_jt;
    }
    else if (arg1 == 0x23919759ad3b0c58) {
        pcVar2 = sym.adc_tm_absolute_rthr_gen3.cfi_jt;
    }
    else if (arg1 == 0x4cf01ed9991ccc40) {
        pcVar2 = sym.qcom_adc5_hw_scale.cfi_jt;
    }
    else {
        if (arg1 != 0x7c5ddee7bb39dc21) goto code_r0x08003b8c;
        pcVar2 = sym.qcom_adc_tm5_temp_volt_scale.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003b8c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003be0);
    (*pcVar1)();
}


// ===== sym.qcom_adc5_hw_scale.cfi_jt @ 0x080021d0 (size 8) =====

ulong sym.qcom_adc5_hw_scale.cfi_jt(uint32_t param_1,uint32_t param_2,ulong param_3,uint param_4,ulong param_5)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 < 0x13) {
        *in_x18 = unaff_x30;
        if (param_1 - 5 < 0x15) {
            pcVar2 = *(obj.scale_adc5_fn + param_1 * 8);
            if (0x13 < (pcVar2 + -0x8002210 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0x8fb8b549d5376986,pcVar2,0x80000e0);
            }
            uVar1 = (*pcVar2)(obj.adc5_prescale_ratios + param_2 * 8,param_3,param_4,param_5);
        }
        else {
            _printk(0x800074f,param_1);
            uVar1 = 0xffffffea;
        }
        return uVar1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002c14);
    (*pcVar2)();
}


// ===== sym.qcom_adc_tm5_temp_volt_scale.cfi_jt @ 0x080021d8 (size 8) =====

int64_t sym.qcom_adc_tm5_temp_volt_scale.cfi_jt(uint32_t param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int *piVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    
    if (0x12 < param_1) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8002b74);
        (*pcVar6)();
    }
    iVar11 = 0;
    piVar8 = 0x800076c;
    do {
        if (param_3 <= *piVar8) {
            uVar9 = iVar11;
            if (uVar9 == 0) {
                iVar10 = 0x727;
                goto code_r0x08002a98;
            }
            if (uVar9 != 0xffffffde) {
                uVar12 = ~uVar9;
                if ((0x110 < (uVar12 << 3 | 4)) || (0x21 < uVar12)) goto code_r0x08002b6c;
                iVar1 = *(uVar12 * 8 + 0x800076c);
                iVar3 = *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar12 * 8);
                iVar10 = iVar3;
                if (iVar1 != param_3) {
                    iVar2 = piVar8[-1];
                    if (iVar2 - iVar3 != 0) {
                        iVar5 = *piVar8 - iVar1;
                        iVar10 = iVar2;
                        if ((iVar5 != 0) && (*piVar8 != param_3)) {
                            iVar10 = 0;
                            if (iVar5 != 0) {
                                iVar10 = ((iVar2 - iVar3) * (param_3 - iVar1)) / iVar5;
                            }
                            iVar10 = iVar10 + iVar3;
                        }
                    }
                }
                goto code_r0x08002a98;
            }
            break;
        }
        piVar8 = piVar8 + 2;
        iVar11 = iVar11 + -1;
    } while (iVar11 != -0x22);
    iVar10 = 0x2e;
code_r0x08002a98:
    if ((param_1 < 0x12) && ((param_1 << 3 | 4) < 0x91)) {
        iVar11 = param_1 * 8;
        iVar7 = *(iVar11 + 0x8000650) * 0x1c9c38;
        iVar4 = 0;
        if (iVar7 != 0) {
            iVar4 = (param_2 * *(obj.adc5_prescale_ratios + iVar11) * 1000 * iVar10) / iVar7;
        }
        return iVar4;
    }
code_r0x08002b6c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8002b70);
    (*pcVar6)();
}


// ===== sym.adc_tm_absolute_rthr_gen3.cfi_jt @ 0x080021e0 (size 8) =====

ulong sym.adc_tm_absolute_rthr_gen3.cfi_jt(int64_t param_1)

{
    *(param_1 + 8) = (*(param_1 + 8) * 0x70e4) / 0x1c9c38;
    *(param_1 + 0x10) = (*(param_1 + 0x10) * 0x70e4) / 0x1c9c38;
    return 0;
}


// ===== sym.qcom_adc5_prescaling_from_dt.cfi_jt @ 0x080021e8 (size 8) =====

int64_t sym.qcom_adc5_prescaling_from_dt.cfi_jt(int param_1,int param_2)

{
    int64_t iVar1;
    int *piVar2;
    
    iVar1 = 0;
    piVar2 = 0x8000650;
    while ((piVar2[-1] != param_1 || (*piVar2 != param_2))) {
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 2;
        if (iVar1 == 0x12) {
            return 0xffffffea;
        }
    }
    if (iVar1 == 0x12) {
        return 0xffffffea;
    }
    return iVar1;
}


// ===== sym.qcom_vadc_scale.cfi_jt @ 0x080021f0 (size 8) =====

ulong sym.qcom_vadc_scale.cfi_jt
                (uint param_1,int *param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5,int *param_6)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    
    switch(param_1) {
    case 0:
        iVar12 = param_2[2];
        iVar11 = iVar12 * ((param_5 & 0xffff) - param_2[2]);
        if ((param_4 & 1) == 0) {
            iVar12 = 0;
        }
        iVar14 = 0;
        if (*param_2 != 0) {
            iVar14 = iVar11 / *param_2;
        }
        iVar9 = 0;
        if (*param_3 != 0) {
            iVar9 = ((iVar14 + iVar12 & (iVar14 + iVar12 >> 0x3f ^ 0xffffffffffffffffU)) * param_3[1]) / *param_3;
        }
        goto code_r0x080029ac;
    case 1:
    case 3:
        bVar7 = (param_4 & 1) == 0;
        iVar14 = 0;
        iVar12 = param_2[2];
        iVar11 = iVar12 * ((param_5 & 0xffff) - param_2[2]);
        if (bVar7) {
            iVar12 = 0;
        }
        iVar4 = 0;
        if (*param_2 != 0) {
            iVar4 = iVar11 / *param_2;
        }
        uVar10 = iVar4 + iVar12 & (iVar4 + iVar12 >> 0x3f ^ 0xffffffffffffffffU);
        pcVar6 = obj.adcmap_100k_104ef_104fb;
        iVar8 = uVar10 / 1000;
        if (bVar7) {
            iVar8 = uVar10;
        }
        do {
            if (*pcVar6 <= iVar8) {
                uVar13 = iVar14;
                if (uVar13 == 0) {
                    iVar9 = -40000;
                    goto code_r0x080029ac;
                }
                if (uVar13 != 0xffffffde) {
                    uVar10 = ~uVar13;
                    if ((0x21 < ~uVar13) || (0x110 < (uVar10 << 3 | 4))) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(1,0x8002a40);
                        (*pcVar6)();
                    }
                    iVar3 = *(obj.adcmap_100k_104ef_104fb + uVar10 * 8);
                    iVar1 = *(uVar10 * 8 + 0x800094c);
                    iVar9 = iVar1;
                    if (iVar3 != iVar8) {
                        iVar2 = *(pcVar6 + 4);
                        if (iVar2 - iVar1 != 0) {
                            iVar5 = *pcVar6 - iVar3;
                            iVar9 = iVar2;
                            if ((iVar5 != 0) && (*pcVar6 != iVar8)) {
                                iVar9 = 0;
                                if (iVar5 != 0) {
                                    iVar9 = ((iVar2 - iVar1) * (iVar8 - iVar3)) / iVar5;
                                }
                                iVar9 = iVar9 + iVar1;
                            }
                        }
                    }
                    goto code_r0x080029ac;
                }
                break;
            }
            pcVar6 = pcVar6 + 8;
            iVar14 = iVar14 + -1;
        } while (iVar14 != -0x22);
        iVar9 = 0x1e848;
        goto code_r0x080029ac;
    case 2:
        iVar12 = param_2[2];
        iVar11 = 0;
        if (*param_2 != 0) {
            iVar11 = (iVar12 * ((param_5 & 0xffff) - param_2[2])) / *param_2;
        }
        if ((param_4 & 1) == 0) {
            iVar12 = 0;
        }
        uVar13 = 0xfffbd502;
        iVar9 = -0x42afe;
        if (iVar11 + iVar12 < 1) goto code_r0x080029ac;
        iVar9 = 0;
        if (*param_3 << 1 != 0) {
            iVar9 = ((iVar11 + iVar12) * param_3[1]) / (*param_3 << 1);
        }
        break;
    case 4:
        iVar12 = param_2[2];
        iVar11 = iVar12 * ((param_5 & 0xffff) - param_2[2]);
        if ((param_4 & 1) == 0) {
            iVar12 = 0;
        }
        iVar14 = 0;
        if (*param_2 != 0) {
            iVar14 = iVar11 / *param_2;
        }
        iVar11 = 0;
        if (*param_3 != 0) {
            iVar11 = ((iVar14 + iVar12 & (iVar14 + iVar12 >> 0x3f ^ 0xffffffffffffffffU)) * param_3[1]) / *param_3;
        }
        iVar12 = iVar11 * -0x43d14 + 0x5b361e9d80;
        uVar13 = iVar12 / 0x3d0900000 + (iVar12 >> 0x3f) >> 0x1f;
        iVar9 = SUB168(SEXT816(iVar12) * SEXT816(0x431bde82d7b634db),8) >> 0x12;
        break;
    default:
        return 0xffffffea;
    }
    iVar9 = iVar9 + uVar13;
code_r0x080029ac:
    *param_6 = iVar9;
    return 0;
}


// ===== sym.qcom_adc5_decimation_from_dt.cfi_jt @ 0x080021f8 (size 8) =====

uint sym.qcom_adc5_decimation_from_dt.cfi_jt(int param_1,int *param_2)

{
    uint uVar1;
    
    if (*param_2 == param_1) {
        return 0;
    }
    if (param_2[1] == param_1) {
        return 1;
    }
    uVar1 = 2;
    if (param_2[2] != param_1) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.qcom_adc5_hw_settle_time_from_dt.cfi_jt @ 0x08002200 (size 8) =====

uint sym.qcom_adc5_hw_settle_time_from_dt.cfi_jt(int param_1,int *param_2)

{
    uint uVar1;
    
    if (*param_2 == param_1) {
        return 0;
    }
    if (param_2[1] == param_1) {
        return 1;
    }
    if (param_2[2] == param_1) {
        return 2;
    }
    if (param_2[3] == param_1) {
        return 3;
    }
    if (param_2[4] == param_1) {
        return 4;
    }
    if (param_2[5] == param_1) {
        return 5;
    }
    if (param_2[6] == param_1) {
        return 6;
    }
    if (param_2[7] == param_1) {
        return 7;
    }
    if (param_2[8] == param_1) {
        return 8;
    }
    if (param_2[9] == param_1) {
        return 9;
    }
    if (param_2[10] == param_1) {
        return 10;
    }
    if (param_2[0xb] == param_1) {
        return 0xb;
    }
    if (param_2[0xc] == param_1) {
        return 0xc;
    }
    if (param_2[0xd] == param_1) {
        return 0xd;
    }
    if (param_2[0xe] == param_1) {
        return 0xe;
    }
    uVar1 = 0xf;
    if (param_2[0xf] != param_1) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.adc_tm_scale_therm_voltage_100k_gen3.cfi_jt @ 0x08002208 (size 8) =====

void sym.adc_tm_scale_therm_voltage_100k_gen3.cfi_jt(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    int iVar7;
    code *pcVar8;
    int *piVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int iVar13;
    int64_t iVar14;
    
    iVar11 = 0;
    iVar1 = *param_1;
    piVar9 = 0x8000110;
    do {
        if (iVar1 <= *piVar9) {
            uVar10 = iVar11;
            if (uVar10 == 0) {
                uVar12 = 0x40dc21;
                goto code_r0x08002314;
            }
            if (uVar10 != 0xffffff58) {
                uVar12 = ~uVar10;
                if ((0x540 < (uVar12 << 3 | 4)) || (0xa7 < uVar12)) goto code_r0x08002670;
                iVar2 = *(uVar12 * 8 + 0x8000110);
                uVar10 = *(obj.adcmap7_100k + uVar12 * 8);
                iVar13 = iVar1 - iVar2;
                if (iVar13 == 0) {
                    uVar12 = uVar10;
                }
                else {
                    uVar12 = uVar10;
                    iVar3 = piVar9[-1] - uVar10;
                    if (iVar3 != 0) {
                        uVar12 = piVar9[-1];
                        iVar2 = *piVar9 - iVar2;
                        if ((iVar2 != 0) && (*piVar9 != iVar1)) {
                            iVar5 = 0;
                            if (iVar2 != 0) {
                                iVar5 = (iVar3 * iVar13) / iVar2;
                            }
                            uVar12 = iVar5 + uVar10;
                        }
                    }
                }
                goto code_r0x08002314;
            }
            break;
        }
        piVar9 = piVar9 + 2;
        iVar11 = iVar11 + -1;
    } while (iVar11 != -0xa8);
    uVar12 = 0x974;
code_r0x08002314:
    iVar11 = uVar12 + 100000;
    uVar6 = 0;
    if (iVar11 != 0) {
        uVar6 = (-(uVar12 >> 0x1f) & 0xffffc00000000000 | uVar12 << 0xe) / iVar11;
    }
    *(param_1 + 4) = uVar6;
    if ((uVar6 & 0xc000) == 0) {
        iVar14 = 0;
        iVar11 = 0x4000 - (uVar6 & 0xffff);
        iVar2 = 0;
        if (iVar11 != 0) {
            iVar2 = ((uVar6 & 0xffff) * 100000) / iVar11;
        }
        pcVar8 = obj.adcmap7_100k;
        do {
            if (*pcVar8 <= iVar2) {
                uVar10 = iVar14;
                if (uVar10 == 0) {
                    iVar13 = -0xa000;
                    goto code_r0x08002410;
                }
                if (uVar10 != 0xffffff58) {
                    uVar12 = ~uVar10;
                    if ((0xa7 < ~uVar10) || (0x540 < (uVar12 << 3 | 4))) goto code_r0x08002670;
                    iVar5 = *(obj.adcmap7_100k + uVar12 * 8);
                    iVar3 = *(uVar12 * 8 + 0x8000110);
                    iVar13 = iVar3;
                    if (iVar5 != iVar2) {
                        iVar4 = *(pcVar8 + 4);
                        if (iVar4 - iVar3 != 0) {
                            iVar7 = *pcVar8 - iVar5;
                            iVar13 = iVar4;
                            if ((iVar7 != 0) && (*pcVar8 != iVar2)) {
                                iVar13 = 0;
                                if (iVar7 != 0) {
                                    iVar13 = ((iVar4 - iVar3) * (iVar2 - iVar5)) / iVar7;
                                }
                                iVar13 = iVar13 + iVar3;
                            }
                        }
                    }
                    goto code_r0x08002410;
                }
                break;
            }
            pcVar8 = pcVar8 + 8;
            iVar14 = iVar14 + -1;
        } while (iVar14 != -0xa8);
        iVar13 = 0x1fc00;
code_r0x08002410:
        if (iVar13 < iVar1) {
            *(param_1 + 4) = uVar6 - 1;
        }
        iVar11 = 0;
        iVar1 = param_1[1];
        piVar9 = 0x8000110;
        do {
            if (iVar1 <= *piVar9) {
                uVar10 = iVar11;
                if (uVar10 == 0) {
                    uVar12 = 0x40dc21;
                    goto code_r0x080024e0;
                }
                if (uVar10 != 0xffffff58) {
                    uVar12 = ~uVar10;
                    if ((0x540 < (uVar12 << 3 | 4)) || (0xa7 < uVar12)) goto code_r0x08002670;
                    iVar2 = *(uVar12 * 8 + 0x8000110);
                    uVar10 = *(obj.adcmap7_100k + uVar12 * 8);
                    iVar13 = iVar1 - iVar2;
                    if (iVar13 == 0) {
                        uVar12 = uVar10;
                    }
                    else {
                        uVar12 = uVar10;
                        iVar3 = piVar9[-1] - uVar10;
                        if (iVar3 != 0) {
                            uVar12 = piVar9[-1];
                            iVar2 = *piVar9 - iVar2;
                            if ((iVar2 != 0) && (*piVar9 != iVar1)) {
                                iVar5 = 0;
                                if (iVar2 != 0) {
                                    iVar5 = (iVar3 * iVar13) / iVar2;
                                }
                                uVar12 = iVar5 + uVar10;
                            }
                        }
                    }
                    goto code_r0x080024e0;
                }
                break;
            }
            piVar9 = piVar9 + 2;
            iVar11 = iVar11 + -1;
        } while (iVar11 != -0xa8);
        uVar12 = 0x974;
code_r0x080024e0:
        iVar11 = uVar12 + 100000;
        uVar6 = 0;
        if (iVar11 != 0) {
            uVar6 = (-(uVar12 >> 0x1f) & 0xffffc00000000000 | uVar12 << 0xe) / iVar11;
        }
        *(param_1 + 2) = uVar6;
        if ((uVar6 & 0xc000) == 0) {
            iVar14 = 0;
            iVar11 = 0x4000 - (uVar6 & 0xffff);
            pcVar8 = obj.adcmap7_100k;
            iVar2 = 0;
            if (iVar11 != 0) {
                iVar2 = ((uVar6 & 0xffff) * 100000) / iVar11;
            }
            do {
                if (*pcVar8 <= iVar2) {
                    uVar10 = iVar14;
                    if (uVar10 == 0) {
                        iVar13 = -0xa000;
                        goto code_r0x08002658;
                    }
                    if (uVar10 != 0xffffff58) {
                        uVar12 = ~uVar10;
                        if ((0xa7 < ~uVar10) || (0x540 < (uVar12 << 3 | 4))) {
code_r0x08002670:
    //WARNING: Does not return
                            pcVar8 = SoftwareBreakpoint(1,0x8002674);
                            (*pcVar8)();
                        }
                        iVar5 = *(obj.adcmap7_100k + uVar12 * 8);
                        iVar3 = *(uVar12 * 8 + 0x8000110);
                        iVar13 = iVar3;
                        if (iVar5 != iVar2) {
                            iVar4 = *(pcVar8 + 4);
                            if (iVar4 - iVar3 != 0) {
                                iVar7 = *pcVar8 - iVar5;
                                iVar13 = iVar4;
                                if ((iVar7 != 0) && (*pcVar8 != iVar2)) {
                                    iVar13 = 0;
                                    if (iVar7 != 0) {
                                        iVar13 = ((iVar4 - iVar3) * (iVar2 - iVar5)) / iVar7;
                                    }
                                    iVar13 = iVar13 + iVar3;
                                }
                            }
                        }
                        goto code_r0x08002658;
                    }
                    break;
                }
                pcVar8 = pcVar8 + 8;
                iVar14 = iVar14 + -1;
            } while (iVar14 != -0xa8);
            iVar13 = 0x1fc00;
code_r0x08002658:
            if (iVar1 < iVar13) {
                *(param_1 + 2) = uVar6 + 1;
                return;
            }
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFiPK19vadc_prescale_ratioPK9adc5_datatPiE_global_addr @ 0x08002210 (size 8) =====

ulong sym.__typeid__ZTSFiPK19vadc_prescale_ratioPK9adc5_datatPiE_global_addr
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(param_2 + 8);
    uVar4 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = -0x417cb;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*param_1 * 0x154 != 0) {
            iVar2 = (uVar1 * param_1[1] * 100) / (*param_1 * 0x154);
        }
        iVar2 = iVar2 + -0x417cb;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_therm.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_therm.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(param_2 + 8);
    uVar9 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*param_1 * 1000 != 0) {
            iVar7 = (uVar5 * param_1[1]) / (*param_1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_100k_104ef_104fb_1875_vref;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -40000;
                goto code_r0x08003020;
            }
            if (uVar11 != 0xffffffde) {
                uVar8 = ~uVar11;
                if ((0x21 < ~uVar11) || (0x110 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80030a8);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x800076c);
                iVar3 = iVar7 - *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003020;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x22);
    iVar10 = 0x1e848;
code_r0x08003020:
    *param_4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc7_scale_hw_calib_therm.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002220 (size 8) =====

ulong sym.qcom_vadc7_scale_hw_calib_therm.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (ulong param_1,ulong param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    if ((param_3 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar10 = 0;
    iVar7 = 0x4000 - (param_3 & 0xffff);
    pcVar6 = obj.adcmap7_100k;
    iVar4 = 0;
    if (iVar7 != 0) {
        iVar4 = ((param_3 & 0xffff) * 100000) / iVar7;
    }
    do {
        if (*pcVar6 <= iVar4) {
            uVar9 = iVar10;
            if (uVar9 == 0) {
                iVar8 = -0xa000;
                goto code_r0x080026f4;
            }
            if (uVar9 != 0xffffff58) {
                uVar11 = ~uVar9;
                if ((0xa7 < ~uVar9) || (0x540 < (uVar11 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8002780);
                    (*pcVar6)();
                }
                iVar3 = *(obj.adcmap7_100k + uVar11 * 8);
                iVar1 = *(uVar11 * 8 + 0x8000110);
                iVar8 = iVar1;
                if (iVar3 != iVar4) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar5 = *pcVar6 - iVar3;
                        iVar8 = iVar2;
                        if ((iVar5 != 0) && (*pcVar6 != iVar4)) {
                            iVar8 = 0;
                            if (iVar5 != 0) {
                                iVar8 = ((iVar2 - iVar1) * (iVar4 - iVar3)) / iVar5;
                            }
                            iVar8 = iVar8 + iVar1;
                        }
                    }
                }
                goto code_r0x080026f4;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar10 = iVar10 + -1;
    } while (iVar10 != -0xa8);
    iVar8 = 0x1fc00;
code_r0x080026f4:
    *param_4 = iVar8;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_30.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_30.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(param_2 + 8);
    uVar9 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*param_1 * 1000 != 0) {
            iVar7 = (uVar5 * param_1[1]) / (*param_1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_30k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x0800353c;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80035c4);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000cec);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_30k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_30k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x0800353c;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x0800353c:
    *param_4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_400.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002230 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_400.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(param_2 + 8);
    uVar9 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*param_1 * 1000 != 0) {
            iVar7 = (uVar5 * param_1[1]) / (*param_1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_400k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x08003658;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80036e0);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000f1c);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_400k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_400k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003658;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x08003658:
    *param_4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_pm2250_s3_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002238 (size 8) =====

ulong sym.qcom_vadc_scale_hw_pm2250_s3_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int64_t iVar1;
    uchar auVar2 [16];
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar5 = *(param_2 + 8);
    uVar6 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar6 < uVar5) {
        iVar4 = 0x5de1b;
    }
    else {
        uVar3 = 0;
        if (uVar5 != 0) {
            uVar3 = uVar6 / uVar5;
        }
        iVar1 = 0;
        if (*param_1 != 0) {
            iVar1 = (uVar3 * param_1[1]) / *param_1;
        }
        auVar2 = SEXT816((0xafce4 - iVar1) * 100000) * SEXT816(0x59977b91ee00534b);
        iVar4 = auVar2._10_4_ - (auVar2._12_4_ >> 0x1f);
    }
    *param_4 = iVar4;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_smb_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002240 (size 8) =====

ulong sym.qcom_vadc_scale_hw_smb_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,int param_3,int *param_4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(param_2 + 8);
    uVar4 = (param_3 * 100 & (param_3 * 100 >> 0xf ^ 0xffffffff) & 0xfffc) * 0x1c9c38;
    iVar2 = 0x66648;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*param_1 * 0x164 != 0) {
            iVar2 = (uVar1 * param_1[1]) / (*param_1 * 0x164);
        }
        iVar2 = 0x66648 - iVar2;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_volt.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002248 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_volt.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,uint32_t param_3,uint *param_4)

{
    uint64_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(param_2 + 8);
    uVar4 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar4 < uVar3) {
        uVar2 = 0;
    }
    else {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        uVar2 = 0;
        if (*param_1 != 0) {
            uVar2 = (uVar1 * param_1[1]) / *param_1;
        }
    }
    *param_4 = uVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_chg5_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.qcom_vadc_scale_hw_chg5_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(param_2 + 8);
    uVar4 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = 0x5c29c;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*param_1 << 2 != 0) {
            iVar2 = (uVar1 * param_1[1]) / (*param_1 << 2);
        }
        iVar2 = 0x5c29c - iVar2;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_pm7_chg_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002258 (size 8) =====

ulong sym.qcom_vadc_scale_hw_pm7_chg_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,uint32_t param_3,uint *param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar5 = *(param_2 + 8);
    uVar6 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar6 < uVar5) {
        uVar4 = 0;
    }
    else {
        uVar2 = 0;
        if (uVar5 != 0) {
            uVar2 = uVar6 / uVar5;
        }
        iVar1 = 0;
        if (*param_1 != 0) {
            iVar1 = (uVar2 * param_1[1]) / *param_1;
        }
        iVar3 = (iVar1 * 0x765f + -0x673c39000) / 100000;
        uVar4 = iVar3;
        if (iVar3 < 1) {
            uVar4 = 0;
        }
    }
    *param_4 = uVar4;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002260 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(param_2 + 8);
    uVar9 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*param_1 * 1000 != 0) {
            iVar7 = (uVar5 * param_1[1]) / (*param_1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_100k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x08003420;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80034a8);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000abc);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_100k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_100k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003420;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x08003420:
    *param_4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_pm7_smb_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002268 (size 8) =====

ulong sym.qcom_vadc_scale_hw_pm7_smb_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar4 = *(param_2 + 8);
    uVar5 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar5 < uVar4) {
        iVar3 = 0;
    }
    else {
        uVar1 = 0;
        if (uVar4 != 0) {
            uVar1 = uVar5 / uVar4;
        }
        iVar3 = 0;
        if (*param_1 != 0) {
            iVar3 = (uVar1 * param_1[1]) / *param_1;
        }
        iVar2 = (iVar3 * 250000000 + -0xe253e7da3400) / 894000000;
        iVar3 = iVar2;
        if (iVar2 < -24999) {
            iVar3 = -25000;
        }
        iVar3 = iVar3 + 25000;
    }
    *param_4 = iVar3;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_batt_id_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002270 (size 8) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_batt_id_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (ulong param_1,ulong param_2,uint32_t param_3,uint *param_4)

{
    uint uVar1;
    int64_t iVar2;
    
    if ((param_3 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar2 = 0x4000 - (param_3 & 0xffff);
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = ((param_3 & 0xffff) * 100000) / iVar2;
    }
    *param_4 = uVar1;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002278 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(param_2 + 8);
    uVar4 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = -0x42afe;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*param_1 << 1 != 0) {
            iVar2 = (uVar1 * param_1[1]) / (*param_1 << 1);
        }
        iVar2 = iVar2 + -0x42afe;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002280 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,int64_t param_2,int16_t param_3,uint *param_4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    
    iVar1 = *param_1;
    if (iVar1 != 0) {
        iVar3 = 0;
        if (*(param_2 + 8) != 0) {
            iVar3 = (param_3 * 0x1c9c38) / *(param_2 + 8);
        }
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = (iVar3 * param_1[1]) / iVar1;
        }
        *param_4 = uVar2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc_scale_hw_calib_current_raw.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002288 (size 8) =====

ulong sym.qcom_vadc_scale_hw_calib_current_raw.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (int *param_1,ulong param_2,int16_t param_3,uint *param_4)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = *param_1;
    if (iVar1 != 0) {
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = (param_1[1] * param_3) / iVar1;
        }
        *param_4 = uVar2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc7_scale_hw_calib_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002290 (size 8) =====

ulong sym.qcom_vadc7_scale_hw_calib_die_temp.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,uint32_t param_3,int *param_4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    
    uVar8 = *(param_2 + 8);
    uVar10 = (param_3 & (param_3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar10 < uVar8) {
code_r0x08003128:
        iVar9 = -60000;
    }
    else {
        uVar7 = 0;
        if (uVar8 != 0) {
            uVar7 = uVar10 / uVar8;
        }
        iVar5 = 0;
        if (*param_1 != 0) {
            iVar5 = (uVar7 * param_1[1]) / *param_1;
        }
        if (0xd14d3 < iVar5) {
            iVar9 = 160000;
            goto code_r0x080032c0;
        }
        if (iVar5 < 0xc8384) {
            if (iVar5 < 0xbf0a4) {
                if (iVar5 < 0xb5c98) {
                    if (iVar5 < 0xac760) {
                        if (iVar5 < 0xa30fc) {
                            if (iVar5 < 0x99a34) {
                                if (iVar5 < 0x902a4) {
                                    if (iVar5 < 0x86a4c) {
                                        if (iVar5 < 0x7d190) {
                                            if (iVar5 < 0x7380c) {
                                                if (iVar5 < 0x69e24) goto code_r0x08003128;
                                                iVar11 = 0xb;
                                            }
                                            else {
                                                iVar11 = 10;
                                            }
                                        }
                                        else {
                                            iVar11 = 9;
                                        }
                                    }
                                    else {
                                        iVar11 = 8;
                                    }
                                }
                                else {
                                    iVar11 = 7;
                                }
                            }
                            else {
                                iVar11 = 6;
                            }
                        }
                        else {
                            iVar11 = 5;
                        }
                    }
                    else {
                        iVar11 = 4;
                    }
                }
                else {
                    iVar11 = 3;
                }
            }
            else {
                iVar11 = 2;
            }
        }
        else {
            iVar11 = 1;
        }
        iVar1 = (iVar11 - 1) * 8;
        iVar2 = *(obj.adcmap7_die_temp + iVar1);
        iVar3 = *(iVar1 + 0x8000a5c);
        iVar4 = *(iVar11 * 8 + 0x8000a5c);
        iVar9 = iVar3;
        if (iVar2 != iVar5 && iVar4 != iVar3) {
            iVar6 = *(obj.adcmap7_die_temp + iVar11 * 8) - iVar2;
            iVar9 = iVar4;
            if ((iVar6 != 0) && (*(obj.adcmap7_die_temp + iVar11 * 8) != iVar5)) {
                iVar9 = 0;
                if (iVar6 != 0) {
                    iVar9 = ((iVar4 - iVar3) * (iVar5 - iVar2)) / iVar6;
                }
                iVar9 = iVar9 + iVar3;
            }
        }
    }
code_r0x080032c0:
    *param_4 = iVar9;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_batt_therm_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x08002298 (size 8) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_batt_therm_100.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (ulong param_1,ulong param_2,uint32_t param_3,int *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    if ((param_3 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar10 = 0;
    iVar7 = 0x4000 - (param_3 & 0xffff);
    pcVar6 = obj.adcmap_gen3_batt_therm_100k;
    iVar4 = 0;
    if (iVar7 != 0) {
        iVar4 = ((param_3 & 0xffff) * 100000) / iVar7;
    }
    do {
        if (*pcVar6 <= iVar4) {
            uVar9 = iVar10;
            if (uVar9 == 0) {
                iVar8 = -400;
                goto code_r0x08003a5c;
            }
            if (uVar9 != 0xffffffba) {
                uVar11 = ~uVar9;
                if ((0x45 < ~uVar9) || (0x230 < (uVar11 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8003ae8);
                    (*pcVar6)();
                }
                iVar3 = *(obj.adcmap_gen3_batt_therm_100k + uVar11 * 8);
                iVar1 = *(uVar11 * 8 + 0x800114c);
                iVar8 = iVar1;
                if (iVar3 != iVar4) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar5 = *pcVar6 - iVar3;
                        iVar8 = iVar2;
                        if ((iVar5 != 0) && (*pcVar6 != iVar4)) {
                            iVar8 = 0;
                            if (iVar5 != 0) {
                                iVar8 = ((iVar2 - iVar1) * (iVar4 - iVar3)) / iVar5;
                            }
                            iVar8 = iVar8 + iVar1;
                        }
                    }
                }
                goto code_r0x08003a5c;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar10 = iVar10 + -1;
    } while (iVar10 != -0x46);
    iVar8 = 0x3d4;
code_r0x08003a5c:
    *param_4 = iVar8;
    return 0;
}


// ===== sym.qcom_vadc5_scale_hw_calib_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x080022a0 (size 8) =====

ulong sym.qcom_vadc5_scale_hw_calib_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,int64_t param_2,int16_t param_3,int *param_4)

{
    int16_t iVar1;
    int iVar2;
    int iVar3;
    
    iVar1 = -param_3;
    if (-1 < param_3) {
        iVar1 = param_3;
    }
    iVar3 = 0;
    if (*param_1 != 0) {
        iVar3 = (((iVar1 * *(param_2 + 0xc) * 1000) / 0x7fff) * param_1[1]) / *param_1;
    }
    iVar2 = -iVar3;
    if (-1 < param_3) {
        iVar2 = iVar3;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_usb_in_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt @ 0x080022a8 (size 8) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_usb_in_current.eb91ddda7227ad90f611a67b884db9d3.cfi_jt
                (uint32_t *param_1,ulong param_2,int16_t param_3,int *param_4)

{
    int16_t iVar1;
    int iVar2;
    int iVar3;
    
    iVar1 = -param_3;
    if (-1 < param_3) {
        iVar1 = param_3;
    }
    iVar3 = 0;
    if (*param_1 != 0) {
        iVar3 = (((iVar1 * 1000000) / 0x2420) * param_1[1]) / *param_1;
    }
    iVar2 = -iVar3;
    if (-1 < param_3) {
        iVar2 = iVar3;
    }
    *param_4 = iVar2;
    return 0;
}


// ===== sym.qcom_adc5_avg_samples_from_dt.cfi_jt @ 0x080022b0 (size 8) =====

int64_t sym.qcom_adc5_avg_samples_from_dt.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if (param_1 != 0) {
        uVar2 = param_1;
        iVar1 = 0xffffffea;
        if ((param_1 < 0x11) &&
           (uVar3 = uVar2 - (param_1 >> 1 & 0x5555555555555555),
           uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333),
           (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 < 2)) {
            uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            iVar1 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        return iVar1;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc_decimation_from_dt.cfi_jt @ 0x080022b8 (size 8) =====

int64_t sym.qcom_vadc_decimation_from_dt.cfi_jt(uint32_t param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    if (param_1 != 0) {
        iVar3 = 0xffffffea;
        if (((param_1 & param_1 - 1) == 0) && (param_1 - 0x200 < 0xe01)) {
            uVar1 = (param_1 >> 9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_1 >> 9 & 0x5555555555555555) << 1;
            uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
            uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar1 & 0xff00ff00ff00ff) << 8;
            iVar3 = LZCOUNT((uVar2 >> 0x10 | ((uVar1 & 0xff00ff00ff00ff00) >> 8 | uVar2 & 0xffff0000ffff) << 0x10) <<
                            0x20);
        }
        return iVar3;
    }
    return 0xffffffea;
}


// ===== sym.adc_tm_scale_therm_voltage_100k_gen3 @ 0x080022c0 (size 948) =====

void sym.adc_tm_scale_therm_voltage_100k_gen3(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    int iVar7;
    code *pcVar8;
    int *piVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int iVar13;
    int64_t iVar14;
    
    iVar11 = 0;
    iVar1 = *arg1;
    piVar9 = 0x8000110;
    do {
        if (iVar1 <= *piVar9) {
            uVar10 = iVar11;
            if (uVar10 == 0) {
                uVar12 = 0x40dc21;
                goto code_r0x08002314;
            }
            if (uVar10 != 0xffffff58) {
                uVar12 = ~uVar10;
                if ((0x540 < (uVar12 << 3 | 4)) || (0xa7 < uVar12)) goto code_r0x08002670;
                iVar2 = *(uVar12 * 8 + 0x8000110);
                uVar10 = *(obj.adcmap7_100k + uVar12 * 8);
                iVar13 = iVar1 - iVar2;
                if (iVar13 == 0) {
                    uVar12 = uVar10;
                }
                else {
                    uVar12 = uVar10;
                    iVar3 = piVar9[-1] - uVar10;
                    if (iVar3 != 0) {
                        uVar12 = piVar9[-1];
                        iVar2 = *piVar9 - iVar2;
                        if ((iVar2 != 0) && (*piVar9 != iVar1)) {
                            iVar5 = 0;
                            if (iVar2 != 0) {
                                iVar5 = (iVar3 * iVar13) / iVar2;
                            }
                            uVar12 = iVar5 + uVar10;
                        }
                    }
                }
                goto code_r0x08002314;
            }
            break;
        }
        piVar9 = piVar9 + 2;
        iVar11 = iVar11 + -1;
    } while (iVar11 != -0xa8);
    uVar12 = 0x974;
code_r0x08002314:
    iVar11 = uVar12 + 100000;
    uVar6 = 0;
    if (iVar11 != 0) {
        uVar6 = (-(uVar12 >> 0x1f) & 0xffffc00000000000 | uVar12 << 0xe) / iVar11;
    }
    *(arg1 + 0x10) = uVar6;
    if ((uVar6 & 0xc000) == 0) {
        iVar14 = 0;
        iVar11 = 0x4000 - (uVar6 & 0xffff);
        iVar2 = 0;
        if (iVar11 != 0) {
            iVar2 = ((uVar6 & 0xffff) * 100000) / iVar11;
        }
        pcVar8 = obj.adcmap7_100k;
        do {
            if (*pcVar8 <= iVar2) {
                uVar10 = iVar14;
                if (uVar10 == 0) {
                    iVar13 = -0xa000;
                    goto code_r0x08002410;
                }
                if (uVar10 != 0xffffff58) {
                    uVar12 = ~uVar10;
                    if ((0xa7 < ~uVar10) || (0x540 < (uVar12 << 3 | 4))) goto code_r0x08002670;
                    iVar5 = *(obj.adcmap7_100k + uVar12 * 8);
                    iVar3 = *(uVar12 * 8 + 0x8000110);
                    iVar13 = iVar3;
                    if (iVar5 != iVar2) {
                        iVar4 = *(pcVar8 + 4);
                        if (iVar4 - iVar3 != 0) {
                            iVar7 = *pcVar8 - iVar5;
                            iVar13 = iVar4;
                            if ((iVar7 != 0) && (*pcVar8 != iVar2)) {
                                iVar13 = 0;
                                if (iVar7 != 0) {
                                    iVar13 = ((iVar4 - iVar3) * (iVar2 - iVar5)) / iVar7;
                                }
                                iVar13 = iVar13 + iVar3;
                            }
                        }
                    }
                    goto code_r0x08002410;
                }
                break;
            }
            pcVar8 = pcVar8 + 8;
            iVar14 = iVar14 + -1;
        } while (iVar14 != -0xa8);
        iVar13 = 0x1fc00;
code_r0x08002410:
        if (iVar13 < iVar1) {
            *(arg1 + 0x10) = uVar6 - 1;
        }
        iVar11 = 0;
        iVar1 = *(arg1 + 4);
        piVar9 = 0x8000110;
        do {
            if (iVar1 <= *piVar9) {
                uVar10 = iVar11;
                if (uVar10 == 0) {
                    uVar12 = 0x40dc21;
                    goto code_r0x080024e0;
                }
                if (uVar10 != 0xffffff58) {
                    uVar12 = ~uVar10;
                    if ((0x540 < (uVar12 << 3 | 4)) || (0xa7 < uVar12)) goto code_r0x08002670;
                    iVar2 = *(uVar12 * 8 + 0x8000110);
                    uVar10 = *(obj.adcmap7_100k + uVar12 * 8);
                    iVar13 = iVar1 - iVar2;
                    if (iVar13 == 0) {
                        uVar12 = uVar10;
                    }
                    else {
                        uVar12 = uVar10;
                        iVar3 = piVar9[-1] - uVar10;
                        if (iVar3 != 0) {
                            uVar12 = piVar9[-1];
                            iVar2 = *piVar9 - iVar2;
                            if ((iVar2 != 0) && (*piVar9 != iVar1)) {
                                iVar5 = 0;
                                if (iVar2 != 0) {
                                    iVar5 = (iVar3 * iVar13) / iVar2;
                                }
                                uVar12 = iVar5 + uVar10;
                            }
                        }
                    }
                    goto code_r0x080024e0;
                }
                break;
            }
            piVar9 = piVar9 + 2;
            iVar11 = iVar11 + -1;
        } while (iVar11 != -0xa8);
        uVar12 = 0x974;
code_r0x080024e0:
        iVar11 = uVar12 + 100000;
        uVar6 = 0;
        if (iVar11 != 0) {
            uVar6 = (-(uVar12 >> 0x1f) & 0xffffc00000000000 | uVar12 << 0xe) / iVar11;
        }
        *(arg1 + 8) = uVar6;
        if ((uVar6 & 0xc000) == 0) {
            iVar14 = 0;
            iVar11 = 0x4000 - (uVar6 & 0xffff);
            pcVar8 = obj.adcmap7_100k;
            iVar2 = 0;
            if (iVar11 != 0) {
                iVar2 = ((uVar6 & 0xffff) * 100000) / iVar11;
            }
            do {
                if (*pcVar8 <= iVar2) {
                    uVar10 = iVar14;
                    if (uVar10 == 0) {
                        iVar13 = -0xa000;
                        goto code_r0x08002658;
                    }
                    if (uVar10 != 0xffffff58) {
                        uVar12 = ~uVar10;
                        if ((0xa7 < ~uVar10) || (0x540 < (uVar12 << 3 | 4))) {
code_r0x08002670:
    //WARNING: Does not return
                            pcVar8 = SoftwareBreakpoint(1,0x8002674);
                            (*pcVar8)();
                        }
                        iVar5 = *(obj.adcmap7_100k + uVar12 * 8);
                        iVar3 = *(uVar12 * 8 + 0x8000110);
                        iVar13 = iVar3;
                        if (iVar5 != iVar2) {
                            iVar4 = *(pcVar8 + 4);
                            if (iVar4 - iVar3 != 0) {
                                iVar7 = *pcVar8 - iVar5;
                                iVar13 = iVar4;
                                if ((iVar7 != 0) && (*pcVar8 != iVar2)) {
                                    iVar13 = 0;
                                    if (iVar7 != 0) {
                                        iVar13 = ((iVar4 - iVar3) * (iVar2 - iVar5)) / iVar7;
                                    }
                                    iVar13 = iVar13 + iVar3;
                                }
                            }
                        }
                        goto code_r0x08002658;
                    }
                    break;
                }
                pcVar8 = pcVar8 + 8;
                iVar14 = iVar14 + -1;
            } while (iVar14 != -0xa8);
            iVar13 = 0x1fc00;
code_r0x08002658:
            if (iVar1 < iVar13) {
                *(arg1 + 8) = uVar6 + 1;
                return;
            }
        }
    }
    return;
}


// ===== sym.qcom_vadc7_scale_hw_calib_therm @ 0x08002674 (size 268) =====

ulong sym.qcom_vadc7_scale_hw_calib_therm(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    if ((arg2 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar10 = 0;
    iVar7 = 0x4000 - (arg2 & 0xffffU);
    pcVar6 = obj.adcmap7_100k;
    iVar4 = 0;
    if (iVar7 != 0) {
        iVar4 = ((arg2 & 0xffffU) * 100000) / iVar7;
    }
    do {
        if (*pcVar6 <= iVar4) {
            uVar9 = iVar10;
            if (uVar9 == 0) {
                iVar8 = -0xa000;
                goto code_r0x080026f4;
            }
            if (uVar9 != 0xffffff58) {
                uVar11 = ~uVar9;
                if ((0xa7 < ~uVar9) || (0x540 < (uVar11 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8002780);
                    (*pcVar6)();
                }
                iVar3 = *(obj.adcmap7_100k + uVar11 * 8);
                iVar1 = *(uVar11 * 8 + 0x8000110);
                iVar8 = iVar1;
                if (iVar3 != iVar4) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar5 = *pcVar6 - iVar3;
                        iVar8 = iVar2;
                        if ((iVar5 != 0) && (*pcVar6 != iVar4)) {
                            iVar8 = 0;
                            if (iVar5 != 0) {
                                iVar8 = ((iVar2 - iVar1) * (iVar4 - iVar3)) / iVar5;
                            }
                            iVar8 = iVar8 + iVar1;
                        }
                    }
                }
                goto code_r0x080026f4;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar10 = iVar10 + -1;
    } while (iVar10 != -0xa8);
    iVar8 = 0x1fc00;
code_r0x080026f4:
    *arg3 = iVar8;
    return 0;
}


// ===== sym.adc_tm_absolute_rthr_gen3 @ 0x08002780 (size 88) =====

ulong sym.adc_tm_absolute_rthr_gen3(int64_t arg1)

{
    *(arg1 + 8) = (*(arg1 + 8) * 0x70e4) / 0x1c9c38;
    *(arg1 + 0x10) = (*(arg1 + 0x10) * 0x70e4) / 0x1c9c38;
    return 0;
}


// ===== sym.qcom_vadc_scale @ 0x080027d8 (size 616) =====

ulong sym.qcom_vadc_scale(uint32_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    bool bVar7;
    uint32_t in_w4;
    int *in_x5;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    
    if (4 < arg1) {
        return 0xffffffea;
    }
    //switch table (5 cases) at 0x8000100
    switch(*(arg1 + 0x8000100) * 4 + 0x8002800) {
    case 0x8002804:
        bVar7 = (arg4 & 1) == 0;
        iVar14 = 0;
        iVar12 = *(arg2 + 8);
        iVar11 = iVar12 * ((in_w4 & 0xffff) - *(arg2 + 8));
        if (bVar7) {
            iVar12 = 0;
        }
        iVar4 = 0;
        if (*arg2 != 0) {
            iVar4 = iVar11 / *arg2;
        }
        uVar10 = iVar4 + iVar12 & (iVar4 + iVar12 >> 0x3f ^ 0xffffffffffffffffU);
        pcVar6 = obj.adcmap_100k_104ef_104fb;
        iVar8 = uVar10 / 1000;
        if (bVar7) {
            iVar8 = uVar10;
        }
        do {
            if (*pcVar6 <= iVar8) {
                uVar13 = iVar14;
                if (uVar13 == 0) {
                    iVar9 = -40000;
                    goto code_r0x080029ac;
                }
                if (uVar13 != 0xffffffde) {
                    uVar10 = ~uVar13;
                    if ((0x21 < ~uVar13) || (0x110 < (uVar10 << 3 | 4))) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(1,0x8002a40);
                        (*pcVar6)();
                    }
                    iVar3 = *(obj.adcmap_100k_104ef_104fb + uVar10 * 8);
                    iVar1 = *(uVar10 * 8 + 0x800094c);
                    iVar9 = iVar1;
                    if (iVar3 != iVar8) {
                        iVar2 = *(pcVar6 + 4);
                        if (iVar2 - iVar1 != 0) {
                            iVar5 = *pcVar6 - iVar3;
                            iVar9 = iVar2;
                            if ((iVar5 != 0) && (*pcVar6 != iVar8)) {
                                iVar9 = 0;
                                if (iVar5 != 0) {
                                    iVar9 = ((iVar2 - iVar1) * (iVar8 - iVar3)) / iVar5;
                                }
                                iVar9 = iVar9 + iVar1;
                            }
                        }
                    }
                    goto code_r0x080029ac;
                }
                break;
            }
            pcVar6 = pcVar6 + 8;
            iVar14 = iVar14 + -1;
        } while (iVar14 != -0x22);
        iVar9 = 0x1e848;
        goto code_r0x080029ac;
    case 0x80028ac:
        iVar12 = *(arg2 + 8);
        iVar11 = iVar12 * ((in_w4 & 0xffff) - *(arg2 + 8));
        if ((arg4 & 1) == 0) {
            iVar12 = 0;
        }
        iVar14 = 0;
        if (*arg2 != 0) {
            iVar14 = iVar11 / *arg2;
        }
        iVar9 = 0;
        if (*arg3 != 0) {
            iVar9 = ((iVar14 + iVar12 & (iVar14 + iVar12 >> 0x3f ^ 0xffffffffffffffffU)) * *(arg3 + 4)) / *arg3;
        }
        goto code_r0x080029ac;
    case 0x80028ec:
        iVar12 = *(arg2 + 8);
        iVar11 = 0;
        if (*arg2 != 0) {
            iVar11 = (iVar12 * ((in_w4 & 0xffff) - *(arg2 + 8))) / *arg2;
        }
        if ((arg4 & 1) == 0) {
            iVar12 = 0;
        }
        uVar13 = 0xfffbd502;
        iVar9 = -0x42afe;
        if (iVar11 + iVar12 < 1) goto code_r0x080029ac;
        iVar9 = 0;
        if (*arg3 << 1 != 0) {
            iVar9 = ((iVar11 + iVar12) * *(arg3 + 4)) / (*arg3 << 1);
        }
        break;
    case 0x800293c:
        iVar12 = *(arg2 + 8);
        iVar11 = iVar12 * ((in_w4 & 0xffff) - *(arg2 + 8));
        if ((arg4 & 1) == 0) {
            iVar12 = 0;
        }
        iVar14 = 0;
        if (*arg2 != 0) {
            iVar14 = iVar11 / *arg2;
        }
        iVar11 = 0;
        if (*arg3 != 0) {
            iVar11 = ((iVar14 + iVar12 & (iVar14 + iVar12 >> 0x3f ^ 0xffffffffffffffffU)) * *(arg3 + 4)) / *arg3;
        }
        iVar12 = iVar11 * -0x43d14 + 0x5b361e9d80;
        uVar13 = iVar12 / 0x3d0900000 + (iVar12 >> 0x3f) >> 0x1f;
        iVar9 = SUB168(SEXT816(iVar12) * SEXT816(0x431bde82d7b634db),8) >> 0x12;
    }
    iVar9 = iVar9 + uVar13;
code_r0x080029ac:
    *in_x5 = iVar9;
    return 0;
}


// ===== sym.qcom_adc_tm5_temp_volt_scale @ 0x08002a40 (size 308) =====

int64_t sym.qcom_adc_tm5_temp_volt_scale(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    int *piVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    
    iVar7 = arg3;
    if (0x12 < arg1) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8002b74);
        (*pcVar6)();
    }
    iVar12 = 0;
    piVar9 = 0x800076c;
    do {
        if (iVar7 <= *piVar9) {
            uVar10 = iVar12;
            if (uVar10 == 0) {
                iVar11 = 0x727;
                goto code_r0x08002a98;
            }
            if (uVar10 != 0xffffffde) {
                uVar13 = ~uVar10;
                if ((0x110 < (uVar13 << 3 | 4)) || (0x21 < uVar13)) goto code_r0x08002b6c;
                iVar1 = *(uVar13 * 8 + 0x800076c);
                iVar3 = *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar13 * 8);
                iVar11 = iVar3;
                if (iVar1 != iVar7) {
                    iVar2 = piVar9[-1];
                    if (iVar2 - iVar3 != 0) {
                        iVar5 = *piVar9 - iVar1;
                        iVar11 = iVar2;
                        if ((iVar5 != 0) && (*piVar9 != iVar7)) {
                            iVar11 = 0;
                            if (iVar5 != 0) {
                                iVar11 = ((iVar2 - iVar3) * (iVar7 - iVar1)) / iVar5;
                            }
                            iVar11 = iVar11 + iVar3;
                        }
                    }
                }
                goto code_r0x08002a98;
            }
            break;
        }
        piVar9 = piVar9 + 2;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x22);
    iVar11 = 0x2e;
code_r0x08002a98:
    if ((arg1 < 0x12) && ((arg1 << 3 | 4) < 0x91)) {
        iVar12 = arg1 * 8;
        iVar8 = *(iVar12 + 0x8000650) * 0x1c9c38;
        iVar4 = 0;
        if (iVar8 != 0) {
            iVar4 = (arg2 * *(obj.adc5_prescale_ratios + iVar12) * 1000 * iVar11) / iVar8;
        }
        return iVar4;
    }
code_r0x08002b6c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8002b70);
    (*pcVar6)();
}


// ===== sym.qcom_adc5_hw_scale @ 0x08002b74 (size 224) =====

ulong sym.qcom_adc5_hw_scale(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong in_x4;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 < 0x13) {
        *in_x18 = unaff_x30;
        if (arg1 - 5U < 0x15) {
            pcVar2 = *(obj.scale_adc5_fn + (arg1 & 0xffffffffU) * 8);
            if (0x13 < (pcVar2 + -0x8002210 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0x8fb8b549d5376986,pcVar2,0x80000e0);
                arg4 = arg4 & 0xffffffff;
            }
            uVar1 = (*pcVar2)(obj.adc5_prescale_ratios + arg2 * 8,arg3,arg4 & 0xffffffff,in_x4);
        }
        else {
            _printk(0x800074f,arg1 & 0xffffffffU);
            uVar1 = 0xffffffea;
        }
        return uVar1;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002c14);
    (*pcVar2)();
}


// ===== sym.qcom_adc5_prescaling_from_dt @ 0x08002c54 (size 84) =====

int64_t sym.qcom_adc5_prescaling_from_dt(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    
    iVar1 = 0;
    puVar2 = 0x8000650;
    while ((puVar2[-1] != arg1 || (*puVar2 != arg2))) {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 2;
        if (iVar1 == 0x12) {
            return 0xffffffea;
        }
    }
    if (iVar1 == 0x12) {
        return 0xffffffea;
    }
    return iVar1;
}


// ===== sym.qcom_adc5_hw_settle_time_from_dt @ 0x08002ca8 (size 392) =====

uint sym.qcom_adc5_hw_settle_time_from_dt(uint32_t arg1,int64_t arg2)

{
    uint uVar1;
    
    if (*arg2 == arg1) {
        return 0;
    }
    if (*(arg2 + 4) == arg1) {
        return 1;
    }
    if (*(arg2 + 8) == arg1) {
        return 2;
    }
    if (*(arg2 + 0xc) == arg1) {
        return 3;
    }
    if (*(arg2 + 0x10) == arg1) {
        return 4;
    }
    if (*(arg2 + 0x14) == arg1) {
        return 5;
    }
    if (*(arg2 + 0x18) == arg1) {
        return 6;
    }
    if (*(arg2 + 0x1c) == arg1) {
        return 7;
    }
    if (*(arg2 + 0x20) == arg1) {
        return 8;
    }
    if (*(arg2 + 0x24) == arg1) {
        return 9;
    }
    if (*(arg2 + 0x28) == arg1) {
        return 10;
    }
    if (*(arg2 + 0x2c) == arg1) {
        return 0xb;
    }
    if (*(arg2 + 0x30) == arg1) {
        return 0xc;
    }
    if (*(arg2 + 0x34) == arg1) {
        return 0xd;
    }
    if (*(arg2 + 0x38) == arg1) {
        return 0xe;
    }
    uVar1 = 0xf;
    if (*(arg2 + 0x3c) != arg1) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.qcom_adc5_avg_samples_from_dt @ 0x08002e30 (size 112) =====

int64_t sym.qcom_adc5_avg_samples_from_dt(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (arg1 != 0) {
        iVar1 = 0xffffffea;
        if ((arg1 < 0x11) &&
           (uVar2 = (arg1 & 0xffffffffU) - ((arg1 & 0xffffffffU) >> 1 & 0x5555555555555555),
           uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333),
           (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 < 2)) {
            uVar2 = (arg1 & 0xaaaaaaaaU) >> 1 | (arg1 & 0x55555555U) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            iVar1 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        return iVar1;
    }
    return 0xffffffea;
}


// ===== sym.qcom_adc5_decimation_from_dt @ 0x08002ea0 (size 80) =====

uint sym.qcom_adc5_decimation_from_dt(uint32_t arg1,int64_t arg2)

{
    uint uVar1;
    
    if (*arg2 == arg1) {
        return 0;
    }
    if (*(arg2 + 4) == arg1) {
        return 1;
    }
    uVar1 = 2;
    if (*(arg2 + 8) != arg1) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.qcom_vadc_decimation_from_dt @ 0x08002ef0 (size 72) =====

int64_t sym.qcom_vadc_decimation_from_dt(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    uVar3 = arg1;
    if (uVar3 != 0) {
        iVar4 = 0xffffffea;
        if (((uVar3 & uVar3 - 1) == 0) && (uVar3 - 0x200 < 0xe01)) {
            uVar1 = (uVar3 >> 9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 >> 9 & 0x5555555555555555) << 1;
            uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
            uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar1 & 0xff00ff00ff00ff) << 8;
            iVar4 = LZCOUNT((uVar2 >> 0x10 | ((uVar1 & 0xff00ff00ff00ff00) >> 8 | uVar2 & 0xffff0000ffff) << 0x10) <<
                            0x20);
        }
        return iVar4;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc_scale_hw_calib_volt @ 0x08002f38 (size 80) =====

ulong sym.qcom_vadc_scale_hw_calib_volt(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(arg2 + 8);
    uVar4 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar4 < uVar3) {
        uVar2 = 0;
    }
    else {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        uVar2 = 0;
        if (*arg1 != 0) {
            uVar2 = (uVar1 * *(arg1 + 4)) / *arg1;
        }
    }
    *arg4 = uVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_therm @ 0x08002f88 (size 288) =====

ulong sym.qcom_vadc_scale_hw_calib_therm(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(arg2 + 8);
    uVar9 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*arg1 * 1000 != 0) {
            iVar7 = (uVar5 * *(arg1 + 4)) / (*arg1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_100k_104ef_104fb_1875_vref;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -40000;
                goto code_r0x08003020;
            }
            if (uVar11 != 0xffffffde) {
                uVar8 = ~uVar11;
                if ((0x21 < ~uVar11) || (0x110 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80030a8);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x800076c);
                iVar3 = iVar7 - *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_100k_104ef_104fb_1875_vref + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003020;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x22);
    iVar10 = 0x1e848;
code_r0x08003020:
    *arg4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_die_temp @ 0x080030a8 (size 88) =====

ulong sym.qcom_vadc_scale_hw_calib_die_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(arg2 + 8);
    uVar4 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = -0x42afe;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*arg1 << 1 != 0) {
            iVar2 = (uVar1 * *(arg1 + 4)) / (*arg1 << 1);
        }
        iVar2 = iVar2 + -0x42afe;
    }
    *arg4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc7_scale_hw_calib_die_temp @ 0x08003100 (size 464) =====

ulong sym.qcom_vadc7_scale_hw_calib_die_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    
    uVar8 = *(arg2 + 8);
    uVar10 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar10 < uVar8) {
code_r0x08003128:
        iVar9 = -60000;
    }
    else {
        uVar7 = 0;
        if (uVar8 != 0) {
            uVar7 = uVar10 / uVar8;
        }
        iVar5 = 0;
        if (*arg1 != 0) {
            iVar5 = (uVar7 * *(arg1 + 4)) / *arg1;
        }
        if (0xd14d3 < iVar5) {
            iVar9 = 160000;
            goto code_r0x080032c0;
        }
        if (iVar5 < 0xc8384) {
            if (iVar5 < 0xbf0a4) {
                if (iVar5 < 0xb5c98) {
                    if (iVar5 < 0xac760) {
                        if (iVar5 < 0xa30fc) {
                            if (iVar5 < 0x99a34) {
                                if (iVar5 < 0x902a4) {
                                    if (iVar5 < 0x86a4c) {
                                        if (iVar5 < 0x7d190) {
                                            if (iVar5 < 0x7380c) {
                                                if (iVar5 < 0x69e24) goto code_r0x08003128;
                                                iVar11 = 0xb;
                                            }
                                            else {
                                                iVar11 = 10;
                                            }
                                        }
                                        else {
                                            iVar11 = 9;
                                        }
                                    }
                                    else {
                                        iVar11 = 8;
                                    }
                                }
                                else {
                                    iVar11 = 7;
                                }
                            }
                            else {
                                iVar11 = 6;
                            }
                        }
                        else {
                            iVar11 = 5;
                        }
                    }
                    else {
                        iVar11 = 4;
                    }
                }
                else {
                    iVar11 = 3;
                }
            }
            else {
                iVar11 = 2;
            }
        }
        else {
            iVar11 = 1;
        }
        iVar1 = (iVar11 - 1) * 8;
        iVar2 = *(obj.adcmap7_die_temp + iVar1);
        iVar3 = *(iVar1 + 0x8000a5c);
        iVar4 = *(iVar11 * 8 + 0x8000a5c);
        iVar9 = iVar3;
        if (iVar2 != iVar5 && iVar4 != iVar3) {
            iVar6 = *(obj.adcmap7_die_temp + iVar11 * 8) - iVar2;
            iVar9 = iVar4;
            if ((iVar6 != 0) && (*(obj.adcmap7_die_temp + iVar11 * 8) != iVar5)) {
                iVar9 = 0;
                if (iVar6 != 0) {
                    iVar9 = ((iVar4 - iVar3) * (iVar5 - iVar2)) / iVar6;
                }
                iVar9 = iVar9 + iVar3;
            }
        }
    }
code_r0x080032c0:
    *arg4 = iVar9;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_chg5_temp @ 0x080032d0 (size 88) =====

ulong sym.qcom_vadc_scale_hw_chg5_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(arg2 + 8);
    uVar4 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = 0x5c29c;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*arg1 << 2 != 0) {
            iVar2 = (uVar1 * *(arg1 + 4)) / (*arg1 << 2);
        }
        iVar2 = 0x5c29c - iVar2;
    }
    *arg4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_smb_temp @ 0x08003328 (size 100) =====

ulong sym.qcom_vadc_scale_hw_smb_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar1 = arg3 * 100;
    uVar4 = *(arg2 + 8);
    uVar5 = (uVar1 & (uVar1 >> 0xf ^ 0xffffffff) & 0xfffc) * 0x1c9c38;
    iVar3 = 0x66648;
    if (uVar4 <= uVar5) {
        uVar2 = 0;
        if (uVar4 != 0) {
            uVar2 = uVar5 / uVar4;
        }
        iVar3 = 0;
        if (*arg1 * 0x164 != 0) {
            iVar3 = (uVar2 * *(arg1 + 4)) / (*arg1 * 0x164);
        }
        iVar3 = 0x66648 - iVar3;
    }
    *arg4 = iVar3;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_100 @ 0x0800338c (size 284) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_100(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(arg2 + 8);
    uVar9 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*arg1 * 1000 != 0) {
            iVar7 = (uVar5 * *(arg1 + 4)) / (*arg1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_100k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x08003420;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80034a8);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000abc);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_100k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_100k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003420;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x08003420:
    *arg4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_30 @ 0x080034a8 (size 284) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(arg2 + 8);
    uVar9 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*arg1 * 1000 != 0) {
            iVar7 = (uVar5 * *(arg1 + 4)) / (*arg1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_30k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x0800353c;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80035c4);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000cec);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_30k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_30k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x0800353c;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x0800353c:
    *arg4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_batt_therm_400 @ 0x080035c4 (size 284) =====

ulong sym.qcom_vadc_scale_hw_calib_batt_therm_400(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    
    uVar8 = *(arg2 + 8);
    uVar9 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar9 < uVar8) {
        iVar7 = 0;
    }
    else {
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        iVar7 = 0;
        if (*arg1 * 1000 != 0) {
            iVar7 = (uVar5 * *(arg1 + 4)) / (*arg1 * 1000);
        }
    }
    iVar12 = 0;
    pcVar6 = obj.adcmap_batt_therm_400k;
    do {
        if (*pcVar6 <= iVar7) {
            uVar11 = iVar12;
            if (uVar11 == 0) {
                iVar10 = -400;
                goto code_r0x08003658;
            }
            if (uVar11 != 0xffffffba) {
                uVar8 = ~uVar11;
                if ((0x45 < ~uVar11) || (0x230 < (uVar8 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x80036e0);
                    (*pcVar6)();
                }
                iVar1 = *(uVar8 * 8 + 0x8000f1c);
                iVar3 = iVar7 - *(obj.adcmap_batt_therm_400k + uVar8 * 8);
                iVar10 = iVar1;
                if (iVar3 != 0) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar4 = *pcVar6 - *(obj.adcmap_batt_therm_400k + uVar8 * 8);
                        iVar10 = iVar2;
                        if ((iVar4 != 0) && (*pcVar6 != iVar7)) {
                            iVar7 = 0;
                            if (iVar4 != 0) {
                                iVar7 = ((iVar2 - iVar1) * iVar3) / iVar4;
                            }
                            iVar10 = iVar7 + iVar1;
                        }
                    }
                }
                goto code_r0x08003658;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != -0x46);
    iVar10 = 0x3d4;
code_r0x08003658:
    *arg4 = iVar10;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_smb1398_temp @ 0x080036e0 (size 100) =====

ulong sym.qcom_vadc_scale_hw_smb1398_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = *(arg2 + 8);
    uVar4 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    iVar2 = -0x417cb;
    if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
            uVar1 = uVar4 / uVar3;
        }
        iVar2 = 0;
        if (*arg1 * 0x154 != 0) {
            iVar2 = (uVar1 * *(arg1 + 4) * 100) / (*arg1 * 0x154);
        }
        iVar2 = iVar2 + -0x417cb;
    }
    *arg4 = iVar2;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_pm7_smb_temp @ 0x08003744 (size 156) =====

ulong sym.qcom_vadc_scale_hw_pm7_smb_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar4 = *(arg2 + 8);
    uVar5 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar5 < uVar4) {
        iVar3 = 0;
    }
    else {
        uVar1 = 0;
        if (uVar4 != 0) {
            uVar1 = uVar5 / uVar4;
        }
        iVar3 = 0;
        if (*arg1 != 0) {
            iVar3 = (uVar1 * *(arg1 + 4)) / *arg1;
        }
        iVar2 = (iVar3 * 250000000 + -0xe253e7da3400) / 894000000;
        iVar3 = iVar2;
        if (iVar2 < -24999) {
            iVar3 = -25000;
        }
        iVar3 = iVar3 + 25000;
    }
    *arg4 = iVar3;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_pm7_chg_temp @ 0x080037e0 (size 136) =====

ulong sym.qcom_vadc_scale_hw_pm7_chg_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar5 = *(arg2 + 8);
    uVar6 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar6 < uVar5) {
        uVar4 = 0;
    }
    else {
        uVar2 = 0;
        if (uVar5 != 0) {
            uVar2 = uVar6 / uVar5;
        }
        iVar1 = 0;
        if (*arg1 != 0) {
            iVar1 = (uVar2 * *(arg1 + 4)) / *arg1;
        }
        iVar3 = (iVar1 * 0x765f + -0x673c39000) / 100000;
        uVar4 = iVar3;
        if (iVar3 < 1) {
            uVar4 = 0;
        }
    }
    *arg4 = uVar4;
    return 0;
}


// ===== sym.qcom_vadc_scale_hw_calib_current @ 0x08003868 (size 76) =====

ulong sym.qcom_vadc_scale_hw_calib_current(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    
    iVar1 = *arg1;
    if (iVar1 != 0) {
        iVar3 = 0;
        if (*(arg2 + 8) != 0) {
            iVar3 = (arg3 * 0x1c9c38) / *(arg2 + 8);
        }
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = (iVar3 * *(arg1 + 4)) / iVar1;
        }
        *arg4 = uVar2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc_scale_hw_calib_current_raw @ 0x080038b4 (size 56) =====

ulong sym.qcom_vadc_scale_hw_calib_current_raw(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = *arg1;
    if (iVar1 != 0) {
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = (*(arg1 + 4) * arg2) / iVar1;
        }
        *arg3 = uVar2;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.qcom_vadc_scale_hw_pm2250_s3_die_temp @ 0x080038ec (size 140) =====

ulong sym.qcom_vadc_scale_hw_pm2250_s3_die_temp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar auVar2 [16];
    uint64_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar5 = *(arg2 + 8);
    uVar6 = (arg3 & (arg3 >> 0xf ^ 0xffffffff) & 0xffff) * 0x1c9c38;
    if (uVar6 < uVar5) {
        iVar4 = 0x5de1b;
    }
    else {
        uVar3 = 0;
        if (uVar5 != 0) {
            uVar3 = uVar6 / uVar5;
        }
        iVar1 = 0;
        if (*arg1 != 0) {
            iVar1 = (uVar3 * *(arg1 + 4)) / *arg1;
        }
        auVar2 = SEXT816((0xafce4 - iVar1) * 100000) * SEXT816(0x59977b91ee00534b);
        iVar4 = auVar2._10_4_ - (auVar2._12_4_ >> 0x1f);
    }
    *arg4 = iVar4;
    return 0;
}


// ===== sym.qcom_vadc5_scale_hw_calib_current @ 0x08003978 (size 100) =====

ulong sym.qcom_vadc5_scale_hw_calib_current(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int iVar2;
    int iVar3;
    int16_t iVar4;
    
    iVar4 = arg3;
    iVar1 = -iVar4;
    if (-1 < iVar4) {
        iVar1 = iVar4;
    }
    iVar3 = 0;
    if (*arg1 != 0) {
        iVar3 = (((iVar1 * *(arg2 + 0xc) * 1000) / 0x7fff) * *(arg1 + 4)) / *arg1;
    }
    iVar2 = -iVar3;
    if (-1 < iVar4) {
        iVar2 = iVar3;
    }
    *arg4 = iVar2;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_batt_therm_100 @ 0x080039dc (size 268) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_batt_therm_100(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    if ((arg2 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar10 = 0;
    iVar7 = 0x4000 - (arg2 & 0xffffU);
    pcVar6 = obj.adcmap_gen3_batt_therm_100k;
    iVar4 = 0;
    if (iVar7 != 0) {
        iVar4 = ((arg2 & 0xffffU) * 100000) / iVar7;
    }
    do {
        if (*pcVar6 <= iVar4) {
            uVar9 = iVar10;
            if (uVar9 == 0) {
                iVar8 = -400;
                goto code_r0x08003a5c;
            }
            if (uVar9 != 0xffffffba) {
                uVar11 = ~uVar9;
                if ((0x45 < ~uVar9) || (0x230 < (uVar11 << 3 | 4))) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(1,0x8003ae8);
                    (*pcVar6)();
                }
                iVar3 = *(obj.adcmap_gen3_batt_therm_100k + uVar11 * 8);
                iVar1 = *(uVar11 * 8 + 0x800114c);
                iVar8 = iVar1;
                if (iVar3 != iVar4) {
                    iVar2 = *(pcVar6 + 4);
                    if (iVar2 - iVar1 != 0) {
                        iVar5 = *pcVar6 - iVar3;
                        iVar8 = iVar2;
                        if ((iVar5 != 0) && (*pcVar6 != iVar4)) {
                            iVar8 = 0;
                            if (iVar5 != 0) {
                                iVar8 = ((iVar2 - iVar1) * (iVar4 - iVar3)) / iVar5;
                            }
                            iVar8 = iVar8 + iVar1;
                        }
                    }
                }
                goto code_r0x08003a5c;
            }
            break;
        }
        pcVar6 = pcVar6 + 8;
        iVar10 = iVar10 + -1;
    } while (iVar10 != -0x46);
    iVar8 = 0x3d4;
code_r0x08003a5c:
    *arg3 = iVar8;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_batt_id_100 @ 0x08003ae8 (size 68) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_batt_id_100(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    
    if ((arg2 >> 0xe & 3) != 0) {
        return 0xffffffea;
    }
    iVar2 = 0x4000 - (arg2 & 0xffffU);
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = ((arg2 & 0xffffU) * 100000) / iVar2;
    }
    *arg3 = uVar1;
    return 0;
}


// ===== sym.qcom_adc5_gen3_scale_hw_calib_usb_in_current @ 0x08003b2c (size 92) =====

ulong sym.qcom_adc5_gen3_scale_hw_calib_usb_in_current(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    int iVar3;
    int16_t iVar4;
    
    iVar4 = arg2;
    iVar1 = -iVar4;
    if (-1 < iVar4) {
        iVar1 = iVar4;
    }
    iVar3 = 0;
    if (*arg1 != 0) {
        iVar3 = (((iVar1 * 1000000) / 0x2420) * *(arg1 + 4)) / *arg1;
    }
    iVar2 = -iVar3;
    if (-1 < iVar4) {
        iVar2 = iVar3;
    }
    *arg3 = iVar2;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003b88 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003bcc

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
    //switch table (4 cases) at 0x8000105
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003be0);
    (*pcVar1)();
}

