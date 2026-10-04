// decompiled from wl2868c by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 468) =====

//WARNING: Switch with 1 destination removed at 0x080033e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x8002230 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080033a4;
            }
            if (arg1 != -0x607809f436f9dcb0) goto code_r0x080033a4;
            pcVar2 = sym.wl2868c_regulator_set_voltage.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8002220 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080033a4;
            }
            if (arg1 != -0x890743871a4a53) goto code_r0x080033a4;
            pcVar2 = sym.wl2868c_ioctl.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt;
        }
    }
    else if (arg1 < 0x1bf4c7c0f319a435) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x18aafba39062885f) goto code_r0x080033a4;
            pcVar2 = sym.wl2868c_regulator_probe.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x1bf4c7c0f319a435) {
            if ((pcVar1 + -0x80021f8 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080033a4;
        }
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.wl2868c_set_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080033a4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080033a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80033f8);
    (*pcVar1)();
}


// ===== sym.wl2868c_regulator_set_voltage.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x080021e0 (size 8) =====

int sym.wl2868c_regulator_set_voltage.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
              (ulong param_1,uint32_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    if ((*(arg1 + 0x150) == 0) ||
       (iVar1 = regulator_set_voltage(*(arg1 + 0x150),*(arg1 + 0x16c) + param_2,0x7fffffff), -1 < iVar1)) {
        iVar1 = sym.wl2868c_write_voltage(arg1,param_2,param_3 & 0xffffffff);
        if ((iVar1 < 0) && (*(arg1 + 0x150) != 0)) {
            regulator_set_voltage(*(arg1 + 0x150),0,0x7fffffff);
        }
    }
    else {
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(arg1 + 0x10),iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.wl2868c_regulator_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.wl2868c_regulator_driver);
    return;
}


// ===== sym.wl2868c_regulator_get_voltage.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x080021f8 (size 8) =====

int sym.wl2868c_regulator_get_voltage.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    int16_t iVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    iVar1 = *(iVar5 + 0x168) + 3;
    iVar4 = regmap_bulk_read(*(iVar5 + 8),iVar1,auStack_3c,1);
    if (iVar4 < 0) {
        _printk(0x8000b5c,"wl2868c_read",iVar1);
        _printk(0x8000947,"wl2868c_regulator_get_voltage",*(iVar5 + 0x10),iVar4);
    }
    else {
        uVar2 = *(iVar5 + 0x168);
        if (auStack_3c[0] == 0) {
            if (6 < uVar2) goto code_r0x080030a8;
            if (0xe0 < (uVar2 << 5 | 0x10)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x80030b0);
                (*pcVar3)();
            }
            iVar4 = *(uVar2 * 0x20 + 0x80010c8);
        }
        else {
            iVar4 = auStack_3c[0] * 8000;
            if (uVar2 < 2) {
                iVar4 = iVar4 + 0x79180;
            }
            else {
                iVar4 = iVar4 + 0x16f300;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x080030a8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80030ac);
    (*pcVar3)();
}


// ===== sym.wl2868c_regulator_is_enabled.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002200 (size 8) =====

uchar * sym.wl2868c_regulator_is_enabled.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = rdev_get_drvdata();
    auStack_2c[0] = 0;
    uVar2 = regmap_bulk_read(*(iVar3 + 8),0xe,auStack_2c,1);
    if (uVar2 < 0) {
        _printk(0x8000b5c,"wl2868c_read",0xe);
        _printk(0x8000823,"wl2868c_regulator_is_enabled",*(iVar3 + 0x10),uVar2);
    }
    else {
        uVar2 = auStack_2c[0] >> (*(iVar3 + 0x168) & 0x1f) & 1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80033f8);
        (*pcVar1)();
    }
    return uVar2;
}


// ===== sym.wl2868c_regulator_disable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002208 (size 8) =====

int sym.wl2868c_regulator_disable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = rdev_get_drvdata();
    uVar1 = 1 << (*(iVar3 + 0x168) & 0x1f) & 0xff;
    iVar2 = regmap_update_bits_base(*(iVar3 + 8),0xe,uVar1,0,0,0,0);
    if (iVar2 < 0) {
        _printk(0x8000aab,"wl2868c_masked_write",0,0xe,uVar1);
        uVar5 = *(iVar3 + 0x10);
        uVar4 = 0x800071c;
    }
    else {
        if (*(iVar3 + 0x150) == 0) {
            return 0;
        }
        iVar2 = regulator_set_voltage(*(iVar3 + 0x150),0,0x7fffffff);
        if (iVar2 < 0) {
            uVar5 = *(iVar3 + 0x10);
            uVar4 = 0x80009bc;
        }
        else {
            iVar2 = regulator_disable(*(iVar3 + 0x150));
            if (-1 < iVar2) {
                return 0;
            }
            uVar5 = *(iVar3 + 0x10);
            uVar4 = 0x8000897;
        }
    }
    _printk(uVar4,"wl2868c_regulator_disable",uVar5,iVar2);
    return iVar2;
}


// ===== sym.wl2868c_regulator_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002210 (size 8) =====

int sym.wl2868c_regulator_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = rdev_get_drvdata();
    if ((*(iVar4 + 0x150) == 0) || (iVar2 = regulator_enable(), -1 < iVar2)) {
        uVar1 = 1 << (*(iVar4 + 0x168) & 0x1f) & 0xff;
        iVar3 = regmap_update_bits_base(*(iVar4 + 8),0xe,uVar1,uVar1,0,0,0);
        iVar2 = 0;
        if (iVar3 < 0) {
            _printk(0x8000aab,"wl2868c_masked_write",uVar1,0xe,uVar1);
            _printk(0x8000dd0,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar3);
            if ((*(iVar4 + 0x150) == 0) || (iVar3 = regulator_disable(), iVar3 < 0)) {
                _printk(0x8000c5d,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar3);
            }
            iVar2 = -0x3e;
        }
    }
    else {
        _printk(0x8000a7e,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar2);
    }
    return iVar2;
}


// ===== sym.wl2868c_set_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002218 (size 8) =====

uint64_t sym.wl2868c_set_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t arg2;
    int iVar5;
    ulong uVar6;
    uchar *puVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    char acStack_6c [4];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uVar10 = *(param_1 + 0x98);
    if ((*param_3 == '0') && (param_3[1] == 'x')) {
        uVar6 = 0x10;
    }
    else {
        uVar6 = 10;
    }
    auStack_2c[0] = simple_strtoul(param_3,0,uVar6);
    puVar7 = auStack_2c;
    iVar2 = regmap_bulk_write(uVar10,0xe,puVar7,1);
    iVar5 = puVar7;
    if (iVar2 < 0) {
        iVar5 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return param_4;
    }
    auVar12 = __stack_chk_fail();
    iVar4 = auVar12._0_8_;
    *extraout_x18 = sym.wl2868c_write_voltage;
    pcStack_58 = sym.wl2868c_write_voltage;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    if (iVar5 < auVar12._8_4_) {
        pcVar8 = *(iVar4 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar11 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar4 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar4 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar8 = acStack_6c;
        iVar9 = (iVar2 + auVar12._8_4_) * 0x10624dd3;
        acStack_6c[0] = (iVar9 >> 0x29) - (iVar9 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar4 + 8),iVar1,pcVar8,1);
        if (uVar3 < 0) {
            uVar11 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar8 = *(iVar4 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar8,uVar11);
        }
        else {
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.wl2868c_regulator_set_voltage;
    iVar9 = rdev_get_drvdata();
    if ((*(iVar9 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar9 + 0x150),*(iVar9 + 0x16c) + arg2,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar9,arg2,pcVar8 & 0xffffffff);
        uVar11 = uVar3;
        if ((uVar3 < 0) && (*(iVar9 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar9 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar11 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar9 + 0x10),uVar11);
    }
    return uVar11;
}


// ===== sym.wl2868c_open.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002220 (size 8) =====

ulong sym.wl2868c_open.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    return 0;
}


// ===== sym.wl2868c_release.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.wl2868c_release.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    return 0;
}


// ===== sym.wl2868c_show_status.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002230 (size 8) =====

