// decompiled from cdsp-loader by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x080015bc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar2 = arg2;
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar2 + -0x80010f8 >> 3 | pcVar2 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800157c;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x0800157c;
        pcVar1 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x1b6c344e75cfc4ea) {
            if ((arg1 == 0x7e04a0fb7ad8bcd5) && (pcVar2 == sym.cleanup_module.cfi_jt)) {
                return;
            }
            goto code_r0x0800157c;
        }
        pcVar1 = sym.cdsp_boot_store.6f310b714d172990f1180e670ae58b43.cfi_jt;
    }
    if (pcVar2 == pcVar1) {
        return;
    }
code_r0x0800157c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar2,0);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x80015d0);
    (*pcVar2)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt @ 0x080010f8 (size 8) =====

int sym.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = param_1 + 0x10;
    uStack_4c = 0;
    iVar4 = of_find_property(*(param_1 + 0x300),"qcom,rproc-handle",&uStack_4c);
    if (iVar4 == 0) {
        _dev_err(iVar6,"%s: error reading rproc phandle\n","cdsp_loader_probe");
        iVar3 = -0x207;
        iVar4 = _segment.ehdr;
        goto code_r0x0800129c;
    }
    uVar1 = (**(iVar4 + 0x10) & 0xff00ff00) >> 8 | (**(iVar4 + 0x10) & 0xff00ff) << 8;
    iVar4 = rproc_get_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
    if (iVar4 == 0) {
        _dev_err(iVar6,"%s: rproc not found\n","cdsp_loader_probe");
        iVar3 = -0x205;
        iVar4 = _segment.ehdr;
        goto code_r0x0800129c;
    }
    _segment.ehdr = 0;
    puVar5 = devm_kmalloc(iVar6,0x18,0xdc0);
    if (puVar5 == NULL) {
        iVar3 = -0xc;
    }
    else {
        *(param_1 + 0xa8) = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar4 = devm_kmalloc(iVar6,0x28,0xdc0);
        puVar5[2] = iVar4;
        uVar2 = _of_find_property;
        if (iVar4 == 0) {
code_r0x08001254:
            iVar3 = -0xc;
            iVar4 = puVar5[1];
        }
        else {
            *(iVar4 + 0x18) = obj.attrs;
            iVar4 = kobject_create_and_add("boot_cdsp",uVar2);
            puVar5[1] = iVar4;
            if (iVar4 == 0) {
                _dev_err(iVar6,"%s: sysfs create and add failed\n","cdsp_loader_init_sysfs");
                goto code_r0x08001254;
            }
            iVar3 = sysfs_create_group(iVar4,puVar5[2]);
            iVar4 = param_1;
            if (iVar3 == 0) goto code_r0x0800129c;
            _dev_err(iVar6,"%s: sysfs create group failed %d\n","cdsp_loader_init_sysfs",iVar3);
            iVar4 = puVar5[1];
        }
        if (iVar4 != 0) {
            kobject_del();
            puVar5[1] = 0;
        }
        _dev_err(iVar6,"%s failed with ret %d\n","cdsp_loader_init_sysfs",iVar3);
    }
    _dev_err(iVar6,"%s: Error in initing sysfs\n","cdsp_loader_probe");
    iVar4 = _segment.ehdr;
code_r0x0800129c:
    _segment.ehdr = iVar4;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cdsp_loader_remove;
    piVar7 = *(iVar6 + 0xa8);
    if (piVar7 != NULL) {
        if (*piVar7 != 0) {
            rproc_shutdown();
            *piVar7 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        if (piVar7[1] != 0) {
            sysfs_remove_group(piVar7[1],piVar7[2]);
            kobject_del(piVar7[1]);
            piVar7[1] = 0;
        }
    }
    return 0;
}


// ===== sym.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    if (piVar1 != NULL) {
        if (*piVar1 != 0) {
            rproc_shutdown();
            *piVar1 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        if (piVar1[1] != 0) {
            sysfs_remove_group(piVar1[1],piVar1[2]);
            kobject_del(piVar1[1]);
            piVar1[1] = 0;
        }
    }
    return 0;
}


// ===== sym.cdsp_boot_store.6f310b714d172990f1180e670ae58b43.cfi_jt @ 0x08001108 (size 8) =====

