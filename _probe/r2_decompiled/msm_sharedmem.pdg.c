// decompiled from msm_sharedmem by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x08001580

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
            goto code_r0x08001540;
        }
        if (arg1 != -0x21c55c8339e6dba9) goto code_r0x08001540;
        pcVar2 = sym.sharedmem_mmap.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001540;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001540:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001594);
    (*pcVar1)();
}


// ===== sym.sharedmem_mmap.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt @ 0x080010d8 (size 8) =====

int sym.sharedmem_mmap.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = param_2[0x13];
    if ((uVar5 < 5) && (uVar6 = *(param_1 + uVar5 * 0x38 + 0x30), uVar6 != 0)) {
        iVar1 = *param_2;
        uVar4 = param_2[1] - iVar1;
        if (uVar6 < uVar4) {
            _printk(0x8000476,"sharedmem_mmap",param_2[1],iVar1,uVar4);
            return -0x16;
        }
        param_2[9] = param_2[9] & 0xffffffffffffffe3U | 0x60000000000008;
        iVar2 = remap_pfn_range(param_2,iVar1,*(param_1 + uVar5 * 0x38 + 0x20) >> 0xc,uVar4);
        if (iVar2 == 0) {
            return 0;
        }
        uVar3 = 0x80003e8;
    }
    else {
        uVar3 = 0x80004ff;
        iVar2 = -0x16;
    }
    _printk(uVar3,"sharedmem_mmap",iVar2);
    return iVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x8000418,"msm_sharedmem_init");
    }
    return iVar1;
}


// ===== sym.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt @ 0x080010f0 (size 8) =====

int sym.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_88;
    int iStack_7c;
    int64_t iStack_78;
    uint uStack_6c;
    ulong uStack_68;
    uint uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iStack_7c = -1;
    if (*(param_1 + 0x300) == 0) {
        uVar9 = 0x80004da;
    }
    else {
        piVar4 = platform_get_resource(param_1,0x200,0);
        if (piVar4 != NULL) {
            iVar8 = param_1 + 0x10;
            iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,client-id",&iStack_7c,1,0);
            if (iVar3 < 0) {
                iStack_7c = -1;
                _printk(0x80002c8,"msm_sharedmem_probe");
            }
            iVar5 = devm_kmalloc(iVar8,0x240,0xdc0);
            if (iVar5 == 0) {
code_r0x080011e8:
                iVar3 = -0xc;
            }
            else {
                iStack_88 = *piVar4;
                uVar1 = (piVar4[1] - iStack_88) + 1;
                if (uVar1 == 0) {
                    _printk(0x8000314,"msm_sharedmem_probe");
                    iVar3 = -0x16;
                    goto code_r0x080011ec;
                }
                if (iStack_88 == 0) {
                    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,guard-memory",0);
                    uVar2 = uVar1;
                    if (iVar6 != 0) {
                        uVar2 = uVar1 + 0x2000;
                    }
                    iVar7 = dma_alloc_attrs(iVar8,uVar2 & 0xffffffff,&iStack_88,0xcc0,0);
                    if (iVar7 == 0) goto code_r0x080011e8;
                    if (iVar6 != 0) {
                        iStack_88 = iStack_88 + 0x1000;
                    }
                }
                iVar6 = of_find_property(*(param_1 + 0x300),"qcom,vm-nav-path",0);
                iStack_78 = iStack_88;
                uStack_6c = 3;
                if (iStack_7c == 1) {
                    if (iVar6 == 0) {
                        uVar9 = 2;
                        uStack_58 = 0xf00000003;
                        uStack_68 = 0x600000006;
                    }
                    else {
                        uVar9 = 3;
                        uStack_58 = *0x80005e0;
                        uStack_50 = *0x80005e8;
                        uStack_68 = *0x80005ec;
                        uStack_60 = *0x80005f4;
                    }
                    iVar3 = hyp_assign_phys(iStack_88,uVar1 & 0xffffffff,&uStack_6c,1,&uStack_58,&uStack_68,uVar9)
                    ;
                    if (iVar3 != 0) {
                        if (iVar3 == -0x16) {
                            _printk(0x8000598,"setup_shared_ram_perms");
                        }
                        else {
                            _printk(0x800039f,"setup_shared_ram_perms",&iStack_78,uVar1 & 0xffffffff);
                        }
                    }
                }
                *(iVar5 + 0x218) = sym.sharedmem_mmap.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt;
                iVar6 = piVar4[2];
                *(iVar5 + 0x20) = iStack_88;
                *(iVar5 + 0x30) = uVar1 & 0xffffffff;
                *(iVar5 + 8) = iVar6;
                *(iVar5 + 0x10) = 0x80004bf;
                *(iVar5 + 0x38) = 1;
                iVar3 = __uio_register_device(obj.__this_module,iVar8,iVar5);
                if (iVar3 == 0) {
                    *(param_1 + 0xa8) = iVar5;
                    _printk(0x8000542,"msm_sharedmem_probe",piVar4[2]);
                }
                else {
                    _printk(0x800036e,"msm_sharedmem_probe",iVar3);
                }
            }
            goto code_r0x080011ec;
        }
        uVar9 = 0x8000345;
    }
    _printk(uVar9,"msm_sharedmem_probe");
    iVar3 = -0x13;
code_r0x080011ec:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.msm_sharedmem_remove;
    uio_unregister_device(*(iVar8 + 0xa8));
    return 0;
}


