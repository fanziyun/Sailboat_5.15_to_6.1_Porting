// decompiled from adsp_loader_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080019dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x550b9e52359ac614) {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800199c;
            pcVar2 = sym.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
code_r0x080010c0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800199c;
        }
        pcVar2 = sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x1b6c344e75cfc4ea) {
            pcVar2 = sym.adsp_ssr_store.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
            goto code_r0x080010c0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800199c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800199c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019f0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt @ 0x08001110 (size 8) =====

uchar * sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uchar *puVar9;
    char *pcVar10;
    uchar *in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    int64_t *piVar11;
    uint64_t *unaff_x21;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t *puStack_90;
    int64_t iStack_80;
    uchar *puStack_78;
    int iStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_50;
    ulong uStack_40;
    int64_t iStack_38;
    
    pcVar10 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    if (_segment.ehdr == 0) {
        pcVar10 = "%s: Platform device null\n";
        iVar6 = 0x10;
code_r0x08001768:
        _dev_err(iVar6,pcVar10,"adsp_load_fw");
code_r0x0800178c:
        uVar7 = unaff_x19;
        pcVar10 = "adsp_load_fw";
        puVar8 = _dev_err(iVar2 + 0x10,"%s: Q6 image loading failed\n","adsp_load_fw");
    }
    else {
        if (*(_segment.ehdr + 0x300) == 0) {
            pcVar10 = "%s: Device tree information missing\n";
code_r0x08001760:
            iVar6 = iVar2 + 0x10;
            goto code_r0x08001768;
        }
        unaff_x21 = *(_segment.ehdr + 0xa8);
        if (unaff_x21 == NULL) {
            pcVar10 = " %s: Private data get failed\n";
            goto code_r0x08001760;
        }
        in_x3 = 0x1;
        iVar5 = of_property_read_variable_u32_array(*(_segment.ehdr + 0x300),"qcom,adsp-state",&uStack_40 + 4,1,0);
        if (iVar5 < 0) {
            in_x3 = uStack_40 >> 0x20;
            _dev_err(iVar2 + 0x10,"%s: ADSP state = %x\n","adsp_load_fw");
            goto code_r0x0800178c;
        }
        iVar6 = of_find_property(*(iVar2 + 0x300),"qcom,proc-img-to-load",&uStack_40);
        uVar7 = unaff_x19;
        if (iVar6 == 0) {
code_r0x080016dc:
            puVar8 = spf_core_is_apm_ready();
            uStack_40 = CONCAT44(puVar8,uStack_40) & 0x1ffffffff;
            if ((puVar8 & 1) == 0) {
                puVar8 = rproc_boot(*unaff_x21);
                iVar5 = puVar8;
joined_r0x080016f4:
                if (iVar5 != 0) {
code_r0x080016f8:
                    pcVar10 = "%s: pil get failed,\n";
                    unaff_x19 = uVar7;
                    goto code_r0x08001760;
                }
            }
        }
        else {
            uVar1 = (**(iVar6 + 0x10) & 0xff00ff00) >> 8 | (**(iVar6 + 0x10) & 0xff00ff) << 8;
            uVar7 = rproc_get_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
            *unaff_x21 = uVar7;
            if (uVar7 == 0) goto code_r0x0800178c;
            puVar8 = strcmp(*(uVar7 + 0x18),"modem");
            if (puVar8 != 0) goto code_r0x080016dc;
            if (uStack_40._4_4_ == 0) {
                puVar8 = rproc_boot(uVar7);
                if (*unaff_x21 < 0xfffffffffffff001) {
                    iVar5 = puVar8;
                    goto joined_r0x080016f4;
                }
                goto code_r0x080016f8;
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.adsp_boot_store;
    pcStack_58 = sym.adsp_boot_store;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    pcVar4 = &iStack_6c;
    iStack_6c = 0;
    puVar8 = in_x3;
    puStack_60 = &stack0xffffffffffffffd0;
    uStack_50 = uVar7;
    iVar5 = sscanf(pcVar10,0x8000372,pcVar4);
    if (iVar5 == 1) {
        if (iStack_6c == 0) {
            if ((*(_segment.ehdr + 0xa8) != NULL) && (**(_segment.ehdr + 0xa8) != 0)) {
                rproc_shutdown();
            }
        }
        else if (iStack_6c == 1) {
            pcVar4 = reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
        }
    }
    else {
        _printk(0x8000342,"adsp_boot_store");
        in_x3 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.adsp_ssr_store;
    iVar3 = _segment.ehdr;
    pcStack_98 = sym.adsp_ssr_store;
    iStack_80 = iVar2;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    iStack_ac = 0;
    piVar11 = *(_segment.ehdr + 0xa8);
    ppuStack_a0 = &puStack_60;
    puStack_90 = unaff_x21;
    puStack_78 = in_x3;
    if (piVar11 != NULL) {
        iVar5 = kstrtoint(pcVar4,10,&iStack_ac);
        puVar9 = 0xffffffffffffffea;
        if ((iVar5 < 0) || (iStack_ac != 1)) goto code_r0x0800192c;
        iVar6 = *piVar11;
        if (iVar6 != 0) {
            _dev_err(iVar3 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar6);
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            puVar9 = puVar8;
            goto code_r0x0800192c;
        }
    }
    puVar9 = 0xffffffffffffffea;
code_r0x0800192c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return puVar9;
    }
    auVar12 = __stack_chk_fail(puVar9);
    puVar8 = auVar12._0_8_;
    *extraout_x18_01 = sym.__cfi_check_fail;
    if (puVar8 != NULL) {
        switch(*puVar8) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar8,auVar12._8_8_,0);
            break;
        default:
            return puVar8;
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5502,0x80019f0);
    (*pcVar4)();
}


// ===== sym.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt @ 0x08001118 (size 8) =====

ulong sym.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt(int64_t param_1)

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
        }
        if (piVar1[1] != 0) {
            sysfs_remove_group(piVar1[1],piVar1[2]);
            kobject_del(piVar1[1]);
            piVar1[1] = 0;
        }
    }
    return 0;
}