uchar * sym.cdsp_boot_store.6f310b714d172990f1180e670ae58b43.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_4c;
    ulong uStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_4c = 0;
    iVar3 = kstrtouint(param_3,0,&iStack_4c);
    iVar1 = _segment.ehdr;
    if (iVar3 != 0) {
        param_4 = iVar3;
        goto code_r0x080013b0;
    }
    if (iStack_4c == 0) {
        piVar7 = *(_segment.ehdr + 0xa8);
        if ((piVar7 != NULL) && (*piVar7 != 0)) {
            rproc_shutdown();
            *piVar7 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        goto code_r0x080013b0;
    }
    if (iStack_4c != 1) goto code_r0x080013b0;
    uStack_3c = 0;
    uStack_48 = 0;
    if (_segment.ehdr == 0) {
        _printk(0x8000371,"cdsp_loader_do");
        goto code_r0x080013b0;
    }
    if (*(_segment.ehdr + 0x300) == 0) {
        pcVar6 = "%s: Device tree information missing\n";
code_r0x080014f0:
        _dev_err(iVar1 + 0x10,pcVar6,"cdsp_loader_do");
    }
    else {
        iVar3 = of_property_read_string(*(_segment.ehdr + 0x300),"qcom,proc-img-to-load",&uStack_48);
        if ((iVar3 == 0) && (iVar3 = strcmp(uStack_48,"cdsp"), iVar3 == 0)) {
            if ((reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt & 1) != 0) goto code_r0x080013b0;
            piVar7 = *(iVar1 + 0xa8);
            if (piVar7 == NULL) {
                pcVar6 = "%s: Private data get failed\n";
                goto code_r0x080014f0;
            }
            iVar3 = of_property_read_variable_u32_array(*(iVar1 + 0x300),"qcom,rproc-handle",&uStack_3c,1,0);
            if (iVar3 < 0) {
                _printk(0x800038d,"cdsp_loader_do",iVar3);
                pcVar6 = "error reading rproc phandle\n";
            }
            else {
                iVar4 = rproc_get_by_phandle(uStack_3c);
                *piVar7 = iVar4;
                if (iVar4 != 0) {
                    iVar3 = rproc_boot();
                    if (iVar3 == 0) {
                        reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x1;
                        goto code_r0x080013b0;
                    }
                    _dev_err(iVar1 + 0x10,"%s: rproc_boot failed with error %d\n","cdsp_loader_do",iVar3);
                    goto code_r0x08001558;
                }
                pcVar6 = "rproc not found\n";
            }
            _dev_err(iVar1 + 0x10,pcVar6);
        }
    }
code_r0x08001558:
    _dev_err(iVar1 + 0x10,"%s: CDSP image loading failed\n","cdsp_loader_do");
code_r0x080013b0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80015d0);
        (*pcVar2)();
    }
    return param_4;
}


// ===== sym.cdsp_loader_probe @ 0x08001110 (size 496) =====

