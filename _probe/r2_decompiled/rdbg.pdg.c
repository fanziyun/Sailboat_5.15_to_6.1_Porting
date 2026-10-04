// decompiled from rdbg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x0800266c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3987c0e26ee29729) {
            pcVar2 = sym.on_interrupt_from.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8001180 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x0800262c;
            }
            pcVar2 = sym.rdbg_probe.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt;
        }
    }
    else if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800262c;
            pcVar2 = sym.rdbg_read.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt;
        }
    }
    else if (arg1 == 0x1d7ed092cb04d3f1) {
        pcVar2 = sym.rdbg_write.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800262c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800262c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002680);
    (*pcVar1)();
}


// ===== sym.rdbg_write.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001160 (size 8) =====

int64_t sym.rdbg_write.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(int64_t param_1,int64_t param_2,int param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int *piVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    int64_t arg3;
    int64_t iVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar18 = *(param_1 + 0xd8);
    if (iVar18 == 0) {
        _printk(0x80003e0);
        arg3 = -0x16;
    }
    else {
        uVar1 = param_3 + 0x7f;
        arg3 = param_3;
        uVar2 = uVar1 & 0xffffff80 | 0x7f;
        if (-1 < (uVar1 & 0xffffff80)) {
            uVar2 = uVar1 & 0xffffff80;
        }
        uVar2 = uVar2 >> 7;
        uVar19 = 0;
        do {
            mutex_lock(*(iVar18 + 0xa0));
            piVar15 = *(iVar18 + 0x88);
            if (((*piVar15 == -0xff00fe) && (*(*(iVar18 + 0x78) + 1) == '\x01')) &&
               (iVar11 = *(iVar18 + 0x80), *(iVar11 + 4) == piVar15[1])) {
                while( true ) {
                    uVar13 = *(iVar11 + 0xc);
                    if (uVar13 == piVar15[3]) break;
                    uVar14 = *(iVar18 + 0x98);
                    if (uVar14 <= *(piVar15 + uVar13 + 4)) goto code_r0x080019ac;
                    uVar10 = 0;
                    if (uVar14 != 0) {
                        uVar10 = (uVar13 + 1) / uVar14;
                    }
                    *(iVar11 + 0xc) = (uVar13 + 1) - uVar10 * uVar14;
                    uVar4 = *(piVar15 + uVar13 + 4);
                    uVar13 = *(*(iVar18 + 0xb8) + uVar4);
                    if (uVar13 != 0) {
                        iVar8 = uVar13 - 1;
                        *(*(iVar18 + 0xb8) + uVar4) = 0;
                        if (iVar8 != 0) {
                            uVar13 = uVar4;
                            do {
                                uVar13 = uVar13 + 1;
                                iVar8 = iVar8 + -1;
                                *(*(iVar18 + 0xb8) + uVar13) = 0;
                            } while (iVar8 != 0);
                        }
                    }
                    DataSynchronizationBarrier(3,1,0);
                    iVar11 = *(iVar18 + 0x80);
                    piVar15 = *(iVar18 + 0x88);
                }
            }
            uVar13 = *(iVar18 + 0xb0);
            uVar12 = uVar13;
            if ((uVar1 & 0xffffff80) == 0x80) {
                do {
                    uVar14 = uVar12;
                    if (*(*(iVar18 + 0xb8) + uVar12) == '\0') {
                        *(*(iVar18 + 0xb8) + uVar12) = 1;
                        uVar10 = *(iVar18 + 0xb4);
                        uVar13 = *(iVar18 + 0xb0) + 1;
                        uVar16 = 0;
                        if (uVar10 != 0) {
                            uVar16 = uVar13 / uVar10;
                        }
                        iVar8 = uVar13 - uVar16 * uVar10;
                        goto code_r0x0800193c;
                    }
                    uVar10 = *(iVar18 + 0xb4);
                    uVar16 = 0;
                    if (uVar10 != 0) {
                        uVar16 = (uVar14 + 1) / uVar10;
                    }
                    uVar14 = (uVar14 + 1) - uVar16 * uVar10;
                    uVar12 = uVar14;
                    *(iVar18 + 0xb0) = uVar14;
                } while (uVar13 != uVar14);
            }
            else {
                uVar13 = *(iVar18 + 0xb4);
                uVar16 = 0;
                iVar11 = *(iVar18 + 0xb8);
                uVar17 = uVar12;
                uVar10 = uVar13;
                do {
                    uVar9 = uVar12;
                    if (*(iVar11 + uVar12) == 0) {
                        uVar14 = uVar9;
                        if (uVar10 <= uVar9) {
                            uVar14 = uVar17;
                        }
                        uVar17 = uVar14;
                        uVar3 = 1;
                        uVar14 = uVar9;
                        if (uVar10 <= uVar9) {
                            uVar3 = uVar16 + 1;
                            uVar14 = uVar10;
                        }
                        uVar16 = uVar3;
                        if (uVar3 != uVar2) goto code_r0x080018a4;
                        if ((uVar1 | 0x7f) < 0xff) {
                            uVar13 = 0;
                        }
                        else {
                            uVar12 = uVar2;
                            if (uVar9 <= uVar10) {
                                uVar10 = uVar9;
                            }
                            do {
                                *(iVar11 + uVar10) = uVar12;
                                uVar12 = uVar12 - 1;
                                iVar11 = *(iVar18 + 0xb8);
                                uVar10 = uVar10 + 1;
                            } while (uVar12 != 0);
                            uVar9 = *(iVar18 + 0xb0);
                            uVar13 = *(iVar11 + uVar9);
                        }
                        iVar8 = uVar13 + uVar9 + -1;
code_r0x0800193c:
                        *(iVar18 + 0xb0) = iVar8;
                        iVar11 = *(iVar18 + 0x90) + (uVar14 << 7);
                        if (param_3 < 0) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x80019d8);
                            (*pcVar6)();
                        }
                        __check_object_size(iVar11,arg3,0);
                        iVar8 = sym._copy_from_user(iVar11,param_2,arg3);
                        if (iVar8 != 0) {
                            if (iVar11 != 0) {
                                uVar13 = *(*(iVar18 + 0xb8) + uVar14);
                                if (uVar13 != 0) {
                                    *(*(iVar18 + 0xb8) + uVar14) = 0;
                                    while (uVar13 = uVar13 - 1, uVar13 != 0) {
                                        uVar14 = uVar14 + 1;
                                        *(*(iVar18 + 0xb8) + uVar14) = 0;
                                    }
                                }
                            }
                            break;
                        }
                        *(*(iVar18 + 0x80) + *(*(iVar18 + 0x80) + 8) * 4 + 0x10) = uVar14;
                        bVar5 = true;
                        *(*(iVar18 + 0x80) + *(*(iVar18 + 0x80) + 8) * 4 + 0x12) = uVar2;
                        uVar14 = *(iVar18 + 0x98);
                        uVar13 = *(*(iVar18 + 0x80) + 8) + 1;
                        uVar10 = 0;
                        if (uVar14 != 0) {
                            uVar10 = uVar13 / uVar14;
                        }
                        *(*(iVar18 + 0x80) + 8) = uVar13 - uVar10 * uVar14;
                        goto code_r0x080019b0;
                    }
                    uVar16 = 0;
                    uVar9 = (uVar9 + *(iVar11 + uVar12)) - 1;
                    uVar14 = uVar13;
code_r0x080018a4:
                    uVar10 = uVar14;
                    uVar14 = 0;
                    if (uVar13 != 0) {
                        uVar14 = (uVar9 + 1) / uVar13;
                    }
                    uVar14 = (uVar9 + 1) - uVar14 * uVar13;
                    uVar12 = uVar14;
                    *(iVar18 + 0xb0) = uVar14;
                } while (uVar17 != uVar14);
            }
code_r0x080019ac:
            bVar5 = false;
code_r0x080019b0:
            mutex_unlock(*(iVar18 + 0xa0));
        } while ((!bVar5) && (bVar7 = uVar19 < 0x14, uVar19 = uVar19 + 1, bVar7));
        if (bVar5) {
            uVar1 = *(iVar18 + 0x5c);
            if (0x1f < uVar1) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8001ac8);
                (*pcVar6)();
            }
            iVar11 = 1L << (*(iVar18 + 0x48) + uVar1 & 0x3f);
            uVar2 = *(obj.g_rdbg_instance + uVar1 * 4) ^ iVar11;
            qcom_smem_state_update_bits(*(iVar18 + 0x50),iVar11,uVar2);
            *(obj.g_rdbg_instance + uVar1 * 4) = uVar2;
            *(iVar18 + 0x5c) = uVar1 + 1 & 0x1f;
        }
        else {
            _printk(0x80005a2);
            arg3 = -0x46;
        }
    }
    return arg3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = 0;
        iVar4 = 0x58;
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        iVar1 = _segment.ehdr;
        do {
            if (*(iVar2 + iVar4) != '\0') {
                device_destroy(*0x8000270,*0x8000278 & 0xfff00000 | iVar3);
                iVar2 = *0x8000280;
                iVar1 = *0x800027c;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x148;
        } while (iVar3 < iVar1);
    }
    class_destroy(*0x8000270);
    cdev_del(obj.g_rdbg_instance);
    unregister_chrdev_region(*0x8000278,1);
    kfree(*0x8000280);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    bool bVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr - 0x11U < 0xfffffff0) {
        _printk(0x80005d8);
        uVar8 = 0xffffffdf;
    }
    else {
        _segment.ehdr = __kmalloc((_segment.ehdr & 0xffffffff) * 0x148,0xdc0);
        if (_segment.ehdr == 0) {
            uVar8 = 0xfffffff4;
        }
        else {
            uVar5 = __platform_driver_register
                              (reloc.rdbg_probe.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt,obj.__this_module);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 == 0) {
                uVar3 = alloc_chrdev_region(0x8000278,0,*0x800027c,"rdbgctl");
                if (uVar3 == 0) {
                    uVar3 = *0x8000278 & 0xfff00000;
                    cdev_init(obj.g_rdbg_instance,obj.rdbg_fops);
                    *0x8000248 = obj.__this_module;
                    uVar4 = cdev_add(obj.g_rdbg_instance,uVar3,*0x800027c);
                    if (uVar4 == 0) {
                        uVar8 = __class_create(obj.__this_module,"rdbg",obj.rdbg_init.__key);
                        _segment.ehdr = uVar8;
                        if (uVar8 < 0xfffffffffffff001) {
                            _segment.ehdr = uVar8;
                            uVar8 = uVar8 & 0xffffffff;
                            bVar1 = 0 < _segment.ehdr;
                            if (bVar1) {
                                iVar10 = 0;
                                uVar5 = 0;
                                iVar11 = 0;
                                pcVar2 = obj.proc_info;
                                do {
                                    if (uVar5 == 0x10) {
    //WARNING: Does not return
                                        pcVar2 = SoftwareBreakpoint(0x5512,0x8002958);
                                        (*pcVar2)();
                                    }
                                    if (*pcVar2 != 0) {
                                        uVar6 = device_create(*0x8000270,0,uVar3 | uVar5,0,0x800047a);
                                        *(*0x8000280 + iVar10) = uVar6;
                                        uVar8 = *(*0x8000280 + iVar10);
                                        if (0xfffffffffffff000 < uVar8) {
                                            _printk(0x80006a2);
                                            uVar7 = _segment.ehdr;
                                            if (uVar5 != 0) {
                                                do {
                                                    uVar9 = uVar5 - 1;
                                                    if (*(uVar7 + (uVar9 & 0xffffffff) * 0x148 + 0x58) != '\0') {
                                                        device_destroy(*0x8000270,*0x8000278 & 0xfff00000 | uVar5 - 1U)
                                                        ;
                                                        uVar7 = *0x8000280;
                                                    }
                                                    uVar5 = uVar9;
                                                } while (1 < uVar9 + 1);
                                            }
                                            goto code_r0x08002884;
                                        }
                                        iVar11 = iVar11 + 1;
                                        *(*0x8000280 + iVar10 + 0x58) = 1;
                                        uVar8 = _segment.ehdr & 0xffffffff;
                                    }
                                    uVar5 = uVar5 + 1;
                                    pcVar2 = pcVar2 + 0x18;
                                    iVar10 = iVar10 + 0x148;
                                } while (uVar5 < uVar8);
                                if (iVar11 != 0) {
                                    uVar8 = 0;
                                    goto code_r0x08002828;
                                }
                            }
                            _printk(0x80007e5);
                            uVar8 = 0xffffffea;
code_r0x08002884:
                            class_destroy(_segment.ehdr);
                        }
                        else {
                            _printk(0x8000589);
                        }
                        cdev_del(obj.g_rdbg_instance);
                    }
                    else {
                        uVar8 = uVar4;
                        _printk(0x800055f);
                    }
                    unregister_chrdev_region(*0x8000278,*0x800027c);
                }
                else {
                    uVar8 = uVar3;
                    _printk(0x8000726);
                }
                kfree(_segment.ehdr);
            }
        }
    }
