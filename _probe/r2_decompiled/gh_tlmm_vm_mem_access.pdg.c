// decompiled from gh_tlmm_vm_mem_access by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x080018b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001120 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001870;
        }
        if (arg1 != -0x28435526f878bffb) goto code_r0x08001870;
        pcVar2 = sym.gh_tlmm_vm_mem_on_release_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.gh_guest_memshare_nb_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001870;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001870:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018c4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.gh_tlmm_vm_mem_on_release_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt @ 0x08001110 (size 8) =====

void sym.gh_tlmm_vm_mem_on_release_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt
               (int param_1,int64_t param_2,int64_t param_3,int *param_4)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0x51100012) {
        if (param_1 == 3) {
            if ((param_3 == 0) || (param_4 == NULL)) {
                pcVar2 = "Invalid data or notification message\n";
            }
            else {
                iVar1 = *param_4;
                if (iVar1 == *(param_3 + 0x1c)) {
                    if (iVar1 != 0) {
                        iVar1 = gh_rm_mem_reclaim(iVar1,0);
                        if (iVar1 != 0) {
                            _dev_err(_segment.ehdr,"VM mem reclaim failed rc:%d\n",iVar1);
                        }
                        *(param_3 + 0x1c) = 0;
                        return;
                    }
                    pcVar2 = "Invalid memory handle\n";
                }
                else {
                    pcVar2 = "Invalid mem handle detected\n";
                }
            }
        }
        else {
            pcVar2 = "Invalid tag\n";
        }
    }
    else {
        pcVar2 = "Invalid notification type\n";
    }
    _dev_err(_segment.ehdr,pcVar2);
    return;
}


// ===== sym.gh_guest_memshare_nb_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt @ 0x08001118 (size 8) =====

uchar * sym.gh_guest_memshare_nb_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt
                  (ulong param_1,int64_t param_2,int16_t *param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    code *pcVar6;
    int iVar7;
    uint *puVar8;
    ushort *puVar9;
    uchar *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar13 [16];
    int16_t aiStack_38 [2];
    uint32_t uStack_34;
    ushort auStack_30 [2];
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar3 = param_3[2];
    aiStack_38[0] = 0;
    if (((param_2 != 0x56100008) || (gh_rm_get_vmid(2,aiStack_38), aiStack_38[0] != *param_3)) || (iVar3 != '\x02'))
    goto code_r0x0800181c;
    uStack_34 = 0;
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    gh_rm_get_vmid(2,auStack_2c);
    gh_rm_get_vmid(1,auStack_30);
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
    if (puVar8 == NULL) {
        puVar8 = 0xc;
    }
    else {
        *puVar8 = 2;
        *(puVar8 + 1) = auStack_2c[0];
        *(puVar8 + 6) = 4;
        *(puVar8 + 2) = auStack_30[0];
        *(puVar8 + 10) = 6;
        if (0xfffffffffffff000 < puVar8) {
            _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to get acl of IO memories for TLMM\n");
            goto code_r0x0800181c;
        }
    }
    puVar9 = __kmalloc(_segment.ehdr << 4 | 4,0xdc0);
    uVar5 = *0x8000078;
    if (puVar9 == NULL) {
        puVar9 = 0xc;
code_r0x080017dc:
        iVar7 = gh_rm_mem_share(1,0,8,puVar8,puVar9,0,&uStack_34);
        if (iVar7 == 0) {
            _segment.ehdr = uStack_34;
        }
        else {
            _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to share IO memories for TLMM rc:%d\n",iVar7);
        }
        kfree(puVar9);
    }
    else {
        *puVar9 = *0x8000078;
        iVar4 = *0x8000070;
        iVar2 = *0x8000068;
        if (uVar5 != 0) {
            uVar11 = 0;
            do {
                uVar12 = -(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
                iVar7 = uVar11;
                uVar1 = iVar7 + 1;
                uVar11 = uVar1;
                *(puVar9 + iVar7 * 8 + 2) = *(iVar2 + uVar12);
                *(puVar9 + iVar7 * 8 + 2 + 8) = *(iVar4 + uVar12);
            } while (uVar5 != uVar1);
        }
        if (puVar9 < 0xfffffffffffff001) goto code_r0x080017dc;
        _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to get sgl of IO memories for TLMM\n");
    }
    kfree(puVar8);
code_r0x0800181c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar13 = __stack_chk_fail();
        puVar10 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar10 != NULL) {
            switch(*puVar10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar10,auVar13._8_8_,0);
                break;
            default:
                return puVar10;
            }
        }
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5502,0x80018c4);
        (*pcVar6)();
    }
    return NULL;
}