uint64_t sym.wl2868c_show_status.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t arg2;
    uint *puVar6;
    char *pcVar7;
    uint32_t *puVar8;
    ulong uVar9;
    uchar *puVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int iVar12;
    char *pcVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    char acStack_11c [4];
    int64_t iStack_118;
    ulong ***pppuStack_110;
    code *pcStack_108;
    char *pcStack_100;
    ulong uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_dc [4];
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint *puStack_c0;
    char *pcStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    puVar6 = &uStack_2c;
    uStack_2c = 0xff;
    iVar2 = regmap_read(*(param_1 + 0x98),0);
    if (iVar2 < 0) {
        _printk(0x80005e8,"wl2868c_show_status");
        uVar4 = 5;
        builtin_strncpy(param_3,"fail\n",6);
    }
    else {
        uVar4 = 8;
        param_3[8] = '\0';
        *param_3 = str.success_n._0_8_;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wl2868c_show_info;
    pcStack_68 = sym.wl2868c_show_info;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    uVar4 = 0;
    uVar14 = *(iVar5 + 0x98);
    uStack_7c = 0xff;
    pcVar13 = NULL;
    puStack_70 = &stack0xffffffffffffffe0;
    do {
        pcVar7 = pcVar13;
        iVar12 = pcVar7;
        iVar2 = regmap_read(uVar14,pcVar7,&uStack_7c);
        if (iVar2 < 0) {
            iVar2 = sprintf(puVar6 + uVar4,"read 0x%x ==> fail\n");
        }
        else {
            param_4 = uStack_7c;
            iVar2 = sprintf(puVar6 + uVar4,"read 0x%x ==> 0x%x\n");
        }
        uVar4 = iVar2 + uVar4;
        uVar3 = iVar12 + 1;
        pcVar13 = uVar3;
    } while (uVar3 != 0x25);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.wl2868c_show_enable;
    pcStack_98 = sym.wl2868c_show_enable;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    puVar8 = &uStack_ac;
    uStack_ac = 0xff;
    ppuStack_a0 = &puStack_70;
    uStack_90 = uVar4;
    iVar2 = regmap_read(*(iVar5 + 0x98),0xe);
    uVar9 = str.read_0x0E___fail_n._8_8_;
    uVar14 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar4 = 0x13;
        pcVar7[0x10] = 'i';
        pcVar7[0x11] = 'l';
        pcVar7[0x12] = '\n';
        pcVar7[0x13] = '\0';
        *pcVar7 = uVar14;
        *(pcVar7 + 8) = uVar9;
    }
    else {
        puVar8 = uStack_ac;
        uVar4 = sprintf(pcVar7,"read 0x0E ==> 0x%x\n");
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.wl2868c_set_enable;
    pcStack_c8 = sym.wl2868c_set_enable;
    iVar11 = sp_el0;
    iStack_d8 = *(iVar11 + 0x5e0);
    uVar14 = *(iVar5 + 0x98);
    if ((*puVar8 == '0') && (*(puVar8 + 1) == 'x')) {
        uVar9 = 0x10;
    }
    else {
        uVar9 = 10;
    }
    pppuStack_d0 = &ppuStack_a0;
    puStack_c0 = puVar6;
    pcStack_b8 = pcVar7;
    auStack_dc[0] = simple_strtoul(puVar8,0,uVar9);
    puVar10 = auStack_dc;
    iVar2 = regmap_bulk_write(uVar14,0xe,puVar10,1);
    iVar12 = puVar10;
    if (iVar2 < 0) {
        iVar12 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_d8) {
        return param_4;
    }
    auVar15 = __stack_chk_fail();
    iVar5 = auVar15._0_8_;
    *extraout_x18_02 = sym.wl2868c_write_voltage;
    pcStack_108 = sym.wl2868c_write_voltage;
    iVar11 = sp_el0;
    iStack_118 = *(iVar11 + 0x5e0);
    pppuStack_110 = &pppuStack_d0;
    pcStack_100 = pcVar13;
    uStack_f0 = uVar14;
    uStack_e8 = param_4;
    if (iVar12 < auVar15._8_4_) {
        pcVar13 = *(iVar5 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar4 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar5 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar5 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar13 = acStack_11c;
        iVar11 = (iVar2 + auVar15._8_4_) * 0x10624dd3;
        acStack_11c[0] = (iVar11 >> 0x29) - (iVar11 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar5 + 8),iVar1,pcVar13,1);
        if (uVar3 < 0) {
            uVar4 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar13 = *(iVar5 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar13,uVar4);
        }
        else {
            uVar4 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_118) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.wl2868c_regulator_set_voltage;
    iVar11 = rdev_get_drvdata();
    if ((*(iVar11 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar11 + 0x150),*(iVar11 + 0x16c) + arg2,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar11,arg2,pcVar13 & 0xffffffff);
        uVar4 = uVar3;
        if ((uVar3 < 0) && (*(iVar11 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar11 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar4 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar11 + 0x10),uVar4);
    }
    return uVar4;
}


// ===== sym.wl2868c_show_info.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002238 (size 8) =====

uint64_t sym.wl2868c_show_info.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                   (int64_t param_1,ulong param_2,int64_t param_3,uint64_t param_4)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t arg2;
    char *pcVar5;
    uint32_t *puVar6;
    ulong uVar7;
    uchar *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar10;
    int iVar11;
    char *pcVar12;
    ulong uVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    char acStack_ec [4];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    char *pcStack_d0;
    ulong uStack_c0;
    uint64_t uStack_b8;
    uchar auStack_ac [4];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    char *pcStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uVar10 = 0;
    uVar13 = *(param_1 + 0x98);
    uStack_4c = 0xff;
    pcVar12 = NULL;
    do {
        pcVar5 = pcVar12;
        iVar11 = pcVar5;
        iVar2 = regmap_read(uVar13,pcVar5,&uStack_4c);
        if (iVar2 < 0) {
            iVar2 = sprintf(param_3 + uVar10,"read 0x%x ==> fail\n");
        }
        else {
            param_4 = uStack_4c;
            iVar2 = sprintf(param_3 + uVar10,"read 0x%x ==> 0x%x\n");
        }
        uVar10 = iVar2 + uVar10;
        uVar3 = iVar11 + 1;
        pcVar12 = uVar3;
    } while (uVar3 != 0x25);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.wl2868c_show_enable;
    pcStack_68 = sym.wl2868c_show_enable;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_7c;
    uStack_7c = 0xff;
    puStack_70 = &stack0xffffffffffffffc0;
    uStack_60 = uVar10;
    iVar2 = regmap_read(*(iVar4 + 0x98),0xe);
    uVar7 = str.read_0x0E___fail_n._8_8_;
    uVar13 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar10 = 0x13;
        pcVar5[0x10] = 'i';
        pcVar5[0x11] = 'l';
        pcVar5[0x12] = '\n';
        pcVar5[0x13] = '\0';
        *pcVar5 = uVar13;
        *(pcVar5 + 8) = uVar7;
    }
    else {
        puVar6 = uStack_7c;
        uVar10 = sprintf(pcVar5,"read 0x0E ==> 0x%x\n");
        uVar10 = uVar10 & 0xffffffff;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_78) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail(uVar10);
    *extraout_x18_00 = sym.wl2868c_set_enable;
    pcStack_98 = sym.wl2868c_set_enable;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uVar13 = *(iVar4 + 0x98);
    if ((*puVar6 == '0') && (*(puVar6 + 1) == 'x')) {
        uVar7 = 0x10;
    }
    else {
        uVar7 = 10;
    }
    ppuStack_a0 = &puStack_70;
    iStack_90 = param_3;
    pcStack_88 = pcVar5;
    auStack_ac[0] = simple_strtoul(puVar6,0,uVar7);
    puVar8 = auStack_ac;
    iVar2 = regmap_bulk_write(uVar13,0xe,puVar8,1);
    iVar11 = puVar8;
    if (iVar2 < 0) {
        iVar11 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return param_4;
    }
    auVar14 = __stack_chk_fail();
    iVar4 = auVar14._0_8_;
    *extraout_x18_01 = sym.wl2868c_write_voltage;
    pcStack_d8 = sym.wl2868c_write_voltage;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    pppuStack_e0 = &ppuStack_a0;
    pcStack_d0 = pcVar12;
    uStack_c0 = uVar13;
    uStack_b8 = param_4;
    if (iVar11 < auVar14._8_4_) {
        pcVar12 = *(iVar4 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar4 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar4 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar12 = acStack_ec;
        iVar9 = (iVar2 + auVar14._8_4_) * 0x10624dd3;
        acStack_ec[0] = (iVar9 >> 0x29) - (iVar9 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar4 + 8),iVar1,pcVar12,1);
        if (uVar3 < 0) {
            uVar10 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar12 = *(iVar4 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar12,uVar10);
        }
        else {
            uVar10 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_e8) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.wl2868c_regulator_set_voltage;
    iVar9 = rdev_get_drvdata();
    if ((*(iVar9 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar9 + 0x150),*(iVar9 + 0x16c) + arg2,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar9,arg2,pcVar12 & 0xffffffff);
        uVar10 = uVar3;
        if ((uVar3 < 0) && (*(iVar9 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar9 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar10 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar9 + 0x10),uVar10);
    }
    return uVar10;
}


// ===== sym.wl2868c_show_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002240 (size 8) =====

uint64_t sym.wl2868c_show_enable.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t arg2;
    int iVar6;
    uint32_t *puVar7;
    ulong uVar8;
    uchar *puVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    char acStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    puVar7 = &uStack_2c;
    uStack_2c = 0xff;
    iVar2 = regmap_read(*(param_1 + 0x98),0xe);
    uVar8 = str.read_0x0E___fail_n._8_8_;
    uVar12 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar4 = 0x13;
        param_3[0x10] = 'i';
        param_3[0x11] = 'l';
        param_3[0x12] = '\n';
        param_3[0x13] = '\0';
        *param_3 = uVar12;
        *(param_3 + 8) = uVar8;
    }
    else {
        puVar7 = uStack_2c;
        uVar4 = sprintf(param_3,"read 0x0E ==> 0x%x\n");
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wl2868c_set_enable;
    pcStack_48 = sym.wl2868c_set_enable;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    uVar12 = *(iVar5 + 0x98);
    if ((*puVar7 == '0') && (*(puVar7 + 1) == 'x')) {
        uVar8 = 0x10;
    }
    else {
        uVar8 = 10;
    }
    puStack_50 = &stack0xffffffffffffffe0;
    auStack_5c[0] = simple_strtoul(puVar7,0,uVar8);
    puVar9 = auStack_5c;
    iVar2 = regmap_bulk_write(uVar12,0xe,puVar9,1);
    iVar6 = puVar9;
    if (iVar2 < 0) {
        iVar6 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return param_4;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18_00 = sym.wl2868c_write_voltage;
    pcStack_88 = sym.wl2868c_write_voltage;
    iVar11 = sp_el0;
    iStack_98 = *(iVar11 + 0x5e0);
    ppuStack_90 = &puStack_50;
    if (iVar6 < auVar13._8_4_) {
        pcVar10 = *(iVar5 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar4 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar5 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar5 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar10 = acStack_9c;
        iVar11 = (iVar2 + auVar13._8_4_) * 0x10624dd3;
        acStack_9c[0] = (iVar11 >> 0x29) - (iVar11 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar5 + 8),iVar1,pcVar10,1);
        if (uVar3 < 0) {
            uVar4 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar10 = *(iVar5 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar10,uVar4);
        }
        else {
            uVar4 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.wl2868c_regulator_set_voltage;
    iVar11 = rdev_get_drvdata();
    if ((*(iVar11 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar11 + 0x150),*(iVar11 + 0x16c) + arg2,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar11,arg2,pcVar10 & 0xffffffff);
        uVar4 = uVar3;
        if ((uVar3 < 0) && (*(iVar11 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar11 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar4 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar11 + 0x10),uVar4);
    }
    return uVar4;
}


// ===== sym.wl2868c_regulator_probe.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002248 (size 8) =====

uint64_t sym.wl2868c_regulator_probe.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t *arg1;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_d0;
    uint uStack_cc;
    ulong uStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar1 = param_1 + 0x20;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_d0 = 0;
    uStack_cc = 0xff;
    iVar6 = devm_pinctrl_get(iVar1);
    if (iVar6 == 0) {
        _printk(0x800097f,"wl2868c_regulator_probe");
        uVar8 = 0xffffffed;
    }
    else {
        auVar15 = pinctrl_lookup_state(iVar6,"wl2868c_enable");
        uVar8 = auVar15._8_8_;
        uVar9 = auVar15._0_8_;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
            uVar10 = 0x8000b7c;
        }
        else {
            auVar15 = pinctrl_lookup_state(iVar6,"wl2868c_disable");
            uVar7 = auVar15._0_8_;
            uVar8 = auVar15._8_8_;
            if ((uVar7 != 0) && (uVar8 = uVar7, uVar7 < 0xfffffffffffff001)) {
                iVar4 = pinctrl_select_state(iVar6);
                if (iVar4 != 0) {
                    _printk(0x80007af,iVar4);
                }
                msleep(0x19);
                iVar4 = pinctrl_select_state(iVar6,uVar9);
                if (iVar4 != 0) {
                    _printk(0x8000c95,iVar4);
                }
                msleep(0x19);
                *(param_1 + 2) = 0x2f;
                uVar5 = of_property_read_variable_u32_array(*(param_1 + 0x310),"index",&uStack_d0,1,0);
                if (uVar5 < 0) {
                    uVar8 = uVar5;
                    uVar10 = 0x8000929;
                }
                else {
                    uVar8 = __devm_regmap_init_i2c(param_1,obj.wl2868c_regmap_config,0,0);
                    if (uVar8 < 0xfffffffffffff001) {
                        uStack_70 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        piStack_90 = NULL;
                        iStack_88 = 0;
                        iStack_a0 = 0;
                        iStack_98 = 0;
                        if (5 < uStack_d0) goto code_r0x08002a5c;
                        iVar6 = uStack_d0 * 0x18;
                        uStack_b8 = *(obj.wl2868c_dev_list + iVar6);
                        iStack_b0 = *(iVar6 + 0x8000f28);
                        uStack_a8 = *(iVar6 + 0x8000f30);
                        snprintf(&iStack_a0,0x31,"wl2868c%u");
                        iVar4 = alloc_chrdev_region(&uStack_b8,0,1,&iStack_a0);
                        if (iVar4 == 0) {
                            iStack_b0 = cdev_alloc();
                            if (iStack_b0 != 0) {
                                cdev_init(iStack_b0,obj.wl2868c_file_operations);
                                *(iStack_b0 + 0x60) = obj.__this_module;
                                iVar4 = cdev_add(iStack_b0,uStack_b8 & 0xffffffff,1);
                                if (iVar4 == 0) {
                                    if (((_segment.ehdr != 0) ||
                                        (_segment.ehdr =
                                              __class_create(obj.__this_module,"camera_ldo",
                                                             
                                                            reloc.wl2868c_regulator_probe.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                                                            ), _segment.ehdr < 0xfffffffffffff001)) &&
                                       (uStack_a8 = device_create(_segment.ehdr,0,uStack_b8 & 0xffffffff,0,
                                                                  &iStack_a0), uStack_a8 != 0)) {
                                        *(uStack_a8 + 0x98) = uVar8;
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_status,0);
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_info,0);
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_enable,0);
                                    }
                                    goto code_r0x0800240c;
                                }
                            }
                            unregister_chrdev_region(uStack_b8 & 0xffffffff,1);
                        }
code_r0x0800240c:
                        iVar4 = regmap_read(uVar8,0,&uStack_cc);
                        if (iVar4 < 0) {
                            _printk(0x80005b9,"wl2868c_regulator_probe",0);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                            _printk(0x80005b9,"wl2868c_regulator_probe",1);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                            _printk(0x80005b9,"wl2868c_regulator_probe",2);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                        }
                        else {
code_r0x08002420:
                            uStack_c0 = 0;
                            uStack_c8 = 0;
                            of_property_read_variable_u32_array(*(param_1 + 0x310),"index",&uStack_c0,1,0);
                            for (iVar6 = of_get_next_available_child(*(param_1 + 0x310),0); iVar6 != 0;
                                iVar6 = of_get_next_available_child(*(param_1 + 0x310),iVar6)) {
                                arg1 = devm_kmalloc(iVar1,0x178,0xdc0);
                                if (arg1 == NULL) {
                                    uVar9 = 0xfffffff4;
code_r0x080029f0:
                                    _printk(0x8000854,"wl2868c_regulator_probe",uVar9 & 0xffffffff);
                                    break;
                                }
                                arg1[0x2c] = iVar6;
                                *arg1 = iVar1;
                                arg1[1] = uVar8;
                                *(arg1 + 0x174) = uStack_c0;
                                arg1[0x2a] = 0;
                                iVar4 = of_property_read_string(iVar6,"regulator-name",&uStack_c8);
                                uVar10 = uStack_c8;
                                if (iVar4 == 0) {
                                    iVar14 = arg1[0x2c];
                                    iVar13 = *arg1;
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    piStack_90 = NULL;
                                    iStack_88 = 0;
                                    iStack_a0 = 0;
                                    iStack_98 = 0;
                                    uStack_a8 = uStack_a8 & 0xffffffff00000000;
                                    uStack_b8 = 0;
                                    iStack_b0 = 0;
                                    iVar4 = strcmp("fan53870-l1",uStack_c8);
                                    if (iVar4 == 0) {
                                        iVar11 = 0;
code_r0x080025ac:
                                        uVar5 = of_property_read_variable_u16_array(iVar14,"offset",arg1 + 0x2d,1,0)
                                        ;
                                        if (uVar5 < 0) {
                                            uVar9 = uVar5;
                                            _printk(0x8000634,"wl2868c_register_ldo",uVar10,uVar9);
                                        }
                                        else {
                                            iVar11 = iVar11 * 0x20;
                                            *(arg1 + 0x16c) = *(iVar11 + 0x80010cc);
                                            of_property_read_variable_u32_array
                                                      (iVar14,"min-dropout-voltage",arg1 + 0x16c,1,0);
                                            *(arg1 + 0x2e) = *(iVar11 + 0x80010d0);
                                            of_property_read_variable_u32_array(iVar14,"iout_ua",arg1 + 0x2e,1,0);
                                            uStack_bc = 0xffffffea;
                                            of_property_read_variable_u32_array
                                                      (iVar14,"init-voltage",&uStack_bc,1,0);
                                            uVar12 = *(iVar11 + 0x80010c0);
                                            scnprintf(&uStack_b8,0x14,"%s-supply",uVar12);
                                            iVar11 = of_find_property(*(iVar13 + 0x2f0),&uStack_b8,0);
                                            if (iVar11 == 0) {
code_r0x0800268c:
                                                piVar2 = arg1 + 2;
                                                iVar11 = of_get_regulator_init_data(iVar13,iVar14,piVar2);
                                                if (iVar11 == 0) {
                                                    _printk(0x8000a47,"wl2868c_register_ldo",uVar10);
                                                    uVar9 = 0xffffffc3;
                                                    goto code_r0x080029d4;
                                                }
                                                if (*(iVar11 + 8) == 0) {
                                                    uVar12 = 0x80008db;
                                                    goto code_r0x080029c0;
                                                }
                                                if ((0 < uStack_bc) &&
                                                   (iVar4 = sym.wl2868c_write_voltage(arg1,uStack_bc,*(iVar11 + 0x14))
                                                   , iVar4 < 0)) {
                                                    _printk(0x800069e,"wl2868c_register_ldo",uVar10,iVar4);
                                                }
                                                *(iVar11 + 0x40) = *(iVar11 + 0x40) | 9;
                                                *(iVar11 + 0x44) = *(iVar11 + 0x14);
                                                *(arg1 + 0x5c) = 0;
                                                arg1[0xc] = obj.__this_module;
                                                arg1[10] = obj.wl2868c_regulator_ops;
                                                arg1[2] = *(iVar11 + 8);
                                                *(arg1 + 9) = 1;
                                                iStack_a0 = iVar13;
                                                iStack_98 = iVar11;
                                                piStack_90 = arg1;
                                                iStack_88 = iVar14;
                                                uVar9 = devm_regulator_register(iVar13,piVar2,&iStack_a0);
                                                arg1[0x29] = uVar9;
                                                if (uVar9 < 0xfffffffffffff001) goto code_r0x08002478;
                                                _printk(0x8000bb3,"wl2868c_register_ldo",*piVar2,uVar9 & 0xffffffff);
                                                uVar9 = uVar9 & 0xffffffff;
                                            }
                                            else {
                                                uVar9 = devm_regulator_get(iVar13,uVar12);
                                                arg1[0x2a] = uVar9;
                                                if (uVar9 < 0xfffffffffffff001) goto code_r0x0800268c;
                                                if (uVar9 == 0x205) goto code_r0x08002478;
                                                _printk(0x8000d6c,"wl2868c_register_ldo",uVar10,uVar9 & 0xffffffff);
                                            }
                                            if (-1 < uVar9) goto code_r0x08002478;
                                        }
                                    }
                                    else {
                                        iVar4 = strcmp("fan53870-l2",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 1;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l3",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 2;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l4",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 3;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l5",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 4;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l6",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 5;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l7",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 6;
                                            goto code_r0x080025ac;
                                        }
                                        uVar12 = 0x8000be5;
code_r0x080029c0:
                                        _printk(uVar12,"wl2868c_register_ldo",uVar10);
                                        uVar9 = 0xffffffea;
                                    }
code_r0x080029d4:
                                    _printk(0x80009f1,"wl2868c_parse_regulator",uStack_c8,uVar9 & 0xffffffff);
                                    goto code_r0x080029f0;
                                }
code_r0x08002478:
                            }
                        }
                        uVar8 = 0;
                        goto code_r0x08002a0c;
                    }
                    uVar10 = 0x8000d12;
                }
                _printk(uVar10,"wl2868c_regulator_probe");
                goto code_r0x08002a0c;
            }
            uVar10 = 0x8000ae7;
        }
        _printk(uVar10,uVar8);
        uVar8 = 0xffffffea;
    }
code_r0x08002a0c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08002a5c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8002a60);
    (*pcVar3)();
}