code_r0x08002828:
    return uVar8 & 0xffffffff;
}


// ===== sym.rdbg_probe.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001178 (size 8) =====

uint64_t sym.rdbg_probe.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
    if (iVar5 == 0) {
        uVar7 = 0xfffffff4;
    }
    else {
        if (0 < _segment.ehdr) {
            uVar8 = 0;
            pcVar2 = obj.proc_info;
            iVar9 = 0x50;
            do {
                if (uVar8 == 0x10) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8001414);
                    (*pcVar2)();
                }
                iVar10 = *pcVar2;
                if (iVar10 != 0) {
                    iVar3 = snprintf(iVar5,0x20,"%s%d-out","qcom,smp2p-interrupt-rdbg-",uVar8 & 0xffffffff);
                    if (0 < iVar3) {
                        iVar3 = of_device_is_compatible(*(param_1 + 0x300),iVar5);
                        if (iVar3 != 0) {
                            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
                            if (iVar1 + iVar9 == 0x10) {
                                uVar7 = 0xffffffea;
code_r0x080013f4:
                                _printk(0x8000758,"rdbg_probe",iVar10);
                                goto code_r0x080013a8;
                            }
                            iVar6 = of_find_property(*(param_1 + 0x300),"qcom,smem-states",0);
                            if (iVar6 != 0) {
                                uVar7 = qcom_smem_state_get(param_1 + 0x10,"rdbg-smp2p-out",iVar1 + iVar9 + -1);
                                *(iVar1 + iVar9) = uVar7;
                                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                                    _printk(0x80006e3);
                                    uVar7 = *(iVar1 + iVar9);
                                    if (uVar7 != 0) goto code_r0x080013f4;
                                }
                            }
                        }
                        iVar3 = snprintf(iVar5,0x20,"%s%d-in","qcom,smp2p-interrupt-rdbg-",uVar8 & 0xffffffff);
                        if (0 < iVar3) {
                            iVar3 = of_device_is_compatible(*(param_1 + 0x300),iVar5);
                            if (iVar3 != 0) {
                                iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + iVar9;
                                if (iVar1 == 0x28) {
                                    _printk(0x800047d,iVar10);
                                }
                                else {
                                    uVar4 = of_irq_get_byname(*(param_1 + 0x300),"rdbg-smp2p-in");
                                    *(iVar1 + -0x28) = uVar4;
                                    *(iVar1 + -0x24) = uVar4;
                                }
                            }
                            goto code_r0x0800125c;
                        }
                    }
                    _printk(0x8000456);
                    uVar7 = 0xfffffff4;
                    goto code_r0x080013a8;
                }
code_r0x0800125c:
                uVar8 = uVar8 + 1;
                pcVar2 = pcVar2 + 0x18;
                iVar9 = iVar9 + 0x148;
            } while (uVar8 < _segment.ehdr);
        }
        uVar7 = 0;
    }
code_r0x080013a8:
    kfree(iVar5);
    return uVar7 & 0xffffffff;
}


// ===== sym.rdbg_open.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001180 (size 8) =====

