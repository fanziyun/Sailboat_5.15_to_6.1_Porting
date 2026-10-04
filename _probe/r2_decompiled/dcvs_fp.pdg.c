// decompiled from dcvs_fp by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x080015e8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3ace520cc098245b) {
            uVar2 = 0x8001108;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x080015a8;
            uVar2 = 0x8001110;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001100;
    }
    else if (arg1 == 0x47eebc3a92c6d91e) {
        uVar2 = 0x80010f0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015a8;
        uVar2 = 0x80010f8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080015a8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015fc);
    (*pcVar1)();
}


// ===== sym.setup_ddrllcc_fp_device.cfi_jt @ 0x080010f0 (size 8) =====

uint sym.setup_ddrllcc_fp_device.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x68) < 2) {
        mutex_lock(obj.ddrllcc_lock);
        iVar3 = _segment.ehdr;
        if (_segment.ehdr == 0) {
            uVar4 = 0xfffffdfb;
        }
        else {
            piVar1 = _segment.ehdr + 0x10;
            *(param_3 + 0x78) = _segment.ehdr;
            *(param_3 + 0x80) = sym.ddrllcc_fp_commit.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt;
            uVar4 = 0;
            piVar2 = iVar3 + 8;
            if (*(param_2 + 0x68) != 0) {
                piVar2 = piVar1;
            }
            *piVar2 = param_3;
        }
        mutex_unlock(obj.ddrllcc_lock);
    }
    else {
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ddrllcc_fp_commit.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt @ 0x08001108 (size 8) =====

int sym.ddrllcc_fp_commit.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt(int64_t param_1,int *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(param_1 + 0x78);
    uVar3 = *puVar4;
    if ((param_3 & 1) != 0) {
        uVar1 = 0;
        if (*(puVar4 + 0x1c) != 0) {
            uVar1 = (*(puVar4 + 4) * *param_2) / *(puVar4 + 0x1c);
        }
        *(puVar4 + 0x3c) = uVar1 & 0x3fff | 0x60000000;
    }
    if ((param_3 >> 1 & 1) != 0) {
        uVar1 = 0;
        if (*(puVar4 + 0x2c) != 0) {
            uVar1 = (*(puVar4 + 6) * param_2[3]) / *(puVar4 + 0x2c);
        }
        *(puVar4 + 9) = uVar1 & 0x3fff | 0x60000000;
    }
    iVar2 = rpmh_update_fast_path(uVar3,puVar4 + 7,2,param_3);
    if (iVar2 < 0) {
        _dev_err(uVar3,"Error updating RPMH fast path: %d\n",iVar2);
    }
    else {
        if ((param_3 & 1) != 0) {
            *(puVar4[1] + 0x18) = *param_2;
        }
        if ((param_3 >> 1 & 1) != 0) {
            *(puVar4[2] + 0x18) = param_2[3];
        }
    }
    return iVar2;
}


// ===== sym.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt @ 0x08001110 (size 8) =====

int sym.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *piVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_1 = param_1 + 0x10;
    mutex_lock(obj.ddrllcc_lock);
    if (_segment.ehdr == NULL) {
        piVar2 = devm_kmalloc(param_1,0x50,0xdc0);
        if (piVar2 == NULL) {
            iVar1 = -0xc;
            piVar2 = _segment.ehdr;
        }
        else {
            *piVar2 = param_1;
            iVar1 = sym.populate_bcm_data(param_1,piVar2 + 3,0x8000239);
            if (iVar1 < 0) {
                pcVar3 = "qcom,ddr-bcm-name";
            }
            else {
                iVar1 = sym.populate_bcm_data(param_1,piVar2 + 5,0x80001d0);
                if (-1 < iVar1) {
                    piVar4 = piVar2 + 7;
                    *piVar4 = piVar2[3];
                    *(piVar2 + 0x3c) = 0x60000000;
                    piVar2[9] = 0x60000000;
                    *(piVar2 + 0x44) = piVar2[5];
                    iVar1 = rpmh_init_fast_path(param_1,piVar4,2);
                    if (iVar1 < 0) {
                        pcVar3 = "Error initializing rpmh fast path: %d\n";
                    }
                    else {
                        iVar1 = rpmh_write_async(param_1,0,piVar4,2);
                        if (iVar1 < 0) {
                            pcVar3 = "Error initing dcvs_fp sleep vote: %d\n";
                        }
                        else {
                            *(piVar2 + 0x3c) = 0x60000001;
                            *(piVar2 + 9) = 0x60000001;
                            iVar1 = rpmh_write_async(param_1,1,piVar4,2);
                            if (-1 < iVar1) goto code_r0x0800139c;
                            pcVar3 = "Error initing dcvs_fp wake vote: %d\n";
                        }
                    }
                    _dev_err(param_1,pcVar3,iVar1);
                    piVar2 = _segment.ehdr;
                    goto code_r0x0800139c;
                }
                pcVar3 = "qcom,llcc-bcm-name";
            }
            _dev_err(param_1,"Error importing %s bcm data: %d\n",pcVar3,iVar1);
            piVar2 = _segment.ehdr;
        }
    }
    else {
        _dev_err(param_1,"Only one fast path client allowed\n");
        iVar1 = -0x16;
        piVar2 = _segment.ehdr;
    }
code_r0x0800139c:
    _segment.ehdr = piVar2;
    mutex_unlock(obj.ddrllcc_lock);
    return iVar1;
}