int sym.cdsp_loader_probe(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = arg1 + 0x10;
    uStack_4c = 0;
    iVar4 = of_find_property(*(arg1 + 0x300),"qcom,rproc-handle",&uStack_4c);
    if (iVar4 == 0) {
        _dev_err(iVar6,"%s: error reading rproc phandle\n","cdsp_loader_probe");
        iVar3 = -0x207;
        iVar4 = _segment.ehdr;
        goto code_r0x0800129c;
    }
    uVar1 = (**(iVar4 + 0x10) & 0xff00ff00) >> 8 | (**(iVar4 + 0x10) & 0xff00ff) << 8;
    iVar4 = rproc_get_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
    if (iVar4 == 0) {
        _dev_err(iVar6,"%s: rproc not found\n","cdsp_loader_probe");
        iVar3 = -0x205;
        iVar4 = _segment.ehdr;
        goto code_r0x0800129c;
    }
    _segment.ehdr = 0;
    puVar5 = devm_kmalloc(iVar6,0x18,0xdc0);
    if (puVar5 == NULL) {
        iVar3 = -0xc;
    }
    else {
        *(arg1 + 0xa8) = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar4 = devm_kmalloc(iVar6,0x28,0xdc0);
        puVar5[2] = iVar4;
        uVar2 = _of_find_property;
        if (iVar4 == 0) {
code_r0x08001254:
            iVar3 = -0xc;
            iVar4 = puVar5[1];
        }
        else {
            *(iVar4 + 0x18) = obj.attrs;
            iVar4 = kobject_create_and_add("boot_cdsp",uVar2);
            puVar5[1] = iVar4;
            if (iVar4 == 0) {
                _dev_err(iVar6,"%s: sysfs create and add failed\n","cdsp_loader_init_sysfs");
                goto code_r0x08001254;
            }
            iVar3 = sysfs_create_group(iVar4,puVar5[2]);
            iVar4 = arg1;
            if (iVar3 == 0) goto code_r0x0800129c;
            _dev_err(iVar6,"%s: sysfs create group failed %d\n","cdsp_loader_init_sysfs",iVar3);
            iVar4 = puVar5[1];
        }
        if (iVar4 != 0) {
            kobject_del();
            puVar5[1] = 0;
        }
        _dev_err(iVar6,"%s failed with ret %d\n","cdsp_loader_init_sysfs",iVar3);
    }
    _dev_err(iVar6,"%s: Error in initing sysfs\n","cdsp_loader_probe");
    iVar4 = _segment.ehdr;
code_r0x0800129c:
    _segment.ehdr = iVar4;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cdsp_loader_remove;
    piVar7 = *(iVar6 + 0xa8);
    if (piVar7 != NULL) {
        if (*piVar7 != 0) {
            rproc_shutdown();
            *piVar7 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        if (piVar7[1] != 0) {
            sysfs_remove_group(piVar7[1],piVar7[2]);
            kobject_del(piVar7[1]);
            piVar7[1] = 0;
        }
    }
    return 0;
}


// ===== sym.cdsp_loader_remove @ 0x08001300 (size 104) =====

ulong sym.cdsp_loader_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    if (piVar1 != NULL) {
        if (*piVar1 != 0) {
            rproc_shutdown();
            *piVar1 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        if (piVar1[1] != 0) {
            sysfs_remove_group(piVar1[1],piVar1[2]);
            kobject_del(piVar1[1]);
            piVar1[1] = 0;
        }
    }
    return 0;
}


// ===== sym.cdsp_boot_store @ 0x08001368 (size 528) =====

uchar * sym.cdsp_boot_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_4c;
    ulong uStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_4c = 0;
    iVar3 = kstrtouint(arg1,0,&iStack_4c);
    iVar1 = _segment.ehdr;
    if (iVar3 != 0) {
        arg2 = iVar3;
        goto code_r0x080013b0;
    }
    if (iStack_4c == 0) {
        piVar7 = *(_segment.ehdr + 0xa8);
        if ((piVar7 != NULL) && (*piVar7 != 0)) {
            rproc_shutdown();
            *piVar7 = 0;
            reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x0;
        }
        goto code_r0x080013b0;
    }
    if (iStack_4c != 1) goto code_r0x080013b0;
    uStack_3c = 0;
    uStack_48 = 0;
    if (_segment.ehdr == 0) {
        _printk(0x8000371,"cdsp_loader_do");
        goto code_r0x080013b0;
    }
    if (*(_segment.ehdr + 0x300) == 0) {
        pcVar6 = "%s: Device tree information missing\n";
code_r0x080014f0:
        _dev_err(iVar1 + 0x10,pcVar6,"cdsp_loader_do");
    }
    else {
        iVar3 = of_property_read_string(*(_segment.ehdr + 0x300),"qcom,proc-img-to-load",&uStack_48);
        if ((iVar3 == 0) && (iVar3 = strcmp(uStack_48,"cdsp"), iVar3 == 0)) {
            if ((reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt & 1) != 0) goto code_r0x080013b0;
            piVar7 = *(iVar1 + 0xa8);
            if (piVar7 == NULL) {
                pcVar6 = "%s: Private data get failed\n";
                goto code_r0x080014f0;
            }
            iVar3 = of_property_read_variable_u32_array(*(iVar1 + 0x300),"qcom,rproc-handle",&uStack_3c,1,0);
            if (iVar3 < 0) {
                _printk(0x800038d,"cdsp_loader_do",iVar3);
                pcVar6 = "error reading rproc phandle\n";
            }
            else {
                iVar4 = rproc_get_by_phandle(uStack_3c);
                *piVar7 = iVar4;
                if (iVar4 != 0) {
                    iVar3 = rproc_boot();
                    if (iVar3 == 0) {
                        reloc.cdsp_loader_remove.6f310b714d172990f1180e670ae58b43.cfi_jt = 0x1;
                        goto code_r0x080013b0;
                    }
                    _dev_err(iVar1 + 0x10,"%s: rproc_boot failed with error %d\n","cdsp_loader_do",iVar3);
                    goto code_r0x08001558;
                }
                pcVar6 = "rproc not found\n";
            }
            _dev_err(iVar1 + 0x10,pcVar6);
        }
    }
code_r0x08001558:
    _dev_err(iVar1 + 0x10,"%s: CDSP image loading failed\n","cdsp_loader_do");
code_r0x080013b0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80015d0);
        (*pcVar2)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08001578 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015bc

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015d0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080015d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001608 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cdsp_loader_probe.6f310b714d172990f1180e670ae58b43.cfi_jt);
    return;
}