int sym.rdbg_open.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    int *piVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int *piVar16;
    int64_t *piVar17;
    uchar *puVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = _segment.ehdr;
    if ((param_1 == 0) || (_segment.ehdr == 0)) {
        _printk(0x80004a0);
        return -0x13;
    }
    uVar14 = *(param_1 + 0x4c) & 0xfffff;
    puVar13 = _segment.ehdr + uVar14 * 0x148;
    if (*(puVar13 + 0xc) != '\0') {
        _dev_err(*puVar13,"%s: Device already opened\n","rdbg_open");
        return -0x11;
    }
    if (0xf < uVar14) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8002168);
        (*pcVar1)();
    }
    if (0x170 < uVar14 * 0x18) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(1,0x800216c);
        (*pcVar1)();
    }
    uVar5 = *(uVar14 * 0x18 + 0x8000d88);
    puVar12 = _segment.ehdr + uVar14 * 0x148 + 0x70;
    *puVar12 = uVar5;
    if (uVar5 == 0) {
        _dev_err(*puVar13,"%s: smem not initialized\n","rdbg_open");
        return -0xc;
    }
    iVar3 = qcom_smem_get(0xffffffff,*(uVar14 * 0x18 + 0x8000d80),puVar12);
    piVar17 = iVar9 + uVar14 * 0x148 + 0x68;
    *piVar17 = iVar3;
    if (iVar3 == 0) {
        _dev_err(*puVar13,"%s: Could not allocate smem memory\n","rdbg_open");
        _printk(0x8000791);
        return -0xc;
    }
    uVar5 = iVar3 + 9U & 0xfffffffffffffff8;
    uVar7 = (((iVar3 - uVar5) + (*puVar12 >> 1)) - 0x20U) / 0x88;
    iVar2 = uVar7;
    if (iVar2 < 1) {
code_r0x080020b0:
        _dev_err(*puVar13,"%s: Subsystem %s is not debug enabled\n","rdbg_open",*(obj.proc_info + uVar14 * 0x18));
        _printk(0x80005f5);
        return -0x46;
    }
    if (*(uVar5 + (iVar2 << 7) + ((uVar7 << 0x20) >> 0x1e) + 0x10) != -0xff00fe) {
        _printk(0x80004d7,"check_subsystem_debug_enabled");
        goto code_r0x080020b0;
    }
    iVar3 = iVar9 + uVar14 * 0x148;
    *(iVar3 + 8) = 0;
    __init_swait_queue_head(iVar3 + 0x10,"&x->wait",obj.rdbg_init.__key);
    iVar2 = request_threaded_irq
                      (*(iVar3 + 0x2c),0,sym.on_interrupt_from.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt,0x2003,
                       *(obj.proc_info + uVar14 * 0x18),_segment.ehdr + uVar14 * 0x148);
    if (iVar2 != 0) {
        _dev_err(*puVar13,"%s: Failed to register interrupt.Err=%d,irqid=%d.\n","rdbg_open",iVar2,*(iVar3 + 0x2c));
        _printk(0x800061d,iVar2);
        return iVar2;
    }
    iVar3 = iVar9 + uVar14 * 0x148;
    __mutex_init(iVar3 + 0x118,"&rdbgdata->write_mutex",obj.rdbg_init.__key);
    piVar16 = iVar3 + 0xa8;
    if (*piVar16 != -0xff0100) {
        puVar18 = *piVar17;
        pcVar4 = "%s: smq producer allocation failed\n";
        if (puVar18 == NULL) goto code_r0x08001f18;
        uVar5 = *puVar12;
        iVar2 = uVar5 >> 1;
        if (iVar2 == 0) goto code_r0x08001f18;
        uVar7 = puVar18 + 9 & 0xfffffffffffffff8;
        uVar11 = (((iVar2 + puVar18) - uVar7) - 0x20U) / 0x88;
        uVar10 = uVar11;
        *(iVar9 + uVar14 * 0x148 + 0xa0) = iVar3 + 0x118;
        *(iVar3 + 0x78) = puVar18;
        if (0 < uVar10) {
            iVar15 = iVar9 + uVar14 * 0x148;
            iVar3 = uVar7 + (uVar10 << 7);
            piVar17 = iVar15 + 0x80;
            *piVar17 = iVar3;
            *(iVar15 + 0x88) = iVar3 + ((uVar11 << 0x20) >> 0x1e) + 0x10;
            *(iVar15 + 0x90) = uVar7;
            *(iVar15 + 0xc0) = 1;
            puVar8 = iVar15 + 0x98;
            *puVar8 = uVar10;
            *puVar18 = 1;
            if (*puVar8 != 0) {
                uVar7 = 0;
                iVar3 = 0x10;
                do {
                    uVar7 = uVar7 + 1;
                    *(*piVar17 + iVar3) = 0xffff;
                    iVar3 = iVar3 + 4;
                    uVar10 = *puVar8;
                    uVar11 = uVar10;
                } while (uVar7 < uVar11);
                if (1 < uVar10) {
                    iVar3 = __kmalloc(uVar11,0xdc0);
                    *(iVar9 + uVar14 * 0x148 + 0xb8) = iVar3;
                    if (iVar3 != 0) {
                        iVar15 = iVar9 + uVar14 * 0x148;
                        *(iVar15 + 0xb4) = uVar10 - 1;
                        memset(iVar3,0,uVar11);
                        iVar3 = *piVar17;
                        *(iVar15 + 0xb0) = 0;
                        *(iVar3 + 8) = 0;
                        *(*piVar17 + 0xc) = 0;
                        piVar6 = *piVar17;
                        if (*piVar6 == -0xff00ff) {
                            piVar6[1] = piVar6[1] + 1;
                        }
                        else {
                            piVar6[1] = 1;
                            **piVar17 = 0xff00ff01;
                        }
                        iVar3 = iVar9 + uVar14 * 0x148;
                        *piVar16 = -0xff0100;
                        piVar6 = iVar3 + 0xf8;
                        if (*piVar6 == -0xff0100) {
                            pcVar4 = "%s: smq consumer allocation failed\n";
                        }
                        else {
                            puVar18 = puVar18 + (uVar5 >> 1);
                            pcVar4 = "%s: smq consumer allocation failed\n";
                            if ((puVar18 != NULL) && (iVar2 = *puVar12 >> 1, iVar2 != 0)) {
                                uVar5 = puVar18 + 9 & 0xfffffffffffffff8;
                                uVar7 = (((puVar18 - uVar5) + iVar2) - 0x20U) / 0x88;
                                uVar10 = uVar7;
                                *(iVar3 + 200) = puVar18;
                                if (0 < uVar10) {
                                    iVar3 = uVar5 + (uVar10 << 7);
                                    iVar9 = iVar9 + uVar14 * 0x148;
                                    piVar17 = iVar9 + 0xd8;
                                    *piVar17 = iVar3 + ((uVar7 << 0x20) >> 0x1e) + 0x10;
                                    *(iVar9 + 0xe0) = uVar5;
                                    *(iVar9 + 0x110) = 2;
                                    puVar8 = iVar9 + 0xe8;
                                    *puVar8 = uVar10;
                                    *(iVar9 + 0xd0) = iVar3;
                                    puVar18[1] = 1;
                                    if (*puVar8 != 0) {
                                        uVar14 = 0;
                                        iVar3 = 0x10;
                                        do {
                                            uVar14 = uVar14 + 1;
                                            *(*piVar17 + iVar3) = 0xffff;
                                            iVar3 = iVar3 + 4;
                                        } while (uVar14 < *puVar8);
                                    }
                                    iVar2 = 0;
                                    *(*piVar17 + 8) = 0;
                                    *(*piVar17 + 0xc) = 0;
                                    piVar16 = *(iVar9 + 0xd0);
                                    if (*piVar16 == -0xff00ff) {
                                        iVar2 = piVar16[1];
                                    }
                                    *(*piVar17 + 4) = iVar2;
                                    **piVar17 = 0xff00ff02;
                                    *piVar6 = -0xff0100;
                                    *(puVar13 + 0xc) = '\x01';
                                    *(param_2 + 0xd8) = puVar13;
                                    return 0;
                                }
                                pcVar4 = "%s: smq consumer allocation failed\n";
                            }
                        }
                        goto code_r0x08001f18;
                    }
                }
            }
        }
    }
    pcVar4 = "%s: smq producer allocation failed\n";
