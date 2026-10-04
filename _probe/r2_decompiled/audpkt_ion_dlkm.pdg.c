// decompiled from audpkt_ion_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 296) =====

//WARNING: Switch with 1 destination removed at 0x08002688

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt;
        }
        else {
            if (arg1 != -0x8dc801903aca538) {
                if (arg1 != -0x890743871a4a53) goto code_r0x08002648;
                pcVar2 = sym.msm_audio_ion_ioctl.152d80f47529e2263e7115b3fced426c.cfi_jt;
                goto joined_r0x08001118;
            }
            pcVar2 = sym.msm_audio_ion_open.152d80f47529e2263e7115b3fced426c.cfi_jt;
        }
code_r0x080010e0:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08002648:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x800269c);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.msm_audio_ion_init.cfi_jt;
        }
        else {
            if (arg1 != 0x197874367d56dc63) {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002648;
                pcVar2 = sym.msm_audio_ion_crash_handler.cfi_jt;
                goto code_r0x080010e0;
            }
            pcVar2 = sym.msm_audio_get_phy_addr.cfi_jt;
        }
joined_r0x08001118:
        if (pcVar1 != pcVar2) goto code_r0x08002648;
    }
    return;
}


// ===== sym.msm_audio_ion_init.cfi_jt @ 0x08001130 (size 8) =====

void sym.msm_audio_ion_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_audio_ion_crash_handler.cfi_jt @ 0x08001138 (size 8) =====

uint64_t sym.msm_audio_ion_crash_handler.cfi_jt(void)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    char *arg2;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t arg2_00;
    ulong uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_80;
    uint uStack_7c;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if ((obj.msm_audio_ion_fd_list_init & 1) == 0) {
        uVar5 = _printk(0x8000883,"msm_audio_ion_crash_handler");
    }
    else {
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        piVar8 = *0x8000090;
        for (piVar10 = *0x8000090; piVar10 != 0x8000090; piVar10 = *piVar10) {
            if (piVar10 != 0x28) {
                iVar7 = piVar10[-3];
                arg2_00 = *(piVar10[-1] + 0x98);
                if (piVar10[2] != '\0') {
                    uStack_80 = 3;
                    uStack_7c = 7;
                    uStack_78 = *0x8000c78;
                    uStack_70 = *0x8000c80;
                    if (piVar10[2] != '\0') {
                        iVar3 = hyp_assign_phys(piVar10[-2],piVar10[-4],&uStack_78,2,&uStack_80,&uStack_7c,1);
                        if (iVar3 < 0) {
                            _printk(0x80001d4,"msm_audio_hyp_unassign",iVar3,piVar10[-2],piVar10[-4]);
                        }
                        *(piVar10 + 2) = 0;
                    }
                }
                if (iVar7 != 0) {
                    sym.msm_audio_ion_free(iVar7,arg2_00);
                }
            }
            piVar8 = _segment.ehdr;
        }
        while (piVar10 = piVar8, piVar10 != 0x8000090) {
            piVar8 = *piVar10;
            if ((piVar10 != NULL) && (piVar10 + -5 != NULL)) {
                uVar5 = __list_del_entry_valid(piVar10);
                if ((uVar5 & 1) != 0) {
                    iVar7 = *piVar10;
                    piVar2 = piVar10[1];
                    *(iVar7 + 8) = piVar2;
                    *piVar2 = iVar7;
                }
                *piVar10 = -0x2152ffffffffff00;
                piVar10[1] = -0x2152fffffffffede;
                kfree(piVar10 + -5);
            }
        }
        uVar5 = mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    arg2 = auVar11._8_8_;
    iVar7 = auVar11._0_8_;
    *extraout_x18 = sym.msm_audio_ion_free;
    if (iVar7 == 0) {
        _printk(0x8000192,"msm_audio_ion_free");
        uVar4 = 0xffffffea;
    }
    else {
        pcVar1 = arg2 + 0x28;
        mutex_lock(pcVar1);
        if (*arg2 == '\0') {
code_r0x080016f8:
            sym.msm_audio_dma_buf_unmap(iVar7,arg2);
            mutex_unlock(pcVar1);
            uVar4 = 0;
        }
        else {
            uVar9 = *(arg2 + 8);
            for (pcVar6 = *(arg2 + 0x18); arg2 + 0x18 != pcVar6; pcVar6 = *pcVar6) {
                if (*(pcVar6 + -0x18) == iVar7) {
                    if (*(pcVar6 + -0x20) != 0) {
                        dma_buf_vunmap(iVar7);
                        uVar4 = dma_buf_end_cpu_access(iVar7,0);
                        if (uVar4 == 0) goto code_r0x080016f8;
                        _dev_err(uVar9,"%s: kmap dma_buf_end_cpu_access fail\n","msm_audio_ion_unmap_kernel");
                        goto code_r0x0800178c;
                    }
                    break;
                }
            }
            _dev_err(uVar9,"%s: cannot find allocation for dma_buf %pK","msm_audio_ion_unmap_kernel",iVar7);
            uVar4 = 0xffffffea;
code_r0x0800178c:
            mutex_unlock(pcVar1);
        }
    }
    return uVar4;
}


// ===== sym.msm_audio_ion_exit.cfi_jt @ 0x08001140 (size 8) =====

void sym.msm_audio_ion_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    return;
}


// ===== sym.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt @ 0x08001148 (size 8) =====

