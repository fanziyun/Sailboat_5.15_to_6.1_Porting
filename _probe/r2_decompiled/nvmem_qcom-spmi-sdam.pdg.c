// decompiled from nvmem_qcom-spmi-sdam by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x080014d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x60ced7460c6fa41e) {
            if ((pcVar1 + -0x80010f0 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001490;
        }
        if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001490;
        pcVar2 = sym.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001490;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001490:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014e4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010e8 (size 8) =====

int sym.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = param_1 + 0x10;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_3c = 0;
    piVar4 = devm_kmalloc(iVar2,0xa8,0xdc0);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
        goto code_r0x08001208;
    }
    iVar5 = dev_get_regmap(*(param_1 + 0x70),0);
    *piVar4 = iVar5;
    if (iVar5 == 0) {
        _dev_err(iVar2,"Failed to get regmap handle\n");
code_r0x0800128c:
        iVar3 = -6;
    }
    else {
        param_4 = 1;
        iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x800022d,piVar4 + 0x14,1,0);
        if (iVar3 < 0) {
            pcVar8 = "Failed to get SDAM base, rc=%d\n";
        }
        else {
            iVar3 = regmap_read(*piVar4,piVar4[0x14] + 0x44,&iStack_3c);
            if (-1 < iVar3) {
                *(piVar4 + 3) = 0xfffffffe;
                piVar4[0x11] = piVar4;
                piVar4[2] = "spmi_sdam";
                *(piVar4 + 0xa4) = iStack_3c << 5;
                piVar4[1] = iVar2;
                piVar4[4] = obj.__this_module;
                *(piVar4 + 0x7c) = 0x100000001;
                piVar4[0xd] = sym.sdam_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                piVar4[0xe] = sym.sdam_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar6 = devm_nvmem_register(iVar2);
                if (uVar6 < 0xfffffffffffff001) {
                    iVar3 = 0;
                    goto code_r0x08001208;
                }
                _dev_err(iVar2,"Failed to register SDAM nvmem device rc=%ld\n",uVar6);
                goto code_r0x0800128c;
            }
            pcVar8 = "Failed to read SDAM_SIZE rc=%d\n";
        }
        _dev_err(iVar2,pcVar8,iVar3);
        iVar3 = -0x16;
    }
code_r0x08001208:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail(iVar3);
    puVar7 = auVar11._0_8_;
    *extraout_x18 = sym.sdam_read;
    uVar6 = auVar11._8_8_ & 0xffffffff;
    uVar10 = puVar7[1];
    uVar9 = auVar11._8_4_;
    if ((param_4 == 0) ||
       ((((uVar9 < 0x40 || (uVar1 = *(puVar7 + 0xa4) + 0x3f, uVar1 < uVar9)) ||
         (uVar1 < (param_4 + (auVar11._8_8_ & 0xffffffff)) - 1)) && ((1 < uVar9 - 0xe5 || (param_4 != 1)))))) {
        _dev_err(uVar10,"Invalid SDAM offset %#x len=%zd\n",uVar6,param_4);
        iVar3 = -0x16;
    }
    else {
        iVar3 = regmap_bulk_read(*puVar7,*(puVar7 + 0x14) + uVar9);
        if (iVar3 < 0) {
            _dev_err(uVar10,"Failed to read SDAM offset %#x len=%zd, rc=%d\n",uVar6,param_4,iVar3);
        }
    }
    return iVar3;
}


// ===== sym.sdam_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