code_r0x08001f18:
    _dev_err(*puVar13,pcVar4,"initialize_smq");
    _dev_err(*puVar13,"Error initializing smq. Err=%d\n",0xfffffff4);
    _printk(0x80007b8,0xfffffff4);
    if (*piVar16 == -0xff0100) {
        iVar2 = *(iVar9 + uVar14 * 0x148 + 0xc0);
        if (iVar2 == 2) {
            **(iVar9 + uVar14 * 0x148 + 0x88) = 0;
        }
        else if (iVar2 == 1) {
            iVar3 = iVar9 + uVar14 * 0x148;
            **(iVar3 + 0x80) = 0;
            kfree(*(iVar3 + 0xb8));
            *(iVar3 + 0xb8) = 0;
        }
        *piVar16 = 0;
    }
    piVar16 = iVar9 + uVar14 * 0x148 + 0xf8;
    if (*piVar16 == -0xff0100) {
        iVar2 = *(iVar9 + uVar14 * 0x148 + 0x110);
        if (iVar2 == 2) {
            **(iVar9 + uVar14 * 0x148 + 0xd8) = 0;
        }
        else if (iVar2 == 1) {
            iVar9 = iVar9 + uVar14 * 0x148;
            **(iVar9 + 0xd0) = 0;
            kfree(*(iVar9 + 0x108));
            *(iVar9 + 0x108) = 0;
        }
        *piVar16 = 0;
        return -0xc;
    }
    return -0xc;
}


// ===== sym.rdbg_release.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.rdbg_release.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = _segment.ehdr;
    if ((param_1 == 0) || (_segment.ehdr == 0)) {
        _printk(0x80004a0);
        uVar2 = 0xffffffed;
    }
    else {
        uVar4 = *(param_1 + 0x4c) & 0xfffff;
        pcVar3 = _segment.ehdr + uVar4 * 0x148 + 0x60;
        if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            complete(iVar6 + uVar4 * 0x148 + 8);
            piVar5 = _segment.ehdr + uVar4 * 0x148 + 0xa8;
            if (*piVar5 == -0xff0100) {
                iVar1 = *(_segment.ehdr + uVar4 * 0x148 + 0xc0);
                if (iVar1 == 2) {
                    **(_segment.ehdr + uVar4 * 0x148 + 0x88) = 0;
                }
                else if (iVar1 == 1) {
                    iVar6 = _segment.ehdr + uVar4 * 0x148;
                    **(iVar6 + 0x80) = 0;
                    kfree(*(iVar6 + 0xb8));
                    *(iVar6 + 0xb8) = 0;
                }
                *piVar5 = 0;
            }
            piVar5 = _segment.ehdr + uVar4 * 0x148 + 0xf8;
            if (*piVar5 == -0xff0100) {
                iVar1 = *(_segment.ehdr + uVar4 * 0x148 + 0x110);
                if (iVar1 == 2) {
                    **(_segment.ehdr + uVar4 * 0x148 + 0xd8) = 0;
                }
                else if (iVar1 == 1) {
                    iVar6 = _segment.ehdr + uVar4 * 0x148;
                    **(iVar6 + 0xd0) = 0;
                    kfree(*(iVar6 + 0x108));
                    *(iVar6 + 0x108) = 0;
                }
                *piVar5 = 0;
            }
        }
        uVar2 = 0;
        *(param_2 + 0xd8) = 0;
    }
    return uVar2;
}


// ===== sym.rdbg_read.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001190 (size 8) =====

int64_t sym.rdbg_read.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    ulong uVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    puVar12 = *(param_1 + 0xd8);
    if (puVar12 == NULL) {
        _printk(0x80003e0);
        iVar6 = -0x16;
        goto code_r0x08001694;
    }
    iVar6 = wait_for_completion_interruptible(puVar12 + 1);
    if (iVar6 != 0) {
        _dev_err(*puVar12,"%s: Error in wait\n","rdbg_read");
        goto code_r0x08001694;
    }
    if (((*(puVar12 + 0x22) == 2) && (*puVar12[0x1a] == -0xff00ff)) && (*puVar12[0x19] == '\x01')) {
        iVar6 = puVar12[0x1a][1];
        if (*(puVar12[0x1b] + 4) != iVar6) {
            *(puVar12[0x1b] + 4) = iVar6;
            if (*(puVar12 + 0x1d) != 0) {
                uVar10 = 0;
                iVar11 = 0x10;
                do {
                    uVar10 = uVar10 + 1;
                    *(puVar12[0x1b] + iVar11) = 0xffff;
                    iVar11 = iVar11 + 4;
                } while (uVar10 < *(puVar12 + 0x1d));
            }
            *(puVar12[0x1b] + 8) = 0;
            *(puVar12[0x1b] + 0xc) = 0;
            if (*(puVar12 + 0x18) == 1) {
                mutex_lock(puVar12[0x14]);
                if (*(puVar12[0x10] + 4) != iVar6) {
                    *(puVar12[0x10] + 4) = iVar6;
                    if (*(puVar12 + 0x13) != 0) {
                        uVar10 = 0;
                        iVar11 = 0x10;
                        do {
                            uVar10 = uVar10 + 1;
                            *(puVar12[0x10] + iVar11) = 0xffff;
                            iVar11 = iVar11 + 4;
                        } while (uVar10 < *(puVar12 + 0x13));
                    }
                    if (puVar12[0x17] != 0) {
                        memset(puVar12[0x17],0,*(puVar12 + 0xb4) + 1);
                        *(puVar12 + 0x16) = 0;
                    }
                    *(puVar12[0x10] + 8) = 0;
                    *(puVar12[0x10] + 0xc) = 0;
                }
                mutex_unlock(puVar12[0x14]);
            }
        }
    }
    piVar2 = puVar12[0x1a];
    if ((*puVar12[0x19] == '\x01') || (*piVar2 == -0xff00ff)) {
        uVar3 = *(puVar12[0x1b] + 8);
        if (uVar3 == piVar2[2]) goto code_r0x080016b4;
        uVar4 = *(puVar12 + 0x1d);
        if (uVar4 <= *(piVar2 + uVar3 + 4)) goto code_r0x080016b4;
        uVar5 = 0;
        if (uVar4 != 0) {
            uVar5 = (uVar3 + 1) / uVar4;
        }
        *(puVar12[0x1b] + 8) = (uVar3 + 1) - uVar5 * uVar4;
        DataSynchronizationBarrier(3,1,0);
        uVar10 = *(piVar2 + uVar3 * 4 + 0x12) * 0x80;
        iVar11 = puVar12[0x1c] + *(piVar2 + uVar3 + 4) * 0x80;
        if (uVar10 < param_3 || uVar10 - param_3 == 0) {
            param_3 = uVar10;
        }
        noname_1 = __check_object_size(iVar11,param_3,1);
        uVar7 = sym._copy_to_user(param_2,noname_1,param_3);
        if (uVar7 == 0) {
            if (puVar12[0x1e] != 0) {
                mutex_lock();
            }
            if ((*puVar12[0x19] == '\x01') || (*puVar12[0x1a] == -0xff00ff)) {
                iVar11 = iVar11 - puVar12[0x1c];
                iVar1 = iVar11 + 0x7f;
                if (-1 < iVar11) {
                    iVar1 = iVar11;
                }
                if (iVar1 >> 7 < *(puVar12 + 0x1d)) {
                    iVar11 = puVar12[0x1b] + *(puVar12[0x1b] + 0xc) * 4;
                    *(iVar11 + 0x10) = iVar1 >> 7;
                    *(iVar11 + 0x12) = 0;
                    uVar4 = *(puVar12 + 0x1d);
                    uVar3 = *(puVar12[0x1b] + 0xc) + 1;
                    uVar5 = 0;
                    if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                    }
                    *(puVar12[0x1b] + 0xc) = uVar3 - uVar5 * uVar4;
                }
            }
            if (puVar12[0x1e] != 0) {
                mutex_unlock();
            }
            iVar6 = param_3;
            goto code_r0x08001694;
        }
        uVar8 = *puVar12;
        pcVar9 = "%s: Error in copy_to_user(). Err code = %d\n";
    }
    else {
code_r0x080016b4:
        uVar8 = *puVar12;
        pcVar9 = "%s: Error in smq_recv(). Err code = %d\n";
        uVar7 = 0;
    }
    _dev_err(uVar8,pcVar9,"rdbg_read",uVar7);
    iVar6 = -0x3d;
code_r0x08001694:
    return iVar6;
}


// ===== sym.on_interrupt_from.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.on_interrupt_from.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(param_2 + 8);
    return 1;
}


// ===== sym.rdbg_probe @ 0x080011a0 (size 628) =====