// ===== sym.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt @ 0x08001120 (size 8) =====

int sym.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    ulong unaff_x30;
    uint uStack_74;
    ulong uStack_70;
    int iStack_68;
    int iStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar11 = param_1 + 0x10;
    iStack_60 = 0;
    iStack_64 = 0;
    iStack_68 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    iVar4 = of_find_property(*(param_1 + 0x300),"qcom,rproc-handle",&uStack_74);
    if (iVar4 == 0) {
        _dev_err(iVar11,"Missing remotproc handle\n");
        iVar2 = -0x207;
        goto code_r0x080014c0;
    }
    uVar3 = (**(iVar4 + 0x10) & 0xff00ff00) >> 8 | (**(iVar4 + 0x10) & 0xff00ff) << 8;
    iVar4 = rproc_get_by_phandle(uVar3 >> 0x10 | uVar3 << 0x10);
    if (iVar4 == 0) {
        _dev_err(iVar11,"fail to get rproc\n");
        iVar2 = -0x205;
        goto code_r0x080014c0;
    }
    _segment.ehdr = 0;
    puVar5 = devm_kmalloc(iVar11,0x20,0xdc0);
    if (puVar5 == NULL) {
        iVar2 = -0xc;
    }
    else {
        *(param_1 + 0xa8) = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar6 = devm_kmalloc(iVar11,0x28,0xdc0);
        puVar5[2] = iVar6;
        uVar1 = _of_find_property;
        if (iVar6 == 0) {
code_r0x0800148c:
            iVar2 = -0xc;
            iVar6 = puVar5[1];
        }
        else {
            *(iVar6 + 0x18) = obj.attrs;
            iVar6 = kobject_create_and_add("boot_adsp",uVar1);
            puVar5[1] = iVar6;
            if (iVar6 == 0) {
                _dev_err(iVar11,"%s: sysfs create and add failed\n","adsp_loader_init_sysfs");
                goto code_r0x0800148c;
            }
            iVar2 = sysfs_create_group(iVar6,puVar5[2]);
            if (iVar2 == 0) {
                piVar12 = *(param_1 + 0xa8);
                _segment.ehdr = param_1;
                *piVar12 = iVar4;
                uVar7 = nvmem_cell_get(iVar11,"adsp_variant");
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    iVar2 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"adsp-fuse-not-supported",&iStack_68,1,0);
                    if ((-1 < iVar2) &&
                       ((iStack_68 != 0 &&
                        (iVar2 = of_property_read_string(*(param_1 + 0x300),"adsp-fw-name",&uStack_70), -1 < iVar2)))
                       ) {
                        iVar2 = strlen(uStack_70);
                        iVar11 = devm_kmalloc(iVar11,iVar2 + 1,0xdc0);
                        piVar12[3] = iVar11;
                        if (iVar11 != 0) {
                            strlcpy(iVar11,uStack_70,iVar2 + 1);
                        }
                    }
                }
                else {
                    uVar8 = nvmem_cell_read(uVar7,&iStack_60);
                    nvmem_cell_put(uVar7);
                    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                        if (iStack_60 - 5U < 0xfffffffffffffffc) {
                            kfree(uVar8);
                        }
                        else {
                            memcpy(&iStack_64,uVar8);
                            kfree(uVar8);
                            uVar3 = of_property_read_string_helper(*(param_1 + 0x300),"adsp-fw-names",0,0,0);
                            if (0xfffffffb < uVar3 - 5) {
                                uVar7 = uVar3;
                                piVar9 = devm_kmalloc(iVar11,uVar7 << 2,0xdc0);
                                if (piVar9 != NULL) {
                                    iVar2 = of_property_read_variable_u32_array
                                                      (*(param_1 + 0x300),"adsp-fw-bit-values",piVar9,uVar7,0);
                                    if (iVar2 < 0) {
                                        iVar4 = 0;
                                    }
                                    else {
                                        iVar4 = devm_kmalloc(iVar11,uVar7 << 3,0xdc0);
                                        if ((iVar4 != 0) &&
                                           (iVar2 = of_property_read_string_helper
                                                              (*(param_1 + 0x300),"adsp-fw-names",iVar4,uVar7,0),
                                           -1 < iVar2)) {
                                            if (*piVar9 == iStack_64) {
                                                iVar6 = 0;
                                            }
                                            else {
                                                if (uVar3 == 1) goto code_r0x0800152c;
                                                if (piVar9[1] == iStack_64) {
                                                    iVar6 = 1;
                                                }
                                                else {
                                                    if (uVar3 == 2) goto code_r0x0800152c;
                                                    if (piVar9[2] == iStack_64) {
                                                        iVar6 = 2;
                                                    }
                                                    else {
                                                        if ((uVar3 == 3) || (piVar9[3] != iStack_64))
                                                        goto code_r0x0800152c;
                                                        iVar6 = 3;
                                                    }
                                                }
                                            }
                                            iVar2 = strlen(*(iVar4 + iVar6 * 8));
                                            iVar10 = devm_kmalloc(iVar11,iVar2 + 1,0xdc0);
                                            piVar12[3] = iVar10;
                                            if (iVar10 != 0) {
                                                strlcpy(iVar10,*(iVar4 + iVar6 * 8),iVar2 + 1);
                                            }
                                        }
                                    }
code_r0x0800152c:
                                    _reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt = 0xfffffffe0;
                                    _reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt =
                                         reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    *0x8000050 = reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    *0x8000058 = sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    devm_kfree(iVar11,piVar9);
                                    iVar2 = 0;
                                    if (iVar4 != 0) {
                                        devm_kfree(iVar11,iVar4);
                                        iVar2 = 0;
                                    }
                                    goto code_r0x080014c0;
                                }
                            }
                        }
                    }
                }
                iVar2 = 0;
                _reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt = 0xfffffffe0;
                _reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt =
                     reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                *0x8000050 = reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                *0x8000058 = sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                goto code_r0x080014c0;
            }
            _dev_err(iVar11,"%s: sysfs create group failed %d\n","adsp_loader_init_sysfs",iVar2);
            iVar6 = puVar5[1];
        }
        if (iVar6 != 0) {
            kobject_del();
            puVar5[1] = 0;
        }
    }
    _dev_err(iVar11,"%s: Error in initing sysfs\n","adsp_loader_probe");
    rproc_put(iVar4);