int sym.sdam_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (ulong *param_1,uint32_t param_2,ulong param_3,int64_t param_4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = param_1[1];
    if (param_4 == 0) {
code_r0x0800144c:
        pcVar4 = "Invalid SDAM offset %#x len=%zd\n";
code_r0x08001454:
        _dev_err(uVar5,pcVar4,param_2,param_4);
        iVar3 = -0x16;
    }
    else {
        if (((param_2 < 0x40) || (uVar2 = *(param_1 + 0xa4) + 0x3f, uVar2 < param_2)) ||
           (uVar1 = param_4 + param_2, uVar2 < uVar1 - 1)) {
            if ((1 < param_2 - 0xe5) || (param_4 != 1)) goto code_r0x0800144c;
        }
        else if ((((param_2 < 0x41) && (0x40 < uVar1)) || ((param_2 < 0x42 && (0x41 < uVar1)))) ||
                ((param_2 < 0x45 && (0x44 < uVar1)))) {
            pcVar4 = "Invalid write offset %#x len=%zd\n";
            goto code_r0x08001454;
        }
        iVar3 = regmap_bulk_write(*param_1,*(param_1 + 0x14) + param_2,param_3,param_4);
        if (iVar3 < 0) {
            _dev_err(uVar5,"Failed to write SDAM offset %#x len=%zd, rc=%d\n",param_2,param_4,iVar3);
        }
    }
    return iVar3;
}


// ===== sym.sdam_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f8 (size 8) =====

int sym.sdam_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (ulong *param_1,uint32_t param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = param_1[1];
    if ((param_4 == 0) ||
       ((((param_2 < 0x40 || (uVar1 = *(param_1 + 0xa4) + 0x3f, uVar1 < param_2)) || (uVar1 < (param_4 + param_2) - 1))
        && ((1 < param_2 - 0xe5 || (param_4 != 1)))))) {
        _dev_err(uVar3,"Invalid SDAM offset %#x len=%zd\n",param_2,param_4);
        iVar2 = -0x16;
    }
    else {
        iVar2 = regmap_bulk_read(*param_1,*(param_1 + 0x14) + param_2,param_3,param_4);
        if (iVar2 < 0) {
            _dev_err(uVar3,"Failed to read SDAM offset %#x len=%zd, rc=%d\n",param_2,param_4,iVar2);
        }
    }
    return iVar2;
}


// ===== sym.sdam_probe @ 0x08001100 (size 408) =====

int sym.sdam_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    char *pcVar8;
    int64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = arg1 + 0x10;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_3c = 0;
    piVar4 = devm_kmalloc(iVar2,0xa8,0xdc0);
    if (piVar4 == NULL) {
        iVar3 = -0xc;
        goto code_r0x08001208;
    }
    iVar5 = dev_get_regmap(*(arg1 + 0x70),0);
    *piVar4 = iVar5;
    if (iVar5 == 0) {
        _dev_err(iVar2,"Failed to get regmap handle\n");
code_r0x0800128c:
        iVar3 = -6;
    }
    else {
        in_x3 = 1;
        iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x800022d,piVar4 + 0x14,1,0);
        if (iVar3 < 0) {
            pcVar8 = "Failed to get SDAM base, rc=%d\n";
        }
        else {
            iVar3 = regmap_read(*piVar4,piVar4[0x14] + 0x44,&iStack_3c);
            if (-1 < iVar3) {
                *(piVar4 + 3) = 0xfffffffe;
                piVar4[0x11] = piVar4;
                piVar4[2] = "spmi_sdam";
                *(piVar4 + 0xa4) = iStack_3c << 5;
                piVar4[1] = iVar2;
                piVar4[4] = obj.__this_module;
                *(piVar4 + 0x7c) = 0x100000001;
                piVar4[0xd] = sym.sdam_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                piVar4[0xe] = sym.sdam_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar6 = devm_nvmem_register(iVar2);
                if (uVar6 < 0xfffffffffffff001) {
                    iVar3 = 0;
                    goto code_r0x08001208;
                }
                _dev_err(iVar2,"Failed to register SDAM nvmem device rc=%ld\n",uVar6);
                goto code_r0x0800128c;
            }
            pcVar8 = "Failed to read SDAM_SIZE rc=%d\n";
        }
        _dev_err(iVar2,pcVar8,iVar3);
        iVar3 = -0x16;
    }