int sym.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar8;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    _dev_err(iVar7,"%s: msm_audio_ion_probe\n","msm_audio_ion_probe");
    if (*(param_1 + 0x300) == 0) {
        _dev_err(iVar7,"%s: device tree is not found\n","msm_audio_ion_probe");
code_r0x08001b58:
        iVar1 = 0;
    }
    else {
        iVar3 = devm_kmalloc(iVar7,0x110,0xdc0);
        if (iVar3 == 0) {
            iVar1 = -0xc;
            goto code_r0x08001b5c;
        }
        iVar4 = of_find_property(*(param_1 + 0x300),"qcom,non-hyp-assign",0);
        uVar5 = *(param_1 + 0x300);
        *(iVar3 + 100) = iVar4 != 0;
        iVar4 = of_find_property(uVar5,"qcom,smmu-enabled",0);
        *iVar3 = iVar4 != 0;
        if (iVar4 == 0) {
            *(iVar3 + 0x68) = "msm_audio_ion_cma";
code_r0x08001a58:
            *(iVar3 + 0x10) = *(iVar3 + 0x10) | 1;
        }
        else {
            uVar5 = *(param_1 + 0x300);
            *(iVar3 + 0x68) = "msm_audio_ion";
            iVar1 = of_property_read_variable_u32_array(uVar5,"qcom,smmu-version",iVar3 + 0x60,1,0);
            if (iVar1 < 0) {
                _dev_err(iVar7,"%s: qcom,smmu_version missing in DT node\n","msm_audio_ion_probe");
                goto code_r0x08001b5c;
            }
            iVar1 = of_property_read_u64(*(param_1 + 0x300),"qcom,smmu-sid-mask",&uStack_90);
            if (iVar1 != 0) {
                _dev_err(iVar7,"%s: qcom,smmu-sid-mask missing in DT node, using default\n","msm_audio_ion_probe");
                uStack_90 = 0xffffffffffffffff;
            }
            iVar1 = of_parse_phandle_with_args(*(param_1 + 0x300),"iommus","#iommu-cells",0,&uStack_88);
            if (iVar1 == 0) {
                *(iVar3 + 0x58) = (uStack_90 & uStack_80._4_4_) << 0x20;
                goto code_r0x08001a58;
            }
            _dev_err(iVar7,"%s: could not get smmu SID, ret = %d\n","msm_audio_ion_probe",iVar1);
            *(iVar3 + 0x58) = 0;
        }
        *(iVar3 + 8) = iVar7;
        *(param_1 + 0xa8) = iVar3;
        if ((obj.msm_audio_ion_fd_list_init & 1) == 0) {
            *0x8000090 = 0x8000090;
            *0x8000098 = 0x8000090;
            __mutex_init(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,
                         "&(msm_audio_ion_fd_list.list_mutex)",obj.msm_audio_ion_probe.__key);
            obj.msm_audio_ion_fd_list_init = 0x1;
        }
        *(iVar3 + 0x18) = iVar3 + 0x18;
        *(iVar3 + 0x20) = iVar3 + 0x18;
        __mutex_init(iVar3 + 0x28,"&(msm_audio_ion_data->list_mutex)",obj.msm_audio_ion_probe.__key);
        uVar2 = alloc_chrdev_region(iVar3 + 0x70,0,1,*(iVar3 + 0x68));
        if (uVar2 < 0) {
            uVar6 = uVar2;
            _printk(0x8000606,"msm_audio_ion_reg_chrdev",uVar6);
        }
        else {
            uVar6 = __class_create(obj.__this_module,*(iVar3 + 0x68),obj.msm_audio_ion_probe.__key);
            *(iVar3 + 0x78) = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                uVar6 = device_create(uVar6,0,*(iVar3 + 0x70),0,*(iVar3 + 0x68));
                *(iVar3 + 0x80) = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    cdev_init(iVar3 + 0x88,obj.msm_audio_ion_fops);
                    uVar6 = cdev_add(iVar3 + 0x88,*(iVar3 + 0x70),1);
                    if (uVar6 == 0) goto code_r0x08001b58;
                    uVar6 = uVar6 & 0xffffffff;
                    _printk(0x8000453,"msm_audio_ion_reg_chrdev",uVar6);
                    device_destroy(*(iVar3 + 0x78),*(iVar3 + 0x70));
                }
                else {
                    _printk(0x80002b6,"msm_audio_ion_reg_chrdev",uVar6 & 0xffffffff);
                }
                class_destroy(*(iVar3 + 0x78));
            }
            else {
                _printk(0x8000376,"msm_audio_ion_reg_chrdev",uVar6 & 0xffffffff);
            }
            unregister_chrdev_region(0,1);
            iVar1 = 0;
            if (uVar6 == 0) goto code_r0x08001b5c;
        }
        _printk(0x80006c7,"msm_audio_ion_probe",uVar6 & 0xffffffff);
        iVar1 = uVar6;
    }
code_r0x08001b5c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_38) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.msm_audio_ion_remove;
        puVar8 = *(iVar7 + 0xa8);
        *puVar8 = 0;
        puVar8[0x10] = 0;
        cdev_del(puVar8 + 0x88);
        device_destroy(*(puVar8 + 0x78),*(puVar8 + 0x70));
        class_destroy(*(puVar8 + 0x78));
        unregister_chrdev_region(0,1);
        return 0;
    }
    return iVar1;
}


// ===== sym.msm_audio_ion_remove.152d80f47529e2263e7115b3fced426c.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.msm_audio_ion_remove.152d80f47529e2263e7115b3fced426c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uchar *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    *puVar1 = 0;
    puVar1[0x10] = 0;
    cdev_del(puVar1 + 0x88);
    device_destroy(*(puVar1 + 0x78),*(puVar1 + 0x70));
    class_destroy(*(puVar1 + 0x78));
    unregister_chrdev_region(0,1);
    return 0;
}


// ===== sym.msm_audio_ion_ioctl.152d80f47529e2263e7115b3fced426c.cfi_jt @ 0x08001158 (size 8) =====