code_r0x080014c0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return iVar2;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_loader_remove;
    piVar12 = *(iVar11 + 0xa8);
    if (piVar12 != NULL) {
        if (*piVar12 != 0) {
            rproc_shutdown();
            *piVar12 = 0;
        }
        if (piVar12[1] != 0) {
            sysfs_remove_group(piVar12[1],piVar12[2]);
            kobject_del(piVar12[1]);
            piVar12[1] = 0;
        }
    }
    return 0;
}


// ===== sym.adsp_ssr_store.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt @ 0x08001128 (size 8) =====

void sym.adsp_ssr_store.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iStack_3c = 0;
    piVar6 = *(_segment.ehdr + 0xa8);
    if (piVar6 != NULL) {
        iVar3 = kstrtoint(param_3,10,&iStack_3c);
        uVar4 = 0xffffffffffffffea;
        if ((iVar3 < 0) || (iStack_3c != 1)) goto code_r0x0800192c;
        iVar7 = *piVar6;
        if (iVar7 != 0) {
            _dev_err(iVar1 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar7);
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            uVar4 = param_4;
            goto code_r0x0800192c;
        }
    }
    uVar4 = 0xffffffffffffffea;
code_r0x0800192c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail(uVar4);
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
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80019f0);
        (*pcVar2)();
    }
    return;
}