uint64_t sym.rdbg_probe(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
    if (iVar5 == 0) {
        uVar7 = 0xfffffff4;
    }
    else {
        if (0 < _segment.ehdr) {
            uVar8 = 0;
            pcVar2 = obj.proc_info;
            iVar9 = 0x50;
            do {
                if (uVar8 == 0x10) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8001414);
                    (*pcVar2)();
                }
                iVar10 = *pcVar2;
                if (iVar10 != 0) {
                    iVar3 = snprintf(iVar5,0x20,"%s%d-out","qcom,smp2p-interrupt-rdbg-",uVar8 & 0xffffffff);
                    if (0 < iVar3) {
                        iVar3 = of_device_is_compatible(*(arg1 + 0x300),iVar5);
                        if (iVar3 != 0) {
                            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
                            if (iVar1 + iVar9 == 0x10) {
                                uVar7 = 0xffffffea;
code_r0x080013f4:
                                _printk(0x8000758,"rdbg_probe",iVar10);
                                goto code_r0x080013a8;
                            }
                            iVar6 = of_find_property(*(arg1 + 0x300),"qcom,smem-states",0);
                            if (iVar6 != 0) {
                                uVar7 = qcom_smem_state_get(arg1 + 0x10,"rdbg-smp2p-out",iVar1 + iVar9 + -1);
                                *(iVar1 + iVar9) = uVar7;
                                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                                    _printk(0x80006e3);
                                    uVar7 = *(iVar1 + iVar9);
                                    if (uVar7 != 0) goto code_r0x080013f4;
                                }
                            }
                        }
                        iVar3 = snprintf(iVar5,0x20,"%s%d-in","qcom,smp2p-interrupt-rdbg-",uVar8 & 0xffffffff);
                        if (0 < iVar3) {
                            iVar3 = of_device_is_compatible(*(arg1 + 0x300),iVar5);
                            if (iVar3 != 0) {
                                iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + iVar9;
                                if (iVar1 == 0x28) {
                                    _printk(0x800047d,iVar10);
                                }
                                else {
                                    uVar4 = of_irq_get_byname(*(arg1 + 0x300),"rdbg-smp2p-in");
                                    *(iVar1 + -0x28) = uVar4;
                                    *(iVar1 + -0x24) = uVar4;
                                }
                            }
                            goto code_r0x0800125c;
                        }
                    }
                    _printk(0x8000456);
                    uVar7 = 0xfffffff4;
                    goto code_r0x080013a8;
                }
code_r0x0800125c:
                uVar8 = uVar8 + 1;
                pcVar2 = pcVar2 + 0x18;
                iVar9 = iVar9 + 0x148;
            } while (uVar8 < _segment.ehdr);
        }
        uVar7 = 0;
    }
code_r0x080013a8:
    kfree(iVar5);
    return uVar7 & 0xffffffff;
}


// ===== sym.rdbg_read @ 0x08001414 (size 784) =====

int64_t sym.rdbg_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    ulong uVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    puVar12 = *(arg1 + 0xd8);
    if (puVar12 == NULL) {
        _printk(0x80003e0);
        iVar6 = -0x16;
        goto code_r0x08001694;
    }
    iVar6 = wait_for_completion_interruptible(puVar12 + 1);
    if (iVar6 != 0) {
        _dev_err(*puVar12,"%s: Error in wait\n","rdbg_read");
        goto code_r0x08001694;
    }
    if (((*(puVar12 + 0x22) == 2) && (*puVar12[0x1a] == -0xff00ff)) && (*puVar12[0x19] == '\x01')) {
        iVar6 = puVar12[0x1a][1];
        if (*(puVar12[0x1b] + 4) != iVar6) {
            *(puVar12[0x1b] + 4) = iVar6;
            if (*(puVar12 + 0x1d) != 0) {
                uVar10 = 0;
                iVar11 = 0x10;
                do {
                    uVar10 = uVar10 + 1;
                    *(puVar12[0x1b] + iVar11) = 0xffff;
                    iVar11 = iVar11 + 4;
                } while (uVar10 < *(puVar12 + 0x1d));
            }
            *(puVar12[0x1b] + 8) = 0;
            *(puVar12[0x1b] + 0xc) = 0;
            if (*(puVar12 + 0x18) == 1) {
                mutex_lock(puVar12[0x14]);
                if (*(puVar12[0x10] + 4) != iVar6) {
                    *(puVar12[0x10] + 4) = iVar6;
                    if (*(puVar12 + 0x13) != 0) {
                        uVar10 = 0;
                        iVar11 = 0x10;
                        do {
                            uVar10 = uVar10 + 1;
                            *(puVar12[0x10] + iVar11) = 0xffff;
                            iVar11 = iVar11 + 4;
                        } while (uVar10 < *(puVar12 + 0x13));
                    }
                    if (puVar12[0x17] != 0) {
                        memset(puVar12[0x17],0,*(puVar12 + 0xb4) + 1);
                        *(puVar12 + 0x16) = 0;
                    }
                    *(puVar12[0x10] + 8) = 0;
                    *(puVar12[0x10] + 0xc) = 0;
                }
                mutex_unlock(puVar12[0x14]);
            }
        }
    }
    piVar2 = puVar12[0x1a];
    if ((*puVar12[0x19] == '\x01') || (*piVar2 == -0xff00ff)) {
        uVar3 = *(puVar12[0x1b] + 8);
        if (uVar3 == piVar2[2]) goto code_r0x080016b4;
        uVar4 = *(puVar12 + 0x1d);
        if (uVar4 <= *(piVar2 + uVar3 + 4)) goto code_r0x080016b4;
        uVar5 = 0;
        if (uVar4 != 0) {
            uVar5 = (uVar3 + 1) / uVar4;
        }
        *(puVar12[0x1b] + 8) = (uVar3 + 1) - uVar5 * uVar4;
        DataSynchronizationBarrier(3,1,0);
        uVar10 = *(piVar2 + uVar3 * 4 + 0x12) * 0x80;
        iVar11 = puVar12[0x1c] + *(piVar2 + uVar3 + 4) * 0x80;
        if (uVar10 < arg3 || uVar10 - arg3 == 0) {
            arg3 = uVar10;
        }
        noname_1 = __check_object_size(iVar11,arg3,1);
        uVar7 = sym._copy_to_user(arg2,noname_1,arg3);
        if (uVar7 == 0) {
            if (puVar12[0x1e] != 0) {
                mutex_lock();
            }
            if ((*puVar12[0x19] == '\x01') || (*puVar12[0x1a] == -0xff00ff)) {
                iVar11 = iVar11 - puVar12[0x1c];
                iVar1 = iVar11 + 0x7f;
                if (-1 < iVar11) {
                    iVar1 = iVar11;
                }
                if (iVar1 >> 7 < *(puVar12 + 0x1d)) {
                    iVar11 = puVar12[0x1b] + *(puVar12[0x1b] + 0xc) * 4;
                    *(iVar11 + 0x10) = iVar1 >> 7;
                    *(iVar11 + 0x12) = 0;
                    uVar4 = *(puVar12 + 0x1d);
                    uVar3 = *(puVar12[0x1b] + 0xc) + 1;
                    uVar5 = 0;
                    if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                    }
                    *(puVar12[0x1b] + 0xc) = uVar3 - uVar5 * uVar4;
                }
            }
            if (puVar12[0x1e] != 0) {
                mutex_unlock();
            }
            iVar6 = arg3;
            goto code_r0x08001694;
        }
        uVar8 = *puVar12;
        pcVar9 = "%s: Error in copy_to_user(). Err code = %d\n";
    }
    else {
code_r0x080016b4:
        uVar8 = *puVar12;
        pcVar9 = "%s: Error in smq_recv(). Err code = %d\n";
        uVar7 = 0;
    }
    _dev_err(uVar8,pcVar9,"rdbg_read",uVar7);
    iVar6 = -0x3d;
code_r0x08001694:
    return iVar6;
}


// ===== sym.rdbg_write @ 0x08001724 (size 932) =====