int64_t sym.msm_audio_ion_ioctl.152d80f47529e2263e7115b3fced426c.cfi_jt(int64_t param_1,uint64_t param_2,int param_3)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    int *piVar4;
    ulong *arg1;
    ulong *puVar5;
    ulong *puVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    char *arg2;
    ulong unaff_x30;
    ulong uStack_a0;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    uint uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    uVar8 = param_2 & 0xffffffff;
    uStack_a0 = 0x600000006;
    uStack_8c = 3;
    uStack_78 = *0x8000c78;
    uStack_94 = 3;
    uStack_90 = 7;
    uStack_88 = *0x8000c78;
    uStack_70 = *0x8000c80;
    uStack_80 = *0x8000c80;
    if (0xd < param_2 + 0xbffb9e9fU) {
code_r0x080022c4:
        _printk(0x80003d9,"msm_audio_ion_ioctl");
        iVar3 = -0x16;
        goto code_r0x08002398;
    }
    iVar12 = *(*(param_1 + 0x20) + 0x2b0);
    arg2 = iVar12 + -0x88;
    switch(param_2) {
    case 0x40046161:
        iVar13 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar13 = 0x30;
        }
        iVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x40);
        if (iVar13 == 0) {
            iVar12 = -0xc;
            goto code_r0x0800239c;
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x40);
        if (piVar4 == NULL) {
            kfree(iVar13);
            iVar12 = -0xc;
            goto code_r0x0800239c;
        }
        if ((*(iVar12 + -0x78) & 1) == 0) {
            uVar8 = 0xfffffdfb;
        }
        else {
            arg1 = dma_buf_get(param_3);
            if ((arg1 != NULL) && (arg1 < 0xfffffffffffff001)) {
                uVar14 = *(iVar12 + -0x80);
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                cVar2 = *(iVar12 + -0x88);
                puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
                if (puVar5 == NULL) {
                    uVar9 = 0;
                    uVar8 = 0xfffffff4;
                    if (cVar2 == '\0') goto code_r0x080022b8;
code_r0x0800222c:
                    if (uVar8 == 0) {
                        uVar10 = 0;
code_r0x08002234:
                        if (*arg2 != '\0') {
                            uVar10 = *(iVar12 + -0x30) | uVar10;
                        }
                        iVar3 = dma_buf_begin_cpu_access(arg1,0);
                        if (iVar3 == 0) {
                            iVar3 = dma_buf_vmap(arg1,iVar13);
                            if (iVar3 == 0) {
                                mutex_lock(iVar12 + -0x60);
                                for (piVar11 = *(iVar12 + -0x70); iVar12 + -0x70 != piVar11; piVar11 = *piVar11) {
                                    if (piVar11[-3] == arg1) {
                                        piVar11[-4] = iVar13;
                                        break;
                                    }
                                }
                                mutex_unlock(iVar12 + -0x60);
                                goto code_r0x08002308;
                            }
                            _printk(0x80002da,"msm_audio_ion_map_kernel");
                            dma_buf_end_cpu_access(arg1,0);
                        }
                        else {
                            _printk(0x800073c,"msm_audio_ion_map_kernel");
                        }
                        _printk(0x8000821,"msm_audio_ion_buf_map",iVar3);
                        mutex_lock(iVar12 + -0x60);
                        sym.msm_audio_dma_buf_unmap(arg1,arg2);
                        mutex_unlock(iVar12 + -0x60);
                        uVar8 = 0xfffffff4;
                    }
                    else {
                        _printk(0x800056f,"msm_audio_ion_get_phys",uVar8);
                        _printk(0x800053d,"msm_audio_ion_buf_map",uVar8);
                        dma_buf_put(arg1);
                        uVar10 = 0;
                    }
                    _printk(0x8000473,"msm_audio_ion_import",uVar8);
                    sym.mievent_report(noname_0,uVar8);
                    iVar3 = uVar8;
                    if (iVar3 < 0) goto code_r0x08002448;
                    arg1 = NULL;
                }
                else {
                    iVar1 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar1 = 0x30;
                    }
                    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x38);
                    if (puVar6 == NULL) {
                        uVar9 = 0;
                        uVar8 = 0xfffffff4;
code_r0x080022a8:
                        kfree(puVar5);
                        if (cVar2 != '\0') goto code_r0x0800222c;
code_r0x080022b8:
                        uVar10 = 0;
                    }
                    else {
                        puVar6[2] = arg1;
                        uVar9 = *arg1;
                        *puVar6 = uVar9;
                        piVar11 = dma_buf_attach(arg1,uVar14);
                        puVar6[3] = piVar11;
                        if (0xfffffffffffff000 < piVar11) {
                            _dev_err(uVar14,"%s: Fail to attach dma_buf to CB, rc = %d\n","msm_audio_dma_buf_map",
                                     piVar11 & 0xffffffff);
code_r0x080025d0:
                            uVar8 = piVar11 & 0xffffffff;
                            kfree(puVar5);
                            puVar5 = puVar6;
                            goto code_r0x080022a8;
                        }
                        piVar7 = dma_buf_map_attachment(piVar11,0);
                        puVar6[4] = piVar7;
                        if (0xfffffffffffff000 < piVar7) {
                            _dev_err(uVar14,"%s: Fail to map attachment, rc = %d\n","msm_audio_dma_buf_map",
                                     piVar7 & 0xffffffff);
                            dma_buf_detach(arg1,piVar11);
                            piVar11 = piVar7;
                            goto code_r0x080025d0;
                        }
                        uVar10 = *(*piVar7 + 0x10);
                        kfree(puVar5);
                        mutex_lock(iVar12 + -0x60);
                        piVar11 = *(iVar12 + -0x68);
                        puVar5 = puVar6 + 5;
                        uVar8 = __list_add_valid(puVar5,piVar11,iVar12 + -0x70);
                        if ((uVar8 & 1) != 0) {
                            *(iVar12 + -0x68) = puVar5;
                            puVar6[5] = iVar12 + -0x70;
                            puVar6[6] = piVar11;
                            *piVar11 = puVar5;
                        }
                        mutex_unlock(iVar12 + -0x60);
                        if (cVar2 != '\0') goto code_r0x08002234;
                    }
code_r0x08002308:
                    iVar3 = 0;
                }
                *piVar4 = param_3;
                *(piVar4 + 4) = arg1;
                *(piVar4 + 6) = uVar10;
                *(piVar4 + 2) = uVar9;
                *(piVar4 + 8) = *(iVar12 + -0x80);
                mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                piVar7 = *0x8000098;
                for (piVar11 = *0x8000090; piVar11 != 0x8000090; piVar11 = *piVar11) {
                    if (*(piVar11 + -5) == param_3) {
                        _printk(0x8000596,"msm_audio_update_fd_list");
                        goto code_r0x0800238c;
                    }
                }
                piVar11 = piVar4 + 10;
                uVar8 = __list_add_valid(piVar11,*0x8000098,0x8000090);
                if ((uVar8 & 1) != 0) {
                    *0x8000098 = piVar11;
                    piVar4[10] = 0x8000090;
                    piVar4[0xb] = 0;
                    *(piVar4 + 0xc) = piVar7;
                    *piVar7 = piVar11;
                }
                goto code_r0x0800238c;
            }
            _printk(0x800022b,"msm_audio_ion_import");
            uVar8 = 0xffffffea;
        }
code_r0x08002448:
        iVar3 = uVar8;
        _printk(0x8000631,"msm_audio_ion_ioctl",uVar8);
        kfree(iVar13);
        kfree(piVar4);
        break;
    case 0x40046162:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,param_2,uVar8);
        for (piVar11 = *0x8000090; piVar11 != 0x8000090; piVar11 = *piVar11) {
            if (*(piVar11 + -5) == param_3) {
                iVar12 = piVar11[-3];
                goto code_r0x08002168;
            }
        }
        iVar12 = 0;
