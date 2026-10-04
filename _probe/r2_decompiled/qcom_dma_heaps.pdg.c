// decompiled from qcom_dma_heaps by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1284) =====

//WARNING: Switch with 1 destination removed at 0x080039b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x37031ad8961dc2e) {
        if (arg1 < -0x539c5f2608f8d3ba) {
            if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x7b10bcc8d5245985) {
                    if ((pcVar1 + -0x8003698 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x08003974;
                }
                if (arg1 != -0x642b51cc1cad4d17) {
                    if (arg1 != -0x5b778d75712e60d6) goto code_r0x08003974;
                    pcVar2 = sym.qcom_secure_system_heap_prefetch.cfi_jt;
                    goto code_r0x080034a4;
                }
                pcVar2 = sym.qcom_sg_detach.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    pcVar2 = sym.qcom_dma_heaps_restore.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                    goto code_r0x080034a4;
                }
                if (arg1 == -0x56327e2541f199dc) {
                    pcVar2 = sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr;
                }
                else {
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x08003974;
                    pcVar2 = sym.secure_system_heap_prefetch_work.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 == -0x539c5f2608f8d3ba) {
                pcVar2 = sym.qcom_sg_unmap_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
            else if (arg1 == -0x4412db6d33002381) {
                pcVar2 = sym.qcom_sg_vunmap.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08003974;
                pcVar2 = sym.qcom_dma_heap_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            }
        }
        else if (arg1 < -0xec78b8726b9c1e8) {
            if (arg1 != -0x2ee0710dce68437c) {
                if (arg1 != -0x2769ed5bfcc998a3) goto code_r0x08003974;
                pcVar2 = sym.dynamic_page_pool_shrink_scan.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt;
                goto code_r0x080034a4;
            }
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 == -0xec78b8726b9c1e8) {
                pcVar2 = sym.enable_show.732c52d7144bd185e75e541fa94eb357.cfi_jt;
                goto code_r0x080034d8;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003974;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x547401c04b8af610) {
        if (arg1 < 0x2b8902e50afe9cf7) {
            if (arg1 != 0x37031ad8961dc2e) {
                if (arg1 != 0x4aab9a966946222) {
                    if (arg1 != 0x1b6c344e75cfc4ea) goto code_r0x08003974;
                    pcVar2 = sym.enable_store.732c52d7144bd185e75e541fa94eb357.cfi_jt;
                    goto code_r0x080034d8;
                }
                pcVar2 = sym.qcom_sg_dma_buf_end_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt;
                goto code_r0x080034a4;
            }
            pcVar2 = sym.qcom_sg_map_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt;
        }
        else {
            if (arg1 < 0x520645905856ce9c) {
                if (arg1 == 0x2b8902e50afe9cf7) {
                    pcVar2 = sym.sc_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt;
code_r0x080034d8:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x08003974;
                }
                if (arg1 != 0x40c16155a9c69947) goto code_r0x08003974;
                pcVar2 = sym.get_pool_size_bytes.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt;
code_r0x080034a4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003974;
            }
            if (arg1 == 0x520645905856ce9c) {
                pcVar2 = sym.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
            else {
                if (arg1 != 0x525ddc1da7a19ab6) goto code_r0x08003974;
                pcVar2 = sym.qcom_sg_release.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x547401c04b8af610) {
            pcVar2 = sym.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt;
        }
        else {
            if (arg1 != 0x5c6c625b20f0ff15) {
                if (arg1 != 0x62c43346498fd2ff) goto code_r0x08003974;
                pcVar2 = sym.qcom_sg_dma_buf_begin_cpu_access.a54aae6d51e276778f768246a9501da3.cfi_jt;
                goto code_r0x080034a4;
            }
            pcVar2 = sym.qcom_sg_attach.a54aae6d51e276778f768246a9501da3.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x6d3ca0043d5858f5) {
            if (arg1 == 0x641d19c7be126e92) {
                pcVar2 = sym.system_heap_refill_worker.732c52d7144bd185e75e541fa94eb357.cfi_jt;
            }
            else {
                if (arg1 != 0x694f814fc4ef8dbe) goto code_r0x08003974;
                pcVar2 = sym.qcom_sg_vm_ops_close.a54aae6d51e276778f768246a9501da3.cfi_jt;
            }
            goto code_r0x080034a4;
        }
        if (arg1 == 0x6d3ca0043d5858f5) {
            pcVar2 = sym.system_heap_buf_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt;
        }
        else {
            if (arg1 != 0x7691151268787864) goto code_r0x08003974;
            pcVar2 = sym.qcom_sg_mmap.a54aae6d51e276778f768246a9501da3.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003974:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80039c8);
    (*pcVar1)();
}


// ===== sym.qcom_sg_release.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003510 (size 8) =====

void sym.qcom_sg_release.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa0);
    iVar1 = mem_buf_vmperm_release(*(iVar3 + 0x78));
    if (iVar1 == 0) {
        msm_dma_buf_freed(iVar3);
        pcVar2 = *(iVar3 + 0xa0);
        if (4 < (pcVar2 + -0x8003698 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x84ef43372adba67b,pcVar2,0x8000a90);
        }
        (*pcVar2)(iVar3);
    }
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08003518 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08003520 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dma_heap_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr @ 0x08003528 (size 8) =====

void sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr
               (int64_t param_1,int64_t *param_2,int param_3)

{
    int64_t iVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    uint64_t *puVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    uint64_t *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_48 = NULL;
    uStack_40 = 0;
    if (param_3 == 0) {
        bVar3 = false;
    }
    else {
        iVar4 = sg_alloc_table(&puStack_48,param_3,0xcc0);
        if (iVar4 == 0) {
            puVar5 = puStack_48;
            for (piVar8 = *param_2; piVar8 != param_2; piVar8 = *piVar8) {
                puVar6 = piVar8 + -1;
                if ((*puVar6 >> 0x10 & 1) == 0) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = *(piVar8 + 0x49);
                }
                if ((puVar6 & 3) != 0) goto code_r0x08009384;
                *(puVar5 + 1) = 0;
                *(puVar5 + 0xc) = 0x1000L << (uVar7 & 0x3f);
                *puVar5 = *puVar5 & 3 | puVar6;
                puVar5 = sg_next();
            }
            iVar4 = sym.hyp_unassign_sg_from_flags(&puStack_48,*(param_1 + 0x60),1);
            sg_free_table(&puStack_48);
            bVar3 = iVar4 != 0;
        }
        else {
            bVar3 = true;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(bVar3);
code_r0x08009384:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8009388);
    (*pcVar2)();
}


// ===== sym.dynamic_page_pool_shrink_scan.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt @ 0x08003530 (size 8) =====

int64_t sym.dynamic_page_pool_shrink_scan.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt(ulong param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = param_2[2];
    if (uVar3 == 0) {
        iVar4 = 0;
    }
    else {
        uVar1 = *param_2;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar4 = 0;
        }
        else {
            iVar6 = 0;
            pcVar5 = _obj.pool_list;
            do {
                iVar2 = sym.dynamic_page_pool_do_shrink(pcVar5 + -0x50,uVar1,uVar3);
                uVar3 = uVar3 - iVar2;
                iVar6 = iVar2 + iVar6;
                if (uVar3 < 1) break;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.pool_list);
            iVar4 = iVar6;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar4;
}


// ===== sym.dynamic_page_pool_shrink_count.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt @ 0x08003538 (size 8) =====

int64_t sym.dynamic_page_pool_shrink_count.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt(ulong param_1,uint32_t *param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t *extraout_x1;
    code *pcVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong ***pppuStack_38;
    ulong ***pppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uVar7 = *param_2;
    mutex_lock(obj.pool_list_lock);
    if (_obj.pool_list == obj.pool_list) {
        iVar8 = 0;
    }
    else {
        iVar8 = sp_el0;
        iVar6 = 0;
        pppuStack_38 = &pppuStack_38;
        pcVar5 = _obj.pool_list;
        do {
            iVar4 = *(pcVar5 + -0x4c);
            if ((*(iVar8 + 0x3c) & 0x20000) != 0 || (uVar7 & 2) != 0) {
                iVar4 = *(pcVar5 + -0x50) + iVar4;
            }
            pcVar1 = pcVar5 + -8;
            pcVar5 = *pcVar5;
            iVar6 = (iVar4 << (*pcVar1 & 0x1f)) + iVar6;
        } while (pcVar5 != obj.pool_list);
        iVar8 = iVar6;
        pppuStack_30 = pppuStack_38;
    }
    mutex_unlock(obj.pool_list_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_shrink_scan;
    uVar7 = extraout_x1[2];
    if (uVar7 == 0) {
        iVar8 = 0;
    }
    else {
        uVar2 = *extraout_x1;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar8 = 0;
        }
        else {
            iVar6 = 0;
            pcVar5 = _obj.pool_list;
            do {
                iVar4 = sym.dynamic_page_pool_do_shrink(pcVar5 + -0x50,uVar2,uVar7);
                uVar7 = uVar7 - iVar4;
                iVar6 = iVar4 + iVar6;
                if (uVar7 < 1) break;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.pool_list);
            iVar8 = iVar6;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar8;
}


// ===== sym.secure_system_heap_prefetch_work.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt @ 0x08003540 (size 8) =====

void sym.secure_system_heap_prefetch_work.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt(void)

{
    int64_t iVar1;
    code cVar2;
    int64_t ***pppiVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t *arg1;
    uint64_t *puVar11;
    uchar uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t uVar15;
    int64_t ****ppppiVar16;
    int64_t ****ppppiVar17;
    code *pcVar18;
    int64_t iVar19;
    ulong unaff_x30;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar6 = _raw_spin_lock_irqsave
                      (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
    if (_obj.prefetch_list != obj.prefetch_list) {
        pcVar4 = _obj.prefetch_list;
        do {
            pcVar18 = *pcVar4;
            uVar8 = __list_del_entry_valid(pcVar4);
            if ((uVar8 & 1) != 0) {
                iVar14 = *pcVar4;
                piVar7 = *(pcVar4 + 8);
                *(iVar14 + 8) = piVar7;
                *piVar7 = iVar14;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore
                      (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar6);
            cVar2 = pcVar4[0x20];
            piVar7 = dma_heap_get_drvdata(*(pcVar4 + 0x10));
            if (cVar2 == 0x0) {
                iVar14 = *(pcVar4 + 0x10);
                iVar1 = *(pcVar4 + 0x18);
                pppiStack_78 = &pppiStack_78;
                pppiStack_70 = &pppiStack_78;
                if (_segment.ehdr == 0) {
                    iVar9 = dma_heap_find("qcom,system");
                    if (iVar9 == 0) {
                        _printk(0x8000bca);
                    }
                    else {
                        iVar9 = dma_heap_get_drvdata();
                        _segment.ehdr = *(iVar9 + 8);
                    }
                    if (_segment.ehdr == 0) {
                        _printk(0x8000b29,"get_pages");
                        goto code_r0x080096e8;
                    }
                }
                iVar9 = _segment.ehdr;
                iVar5 = 0;
                if (iVar1 != 0) {
                    uVar8 = 9;
                    iVar19 = iVar1;
                    do {
                        puVar10 = sym.qcom_sys_heap_alloc_largest_available(iVar9,iVar19,uVar8);
                        pppiVar3 = pppiStack_70;
                        if (puVar10 == NULL) {
                            _printk(0x8001d2e,"get_pages",iVar19,iVar1);
                            arg1 = 0xfffffffffffffff4;
                            ppppiVar16 = pppiStack_78;
                            goto code_r0x08009984;
                        }
                        ppppiVar16 = puVar10 + 1;
                        uVar8 = __list_add_valid(ppppiVar16,pppiStack_70,&pppiStack_78);
                        if ((uVar8 & 1) != 0) {
                            puVar10[1] = &pppiStack_78;
                            puVar10[2] = pppiVar3;
                            pppiStack_70 = ppppiVar16;
                            *pppiVar3 = ppppiVar16;
                        }
                        if ((*puVar10 >> 0x10 & 1) == 0) {
                            uVar13 = 0;
                            if ((*puVar10 >> 0x10 & 1) == 0) goto code_r0x080097f0;
code_r0x08009778:
                            uVar8 = *(puVar10 + 0x51);
                        }
                        else {
                            uVar13 = *(puVar10 + 0x51);
                            if ((*puVar10 >> 0x10 & 1) != 0) goto code_r0x08009778;
code_r0x080097f0:
                            uVar8 = 0;
                        }
                        iVar5 = iVar5 + 1;
                        iVar19 = (-0x1000L << (uVar13 & 0x3f)) + iVar19;
                    } while (iVar19 != 0);
                }
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
                if (arg1 == NULL) {
                    arg1 = 0xfffffffffffffff4;
                    ppppiVar16 = pppiStack_78;
code_r0x08009984:
                    while (&pppiStack_78 != ppppiVar16) {
                        if ((ppppiVar16[-1] >> 0x10 & 1) == 0) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = *(ppppiVar16 + 0x49);
                        }
                        ppppiVar17 = *ppppiVar16;
                        __free_pages(ppppiVar16 + -1,uVar12);
                        ppppiVar16 = ppppiVar17;
                    }
                }
                else {
                    iVar5 = sg_alloc_table(arg1,iVar5,0xcc0);
                    if (iVar5 != 0) {
                        _printk(0x8001215,"get_pages",iVar5);
                        kfree(arg1);
                        arg1 = iVar5;
                        ppppiVar16 = pppiStack_78;
                        goto code_r0x08009984;
                    }
                    if (&pppiStack_78 != pppiStack_78) {
                        puVar11 = *arg1;
                        ppppiVar16 = pppiStack_78;
                        do {
                            ppppiVar17 = ppppiVar16 + -1;
                            if ((*ppppiVar17 >> 0x10 & 1) == 0) {
                                uVar8 = 0;
                            }
                            else {
                                uVar8 = *(ppppiVar16 + 0x49);
                            }
                            if ((ppppiVar17 & 3) != 0) goto code_r0x08009b3c;
                            *(puVar11 + 1) = 0;
                            *(puVar11 + 0xc) = 0x1000L << (uVar8 & 0x3f);
                            *puVar11 = *puVar11 & 3 | ppppiVar17;
                            puVar11 = sg_next();
                            ppppiVar16 = *ppppiVar16;
                        } while (&pppiStack_78 != ppppiVar16);
                    }
                    uVar6 = dma_heap_get_dev(iVar14);
                    dma_map_sgtable(uVar6,arg1,0,0);
                    uVar6 = dma_heap_get_dev(iVar14);
                    dma_unmap_sg_attrs(uVar6,*arg1,*(arg1 + 0xc),0,0);
                }
                if (arg1 < 0xfffffffffffff001) {
                    iVar5 = sym.hyp_assign_sg_from_flags(arg1,piVar7[1],1);
                    if (iVar5 == 0) {
                        if (*(arg1 + 0xc) != 0) {
                            uVar15 = 0;
                            puVar11 = *arg1;
                            do {
                                puVar10 = *puVar11 & 0xfffffffffffffffc;
                                if (((*puVar10 >> 0x10 & 1) == 0) || (*(puVar10 + 0x51) != '\t')) {
                                    if (((*puVar10 >> 0x10 & 1) == 0) || (*(puVar10 + 0x51) != '\x04')) {
                                        if ((*puVar10 >> 0x10 & 1) == 0) {
                                            iVar14 = 2;
                                        }
                                        else {
                                            iVar14 = 2;
                                            if (*(puVar10 + 0x51) != '\0') {
                                                iVar14 = 3;
                                            }
                                        }
                                    }
                                    else {
                                        iVar14 = 1;
                                    }
                                }
                                else {
                                    iVar14 = 0;
                                }
                                sym.dynamic_page_pool_free(*(*piVar7 + iVar14 * 8),puVar10);
                                uVar15 = uVar15 + 1;
                                puVar11 = sg_next(puVar11);
                            } while (uVar15 < *(arg1 + 0xc));
                        }
                    }
                    else if (*(arg1 + 0xc) != 0) {
                        uVar15 = 0;
                        puVar11 = *arg1;
                        do {
                            puVar10 = *puVar11 & 0xfffffffffffffffc;
                            if ((*puVar10 >> 0x10 & 1) == 0) {
                                uVar12 = 0;
                            }
                            else {
                                uVar12 = *(puVar10 + 0x51);
                            }
                            __free_pages(puVar10,uVar12);
                            uVar15 = uVar15 + 1;
                            puVar11 = sg_next(puVar11);
                        } while (uVar15 < *(arg1 + 0xc));
                    }
                    sg_free_table(arg1);
                }
            }
            else {
                sym.dynamic_page_pool_shrink_high_and_low(*piVar7,3,*(pcVar4 + 0x18) >> 0xc);
            }
code_r0x080096e8:
            kfree(pcVar4);
            uVar6 = _raw_spin_lock_irqsave
                              (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
            pcVar4 = pcVar18;
        } while (pcVar18 != obj.prefetch_list);
    }
    _raw_spin_unlock_irqrestore
              (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar6);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08009b3c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8009b40);
    (*pcVar4)();
}


// ===== sym.system_heap_buf_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt @ 0x08003548 (size 8) =====

ulong sym.system_heap_buf_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uchar uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t *piVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t *puVar22;
    ulong *arg2;
    uint64_t uVar23;
    ulong unaff_x30;
    uint64_t *puStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    int64_t aiStack_170 [34];
    
    *in_x18 = unaff_x30;
    iVar4 = _segment.ehdr;
    iVar5 = sp_el0;
    aiStack_170[0x20] = *(iVar5 + 0x5e0);
    iVar5 = dma_heap_get_drvdata(*(param_1 + -0x80));
    if (param_2 == 0) {
        uStack_180 = 0;
        uStack_178 = 0;
        puStack_188 = NULL;
        aiStack_170[0x1e] = 0;
        aiStack_170[0x1f] = 0;
        aiStack_170[0x1c] = 0;
        aiStack_170[0x1d] = 0;
        aiStack_170[0x1a] = 0;
        aiStack_170[0x1b] = 0;
        aiStack_170[0x18] = 0;
        aiStack_170[0x19] = 0;
        aiStack_170[0x16] = 0;
        aiStack_170[0x17] = 0;
        aiStack_170[0x14] = 0;
        aiStack_170[0x15] = 0;
        aiStack_170[0x12] = 0;
        aiStack_170[0x13] = 0;
        aiStack_170[0x10] = 0;
        aiStack_170[0x11] = 0;
        aiStack_170[0xe] = 0;
        aiStack_170[0xf] = 0;
        aiStack_170[0xc] = 0;
        aiStack_170[0xd] = 0;
        aiStack_170[10] = 0;
        aiStack_170[0xb] = 0;
        aiStack_170[8] = 0;
        aiStack_170[9] = 0;
        aiStack_170[6] = 0;
        aiStack_170[7] = 0;
        aiStack_170[4] = 0;
        aiStack_170[5] = 0;
        aiStack_170[2] = 0;
        aiStack_170[3] = 0;
        aiStack_170[0] = 0;
        aiStack_170[1] = 0;
        __sg_page_iter_start(&puStack_188,*(param_1 + -0x30),*(param_1 + -0x24),0);
        uVar6 = __sg_page_iter_next(&puStack_188);
        if ((uVar6 & 1) != 0) {
            uVar6 = 0;
            do {
                uVar20 = uVar6 + 1;
                aiStack_170[uVar6] = (*puStack_188 & 0xfffffffffffffffc) + (uStack_180 & 0xffffffff) * 0x40;
                uVar6 = uVar20;
                if (uVar20 == 0x20) {
                    uVar7 = 0x68000000000703;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar7 = 0x68000000000f03;
                    }
                    iVar16 = vmap(aiStack_170,0x20,4,uVar7);
                    if (iVar16 == 0) goto code_r0x08005750;
                    memset(iVar16,0,0x20000);
                    vunmap(iVar16);
                    uVar6 = 0;
                }
                uVar23 = __sg_page_iter_next(&puStack_188);
            } while ((uVar23 & 1) != 0);
            if (uVar6 != 0) {
                uVar7 = 0x68000000000703;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar7 = 0x68000000000f03;
                }
                iVar16 = vmap(aiStack_170,uVar6,4,uVar7);
                if (iVar16 == 0) {
code_r0x08005750:
                    bVar3 = true;
                    goto code_r0x08005754;
                }
                memset(iVar16,0,uVar6 << 0xc);
                vunmap(iVar16);
            }
        }
        bVar3 = false;
    }
    else {
        bVar3 = param_2 == 1;
    }
code_r0x08005754:
    if (*(param_1 + -0x28) != 0) {
        uVar20 = 0;
        puVar22 = *(param_1 + -0x30);
        do {
            arg2 = *puVar22 & 0xfffffffffffffffc;
            if ((bVar3) || ((iVar4 != 0 && (_segment.ehdr <= _obj.msm_total_pools_size)))) {
                if ((*arg2 >> 0x10 & 1) == 0) {
                    uVar11 = 0;
                }
                else {
                    uVar11 = *(arg2 + 0x51);
                }
                __free_pages(arg2,uVar11);
            }
            else {
                if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\t')) {
                    if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\x04')) {
                        if ((*arg2 >> 0x10 & 1) == 0) {
                            uVar12 = 2;
                        }
                        else {
                            uVar12 = 2;
                            if (*(arg2 + 0x51) != '\0') {
                                uVar12 = 3;
                            }
                        }
                    }
                    else {
                        uVar12 = 1;
                    }
                }
                else {
                    uVar12 = 0;
                }
                iVar16 = *(*(iVar5 + 8) + uVar12 * 8);
                if ((*(iVar16 + 8) < 0x6400L >> (*(iVar16 + 0x48) & 0x3f)) ||
                   (uVar6 = sym.need_free_to_reserve_pool(iVar5,uVar12), (uVar6 & 1) == 0)) {
                    iVar16 = *(iVar5 + 8);
                }
                else {
                    iVar16 = *(iVar5 + 0x10);
                }
                sym.dynamic_page_pool_free(*(iVar16 + uVar12 * 8),arg2);
            }
            uVar20 = uVar20 + 1;
            puVar22 = sg_next(puVar22);
        } while (uVar20 < *(param_1 + -0x28));
    }
    sg_free_table(param_1 + -0x30);
    uVar7 = kfree(param_1 + -0x80);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_170[0x20]) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = 0x80058d4;
    iVar5 = 0;
    iVar16 = sp_el0;
    do {
        iVar13 = *(iVar8 + iVar5 * 8);
        if (((*(iVar13 + 8) < 0x2800L >> (*(iVar13 + 0x48) & 0x3f)) &&
            (iVar13 = *(iVar8 + iVar5 * 8), *(iVar13 + 0x48) != 0)) &&
           (uVar20 = *(iVar13 + 0x44), *(iVar13 + 8) < 0x6400L >> (*(iVar13 + 0x48) & 0x3f))) {
            while( true ) {
                uVar12 = *(iVar13 + 0x44);
                iVar9 = ktime_get();
                if (iVar9 - *(iVar13 + 0x30) < 10000000) break;
                uVar23 = 0x250015 >> ((uVar12 & 0xf) << 1) & 3;
                iVar9 = uVar23 * 0x640 + 0x8028250;
                uVar6 = uVar23;
                do {
                    uVar7 = tpidr_el1;
                    iVar4 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar6 * 0x640),"DMA32");
                    if (iVar4 != 0) {
                        iVar18 = uVar6 * 0x640;
                        uVar12 = *(iVar13 + 0x48);
                        uVar21 = uVar12;
                        puVar22 = iVar18 + 0x80286f0;
                        iVar4 = *(__cpu_online_mask + iVar18);
                        iVar1 = *(__per_cpu_offset + iVar18);
                        uVar14 = *puVar22 & (*puVar22 >> 0x3f ^ 0xffffffffffffffffU);
                        if ((*(iVar18 + 0x80286b0) != 0) && (uVar14 < *(iVar18 + 0x80286b0))) {
                            uVar14 = *puVar22;
                            *puVar22 = 0x640;
                            uVar10 = cpumask_next(delayed_work_timer_fn,0xffffffff,__cpu_online_mask);
                            if (uVar10 < 0x640) {
                                do {
                                    if (0x1f < uVar10) goto code_r0x08005c54;
                                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) +
                                                       *(refcount_warn_saturate + uVar6 * 0x640));
                                    uVar10 = cpumask_next(uVar10,__cpu_online_mask);
                                } while (uVar10 < 0x640);
                            }
                            uVar14 = uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU);
                        }
                        uVar10 = *(uVar6 * 0x640 + 0x8028740);
                        if (uVar23 == 3) {
code_r0x08005c54:
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8005c58);
                            (*pcVar2)();
                        }
                        if (uVar14 - (*(schedule + uVar6 * 0x640) + ~(-1 << (uVar12 & 0x1f)) +
                                     (uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU))) <=
                            *(kernel_kobj + uVar6 * 0x640 + uVar23 * 8) + (1 << (uVar12 & 0x1f)) + iVar1 + iVar4) {
code_r0x08005bdc:
                            uVar7 = ktime_get();
                            *(iVar13 + 0x30) = uVar7;
                            goto code_r0x08005bec;
                        }
                        if (uVar12 != 0) {
                            if (10 < uVar12) goto code_r0x08005bdc;
                            if (uVar12 < 0xd) {
                                uVar12 = 0xc;
                            }
                            iVar17 = uVar12 - uVar21;
                            iVar15 = uVar21 * 0x68;
                            iVar18 = iVar9;
                            while( true ) {
                                if (iVar17 == 0) goto code_r0x08005c54;
                                if ((*(iVar18 + iVar15) != 0) &&
                                   (((piVar19 = iVar18 + iVar15 + -0x60, piVar19 != *piVar19 ||
                                     (piVar19 = iVar18 + iVar15 + -0x50, piVar19 != *piVar19)) ||
                                    (piVar19 = iVar18 + iVar15 + -0x40, piVar19 != *piVar19)))) break;
                                iVar18 = iVar18 + 0x68;
                                uVar12 = uVar21 + 1;
                                uVar21 = uVar12;
                                iVar17 = iVar17 + -1;
                                if (10 < uVar12) goto code_r0x08005bdc;
                            }
                        }
                    }
                    iVar9 = iVar9 + -0x640;
                    bVar3 = 0 < uVar6;
                    uVar6 = uVar6 - 1;
                } while (bVar3);
                uVar7 = tpidr_el1;
                iVar9 = __alloc_pages(uVar7,uVar20 & 0xfffeffff | 0xc00,*(iVar13 + 0x48),0,0);
                if ((iVar9 == 0) ||
                   (sym.dynamic_page_pool_add(iVar13,iVar9), 0x6400L >> (*(iVar13 + 0x48) & 0x3f) <= *(iVar13 + 8)))
                break;
            }
        }
code_r0x08005bec:
        iVar5 = iVar5 + 1;
        if (iVar5 == 3) {
            *(iVar16 + 0x28) = 1;
            DataMemoryBarrier(2,3);
            uVar6 = kthread_should_stop();
            if ((uVar6 & 1) != 0) {
                *(iVar16 + 0x28) = 0;
                DataMemoryBarrier(2,3);
                return 0;
            }
            schedule();
            *(iVar16 + 0x28) = 0;
            iVar5 = 0;
            DataMemoryBarrier(2,3);
        }
    } while( true );
}


// ===== sym.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003550 (size 8) =====

ulong sym.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1)

{
    return *(*(param_1 + 0xa0) + 0x78);
}


// ===== sym.qcom_sg_attach.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003558 (size 8) =====

ulong sym.qcom_sg_attach.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    uint uVar2;
    int iVar3;
    ulong *puVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t *puVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0xa0);
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x28);
    if (puVar4 != NULL) {
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x10);
        if (puVar5 != NULL) {
            iVar3 = sg_alloc_table(puVar5,*(iVar7 + 0x5c),0xcc0);
            if (iVar3 == 0) {
                if (*(iVar7 + 0x5c) != 0) {
                    uVar12 = 0;
                    puVar11 = *(iVar7 + 0x50);
                    puVar10 = *puVar5;
                    do {
                        uVar6 = puVar11[1];
                        uVar2 = *(puVar11 + 0xc);
                        *puVar10 = *puVar11 & 0xfffffffffffffffc | *puVar10 & 3;
                        *(puVar10 + 1) = uVar6;
                        *(puVar10 + 0xc) = uVar2;
                        puVar10 = sg_next(puVar10);
                        uVar12 = uVar12 + 1;
                        puVar11 = sg_next(puVar11);
                    } while (uVar12 < *(iVar7 + 0x5c));
                }
                if (puVar5 < 0xfffffffffffff001) {
                    puVar1 = puVar4 + 2;
                    *puVar4 = *(param_2 + 8);
                    puVar4[1] = puVar5;
                    puVar4[2] = puVar1;
                    puVar4[3] = puVar1;
                    *(puVar4 + 4) = 0;
                    *(param_2 + 0x40) = puVar4;
                    mutex_lock(iVar7 + 0x18);
                    piVar8 = iVar7 + 8;
                    iVar9 = *piVar8;
                    uVar6 = __list_add_valid(puVar1,piVar8,iVar9);
                    if ((uVar6 & 1) != 0) {
                        *(iVar9 + 8) = puVar1;
                        puVar4[2] = iVar9;
                        puVar4[3] = piVar8;
                        *piVar8 = puVar1;
                    }
                    mutex_unlock(iVar7 + 0x18);
                    return 0;
                }
            }
            else {
                kfree(puVar5);
            }
        }
        kfree(puVar4);
    }
    return 0xfffffff4;
}


// ===== sym.system_heap_refill_worker.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003560 (size 8) =====

ulong sym.system_heap_refill_worker.732c52d7144bd185e75e541fa94eb357.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    while( true ) {
        iVar3 = *(*param_1 + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(*param_1 + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(*param_1);
        }
        iVar3 = *(param_1[1] + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(param_1[1] + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(param_1[1]);
        }
        iVar3 = *(param_1[2] + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(param_1[2] + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(param_1[2]);
        }
        *(iVar4 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar5 = kthread_should_stop();
        if ((uVar5 & 1) != 0) break;
        schedule();
        *(iVar4 + 0x28) = 0;
        DataMemoryBarrier(2,3);
    }
    *(iVar4 + 0x28) = 0;
    DataMemoryBarrier(2,3);
    return 0;
}


// ===== sym.system_heap_refill_worker.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt @ 0x08003568 (size 8) =====

ulong sym.system_heap_refill_worker.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt(int64_t param_1)

{
    bool bVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong *in_x18;
    uint64_t uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar20 = 0;
    iVar5 = sp_el0;
    do {
        iVar13 = *(param_1 + iVar20 * 8);
        if (((*(iVar13 + 8) < 0x2800L >> (*(iVar13 + 0x48) & 0x3f)) &&
            (iVar13 = *(param_1 + iVar20 * 8), *(iVar13 + 0x48) != 0)) &&
           (uVar3 = *(iVar13 + 0x44), *(iVar13 + 8) < 0x6400L >> (*(iVar13 + 0x48) & 0x3f))) {
            while( true ) {
                uVar12 = *(iVar13 + 0x44);
                iVar8 = ktime_get();
                if (iVar8 - *(iVar13 + 0x30) < 10000000) break;
                uVar21 = 0x250015 >> ((uVar12 & 0xf) << 1) & 3;
                iVar8 = uVar21 * 0x640 + 0x8028250;
                uVar11 = uVar21;
                do {
                    uVar10 = tpidr_el1;
                    iVar7 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar11 * 0x640),"DMA32");
                    if (iVar7 != 0) {
                        iVar17 = uVar11 * 0x640;
                        uVar12 = *(iVar13 + 0x48);
                        uVar19 = uVar12;
                        puVar2 = iVar17 + 0x80286f0;
                        iVar7 = *(__cpu_online_mask + iVar17);
                        iVar4 = *(__per_cpu_offset + iVar17);
                        uVar14 = *puVar2 & (*puVar2 >> 0x3f ^ 0xffffffffffffffffU);
                        if ((*(iVar17 + 0x80286b0) != 0) && (uVar14 < *(iVar17 + 0x80286b0))) {
                            uVar14 = *puVar2;
                            *puVar2 = 0x640;
                            uVar9 = cpumask_next(delayed_work_timer_fn,0xffffffff,__cpu_online_mask);
                            if (uVar9 < 0x640) {
                                do {
                                    if (0x1f < uVar9) goto code_r0x08005c54;
                                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) +
                                                       *(refcount_warn_saturate + uVar11 * 0x640));
                                    uVar9 = cpumask_next(uVar9,__cpu_online_mask);
                                } while (uVar9 < 0x640);
                            }
                            uVar14 = uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU);
                        }
                        uVar9 = *(uVar11 * 0x640 + 0x8028740);
                        if (uVar21 == 3) {
code_r0x08005c54:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x8005c58);
                            (*pcVar6)();
                        }
                        if (uVar14 - (*(schedule + uVar11 * 0x640) + ~(-1 << (uVar12 & 0x1f)) +
                                     (uVar9 & (uVar9 >> 0x3f ^ 0xffffffffffffffffU))) <=
                            *(kernel_kobj + uVar11 * 0x640 + uVar21 * 8) + (1 << (uVar12 & 0x1f)) + iVar4 + iVar7) {
code_r0x08005bdc:
                            uVar10 = ktime_get();
                            *(iVar13 + 0x30) = uVar10;
                            goto code_r0x08005bec;
                        }
                        if (uVar12 != 0) {
                            if (10 < uVar12) goto code_r0x08005bdc;
                            if (uVar12 < 0xd) {
                                uVar12 = 0xc;
                            }
                            iVar16 = uVar12 - uVar19;
                            iVar15 = uVar19 * 0x68;
                            iVar17 = iVar8;
                            while( true ) {
                                if (iVar16 == 0) goto code_r0x08005c54;
                                if ((*(iVar17 + iVar15) != 0) &&
                                   (((piVar18 = iVar17 + iVar15 + -0x60, piVar18 != *piVar18 ||
                                     (piVar18 = iVar17 + iVar15 + -0x50, piVar18 != *piVar18)) ||
                                    (piVar18 = iVar17 + iVar15 + -0x40, piVar18 != *piVar18)))) break;
                                iVar17 = iVar17 + 0x68;
                                uVar12 = uVar19 + 1;
                                uVar19 = uVar12;
                                iVar16 = iVar16 + -1;
                                if (10 < uVar12) goto code_r0x08005bdc;
                            }
                        }
                    }
                    iVar8 = iVar8 + -0x640;
                    bVar1 = 0 < uVar11;
                    uVar11 = uVar11 - 1;
                } while (bVar1);
                uVar10 = tpidr_el1;
                iVar8 = __alloc_pages(uVar10,uVar3 & 0xfffeffff | 0xc00,*(iVar13 + 0x48),0,0);
                if ((iVar8 == 0) ||
                   (sym.dynamic_page_pool_add(iVar13,iVar8), 0x6400L >> (*(iVar13 + 0x48) & 0x3f) <= *(iVar13 + 8)))
                break;
            }
        }
code_r0x08005bec:
        iVar20 = iVar20 + 1;
        if (iVar20 == 3) {
            *(iVar5 + 0x28) = 1;
            DataMemoryBarrier(2,3);
            uVar11 = kthread_should_stop();
            if ((uVar11 & 1) != 0) {
                *(iVar5 + 0x28) = 0;
                DataMemoryBarrier(2,3);
                return 0;
            }
            schedule();
            *(iVar5 + 0x28) = 0;
            iVar20 = 0;
            DataMemoryBarrier(2,3);
        }
    } while( true );
}


// ===== sym.qcom_dma_heaps_restore.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08003570 (size 8) =====

int sym.qcom_dma_heaps_restore.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.qcom_secure_carveout_heap_restore(param_1,param_2);
    if (arg1 != 0) {
        arg1 = _printk(0x800104a,arg1 & 0xffffffff);
    }
    iVar1 = sym.qcom_secure_system_heap_restore(arg1);
    if (iVar1 != 0) {
        _printk(0x8001898,iVar1);
    }
    return iVar1;
}


// ===== sym.qcom_dma_heaps_freeze.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08003578 (size 8) =====

int sym.qcom_dma_heaps_freeze.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_secure_carveout_heap_freeze(param_1);
    if (iVar1 == 0) {
        iVar1 = sym.qcom_secure_system_heap_freeze();
        if (iVar1 == 0) {
            return 0;
        }
        auVar3 = _printk(0x800186d,iVar1);
        iVar1 = sym.qcom_secure_carveout_heap_restore(auVar3._0_8_,auVar3._8_8_);
        if (iVar1 == 0) {
            return -0x10;
        }
        uVar2 = 0x800104a;
    }
    else {
        uVar2 = 0x8001bca;
    }
    _printk(uVar2,iVar1);
    return iVar1;
}


// ===== sym.qcom_sg_detach.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003580 (size 8) =====

void sym.qcom_sg_detach.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_2 + 0x40);
    iVar1 = *(param_1 + 0xa0) + 0x18;
    mutex_lock(iVar1);
    uVar4 = __list_del_entry_valid(iVar5 + 0x10);
    if ((uVar4 & 1) != 0) {
        iVar2 = *(iVar5 + 0x10);
        piVar3 = *(iVar5 + 0x18);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(iVar5 + 0x10) = 0xdead000000000100;
    *(iVar5 + 0x18) = 0xdead000000000122;
    mutex_unlock(iVar1);
    sg_free_table(*(iVar5 + 8));
    kfree(*(iVar5 + 8));
    kfree(iVar5);
    return;
}


// ===== sym.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003588 (size 8) =====

uint64_t sym.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint64_t uVar1;
    char cVar2;
    int iVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint64_t *puStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0xa0);
    mem_buf_vmperm_pin(*(iVar9 + 0x78));
    uVar5 = mem_buf_vmperm_can_vmap(*(iVar9 + 0x78));
    if ((uVar5 & 1) == 0) {
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
        uVar5 = 0xffffffff;
        goto code_r0x0800490c;
    }
    mutex_lock(iVar9 + 0x18);
    if (*(iVar9 + 0x60) == 0) {
        uVar5 = *(iVar9 + 0x48) + 0xfff;
        iVar6 = vmalloc(-(uVar5 >> 0x2b & 1) & 0xfffffff800000000 | (uVar5 >> 0xc & 0xffffffff) << 3);
        uStack_78 = 0;
        uStack_70 = 0;
        puStack_80 = NULL;
        uVar1 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f03;
        }
        if (iVar6 == 0) {
code_r0x080048f8:
            uVar5 = 0xfffffffffffffff4;
        }
        else {
            cVar2 = *(iVar9 + 0x70);
            __sg_page_iter_start(&puStack_80,*(iVar9 + 0x50),*(iVar9 + 0x5c),0);
            uVar7 = __sg_page_iter_next(&puStack_80);
            if ((uVar7 & 1) != 0) {
                iVar10 = 0;
                do {
                    if (uVar5 * 0x100000 >> 0x20 <= iVar10 >> 3) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x800489c);
                        (*pcVar4)();
                    }
                    *(iVar6 + iVar10) = (*puStack_80 & 0xfffffffffffffffc) + (uStack_78 & 0xffffffff) * 0x40;
                    uVar7 = __sg_page_iter_next(&puStack_80);
                    iVar10 = iVar10 + 8;
                } while ((uVar7 & 1) != 0);
            }
            if (cVar2 != '\0') {
                uVar1 = uVar1 | 0x60000000000008;
            }
            uVar5 = vmap(iVar6,uVar5 >> 0xc & 0xffffffff,4,uVar1);
            vfree(iVar6);
            if (uVar5 == 0) goto code_r0x080048f8;
            if (uVar5 < 0xfffffffffffff001) {
                *(iVar9 + 0x68) = uVar5;
                *(iVar9 + 0x60) = *(iVar9 + 0x60) + 1;
                *param_2 = uVar5;
                goto code_r0x080047e0;
            }
        }
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
    }
    else {
        *(iVar9 + 0x60) = *(iVar9 + 0x60) + 1;
        *param_2 = *(iVar9 + 0x68);
code_r0x080047e0:
        uVar5 = 0;
        *(param_2 + 1) = 0;
    }
    mutex_unlock(iVar9 + 0x18);
code_r0x0800490c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        puVar8 = auVar11._8_8_;
        *extraout_x18 = sym.qcom_sg_vunmap;
        iVar9 = *(auVar11._0_8_ + 0xa0);
        mutex_lock(iVar9 + 0x18);
        iVar3 = *(iVar9 + 0x60) + -1;
        *(iVar9 + 0x60) = iVar3;
        if (iVar3 == 0) {
            vunmap(*(iVar9 + 0x68));
            *(iVar9 + 0x68) = 0;
        }
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
        uVar5 = mutex_unlock(iVar9 + 0x18);
        if (*(puVar8 + 1) != '\0') {
            *(puVar8 + 1) = 0;
        }
        *puVar8 = 0;
        return uVar5;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.qcom_secure_system_heap_prefetch.cfi_jt @ 0x08003590 (size 8) =====

void sym.qcom_secure_system_heap_prefetch.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_secure_system_heap_resize(param_1,param_2,0);
    return;
}


// ===== sym.qcom_secure_system_heap_drain.cfi_jt @ 0x08003598 (size 8) =====

void sym.qcom_secure_system_heap_drain.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_secure_system_heap_resize(param_1,param_2,1);
    return;
}


// ===== sym.qcom_sg_vunmap.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x080035a0 (size 8) =====

void sym.qcom_sg_vunmap.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa0);
    mutex_lock(iVar2 + 0x18);
    iVar1 = *(iVar2 + 0x60) + -1;
    *(iVar2 + 0x60) = iVar1;
    if (iVar1 == 0) {
        vunmap(*(iVar2 + 0x68));
        *(iVar2 + 0x68) = 0;
    }
    mem_buf_vmperm_unpin(*(iVar2 + 0x78));
    mutex_unlock(iVar2 + 0x18);
    if (*(param_2 + 1) != '\0') {
        *(param_2 + 1) = 0;
    }
    *param_2 = 0;
    return;
}


// ===== sym.qcom_dma_heap_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080035a8 (size 8) =====

uint64_t sym.qcom_dma_heap_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint *arg1;
    uint32_t uVar1;
    int *arg1_00;
    ulong *in_x18;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_system_heap_create(0x8001651,0x80017a8,0);
    sym.qcom_secure_system_heap_create(0x8001cf3,0,0x80000);
    sym.qcom_secure_system_heap_create(0x8001a5c,0,0x100000);
    arg1_00 = sym.parse_heap_dt(param_1);
    if ((arg1_00 != NULL) && (arg1_00 < 0xfffffffffffff001)) {
        if (*arg1_00 < 1) {
            uVar2 = 0;
        }
        else {
            iVar3 = 0;
            iVar4 = 0;
            uVar2 = 0;
            do {
                iVar5 = *(arg1_00 + 2);
                arg1 = iVar5 + iVar3;
                uVar1 = 0xffffffea;
                switch(*arg1) {
                case 0:
                    uVar1 = sym.qcom_secure_carveout_heap_create(arg1);
                    break;
                case 1:
                    uVar1 = sym.qcom_carveout_heap_create(arg1);
                    break;
                case 2:
                    uVar1 = sym.qcom_add_cma_heap(arg1);
                    break;
                case 3:
                    goto code_r0x0800380c;
                default:
                    _printk(0x8000b5f,"qcom_dma_heap_probe");
                    uVar1 = uVar2;
                }
                if (uVar1 == 0) {
                    _printk(0x8001aa8,"qcom_dma_heap_probe",*(iVar5 + iVar3 + 8));
                    uVar2 = uVar1;
                }
                else {
code_r0x0800380c:
                    _printk(0x8001a72,"qcom_dma_heap_probe",*(iVar5 + iVar3 + 8),uVar1);
                    uVar2 = uVar1;
                }
                iVar4 = iVar4 + 1;
                iVar3 = iVar3 + 0x38;
            } while (iVar4 < *arg1_00);
        }
        sym.qcom_add_bitstream_contig_heap(0x800127a);
        sym.free_pdata(arg1_00);
        arg1_00 = uVar2;
    }
    return arg1_00 & 0xffffffff;
}


// ===== sym.qcom_sg_dma_buf_begin_cpu_access.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x080035b0 (size 8) =====

ulong sym.qcom_sg_dma_buf_begin_cpu_access.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,uint param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa0);
    if (*(iVar2 + 0x70) == '\0') {
        mutex_lock(iVar2 + 0x18);
        uVar1 = mem_buf_vmperm_can_cmo(*(iVar2 + 0x78));
        if ((uVar1 & 1) != 0) {
            for (puVar3 = *(iVar2 + 8); iVar2 + 8 != puVar3; puVar3 = *puVar3) {
                if (*(puVar3 + 2) != '\0') {
                    dma_sync_sg_for_cpu(puVar3[-2],*puVar3[-1],*(puVar3[-1] + 0xc),param_2);
                }
            }
        }
        mutex_unlock(iVar2 + 0x18);
    }
    return 0;
}


// ===== sym.qcom_sg_dma_buf_end_cpu_access.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x080035b8 (size 8) =====

ulong sym.qcom_sg_dma_buf_end_cpu_access.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,uint param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa0);
    if (*(iVar2 + 0x70) == '\0') {
        mutex_lock(iVar2 + 0x18);
        uVar1 = mem_buf_vmperm_can_cmo(*(iVar2 + 0x78));
        if ((uVar1 & 1) != 0) {
            for (puVar3 = *(iVar2 + 8); iVar2 + 8 != puVar3; puVar3 = *puVar3) {
                if (*(puVar3 + 2) != '\0') {
                    dma_sync_sg_for_device(puVar3[-2],*puVar3[-1],*(puVar3[-1] + 0xc),param_2);
                }
            }
        }
        mutex_unlock(iVar2 + 0x18);
    }
    return 0;
}


// ===== sym.enable_show.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x080035c0 (size 8) =====

int64_t sym.enable_show.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000f80,*(_segment.ehdr + 0x18));
    return iVar1;
}


// ===== sym.pid_show.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x080035c8 (size 8) =====

int64_t sym.pid_show.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1
                     );
    return iVar1;
}


// ===== sym.debug_show.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x080035d0 (size 8) =====

int64_t sym.debug_show.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000f80,*(_segment.ehdr + 0x1c));
    return iVar1;
}


// ===== sym.msm_total_pools_max_show.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt @ 0x080035d8 (size 8) =====

int64_t sym.msm_total_pools_max_show.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80015ba,_segment.ehdr);
    return iVar1;
}


// ===== sym.scene_show.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x080035e0 (size 8) =====

int64_t sym.scene_show.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80015ba,*(_segment.ehdr + 0x28));
    return iVar1;
}


// ===== sym.config_show.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x080035e8 (size 8) =====

int64_t sym.config_show.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *puVar5;
    ulong uVar6;
    uint uVar7;
    uint *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_c0;
    ulong uStack_b8;
    uint auStack_b0 [2];
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    uint32_t uStack_80;
    ulong uStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    uVar10 = 0;
    uVar9 = 0;
    iStack_68 = *(iVar3 + 0x5e0);
    do {
        uStack_70 = 0;
        uStack_78 = 0x206425;
        pcVar4 = 0x80016ac;
        iVar2 = snprintf(param_3 + uVar9,0x1000 - uVar9,0x80016ac,*(obj.config_show_name + uVar10 * 8));
        uVar1 = uVar10 & 0xfffffffd;
        if (uVar1 == 0) {
            uVar6 = *(**(obj.config_show_pool + uVar10 * 8) + 8);
        }
        else {
            uVar6 = **(obj.config_show_val + uVar10 * 8);
        }
        uVar9 = iVar2 + uVar9;
        if (uVar9 < 0xfff) {
            pcVar4 = &uStack_78;
            iVar2 = snprintf(param_3 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
        }
        if (uVar1 == 0) {
            uVar6 = *(*(*(obj.config_show_pool + uVar10 * 8) + 8) + 8);
        }
        else {
            uVar6 = *(*(obj.config_show_val + uVar10 * 8) + 4);
        }
        if (uVar9 < 0xfff) {
            pcVar4 = &uStack_78;
            iVar2 = snprintf(param_3 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,0xa5d6425);
        if (uVar1 == 0) {
            uVar6 = *(*(*(obj.config_show_pool + uVar10 * 8) + 0x10) + 8);
        }
        else {
            uVar6 = *(*(obj.config_show_val + uVar10 * 8) + 8);
        }
        if (uVar9 < 0xfff) {
            pcVar4 = &uStack_78;
            iVar2 = snprintf(param_3 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
        }
        uVar7 = uVar6 >> 0x20;
        uVar10 = uVar10 + 1;
    } while (uVar10 != 7);
    iVar3 = uVar9;
    if (uVar9 < 0xfff) {
        pcVar4 = 
        "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
        ;
        uVar6 = *(_segment.ehdr + 0x30);
        uStack_80 = *(_segment.ehdr + 0x18);
        iVar2 = snprintf(param_3 + iVar3,0x1000 - iVar3,
                         "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
                         ,uVar6,*(_segment.ehdr + 0x34),*(_segment.ehdr + 0x2c),*(_segment.ehdr + 0x20),
                         *(_segment.ehdr + 0x24));
        uVar7 = uVar6 >> 0x20;
        iVar3 = iVar2 + uVar9;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        __stack_chk_fail(iVar3);
        iVar8 = CONCAT44(uVar7,*extraout_x9);
        puVar5 = &uStack_c0;
        *extraout_x18 = 0x80081f4;
        uStack_98 = 0x80081f4;
        iVar3 = sp_el0;
        iStack_a8 = *(iVar3 + 0x5e0);
        auStack_b0[0] = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        puStack_a0 = &stack0xffffffffffffffa0;
        iStack_90 = param_3;
        iVar2 = sscanf(pcVar4,"%d %d %d %d %d",&uStack_c0,&uStack_c0 | 4,&uStack_b8,&uStack_b8 + 4,auStack_b0);
        iVar3 = _segment.ehdr;
        if (iVar2 == 5) {
            *(_segment.ehdr + 0x44) = uStack_c0;
            *(iVar3 + 0x48) = uStack_c0._4_4_;
            *(iVar3 + 0x4c) = uStack_b8;
            *(iVar3 + 0x20) = uStack_b8._4_4_;
            *(iVar3 + 0x24) = auStack_b0[0];
        }
        else {
            _printk(0x80015be);
            iVar8 = -0x16;
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_a8) {
            return iVar8;
        }
        __stack_chk_fail();
        *extraout_x18_00 = sym.pid_show;
        iVar2 = scnprintf(puVar5,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,
                          ~obj.use_name_cmp & 1);
        return iVar2;
    }
    return iVar3;
}


// ===== sym.qcom_sg_map_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x080035f0 (size 8) =====

ulong * sym.qcom_sg_map_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t *param_1,uint param_2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1[8];
    uVar6 = param_1[9];
    iVar7 = *(*param_1 + 0xa0);
    puVar4 = *(iVar1 + 8);
    uVar5 = *(iVar7 + 0x78);
    mutex_lock(iVar7 + 0x18);
    mem_buf_vmperm_pin(uVar5);
    if ((*(iVar7 + 0x70) != '\0') || (uVar3 = mem_buf_vmperm_can_cmo(uVar5), (uVar3 & 1) == 0)) {
        uVar6 = uVar6 | 0x20;
    }
    if ((uVar6 >> 0x11 & 1) == 0) {
        if (*(iVar1 + 0x20) == '\0') {
            iVar2 = dma_map_sgtable(param_1[1],puVar4,param_2,uVar6);
            if (iVar2 == 0) goto code_r0x08004144;
        }
        else {
            _dev_err(param_1[1],"Error: Dma-buf is already mapped!\n");
            iVar2 = -0x10;
        }
    }
    else {
        iVar2 = msm_dma_map_sg_attrs(param_1[1],*puVar4,*(puVar4 + 0xc),param_2,*param_1,uVar6);
        if (0 < iVar2) {
            *(puVar4 + 1) = iVar2;
code_r0x08004144:
            *(iVar1 + 0x20) = 1;
            goto code_r0x08004160;
        }
        iVar2 = -0x16;
    }
    puVar4 = iVar2;
    mem_buf_vmperm_unpin(uVar5);
code_r0x08004160:
    mutex_unlock(iVar7 + 0x18);
    return puVar4;
}


// ===== sym.qcom_sg_dma_buf_end_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x080035f8 (size 8) =====

uint sym.qcom_sg_dma_buf_end_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt
               (int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa0);
    if (*(iVar3 + 0x70) != '\0') {
        return 0;
    }
    mutex_lock(iVar3 + 0x18);
    uVar2 = mem_buf_vmperm_can_cmo(*(iVar3 + 0x78));
    if ((uVar2 & 1) != 0) {
        piVar4 = iVar3 + 8;
        piVar5 = *piVar4;
        if (piVar4 != piVar5) {
            uVar1 = 0;
            do {
                if (piVar5[2] != '\0') {
                    uVar1 = sym.sgl_sync_range(piVar5[-2],*piVar5[-1],*(piVar5[-1] + 0xc),param_3 & 0xffffffff);
                }
                piVar5 = *piVar5;
            } while (piVar4 != piVar5);
            goto code_r0x080045c0;
        }
    }
    uVar1 = 0;
code_r0x080045c0:
    mutex_unlock(iVar3 + 0x18);
    return uVar1;
}


// ===== sym.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003600 (size 8) =====

uint sym.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt
               (int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa0);
    if (*(iVar3 + 0x70) != '\0') {
        return 0;
    }
    mutex_lock(iVar3 + 0x18);
    uVar2 = mem_buf_vmperm_can_cmo(*(iVar3 + 0x78));
    if ((uVar2 & 1) != 0) {
        piVar4 = iVar3 + 8;
        piVar5 = *piVar4;
        if (piVar4 != piVar5) {
            uVar1 = 0;
            do {
                if (piVar5[2] != '\0') {
                    uVar1 = sym.sgl_sync_range(piVar5[-2],*piVar5[-1],*(piVar5[-1] + 0xc),param_3 & 0xffffffff);
                }
                piVar5 = *piVar5;
            } while (piVar4 != piVar5);
            goto code_r0x08004448;
        }
    }
    uVar1 = 0;
code_r0x08004448:
    mutex_unlock(iVar3 + 0x18);
    return uVar1;
}


// ===== sym.sc_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt @ 0x08003608 (size 8) =====

void sym.sc_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = dma_heap_get_drvdata();
    uVar5 = sym.__carveout_heap_allocate(iVar4 + 8,param_2,param_3,0x80036a8);
    if (uVar5 < 0xfffffffffffff001) {
        piVar1 = iVar4 + 0x88;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + param_2;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.system_heap_allocate.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt @ 0x08003610 (size 8) =====

uint64_t sym.system_heap_allocate.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt(ulong param_1,uint64_t param_2,uint param_3)

{
    char cVar1;
    bool bVar2;
    uint64_t *puVar3;
    int iVar4;
    uint uVar5;
    ulong *puVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *puVar10;
    uchar uVar11;
    int *piVar12;
    uint64_t uVar13;
    int64_t *extraout_x8;
    uint64_t extraout_x11;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t *****pppppiVar15;
    int64_t *****pppppiVar16;
    int64_t *****pppppiVar17;
    int iVar18;
    int iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t ****ppppiStack_e8;
    int64_t ****ppppiStack_e0;
    int64_t ****ppppiStack_d8;
    int64_t ****ppppiStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_70 = *(iVar8 + 0x5e0);
    iStack_c8 = 0;
    uStack_c0 = 0;
    uStack_f0 = 0;
    puStack_88 = *0x80022a0;
    uStack_80 = *0x80022a8;
    uStack_78 = *0x80022b0;
    uStack_a8 = *0x8002280;
    uStack_a0 = *0x8002288;
    ppppiStack_d8 = &ppppiStack_d8;
    uStack_98 = *0x8002290;
    uStack_90 = *0x8002298;
    uStack_b8 = *0x8002270;
    uStack_b0 = *0x8002278;
    ppppiStack_e8 = &ppppiStack_e8;
    ppppiStack_e0 = ppppiStack_e8;
    ppppiStack_d0 = ppppiStack_d8;
    puVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xa8);
    if (puVar6 == NULL) {
        uVar20 = 0xfffffffffffffff4;
        goto code_r0x0800a144;
    }
    piVar7 = dma_heap_get_drvdata(param_1);
    puVar6[1] = puVar6 + 1;
    puVar6[2] = puVar6 + 1;
    __mutex_init(puVar6 + 3,"&buffer->lock",obj.system_heap_allocate.__key);
    *puVar6 = param_1;
    puVar6[9] = param_2;
    *(puVar6 + 0xe) = 1;
    puVar6[0x14] = sym.__typeid__ZTSFvP14qcom_sg_bufferE_global_addr;
    if (param_2 == 0) {
        iVar18 = 0;
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        iVar18 = 0;
        uVar21 = 9;
        puVar3 = sp_el0;
        uVar20 = param_2;
        do {
            if (((*puVar3 & 1) != 0) && ((*(puVar3 + 0x829) & 1) != 0)) {
code_r0x08009ef8:
                iVar4 = 0;
code_r0x08009efc:
                iVar19 = -0xc;
                goto code_r0x0800a064;
            }
            piVar14 = *piVar7;
            if (_segment.ehdr == 0) {
                iVar8 = dma_heap_find("qcom,system");
                if (iVar8 == 0) {
                    _printk(0x8000bca);
                    if (_segment.ehdr == 0) goto code_r0x08009ea8;
                    goto code_r0x08009cb0;
                }
                iVar8 = dma_heap_get_drvdata();
                _segment.ehdr = *(iVar8 + 8);
                if (_segment.ehdr != 0) goto code_r0x08009cb0;
code_r0x08009ea8:
                iVar4 = _segment.ehdr;
                _printk(0x8000b29,"alloc_largest_available");
                goto code_r0x08009efc;
            }
code_r0x08009cb0:
            iVar8 = _segment.ehdr;
            if ((uVar20 < 0x200000) || (uVar21 < 9)) {
code_r0x08009d0c:
                if (uVar20 < 0x10000) {
code_r0x08009d80:
                    if (0xfff < uVar20) goto code_r0x08009d98;
                }
                else {
code_r0x08009d14:
                    if (uVar21 < 4) goto code_r0x08009d80;
                    uVar9 = _raw_spin_lock_irqsave(piVar14[1] + 0x40);
                    piVar12 = piVar14[1];
                    if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                        _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    }
                    else {
                        puVar10 = sym.dynamic_page_pool_remove(piVar12);
                        _raw_spin_unlock_irqrestore(piVar14[1] + 0x40,uVar9);
                        if (puVar10 != NULL) goto code_r0x08009de4;
                    }
code_r0x08009d98:
                    uVar9 = _raw_spin_lock_irqsave(piVar14[2] + 0x40);
                    piVar12 = piVar14[2];
                    if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                        _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    }
                    else {
                        puVar10 = sym.dynamic_page_pool_remove(piVar12);
                        _raw_spin_unlock_irqrestore(piVar14[2] + 0x40,uVar9);
                        if (puVar10 != NULL) goto code_r0x08009de4;
                    }
                }
                puVar10 = sym.qcom_sys_heap_alloc_largest_available(iVar8,uVar20,uVar21);
                pppppiVar15 = ppppiStack_e0;
                if (puVar10 == NULL) goto code_r0x08009ef8;
                pppppiVar16 = puVar10 + 1;
                iVar18 = iVar18 + 1;
                uVar21 = __list_add_valid(pppppiVar16,ppppiStack_e0,&ppppiStack_e8);
                if ((uVar21 & 1) != 0) {
                    pppppiVar17 = &ppppiStack_e8;
                    ppppiStack_e0 = pppppiVar16;
                    goto code_r0x08009e58;
                }
            }
            else {
                uVar9 = _raw_spin_lock_irqsave(*piVar14 + 0x40);
                piVar12 = *piVar14;
                if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                    _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    if (0xffff < uVar20) goto code_r0x08009d14;
                    goto code_r0x08009d80;
                }
                puVar10 = sym.dynamic_page_pool_remove(piVar12);
                _raw_spin_unlock_irqrestore(*piVar14 + 0x40,uVar9);
                if (puVar10 == NULL) goto code_r0x08009d0c;
code_r0x08009de4:
                pppppiVar15 = ppppiStack_d0;
                pppppiVar16 = puVar10 + 1;
                uVar21 = __list_add_valid(pppppiVar16,ppppiStack_d0,&ppppiStack_d8);
                if ((uVar21 & 1) != 0) {
                    pppppiVar17 = &ppppiStack_d8;
                    ppppiStack_d0 = pppppiVar16;
code_r0x08009e58:
                    *pppppiVar16 = pppppiVar17;
                    puVar10[2] = pppppiVar15;
                    *pppppiVar15 = pppppiVar16;
                }
            }
            if ((*puVar10 >> 0x10 & 1) == 0) {
                uVar13 = 0;
                if ((*puVar10 >> 0x10 & 1) == 0) goto code_r0x08009e88;
code_r0x08009c54:
                uVar21 = *(puVar10 + 0x51);
            }
            else {
                uVar13 = *(puVar10 + 0x51);
                if ((*puVar10 >> 0x10 & 1) != 0) goto code_r0x08009c54;
code_r0x08009e88:
                uVar21 = 0;
            }
            iVar4 = iVar4 + 1;
            uVar20 = (-0x1000L << (uVar13 & 0x3f)) + uVar20;
        } while (uVar20 != 0);
    }
    piVar14 = puVar6 + 10;
    iVar4 = sg_alloc_table(piVar14,iVar4,0xcc0);
    if (iVar4 == 0) {
        iVar8 = *piVar14;
        if (iVar18 == 0) {
            sym.page_list_merge(&ppppiStack_d8,&ppppiStack_e8,iVar8,0);
code_r0x08009f44:
            uVar5 = msm_secure_get_vmid_perms(piVar7[1]);
            uStack_f0._4_4_ = uVar5;
            uVar5 = sym.get_secure_vmid(*(piVar7 + 1));
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
            uVar20 = mem_buf_vmperm_alloc_staticvm(piVar14,&uStack_f0,&uStack_f0 + 4,1);
            puVar6[0xf] = uVar20;
            if (uVar20 < 0xfffffffffffff001) {
                uStack_b8 = dma_heap_get_name(param_1);
                uStack_a0 = puVar6[9];
                uStack_a8 = 0x80007e0;
                uStack_98 = CONCAT44(uStack_98._4_4_,param_3);
                puStack_88 = puVar6;
                uVar20 = mem_buf_dma_buf_export(&uStack_b8);
                if (uVar20 < 0xfffffffffffff001) {
                    if (iVar18 != 0) {
                        sg_free_table(&iStack_c8);
                    }
                    piVar7 = piVar7 + 4;
                    goto code_r0x0800a1b0;
                }
                mem_buf_vmperm_release(puVar6[0xf]);
            }
            iVar19 = uVar20;
            iVar4 = sym.hyp_unassign_sg_from_flags(&iStack_c8,piVar7[1],1);
            if (iVar18 != 0) {
code_r0x0800a054:
                sg_free_table(&iStack_c8);
            }
        }
        else {
            iVar4 = sg_alloc_table(&iStack_c8,iVar18,0xcc0);
            if (iVar4 == 0) {
                sym.page_list_merge(&ppppiStack_d8,&ppppiStack_e8,iVar8,iStack_c8);
                uVar9 = dma_heap_get_dev(param_1);
                dma_map_sgtable(uVar9,&iStack_c8,0,0);
                uVar9 = dma_heap_get_dev(param_1);
                dma_unmap_sg_attrs(uVar9,iStack_c8,uStack_c0._4_4_,0,0);
                iVar4 = sym.hyp_assign_sg_from_flags(&iStack_c8,piVar7[1],1);
                if (iVar4 == 0) goto code_r0x08009f44;
                iVar19 = -0xc;
                goto code_r0x0800a054;
            }
            iVar4 = 0;
            iVar19 = -0xc;
        }
        sg_free_table(piVar14);
    }
    else {
        iVar4 = 0;
        iVar19 = -0xc;
    }
code_r0x0800a064:
    pppppiVar15 = ppppiStack_e8;
    pppppiVar16 = ppppiStack_d8;
    while (ppppiStack_e8 = pppppiVar15, &ppppiStack_d8 != pppppiVar16) {
        pppppiVar15 = pppppiVar16 + -1;
        pppppiVar17 = *pppppiVar16;
        if (((*pppppiVar15 >> 0x10 & 1) == 0) || (*(pppppiVar16 + 0x49) != '\t')) {
            if (((*pppppiVar15 >> 0x10 & 1) == 0) || (*(pppppiVar16 + 0x49) != '\x04')) {
                if ((*pppppiVar15 >> 0x10 & 1) == 0) {
                    iVar8 = 2;
                }
                else {
                    iVar8 = 2;
                    if (*(pppppiVar16 + 0x49) != '\0') {
                        iVar8 = 3;
                    }
                }
            }
            else {
                iVar8 = 1;
            }
        }
        else {
            iVar8 = 0;
        }
        sym.dynamic_page_pool_free(*(*piVar7 + iVar8 * 8),pppppiVar15);
        pppppiVar15 = ppppiStack_e8;
        pppppiVar16 = pppppiVar17;
    }
    if ((iVar4 == 0) && (&ppppiStack_e8 != pppppiVar15)) {
        do {
            pppppiVar16 = pppppiVar15 + -1;
            if ((*pppppiVar16 >> 0x10 & 1) == 0) {
                uVar11 = 0;
            }
            else {
                uVar11 = *(pppppiVar15 + 0x49);
            }
            pppppiVar15 = *pppppiVar15;
            __free_pages(pppppiVar16,uVar11);
        } while (&ppppiStack_e8 != pppppiVar15);
    }
    kfree(puVar6);
    uVar20 = iVar19;
code_r0x0800a144:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        piVar7 = extraout_x8;
        param_2 = extraout_x11;
code_r0x0800a1b0:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
                *piVar7 = *piVar7 + param_2;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    return uVar20;
}


// ===== sym.carveout_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt @ 0x08003618 (size 8) =====

void sym.carveout_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = dma_heap_get_drvdata();
    sym.__carveout_heap_allocate(arg1,param_2,param_3,0x80036b8);
    return;
}


// ===== sym.cma_heap_allocate.cfi_jt @ 0x08003620 (size 8) =====

uint64_t sym.cma_heap_allocate.cfi_jt(int64_t param_1,int64_t param_2,uint param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar13 = param_2 + 0xfffU & 0xfffffffffffff000;
    piStack_80 = *0x80023f8;
    uStack_78 = *0x8002400;
    uStack_70 = *0x8002408;
    uStack_a0 = *0x80023d8;
    iStack_98 = *0x80023e0;
    uVar2 = 0;
    if (uVar13 - 1 != 0xfff) {
        uVar2 = 0x40 - LZCOUNT(uVar13 - 1 >> 0xc);
    }
    uStack_90 = *0x80023e8;
    uStack_88 = *0x80023f0;
    uStack_b0 = *0x80023c8;
    uStack_a8 = *0x80023d0;
    puVar6 = dma_heap_get_drvdata();
    piVar7 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xb8);
    if (piVar7 == NULL) {
        uVar15 = 0xfffffffffffffff4;
    }
    else {
        uVar3 = *(puVar6 + 1);
        piVar7[2] = param_1;
        uVar14 = param_2 + 0xfffU >> 0xc;
        piVar7[3] = piVar7 + 3;
        piVar7[4] = piVar7 + 3;
        __mutex_init(piVar7 + 5,"&helper_buffer->lock",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
        piVar7[0xb] = uVar13;
        *(piVar7 + 0x10) = *(puVar6 + 0xc);
        piVar7[0x16] = sym.cma_heap_free.e86ca08319bdddedc18780f65907e989.cfi_jt;
        if (*(puVar6 + 0xd) == '\0') {
            if (uVar2 <= uVar3) {
                uVar3 = uVar2;
            }
            uVar10 = cma_alloc(*puVar6,uVar14,uVar3,0);
            if (uVar10 != 0) {
                memset((uVar10 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,0,uVar13);
                goto code_r0x0800b018;
            }
code_r0x0800b148:
            iVar5 = -0xc;
        }
        else {
            uVar8 = dma_heap_get_dev(param_1);
            iVar5 = dma_set_mask(uVar8,0xffffffffffffffff);
            if (iVar5 == 0) {
                dma_set_coherent_mask(uVar8,0xffffffffffffffff);
            }
            iVar9 = dma_alloc_attrs(uVar8,uVar13,piVar7 + 1,0xcc0,4);
            *piVar7 = iVar9;
            if (iVar9 == 0) {
                _dev_err(uVar8,"failed to allocate buffer\n");
                goto code_r0x0800b148;
            }
            uVar10 = ((piVar7[1] >> 6 & 0x3ffffffffffffc0) + (_delayed_work_timer_fn >> 0xc) * -0x40) - 0x200000000;
code_r0x0800b018:
            piVar1 = piVar7 + 0xc;
            iVar5 = sg_alloc_table(piVar1,1,0xcc0);
            if (iVar5 == 0) {
                if ((uVar10 & 3) != 0) goto code_r0x0800b19c;
                puVar12 = *piVar1;
                *(puVar12 + 1) = 0;
                *(puVar12 + 0xc) = uVar13;
                *puVar12 = *puVar12 & 3 | uVar10;
                uVar11 = mem_buf_vmperm_alloc(piVar1);
                uVar15 = 0;
                piVar7[0x11] = uVar11;
                if (uVar11 < 0xfffffffffffff001) {
                    if ((piVar7[0x10] != '\0') && (*(puVar6 + 0xd) == '\0')) {
                        uVar8 = dma_heap_get_dev(param_1);
                        dma_map_sgtable(uVar8,piVar1,0,0);
                        uVar8 = dma_heap_get_dev(param_1);
                        dma_unmap_sg_attrs(uVar8,piVar7[0xc],*(piVar7 + 0x6c),0,0);
                    }
                    uStack_b0 = dma_heap_get_name(param_1);
                    iStack_98 = piVar7[0xb];
                    uStack_90 = CONCAT44(uStack_90._4_4_,param_3);
                    piStack_80 = piVar7 + 2;
                    uVar15 = mem_buf_dma_buf_export
                                       (&uStack_b0,reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt)
                    ;
                    if (uVar15 < 0xfffffffffffff001) goto code_r0x0800b158;
                    mem_buf_vmperm_release(piVar7[0x11]);
                }
                iVar5 = uVar15;
                sg_free_table(piVar1);
                iVar9 = *piVar7;
            }
            else {
                iVar9 = *piVar7;
            }
            if (iVar9 == 0) {
                cma_release(*puVar6,uVar10,uVar14);
            }
            else {
                uVar8 = dma_heap_get_dev(param_1);
                dma_free_attrs(uVar8,uVar13,*piVar7,piVar7[1],0);
            }
        }
        kfree(piVar7);
        uVar15 = iVar5;
    }
code_r0x0800b158:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    __stack_chk_fail();
code_r0x0800b19c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x800b1a0);
    (*pcVar4)();
}


// ===== sym.bitstream_contig_heap_allocate.629c131c7ffedba67fcd94e814c546ef.cfi_jt @ 0x08003628 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.bitstream_contig_heap_allocate.629c131c7ffedba67fcd94e814c546ef.cfi_jt(void)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    uint *puStack_48;
    uint *puStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_58 = 6;
    uStack_54 = 9;
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    puStack_40 = NULL;
    uStack_50 = 0;
    uVar3 = dma_heap_buffer_alloc(_segment.ehdr);
    if (uVar3 < 0xfffffffffffff001) {
        puStack_48 = &uStack_54;
        puStack_40 = &uStack_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,1);
        iVar2 = mem_buf_lend(uVar3,&uStack_50);
        if (iVar2 != 0) {
            _printk(0x8001259,"bitstream_contig_heap_allocate",iVar2);
            dma_buf_put(uVar3);
            uVar3 = iVar2;
        }
    }
    else {
        _printk(0x8001b7a,"bitstream_contig_heap_allocate",uVar3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.system_heap_allocate.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt @ 0x08003630 (size 8) =====

uint64_t sym.system_heap_allocate.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt(ulong param_1,int64_t param_2,uint param_3)

{
    int64_t ****ppppiVar1;
    int64_t ****ppppiVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    ulong *puVar7;
    int *arg1;
    ulong *puVar8;
    int64_t *****pppppiVar9;
    ulong uVar10;
    uchar uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t *****pppppiVar14;
    uint64_t *puVar15;
    int64_t *****pppppiVar16;
    ulong unaff_x30;
    int64_t ****ppppiStack_c0;
    int64_t ****ppppiStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    puStack_80 = *0x8002258;
    uStack_78 = *0x8002260;
    uStack_70 = *0x8002268;
    uStack_a0 = *0x8002238;
    uStack_98 = *0x8002240;
    uStack_90 = *0x8002248;
    uStack_88 = *0x8002250;
    uStack_b0 = *0x8002228;
    uStack_a8 = *0x8002230;
    puVar7 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xa8);
    if (puVar7 == NULL) {
        uVar12 = 0xfffffffffffffff4;
    }
    else {
        arg1 = dma_heap_get_drvdata(param_1);
        puVar7[1] = puVar7 + 1;
        puVar7[2] = puVar7 + 1;
        __mutex_init(puVar7 + 3,"&buffer->lock",obj.system_heap_allocate.__key);
        *puVar7 = param_1;
        puVar7[9] = param_2;
        iVar3 = *arg1;
        iVar6 = 0;
        puVar7[0x14] = sym.system_heap_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt;
        *(puVar7 + 0xe) = iVar3 != 0;
        ppppiStack_c0 = &ppppiStack_c0;
        ppppiStack_b8 = &ppppiStack_c0;
        if (param_2 != 0) {
            uVar12 = 9;
            puVar15 = sp_el0;
            do {
                if (((*puVar15 & 1) != 0) && ((*(puVar15 + 0x829) & 1) != 0)) goto code_r0x08005314;
                if (arg1[6] == '\0') {
                    puVar8 = sym.qcom_sys_heap_alloc_largest_available(*(arg1 + 2),param_2,uVar12);
                    pppppiVar14 = ppppiStack_b8;
                }
                else {
                    puVar8 = sym.qcom_extend_sys_heap_alloc_largest_available(arg1,param_2,uVar12);
                    pppppiVar14 = ppppiStack_b8;
                }
                ppppiStack_b8 = pppppiVar14;
                if (puVar8 == NULL) goto code_r0x08005314;
                pppppiVar9 = puVar8 + 1;
                uVar12 = __list_add_valid(pppppiVar9,pppppiVar14,&ppppiStack_c0);
                if ((uVar12 & 1) != 0) {
                    puVar8[1] = &ppppiStack_c0;
                    puVar8[2] = pppppiVar14;
                    ppppiStack_b8 = pppppiVar9;
                    *pppppiVar14 = pppppiVar9;
                }
                if ((*puVar8 >> 0x10 & 1) == 0) {
                    uVar13 = 0;
                    if ((*puVar8 >> 0x10 & 1) == 0) goto code_r0x080052f4;
code_r0x08005250:
                    uVar12 = *(puVar8 + 0x51);
                }
                else {
                    uVar13 = *(puVar8 + 0x51);
                    if ((*puVar8 >> 0x10 & 1) != 0) goto code_r0x08005250;
code_r0x080052f4:
                    uVar12 = 0;
                }
                iVar6 = iVar6 + 1;
                param_2 = (-0x1000L << (uVar13 & 0x3f)) + param_2;
            } while (param_2 != 0);
        }
        puVar8 = puVar7 + 10;
        iVar6 = sg_alloc_table(puVar8,iVar6,0xcc0);
        if (iVar6 == 0) {
            if (&ppppiStack_c0 != ppppiStack_c0) {
                puVar15 = *puVar8;
                pppppiVar14 = ppppiStack_c0;
                do {
                    pppppiVar9 = pppppiVar14 + -1;
                    if ((*pppppiVar9 >> 0x10 & 1) == 0) {
                        uVar12 = 0;
                    }
                    else {
                        uVar12 = *(pppppiVar14 + 0x49);
                    }
                    if ((pppppiVar9 & 3) != 0) goto code_r0x080054ec;
                    pppppiVar16 = *pppppiVar14;
                    *(puVar15 + 1) = 0;
                    *(puVar15 + 0xc) = 0x1000L << (uVar12 & 0x3f);
                    *puVar15 = *puVar15 & 3 | pppppiVar9;
                    puVar15 = sg_next(puVar15);
                    uVar12 = __list_del_entry_valid(pppppiVar14);
                    if ((uVar12 & 1) != 0) {
                        ppppiVar1 = *pppppiVar14;
                        ppppiVar2 = pppppiVar14[1];
                        ppppiVar1[1] = ppppiVar2;
                        *ppppiVar2 = ppppiVar1;
                    }
                    *pppppiVar14 = 0xdead000000000100;
                    pppppiVar14[1] = 0xdead000000000122;
                    pppppiVar14 = pppppiVar16;
                } while (&ppppiStack_c0 != pppppiVar16);
            }
            if (*(puVar7 + 0xe) != '\0') {
                uVar10 = dma_heap_get_dev(param_1);
                dma_map_sgtable(uVar10,puVar8,0,0);
                uVar10 = dma_heap_get_dev(param_1);
                dma_unmap_sg_attrs(uVar10,puVar7[10],*(puVar7 + 0x5c),0,0);
            }
            uVar12 = mem_buf_vmperm_alloc(puVar8);
            puVar7[0xf] = uVar12;
            if (uVar12 < 0xfffffffffffff001) {
                uStack_b0 = dma_heap_get_name(param_1);
                uStack_98 = puVar7[9];
                uStack_90 = CONCAT44(uStack_90._4_4_,param_3);
                puStack_80 = puVar7;
                uVar12 = mem_buf_dma_buf_export
                                   (&uStack_b0,reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt);
                if (uVar12 < 0xfffffffffffff001) goto code_r0x0800535c;
                mem_buf_vmperm_release(puVar7[0xf]);
            }
            sg_free_table(puVar8);
            uVar12 = uVar12;
        }
        else {
code_r0x08005314:
            uVar12 = 0xfffffffffffffff4;
        }
        pppppiVar14 = ppppiStack_c0;
        while (&ppppiStack_c0 != pppppiVar14) {
            pppppiVar9 = pppppiVar14 + -1;
            if ((*pppppiVar9 >> 0x10 & 1) == 0) {
                uVar11 = 0;
            }
            else {
                uVar11 = *(pppppiVar14 + 0x49);
            }
            pppppiVar14 = *pppppiVar14;
            __free_pages(pppppiVar9,uVar11);
        }
        kfree(puVar7);
    }
code_r0x0800535c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    __stack_chk_fail();
code_r0x080054ec:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x80054f0);
    (*pcVar5)();
}


// ===== sym.qcom_sg_mmap.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003638 (size 8) =====

int sym.qcom_sg_mmap.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0xa0);
    uVar4 = *param_2;
    uVar5 = param_2[0x13];
    mem_buf_vmperm_pin(*(iVar7 + 0x78));
    uVar2 = mem_buf_vmperm_can_mmap(*(iVar7 + 0x78),param_2);
    if ((uVar2 & 1) == 0) {
        iVar1 = -1;
code_r0x08004728:
        mem_buf_vmperm_unpin(*(iVar7 + 0x78));
    }
    else {
        param_2[0x12] = reloc.qcom_sg_vm_ops_open.a54aae6d51e276778f768246a9501da3.cfi_jt;
        param_2[0x15] = *(iVar7 + 0x78);
        if (*(iVar7 + 0x70) != '\0') {
            param_2[9] = param_2[9] & 0xffffffffffffffe3 | 0x60000000000008;
        }
        if (*(iVar7 + 0x58) != 0) {
            uVar8 = 0;
            puVar6 = *(iVar7 + 0x50);
            uVar2 = uVar5 << 0xc;
            do {
                uVar3 = *(puVar6 + 0xc);
                uVar5 = uVar2 - uVar3;
                if (uVar2 < uVar3) {
                    uVar5 = uVar3 - uVar2;
                    if (param_2[1] - uVar4 <= uVar3 - uVar2) {
                        uVar5 = param_2[1] - uVar4;
                    }
                    iVar1 = remap_pfn_range(param_2,uVar4,
                                            (*puVar6 & 0xfffffffffffffffc) + (uVar2 >> 6 & 0x3ffffffffffffc0) +
                                            (_delayed_work_timer_fn >> 0xc) * 0x40 + 0x200000000 >> 6,uVar5,param_2[9]
                                           );
                    if (iVar1 != 0) goto code_r0x08004728;
                    uVar4 = uVar5 + uVar4;
                    if (param_2[1] <= uVar4) break;
                    uVar5 = 0;
                }
                uVar8 = uVar8 + 1;
                puVar6 = sg_next(puVar6);
                uVar2 = uVar5;
            } while (uVar8 < *(iVar7 + 0x58));
        }
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.enable_store.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003640 (size 8) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.enable_store.732c52d7144bd185e75e541fa94eb357.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t *******pppppppiVar1;
    int64_t ******ppppppiVar2;
    int64_t ******ppppppiVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *******pppppppiVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *******pppppppiVar11;
    int *arg1;
    uint32_t uVar12;
    code *pcVar13;
    ulong unaff_x30;
    int iStack_7c;
    int64_t *******pppppppiStack_78;
    int64_t *******pppppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    pppppppiVar8 = &iStack_7c;
    iStack_7c = 0;
    iVar4 = kstrtoint(param_3,0,pppppppiVar8);
    iVar9 = _segment.ehdr;
    if (iVar4 == 0) {
        if (iStack_7c == 0) {
            iVar10 = 0;
            *(_segment.ehdr + 0x18) = 0;
            iVar9 = *(iVar9 + 0x10);
            do {
                arg1 = *(iVar9 + iVar10 * 8);
                pppppppiStack_78 = &pppppppiStack_78;
                pppppppiStack_70 = &pppppppiStack_78;
                uVar5 = _raw_spin_lock_irqsave(arg1 + 0x10);
                uVar12 = 0;
                while ((arg1[1] != 0 || (*arg1 != 0))) {
                    iVar6 = sym.dynamic_page_pool_remove(arg1);
                    pppppppiVar11 = pppppppiStack_78;
                    pppppppiVar1 = iVar6 + 8;
                    pppppppiVar8 = pppppppiStack_78;
                    uVar7 = __list_add_valid(pppppppiVar1,&pppppppiStack_78,pppppppiStack_78);
                    if ((uVar7 & 1) != 0) {
                        pppppppiVar11[1] = pppppppiVar1;
                        *(iVar6 + 8) = pppppppiVar11;
                        *(iVar6 + 0x10) = &pppppppiStack_78;
                        pppppppiStack_78 = pppppppiVar1;
                    }
                    uVar12 = uVar12 + 1;
                }
                _raw_spin_unlock_irqrestore(arg1 + 0x10,uVar5);
                pppppppiVar1 = pppppppiStack_78;
                if ((uVar12 == 0) || (pcVar13 = *(arg1 + 0x1a), pcVar13 == NULL)) {
joined_r0x08007dfc:
                    while (&pppppppiStack_78 != pppppppiVar1) {
                        pppppppiVar11 = *pppppppiVar1;
                        uVar7 = __list_del_entry_valid(pppppppiVar1);
                        if ((uVar7 & 1) != 0) {
                            ppppppiVar2 = *pppppppiVar1;
                            ppppppiVar3 = pppppppiVar1[1];
                            ppppppiVar2[1] = ppppppiVar3;
                            *ppppppiVar3 = ppppppiVar2;
                        }
                        *pppppppiVar1 = 0xdead000000000100;
                        pppppppiVar1[1] = 0xdead000000000122;
                        __free_pages(pppppppiVar1 + -1,arg1[0x12]);
                        pppppppiVar1 = pppppppiVar11;
                    }
                    if ((*(_segment.ehdr + 0x1c) >> 6 & 1) != 0) {
                        pppppppiVar8 = arg1[0x12];
                        _printk(0x80018dc,uVar12,pppppppiVar8);
                    }
                }
                else {
                    if (pcVar13 !=
                        sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr) {
                        __cfi_slowpath_diag(0xa9cd81dabe0e6624,pcVar13,0x8000af0);
                    }
                    pppppppiVar8 = uVar12;
                    iVar4 = (*pcVar13)(arg1,&pppppppiStack_78,pppppppiVar8);
                    pppppppiVar1 = pppppppiStack_78;
                    if (iVar4 == 0) goto joined_r0x08007dfc;
                    _printk(0x8001078);
                }
                iVar10 = iVar10 + 1;
            } while (iVar10 != 3);
        }
        else {
            *(_segment.ehdr + 0x18) = 1;
        }
    }
    else {
        param_4 = iVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.debug_show;
        iVar4 = scnprintf(pppppppiVar8,0x1000,0x8000f80,*(_segment.ehdr + 0x1c));
        return iVar4;
    }
    return param_4;
}


// ===== sym.config_store.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003648 (size 8) =====

int64_t sym.config_store.732c52d7144bd185e75e541fa94eb357.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint auStack_30 [2];
    int64_t iStack_28;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_30[0] = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = sscanf(param_3,"%d %d %d %d %d",&uStack_40,&uStack_40 | 4,&uStack_38,&uStack_38 + 4,auStack_30);
    iVar1 = _segment.ehdr;
    if (iVar2 == 5) {
        *(_segment.ehdr + 0x44) = uStack_40;
        *(iVar1 + 0x48) = uStack_40._4_4_;
        *(iVar1 + 0x4c) = uStack_38;
        *(iVar1 + 0x20) = uStack_38._4_4_;
        *(iVar1 + 0x24) = auStack_30[0];
    }
    else {
        _printk(0x80015be);
        param_4 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pid_show;
    iVar2 = scnprintf(puVar3,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1
                      ,in_x7,&stack0xffffffffffffffe0,sym.pid_show);
    return iVar2;
}


// ===== sym.pid_store.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003650 (size 8) =====

uint32_t *
sym.pid_store.732c52d7144bd185e75e541fa94eb357.cfi_jt(ulong param_1,ulong param_2,ulong param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t in_tmp_ldXn;
    int iVar4;
    uint uVar5;
    int64_t arg1;
    uint64_t uVar6;
    uint32_t *puVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_3c = 0;
    iVar4 = kstrtoint(param_3,0,&uStack_3c);
    if (iVar4 != 0) {
        param_4 = iVar4;
        goto code_r0x080084b4;
    }
    if (0 < uStack_3c) {
        __rcu_read_lock();
        iVar9 = sp_el0;
        if (*(iVar9 + 0x640) == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = __task_pid_nr_ns(*(iVar9 + 0x5e8),1,init_pid_ns);
        }
        arg1 = find_task_by_vpid(uStack_3c);
        __rcu_read_unlock();
        if (arg1 == 0) {
            param_4 = 0xfffffffffffffffd;
            goto code_r0x080084b4;
        }
        sym.get_task_struct(arg1);
        _printk(0x8001608,*(iVar9 + 0x5d8),iVar9 + 0x7a8,uVar5);
        iVar9 = _segment.ehdr;
        if (_segment.ehdr < 3) {
            _segment.ehdr = _segment.ehdr + 1;
            uVar8 = 0x80017af;
            *(obj.pool_pid + iVar9 * 4) = uStack_3c;
            iVar9 = *(arg1 + 0x618);
            uVar5 = *(iVar9 + 0x5d8);
code_r0x08008448:
            _printk(uVar8,uStack_3c,arg1 + 0x7a8,uVar5,iVar9 + 0x7a8,_segment.ehdr);
        }
        else {
            _printk(0x8000c94,uStack_3c,*(arg1 + 0x618) + 0x7a8,3);
            uVar6 = sym.update_pool_pid(uStack_3c);
            if ((uVar6 & 1) == 0) {
                iVar9 = *(arg1 + 0x618);
                uVar8 = 0x80019e3;
                uVar5 = *(iVar9 + 0x5d8);
                goto code_r0x08008448;
            }
        }
        sym.put_task_struct(arg1);
    }
    if (((_obj.pool_pid == 0) || (*0x800078c == 0)) || (*0x8000790 == 0)) {
        obj.use_name_cmp = 0x0;
    }
    else {
        obj.use_name_cmp = 0x1;
    }
code_r0x080084b4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8008510;
    puVar7 = in_tmp_ldXn + 0x38;
    Hint_Prefetch(puVar7,2,0,1);
    do {
        uVar1 = *puVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
            *puVar7 = uVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar1 == 0) {
        uVar8 = 2;
    }
    else {
        if (-1 < (uVar1 + 1 | uVar1)) {
            return puVar7;
        }
        uVar8 = 1;
    }
    puVar7 = refcount_warn_saturate(puVar7,uVar8);
    return puVar7;
}


// ===== sym.scene_store.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003658 (size 8) =====

int64_t sym.scene_store.732c52d7144bd185e75e541fa94eb357.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int *piVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    int iVar8;
    char cVar9;
    bool bVar10;
    ulong uVar11;
    code *pcVar12;
    int iVar13;
    int64_t arg1;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    iStack_2c = 0;
    iVar13 = kstrtoint(param_3,0,&iStack_2c);
    iVar14 = _segment.ehdr;
    if (iVar13 == 0) {
        if (iStack_2c == 1) {
            pcVar12 = obj.g_camera_reserve_config;
        }
        else {
            if (iStack_2c != 2) {
                _printk(0x8001010);
                goto code_r0x0800894c;
            }
            pcVar12 = obj.g_reserve_config;
        }
        pcVar12 = pcVar12 + obj.g_mem_type_index * 0x14;
        *(_segment.ehdr + 0x28) = iStack_2c;
        uVar4 = *(pcVar12 + 0x10);
        uVar3 = *(pcVar12 + 4);
        uVar5 = *(pcVar12 + 8);
        uVar6 = *pcVar12;
        *(iVar14 + 0x20) = *(pcVar12 + 0xc);
        *(iVar14 + 0x24) = uVar4;
        *(iVar14 + 0x4c) = uVar5;
        *(iVar14 + 0x48) = uVar3;
        *(iVar14 + 0x44) = uVar6;
    }
    else {
        param_4 = iVar13;
    }
code_r0x0800894c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return param_4;
    }
    arg1 = __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_refill;
    iVar14 = arg1;
    if ((*(arg1 + 0x48) == 0) && (*(_segment.ehdr + 0x18) != '\0')) {
        uVar7 = *(arg1 + 0x44);
        bVar10 = false;
        do {
            iVar19 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar19 = 2;
            }
            iVar17 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar17 = iVar19;
            }
            if (*(_segment.ehdr + iVar17 * 4 + 0x44) <= *(arg1 + 8)) {
                return iVar14;
            }
            uVar16 = *(arg1 + 0x44);
            iVar14 = ktime_get();
            if (iVar14 - *(arg1 + 0x30) < 10000000) {
                return iVar14;
            }
            uVar23 = 0x250015 >> ((uVar16 & 0xf) << 1) & 3;
            iVar14 = uVar23 * 0x640 + 0x8028250;
            uVar24 = uVar23;
            do {
                uVar11 = tpidr_el1;
                iVar13 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar24 * 0x640),"DMA32");
                if (iVar13 != 0) {
                    iVar19 = uVar24 * 0x640;
                    uVar16 = *(arg1 + 0x48);
                    uVar25 = uVar16;
                    iVar13 = *(__cpu_online_mask + iVar19);
                    iVar8 = *(__per_cpu_offset + iVar19);
                    uVar20 = *(iVar19 + 0x80286f0);
                    uVar20 = uVar20 & (uVar20 >> 0x3f ^ 0xffffffffffffffffU);
                    if ((*(iVar19 + 0x80286b0) != 0) && (uVar20 < *(iVar19 + 0x80286b0))) {
                        uVar20 = *(iVar19 + 0x80286f0);
                        uVar22 = arg1;
                        _delayed_work_timer_fn = uVar22;
                        uVar15 = cpumask_next(0xffffffff,__cpu_online_mask);
                        if (uVar15 < uVar22) {
                            do {
                                if (0x1f < uVar15) goto code_r0x08008dac;
                                uVar20 = uVar20 + *(*(__per_cpu_offset + (uVar15 & 0xffffffff) * 8) +
                                                   *(refcount_warn_saturate + uVar24 * 0x640));
                                uVar15 = cpumask_next(uVar15,__cpu_online_mask);
                            } while (uVar15 < uVar22);
                        }
                        uVar20 = uVar20 & (uVar20 >> 0x3f ^ 0xffffffffffffffffU);
                    }
                    uVar15 = *(uVar24 * 0x640 + 0x8028740);
                    if (uVar23 == 3) {
code_r0x08008dac:
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8008db0);
                        (*pcVar12)();
                    }
                    if (uVar20 - (*(schedule + uVar24 * 0x640) + ~(-1 << (uVar16 & 0x1f)) +
                                 (uVar15 & (uVar15 >> 0x3f ^ 0xffffffffffffffffU))) <=
                        *(kernel_kobj + uVar24 * 0x640 + uVar23 * 8) + (1 << (uVar16 & 0x1f)) + iVar8 + iVar13) {
code_r0x08008d7c:
                        iVar14 = ktime_get();
                        *(arg1 + 0x30) = iVar14;
                        return iVar14;
                    }
                    if (uVar16 != 0) {
                        if (10 < uVar16) goto code_r0x08008d7c;
                        if (uVar16 < 0xd) {
                            uVar16 = 0xc;
                        }
                        iVar18 = uVar16 - uVar25;
                        iVar17 = uVar25 * 0x68;
                        iVar19 = iVar14;
                        while( true ) {
                            if (iVar18 == 0) goto code_r0x08008dac;
                            if ((*(iVar19 + iVar17) != 0) &&
                               ((((piVar21 = iVar19 + iVar17 + -0x60, piVar21 != *piVar21 ||
                                  (piVar21 = iVar19 + iVar17 + -0x50, piVar21 != *piVar21)) ||
                                 (piVar21 = iVar19 + iVar17 + -0x40, piVar21 != *piVar21)) ||
                                (piVar21 = iVar19 + iVar17 + -0x30, piVar21 != *piVar21)))) break;
                            iVar19 = iVar19 + 0x68;
                            uVar16 = uVar25 + 1;
                            uVar25 = uVar16;
                            iVar18 = iVar18 + -1;
                            if (10 < uVar16) goto code_r0x08008d7c;
                        }
                    }
                }
                iVar19 = _segment.ehdr;
                iVar14 = iVar14 + -0x640;
                bVar1 = 0 < uVar24;
                uVar24 = uVar24 - 1;
            } while (bVar1);
            if (!bVar10) {
                iVar14 = 1;
                if (*(arg1 + 0x48) != 4) {
                    iVar14 = 2;
                }
                iVar17 = 0;
                if (*(arg1 + 0x48) != 9) {
                    iVar17 = iVar14;
                }
                piVar2 = _segment.ehdr + iVar17 * 4 + 0x50;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar9 = '\x01';
                    bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar10) {
                        *piVar2 = *piVar2 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                    }
                } while (cVar9 != '\0');
                iVar14 = 1;
                if (*(arg1 + 0x48) != 4) {
                    iVar14 = 2;
                }
                iVar17 = 0;
                if (*(arg1 + 0x48) != 9) {
                    iVar17 = iVar14;
                }
                *(iVar19 + iVar17 * 4 + 0x68) = 0;
            }
            uVar11 = tpidr_el1;
            iVar14 = __alloc_pages(uVar11,uVar7 & 0xfffeffff | 0xc00,*(arg1 + 0x48),0,0);
            if (iVar14 == 0) {
                return 0;
            }
            iVar17 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar17 = 2;
            }
            iVar18 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar18 = iVar17;
            }
            piVar2 = iVar19 + iVar18 * 4 + 0x68;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar9 = '\x01';
                bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                    *piVar2 = *piVar2 + 1;
                    cVar9 = ExclusiveMonitorsStatus();
                }
            } while (cVar9 != '\0');
            iVar17 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar17 = 2;
            }
            iVar18 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar18 = iVar17;
            }
            piVar2 = iVar19 + iVar18 * 4 + 0x5c;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar9 = '\x01';
                bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                    *piVar2 = *piVar2 + 1;
                    cVar9 = ExclusiveMonitorsStatus();
                }
            } while (cVar9 != '\0');
            iVar14 = sym.dynamic_page_pool_add(arg1,iVar14);
            bVar10 = true;
        } while (*(_segment.ehdr + 0x18) != '\0');
    }
    return iVar14;
}


// ===== sym.msm_total_pools_max_store.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt @ 0x08003660 (size 8) =====

int64_t sym.msm_total_pools_max_store.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t *extraout_x1;
    uint32_t *extraout_x1_00;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong ***pppuStack_68;
    ulong ***pppuStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iStack_2c = 0;
    iVar4 = kstrtoint(param_3,0,&iStack_2c);
    if (iVar4 == 0) {
        if (iStack_2c < 0) {
            param_4 = -0x16;
        }
        else {
            _segment.ehdr = iStack_2c;
            _printk(0x8001cbb);
        }
    }
    else {
        param_4 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_shrink_count;
    pcStack_48 = sym.dynamic_page_pool_shrink_count;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar7 = *extraout_x1;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_4;
    mutex_lock(obj.pool_list_lock);
    if (_obj.pool_list == obj.pool_list) {
        iVar8 = 0;
    }
    else {
        iVar8 = sp_el0;
        iVar4 = 0;
        pppuStack_68 = &pppuStack_68;
        pcVar6 = _obj.pool_list;
        do {
            iVar5 = *(pcVar6 + -0x4c);
            if ((*(iVar8 + 0x3c) & 0x20000) != 0 || (uVar7 & 2) != 0) {
                iVar5 = *(pcVar6 + -0x50) + iVar5;
            }
            pcVar1 = pcVar6 + -8;
            pcVar6 = *pcVar6;
            iVar4 = (iVar5 << (*pcVar1 & 0x1f)) + iVar4;
        } while (pcVar6 != obj.pool_list);
        iVar8 = iVar4;
        pppuStack_60 = pppuStack_68;
    }
    mutex_unlock(obj.pool_list_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dynamic_page_pool_shrink_scan;
    uVar7 = extraout_x1_00[2];
    if (uVar7 == 0) {
        iVar8 = 0;
    }
    else {
        uVar2 = *extraout_x1_00;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar8 = 0;
        }
        else {
            iVar4 = 0;
            pcVar6 = _obj.pool_list;
            do {
                iVar5 = sym.dynamic_page_pool_do_shrink(pcVar6 + -0x50,uVar2,uVar7);
                uVar7 = uVar7 - iVar5;
                iVar4 = iVar5 + iVar4;
                if (uVar7 < 1) break;
                pcVar6 = *pcVar6;
            } while (pcVar6 != obj.pool_list);
            iVar8 = iVar4;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar8;
}


// ===== sym.debug_store.732c52d7144bd185e75e541fa94eb357.cfi_jt @ 0x08003668 (size 8) =====

int64_t sym.debug_store.732c52d7144bd185e75e541fa94eb357.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint *puVar4;
    char *pcVar5;
    ulong *puVar6;
    ulong uVar7;
    uint uVar8;
    uint *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    ulong uStack_f0;
    ulong uStack_e8;
    uint auStack_e0 [2];
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    ulong uStack_c8;
    uint *puStack_c0;
    uint32_t uStack_b0;
    ulong uStack_a8;
    ushort uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtoint(param_3,0);
    if (iVar2 == 0) {
        *(_segment.ehdr + 0x1c) = uStack_2c;
    }
    else {
        param_4 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.config_show;
    pcStack_88 = sym.config_show;
    iVar3 = sp_el0;
    uVar11 = 0;
    uVar10 = 0;
    iStack_98 = *(iVar3 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffe0;
    do {
        uStack_a0 = 0;
        uStack_a8 = 0x206425;
        pcVar5 = 0x80016ac;
        iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,0x80016ac,*(obj.config_show_name + uVar11 * 8));
        uVar1 = uVar11 & 0xfffffffd;
        if (uVar1 == 0) {
            uVar7 = *(**(obj.config_show_pool + uVar11 * 8) + 8);
        }
        else {
            uVar7 = **(obj.config_show_val + uVar11 * 8);
        }
        uVar10 = iVar2 + uVar10;
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        if (uVar1 == 0) {
            uVar7 = *(*(*(obj.config_show_pool + uVar11 * 8) + 8) + 8);
        }
        else {
            uVar7 = *(*(obj.config_show_val + uVar11 * 8) + 4);
        }
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        uStack_a8 = CONCAT44(uStack_a8._4_4_,0xa5d6425);
        if (uVar1 == 0) {
            uVar7 = *(*(*(obj.config_show_pool + uVar11 * 8) + 0x10) + 8);
        }
        else {
            uVar7 = *(*(obj.config_show_val + uVar11 * 8) + 8);
        }
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        uVar8 = uVar7 >> 0x20;
        uVar11 = uVar11 + 1;
    } while (uVar11 != 7);
    iVar3 = uVar10;
    if (uVar10 < 0xfff) {
        pcVar5 = 
        "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
        ;
        uVar7 = *(_segment.ehdr + 0x30);
        uStack_b0 = *(_segment.ehdr + 0x18);
        iVar2 = snprintf(puVar4 + iVar3,0x1000 - iVar3,
                         "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
                         ,uVar7,*(_segment.ehdr + 0x34),*(_segment.ehdr + 0x2c),*(_segment.ehdr + 0x20),
                         *(_segment.ehdr + 0x24));
        uVar8 = uVar7 >> 0x20;
        iVar3 = iVar2 + uVar10;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return iVar3;
    }
    __stack_chk_fail(iVar3);
    iVar9 = CONCAT44(uVar8,*extraout_x9);
    puVar6 = &uStack_f0;
    *extraout_x18_00 = 0x80081f4;
    uStack_c8 = 0x80081f4;
    iVar3 = sp_el0;
    iStack_d8 = *(iVar3 + 0x5e0);
    auStack_e0[0] = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    ppuStack_d0 = &puStack_90;
    puStack_c0 = puVar4;
    iVar2 = sscanf(pcVar5,"%d %d %d %d %d",&uStack_f0,&uStack_f0 | 4,&uStack_e8,&uStack_e8 + 4,auStack_e0);
    iVar3 = _segment.ehdr;
    if (iVar2 == 5) {
        *(_segment.ehdr + 0x44) = uStack_f0;
        *(iVar3 + 0x48) = uStack_f0._4_4_;
        *(iVar3 + 0x4c) = uStack_e8;
        *(iVar3 + 0x20) = uStack_e8._4_4_;
        *(iVar3 + 0x24) = auStack_e0[0];
    }
    else {
        _printk(0x80015be);
        iVar9 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_d8) {
        return iVar9;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pid_show;
    iVar2 = scnprintf(puVar6,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1)
    ;
    return iVar2;
}


// ===== sym.get_pool_size_bytes.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt @ 0x08003670 (size 8) =====

int64_t sym.get_pool_size_bytes.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = dma_heap_get_drvdata();
    iVar1 = sym.dynamic_page_pool_total(**(iVar4 + 8));
    iVar2 = sym.dynamic_page_pool_total(*(*(iVar4 + 8) + 8));
    iVar3 = sym.dynamic_page_pool_total(*(*(iVar4 + 8) + 0x10));
    return (iVar2 + iVar1 + iVar3) * 0x1000;
}


// ===== sym.get_pool_size_bytes.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt @ 0x08003678 (size 8) =====

int64_t sym.get_pool_size_bytes.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = dma_heap_get_drvdata();
    iVar1 = sym.dynamic_page_pool_total(**piVar4);
    iVar2 = sym.dynamic_page_pool_total(*(*piVar4 + 8));
    iVar3 = sym.dynamic_page_pool_total(*(*piVar4 + 0x10));
    return (iVar2 + iVar1 + iVar3) * 0x1000;
}


// ===== sym.qcom_sg_vm_ops_close.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003680 (size 8) =====

void sym.qcom_sg_vm_ops_close.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mem_buf_vmperm_unpin(*(param_1 + 0xa8));
    return;
}


// ===== sym.qcom_sg_vm_ops_open.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003688 (size 8) =====

void sym.qcom_sg_vm_ops_open.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mem_buf_vmperm_pin(*(param_1 + 0xa8));
    return;
}


// ===== sym.qcom_sg_unmap_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt @ 0x08003690 (size 8) =====

void sym.qcom_sg_unmap_dma_buf.a54aae6d51e276778f768246a9501da3.cfi_jt(int64_t *param_1,ulong *param_2,uint param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1[8];
    uVar4 = param_1[9];
    iVar5 = *(*param_1 + 0xa0);
    uVar3 = *(iVar5 + 0x78);
    mutex_lock(iVar5 + 0x18);
    if ((*(iVar5 + 0x70) != '\0') || (uVar2 = mem_buf_vmperm_can_cmo(uVar3), (uVar2 & 1) == 0)) {
        uVar4 = uVar4 | 0x20;
    }
    *(iVar1 + 0x20) = 0;
    if ((uVar4 >> 0x11 & 1) == 0) {
        dma_unmap_sg_attrs(param_1[1],*param_2,*(param_2 + 0xc),param_3,uVar4);
    }
    else {
        msm_dma_unmap_sg_attrs(param_1[1],*param_2,*(param_2 + 1),param_3,*param_1,uVar4);
    }
    mem_buf_vmperm_unpin(uVar3);
    mutex_unlock(iVar5 + 0x18);
    return;
}


// ===== sym.__typeid__ZTSFvP14qcom_sg_bufferE_global_addr @ 0x08003698 (size 8) =====

void sym.__typeid__ZTSFvP14qcom_sg_bufferE_global_addr(ulong *param_1)

{
    char cVar1;
    bool bVar2;
    int64_t *piVar3;
    ulong *arg2;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t *puVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = dma_heap_get_drvdata(*param_1);
    if (*(param_1 + 0xb) != 0) {
        uVar6 = 0;
        puVar5 = param_1[10];
        do {
            arg2 = *puVar5 & 0xfffffffffffffffc;
            if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\t')) {
                if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\x04')) {
                    if ((*arg2 >> 0x10 & 1) == 0) {
                        iVar4 = 2;
                    }
                    else {
                        iVar4 = 2;
                        if (*(arg2 + 0x51) != '\0') {
                            iVar4 = 3;
                        }
                    }
                }
                else {
                    iVar4 = 1;
                }
            }
            else {
                iVar4 = 0;
            }
            sym.dynamic_page_pool_free(*(*piVar3 + iVar4 * 8),arg2);
            uVar6 = uVar6 + 1;
            puVar5 = sg_next(puVar5);
        } while (uVar6 < *(param_1 + 0xb));
    }
    iVar4 = param_1[9];
    piVar3 = piVar3 + 4;
    Hint_Prefetch(piVar3,2,0,1);
    do {
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
            *piVar3 = *piVar3 - iVar4;
            cVar1 = ExclusiveMonitorsStatus();
        }
    } while (cVar1 != '\0');
    sg_free_table(param_1 + 10);
    kfree(param_1);
    return;
}


// ===== sym.cma_heap_free.e86ca08319bdddedc18780f65907e989.cfi_jt @ 0x080036a0 (size 8) =====

void sym.cma_heap_free.e86ca08319bdddedc18780f65907e989.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = dma_heap_get_drvdata(*param_1);
    if (param_1[-2] == 0) {
        cma_release(*puVar1,*param_1[10] & 0xfffffffffffffffc,param_1[9] >> 0xc);
    }
    else {
        uVar2 = dma_heap_get_dev(*param_1);
        dma_free_attrs(uVar2,param_1[9] + 0xfff & 0xfffffffffffff000,param_1[-2],param_1[-1],0);
    }
    sg_free_table(param_1 + 10);
    kfree(param_1 + -2);
    return;
}


// ===== sym.sc_heap_free.5483fe64c110efe2cf798b257c53df45.cfi_jt @ 0x080036a8 (size 8) =====

void sym.sc_heap_free.5483fe64c110efe2cf798b257c53df45.cfi_jt(ulong *param_1)

{
    int64_t *piVar1;
    int64_t arg3;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t arg1;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _delayed_work_timer_fn;
    arg1 = *param_1[10] & 0xfffffffffffffffc;
    iVar5 = dma_heap_get_drvdata(*param_1);
    if ((*(iVar5 + 2) & 0x4040) != 0) {
        iVar6 = 0x6800000000070b;
        arg3 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f0b;
            arg3 = 0x68000000000f03;
        }
        if (*(param_1 + 0xe) != '\0') {
            arg3 = iVar6;
        }
        sym.carveout_pages_zero(arg1,param_1[9],arg3);
    }
    uVar7 = param_1[9];
    down_read(iVar5 + 0x10);
    if (*(iVar5 + 0x50) != 0) {
        gen_pool_free_owner(*(iVar5 + 0x50),(arg1 + (uVar4 >> 0xc) * 0x40) * 0x40 + 0x8000000000,uVar7,0);
    }
    up_read(iVar5 + 0x10);
    sg_free_table(param_1 + 10);
    iVar6 = param_1[9];
    piVar1 = iVar5 + 0x88;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 - iVar6;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    kfree(param_1);
    return;
}


// ===== sym.system_heap_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt @ 0x080036b0 (size 8) =====

void sym.system_heap_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deferred_free(param_1 + 0x80,sym.system_heap_buf_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt,
                  *(param_1 + 0x48) + 0xfffU >> 0xc);
    return;
}


// ===== sym.carveout_heap_free.5483fe64c110efe2cf798b257c53df45.cfi_jt @ 0x080036b8 (size 8) =====

void sym.carveout_heap_free.5483fe64c110efe2cf798b257c53df45.cfi_jt(ulong *param_1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t arg2;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg1;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar5 = _delayed_work_timer_fn;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg1 = *param_1[10] & 0xfffffffffffffffc;
    iVar4 = dma_heap_get_drvdata(*param_1);
    if (*(iVar4 + 0x59) == '\0') {
        uVar7 = *(iVar4 + 0x50);
        iVar6 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f03;
        }
        sym.carveout_pages_zero(arg1,param_1[9],iVar6);
        iVar8 = param_1[9];
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        sg_init_table(&uStack_88,1);
        iVar6 = 1;
        iStack_80 = iVar8 << 0x20;
        uStack_88 = uStack_88 & 3 | arg1;
        iStack_78 = (arg1 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
        dma_sync_sg_for_device(uVar7,&uStack_88,1,0);
    }
    else {
        iVar6 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f0b;
        }
        sym.carveout_pages_zero(arg1,param_1[9],iVar6);
    }
    iVar8 = param_1[9];
    down_read(iVar4 + 8);
    if (*(iVar4 + 0x48) != 0) {
        gen_pool_free_owner(*(iVar4 + 0x48),(arg1 + (uVar5 >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40,iVar8,0);
        iVar6 = iVar8;
    }
    up_read(iVar4 + 8);
    sg_free_table(param_1 + 10);
    kfree(param_1);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.sc_heap_allocate;
        iVar4 = dma_heap_get_drvdata();
        uVar5 = sym.__carveout_heap_allocate(iVar4 + 8,arg2,iVar6,0x80036a8);
        if (uVar5 < 0xfffffffffffff001) {
            piVar1 = iVar4 + 0x88;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + arg2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return;
    }
    return;
}


// ===== sym.qcom_dma_heap_probe @ 0x080036c0 (size 448) =====

uint64_t sym.qcom_dma_heap_probe(int64_t arg1)

{
    uint *arg1_00;
    uint32_t uVar1;
    int *arg1_01;
    ulong *in_x18;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_system_heap_create(0x8001651,0x80017a8,0);
    sym.qcom_secure_system_heap_create(0x8001cf3,0,0x80000);
    sym.qcom_secure_system_heap_create(0x8001a5c,0,0x100000);
    arg1_01 = sym.parse_heap_dt(arg1);
    if ((arg1_01 != NULL) && (arg1_01 < 0xfffffffffffff001)) {
        if (*arg1_01 < 1) {
            uVar2 = 0;
        }
        else {
            iVar3 = 0;
            iVar4 = 0;
            uVar2 = 0;
            do {
                iVar5 = *(arg1_01 + 2);
                arg1_00 = iVar5 + iVar3;
    //switch table (4 cases) at 0x8000b10
                uVar1 = 0xffffffea;
                switch(*arg1_00) {
                case 0:
                    uVar1 = sym.qcom_secure_carveout_heap_create(arg1_00);
                    break;
                case 1:
                    uVar1 = sym.qcom_carveout_heap_create(arg1_00);
                    break;
                case 2:
                    uVar1 = sym.qcom_add_cma_heap(arg1_00);
                    break;
                case 3:
                    goto code_r0x0800380c;
                default:
                    _printk(0x8000b5f,"qcom_dma_heap_probe");
                    uVar1 = uVar2;
                }
                if (uVar1 == 0) {
                    _printk(0x8001aa8,"qcom_dma_heap_probe",*(iVar5 + iVar3 + 8));
                    uVar2 = uVar1;
                }
                else {
code_r0x0800380c:
                    _printk(0x8001a72,"qcom_dma_heap_probe",*(iVar5 + iVar3 + 8),uVar1);
                    uVar2 = uVar1;
                }
                iVar4 = iVar4 + 1;
                iVar3 = iVar3 + 0x38;
            } while (iVar4 < *arg1_01);
        }
        sym.qcom_add_bitstream_contig_heap(0x800127a);
        sym.free_pdata(arg1_01);
        arg1_01 = uVar2;
    }
    return arg1_01 & 0xffffffff;
}


// ===== sym.qcom_dma_heaps_freeze @ 0x08003880 (size 136) =====

int sym.qcom_dma_heaps_freeze(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_secure_carveout_heap_freeze(arg1);
    if (iVar1 == 0) {
        iVar1 = sym.qcom_secure_system_heap_freeze();
        if (iVar1 == 0) {
            return 0;
        }
        auVar3 = _printk(0x800186d,iVar1);
        iVar1 = sym.qcom_secure_carveout_heap_restore(auVar3._0_8_,auVar3._8_8_);
        if (iVar1 == 0) {
            return -0x10;
        }
        uVar2 = 0x800104a;
    }
    else {
        uVar2 = 0x8001bca;
    }
    _printk(uVar2,iVar1);
    return iVar1;
}


// ===== sym.qcom_dma_heaps_restore @ 0x08003908 (size 104) =====

int sym.qcom_dma_heaps_restore(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.qcom_secure_carveout_heap_restore(arg1,arg2);
    if (arg1_00 != 0) {
        arg1_00 = _printk(0x800104a,arg1_00 & 0xffffffff);
    }
    iVar1 = sym.qcom_secure_system_heap_restore(arg1_00);
    if (iVar1 != 0) {
        _printk(0x8001898,iVar1);
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08003970 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080039b4

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
    //switch table (4 cases) at 0x8000b14
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80039c8);
    (*pcVar1)();
}


// ===== sym.free_pdata @ 0x080039c8 (size 60) =====

void sym.free_pdata(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 8));
    kfree(arg1);
    return;
}


// ===== sym.parse_heap_dt @ 0x08003a04 (size 1120) =====

//WARNING: Removing unreachable block (ram,0x08003d98)
//WARNING: Removing unreachable block (ram,0x08003db0)
//WARNING: Removing unreachable block (ram,0x08003dcc)
//WARNING: Removing unreachable block (ram,0x08003da8)

int * sym.parse_heap_dt(int64_t arg1)

{
    int iVar1;
    uchar auVar2 [16];
    int *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar6 = *(iVar4 + 0x5e0);
    uVar7 = *(arg1 + 0x300);
    iVar4 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar4 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x10);
    if (piVar3 != NULL) {
        iVar4 = of_get_next_available_child(uVar7,0);
        iVar1 = *piVar3;
        for (; iVar4 != 0; iVar4 = of_get_next_available_child(uVar7,iVar4)) {
            iVar1 = iVar1 + 1;
            *piVar3 = iVar1;
        }
        if (iVar1 == 0) goto code_r0x08003e20;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = iVar1;
        if (SUB168(auVar2 * ZEXT816(0x38),8) == 0) {
            iVar4 = __kmalloc(iVar1 * 0x38,0xdc0);
            *(piVar3 + 2) = iVar4;
            if (iVar4 != 0) {
                puVar5 = of_get_next_available_child(uVar7,0);
                if (puVar5 != NULL) {
                    iVar4 = of_platform_device_create(puVar5,0,arg1 + 0x10);
                    if (iVar4 != 0) {
                        of_dma_configure_id(iVar4 + 0x10,puVar5,1,0);
                        *(*(piVar3 + 2) + 0x20) = iVar4 + 0x10;
                        piVar3 = of_property_read_string(puVar5,"qcom,dma-heap-name",*(piVar3 + 2) + 8);
                        return piVar3;
                    }
                    _printk(0x8001288,*puVar5);
                    kfree(*(piVar3 + 2));
                    kfree(piVar3);
                    piVar3 = 0xffffffffffffffea;
                }
                goto code_r0x08003e20;
            }
        }
        else {
            piVar3[2] = 0;
            piVar3[3] = 0;
        }
        kfree(piVar3);
    }
    piVar3 = 0xfffffffffffffff4;
code_r0x08003e20:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iVar6) {
        iVar4 = __stack_chk_fail();
        return *(*(iVar4 + 0xa0) + 0x78);
    }
    return piVar3;
}


// ===== sym.qcom_sg_lookup_vmperm @ 0x08003e64 (size 20) =====

ulong sym.qcom_sg_lookup_vmperm(int64_t arg1)

{
    return *(*(arg1 + 0xa0) + 0x78);
}


// ===== sym.qcom_sg_attach @ 0x08003e78 (size 400) =====

ulong sym.qcom_sg_attach(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint uVar2;
    int iVar3;
    ulong *puVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    uint64_t *puVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0xa0);
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x28);
    if (puVar4 != NULL) {
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x10);
        if (puVar5 != NULL) {
            iVar3 = sg_alloc_table(puVar5,*(iVar7 + 0x5c),0xcc0);
            if (iVar3 == 0) {
                if (*(iVar7 + 0x5c) != 0) {
                    uVar12 = 0;
                    puVar11 = *(iVar7 + 0x50);
                    puVar10 = *puVar5;
                    do {
                        uVar6 = puVar11[1];
                        uVar2 = *(puVar11 + 0xc);
                        *puVar10 = *puVar11 & 0xfffffffffffffffc | *puVar10 & 3;
                        *(puVar10 + 1) = uVar6;
                        *(puVar10 + 0xc) = uVar2;
                        puVar10 = sg_next(puVar10);
                        uVar12 = uVar12 + 1;
                        puVar11 = sg_next(puVar11);
                    } while (uVar12 < *(iVar7 + 0x5c));
                }
                if (puVar5 < 0xfffffffffffff001) {
                    puVar1 = puVar4 + 2;
                    *puVar4 = *(arg2 + 8);
                    puVar4[1] = puVar5;
                    puVar4[2] = puVar1;
                    puVar4[3] = puVar1;
                    *(puVar4 + 4) = 0;
                    *(arg2 + 0x40) = puVar4;
                    mutex_lock(iVar7 + 0x18);
                    piVar8 = iVar7 + 8;
                    iVar9 = *piVar8;
                    uVar6 = __list_add_valid(puVar1,piVar8,iVar9);
                    if ((uVar6 & 1) != 0) {
                        *(iVar9 + 8) = puVar1;
                        puVar4[2] = iVar9;
                        puVar4[3] = piVar8;
                        *piVar8 = puVar1;
                    }
                    mutex_unlock(iVar7 + 0x18);
                    return 0;
                }
            }
            else {
                kfree(puVar5);
            }
        }
        kfree(puVar4);
    }
    return 0xfffffff4;
}


// ===== sym.qcom_sg_detach @ 0x08004008 (size 136) =====

void sym.qcom_sg_detach(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg2 + 0x40);
    iVar1 = *(arg1 + 0xa0) + 0x18;
    mutex_lock(iVar1);
    uVar4 = __list_del_entry_valid(iVar5 + 0x10);
    if ((uVar4 & 1) != 0) {
        iVar2 = *(iVar5 + 0x10);
        piVar3 = *(iVar5 + 0x18);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(iVar5 + 0x10) = 0xdead000000000100;
    *(iVar5 + 0x18) = 0xdead000000000122;
    mutex_unlock(iVar1);
    sg_free_table(*(iVar5 + 8));
    kfree(*(iVar5 + 8));
    kfree(iVar5);
    return;
}


// ===== sym.qcom_sg_map_dma_buf @ 0x08004090 (size 272) =====

ulong * sym.qcom_sg_map_dma_buf(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x40);
    uVar6 = *(arg1 + 0x48);
    iVar7 = *(*arg1 + 0xa0);
    puVar4 = *(iVar1 + 8);
    uVar5 = *(iVar7 + 0x78);
    mutex_lock(iVar7 + 0x18);
    mem_buf_vmperm_pin(uVar5);
    if ((*(iVar7 + 0x70) != '\0') || (uVar3 = mem_buf_vmperm_can_cmo(uVar5), (uVar3 & 1) == 0)) {
        uVar6 = uVar6 | 0x20;
    }
    if ((uVar6 >> 0x11 & 1) == 0) {
        if (*(iVar1 + 0x20) == '\0') {
            iVar2 = dma_map_sgtable(*(arg1 + 8),puVar4,arg2 & 0xffffffffU,uVar6);
            if (iVar2 == 0) goto code_r0x08004144;
        }
        else {
            _dev_err(*(arg1 + 8),"Error: Dma-buf is already mapped!\n");
            iVar2 = -0x10;
        }
    }
    else {
        iVar2 = msm_dma_map_sg_attrs(*(arg1 + 8),*puVar4,*(puVar4 + 0xc),arg2 & 0xffffffffU,*arg1,uVar6);
        if (0 < iVar2) {
            *(puVar4 + 1) = iVar2;
code_r0x08004144:
            *(iVar1 + 0x20) = 1;
            goto code_r0x08004160;
        }
        iVar2 = -0x16;
    }
    puVar4 = iVar2;
    mem_buf_vmperm_unpin(uVar5);
code_r0x08004160:
    mutex_unlock(iVar7 + 0x18);
    return puVar4;
}


// ===== sym.qcom_sg_unmap_dma_buf @ 0x080041a0 (size 204) =====

void sym.qcom_sg_unmap_dma_buf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x40);
    uVar4 = *(arg1 + 0x48);
    iVar5 = *(*arg1 + 0xa0);
    uVar3 = *(iVar5 + 0x78);
    mutex_lock(iVar5 + 0x18);
    if ((*(iVar5 + 0x70) != '\0') || (uVar2 = mem_buf_vmperm_can_cmo(uVar3), (uVar2 & 1) == 0)) {
        uVar4 = uVar4 | 0x20;
    }
    *(iVar1 + 0x20) = 0;
    if ((uVar4 >> 0x11 & 1) == 0) {
        dma_unmap_sg_attrs(*(arg1 + 8),*arg2,*(arg2 + 0xc),arg3 & 0xffffffffU,uVar4);
    }
    else {
        msm_dma_unmap_sg_attrs(*(arg1 + 8),*arg2,*(arg2 + 8),arg3 & 0xffffffffU,*arg1,uVar4);
    }
    mem_buf_vmperm_unpin(uVar3);
    mutex_unlock(iVar5 + 0x18);
    return;
}


// ===== sym.qcom_sg_release @ 0x0800426c (size 144) =====

void sym.qcom_sg_release(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa0);
    iVar1 = mem_buf_vmperm_release(*(iVar3 + 0x78));
    if (iVar1 == 0) {
        msm_dma_buf_freed(iVar3);
        pcVar2 = *(iVar3 + 0xa0);
        if (4 < (pcVar2 + -0x8003698 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x84ef43372adba67b,pcVar2,0x8000a90);
        }
        (*pcVar2)(iVar3);
    }
    return;
}


// ===== sym.qcom_sg_dma_buf_begin_cpu_access @ 0x080042fc (size 152) =====

ulong sym.qcom_sg_dma_buf_begin_cpu_access(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa0);
    if (*(iVar2 + 0x70) == '\0') {
        mutex_lock(iVar2 + 0x18);
        uVar1 = mem_buf_vmperm_can_cmo(*(iVar2 + 0x78));
        if ((uVar1 & 1) != 0) {
            for (puVar3 = *(iVar2 + 8); iVar2 + 8 != puVar3; puVar3 = *puVar3) {
                if (*(puVar3 + 2) != '\0') {
                    dma_sync_sg_for_cpu(puVar3[-2],*puVar3[-1],*(puVar3[-1] + 0xc),arg2 & 0xffffffff);
                }
            }
        }
        mutex_unlock(iVar2 + 0x18);
    }
    return 0;
}


// ===== sym.qcom_sg_dma_buf_begin_cpu_access_partial @ 0x08004394 (size 224) =====

uint sym.qcom_sg_dma_buf_begin_cpu_access_partial(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa0);
    if (*(iVar3 + 0x70) != '\0') {
        return 0;
    }
    mutex_lock(iVar3 + 0x18);
    uVar2 = mem_buf_vmperm_can_cmo(*(iVar3 + 0x78));
    if ((uVar2 & 1) != 0) {
        piVar4 = iVar3 + 8;
        piVar5 = *piVar4;
        if (piVar4 != piVar5) {
            uVar1 = 0;
            do {
                if (piVar5[2] != '\0') {
                    uVar1 = sym.sgl_sync_range(piVar5[-2],*piVar5[-1],*(piVar5[-1] + 0xc),arg3 & 0xffffffff);
                }
                piVar5 = *piVar5;
            } while (piVar4 != piVar5);
            goto code_r0x08004448;
        }
    }
    uVar1 = 0;
code_r0x08004448:
    mutex_unlock(iVar3 + 0x18);
    return uVar1;
}


// ===== sym.qcom_sg_dma_buf_end_cpu_access @ 0x08004474 (size 152) =====

ulong sym.qcom_sg_dma_buf_end_cpu_access(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa0);
    if (*(iVar2 + 0x70) == '\0') {
        mutex_lock(iVar2 + 0x18);
        uVar1 = mem_buf_vmperm_can_cmo(*(iVar2 + 0x78));
        if ((uVar1 & 1) != 0) {
            for (puVar3 = *(iVar2 + 8); iVar2 + 8 != puVar3; puVar3 = *puVar3) {
                if (*(puVar3 + 2) != '\0') {
                    dma_sync_sg_for_device(puVar3[-2],*puVar3[-1],*(puVar3[-1] + 0xc),arg2 & 0xffffffff);
                }
            }
        }
        mutex_unlock(iVar2 + 0x18);
    }
    return 0;
}


// ===== sym.qcom_sg_dma_buf_end_cpu_access_partial @ 0x0800450c (size 224) =====

uint sym.qcom_sg_dma_buf_end_cpu_access_partial(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa0);
    if (*(iVar3 + 0x70) != '\0') {
        return 0;
    }
    mutex_lock(iVar3 + 0x18);
    uVar2 = mem_buf_vmperm_can_cmo(*(iVar3 + 0x78));
    if ((uVar2 & 1) != 0) {
        piVar4 = iVar3 + 8;
        piVar5 = *piVar4;
        if (piVar4 != piVar5) {
            uVar1 = 0;
            do {
                if (piVar5[2] != '\0') {
                    uVar1 = sym.sgl_sync_range(piVar5[-2],*piVar5[-1],*(piVar5[-1] + 0xc),arg3 & 0xffffffff);
                }
                piVar5 = *piVar5;
            } while (piVar4 != piVar5);
            goto code_r0x080045c0;
        }
    }
    uVar1 = 0;
code_r0x080045c0:
    mutex_unlock(iVar3 + 0x18);
    return uVar1;
}


// ===== sym.qcom_sg_mmap @ 0x080045ec (size 380) =====

int sym.qcom_sg_mmap(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0xa0);
    uVar5 = *arg2;
    iVar6 = *(arg2 + 0x98);
    mem_buf_vmperm_pin(*(iVar9 + 0x78));
    uVar2 = mem_buf_vmperm_can_mmap(*(iVar9 + 0x78),arg2);
    if ((uVar2 & 1) == 0) {
        iVar1 = -1;
code_r0x08004728:
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
    }
    else {
        *(arg2 + 0x90) = reloc.qcom_sg_vm_ops_open.a54aae6d51e276778f768246a9501da3.cfi_jt;
        *(arg2 + 0xa8) = *(iVar9 + 0x78);
        if (*(iVar9 + 0x70) != '\0') {
            *(arg2 + 0x48) = *(arg2 + 0x48) & 0xffffffffffffffe3 | 0x60000000000008;
        }
        if (*(iVar9 + 0x58) != 0) {
            uVar10 = 0;
            puVar7 = *(iVar9 + 0x50);
            uVar2 = iVar6 << 0xc;
            do {
                uVar3 = *(puVar7 + 0xc);
                uVar8 = uVar2 - uVar3;
                if (uVar2 < uVar3) {
                    uVar4 = *(arg2 + 8) - uVar5;
                    uVar8 = uVar3 - uVar2;
                    if (uVar4 <= uVar3 - uVar2) {
                        uVar8 = uVar4;
                    }
                    iVar1 = remap_pfn_range(arg2,uVar5,
                                            (*puVar7 & 0xfffffffffffffffc) + (uVar2 >> 6 & 0x3ffffffffffffc0) +
                                            (_delayed_work_timer_fn >> 0xc) * 0x40 + 0x200000000 >> 6,uVar8,
                                            *(arg2 + 0x48));
                    if (iVar1 != 0) goto code_r0x08004728;
                    uVar5 = uVar8 + uVar5;
                    if (*(arg2 + 8) <= uVar5) break;
                    uVar8 = 0;
                }
                uVar10 = uVar10 + 1;
                puVar7 = sg_next(puVar7);
                uVar2 = uVar8;
            } while (uVar10 < *(iVar9 + 0x58));
        }
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.qcom_sg_vmap @ 0x08004768 (size 488) =====

uint64_t sym.qcom_sg_vmap(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    int iVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint64_t *puStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0xa0);
    mem_buf_vmperm_pin(*(iVar9 + 0x78));
    uVar5 = mem_buf_vmperm_can_vmap(*(iVar9 + 0x78));
    if ((uVar5 & 1) == 0) {
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
        uVar5 = 0xffffffff;
        goto code_r0x0800490c;
    }
    mutex_lock(iVar9 + 0x18);
    if (*(iVar9 + 0x60) == 0) {
        uVar5 = *(iVar9 + 0x48) + 0xfff;
        iVar6 = vmalloc(-(uVar5 >> 0x2b & 1) & 0xfffffff800000000 | (uVar5 >> 0xc & 0xffffffff) << 3);
        uStack_78 = 0;
        uStack_70 = 0;
        puStack_80 = NULL;
        uVar1 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f03;
        }
        if (iVar6 == 0) {
code_r0x080048f8:
            uVar5 = 0xfffffffffffffff4;
        }
        else {
            cVar2 = *(iVar9 + 0x70);
            __sg_page_iter_start(&puStack_80,*(iVar9 + 0x50),*(iVar9 + 0x5c),0);
            uVar7 = __sg_page_iter_next(&puStack_80);
            if ((uVar7 & 1) != 0) {
                iVar10 = 0;
                do {
                    if (uVar5 * 0x100000 >> 0x20 <= iVar10 >> 3) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x800489c);
                        (*pcVar4)();
                    }
                    *(iVar6 + iVar10) = (*puStack_80 & 0xfffffffffffffffc) + (uStack_78 & 0xffffffff) * 0x40;
                    uVar7 = __sg_page_iter_next(&puStack_80);
                    iVar10 = iVar10 + 8;
                } while ((uVar7 & 1) != 0);
            }
            if (cVar2 != '\0') {
                uVar1 = uVar1 | 0x60000000000008;
            }
            uVar5 = vmap(iVar6,uVar5 >> 0xc & 0xffffffff,4,uVar1);
            vfree(iVar6);
            if (uVar5 == 0) goto code_r0x080048f8;
            if (uVar5 < 0xfffffffffffff001) {
                *(iVar9 + 0x68) = uVar5;
                *(iVar9 + 0x60) = *(iVar9 + 0x60) + 1;
                *arg2 = uVar5;
                goto code_r0x080047e0;
            }
        }
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
    }
    else {
        *(iVar9 + 0x60) = *(iVar9 + 0x60) + 1;
        *arg2 = *(iVar9 + 0x68);
code_r0x080047e0:
        uVar5 = 0;
        *(arg2 + 8) = 0;
    }
    mutex_unlock(iVar9 + 0x18);
code_r0x0800490c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        puVar8 = auVar11._8_8_;
        *extraout_x18 = sym.qcom_sg_vunmap;
        iVar9 = *(auVar11._0_8_ + 0xa0);
        mutex_lock(iVar9 + 0x18);
        iVar3 = *(iVar9 + 0x60) + -1;
        *(iVar9 + 0x60) = iVar3;
        if (iVar3 == 0) {
            vunmap(*(iVar9 + 0x68));
            *(iVar9 + 0x68) = 0;
        }
        mem_buf_vmperm_unpin(*(iVar9 + 0x78));
        uVar5 = mutex_unlock(iVar9 + 0x18);
        if (*(puVar8 + 1) != '\0') {
            *(puVar8 + 1) = 0;
        }
        *puVar8 = 0;
        return uVar5;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.qcom_sg_vunmap @ 0x08004950 (size 128) =====

void sym.qcom_sg_vunmap(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa0);
    mutex_lock(iVar2 + 0x18);
    iVar1 = *(iVar2 + 0x60) + -1;
    *(iVar2 + 0x60) = iVar1;
    if (iVar1 == 0) {
        vunmap(*(iVar2 + 0x68));
        *(iVar2 + 0x68) = 0;
    }
    mem_buf_vmperm_unpin(*(iVar2 + 0x78));
    mutex_unlock(iVar2 + 0x18);
    if (*(arg2 + 8) != '\0') {
        *(arg2 + 8) = 0;
    }
    *arg2 = 0;
    return;
}


// ===== sym.sgl_sync_range @ 0x080049d0 (size 380) =====

ulong sym.sgl_sync_range(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t in_x4;
    uint in_w5;
    uint32_t in_w6;
    ulong *in_x18;
    int iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg3;
    if (iVar5 != 0) {
        if (((*(arg2 + 0x18) == 0) || (iVar6 = sg_next(arg2), iVar5 == 1)) || (*(iVar6 + 0x18) == 0)) {
            iVar6 = 0;
            uVar8 = 0;
            iVar7 = 0;
            do {
                if (iVar7 == 0) {
                    iVar6 = *(arg2 + 0x10);
                }
                uVar4 = *(arg2 + 0xc);
                uVar1 = uVar4 + uVar8;
                uVar8 = uVar1;
                if (arg4 < uVar8) {
                    uVar1 = uVar1 - arg4;
                    uVar3 = in_x4;
                    if (uVar1 <= in_x4) {
                        uVar3 = uVar1;
                    }
                    iVar2 = iVar6 + (uVar4 - uVar1);
                    if ((in_w6 & 1) == 0) {
                        dma_sync_single_for_device(arg1,iVar2,uVar3,in_w5);
                    }
                    else {
                        dma_sync_single_for_cpu(arg1,iVar2,uVar3,in_w5);
                    }
                    in_x4 = in_x4 - uVar3;
                    if (in_x4 == 0) {
                        return 0;
                    }
                    arg4 = uVar3 + arg4;
                    uVar4 = *(arg2 + 0xc);
                }
                iVar6 = iVar6 + uVar4;
                iVar7 = iVar7 + 1;
                arg2 = sg_next(arg2);
            } while (iVar5 != iVar7);
        }
        else if (*(arg1 + 0x298) != 0) {
            iVar5 = ___ratelimit(obj.sgl_sync_range._rs,"sgl_sync_range");
            if (iVar5 != 0) {
                iVar6 = *(arg1 + 0x70);
                if (iVar6 == 0) {
                    iVar6 = *arg1;
                }
                _printk(0x8000f9c,iVar6);
                return 0xffffffea;
            }
            return 0xffffffea;
        }
    }
    return 0;
}


// ===== sym.qcom_sg_vm_ops_open @ 0x08004b4c (size 40) =====

void sym.qcom_sg_vm_ops_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mem_buf_vmperm_pin(*(arg1 + 0xa8));
    return;
}


// ===== sym.qcom_sg_vm_ops_close @ 0x08004b74 (size 40) =====

void sym.qcom_sg_vm_ops_close(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mem_buf_vmperm_unpin(*(arg1 + 0xa8));
    return;
}


// ===== sym.qcom_sys_heap_alloc_largest_available @ 0x08004b9c (size 560) =====

int64_t sym.qcom_sys_heap_alloc_largest_available(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    int *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((0x1fffff < arg2) && (8 < arg3)) {
        uVar1 = _raw_spin_lock_irqsave(*arg1 + 0x40);
        piVar3 = *arg1;
        piVar5 = arg1;
        if ((*piVar3 == 0) && (piVar3[1] == 0)) {
            _raw_spin_unlock_irqrestore(piVar3 + 0x10,uVar1);
        }
        else {
            iVar2 = sym.dynamic_page_pool_remove(piVar3);
            _raw_spin_unlock_irqrestore(*arg1 + 0x40,uVar1);
            if (iVar2 != 0) goto code_r0x08004d78;
        }
        uVar1 = tpidr_el1;
        iVar2 = __alloc_pages(uVar1,*(*arg1 + 0x44),*(*arg1 + 0x48),0,0);
        if (iVar2 != 0) goto code_r0x08004d78;
    }
    if ((arg2 < 0x10000) || (arg3 < 4)) {
        if (arg2 < 0x1000) {
            return 0;
        }
    }
    else {
        piVar5 = arg1 + 8;
        uVar1 = _raw_spin_lock_irqsave(*piVar5 + 0x40);
        piVar3 = *piVar5;
        if ((*piVar3 == 0) && (piVar3[1] == 0)) {
            _raw_spin_unlock_irqrestore(piVar3 + 0x10,uVar1);
        }
        else {
            iVar2 = sym.dynamic_page_pool_remove(piVar3);
            _raw_spin_unlock_irqrestore(*piVar5 + 0x40,uVar1);
            if (iVar2 != 0) goto code_r0x08004d78;
        }
        uVar1 = tpidr_el1;
        iVar2 = __alloc_pages(uVar1,*(*piVar5 + 0x44),*(*piVar5 + 0x48),0,0);
        if (iVar2 != 0) goto code_r0x08004d78;
    }
    piVar5 = arg1 + 0x10;
    uVar1 = _raw_spin_lock_irqsave(*piVar5 + 0x40);
    piVar3 = *piVar5;
    if ((*piVar3 == 0) && (piVar3[1] == 0)) {
        _raw_spin_unlock_irqrestore(piVar3 + 0x10,uVar1);
    }
    else {
        iVar2 = sym.dynamic_page_pool_remove(piVar3);
        _raw_spin_unlock_irqrestore(*piVar5 + 0x40,uVar1);
        if (iVar2 != 0) goto code_r0x08004d78;
    }
    uVar1 = tpidr_el1;
    iVar2 = __alloc_pages(uVar1,*(*piVar5 + 0x44),*(*piVar5 + 0x48),0,0);
    if (iVar2 == 0) {
        return 0;
    }
code_r0x08004d78:
    iVar4 = *piVar5;
    if ((*(iVar4 + 0x48) != 0) && (*(iVar4 + 8) < 0x2800L >> (*(iVar4 + 0x48) & 0x3f))) {
        wake_up_process(*(*piVar5 + 0x38));
    }
    return iVar2;
}


// ===== sym.qcom_system_heap_create @ 0x08004ddc (size 720) =====

void sym.qcom_system_heap_create(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *arg2_00;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    int64_t iStack_118;
    code *pcStack_110;
    uint32_t *puStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    pcStack_110 = NULL;
    puStack_108 = NULL;
    iStack_118 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    iVar3 = si_meminfo(&uStack_c8);
    _segment.ehdr = uStack_a8;
    uVar4 = sym.dynamic_page_pool_init_shrinker(iVar3);
    uVar5 = uVar4 & 0xffffffff;
    if (uVar4 == 0) {
        arg2_00 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x80);
        if (arg2_00 == NULL) {
            uVar5 = 0xfffffff4;
        }
        else {
            *arg2_00 = arg3 & 1;
            pcStack_110 = reloc.system_heap_allocate.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt;
            iStack_118 = arg1;
            puStack_108 = arg2_00;
            uVar5 = sym.dynamic_page_pool_create_pools(0,0);
            *(arg2_00 + 2) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                uStack_d8 = 0;
                uStack_d0 = 0;
                uStack_e8 = 0;
                uStack_e0 = 0;
                uStack_f8 = 0;
                uStack_100 = 0;
                uStack_f0 = 10;
                uVar5 = kthread_create_on_node
                                  (sym.system_heap_refill_worker.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt,uVar5,
                                   0xffffffff,"%s-pool-refill-thread",arg1);
                if (uVar5 < 0xfffffffffffff001) {
                    wake_up_process(uVar5);
                    uVar1 = sched_setattr(uVar5,&uStack_100);
                    if (uVar1 == 0) {
                        *(**(arg2_00 + 2) + 0x38) = uVar5;
                        *(*(*(arg2_00 + 2) + 8) + 0x38) = uVar5;
                        *(*(*(arg2_00 + 2) + 0x10) + 0x38) = uVar5;
                        goto code_r0x08004f5c;
                    }
                    _printk(0x80014ba,"system_heap_create_refill_worker",arg1,uVar1);
                    kthread_stop(uVar5);
                    uVar5 = uVar1;
                }
                else {
                    _printk(0x8001c88,"system_heap_create_refill_worker",arg1,uVar5);
                    if (uVar5 == 0) {
code_r0x08004f5c:
                        sym.qcom_sys_heap_reserve_pool_init(arg1,arg2_00);
                        uVar5 = dma_heap_add(&iStack_118);
                        if (uVar5 < 0xfffffffffffff001) {
                            if ((arg3 & 1U) != 0) {
                                iVar3 = dma_heap_get_dev(uVar5);
                                sym.dma_coerce_mask_and_coherent(iVar3);
                            }
                            _printk(0x8000e96,"qcom_system_heap_create",arg1);
                            if (arg2 != 0) {
                                iStack_118 = arg2;
                                uVar5 = dma_heap_add(&iStack_118);
                                if (uVar5 < 0xfffffffffffff001) {
                                    iVar3 = dma_heap_get_dev(uVar5);
                                    sym.dma_coerce_mask_and_coherent(iVar3);
                                    _printk(0x8000e96,"qcom_system_heap_create",arg2);
                                }
                                else {
                                    _printk(0x80012a6,"qcom_system_heap_create",arg2);
                                }
                            }
                            goto code_r0x08004fe8;
                        }
                        kthread_stop(*(**(arg2_00 + 2) + 0x38));
                    }
                }
                sym.dynamic_page_pool_release_pools(*(arg2_00 + 2));
            }
            else {
                uVar5 = uVar5 & 0xffffffff;
            }
            kfree(arg2_00);
        }
    }
    _printk(0x80012a6,"qcom_system_heap_create",arg1,uVar5 & 0xffffffff);
code_r0x08004fe8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.dma_coerce_mask_and_coherent;
        *(iVar3 + 0x2a0) = iVar3 + 0x2a8;
        iVar2 = dma_set_mask(iVar3,0xffffffffffffffff);
        if (iVar2 == 0) {
            dma_set_coherent_mask(iVar3,0xffffffffffffffff);
        }
        return;
    }
    return;
}


// ===== sym.dma_coerce_mask_and_coherent @ 0x080050ac (size 76) =====

void sym.dma_coerce_mask_and_coherent(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x2a0) = arg1 + 0x2a8;
    iVar1 = dma_set_mask(arg1,0xffffffffffffffff);
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1,0xffffffffffffffff);
    }
    return;
}


// ===== sym.dma_coerce_mask_and_coherent_1 @ 0x080050f8 (size 76) =====

void sym.dma_coerce_mask_and_coherent_1(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x2a0) = arg1 + 0x2a8;
    iVar1 = dma_set_mask(arg1,0xffffffffffffffff);
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1,0xffffffffffffffff);
    }
    return;
}


// ===== sym.system_heap_allocate @ 0x08005144 (size 940) =====

uint64_t sym.system_heap_allocate(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t ****ppppiVar2;
    int64_t ****ppppiVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int64_t *piVar8;
    int *arg1_00;
    ulong *puVar9;
    int64_t *****pppppiVar10;
    ulong uVar11;
    uchar uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    int64_t *****pppppiVar15;
    uint64_t *puVar16;
    int64_t *****pppppiVar17;
    ulong unaff_x30;
    int64_t ****ppppiStack_c0;
    int64_t ****ppppiStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piStack_80 = *0x8002258;
    uStack_78 = *0x8002260;
    uStack_70 = *0x8002268;
    uStack_a0 = *0x8002238;
    iStack_98 = *0x8002240;
    uStack_90 = *0x8002248;
    uStack_88 = *0x8002250;
    uStack_b0 = *0x8002228;
    uStack_a8 = *0x8002230;
    piVar8 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xa8);
    if (piVar8 == NULL) {
        uVar13 = 0xfffffffffffffff4;
    }
    else {
        arg1_00 = dma_heap_get_drvdata(arg1);
        piVar8[1] = piVar8 + 1;
        piVar8[2] = piVar8 + 1;
        __mutex_init(piVar8 + 3,"&buffer->lock",obj.system_heap_allocate.__key);
        *piVar8 = arg1;
        piVar8[9] = arg2;
        iVar4 = *arg1_00;
        iVar7 = 0;
        piVar8[0x14] = sym.system_heap_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt;
        *(piVar8 + 0xe) = iVar4 != 0;
        ppppiStack_c0 = &ppppiStack_c0;
        ppppiStack_b8 = &ppppiStack_c0;
        if (arg2 != 0) {
            uVar13 = 9;
            puVar16 = sp_el0;
            do {
                if (((*puVar16 & 1) != 0) && ((*(puVar16 + 0x829) & 1) != 0)) goto code_r0x08005314;
                if (arg1_00[6] == '\0') {
                    puVar9 = sym.qcom_sys_heap_alloc_largest_available(*(arg1_00 + 2),arg2,uVar13);
                    pppppiVar15 = ppppiStack_b8;
                }
                else {
                    puVar9 = sym.qcom_extend_sys_heap_alloc_largest_available(arg1_00,arg2,uVar13);
                    pppppiVar15 = ppppiStack_b8;
                }
                ppppiStack_b8 = pppppiVar15;
                if (puVar9 == NULL) goto code_r0x08005314;
                pppppiVar10 = puVar9 + 1;
                uVar13 = __list_add_valid(pppppiVar10,pppppiVar15,&ppppiStack_c0);
                if ((uVar13 & 1) != 0) {
                    puVar9[1] = &ppppiStack_c0;
                    puVar9[2] = pppppiVar15;
                    ppppiStack_b8 = pppppiVar10;
                    *pppppiVar15 = pppppiVar10;
                }
                if ((*puVar9 >> 0x10 & 1) == 0) {
                    uVar14 = 0;
                    if ((*puVar9 >> 0x10 & 1) == 0) goto code_r0x080052f4;
code_r0x08005250:
                    uVar13 = *(puVar9 + 0x51);
                }
                else {
                    uVar14 = *(puVar9 + 0x51);
                    if ((*puVar9 >> 0x10 & 1) != 0) goto code_r0x08005250;
code_r0x080052f4:
                    uVar13 = 0;
                }
                iVar7 = iVar7 + 1;
                arg2 = (-0x1000L << (uVar14 & 0x3f)) + arg2;
            } while (arg2 != 0);
        }
        piVar1 = piVar8 + 10;
        iVar7 = sg_alloc_table(piVar1,iVar7,0xcc0);
        if (iVar7 == 0) {
            if (&ppppiStack_c0 != ppppiStack_c0) {
                puVar16 = *piVar1;
                pppppiVar15 = ppppiStack_c0;
                do {
                    pppppiVar10 = pppppiVar15 + -1;
                    if ((*pppppiVar10 >> 0x10 & 1) == 0) {
                        uVar13 = 0;
                    }
                    else {
                        uVar13 = *(pppppiVar15 + 0x49);
                    }
                    if ((pppppiVar10 & 3) != 0) goto code_r0x080054ec;
                    pppppiVar17 = *pppppiVar15;
                    *(puVar16 + 1) = 0;
                    *(puVar16 + 0xc) = 0x1000L << (uVar13 & 0x3f);
                    *puVar16 = *puVar16 & 3 | pppppiVar10;
                    puVar16 = sg_next(puVar16);
                    uVar13 = __list_del_entry_valid(pppppiVar15);
                    if ((uVar13 & 1) != 0) {
                        ppppiVar2 = *pppppiVar15;
                        ppppiVar3 = pppppiVar15[1];
                        ppppiVar2[1] = ppppiVar3;
                        *ppppiVar3 = ppppiVar2;
                    }
                    *pppppiVar15 = 0xdead000000000100;
                    pppppiVar15[1] = 0xdead000000000122;
                    pppppiVar15 = pppppiVar17;
                } while (&ppppiStack_c0 != pppppiVar17);
            }
            if (piVar8[0xe] != '\0') {
                uVar11 = dma_heap_get_dev(arg1);
                dma_map_sgtable(uVar11,piVar1,0,0);
                uVar11 = dma_heap_get_dev(arg1);
                dma_unmap_sg_attrs(uVar11,piVar8[10],*(piVar8 + 0x5c),0,0);
            }
            uVar13 = mem_buf_vmperm_alloc(piVar1);
            piVar8[0xf] = uVar13;
            if (uVar13 < 0xfffffffffffff001) {
                uStack_b0 = dma_heap_get_name(arg1);
                iStack_98 = piVar8[9];
                uStack_90 = CONCAT44(uStack_90._4_4_,arg3);
                piStack_80 = piVar8;
                uVar13 = mem_buf_dma_buf_export
                                   (&uStack_b0,reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt);
                if (uVar13 < 0xfffffffffffff001) goto code_r0x0800535c;
                mem_buf_vmperm_release(piVar8[0xf]);
            }
            sg_free_table(piVar1);
            uVar13 = uVar13;
        }
        else {
code_r0x08005314:
            uVar13 = 0xfffffffffffffff4;
        }
        pppppiVar15 = ppppiStack_c0;
        while (&ppppiStack_c0 != pppppiVar15) {
            pppppiVar10 = pppppiVar15 + -1;
            if ((*pppppiVar10 >> 0x10 & 1) == 0) {
                uVar12 = 0;
            }
            else {
                uVar12 = *(pppppiVar15 + 0x49);
            }
            pppppiVar15 = *pppppiVar15;
            __free_pages(pppppiVar10,uVar12);
        }
        kfree(piVar8);
    }
code_r0x0800535c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar13;
    }
    __stack_chk_fail();
code_r0x080054ec:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80054f0);
    (*pcVar6)();
}


// ===== sym.get_pool_size_bytes @ 0x080054f0 (size 116) =====

int64_t sym.get_pool_size_bytes(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = dma_heap_get_drvdata();
    iVar1 = sym.dynamic_page_pool_total(**(iVar4 + 8));
    iVar2 = sym.dynamic_page_pool_total(*(*(iVar4 + 8) + 8));
    iVar3 = sym.dynamic_page_pool_total(*(*(iVar4 + 8) + 0x10));
    return (iVar2 + iVar1 + iVar3) * 0x1000;
}


// ===== sym.system_heap_free @ 0x08005564 (size 64) =====

void sym.system_heap_free(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deferred_free(arg1 + 0x80,sym.system_heap_buf_free.4c8444745957bfadb0a0ad5e7bfb0e21.cfi_jt,
                  *(arg1 + 0x48) + 0xfffU >> 0xc);
    return;
}


// ===== sym.system_heap_buf_free @ 0x080055a4 (size 824) =====

ulong sym.system_heap_buf_free(int64_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uchar uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t *piVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t *puVar22;
    ulong *arg2_00;
    uint64_t uVar23;
    ulong unaff_x30;
    uint64_t *puStack_188;
    uint64_t uStack_180;
    ulong uStack_178;
    int64_t aiStack_170 [34];
    
    *in_x18 = unaff_x30;
    iVar4 = _segment.ehdr;
    iVar5 = sp_el0;
    aiStack_170[0x20] = *(iVar5 + 0x5e0);
    iVar5 = dma_heap_get_drvdata(*(arg1 + -0x80));
    if (arg2 == 0) {
        uStack_180 = 0;
        uStack_178 = 0;
        puStack_188 = NULL;
        aiStack_170[0x1e] = 0;
        aiStack_170[0x1f] = 0;
        aiStack_170[0x1c] = 0;
        aiStack_170[0x1d] = 0;
        aiStack_170[0x1a] = 0;
        aiStack_170[0x1b] = 0;
        aiStack_170[0x18] = 0;
        aiStack_170[0x19] = 0;
        aiStack_170[0x16] = 0;
        aiStack_170[0x17] = 0;
        aiStack_170[0x14] = 0;
        aiStack_170[0x15] = 0;
        aiStack_170[0x12] = 0;
        aiStack_170[0x13] = 0;
        aiStack_170[0x10] = 0;
        aiStack_170[0x11] = 0;
        aiStack_170[0xe] = 0;
        aiStack_170[0xf] = 0;
        aiStack_170[0xc] = 0;
        aiStack_170[0xd] = 0;
        aiStack_170[10] = 0;
        aiStack_170[0xb] = 0;
        aiStack_170[8] = 0;
        aiStack_170[9] = 0;
        aiStack_170[6] = 0;
        aiStack_170[7] = 0;
        aiStack_170[4] = 0;
        aiStack_170[5] = 0;
        aiStack_170[2] = 0;
        aiStack_170[3] = 0;
        aiStack_170[0] = 0;
        aiStack_170[1] = 0;
        __sg_page_iter_start(&stack0xfffffffffffffe78,*(arg1 + -0x30),*(arg1 + -0x24),0);
        uVar6 = __sg_page_iter_next(&stack0xfffffffffffffe78);
        if ((uVar6 & 1) != 0) {
            uVar6 = 0;
            do {
                uVar20 = uVar6 + 1;
                *(&stack0xfffffffffffffe90 + uVar6 * 8) =
                     (*puStack_188 & 0xfffffffffffffffc) + (uStack_180 & 0xffffffff) * 0x40;
                uVar6 = uVar20;
                if (uVar20 == 0x20) {
                    uVar7 = 0x68000000000703;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar7 = 0x68000000000f03;
                    }
                    iVar16 = vmap(&stack0xfffffffffffffe90,0x20,4,uVar7);
                    if (iVar16 == 0) goto code_r0x08005750;
                    memset(iVar16,0,0x20000);
                    vunmap(iVar16);
                    uVar6 = 0;
                }
                uVar23 = __sg_page_iter_next(&stack0xfffffffffffffe78);
            } while ((uVar23 & 1) != 0);
            if (uVar6 != 0) {
                uVar7 = 0x68000000000703;
                if (arm64_use_ng_mappings != 0x0) {
                    uVar7 = 0x68000000000f03;
                }
                iVar16 = vmap(&stack0xfffffffffffffe90,uVar6,4,uVar7);
                if (iVar16 == 0) {
code_r0x08005750:
                    bVar3 = true;
                    goto code_r0x08005754;
                }
                memset(iVar16,0,uVar6 << 0xc);
                vunmap(iVar16);
            }
        }
        bVar3 = false;
    }
    else {
        bVar3 = arg2 == 1;
    }
code_r0x08005754:
    if (*(arg1 + -0x28) != 0) {
        uVar20 = 0;
        puVar22 = *(arg1 + -0x30);
        do {
            arg2_00 = *puVar22 & 0xfffffffffffffffc;
            if ((bVar3) || ((iVar4 != 0 && (_segment.ehdr <= _obj.msm_total_pools_size)))) {
                if ((*arg2_00 >> 0x10 & 1) == 0) {
                    uVar11 = 0;
                }
                else {
                    uVar11 = *(arg2_00 + 0x51);
                }
                __free_pages(arg2_00,uVar11);
            }
            else {
                if (((*arg2_00 >> 0x10 & 1) == 0) || (*(arg2_00 + 0x51) != '\t')) {
                    if (((*arg2_00 >> 0x10 & 1) == 0) || (*(arg2_00 + 0x51) != '\x04')) {
                        if ((*arg2_00 >> 0x10 & 1) == 0) {
                            uVar12 = 2;
                        }
                        else {
                            uVar12 = 2;
                            if (*(arg2_00 + 0x51) != '\0') {
                                uVar12 = 3;
                            }
                        }
                    }
                    else {
                        uVar12 = 1;
                    }
                }
                else {
                    uVar12 = 0;
                }
                iVar16 = *(*(iVar5 + 8) + uVar12 * 8);
                if ((*(iVar16 + 8) < 0x6400L >> (*(iVar16 + 0x48) & 0x3f)) ||
                   (uVar6 = sym.need_free_to_reserve_pool(iVar5,uVar12), (uVar6 & 1) == 0)) {
                    iVar16 = *(iVar5 + 8);
                }
                else {
                    iVar16 = *(iVar5 + 0x10);
                }
                sym.dynamic_page_pool_free(*(iVar16 + uVar12 * 8),arg2_00);
            }
            uVar20 = uVar20 + 1;
            puVar22 = sg_next(puVar22);
        } while (uVar20 < *(arg1 + -0x28));
    }
    sg_free_table(arg1 + -0x30);
    uVar7 = kfree(arg1 + -0x80);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_170[0x20]) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = 0x80058d4;
    iVar5 = 0;
    iVar16 = sp_el0;
    do {
        iVar13 = *(iVar8 + iVar5 * 8);
        if (((*(iVar13 + 8) < 0x2800L >> (*(iVar13 + 0x48) & 0x3f)) &&
            (iVar13 = *(iVar8 + iVar5 * 8), *(iVar13 + 0x48) != 0)) &&
           (uVar20 = *(iVar13 + 0x44), *(iVar13 + 8) < 0x6400L >> (*(iVar13 + 0x48) & 0x3f))) {
            while( true ) {
                uVar12 = *(iVar13 + 0x44);
                iVar9 = ktime_get();
                if (iVar9 - *(iVar13 + 0x30) < 10000000) break;
                uVar23 = 0x250015 >> ((uVar12 & 0xf) << 1) & 3;
                iVar9 = uVar23 * 0x640 + 0x8028250;
                uVar6 = uVar23;
                do {
                    uVar7 = tpidr_el1;
                    iVar4 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar6 * 0x640),"DMA32");
                    if (iVar4 != 0) {
                        iVar18 = uVar6 * 0x640;
                        uVar12 = *(iVar13 + 0x48);
                        uVar21 = uVar12;
                        puVar22 = iVar18 + 0x80286f0;
                        iVar4 = *(__cpu_online_mask + iVar18);
                        iVar1 = *(__per_cpu_offset + iVar18);
                        uVar14 = *puVar22 & (*puVar22 >> 0x3f ^ 0xffffffffffffffffU);
                        if ((*(iVar18 + 0x80286b0) != 0) && (uVar14 < *(iVar18 + 0x80286b0))) {
                            uVar14 = *puVar22;
                            *puVar22 = 0x640;
                            uVar10 = cpumask_next(delayed_work_timer_fn,0xffffffff,__cpu_online_mask);
                            if (uVar10 < 0x640) {
                                do {
                                    if (0x1f < uVar10) goto code_r0x08005c54;
                                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) +
                                                       *(refcount_warn_saturate + uVar6 * 0x640));
                                    uVar10 = cpumask_next(uVar10,__cpu_online_mask);
                                } while (uVar10 < 0x640);
                            }
                            uVar14 = uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU);
                        }
                        uVar10 = *(uVar6 * 0x640 + 0x8028740);
                        if (uVar23 == 3) {
code_r0x08005c54:
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x8005c58);
                            (*pcVar2)();
                        }
                        if (uVar14 - (*(schedule + uVar6 * 0x640) + ~(-1 << (uVar12 & 0x1f)) +
                                     (uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU))) <=
                            *(kernel_kobj + uVar6 * 0x640 + uVar23 * 8) + (1 << (uVar12 & 0x1f)) + iVar1 + iVar4) {
code_r0x08005bdc:
                            uVar7 = ktime_get();
                            *(iVar13 + 0x30) = uVar7;
                            goto code_r0x08005bec;
                        }
                        if (uVar12 != 0) {
                            if (10 < uVar12) goto code_r0x08005bdc;
                            if (uVar12 < 0xd) {
                                uVar12 = 0xc;
                            }
                            iVar17 = uVar12 - uVar21;
                            iVar15 = uVar21 * 0x68;
                            iVar18 = iVar9;
                            while( true ) {
                                if (iVar17 == 0) goto code_r0x08005c54;
                                if ((*(iVar18 + iVar15) != 0) &&
                                   (((piVar19 = iVar18 + iVar15 + -0x60, piVar19 != *piVar19 ||
                                     (piVar19 = iVar18 + iVar15 + -0x50, piVar19 != *piVar19)) ||
                                    (piVar19 = iVar18 + iVar15 + -0x40, piVar19 != *piVar19)))) break;
                                iVar18 = iVar18 + 0x68;
                                uVar12 = uVar21 + 1;
                                uVar21 = uVar12;
                                iVar17 = iVar17 + -1;
                                if (10 < uVar12) goto code_r0x08005bdc;
                            }
                        }
                    }
                    iVar9 = iVar9 + -0x640;
                    bVar3 = 0 < uVar6;
                    uVar6 = uVar6 - 1;
                } while (bVar3);
                uVar7 = tpidr_el1;
                iVar9 = __alloc_pages(uVar7,uVar20 & 0xfffeffff | 0xc00,*(iVar13 + 0x48),0,0);
                if ((iVar9 == 0) ||
                   (sym.dynamic_page_pool_add(iVar13,iVar9), 0x6400L >> (*(iVar13 + 0x48) & 0x3f) <= *(iVar13 + 8)))
                break;
            }
        }
code_r0x08005bec:
        iVar5 = iVar5 + 1;
        if (iVar5 == 3) {
            *(iVar16 + 0x28) = 1;
            DataMemoryBarrier(2,3);
            uVar6 = kthread_should_stop();
            if ((uVar6 & 1) != 0) {
                *(iVar16 + 0x28) = 0;
                DataMemoryBarrier(2,3);
                return 0;
            }
            schedule();
            *(iVar16 + 0x28) = 0;
            iVar5 = 0;
            DataMemoryBarrier(2,3);
        }
    } while( true );
}


// ===== sym.system_heap_refill_worker @ 0x080058dc (size 892) =====

ulong sym.system_heap_refill_worker(int64_t arg1)

{
    bool bVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong *in_x18;
    uint64_t uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar20 = 0;
    iVar5 = sp_el0;
    do {
        iVar13 = *(arg1 + iVar20 * 8);
        if (((*(iVar13 + 8) < 0x2800L >> (*(iVar13 + 0x48) & 0x3f)) &&
            (iVar13 = *(arg1 + iVar20 * 8), *(iVar13 + 0x48) != 0)) &&
           (uVar3 = *(iVar13 + 0x44), *(iVar13 + 8) < 0x6400L >> (*(iVar13 + 0x48) & 0x3f))) {
            while( true ) {
                uVar12 = *(iVar13 + 0x44);
                iVar8 = ktime_get();
                if (iVar8 - *(iVar13 + 0x30) < 10000000) break;
                uVar21 = 0x250015 >> ((uVar12 & 0xf) << 1) & 3;
                iVar8 = uVar21 * 0x640 + 0x8028250;
                uVar11 = uVar21;
                do {
                    uVar10 = tpidr_el1;
                    iVar7 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar11 * 0x640),"DMA32");
                    if (iVar7 != 0) {
                        iVar17 = uVar11 * 0x640;
                        uVar12 = *(iVar13 + 0x48);
                        uVar19 = uVar12;
                        puVar2 = iVar17 + 0x80286f0;
                        iVar7 = *(__cpu_online_mask + iVar17);
                        iVar4 = *(__per_cpu_offset + iVar17);
                        uVar14 = *puVar2 & (*puVar2 >> 0x3f ^ 0xffffffffffffffffU);
                        if ((*(iVar17 + 0x80286b0) != 0) && (uVar14 < *(iVar17 + 0x80286b0))) {
                            uVar14 = *puVar2;
                            *puVar2 = 0x640;
                            uVar9 = cpumask_next(delayed_work_timer_fn,0xffffffff,__cpu_online_mask);
                            if (uVar9 < 0x640) {
                                do {
                                    if (0x1f < uVar9) goto code_r0x08005c54;
                                    uVar14 = uVar14 + *(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) +
                                                       *(refcount_warn_saturate + uVar11 * 0x640));
                                    uVar9 = cpumask_next(uVar9,__cpu_online_mask);
                                } while (uVar9 < 0x640);
                            }
                            uVar14 = uVar14 & (uVar14 >> 0x3f ^ 0xffffffffffffffffU);
                        }
                        uVar9 = *(uVar11 * 0x640 + 0x8028740);
                        if (uVar21 == 3) {
code_r0x08005c54:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x8005c58);
                            (*pcVar6)();
                        }
                        if (uVar14 - (*(schedule + uVar11 * 0x640) + ~(-1 << (uVar12 & 0x1f)) +
                                     (uVar9 & (uVar9 >> 0x3f ^ 0xffffffffffffffffU))) <=
                            *(kernel_kobj + uVar11 * 0x640 + uVar21 * 8) + (1 << (uVar12 & 0x1f)) + iVar4 + iVar7) {
code_r0x08005bdc:
                            uVar10 = ktime_get();
                            *(iVar13 + 0x30) = uVar10;
                            goto code_r0x08005bec;
                        }
                        if (uVar12 != 0) {
                            if (10 < uVar12) goto code_r0x08005bdc;
                            if (uVar12 < 0xd) {
                                uVar12 = 0xc;
                            }
                            iVar16 = uVar12 - uVar19;
                            iVar15 = uVar19 * 0x68;
                            iVar17 = iVar8;
                            while( true ) {
                                if (iVar16 == 0) goto code_r0x08005c54;
                                if ((*(iVar17 + iVar15) != 0) &&
                                   (((piVar18 = iVar17 + iVar15 + -0x60, piVar18 != *piVar18 ||
                                     (piVar18 = iVar17 + iVar15 + -0x50, piVar18 != *piVar18)) ||
                                    (piVar18 = iVar17 + iVar15 + -0x40, piVar18 != *piVar18)))) break;
                                iVar17 = iVar17 + 0x68;
                                uVar12 = uVar19 + 1;
                                uVar19 = uVar12;
                                iVar16 = iVar16 + -1;
                                if (10 < uVar12) goto code_r0x08005bdc;
                            }
                        }
                    }
                    iVar8 = iVar8 + -0x640;
                    bVar1 = 0 < uVar11;
                    uVar11 = uVar11 - 1;
                } while (bVar1);
                uVar10 = tpidr_el1;
                iVar8 = __alloc_pages(uVar10,uVar3 & 0xfffeffff | 0xc00,*(iVar13 + 0x48),0,0);
                if ((iVar8 == 0) ||
                   (sym.dynamic_page_pool_add(iVar13,iVar8), 0x6400L >> (*(iVar13 + 0x48) & 0x3f) <= *(iVar13 + 8)))
                break;
            }
        }
code_r0x08005bec:
        iVar20 = iVar20 + 1;
        if (iVar20 == 3) {
            *(iVar5 + 0x28) = 1;
            DataMemoryBarrier(2,3);
            uVar11 = kthread_should_stop();
            if ((uVar11 & 1) != 0) {
                *(iVar5 + 0x28) = 0;
                DataMemoryBarrier(2,3);
                return 0;
            }
            schedule();
            *(iVar5 + 0x28) = 0;
            iVar20 = 0;
            DataMemoryBarrier(2,3);
        }
    } while( true );
}


// ===== sym.dynamic_page_pool_add @ 0x08005c84 (size 320) =====

void sym.dynamic_page_pool_add(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x40);
    piVar7 = *(arg1 + 0x28);
    iVar1 = arg2 + 8;
    uVar6 = __list_add_valid(iVar1,piVar7,arg1 + 0x20);
    if ((uVar6 & 1) != 0) {
        *(arg1 + 0x28) = iVar1;
        *(arg2 + 8) = arg1 + 0x20;
        *(arg2 + 0x10) = piVar7;
        *piVar7 = iVar1;
    }
    piVar2 = arg1 + 8;
    *(arg1 + 4) = *(arg1 + 4) + 1;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    Hint_Prefetch(0x80006f4,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(0x80006f4,0x10);
        if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            _obj.msm_total_pools_size = _obj.msm_total_pools_size + (1 << (*(arg1 + 0x48) & 0x1f));
        }
    } while (cVar3 != '\0');
    mod_node_page_state(contig_page_data,0x21,1 << (*(arg1 + 0x48) & 0x1f));
    _raw_spin_unlock_irqrestore(arg1 + 0x40,uVar5);
    return;
}


// ===== sym.dynamic_page_pool_remove @ 0x08005dc4 (size 324) =====

int64_t * sym.dynamic_page_pool_remove(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint64_t uVar7;
    uint64_t in_x1;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        if (*(arg1 + 4) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8005ed8);
            (*pcVar6)();
        }
        piVar8 = *(arg1 + 0x20);
        *(arg1 + 4) = *(arg1 + 4) + -1;
    }
    else {
        if (*arg1 == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8005ed4);
            (*pcVar6)();
        }
        piVar8 = *(arg1 + 0x10);
        *arg1 = *arg1 + -1;
    }
    piVar1 = arg1 + 8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    Hint_Prefetch(0x80006f4,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(0x80006f4,0x10);
        if (bVar5) {
            cVar4 = ExclusiveMonitorsStatus();
            _obj.msm_total_pools_size = _obj.msm_total_pools_size - (1 << (*(arg1 + 0x48) & 0x1f));
        }
    } while (cVar4 != '\0');
    uVar7 = __list_del_entry_valid(piVar8);
    if ((uVar7 & 1) != 0) {
        iVar2 = *piVar8;
        piVar3 = piVar8[1];
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *piVar8 = -0x2152ffffffffff00;
    piVar8[1] = -0x2152fffffffffede;
    mod_node_page_state(contig_page_data,0x21,-1L << (*(arg1 + 0x48) & 0x3fU));
    return piVar8 + -1;
}


// ===== sym.dynamic_page_pool_free @ 0x08005f08 (size 72) =====

void sym.dynamic_page_pool_free(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*arg2 >> 0x10 & 1) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(arg2 + 0x51);
    }
    if (*(arg1 + 0x48) == uVar2) {
        sym.dynamic_page_pool_add(arg1,arg2);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8005f50);
    (*pcVar1)();
}


// ===== sym.dynamic_page_pool_total @ 0x08005f50 (size 36) =====

int sym.dynamic_page_pool_total(int64_t arg1)

{
    uint32_t in_w1;
    int iVar1;
    
    iVar1 = *(arg1 + 4);
    if ((in_w1 & 1) != 0) {
        iVar1 = *arg1 + iVar1;
    }
    return iVar1 << (*(arg1 + 0x48) & 0x1f);
}


// ===== sym.dynamic_page_pool_create @ 0x08005f74 (size 200) =====

ulong * sym.dynamic_page_pool_create(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xcc0,0x70);
    if (puVar3 != NULL) {
        *puVar3 = 0;
        puVar3[4] = puVar3 + 4;
        puVar3[5] = puVar3 + 4;
        puVar3[2] = puVar3 + 2;
        puVar3[3] = puVar3 + 2;
        *(puVar3 + 0x44) = arg1 | 0x40000;
        *(puVar3 + 9) = arg2;
        *(puVar3 + 8) = 0;
        mutex_lock(obj.pool_list_lock);
        puVar2 = _obj.pool_list;
        puVar1 = puVar3 + 10;
        uVar4 = __list_add_valid(puVar1,obj.pool_list,_obj.pool_list);
        if ((uVar4 & 1) != 0) {
            puVar2[1] = puVar1;
            puVar3[10] = puVar2;
            puVar3[0xb] = obj.pool_list;
            _obj.pool_list = puVar1;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return puVar3;
}


// ===== sym.dynamic_page_pool_destroy @ 0x0800603c (size 508) =====

void sym.dynamic_page_pool_destroy(int64_t arg1)

{
    int64_t ***pppiVar1;
    int64_t *piVar2;
    int64_t ***pppiVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t ****ppppiVar8;
    int64_t ****ppppiVar9;
    int64_t ****ppppiVar10;
    ulong unaff_x30;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pppiStack_78 = &pppiStack_78;
    pppiStack_70 = &pppiStack_78;
    mutex_lock(obj.pool_list_lock);
    uVar5 = __list_del_entry_valid(arg1 + 0x50);
    if ((uVar5 & 1) != 0) {
        iVar7 = *(arg1 + 0x50);
        piVar2 = *(arg1 + 0x58);
        *(iVar7 + 8) = piVar2;
        *piVar2 = iVar7;
    }
    *(arg1 + 0x50) = 0xdead000000000100;
    *(arg1 + 0x58) = 0xdead000000000122;
    mutex_unlock(obj.pool_list_lock);
    ppppiVar9 = arg1 + 0x40;
    uVar6 = _raw_spin_lock_irqsave(ppppiVar9);
    ppppiVar8 = NULL;
    while ((*(arg1 + 4) != 0 || (*arg1 != 0))) {
        iVar7 = sym.dynamic_page_pool_remove(arg1);
        pppiVar1 = pppiStack_78;
        ppppiVar10 = iVar7 + 8;
        uVar5 = __list_add_valid(ppppiVar10,&pppiStack_78,pppiStack_78);
        if ((uVar5 & 1) != 0) {
            pppiVar1[1] = ppppiVar10;
            *(iVar7 + 8) = pppiVar1;
            *(iVar7 + 0x10) = &pppiStack_78;
            pppiStack_78 = ppppiVar10;
        }
        ppppiVar8 = ppppiVar8 + 1;
    }
    _raw_spin_unlock_irqrestore(ppppiVar9,uVar6);
    if (ppppiVar8 == 0) goto code_r0x08006168;
    ppppiVar9 = *(arg1 + 0x68);
    if (ppppiVar9 == NULL) goto code_r0x08006168;
    if (ppppiVar9 != sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr)
    goto code_r0x08006214;
    while( true ) {
        iVar4 = (*ppppiVar9)(arg1,&pppiStack_78,ppppiVar8 & 0xffffffff);
        if (iVar4 == 0) {
code_r0x08006168:
            ppppiVar8 = pppiStack_78;
            while (&pppiStack_78 != ppppiVar8) {
                ppppiVar9 = ppppiVar8 + -1;
                ppppiVar10 = *ppppiVar8;
                uVar5 = __list_del_entry_valid(ppppiVar8);
                if ((uVar5 & 1) != 0) {
                    pppiVar1 = *ppppiVar8;
                    pppiVar3 = ppppiVar8[1];
                    pppiVar1[1] = pppiVar3;
                    *pppiVar3 = pppiVar1;
                }
                *ppppiVar8 = 0xdead000000000100;
                ppppiVar8[1] = 0xdead000000000122;
                __free_pages(ppppiVar9,*(arg1 + 0x48));
                ppppiVar8 = ppppiVar10;
            }
            kfree(arg1);
        }
        else {
            _printk(0x800165d);
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x08006214:
        __cfi_slowpath_diag(0xa9cd81dabe0e6624,ppppiVar9,0x8000ab0);
    }
    return;
}


// ===== sym.dynamic_page_pool_shrink_high_and_low @ 0x08006238 (size 140) =====

void sym.dynamic_page_pool_shrink_high_and_low(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t arg3_00;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3_00 = arg3 & 0xffffffff;
    uVar3 = arg2 & 0xffffffff;
    mutex_lock(obj.pool_list_lock);
    if (0 < arg2) {
        do {
            uVar3 = uVar3 - 1;
            iVar2 = sym.dynamic_page_pool_do_shrink(*arg1,2,arg3_00);
            uVar1 = arg3_00 - iVar2;
            arg3_00 = uVar1;
            arg1 = arg1 + 8;
        } while (0 < uVar1 && uVar3 != 0);
    }
    mutex_unlock(obj.pool_list_lock);
    return;
}


// ===== sym.dynamic_page_pool_do_shrink @ 0x080062c4 (size 564) =====

int sym.dynamic_page_pool_do_shrink(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code ****ppppcVar3;
    code ****ppppcVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    code *****unaff_x21;
    code *****pppppcVar10;
    ulong unaff_x30;
    code ****ppppcStack_78;
    code ****ppppcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar1 = sp_el0;
    uVar2 = *(iVar1 + 0x3c) & 0x20000;
    ppppcStack_78 = &ppppcStack_78;
    ppppcStack_70 = &ppppcStack_78;
    if (arg3 == 0) {
        iVar9 = *(arg1 + 4);
        if (uVar2 != 0 || (arg2 & 2U) != 0) {
            iVar9 = *arg1 + iVar9;
        }
        iVar9 = iVar9 << (*(arg1 + 0x48) & 0x1f);
        goto code_r0x08006490;
    }
    iVar9 = 0;
    iVar1 = arg1 + 0x40;
    do {
        if (arg3 <= iVar9) break;
        uVar6 = _raw_spin_lock_irqsave(iVar1);
        if ((*(arg1 + 4) == 0) && ((uVar2 == 0 && (arg2 & 2U) == 0 || (*arg1 == 0)))) {
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            break;
        }
        iVar7 = sym.dynamic_page_pool_remove(arg1);
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        ppppcVar3 = ppppcStack_78;
        pppppcVar10 = iVar7 + 8;
        uVar8 = __list_add_valid(pppppcVar10,&ppppcStack_78,ppppcStack_78);
        if ((uVar8 & 1) != 0) {
            ppppcVar3[1] = pppppcVar10;
            *(iVar7 + 8) = ppppcVar3;
            *(iVar7 + 0x10) = &ppppcStack_78;
            ppppcStack_78 = pppppcVar10;
        }
        iVar9 = (1 << (*(arg1 + 0x48) & 0x1f)) + iVar9;
        uVar8 = sym.can_do_shrink(arg1,uVar2 != 0 || (arg2 & 2U) != 0);
    } while ((uVar8 & 1) != 0);
    if (iVar9 == 0) goto code_r0x08006420;
    unaff_x21 = *(arg1 + 0x68);
    if (unaff_x21 == NULL) goto code_r0x08006420;
    if (unaff_x21 != sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr)
    goto code_r0x080064d4;
    while( true ) {
        iVar5 = (*unaff_x21)(arg1,&ppppcStack_78,iVar9 >> (*(arg1 + 0x48) & 0x1f));
        if (iVar5 == 0) {
code_r0x08006420:
            unaff_x21 = ppppcStack_78;
            while (&ppppcStack_78 != unaff_x21) {
                pppppcVar10 = *unaff_x21;
                uVar8 = __list_del_entry_valid(unaff_x21);
                if ((uVar8 & 1) != 0) {
                    ppppcVar3 = *unaff_x21;
                    ppppcVar4 = unaff_x21[1];
                    ppppcVar3[1] = ppppcVar4;
                    *ppppcVar4 = ppppcVar3;
                }
                *unaff_x21 = 0xdead000000000100;
                unaff_x21[1] = 0xdead000000000122;
                __free_pages(unaff_x21 + -1,*(arg1 + 0x48));
                unaff_x21 = pppppcVar10;
            }
        }
        else {
            _printk(0x8001078);
            iVar9 = 0;
        }
code_r0x08006490:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x080064d4:
        __cfi_slowpath_diag(0xa9cd81dabe0e6624,unaff_x21,0x8000ad0);
    }
    return iVar9;
}


// ===== sym.dynamic_page_pool_create_pools @ 0x080064f8 (size 496) =====

int64_t * sym.dynamic_page_pool_create_pools(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint uVar4;
    uint32_t uVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar10 = 0x30;
    }
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xcc0,0x18);
    if (piVar7 == NULL) {
code_r0x080066bc:
        piVar7 = 0xfffffffffffffff4;
    }
    else {
        iVar10 = 0;
        do {
            uVar4 = *(obj.orders + iVar10 * 4);
            puVar8 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xcc0,0x70);
            if (puVar8 == NULL) {
                piVar7[iVar10] = 0;
code_r0x08006680:
                _printk(0x8000cdb,"dynamic_page_pool_create_pools",uVar4);
                if ((iVar10 != 0) && (sym.dynamic_page_pool_destroy(*piVar7), iVar10 != 1)) {
                    sym.dynamic_page_pool_destroy(piVar7[1]);
                }
                kfree(piVar7);
                goto code_r0x080066bc;
            }
            *puVar8 = 0;
            uVar5 = *(obj.order_flags + iVar10 * 4);
            puVar8[4] = puVar8 + 4;
            puVar8[5] = puVar8 + 4;
            puVar8[2] = puVar8 + 2;
            puVar8[3] = puVar8 + 2;
            *(puVar8 + 8) = 0;
            *(puVar8 + 0x44) = uVar5 | 0x40000;
            *(puVar8 + 9) = uVar4;
            mutex_lock(obj.pool_list_lock);
            puVar6 = _obj.pool_list;
            puVar1 = puVar8 + 10;
            uVar9 = __list_add_valid(puVar1,obj.pool_list,_obj.pool_list);
            if ((uVar9 & 1) != 0) {
                puVar6[1] = puVar1;
                puVar8[10] = puVar6;
                puVar8[0xb] = obj.pool_list;
                _obj.pool_list = puVar1;
            }
            mutex_unlock(obj.pool_list_lock);
            piVar7[iVar10] = puVar8;
            if (0xfffffffffffff000 < puVar8) goto code_r0x08006680;
            *(puVar8 + 0xc) = arg1;
            puVar8[0xd] = arg2;
            *(puVar8 + 1) = 0;
            puVar8[6] = 0;
            if (arg1 == 100) {
                mutex_lock(obj.pool_list_lock);
                uVar9 = __list_del_entry_valid(puVar1);
                if ((uVar9 & 1) != 0) {
                    iVar2 = puVar8[10];
                    piVar3 = puVar8[0xb];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                puVar8[10] = 0xdead000000000100;
                puVar8[0xb] = 0xdead000000000122;
                mutex_unlock(obj.pool_list_lock);
            }
            iVar10 = iVar10 + 1;
        } while (iVar10 != 3);
    }
    return piVar7;
}


// ===== sym.dynamic_page_pool_release_pools @ 0x080066e8 (size 76) =====

void sym.dynamic_page_pool_release_pools(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dynamic_page_pool_destroy(*arg1);
    sym.dynamic_page_pool_destroy(*(arg1 + 8));
    sym.dynamic_page_pool_destroy(*(arg1 + 0x10));
    kfree(arg1);
    return;
}


// ===== sym.dynamic_page_pool_init_shrinker @ 0x08006734 (size 140) =====

ulong sym.dynamic_page_pool_init_shrinker(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.dynamic_page_pool_init_shrinker.registered & 1) == 0) {
        _segment.ehdr = kobject_create_and_add("dma_mi_pool",_kmem_cache_alloc_trace);
        if ((_segment.ehdr != 0) && (iVar1 = sysfs_create_groups(_segment.ehdr,obj.dma_heap_sysfs_groups), iVar1 != 0)
           ) {
            kobject_put(_segment.ehdr);
        }
        uVar2 = register_shrinker(reloc.dynamic_page_pool_shrink_count.6b7c5ae36a7e182a518e0d68203fa733.cfi_jt);
        if (uVar2 == 0) {
            obj.dynamic_page_pool_init_shrinker.registered = 0x1;
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_total_pools_max_show @ 0x080067c0 (size 60) =====

int64_t sym.msm_total_pools_max_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80015ba,_segment.ehdr);
    return iVar1;
}


// ===== sym.msm_total_pools_max_store @ 0x080067fc (size 160) =====

int64_t sym.msm_total_pools_max_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t *extraout_x1;
    uint32_t *extraout_x1_00;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong ***pppuStack_68;
    ulong ***pppuStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iStack_2c = 0;
    iVar4 = kstrtoint(arg1,0,&iStack_2c);
    if (iVar4 == 0) {
        if (iStack_2c < 0) {
            arg2 = -0x16;
        }
        else {
            _segment.ehdr = iStack_2c;
            _printk(0x8001cbb);
        }
    }
    else {
        arg2 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_shrink_count;
    pcStack_48 = sym.dynamic_page_pool_shrink_count;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar7 = *extraout_x1;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg2;
    mutex_lock(obj.pool_list_lock);
    if (_obj.pool_list == obj.pool_list) {
        iVar8 = 0;
    }
    else {
        iVar8 = sp_el0;
        iVar4 = 0;
        pppuStack_68 = &pppuStack_68;
        pcVar6 = _obj.pool_list;
        do {
            iVar5 = *(pcVar6 + -0x4c);
            if ((*(iVar8 + 0x3c) & 0x20000) != 0 || (uVar7 & 2) != 0) {
                iVar5 = *(pcVar6 + -0x50) + iVar5;
            }
            pcVar1 = pcVar6 + -8;
            pcVar6 = *pcVar6;
            iVar4 = (iVar5 << (*pcVar1 & 0x1f)) + iVar4;
        } while (pcVar6 != obj.pool_list);
        iVar8 = iVar4;
        pppuStack_60 = pppuStack_68;
    }
    mutex_unlock(obj.pool_list_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dynamic_page_pool_shrink_scan;
    uVar7 = extraout_x1_00[2];
    if (uVar7 == 0) {
        iVar8 = 0;
    }
    else {
        uVar2 = *extraout_x1_00;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar8 = 0;
        }
        else {
            iVar4 = 0;
            pcVar6 = _obj.pool_list;
            do {
                iVar5 = sym.dynamic_page_pool_do_shrink(pcVar6 + -0x50,uVar2,uVar7);
                uVar7 = uVar7 - iVar5;
                iVar4 = iVar5 + iVar4;
                if (uVar7 < 1) break;
                pcVar6 = *pcVar6;
            } while (pcVar6 != obj.pool_list);
            iVar8 = iVar4;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar8;
}


// ===== sym.dynamic_page_pool_shrink_count @ 0x0800689c (size 228) =====

int64_t sym.dynamic_page_pool_shrink_count(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t *extraout_x1;
    code *pcVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong ***pppuStack_38;
    ulong ***pppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uVar7 = *arg1;
    mutex_lock(obj.pool_list_lock);
    if (_obj.pool_list == obj.pool_list) {
        iVar8 = 0;
    }
    else {
        iVar8 = sp_el0;
        iVar6 = 0;
        pppuStack_38 = &pppuStack_38;
        pcVar5 = _obj.pool_list;
        do {
            iVar4 = *(pcVar5 + -0x4c);
            if ((*(iVar8 + 0x3c) & 0x20000) != 0 || (uVar7 & 2) != 0) {
                iVar4 = *(pcVar5 + -0x50) + iVar4;
            }
            pcVar1 = pcVar5 + -8;
            pcVar5 = *pcVar5;
            iVar6 = (iVar4 << (*pcVar1 & 0x1f)) + iVar6;
        } while (pcVar5 != obj.pool_list);
        iVar8 = iVar6;
        pppuStack_30 = pppuStack_38;
    }
    mutex_unlock(obj.pool_list_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_shrink_scan;
    uVar7 = extraout_x1[2];
    if (uVar7 == 0) {
        iVar8 = 0;
    }
    else {
        uVar2 = *extraout_x1;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar8 = 0;
        }
        else {
            iVar6 = 0;
            pcVar5 = _obj.pool_list;
            do {
                iVar4 = sym.dynamic_page_pool_do_shrink(pcVar5 + -0x50,uVar2,uVar7);
                uVar7 = uVar7 - iVar4;
                iVar6 = iVar4 + iVar6;
                if (uVar7 < 1) break;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.pool_list);
            iVar8 = iVar6;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar8;
}


// ===== sym.dynamic_page_pool_shrink_scan @ 0x08006980 (size 184) =====

int64_t sym.dynamic_page_pool_shrink_scan(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 8);
    if (uVar3 == 0) {
        iVar4 = 0;
    }
    else {
        uVar1 = *arg1;
        mutex_lock(obj.pool_list_lock);
        if (_obj.pool_list == obj.pool_list) {
            iVar4 = 0;
        }
        else {
            iVar6 = 0;
            pcVar5 = _obj.pool_list;
            do {
                iVar2 = sym.dynamic_page_pool_do_shrink(pcVar5 + -0x50,uVar1,uVar3);
                uVar3 = uVar3 - iVar2;
                iVar6 = iVar2 + iVar6;
                if (uVar3 < 1) break;
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.pool_list);
            iVar4 = iVar6;
        }
        mutex_unlock(obj.pool_list_lock);
    }
    return iVar4;
}


// ===== sym.is_reserve_vmid @ 0x08006a38 (size 20) =====

bool sym.is_reserve_vmid(uint32_t arg1)

{
    return arg1 == 100;
}


// ===== sym.can_do_shrink @ 0x08006a4c (size 140) =====

bool sym.can_do_shrink(int64_t arg1,int64_t arg2)

{
    int iVar1;
    bool bVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x60) != 0) {
        return true;
    }
    if (_segment.ehdr < 0x180001) {
        return true;
    }
    if (*(_segment.ehdr + 0x18) == '\0') {
code_r0x08006aa4:
        bVar2 = true;
    }
    else {
        if (*(arg1 + 0x48) == 0) {
            iVar3 = 0x6400;
        }
        else {
            if (*(arg1 + 0x48) != 4) goto code_r0x08006aa4;
            iVar3 = 0x780;
        }
        iVar1 = sym.dynamic_page_pool_total(arg1);
        bVar2 = iVar3 < iVar1;
    }
    return bVar2;
}


// ===== sym.need_free_to_reserve_pool @ 0x08006ad8 (size 192) =====

ulong sym.need_free_to_reserve_pool(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x18) != '\0' && _segment.ehdr == uVar3)) {
        iVar5 = *(*(uVar3 + 0x10) + arg2 * 8);
        iVar2 = *(iVar5 + 0x48);
        iVar4 = 1;
        if (iVar2 != 4) {
            iVar4 = 2;
        }
        iVar1 = 0;
        if (iVar2 != 9) {
            iVar1 = iVar4;
        }
        if (*(iVar5 + 8) < *(_segment.ehdr + iVar1 * 4 + 0x44)) {
            if ((*(uVar3 + 0x1c) >> 5 & 1) != 0) {
                iVar4 = *(*(uVar3 + 0x10) + arg2 * 8);
                _printk(0x8001501,"need_free_to_reserve_pool",*(iVar4 + 0x60),arg2 & 0xffffffff,*(iVar4 + 0x48));
            }
            return 1;
        }
    }
    return 0;
}


// ===== sym.qcom_sys_heap_reserve_pool_init @ 0x08006ba0 (size 484) =====

void sym.qcom_sys_heap_reserve_pool_init(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
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
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 10;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    si_meminfo(&uStack_a8);
    _segment.ehdr = uStack_88;
    obj.g_mem_type_index = 0x200000 < uStack_88;
    if ((0x180000 < uStack_88) && (iVar5 = strncmp(arg1,"qcom,system",0xb), iVar5 == 0)) {
        _segment.ehdr = arg2;
        uVar6 = sym.dynamic_page_pool_create_pools(100,0);
        *(arg2 + 0x10) = uVar6;
        iVar8 = sp_el0;
        _printk(0x800134f,iVar8 + 0x7a8,*(iVar8 + 0x5d8),arg1);
        if (*(arg2 + 0x10) < 0xfffffffffffff001) {
            sym.reserve_extend_info_init(arg2);
            *(arg2 + 0x18) = 1;
            sym.reserve_pool_sysfs_create();
            uVar7 = kthread_create_on_node
                              (sym.system_heap_refill_worker.732c52d7144bd185e75e541fa94eb357.cfi_jt,*(arg2 + 0x10),
                               0xffffffff,"reserve-refill");
            if (uVar7 < 0xfffffffffffff001) {
                wake_up_process(uVar7);
                iVar5 = sched_setattr(uVar7,&uStack_e0);
                if (iVar5 == 0) {
                    *(**(arg2 + 0x10) + 0x38) = uVar7;
                    *(*(*(arg2 + 0x10) + 8) + 0x38) = uVar7;
                    *(*(*(arg2 + 0x10) + 0x10) + 0x38) = uVar7;
                }
                else {
                    _printk(0x8001535,"qcom_sys_heap_reserve_pool_init",iVar5);
                    kthread_stop(uVar7);
                }
            }
            else {
                _printk(0x8001188,"qcom_sys_heap_reserve_pool_init",uVar7);
            }
        }
        else {
            *(arg2 + 0x10) = 0;
            _segment.ehdr = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *(iVar8 + 0x1c) = 0;
    uVar7 = _segment.ehdr;
    iVar8 = obj.g_mem_type_index * 0x14;
    uVar2 = *(iVar8 + 0x8002134);
    uVar1 = *(obj.g_reserve_config + iVar8);
    uVar3 = *(iVar8 + 0x800212c);
    uVar4 = *(iVar8 + 0x8002138);
    *(_segment.ehdr + 0x4c) = *(iVar8 + 0x8002130);
    *(uVar7 + 0x48) = uVar3;
    *(uVar7 + 0x44) = uVar1;
    *(uVar7 + 0x20) = uVar2;
    *(uVar7 + 0x24) = uVar4;
    _obj.config_show_pool = *(uVar7 + 8);
    *0x8000728 = *(uVar7 + 0x10);
    *0x8000758 = uVar7 + 0x38;
    *0x8000768 = uVar7 + 0x44;
    *0x8000770 = uVar7 + 0x50;
    *0x8000778 = uVar7 + 0x5c;
    *0x8000780 = uVar7 + 0x68;
    return;
}


// ===== sym.reserve_extend_info_init @ 0x08006d84 (size 136) =====

void sym.reserve_extend_info_init(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    *(arg1 + 0x1c) = 0;
    iVar6 = _segment.ehdr;
    iVar5 = obj.g_mem_type_index * 0x14;
    uVar2 = *(iVar5 + 0x8002134);
    uVar1 = *(obj.g_reserve_config + iVar5);
    uVar3 = *(iVar5 + 0x800212c);
    uVar4 = *(iVar5 + 0x8002138);
    *(_segment.ehdr + 0x4c) = *(iVar5 + 0x8002130);
    *(iVar6 + 0x48) = uVar3;
    *(iVar6 + 0x44) = uVar1;
    *(iVar6 + 0x20) = uVar2;
    *(iVar6 + 0x24) = uVar4;
    _obj.config_show_pool = *(iVar6 + 8);
    *0x8000728 = *(iVar6 + 0x10);
    *0x8000758 = iVar6 + 0x38;
    *0x8000768 = iVar6 + 0x44;
    *0x8000770 = iVar6 + 0x50;
    *0x8000778 = iVar6 + 0x5c;
    *0x8000780 = iVar6 + 0x68;
    return;
}


// ===== sym.reserve_pool_sysfs_create @ 0x08006e0c (size 124) =====

void sym.reserve_pool_sysfs_create(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kobject_create_and_add("reserve_pool",_kmem_cache_alloc_trace);
    if (iVar2 == 0) {
        _printk(0x80013e6);
    }
    else {
        iVar1 = sysfs_create_group(iVar2,obj.reserve_pool_attr_group);
        if (iVar1 != 0) {
            _printk(0x800135a);
            kobject_put(iVar2);
        }
    }
    return;
}


// ===== sym.system_heap_refill_worker_1 @ 0x08006e88 (size 376) =====

ulong sym.system_heap_refill_worker_1(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    while( true ) {
        iVar3 = *(*arg1 + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(*arg1 + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(*arg1);
        }
        iVar3 = *(*(arg1 + 8) + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(*(arg1 + 8) + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(*(arg1 + 8));
        }
        iVar3 = *(*(arg1 + 0x10) + 0x48);
        iVar1 = 1;
        if (iVar3 != 4) {
            iVar1 = 2;
        }
        iVar2 = 0;
        if (iVar3 != 9) {
            iVar2 = iVar1;
        }
        if (*(*(arg1 + 0x10) + 8) < (*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100) {
            sym.dynamic_page_pool_refill(*(arg1 + 0x10));
        }
        *(iVar4 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        uVar5 = kthread_should_stop();
        if ((uVar5 & 1) != 0) break;
        schedule();
        *(iVar4 + 0x28) = 0;
        DataMemoryBarrier(2,3);
    }
    *(iVar4 + 0x28) = 0;
    DataMemoryBarrier(2,3);
    return 0;
}


// ===== sym.qcom_extend_sys_heap_alloc_largest_available @ 0x08007018 (size 1048) =====

int64_t sym.qcom_extend_sys_heap_alloc_largest_available(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int64_t iVar7;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint *puVar14;
    int *arg1_00;
    uint *puVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 8);
    iVar2 = *(arg1 + 0x10);
    iVar8 = sym.is_server_app(iVar2);
    iVar11 = 0;
    iVar7 = sp_el0;
    do {
        if (0x1000L << (*(obj.orders + iVar11 * 4) & 0x3f) <= arg2 && *(obj.orders + iVar11 * 4) <= arg3) {
            arg1_00 = *(iVar12 + iVar11 * 8);
            piVar1 = arg1_00 + 0x10;
            uVar9 = _raw_spin_lock_irqsave(piVar1);
            iVar13 = iVar11 * 8;
            if ((*arg1_00 == 0) && (arg1_00[1] == 0)) {
                noname_1 = _raw_spin_unlock_irqrestore(piVar1,uVar9);
code_r0x080070fc:
                puVar15 = *(iVar12 + iVar13);
                puVar14 = *(iVar2 + iVar13);
                if (puVar15[0x12] != 0) {
                    uVar9 = tpidr_el1;
                    iVar10 = __alloc_pages(uVar9,puVar15[0x11],puVar15[0x12],0,0);
                    noname_1 = extraout_q0;
                    if ((*(arg1 + 0x1c) & 1) != 0) {
                        uVar9 = _raw_spin_lock_irqsave();
                        uVar5 = *puVar15;
                        uVar6 = puVar15[1];
                        _raw_spin_unlock_irqrestore(puVar15 + 0x10,uVar9);
                        uVar9 = _raw_spin_lock_irqsave();
                        uVar3 = *puVar14;
                        uVar4 = puVar14[1];
                        _raw_spin_unlock_irqrestore(puVar14 + 0x10,uVar9);
                        noname_1 = _printk(0x80011c5,"high order alloc",iVar10,*(iVar7 + 0x618) + 0x7a8,
                                           iVar7 + 0x7a8,*(iVar7 + 0x5d8),puVar15[0x12],uVar5,uVar6,uVar3,uVar4,
                                           iVar8 != 0);
                    }
                    if (iVar10 != 0) goto code_r0x08007160;
                    puVar15 = *(iVar12 + iVar13);
                    puVar14 = *(iVar2 + iVar13);
                }
                iVar10 = sym.get_page_from_reserve_pool(arg1,noname_1,puVar15,puVar14);
            }
            else {
                iVar10 = sym.dynamic_page_pool_remove(arg1_00);
                noname_1 = _raw_spin_unlock_irqrestore(piVar1,uVar9);
                if (iVar10 == 0) goto code_r0x080070fc;
            }
code_r0x08007160:
            if ((*(arg1 + 0x1c) >> 3 & 1) != 0) {
                puVar15 = *(iVar12 + iVar13);
                puVar14 = *(iVar2 + iVar13);
                uVar9 = _raw_spin_lock_irqsave(puVar15 + 0x10);
                uVar3 = *puVar15;
                uVar4 = puVar15[1];
                _raw_spin_unlock_irqrestore(puVar15 + 0x10,uVar9);
                uVar9 = _raw_spin_lock_irqsave(puVar14 + 0x10);
                uVar5 = *puVar14;
                uVar6 = puVar14[1];
                _raw_spin_unlock_irqrestore(puVar14 + 0x10,uVar9);
                _printk(0x80011c5,0x8001c16,iVar10,*(iVar7 + 0x618) + 0x7a8,iVar7 + 0x7a8,*(iVar7 + 0x5d8),
                        puVar15[0x12],uVar3,uVar4,uVar5,uVar6,iVar8 != 0);
            }
            if ((iVar10 != 0) ||
               (iVar10 = sym.get_page_from_buddy(arg1,iVar8 != 0,*(iVar12 + iVar13),*(iVar2 + iVar13)), iVar10 != 0)
               ) {
                iVar11 = *(iVar12 + iVar13);
                iVar12 = *(iVar2 + iVar13);
                if (*(iVar11 + 0x48) != 0) {
                    iVar2 = 1;
                    if (*(iVar11 + 0x48) != 4) {
                        iVar2 = 2;
                    }
                    iVar7 = 0;
                    if (*(iVar11 + 0x48) != 9) {
                        iVar7 = iVar2;
                    }
                    if (*(iVar11 + 8) < (*(_segment.ehdr + iVar7 * 4 + 0x44) * 0x28) / 100) {
                        wake_up_process(*(iVar11 + 0x38));
                    }
                }
                if (iVar8 == 0) {
                    return iVar10;
                }
                if (iVar12 == 0) {
                    return iVar10;
                }
                if (*(iVar12 + 0x38) == 0) {
                    return iVar10;
                }
                if (*(iVar12 + 0x48) == 0) {
                    return iVar10;
                }
                iVar11 = 1;
                if (*(iVar12 + 0x48) != 4) {
                    iVar11 = 2;
                }
                iVar2 = 0;
                if (*(iVar12 + 0x48) != 9) {
                    iVar2 = iVar11;
                }
                if ((*(_segment.ehdr + iVar2 * 4 + 0x44) * 0x28) / 100 <= *(iVar12 + 8)) {
                    return iVar10;
                }
                wake_up_process(*(iVar12 + 0x38));
                return iVar10;
            }
        }
        iVar11 = iVar11 + 1;
        if (iVar11 == 3) {
            return 0;
        }
    } while( true );
}


// ===== sym.is_server_app @ 0x08007444 (size 648) =====

ulong sym.is_server_app(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int iVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    puVar1 = iVar6 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 0) {
        uVar8 = 2;
code_r0x080075c0:
        refcount_warn_saturate(puVar1,uVar8);
    }
    else if ((uVar3 + 1 | uVar3) < 0) {
        uVar8 = 1;
        goto code_r0x080075c0;
    }
    if ((arg1 != 0) && (*(*(iVar6 + 0x7f0) + 0x3c2) == -1000)) {
        if ((obj.use_name_cmp & 1) == 0) {
            iVar2 = *(iVar6 + 0x618) + 0x7a8;
            iVar7 = strncmp(iVar2,"vendor.qti.came",0xf);
            if (((iVar7 == 0) || (iVar7 = strncmp(iVar2,"allocator-servi",0xf), iVar7 == 0)) ||
               (iVar7 = strncmp(iVar2,"composer-servic",0xf), iVar7 == 0)) {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar3 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar3 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    goto code_r0x08007598;
                }
                goto joined_r0x08007630;
            }
        }
        else {
            iVar7 = *(*(iVar6 + 0x618) + 0x5d8);
            if (((iVar7 == _obj.pool_pid) || (iVar7 == *0x800078c)) || (iVar7 == *0x8000790)) {
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar3 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar3 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar3 == 1) {
                    DataMemoryBarrier(2,1);
code_r0x08007598:
                    __put_task_struct(iVar6);
                    return 1;
                }
joined_r0x08007630:
                if (uVar3 < 1) {
                    refcount_warn_saturate(puVar1,3);
                    return 1;
                }
                return 1;
            }
        }
    }
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 - 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar6);
    }
    else if (uVar3 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return 0;
}


// ===== sym.get_page_from_reserve_pool @ 0x080076cc (size 648) =====

int64_t sym.get_page_from_reserve_pool(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    char cVar7;
    bool bVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t in_x1;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar12 = 0;
    if ((*(arg1 + 0x10) != 0) && ((in_x1 & 1) != 0)) {
        if (*(arg3 + 0x48) == 0) {
            iVar12 = *(arg1 + 0x78);
            if (iVar12 == 0) {
                return 0;
            }
            iVar9 = ktime_get();
            uVar11 = iVar9 / 1000000 - iVar12;
            noname_1 = extraout_q0;
        }
        else {
            uVar11 = 0;
        }
        if (uVar11 < *(arg1 + 0x20)) {
            iVar9 = arg3 + 0x40;
            uVar10 = _raw_spin_lock_irqsave(noname_1,iVar9);
            if ((*arg3 == 0) && (*(arg3 + 4) == 0)) {
                iVar12 = 0;
            }
            else {
                iVar12 = sym.dynamic_page_pool_remove(arg3);
            }
            _raw_spin_unlock_irqrestore(iVar9,uVar10);
            if ((*(arg1 + 0x1c) >> 1 & 1) != 0) {
                uVar10 = _raw_spin_lock_irqsave(arg2 + 0x40);
                uVar3 = *arg2;
                uVar5 = *(arg2 + 4);
                _raw_spin_unlock_irqrestore(arg2 + 0x40,uVar10);
                uVar10 = _raw_spin_lock_irqsave(iVar9);
                uVar4 = *arg3;
                uVar6 = *(arg3 + 4);
                _raw_spin_unlock_irqrestore(iVar9,uVar10);
                iVar9 = sp_el0;
                _printk(0x80011c5,0x80017c4,iVar12,*(iVar9 + 0x618) + 0x7a8,iVar9 + 0x7a8,*(iVar9 + 0x5d8),
                        *(arg2 + 0x48),uVar3,uVar5,uVar4,uVar6,1);
            }
            if (iVar12 != 0) {
                iVar9 = 1;
                if (*(arg3 + 0x48) != 4) {
                    iVar9 = 2;
                }
                iVar2 = 0;
                if (*(arg3 + 0x48) != 9) {
                    iVar2 = iVar9;
                }
                piVar1 = arg1 + iVar2 * 4 + 0x38;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar7 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                        *piVar1 = *piVar1 + 1;
                        cVar7 = ExclusiveMonitorsStatus();
                    }
                } while (cVar7 != '\0');
            }
        }
        else {
            *(arg1 + 0x78) = 0;
            iVar12 = 0;
            if ((*(arg1 + 0x1c) >> 2 & 1) != 0) {
                uVar10 = _raw_spin_lock_irqsave(noname_1,arg2 + 0x40);
                uVar3 = *arg2;
                uVar5 = *(arg2 + 4);
                _raw_spin_unlock_irqrestore(arg2 + 0x40,uVar10);
                uVar10 = _raw_spin_lock_irqsave(arg3 + 0x40);
                uVar4 = *arg3;
                uVar6 = *(arg3 + 4);
                _raw_spin_unlock_irqrestore(arg3 + 0x40,uVar10);
                iVar12 = sp_el0;
                _printk(0x80011c5,"used reserve pool timeout",0,*(iVar12 + 0x618) + 0x7a8,iVar12 + 0x7a8,
                        *(iVar12 + 0x5d8),*(arg2 + 0x48),uVar3,uVar5,uVar4,uVar6,1);
                iVar12 = 0;
            }
        }
    }
    return iVar12;
}


// ===== sym.get_page_from_buddy @ 0x08007954 (size 756) =====

ulong sym.get_page_from_buddy(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    uint8_t uVar7;
    char cVar8;
    bool bVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *in_x18;
    uint *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = ktime_get();
    puVar14 = arg3 + 0x44;
    uVar11 = tpidr_el1;
    uVar11 = __alloc_pages(*puVar14,*(arg3 + 0x48),0,0);
    iVar12 = ktime_get();
    iVar10 = (iVar12 - iVar10) / 1000;
    if (((arg2 & 1U) != 0) && (*(arg1 + 0x24) < iVar10)) {
        iVar12 = ktime_get();
        piVar1 = arg1 + 0x34;
        *(arg1 + 0x78) = iVar12 / 1000000;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar8 = '\x01';
            bVar9 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
                *piVar1 = *piVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
            }
        } while (cVar8 != '\0');
        if ((*(arg1 + 0x1c) >> 2 & 1) != 0) {
            uVar13 = _raw_spin_lock_irqsave(arg3 + 0x40);
            uVar4 = *arg3;
            uVar5 = *(arg3 + 4);
            _raw_spin_unlock_irqrestore(arg3 + 0x40,uVar13);
            uVar13 = _raw_spin_lock_irqsave(arg4 + 0x40);
            uVar2 = *arg4;
            uVar3 = *(arg4 + 4);
            _raw_spin_unlock_irqrestore(arg4 + 0x40,uVar13);
            iVar12 = sp_el0;
            _printk(0x80010ab,"reserve-sp",uVar11,*(iVar12 + 0x618) + 0x7a8,iVar12 + 0x7a8,*(iVar12 + 0x5d8),
                    *(arg3 + 0x48),uVar4,uVar5,uVar2,uVar3,1,iVar10,*(arg3 + 0x44),puVar14);
            uVar7 = *(arg1 + 0x1c);
            goto joined_r0x08007a2c;
        }
    }
    uVar7 = *(arg1 + 0x1c);
joined_r0x08007a2c:
    if ((uVar7 >> 4 & 1) == 0) {
        iVar6 = *(arg3 + 0x48);
    }
    else {
        uVar13 = _raw_spin_lock_irqsave(arg3 + 0x40);
        uVar2 = *arg3;
        uVar4 = *(arg3 + 4);
        _raw_spin_unlock_irqrestore(arg3 + 0x40,uVar13);
        uVar13 = _raw_spin_lock_irqsave(arg4 + 0x40);
        uVar3 = *arg4;
        uVar5 = *(arg4 + 4);
        _raw_spin_unlock_irqrestore(arg4 + 0x40,uVar13);
        iVar12 = sp_el0;
        _printk(0x80010ab,"All alloc",uVar11,*(iVar12 + 0x618) + 0x7a8,iVar12 + 0x7a8,*(iVar12 + 0x5d8),
                *(arg3 + 0x48),uVar2,uVar4,uVar3,uVar5,arg2 & 1,iVar10,*(arg3 + 0x44),puVar14);
        iVar6 = *(arg3 + 0x48);
    }
    if (iVar6 == 0) {
        if ((arg2 & 1U) == 0) {
            piVar1 = arg1 + 0x2c;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                    *piVar1 = *piVar1 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
        }
        else {
            piVar1 = arg1 + 0x30;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar8 = '\x01';
                bVar9 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                    *piVar1 = *piVar1 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                }
            } while (cVar8 != '\0');
        }
    }
    return uVar11;
}


// ===== sym.enable_show @ 0x08007c48 (size 68) =====

int64_t sym.enable_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000f80,*(_segment.ehdr + 0x18));
    return iVar1;
}


// ===== sym.enable_store @ 0x08007c8c (size 592) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.enable_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t *******pppppppiVar1;
    int64_t ******ppppppiVar2;
    int64_t ******ppppppiVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *******pppppppiVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *******pppppppiVar11;
    int *arg1_00;
    uint32_t uVar12;
    code *pcVar13;
    ulong unaff_x30;
    int iStack_7c;
    int64_t *******pppppppiStack_78;
    int64_t *******pppppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    pppppppiVar8 = &iStack_7c;
    iStack_7c = 0;
    iVar4 = kstrtoint(arg1,0,pppppppiVar8);
    iVar9 = _segment.ehdr;
    if (iVar4 == 0) {
        if (iStack_7c == 0) {
            iVar10 = 0;
            *(_segment.ehdr + 0x18) = 0;
            iVar9 = *(iVar9 + 0x10);
            do {
                arg1_00 = *(iVar9 + iVar10 * 8);
                pppppppiStack_78 = &pppppppiStack_78;
                pppppppiStack_70 = &pppppppiStack_78;
                uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0x10);
                uVar12 = 0;
                while ((arg1_00[1] != 0 || (*arg1_00 != 0))) {
                    iVar6 = sym.dynamic_page_pool_remove(arg1_00);
                    pppppppiVar11 = pppppppiStack_78;
                    pppppppiVar1 = iVar6 + 8;
                    pppppppiVar8 = pppppppiStack_78;
                    uVar7 = __list_add_valid(pppppppiVar1,&pppppppiStack_78,pppppppiStack_78);
                    if ((uVar7 & 1) != 0) {
                        pppppppiVar11[1] = pppppppiVar1;
                        *(iVar6 + 8) = pppppppiVar11;
                        *(iVar6 + 0x10) = &pppppppiStack_78;
                        pppppppiStack_78 = pppppppiVar1;
                    }
                    uVar12 = uVar12 + 1;
                }
                _raw_spin_unlock_irqrestore(arg1_00 + 0x10,uVar5);
                pppppppiVar1 = pppppppiStack_78;
                if ((uVar12 == 0) || (pcVar13 = *(arg1_00 + 0x1a), pcVar13 == NULL)) {
joined_r0x08007dfc:
                    while (&pppppppiStack_78 != pppppppiVar1) {
                        pppppppiVar11 = *pppppppiVar1;
                        uVar7 = __list_del_entry_valid(pppppppiVar1);
                        if ((uVar7 & 1) != 0) {
                            ppppppiVar2 = *pppppppiVar1;
                            ppppppiVar3 = pppppppiVar1[1];
                            ppppppiVar2[1] = ppppppiVar3;
                            *ppppppiVar3 = ppppppiVar2;
                        }
                        *pppppppiVar1 = 0xdead000000000100;
                        pppppppiVar1[1] = 0xdead000000000122;
                        __free_pages(pppppppiVar1 + -1,arg1_00[0x12]);
                        pppppppiVar1 = pppppppiVar11;
                    }
                    if ((*(_segment.ehdr + 0x1c) >> 6 & 1) != 0) {
                        pppppppiVar8 = arg1_00[0x12];
                        _printk(0x80018dc,uVar12,pppppppiVar8);
                    }
                }
                else {
                    if (pcVar13 !=
                        sym.__typeid__ZTSF25dynamic_pool_callback_retP17dynamic_page_poolP9list_headiE_global_addr) {
                        __cfi_slowpath_diag(0xa9cd81dabe0e6624,pcVar13,0x8000af0);
                    }
                    pppppppiVar8 = uVar12;
                    iVar4 = (*pcVar13)(arg1_00,&pppppppiStack_78,pppppppiVar8);
                    pppppppiVar1 = pppppppiStack_78;
                    if (iVar4 == 0) goto joined_r0x08007dfc;
                    _printk(0x8001078);
                }
                iVar10 = iVar10 + 1;
            } while (iVar10 != 3);
        }
        else {
            *(_segment.ehdr + 0x18) = 1;
        }
    }
    else {
        arg2 = iVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.debug_show;
        iVar4 = scnprintf(pppppppiVar8,0x1000,0x8000f80,*(_segment.ehdr + 0x1c));
        return iVar4;
    }
    return arg2;
}


// ===== sym.debug_show @ 0x08007edc (size 68) =====

int64_t sym.debug_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000f80,*(_segment.ehdr + 0x1c));
    return iVar1;
}


// ===== sym.debug_store @ 0x08007f20 (size 140) =====

int64_t sym.debug_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint *puVar4;
    char *pcVar5;
    ulong *puVar6;
    ulong uVar7;
    uint uVar8;
    uint *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    ulong uStack_f0;
    ulong uStack_e8;
    uint auStack_e0 [2];
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    ulong uStack_c8;
    uint *puStack_c0;
    uint32_t uStack_b0;
    ulong uStack_a8;
    ushort uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtoint(arg1,0);
    if (iVar2 == 0) {
        *(_segment.ehdr + 0x1c) = uStack_2c;
    }
    else {
        arg2 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.config_show;
    pcStack_88 = sym.config_show;
    iVar3 = sp_el0;
    uVar11 = 0;
    uVar10 = 0;
    iStack_98 = *(iVar3 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffe0;
    do {
        uStack_a0 = 0;
        uStack_a8 = 0x206425;
        pcVar5 = 0x80016ac;
        iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,0x80016ac,*(obj.config_show_name + uVar11 * 8));
        uVar1 = uVar11 & 0xfffffffd;
        if (uVar1 == 0) {
            uVar7 = *(**(obj.config_show_pool + uVar11 * 8) + 8);
        }
        else {
            uVar7 = **(obj.config_show_val + uVar11 * 8);
        }
        uVar10 = iVar2 + uVar10;
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        if (uVar1 == 0) {
            uVar7 = *(*(*(obj.config_show_pool + uVar11 * 8) + 8) + 8);
        }
        else {
            uVar7 = *(*(obj.config_show_val + uVar11 * 8) + 4);
        }
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        uStack_a8 = CONCAT44(uStack_a8._4_4_,0xa5d6425);
        if (uVar1 == 0) {
            uVar7 = *(*(*(obj.config_show_pool + uVar11 * 8) + 0x10) + 8);
        }
        else {
            uVar7 = *(*(obj.config_show_val + uVar11 * 8) + 8);
        }
        if (uVar10 < 0xfff) {
            pcVar5 = &uStack_a8;
            iVar2 = snprintf(puVar4 + uVar10,0x1000 - uVar10,pcVar5,uVar7);
            uVar10 = iVar2 + uVar10;
        }
        uVar8 = uVar7 >> 0x20;
        uVar11 = uVar11 + 1;
    } while (uVar11 != 7);
    iVar3 = uVar10;
    if (uVar10 < 0xfff) {
        pcVar5 = 
        "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
        ;
        uVar7 = *(_segment.ehdr + 0x30);
        uStack_b0 = *(_segment.ehdr + 0x18);
        iVar2 = snprintf(puVar4 + iVar3,0x1000 - iVar3,
                         "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
                         ,uVar7,*(_segment.ehdr + 0x34),*(_segment.ehdr + 0x2c),*(_segment.ehdr + 0x20),
                         *(_segment.ehdr + 0x24));
        uVar8 = uVar7 >> 0x20;
        iVar3 = iVar2 + uVar10;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return iVar3;
    }
    __stack_chk_fail(iVar3);
    iVar9 = CONCAT44(uVar8,*extraout_x9);
    puVar6 = &uStack_f0;
    *extraout_x18_00 = 0x80081f4;
    uStack_c8 = 0x80081f4;
    iVar3 = sp_el0;
    iStack_d8 = *(iVar3 + 0x5e0);
    auStack_e0[0] = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    ppuStack_d0 = &puStack_90;
    puStack_c0 = puVar4;
    iVar2 = sscanf(pcVar5,"%d %d %d %d %d",&uStack_f0,&uStack_f0 | 4,&uStack_e8,&uStack_e8 + 4,auStack_e0);
    iVar3 = _segment.ehdr;
    if (iVar2 == 5) {
        *(_segment.ehdr + 0x44) = uStack_f0;
        *(iVar3 + 0x48) = uStack_f0._4_4_;
        *(iVar3 + 0x4c) = uStack_e8;
        *(iVar3 + 0x20) = uStack_e8._4_4_;
        *(iVar3 + 0x24) = auStack_e0[0];
    }
    else {
        _printk(0x80015be);
        iVar9 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_d8) {
        return iVar9;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.pid_show;
    iVar2 = scnprintf(puVar6,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1)
    ;
    return iVar2;
}


// ===== sym.config_show @ 0x08007fac (size 620) =====

int64_t sym.config_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uchar *puVar5;
    ulong uVar6;
    uint uVar7;
    uint *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    ulong uStack_c0;
    ulong uStack_b8;
    uint auStack_b0 [2];
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    uint32_t uStack_80;
    ulong uStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    uVar10 = 0;
    uVar9 = 0;
    iStack_68 = *(iVar3 + 0x5e0);
    do {
        uStack_70 = 0;
        uStack_78 = 0x206425;
        pcVar4 = 0x80016ac;
        iVar2 = snprintf(noname_1,arg2 + uVar9,0x1000 - uVar9,0x80016ac,*(obj.config_show_name + uVar10 * 8));
        uVar1 = uVar10 & 0xfffffffd;
        if (uVar1 == 0) {
            uVar6 = *(**(obj.config_show_pool + uVar10 * 8) + 8);
        }
        else {
            uVar6 = **(obj.config_show_val + uVar10 * 8);
        }
        uVar9 = iVar2 + uVar9;
        noname_1 = extraout_q0;
        if (uVar9 < 0xfff) {
            pcVar4 = &stack0xffffffffffffff88;
            iVar2 = snprintf(arg2 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
            noname_1 = extraout_q0_00;
        }
        if (uVar1 == 0) {
            uVar6 = *(*(*(obj.config_show_pool + uVar10 * 8) + 8) + 8);
        }
        else {
            uVar6 = *(*(obj.config_show_val + uVar10 * 8) + 4);
        }
        if (uVar9 < 0xfff) {
            pcVar4 = &stack0xffffffffffffff88;
            iVar2 = snprintf(arg2 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
            noname_1 = extraout_q0_01;
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,0xa5d6425);
        if (uVar1 == 0) {
            uVar6 = *(*(*(obj.config_show_pool + uVar10 * 8) + 0x10) + 8);
        }
        else {
            uVar6 = *(*(obj.config_show_val + uVar10 * 8) + 8);
        }
        if (uVar9 < 0xfff) {
            pcVar4 = &stack0xffffffffffffff88;
            iVar2 = snprintf(arg2 + uVar9,0x1000 - uVar9,pcVar4,uVar6);
            uVar9 = iVar2 + uVar9;
            noname_1 = extraout_q0_02;
        }
        uVar7 = uVar6 >> 0x20;
        uVar10 = uVar10 + 1;
    } while (uVar10 != 7);
    iVar3 = uVar9;
    if (uVar9 < 0xfff) {
        pcVar4 = 
        "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
        ;
        uVar6 = *(_segment.ehdr + 0x30);
        uStack_80 = *(_segment.ehdr + 0x18);
        iVar2 = snprintf(arg2 + iVar3,0x1000 - iVar3,
                         "reserve_slowpath[%d]\nreserve_long_slowpath[%d]\nslowpath[%d]\npool_service_time[%d]\npool_start_service_alloc_time[%d]\nused_reserve_pool %d\n"
                         ,uVar6,*(_segment.ehdr + 0x34),*(_segment.ehdr + 0x2c),*(_segment.ehdr + 0x20),
                         *(_segment.ehdr + 0x24));
        uVar7 = uVar6 >> 0x20;
        iVar3 = iVar2 + uVar9;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        __stack_chk_fail(iVar3);
        iVar8 = CONCAT44(uVar7,*extraout_x9);
        puVar5 = &stack0xffffffffffffff40;
        *extraout_x18 = 0x80081f4;
        uStack_98 = 0x80081f4;
        iVar3 = sp_el0;
        iStack_a8 = *(iVar3 + 0x5e0);
        auStack_b0[0] = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        puStack_a0 = &stack0xffffffffffffffa0;
        iStack_90 = arg2;
        iVar2 = sscanf(pcVar4,"%d %d %d %d %d",&stack0xffffffffffffff40,&stack0xffffffffffffff40 | 4,
                       &stack0xffffffffffffff48,&stack0xffffffffffffff4c,&stack0xffffffffffffff50);
        iVar3 = _segment.ehdr;
        if (iVar2 == 5) {
            *(_segment.ehdr + 0x44) = uStack_c0;
            *(iVar3 + 0x48) = uStack_c0._4_4_;
            *(iVar3 + 0x4c) = uStack_b8;
            *(iVar3 + 0x20) = uStack_b8._4_4_;
            *(iVar3 + 0x24) = auStack_b0[0];
        }
        else {
            _printk(0x80015be);
            iVar8 = -0x16;
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_a8) {
            return iVar8;
        }
        __stack_chk_fail();
        *extraout_x18_00 = sym.pid_show;
        iVar2 = scnprintf(puVar5,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,
                          ~obj.use_name_cmp & 1);
        return iVar2;
    }
    return iVar3;
}


// ===== sym.config_store @ 0x08008218 (size 208) =====

int64_t sym.config_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint auStack_30 [2];
    int64_t iStack_28;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_30[0] = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = sscanf(arg1,"%d %d %d %d %d",&uStack_40,&uStack_40 | 4,&uStack_38,&uStack_38 + 4,auStack_30);
    iVar1 = _segment.ehdr;
    if (iVar2 == 5) {
        *(_segment.ehdr + 0x44) = uStack_40;
        *(iVar1 + 0x48) = uStack_40._4_4_;
        *(iVar1 + 0x4c) = uStack_38;
        *(iVar1 + 0x20) = uStack_38._4_4_;
        *(iVar1 + 0x24) = auStack_30[0];
    }
    else {
        _printk(0x80015be);
        arg2 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.pid_show;
    iVar2 = scnprintf(puVar3,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1
                      ,in_x7,&stack0xffffffffffffffe0,sym.pid_show);
    return iVar2;
}


// ===== sym.pid_show @ 0x080082e8 (size 88) =====

int64_t sym.pid_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"%d %d %d cmp:%d\n",*0x8000790,*0x800078c,_obj.pool_pid,~obj.use_name_cmp & 1);
    return iVar1;
}


// ===== sym.pid_store @ 0x08008340 (size 468) =====

uint32_t * sym.pid_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t in_tmp_ldXn;
    int iVar4;
    uint uVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint32_t *puVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_3c = 0;
    iVar4 = kstrtoint(arg1,0,&stack0xffffffffffffffc4);
    if (iVar4 != 0) {
        arg2 = iVar4;
        goto code_r0x080084b4;
    }
    if (0 < uStack_3c) {
        __rcu_read_lock();
        iVar9 = sp_el0;
        if (*(iVar9 + 0x640) == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = __task_pid_nr_ns(*(iVar9 + 0x5e8),1,init_pid_ns);
        }
        arg1_00 = find_task_by_vpid(uStack_3c);
        __rcu_read_unlock();
        if (arg1_00 == 0) {
            arg2 = -3;
            goto code_r0x080084b4;
        }
        sym.get_task_struct(arg1_00);
        _printk(0x8001608,*(iVar9 + 0x5d8),iVar9 + 0x7a8,uVar5);
        iVar9 = _segment.ehdr;
        if (_segment.ehdr < 3) {
            _segment.ehdr = _segment.ehdr + 1;
            uVar8 = 0x80017af;
            *(obj.pool_pid + iVar9 * 4) = uStack_3c;
            iVar9 = *(arg1_00 + 0x618);
            uVar5 = *(iVar9 + 0x5d8);
code_r0x08008448:
            _printk(uVar8,uStack_3c,arg1_00 + 0x7a8,uVar5,iVar9 + 0x7a8,_segment.ehdr);
        }
        else {
            _printk(0x8000c94,uStack_3c,*(arg1_00 + 0x618) + 0x7a8,3);
            uVar6 = sym.update_pool_pid(uStack_3c);
            if ((uVar6 & 1) == 0) {
                iVar9 = *(arg1_00 + 0x618);
                uVar8 = 0x80019e3;
                uVar5 = *(iVar9 + 0x5d8);
                goto code_r0x08008448;
            }
        }
        sym.put_task_struct(arg1_00);
    }
    if (((_obj.pool_pid == 0) || (*0x800078c == 0)) || (*0x8000790 == 0)) {
        obj.use_name_cmp = 0x0;
    }
    else {
        obj.use_name_cmp = 0x1;
    }
code_r0x080084b4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8008510;
    puVar7 = in_tmp_ldXn + 0x38;
    Hint_Prefetch(puVar7,2,0,1);
    do {
        uVar1 = *puVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
            *puVar7 = uVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (uVar1 == 0) {
        uVar8 = 2;
    }
    else {
        if (-1 < (uVar1 + 1 | uVar1)) {
            return puVar7;
        }
        uVar8 = 1;
    }
    puVar7 = refcount_warn_saturate(puVar7,uVar8);
    return puVar7;
}


// ===== sym.get_task_struct @ 0x08008514 (size 124) =====

void sym.get_task_struct(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) {
            return;
        }
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
    return;
}


// ===== sym.update_pool_pid @ 0x08008590 (size 572) =====

ulong sym.update_pool_pid(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint uVar7;
    uint64_t uVar8;
    bool bVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _segment.ehdr;
    uVar8 = arg1 & 0xffffffff;
    __rcu_read_lock();
    iVar5 = find_task_by_vpid(uVar7);
    __rcu_read_unlock();
    uVar7 = arg1;
    if (iVar5 == 0) {
        uVar6 = 0x80016b0;
code_r0x0800876c:
        _printk(uVar6,uVar8,_segment.ehdr);
        bVar2 = true;
        _segment.ehdr = uVar7;
    }
    else {
        iVar5 = *(iVar5 + 0x618) + 0x7a8;
        iVar4 = strncmp(iVar5,"vendor.qti.came",0xf);
        if (((iVar4 != 0) && (iVar4 = strncmp(iVar5,"allocator-servi",0xf), iVar4 != 0)) &&
           (iVar4 = strncmp(iVar5,"composer-servic",0xf), iVar4 != 0)) {
            uVar6 = 0x8001740;
            goto code_r0x0800876c;
        }
        bVar2 = false;
    }
    uVar3 = _segment.ehdr;
    __rcu_read_lock();
    iVar5 = find_task_by_vpid(uVar3);
    __rcu_read_unlock();
    if (iVar5 == 0) {
        uVar6 = 0x80016b0;
    }
    else {
        iVar5 = *(iVar5 + 0x618) + 0x7a8;
        iVar4 = strncmp(iVar5,"vendor.qti.came",0xf);
        if (((iVar4 == 0) || (iVar4 = strncmp(iVar5,"allocator-servi",0xf), iVar4 == 0)) ||
           (iVar4 = strncmp(iVar5,"composer-servic",0xf), iVar4 == 0)) {
            bVar1 = false;
            bVar9 = true;
            goto code_r0x0800869c;
        }
        uVar6 = 0x8001740;
    }
    _printk(uVar6,uVar8,_segment.ehdr);
    bVar9 = false;
    bVar1 = true;
    _segment.ehdr = uVar7;
code_r0x0800869c:
    uVar3 = _segment.ehdr;
    __rcu_read_lock();
    iVar5 = find_task_by_vpid(uVar3);
    __rcu_read_unlock();
    if (iVar5 == 0) {
        uVar6 = 0x80016b0;
    }
    else {
        iVar5 = *(iVar5 + 0x618) + 0x7a8;
        iVar4 = strncmp(iVar5,"vendor.qti.came",0xf);
        if (((iVar4 == 0) || (iVar4 = strncmp(iVar5,"allocator-servi",0xf), iVar4 == 0)) ||
           (iVar4 = strncmp(iVar5,"composer-servic",0xf), iVar4 == 0)) {
            if (bVar9) {
                if (!bVar1) {
                    return 1;
                }
                return 0;
            }
            if (bVar2) {
                return 0;
            }
            return 1;
        }
        uVar6 = 0x8001740;
    }
    _printk(uVar6,uVar8,_segment.ehdr);
    if (bVar2 || bVar1) {
        _segment.ehdr = uVar7;
        return 0;
    }
    _segment.ehdr = uVar7;
    return 1;
}


// ===== sym.put_task_struct @ 0x080087cc (size 148) =====

void sym.put_task_struct(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.scene_show @ 0x08008860 (size 68) =====

int64_t sym.scene_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80015ba,*(_segment.ehdr + 0x28));
    return iVar1;
}


// ===== sym.scene_store @ 0x080088a4 (size 236) =====

int64_t sym.scene_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int *piVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    int iVar8;
    char cVar9;
    bool bVar10;
    ulong uVar11;
    code *pcVar12;
    int iVar13;
    int64_t arg1_00;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    iStack_2c = 0;
    iVar13 = kstrtoint(arg1,0,&iStack_2c);
    iVar14 = _segment.ehdr;
    if (iVar13 == 0) {
        if (iStack_2c == 1) {
            pcVar12 = obj.g_camera_reserve_config;
        }
        else {
            if (iStack_2c != 2) {
                _printk(0x8001010);
                goto code_r0x0800894c;
            }
            pcVar12 = obj.g_reserve_config;
        }
        pcVar12 = pcVar12 + obj.g_mem_type_index * 0x14;
        *(_segment.ehdr + 0x28) = iStack_2c;
        uVar4 = *(pcVar12 + 0x10);
        uVar3 = *(pcVar12 + 4);
        uVar5 = *(pcVar12 + 8);
        uVar6 = *pcVar12;
        *(iVar14 + 0x20) = *(pcVar12 + 0xc);
        *(iVar14 + 0x24) = uVar4;
        *(iVar14 + 0x4c) = uVar5;
        *(iVar14 + 0x48) = uVar3;
        *(iVar14 + 0x44) = uVar6;
    }
    else {
        arg2 = iVar13;
    }
code_r0x0800894c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return arg2;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.dynamic_page_pool_refill;
    iVar14 = arg1_00;
    if ((*(arg1_00 + 0x48) == 0) && (*(_segment.ehdr + 0x18) != '\0')) {
        uVar7 = *(arg1_00 + 0x44);
        bVar10 = false;
        do {
            iVar19 = 1;
            if (*(arg1_00 + 0x48) != 4) {
                iVar19 = 2;
            }
            iVar17 = 0;
            if (*(arg1_00 + 0x48) != 9) {
                iVar17 = iVar19;
            }
            if (*(_segment.ehdr + iVar17 * 4 + 0x44) <= *(arg1_00 + 8)) {
                return iVar14;
            }
            uVar16 = *(arg1_00 + 0x44);
            iVar14 = ktime_get();
            if (iVar14 - *(arg1_00 + 0x30) < 10000000) {
                return iVar14;
            }
            uVar23 = 0x250015 >> ((uVar16 & 0xf) << 1) & 3;
            iVar14 = uVar23 * 0x640 + 0x8028250;
            uVar24 = uVar23;
            do {
                uVar11 = tpidr_el1;
                iVar13 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar24 * 0x640),"DMA32");
                if (iVar13 != 0) {
                    iVar19 = uVar24 * 0x640;
                    uVar16 = *(arg1_00 + 0x48);
                    uVar25 = uVar16;
                    iVar13 = *(__cpu_online_mask + iVar19);
                    iVar8 = *(__per_cpu_offset + iVar19);
                    uVar20 = *(iVar19 + 0x80286f0);
                    uVar20 = uVar20 & (uVar20 >> 0x3f ^ 0xffffffffffffffffU);
                    if ((*(iVar19 + 0x80286b0) != 0) && (uVar20 < *(iVar19 + 0x80286b0))) {
                        uVar20 = *(iVar19 + 0x80286f0);
                        uVar22 = arg1_00;
                        _delayed_work_timer_fn = uVar22;
                        uVar15 = cpumask_next(0xffffffff,__cpu_online_mask);
                        if (uVar15 < uVar22) {
                            do {
                                if (0x1f < uVar15) goto code_r0x08008dac;
                                uVar20 = uVar20 + *(*(__per_cpu_offset + (uVar15 & 0xffffffff) * 8) +
                                                   *(refcount_warn_saturate + uVar24 * 0x640));
                                uVar15 = cpumask_next(uVar15,__cpu_online_mask);
                            } while (uVar15 < uVar22);
                        }
                        uVar20 = uVar20 & (uVar20 >> 0x3f ^ 0xffffffffffffffffU);
                    }
                    uVar15 = *(uVar24 * 0x640 + 0x8028740);
                    if (uVar23 == 3) {
code_r0x08008dac:
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8008db0);
                        (*pcVar12)();
                    }
                    if (uVar20 - (*(schedule + uVar24 * 0x640) + ~(-1 << (uVar16 & 0x1f)) +
                                 (uVar15 & (uVar15 >> 0x3f ^ 0xffffffffffffffffU))) <=
                        *(kernel_kobj + uVar24 * 0x640 + uVar23 * 8) + (1 << (uVar16 & 0x1f)) + iVar8 + iVar13) {
code_r0x08008d7c:
                        iVar14 = ktime_get();
                        *(arg1_00 + 0x30) = iVar14;
                        return iVar14;
                    }
                    if (uVar16 != 0) {
                        if (10 < uVar16) goto code_r0x08008d7c;
                        if (uVar16 < 0xd) {
                            uVar16 = 0xc;
                        }
                        iVar18 = uVar16 - uVar25;
                        iVar17 = uVar25 * 0x68;
                        iVar19 = iVar14;
                        while( true ) {
                            if (iVar18 == 0) goto code_r0x08008dac;
                            if ((*(iVar19 + iVar17) != 0) &&
                               ((((piVar21 = iVar19 + iVar17 + -0x60, piVar21 != *piVar21 ||
                                  (piVar21 = iVar19 + iVar17 + -0x50, piVar21 != *piVar21)) ||
                                 (piVar21 = iVar19 + iVar17 + -0x40, piVar21 != *piVar21)) ||
                                (piVar21 = iVar19 + iVar17 + -0x30, piVar21 != *piVar21)))) break;
                            iVar19 = iVar19 + 0x68;
                            uVar16 = uVar25 + 1;
                            uVar25 = uVar16;
                            iVar18 = iVar18 + -1;
                            if (10 < uVar16) goto code_r0x08008d7c;
                        }
                    }
                }
                iVar19 = _segment.ehdr;
                iVar14 = iVar14 + -0x640;
                bVar1 = 0 < uVar24;
                uVar24 = uVar24 - 1;
            } while (bVar1);
            if (!bVar10) {
                iVar14 = 1;
                if (*(arg1_00 + 0x48) != 4) {
                    iVar14 = 2;
                }
                iVar17 = 0;
                if (*(arg1_00 + 0x48) != 9) {
                    iVar17 = iVar14;
                }
                piVar2 = _segment.ehdr + iVar17 * 4 + 0x50;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar9 = '\x01';
                    bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar10) {
                        *piVar2 = *piVar2 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                    }
                } while (cVar9 != '\0');
                iVar14 = 1;
                if (*(arg1_00 + 0x48) != 4) {
                    iVar14 = 2;
                }
                iVar17 = 0;
                if (*(arg1_00 + 0x48) != 9) {
                    iVar17 = iVar14;
                }
                *(iVar19 + iVar17 * 4 + 0x68) = 0;
            }
            uVar11 = tpidr_el1;
            iVar14 = __alloc_pages(uVar11,uVar7 & 0xfffeffff | 0xc00,*(arg1_00 + 0x48),0,0);
            if (iVar14 == 0) {
                return 0;
            }
            iVar17 = 1;
            if (*(arg1_00 + 0x48) != 4) {
                iVar17 = 2;
            }
            iVar18 = 0;
            if (*(arg1_00 + 0x48) != 9) {
                iVar18 = iVar17;
            }
            piVar2 = iVar19 + iVar18 * 4 + 0x68;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar9 = '\x01';
                bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                    *piVar2 = *piVar2 + 1;
                    cVar9 = ExclusiveMonitorsStatus();
                }
            } while (cVar9 != '\0');
            iVar17 = 1;
            if (*(arg1_00 + 0x48) != 4) {
                iVar17 = 2;
            }
            iVar18 = 0;
            if (*(arg1_00 + 0x48) != 9) {
                iVar18 = iVar17;
            }
            piVar2 = iVar19 + iVar18 * 4 + 0x5c;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar9 = '\x01';
                bVar10 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                    *piVar2 = *piVar2 + 1;
                    cVar9 = ExclusiveMonitorsStatus();
                }
            } while (cVar9 != '\0');
            iVar14 = sym.dynamic_page_pool_add(arg1_00,iVar14);
            bVar10 = true;
        } while (*(_segment.ehdr + 0x18) != '\0');
    }
    return iVar14;
}


// ===== sym.dynamic_page_pool_refill @ 0x08008990 (size 1172) =====

void sym.dynamic_page_pool_refill(int64_t arg1)

{
    bool bVar1;
    int *piVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    int64_t *piVar17;
    ulong *in_x18;
    uint32_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x48) == 0) && (*(_segment.ehdr + 0x18) != '\0')) {
        uVar3 = *(arg1 + 0x44);
        bVar6 = false;
        do {
            iVar9 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar9 = 2;
            }
            iVar15 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar15 = iVar9;
            }
            if (*(_segment.ehdr + iVar15 * 4 + 0x44) <= *(arg1 + 8)) {
                return;
            }
            uVar12 = *(arg1 + 0x44);
            iVar9 = ktime_get();
            if (iVar9 - *(arg1 + 0x30) < 10000000) {
                return;
            }
            uVar19 = 0x250015 >> ((uVar12 & 0xf) << 1) & 3;
            iVar9 = uVar19 * 0x640 + 0x8028250;
            uVar20 = uVar19;
            do {
                uVar11 = tpidr_el1;
                iVar8 = strcmp(*(mem_buf_vmperm_alloc_staticvm + uVar20 * 0x640),"DMA32");
                if (iVar8 != 0) {
                    iVar15 = uVar20 * 0x640;
                    uVar12 = *(arg1 + 0x48);
                    uVar21 = uVar12;
                    iVar8 = *(__cpu_online_mask + iVar15);
                    iVar4 = *(__per_cpu_offset + iVar15);
                    uVar16 = *(iVar15 + 0x80286f0);
                    uVar16 = uVar16 & (uVar16 >> 0x3f ^ 0xffffffffffffffffU);
                    if ((*(iVar15 + 0x80286b0) != 0) && (uVar16 < *(iVar15 + 0x80286b0))) {
                        uVar16 = *(iVar15 + 0x80286f0);
                        uVar18 = arg1;
                        _delayed_work_timer_fn = uVar18;
                        uVar10 = cpumask_next(0xffffffff,__cpu_online_mask);
                        if (uVar10 < uVar18) {
                            do {
                                if (0x1f < uVar10) goto code_r0x08008dac;
                                uVar16 = uVar16 + *(*(__per_cpu_offset + (uVar10 & 0xffffffff) * 8) +
                                                   *(refcount_warn_saturate + uVar20 * 0x640));
                                uVar10 = cpumask_next(uVar10,__cpu_online_mask);
                            } while (uVar10 < uVar18);
                        }
                        uVar16 = uVar16 & (uVar16 >> 0x3f ^ 0xffffffffffffffffU);
                    }
                    uVar10 = *(uVar20 * 0x640 + 0x8028740);
                    if (uVar19 == 3) {
code_r0x08008dac:
    //WARNING: Does not return
                        pcVar7 = SoftwareBreakpoint(0x5512,0x8008db0);
                        (*pcVar7)();
                    }
                    if (uVar16 - (*(schedule + uVar20 * 0x640) + ~(-1 << (uVar12 & 0x1f)) +
                                 (uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU))) <=
                        *(kernel_kobj + uVar20 * 0x640 + uVar19 * 8) + (1 << (uVar12 & 0x1f)) + iVar4 + iVar8) {
code_r0x08008d7c:
                        uVar11 = ktime_get();
                        *(arg1 + 0x30) = uVar11;
                        return;
                    }
                    if (uVar12 != 0) {
                        if (10 < uVar12) goto code_r0x08008d7c;
                        if (uVar12 < 0xd) {
                            uVar12 = 0xc;
                        }
                        iVar14 = uVar12 - uVar21;
                        iVar13 = uVar21 * 0x68;
                        iVar15 = iVar9;
                        while( true ) {
                            if (iVar14 == 0) goto code_r0x08008dac;
                            if ((*(iVar15 + iVar13) != 0) &&
                               ((((piVar17 = iVar15 + iVar13 + -0x60, piVar17 != *piVar17 ||
                                  (piVar17 = iVar15 + iVar13 + -0x50, piVar17 != *piVar17)) ||
                                 (piVar17 = iVar15 + iVar13 + -0x40, piVar17 != *piVar17)) ||
                                (piVar17 = iVar15 + iVar13 + -0x30, piVar17 != *piVar17)))) break;
                            iVar15 = iVar15 + 0x68;
                            uVar12 = uVar21 + 1;
                            uVar21 = uVar12;
                            iVar14 = iVar14 + -1;
                            if (10 < uVar12) goto code_r0x08008d7c;
                        }
                    }
                }
                iVar15 = _segment.ehdr;
                iVar9 = iVar9 + -0x640;
                bVar1 = 0 < uVar20;
                uVar20 = uVar20 - 1;
            } while (bVar1);
            if (!bVar6) {
                iVar9 = 1;
                if (*(arg1 + 0x48) != 4) {
                    iVar9 = 2;
                }
                iVar13 = 0;
                if (*(arg1 + 0x48) != 9) {
                    iVar13 = iVar9;
                }
                piVar2 = _segment.ehdr + iVar13 * 4 + 0x50;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                        *piVar2 = *piVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                iVar9 = 1;
                if (*(arg1 + 0x48) != 4) {
                    iVar9 = 2;
                }
                iVar13 = 0;
                if (*(arg1 + 0x48) != 9) {
                    iVar13 = iVar9;
                }
                *(iVar15 + iVar13 * 4 + 0x68) = 0;
            }
            uVar11 = tpidr_el1;
            iVar9 = __alloc_pages(uVar11,uVar3 & 0xfffeffff | 0xc00,*(arg1 + 0x48),0,0);
            if (iVar9 == 0) {
                return;
            }
            iVar13 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar13 = 2;
            }
            iVar14 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar14 = iVar13;
            }
            piVar2 = iVar15 + iVar14 * 4 + 0x68;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            iVar13 = 1;
            if (*(arg1 + 0x48) != 4) {
                iVar13 = 2;
            }
            iVar14 = 0;
            if (*(arg1 + 0x48) != 9) {
                iVar14 = iVar13;
            }
            piVar2 = iVar15 + iVar14 * 4 + 0x5c;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            sym.dynamic_page_pool_add(arg1,iVar9);
            bVar6 = true;
        } while (*(_segment.ehdr + 0x18) != '\0');
    }
    return;
}


// ===== sym.qcom_secure_system_heap_prefetch @ 0x08008e24 (size 40) =====

void sym.qcom_secure_system_heap_prefetch(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_secure_system_heap_resize(arg1,arg2,0);
    return;
}


// ===== sym.__qcom_secure_system_heap_resize @ 0x08008e4c (size 712) =====

uint64_t sym.__qcom_secure_system_heap_resize(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    char *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    int64_t *piVar6;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    code *pcVar14;
    code *pcVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    uVar9 = arg2;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    piStack_78 = &stack0xffffffffffffff88;
    piStack_70 = piStack_78;
    if ((arg1 == 0) || (0x20 < uVar9)) {
        pcVar2 = "drain";
        if ((arg3 & 1U) == 0) {
            pcVar2 = "prefetch";
        }
        _printk(0x8001b5e,"__qcom_secure_system_heap_resize",pcVar2);
        uVar11 = 0xffffffea;
    }
    else {
        if (uVar9 != 0) {
            uVar13 = 0;
            pcVar5 = _obj.secure_heaps;
            pcVar14 = NULL;
joined_r0x08008ee4:
            do {
                if (pcVar5 == obj.secure_heaps) {
                    pcVar15 = pcVar14;
                    if (pcVar14 != NULL) goto code_r0x08008f18;
code_r0x080090e4:
                    uVar10 = dma_heap_get_name(*(arg1 + 8));
                    _printk(0x80017d1,"__qcom_secure_system_heap_resize",uVar10);
                    uVar11 = 0xffffffea;
code_r0x08009054:
                    piVar6 = piStack_78;
                    while (piVar6 != &stack0xffffffffffffff88) {
                        piVar12 = *piVar6;
                        uVar9 = __list_del_entry_valid(piVar6);
                        if ((uVar9 & 1) != 0) {
                            iVar3 = *piVar6;
                            piVar4 = piVar6[1];
                            *(iVar3 + 8) = piVar4;
                            *piVar4 = iVar3;
                        }
                        *piVar6 = -0x2152ffffffffff00;
                        piVar6[1] = -0x2152fffffffffede;
                        kfree(piVar6);
                        piVar6 = piVar12;
                    }
                    goto code_r0x08009010;
                }
                pcVar15 = pcVar5 + -0x10;
                pcVar7 = dma_heap_get_drvdata(*(arg1 + 8));
                if (pcVar15 != pcVar7) {
                    pcVar5 = *pcVar5;
                    goto joined_r0x08008ee4;
                }
                if (pcVar15 == NULL) goto code_r0x080090e4;
code_r0x08008f18:
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                piVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x28);
                piVar6 = piStack_70;
                if (piVar12 == NULL) {
                    uVar11 = 0xfffffff4;
                    goto code_r0x08009054;
                }
                piVar4 = arg1 + uVar13 * 0x10;
                *(piVar12 + 4) = arg3 & 1;
                iVar3 = *piVar4;
                piVar12[2] = piVar4[1];
                piVar12[3] = iVar3 + 0xfffU & 0xfffffffffffff000;
                *piVar12 = piVar12;
                piVar12[1] = piVar12;
                uVar8 = __list_add_valid(piVar12,piStack_70,&stack0xffffffffffffff88);
                if ((uVar8 & 1) != 0) {
                    *piVar12 = &stack0xffffffffffffff88;
                    piVar12[1] = piVar6;
                    piStack_70 = piVar12;
                    *piVar6 = piVar12;
                }
                uVar13 = uVar13 + 1;
                pcVar5 = _obj.secure_heaps;
                pcVar14 = pcVar15;
            } while (uVar13 < uVar9);
        }
        uVar10 = _raw_spin_lock_irqsave
                           (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
        if (&stack0xffffffffffffff88 != piStack_78) {
            piStack_78[1] = *0x8000a68;
            **0x8000a68 = piStack_78;
            *piStack_70 = obj.prefetch_list;
            *0x8000a68 = piStack_70;
            piStack_78 = &stack0xffffffffffffff88;
            piStack_70 = &stack0xffffffffffffff88;
        }
        uVar1 = 0xfa;
        if ((arg3 & 1U) == 0) {
            uVar1 = 0;
        }
        queue_delayed_work_on(0x20,_segment.ehdr,obj.prefetch_work,uVar1);
        _raw_spin_unlock_irqrestore
                  (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar10);
        uVar11 = 0;
    }
code_r0x08009010:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_68) {
        auVar16 = __stack_chk_fail();
        *extraout_x18 = 0x8009110;
        uVar9 = sym.__qcom_secure_system_heap_resize(auVar16._0_8_,auVar16._8_4_,1);
        return uVar9;
    }
    return uVar11;
}


// ===== sym.qcom_secure_system_heap_drain @ 0x08009114 (size 40) =====

void sym.qcom_secure_system_heap_drain(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_secure_system_heap_resize(arg1,arg2,1);
    return;
}


// ===== sym.qcom_secure_system_heap_freeze @ 0x0800913c (size 140) =====

ulong sym.qcom_secure_system_heap_freeze(void)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_delayed_work_sync(obj.prefetch_work);
    pcVar1 = _obj.secure_heaps;
    while( true ) {
        if (pcVar1 == obj.secure_heaps) {
            return 0;
        }
        if (*(pcVar1 + 0x10) != 0) break;
        sym.dynamic_page_pool_release_pools(*(pcVar1 + -0x10));
        pcVar1 = *pcVar1;
    }
    _printk(0x8001388,"qcom_secure_system_heap_freeze",*(pcVar1 + 0x10),*(pcVar1 + -8));
    return 0xfffffff0;
}


// ===== sym.qcom_secure_system_heap_restore @ 0x080091cc (size 168) =====

ulong sym.qcom_secure_system_heap_restore(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _obj.secure_heaps;
    if (_obj.secure_heaps != obj.secure_heaps) {
        do {
            uVar1 = sym.dynamic_page_pool_create_pools(*(pcVar2 + -8),0x8003528);
            *(pcVar2 + -0x10) = uVar1;
            if (0xfffffffffffff000 < uVar1) {
                _printk(0x80018fc,"qcom_secure_system_heap_restore",*(pcVar2 + -8),uVar1);
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.secure_heaps);
    }
    return 0;
}


// ===== sym.free_secure_pages @ 0x08009274 (size 276) =====

void sym.free_secure_pages(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    uint64_t *puVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    uint64_t *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_48 = NULL;
    uStack_40 = 0;
    if (arg3 == 0) {
        bVar3 = false;
    }
    else {
        iVar4 = sg_alloc_table(&puStack_48,arg3 & 0xffffffff,0xcc0);
        if (iVar4 == 0) {
            puVar5 = puStack_48;
            for (piVar8 = *arg2; piVar8 != arg2; piVar8 = *piVar8) {
                puVar6 = piVar8 + -1;
                if ((*puVar6 >> 0x10 & 1) == 0) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = *(piVar8 + 0x49);
                }
                if ((puVar6 & 3) != 0) goto code_r0x08009384;
                *(puVar5 + 1) = 0;
                *(puVar5 + 0xc) = 0x1000L << (uVar7 & 0x3f);
                *puVar5 = *puVar5 & 3 | puVar6;
                puVar5 = sg_next();
            }
            iVar4 = sym.hyp_unassign_sg_from_flags(&puStack_48,*(arg1 + 0x60),1);
            sg_free_table(&puStack_48);
            bVar3 = iVar4 != 0;
        }
        else {
            bVar3 = true;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(bVar3);
code_r0x08009384:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8009388);
    (*pcVar2)();
}


// ===== sym.qcom_secure_system_heap_create @ 0x08009388 (size 688) =====

void sym.qcom_secure_system_heap_create(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    code cVar3;
    uint64_t *puVar4;
    int64_t ***pppiVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *puVar13;
    int64_t *arg1_00;
    uint64_t *puVar14;
    uchar uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t ****ppppiVar16;
    int64_t ****ppppiVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    code *pcVar20;
    int64_t iVar21;
    ulong unaff_x30;
    int64_t ***pppiStack_d8;
    int64_t ***pppiStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_60;
    code *pcStack_58;
    uint64_t *puStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar18 = arg3;
    iStack_48 = *(iVar8 + 0x5e0);
    pcStack_58 = NULL;
    puStack_50 = NULL;
    iStack_60 = 0;
    iVar7 = sym.get_secure_vmid(uVar18);
    if ((iVar7 == -0x16) || (iVar8 = __sw_hweight64(uVar18), iVar8 != 1)) {
        _printk(0x8001993);
        uVar19 = 0xffffffea;
    }
    else {
        uVar9 = sym.dynamic_page_pool_init_shrinker(1);
        uVar19 = uVar9 & 0xffffffff;
        if (uVar9 == 0) {
            if ((reloc.qcom_sg_dma_buf_end_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt & 1) == 0) {
                _obj.prefetch_work = 0xfffffffe0;
                *0x80007a8 = 0x80007a8;
                *0x80007b0 = 0x80007a8;
                *0x80007b8 = sym.secure_system_heap_prefetch_work.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt;
                init_timer_key(reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt,
                               sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _segment.ehdr = alloc_workqueue("system_secure_prefetch_wq",6,0);
                if (_segment.ehdr != 0) {
                    reloc.qcom_sg_dma_buf_end_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt = 0x1;
                    goto code_r0x080094e0;
                }
                _printk(0x8001754);
            }
            else {
code_r0x080094e0:
                iVar8 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar8 = 0x30;
                }
                puVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x28);
                if (puVar14 != NULL) {
                    *(puVar14 + 1) = uVar18;
                    uVar19 = sym.dynamic_page_pool_create_pools(arg3 & 0xffffffff,0x8003528);
                    *puVar14 = uVar19;
                    if (uVar19 < 0xfffffffffffff001) {
                        pcStack_58 = reloc.system_heap_allocate.c9ce5d806a6e95099aaedd3fa025fe1d.cfi_jt;
                        iStack_60 = arg1;
                        puStack_50 = puVar14;
                        uVar19 = dma_heap_add(&iStack_60);
                        if (uVar19 < 0xfffffffffffff001) {
                            iVar8 = dma_heap_get_dev(uVar19);
                            sym.dma_coerce_mask_and_coherent_1(iVar8);
                            puVar4 = _obj.secure_heaps;
                            puVar1 = puVar14 + 2;
                            uVar19 = __list_add_valid(puVar1,obj.secure_heaps,_obj.secure_heaps);
                            if ((uVar19 & 1) != 0) {
                                puVar4[1] = puVar1;
                                puVar14[2] = puVar4;
                                puVar14[3] = obj.secure_heaps;
                                _obj.secure_heaps = puVar1;
                            }
                            _printk(0x8000e96,"qcom_secure_system_heap_create",arg1);
                            if (arg2 != 0) {
                                iStack_60 = arg2;
                                uVar19 = dma_heap_add(&iStack_60);
                                if (uVar19 < 0xfffffffffffff001) {
                                    iVar8 = dma_heap_get_dev(uVar19);
                                    sym.dma_coerce_mask_and_coherent_1(iVar8);
                                    _printk(0x8000e96,"qcom_secure_system_heap_create",arg2);
                                }
                                else {
                                    _printk(0x80012a6,"qcom_secure_system_heap_create",arg2);
                                }
                            }
                            goto code_r0x080094a4;
                        }
                        sym.dynamic_page_pool_release_pools(*puVar14);
                    }
                    kfree(puVar14);
                    goto code_r0x08009488;
                }
            }
            uVar19 = 0xfffffff4;
        }
    }
code_r0x08009488:
    _printk(0x80012a6,"qcom_secure_system_heap_create",arg1,uVar19 & 0xffffffff);
code_r0x080094a4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.secure_system_heap_prefetch_work;
    pcStack_b8 = sym.secure_system_heap_prefetch_work;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    puStack_c0 = &stack0xffffffffffffffc0;
    uVar10 = _raw_spin_lock_irqsave
                       (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
    if (_obj.prefetch_list != obj.prefetch_list) {
        pcVar6 = _obj.prefetch_list;
        do {
            pcVar20 = *pcVar6;
            uVar19 = __list_del_entry_valid(pcVar6);
            if ((uVar19 & 1) != 0) {
                iVar8 = *pcVar6;
                piVar11 = *(pcVar6 + 8);
                *(iVar8 + 8) = piVar11;
                *piVar11 = iVar8;
            }
            *pcVar6 = -0x2152ffffffffff00;
            *(pcVar6 + 8) = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore
                      (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar10);
            cVar3 = pcVar6[0x20];
            piVar11 = dma_heap_get_drvdata(*(pcVar6 + 0x10));
            if (cVar3 == 0x0) {
                iVar8 = *(pcVar6 + 0x10);
                iVar2 = *(pcVar6 + 0x18);
                pppiStack_d8 = &pppiStack_d8;
                pppiStack_d0 = &pppiStack_d8;
                if (_segment.ehdr == 0) {
                    iVar12 = dma_heap_find("qcom,system");
                    if (iVar12 == 0) {
                        _printk(0x8000bca);
                    }
                    else {
                        iVar12 = dma_heap_get_drvdata();
                        _segment.ehdr = *(iVar12 + 8);
                    }
                    if (_segment.ehdr == 0) {
                        _printk(0x8000b29,"get_pages");
                        goto code_r0x080096e8;
                    }
                }
                iVar12 = _segment.ehdr;
                iVar7 = 0;
                if (iVar2 != 0) {
                    uVar19 = 9;
                    iVar21 = iVar2;
                    do {
                        puVar13 = sym.qcom_sys_heap_alloc_largest_available(iVar12,iVar21,uVar19);
                        pppiVar5 = pppiStack_d0;
                        if (puVar13 == NULL) {
                            _printk(0x8001d2e,"get_pages",iVar21,iVar2);
                            arg1_00 = 0xfffffffffffffff4;
                            ppppiVar16 = pppiStack_d8;
                            goto code_r0x08009984;
                        }
                        ppppiVar16 = puVar13 + 1;
                        uVar19 = __list_add_valid(ppppiVar16,pppiStack_d0,&pppiStack_d8);
                        if ((uVar19 & 1) != 0) {
                            puVar13[1] = &pppiStack_d8;
                            puVar13[2] = pppiVar5;
                            pppiStack_d0 = ppppiVar16;
                            *pppiVar5 = ppppiVar16;
                        }
                        if ((*puVar13 >> 0x10 & 1) == 0) {
                            uVar9 = 0;
                            if ((*puVar13 >> 0x10 & 1) == 0) goto code_r0x080097f0;
code_r0x08009778:
                            uVar19 = *(puVar13 + 0x51);
                        }
                        else {
                            uVar9 = *(puVar13 + 0x51);
                            if ((*puVar13 >> 0x10 & 1) != 0) goto code_r0x08009778;
code_r0x080097f0:
                            uVar19 = 0;
                        }
                        iVar7 = iVar7 + 1;
                        iVar21 = (-0x1000L << (uVar9 & 0x3f)) + iVar21;
                    } while (iVar21 != 0);
                }
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x10);
                if (arg1_00 == NULL) {
                    arg1_00 = 0xfffffffffffffff4;
                    ppppiVar16 = pppiStack_d8;
code_r0x08009984:
                    while (&pppiStack_d8 != ppppiVar16) {
                        if ((ppppiVar16[-1] >> 0x10 & 1) == 0) {
                            uVar15 = 0;
                        }
                        else {
                            uVar15 = *(ppppiVar16 + 0x49);
                        }
                        ppppiVar17 = *ppppiVar16;
                        __free_pages(ppppiVar16 + -1,uVar15);
                        ppppiVar16 = ppppiVar17;
                    }
                }
                else {
                    iVar7 = sg_alloc_table(arg1_00,iVar7,0xcc0);
                    if (iVar7 != 0) {
                        _printk(0x8001215,"get_pages",iVar7);
                        kfree(arg1_00);
                        arg1_00 = iVar7;
                        ppppiVar16 = pppiStack_d8;
                        goto code_r0x08009984;
                    }
                    if (&pppiStack_d8 != pppiStack_d8) {
                        puVar14 = *arg1_00;
                        ppppiVar16 = pppiStack_d8;
                        do {
                            ppppiVar17 = ppppiVar16 + -1;
                            if ((*ppppiVar17 >> 0x10 & 1) == 0) {
                                uVar19 = 0;
                            }
                            else {
                                uVar19 = *(ppppiVar16 + 0x49);
                            }
                            if ((ppppiVar17 & 3) != 0) goto code_r0x08009b3c;
                            *(puVar14 + 1) = 0;
                            *(puVar14 + 0xc) = 0x1000L << (uVar19 & 0x3f);
                            *puVar14 = *puVar14 & 3 | ppppiVar17;
                            puVar14 = sg_next();
                            ppppiVar16 = *ppppiVar16;
                        } while (&pppiStack_d8 != ppppiVar16);
                    }
                    uVar10 = dma_heap_get_dev(iVar8);
                    dma_map_sgtable(uVar10,arg1_00,0,0);
                    uVar10 = dma_heap_get_dev(iVar8);
                    dma_unmap_sg_attrs(uVar10,*arg1_00,*(arg1_00 + 0xc),0,0);
                }
                if (arg1_00 < 0xfffffffffffff001) {
                    iVar7 = sym.hyp_assign_sg_from_flags(arg1_00,piVar11[1],1);
                    if (iVar7 == 0) {
                        if (*(arg1_00 + 0xc) != 0) {
                            uVar18 = 0;
                            puVar14 = *arg1_00;
                            do {
                                puVar13 = *puVar14 & 0xfffffffffffffffc;
                                if (((*puVar13 >> 0x10 & 1) == 0) || (*(puVar13 + 0x51) != '\t')) {
                                    if (((*puVar13 >> 0x10 & 1) == 0) || (*(puVar13 + 0x51) != '\x04')) {
                                        if ((*puVar13 >> 0x10 & 1) == 0) {
                                            iVar8 = 2;
                                        }
                                        else {
                                            iVar8 = 2;
                                            if (*(puVar13 + 0x51) != '\0') {
                                                iVar8 = 3;
                                            }
                                        }
                                    }
                                    else {
                                        iVar8 = 1;
                                    }
                                }
                                else {
                                    iVar8 = 0;
                                }
                                sym.dynamic_page_pool_free(*(*piVar11 + iVar8 * 8),puVar13);
                                uVar18 = uVar18 + 1;
                                puVar14 = sg_next(puVar14);
                            } while (uVar18 < *(arg1_00 + 0xc));
                        }
                    }
                    else if (*(arg1_00 + 0xc) != 0) {
                        uVar18 = 0;
                        puVar14 = *arg1_00;
                        do {
                            puVar13 = *puVar14 & 0xfffffffffffffffc;
                            if ((*puVar13 >> 0x10 & 1) == 0) {
                                uVar15 = 0;
                            }
                            else {
                                uVar15 = *(puVar13 + 0x51);
                            }
                            __free_pages(puVar13,uVar15);
                            uVar18 = uVar18 + 1;
                            puVar14 = sg_next(puVar14);
                        } while (uVar18 < *(arg1_00 + 0xc));
                    }
                    sg_free_table(arg1_00);
                }
            }
            else {
                sym.dynamic_page_pool_shrink_high_and_low(*piVar11,3,*(pcVar6 + 0x18) >> 0xc);
            }
code_r0x080096e8:
            kfree(pcVar6);
            uVar10 = _raw_spin_lock_irqsave
                               (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
            pcVar6 = pcVar20;
        } while (pcVar20 != obj.prefetch_list);
    }
    _raw_spin_unlock_irqrestore
              (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar10);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail();
code_r0x08009b3c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x8009b40);
    (*pcVar6)();
}


// ===== sym.secure_system_heap_prefetch_work @ 0x08009638 (size 1288) =====

void sym.secure_system_heap_prefetch_work(void)

{
    int64_t iVar1;
    code cVar2;
    int64_t ***pppiVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t *arg1;
    uint64_t *puVar11;
    uchar uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t uVar15;
    int64_t ****ppppiVar16;
    int64_t ****ppppiVar17;
    code *pcVar18;
    int64_t iVar19;
    ulong unaff_x30;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar6 = _raw_spin_lock_irqsave
                      (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
    if (_obj.prefetch_list != obj.prefetch_list) {
        pcVar4 = _obj.prefetch_list;
        do {
            pcVar18 = *pcVar4;
            uVar8 = __list_del_entry_valid(pcVar4);
            if ((uVar8 & 1) != 0) {
                iVar14 = *pcVar4;
                piVar7 = *(pcVar4 + 8);
                *(iVar14 + 8) = piVar7;
                *piVar7 = iVar14;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore
                      (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar6);
            cVar2 = pcVar4[0x20];
            piVar7 = dma_heap_get_drvdata(*(pcVar4 + 0x10));
            if (cVar2 == 0x0) {
                iVar14 = *(pcVar4 + 0x10);
                iVar1 = *(pcVar4 + 0x18);
                pppiStack_78 = &pppiStack_78;
                pppiStack_70 = &pppiStack_78;
                if (_segment.ehdr == 0) {
                    iVar9 = dma_heap_find("qcom,system");
                    if (iVar9 == 0) {
                        _printk(0x8000bca);
                    }
                    else {
                        iVar9 = dma_heap_get_drvdata();
                        _segment.ehdr = *(iVar9 + 8);
                    }
                    if (_segment.ehdr == 0) {
                        _printk(0x8000b29,"get_pages");
                        goto code_r0x080096e8;
                    }
                }
                iVar9 = _segment.ehdr;
                iVar5 = 0;
                if (iVar1 != 0) {
                    uVar8 = 9;
                    iVar19 = iVar1;
                    do {
                        puVar10 = sym.qcom_sys_heap_alloc_largest_available(iVar9,iVar19,uVar8);
                        pppiVar3 = pppiStack_70;
                        if (puVar10 == NULL) {
                            _printk(0x8001d2e,"get_pages",iVar19,iVar1);
                            arg1 = 0xfffffffffffffff4;
                            ppppiVar16 = pppiStack_78;
                            goto code_r0x08009984;
                        }
                        ppppiVar16 = puVar10 + 1;
                        uVar8 = __list_add_valid(ppppiVar16,pppiStack_70,&pppiStack_78);
                        if ((uVar8 & 1) != 0) {
                            puVar10[1] = &pppiStack_78;
                            puVar10[2] = pppiVar3;
                            pppiStack_70 = ppppiVar16;
                            *pppiVar3 = ppppiVar16;
                        }
                        if ((*puVar10 >> 0x10 & 1) == 0) {
                            uVar13 = 0;
                            if ((*puVar10 >> 0x10 & 1) == 0) goto code_r0x080097f0;
code_r0x08009778:
                            uVar8 = *(puVar10 + 0x51);
                        }
                        else {
                            uVar13 = *(puVar10 + 0x51);
                            if ((*puVar10 >> 0x10 & 1) != 0) goto code_r0x08009778;
code_r0x080097f0:
                            uVar8 = 0;
                        }
                        iVar5 = iVar5 + 1;
                        iVar19 = (-0x1000L << (uVar13 & 0x3f)) + iVar19;
                    } while (iVar19 != 0);
                }
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
                if (arg1 == NULL) {
                    arg1 = 0xfffffffffffffff4;
                    ppppiVar16 = pppiStack_78;
code_r0x08009984:
                    while (&pppiStack_78 != ppppiVar16) {
                        if ((ppppiVar16[-1] >> 0x10 & 1) == 0) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = *(ppppiVar16 + 0x49);
                        }
                        ppppiVar17 = *ppppiVar16;
                        __free_pages(ppppiVar16 + -1,uVar12);
                        ppppiVar16 = ppppiVar17;
                    }
                }
                else {
                    iVar5 = sg_alloc_table(arg1,iVar5,0xcc0);
                    if (iVar5 != 0) {
                        _printk(0x8001215,"get_pages",iVar5);
                        kfree(arg1);
                        arg1 = iVar5;
                        ppppiVar16 = pppiStack_78;
                        goto code_r0x08009984;
                    }
                    if (&pppiStack_78 != pppiStack_78) {
                        puVar11 = *arg1;
                        ppppiVar16 = pppiStack_78;
                        do {
                            ppppiVar17 = ppppiVar16 + -1;
                            if ((*ppppiVar17 >> 0x10 & 1) == 0) {
                                uVar8 = 0;
                            }
                            else {
                                uVar8 = *(ppppiVar16 + 0x49);
                            }
                            if ((ppppiVar17 & 3) != 0) goto code_r0x08009b3c;
                            *(puVar11 + 1) = 0;
                            *(puVar11 + 0xc) = 0x1000L << (uVar8 & 0x3f);
                            *puVar11 = *puVar11 & 3 | ppppiVar17;
                            puVar11 = sg_next();
                            ppppiVar16 = *ppppiVar16;
                        } while (&pppiStack_78 != ppppiVar16);
                    }
                    uVar6 = dma_heap_get_dev(iVar14);
                    dma_map_sgtable(uVar6,arg1,0,0);
                    uVar6 = dma_heap_get_dev(iVar14);
                    dma_unmap_sg_attrs(uVar6,*arg1,*(arg1 + 0xc),0,0);
                }
                if (arg1 < 0xfffffffffffff001) {
                    iVar5 = sym.hyp_assign_sg_from_flags(arg1,piVar7[1],1);
                    if (iVar5 == 0) {
                        if (*(arg1 + 0xc) != 0) {
                            uVar15 = 0;
                            puVar11 = *arg1;
                            do {
                                puVar10 = *puVar11 & 0xfffffffffffffffc;
                                if (((*puVar10 >> 0x10 & 1) == 0) || (*(puVar10 + 0x51) != '\t')) {
                                    if (((*puVar10 >> 0x10 & 1) == 0) || (*(puVar10 + 0x51) != '\x04')) {
                                        if ((*puVar10 >> 0x10 & 1) == 0) {
                                            iVar14 = 2;
                                        }
                                        else {
                                            iVar14 = 2;
                                            if (*(puVar10 + 0x51) != '\0') {
                                                iVar14 = 3;
                                            }
                                        }
                                    }
                                    else {
                                        iVar14 = 1;
                                    }
                                }
                                else {
                                    iVar14 = 0;
                                }
                                sym.dynamic_page_pool_free(*(*piVar7 + iVar14 * 8),puVar10);
                                uVar15 = uVar15 + 1;
                                puVar11 = sg_next(puVar11);
                            } while (uVar15 < *(arg1 + 0xc));
                        }
                    }
                    else if (*(arg1 + 0xc) != 0) {
                        uVar15 = 0;
                        puVar11 = *arg1;
                        do {
                            puVar10 = *puVar11 & 0xfffffffffffffffc;
                            if ((*puVar10 >> 0x10 & 1) == 0) {
                                uVar12 = 0;
                            }
                            else {
                                uVar12 = *(puVar10 + 0x51);
                            }
                            __free_pages(puVar10,uVar12);
                            uVar15 = uVar15 + 1;
                            puVar11 = sg_next(puVar11);
                        } while (uVar15 < *(arg1 + 0xc));
                    }
                    sg_free_table(arg1);
                }
            }
            else {
                sym.dynamic_page_pool_shrink_high_and_low(*piVar7,3,*(pcVar4 + 0x18) >> 0xc);
            }
code_r0x080096e8:
            kfree(pcVar4);
            uVar6 = _raw_spin_lock_irqsave
                              (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt);
            pcVar4 = pcVar18;
        } while (pcVar18 != obj.prefetch_list);
    }
    _raw_spin_unlock_irqrestore
              (reloc.qcom_sg_dma_buf_begin_cpu_access_partial.a54aae6d51e276778f768246a9501da3.cfi_jt,uVar6);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08009b3c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8009b40);
    (*pcVar4)();
}


// ===== sym.system_heap_allocate_1 @ 0x08009b40 (size 1680) =====

uint64_t sym.system_heap_allocate_1(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    uint64_t *puVar3;
    int iVar4;
    uint uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *puVar10;
    uchar uVar11;
    int *piVar12;
    uint64_t uVar13;
    int64_t *extraout_x8;
    int64_t extraout_x11;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t *****pppppiVar15;
    int64_t *****pppppiVar16;
    int64_t *****pppppiVar17;
    int iVar18;
    int iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t ****ppppiStack_e8;
    int64_t ****ppppiStack_e0;
    int64_t ****ppppiStack_d8;
    int64_t ****ppppiStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t *piStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_70 = *(iVar8 + 0x5e0);
    iStack_c8 = 0;
    uStack_c0 = 0;
    uStack_f0 = 0;
    piStack_88 = *0x80022a0;
    uStack_80 = *0x80022a8;
    uStack_78 = *0x80022b0;
    uStack_a8 = *0x8002280;
    iStack_a0 = *0x8002288;
    ppppiStack_d8 = &ppppiStack_d8;
    uStack_98 = *0x8002290;
    uStack_90 = *0x8002298;
    uStack_b8 = *0x8002270;
    uStack_b0 = *0x8002278;
    ppppiStack_e8 = &ppppiStack_e8;
    ppppiStack_e0 = ppppiStack_e8;
    ppppiStack_d0 = ppppiStack_d8;
    piVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xa8);
    if (piVar6 == NULL) {
        uVar20 = 0xfffffffffffffff4;
        goto code_r0x0800a144;
    }
    piVar7 = dma_heap_get_drvdata(arg1);
    piVar6[1] = piVar6 + 1;
    piVar6[2] = piVar6 + 1;
    __mutex_init(piVar6 + 3,"&buffer->lock",obj.system_heap_allocate.__key);
    *piVar6 = arg1;
    piVar6[9] = arg2;
    *(piVar6 + 0xe) = 1;
    piVar6[0x14] = sym.__typeid__ZTSFvP14qcom_sg_bufferE_global_addr;
    if (arg2 == 0) {
        iVar18 = 0;
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        iVar18 = 0;
        uVar21 = 9;
        puVar3 = sp_el0;
        uVar20 = arg2;
        do {
            if (((*puVar3 & 1) != 0) && ((*(puVar3 + 0x829) & 1) != 0)) {
code_r0x08009ef8:
                iVar4 = 0;
code_r0x08009efc:
                iVar19 = -0xc;
                goto code_r0x0800a064;
            }
            piVar14 = *piVar7;
            if (_segment.ehdr == 0) {
                iVar8 = dma_heap_find("qcom,system");
                if (iVar8 == 0) {
                    _printk(0x8000bca);
                    if (_segment.ehdr == 0) goto code_r0x08009ea8;
                    goto code_r0x08009cb0;
                }
                iVar8 = dma_heap_get_drvdata();
                _segment.ehdr = *(iVar8 + 8);
                if (_segment.ehdr != 0) goto code_r0x08009cb0;
code_r0x08009ea8:
                iVar4 = _segment.ehdr;
                _printk(0x8000b29,"alloc_largest_available");
                goto code_r0x08009efc;
            }
code_r0x08009cb0:
            iVar8 = _segment.ehdr;
            if ((uVar20 < 0x200000) || (uVar21 < 9)) {
code_r0x08009d0c:
                if (uVar20 < 0x10000) {
code_r0x08009d80:
                    if (0xfff < uVar20) goto code_r0x08009d98;
                }
                else {
code_r0x08009d14:
                    if (uVar21 < 4) goto code_r0x08009d80;
                    uVar9 = _raw_spin_lock_irqsave(piVar14[1] + 0x40);
                    piVar12 = piVar14[1];
                    if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                        _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    }
                    else {
                        puVar10 = sym.dynamic_page_pool_remove(piVar12);
                        _raw_spin_unlock_irqrestore(piVar14[1] + 0x40,uVar9);
                        if (puVar10 != NULL) goto code_r0x08009de4;
                    }
code_r0x08009d98:
                    uVar9 = _raw_spin_lock_irqsave(piVar14[2] + 0x40);
                    piVar12 = piVar14[2];
                    if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                        _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    }
                    else {
                        puVar10 = sym.dynamic_page_pool_remove(piVar12);
                        _raw_spin_unlock_irqrestore(piVar14[2] + 0x40,uVar9);
                        if (puVar10 != NULL) goto code_r0x08009de4;
                    }
                }
                puVar10 = sym.qcom_sys_heap_alloc_largest_available(iVar8,uVar20,uVar21);
                pppppiVar15 = ppppiStack_e0;
                if (puVar10 == NULL) goto code_r0x08009ef8;
                pppppiVar16 = puVar10 + 1;
                iVar18 = iVar18 + 1;
                uVar21 = __list_add_valid(pppppiVar16,ppppiStack_e0,&ppppiStack_e8);
                if ((uVar21 & 1) != 0) {
                    pppppiVar17 = &ppppiStack_e8;
                    ppppiStack_e0 = pppppiVar16;
                    goto code_r0x08009e58;
                }
            }
            else {
                uVar9 = _raw_spin_lock_irqsave(*piVar14 + 0x40);
                piVar12 = *piVar14;
                if ((*piVar12 == 0) && (piVar12[1] == 0)) {
                    _raw_spin_unlock_irqrestore(piVar12 + 0x10,uVar9);
                    if (0xffff < uVar20) goto code_r0x08009d14;
                    goto code_r0x08009d80;
                }
                puVar10 = sym.dynamic_page_pool_remove(piVar12);
                _raw_spin_unlock_irqrestore(*piVar14 + 0x40,uVar9);
                if (puVar10 == NULL) goto code_r0x08009d0c;
code_r0x08009de4:
                pppppiVar15 = ppppiStack_d0;
                pppppiVar16 = puVar10 + 1;
                uVar21 = __list_add_valid(pppppiVar16,ppppiStack_d0,&ppppiStack_d8);
                if ((uVar21 & 1) != 0) {
                    pppppiVar17 = &ppppiStack_d8;
                    ppppiStack_d0 = pppppiVar16;
code_r0x08009e58:
                    *pppppiVar16 = pppppiVar17;
                    puVar10[2] = pppppiVar15;
                    *pppppiVar15 = pppppiVar16;
                }
            }
            if ((*puVar10 >> 0x10 & 1) == 0) {
                uVar13 = 0;
                if ((*puVar10 >> 0x10 & 1) == 0) goto code_r0x08009e88;
code_r0x08009c54:
                uVar21 = *(puVar10 + 0x51);
            }
            else {
                uVar13 = *(puVar10 + 0x51);
                if ((*puVar10 >> 0x10 & 1) != 0) goto code_r0x08009c54;
code_r0x08009e88:
                uVar21 = 0;
            }
            iVar4 = iVar4 + 1;
            uVar20 = (-0x1000L << (uVar13 & 0x3f)) + uVar20;
        } while (uVar20 != 0);
    }
    piVar14 = piVar6 + 10;
    iVar4 = sg_alloc_table(piVar14,iVar4,0xcc0);
    if (iVar4 == 0) {
        iVar8 = *piVar14;
        if (iVar18 == 0) {
            sym.page_list_merge(&ppppiStack_d8,&ppppiStack_e8,iVar8,0);
code_r0x08009f44:
            uVar5 = msm_secure_get_vmid_perms(piVar7[1]);
            uStack_f0._4_4_ = uVar5;
            uVar5 = sym.get_secure_vmid(*(piVar7 + 1));
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
            uVar20 = mem_buf_vmperm_alloc_staticvm(piVar14,&uStack_f0,&uStack_f0 + 4,1);
            piVar6[0xf] = uVar20;
            if (uVar20 < 0xfffffffffffff001) {
                uStack_b8 = dma_heap_get_name(arg1);
                iStack_a0 = piVar6[9];
                uStack_a8 = 0x80007e0;
                uStack_98 = CONCAT44(uStack_98._4_4_,arg3);
                piStack_88 = piVar6;
                uVar20 = mem_buf_dma_buf_export(&uStack_b8);
                if (uVar20 < 0xfffffffffffff001) {
                    if (iVar18 != 0) {
                        sg_free_table(&iStack_c8);
                    }
                    piVar7 = piVar7 + 4;
                    goto code_r0x0800a1b0;
                }
                mem_buf_vmperm_release(piVar6[0xf]);
            }
            iVar19 = uVar20;
            iVar4 = sym.hyp_unassign_sg_from_flags(&iStack_c8,piVar7[1],1);
            if (iVar18 != 0) {
code_r0x0800a054:
                sg_free_table(&iStack_c8);
            }
        }
        else {
            iVar4 = sg_alloc_table(&iStack_c8,iVar18,0xcc0);
            if (iVar4 == 0) {
                sym.page_list_merge(&ppppiStack_d8,&ppppiStack_e8,iVar8,iStack_c8);
                uVar9 = dma_heap_get_dev(arg1);
                dma_map_sgtable(uVar9,&iStack_c8,0,0);
                uVar9 = dma_heap_get_dev(arg1);
                dma_unmap_sg_attrs(uVar9,iStack_c8,uStack_c0._4_4_,0,0);
                iVar4 = sym.hyp_assign_sg_from_flags(&iStack_c8,piVar7[1],1);
                if (iVar4 == 0) goto code_r0x08009f44;
                iVar19 = -0xc;
                goto code_r0x0800a054;
            }
            iVar4 = 0;
            iVar19 = -0xc;
        }
        sg_free_table(piVar14);
    }
    else {
        iVar4 = 0;
        iVar19 = -0xc;
    }
code_r0x0800a064:
    pppppiVar15 = ppppiStack_e8;
    pppppiVar16 = ppppiStack_d8;
    while (ppppiStack_e8 = pppppiVar15, &ppppiStack_d8 != pppppiVar16) {
        pppppiVar15 = pppppiVar16 + -1;
        pppppiVar17 = *pppppiVar16;
        if (((*pppppiVar15 >> 0x10 & 1) == 0) || (*(pppppiVar16 + 0x49) != '\t')) {
            if (((*pppppiVar15 >> 0x10 & 1) == 0) || (*(pppppiVar16 + 0x49) != '\x04')) {
                if ((*pppppiVar15 >> 0x10 & 1) == 0) {
                    iVar8 = 2;
                }
                else {
                    iVar8 = 2;
                    if (*(pppppiVar16 + 0x49) != '\0') {
                        iVar8 = 3;
                    }
                }
            }
            else {
                iVar8 = 1;
            }
        }
        else {
            iVar8 = 0;
        }
        sym.dynamic_page_pool_free(*(*piVar7 + iVar8 * 8),pppppiVar15);
        pppppiVar15 = ppppiStack_e8;
        pppppiVar16 = pppppiVar17;
    }
    if ((iVar4 == 0) && (&ppppiStack_e8 != pppppiVar15)) {
        do {
            pppppiVar16 = pppppiVar15 + -1;
            if ((*pppppiVar16 >> 0x10 & 1) == 0) {
                uVar11 = 0;
            }
            else {
                uVar11 = *(pppppiVar15 + 0x49);
            }
            pppppiVar15 = *pppppiVar15;
            __free_pages(pppppiVar16,uVar11);
        } while (&ppppiStack_e8 != pppppiVar15);
    }
    kfree(piVar6);
    uVar20 = iVar19;
code_r0x0800a144:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_70) {
        __stack_chk_fail();
        piVar7 = extraout_x8;
        arg2 = extraout_x11;
code_r0x0800a1b0:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
                *piVar7 = *piVar7 + arg2;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
    }
    return uVar20;
}


// ===== sym.get_pool_size_bytes_1 @ 0x0800a1d0 (size 116) =====

int64_t sym.get_pool_size_bytes_1(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = dma_heap_get_drvdata();
    iVar1 = sym.dynamic_page_pool_total(**piVar4);
    iVar2 = sym.dynamic_page_pool_total(*(*piVar4 + 8));
    iVar3 = sym.dynamic_page_pool_total(*(*piVar4 + 0x10));
    return (iVar2 + iVar1 + iVar3) * 0x1000;
}


// ===== sym.system_heap_free_1 @ 0x0800a244 (size 308) =====

void sym.system_heap_free_1(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t *piVar3;
    ulong *arg2;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t *puVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = dma_heap_get_drvdata(*arg1);
    if (*(arg1 + 0x58) != 0) {
        uVar6 = 0;
        puVar5 = *(arg1 + 0x50);
        do {
            arg2 = *puVar5 & 0xfffffffffffffffc;
            if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\t')) {
                if (((*arg2 >> 0x10 & 1) == 0) || (*(arg2 + 0x51) != '\x04')) {
                    if ((*arg2 >> 0x10 & 1) == 0) {
                        iVar4 = 2;
                    }
                    else {
                        iVar4 = 2;
                        if (*(arg2 + 0x51) != '\0') {
                            iVar4 = 3;
                        }
                    }
                }
                else {
                    iVar4 = 1;
                }
            }
            else {
                iVar4 = 0;
            }
            sym.dynamic_page_pool_free(*(*piVar3 + iVar4 * 8),arg2);
            uVar6 = uVar6 + 1;
            puVar5 = sg_next(puVar5);
        } while (uVar6 < *(arg1 + 0x58));
    }
    iVar4 = *(arg1 + 0x48);
    piVar3 = piVar3 + 4;
    Hint_Prefetch(piVar3,2,0,1);
    do {
        cVar1 = '\x01';
        bVar2 = ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
            *piVar3 = *piVar3 - iVar4;
            cVar1 = ExclusiveMonitorsStatus();
        }
    } while (cVar1 != '\0');
    sg_free_table(arg1 + 0x50);
    kfree(arg1);
    return;
}


// ===== sym.page_list_merge @ 0x0800a378 (size 480) =====

void sym.page_list_merge(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *arg1 + -8;
    puVar5 = *arg2 + -8;
    do {
        if ((puVar4 + 1 == arg1) || (puVar5 + 1 == arg2)) {
            if (puVar5 + 1 != arg2) {
                if ((*puVar5 >> 0x10 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(puVar5 + 0x51);
                }
                if ((puVar5 & 3) != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800a54c);
                    (*pcVar1)();
                }
                goto code_r0x0800a4d0;
            }
            if (puVar4 + 1 != arg1) {
                if ((*puVar4 >> 0x10 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(puVar4 + 0x51);
                }
                if ((puVar4 & 3) != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800a558);
                    (*pcVar1)();
                }
                goto code_r0x0800a504;
            }
        }
        else {
            if ((*puVar5 >> 0x10 & 1) == 0) {
                uVar2 = 0;
                if ((*puVar4 >> 0x10 & 1) != 0) goto code_r0x0800a42c;
code_r0x0800a458:
                uVar3 = 0;
            }
            else {
                uVar2 = *(puVar5 + 0x51);
                if ((*puVar4 >> 0x10 & 1) == 0) goto code_r0x0800a458;
code_r0x0800a42c:
                uVar3 = *(puVar4 + 0x51);
            }
            if (0x1000L << (uVar2 & 0x3f) < 0x1000L << (uVar3 & 0x3f)) {
                if ((*puVar4 >> 0x10 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(puVar4 + 0x51);
                }
                if ((puVar4 & 3) != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800a550);
                    (*pcVar1)();
                }
code_r0x0800a504:
                *(arg3 + 8) = 0;
                *(arg3 + 0xc) = 0x1000L << (uVar2 & 0x3f);
                *arg3 = *arg3 & 3 | puVar4;
                puVar4 = puVar4[1] + -8;
            }
            else {
                if ((*puVar5 >> 0x10 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(puVar5 + 0x51);
                }
                if ((puVar5 & 3) != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800a554);
                    (*pcVar1)();
                }
code_r0x0800a4d0:
                *(arg3 + 8) = 0;
                *(arg3 + 0xc) = 0x1000L << (uVar2 & 0x3f);
                *arg3 = *arg3 & 3 | puVar5;
                if ((*puVar5 >> 0x10 & 1) == 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(puVar5 + 0x51);
                }
                *(arg4 + 8) = 0;
                *(arg4 + 0xc) = 0x1000L << (uVar2 & 0x3f);
                *arg4 = *arg4 & 3 | puVar5;
                puVar5 = puVar5[1] + -8;
                arg4 = sg_next(arg4);
            }
        }
        arg3 = sg_next(arg3);
        if (arg3 == NULL) {
            return;
        }
    } while( true );
}


// ===== sym.get_secure_vmid @ 0x0800a558 (size 236) =====

uint sym.get_secure_vmid(uint32_t arg1)

{
    uint uVar1;
    
    if ((arg1 >> 0x10 & 1) != 0) {
        return 1;
    }
    if ((arg1 >> 0x11 & 1) != 0) {
        return 8;
    }
    if ((arg1 >> 0x12 & 1) != 0) {
        return 9;
    }
    if ((arg1 >> 0x13 & 1) != 0) {
        return 10;
    }
    if ((arg1 >> 0x14 & 1) != 0) {
        return 0xb;
    }
    if ((arg1 >> 0x15 & 1) != 0) {
        return 0xd;
    }
    if ((arg1 >> 0x19 & 1) != 0) {
        return 0x11;
    }
    if ((arg1 >> 0x1a & 1) == 0) {
        if ((arg1 >> 0x1b & 1) != 0) {
            return 0x1d;
        }
        if ((arg1 >> 0x17 & 1) != 0) {
            return 0x1a;
        }
        if ((arg1 >> 0x18 & 1) != 0) {
            return 0x22;
        }
        if ((arg1 >> 0x1e & 1) == 0) {
            if ((arg1 >> 0x1d & 1) == 0) {
                uVar1 = 0xffffffea;
                if ((arg1 & 0x10000000) != 0) {
                    uVar1 = 0xf;
                }
                return uVar1;
            }
            return 0x2a;
        }
        return 0x24;
    }
    return 0x12;
}


// ===== sym.qcom_is_buffer_hlos_accessible @ 0x0800a644 (size 24) =====

bool sym.qcom_is_buffer_hlos_accessible(uint32_t arg1)

{
    return (arg1 & 0x40400000) != 0;
}


// ===== sym.hyp_unassign_sg_from_flags @ 0x0800a65c (size 332) =====

uint sym.hyp_unassign_sg_from_flags(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint32_t arg2_00;
    uint uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    uVar9 = arg2 & 0x7fff8000;
    arg2_00 = __sw_hweight64(uVar9);
    if ((arg2_00 >> 0x3e == 0) && (iVar4 = __kmalloc(arg2_00 << 2,0xdc0), iVar4 != 0)) {
        if (uVar9 == 0) {
code_r0x0800a78c:
            _printk(0x8000d2d,"hyp_unassign_sg_from_flags");
            uVar3 = 0xffffffea;
        }
        else {
            uVar6 = (arg2 & 0x2aaa8000U) >> 1 | (arg2 & 0x55550000U) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar6 & 0xff00ff00ff00ff00) >> 8;
            uVar6 = LZCOUNT(((uVar8 & 0xffff0000ffff0000 | (uVar6 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                            (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
            uVar5 = arg2_00;
            do {
                uVar5 = uVar5 - 1;
                uVar8 = uVar6 - 0x10;
                if ((uVar8 < 0xf) && ((0x6fbfU >> (uVar8 & 0x1f) & 1) != 0)) {
                    uVar7 = *(uVar8 * 4 + 0x8002388);
                }
                else {
                    uVar7 = 0xf;
                    if (uVar6 != 0x1c) {
                        uVar7 = 0xffffffea;
                    }
                }
                if (0x7fffffff < uVar7 && uVar6 == 0x16) {
                    uVar7 = 3;
                }
                if ((uVar7 < 0) || (uVar5 == 0xffffffff)) goto code_r0x0800a78c;
                *(iVar4 + uVar5 * 4) = uVar7;
                uVar8 = -1L << (uVar6 + 1 & 0x3f) & uVar9;
                uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
                uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar2 = (uVar8 & 0xff00ff00ff00ff00) >> 8;
                bVar1 = uVar6 < 0x3f;
                uVar6 = 0x40;
                if (bVar1) {
                    uVar6 = LZCOUNT(((uVar2 & 0xffff0000ffff0000 | (uVar8 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                                    (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
                }
            } while (uVar6 >> 6 == 0);
            uVar3 = sym.hyp_unassign_sg(arg1,noname_1,arg2_00,arg3 & 1);
        }
        kfree(iVar4);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym.hyp_unassign_sg @ 0x0800a7a8 (size 280) =====

void sym.hyp_unassign_sg(int64_t arg1,uchar noname_1 [16],uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint64_t *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    if (arg2 < 1) {
        _printk(0x8001a00,"hyp_unassign_sg");
        uVar5 = 0xffffffea;
        goto code_r0x0800a858;
    }
    unaff_x20 = arg3 & 0xffffffff;
    uVar5 = hyp_assign_table();
    unaff_x19 = arg1;
    if (uVar5 != 0) goto code_r0x0800a858;
    if ((arg3 & 1U) == 0) goto code_r0x0800a858;
    if (*(arg1 + 8) == 0) goto code_r0x0800a854;
    unaff_x20 = 0;
    puVar6 = *arg1;
    unaff_x21 = 0x2000;
    do {
        puVar6 = *puVar6 & 0xfffffffffffffffc;
        while( true ) {
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar3) {
                    *puVar6 = *puVar6 & (unaff_x21 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uVar1 = unaff_x20 + 1;
            unaff_x20 = uVar1;
            puVar6 = sg_next();
            if (uVar1 < *(unaff_x19 + 8)) break;
code_r0x0800a854:
            uVar5 = 0;
code_r0x0800a858:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iVar7) {
                return;
            }
            __stack_chk_fail(uVar5);
            puVar6 = extraout_x8;
        }
    } while( true );
}


// ===== sym.hyp_assign_sg_from_flags @ 0x0800a8c0 (size 332) =====

uint sym.hyp_assign_sg_from_flags(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint32_t arg3_00;
    uint uVar3;
    int64_t arg2_00;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = arg2 & 0x7fff8000;
    arg3_00 = __sw_hweight64(uVar8);
    if ((arg3_00 >> 0x3e == 0) && (arg2_00 = __kmalloc(arg3_00 << 2,0xdc0), arg2_00 != 0)) {
        if (uVar8 == 0) {
code_r0x0800a9f0:
            _printk(0x8001c64,"hyp_assign_sg_from_flags");
            uVar3 = 0xffffffea;
        }
        else {
            uVar5 = (arg2 & 0x2aaa8000U) >> 1 | (arg2 & 0x55550000U) << 1;
            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar5 & 0xff00ff00ff00ff00) >> 8;
            uVar5 = LZCOUNT(((uVar7 & 0xffff0000ffff0000 | (uVar5 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                            (uVar7 & 0xffff0000ffff) << 0x10) << 0x20);
            uVar4 = arg3_00;
            do {
                uVar4 = uVar4 - 1;
                uVar7 = uVar5 - 0x10;
                if ((uVar7 < 0xf) && ((0x6fbfU >> (uVar7 & 0x1f) & 1) != 0)) {
                    uVar6 = *(uVar7 * 4 + 0x8002388);
                }
                else {
                    uVar6 = 0xf;
                    if (uVar5 != 0x1c) {
                        uVar6 = 0xffffffea;
                    }
                }
                if (0x7fffffff < uVar6 && uVar5 == 0x16) {
                    uVar6 = 3;
                }
                if ((uVar6 < 0) || (uVar4 == 0xffffffff)) goto code_r0x0800a9f0;
                *(arg2_00 + uVar4 * 4) = uVar6;
                uVar7 = -1L << (uVar5 + 1 & 0x3f) & uVar8;
                uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
                uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
                uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar2 = (uVar7 & 0xff00ff00ff00ff00) >> 8;
                bVar1 = uVar5 < 0x3f;
                uVar5 = 0x40;
                if (bVar1) {
                    uVar5 = LZCOUNT(((uVar2 & 0xffff0000ffff0000 | (uVar7 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                                    (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
                }
            } while (uVar5 >> 6 == 0);
            uVar3 = sym.hyp_assign_sg(arg1,arg2_00,arg3_00,arg3 & 1);
        }
        kfree(arg2_00);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym.hyp_assign_sg @ 0x0800aa0c (size 404) =====

int sym.hyp_assign_sg(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    uint64_t unaff_x22;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_5c = 3;
    if (arg3 < 1) {
        _printk(0x8000ca8,"hyp_assign_sg");
        iVar5 = -0x16;
    }
    else {
        unaff_x22 = arg4 & 0xffffffff;
        iVar6 = __kmalloc(arg3 * 4,0xdc0);
        if (iVar6 != 0) {
            iVar8 = 0;
            do {
                uVar4 = msm_secure_get_vmid_perms(*(arg2 + iVar8));
                *(iVar6 + iVar8) = uVar4;
                iVar8 = iVar8 + 4;
            } while (arg3 * 4 - iVar8 != 0);
            iVar5 = hyp_assign_table(arg1,&uStack_5c,1,arg2,iVar6,arg3);
            if (iVar5 == 0) {
                if ((arg4 & 1U) == 0) goto code_r0x0800ab40;
                if (*(arg1 + 8) == 0) goto code_r0x0800ab40;
                unaff_x22 = 0;
                puVar7 = *arg1;
                goto code_r0x0800aacc;
            }
            _printk(0x8001115,"hyp_assign_sg");
            goto code_r0x0800ab40;
        }
        iVar5 = -0xc;
        unaff_x19 = arg1;
    }
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        puVar7 = extraout_x8;
        arg1 = unaff_x19;
        iVar6 = unaff_x20;
        while( true ) {
            Hint_Prefetch(puVar7,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar7,0x10);
                if (bVar3) {
                    *puVar7 = *puVar7 | 0x2000;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            uVar1 = unaff_x22 + 1;
            unaff_x22 = uVar1;
            puVar7 = sg_next();
            if (*(arg1 + 8) <= uVar1) break;
code_r0x0800aacc:
            puVar7 = *puVar7 & 0xfffffffffffffffc;
        }
code_r0x0800ab40:
        kfree(iVar6);
        unaff_x19 = arg1;
        unaff_x20 = iVar6;
    }
    return iVar5;
}


// ===== sym.get_vmperm_from_ion_flags @ 0x0800aba0 (size 444) =====

ulong sym.get_vmperm_from_ion_flags(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    ulong uVar5;
    uint *puVar6;
    uint *puVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    uint *puVar12;
    uint64_t uVar13;
    uint *puVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = 0xffffffea;
    if (((arg2 != 0) && (arg3 != 0)) && (arg4 != 0)) {
        uVar3 = __sw_hweight64(arg1);
        uVar13 = uVar3;
        puVar6 = __kmalloc(uVar13 << 2,0xdc0);
        if (puVar6 == NULL) {
            uVar5 = 0xfffffff4;
        }
        else {
            puVar7 = __kmalloc(uVar13 << 2,0xdc0);
            if (puVar7 == NULL) {
                kfree(puVar6);
                uVar5 = 0xfffffff4;
            }
            else if (((arg1 & 0xffffffff80007fffU) == 0) && ((arg1 & 0x7fff8000U) != 0)) {
                uVar10 = (arg1 & 0x2aaa8000U) >> 1 | (arg1 & 0x55550000U) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar8 = (uVar10 & 0xff00ff00ff00ff00) >> 8;
                uVar10 = LZCOUNT(((uVar8 & 0xffff0000ffff0000 | (uVar10 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                                 (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
                uVar9 = uVar3;
                do {
                    uVar9 = uVar9 - 1;
                    uVar8 = uVar10 - 0x10;
                    if ((uVar8 < 0xf) && ((0x6fbfU >> (uVar8 & 0x1f) & 1) != 0)) {
                        uVar11 = *(uVar8 * 4 + 0x8002388);
                    }
                    else {
                        uVar11 = 0xf;
                        if (uVar10 != 0x1c) {
                            uVar11 = 0xffffffea;
                        }
                    }
                    if (0x7fffffff < uVar11 && uVar10 == 0x16) {
                        uVar11 = 3;
                    }
                    if ((uVar11 < 0) || (uVar9 == 0xffffffff)) goto code_r0x0800ad0c;
                    puVar6[uVar9] = uVar11;
                    uVar8 = -1L << (uVar10 + 1 & 0x3f) & arg1 & 0x7fff8000U;
                    uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar2 = (uVar8 & 0xff00ff00ff00ff00) >> 8;
                    bVar1 = uVar10 < 0x3f;
                    uVar10 = 0x40;
                    if (bVar1) {
                        uVar10 = LZCOUNT(((uVar2 & 0xffff0000ffff0000 | (uVar8 & 0xff00ff00ff00ff) << 8) >> 0x10 |
                                         (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
                    }
                } while (uVar10 >> 6 == 0);
                puVar12 = puVar6;
                puVar14 = puVar7;
                if (uVar3 != 0) {
                    do {
                        uVar4 = msm_secure_get_vmid_perms(*puVar12);
                        uVar13 = uVar13 - 1;
                        *puVar14 = uVar4;
                        puVar12 = puVar12 + 1;
                        puVar14 = puVar14 + 1;
                    } while (uVar13 != 0);
                }
                uVar5 = 0;
                *arg2 = puVar6;
                *arg3 = puVar7;
                *arg4 = uVar3;
            }
            else {
code_r0x0800ad0c:
                _printk(0x8001812,"get_vmperm_from_ion_flags",arg1);
                kfree(puVar7);
                kfree(puVar6);
                uVar5 = 0xffffffea;
            }
        }
    }
    return uVar5;
}


// ===== sym.hyp_assign_from_flags @ 0x0800ad5c (size 228) =====

uint64_t sym.hyp_assign_from_flags(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint uVar13;
    uint64_t *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    int64_t *piStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    puVar7 = &uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 3;
    uStack_4c = 0;
    uVar4 = sym.get_vmperm_from_ion_flags(arg3,&uStack_40,puVar7,&uStack_4c);
    uVar13 = SUB84(puVar7,0);
    if (uVar4 == 0) {
        uVar13 = &uStack_50;
        uVar4 = hyp_assign_phys(arg1,arg2,&uStack_50,1,uStack_40,uStack_48,uStack_4c);
        if (uVar4 != 0) {
            _printk(0x8000c56,"hyp_assign_from_flags");
            uVar13 = arg3;
        }
        kfree(uStack_48);
        kfree(uStack_40);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._0_8_;
    *extraout_x18 = sym.cma_heap_allocate;
    pcStack_a8 = sym.cma_heap_allocate;
    iVar10 = sp_el0;
    iStack_b8 = *(iVar10 + 0x5e0);
    uVar16 = auVar18._8_8_ + 0xfff;
    uVar15 = uVar16 & 0xfffffffffffff000;
    piStack_d0 = *0x80023f8;
    uStack_c8 = *0x8002400;
    uStack_c0 = *0x8002408;
    uStack_f0 = *0x80023d8;
    iStack_e8 = *0x80023e0;
    uVar4 = 0;
    if (uVar15 - 1 != 0xfff) {
        uVar4 = 0x40 - LZCOUNT(uVar15 - 1 >> 0xc);
    }
    uStack_e0 = *0x80023e8;
    uStack_d8 = *0x80023f0;
    uStack_100 = *0x80023c8;
    uStack_f8 = *0x80023d0;
    puStack_b0 = &stack0xffffffffffffffd0;
    puVar7 = dma_heap_get_drvdata();
    piVar8 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xb8);
    if (piVar8 == NULL) {
        uVar17 = 0xfffffffffffffff4;
    }
    else {
        uVar2 = *(puVar7 + 1);
        piVar8[2] = iVar6;
        uVar16 = uVar16 >> 0xc;
        piVar8[3] = piVar8 + 3;
        piVar8[4] = piVar8 + 3;
        __mutex_init(piVar8 + 5,"&helper_buffer->lock",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
        piVar8[0xb] = uVar15;
        *(piVar8 + 0x10) = *(puVar7 + 0xc);
        piVar8[0x16] = sym.cma_heap_free.e86ca08319bdddedc18780f65907e989.cfi_jt;
        if (*(puVar7 + 0xd) == '\0') {
            if (uVar4 <= uVar2) {
                uVar2 = uVar4;
            }
            uVar11 = cma_alloc(*puVar7,uVar16,uVar2,0);
            if (uVar11 != 0) {
                memset((uVar11 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,0,uVar15);
                goto code_r0x0800b018;
            }
code_r0x0800b148:
            iVar5 = -0xc;
        }
        else {
            uVar9 = dma_heap_get_dev(iVar6);
            iVar5 = dma_set_mask(uVar9,0xffffffffffffffff);
            if (iVar5 == 0) {
                dma_set_coherent_mask(uVar9,0xffffffffffffffff);
            }
            iVar10 = dma_alloc_attrs(uVar9,uVar15,piVar8 + 1,0xcc0,4);
            *piVar8 = iVar10;
            if (iVar10 == 0) {
                _dev_err(uVar9,"failed to allocate buffer\n");
                goto code_r0x0800b148;
            }
            uVar11 = ((piVar8[1] >> 6 & 0x3ffffffffffffc0) + (_delayed_work_timer_fn >> 0xc) * -0x40) - 0x200000000;
code_r0x0800b018:
            piVar1 = piVar8 + 0xc;
            iVar5 = sg_alloc_table(piVar1,1,0xcc0);
            if (iVar5 == 0) {
                if ((uVar11 & 3) != 0) goto code_r0x0800b19c;
                puVar14 = *piVar1;
                *(puVar14 + 1) = 0;
                *(puVar14 + 0xc) = uVar15;
                *puVar14 = *puVar14 & 3 | uVar11;
                uVar12 = mem_buf_vmperm_alloc(piVar1);
                uVar17 = 0;
                piVar8[0x11] = uVar12;
                if (uVar12 < 0xfffffffffffff001) {
                    if ((piVar8[0x10] != '\0') && (*(puVar7 + 0xd) == '\0')) {
                        uVar9 = dma_heap_get_dev(iVar6);
                        dma_map_sgtable(uVar9,piVar1,0,0);
                        uVar9 = dma_heap_get_dev(iVar6);
                        dma_unmap_sg_attrs(uVar9,piVar8[0xc],*(piVar8 + 0x6c),0,0);
                    }
                    uStack_100 = dma_heap_get_name(iVar6);
                    iStack_e8 = piVar8[0xb];
                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar13);
                    piStack_d0 = piVar8 + 2;
                    uVar17 = mem_buf_dma_buf_export
                                       (&uStack_100,reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt
                                       );
                    if (uVar17 < 0xfffffffffffff001) goto code_r0x0800b158;
                    mem_buf_vmperm_release(piVar8[0x11]);
                }
                iVar5 = uVar17;
                sg_free_table(piVar1);
                iVar10 = *piVar8;
            }
            else {
                iVar10 = *piVar8;
            }
            if (iVar10 == 0) {
                cma_release(*puVar7,uVar11,uVar16);
            }
            else {
                uVar9 = dma_heap_get_dev(iVar6);
                dma_free_attrs(uVar9,uVar15,*piVar8,piVar8[1],0);
            }
        }
        kfree(piVar8);
        uVar17 = iVar5;
    }
code_r0x0800b158:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_b8) {
        return uVar17;
    }
    __stack_chk_fail();
code_r0x0800b19c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x800b1a0);
    (*pcVar3)();
}


// ===== sym.cma_heap_allocate @ 0x0800ae40 (size 864) =====

uint64_t sym.cma_heap_allocate(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uVar13 = arg2 + 0xfffU & 0xfffffffffffff000;
    piStack_80 = *0x80023f8;
    uStack_78 = *0x8002400;
    uStack_70 = *0x8002408;
    uStack_a0 = *0x80023d8;
    iStack_98 = *0x80023e0;
    uVar2 = 0;
    if (uVar13 - 1 != 0xfff) {
        uVar2 = 0x40 - LZCOUNT(uVar13 - 1 >> 0xc);
    }
    uStack_90 = *0x80023e8;
    uStack_88 = *0x80023f0;
    uStack_b0 = *0x80023c8;
    uStack_a8 = *0x80023d0;
    puVar6 = dma_heap_get_drvdata();
    piVar7 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xb8);
    if (piVar7 == NULL) {
        uVar15 = 0xfffffffffffffff4;
    }
    else {
        uVar3 = *(puVar6 + 1);
        piVar7[2] = arg1;
        uVar14 = arg2 + 0xfffU >> 0xc;
        piVar7[3] = piVar7 + 3;
        piVar7[4] = piVar7 + 3;
        __mutex_init(piVar7 + 5,"&helper_buffer->lock",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
        piVar7[0xb] = uVar13;
        *(piVar7 + 0x10) = *(puVar6 + 0xc);
        piVar7[0x16] = sym.cma_heap_free.e86ca08319bdddedc18780f65907e989.cfi_jt;
        if (*(puVar6 + 0xd) == '\0') {
            if (uVar2 <= uVar3) {
                uVar3 = uVar2;
            }
            uVar10 = cma_alloc(*puVar6,uVar14,uVar3,0);
            if (uVar10 != 0) {
                memset((uVar10 & 0x3ffffffffffc0) << 6 | 0xff00000000000000,0,uVar13);
                goto code_r0x0800b018;
            }
code_r0x0800b148:
            iVar5 = -0xc;
        }
        else {
            uVar8 = dma_heap_get_dev(arg1);
            iVar5 = dma_set_mask(uVar8,0xffffffffffffffff);
            if (iVar5 == 0) {
                dma_set_coherent_mask(uVar8,0xffffffffffffffff);
            }
            iVar9 = dma_alloc_attrs(uVar8,uVar13,piVar7 + 1,0xcc0,4);
            *piVar7 = iVar9;
            if (iVar9 == 0) {
                _dev_err(uVar8,"failed to allocate buffer\n");
                goto code_r0x0800b148;
            }
            uVar10 = ((piVar7[1] >> 6 & 0x3ffffffffffffc0) + (_delayed_work_timer_fn >> 0xc) * -0x40) - 0x200000000;
code_r0x0800b018:
            piVar1 = piVar7 + 0xc;
            iVar5 = sg_alloc_table(piVar1,1,0xcc0);
            if (iVar5 == 0) {
                if ((uVar10 & 3) != 0) goto code_r0x0800b19c;
                puVar12 = *piVar1;
                *(puVar12 + 1) = 0;
                *(puVar12 + 0xc) = uVar13;
                *puVar12 = *puVar12 & 3 | uVar10;
                uVar11 = mem_buf_vmperm_alloc(piVar1);
                uVar15 = 0;
                piVar7[0x11] = uVar11;
                if (uVar11 < 0xfffffffffffff001) {
                    if ((piVar7[0x10] != '\0') && (*(puVar6 + 0xd) == '\0')) {
                        uVar8 = dma_heap_get_dev(arg1);
                        dma_map_sgtable(uVar8,piVar1,0,0);
                        uVar8 = dma_heap_get_dev(arg1);
                        dma_unmap_sg_attrs(uVar8,piVar7[0xc],*(piVar7 + 0x6c),0,0);
                    }
                    uStack_b0 = dma_heap_get_name(arg1);
                    iStack_98 = piVar7[0xb];
                    uStack_90 = CONCAT44(uStack_90._4_4_,arg3);
                    piStack_80 = piVar7 + 2;
                    uVar15 = mem_buf_dma_buf_export
                                       (&uStack_b0,reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt)
                    ;
                    if (uVar15 < 0xfffffffffffff001) goto code_r0x0800b158;
                    mem_buf_vmperm_release(piVar7[0x11]);
                }
                iVar5 = uVar15;
                sg_free_table(piVar1);
                iVar9 = *piVar7;
            }
            else {
                iVar9 = *piVar7;
            }
            if (iVar9 == 0) {
                cma_release(*puVar6,uVar10,uVar14);
            }
            else {
                uVar8 = dma_heap_get_dev(arg1);
                dma_free_attrs(uVar8,uVar13,*piVar7,piVar7[1],0);
            }
        }
        kfree(piVar7);
        uVar15 = iVar5;
    }
code_r0x0800b158:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar15;
    }
    __stack_chk_fail();
code_r0x0800b19c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x800b1a0);
    (*pcVar4)();
}


// ===== sym.cma_heap_free @ 0x0800b1a0 (size 140) =====

void sym.cma_heap_free(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = dma_heap_get_drvdata(*arg1);
    if (*(arg1 + -0x10) == 0) {
        cma_release(*puVar1,**(arg1 + 0x50) & 0xfffffffffffffffc,*(arg1 + 0x48) >> 0xc);
    }
    else {
        uVar2 = dma_heap_get_dev(*arg1);
        dma_free_attrs(uVar2,*(arg1 + 0x48) + 0xfffU & 0xfffffffffffff000,*(arg1 + -0x10),*(arg1 + -8),0);
    }
    sg_free_table(arg1 + 0x50);
    kfree(arg1 + -0x10);
    return;
}


// ===== sym.qcom_add_cma_heap @ 0x0800b22c (size 432) =====

uint64_t sym.qcom_add_cma_heap(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t in_x3;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x21;
    int64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint64_t uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    ulong *puStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    code *pcStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar7 = 0x10;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0);
    if (puVar3 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        uStack_50 = *(arg1 + 8);
        uVar8 = *(*(arg1 + 0x20) + 0x2e0);
        iVar2 = 8;
        if (*(arg1 + 0x30) != 0) {
            iVar2 = *(arg1 + 0x30);
        }
        *(puVar3 + 0xc) = *(arg1 + 0x28);
        *puVar3 = uVar8;
        *(puVar3 + 1) = iVar2;
        pcStack_48 = reloc.cma_heap_allocate.cfi_jt;
        puStack_40 = puVar3;
        uVar4 = dma_heap_add(&uStack_50);
        unaff_x21 = puVar3;
        if (uVar4 < 0xfffffffffffff001) {
            if (*(puVar3 + 0xc) != '\0') {
                unaff_x22 = dma_heap_get_dev(uVar4);
                *(unaff_x22 + 0x2a0) = unaff_x22 + 0x2a8;
                iVar2 = dma_set_mask(unaff_x22,0xffffffffffffffff);
                if (iVar2 == 0) {
                    dma_set_coherent_mask(unaff_x22,0xffffffffffffffff);
                }
            }
            uVar7 = 0;
            iVar5 = of_parse_phandle(*(*(arg1 + 0x20) + 0x2f0),"memory-region");
            if (iVar5 == 0) {
                uVar4 = 0;
                *(puVar3 + 0xd) = 0;
            }
            else {
                uVar7 = 0;
                iVar5 = of_find_property(iVar5,"no-map");
                *(puVar3 + 0xd) = iVar5 != 0;
                if ((iVar5 == 0) || (iVar5 = dma_heap_get_dev(uVar4), *(iVar5 + 0x2d8) != 0)) {
                    uVar4 = 0;
                }
                else {
                    arg1 = *(*(arg1 + 0x20) + 0x2d8);
                    iVar5 = dma_heap_get_dev(uVar4);
                    uVar4 = 0;
                    *(iVar5 + 0x2d8) = arg1;
                }
            }
        }
        else {
            kfree(puVar3);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4 & 0xffffffff;
    }
    auVar9 = __stack_chk_fail();
    uVar6 = auVar9._8_8_;
    *extraout_x18 = sym.pages_sync_for_device;
    pcStack_78 = sym.pages_sync_for_device;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    iStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    iStack_a0 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = unaff_x22;
    puStack_68 = unaff_x21;
    uStack_60 = uVar4;
    iStack_58 = arg1;
    sg_init_table(&uStack_a8,1);
    if ((uVar6 & 3) == 0) {
        uStack_a8 = uStack_a8 & 3 | uVar6;
        iStack_a0 = uVar7 << 0x20;
        iStack_98 = (uVar6 + (_delayed_work_timer_fn >> 0xc) * 0x40) * 0x40 + 0x8000000000;
        uVar4 = dma_sync_sg_for_device(auVar9._0_8_,&uStack_a8,1,in_x3 & 0xffffffff);
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_88) {
            return uVar4;
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800b4ac);
    (*pcVar1)();
}


// ===== sym.pages_sync_for_device @ 0x0800b3dc (size 208) =====

void sym.pages_sync_for_device(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    iStack_50 = 0;
    sg_init_table(&uStack_58,1);
    if ((arg2 & 3U) == 0) {
        uStack_58 = uStack_58 & 3 | arg2;
        iStack_50 = arg3 << 0x20;
        iStack_48 = (arg2 + (_delayed_work_timer_fn >> 0xc) * 0x40) * 0x40 + 0x8000000000;
        dma_sync_sg_for_device(arg1,&uStack_58,1,arg4 & 0xffffffff);
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800b4ac);
    (*pcVar2)();
}


// ===== sym.carveout_setup_vmperm @ 0x0800b4ac (size 192) =====

uint64_t sym.carveout_setup_vmperm(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uchar uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t *arg2_00;
    uint64_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_90;
    code *pcStack_88;
    uint64_t *puStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_3c = 0;
    if (*(arg1 + 0x58) == '\0') {
        uVar9 = mem_buf_vmperm_alloc(arg2);
    }
    else {
        iVar3 = sym.get_vmperm_from_ion_flags(*(arg1 + -8),&uStack_30,&uStack_38,&uStack_3c);
        if (iVar3 == 0) {
            uVar9 = mem_buf_vmperm_alloc_staticvm(arg2,uStack_30,uStack_38,uStack_3c);
            kfree(uStack_30);
            kfree(uStack_38);
        }
        else {
            uVar9 = iVar3;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar9;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_carveout_heap_create;
    pcStack_68 = sym.qcom_carveout_heap_create;
    iVar10 = sp_el0;
    iStack_78 = *(iVar10 + 0x5e0);
    uVar9 = 0;
    pcStack_88 = NULL;
    puStack_80 = NULL;
    uStack_90 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    arg2_00 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0);
    if (arg2_00 == NULL) {
        uVar6 = 0xfffffff4;
    }
    else {
        uVar9 = *(iVar5 + 0x29) == '\0';
        uVar6 = sym.__carveout_heap_init(iVar5,arg2_00,uVar9);
        uVar11 = uVar6 & 0xffffffff;
        if (uVar6 == 0) {
            uVar2 = *(iVar5 + 0x29);
            uStack_90 = *(iVar5 + 8);
            *(arg2_00 + 0xb) = 0;
            *(arg2_00 + 0x59) = uVar2;
            pcStack_88 = reloc.carveout_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt;
            puStack_80 = arg2_00;
            uVar11 = dma_heap_add(&uStack_90);
            uVar6 = 0;
            *arg2_00 = uVar11;
            if (uVar11 < 0xfffffffffffff001) goto code_r0x0800b64c;
            down_write(arg2_00 + 1);
            if (arg2_00[9] != 0) {
                gen_pool_destroy();
            }
            up_write(arg2_00 + 1);
        }
        kfree(arg2_00);
        uVar6 = uVar11 & 0xffffffff;
    }
code_r0x0800b64c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_78) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail(uVar6);
    iVar7 = auVar13._8_8_;
    iVar5 = auVar13._0_8_;
    *extraout_x18_00 = sym.__carveout_heap_init;
    uVar6 = _delayed_work_timer_fn;
    pcStack_d8 = sym.__carveout_heap_init;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    uVar12 = *(iVar5 + 0x20);
    *(iVar7 + 0x50) = uVar12;
    uVar11 = *(iVar5 + 0x10);
    iVar10 = *(iVar5 + 0x18);
    uVar6 = ((uVar11 >> 6 & 0x3ffffffffffffc0) + (uVar6 >> 0xc) * -0x40) - 0x200000000;
    ppuStack_e0 = &puStack_70;
    if ((uVar9 & 1) == 0) {
code_r0x0800b798:
        iVar5 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar5 = 0x68000000000f0b;
        }
        uVar4 = sym.carveout_pages_zero(uVar6,iVar10,iVar5);
        uVar9 = uVar4;
        if (uVar4 == 0) {
            iVar5 = gen_pool_create(0xc,0xffffffff);
            *(iVar7 + 0x48) = iVar5;
            if (iVar5 == 0) {
                uVar9 = 0xfffffff4;
            }
            else {
                *(iVar7 + 0x60) = uVar11;
                *(iVar7 + 0x68) = iVar10;
                gen_pool_add_owner(iVar5,uVar11,0xffffffffffffffff,iVar10,0xffffffff,0);
                uVar9 = 0;
            }
        }
    }
    else {
        if (((uVar11 >> 0x30 == 0) && (___kmalloc != 0)) &&
           (iVar5 = *(___kmalloc + (uVar11 >> 0x1f & 0x1fffffff8)), iVar5 != 0)) {
            uVar9 = uVar11 >> 0x1b & 0x7f;
            puVar1 = iVar5 + uVar9 * 0x20;
            if (((puVar1 != NULL) && (uVar4 = *puVar1, (uVar4 >> 1 & 1) != 0)) &&
               (((uVar4 >> 3 & 1) != 0 || ((**(iVar5 + uVar9 * 0x20 + 8) >> (uVar11 >> 0x15 & 0x3f) & 1) != 0)))) {
                iStack_f8 = 0;
                uStack_f0 = 0;
                uStack_108 = 0;
                iStack_100 = 0;
                sg_init_table(&uStack_108,1);
                iStack_100 = iVar10 << 0x20;
                uStack_108 = uStack_108 & 3 | uVar6;
                iStack_f8 = (uVar6 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                dma_sync_sg_for_device(uVar12,&uStack_108,1,0);
                goto code_r0x0800b798;
            }
        }
        uVar9 = 0xffffffea;
    }
    __init_rwsem(iVar7 + 8,"&carveout_heap->mem_sem",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar9;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.qcom_secure_carveout_heap_freeze;
    pcVar8 = _obj.secure_carveout_heaps;
    while( true ) {
        if (pcVar8 == obj.secure_carveout_heaps) {
            return 0;
        }
        iVar10 = *(pcVar8 + 0x10);
        if (iVar10 != 0) break;
        pcVar8 = *pcVar8;
    }
    uVar12 = dma_heap_get_name(*(pcVar8 + -0x70));
    _printk(0x8001a1d,"qcom_secure_carveout_heap_freeze",uVar12,iVar10);
    return 0xfffffff0;
}


// ===== sym.qcom_carveout_heap_create @ 0x0800b56c (size 276) =====

uint64_t sym.qcom_carveout_heap_create(int64_t arg1)

{
    ulong *puVar1;
    uchar uVar2;
    uint32_t uVar3;
    uint64_t *arg2;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint64_t uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_50;
    code *pcStack_48;
    uint64_t *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uVar6 = 0;
    pcStack_48 = NULL;
    puStack_40 = NULL;
    uStack_50 = 0;
    arg2 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0);
    if (arg2 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        uVar6 = *(arg1 + 0x29) == '\0';
        uVar4 = sym.__carveout_heap_init(arg1,arg2,uVar6);
        uVar10 = uVar4 & 0xffffffff;
        if (uVar4 == 0) {
            uVar2 = *(arg1 + 0x29);
            uStack_50 = *(arg1 + 8);
            *(arg2 + 0xb) = 0;
            *(arg2 + 0x59) = uVar2;
            pcStack_48 = reloc.carveout_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt;
            puStack_40 = arg2;
            uVar10 = dma_heap_add(&uStack_50);
            uVar4 = 0;
            *arg2 = uVar10;
            if (uVar10 < 0xfffffffffffff001) goto code_r0x0800b64c;
            down_write(arg2 + 1);
            if (arg2[9] != 0) {
                gen_pool_destroy();
            }
            up_write(arg2 + 1);
        }
        kfree(arg2);
        uVar4 = uVar10 & 0xffffffff;
    }
code_r0x0800b64c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar12 = __stack_chk_fail(uVar4);
    iVar5 = auVar12._8_8_;
    iVar7 = auVar12._0_8_;
    *extraout_x18 = sym.__carveout_heap_init;
    uVar4 = _delayed_work_timer_fn;
    pcStack_98 = sym.__carveout_heap_init;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uVar11 = *(iVar7 + 0x20);
    *(iVar5 + 0x50) = uVar11;
    uVar10 = *(iVar7 + 0x10);
    iVar9 = *(iVar7 + 0x18);
    uVar4 = ((uVar10 >> 6 & 0x3ffffffffffffc0) + (uVar4 >> 0xc) * -0x40) - 0x200000000;
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((uVar6 & 1) == 0) {
code_r0x0800b798:
        iVar7 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar7 = 0x68000000000f0b;
        }
        uVar3 = sym.carveout_pages_zero(uVar4,iVar9,iVar7);
        uVar6 = uVar3;
        if (uVar3 == 0) {
            iVar7 = gen_pool_create(0xc,0xffffffff);
            *(iVar5 + 0x48) = iVar7;
            if (iVar7 == 0) {
                uVar6 = 0xfffffff4;
            }
            else {
                *(iVar5 + 0x60) = uVar10;
                *(iVar5 + 0x68) = iVar9;
                gen_pool_add_owner(iVar7,uVar10,0xffffffffffffffff,iVar9,0xffffffff,0);
                uVar6 = 0;
            }
        }
    }
    else {
        if (((uVar10 >> 0x30 == 0) && (___kmalloc != 0)) &&
           (iVar7 = *(___kmalloc + (uVar10 >> 0x1f & 0x1fffffff8)), iVar7 != 0)) {
            uVar6 = uVar10 >> 0x1b & 0x7f;
            puVar1 = iVar7 + uVar6 * 0x20;
            if (((puVar1 != NULL) && (uVar3 = *puVar1, (uVar3 >> 1 & 1) != 0)) &&
               (((uVar3 >> 3 & 1) != 0 || ((**(iVar7 + uVar6 * 0x20 + 8) >> (uVar10 >> 0x15 & 0x3f) & 1) != 0)))) {
                iStack_b8 = 0;
                uStack_b0 = 0;
                uStack_c8 = 0;
                iStack_c0 = 0;
                sg_init_table(&uStack_c8,1);
                iStack_c0 = iVar9 << 0x20;
                uStack_c8 = uStack_c8 & 3 | uVar4;
                iStack_b8 = (uVar4 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                dma_sync_sg_for_device(uVar11,&uStack_c8,1,0);
                goto code_r0x0800b798;
            }
        }
        uVar6 = 0xffffffea;
    }
    __init_rwsem(iVar5 + 8,"&carveout_heap->mem_sem",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_secure_carveout_heap_freeze;
    pcVar8 = _obj.secure_carveout_heaps;
    while( true ) {
        if (pcVar8 == obj.secure_carveout_heaps) {
            return 0;
        }
        iVar9 = *(pcVar8 + 0x10);
        if (iVar9 != 0) break;
        pcVar8 = *pcVar8;
    }
    uVar11 = dma_heap_get_name(*(pcVar8 + -0x70));
    _printk(0x8001a1d,"qcom_secure_carveout_heap_freeze",uVar11,iVar9);
    return 0xfffffff0;
}


// ===== sym.__carveout_heap_init @ 0x0800b680 (size 476) =====

int sym.__carveout_heap_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    code *pcVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong uVar10;
    ulong unaff_x30;
    uint64_t uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    uVar1 = _delayed_work_timer_fn;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uVar10 = *(arg1 + 0x20);
    *(arg2 + 0x50) = uVar10;
    uVar3 = *(arg1 + 0x10);
    iVar9 = *(arg1 + 0x18);
    uVar1 = ((uVar3 >> 6 & 0x3ffffffffffffc0) + (uVar1 >> 0xc) * -0x40) - 0x200000000;
    if ((arg3 & 1U) == 0) {
code_r0x0800b798:
        iVar5 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar5 = 0x68000000000f0b;
        }
        iVar4 = sym.carveout_pages_zero(uVar1,iVar9,iVar5);
        if (iVar4 == 0) {
            iVar5 = gen_pool_create(0xc,0xffffffff);
            *(arg2 + 0x48) = iVar5;
            if (iVar5 == 0) {
                iVar4 = -0xc;
            }
            else {
                *(arg2 + 0x60) = uVar3;
                *(arg2 + 0x68) = iVar9;
                gen_pool_add_owner(iVar5,uVar3,0xffffffffffffffff,iVar9,0xffffffff,0);
                iVar4 = 0;
            }
        }
    }
    else {
        if (((uVar3 >> 0x30 == 0) && (___kmalloc != 0)) &&
           (iVar5 = *(___kmalloc + (uVar3 >> 0x1f & 0x1fffffff8)), iVar5 != 0)) {
            uVar7 = uVar3 >> 0x1b & 0x7f;
            puVar2 = iVar5 + uVar7 * 0x20;
            if (((puVar2 != NULL) && (uVar8 = *puVar2, (uVar8 >> 1 & 1) != 0)) &&
               (((uVar8 >> 3 & 1) != 0 || ((**(iVar5 + uVar7 * 0x20 + 8) >> (uVar3 >> 0x15 & 0x3f) & 1) != 0)))) {
                iStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                iStack_70 = 0;
                sg_init_table(&uStack_78,1);
                iStack_70 = iVar9 << 0x20;
                uStack_78 = uStack_78 & 3 | uVar1;
                iStack_68 = (uVar1 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                dma_sync_sg_for_device(uVar10,&uStack_78,1,0);
                goto code_r0x0800b798;
            }
        }
        iVar4 = -0x16;
    }
    __init_rwsem(arg2 + 8,"&carveout_heap->mem_sem",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return iVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_secure_carveout_heap_freeze;
    pcVar6 = _obj.secure_carveout_heaps;
    while( true ) {
        if (pcVar6 == obj.secure_carveout_heaps) {
            return 0;
        }
        iVar9 = *(pcVar6 + 0x10);
        if (iVar9 != 0) break;
        pcVar6 = *pcVar6;
    }
    uVar10 = dma_heap_get_name(*(pcVar6 + -0x70));
    _printk(0x8001a1d,"qcom_secure_carveout_heap_freeze",uVar10,iVar9);
    return -0x10;
}


// ===== sym.qcom_secure_carveout_heap_freeze @ 0x0800b85c (size 132) =====

ulong sym.qcom_secure_carveout_heap_freeze(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _obj.secure_carveout_heaps;
    while( true ) {
        if (pcVar2 == obj.secure_carveout_heaps) {
            return 0;
        }
        iVar3 = *(pcVar2 + 0x10);
        if (iVar3 != 0) break;
        pcVar2 = *pcVar2;
    }
    uVar1 = dma_heap_get_name(*(pcVar2 + -0x70));
    _printk(0x8001a1d,"qcom_secure_carveout_heap_freeze",uVar1,iVar3);
    return 0xfffffff0;
}


// ===== sym.qcom_secure_carveout_heap_restore @ 0x0800b8e4 (size 96) =====

ulong sym.qcom_secure_carveout_heap_restore(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _obj.secure_carveout_heaps;
    while( true ) {
        if (pcVar2 == obj.secure_carveout_heaps) {
            return 0;
        }
        iVar1 = sym.hyp_assign_from_flags(*(pcVar2 + -0x10),*(pcVar2 + -8),*(pcVar2 + -0x78));
        if (iVar1 != 0) break;
        pcVar2 = *pcVar2;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800b944);
    (*pcVar2)();
}


// ===== sym.qcom_secure_carveout_heap_create @ 0x0800b944 (size 368) =====

uint64_t sym.qcom_secure_carveout_heap_create(int64_t arg1)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uint64_t uStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    uint64_t *puStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_1a0;
    int64_t aiStack_198 [33];
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_60;
    code *pcStack_58;
    uint *puStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    arg3 = 0x90;
    pcStack_58 = NULL;
    puStack_50 = NULL;
    uStack_60 = 0;
    puVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x90);
    if (puVar6 == NULL) {
        uVar9 = 0xfffffff4;
    }
    else {
        arg3 = NULL;
        uVar7 = sym.__carveout_heap_init(arg1,puVar6 + 2,0);
        uVar9 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            arg3 = *(arg1 + 0x2c);
            uVar5 = sym.hyp_assign_from_flags(*(arg1 + 0x10),*(arg1 + 0x18),arg3);
            if (uVar5 == 0) {
                uStack_60 = *(arg1 + 8);
                *puVar6 = *(arg1 + 0x2c);
                *(puVar6 + 0x18) = 1;
                pcStack_58 = reloc.sc_heap_allocate.5483fe64c110efe2cf798b257c53df45.cfi_jt;
                puStack_50 = puVar6;
                uVar9 = dma_heap_add(&uStack_60);
                *(puVar6 + 2) = uVar9;
                puVar3 = _obj.secure_carveout_heaps;
                if (uVar9 < 0xfffffffffffff001) {
                    puVar2 = puVar6 + 0x1e;
                    arg3 = _obj.secure_carveout_heaps;
                    uVar7 = __list_add_valid(puVar2,obj.secure_carveout_heaps,_obj.secure_carveout_heaps);
                    uVar9 = 0;
                    if ((uVar7 & 1) != 0) {
                        *(puVar3 + 2) = puVar2;
                        *(puVar6 + 0x1e) = puVar3;
                        *(puVar6 + 0x20) = obj.secure_carveout_heaps;
                        _obj.secure_carveout_heaps = puVar2;
                    }
                    goto code_r0x0800ba2c;
                }
            }
            else {
                uVar9 = uVar5;
                _printk(0x8001018);
            }
            down_write(puVar6 + 4);
            if (*(puVar6 + 0x14) != 0) {
                gen_pool_destroy();
            }
            up_write(puVar6 + 4);
        }
        kfree(puVar6);
    }
code_r0x0800ba2c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.carveout_pages_zero;
    pcStack_88 = sym.carveout_pages_zero;
    iVar8 = sp_el0;
    aiStack_198[0x20] = *(iVar8 + 0x5e0);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    iStack_1c8 = 0;
    puStack_90 = &stack0xffffffffffffffc0;
    sg_init_table(&uStack_1d0,1);
    if ((auVar10._0_8_ & 3) != 0) goto code_r0x0800bc78;
    iStack_1c8 = auVar10._8_4_ << 0x20;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1d0 = uStack_1d0 & 3 | auVar10._0_8_;
    puStack_1b0 = NULL;
    aiStack_198[0x1e] = 0;
    aiStack_198[0x1f] = 0;
    aiStack_198[0x1c] = 0;
    aiStack_198[0x1d] = 0;
    aiStack_198[0x1a] = 0;
    aiStack_198[0x1b] = 0;
    aiStack_198[0x18] = 0;
    aiStack_198[0x19] = 0;
    aiStack_198[0x16] = 0;
    aiStack_198[0x17] = 0;
    aiStack_198[0x14] = 0;
    aiStack_198[0x15] = 0;
    aiStack_198[0x12] = 0;
    aiStack_198[0x13] = 0;
    aiStack_198[0x10] = 0;
    aiStack_198[0x11] = 0;
    aiStack_198[0xe] = 0;
    aiStack_198[0xf] = 0;
    aiStack_198[0xc] = 0;
    aiStack_198[0xd] = 0;
    aiStack_198[10] = 0;
    aiStack_198[0xb] = 0;
    aiStack_198[8] = 0;
    aiStack_198[9] = 0;
    aiStack_198[6] = 0;
    aiStack_198[7] = 0;
    aiStack_198[4] = 0;
    aiStack_198[5] = 0;
    aiStack_198[2] = 0;
    aiStack_198[3] = 0;
    aiStack_198[0] = 0;
    aiStack_198[1] = 0;
    __sg_page_iter_start(&puStack_1b0,&uStack_1d0,1,0);
    uVar9 = __sg_page_iter_next(&puStack_1b0);
    uVar7 = 0;
    if ((uVar9 & 1) != 0) {
        uVar5 = 0;
        do {
            uVar1 = uVar5 + 1;
            aiStack_198[uVar5] = (*puStack_1b0 & 0xfffffffffffffffc) + (uStack_1a8 & 0xffffffff) * 0x40;
            uVar5 = uVar1;
            if (uVar1 == 0x20) {
                iVar8 = vmap(aiStack_198,0x20,4,arg3);
                if (iVar8 == 0) goto code_r0x0800bc40;
                memset(iVar8,0,0x20000);
                vunmap(iVar8);
                uVar5 = 0;
            }
            uVar9 = __sg_page_iter_next(&puStack_1b0);
        } while ((uVar9 & 1) != 0);
        if (uVar5 != 0) {
            iVar8 = vmap(aiStack_198,uVar5,4,arg3);
            if (iVar8 == 0) {
code_r0x0800bc40:
                uVar7 = 0xfffffff4;
                goto code_r0x0800bc44;
            }
            memset(iVar8,0,uVar5 << 0xc);
            vunmap(iVar8);
        }
        uVar7 = 0;
    }
code_r0x0800bc44:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == aiStack_198[0x20]) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
code_r0x0800bc78:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x800bc7c);
    (*pcVar4)();
}


// ===== sym.carveout_pages_zero @ 0x0800bab4 (size 456) =====

void sym.carveout_pages_zero(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    ulong unaff_x30;
    uint64_t uStack_170;
    int64_t iStack_168;
    ulong uStack_160;
    ulong uStack_158;
    uint64_t *puStack_150;
    uint64_t uStack_148;
    ulong uStack_140;
    int64_t aiStack_138 [33];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_138[0x20] = *(iVar5 + 0x5e0);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    iStack_168 = 0;
    sg_init_table(&uStack_170,1);
    if ((arg1 & 3U) != 0) goto code_r0x0800bc78;
    iStack_168 = arg2 << 0x20;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_170 = uStack_170 & 3 | arg1;
    puStack_150 = NULL;
    aiStack_138[0x1e] = 0;
    aiStack_138[0x1f] = 0;
    aiStack_138[0x1c] = 0;
    aiStack_138[0x1d] = 0;
    aiStack_138[0x1a] = 0;
    aiStack_138[0x1b] = 0;
    aiStack_138[0x18] = 0;
    aiStack_138[0x19] = 0;
    aiStack_138[0x16] = 0;
    aiStack_138[0x17] = 0;
    aiStack_138[0x14] = 0;
    aiStack_138[0x15] = 0;
    aiStack_138[0x12] = 0;
    aiStack_138[0x13] = 0;
    aiStack_138[0x10] = 0;
    aiStack_138[0x11] = 0;
    aiStack_138[0xe] = 0;
    aiStack_138[0xf] = 0;
    aiStack_138[0xc] = 0;
    aiStack_138[0xd] = 0;
    aiStack_138[10] = 0;
    aiStack_138[0xb] = 0;
    aiStack_138[8] = 0;
    aiStack_138[9] = 0;
    aiStack_138[6] = 0;
    aiStack_138[7] = 0;
    aiStack_138[4] = 0;
    aiStack_138[5] = 0;
    aiStack_138[2] = 0;
    aiStack_138[3] = 0;
    aiStack_138[0] = 0;
    aiStack_138[1] = 0;
    __sg_page_iter_start(&puStack_150,&uStack_170,1,0);
    uVar3 = __sg_page_iter_next(&puStack_150);
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
        uVar6 = 0;
        do {
            uVar1 = uVar6 + 1;
            aiStack_138[uVar6] = (*puStack_150 & 0xfffffffffffffffc) + (uStack_148 & 0xffffffff) * 0x40;
            uVar6 = uVar1;
            if (uVar1 == 0x20) {
                iVar5 = vmap(aiStack_138,0x20,4,arg3);
                if (iVar5 == 0) goto code_r0x0800bc40;
                memset(iVar5,0,0x20000);
                vunmap(iVar5);
                uVar6 = 0;
            }
            uVar3 = __sg_page_iter_next(&puStack_150);
        } while ((uVar3 & 1) != 0);
        if (uVar6 != 0) {
            iVar5 = vmap(aiStack_138,uVar6,4,arg3);
            if (iVar5 == 0) {
code_r0x0800bc40:
                uVar4 = 0xfffffff4;
                goto code_r0x0800bc44;
            }
            memset(iVar5,0,uVar6 << 0xc);
            vunmap(iVar5);
        }
        uVar4 = 0;
    }
code_r0x0800bc44:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_138[0x20]) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x0800bc78:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800bc7c);
    (*pcVar2)();
}


// ===== sym.carveout_heap_allocate @ 0x0800bc7c (size 72) =====

void sym.carveout_heap_allocate(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = dma_heap_get_drvdata();
    sym.__carveout_heap_allocate(arg1_00,arg1,arg2,0x80036b8);
    return;
}


// ===== sym.__carveout_heap_allocate @ 0x0800bcc4 (size 740) =====

uint64_t sym.__carveout_heap_allocate(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t arg2_00;
    int64_t iVar9;
    ulong uVar10;
    uint64_t *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x19;
    int64_t unaff_x24;
    int64_t iVar12;
    ulong uVar13;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uint64_t uStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_130;
    ulong uStack_128;
    int64_t iStack_120;
    int64_t iStack_118;
    ulong *puStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    ulong *puStack_f8;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_90 = *0x8002450;
    puStack_a0 = *0x8002440;
    uStack_98 = *0x8002448;
    uStack_c0 = *0x8002420;
    uStack_b8 = *0x8002428;
    uVar13 = *(arg1 + 0x50);
    uStack_b0 = *0x8002430;
    uStack_a8 = *0x8002438;
    uStack_d0 = *0x8002410;
    uStack_c8 = *0x8002418;
    puVar5 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0xa8);
    if (puVar5 == NULL) {
        uStack_140 = 0xfffffffffffffff4;
        goto code_r0x0800bef8;
    }
    puVar5[1] = puVar5 + 1;
    puVar5[2] = puVar5 + 1;
    __mutex_init(puVar5 + 3,"&buffer->lock",reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt);
    uVar10 = *arg1;
    puVar5[9] = arg2;
    cVar2 = *(arg1 + 0x59);
    puVar5[0x14] = arg4;
    *puVar5 = uVar10;
    if (cVar2 != '\0') {
        *(puVar5 + 0xe) = 1;
    }
    arg4 = puVar5 + 10;
    iVar4 = sg_alloc_table(arg4,1,0xcc0);
    uVar7 = unaff_x26;
    unaff_x19 = puVar5;
    if (iVar4 == 0) {
        unaff_x24 = arg1 + 8;
        down_read(unaff_x24);
        iVar6 = *(arg1 + 0x48);
        if ((iVar6 == 0) ||
           (uVar7 = gen_pool_alloc_algo_owner(iVar6,arg2,*(iVar6 + 0x20),*(iVar6 + 0x28),0), uVar7 == 0)) {
            iVar4 = -0xc;
code_r0x0800bedc:
            up_read(unaff_x24);
            uVar7 = unaff_x26;
        }
        else {
            up_read(unaff_x24);
            uVar8 = _delayed_work_timer_fn;
            if (uVar7 != 0xffffffffffffffff) {
                puVar11 = *arg4;
                *(puVar11 + 1) = 0;
                *(puVar11 + 0xc) = arg2;
                *puVar11 = ((uVar7 >> 6 & 0x3ffffffffffffc0) + (uVar8 >> 0xc) * -0x40 | *puVar11 & 3) - 0x200000000;
                if ((*(arg1 + 0x58) == '\0') && (*(arg1 + 0x59) == '\0')) {
                    iStack_d8 = puVar5[9];
                    uStack_e8 = *puVar5[10];
                    iStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    iStack_80 = 0;
                    uStack_e0 = uStack_e8 & 0xfffffffffffffffc;
                    sg_init_table(&uStack_88,1);
                    uStack_88 = uStack_e8 & 0xfffffffffffffffc | uStack_88 & 3;
                    iStack_78 = (uStack_e0 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                    iStack_80 = iStack_d8 << 0x20;
                    dma_sync_sg_for_device(uVar13,&uStack_88,1,2);
                }
                uVar8 = sym.carveout_setup_vmperm(arg1,arg4);
                puVar5[0xf] = uVar8;
                unaff_x26 = uVar7;
                if (uVar8 < 0xfffffffffffff001) {
                    uStack_d0 = dma_heap_get_name(*arg1);
                    uStack_b8 = puVar5[9];
                    uStack_b0 = CONCAT44(uStack_b0._4_4_,arg3);
                    puStack_a0 = puVar5;
                    uStack_140 = mem_buf_dma_buf_export
                                           (&uStack_d0,
                                            reloc.qcom_sg_lookup_vmperm.a54aae6d51e276778f768246a9501da3.cfi_jt);
                    if (uStack_140 < 0xfffffffffffff001) goto code_r0x0800bef8;
                    mem_buf_vmperm_release(puVar5[0xf]);
                }
                else {
                    uStack_140 = 0;
                }
                iVar4 = uStack_140;
                down_read(unaff_x24);
                if (*(arg1 + 0x48) != 0) {
                    gen_pool_free_owner(*(arg1 + 0x48),uVar7,arg2,0);
                }
                goto code_r0x0800bedc;
            }
            iVar4 = -0xc;
        }
        sg_free_table(arg4);
    }
    kfree(puVar5);
    uStack_140 = iVar4;
    unaff_x26 = uVar7;
code_r0x0800bef8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uStack_140;
    }
    puVar5 = __stack_chk_fail();
    *extraout_x18 = sym.carveout_heap_free;
    uVar7 = _delayed_work_timer_fn;
    pcStack_148 = sym.carveout_heap_free;
    iVar6 = sp_el0;
    iStack_158 = *(iVar6 + 0x5e0);
    uVar8 = *puVar5[10] & 0xfffffffffffffffc;
    puStack_150 = &stack0xffffffffffffffa0;
    uStack_130 = unaff_x26;
    uStack_128 = uVar13;
    iStack_120 = unaff_x24;
    iStack_118 = arg3;
    puStack_110 = arg4;
    iStack_108 = arg1;
    iStack_100 = arg2;
    puStack_f8 = unaff_x19;
    iVar6 = dma_heap_get_drvdata(*puVar5);
    if (*(iVar6 + 0x59) == '\0') {
        uVar13 = *(iVar6 + 0x50);
        iVar9 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            iVar9 = 0x68000000000f03;
        }
        sym.carveout_pages_zero(uVar8,puVar5[9],iVar9);
        iVar12 = puVar5[9];
        iStack_168 = 0;
        uStack_160 = 0;
        uStack_178 = 0;
        iStack_170 = 0;
        sg_init_table(&uStack_178,1);
        iVar9 = 1;
        iStack_170 = iVar12 << 0x20;
        uStack_178 = uStack_178 & 3 | uVar8;
        iStack_168 = (uVar8 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
        dma_sync_sg_for_device(uVar13,&uStack_178,1,0);
    }
    else {
        iVar9 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar9 = 0x68000000000f0b;
        }
        sym.carveout_pages_zero(uVar8,puVar5[9],iVar9);
    }
    iVar12 = puVar5[9];
    down_read(iVar6 + 8);
    if (*(iVar6 + 0x48) != 0) {
        gen_pool_free_owner(*(iVar6 + 0x48),(uVar8 + (uVar7 >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40,iVar12,0)
        ;
        iVar9 = iVar12;
    }
    up_read(iVar6 + 8);
    sg_free_table(puVar5 + 10);
    uVar7 = kfree(puVar5);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_158) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.sc_heap_allocate;
        iVar6 = dma_heap_get_drvdata();
        uVar7 = sym.__carveout_heap_allocate(iVar6 + 8,arg2_00,iVar9,0x80036a8);
        if (uVar7 < 0xfffffffffffff001) {
            piVar1 = iVar6 + 0x88;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + arg2_00;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return uVar7;
    }
    return uVar7;
}


// ===== sym.carveout_heap_free @ 0x0800bfa8 (size 424) =====

void sym.carveout_heap_free(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t arg2;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg1_00;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar5 = _delayed_work_timer_fn;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg1_00 = **(arg1 + 0x50) & 0xfffffffffffffffc;
    iVar4 = dma_heap_get_drvdata(*arg1);
    if (*(iVar4 + 0x59) == '\0') {
        uVar7 = *(iVar4 + 0x50);
        iVar6 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f03;
        }
        sym.carveout_pages_zero(arg1_00,*(arg1 + 0x48),iVar6);
        iVar8 = *(arg1 + 0x48);
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        sg_init_table(&uStack_88,1);
        iVar6 = 1;
        iStack_80 = iVar8 << 0x20;
        uStack_88 = uStack_88 & 3 | arg1_00;
        iStack_78 = (arg1_00 + (_delayed_work_timer_fn >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
        dma_sync_sg_for_device(uVar7,&uStack_88,1,0);
    }
    else {
        iVar6 = 0x6800000000070b;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f0b;
        }
        sym.carveout_pages_zero(arg1_00,*(arg1 + 0x48),iVar6);
    }
    iVar8 = *(arg1 + 0x48);
    down_read(iVar4 + 8);
    if (*(iVar4 + 0x48) != 0) {
        gen_pool_free_owner(*(iVar4 + 0x48),(arg1_00 + (uVar5 >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40,iVar8,0
                           );
        iVar6 = iVar8;
    }
    up_read(iVar4 + 8);
    sg_free_table(arg1 + 0x50);
    kfree(arg1);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.sc_heap_allocate;
        iVar4 = dma_heap_get_drvdata();
        uVar5 = sym.__carveout_heap_allocate(iVar4 + 8,arg2,iVar6,0x80036a8);
        if (uVar5 < 0xfffffffffffff001) {
            piVar1 = iVar4 + 0x88;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + arg2;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return;
    }
    return;
}


// ===== sym.sc_heap_allocate @ 0x0800c150 (size 148) =====

void sym.sc_heap_allocate(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = dma_heap_get_drvdata();
    uVar5 = sym.__carveout_heap_allocate(iVar4 + 8,arg1,arg2,0x80036a8);
    if (uVar5 < 0xfffffffffffff001) {
        piVar1 = iVar4 + 0x88;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + arg1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.sc_heap_free @ 0x0800c1e4 (size 320) =====

void sym.sc_heap_free(int64_t arg1)

{
    int64_t *piVar1;
    int64_t arg3;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _delayed_work_timer_fn;
    arg1_00 = **(arg1 + 0x50) & 0xfffffffffffffffc;
    iVar5 = dma_heap_get_drvdata(*arg1);
    if ((*(iVar5 + 2) & 0x4040) != 0) {
        iVar6 = 0x6800000000070b;
        arg3 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            iVar6 = 0x68000000000f0b;
            arg3 = 0x68000000000f03;
        }
        if (*(arg1 + 0x70) != '\0') {
            arg3 = iVar6;
        }
        sym.carveout_pages_zero(arg1_00,*(arg1 + 0x48),arg3);
    }
    uVar7 = *(arg1 + 0x48);
    down_read(iVar5 + 0x10);
    if (*(iVar5 + 0x50) != 0) {
        gen_pool_free_owner(*(iVar5 + 0x50),(arg1_00 + (uVar4 >> 0xc) * 0x40) * 0x40 + 0x8000000000,uVar7,0);
    }
    up_read(iVar5 + 0x10);
    sg_free_table(arg1 + 0x50);
    iVar6 = *(arg1 + 0x48);
    piVar1 = iVar5 + 0x88;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 - iVar6;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    kfree(arg1);
    return;
}


// ===== sym.qcom_add_bitstream_contig_heap @ 0x0800c324 (size 228) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.qcom_add_bitstream_contig_heap(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_98;
    uint uStack_94;
    ulong uStack_90;
    uint *puStack_88;
    uint *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_40;
    code *pcStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    if (reloc.qcom_sg_vmap.a54aae6d51e276778f768246a9501da3.cfi_jt != 0x0) {
        _segment.ehdr = dma_heap_find("qcom,display");
        if (_segment.ehdr == 0) {
            _printk(0x8000da2,"qcom_add_bitstream_contig_heap",arg1);
            uVar3 = 0xffffffea;
            goto code_r0x0800c394;
        }
        pcStack_38 = reloc.bitstream_contig_heap_allocate.629c131c7ffedba67fcd94e814c546ef.cfi_jt;
        iStack_40 = arg1;
        uVar3 = dma_heap_add(&iStack_40);
        if (0xfffffffffffff000 < uVar3) {
            _printk(0x8001953,"qcom_add_bitstream_contig_heap",uVar3);
            goto code_r0x0800c394;
        }
    }
    uVar3 = 0;
code_r0x0800c394:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.bitstream_contig_heap_allocate;
    pcStack_58 = sym.bitstream_contig_heap_allocate;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_98 = 6;
    uStack_94 = 9;
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_88 = NULL;
    puStack_80 = NULL;
    uStack_90 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    uVar3 = dma_heap_buffer_alloc(_segment.ehdr);
    if (uVar3 < 0xfffffffffffff001) {
        puStack_88 = &uStack_94;
        puStack_80 = &uStack_98;
        uStack_90 = CONCAT44(uStack_90._4_4_,1);
        iVar2 = mem_buf_lend(uVar3,&uStack_90);
        if (iVar2 != 0) {
            _printk(0x8001259,"bitstream_contig_heap_allocate",iVar2);
            dma_buf_put(uVar3);
            uVar3 = iVar2;
        }
    }
    else {
        _printk(0x8001b7a,"bitstream_contig_heap_allocate",uVar3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.bitstream_contig_heap_allocate @ 0x0800c408 (size 244) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.bitstream_contig_heap_allocate(void)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_58;
    uint uStack_54;
    ulong uStack_50;
    uint *puStack_48;
    uint *puStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_58 = 6;
    uStack_54 = 9;
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_48 = NULL;
    puStack_40 = NULL;
    uStack_50 = 0;
    uVar3 = dma_heap_buffer_alloc(_segment.ehdr);
    if (uVar3 < 0xfffffffffffff001) {
        puStack_48 = &uStack_54;
        puStack_40 = &uStack_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,1);
        iVar2 = mem_buf_lend(uVar3,&uStack_50);
        if (iVar2 != 0) {
            _printk(0x8001259,"bitstream_contig_heap_allocate",iVar2);
            dma_buf_put(uVar3);
            uVar3 = iVar2;
        }
    }
    else {
        _printk(0x8001b7a,"bitstream_contig_heap_allocate",uVar3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800c504 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dma_heap_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module);
    return;
}