// ===== sym.setup_ddrllcc_fp_device @ 0x08001118 (size 156) =====

uint sym.setup_ddrllcc_fp_device(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x68) < 2) {
        mutex_lock(obj.ddrllcc_lock);
        iVar3 = _segment.ehdr;
        if (_segment.ehdr == 0) {
            uVar4 = 0xfffffdfb;
        }
        else {
            piVar1 = _segment.ehdr + 0x10;
            *(arg2 + 0x78) = _segment.ehdr;
            *(arg2 + 0x80) = sym.ddrllcc_fp_commit.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt;
            uVar4 = 0;
            piVar2 = iVar3 + 8;
            if (*(arg1 + 0x68) != 0) {
                piVar2 = piVar1;
            }
            *piVar2 = arg2;
        }
        mutex_unlock(obj.ddrllcc_lock);
    }
    else {
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.ddrllcc_fp_commit @ 0x080011b4 (size 224) =====

int sym.ddrllcc_fp_commit(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(arg1 + 0x78);
    uVar3 = *puVar4;
    if ((arg3 & 1U) != 0) {
        uVar1 = 0;
        if (*(puVar4 + 0x1c) != 0) {
            uVar1 = (*(puVar4 + 4) * *arg2) / *(puVar4 + 0x1c);
        }
        *(puVar4 + 0x3c) = uVar1 & 0x3fff | 0x60000000;
    }
    if ((arg3 >> 1 & 1) != 0) {
        uVar1 = 0;
        if (*(puVar4 + 0x2c) != 0) {
            uVar1 = (*(puVar4 + 6) * *(arg2 + 0xc)) / *(puVar4 + 0x2c);
        }
        *(puVar4 + 9) = uVar1 & 0x3fff | 0x60000000;
    }
    iVar2 = rpmh_update_fast_path(uVar3,puVar4 + 7,2,arg3 & 0xffffffff);
    if (iVar2 < 0) {
        _dev_err(uVar3,"Error updating RPMH fast path: %d\n",iVar2);
    }
    else {
        if ((arg3 & 1U) != 0) {
            *(puVar4[1] + 0x18) = *arg2;
        }
        if ((arg3 >> 1 & 1) != 0) {
            *(puVar4[2] + 0x18) = *(arg2 + 0xc);
        }
    }
    return iVar2;
}


// ===== sym.qcom_dcvs_fp_probe @ 0x08001294 (size 448) =====

int sym.qcom_dcvs_fp_probe(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = arg1 + 0x10;
    mutex_lock(obj.ddrllcc_lock);
    if (_segment.ehdr == NULL) {
        piVar2 = devm_kmalloc(arg1,0x50,0xdc0);
        if (piVar2 == NULL) {
            iVar1 = -0xc;
            piVar2 = _segment.ehdr;
        }
        else {
            *piVar2 = arg1;
            iVar1 = sym.populate_bcm_data(arg1,piVar2 + 3,0x8000239);
            if (iVar1 < 0) {
                pcVar3 = "qcom,ddr-bcm-name";
            }
            else {
                iVar1 = sym.populate_bcm_data(arg1,piVar2 + 5,0x80001d0);
                if (-1 < iVar1) {
                    piVar4 = piVar2 + 7;
                    *piVar4 = piVar2[3];
                    *(piVar2 + 0x3c) = 0x60000000;
                    piVar2[9] = 0x60000000;
                    *(piVar2 + 0x44) = piVar2[5];
                    iVar1 = rpmh_init_fast_path(arg1,piVar4,2);
                    if (iVar1 < 0) {
                        pcVar3 = "Error initializing rpmh fast path: %d\n";
                    }
                    else {
                        iVar1 = rpmh_write_async(arg1,0,piVar4,2);
                        if (iVar1 < 0) {
                            pcVar3 = "Error initing dcvs_fp sleep vote: %d\n";
                        }
                        else {
                            *(piVar2 + 0x3c) = 0x60000001;
                            *(piVar2 + 9) = 0x60000001;
                            iVar1 = rpmh_write_async(arg1,1,piVar4,2);
                            if (-1 < iVar1) goto code_r0x0800139c;
                            pcVar3 = "Error initing dcvs_fp wake vote: %d\n";
                        }
                    }
                    _dev_err(arg1,pcVar3,iVar1);
                    piVar2 = _segment.ehdr;
                    goto code_r0x0800139c;
                }
                pcVar3 = "qcom,llcc-bcm-name";
            }
            _dev_err(arg1,"Error importing %s bcm data: %d\n",pcVar3,iVar1);
            piVar2 = _segment.ehdr;
        }
    }
    else {
        _dev_err(arg1,"Only one fast path client allowed\n");
        iVar1 = -0x16;
        piVar2 = _segment.ehdr;
    }
code_r0x0800139c:
    _segment.ehdr = piVar2;
    mutex_unlock(obj.ddrllcc_lock);
    return iVar1;
}


// ===== sym.populate_bcm_data @ 0x08001454 (size 336) =====

uchar * sym.populate_bcm_data(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_48 = 0;
    iStack_40 = 0;
    uVar4 = of_property_read_string(*(arg1 + 0x2f0),arg3,&iStack_40);
    if (uVar4 < 0) {
        puVar6 = uVar4;
        pcVar8 = "Error reading %s: %d\n";
    }
    else {
        iVar5 = cmd_db_read_addr(iStack_40);
        *arg2 = iVar5;
        if (iVar5 == 0) {
            _dev_err(arg1,"Error getting addr for: %s\n");
            puVar6 = 0xffffffea;
            goto code_r0x08001504;
        }
        puVar6 = cmd_db_read_aux_data(iStack_40,&iStack_48);
        if (puVar6 < 0xfffffffffffff001) {
            if (iStack_48 == 8) {
                *(arg2 + 4) = *puVar6 / 1000;
                *(arg2 + 8) = puVar6[1];
                puVar1 = puVar6 + 6;
                puVar6 = NULL;
                *(arg2 + 0xc) = *puVar1;
            }
            else {
                _dev_err(arg1,"Bad data len for %s: %d\n",iStack_40);
                puVar6 = 0xffffffea;
            }
            goto code_r0x08001504;
        }
        pcVar8 = "Error reading %s aux data: %d\n";
        arg3 = iStack_40;
    }
    _dev_err(arg1,pcVar8,arg3,puVar6 & 0xffffffff);
code_r0x08001504:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar9 = __stack_chk_fail();
        puVar7 = auVar9._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar9._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80015fc);
        (*pcVar3)();
    }
    return puVar6 & 0xffffffff;
}


// ===== sym.__cfi_check_fail @ 0x080015a4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015e8

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
    //switch table (4 cases) at 0x8000170
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015fc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800161c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001650 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dcvs_fp_probe.da844c2cc36ec8f7cf0c2001842f86f9.cfi_jt);
    return;
}