// ===== sym.adsp_boot_store.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt @ 0x08001130 (size 8) =====

uchar * sym.adsp_boot_store.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    pcVar2 = &iStack_2c;
    iStack_2c = 0;
    puVar5 = param_4;
    iVar3 = sscanf(param_3,0x8000372,pcVar2);
    if (iVar3 == 1) {
        if (iStack_2c == 0) {
            if ((*(_segment.ehdr + 0xa8) != NULL) && (**(_segment.ehdr + 0xa8) != 0)) {
                rproc_shutdown();
            }
        }
        else if (iStack_2c == 1) {
            pcVar2 = reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
        }
    }
    else {
        _printk(0x8000342,"adsp_boot_store");
        param_4 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.adsp_ssr_store;
    iVar1 = _segment.ehdr;
    pcStack_58 = sym.adsp_ssr_store;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_6c = 0;
    piVar6 = *(_segment.ehdr + 0xa8);
    puStack_60 = &stack0xffffffffffffffe0;
    if (piVar6 != NULL) {
        iVar3 = kstrtoint(pcVar2,10,&iStack_6c);
        puVar4 = 0xffffffffffffffea;
        if ((iVar3 < 0) || (iStack_6c != 1)) goto code_r0x0800192c;
        iVar7 = *piVar6;
        if (iVar7 != 0) {
            _dev_err(iVar1 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar7);
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            puVar4 = puVar5;
            goto code_r0x0800192c;
        }
    }
    puVar4 = 0xffffffffffffffea;
code_r0x0800192c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        auVar8 = __stack_chk_fail(puVar4);
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x80019f0);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.adsp_loader_probe @ 0x08001138 (size 1176) =====