// ===== sym.msm_sharedmem_remove.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.msm_sharedmem_remove.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uio_unregister_device(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.msm_sharedmem_probe @ 0x08001100 (size 800) =====

int sym.msm_sharedmem_probe(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_88;
    int iStack_7c;
    int64_t iStack_78;
    uint uStack_6c;
    ulong uStack_68;
    uint uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iStack_7c = -1;
    if (*(arg1 + 0x300) == 0) {
        uVar9 = 0x80004da;
    }
    else {
        piVar4 = platform_get_resource(arg1,0x200,0);
        if (piVar4 != NULL) {
            iVar8 = arg1 + 0x10;
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,client-id",&iStack_7c,1,0);
            if (iVar3 < 0) {
                iStack_7c = -1;
                _printk(0x80002c8,"msm_sharedmem_probe");
            }
            iVar5 = devm_kmalloc(iVar8,0x240,0xdc0);
            if (iVar5 == 0) {
code_r0x080011e8:
                iVar3 = -0xc;
            }
            else {
                iStack_88 = *piVar4;
                uVar1 = (piVar4[1] - iStack_88) + 1;
                if (uVar1 == 0) {
                    _printk(0x8000314,"msm_sharedmem_probe");
                    iVar3 = -0x16;
                    goto code_r0x080011ec;
                }
                if (iStack_88 == 0) {
                    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,guard-memory",0);
                    uVar2 = uVar1;
                    if (iVar6 != 0) {
                        uVar2 = uVar1 + 0x2000;
                    }
                    iVar7 = dma_alloc_attrs(iVar8,uVar2 & 0xffffffff,&iStack_88,0xcc0,0);
                    if (iVar7 == 0) goto code_r0x080011e8;
                    if (iVar6 != 0) {
                        iStack_88 = iStack_88 + 0x1000;
                    }
                }
                iVar6 = of_find_property(*(arg1 + 0x300),"qcom,vm-nav-path",0);
                iStack_78 = iStack_88;
                uStack_6c = 3;
                if (iStack_7c == 1) {
                    if (iVar6 == 0) {
                        uVar9 = 2;
                        uStack_58 = 0xf00000003;
                        uStack_68 = 0x600000006;
                    }
                    else {
                        uVar9 = 3;
                        uStack_58 = *0x80005e0;
                        uStack_50 = *0x80005e8;
                        uStack_68 = *0x80005ec;
                        uStack_60 = *0x80005f4;
                    }
                    iVar3 = hyp_assign_phys(iStack_88,uVar1 & 0xffffffff,&uStack_6c,1,&uStack_58,&uStack_68,uVar9)
                    ;
                    if (iVar3 != 0) {
                        if (iVar3 == -0x16) {
                            _printk(0x8000598,"setup_shared_ram_perms");
                        }
                        else {
                            _printk(0x800039f,"setup_shared_ram_perms",&iStack_78,uVar1 & 0xffffffff);
                        }
                    }
                }
                *(iVar5 + 0x218) = sym.sharedmem_mmap.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt;
                iVar6 = piVar4[2];
                *(iVar5 + 0x20) = iStack_88;
                *(iVar5 + 0x30) = uVar1 & 0xffffffff;
                *(iVar5 + 8) = iVar6;
                *(iVar5 + 0x10) = 0x80004bf;
                *(iVar5 + 0x38) = 1;
                iVar3 = __uio_register_device(obj.__this_module,iVar8,iVar5);
                if (iVar3 == 0) {
                    *(arg1 + 0xa8) = iVar5;
                    _printk(0x8000542,"msm_sharedmem_probe",piVar4[2]);
                }
                else {
                    _printk(0x800036e,"msm_sharedmem_probe",iVar3);
                }
            }
            goto code_r0x080011ec;
        }
        uVar9 = 0x8000345;
    }
    _printk(uVar9,"msm_sharedmem_probe");
    iVar3 = -0x13;
code_r0x080011ec:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.msm_sharedmem_remove;
    uio_unregister_device(*(iVar8 + 0xa8));
    return 0;
}


// ===== sym.msm_sharedmem_remove @ 0x08001420 (size 44) =====

ulong sym.msm_sharedmem_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uio_unregister_device(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.sharedmem_mmap @ 0x0800144c (size 240) =====

int sym.sharedmem_mmap(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg2 + 0x98);
    if ((uVar5 < 5) && (uVar6 = *(arg1 + uVar5 * 0x38 + 0x30), uVar6 != 0)) {
        iVar1 = *arg2;
        uVar4 = *(arg2 + 8) - iVar1;
        if (uVar6 < uVar4) {
            _printk(0x8000476,"sharedmem_mmap",*(arg2 + 8),iVar1,uVar4);
            return -0x16;
        }
        *(arg2 + 0x48) = *(arg2 + 0x48) & 0xffffffffffffffe3 | 0x60000000000008;
        iVar2 = remap_pfn_range(arg2,iVar1,*(arg1 + uVar5 * 0x38 + 0x20) >> 0xc,uVar4);
        if (iVar2 == 0) {
            return 0;
        }
        uVar3 = 0x80003e8;
    }
    else {
        uVar3 = 0x80004ff;
        iVar2 = -0x16;
    }
    _printk(uVar3,"sharedmem_mmap",iVar2);
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800153c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001580

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001594);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080015a4 (size 96) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x8000418,"msm_sharedmem_init");
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001604 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_sharedmem_probe.10937cfc3ac1ae9adbf11acc615c927a.cfi_jt);
    return;
}