code_r0x08002168:
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        iVar3 = sym.msm_audio_ion_free(iVar12,arg2);
        if (iVar3 < 0) {
            _printk(0x8000212,"msm_audio_ion_ioctl",iVar3);
        }
        else if (iVar12 == 0) {
            _printk(0x800027f,"msm_audio_delete_fd_entry");
        }
        else {
            mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            piVar11 = 0x8000090;
            do {
                piVar11 = *piVar11;
                if (piVar11 == 0x8000090) goto code_r0x0800238c;
            } while (piVar11[-3] != iVar12);
            uVar8 = __list_del_entry_valid(piVar11);
            if ((uVar8 & 1) != 0) {
                iVar12 = *piVar11;
                piVar7 = piVar11[1];
                *(iVar12 + 8) = piVar7;
                *piVar7 = iVar12;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            kfree(piVar11 + -5);
code_r0x0800238c:
            mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        }
        break;
    default:
        goto code_r0x080022c4;
    case 0x4004616d:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,param_2,uVar8);
        piVar11 = *0x8000090;
        if (*0x8000090 != 0x8000090) {
code_r0x08001ff4:
            if (piVar11[-5] != param_3) goto code_r0x08002000;
            iVar12 = piVar11[-2];
            iVar13 = piVar11[-4];
            mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            iVar3 = hyp_assign_phys(iVar12,iVar13,&uStack_8c,1,&uStack_78,&uStack_a0,2);
            if (iVar3 < 0) {
                uVar14 = 0x800064c;
code_r0x08002404:
                _printk(uVar14,"msm_audio_ion_ioctl",iVar3,iVar12,iVar13);
                break;
            }
            mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            piVar11 = *0x8000090;
            goto joined_r0x080020cc;
        }
        goto code_r0x08002050;
    case 0x4004616e:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,param_2,uVar8);
        for (piVar11 = *0x8000090; piVar11 != 0x8000090; piVar11 = *piVar11) {
            if (*(piVar11 + -5) == param_3) {
                iVar12 = piVar11[-2];
                iVar13 = piVar11[-4];
                mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                iVar3 = hyp_assign_phys(iVar12,iVar13,&uStack_88,2,&uStack_94,&uStack_90,1);
                if (iVar3 < 0) {
                    uVar14 = 0x80001d4;
                    goto code_r0x08002404;
                }
                mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                piVar11 = *0x8000090;
                goto joined_r0x0800213c;
            }
        }
code_r0x08002050:
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        _printk(0x8000778,"msm_audio_ion_ioctl",0xffffffea);
        iVar12 = -0x16;
        goto code_r0x0800239c;
    }
code_r0x08002398:
    iVar12 = iVar3;
code_r0x0800239c:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_68) {
        iVar12 = __stack_chk_fail(iVar12);
        *extraout_x18 = sym.msm_audio_ion_open;
        get_device(*(*(iVar12 + 0x2b0) + -8));
        return 0;
    }
    return iVar12;
joined_r0x0800213c:
    if (piVar11 == 0x8000090) goto code_r0x0800238c;
    if (*(piVar11 + -5) == param_3) {
        *(piVar11 + 2) = 0;
        goto code_r0x0800238c;
    }
    piVar11 = *piVar11;
    goto joined_r0x0800213c;
code_r0x08002000:
    piVar11 = *piVar11;
    if (piVar11 == 0x8000090) goto code_r0x08002050;
    goto code_r0x08001ff4;
joined_r0x080020cc:
    if (piVar11 == 0x8000090) goto code_r0x0800238c;
    if (*(piVar11 + -5) == param_3) {
        *(piVar11 + 2) = 1;
        goto code_r0x0800238c;
    }
    piVar11 = *piVar11;
    goto joined_r0x080020cc;
}


// ===== sym.msm_audio_get_phy_addr.cfi_jt @ 0x08001160 (size 8) =====

uint sym.msm_audio_get_phy_addr.cfi_jt(int param_1,ulong *param_2,ulong *param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        _printk(0x800042f,"msm_audio_get_phy_addr",0xffffffea);
    }
    else {
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        for (piVar1 = *0x8000090; piVar1 != 0x8000090; piVar1 = *piVar1) {
            if (*(piVar1 + -5) == param_1) {
                *param_2 = piVar1[-2];
                *param_3 = piVar1[-4];
                mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                return 0;
            }
        }
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    }
    return 0xffffffea;
}


// ===== sym.msm_audio_ion_open.152d80f47529e2263e7115b3fced426c.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.msm_audio_ion_open.152d80f47529e2263e7115b3fced426c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    get_device(*(*(param_1 + 0x2b0) + -8));
    return 0;
}


// ===== sym.msm_audio_ion_release.152d80f47529e2263e7115b3fced426c.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.msm_audio_ion_release.152d80f47529e2263e7115b3fced426c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    put_device(*(*(param_1 + 0x2b0) + -8));
    return 0;
}


// ===== sym.msm_audio_fd_list_debug @ 0x08001178 (size 36) =====

void sym.msm_audio_fd_list_debug(void)

{
    int64_t *piVar1;
    
    piVar1 = 0x8000090;
    do {
        piVar1 = *piVar1;
    } while (piVar1 != 0x8000090);
    return;
}


// ===== sym.msm_audio_update_fd_list @ 0x0800119c (size 192) =====

void sym.msm_audio_update_fd_list(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    piVar1 = *0x8000098;
    if (*0x8000090 != 0x8000090) {
        piVar3 = *0x8000090;
        do {
            if (piVar3[-5] == *arg1) {
                _printk(0x8000596,"msm_audio_update_fd_list");
                goto code_r0x08001220;
            }
            piVar3 = *piVar3;
        } while (piVar3 != 0x8000090);
    }
    piVar3 = arg1 + 0x28;
    uVar2 = __list_add_valid(piVar3,*0x8000098,0x8000090);
    if ((uVar2 & 1) != 0) {
        *0x8000098 = piVar3;
        *(arg1 + 0x28) = 0x8000090;
        *(arg1 + 0x30) = piVar1;
        *piVar1 = piVar3;
    }
code_r0x08001220:
    mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    return;
}


// ===== sym.msm_audio_delete_fd_entry @ 0x0800125c (size 192) =====

void sym.msm_audio_delete_fd_entry(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800027f,"msm_audio_delete_fd_entry");
    }
    else {
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        piVar4 = 0x8000090;
        do {
            piVar4 = *piVar4;
            if (piVar4 == 0x8000090) goto code_r0x080012e4;
        } while (piVar4[-3] != arg1);
        uVar3 = __list_del_entry_valid(piVar4);
        if ((uVar3 & 1) != 0) {
            iVar1 = *piVar4;
            piVar2 = piVar4[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar4 = -0x2152ffffffffff00;
        piVar4[1] = -0x2152fffffffffede;
        kfree(piVar4 + -5);
code_r0x080012e4:
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    }
    return;
}


// ===== sym.msm_audio_get_phy_addr @ 0x0800131c (size 212) =====

uint sym.msm_audio_get_phy_addr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x800042f,"msm_audio_get_phy_addr",0xffffffea);
    }
    else {
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        for (piVar1 = *0x8000090; piVar1 != 0x8000090; piVar1 = *piVar1) {
            if (*(piVar1 + -5) == arg1) {
                *arg2 = piVar1[-2];
                *arg3 = piVar1[-4];
                mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                return 0;
            }
        }
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    }
    return 0xffffffea;
}