int sym.adsp_loader_probe(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    ulong unaff_x30;
    uint uStack_74;
    ulong uStack_70;
    int iStack_68;
    int iStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar11 = arg1 + 0x10;
    iStack_60 = 0;
    iStack_64 = 0;
    iStack_68 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    iVar4 = of_find_property(*(arg1 + 0x300),"qcom,rproc-handle",&uStack_74);
    if (iVar4 == 0) {
        _dev_err(iVar11,"Missing remotproc handle\n");
        iVar2 = -0x207;
        goto code_r0x080014c0;
    }
    uVar3 = (**(iVar4 + 0x10) & 0xff00ff00) >> 8 | (**(iVar4 + 0x10) & 0xff00ff) << 8;
    iVar4 = rproc_get_by_phandle(uVar3 >> 0x10 | uVar3 << 0x10);
    if (iVar4 == 0) {
        _dev_err(iVar11,"fail to get rproc\n");
        iVar2 = -0x205;
        goto code_r0x080014c0;
    }
    _segment.ehdr = 0;
    puVar5 = devm_kmalloc(iVar11,0x20,0xdc0);
    if (puVar5 == NULL) {
        iVar2 = -0xc;
    }
    else {
        *(arg1 + 0xa8) = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar6 = devm_kmalloc(iVar11,0x28,0xdc0);
        puVar5[2] = iVar6;
        uVar1 = _of_find_property;
        if (iVar6 == 0) {
code_r0x0800148c:
            iVar2 = -0xc;
            iVar6 = puVar5[1];
        }
        else {
            *(iVar6 + 0x18) = obj.attrs;
            iVar6 = kobject_create_and_add("boot_adsp",uVar1);
            puVar5[1] = iVar6;
            if (iVar6 == 0) {
                _dev_err(iVar11,"%s: sysfs create and add failed\n","adsp_loader_init_sysfs");
                goto code_r0x0800148c;
            }
            iVar2 = sysfs_create_group(iVar6,puVar5[2]);
            if (iVar2 == 0) {
                piVar12 = *(arg1 + 0xa8);
                _segment.ehdr = arg1;
                *piVar12 = iVar4;
                uVar7 = nvmem_cell_get(iVar11,"adsp_variant");
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    iVar2 = of_property_read_variable_u32_array
                                      (*(arg1 + 0x300),"adsp-fuse-not-supported",&iStack_68,1,0);
                    if ((-1 < iVar2) &&
                       ((iStack_68 != 0 &&
                        (iVar2 = of_property_read_string(*(arg1 + 0x300),"adsp-fw-name",&uStack_70), -1 < iVar2)))) {
                        iVar2 = strlen(uStack_70);
                        iVar11 = devm_kmalloc(iVar11,iVar2 + 1,0xdc0);
                        piVar12[3] = iVar11;
                        if (iVar11 != 0) {
                            strlcpy(iVar11,uStack_70,iVar2 + 1);
                        }
                    }
                }
                else {
                    uVar8 = nvmem_cell_read(uVar7,&iStack_60);
                    nvmem_cell_put(uVar7);
                    if ((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) {
                        if (iStack_60 - 5U < 0xfffffffffffffffc) {
                            kfree(uVar8);
                        }
                        else {
                            memcpy(&iStack_64,uVar8);
                            kfree(uVar8);
                            uVar3 = of_property_read_string_helper(*(arg1 + 0x300),"adsp-fw-names",0,0,0);
                            if (0xfffffffb < uVar3 - 5) {
                                uVar7 = uVar3;
                                piVar9 = devm_kmalloc(iVar11,uVar7 << 2,0xdc0);
                                if (piVar9 != NULL) {
                                    iVar2 = of_property_read_variable_u32_array
                                                      (*(arg1 + 0x300),"adsp-fw-bit-values",piVar9,uVar7,0);
                                    if (iVar2 < 0) {
                                        iVar4 = 0;
                                    }
                                    else {
                                        iVar4 = devm_kmalloc(iVar11,uVar7 << 3,0xdc0);
                                        if ((iVar4 != 0) &&
                                           (iVar2 = of_property_read_string_helper
                                                              (*(arg1 + 0x300),"adsp-fw-names",iVar4,uVar7,0),
                                           -1 < iVar2)) {
                                            if (*piVar9 == iStack_64) {
                                                iVar6 = 0;
                                            }
                                            else {
                                                if (uVar3 == 1) goto code_r0x0800152c;
                                                if (piVar9[1] == iStack_64) {
                                                    iVar6 = 1;
                                                }
                                                else {
                                                    if (uVar3 == 2) goto code_r0x0800152c;
                                                    if (piVar9[2] == iStack_64) {
                                                        iVar6 = 2;
                                                    }
                                                    else {
                                                        if ((uVar3 == 3) || (piVar9[3] != iStack_64))
                                                        goto code_r0x0800152c;
                                                        iVar6 = 3;
                                                    }
                                                }
                                            }
                                            iVar2 = strlen(*(iVar4 + iVar6 * 8));
                                            iVar10 = devm_kmalloc(iVar11,iVar2 + 1,0xdc0);
                                            piVar12[3] = iVar10;
                                            if (iVar10 != 0) {
                                                strlcpy(iVar10,*(iVar4 + iVar6 * 8),iVar2 + 1);
                                            }
                                        }
                                    }
code_r0x0800152c:
                                    _reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt = 0xfffffffe0;
                                    _reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt =
                                         reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    *0x8000050 = reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    *0x8000058 = sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                                    devm_kfree(iVar11,piVar9);
                                    iVar2 = 0;
                                    if (iVar4 != 0) {
                                        devm_kfree(iVar11,iVar4);
                                        iVar2 = 0;
                                    }
                                    goto code_r0x080014c0;
                                }
                            }
                        }
                    }
                }
                iVar2 = 0;
                _reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt = 0xfffffffe0;
                _reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt =
                     reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                *0x8000050 = reloc.adsp_loader_remove.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                *0x8000058 = sym.adsp_load_fw.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
                goto code_r0x080014c0;
            }
            _dev_err(iVar11,"%s: sysfs create group failed %d\n","adsp_loader_init_sysfs",iVar2);
            iVar6 = puVar5[1];
        }
        if (iVar6 != 0) {
            kobject_del();
            puVar5[1] = 0;
        }
    }
    _dev_err(iVar11,"%s: Error in initing sysfs\n","adsp_loader_probe");
    rproc_put(iVar4);
code_r0x080014c0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return iVar2;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_loader_remove;
    piVar12 = *(iVar11 + 0xa8);
    if (piVar12 != NULL) {
        if (*piVar12 != 0) {
            rproc_shutdown();
            *piVar12 = 0;
        }
        if (piVar12[1] != 0) {
            sysfs_remove_group(piVar12[1],piVar12[2]);
            kobject_del(piVar12[1]);
            piVar12[1] = 0;
        }
    }
    return 0;
}


