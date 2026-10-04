// decompiled from regmap-spmi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 216) =====

//WARNING: Switch with 1 destination removed at 0x080016cc

void sym.__cfi_check(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x4383d1e301c4a24a) {
        if (arg1 == 0xf15b3680a0d7228) {
            pcVar1 = sym.regmap_spmi_ext_gather_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt;
        }
        else {
            if (arg1 != 0x351f4ef19ff41e78) goto code_r0x0800168c;
            pcVar1 = sym.regmap_spmi_base_read.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x4383d1e301c4a24a) {
            if ((arg2 - 0x8001110U >> 3 | arg2 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800168c;
        }
        if (arg1 != 0x4bdf73727f5fe9ab) goto code_r0x0800168c;
        pcVar1 = sym.regmap_spmi_base_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt;
    }
    if ((arg2 - pcVar1 >> 3 | arg2 << 0x3d) < 2) {
        return;
    }
code_r0x0800168c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016e0);
    (*pcVar1)();
}


// ===== sym.regmap_spmi_ext_gather_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.regmap_spmi_ext_gather_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint16_t *param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    if (param_3 != 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80015a8);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    uVar4 = *param_2;
    if ((param_5 != 0) && (*param_2 < 0x100)) {
        do {
            uVar1 = param_5;
            if (0xf < param_5) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_write(param_1,uVar4,param_4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar4 = uVar4 + uVar1;
            param_5 = param_5 - uVar1;
            param_4 = param_4 + uVar1;
        } while ((uVar4 & 0xffff) < 0x100 && param_5 != 0);
    }
    while( true ) {
        if (param_5 == 0) {
            return 0;
        }
        uVar1 = param_5;
        if (7 < param_5) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_writel(param_1,uVar4,param_4,uVar1);
        if (uVar3 != 0) break;
        uVar4 = uVar4 + uVar1;
        param_4 = param_4 + uVar1;
        param_5 = param_5 - uVar1;
    }
    return uVar3;
}


// ===== sym.regmap_spmi_base_gather_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.regmap_spmi_base_gather_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint8_t *param_2,int64_t param_3,uchar *param_4,int64_t param_5)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    if (param_3 != 1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800136c);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    uVar3 = *param_2;
    if ((param_5 != 0) && (*param_2 == 0)) {
        uVar2 = spmi_register_zero_write(param_1,*param_4);
        if (uVar2 != 0) {
            return uVar2;
        }
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
        uVar3 = 1;
    }
    while( true ) {
        if (param_5 == 0) {
            return 0;
        }
        uVar2 = spmi_register_write(param_1,uVar3,*param_4);
        if (uVar2 != 0) break;
        param_4 = param_4 + 1;
        uVar3 = uVar3 + 1;
        param_5 = param_5 + -1;
    }
    return uVar2;
}


// ===== sym.regmap_spmi_base_read.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.regmap_spmi_base_read.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint8_t *param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    code *pcVar1;
    bool bVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 != 1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80013e8);
        (*pcVar1)();
    }
    if (param_5 == 0) {
        uVar3 = 0;
    }
    else {
        uVar4 = *param_2;
        param_5 = param_5 + -1;
        do {
            uVar3 = spmi_register_read(param_1,uVar4,param_4);
            bVar2 = param_5 == 0;
            param_5 = param_5 + -1;
            if (bVar2) {
                return uVar3;
            }
            uVar4 = uVar4 + 1;
            param_4 = param_4 + 1;
        } while (uVar3 == 0);
    }
    return uVar3;
}


// ===== sym.regmap_spmi_ext_read.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.regmap_spmi_ext_read.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint16_t *param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    if (param_3 != 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8001688);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    uVar4 = *param_2;
    if ((param_5 != 0) && (*param_2 < 0x100)) {
        do {
            uVar1 = param_5;
            if (0xf < param_5) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_read(param_1,uVar4,param_4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar4 = uVar4 + uVar1;
            param_5 = param_5 - uVar1;
            param_4 = param_4 + uVar1;
        } while ((uVar4 & 0xffff) < 0x100 && param_5 != 0);
    }
    while( true ) {
        if (param_5 == 0) {
            return 0;
        }
        uVar1 = param_5;
        if (7 < param_5) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_readl(param_1,uVar4,param_4,uVar1);
        if (uVar3 != 0) break;
        uVar4 = uVar4 + uVar1;
        param_4 = param_4 + uVar1;
        param_5 = param_5 - uVar1;
    }
    return uVar3;
}