// ===== sym.msm_audio_get_handle @ 0x080013f0 (size 144) =====

void sym.msm_audio_get_handle(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    *arg2 = 0;
    piVar1 = *0x8000090;
    do {
        if (piVar1 == 0x8000090) {
code_r0x0800145c:
            mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            return;
        }
        if (*(piVar1 + -5) == arg1) {
            *arg2 = piVar1[-3];
            goto code_r0x0800145c;
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.msm_audio_ion_crash_handler @ 0x08001480 (size 492) =====

uint64_t sym.msm_audio_ion_crash_handler(void)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    char *arg2;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t arg2_00;
    ulong uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_80;
    uint uStack_7c;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if ((obj.msm_audio_ion_fd_list_init & 1) == 0) {
        uVar5 = _printk(0x8000883,"msm_audio_ion_crash_handler");
    }
    else {
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        piVar8 = *0x8000090;
        for (piVar10 = *0x8000090; piVar10 != 0x8000090; piVar10 = *piVar10) {
            if (piVar10 != 0x28) {
                iVar7 = piVar10[-3];
                arg2_00 = *(piVar10[-1] + 0x98);
                if (piVar10[2] != '\0') {
                    uStack_80 = 3;
                    uStack_7c = 7;
                    uStack_78 = *0x8000c78;
                    uStack_70 = *0x8000c80;
                    if (piVar10[2] != '\0') {
                        iVar3 = hyp_assign_phys(piVar10[-2],piVar10[-4],&uStack_78,2,&uStack_80,&uStack_7c,1);
                        if (iVar3 < 0) {
                            _printk(0x80001d4,"msm_audio_hyp_unassign",iVar3,piVar10[-2],piVar10[-4]);
                        }
                        *(piVar10 + 2) = 0;
                    }
                }
                if (iVar7 != 0) {
                    sym.msm_audio_ion_free(iVar7,arg2_00);
                }
            }
            piVar8 = _segment.ehdr;
        }
        while (piVar10 = piVar8, piVar10 != 0x8000090) {
            piVar8 = *piVar10;
            if ((piVar10 != NULL) && (piVar10 + -5 != NULL)) {
                uVar5 = __list_del_entry_valid(piVar10);
                if ((uVar5 & 1) != 0) {
                    iVar7 = *piVar10;
                    piVar2 = piVar10[1];
                    *(iVar7 + 8) = piVar2;
                    *piVar2 = iVar7;
                }
                *piVar10 = -0x2152ffffffffff00;
                piVar10[1] = -0x2152fffffffffede;
                kfree(piVar10 + -5);
            }
        }
        uVar5 = mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    arg2 = auVar11._8_8_;
    iVar7 = auVar11._0_8_;
    *extraout_x18 = sym.msm_audio_ion_free;
    if (iVar7 == 0) {
        _printk(0x8000192,"msm_audio_ion_free");
        uVar4 = 0xffffffea;
    }
    else {
        pcVar1 = arg2 + 0x28;
        mutex_lock(pcVar1);
        if (*arg2 == '\0') {
code_r0x080016f8:
            sym.msm_audio_dma_buf_unmap(iVar7,arg2);
            mutex_unlock(pcVar1);
            uVar4 = 0;
        }
        else {
            uVar9 = *(arg2 + 8);
            for (pcVar6 = *(arg2 + 0x18); arg2 + 0x18 != pcVar6; pcVar6 = *pcVar6) {
                if (*(pcVar6 + -0x18) == iVar7) {
                    if (*(pcVar6 + -0x20) != 0) {
                        dma_buf_vunmap(iVar7);
                        uVar4 = dma_buf_end_cpu_access(iVar7,0);
                        if (uVar4 == 0) goto code_r0x080016f8;
                        _dev_err(uVar9,"%s: kmap dma_buf_end_cpu_access fail\n","msm_audio_ion_unmap_kernel");
                        goto code_r0x0800178c;
                    }
                    break;
                }
            }
            _dev_err(uVar9,"%s: cannot find allocation for dma_buf %pK","msm_audio_ion_unmap_kernel",iVar7);
            uVar4 = 0xffffffea;
code_r0x0800178c:
            mutex_unlock(pcVar1);
        }
    }
    return uVar4;
}


// ===== sym.msm_audio_ion_free @ 0x0800166c (size 300) =====

int sym.msm_audio_ion_free(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000192,"msm_audio_ion_free");
        iVar2 = -0x16;
    }
    else {
        iVar1 = arg2 + 0x28;
        mutex_lock(iVar1);
        if (*arg2 == '\0') {
code_r0x080016f8:
            sym.msm_audio_dma_buf_unmap(arg1,arg2);
            mutex_unlock(iVar1);
            iVar2 = 0;
        }
        else {
            uVar4 = *(arg2 + 8);
            for (piVar3 = *(arg2 + 0x18); arg2 + 0x18 != piVar3; piVar3 = *piVar3) {
                if (piVar3[-3] == arg1) {
                    if (piVar3[-4] != 0) {
                        dma_buf_vunmap(arg1);
                        iVar2 = dma_buf_end_cpu_access(arg1,0);
                        if (iVar2 == 0) goto code_r0x080016f8;
                        _dev_err(uVar4,"%s: kmap dma_buf_end_cpu_access fail\n","msm_audio_ion_unmap_kernel");
                        goto code_r0x0800178c;
                    }
                    break;
                }
            }
            _dev_err(uVar4,"%s: cannot find allocation for dma_buf %pK","msm_audio_ion_unmap_kernel",arg1);
            iVar2 = -0x16;
code_r0x0800178c:
            mutex_unlock(iVar1);
        }
    }
    return iVar2;
}


// ===== sym.msm_audio_ion_exit @ 0x08001798 (size 44) =====

void sym.msm_audio_ion_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
    return;
}


// ===== sym.mievent_report @ 0x080017c4 (size 120) =====