// ===== sym.adsp_loader_remove @ 0x080015d0 (size 96) =====

ulong sym.adsp_loader_remove(int64_t arg1)

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
        }
        if (piVar1[1] != 0) {
            sysfs_remove_group(piVar1[1],piVar1[2]);
            kobject_del(piVar1[1]);
            piVar1[1] = 0;
        }
    }
    return 0;
}


// ===== sym.adsp_load_fw @ 0x08001630 (size 424) =====

uchar * sym.adsp_load_fw(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uchar *puVar8;
    uchar *puVar9;
    char *pcVar10;
    uchar *in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    int64_t *piVar11;
    uint64_t *unaff_x21;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t *puStack_90;
    int64_t iStack_80;
    uchar *puStack_78;
    int iStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_50;
    ulong uStack_40;
    int64_t iStack_38;
    
    pcVar10 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    if (_segment.ehdr == 0) {
        pcVar10 = "%s: Platform device null\n";
        iVar6 = 0x10;
code_r0x08001768:
        _dev_err(iVar6,pcVar10,"adsp_load_fw");
code_r0x0800178c:
        uVar7 = unaff_x19;
        pcVar10 = "adsp_load_fw";
        puVar8 = _dev_err(iVar2 + 0x10,"%s: Q6 image loading failed\n","adsp_load_fw");
    }
    else {
        if (*(_segment.ehdr + 0x300) == 0) {
            pcVar10 = "%s: Device tree information missing\n";
code_r0x08001760:
            iVar6 = iVar2 + 0x10;
            goto code_r0x08001768;
        }
        unaff_x21 = *(_segment.ehdr + 0xa8);
        if (unaff_x21 == NULL) {
            pcVar10 = " %s: Private data get failed\n";
            goto code_r0x08001760;
        }
        in_x3 = 0x1;
        iVar5 = of_property_read_variable_u32_array(*(_segment.ehdr + 0x300),"qcom,adsp-state",&uStack_40 + 4,1,0);
        if (iVar5 < 0) {
            in_x3 = uStack_40 >> 0x20;
            _dev_err(iVar2 + 0x10,"%s: ADSP state = %x\n","adsp_load_fw");
            goto code_r0x0800178c;
        }
        iVar6 = of_find_property(*(iVar2 + 0x300),"qcom,proc-img-to-load",&uStack_40);
        uVar7 = unaff_x19;
        if (iVar6 == 0) {
code_r0x080016dc:
            puVar8 = spf_core_is_apm_ready();
            uStack_40 = CONCAT44(puVar8,uStack_40) & 0x1ffffffff;
            if ((puVar8 & 1) == 0) {
                puVar8 = rproc_boot(*unaff_x21);
                iVar5 = puVar8;
joined_r0x080016f4:
                if (iVar5 != 0) {
code_r0x080016f8:
                    pcVar10 = "%s: pil get failed,\n";
                    unaff_x19 = uVar7;
                    goto code_r0x08001760;
                }
            }
        }
        else {
            uVar1 = (**(iVar6 + 0x10) & 0xff00ff00) >> 8 | (**(iVar6 + 0x10) & 0xff00ff) << 8;
            uVar7 = rproc_get_by_phandle(uVar1 >> 0x10 | uVar1 << 0x10);
            *unaff_x21 = uVar7;
            if (uVar7 == 0) goto code_r0x0800178c;
            puVar8 = strcmp(*(uVar7 + 0x18),"modem");
            if (puVar8 != 0) goto code_r0x080016dc;
            if (uStack_40._4_4_ == 0) {
                puVar8 = rproc_boot(uVar7);
                if (*unaff_x21 < 0xfffffffffffff001) {
                    iVar5 = puVar8;
                    goto joined_r0x080016f4;
                }
                goto code_r0x080016f8;
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.adsp_boot_store;
    pcStack_58 = sym.adsp_boot_store;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    pcVar4 = &iStack_6c;
    iStack_6c = 0;
    puVar8 = in_x3;
    puStack_60 = &stack0xffffffffffffffd0;
    uStack_50 = uVar7;
    iVar5 = sscanf(pcVar10,0x8000372,pcVar4);
    if (iVar5 == 1) {
        if (iStack_6c == 0) {
            if ((*(_segment.ehdr + 0xa8) != NULL) && (**(_segment.ehdr + 0xa8) != 0)) {
                rproc_shutdown();
            }
        }
        else if (iStack_6c == 1) {
            pcVar4 = reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
        }
    }
    else {
        _printk(0x8000342,"adsp_boot_store");
        in_x3 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.adsp_ssr_store;
    iVar3 = _segment.ehdr;
    pcStack_98 = sym.adsp_ssr_store;
    iStack_80 = iVar2;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    iStack_ac = 0;
    piVar11 = *(_segment.ehdr + 0xa8);
    ppuStack_a0 = &puStack_60;
    puStack_90 = unaff_x21;
    puStack_78 = in_x3;
    if (piVar11 != NULL) {
        iVar5 = kstrtoint(pcVar4,10,&iStack_ac);
        puVar9 = 0xffffffffffffffea;
        if ((iVar5 < 0) || (iStack_ac != 1)) goto code_r0x0800192c;
        iVar6 = *piVar11;
        if (iVar6 != 0) {
            _dev_err(iVar3 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar6);
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            puVar9 = puVar8;
            goto code_r0x0800192c;
        }
    }
    puVar9 = 0xffffffffffffffea;
code_r0x0800192c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return puVar9;
    }
    auVar12 = __stack_chk_fail(puVar9);
    puVar8 = auVar12._0_8_;
    *extraout_x18_01 = sym.__cfi_check_fail;
    if (puVar8 != NULL) {
        switch(*puVar8) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar8,auVar12._8_8_,0);
            break;
        default:
            return puVar8;
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5502,0x80019f0);
    (*pcVar4)();
}


// ===== sym.adsp_boot_store @ 0x080017d8 (size 224) =====

uchar * sym.adsp_boot_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    int iStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    pcVar2 = &iStack_2c;
    iStack_2c = 0;
    puVar5 = arg2;
    iVar3 = sscanf(arg1,0x8000372,pcVar2);
    if (iVar3 == 1) {
        if (iStack_2c == 0) {
            if ((*(_segment.ehdr + 0xa8) != NULL) && (**(_segment.ehdr + 0xa8) != 0)) {
                rproc_shutdown();
            }
        }
        else if (iStack_2c == 1) {
            pcVar2 = reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt;
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
        }
    }
    else {
        _printk(0x8000342,"adsp_boot_store");
        arg2 = -0x16;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.adsp_ssr_store;
    iVar1 = _segment.ehdr;
    pcStack_58 = sym.adsp_ssr_store;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_6c = 0;
    piVar6 = *(_segment.ehdr + 0xa8);
    puStack_60 = &stack0xffffffffffffffe0;
    if (piVar6 != NULL) {
        iVar3 = kstrtoint(pcVar2,10,&iStack_6c);
        puVar4 = 0xffffffffffffffea;
        if ((iVar3 < 0) || (iStack_6c != 1)) goto code_r0x0800192c;
        iVar7 = *piVar6;
        if (iVar7 != 0) {
            _dev_err(iVar1 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar7);
            queue_work_on(0x20,_devm_kmalloc,reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            puVar4 = puVar5;
            goto code_r0x0800192c;
        }
    }
    puVar4 = 0xffffffffffffffea;
code_r0x0800192c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        auVar8 = __stack_chk_fail(puVar4);
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x80019f0);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.adsp_ssr_store @ 0x080018b8 (size 224) =====

void sym.adsp_ssr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar7 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iStack_3c = 0;
    piVar5 = *(_segment.ehdr + 0xa8);
    if (piVar5 != NULL) {
        iVar3 = kstrtoint(arg2,10,&iStack_3c);
        iVar6 = -0x16;
        noname_1 = extraout_q0;
        if ((iVar3 < 0) || (iStack_3c != 1)) goto code_r0x0800192c;
        iVar6 = *piVar5;
        if (iVar6 != 0) {
            _dev_err(iVar1 + 0x10,"requesting for ADSP restart\n");
            rproc_shutdown(iVar6);
            noname_1 = queue_work_on(0x20,_devm_kmalloc,
                                     reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
            iVar6 = arg3;
            goto code_r0x0800192c;
        }
    }
    iVar6 = -0x16;
code_r0x0800192c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar7 = __stack_chk_fail(noname_1,iVar6);
        puVar4 = auVar7._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80019f0);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001998 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080019dc

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
    //switch table (4 cases) at 0x8000188
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019f0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080019f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001a28 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.adsp_loader_probe.73d4acc4ea52e5d9d5c403a9966af225.cfi_jt);
    return;
}