int64_t sym.rdbg_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int *piVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    int64_t arg3_00;
    int iVar18;
    int64_t iVar19;
    uint32_t uVar20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar19 = *(arg1 + 0xd8);
    if (iVar19 == 0) {
        _printk(0x80003e0);
        arg3_00 = -0x16;
    }
    else {
        iVar18 = arg3;
        uVar1 = iVar18 + 0x7f;
        arg3_00 = iVar18;
        uVar2 = uVar1 & 0xffffff80 | 0x7f;
        if (-1 < (uVar1 & 0xffffff80)) {
            uVar2 = uVar1 & 0xffffff80;
        }
        uVar2 = uVar2 >> 7;
        uVar20 = 0;
        do {
            mutex_lock(*(iVar19 + 0xa0));
            piVar15 = *(iVar19 + 0x88);
            if (((*piVar15 == -0xff00fe) && (*(*(iVar19 + 0x78) + 1) == '\x01')) &&
               (iVar11 = *(iVar19 + 0x80), *(iVar11 + 4) == piVar15[1])) {
                while( true ) {
                    uVar13 = *(iVar11 + 0xc);
                    if (uVar13 == piVar15[3]) break;
                    uVar14 = *(iVar19 + 0x98);
                    if (uVar14 <= *(piVar15 + uVar13 + 4)) goto code_r0x080019ac;
                    uVar10 = 0;
                    if (uVar14 != 0) {
                        uVar10 = (uVar13 + 1) / uVar14;
                    }
                    *(iVar11 + 0xc) = (uVar13 + 1) - uVar10 * uVar14;
                    uVar4 = *(piVar15 + uVar13 + 4);
                    uVar13 = *(*(iVar19 + 0xb8) + uVar4);
                    if (uVar13 != 0) {
                        iVar8 = uVar13 - 1;
                        *(*(iVar19 + 0xb8) + uVar4) = 0;
                        if (iVar8 != 0) {
                            uVar13 = uVar4;
                            do {
                                uVar13 = uVar13 + 1;
                                iVar8 = iVar8 + -1;
                                *(*(iVar19 + 0xb8) + uVar13) = 0;
                            } while (iVar8 != 0);
                        }
                    }
                    DataSynchronizationBarrier(3,1,0);
                    iVar11 = *(iVar19 + 0x80);
                    piVar15 = *(iVar19 + 0x88);
                }
            }
            uVar13 = *(iVar19 + 0xb0);
            uVar12 = uVar13;
            if ((uVar1 & 0xffffff80) == 0x80) {
                do {
                    uVar14 = uVar12;
                    if (*(*(iVar19 + 0xb8) + uVar12) == '\0') {
                        *(*(iVar19 + 0xb8) + uVar12) = 1;
                        uVar10 = *(iVar19 + 0xb4);
                        uVar13 = *(iVar19 + 0xb0) + 1;
                        uVar16 = 0;
                        if (uVar10 != 0) {
                            uVar16 = uVar13 / uVar10;
                        }
                        iVar8 = uVar13 - uVar16 * uVar10;
                        goto code_r0x0800193c;
                    }
                    uVar10 = *(iVar19 + 0xb4);
                    uVar16 = 0;
                    if (uVar10 != 0) {
                        uVar16 = (uVar14 + 1) / uVar10;
                    }
                    uVar14 = (uVar14 + 1) - uVar16 * uVar10;
                    uVar12 = uVar14;
                    *(iVar19 + 0xb0) = uVar14;
                } while (uVar13 != uVar14);
            }
            else {
                uVar13 = *(iVar19 + 0xb4);
                uVar16 = 0;
                iVar11 = *(iVar19 + 0xb8);
                uVar17 = uVar12;
                uVar10 = uVar13;
                do {
                    uVar9 = uVar12;
                    if (*(iVar11 + uVar12) == 0) {
                        uVar14 = uVar9;
                        if (uVar10 <= uVar9) {
                            uVar14 = uVar17;
                        }
                        uVar17 = uVar14;
                        uVar3 = 1;
                        uVar14 = uVar9;
                        if (uVar10 <= uVar9) {
                            uVar3 = uVar16 + 1;
                            uVar14 = uVar10;
                        }
                        uVar16 = uVar3;
                        if (uVar3 != uVar2) goto code_r0x080018a4;
                        if ((uVar1 | 0x7f) < 0xff) {
                            uVar13 = 0;
                        }
                        else {
                            uVar12 = uVar2;
                            if (uVar9 <= uVar10) {
                                uVar10 = uVar9;
                            }
                            do {
                                *(iVar11 + uVar10) = uVar12;
                                uVar12 = uVar12 - 1;
                                iVar11 = *(iVar19 + 0xb8);
                                uVar10 = uVar10 + 1;
                            } while (uVar12 != 0);
                            uVar9 = *(iVar19 + 0xb0);
                            uVar13 = *(iVar11 + uVar9);
                        }
                        iVar8 = uVar13 + uVar9 + -1;
code_r0x0800193c:
                        *(iVar19 + 0xb0) = iVar8;
                        iVar11 = *(iVar19 + 0x90) + (uVar14 << 7);
                        if (iVar18 < 0) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x80019d8);
                            (*pcVar6)();
                        }
                        __check_object_size(iVar11,arg3_00,0);
                        iVar8 = sym._copy_from_user(iVar11,arg2,arg3_00);
                        if (iVar8 != 0) {
                            if (iVar11 != 0) {
                                uVar13 = *(*(iVar19 + 0xb8) + uVar14);
                                if (uVar13 != 0) {
                                    *(*(iVar19 + 0xb8) + uVar14) = 0;
                                    while (uVar13 = uVar13 - 1, uVar13 != 0) {
                                        uVar14 = uVar14 + 1;
                                        *(*(iVar19 + 0xb8) + uVar14) = 0;
                                    }
                                }
                            }
                            break;
                        }
                        *(*(iVar19 + 0x80) + *(*(iVar19 + 0x80) + 8) * 4 + 0x10) = uVar14;
                        bVar5 = true;
                        *(*(iVar19 + 0x80) + *(*(iVar19 + 0x80) + 8) * 4 + 0x12) = uVar2;
                        uVar14 = *(iVar19 + 0x98);
                        uVar13 = *(*(iVar19 + 0x80) + 8) + 1;
                        uVar10 = 0;
                        if (uVar14 != 0) {
                            uVar10 = uVar13 / uVar14;
                        }
                        *(*(iVar19 + 0x80) + 8) = uVar13 - uVar10 * uVar14;
                        goto code_r0x080019b0;
                    }
                    uVar16 = 0;
                    uVar9 = (uVar9 + *(iVar11 + uVar12)) - 1;
                    uVar14 = uVar13;
code_r0x080018a4:
                    uVar10 = uVar14;
                    uVar14 = 0;
                    if (uVar13 != 0) {
                        uVar14 = (uVar9 + 1) / uVar13;
                    }
                    uVar14 = (uVar9 + 1) - uVar14 * uVar13;
                    uVar12 = uVar14;
                    *(iVar19 + 0xb0) = uVar14;
                } while (uVar17 != uVar14);
            }
code_r0x080019ac:
            bVar5 = false;
code_r0x080019b0:
            mutex_unlock(*(iVar19 + 0xa0));
        } while ((!bVar5) && (bVar7 = uVar20 < 0x14, uVar20 = uVar20 + 1, bVar7));
        if (bVar5) {
            uVar1 = *(iVar19 + 0x5c);
            if (0x1f < uVar1) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8001ac8);
                (*pcVar6)();
            }
            iVar11 = 1L << (*(iVar19 + 0x48) + uVar1 & 0x3f);
            uVar2 = *(obj.g_rdbg_instance + uVar1 * 4) ^ iVar11;
            qcom_smem_state_update_bits(*(iVar19 + 0x50),iVar11,uVar2);
            *(obj.g_rdbg_instance + uVar1 * 4) = uVar2;
            *(iVar19 + 0x5c) = uVar1 + 1 & 0x1f;
        }
        else {
            _printk(0x80005a2);
            arg3_00 = -0x46;
        }
    }
    return arg3_00;
}


// ===== sym.rdbg_open @ 0x08001ac8 (size 1700) =====