ulong sym.mievent_report(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = cdev_tevent_alloc();
    if (iVar1 == 0) {
        _printk(0x8000294,"mievent_report");
        uVar2 = 0xfffffff4;
    }
    else {
        cdev_tevent_add_int(iVar1,"Status",arg1);
        cdev_tevent_write(iVar1);
        cdev_tevent_destroy(iVar1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_audio_dma_buf_unmap @ 0x0800183c (size 196) =====

void sym.msm_audio_dma_buf_unmap(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = arg2 + 0x18;
    do {
        piVar4 = *piVar4;
        if (piVar4 == arg2 + 0x18) {
            _dev_err(*(arg2 + 8),"%s: cannot find allocation, dma_buf %pK","msm_audio_dma_buf_unmap");
            return;
        }
    } while (piVar4[-3] != arg1);
    dma_buf_unmap_attachment(piVar4[-2],piVar4[-1],0);
    dma_buf_detach(piVar4[-3],piVar4[-2]);
    dma_buf_put(piVar4[-3]);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4[-4]);
    kfree(piVar4 + -5);
    return;
}


// ===== sym.msm_audio_ion_probe @ 0x08001900 (size 984) =====

int sym.msm_audio_ion_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar8;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    _dev_err(iVar7,"%s: msm_audio_ion_probe\n","msm_audio_ion_probe");
    if (*(arg1 + 0x300) == 0) {
        _dev_err(iVar7,"%s: device tree is not found\n","msm_audio_ion_probe");
code_r0x08001b58:
        iVar1 = 0;
    }
    else {
        iVar3 = devm_kmalloc(iVar7,0x110,0xdc0);
        if (iVar3 == 0) {
            iVar1 = -0xc;
            goto code_r0x08001b5c;
        }
        iVar4 = of_find_property(*(arg1 + 0x300),"qcom,non-hyp-assign",0);
        uVar5 = *(arg1 + 0x300);
        *(iVar3 + 100) = iVar4 != 0;
        iVar4 = of_find_property(uVar5,"qcom,smmu-enabled",0);
        *iVar3 = iVar4 != 0;
        if (iVar4 == 0) {
            *(iVar3 + 0x68) = "msm_audio_ion_cma";
code_r0x08001a58:
            *(iVar3 + 0x10) = *(iVar3 + 0x10) | 1;
        }
        else {
            uVar5 = *(arg1 + 0x300);
            *(iVar3 + 0x68) = "msm_audio_ion";
            iVar1 = of_property_read_variable_u32_array(uVar5,"qcom,smmu-version",iVar3 + 0x60,1,0);
            if (iVar1 < 0) {
                _dev_err(iVar7,"%s: qcom,smmu_version missing in DT node\n","msm_audio_ion_probe");
                goto code_r0x08001b5c;
            }
            iVar1 = of_property_read_u64(*(arg1 + 0x300),"qcom,smmu-sid-mask",&uStack_90);
            if (iVar1 != 0) {
                _dev_err(iVar7,"%s: qcom,smmu-sid-mask missing in DT node, using default\n","msm_audio_ion_probe");
                uStack_90 = 0xffffffffffffffff;
            }
            iVar1 = of_parse_phandle_with_args(*(arg1 + 0x300),"iommus","#iommu-cells",0,&uStack_88);
            if (iVar1 == 0) {
                *(iVar3 + 0x58) = (uStack_90 & uStack_80._4_4_) << 0x20;
                goto code_r0x08001a58;
            }
            _dev_err(iVar7,"%s: could not get smmu SID, ret = %d\n","msm_audio_ion_probe",iVar1);
            *(iVar3 + 0x58) = 0;
        }
        *(iVar3 + 8) = iVar7;
        *(arg1 + 0xa8) = iVar3;
        if ((obj.msm_audio_ion_fd_list_init & 1) == 0) {
            *0x8000090 = 0x8000090;
            *0x8000098 = 0x8000090;
            __mutex_init(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,
                         "&(msm_audio_ion_fd_list.list_mutex)",obj.msm_audio_ion_probe.__key);
            obj.msm_audio_ion_fd_list_init = 0x1;
        }
        *(iVar3 + 0x18) = iVar3 + 0x18;
        *(iVar3 + 0x20) = iVar3 + 0x18;
        __mutex_init(iVar3 + 0x28,"&(msm_audio_ion_data->list_mutex)",obj.msm_audio_ion_probe.__key);
        uVar2 = alloc_chrdev_region(iVar3 + 0x70,0,1,*(iVar3 + 0x68));
        if (uVar2 < 0) {
            uVar6 = uVar2;
            _printk(0x8000606,"msm_audio_ion_reg_chrdev",uVar6);
        }
        else {
            uVar6 = __class_create(obj.__this_module,*(iVar3 + 0x68),obj.msm_audio_ion_probe.__key);
            *(iVar3 + 0x78) = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                uVar6 = device_create(uVar6,0,*(iVar3 + 0x70),0,*(iVar3 + 0x68));
                *(iVar3 + 0x80) = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    cdev_init(iVar3 + 0x88,obj.msm_audio_ion_fops);
                    uVar6 = cdev_add(iVar3 + 0x88,*(iVar3 + 0x70),1);
                    if (uVar6 == 0) goto code_r0x08001b58;
                    uVar6 = uVar6 & 0xffffffff;
                    _printk(0x8000453,"msm_audio_ion_reg_chrdev",uVar6);
                    device_destroy(*(iVar3 + 0x78),*(iVar3 + 0x70));
                }
                else {
                    _printk(0x80002b6,"msm_audio_ion_reg_chrdev",uVar6 & 0xffffffff);
                }
                class_destroy(*(iVar3 + 0x78));
            }
            else {
                _printk(0x8000376,"msm_audio_ion_reg_chrdev",uVar6 & 0xffffffff);
            }
            unregister_chrdev_region(0,1);
            iVar1 = 0;
            if (uVar6 == 0) goto code_r0x08001b5c;
        }
        _printk(0x80006c7,"msm_audio_ion_probe",uVar6 & 0xffffffff);
        iVar1 = uVar6;
    }
code_r0x08001b5c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_38) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.msm_audio_ion_remove;
        puVar8 = *(iVar7 + 0xa8);
        *puVar8 = 0;
        puVar8[0x10] = 0;
        cdev_del(puVar8 + 0x88);
        device_destroy(*(puVar8 + 0x78),*(puVar8 + 0x70));
        class_destroy(*(puVar8 + 0x78));
        unregister_chrdev_region(0,1);
        return 0;
    }
    return iVar1;
}


// ===== sym.msm_audio_ion_remove @ 0x08001cd8 (size 96) =====

ulong sym.msm_audio_ion_remove(int64_t arg1)