// ===== sym.wl2868c_ioctl.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.wl2868c_ioctl.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt(void)

{
    return 0;
}


// ===== sym.wl2868c_regulator_probe @ 0x08002258 (size 2056) =====

uint64_t sym.wl2868c_regulator_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t *arg1_00;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_d0;
    uint uStack_cc;
    ulong uStack_c8;
    uint uStack_c0;
    uint32_t uStack_bc;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar1 = arg1 + 0x20;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_d0 = 0;
    uStack_cc = 0xff;
    iVar6 = devm_pinctrl_get(iVar1);
    if (iVar6 == 0) {
        _printk(0x800097f,"wl2868c_regulator_probe");
        uVar8 = 0xffffffed;
    }
    else {
        auVar15 = pinctrl_lookup_state(iVar6,"wl2868c_enable");
        uVar8 = auVar15._8_8_;
        uVar9 = auVar15._0_8_;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
            uVar10 = 0x8000b7c;
        }
        else {
            auVar15 = pinctrl_lookup_state(iVar6,"wl2868c_disable");
            uVar7 = auVar15._0_8_;
            uVar8 = auVar15._8_8_;
            if ((uVar7 != 0) && (uVar8 = uVar7, uVar7 < 0xfffffffffffff001)) {
                iVar4 = pinctrl_select_state(iVar6);
                if (iVar4 != 0) {
                    _printk(0x80007af,iVar4);
                }
                msleep(0x19);
                iVar4 = pinctrl_select_state(iVar6,uVar9);
                if (iVar4 != 0) {
                    _printk(0x8000c95,iVar4);
                }
                msleep(0x19);
                *(arg1 + 2) = 0x2f;
                uVar5 = of_property_read_variable_u32_array(*(arg1 + 0x310),"index",&uStack_d0,1,0);
                if (uVar5 < 0) {
                    uVar8 = uVar5;
                    uVar10 = 0x8000929;
                }
                else {
                    uVar8 = __devm_regmap_init_i2c(arg1,obj.wl2868c_regmap_config,0,0);
                    if (uVar8 < 0xfffffffffffff001) {
                        uStack_70 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        piStack_90 = NULL;
                        iStack_88 = 0;
                        iStack_a0 = 0;
                        iStack_98 = 0;
                        if (5 < uStack_d0) goto code_r0x08002a5c;
                        iVar6 = uStack_d0 * 0x18;
                        uStack_b8 = *(obj.wl2868c_dev_list + iVar6);
                        iStack_b0 = *(iVar6 + 0x8000f28);
                        uStack_a8 = *(iVar6 + 0x8000f30);
                        snprintf(&iStack_a0,0x31,"wl2868c%u");
                        iVar4 = alloc_chrdev_region(&uStack_b8,0,1,&iStack_a0);
                        if (iVar4 == 0) {
                            iStack_b0 = cdev_alloc();
                            if (iStack_b0 != 0) {
                                cdev_init(iStack_b0,obj.wl2868c_file_operations);
                                *(iStack_b0 + 0x60) = obj.__this_module;
                                iVar4 = cdev_add(iStack_b0,uStack_b8 & 0xffffffff,1);
                                if (iVar4 == 0) {
                                    if (((_segment.ehdr != 0) ||
                                        (_segment.ehdr =
                                              __class_create(obj.__this_module,"camera_ldo",
                                                             
                                                            reloc.wl2868c_regulator_probe.dbd0ab21257acd8a6a5a794d16c5c4af.cfi_jt
                                                            ), _segment.ehdr < 0xfffffffffffff001)) &&
                                       (uStack_a8 = device_create(_segment.ehdr,0,uStack_b8 & 0xffffffff,0,
                                                                  &iStack_a0), uStack_a8 != 0)) {
                                        *(uStack_a8 + 0x98) = uVar8;
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_status,0);
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_info,0);
                                        sysfs_create_file_ns(uStack_a8,obj.dev_attr_enable,0);
                                    }
                                    goto code_r0x0800240c;
                                }
                            }
                            unregister_chrdev_region(uStack_b8 & 0xffffffff,1);
                        }
code_r0x0800240c:
                        iVar4 = regmap_read(uVar8,0,&uStack_cc);
                        if (iVar4 < 0) {
                            _printk(0x80005b9,"wl2868c_regulator_probe",0);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                            _printk(0x80005b9,"wl2868c_regulator_probe",1);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                            _printk(0x80005b9,"wl2868c_regulator_probe",2);
                            iVar4 = regmap_read(uVar8,0,&uStack_cc);
                            msleep(1);
                            if (-1 < iVar4) goto code_r0x08002420;
                        }
                        else {
code_r0x08002420:
                            uStack_c0 = 0;
                            uStack_c8 = 0;
                            of_property_read_variable_u32_array(*(arg1 + 0x310),"index",&uStack_c0,1,0);
                            for (iVar6 = of_get_next_available_child(*(arg1 + 0x310),0); iVar6 != 0;
                                iVar6 = of_get_next_available_child(*(arg1 + 0x310),iVar6)) {
                                arg1_00 = devm_kmalloc(iVar1,0x178,0xdc0);
                                if (arg1_00 == NULL) {
                                    uVar9 = 0xfffffff4;
code_r0x080029f0:
                                    _printk(0x8000854,"wl2868c_regulator_probe",uVar9 & 0xffffffff);
                                    break;
                                }
                                arg1_00[0x2c] = iVar6;
                                *arg1_00 = iVar1;
                                arg1_00[1] = uVar8;
                                *(arg1_00 + 0x174) = uStack_c0;
                                arg1_00[0x2a] = 0;
                                iVar4 = of_property_read_string(iVar6,"regulator-name",&uStack_c8);
                                uVar10 = uStack_c8;
                                if (iVar4 == 0) {
                                    iVar14 = arg1_00[0x2c];
                                    iVar13 = *arg1_00;
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    piStack_90 = NULL;
                                    iStack_88 = 0;
                                    iStack_a0 = 0;
                                    iStack_98 = 0;
                                    uStack_a8 = uStack_a8 & 0xffffffff00000000;
                                    uStack_b8 = 0;
                                    iStack_b0 = 0;
                                    iVar4 = strcmp("fan53870-l1",uStack_c8);
                                    if (iVar4 == 0) {
                                        iVar11 = 0;
code_r0x080025ac:
                                        uVar5 = of_property_read_variable_u16_array
                                                          (iVar14,"offset",arg1_00 + 0x2d,1,0);
                                        if (uVar5 < 0) {
                                            uVar9 = uVar5;
                                            _printk(0x8000634,"wl2868c_register_ldo",uVar10,uVar9);
                                        }
                                        else {
                                            iVar11 = iVar11 * 0x20;
                                            *(arg1_00 + 0x16c) = *(iVar11 + 0x80010cc);
                                            of_property_read_variable_u32_array
                                                      (iVar14,"min-dropout-voltage",arg1_00 + 0x16c,1,0);
                                            *(arg1_00 + 0x2e) = *(iVar11 + 0x80010d0);
                                            of_property_read_variable_u32_array(iVar14,"iout_ua",arg1_00 + 0x2e,1,0)
                                            ;
                                            uStack_bc = 0xffffffea;
                                            of_property_read_variable_u32_array
                                                      (iVar14,"init-voltage",&uStack_bc,1,0);
                                            uVar12 = *(iVar11 + 0x80010c0);
                                            scnprintf(&uStack_b8,0x14,"%s-supply",uVar12);
                                            iVar11 = of_find_property(*(iVar13 + 0x2f0),&uStack_b8,0);
                                            if (iVar11 == 0) {
code_r0x0800268c:
                                                piVar2 = arg1_00 + 2;
                                                iVar11 = of_get_regulator_init_data(iVar13,iVar14,piVar2);
                                                if (iVar11 == 0) {
                                                    _printk(0x8000a47,"wl2868c_register_ldo",uVar10);
                                                    uVar9 = 0xffffffc3;
                                                    goto code_r0x080029d4;
                                                }
                                                if (*(iVar11 + 8) == 0) {
                                                    uVar12 = 0x80008db;
                                                    goto code_r0x080029c0;
                                                }
                                                if ((0 < uStack_bc) &&
                                                   (iVar4 = sym.wl2868c_write_voltage
                                                                      (arg1_00,uStack_bc,*(iVar11 + 0x14)), iVar4 < 0
                                                   )) {
                                                    _printk(0x800069e,"wl2868c_register_ldo",uVar10,iVar4);
                                                }
                                                *(iVar11 + 0x40) = *(iVar11 + 0x40) | 9;
                                                *(iVar11 + 0x44) = *(iVar11 + 0x14);
                                                *(arg1_00 + 0x5c) = 0;
                                                arg1_00[0xc] = obj.__this_module;
                                                arg1_00[10] = obj.wl2868c_regulator_ops;
                                                arg1_00[2] = *(iVar11 + 8);
                                                *(arg1_00 + 9) = 1;
                                                iStack_a0 = iVar13;
                                                iStack_98 = iVar11;
                                                piStack_90 = arg1_00;
                                                iStack_88 = iVar14;
                                                uVar9 = devm_regulator_register(iVar13,piVar2,&iStack_a0);
                                                arg1_00[0x29] = uVar9;
                                                if (uVar9 < 0xfffffffffffff001) goto code_r0x08002478;
                                                _printk(0x8000bb3,"wl2868c_register_ldo",*piVar2,uVar9 & 0xffffffff);
                                                uVar9 = uVar9 & 0xffffffff;
                                            }
                                            else {
                                                uVar9 = devm_regulator_get(iVar13,uVar12);
                                                arg1_00[0x2a] = uVar9;
                                                if (uVar9 < 0xfffffffffffff001) goto code_r0x0800268c;
                                                if (uVar9 == 0x205) goto code_r0x08002478;
                                                _printk(0x8000d6c,"wl2868c_register_ldo",uVar10,uVar9 & 0xffffffff);
                                            }
                                            if (-1 < uVar9) goto code_r0x08002478;
                                        }
                                    }
                                    else {
                                        iVar4 = strcmp("fan53870-l2",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 1;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l3",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 2;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l4",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 3;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l5",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 4;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l6",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 5;
                                            goto code_r0x080025ac;
                                        }
                                        iVar4 = strcmp("fan53870-l7",uVar10);
                                        if (iVar4 == 0) {
                                            iVar11 = 6;
                                            goto code_r0x080025ac;
                                        }
                                        uVar12 = 0x8000be5;
code_r0x080029c0:
                                        _printk(uVar12,"wl2868c_register_ldo",uVar10);
                                        uVar9 = 0xffffffea;
                                    }
code_r0x080029d4:
                                    _printk(0x80009f1,"wl2868c_parse_regulator",uStack_c8,uVar9 & 0xffffffff);
                                    goto code_r0x080029f0;
                                }
code_r0x08002478:
                            }
                        }
                        uVar8 = 0;
                        goto code_r0x08002a0c;
                    }
                    uVar10 = 0x8000d12;
                }
                _printk(uVar10,"wl2868c_regulator_probe");
                goto code_r0x08002a0c;
            }
            uVar10 = 0x8000ae7;
        }
        _printk(uVar10,uVar8);
        uVar8 = 0xffffffea;
    }