uint64_t sym.rdbg_open(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    int *piVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int *piVar16;
    int64_t *piVar17;
    uchar *puVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = _segment.ehdr;
    if ((arg1 == 0) || (_segment.ehdr == 0)) {
        _printk(0x80004a0);
        uVar2 = 0xffffffed;
        goto code_r0x08002114;
    }
    uVar14 = *(arg1 + 0x4c) & 0xfffff;
    puVar13 = _segment.ehdr + uVar14 * 0x148;
    if (*(puVar13 + 0xc) != '\0') {
        _dev_err(*puVar13,"%s: Device already opened\n","rdbg_open");
        uVar2 = 0xffffffef;
        goto code_r0x08002114;
    }
    if (0xf < uVar14) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8002168);
        (*pcVar1)();
    }
    if (0x170 < uVar14 * 0x18) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(1,0x800216c);
        (*pcVar1)();
    }
    uVar5 = *(uVar14 * 0x18 + 0x8000d88);
    puVar12 = _segment.ehdr + uVar14 * 0x148 + 0x70;
    *puVar12 = uVar5;
    if (uVar5 == 0) {
        _dev_err(*puVar13,"%s: smem not initialized\n","rdbg_open");
        uVar2 = 0xfffffff4;
        goto code_r0x08002114;
    }
    iVar3 = qcom_smem_get(0xffffffff,*(uVar14 * 0x18 + 0x8000d80),puVar12);
    piVar17 = iVar10 + uVar14 * 0x148 + 0x68;
    *piVar17 = iVar3;
    if (iVar3 == 0) {
        uVar14 = _dev_err(*puVar13,"%s: Could not allocate smem memory\n","rdbg_open");
        return uVar14;
    }
    uVar5 = iVar3 + 9U & 0xfffffffffffffff8;
    uVar8 = (((iVar3 - uVar5) + (*puVar12 >> 1)) - 0x20U) / 0x88;
    iVar7 = uVar8;
    if (0 < iVar7) {
        if (*(uVar5 + (iVar7 << 7) + ((uVar8 << 0x20) >> 0x1e) + 0x10) == -0xff00fe) {
            iVar3 = iVar10 + uVar14 * 0x148;
            *(iVar3 + 8) = 0;
            __init_swait_queue_head(iVar3 + 0x10,"&x->wait",obj.rdbg_init.__key);
            uVar2 = request_threaded_irq
                              (*(iVar3 + 0x2c),0,sym.on_interrupt_from.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt,0x2003
                               ,*(obj.proc_info + uVar14 * 0x18),_segment.ehdr + uVar14 * 0x148);
            if (uVar2 != 0) {
                _dev_err(*puVar13,"%s: Failed to register interrupt.Err=%d,irqid=%d.\n","rdbg_open",uVar2,
                         *(iVar3 + 0x2c));
                _printk(0x800061d,uVar2);
                goto code_r0x08002114;
            }
            iVar3 = iVar10 + uVar14 * 0x148;
            __mutex_init(iVar3 + 0x118,"&rdbgdata->write_mutex",obj.rdbg_init.__key);
            piVar16 = iVar3 + 0xa8;
            if (*piVar16 == -0xff0100) {
code_r0x08001f10:
                pcVar4 = "%s: smq producer allocation failed\n";
            }
            else {
                puVar18 = *piVar17;
                pcVar4 = "%s: smq producer allocation failed\n";
                if (puVar18 != NULL) {
                    uVar5 = *puVar12;
                    iVar7 = uVar5 >> 1;
                    if (iVar7 != 0) {
                        uVar8 = puVar18 + 9 & 0xfffffffffffffff8;
                        uVar11 = (((iVar7 + puVar18) - uVar8) - 0x20U) / 0x88;
                        uVar2 = uVar11;
                        *(iVar10 + uVar14 * 0x148 + 0xa0) = iVar3 + 0x118;
                        *(iVar3 + 0x78) = puVar18;
                        if (0 < uVar2) {
                            iVar15 = iVar10 + uVar14 * 0x148;
                            iVar3 = uVar8 + (uVar2 << 7);
                            piVar17 = iVar15 + 0x80;
                            *piVar17 = iVar3;
                            *(iVar15 + 0x88) = iVar3 + ((uVar11 << 0x20) >> 0x1e) + 0x10;
                            *(iVar15 + 0x90) = uVar8;
                            *(iVar15 + 0xc0) = 1;
                            puVar9 = iVar15 + 0x98;
                            *puVar9 = uVar2;
                            *puVar18 = 1;
                            if (*puVar9 != 0) {
                                uVar8 = 0;
                                iVar3 = 0x10;
                                do {
                                    uVar8 = uVar8 + 1;
                                    *(*piVar17 + iVar3) = 0xffff;
                                    iVar3 = iVar3 + 4;
                                    uVar2 = *puVar9;
                                    uVar11 = uVar2;
                                } while (uVar8 < uVar11);
                                if (1 < uVar2) {
                                    iVar3 = __kmalloc(uVar11,0xdc0);
                                    *(iVar10 + uVar14 * 0x148 + 0xb8) = iVar3;
                                    if (iVar3 != 0) {
                                        iVar15 = iVar10 + uVar14 * 0x148;
                                        *(iVar15 + 0xb4) = uVar2 - 1;
                                        memset(iVar3,0,uVar11);
                                        iVar3 = *piVar17;
                                        *(iVar15 + 0xb0) = 0;
                                        *(iVar3 + 8) = 0;
                                        *(*piVar17 + 0xc) = 0;
                                        piVar6 = *piVar17;
                                        if (*piVar6 == -0xff00ff) {
                                            piVar6[1] = piVar6[1] + 1;
                                        }
                                        else {
                                            piVar6[1] = 1;
                                            **piVar17 = 0xff00ff01;
                                        }
                                        iVar3 = iVar10 + uVar14 * 0x148;
                                        *piVar16 = -0xff0100;
                                        piVar6 = iVar3 + 0xf8;
                                        if (*piVar6 == -0xff0100) {
                                            pcVar4 = "%s: smq consumer allocation failed\n";
                                        }
                                        else {
                                            puVar18 = puVar18 + (uVar5 >> 1);
                                            pcVar4 = "%s: smq consumer allocation failed\n";
                                            if ((puVar18 != NULL) && (iVar7 = *puVar12 >> 1, iVar7 != 0)) {
                                                uVar5 = puVar18 + 9 & 0xfffffffffffffff8;
                                                uVar8 = (((puVar18 - uVar5) + iVar7) - 0x20U) / 0x88;
                                                uVar2 = uVar8;
                                                *(iVar3 + 200) = puVar18;
                                                if (0 < uVar2) {
                                                    iVar3 = uVar5 + (uVar2 << 7);
                                                    iVar10 = iVar10 + uVar14 * 0x148;
                                                    piVar17 = iVar10 + 0xd8;
                                                    *piVar17 = iVar3 + ((uVar8 << 0x20) >> 0x1e) + 0x10;
                                                    *(iVar10 + 0xe0) = uVar5;
                                                    *(iVar10 + 0x110) = 2;
                                                    puVar9 = iVar10 + 0xe8;
                                                    *puVar9 = uVar2;
                                                    *(iVar10 + 0xd0) = iVar3;
                                                    puVar18[1] = 1;
                                                    if (*puVar9 != 0) {
                                                        uVar14 = 0;
                                                        iVar3 = 0x10;
                                                        do {
                                                            uVar14 = uVar14 + 1;
                                                            *(*piVar17 + iVar3) = 0xffff;
                                                            iVar3 = iVar3 + 4;
                                                        } while (uVar14 < *puVar9);
                                                    }
                                                    iVar7 = 0;
                                                    *(*piVar17 + 8) = 0;
                                                    *(*piVar17 + 0xc) = 0;
                                                    piVar16 = *(iVar10 + 0xd0);
                                                    if (*piVar16 == -0xff00ff) {
                                                        iVar7 = piVar16[1];
                                                    }
                                                    uVar2 = 0;
                                                    *(*piVar17 + 4) = iVar7;
                                                    **piVar17 = 0xff00ff02;
                                                    *piVar6 = -0xff0100;
                                                    *(puVar13 + 0xc) = '\x01';
                                                    *(arg2 + 0xd8) = puVar13;
                                                    goto code_r0x08002114;
                                                }
                                                pcVar4 = "%s: smq consumer allocation failed\n";
                                            }
                                        }
                                        goto code_r0x08001f18;
                                    }
                                }
                            }
                        }
                        goto code_r0x08001f10;
                    }
                }
            }
code_r0x08001f18:
            _dev_err(*puVar13,pcVar4,"initialize_smq");
            _dev_err(*puVar13,"Error initializing smq. Err=%d\n",0xfffffff4);
            _printk(0x80007b8,0xfffffff4);
            if (*piVar16 == -0xff0100) {
                iVar7 = *(iVar10 + uVar14 * 0x148 + 0xc0);
                if (iVar7 == 2) {
                    **(iVar10 + uVar14 * 0x148 + 0x88) = 0;
                }
                else if (iVar7 == 1) {
                    iVar3 = iVar10 + uVar14 * 0x148;
                    **(iVar3 + 0x80) = 0;
                    kfree(*(iVar3 + 0xb8));
                    *(iVar3 + 0xb8) = 0;
                }
                *piVar16 = 0;
            }
            piVar16 = iVar10 + uVar14 * 0x148 + 0xf8;
            if (*piVar16 == -0xff0100) {
                iVar7 = *(iVar10 + uVar14 * 0x148 + 0x110);
                if (iVar7 == 2) {
                    **(iVar10 + uVar14 * 0x148 + 0xd8) = 0;
                }
                else if (iVar7 == 1) {
                    iVar10 = iVar10 + uVar14 * 0x148;
                    **(iVar10 + 0xd0) = 0;
                    kfree(*(iVar10 + 0x108));
                    *(iVar10 + 0x108) = 0;
                }
                uVar2 = 0xfffffff4;
                *piVar16 = 0;
            }
            else {
                uVar2 = 0xfffffff4;
            }
            goto code_r0x08002114;
        }
        _printk(0x80004d7,"check_subsystem_debug_enabled");
    }
    _dev_err(*puVar13,"%s: Subsystem %s is not debug enabled\n","rdbg_open",*(obj.proc_info + uVar14 * 0x18));
    _printk(0x80005f5);
    uVar2 = 0xffffffba;