{
    ulong *in_x18;
    uchar *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    *puVar1 = 0;
    puVar1[0x10] = 0;
    cdev_del(puVar1 + 0x88);
    device_destroy(*(puVar1 + 0x78),*(puVar1 + 0x70));
    class_destroy(*(puVar1 + 0x78));
    unregister_chrdev_region(0,1);
    return 0;
}


// ===== sym.msm_audio_ion_ioctl @ 0x08001d38 (size 2220) =====

int64_t sym.msm_audio_ion_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    char cVar3;
    int iVar4;
    int *piVar5;
    ulong *arg1_00;
    ulong *puVar6;
    ulong *puVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    ulong noname_0;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong uVar16;
    char *arg2_00;
    ulong unaff_x30;
    ulong uStack_a0;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    uint uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar9 = arg2 & 0xffffffff;
    uStack_a0 = 0x600000006;
    uStack_8c = 3;
    uStack_78 = *0x8000c78;
    uStack_94 = 3;
    uStack_90 = 7;
    uStack_88 = *0x8000c78;
    uVar1 = arg2 + 0xbffb9e9f;
    uStack_70 = *0x8000c80;
    uStack_80 = *0x8000c80;
    if (0xd < uVar1) {
code_r0x080022c4:
        _printk(0x80003d9,"msm_audio_ion_ioctl");
        iVar4 = -0x16;
        goto code_r0x08002398;
    }
    iVar14 = *(*(arg1 + 0x20) + 0x2b0);
    arg2_00 = iVar14 + -0x88;
    //switch table (14 cases) at 0x8000150
    iVar13 = arg3;
    switch(*(uVar1 * 2 + 0x8000150) * 4 + 0x8001de4) {
    case 0x8001de8:
        iVar15 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar15 = 0x30;
        }
        iVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0,0x40);
        if (iVar15 == 0) {
            iVar14 = -0xc;
            goto code_r0x0800239c;
        }
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x40);
        if (piVar5 == NULL) {
            kfree(iVar15);
            iVar14 = -0xc;
            goto code_r0x0800239c;
        }
        if ((*(iVar14 + -0x78) & 1) == 0) {
            uVar9 = 0xfffffdfb;
        }
        else {
            arg1_00 = dma_buf_get(arg3 & 0xffffffff);
            if ((arg1_00 != NULL) && (arg1_00 < 0xfffffffffffff001)) {
                uVar16 = *(iVar14 + -0x80);
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                cVar3 = *(iVar14 + -0x88);
                puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x10);
                if (puVar6 == NULL) {
                    uVar10 = 0;
                    uVar9 = 0xfffffff4;
                    if (cVar3 == '\0') goto code_r0x080022b8;
code_r0x0800222c:
                    if (uVar9 == 0) {
                        uVar11 = 0;
code_r0x08002234:
                        if (*arg2_00 != '\0') {
                            uVar11 = *(iVar14 + -0x30) | uVar11;
                        }
                        iVar4 = dma_buf_begin_cpu_access(arg1_00,0);
                        if (iVar4 == 0) {
                            iVar4 = dma_buf_vmap(arg1_00,iVar15);
                            if (iVar4 == 0) {
                                mutex_lock(iVar14 + -0x60);
                                for (piVar12 = *(iVar14 + -0x70); iVar14 + -0x70 != piVar12; piVar12 = *piVar12) {
                                    if (piVar12[-3] == arg1_00) {
                                        piVar12[-4] = iVar15;
                                        break;
                                    }
                                }
                                mutex_unlock(iVar14 + -0x60);
                                goto code_r0x08002308;
                            }
                            _printk(0x80002da,"msm_audio_ion_map_kernel");
                            dma_buf_end_cpu_access(arg1_00,0);
                        }
                        else {
                            _printk(0x800073c,"msm_audio_ion_map_kernel");
                        }
                        _printk(0x8000821,"msm_audio_ion_buf_map",iVar4);
                        mutex_lock(iVar14 + -0x60);
                        sym.msm_audio_dma_buf_unmap(arg1_00,arg2_00);
                        mutex_unlock(iVar14 + -0x60);
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        _printk(0x800056f,"msm_audio_ion_get_phys",uVar9);
                        _printk(0x800053d,"msm_audio_ion_buf_map",uVar9);
                        dma_buf_put(arg1_00);
                        uVar11 = 0;
                    }
                    _printk(0x8000473,"msm_audio_ion_import",uVar9);
                    sym.mievent_report(noname_0,uVar9);
                    iVar4 = uVar9;
                    if (iVar4 < 0) goto code_r0x08002448;
                    arg1_00 = NULL;
                }
                else {
                    iVar2 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar2 = 0x30;
                    }
                    puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
                    if (puVar7 == NULL) {
                        uVar10 = 0;
                        uVar9 = 0xfffffff4;
code_r0x080022a8:
                        kfree(puVar6);
                        if (cVar3 != '\0') goto code_r0x0800222c;
code_r0x080022b8:
                        uVar11 = 0;
                    }
                    else {
                        puVar7[2] = arg1_00;
                        uVar10 = *arg1_00;
                        *puVar7 = uVar10;
                        piVar12 = dma_buf_attach(arg1_00,uVar16);
                        puVar7[3] = piVar12;
                        if (0xfffffffffffff000 < piVar12) {
                            _dev_err(uVar16,"%s: Fail to attach dma_buf to CB, rc = %d\n","msm_audio_dma_buf_map",
                                     piVar12 & 0xffffffff);
code_r0x080025d0:
                            uVar9 = piVar12 & 0xffffffff;
                            kfree(puVar6);
                            puVar6 = puVar7;
                            goto code_r0x080022a8;
                        }
                        piVar8 = dma_buf_map_attachment(piVar12,0);
                        puVar7[4] = piVar8;
                        if (0xfffffffffffff000 < piVar8) {
                            _dev_err(uVar16,"%s: Fail to map attachment, rc = %d\n","msm_audio_dma_buf_map",
                                     piVar8 & 0xffffffff);
                            dma_buf_detach(arg1_00,piVar12);
                            piVar12 = piVar8;
                            goto code_r0x080025d0;
                        }
                        uVar11 = *(*piVar8 + 0x10);
                        kfree(puVar6);
                        mutex_lock(iVar14 + -0x60);
                        piVar12 = *(iVar14 + -0x68);
                        puVar6 = puVar7 + 5;
                        uVar9 = __list_add_valid(puVar6,piVar12,iVar14 + -0x70);
                        if ((uVar9 & 1) != 0) {
                            *(iVar14 + -0x68) = puVar6;
                            puVar7[5] = iVar14 + -0x70;
                            puVar7[6] = piVar12;
                            *piVar12 = puVar6;
                        }
                        mutex_unlock(iVar14 + -0x60);
                        if (cVar3 != '\0') goto code_r0x08002234;
                    }
code_r0x08002308:
                    iVar4 = 0;
                }
                *piVar5 = iVar13;
                *(piVar5 + 4) = arg1_00;
                *(piVar5 + 6) = uVar11;
                *(piVar5 + 2) = uVar10;
                *(piVar5 + 8) = *(iVar14 + -0x80);
                mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                piVar8 = *0x8000098;
                for (piVar12 = *0x8000090; piVar12 != 0x8000090; piVar12 = *piVar12) {
                    if (*(piVar12 + -5) == iVar13) {
                        _printk(0x8000596,"msm_audio_update_fd_list");
                        goto code_r0x0800238c;
                    }
                }
                piVar12 = piVar5 + 10;
                uVar9 = __list_add_valid(piVar12,*0x8000098,0x8000090);
                if ((uVar9 & 1) != 0) {
                    *0x8000098 = piVar12;
                    piVar5[10] = 0x8000090;
                    piVar5[0xb] = 0;
                    *(piVar5 + 0xc) = piVar8;
                    *piVar8 = piVar12;
                }
                goto code_r0x0800238c;
            }
            _printk(0x800022b,"msm_audio_ion_import");
            uVar9 = 0xffffffea;
        }