code_r0x08001208:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail(iVar3);
    puVar7 = auVar11._0_8_;
    *extraout_x18 = sym.sdam_read;
    uVar6 = auVar11._8_8_ & 0xffffffff;
    uVar10 = puVar7[1];
    uVar9 = auVar11._8_4_;
    if ((in_x3 == 0) ||
       ((((uVar9 < 0x40 || (uVar1 = *(puVar7 + 0xa4) + 0x3f, uVar1 < uVar9)) ||
         (uVar1 < (in_x3 + (auVar11._8_8_ & 0xffffffff)) - 1)) && ((1 < uVar9 - 0xe5 || (in_x3 != 1)))))) {
        _dev_err(uVar10,"Invalid SDAM offset %#x len=%zd\n",uVar6,in_x3);
        iVar3 = -0x16;
    }
    else {
        iVar3 = regmap_bulk_read(*puVar7,*(puVar7 + 0x14) + uVar9);
        if (iVar3 < 0) {
            _dev_err(uVar10,"Failed to read SDAM offset %#x len=%zd, rc=%d\n",uVar6,in_x3,iVar3);
        }
    }
    return iVar3;
}


// ===== sym.sdam_read @ 0x08001298 (size 220) =====

int sym.sdam_read(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong in_x2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + 8);
    uVar3 = arg2;
    if ((arg3 == 0) ||
       ((((uVar3 < 0x40 || (uVar1 = *(arg1 + 0xa4) + 0x3f, uVar1 < uVar3)) ||
         (uVar1 < (arg3 + (arg2 & 0xffffffffU)) - 1)) && ((1 < uVar3 - 0xe5 || (arg3 != 1)))))) {
        _dev_err(uVar4,"Invalid SDAM offset %#x len=%zd\n",arg2 & 0xffffffffU,arg3);
        iVar2 = -0x16;
    }
    else {
        iVar2 = regmap_bulk_read(*arg1,*(arg1 + 0xa0) + uVar3,in_x2,arg3);
        if (iVar2 < 0) {
            _dev_err(uVar4,"Failed to read SDAM offset %#x len=%zd, rc=%d\n",arg2 & 0xffffffffU,arg3,iVar2);
        }
    }
    return iVar2;
}


// ===== sym.sdam_write @ 0x08001374 (size 280) =====

int sym.sdam_write(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    char *pcVar4;
    ulong in_x2;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg2 & 0xffffffff;
    uVar7 = *(arg1 + 8);
    uVar5 = arg2;
    if (arg3 == 0) {
code_r0x0800144c:
        pcVar4 = "Invalid SDAM offset %#x len=%zd\n";
code_r0x08001454:
        _dev_err(uVar7,pcVar4,uVar6,arg3);
        iVar3 = -0x16;
    }
    else {
        if (((uVar5 < 0x40) || (uVar2 = *(arg1 + 0xa4) + 0x3f, uVar2 < uVar5)) ||
           (uVar1 = arg3 + uVar6, uVar2 < uVar1 - 1)) {
            if ((1 < uVar5 - 0xe5) || (arg3 != 1)) goto code_r0x0800144c;
        }
        else if ((((uVar5 < 0x41) && (0x40 < uVar1)) || ((uVar5 < 0x42 && (0x41 < uVar1)))) ||
                ((uVar5 < 0x45 && (0x44 < uVar1)))) {
            pcVar4 = "Invalid write offset %#x len=%zd\n";
            goto code_r0x08001454;
        }
        iVar3 = regmap_bulk_write(*arg1,*(arg1 + 0xa0) + uVar5,in_x2,arg3);
        if (iVar3 < 0) {
            _dev_err(uVar7,"Failed to write SDAM offset %#x len=%zd, rc=%d\n",uVar6,arg3,iVar3);
        }
    }
    return iVar3;
}


// ===== sym.__cfi_check_fail @ 0x0800148c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080014d0

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014e4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001528 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdam_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