// ===== sym.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ushort auStack_64 [2];
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    _segment.ehdr = param_1 + 0x10;
    uVar6 = *(param_1 + 0x300);
    uStack_60 = 0;
    auStack_64[0] = 0;
    uStack_5c = 0;
    iVar3 = of_find_property(uVar6,"qcom,master",0);
    if (iVar3 == 0) {
        iVar1 = of_property_read_u32_index(uVar6,"qcom,rm-mem-handle",1,&uStack_5c);
        if (iVar1 == 0) {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            goto code_r0x080011bc;
        }
        _dev_err(_segment.ehdr,"Failed to receive mem handle rc:%d\n",iVar1);
code_r0x0800143c:
        _dev_err(_segment.ehdr,"Failed to populate TLMM VM info\n");
    }
    else {
code_r0x080011bc:
        _segment.ehdr = CONCAT44(*0x8000004,2);
        uVar2 = of_count_phandle_with_args(uVar6,"tlmm-vm-gpio-list","#gpio-cells");
        if (uVar2 < 0) {
            _dev_err(_segment.ehdr,"Invalid number of gpios specified\n");
            goto code_r0x0800143c;
        }
        iVar5 = uVar2 * 4;
        iVar3 = __kmalloc(iVar5,0xcc0);
        if (iVar3 == 0) goto code_r0x0800143c;
        if (uVar2 != 0) {
            uVar8 = 0;
            do {
                iVar1 = of_get_named_gpio_flags(uVar6,"tlmm-vm-gpio-list",uVar8 & 0xffffffff,0);
                if (iVar1 < 0) {
                    _dev_err(_segment.ehdr,"Failed to receive shared gpios %d\n");
                    goto code_r0x08001434;
                }
                *(iVar3 + uVar8 * 4) = iVar1;
                uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
        }
        *0x8000078 = uVar2;
        *0x8000068 = __kmalloc(iVar5,0xdc0);
        if (*0x8000068 == 0) {
code_r0x08001434:
            kfree(iVar3);
            goto code_r0x0800143c;
        }
        _segment.ehdr = __kmalloc(iVar5,0xdc0);
        if (_segment.ehdr == 0) {
code_r0x08001428:
            kfree(_segment.ehdr);
            goto code_r0x08001434;
        }
        piVar4 = kmem_cache_alloc_trace(_of_find_property,0xdc0,0x60);
        if (uVar2 != 0) {
            iVar7 = 0;
            do {
                uVar8 = msm_gpio_get_pin_address(*(iVar3 + iVar7),piVar4);
                if ((uVar8 & 1) == 0) {
                    _dev_err(_segment.ehdr,"Invalid gpio\n");
                    kfree(piVar4);
                    kfree(_segment.ehdr);
                    goto code_r0x08001428;
                }
                *(*0x8000068 + iVar7) = *piVar4;
                *(*0x8000070 + iVar7) = (piVar4[2] - *piVar4) + 1;
                iVar7 = iVar7 + 4;
            } while (iVar5 - iVar7 != 0);
        }
        kfree(iVar3);
        kfree(piVar4);
        uVar8 = of_find_compatible_node(0,0,"qcom,gunyah-vm-id-1.0");
        if (((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) &&
           ((uVar8 = of_find_compatible_node(0,0,"qcom,haven-vm-id-1.0"), uVar8 == 0 || (0xfffffffffffff000 < uVar8))
           )) {
            _dev_err(_segment.ehdr,"Could not find vm-id node\n");
            uVar6 = 0xffffffed;
            goto code_r0x08001450;
        }
        iVar1 = of_property_read_variable_u32_array(uVar8,"qcom,owner-vmid",&uStack_60,1,0);
        if (-1 < iVar1) {
            uVar6 = gh_rm_get_vmid(2,auStack_64);
            if (uVar6 != 0) goto code_r0x08001450;
            if (_segment.ehdr == 0) {
                _dev_err(_segment.ehdr,"Invalid memory handle\n");
            }
            else {
                iVar1 = gh_rm_mem_release(_segment.ehdr & 0xffffffff,0);
                if (iVar1 != 0) {
                    _dev_err(_segment.ehdr,"VM mem release failed rc:%d\n",iVar1);
                }
                iVar1 = gh_rm_mem_notify(_segment.ehdr & 0xffffffff,2,3,0);
                if (iVar1 != 0) {
                    _dev_err(_segment.ehdr,"Failed to notify mem release to PVM rc:%d\n",iVar1);
                }
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
code_r0x080013d8:
            uVar6 = 0;
            goto code_r0x08001450;
        }
        uVar8 = gh_mem_notifier_register
                          (3,sym.gh_tlmm_vm_mem_on_release_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt,
                           reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
        if (uVar8 < 0xfffffffffffff001) {
            *0x8000058 = 0x7fffffff;
            _reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt =
                 sym.gh_guest_memshare_nb_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt;
            *0x8000080 = uVar8;
            uVar6 = gh_rm_register_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
            if (uVar6 != 0) goto code_r0x08001450;
            goto code_r0x080013d8;
        }
        _dev_err(_segment.ehdr,"Failed to register on release notifier%d\n");
    }
    uVar6 = 0xffffffea;
code_r0x08001450:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    iVar3 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.gh_tlmm_vm_mem_access_remove;
    iVar3 = of_find_property(*(iVar3 + 0x300),"qcom,master",0);
    if (iVar3 != 0) {
        gh_mem_notifier_unregister(_segment.ehdr);
    }
    gh_rm_unregister_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return 0;
}


// ===== sym.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(param_1 + 0x300),"qcom,master",0);
    if (iVar1 != 0) {
        gh_mem_notifier_unregister(_segment.ehdr);
    }
    gh_rm_unregister_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return 0;
}


// ===== sym.gh_tlmm_vm_mem_access_probe @ 0x08001130 (size 996) =====

ulong sym.gh_tlmm_vm_mem_access_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ushort auStack_64 [2];
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    _segment.ehdr = arg1 + 0x10;
    uVar6 = *(arg1 + 0x300);
    uStack_60 = 0;
    auStack_64[0] = 0;
    uStack_5c = 0;
    iVar3 = of_find_property(uVar6,"qcom,master",0);
    if (iVar3 == 0) {
        iVar1 = of_property_read_u32_index(uVar6,"qcom,rm-mem-handle",1,&uStack_5c);
        if (iVar1 == 0) {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            goto code_r0x080011bc;
        }
        _dev_err(_segment.ehdr,"Failed to receive mem handle rc:%d\n",iVar1);
code_r0x0800143c:
        _dev_err(_segment.ehdr,"Failed to populate TLMM VM info\n");
    }
    else {
code_r0x080011bc:
        _segment.ehdr = CONCAT44(*0x8000004,2);
        uVar2 = of_count_phandle_with_args(uVar6,"tlmm-vm-gpio-list","#gpio-cells");
        if (uVar2 < 0) {
            _dev_err(_segment.ehdr,"Invalid number of gpios specified\n");
            goto code_r0x0800143c;
        }
        iVar5 = uVar2 * 4;
        iVar3 = __kmalloc(iVar5,0xcc0);
        if (iVar3 == 0) goto code_r0x0800143c;
        if (uVar2 != 0) {
            uVar8 = 0;
            do {
                iVar1 = of_get_named_gpio_flags(uVar6,"tlmm-vm-gpio-list",uVar8 & 0xffffffff,0);
                if (iVar1 < 0) {
                    _dev_err(_segment.ehdr,"Failed to receive shared gpios %d\n");
                    goto code_r0x08001434;
                }
                *(iVar3 + uVar8 * 4) = iVar1;
                uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
        }
        *0x8000078 = uVar2;
        *0x8000068 = __kmalloc(iVar5,0xdc0);
        if (*0x8000068 == 0) {
code_r0x08001434:
            kfree(iVar3);
            goto code_r0x0800143c;
        }
        _segment.ehdr = __kmalloc(iVar5,0xdc0);
        if (_segment.ehdr == 0) {
code_r0x08001428:
            kfree(_segment.ehdr);
            goto code_r0x08001434;
        }
        piVar4 = kmem_cache_alloc_trace(_of_find_property,0xdc0,0x60);
        if (uVar2 != 0) {
            iVar7 = 0;
            do {
                uVar8 = msm_gpio_get_pin_address(*(iVar3 + iVar7),piVar4);
                if ((uVar8 & 1) == 0) {
                    _dev_err(_segment.ehdr,"Invalid gpio\n");
                    kfree(piVar4);
                    kfree(_segment.ehdr);
                    goto code_r0x08001428;
                }
                *(*0x8000068 + iVar7) = *piVar4;
                *(*0x8000070 + iVar7) = (piVar4[2] - *piVar4) + 1;
                iVar7 = iVar7 + 4;
            } while (iVar5 - iVar7 != 0);
        }
        kfree(iVar3);
        kfree(piVar4);
        uVar8 = of_find_compatible_node(0,0,"qcom,gunyah-vm-id-1.0");
        if (((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) &&
           ((uVar8 = of_find_compatible_node(0,0,"qcom,haven-vm-id-1.0"), uVar8 == 0 || (0xfffffffffffff000 < uVar8))
           )) {
            _dev_err(_segment.ehdr,"Could not find vm-id node\n");
            uVar6 = 0xffffffed;
            goto code_r0x08001450;
        }
        iVar1 = of_property_read_variable_u32_array(uVar8,"qcom,owner-vmid",&uStack_60,1,0);
        if (-1 < iVar1) {
            uVar6 = gh_rm_get_vmid(2,auStack_64);
            if (uVar6 != 0) goto code_r0x08001450;
            if (_segment.ehdr == 0) {
                _dev_err(_segment.ehdr,"Invalid memory handle\n");
            }
            else {
                iVar1 = gh_rm_mem_release(_segment.ehdr & 0xffffffff,0);
                if (iVar1 != 0) {
                    _dev_err(_segment.ehdr,"VM mem release failed rc:%d\n",iVar1);
                }
                iVar1 = gh_rm_mem_notify(_segment.ehdr & 0xffffffff,2,3,0);
                if (iVar1 != 0) {
                    _dev_err(_segment.ehdr,"Failed to notify mem release to PVM rc:%d\n",iVar1);
                }
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
code_r0x080013d8:
            uVar6 = 0;
            goto code_r0x08001450;
        }
        uVar8 = gh_mem_notifier_register
                          (3,sym.gh_tlmm_vm_mem_on_release_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt,
                           reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
        if (uVar8 < 0xfffffffffffff001) {
            *0x8000058 = 0x7fffffff;
            _reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt =
                 sym.gh_guest_memshare_nb_handler.2a263cb5e1c07de38577af02510af98d.cfi_jt;
            *0x8000080 = uVar8;
            uVar6 = gh_rm_register_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
            if (uVar6 != 0) goto code_r0x08001450;
            goto code_r0x080013d8;
        }
        _dev_err(_segment.ehdr,"Failed to register on release notifier%d\n");
    }
    uVar6 = 0xffffffea;
code_r0x08001450:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    iVar3 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.gh_tlmm_vm_mem_access_remove;
    iVar3 = of_find_property(*(iVar3 + 0x300),"qcom,master",0);
    if (iVar3 != 0) {
        gh_mem_notifier_unregister(_segment.ehdr);
    }
    gh_rm_unregister_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return 0;
}


// ===== sym.gh_tlmm_vm_mem_access_remove @ 0x08001514 (size 84) =====

ulong sym.gh_tlmm_vm_mem_access_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(arg1 + 0x300),"qcom,master",0);
    if (iVar1 != 0) {
        gh_mem_notifier_unregister(_segment.ehdr);
    }
    gh_rm_unregister_notifier(reloc.gh_tlmm_vm_mem_access_remove.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return 0;
}


// ===== sym.gh_tlmm_vm_mem_on_release_handler @ 0x08001568 (size 228) =====

void sym.gh_tlmm_vm_mem_on_release_handler(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0x51100012) {
        if (arg1 == 3) {
            if ((arg3 == 0) || (arg4 == 0)) {
                pcVar2 = "Invalid data or notification message\n";
            }
            else {
                iVar1 = *arg4;
                if (iVar1 == *(arg3 + 0x1c)) {
                    if (iVar1 != 0) {
                        iVar1 = gh_rm_mem_reclaim(iVar1,0);
                        if (iVar1 != 0) {
                            _dev_err(_segment.ehdr,"VM mem reclaim failed rc:%d\n",iVar1);
                        }
                        *(arg3 + 0x1c) = 0;
                        return;
                    }
                    pcVar2 = "Invalid memory handle\n";
                }
                else {
                    pcVar2 = "Invalid mem handle detected\n";
                }
            }
        }
        else {
            pcVar2 = "Invalid tag\n";
        }
    }
    else {
        pcVar2 = "Invalid notification type\n";
    }
    _dev_err(_segment.ehdr,pcVar2);
    return;
}


// ===== sym.gh_guest_memshare_nb_handler @ 0x0800164c (size 544) =====

uchar * sym.gh_guest_memshare_nb_handler(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t uVar5;
    code *pcVar6;
    int iVar7;
    uint *puVar8;
    ushort *puVar9;
    uchar *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar13 [16];
    int16_t aiStack_38 [2];
    uint32_t uStack_34;
    ushort auStack_30 [2];
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    cVar3 = *(arg3 + 4);
    aiStack_38[0] = 0;
    if (((arg2 != 0x56100008) || (arg1 = gh_rm_get_vmid(2,aiStack_38), aiStack_38[0] != *arg3)) || (cVar3 != '\x02'))
    goto code_r0x0800181c;
    uStack_34 = 0;
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    gh_rm_get_vmid(2,auStack_2c);
    gh_rm_get_vmid(1,auStack_30);
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
    if (puVar8 == NULL) {
        puVar8 = 0xc;
    }
    else {
        *puVar8 = 2;
        *(puVar8 + 1) = auStack_2c[0];
        *(puVar8 + 6) = 4;
        *(puVar8 + 2) = auStack_30[0];
        *(puVar8 + 10) = 6;
        if (0xfffffffffffff000 < puVar8) {
            arg1 = _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to get acl of IO memories for TLMM\n");
            goto code_r0x0800181c;
        }
    }
    puVar9 = __kmalloc(_segment.ehdr << 4 | 4,0xdc0);
    uVar5 = *0x8000078;
    if (puVar9 == NULL) {
        puVar9 = 0xc;
code_r0x080017dc:
        iVar7 = gh_rm_mem_share(1,0,8,puVar8,puVar9,0,&uStack_34);
        if (iVar7 == 0) {
            _segment.ehdr = uStack_34;
        }
        else {
            _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to share IO memories for TLMM rc:%d\n",iVar7);
        }
        kfree(puVar9);
    }
    else {
        *puVar9 = *0x8000078;
        iVar4 = *0x8000070;
        iVar2 = *0x8000068;
        if (uVar5 != 0) {
            uVar11 = 0;
            do {
                uVar12 = -(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
                iVar7 = uVar11;
                uVar1 = iVar7 + 1;
                uVar11 = uVar1;
                *(puVar9 + iVar7 * 8 + 2) = *(iVar2 + uVar12);
                *(puVar9 + iVar7 * 8 + 2 + 8) = *(iVar4 + uVar12);
            } while (uVar5 != uVar1);
        }
        if (puVar9 < 0xfffffffffffff001) goto code_r0x080017dc;
        _dev_err(CONCAT44(*0x8000004,_segment.ehdr),"Failed to get sgl of IO memories for TLMM\n");
    }
    arg1 = kfree(puVar8);
code_r0x0800181c:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        auVar13 = __stack_chk_fail(arg1);
        puVar10 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar10 != NULL) {
            switch(*puVar10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar10,auVar13._8_8_,0);
                break;
            default:
                return puVar10;
            }
        }
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5502,0x80018c4);
        (*pcVar6)();
    }
    return NULL;
}


// ===== sym.__cfi_check_fail @ 0x0800186c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018b0

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001908 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gh_tlmm_vm_mem_access_probe.2a263cb5e1c07de38577af02510af98d.cfi_jt);
    return;
}