// ===== sym.regmap_spmi_base_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.regmap_spmi_base_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint8_t *param_2,int64_t param_3)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    uint8_t *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    if (param_3 == 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80012cc);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    iVar5 = param_3 + -1;
    puVar4 = param_2 + 1;
    uVar3 = *param_2;
    if ((iVar5 != 0) && (*param_2 == 0)) {
        uVar2 = spmi_register_zero_write(param_1,*puVar4);
        if (uVar2 != 0) {
            return uVar2;
        }
        puVar4 = param_2 + 2;
        iVar5 = param_3 + -2;
        uVar3 = 1;
    }
    while( true ) {
        if (iVar5 == 0) {
            return 0;
        }
        uVar2 = spmi_register_write(param_1,uVar3,*puVar4);
        if (uVar2 != 0) break;
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + -1;
    }
    return uVar2;
}


// ===== sym.regmap_spmi_ext_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt @ 0x08001108 (size 8) =====

ulong sym.regmap_spmi_ext_write.2a45bff6e4e55b169fc9bc52ea1b4490.cfi_jt
                (ulong param_1,uint16_t *param_2,uint64_t param_3)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    uint16_t *puVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    if (param_3 < 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80014c8);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    param_3 = param_3 - 2;
    puVar4 = param_2 + 1;
    uVar5 = *param_2;
    if ((param_3 != 0) && (*param_2 < 0x100)) {
        do {
            uVar1 = param_3;
            if (0xf < param_3) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_write(param_1,uVar5,puVar4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar5 = uVar5 + uVar1;
            param_3 = param_3 - uVar1;
            puVar4 = puVar4 + uVar1;
        } while ((uVar5 & 0xffff) < 0x100 && param_3 != 0);
    }
    while( true ) {
        if (param_3 == 0) {
            return 0;
        }
        uVar1 = param_3;
        if (7 < param_3) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_writel(param_1,uVar5,puVar4,uVar1);
        if (uVar3 != 0) break;
        uVar5 = uVar5 + uVar1;
        puVar4 = puVar4 + uVar1;
        param_3 = param_3 - uVar1;
    }
    return uVar3;
}


// ===== sym.__regmap_init_spmi_base.cfi_jt @ 0x08001110 (size 8) =====