code_r0x08002a0c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08002a5c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8002a60);
    (*pcVar3)();
}


// ===== sym.wl2868c_ioctl @ 0x08002a60 (size 16) =====

ulong sym.wl2868c_ioctl(void)

{
    return 0;
}


// ===== sym.wl2868c_open @ 0x08002a70 (size 16) =====

ulong sym.wl2868c_open(int64_t arg1)

{
    return 0;
}


// ===== sym.wl2868c_release @ 0x08002a80 (size 16) =====

ulong sym.wl2868c_release(int64_t arg1)

{
    return 0;
}


// ===== sym.wl2868c_show_status @ 0x08002a90 (size 188) =====

uint64_t sym.wl2868c_show_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t arg2_00;
    uint *puVar6;
    char *pcVar7;
    uint32_t *puVar8;
    ulong uVar9;
    uchar *puVar10;
    uint64_t in_x3;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int iVar12;
    char *pcVar13;
    ulong uVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    char acStack_11c [4];
    int64_t iStack_118;
    ulong ***pppuStack_110;
    code *pcStack_108;
    char *pcStack_100;
    ulong uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_dc [4];
    int64_t iStack_d8;
    uchar ***pppuStack_d0;
    code *pcStack_c8;
    uint *puStack_c0;
    char *pcStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    puVar6 = &uStack_2c;
    uStack_2c = 0xff;
    iVar2 = regmap_read(*(arg1 + 0x98),0);
    if (iVar2 < 0) {
        _printk(0x80005e8,"wl2868c_show_status");
        uVar4 = 5;
        *(arg2 + 4) = 10;
        *arg2 = 0x6c696166;
    }
    else {
        uVar4 = 8;
        *(arg2 + 8) = 0;
        *arg2 = str.success_n._0_8_;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wl2868c_show_info;
    pcStack_68 = sym.wl2868c_show_info;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    uVar4 = 0;
    uVar14 = *(iVar5 + 0x98);
    uStack_7c = 0xff;
    pcVar13 = NULL;
    puStack_70 = &stack0xffffffffffffffe0;
    do {
        pcVar7 = pcVar13;
        iVar12 = pcVar7;
        iVar2 = regmap_read(uVar14,pcVar7,&uStack_7c);
        if (iVar2 < 0) {
            iVar2 = sprintf(puVar6 + uVar4,"read 0x%x ==> fail\n");
        }
        else {
            in_x3 = uStack_7c;
            iVar2 = sprintf(puVar6 + uVar4,"read 0x%x ==> 0x%x\n");
        }
        uVar4 = iVar2 + uVar4;
        uVar3 = iVar12 + 1;
        pcVar13 = uVar3;
    } while (uVar3 != 0x25);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.wl2868c_show_enable;
    pcStack_98 = sym.wl2868c_show_enable;
    iVar11 = sp_el0;
    iStack_a8 = *(iVar11 + 0x5e0);
    puVar8 = &uStack_ac;
    uStack_ac = 0xff;
    ppuStack_a0 = &puStack_70;
    uStack_90 = uVar4;
    iVar2 = regmap_read(*(iVar5 + 0x98),0xe);
    uVar9 = str.read_0x0E___fail_n._8_8_;
    uVar14 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar4 = 0x13;
        pcVar7[0x10] = 'i';
        pcVar7[0x11] = 'l';
        pcVar7[0x12] = '\n';
        pcVar7[0x13] = '\0';
        *pcVar7 = uVar14;
        *(pcVar7 + 8) = uVar9;
    }
    else {
        puVar8 = uStack_ac;
        uVar4 = sprintf(pcVar7,"read 0x0E ==> 0x%x\n");
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_a8) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18_01 = sym.wl2868c_set_enable;
    pcStack_c8 = sym.wl2868c_set_enable;
    iVar11 = sp_el0;
    iStack_d8 = *(iVar11 + 0x5e0);
    uVar14 = *(iVar5 + 0x98);
    if ((*puVar8 == '0') && (*(puVar8 + 1) == 'x')) {
        uVar9 = 0x10;
    }
    else {
        uVar9 = 10;
    }
    pppuStack_d0 = &ppuStack_a0;
    puStack_c0 = puVar6;
    pcStack_b8 = pcVar7;
    auStack_dc[0] = simple_strtoul(puVar8,0,uVar9);
    puVar10 = auStack_dc;
    iVar2 = regmap_bulk_write(uVar14,0xe,puVar10,1);
    iVar12 = puVar10;
    if (iVar2 < 0) {
        iVar12 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_d8) {
        return in_x3;
    }
    auVar15 = __stack_chk_fail();
    iVar5 = auVar15._0_8_;
    *extraout_x18_02 = sym.wl2868c_write_voltage;
    pcStack_108 = sym.wl2868c_write_voltage;
    iVar11 = sp_el0;
    iStack_118 = *(iVar11 + 0x5e0);
    pppuStack_110 = &pppuStack_d0;
    pcStack_100 = pcVar13;
    uStack_f0 = uVar14;
    uStack_e8 = in_x3;
    if (iVar12 < auVar15._8_4_) {
        pcVar13 = *(iVar5 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar4 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar5 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar5 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar13 = acStack_11c;
        iVar11 = (iVar2 + auVar15._8_4_) * 0x10624dd3;
        acStack_11c[0] = (iVar11 >> 0x29) - (iVar11 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar5 + 8),iVar1,pcVar13,1);
        if (uVar3 < 0) {
            uVar4 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar13 = *(iVar5 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar13,uVar4);
        }
        else {
            uVar4 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_118) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.wl2868c_regulator_set_voltage;
    iVar11 = rdev_get_drvdata();
    if ((*(iVar11 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar11 + 0x150),*(iVar11 + 0x16c) + arg2_00,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar11,arg2_00,pcVar13 & 0xffffffff);
        uVar4 = uVar3;
        if ((uVar3 < 0) && (*(iVar11 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar11 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar4 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar11 + 0x10),uVar4);
    }
    return uVar4;
}


// ===== sym.wl2868c_show_info @ 0x08002b4c (size 224) =====

uint64_t sym.wl2868c_show_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    char *pcVar5;
    uint32_t *puVar6;
    ulong uVar7;
    uchar *puVar8;
    uint64_t in_x3;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar10;
    int iVar11;
    char *pcVar12;
    ulong uVar13;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar14 [12];
    char acStack_ec [4];
    int64_t iStack_e8;
    uchar ***pppuStack_e0;
    code *pcStack_d8;
    char *pcStack_d0;
    ulong uStack_c0;
    uint64_t uStack_b8;
    uchar auStack_ac [4];
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    char *pcStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uVar10 = 0;
    uVar13 = *(arg1 + 0x98);
    uStack_4c = 0xff;
    pcVar12 = NULL;
    do {
        pcVar5 = pcVar12;
        iVar11 = pcVar5;
        iVar2 = regmap_read(noname_1,uVar13,pcVar5,&uStack_4c);
        if (iVar2 < 0) {
            iVar2 = sprintf(arg2 + uVar10,"read 0x%x ==> fail\n");
            noname_1 = extraout_q0_00;
        }
        else {
            in_x3 = uStack_4c;
            iVar2 = sprintf(arg2 + uVar10,"read 0x%x ==> 0x%x\n");
            noname_1 = extraout_q0;
        }
        uVar10 = iVar2 + uVar10;
        uVar3 = iVar11 + 1;
        pcVar12 = uVar3;
    } while (uVar3 != 0x25);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.wl2868c_show_enable;
    pcStack_68 = sym.wl2868c_show_enable;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    puVar6 = &uStack_7c;
    uStack_7c = 0xff;
    puStack_70 = &stack0xffffffffffffffc0;
    uStack_60 = uVar10;
    iVar2 = regmap_read(*(iVar4 + 0x98),0xe);
    uVar7 = str.read_0x0E___fail_n._8_8_;
    uVar13 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar10 = 0x13;
        pcVar5[0x10] = 'i';
        pcVar5[0x11] = 'l';
        pcVar5[0x12] = '\n';
        pcVar5[0x13] = '\0';
        *pcVar5 = uVar13;
        *(pcVar5 + 8) = uVar7;
    }
    else {
        puVar6 = uStack_7c;
        uVar10 = sprintf(pcVar5,"read 0x0E ==> 0x%x\n");
        uVar10 = uVar10 & 0xffffffff;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_78) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail(uVar10);
    *extraout_x18_00 = sym.wl2868c_set_enable;
    pcStack_98 = sym.wl2868c_set_enable;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uVar13 = *(iVar4 + 0x98);
    if ((*puVar6 == '0') && (*(puVar6 + 1) == 'x')) {
        uVar7 = 0x10;
    }
    else {
        uVar7 = 10;
    }
    ppuStack_a0 = &puStack_70;
    iStack_90 = arg2;
    pcStack_88 = pcVar5;
    auStack_ac[0] = simple_strtoul(puVar6,0,uVar7);
    puVar8 = auStack_ac;
    iVar2 = regmap_bulk_write(uVar13,0xe,puVar8,1);
    iVar11 = puVar8;
    if (iVar2 < 0) {
        iVar11 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return in_x3;
    }
    auVar14 = __stack_chk_fail();
    iVar4 = auVar14._0_8_;
    *extraout_x18_01 = sym.wl2868c_write_voltage;
    pcStack_d8 = sym.wl2868c_write_voltage;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    pppuStack_e0 = &ppuStack_a0;
    pcStack_d0 = pcVar12;
    uStack_c0 = uVar13;
    uStack_b8 = in_x3;
    if (iVar11 < auVar14._8_4_) {
        pcVar12 = *(iVar4 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar4 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar4 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar12 = acStack_ec;
        iVar9 = (iVar2 + auVar14._8_4_) * 0x10624dd3;
        acStack_ec[0] = (iVar9 >> 0x29) - (iVar9 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar4 + 8),iVar1,pcVar12,1);
        if (uVar3 < 0) {
            uVar10 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar12 = *(iVar4 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar12,uVar10);
        }
        else {
            uVar10 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_e8) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.wl2868c_regulator_set_voltage;
    iVar9 = rdev_get_drvdata();
    if ((*(iVar9 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar9 + 0x150),*(iVar9 + 0x16c) + arg2_00,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar9,arg2_00,pcVar12 & 0xffffffff);
        uVar10 = uVar3;
        if ((uVar3 < 0) && (*(iVar9 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar9 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar10 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar9 + 0x10),uVar10);
    }
    return uVar10;
}


// ===== sym.wl2868c_show_enable @ 0x08002c2c (size 176) =====

uint64_t sym.wl2868c_show_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t arg2_00;
    int iVar6;
    uint32_t *puVar7;
    ulong uVar8;
    uchar *puVar9;
    char *pcVar10;
    uint64_t in_x3;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    char acStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    uchar auStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    puVar7 = &uStack_2c;
    uStack_2c = 0xff;
    iVar2 = regmap_read(*(arg1 + 0x98),0xe);
    uVar8 = str.read_0x0E___fail_n._8_8_;
    uVar12 = str.read_0x0E___fail_n._0_8_;
    if (iVar2 < 0) {
        uVar4 = 0x13;
        *(arg2 + 0x10) = 0xa6c69;
        *arg2 = uVar12;
        *(arg2 + 8) = uVar8;
    }
    else {
        puVar7 = uStack_2c;
        uVar4 = sprintf(arg2,"read 0x0E ==> 0x%x\n");
        uVar4 = uVar4 & 0xffffffff;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.wl2868c_set_enable;
    pcStack_48 = sym.wl2868c_set_enable;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    uVar12 = *(iVar5 + 0x98);
    if ((*puVar7 == '0') && (*(puVar7 + 1) == 'x')) {
        uVar8 = 0x10;
    }
    else {
        uVar8 = 10;
    }
    puStack_50 = &stack0xffffffffffffffe0;
    auStack_5c[0] = simple_strtoul(puVar7,0,uVar8);
    puVar9 = auStack_5c;
    iVar2 = regmap_bulk_write(uVar12,0xe,puVar9,1);
    iVar6 = puVar9;
    if (iVar2 < 0) {
        iVar6 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return in_x3;
    }
    auVar13 = __stack_chk_fail();
    iVar5 = auVar13._0_8_;
    *extraout_x18_00 = sym.wl2868c_write_voltage;
    pcStack_88 = sym.wl2868c_write_voltage;
    iVar11 = sp_el0;
    iStack_98 = *(iVar11 + 0x5e0);
    ppuStack_90 = &puStack_50;
    if (iVar6 < auVar13._8_4_) {
        pcVar10 = *(iVar5 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar4 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar5 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar5 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar10 = acStack_9c;
        iVar11 = (iVar2 + auVar13._8_4_) * 0x10624dd3;
        acStack_9c[0] = (iVar11 >> 0x29) - (iVar11 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar5 + 8),iVar1,pcVar10,1);
        if (uVar3 < 0) {
            uVar4 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar10 = *(iVar5 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar10,uVar4);
        }
        else {
            uVar4 = 0;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.wl2868c_regulator_set_voltage;
    iVar11 = rdev_get_drvdata();
    if ((*(iVar11 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar11 + 0x150),*(iVar11 + 0x16c) + arg2_00,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar11,arg2_00,pcVar10 & 0xffffffff);
        uVar4 = uVar3;
        if ((uVar3 < 0) && (*(iVar11 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar11 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar4 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar11 + 0x10),uVar4);
    }
    return uVar4;
}


// ===== sym.wl2868c_set_enable @ 0x08002cdc (size 204) =====

uint64_t sym.wl2868c_set_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    int iVar5;
    ulong uVar6;
    uchar *puVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    char acStack_6c [4];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uVar10 = *(arg1 + 0x98);
    if ((*arg2 == '0') && (*(arg2 + 1) == 'x')) {
        uVar6 = 0x10;
    }
    else {
        uVar6 = 10;
    }
    auStack_2c[0] = simple_strtoul(arg2,0,uVar6);
    puVar7 = auStack_2c;
    iVar2 = regmap_bulk_write(uVar10,0xe,puVar7,1);
    iVar5 = puVar7;
    if (iVar2 < 0) {
        iVar5 = 0xe;
        _printk(0x800057f,"wl2868c_write");
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar12 = __stack_chk_fail();
    iVar4 = auVar12._0_8_;
    *extraout_x18 = sym.wl2868c_write_voltage;
    pcStack_58 = sym.wl2868c_write_voltage;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffe0;
    if (iVar5 < auVar12._8_4_) {
        pcVar8 = *(iVar4 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        uVar11 = 0xffffffea;
    }
    else {
        iVar1 = *(iVar4 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(iVar4 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar8 = acStack_6c;
        iVar9 = (iVar2 + auVar12._8_4_) * 0x10624dd3;
        acStack_6c[0] = (iVar9 >> 0x29) - (iVar9 >> 0x3f);
        uVar3 = regmap_bulk_write(*(iVar4 + 8),iVar1,pcVar8,1);
        if (uVar3 < 0) {
            uVar11 = uVar3;
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar8 = *(iVar4 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar8,uVar11);
        }
        else {
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.wl2868c_regulator_set_voltage;
    iVar9 = rdev_get_drvdata();
    if ((*(iVar9 + 0x150) == 0) ||
       (uVar3 = regulator_set_voltage(*(iVar9 + 0x150),*(iVar9 + 0x16c) + arg2_00,0x7fffffff), -1 < uVar3)) {
        uVar3 = sym.wl2868c_write_voltage(iVar9,arg2_00,pcVar8 & 0xffffffff);
        uVar11 = uVar3;
        if ((uVar3 < 0) && (*(iVar9 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar9 + 0x150),0,0x7fffffff);
        }
    }
    else {
        uVar11 = uVar3;
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar9 + 0x10),uVar11);
    }
    return uVar11;
}


// ===== sym.wl2868c_write_voltage @ 0x08002da8 (size 296) =====

int sym.wl2868c_write_voltage(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    uint32_t arg2_00;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (arg3 < arg2) {
        pcVar3 = *(arg1 + 0x10);
        _printk(0x8000759,"wl2868c_write_voltage");
        iVar2 = -0x16;
    }
    else {
        iVar1 = *(arg1 + 0x168) + 3;
        iVar2 = -0x77241;
        if (1 < *(arg1 + 0x168)) {
            iVar2 = -0x16d3c1;
        }
        pcVar3 = acStack_3c;
        iVar4 = (iVar2 + arg2) * 0x10624dd3;
        acStack_3c[0] = (iVar4 >> 0x29) - (iVar4 >> 0x3f);
        iVar2 = regmap_bulk_write(*(arg1 + 8),iVar1,pcVar3,1);
        if (iVar2 < 0) {
            _printk(0x800057f,"wl2868c_write",iVar1);
            pcVar3 = *(arg1 + 0x10);
            _printk(0x8000da1,"wl2868c_write_voltage",pcVar3,iVar2);
        }
        else {
            iVar2 = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wl2868c_regulator_set_voltage;
    iVar4 = rdev_get_drvdata();
    if ((*(iVar4 + 0x150) == 0) ||
       (iVar2 = regulator_set_voltage(*(iVar4 + 0x150),*(iVar4 + 0x16c) + arg2_00,0x7fffffff), -1 < iVar2)) {
        iVar2 = sym.wl2868c_write_voltage(iVar4,arg2_00,pcVar3 & 0xffffffff);
        if ((iVar2 < 0) && (*(iVar4 + 0x150) != 0)) {
            regulator_set_voltage(*(iVar4 + 0x150),0,0x7fffffff);
        }
    }
    else {
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(iVar4 + 0x10),iVar2);
    }
    return iVar2;
}


// ===== sym.wl2868c_regulator_set_voltage @ 0x08002ed0 (size 176) =====

int sym.wl2868c_regulator_set_voltage(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = rdev_get_drvdata();
    if ((*(arg1_00 + 0x150) == 0) ||
       (iVar1 = regulator_set_voltage(*(arg1_00 + 0x150),*(arg1_00 + 0x16c) + arg1,0x7fffffff), -1 < iVar1)) {
        iVar1 = sym.wl2868c_write_voltage(arg1_00,arg1,arg2 & 0xffffffff);
        if ((iVar1 < 0) && (*(arg1_00 + 0x150) != 0)) {
            regulator_set_voltage(*(arg1_00 + 0x150),0,0x7fffffff);
        }
    }
    else {
        _printk(0x8000b1f,"wl2868c_regulator_set_voltage",*(arg1_00 + 0x10),iVar1);
    }
    return iVar1;
}


// ===== sym.wl2868c_regulator_get_voltage @ 0x08002f80 (size 304) =====

int sym.wl2868c_regulator_get_voltage(void)

{
    int16_t iVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = rdev_get_drvdata();
    auStack_3c[0] = 0;
    iVar1 = *(iVar5 + 0x168) + 3;
    iVar4 = regmap_bulk_read(*(iVar5 + 8),iVar1,auStack_3c,1);
    if (iVar4 < 0) {
        _printk(0x8000b5c,"wl2868c_read",iVar1);
        _printk(0x8000947,"wl2868c_regulator_get_voltage",*(iVar5 + 0x10),iVar4);
    }
    else {
        uVar2 = *(iVar5 + 0x168);
        if (auStack_3c[0] == 0) {
            if (6 < uVar2) goto code_r0x080030a8;
            if (0xe0 < (uVar2 << 5 | 0x10)) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x80030b0);
                (*pcVar3)();
            }
            iVar4 = *(uVar2 * 0x20 + 0x80010c8);
        }
        else {
            iVar4 = auStack_3c[0] * 8000;
            if (uVar2 < 2) {
                iVar4 = iVar4 + 0x79180;
            }
            else {
                iVar4 = iVar4 + 0x16f300;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x080030a8:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80030ac);
    (*pcVar3)();
}


// ===== sym.wl2868c_regulator_enable @ 0x080030b0 (size 292) =====

int sym.wl2868c_regulator_enable(void)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = rdev_get_drvdata();
    if ((*(iVar4 + 0x150) == 0) || (iVar2 = regulator_enable(), -1 < iVar2)) {
        uVar1 = 1 << (*(iVar4 + 0x168) & 0x1f) & 0xff;
        iVar3 = regmap_update_bits_base(*(iVar4 + 8),0xe,uVar1,uVar1,0,0,0);
        iVar2 = 0;
        if (iVar3 < 0) {
            _printk(0x8000aab,"wl2868c_masked_write",uVar1,0xe,uVar1);
            _printk(0x8000dd0,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar3);
            if ((*(iVar4 + 0x150) == 0) || (iVar3 = regulator_disable(), iVar3 < 0)) {
                _printk(0x8000c5d,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar3);
            }
            iVar2 = -0x3e;
        }
    }
    else {
        _printk(0x8000a7e,"wl2868c_regulator_enable",*(iVar4 + 0x10),iVar2);
    }
    return iVar2;
}


// ===== sym.wl2868c_regulator_disable @ 0x080031d4 (size 260) =====

int sym.wl2868c_regulator_disable(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = rdev_get_drvdata();
    uVar1 = 1 << (*(iVar3 + 0x168) & 0x1f) & 0xff;
    iVar2 = regmap_update_bits_base(*(iVar3 + 8),0xe,uVar1,0,0,0,0);
    if (iVar2 < 0) {
        _printk(0x8000aab,"wl2868c_masked_write",0,0xe,uVar1);
        uVar5 = *(iVar3 + 0x10);
        uVar4 = 0x800071c;
    }
    else {
        if (*(iVar3 + 0x150) == 0) {
            return 0;
        }
        iVar2 = regulator_set_voltage(*(iVar3 + 0x150),0,0x7fffffff);
        if (iVar2 < 0) {
            uVar5 = *(iVar3 + 0x10);
            uVar4 = 0x80009bc;
        }
        else {
            iVar2 = regulator_disable(*(iVar3 + 0x150));
            if (-1 < iVar2) {
                return 0;
            }
            uVar5 = *(iVar3 + 0x10);
            uVar4 = 0x8000897;
        }
    }
    _printk(uVar4,"wl2868c_regulator_disable",uVar5,iVar2);
    return iVar2;
}


// ===== sym.wl2868c_regulator_is_enabled @ 0x080032d8 (size 200) =====

uchar * sym.wl2868c_regulator_is_enabled(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = rdev_get_drvdata();
    auStack_2c[0] = 0;
    uVar2 = regmap_bulk_read(*(iVar3 + 8),0xe,auStack_2c,1);
    if (uVar2 < 0) {
        _printk(0x8000b5c,"wl2868c_read",0xe);
        _printk(0x8000823,"wl2868c_regulator_is_enabled",*(iVar3 + 0x10),uVar2);
    }
    else {
        uVar2 = auStack_2c[0] >> (*(iVar3 + 0x168) & 0x1f) & 1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80033f8);
        (*pcVar1)();
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x080033a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080033e4

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
    //switch table (4 cases) at 0x80002d8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80033f8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003404 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.wl2868c_regulator_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08003438 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.wl2868c_regulator_driver);
    return;
}