code_r0x08002114:
    return uVar2;
}


// ===== sym.rdbg_release @ 0x0800216c (size 360) =====

ulong sym.rdbg_release(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = _segment.ehdr;
    if ((arg1 == 0) || (_segment.ehdr == 0)) {
        _printk(0x80004a0);
        uVar2 = 0xffffffed;
    }
    else {
        uVar4 = *(arg1 + 0x4c) & 0xfffff;
        pcVar3 = _segment.ehdr + uVar4 * 0x148 + 0x60;
        if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            complete(iVar6 + uVar4 * 0x148 + 8);
            piVar5 = _segment.ehdr + uVar4 * 0x148 + 0xa8;
            if (*piVar5 == -0xff0100) {
                iVar1 = *(_segment.ehdr + uVar4 * 0x148 + 0xc0);
                if (iVar1 == 2) {
                    **(_segment.ehdr + uVar4 * 0x148 + 0x88) = 0;
                }
                else if (iVar1 == 1) {
                    iVar6 = _segment.ehdr + uVar4 * 0x148;
                    **(iVar6 + 0x80) = 0;
                    kfree(*(iVar6 + 0xb8));
                    *(iVar6 + 0xb8) = 0;
                }
                *piVar5 = 0;
            }
            piVar5 = _segment.ehdr + uVar4 * 0x148 + 0xf8;
            if (*piVar5 == -0xff0100) {
                iVar1 = *(_segment.ehdr + uVar4 * 0x148 + 0x110);
                if (iVar1 == 2) {
                    **(_segment.ehdr + uVar4 * 0x148 + 0xd8) = 0;
                }
                else if (iVar1 == 1) {
                    iVar6 = _segment.ehdr + uVar4 * 0x148;
                    **(iVar6 + 0xd0) = 0;
                    kfree(*(iVar6 + 0x108));
                    *(iVar6 + 0x108) = 0;
                }
                *piVar5 = 0;
            }
        }
        uVar2 = 0;
        *(arg2 + 0xd8) = 0;
    }
    return uVar2;
}


// ===== sym._copy_to_user @ 0x080022d4 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_android_kmalloc_64_create >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_android_kmalloc_64_create >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym._copy_from_user @ 0x08002448 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_android_kmalloc_64_create >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_android_kmalloc_64_create >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.on_interrupt_from @ 0x080025fc (size 44) =====

ulong sym.on_interrupt_from(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    complete(arg1 + 8);
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08002628 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800266c

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
    //switch table (4 cases) at 0x8000864
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002680);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002684 (size 724) =====

uint64_t sym.init_module(void)

{
    bool bVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr - 0x11U < 0xfffffff0) {
        _printk(0x80005d8);
        uVar8 = 0xffffffdf;
    }
    else {
        _segment.ehdr = __kmalloc((_segment.ehdr & 0xffffffff) * 0x148,0xdc0);
        if (_segment.ehdr == 0) {
            uVar8 = 0xfffffff4;
        }
        else {
            uVar5 = __platform_driver_register
                              (reloc.rdbg_probe.8d3902c2ff21bfc18c160d852d698f3a.cfi_jt,obj.__this_module);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 == 0) {
                uVar3 = alloc_chrdev_region(0x8000278,0,*0x800027c,"rdbgctl");
                if (uVar3 == 0) {
                    uVar3 = *0x8000278 & 0xfff00000;
                    cdev_init(obj.g_rdbg_instance,obj.rdbg_fops);
                    *0x8000248 = obj.__this_module;
                    uVar4 = cdev_add(obj.g_rdbg_instance,uVar3,*0x800027c);
                    if (uVar4 == 0) {
                        uVar8 = __class_create(obj.__this_module,"rdbg",obj.rdbg_init.__key);
                        _segment.ehdr = uVar8;
                        if (uVar8 < 0xfffffffffffff001) {
                            _segment.ehdr = uVar8;
                            uVar8 = uVar8 & 0xffffffff;
                            bVar1 = 0 < _segment.ehdr;
                            if (bVar1) {
                                iVar10 = 0;
                                uVar5 = 0;
                                iVar11 = 0;
                                pcVar2 = obj.proc_info;
                                do {
                                    if (uVar5 == 0x10) {
    //WARNING: Does not return
                                        pcVar2 = SoftwareBreakpoint(0x5512,0x8002958);
                                        (*pcVar2)();
                                    }
                                    if (*pcVar2 != 0) {
                                        uVar6 = device_create(*0x8000270,0,uVar3 | uVar5,0,0x800047a);
                                        *(*0x8000280 + iVar10) = uVar6;
                                        uVar8 = *(*0x8000280 + iVar10);
                                        if (0xfffffffffffff000 < uVar8) {
                                            _printk(0x80006a2);
                                            uVar7 = _segment.ehdr;
                                            if (uVar5 != 0) {
                                                do {
                                                    uVar9 = uVar5 - 1;
                                                    if (*(uVar7 + (uVar9 & 0xffffffff) * 0x148 + 0x58) != '\0') {
                                                        device_destroy(*0x8000270,*0x8000278 & 0xfff00000 | uVar5 - 1U)
                                                        ;
                                                        uVar7 = *0x8000280;
                                                    }
                                                    uVar5 = uVar9;
                                                } while (1 < uVar9 + 1);
                                            }
                                            goto code_r0x08002884;
                                        }
                                        iVar11 = iVar11 + 1;
                                        *(*0x8000280 + iVar10 + 0x58) = 1;
                                        uVar8 = _segment.ehdr & 0xffffffff;
                                    }
                                    uVar5 = uVar5 + 1;
                                    pcVar2 = pcVar2 + 0x18;
                                    iVar10 = iVar10 + 0x148;
                                } while (uVar5 < uVar8);
                                if (iVar11 != 0) {
                                    uVar8 = 0;
                                    goto code_r0x08002828;
                                }
                            }
                            _printk(0x80007e5);
                            uVar8 = 0xffffffea;
code_r0x08002884:
                            class_destroy(_segment.ehdr);
                        }
                        else {
                            _printk(0x8000589);
                        }
                        cdev_del(obj.g_rdbg_instance);
                    }
                    else {
                        uVar8 = uVar4;
                        _printk(0x800055f);
                    }
                    unregister_chrdev_region(*0x8000278,*0x800027c);
                }
                else {
                    uVar8 = uVar3;
                    _printk(0x8000726);
                }
                kfree(_segment.ehdr);
            }
        }
    }
code_r0x08002828:
    return uVar8 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08002958 (size 184) =====

void sym.cleanup_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = 0;
        iVar4 = 0x58;
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        iVar1 = _segment.ehdr;
        do {
            if (*(iVar2 + iVar4) != '\0') {
                device_destroy(*0x8000270,*0x8000278 & 0xfff00000 | iVar3);
                iVar2 = *0x8000280;
                iVar1 = *0x800027c;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x148;
        } while (iVar3 < iVar1);
    }
    class_destroy(*0x8000270);
    cdev_del(obj.g_rdbg_instance);
    unregister_chrdev_region(*0x8000278,1);
    kfree(*0x8000280);
    return;
}