void sym.__regmap_init_spmi_base.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(param_1,obj.regmap_spmi_base,param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.__devm_regmap_init_spmi_ext.cfi_jt @ 0x08001118 (size 8) =====

void sym.__devm_regmap_init_spmi_ext.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(param_1,obj.regmap_spmi_ext,param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.__devm_regmap_init_spmi_base.cfi_jt @ 0x08001120 (size 8) =====

void sym.__devm_regmap_init_spmi_base.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(param_1,obj.regmap_spmi_base,param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.__regmap_init_spmi_ext.cfi_jt @ 0x08001128 (size 8) =====

void sym.__regmap_init_spmi_ext.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(param_1,obj.regmap_spmi_ext,param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.__regmap_init_spmi_base @ 0x08001130 (size 60) =====

void sym.__regmap_init_spmi_base(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(arg1,obj.regmap_spmi_base,arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.__devm_regmap_init_spmi_base @ 0x0800116c (size 60) =====

void sym.__devm_regmap_init_spmi_base(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(arg1,obj.regmap_spmi_base,arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.__regmap_init_spmi_ext @ 0x080011a8 (size 60) =====

void sym.__regmap_init_spmi_ext(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(arg1,obj.regmap_spmi_ext,arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.__devm_regmap_init_spmi_ext @ 0x080011e4 (size 60) =====

void sym.__devm_regmap_init_spmi_ext(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(arg1,obj.regmap_spmi_ext,arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.regmap_spmi_base_write @ 0x08001220 (size 172) =====

ulong sym.regmap_spmi_base_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    if (arg3 == 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80012cc);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    iVar5 = arg3 + -1;
    puVar4 = arg2 + 1;
    uVar3 = *arg2;
    if ((iVar5 != 0) && (*arg2 == 0)) {
        uVar2 = spmi_register_zero_write(arg1,*puVar4);
        if (uVar2 != 0) {
            return uVar2;
        }
        puVar4 = arg2 + 2;
        iVar5 = arg3 + -2;
        uVar3 = 1;
    }
    while( true ) {
        if (iVar5 == 0) {
            return 0;
        }
        uVar2 = spmi_register_write(arg1,uVar3,*puVar4);
        if (uVar2 != 0) break;
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + -1;
    }
    return uVar2;
}


// ===== sym.regmap_spmi_base_gather_write @ 0x080012cc (size 160) =====

ulong sym.regmap_spmi_base_gather_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    code *pcVar1;
    ulong uVar2;
    int64_t in_x4;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    if (arg3 != 1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800136c);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    uVar3 = *arg2;
    if ((in_x4 != 0) && (*arg2 == 0)) {
        uVar2 = spmi_register_zero_write(arg1,*arg4);
        if (uVar2 != 0) {
            return uVar2;
        }
        arg4 = arg4 + 1;
        in_x4 = in_x4 + -1;
        uVar3 = 1;
    }
    while( true ) {
        if (in_x4 == 0) {
            return 0;
        }
        uVar2 = spmi_register_write(arg1,uVar3,*arg4);
        if (uVar2 != 0) break;
        arg4 = arg4 + 1;
        uVar3 = uVar3 + 1;
        in_x4 = in_x4 + -1;
    }
    return uVar2;
}


// ===== sym.regmap_spmi_base_read @ 0x0800136c (size 124) =====

ulong sym.regmap_spmi_base_read(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    code *pcVar1;
    bool bVar2;
    ulong uVar3;
    int64_t in_x4;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80013e8);
        (*pcVar1)();
    }
    if (in_x4 == 0) {
        uVar3 = 0;
    }
    else {
        uVar4 = *arg2;
        iVar5 = in_x4 + -1;
        do {
            uVar3 = spmi_register_read(arg1,uVar4,arg4);
            bVar2 = iVar5 == 0;
            iVar5 = iVar5 + -1;
            if (bVar2) {
                return uVar3;
            }
            uVar4 = uVar4 + 1;
            arg4 = arg4 + 1;
        } while (uVar3 == 0);
    }
    return uVar3;
}


// ===== sym.regmap_spmi_ext_write @ 0x080013e8 (size 224) =====

ulong sym.regmap_spmi_ext_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    if (arg3 < 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80014c8);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    uVar6 = arg3 - 2;
    iVar4 = arg2 + 2;
    uVar5 = *arg2;
    if ((uVar6 != 0) && (*arg2 < 0x100)) {
        do {
            uVar1 = uVar6;
            if (0xf < uVar6) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_write(arg1,uVar5,iVar4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar5 = uVar5 + uVar1;
            uVar6 = uVar6 - uVar1;
            iVar4 = iVar4 + uVar1;
        } while ((uVar5 & 0xffff) < 0x100 && uVar6 != 0);
    }
    while( true ) {
        if (uVar6 == 0) {
            return 0;
        }
        uVar1 = uVar6;
        if (7 < uVar6) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_writel(arg1,uVar5,iVar4,uVar1);
        if (uVar3 != 0) break;
        uVar5 = uVar5 + uVar1;
        iVar4 = iVar4 + uVar1;
        uVar6 = uVar6 - uVar1;
    }
    return uVar3;
}


// ===== sym.regmap_spmi_ext_gather_write @ 0x080014c8 (size 224) =====

ulong sym.regmap_spmi_ext_gather_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t in_x4;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    if (arg3 != 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x80015a8);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    uVar4 = *arg2;
    if ((in_x4 != 0) && (*arg2 < 0x100)) {
        do {
            uVar1 = in_x4;
            if (0xf < in_x4) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_write(arg1,uVar4,arg4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar4 = uVar4 + uVar1;
            in_x4 = in_x4 - uVar1;
            arg4 = arg4 + uVar1;
        } while ((uVar4 & 0xffff) < 0x100 && in_x4 != 0);
    }
    while( true ) {
        if (in_x4 == 0) {
            return 0;
        }
        uVar1 = in_x4;
        if (7 < in_x4) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_writel(arg1,uVar4,arg4,uVar1);
        if (uVar3 != 0) break;
        uVar4 = uVar4 + uVar1;
        arg4 = arg4 + uVar1;
        in_x4 = in_x4 - uVar1;
    }
    return uVar3;
}


// ===== sym.regmap_spmi_ext_read @ 0x080015a8 (size 224) =====

ulong sym.regmap_spmi_ext_read(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t in_x4;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    if (arg3 != 2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8001688);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    uVar4 = *arg2;
    if ((in_x4 != 0) && (*arg2 < 0x100)) {
        do {
            uVar1 = in_x4;
            if (0xf < in_x4) {
                uVar1 = 0x10;
            }
            uVar3 = spmi_ext_register_read(arg1,uVar4,arg4,uVar1);
            if (uVar3 != 0) {
                return uVar3;
            }
            uVar4 = uVar4 + uVar1;
            in_x4 = in_x4 - uVar1;
            arg4 = arg4 + uVar1;
        } while ((uVar4 & 0xffff) < 0x100 && in_x4 != 0);
    }
    while( true ) {
        if (in_x4 == 0) {
            return 0;
        }
        uVar1 = in_x4;
        if (7 < in_x4) {
            uVar1 = 8;
        }
        uVar3 = spmi_ext_register_readl(arg1,uVar4,arg4,uVar1);
        if (uVar3 != 0) break;
        uVar4 = uVar4 + uVar1;
        arg4 = arg4 + uVar1;
        in_x4 = in_x4 - uVar1;
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x08001688 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016cc

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
    //switch table (4 cases) at 0x80000ea
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016e0);
    (*pcVar1)();
}