code_r0x08002448:
        iVar4 = uVar9;
        _printk(0x8000631,"msm_audio_ion_ioctl",uVar9);
        kfree(iVar15);
        kfree(piVar5);
        break;
    case 0x8001f88:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,arg2,uVar9);
        for (piVar12 = *0x8000090; piVar12 != 0x8000090; piVar12 = *piVar12) {
            if (*(piVar12 + -5) == iVar13) {
                iVar14 = piVar12[-3];
                goto code_r0x08002168;
            }
        }
        iVar14 = 0;
code_r0x08002168:
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        iVar4 = sym.msm_audio_ion_free(iVar14,arg2_00);
        if (iVar4 < 0) {
            _printk(0x8000212,"msm_audio_ion_ioctl",iVar4);
        }
        else if (iVar14 == 0) {
            _printk(0x800027f,"msm_audio_delete_fd_entry");
        }
        else {
            mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            piVar12 = 0x8000090;
            do {
                piVar12 = *piVar12;
                if (piVar12 == 0x8000090) goto code_r0x0800238c;
            } while (piVar12[-3] != iVar14);
            uVar9 = __list_del_entry_valid(piVar12);
            if ((uVar9 & 1) != 0) {
                iVar14 = *piVar12;
                piVar8 = piVar12[1];
                *(iVar14 + 8) = piVar8;
                *piVar8 = iVar14;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            kfree(piVar12 + -5);
code_r0x0800238c:
            mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        }
        break;
    case 0x8001fd0:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,arg2,uVar9);
        piVar12 = *0x8000090;
        if (*0x8000090 != 0x8000090) {
code_r0x08001ff4:
            if (piVar12[-5] != iVar13) goto code_r0x08002000;
            iVar14 = piVar12[-2];
            iVar15 = piVar12[-4];
            mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            iVar4 = hyp_assign_phys(iVar14,iVar15,&stack0xffffffffffffff74,1,&stack0xffffffffffffff88,
                                    &stack0xffffffffffffff60,2);
            if (iVar4 < 0) {
                uVar16 = 0x800064c;
code_r0x08002404:
                _printk(uVar16,"msm_audio_ion_ioctl",iVar4,iVar14,iVar15);
                break;
            }
            mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
            piVar12 = *0x8000090;
            goto joined_r0x080020cc;
        }
        goto code_r0x08002050;
    case 0x8002014:
        mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,arg2,uVar9);
        for (piVar12 = *0x8000090; piVar12 != 0x8000090; piVar12 = *piVar12) {
            if (*(piVar12 + -5) == iVar13) {
                iVar14 = piVar12[-2];
                iVar15 = piVar12[-4];
                mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                iVar4 = hyp_assign_phys(iVar14,iVar15,&stack0xffffffffffffff78,2,&stack0xffffffffffffff6c,
                                        &stack0xffffffffffffff70,1);
                if (iVar4 < 0) {
                    uVar16 = 0x80001d4;
                    goto code_r0x08002404;
                }
                mutex_lock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
                piVar12 = *0x8000090;
                goto joined_r0x0800213c;
            }
        }
code_r0x08002050:
        mutex_unlock(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt);
        _printk(0x8000778,"msm_audio_ion_ioctl",0xffffffea);
        iVar14 = -0x16;
        goto code_r0x0800239c;
    case 0x80022c4:
        goto code_r0x080022c4;
    }
code_r0x08002398:
    iVar14 = iVar4;
code_r0x0800239c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_68) {
        iVar14 = __stack_chk_fail(iVar14);
        *extraout_x18 = sym.msm_audio_ion_open;
        get_device(*(*(iVar14 + 0x2b0) + -8));
        return 0;
    }
    return iVar14;
joined_r0x0800213c:
    if (piVar12 == 0x8000090) goto code_r0x0800238c;
    if (*(piVar12 + -5) == iVar13) {
        *(piVar12 + 2) = 0;
        goto code_r0x0800238c;
    }
    piVar12 = *piVar12;
    goto joined_r0x0800213c;
code_r0x08002000:
    piVar12 = *piVar12;
    if (piVar12 == 0x8000090) goto code_r0x08002050;
    goto code_r0x08001ff4;
joined_r0x080020cc:
    if (piVar12 == 0x8000090) goto code_r0x0800238c;
    if (*(piVar12 + -5) == iVar13) {
        *(piVar12 + 2) = 1;
        goto code_r0x0800238c;
    }
    piVar12 = *piVar12;
    goto joined_r0x080020cc;
}


// ===== sym.msm_audio_ion_open @ 0x080025e4 (size 48) =====

ulong sym.msm_audio_ion_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    get_device(*(*(arg1 + 0x2b0) + -8));
    return 0;
}


// ===== sym.msm_audio_ion_release @ 0x08002614 (size 48) =====

ulong sym.msm_audio_ion_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    put_device(*(*(arg1 + 0x2b0) + -8));
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002644 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002688

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
    //switch table (4 cases) at 0x800016c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800269c);
    (*pcVar1)();
}


// ===== sym.msm_audio_ion_init @ 0x080026d8 (size 52) =====

void sym.msm_audio_ion_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_audio_ion_probe.152d80f47529e2263e7115b3fced426c.cfi_jt,obj.__this_module);
    return;
}

