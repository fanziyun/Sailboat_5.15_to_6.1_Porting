// decompiled from mi_memory by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 356) =====

//WARNING: Switch with 1 destination removed at 0x08002244

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 == -0x66d421a09845f9f8) {
            if ((pcVar1 + -0x80021a8 >> 3 | pcVar1 << 0x3d) < 0xb) {
                return;
            }
            goto code_r0x08002204;
        }
        if (arg1 == -0x8dc801903aca538) {
            if ((pcVar1 + -0x8002198 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002204;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08002204;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08002204;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 == 0x5233d5bc7887ae44) {
        pcVar2 = sym.mv_proc_show.0ffbfa8315f319151b13952aa2173828.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002204;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002204:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002258);
    (*pcVar1)();
}


// ===== sym.mv_proc_show.0ffbfa8315f319151b13952aa2173828.cfi_jt @ 0x08002170 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003fe4)
//WARNING: Removing unreachable block (ram,0x08003fbc)
//WARNING: Removing unreachable block (ram,0x08003f94)
//WARNING: Removing unreachable block (ram,0x08003fa8)
//WARNING: Removing unreachable block (ram,0x08003fd0)
//WARNING: Removing unreachable block (ram,0x08003ffc)
//WARNING: Removing unreachable block (ram,0x08003f80)
//WARNING: Removing unreachable block (ram,0x08004000)

uint64_t sym.mv_proc_show.0ffbfa8315f319151b13952aa2173828.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t arg1;
    int64_t iVar6;
    uint16_t *puVar7;
    uint64_t *puVar8;
    ulong *puVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint16_t *puVar12;
    uint16_t *puVar13;
    uint64_t *puVar14;
    uint64_t *puVar15;
    uint **ppuVar16;
    uint in_w6;
    uint *puVar17;
    uint in_w7;
    code cVar18;
    uint uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    uint8_t *puVar22;
    uint8_t uVar23;
    uint64_t uVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar25;
    char *pcVar26;
    uint16_t *puVar27;
    uint64_t uVar28;
    uint16_t *unaff_x22;
    uint64_t uVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    uint *puStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint16_t *puStack_e0;
    uint64_t uStack_d8;
    char *pcStack_d0;
    ulong *puStack_c8;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iVar20 = *(iVar20 + 0x5e0);
    if (_segment.ehdr == NULL) {
        arg1 = sym.get_ufs_hba_data(param_1);
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x28);
        sym.ufs_get_string_desc(arg1,_segment.ehdr + 8,0x11,0x15);
        sym.ufs_get_string_desc(arg1,_segment.ehdr + 0x11,5,0x2a);
        sym.ufs_read_desc_param(arg1,0,0,0x18);
        *_segment.ehdr = 0;
        sym.ufs_read_desc_param(arg1,7,0,4);
        puVar27 = _segment.ehdr;
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27[7] = 0;
        _printk(0x8000d07);
    }
    uVar2 = sym.get_ddr_id();
    uVar3 = sym.get_ddr_size();
    seq_printf(param_1,"D: 0x%02x %d\n",uVar2,uVar3);
    uVar10 = *_segment.ehdr;
    puVar14 = _segment.ehdr + 8;
    puVar12 = *(_segment.ehdr + 4);
    puVar27 = _segment.ehdr + 0x11;
    seq_printf(param_1,"U: 0x%04x %d %s %s\n");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar20) {
        return 0;
    }
    auVar30 = __stack_chk_fail();
    puVar9 = auVar30._8_8_;
    iVar6 = auVar30._0_8_;
    *extraout_x18 = sym.ufs_get_string_desc;
    pcStack_a8 = sym.ufs_get_string_desc;
    iVar20 = sp_el0;
    iStack_b8 = *(iVar20 + 0x5e0);
    pcVar26 = uVar10 & 0xffffffff;
    uVar25 = 0xff;
    uVar29 = puVar14 & 0xffffffff;
    uVar28 = puVar12 & 0xffffffff;
    uStack_bc = 0xff;
    puVar13 = puVar12;
    puVar15 = puVar14;
    puStack_b0 = &stack0xffffffffffffffd0;
    puVar7 = kmem_cache_alloc_trace(_seq_lseek,0xb20);
    if (puVar7 == NULL) {
        uVar10 = 0xfffffff4;
    }
    else {
        __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
        puVar17 = &uStack_bc;
        uVar25 = 0;
        puVar13 = NULL;
        puVar15 = NULL;
        puVar27 = puVar7;
        iVar4 = mi_ufshcd_query_descriptor_retry(iVar6,1,0,0);
        __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
        in_w6 = SUB84(puVar17,0);
        if (iVar4 == 0) {
            uVar23 = *(puVar7 + uVar28);
            kfree(puVar7);
            uVar25 = 0xff;
            puVar8 = kmem_cache_alloc_trace(_seq_lseek,0xdc0);
            in_w6 = SUB84(puVar17,0);
            if (puVar8 == NULL) {
                puVar7 = NULL;
                uVar10 = 0;
            }
            else {
                __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
                puVar13 = NULL;
                puVar27 = 0xff;
                puVar15 = puVar8;
                uVar25 = uVar23;
                uVar5 = mi_ufshcd_read_desc_param(iVar6,5,uVar23,0);
                __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
                in_w6 = SUB84(puVar17,0);
                if (uVar5 < 0) {
                    uVar25 = 3;
                    puVar13 = uVar5;
                    _dev_err(*(iVar6 + 0x40),"Reading String Desc failed after %d retries. err = %d\n",3,puVar13);
                    goto code_r0x08004358;
                }
                if (*puVar8 < 3) {
                    puVar7 = NULL;
code_r0x0800429c:
                    kfree(puVar8);
                }
                else {
                    if ((puVar14 & 1) == 0) {
                        uVar25 = 0xcc0;
                        puVar7 = kmemdup(puVar8);
                        in_w6 = SUB84(puVar17,0);
                        if (puVar7 == NULL) goto code_r0x08004358;
                        goto code_r0x0800429c;
                    }
                    uVar5 = *puVar8 - 2;
                    uVar5 = (uVar5 + ((uVar5 & 0x8000) >> 0xf) >> 1) + 1;
                    uVar29 = uVar5;
                    puVar7 = __kmalloc(uVar29 & 0xffff,0xdc0);
                    in_w6 = SUB84(puVar17,0);
                    if (puVar7 == NULL) {
code_r0x08004358:
                        kfree(puVar8);
                        puVar7 = NULL;
                        goto code_r0x0800414c;
                    }
                    puVar15 = uVar5 & 0xffff;
                    uVar25 = 2;
                    puVar13 = puVar7;
                    uVar5 = utf16s_to_utf8s(puVar8 + 2,*puVar8 - 2,2,puVar7);
                    if (0 < uVar5) {
                        uVar29 = uVar5;
                        if (uVar5 == 1) {
                            uVar21 = 0;
                        }
                        else {
                            uVar21 = uVar29 & 0xfffffffe;
                            puVar22 = puVar7 + 1;
                            uVar24 = uVar21;
                            do {
                                uVar1 = *puVar22;
                                uVar23 = puVar22[-1];
                                if (0x5e < puVar22[-1] - 0x20) {
                                    uVar23 = 0x20;
                                }
                                if (0x5e < uVar1 - 0x20) {
                                    uVar1 = 0x20;
                                }
                                uVar24 = uVar24 - 2;
                                puVar22[-1] = uVar23;
                                *puVar22 = uVar1;
                                puVar22 = puVar22 + 2;
                            } while (uVar24 != 0);
                            if (uVar21 == uVar29) goto code_r0x080043d8;
                        }
                        iVar20 = uVar29 - uVar21;
                        puVar22 = puVar7 + uVar21;
                        do {
                            uVar23 = *puVar22;
                            if (0x5e < uVar23 - 0x20) {
                                uVar23 = 0x20;
                            }
                            iVar20 = iVar20 + -1;
                            *puVar22 = uVar23;
                            puVar22 = puVar22 + 1;
                        } while (iVar20 != 0);
                    }
code_r0x080043d8:
                    uVar29 = uVar5 + 1;
                    *(puVar7 + uVar5) = 0;
                    kfree(puVar8);
                    in_w6 = SUB84(puVar17,0);
                    if (uVar5 + 1 < 0) goto code_r0x0800414c;
                }
                in_w6 = SUB84(puVar17,0);
                if (puVar12 != 0x16) {
                    uVar25 = uVar10;
                    memcpy(puVar9,puVar7);
                    goto code_r0x0800414c;
                }
                *puVar9 = 0x3a6c6169726573;
                if (*puVar7 < 3) {
                    uVar28 = 7;
                }
                else {
                    uVar28 = 7;
                    pcVar26 = "%02x%02x";
                    iVar20 = 0;
                    do {
                        puVar13 = *(puVar7 + iVar20 + 2);
                        puVar15 = *(puVar7 + iVar20 + 3);
                        pcVar11 = pcVar26;
                        iVar4 = snprintf(puVar9 + uVar28,0x1000,"%02x%02x",puVar13);
                        uVar25 = pcVar11;
                        in_w6 = SUB84(puVar17,0);
                        uVar10 = iVar20 + 4;
                        uVar28 = iVar4 + uVar28;
                        iVar20 = iVar20 + 2;
                    } while (uVar10 < *puVar7);
                }
                uVar10 = uVar28 + 1;
                *(puVar9 + uVar28) = 10;
            }
        }
        else {
code_r0x0800414c:
            uVar10 = 0;
        }
        kfree(puVar7);
        unaff_x22 = puVar7;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_b8) {
        return uVar10;
    }
    auVar30 = __stack_chk_fail();
    iVar6 = auVar30._0_8_;
    ppuVar16 = &puStack_110;
    *extraout_x18_00 = sym.ufs_read_desc_param;
    pcStack_f8 = sym.ufs_read_desc_param;
    iVar20 = sp_el0;
    uVar5 = puVar27;
    iStack_108 = *(iVar20 + 0x5e0);
    puStack_110 = NULL;
    puVar14 = puVar15;
    ppuStack_100 = &puStack_b0;
    uStack_f0 = uVar29;
    uStack_e8 = uVar10;
    puStack_e0 = unaff_x22;
    uStack_d8 = uVar28;
    pcStack_d0 = pcVar26;
    puStack_c8 = puVar9;
    if ((uVar5 & 0xff) < 9) {
        puVar27 = puVar27 & 0xffffffff;
        puVar13 = puVar13 & 0xffffffff;
        __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
        uVar25 = uVar25 & 0xff;
        iVar4 = mi_ufshcd_read_desc_param(iVar6,auVar30._8_8_ & 0xffffffff,uVar25,puVar13);
        __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
        puVar14 = ppuVar16;
        if (iVar4 == 0) {
            switch(uVar5 & 0xff) {
            default:
                uVar10 = 0;
                *puVar15 = puStack_110;
                break;
            case 2:
                uVar10 = 0;
                *puVar15 = puStack_110 >> 8 | puStack_110 << 8;
                break;
            case 4:
                uVar10 = 0;
                uVar5 = (puStack_110 & 0xff00ff00) >> 8 | (puStack_110 & 0xff00ff) << 8;
                *puVar15 = uVar5 >> 0x10 | uVar5 << 0x10;
                break;
            case 8:
                uVar10 = 0;
                uVar28 = (puStack_110 & 0xff00ff00ff00ff00) >> 8 | (puStack_110 & 0xff00ff00ff00ff) << 8;
                uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
                *puVar15 = uVar28 >> 0x20 | uVar28 << 0x20;
            }
            goto code_r0x08004490;
        }
    }
    uVar10 = 0xffffffea;
    ppuVar16 = puVar14;
code_r0x08004490:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_108) {
        return uVar10;
    }
    auVar30 = __stack_chk_fail(uVar10);
    puVar22 = auVar30._8_8_;
    *extraout_x18_01 = sym.scsi_exec_req;
    uVar19 = 0x22;
    if (uVar25 == 1) {
        uVar19 = 0x23;
    }
    uVar25 = ppuVar16;
    uVar10 = blk_get_request(*(auVar30._0_8_ + 8),uVar19,4);
    if (uVar10 < 0xfffffffffffff001) {
        if ((uVar25 == 0) ||
           (uVar5 = blk_rq_map_kern(*(auVar30._0_8_ + 8),uVar10,puVar13,ppuVar16 & 0xffffffff,0xc00), uVar5 == 0))
        {
            puVar17 = puStack_110;
            cVar18 = scsi_command_size_tbl[*puVar22 >> 5];
            *(uVar10 + 0x148) = cVar18;
            if ((*puVar22 | 0x10) == 0xd0) {
                cVar18 = 0x10;
                *(uVar10 + 0x148) = 0x10;
            }
            memcpy(*(uVar10 + 0x140),puVar22,cVar18);
            *(uVar10 + 0x158) = in_w7;
            *(uVar10 + 0xec) = in_w6;
            *(uVar10 + 0x1c) = *(uVar10 + 0x1c) | 0x8800;
            blk_execute_rq(0,uVar10,1);
            uVar5 = *(uVar10 + 0x154);
            if ((uVar5 != 0) && (uVar5 <= uVar25)) {
                memset(puVar13 + (uVar25 - uVar5),0);
            }
            if (puVar17 != NULL) {
                *puVar17 = *(uVar10 + 0x154);
            }
            if (puVar27 != NULL) {
                scsi_normalize_sense(*(uVar10 + 0x160),*(uVar10 + 0x150),puVar27);
            }
            uVar5 = *(uVar10 + 0x14c);
        }
        blk_put_request(uVar10);
        return uVar5;
    }
    return 0x4000000;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08002178 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002180 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry(obj..str.llvm.13844763090706535407,0);
    sysfs_remove_groups(_segment.ehdr[1],reloc.ufshcd_sysfs_group);
    device_destroy(*_segment.ehdr,*(_segment.ehdr + 2) << 0x14 | 1);
    __unregister_chrdev(0,0,0x100,"mi_memory_module");
    class_destroy(*_segment.ehdr);
    kfree(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002188 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    uVar4 = __class_create(obj.__this_module,"mi_memory",obj.mi_memory_sysfs_init.__key);
    *_segment.ehdr = uVar4;
    if (uVar4 < 0xfffffffffffff001) {
        uVar5 = __register_chrdev(0,0,0x100,"mi_memory_module",obj.mi_memory);
        puVar2 = _segment.ehdr;
        uVar4 = uVar5 & 0xffffffff;
        iVar3 = uVar5;
        *(_segment.ehdr + 2) = iVar3;
        if (iVar3 < 0) {
            _printk(0x800055d,"mi_memory_sysfs_init",uVar4);
        }
        else {
            uVar4 = device_create(*puVar2,0,iVar3 << 0x14 | 1,0,"mi_memory_device");
            _segment.ehdr[1] = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
                uVar5 = sysfs_create_groups(uVar4,reloc.ufshcd_sysfs_group);
                uVar4 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    proc_create(obj..str.llvm.13844763090706535407,0x16d,0,obj.mv_proc_fops.llvm.13844763090706535407
                               );
                    debugfs_create_symlink("ufshcd0",0,"../../class/mi_memory/mi_memory_device/ufshcd0");
                    goto code_r0x080048a0;
                }
                _printk(0x80009bf,"mi_memory_sysfs_init",uVar4);
                device_destroy(*_segment.ehdr,_segment.ehdr[2] << 0x14 | 1);
            }
            else {
                uVar4 = 0xffffffed;
                _printk(0x8000fa8,"mi_memory_sysfs_init",0xffffffed);
            }
            __unregister_chrdev(0,0,0x100,"mi_memory_module");
        }
        class_destroy(*_segment.ehdr);
    }
    else {
        _printk(0x80003b7,"mi_memory_sysfs_init",uVar4 & 0xffffffff);
    }
    kfree(_segment.ehdr);
code_r0x080048a0:
    return uVar4 & 0xffffffff;
}


// ===== sym.seq_read.cfi_jt @ 0x08002190 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.single_release.cfi_jt @ 0x08002198 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mv_proc_open.0ffbfa8315f319151b13952aa2173828.cfi_jt @ 0x080021a0 (size 8) =====

void sym.mv_proc_open.0ffbfa8315f319151b13952aa2173828.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mv_proc_show.0ffbfa8315f319151b13952aa2173828.cfi_jt,0);
    return;
}


// ===== sym.show_hba_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021a8 (size 8) =====

int sym.show_hba_show.396ea8465668bb736eac439711679a60.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sym.get_ufs_hba_data(param_1);
    if (iVar5 != 0) {
        iVar6 = *(iVar5 + 0x100);
        uVar2 = snprintf(param_3,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar5 + 0xc0));
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar5 + 0xd0));
        iVar4 = snprintf(param_3 + iVar3 + uVar2,0x1000,"hba->capabilities = 0x%x\n",*(iVar5 + 0xd8));
        uVar2 = iVar4 + iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->nutrs = %d\n",*(iVar5 + 0xdc));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->nutmrs = %d\n",*(iVar5 + 0xe0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->ufs_version = 0x%x\n",*(iVar5 + 0xe8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->irq = 0x%x\n",*(iVar5 + 0x110));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar5 + 0xaf0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar5 + 0x2a0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar5 + 0xc28));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->eh_flags = 0x%x\n",*(iVar5 + 0x2a4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->intr_mask = 0x%x\n",*(iVar5 + 0x2a8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar5 + 0x2ac));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->errors = 0x%x\n",*(iVar5 + 0x370));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->uic_error = 0x%x\n",*(iVar5 + 0x374));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->saved_err = 0x%x\n",*(iVar5 + 0x378));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar5 + 0x37c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"hibern8_exit_cnt = %d\n",*(iVar5 + 0x390));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar5 + 0x408));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar5 + 0x478));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar5 + 0x4e8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar5 + 0x558));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar5 + 0x5c8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar5 + 0x638));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar5 + 0x6a8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar5 + 0x718));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar5 + 0x788));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar5 + 0x7f8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar5 + 0x948));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar5 + 0x9b8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar5 + 0xa28));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_err_cnt_total = %d\n",*(iVar6 + 0x6c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar6 + 0x70));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar6 + 0x74));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar6 + 0x78));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar6 + 0x7c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar6 + 0x80));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_err_cnt_total = %d\n",*(iVar6 + 0x84));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar6 + 0x88));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar6 + 0x8c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar6 + 0x90));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar6 + 0x94));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_crc_err_cnt = %d\n",*(iVar6 + 0x98));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar6 + 0x9c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar6 + 0xa0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar6 + 0xa4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xa8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xac));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar6 + 0xb0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xb4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar6 + 0xb8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar6 + 0xbc));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar6 + 0xc0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(param_3 + uVar2,0x1000,"dme_err_cnt = %d\n",*(iVar6 + 0xc4));
        return iVar3 + uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar1)();
}


// ===== sym.ddr_size_show.b7deb817153249e82db91ee7089b9035.cfi_jt @ 0x080021b0 (size 8) =====

int64_t sym.ddr_size_show.b7deb817153249e82db91ee7089b9035.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        sym.init_ddr_info();
    }
    iVar1 = snprintf(param_3,0x1000,0x8000b9c,*_segment.ehdr);
    return iVar1;
}


// ===== sym.dump_health_desc_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021b8 (size 8) =====

uint64_t sym.dump_health_desc_show.396ea8465668bb736eac439711679a60.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    ulong uVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uchar *puVar10;
    uint64_t uVar11;
    int64_t iVar12;
    char *pcVar13;
    char *pcVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
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
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    char *pcStack_50;
    uchar uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_3c = 0;
    iVar9 = sym.get_ufs_hba_data(param_1);
    pcVar13 = NULL;
    sym.ufs_read_desc_param(iVar9,9,0,0);
    puVar10 = __kmalloc(uStack_3c,0xdc0);
    uVar3 = uStack_3c;
    uVar2 = str.get_health_info_fail_n._0_8_;
    if (puVar10 == NULL) {
        uVar11 = 0x15;
        uVar1 = CONCAT26(str.get_health_info_fail_n._14_2_,str.get_health_info_fail_n._8_6_);
        *(param_3 + 0xe) = CONCAT62(str.get_health_info_fail_n._16_6_,str.get_health_info_fail_n._14_2_);
        *param_3 = uVar2;
        *(param_3 + 8) = uVar1;
    }
    else {
        __pm_runtime_resume(*(iVar9 + 0x50) + 0x1b0,4);
        iVar5 = mi_ufshcd_read_desc_param(iVar9,9,0,0,puVar10,uVar3);
        __pm_runtime_idle(*(iVar9 + 0x50) + 0x1b0,4);
        if (iVar5 == 0) {
            pcVar13 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
            iVar6 = snprintf(param_3,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",0,"bLength",*puVar10
                            );
            iVar7 = snprintf(param_3 + iVar6,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",1,
                             "bDescriptorType",puVar10[1]);
            iVar5 = snprintf(param_3 + (iVar7 + iVar6),0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",2,
                             "bPreEOLInfo",puVar10[2]);
            iVar5 = iVar5 + iVar7 + iVar6;
            iVar6 = snprintf(param_3 + iVar5,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",3,
                             "bDeviceLifeTimeEstA",puVar10[3]);
            iVar6 = iVar6 + iVar5;
            iVar5 = snprintf(param_3 + iVar6,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",4,
                             "bDeviceLifeTimeEstB",puVar10[4]);
            uVar8 = iVar5 + iVar6;
            param_3 = uVar8;
            kfree(puVar10);
            uVar11 = uVar8;
        }
        else {
            pcVar13 = "dump_health_desc_show";
            _dev_err(*(iVar9 + 0x40),"%s: Failed reading  dump_health_desc_show, ret %d\n","dump_health_desc_show",
                     iVar5);
            kfree(puVar10);
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    iVar12 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.dump_string_desc_serial_show;
    pcStack_58 = sym.dump_string_desc_serial_show;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
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
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    pcStack_50 = param_3;
    iVar9 = sym.get_ufs_hba_data(iVar12);
    sym.ufs_get_string_desc(iVar9,&uStack_e8,0x80,0x16);
    pcVar14 = 0x8000508;
    iVar5 = snprintf(pcVar13,0x1000,0x8000508,&uStack_e8);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.dump_device_desc_show;
    iVar9 = sp_el0;
    iVar16 = *(iVar9 + 0x5e0);
    iVar9 = sym.get_ufs_hba_data(iVar12);
    pcVar13 = NULL;
    sym.ufs_read_desc_param(iVar9,0,0,0);
    iVar12 = __kmalloc(0,0xdc0);
    uVar1 = str.get_desc_info_fail_n._8_8_;
    uVar2 = str.get_desc_info_fail_n._0_8_;
    if (iVar12 == 0) {
        uVar11 = 0x13;
        pcVar14[0x10] = 'i';
        pcVar14[0x11] = 'l';
        pcVar14[0x12] = '\n';
        pcVar14[0x13] = '\0';
        *pcVar14 = uVar2;
        *(pcVar14 + 8) = uVar1;
    }
    else {
        __pm_runtime_resume(*(iVar9 + 0x50) + 0x1b0,4);
        iVar5 = mi_ufshcd_read_desc_param(iVar9,0,0,0,iVar12,0);
        __pm_runtime_idle(*(iVar9 + 0x50) + 0x1b0,4);
        if (iVar5 == 0) {
            iVar9 = 0;
            iVar5 = 0;
            do {
                iVar15 = *(iVar9 + 0x8001368);
                if (*(iVar9 + 0x800136c) == 4) {
                    uVar8 = (*(iVar12 + iVar15) & 0xff00ff00) >> 8 | (*(iVar12 + iVar15) & 0xff00ff) << 8;
                    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
                }
                else if (*(iVar9 + 0x800136c) == 2) {
                    uVar8 = *(iVar12 + iVar15) >> 8 | (*(iVar12 + iVar15) & 0xff00ff) << 8;
                }
                else {
                    uVar8 = *(iVar12 + iVar15);
                }
                pcVar13 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar6 = snprintf(pcVar14 + iVar5,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar15,
                                 *(iVar9 + 0x8001360),uVar8);
                iVar9 = iVar9 + 0x10;
                iVar5 = iVar6 + iVar5;
            } while (iVar9 != 0x230);
            kfree(iVar12);
            uVar11 = iVar5;
        }
        else {
            pcVar13 = "dump_device_desc_show";
            _dev_err(*(iVar9 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar5);
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iVar16) {
        return uVar11;
    }
    iVar9 = __stack_chk_fail(uVar11);
    *extraout_x18_01 = sym.show_hba_show;
    iVar9 = sym.get_ufs_hba_data(iVar9);
    if (iVar9 != 0) {
        iVar12 = *(iVar9 + 0x100);
        uVar8 = snprintf(pcVar13,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar9 + 0xc0));
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar9 + 0xd0));
        iVar6 = snprintf(pcVar13 + (iVar5 + uVar8),0x1000,"hba->capabilities = 0x%x\n",*(iVar9 + 0xd8));
        uVar8 = iVar6 + iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->nutrs = %d\n",*(iVar9 + 0xdc));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->nutmrs = %d\n",*(iVar9 + 0xe0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ufs_version = 0x%x\n",*(iVar9 + 0xe8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->irq = 0x%x\n",*(iVar9 + 0x110));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar9 + 0xaf0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar9 + 0x2a0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar9 + 0xc28));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->eh_flags = 0x%x\n",*(iVar9 + 0x2a4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->intr_mask = 0x%x\n",*(iVar9 + 0x2a8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar9 + 0x2ac));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->errors = 0x%x\n",*(iVar9 + 0x370));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->uic_error = 0x%x\n",*(iVar9 + 0x374));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->saved_err = 0x%x\n",*(iVar9 + 0x378));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar9 + 0x37c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hibern8_exit_cnt = %d\n",*(iVar9 + 0x390));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar9 + 0x408));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar9 + 0x478));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar9 + 0x4e8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar9 + 0x558));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar9 + 0x5c8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar9 + 0x638));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar9 + 0x6a8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar9 + 0x718));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar9 + 0x788));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar9 + 0x7f8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar9 + 0x948));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar9 + 0x9b8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar9 + 0xa28));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_err_cnt_total = %d\n",*(iVar12 + 0x6c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar12 + 0x70));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar12 + 0x74));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar12 + 0x78));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar12 + 0x7c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar12 + 0x80));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_err_cnt_total = %d\n",*(iVar12 + 0x84));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar12 + 0x88));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar12 + 0x8c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar12 + 0x90));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar12 + 0x94));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_crc_err_cnt = %d\n",*(iVar12 + 0x98));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar12 + 0x9c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar12 + 0xa0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar12 + 0xa4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar12 + 0xa8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar12 + 0xac));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar12 + 0xb0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar12 + 0xb4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar12 + 0xb8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar12 + 0xbc));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar12 + 0xc0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dme_err_cnt = %d\n",*(iVar12 + 0xc4));
        return iVar5 + uVar8;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar4)();
}


// ===== sym.hr_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021c0 (size 8) =====

uint64_t sym.hr_show.396ea8465668bb736eac439711679a60.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t *arg1;
    bool bVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *arg1_00;
    ulong uVar8;
    ulong *puVar9;
    char *pcVar10;
    uchar uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    uint64_t unaff_x22;
    uint64_t unaff_x23;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint uStack_f8;
    ulong uStack_f4;
    uint uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    uchar uStack_98;
    uchar uStack_97;
    uchar uStack_96;
    uchar uStack_95;
    uchar uStack_94;
    uchar uStack_93;
    ushort uStack_92;
    uint uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar12 = 0x8000000;
    iStack_48 = *(iVar5 + 0x5e0);
    if ((_segment.ehdr == NULL) && (iVar5 = scsi_host_lookup(0), iVar5 != 0)) {
        _segment.ehdr = scsi_device_lookup(iVar5,0,0,0);
        _printk(0x8001129,*(*(*_segment.ehdr + 0xb8) + 0x108));
        scsi_device_put(_segment.ehdr);
        scsi_host_put(iVar5);
    }
    arg1 = _segment.ehdr;
    scsi_autopm_get_device(_segment.ehdr);
    pcVar10 = 0x200;
    iVar5 = kmem_cache_alloc_trace(_seq_lseek,0xdc0,0x200);
    if (iVar5 == 0) {
        _printk(0x8000751);
        uVar6 = 0xfffffffffffffff4;
        goto code_r0x080033e0;
    }
    mutex_lock(obj.hr_lock);
    iVar12 = arg1[0x1f];
    iVar2 = strncmp(iVar12,0x8000801,3);
    if (iVar2 == 0) {
        iVar12 = *arg1;
        unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
        iVar2 = scsi_device_get(arg1);
        if (((iVar2 == 0) && (*(arg1 + 0x133) < 8)) && ((1 << (*(arg1 + 0x133) & 0x1f) & 0xd0U) != 0)) {
            scsi_device_put(arg1);
            _printk(0x8000b89);
            iVar2 = -0x13;
        }
        _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
        if (iVar2 != 0) goto code_r0x080033a4;
        uStack_98 = 0x3c;
        uStack_97 = 1;
        uStack_96 = 1;
        uStack_95 = 0x7d;
        uStack_94 = 0x9c;
        uStack_93 = 0x69;
        uStack_92 = 0x200;
        uStack_90 = 0;
        uStack_8c = 0;
        *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
        uStack_a0 = 0;
        iVar2 = sym.scsi_exec_req(arg1,&uStack_98,2,iVar5);
        if (iVar2 != 0) {
            uVar8 = 0x8000d21;
            goto code_r0x08003530;
        }
code_r0x08002fe4:
        iVar2 = 0;
code_r0x08002fe8:
        scsi_device_put(arg1);
        *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) & 0xffbf;
joined_r0x08002f1c:
        if (iVar2 != 0) {
code_r0x080033a4:
            pcVar10 = "Fail to get hr, err is: %d\n";
            uVar6 = snprintf(param_3,0x1000,"Fail to get hr, err is: %d\n",iVar2);
            goto code_r0x080033bc;
        }
        iVar12 = 0;
        unaff_x23 = 0;
        do {
            pcVar10 = "%02x";
            iVar2 = snprintf(param_3 + unaff_x23,0x1000,"%02x",*(iVar5 + iVar12));
            iVar12 = iVar12 + 1;
            uVar4 = iVar2 + unaff_x23;
            unaff_x23 = uVar4;
        } while (iVar12 != 0x200);
        uVar6 = uVar4 + 1;
        *(param_3 + uVar4) = 10;
    }
    else {
        iVar2 = strncmp(iVar12,"TOSHIBA",7);
        if ((iVar2 == 0) || (iVar2 = strncmp(iVar12,"KIOXIA",6), iVar2 == 0)) {
            iVar2 = sym.ufs_get_toshiba_hr(arg1,iVar5);
            goto joined_r0x08002f1c;
        }
        iVar2 = strncmp(iVar12,"SAMSUNG",7);
        if (iVar2 == 0) {
            iVar12 = *arg1;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1);
            if (((iVar2 == 0) && (*(arg1 + 0x133) < 8)) && ((1 << (*(arg1 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 != 0) goto code_r0x080033a4;
            uStack_96 = 0;
            uStack_95 = 0;
            uStack_92 = 0;
            uStack_90 = 0;
            uStack_98 = 0xc0;
            uStack_97 = 0x40;
            uStack_94 = 1;
            uStack_93 = 0xc;
            *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
            uStack_8c = 0x1c000000;
            uStack_a0 = 0;
            iVar2 = sym.scsi_exec_req(arg1,&uStack_98,2,iVar5);
            if (iVar2 != 0) {
                uVar8 = 0x8000637;
                goto code_r0x08003530;
            }
            uStack_98 = 0xc0;
            uStack_97 = 0;
            uStack_96 = 0x5c;
            uStack_95 = 0x38;
            uStack_94 = 0x23;
            uStack_93 = 0xae;
            uStack_92 = 0x6867;
            uStack_90 = 0x72;
            uStack_8c = 0;
            uStack_a0 = 0;
            iVar2 = sym.scsi_exec_req(arg1,&uStack_98,3,0);
            if (iVar2 == 0) {
code_r0x08003154:
                uStack_98 = 0;
                uStack_97 = 0;
                uStack_96 = 0;
                uStack_95 = 0;
                uStack_94 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                if (iVar5 + 0x80 == 0) {
                    uVar8 = 0xffffffea;
code_r0x080036b8:
                    _printk(0x8000c9e,uVar8);
                }
                else {
                    uStack_98 = 0xc0;
                    uStack_97 = 0x40;
                    uStack_94 = 1;
                    uStack_93 = 10;
                    uStack_8c = 0x4c000000;
                    uStack_a0 = 0;
                    iVar2 = sym.scsi_exec_req(arg1,&uStack_98,2,iVar5 + 0x80);
                    if (iVar2 != 0) {
                        _printk(0x8000637,iVar2);
                        uVar8 = 0xfffffffb;
                        goto code_r0x080036b8;
                    }
                }
                uStack_96 = 0;
                uStack_95 = 0;
                uStack_94 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_98 = 0xc0;
                uStack_97 = 1;
                uStack_a0 = 0;
                iVar3 = sym.scsi_exec_req(arg1,&uStack_98,3,0);
                iVar2 = 0;
                if (iVar3 == 0) goto code_r0x08002fe8;
                _printk(0x8000782,iVar3);
                uVar8 = 0x80008aa;
            }
            else {
                _printk(0x8000782,iVar2);
                _printk(0x8000df9);
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_98 = 0xc0;
                uStack_97 = 3;
                uStack_96 = 0x67;
                uStack_95 = 0x68;
                uStack_94 = 0x72;
                uStack_a0 = 0;
                iVar3 = sym.scsi_exec_req(arg1,&uStack_98,3,0);
                if (iVar3 == 0) {
                    uStack_98 = 0xc0;
                    uStack_97 = 0;
                    uStack_96 = 0x5c;
                    uStack_95 = 0x38;
                    uStack_94 = 0x23;
                    uStack_93 = 0xae;
                    uStack_92 = 0x6867;
                    uStack_90 = 0x72;
                    uStack_8c = 0;
                    uStack_a0 = 0;
                    iVar3 = sym.scsi_exec_req(arg1,&uStack_98,3,0);
                    if (iVar3 == 0) goto code_r0x08003154;
                    _printk(0x8000782,iVar3);
                    uVar8 = 0x80006d9;
                }
                else {
                    _printk(0x8000cbc,iVar3);
                    uVar8 = 0x8000459;
                }
            }
            _printk(uVar8,iVar3);
            goto code_r0x08002fe4;
        }
        iVar2 = strncmp(iVar12,"MICRON",6);
        if (iVar2 == 0) {
            iVar12 = *arg1;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1);
            if (((iVar2 == 0) && (*(arg1 + 0x133) < 8)) && ((1 << (*(arg1 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 == 0) {
                uStack_70 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_88 = 0;
                *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
                uStack_a0 = 0;
                uStack_96 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_58 = 0xe13b;
                uStack_50 = 0x2c;
                uStack_68 = *0x80012a8;
                uStack_60 = *0x80012b0;
                uStack_98 = 0xe7;
                uStack_97 = 0x40;
                uStack_95 = 0x10;
                uStack_94 = 1;
                iVar2 = sym.scsi_exec_req(arg1,&uStack_58,1,&uStack_98);
                if (iVar2 == 0) {
                    uStack_a0 = 0;
                    iVar2 = sym.scsi_exec_req(arg1,&uStack_68,2,iVar5);
                    if (iVar2 == 0) goto code_r0x08002fe4;
                    uVar8 = 0x8000d43;
                }
                else {
                    uVar8 = 0x80007af;
                }
code_r0x08003530:
                _printk(uVar8,iVar2);
                iVar2 = -5;
                goto code_r0x08002fe8;
            }
            goto code_r0x080033a4;
        }
        iVar2 = strncmp(iVar12,"SKhynix",7);
        if (iVar2 == 0) {
            iVar12 = *arg1;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1);
            if (((iVar2 == 0) && (*(arg1 + 0x133) < 8)) && ((1 << (*(arg1 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 != 0) goto code_r0x080033a4;
            *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
            __pm_runtime_resume(*(iVar12 + 0xa38) + 0x1b0,4);
            iVar2 = mi_ufshcd_read_desc_param(iVar12 + 0x9e8,9,0,0,iVar5,0x25);
            iVar7 = __pm_runtime_idle(*(iVar12 + 0xa38) + 0x1b0,4);
            if (iVar2 == 0) {
                unaff_x23 = iVar5 + 0x80;
                if (*(iVar12 + 0xad0) < 0x400) {
                    uStack_98 = 0;
                    uStack_97 = 0;
                    uStack_96 = 0;
                    uStack_95 = 0;
                    uStack_94 = 0;
                    uStack_93 = 0;
                    uStack_92 = 0;
                    uStack_90 = 0;
                    uStack_8c = 0;
                    iVar7 = sym.get_ufs_hba_data(iVar7);
                    if (unaff_x23 != 0) {
                        bVar1 = 0x3ff < *(iVar7 + 0xe8);
                        uStack_97 = 3;
                        if (bVar1) {
                            uStack_97 = 0xf;
                        }
                        uStack_96 = 0x58;
                        if (bVar1) {
                            uStack_96 = 0x53;
                        }
                        uVar11 = 0x52;
                        if (bVar1) {
                            uVar11 = 0x6e;
                        }
                        uStack_90 = CONCAT13(uVar11,uStack_90);
code_r0x0800359c:
                        uStack_98 = 0xd0;
                        uStack_a0 = 0;
                        iVar3 = sym.scsi_exec_req(arg1,&uStack_98,2,unaff_x23);
                        if (iVar3 != 0) {
                            _printk(0x80004e2,iVar3);
                        }
                    }
                }
                else {
                    uStack_98 = 0;
                    uStack_97 = 0;
                    uStack_96 = 0;
                    uStack_95 = 0;
                    uStack_94 = 0;
                    uStack_93 = 0;
                    uStack_92 = 0;
                    uStack_90 = 0;
                    uStack_8c = 0;
                    iVar7 = sym.get_ufs_hba_data(iVar7);
                    if (unaff_x23 != 0) {
                        bVar1 = 0x3ff < *(iVar7 + 0xe8);
                        uStack_97 = 3;
                        if (bVar1) {
                            uStack_97 = 0xf;
                        }
                        uStack_96 = 0x58;
                        if (bVar1) {
                            uStack_96 = 0x53;
                        }
                        uVar11 = 0x52;
                        if (bVar1) {
                            uVar11 = 0x6e;
                        }
                        uStack_90 = CONCAT13(uVar11,uStack_90);
                        goto code_r0x0800359c;
                    }
                }
            }
            goto code_r0x08002fe8;
        }
        pcVar10 = "NOT SUPPORTED %s\n";
        uVar6 = snprintf(param_3,0x1000,"NOT SUPPORTED %s\n",iVar12);
code_r0x080033bc:
        uVar6 = uVar6 & 0xffffffff;
    }
    mutex_unlock(obj.hr_lock);
    kfree(iVar5);
    scsi_autopm_put_device(arg1);
    iVar12 = iVar5;
    unaff_x22 = uVar6;
code_r0x080033e0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail(uVar6);
    iVar7 = auVar13._8_8_;
    arg1_00 = auVar13._0_8_;
    *extraout_x18 = sym.ufs_get_toshiba_hr;
    pcStack_d8 = sym.ufs_get_toshiba_hr;
    piStack_b0 = arg1;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    iVar5 = *arg1_00;
    puStack_e0 = &stack0xffffffffffffffc0;
    uStack_d0 = unaff_x23;
    uStack_c0 = unaff_x22;
    iStack_b8 = iVar12;
    iStack_a8 = param_3;
    uVar8 = _raw_spin_lock_irqsave(*(*(iVar5 + 0xa20) + 0x38));
    uVar4 = scsi_device_get(arg1_00);
    uVar6 = uVar4;
    if (((uVar4 == 0) && (*(arg1_00 + 0x133) < 8)) && ((1 << (*(arg1_00 + 0x133) & 0x1f) & 0xd0U) != 0)) {
        scsi_device_put(arg1_00);
        _printk(0x8000b89);
        uVar6 = 0xffffffed;
    }
    _raw_spin_unlock_irqrestore(*(*(iVar5 + 0xa20) + 0x38),uVar8);
    if (uVar6 == 0) {
        uStack_ec = 0;
        uStack_f4 = 0;
        *(*(iVar5 + 0xa20) + 600) = *(*(iVar5 + 0xa20) + 600) | 0x40;
        if (iVar7 == 0) {
            uVar6 = 0xffffffea;
        }
        else {
            pcVar10 = 0x2;
            uStack_f8 = 0x2c06912;
            iVar2 = sym.scsi_exec_req(arg1_00,&uStack_f8,2,iVar7);
            if (iVar2 == 0) {
                if (*(iVar7 + 1) != -0x40) {
                    _printk(0x8000424);
                }
                uVar6 = 0;
            }
            else {
                _printk(0x8000ed0,iVar2);
                uVar6 = 0xfffffffb;
            }
        }
        scsi_device_put(arg1_00);
        *(*(iVar5 + 0xa20) + 600) = *(*(iVar5 + 0xa20) + 600) & 0xffbf;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.err_state_show;
    puVar9 = get_ufs_data();
    uVar6 = 0;
    if (puVar9 != NULL) {
        iVar2 = snprintf(pcVar10,0x1000,0x8000b9c,*puVar9);
        uVar6 = iVar2;
    }
    return uVar6;
}


// ===== sym.dump_device_desc_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021c8 (size 8) =====

uint64_t sym.dump_device_desc_show.396ea8465668bb736eac439711679a60.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar12 = *(iVar7 + 0x5e0);
    iVar7 = sym.get_ufs_hba_data(param_1);
    pcVar10 = NULL;
    sym.ufs_read_desc_param(iVar7,0,0,0);
    iVar8 = __kmalloc(0,0xdc0);
    uVar2 = str.get_desc_info_fail_n._8_8_;
    uVar1 = str.get_desc_info_fail_n._0_8_;
    if (iVar8 == 0) {
        uVar9 = 0x13;
        param_3[0x10] = 'i';
        param_3[0x11] = 'l';
        param_3[0x12] = '\n';
        param_3[0x13] = '\0';
        *param_3 = uVar1;
        *(param_3 + 8) = uVar2;
    }
    else {
        __pm_runtime_resume(*(iVar7 + 0x50) + 0x1b0,4);
        iVar4 = mi_ufshcd_read_desc_param(iVar7,0,0,0,iVar8,0);
        __pm_runtime_idle(*(iVar7 + 0x50) + 0x1b0,4);
        if (iVar4 == 0) {
            iVar7 = 0;
            iVar4 = 0;
            do {
                iVar11 = *(iVar7 + 0x8001368);
                if (*(iVar7 + 0x800136c) == 4) {
                    uVar6 = (*(iVar8 + iVar11) & 0xff00ff00) >> 8 | (*(iVar8 + iVar11) & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                }
                else if (*(iVar7 + 0x800136c) == 2) {
                    uVar6 = *(iVar8 + iVar11) >> 8 | (*(iVar8 + iVar11) & 0xff00ff) << 8;
                }
                else {
                    uVar6 = *(iVar8 + iVar11);
                }
                pcVar10 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar5 = snprintf(param_3 + iVar4,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar11,
                                 *(iVar7 + 0x8001360),uVar6);
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar5 + iVar4;
            } while (iVar7 != 0x230);
            kfree(iVar8);
            uVar9 = iVar4;
        }
        else {
            pcVar10 = "dump_device_desc_show";
            _dev_err(*(iVar7 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar4);
            uVar9 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar12) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18 = sym.show_hba_show;
    iVar7 = sym.get_ufs_hba_data(iVar7);
    if (iVar7 != 0) {
        iVar8 = *(iVar7 + 0x100);
        uVar6 = snprintf(pcVar10,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar7 + 0xc0));
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar7 + 0xd0));
        iVar5 = snprintf(pcVar10 + (iVar4 + uVar6),0x1000,"hba->capabilities = 0x%x\n",*(iVar7 + 0xd8));
        uVar6 = iVar5 + iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->nutrs = %d\n",*(iVar7 + 0xdc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->nutmrs = %d\n",*(iVar7 + 0xe0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ufs_version = 0x%x\n",*(iVar7 + 0xe8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->irq = 0x%x\n",*(iVar7 + 0x110));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar7 + 0xaf0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar7 + 0x2a0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar7 + 0xc28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->eh_flags = 0x%x\n",*(iVar7 + 0x2a4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->intr_mask = 0x%x\n",*(iVar7 + 0x2a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar7 + 0x2ac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->errors = 0x%x\n",*(iVar7 + 0x370));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->uic_error = 0x%x\n",*(iVar7 + 0x374));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->saved_err = 0x%x\n",*(iVar7 + 0x378));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar7 + 0x37c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hibern8_exit_cnt = %d\n",*(iVar7 + 0x390));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar7 + 0x408));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar7 + 0x478));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar7 + 0x4e8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar7 + 0x558));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar7 + 0x5c8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar7 + 0x638));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar7 + 0x6a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar7 + 0x718));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar7 + 0x788));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar7 + 0x7f8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar7 + 0x948));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar7 + 0x9b8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar7 + 0xa28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_err_cnt_total = %d\n",*(iVar8 + 0x6c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar8 + 0x70));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar8 + 0x74));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar8 + 0x78));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar8 + 0x7c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar8 + 0x80));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_err_cnt_total = %d\n",*(iVar8 + 0x84));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar8 + 0x88));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar8 + 0x8c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar8 + 0x90));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar8 + 0x94));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_crc_err_cnt = %d\n",*(iVar8 + 0x98));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar8 + 0x9c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar8 + 0xa0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar8 + 0xa4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xa8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar8 + 0xb0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xb4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar8 + 0xb8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar8 + 0xbc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar8 + 0xc0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dme_err_cnt = %d\n",*(iVar8 + 0xc4));
        return iVar4 + uVar6;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar3)();
}


// ===== sym.err_reason_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021d0 (size 8) =====

int64_t sym.err_reason_show.396ea8465668bb736eac439711679a60.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_data();
    iVar3 = 0;
    if (iVar2 != 0) {
        iVar1 = snprintf(param_3,0x1000,"%s%s%s%s%s%s%s%s%s%s",iVar2 + 8,iVar2 + 0x28,iVar2 + 0x48,iVar2 + 0x68,
                         iVar2 + 0x88,iVar2 + 0xa8,iVar2 + 200,iVar2 + 0xe8,iVar2 + 0x108,iVar2 + 0x128);
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.dump_string_desc_serial_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021d8 (size 8) =====

uint64_t sym.dump_string_desc_serial_show.396ea8465668bb736eac439711679a60.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    char *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
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
    iVar7 = sym.get_ufs_hba_data(param_1);
    sym.ufs_get_string_desc(iVar7,&uStack_a8,0x80,0x16);
    pcVar10 = 0x8000508;
    iVar4 = snprintf(param_3,0x1000,0x8000508,&uStack_a8);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.dump_device_desc_show;
    iVar7 = sp_el0;
    iVar13 = *(iVar7 + 0x5e0);
    iVar7 = sym.get_ufs_hba_data(iVar8);
    pcVar11 = NULL;
    sym.ufs_read_desc_param(iVar7,0,0,0);
    iVar8 = __kmalloc(0,0xdc0);
    uVar2 = str.get_desc_info_fail_n._8_8_;
    uVar1 = str.get_desc_info_fail_n._0_8_;
    if (iVar8 == 0) {
        uVar9 = 0x13;
        pcVar10[0x10] = 'i';
        pcVar10[0x11] = 'l';
        pcVar10[0x12] = '\n';
        pcVar10[0x13] = '\0';
        *pcVar10 = uVar1;
        *(pcVar10 + 8) = uVar2;
    }
    else {
        __pm_runtime_resume(*(iVar7 + 0x50) + 0x1b0,4);
        iVar4 = mi_ufshcd_read_desc_param(iVar7,0,0,0,iVar8,0);
        __pm_runtime_idle(*(iVar7 + 0x50) + 0x1b0,4);
        if (iVar4 == 0) {
            iVar7 = 0;
            iVar4 = 0;
            do {
                iVar12 = *(iVar7 + 0x8001368);
                if (*(iVar7 + 0x800136c) == 4) {
                    uVar6 = (*(iVar8 + iVar12) & 0xff00ff00) >> 8 | (*(iVar8 + iVar12) & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                }
                else if (*(iVar7 + 0x800136c) == 2) {
                    uVar6 = *(iVar8 + iVar12) >> 8 | (*(iVar8 + iVar12) & 0xff00ff) << 8;
                }
                else {
                    uVar6 = *(iVar8 + iVar12);
                }
                pcVar11 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar5 = snprintf(pcVar10 + iVar4,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar12,
                                 *(iVar7 + 0x8001360),uVar6);
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar5 + iVar4;
            } while (iVar7 != 0x230);
            kfree(iVar8);
            uVar9 = iVar4;
        }
        else {
            pcVar11 = "dump_device_desc_show";
            _dev_err(*(iVar7 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar4);
            uVar9 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar13) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.show_hba_show;
    iVar7 = sym.get_ufs_hba_data(iVar7);
    if (iVar7 != 0) {
        iVar8 = *(iVar7 + 0x100);
        uVar6 = snprintf(pcVar11,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar7 + 0xc0));
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar7 + 0xd0));
        iVar5 = snprintf(pcVar11 + (iVar4 + uVar6),0x1000,"hba->capabilities = 0x%x\n",*(iVar7 + 0xd8));
        uVar6 = iVar5 + iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->nutrs = %d\n",*(iVar7 + 0xdc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->nutmrs = %d\n",*(iVar7 + 0xe0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ufs_version = 0x%x\n",*(iVar7 + 0xe8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->irq = 0x%x\n",*(iVar7 + 0x110));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar7 + 0xaf0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar7 + 0x2a0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar7 + 0xc28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->eh_flags = 0x%x\n",*(iVar7 + 0x2a4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->intr_mask = 0x%x\n",*(iVar7 + 0x2a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar7 + 0x2ac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->errors = 0x%x\n",*(iVar7 + 0x370));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->uic_error = 0x%x\n",*(iVar7 + 0x374));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->saved_err = 0x%x\n",*(iVar7 + 0x378));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar7 + 0x37c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hibern8_exit_cnt = %d\n",*(iVar7 + 0x390));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar7 + 0x408));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar7 + 0x478));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar7 + 0x4e8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar7 + 0x558));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar7 + 0x5c8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar7 + 0x638));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar7 + 0x6a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar7 + 0x718));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar7 + 0x788));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar7 + 0x7f8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar7 + 0x948));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar7 + 0x9b8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar7 + 0xa28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_err_cnt_total = %d\n",*(iVar8 + 0x6c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar8 + 0x70));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar8 + 0x74));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar8 + 0x78));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar8 + 0x7c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar8 + 0x80));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_err_cnt_total = %d\n",*(iVar8 + 0x84));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar8 + 0x88));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar8 + 0x8c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar8 + 0x90));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar8 + 0x94));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_crc_err_cnt = %d\n",*(iVar8 + 0x98));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar8 + 0x9c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar8 + 0xa0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar8 + 0xa4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xa8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar8 + 0xb0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xb4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar8 + 0xb8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar8 + 0xbc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar8 + 0xc0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dme_err_cnt = %d\n",*(iVar8 + 0xc4));
        return iVar4 + uVar6;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar3)();
}


// ===== sym.ddr_id_show.b7deb817153249e82db91ee7089b9035.cfi_jt @ 0x080021e0 (size 8) =====

int64_t sym.ddr_id_show.b7deb817153249e82db91ee7089b9035.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        sym.init_ddr_info();
    }
    iVar1 = snprintf(param_3,0x1000,"0x%02x\n",*(_segment.ehdr + 1));
    return iVar1;
}


// ===== sym.ddr_vendor_show.b7deb817153249e82db91ee7089b9035.cfi_jt @ 0x080021e8 (size 8) =====

int64_t sym.ddr_vendor_show.b7deb817153249e82db91ee7089b9035.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ushort uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        sym.init_ddr_info();
    }
    switch(*(_segment.ehdr + 1)) {
    case '\x01':
        uStack_30 = 0x474e55534d4153;
        break;
    case '\x03':
        uVar1 = 0x414449;
        uVar6 = 0x49504c45;
code_r0x08003cb4:
        uStack_30._4_4_ = CONCAT14(uStack_30._7_1_,uVar1) >> 8;
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar6);
        break;
    case '\x05':
        uVar5 = 0x41;
        uVar6 = 0x594e414e;
        goto code_r0x08003d00;
    case '\x06':
        uStack_30 = 0x58494e59484b53;
        break;
    case '\x0e':
        uVar5 = 0x4c;
        uVar6 = 0x45544e49;
code_r0x08003d00:
        uStack_30 = CONCAT44(CONCAT22(uStack_30._6_2_,uVar5),uVar6);
        break;
    case '\x13':
        uStack_30._4_4_ = uStack_30 >> 0x20 & 0xffffff00;
        uStack_30 = CONCAT44(uStack_30._4_4_,0x544d5843);
        break;
    default:
        if (*(_segment.ehdr + 1) == -1) {
            uVar1 = 0x4e4f52;
            uVar6 = 0x5243494d;
            goto code_r0x08003cb4;
        }
    case '\x02':
    case '\x04':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
        uStack_30 = 0x4e574f4e4b4e55;
    }
    uVar4 = 0x80011c0;
    iVar3 = snprintf(param_3,0x1000,0x80011c0,&uStack_30);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.ddr_type_show;
        if (_segment.ehdr == 0) {
            sym.init_ddr_info();
        }
        iVar3 = snprintf(uVar4,0x1000,"0x%0x\n",*(_segment.ehdr + 4));
        return iVar3;
    }
    return iVar3;
}


// ===== sym.ddr_type_show.b7deb817153249e82db91ee7089b9035.cfi_jt @ 0x080021f0 (size 8) =====

int64_t sym.ddr_type_show.b7deb817153249e82db91ee7089b9035.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        sym.init_ddr_info();
    }
    iVar1 = snprintf(param_3,0x1000,"0x%0x\n",*(_segment.ehdr + 4));
    return iVar1;
}


// ===== sym.err_state_show.396ea8465668bb736eac439711679a60.cfi_jt @ 0x080021f8 (size 8) =====

int64_t sym.err_state_show.396ea8465668bb736eac439711679a60.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = get_ufs_data();
    iVar3 = 0;
    if (puVar2 != NULL) {
        iVar1 = snprintf(param_3,0x1000,0x8000b9c,*puVar2);
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.__cfi_check_fail @ 0x08002200 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002244

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
    //switch table (4 cases) at 0x8000380
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002258);
    (*pcVar1)();
}


// ===== sym.get_ufs_hba_data @ 0x08002258 (size 144) =====

int64_t sym.get_ufs_hba_data(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == NULL) && (iVar1 = scsi_host_lookup(0), iVar1 != 0)) {
        _segment.ehdr = scsi_device_lookup(iVar1,0,0,0);
        _printk(0x8001129,*(*(*_segment.ehdr + 0xb8) + 0x108));
        scsi_device_put(_segment.ehdr);
        scsi_host_put(iVar1);
    }
    return *_segment.ehdr + 0x9e8;
}


// ===== sym.get_ufs_id @ 0x080022e8 (size 112) =====

uint64_t sym.get_ufs_id(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uchar *puVar10;
    uint64_t uVar11;
    char *pcVar12;
    char *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    ulong uStack_108;
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
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    char *pcStack_70;
    uchar uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar15 = *(iVar9 + 0x5e0);
    iVar9 = sym.get_ufs_hba_data(arg1);
    pcVar12 = NULL;
    sym.ufs_read_desc_param(iVar9,0,0,0x18);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iVar15) {
        return 0;
    }
    iVar15 = __stack_chk_fail(0);
    *extraout_x18 = sym.dump_health_desc_show;
    pcStack_48 = sym.dump_health_desc_show;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    iVar9 = sym.get_ufs_hba_data(iVar15);
    pcVar13 = NULL;
    sym.ufs_read_desc_param(iVar9,9,0,0);
    puVar10 = __kmalloc(uStack_5c,0xdc0);
    uVar3 = uStack_5c;
    uVar2 = str.get_health_info_fail_n._0_8_;
    if (puVar10 == NULL) {
        uVar11 = 0x15;
        uVar1 = CONCAT26(str.get_health_info_fail_n._14_2_,str.get_health_info_fail_n._8_6_);
        *(pcVar12 + 0xe) = CONCAT62(str.get_health_info_fail_n._16_6_,str.get_health_info_fail_n._14_2_);
        *pcVar12 = uVar2;
        *(pcVar12 + 8) = uVar1;
    }
    else {
        __pm_runtime_resume(*(iVar9 + 0x50) + 0x1b0,4);
        iVar5 = mi_ufshcd_read_desc_param(iVar9,9,0,0,puVar10,uVar3);
        __pm_runtime_idle(*(iVar9 + 0x50) + 0x1b0,4);
        if (iVar5 == 0) {
            pcVar13 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
            iVar6 = snprintf(pcVar12,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",0,"bLength",*puVar10
                            );
            iVar7 = snprintf(pcVar12 + iVar6,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",1,
                             "bDescriptorType",puVar10[1]);
            iVar5 = snprintf(pcVar12 + (iVar7 + iVar6),0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",2,
                             "bPreEOLInfo",puVar10[2]);
            iVar5 = iVar5 + iVar7 + iVar6;
            iVar6 = snprintf(pcVar12 + iVar5,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",3,
                             "bDeviceLifeTimeEstA",puVar10[3]);
            iVar6 = iVar6 + iVar5;
            iVar5 = snprintf(pcVar12 + iVar6,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",4,
                             "bDeviceLifeTimeEstB",puVar10[4]);
            uVar8 = iVar5 + iVar6;
            pcVar12 = uVar8;
            kfree(puVar10);
            uVar11 = uVar8;
        }
        else {
            pcVar13 = "dump_health_desc_show";
            _dev_err(*(iVar9 + 0x40),"%s: Failed reading  dump_health_desc_show, ret %d\n","dump_health_desc_show",
                     iVar5);
            kfree(puVar10);
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    iVar15 = __stack_chk_fail(uVar11);
    *extraout_x18_00 = sym.dump_string_desc_serial_show;
    pcStack_78 = sym.dump_string_desc_serial_show;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar12;
    iVar9 = sym.get_ufs_hba_data(iVar15);
    sym.ufs_get_string_desc(iVar9,&uStack_108,0x80,0x16);
    pcVar12 = 0x8000508;
    iVar5 = snprintf(pcVar13,0x1000,0x8000508,&uStack_108);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return iVar5;
    }
    iVar15 = __stack_chk_fail();
    *extraout_x18_01 = sym.dump_device_desc_show;
    iVar9 = sp_el0;
    iVar16 = *(iVar9 + 0x5e0);
    iVar9 = sym.get_ufs_hba_data(iVar15);
    pcVar13 = NULL;
    sym.ufs_read_desc_param(iVar9,0,0,0);
    iVar15 = __kmalloc(0,0xdc0);
    uVar1 = str.get_desc_info_fail_n._8_8_;
    uVar2 = str.get_desc_info_fail_n._0_8_;
    if (iVar15 == 0) {
        uVar11 = 0x13;
        pcVar12[0x10] = 'i';
        pcVar12[0x11] = 'l';
        pcVar12[0x12] = '\n';
        pcVar12[0x13] = '\0';
        *pcVar12 = uVar2;
        *(pcVar12 + 8) = uVar1;
    }
    else {
        __pm_runtime_resume(*(iVar9 + 0x50) + 0x1b0,4);
        iVar5 = mi_ufshcd_read_desc_param(iVar9,0,0,0,iVar15,0);
        __pm_runtime_idle(*(iVar9 + 0x50) + 0x1b0,4);
        if (iVar5 == 0) {
            iVar9 = 0;
            iVar5 = 0;
            do {
                iVar14 = *(iVar9 + 0x8001368);
                if (*(iVar9 + 0x800136c) == 4) {
                    uVar8 = (*(iVar15 + iVar14) & 0xff00ff00) >> 8 | (*(iVar15 + iVar14) & 0xff00ff) << 8;
                    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
                }
                else if (*(iVar9 + 0x800136c) == 2) {
                    uVar8 = *(iVar15 + iVar14) >> 8 | (*(iVar15 + iVar14) & 0xff00ff) << 8;
                }
                else {
                    uVar8 = *(iVar15 + iVar14);
                }
                pcVar13 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar6 = snprintf(pcVar12 + iVar5,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar14,
                                 *(iVar9 + 0x8001360),uVar8);
                iVar9 = iVar9 + 0x10;
                iVar5 = iVar6 + iVar5;
            } while (iVar9 != 0x230);
            kfree(iVar15);
            uVar11 = iVar5;
        }
        else {
            pcVar13 = "dump_device_desc_show";
            _dev_err(*(iVar9 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar5);
            uVar11 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iVar16) {
        return uVar11;
    }
    iVar9 = __stack_chk_fail(uVar11);
    *extraout_x18_02 = sym.show_hba_show;
    iVar9 = sym.get_ufs_hba_data(iVar9);
    if (iVar9 != 0) {
        iVar15 = *(iVar9 + 0x100);
        uVar8 = snprintf(pcVar13,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar9 + 0xc0));
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar9 + 0xd0));
        iVar6 = snprintf(pcVar13 + (iVar5 + uVar8),0x1000,"hba->capabilities = 0x%x\n",*(iVar9 + 0xd8));
        uVar8 = iVar6 + iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->nutrs = %d\n",*(iVar9 + 0xdc));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->nutmrs = %d\n",*(iVar9 + 0xe0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ufs_version = 0x%x\n",*(iVar9 + 0xe8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->irq = 0x%x\n",*(iVar9 + 0x110));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar9 + 0xaf0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar9 + 0x2a0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar9 + 0xc28));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->eh_flags = 0x%x\n",*(iVar9 + 0x2a4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->intr_mask = 0x%x\n",*(iVar9 + 0x2a8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar9 + 0x2ac));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->errors = 0x%x\n",*(iVar9 + 0x370));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->uic_error = 0x%x\n",*(iVar9 + 0x374));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->saved_err = 0x%x\n",*(iVar9 + 0x378));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar9 + 0x37c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"hibern8_exit_cnt = %d\n",*(iVar9 + 0x390));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar9 + 0x408));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar9 + 0x478));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar9 + 0x4e8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar9 + 0x558));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar9 + 0x5c8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar9 + 0x638));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar9 + 0x6a8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar9 + 0x718));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar9 + 0x788));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar9 + 0x7f8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar9 + 0x948));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar9 + 0x9b8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar9 + 0xa28));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_err_cnt_total = %d\n",*(iVar15 + 0x6c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar15 + 0x70));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar15 + 0x74));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar15 + 0x78));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar15 + 0x7c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar15 + 0x80));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_err_cnt_total = %d\n",*(iVar15 + 0x84));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar15 + 0x88));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar15 + 0x8c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar15 + 0x90));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar15 + 0x94));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_crc_err_cnt = %d\n",*(iVar15 + 0x98));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar15 + 0x9c));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar15 + 0xa0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar15 + 0xa4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar15 + 0xa8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar15 + 0xac));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar15 + 0xb0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar15 + 0xb4));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar15 + 0xb8));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar15 + 0xbc));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar15 + 0xc0));
        uVar8 = iVar5 + uVar8;
        iVar5 = snprintf(pcVar13 + uVar8,0x1000,"dme_err_cnt = %d\n",*(iVar15 + 0xc4));
        return iVar5 + uVar8;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar4)();
}


// ===== sym.dump_health_desc_show @ 0x08002358 (size 500) =====

uint64_t sym.dump_health_desc_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    uchar uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    char *pcVar12;
    char *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
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
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uchar uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_3c = 0;
    iVar8 = sym.get_ufs_hba_data(arg1);
    uVar11 = 0;
    sym.ufs_read_desc_param(iVar8,9,0,0);
    iVar9 = __kmalloc(uStack_3c,0xdc0);
    uVar3 = uStack_3c;
    uVar2 = str.get_health_info_fail_n._0_8_;
    if (iVar9 != 0) {
        __pm_runtime_resume(*(iVar8 + 0x50) + 0x1b0,4);
        mi_ufshcd_read_desc_param(iVar8,9,0,0,iVar9,uVar3);
        uVar10 = __pm_runtime_idle(*(iVar8 + 0x50) + 0x1b0,4);
        return uVar10;
    }
    uVar1 = CONCAT26(str.get_health_info_fail_n._14_2_,str.get_health_info_fail_n._8_6_);
    *(arg2 + 0xe) = CONCAT62(str.get_health_info_fail_n._16_6_,str.get_health_info_fail_n._14_2_);
    *arg2 = uVar2;
    *(arg2 + 8) = uVar1;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return 0x15;
    }
    iVar9 = __stack_chk_fail(0x15);
    *extraout_x18 = sym.dump_string_desc_serial_show;
    pcStack_58 = sym.dump_string_desc_serial_show;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
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
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = arg2;
    iVar8 = sym.get_ufs_hba_data(iVar9);
    sym.ufs_get_string_desc(iVar8,&uStack_e8,0x80,0x16);
    pcVar12 = 0x8000508;
    iVar5 = snprintf(uVar11,0x1000,0x8000508,&uStack_e8);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.dump_device_desc_show;
    iVar8 = sp_el0;
    iVar15 = *(iVar8 + 0x5e0);
    iVar8 = sym.get_ufs_hba_data(iVar9);
    pcVar13 = NULL;
    sym.ufs_read_desc_param(iVar8,0,0,0);
    iVar9 = __kmalloc(0,0xdc0);
    uVar11 = str.get_desc_info_fail_n._8_8_;
    uVar2 = str.get_desc_info_fail_n._0_8_;
    if (iVar9 == 0) {
        uVar10 = 0x13;
        pcVar12[0x10] = 'i';
        pcVar12[0x11] = 'l';
        pcVar12[0x12] = '\n';
        pcVar12[0x13] = '\0';
        *pcVar12 = uVar2;
        *(pcVar12 + 8) = uVar11;
    }
    else {
        __pm_runtime_resume(*(iVar8 + 0x50) + 0x1b0,4);
        iVar5 = mi_ufshcd_read_desc_param(iVar8,0,0,0,iVar9,0);
        __pm_runtime_idle(*(iVar8 + 0x50) + 0x1b0,4);
        if (iVar5 == 0) {
            iVar8 = 0;
            iVar5 = 0;
            do {
                iVar14 = *(iVar8 + 0x8001368);
                if (*(iVar8 + 0x800136c) == 4) {
                    uVar7 = (*(iVar9 + iVar14) & 0xff00ff00) >> 8 | (*(iVar9 + iVar14) & 0xff00ff) << 8;
                    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
                }
                else if (*(iVar8 + 0x800136c) == 2) {
                    uVar7 = *(iVar9 + iVar14) >> 8 | (*(iVar9 + iVar14) & 0xff00ff) << 8;
                }
                else {
                    uVar7 = *(iVar9 + iVar14);
                }
                pcVar13 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar6 = snprintf(pcVar12 + iVar5,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar14,
                                 *(iVar8 + 0x8001360),uVar7);
                iVar8 = iVar8 + 0x10;
                iVar5 = iVar6 + iVar5;
            } while (iVar8 != 0x230);
            kfree(iVar9);
            uVar10 = iVar5;
        }
        else {
            pcVar13 = "dump_device_desc_show";
            _dev_err(*(iVar8 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar5);
            uVar10 = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar15) {
        return uVar10;
    }
    iVar8 = __stack_chk_fail(uVar10);
    *extraout_x18_01 = sym.show_hba_show;
    iVar8 = sym.get_ufs_hba_data(iVar8);
    if (iVar8 != 0) {
        iVar9 = *(iVar8 + 0x100);
        uVar7 = snprintf(pcVar13,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar8 + 0xc0));
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar8 + 0xd0));
        iVar6 = snprintf(pcVar13 + (iVar5 + uVar7),0x1000,"hba->capabilities = 0x%x\n",*(iVar8 + 0xd8));
        uVar7 = iVar6 + iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->nutrs = %d\n",*(iVar8 + 0xdc));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->nutmrs = %d\n",*(iVar8 + 0xe0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->ufs_version = 0x%x\n",*(iVar8 + 0xe8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->irq = 0x%x\n",*(iVar8 + 0x110));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar8 + 0xaf0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar8 + 0x2a0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar8 + 0xc28));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->eh_flags = 0x%x\n",*(iVar8 + 0x2a4));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->intr_mask = 0x%x\n",*(iVar8 + 0x2a8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar8 + 0x2ac));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->errors = 0x%x\n",*(iVar8 + 0x370));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->uic_error = 0x%x\n",*(iVar8 + 0x374));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->saved_err = 0x%x\n",*(iVar8 + 0x378));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar8 + 0x37c));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"hibern8_exit_cnt = %d\n",*(iVar8 + 0x390));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar8 + 0x408));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar8 + 0x478));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar8 + 0x4e8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar8 + 0x558));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar8 + 0x5c8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar8 + 0x638));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar8 + 0x6a8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar8 + 0x718));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar8 + 0x788));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar8 + 0x7f8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar8 + 0x948));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar8 + 0x9b8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar8 + 0xa28));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_err_cnt_total = %d\n",*(iVar9 + 0x6c));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar9 + 0x70));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar9 + 0x74));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar9 + 0x78));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar9 + 0x7c));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar9 + 0x80));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_err_cnt_total = %d\n",*(iVar9 + 0x84));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar9 + 0x88));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar9 + 0x8c));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar9 + 0x90));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar9 + 0x94));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_crc_err_cnt = %d\n",*(iVar9 + 0x98));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar9 + 0x9c));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar9 + 0xa0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar9 + 0xa4));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar9 + 0xa8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar9 + 0xac));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar9 + 0xb0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar9 + 0xb4));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar9 + 0xb8));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar9 + 0xbc));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar9 + 0xc0));
        uVar7 = iVar5 + uVar7;
        iVar5 = snprintf(pcVar13 + uVar7,0x1000,"dme_err_cnt = %d\n",*(iVar9 + 0xc4));
        return iVar5 + uVar7;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar4)();
}


// ===== sym.dump_string_desc_serial_show @ 0x0800254c (size 172) =====

uint64_t sym.dump_string_desc_serial_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    char *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
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
    iVar7 = sym.get_ufs_hba_data(arg1);
    sym.ufs_get_string_desc(iVar7,&uStack_a8,0x80,0x16);
    pcVar10 = 0x8000508;
    iVar4 = snprintf(arg2,0x1000,0x8000508,&uStack_a8);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.dump_device_desc_show;
    iVar7 = sp_el0;
    iVar13 = *(iVar7 + 0x5e0);
    iVar7 = sym.get_ufs_hba_data(iVar8);
    pcVar11 = NULL;
    sym.ufs_read_desc_param(iVar7,0,0,0);
    iVar8 = __kmalloc(0,0xdc0);
    uVar2 = str.get_desc_info_fail_n._8_8_;
    uVar1 = str.get_desc_info_fail_n._0_8_;
    if (iVar8 == 0) {
        uVar9 = 0x13;
        pcVar10[0x10] = 'i';
        pcVar10[0x11] = 'l';
        pcVar10[0x12] = '\n';
        pcVar10[0x13] = '\0';
        *pcVar10 = uVar1;
        *(pcVar10 + 8) = uVar2;
    }
    else {
        __pm_runtime_resume(*(iVar7 + 0x50) + 0x1b0,4);
        iVar4 = mi_ufshcd_read_desc_param(iVar7,0,0,0,iVar8,0);
        __pm_runtime_idle(*(iVar7 + 0x50) + 0x1b0,4);
        if (iVar4 == 0) {
            iVar7 = 0;
            iVar4 = 0;
            do {
                iVar12 = *(iVar7 + 0x8001368);
                if (*(iVar7 + 0x800136c) == 4) {
                    uVar6 = (*(iVar8 + iVar12) & 0xff00ff00) >> 8 | (*(iVar8 + iVar12) & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                }
                else if (*(iVar7 + 0x800136c) == 2) {
                    uVar6 = *(iVar8 + iVar12) >> 8 | (*(iVar8 + iVar12) & 0xff00ff) << 8;
                }
                else {
                    uVar6 = *(iVar8 + iVar12);
                }
                pcVar11 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar5 = snprintf(pcVar10 + iVar4,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar12,
                                 *(iVar7 + 0x8001360),uVar6);
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar5 + iVar4;
            } while (iVar7 != 0x230);
            kfree(iVar8);
            uVar9 = iVar4;
        }
        else {
            pcVar11 = "dump_device_desc_show";
            _dev_err(*(iVar7 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar4);
            uVar9 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar13) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18_00 = sym.show_hba_show;
    iVar7 = sym.get_ufs_hba_data(iVar7);
    if (iVar7 != 0) {
        iVar8 = *(iVar7 + 0x100);
        uVar6 = snprintf(pcVar11,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar7 + 0xc0));
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar7 + 0xd0));
        iVar5 = snprintf(pcVar11 + (iVar4 + uVar6),0x1000,"hba->capabilities = 0x%x\n",*(iVar7 + 0xd8));
        uVar6 = iVar5 + iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->nutrs = %d\n",*(iVar7 + 0xdc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->nutmrs = %d\n",*(iVar7 + 0xe0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ufs_version = 0x%x\n",*(iVar7 + 0xe8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->irq = 0x%x\n",*(iVar7 + 0x110));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar7 + 0xaf0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar7 + 0x2a0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar7 + 0xc28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->eh_flags = 0x%x\n",*(iVar7 + 0x2a4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->intr_mask = 0x%x\n",*(iVar7 + 0x2a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar7 + 0x2ac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->errors = 0x%x\n",*(iVar7 + 0x370));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->uic_error = 0x%x\n",*(iVar7 + 0x374));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->saved_err = 0x%x\n",*(iVar7 + 0x378));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar7 + 0x37c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"hibern8_exit_cnt = %d\n",*(iVar7 + 0x390));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar7 + 0x408));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar7 + 0x478));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar7 + 0x4e8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar7 + 0x558));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar7 + 0x5c8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar7 + 0x638));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar7 + 0x6a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar7 + 0x718));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar7 + 0x788));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar7 + 0x7f8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar7 + 0x948));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar7 + 0x9b8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar7 + 0xa28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_err_cnt_total = %d\n",*(iVar8 + 0x6c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar8 + 0x70));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar8 + 0x74));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar8 + 0x78));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar8 + 0x7c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar8 + 0x80));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_err_cnt_total = %d\n",*(iVar8 + 0x84));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar8 + 0x88));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar8 + 0x8c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar8 + 0x90));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar8 + 0x94));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_crc_err_cnt = %d\n",*(iVar8 + 0x98));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar8 + 0x9c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar8 + 0xa0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar8 + 0xa4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xa8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar8 + 0xb0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xb4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar8 + 0xb8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar8 + 0xbc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar8 + 0xc0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar11 + uVar6,0x1000,"dme_err_cnt = %d\n",*(iVar8 + 0xc4));
        return iVar4 + uVar6;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar3)();
}


// ===== sym.dump_device_desc_show @ 0x080025f8 (size 440) =====

uint64_t sym.dump_device_desc_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar12 = *(iVar7 + 0x5e0);
    iVar7 = sym.get_ufs_hba_data(arg1);
    pcVar10 = NULL;
    sym.ufs_read_desc_param(iVar7,0,0,0);
    iVar8 = __kmalloc(0,0xdc0);
    uVar2 = str.get_desc_info_fail_n._8_8_;
    uVar1 = str.get_desc_info_fail_n._0_8_;
    if (iVar8 == 0) {
        uVar9 = 0x13;
        *(arg2 + 0x10) = 0xa6c69;
        *arg2 = uVar1;
        *(arg2 + 8) = uVar2;
    }
    else {
        __pm_runtime_resume(*(iVar7 + 0x50) + 0x1b0,4);
        iVar4 = mi_ufshcd_read_desc_param(iVar7,0,0,0,iVar8,0);
        __pm_runtime_idle(*(iVar7 + 0x50) + 0x1b0,4);
        if (iVar4 == 0) {
            iVar7 = 0;
            iVar4 = 0;
            do {
                iVar11 = *(iVar7 + 0x8001368);
                if (*(iVar7 + 0x800136c) == 4) {
                    uVar6 = (*(iVar8 + iVar11) & 0xff00ff00) >> 8 | (*(iVar8 + iVar11) & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                }
                else if (*(iVar7 + 0x800136c) == 2) {
                    uVar6 = *(iVar8 + iVar11) >> 8 | (*(iVar8 + iVar11) & 0xff00ff) << 8;
                }
                else {
                    uVar6 = *(iVar8 + iVar11);
                }
                pcVar10 = "Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n";
                iVar5 = snprintf(arg2 + iVar4,0x1000,"Device Descriptor[Byte offset 0x%x]: %s = 0x%x\n",iVar11,
                                 *(iVar7 + 0x8001360),uVar6);
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar5 + iVar4;
            } while (iVar7 != 0x230);
            kfree(iVar8);
            uVar9 = iVar4;
        }
        else {
            pcVar10 = "dump_device_desc_show";
            _dev_err(*(iVar7 + 0x40),"%s: Failed reading dump_device_desc_show, ret %d\n","dump_device_desc_show",
                     iVar4);
            uVar9 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar12) {
        return uVar9;
    }
    iVar7 = __stack_chk_fail(uVar9);
    *extraout_x18 = sym.show_hba_show;
    iVar7 = sym.get_ufs_hba_data(iVar7);
    if (iVar7 != 0) {
        iVar8 = *(iVar7 + 0x100);
        uVar6 = snprintf(pcVar10,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar7 + 0xc0));
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar7 + 0xd0));
        iVar5 = snprintf(pcVar10 + (iVar4 + uVar6),0x1000,"hba->capabilities = 0x%x\n",*(iVar7 + 0xd8));
        uVar6 = iVar5 + iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->nutrs = %d\n",*(iVar7 + 0xdc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->nutmrs = %d\n",*(iVar7 + 0xe0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ufs_version = 0x%x\n",*(iVar7 + 0xe8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->irq = 0x%x\n",*(iVar7 + 0x110));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar7 + 0xaf0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar7 + 0x2a0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar7 + 0xc28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->eh_flags = 0x%x\n",*(iVar7 + 0x2a4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->intr_mask = 0x%x\n",*(iVar7 + 0x2a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar7 + 0x2ac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->errors = 0x%x\n",*(iVar7 + 0x370));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->uic_error = 0x%x\n",*(iVar7 + 0x374));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->saved_err = 0x%x\n",*(iVar7 + 0x378));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar7 + 0x37c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"hibern8_exit_cnt = %d\n",*(iVar7 + 0x390));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar7 + 0x408));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar7 + 0x478));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar7 + 0x4e8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar7 + 0x558));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar7 + 0x5c8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar7 + 0x638));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar7 + 0x6a8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar7 + 0x718));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar7 + 0x788));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar7 + 0x7f8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar7 + 0x948));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar7 + 0x9b8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar7 + 0xa28));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_err_cnt_total = %d\n",*(iVar8 + 0x6c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar8 + 0x70));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar8 + 0x74));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar8 + 0x78));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar8 + 0x7c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar8 + 0x80));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_err_cnt_total = %d\n",*(iVar8 + 0x84));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar8 + 0x88));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar8 + 0x8c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar8 + 0x90));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar8 + 0x94));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_crc_err_cnt = %d\n",*(iVar8 + 0x98));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar8 + 0x9c));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar8 + 0xa0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar8 + 0xa4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xa8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xac));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar8 + 0xb0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar8 + 0xb4));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar8 + 0xb8));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar8 + 0xbc));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar8 + 0xc0));
        uVar6 = iVar4 + uVar6;
        iVar4 = snprintf(pcVar10 + uVar6,0x1000,"dme_err_cnt = %d\n",*(iVar8 + 0xc4));
        return iVar4 + uVar6;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar3)();
}


// ===== sym.show_hba_show @ 0x080027b0 (size 1584) =====

int sym.show_hba_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sym.get_ufs_hba_data(arg1);
    if (iVar5 != 0) {
        iVar6 = *(iVar5 + 0x100);
        uVar2 = snprintf(arg2,0x1000,"hba->outstanding_tasks = 0x%x\n",*(iVar5 + 0xc0));
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->outstanding_reqs = 0x%x\n",*(iVar5 + 0xd0));
        iVar4 = snprintf(arg2 + iVar3 + uVar2,0x1000,"hba->capabilities = 0x%x\n",*(iVar5 + 0xd8));
        uVar2 = iVar4 + iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->nutrs = %d\n",*(iVar5 + 0xdc));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->nutmrs = %d\n",*(iVar5 + 0xe0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->ufs_version = 0x%x\n",*(iVar5 + 0xe8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->irq = 0x%x\n",*(iVar5 + 0x110));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->auto_bkops_enabled = %d\n",*(iVar5 + 0xaf0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->ufshcd_state = 0x%x\n",*(iVar5 + 0x2a0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->clk_gating.state = 0x%x\n",*(iVar5 + 0xc28));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->eh_flags = 0x%x\n",*(iVar5 + 0x2a4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->intr_mask = 0x%x\n",*(iVar5 + 0x2a8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->ee_ctrl_mask = 0x%x\n",*(iVar5 + 0x2ac));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->errors = 0x%x\n",*(iVar5 + 0x370));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->uic_error = 0x%x\n",*(iVar5 + 0x374));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->saved_err = 0x%x\n",*(iVar5 + 0x378));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hba->saved_uic_err = 0x%x\n",*(iVar5 + 0x37c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"hibern8_exit_cnt = %d\n",*(iVar5 + 0x390));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_pa_error_cnt = 0x%x\n",*(iVar5 + 0x408));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_dl_error_cnt = 0x%x\n",*(iVar5 + 0x478));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_nl_error_cnt = 0x%x\n",*(iVar5 + 0x4e8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_tl_error_cnt = 0x%x\n",*(iVar5 + 0x558));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_dme_error_cnt = 0x%x\n",*(iVar5 + 0x5c8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_auto_hibern8_cnt = 0x%x\n",*(iVar5 + 0x638));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_fatal_error_cnt= 0x%x\n",*(iVar5 + 0x6a8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_link_startup_fail_cnt = 0x%x\n",*(iVar5 + 0x718));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_resume_error_cnt = 0x%x\n",*(iVar5 + 0x788));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_suspend_error_cnt = 0x%x\n",*(iVar5 + 0x7f8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_device_reset_cnt = 0x%x\n",*(iVar5 + 0x948));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_host_reset_cnt = 0x%x\n",*(iVar5 + 0x9b8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"ufs_event_abort_cnt = 0x%x\n",*(iVar5 + 0xa28));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_err_cnt_total = %d\n",*(iVar6 + 0x6c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_lane_0_err_cnt = %d\n",*(iVar6 + 0x70));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_lane_1_err_cnt = %d\n",*(iVar6 + 0x74));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_lane_2_err_cnt = %d\n",*(iVar6 + 0x78));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_lane_3_err_cnt = %d\n",*(iVar6 + 0x7c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"pa_line_reset_err_cnt = %d\n",*(iVar6 + 0x80));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_err_cnt_total = %d\n",*(iVar6 + 0x84));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_nac_received_err_cnt = %d\n",*(iVar6 + 0x88));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_tcx_replay_timer_expired_err_cnt = %d\n",*(iVar6 + 0x8c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_afcx_request_timer_expired_err_cnt = %d\n",*(iVar6 + 0x90));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_fcx_protection_timer_expired_err_cnt = %d\n",*(iVar6 + 0x94));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_crc_err_cnt = %d\n",*(iVar6 + 0x98));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dll_rx_buffer_overflow_err_cnt = %d\n",*(iVar6 + 0x9c));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_max_frame_length_exceeded_err_cnt = %d\n",*(iVar6 + 0xa0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_wrong_sequence_number_err_cnt = %d\n",*(iVar6 + 0xa4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_afc_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xa8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_nac_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xac));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_eof_syntax_err_cnt = %d\n",*(iVar6 + 0xb0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_frame_syntax_err_cnt = %d\n",*(iVar6 + 0xb4));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_bad_ctrl_symbol_type_err_cnt = %d\n",*(iVar6 + 0xb8));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_pa_init_err_cnt = %d\n",*(iVar6 + 0xbc));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dl_pa_error_ind_received = %d\n",*(iVar6 + 0xc0));
        uVar2 = iVar3 + uVar2;
        iVar3 = snprintf(arg2 + uVar2,0x1000,"dme_err_cnt = %d\n",*(iVar6 + 0xc4));
        return iVar3 + uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002de0);
    (*pcVar1)();
}


// ===== sym.hr_show @ 0x08002de0 (size 2332) =====

uint64_t sym.hr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *arg1_00;
    bool bVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *arg1_01;
    ulong uVar8;
    ulong *puVar9;
    char *pcVar10;
    uchar uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    uint64_t unaff_x22;
    uint64_t unaff_x23;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar13 [16];
    uint uStack_f8;
    ulong uStack_f4;
    uint uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    uchar uStack_98;
    uchar uStack_97;
    uchar uStack_96;
    uchar uStack_95;
    uchar uStack_94;
    uchar uStack_93;
    ushort uStack_92;
    uint uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar12 = 0x8000000;
    iStack_48 = *(iVar5 + 0x5e0);
    if ((_segment.ehdr == NULL) && (iVar5 = scsi_host_lookup(0), noname_1 = extraout_q0, iVar5 != 0)) {
        _segment.ehdr = scsi_device_lookup(iVar5,0,0,0);
        _printk(0x8001129,*(*(*_segment.ehdr + 0xb8) + 0x108));
        scsi_device_put(_segment.ehdr);
        noname_1 = scsi_host_put(iVar5);
    }
    arg1_00 = _segment.ehdr;
    scsi_autopm_get_device(noname_1,_segment.ehdr);
    pcVar10 = 0x200;
    iVar5 = kmem_cache_alloc_trace(_seq_lseek,0xdc0,0x200);
    if (iVar5 == 0) {
        _printk(0x8000751);
        uVar6 = 0xfffffffffffffff4;
        goto code_r0x080033e0;
    }
    mutex_lock(obj.hr_lock);
    iVar12 = arg1_00[0x1f];
    iVar2 = strncmp(iVar12,0x8000801,3);
    if (iVar2 == 0) {
        iVar12 = *arg1_00;
        unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
        iVar2 = scsi_device_get(arg1_00);
        if (((iVar2 == 0) && (*(arg1_00 + 0x133) < 8)) && ((1 << (*(arg1_00 + 0x133) & 0x1f) & 0xd0U) != 0)) {
            scsi_device_put(arg1_00);
            _printk(0x8000b89);
            iVar2 = -0x13;
        }
        _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
        if (iVar2 != 0) goto code_r0x080033a4;
        uStack_98 = 0x3c;
        uStack_97 = 1;
        uStack_96 = 1;
        uStack_95 = 0x7d;
        uStack_94 = 0x9c;
        uStack_93 = 0x69;
        uStack_92 = 0x200;
        uStack_90 = 0;
        uStack_8c = 0;
        *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
        uStack_a0 = 0;
        iVar2 = sym.scsi_exec_req(arg1_00,&uStack_98,2,iVar5);
        if (iVar2 != 0) {
            uVar8 = 0x8000d21;
            goto code_r0x08003530;
        }
code_r0x08002fe4:
        iVar2 = 0;
code_r0x08002fe8:
        scsi_device_put(arg1_00);
        *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) & 0xffbf;
joined_r0x08002f1c:
        if (iVar2 != 0) {
code_r0x080033a4:
            pcVar10 = "Fail to get hr, err is: %d\n";
            uVar6 = snprintf(arg2,0x1000,"Fail to get hr, err is: %d\n",iVar2);
            goto code_r0x080033bc;
        }
        iVar12 = 0;
        unaff_x23 = 0;
        do {
            pcVar10 = "%02x";
            iVar2 = snprintf(arg2 + unaff_x23,0x1000,"%02x",*(iVar5 + iVar12));
            iVar12 = iVar12 + 1;
            uVar4 = iVar2 + unaff_x23;
            unaff_x23 = uVar4;
        } while (iVar12 != 0x200);
        uVar6 = uVar4 + 1;
        *(arg2 + uVar4) = 10;
    }
    else {
        iVar2 = strncmp(iVar12,"TOSHIBA",7);
        if ((iVar2 == 0) || (iVar2 = strncmp(iVar12,"KIOXIA",6), iVar2 == 0)) {
            iVar2 = sym.ufs_get_toshiba_hr(arg1_00,iVar5);
            goto joined_r0x08002f1c;
        }
        iVar2 = strncmp(iVar12,"SAMSUNG",7);
        if (iVar2 == 0) {
            iVar12 = *arg1_00;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1_00);
            if (((iVar2 == 0) && (*(arg1_00 + 0x133) < 8)) && ((1 << (*(arg1_00 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1_00);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 != 0) goto code_r0x080033a4;
            uStack_96 = 0;
            uStack_95 = 0;
            uStack_92 = 0;
            uStack_90 = 0;
            uStack_98 = 0xc0;
            uStack_97 = 0x40;
            uStack_94 = 1;
            uStack_93 = 0xc;
            *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
            uStack_8c = 0x1c000000;
            uStack_a0 = 0;
            iVar2 = sym.scsi_exec_req(arg1_00,&uStack_98,2,iVar5);
            if (iVar2 != 0) {
                uVar8 = 0x8000637;
                goto code_r0x08003530;
            }
            uStack_98 = 0xc0;
            uStack_97 = 0;
            uStack_96 = 0x5c;
            uStack_95 = 0x38;
            uStack_94 = 0x23;
            uStack_93 = 0xae;
            uStack_92 = 0x6867;
            uStack_90 = 0x72;
            uStack_8c = 0;
            uStack_a0 = 0;
            iVar2 = sym.scsi_exec_req(arg1_00,&uStack_98,3,0);
            if (iVar2 == 0) {
code_r0x08003154:
                uStack_98 = 0;
                uStack_97 = 0;
                uStack_96 = 0;
                uStack_95 = 0;
                uStack_94 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                if (iVar5 + 0x80 == 0) {
                    uVar8 = 0xffffffea;
code_r0x080036b8:
                    _printk(0x8000c9e,uVar8);
                }
                else {
                    uStack_98 = 0xc0;
                    uStack_97 = 0x40;
                    uStack_94 = 1;
                    uStack_93 = 10;
                    uStack_8c = 0x4c000000;
                    uStack_a0 = 0;
                    iVar2 = sym.scsi_exec_req(arg1_00,&uStack_98,2,iVar5 + 0x80);
                    if (iVar2 != 0) {
                        _printk(0x8000637,iVar2);
                        uVar8 = 0xfffffffb;
                        goto code_r0x080036b8;
                    }
                }
                uStack_96 = 0;
                uStack_95 = 0;
                uStack_94 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_98 = 0xc0;
                uStack_97 = 1;
                uStack_a0 = 0;
                iVar3 = sym.scsi_exec_req(arg1_00,&uStack_98,3,0);
                iVar2 = 0;
                if (iVar3 == 0) goto code_r0x08002fe8;
                _printk(0x8000782,iVar3);
                uVar8 = 0x80008aa;
            }
            else {
                _printk(0x8000782,iVar2);
                _printk(0x8000df9);
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_98 = 0xc0;
                uStack_97 = 3;
                uStack_96 = 0x67;
                uStack_95 = 0x68;
                uStack_94 = 0x72;
                uStack_a0 = 0;
                iVar3 = sym.scsi_exec_req(arg1_00,&uStack_98,3,0);
                if (iVar3 == 0) {
                    uStack_98 = 0xc0;
                    uStack_97 = 0;
                    uStack_96 = 0x5c;
                    uStack_95 = 0x38;
                    uStack_94 = 0x23;
                    uStack_93 = 0xae;
                    uStack_92 = 0x6867;
                    uStack_90 = 0x72;
                    uStack_8c = 0;
                    uStack_a0 = 0;
                    iVar3 = sym.scsi_exec_req(arg1_00,&uStack_98,3,0);
                    if (iVar3 == 0) goto code_r0x08003154;
                    _printk(0x8000782,iVar3);
                    uVar8 = 0x80006d9;
                }
                else {
                    _printk(0x8000cbc,iVar3);
                    uVar8 = 0x8000459;
                }
            }
            _printk(uVar8,iVar3);
            goto code_r0x08002fe4;
        }
        iVar2 = strncmp(iVar12,"MICRON",6);
        if (iVar2 == 0) {
            iVar12 = *arg1_00;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1_00);
            if (((iVar2 == 0) && (*(arg1_00 + 0x133) < 8)) && ((1 << (*(arg1_00 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1_00);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 == 0) {
                uStack_70 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_88 = 0;
                *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
                uStack_a0 = 0;
                uStack_96 = 0;
                uStack_93 = 0;
                uStack_92 = 0;
                uStack_58 = 0xe13b;
                uStack_50 = 0x2c;
                uStack_68 = *0x80012a8;
                uStack_60 = *0x80012b0;
                uStack_98 = 0xe7;
                uStack_97 = 0x40;
                uStack_95 = 0x10;
                uStack_94 = 1;
                iVar2 = sym.scsi_exec_req(arg1_00,&uStack_58,1,&uStack_98);
                if (iVar2 == 0) {
                    uStack_a0 = 0;
                    iVar2 = sym.scsi_exec_req(arg1_00,&uStack_68,2,iVar5);
                    if (iVar2 == 0) goto code_r0x08002fe4;
                    uVar8 = 0x8000d43;
                }
                else {
                    uVar8 = 0x80007af;
                }
code_r0x08003530:
                _printk(uVar8,iVar2);
                iVar2 = -5;
                goto code_r0x08002fe8;
            }
            goto code_r0x080033a4;
        }
        iVar2 = strncmp(iVar12,"SKhynix",7);
        if (iVar2 == 0) {
            iVar12 = *arg1_00;
            unaff_x23 = _raw_spin_lock_irqsave(*(*(iVar12 + 0xa20) + 0x38));
            iVar2 = scsi_device_get(arg1_00);
            if (((iVar2 == 0) && (*(arg1_00 + 0x133) < 8)) && ((1 << (*(arg1_00 + 0x133) & 0x1f) & 0xd0U) != 0)) {
                scsi_device_put(arg1_00);
                _printk(0x8000b89);
                iVar2 = -0x13;
            }
            _raw_spin_unlock_irqrestore(*(*(iVar12 + 0xa20) + 0x38),unaff_x23);
            if (iVar2 != 0) goto code_r0x080033a4;
            *(*(iVar12 + 0xa20) + 600) = *(*(iVar12 + 0xa20) + 600) | 0x40;
            __pm_runtime_resume(*(iVar12 + 0xa38) + 0x1b0,4);
            iVar2 = mi_ufshcd_read_desc_param(iVar12 + 0x9e8,9,0,0,iVar5,0x25);
            iVar7 = __pm_runtime_idle(*(iVar12 + 0xa38) + 0x1b0,4);
            if (iVar2 == 0) {
                unaff_x23 = iVar5 + 0x80;
                if (*(iVar12 + 0xad0) < 0x400) {
                    uStack_98 = 0;
                    uStack_97 = 0;
                    uStack_96 = 0;
                    uStack_95 = 0;
                    uStack_94 = 0;
                    uStack_93 = 0;
                    uStack_92 = 0;
                    uStack_90 = 0;
                    uStack_8c = 0;
                    iVar7 = sym.get_ufs_hba_data(iVar7);
                    if (unaff_x23 != 0) {
                        bVar1 = 0x3ff < *(iVar7 + 0xe8);
                        uStack_97 = 3;
                        if (bVar1) {
                            uStack_97 = 0xf;
                        }
                        uStack_96 = 0x58;
                        if (bVar1) {
                            uStack_96 = 0x53;
                        }
                        uVar11 = 0x52;
                        if (bVar1) {
                            uVar11 = 0x6e;
                        }
                        uStack_90 = CONCAT13(uVar11,uStack_90);
code_r0x0800359c:
                        uStack_98 = 0xd0;
                        uStack_a0 = 0;
                        iVar3 = sym.scsi_exec_req(arg1_00,&uStack_98,2,unaff_x23);
                        if (iVar3 != 0) {
                            _printk(0x80004e2,iVar3);
                        }
                    }
                }
                else {
                    uStack_98 = 0;
                    uStack_97 = 0;
                    uStack_96 = 0;
                    uStack_95 = 0;
                    uStack_94 = 0;
                    uStack_93 = 0;
                    uStack_92 = 0;
                    uStack_90 = 0;
                    uStack_8c = 0;
                    iVar7 = sym.get_ufs_hba_data(iVar7);
                    if (unaff_x23 != 0) {
                        bVar1 = 0x3ff < *(iVar7 + 0xe8);
                        uStack_97 = 3;
                        if (bVar1) {
                            uStack_97 = 0xf;
                        }
                        uStack_96 = 0x58;
                        if (bVar1) {
                            uStack_96 = 0x53;
                        }
                        uVar11 = 0x52;
                        if (bVar1) {
                            uVar11 = 0x6e;
                        }
                        uStack_90 = CONCAT13(uVar11,uStack_90);
                        goto code_r0x0800359c;
                    }
                }
            }
            goto code_r0x08002fe8;
        }
        pcVar10 = "NOT SUPPORTED %s\n";
        uVar6 = snprintf(arg2,0x1000,"NOT SUPPORTED %s\n",iVar12);
code_r0x080033bc:
        uVar6 = uVar6 & 0xffffffff;
    }
    mutex_unlock(obj.hr_lock);
    kfree(iVar5);
    scsi_autopm_put_device(arg1_00);
    iVar12 = iVar5;
    unaff_x22 = uVar6;
code_r0x080033e0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail(uVar6);
    iVar7 = auVar13._8_8_;
    arg1_01 = auVar13._0_8_;
    *extraout_x18 = sym.ufs_get_toshiba_hr;
    pcStack_d8 = sym.ufs_get_toshiba_hr;
    piStack_b0 = arg1_00;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    iVar5 = *arg1_01;
    puStack_e0 = &stack0xffffffffffffffc0;
    uStack_d0 = unaff_x23;
    uStack_c0 = unaff_x22;
    iStack_b8 = iVar12;
    iStack_a8 = arg2;
    uVar8 = _raw_spin_lock_irqsave(*(*(iVar5 + 0xa20) + 0x38));
    uVar4 = scsi_device_get(arg1_01);
    uVar6 = uVar4;
    if (((uVar4 == 0) && (*(arg1_01 + 0x133) < 8)) && ((1 << (*(arg1_01 + 0x133) & 0x1f) & 0xd0U) != 0)) {
        scsi_device_put(arg1_01);
        _printk(0x8000b89);
        uVar6 = 0xffffffed;
    }
    _raw_spin_unlock_irqrestore(*(*(iVar5 + 0xa20) + 0x38),uVar8);
    if (uVar6 == 0) {
        uStack_ec = 0;
        uStack_f4 = 0;
        *(*(iVar5 + 0xa20) + 600) = *(*(iVar5 + 0xa20) + 600) | 0x40;
        if (iVar7 == 0) {
            uVar6 = 0xffffffea;
        }
        else {
            pcVar10 = 0x2;
            uStack_f8 = 0x2c06912;
            iVar2 = sym.scsi_exec_req(arg1_01,&uStack_f8,2,iVar7);
            if (iVar2 == 0) {
                if (*(iVar7 + 1) != -0x40) {
                    _printk(0x8000424);
                }
                uVar6 = 0;
            }
            else {
                _printk(0x8000ed0,iVar2);
                uVar6 = 0xfffffffb;
            }
        }
        scsi_device_put(arg1_01);
        *(*(iVar5 + 0xa20) + 600) = *(*(iVar5 + 0xa20) + 600) & 0xffbf;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.err_state_show;
    puVar9 = get_ufs_data();
    uVar6 = 0;
    if (puVar9 != NULL) {
        iVar2 = snprintf(pcVar10,0x1000,0x8000b9c,*puVar9);
        uVar6 = iVar2;
    }
    return uVar6;
}


// ===== sym.ufs_get_toshiba_hr @ 0x080036fc (size 396) =====

uint64_t sym.ufs_get_toshiba_hr(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uint uStack_58;
    ulong uStack_54;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = *arg1;
    uVar3 = _raw_spin_lock_irqsave(*(*(iVar6 + 0xa20) + 0x38));
    uVar1 = scsi_device_get(arg1);
    uVar5 = uVar1;
    if (((uVar1 == 0) && (*(arg1 + 0x998) < 8)) && ((1 << (*(arg1 + 0x998) & 0x1f) & 0xd0U) != 0)) {
        scsi_device_put(arg1);
        _printk(0x8000b89);
        uVar5 = 0xffffffed;
    }
    _raw_spin_unlock_irqrestore(*(*(iVar6 + 0xa20) + 0x38),uVar3);
    if (uVar5 == 0) {
        uStack_4c = 0;
        uStack_54 = 0;
        *(*(iVar6 + 0xa20) + 600) = *(*(iVar6 + 0xa20) + 600) | 0x40;
        if (arg2 == 0) {
            uVar5 = 0xffffffea;
        }
        else {
            in_x2 = 2;
            uStack_58 = 0x2c06912;
            iVar2 = sym.scsi_exec_req(arg1,&uStack_58,2,arg2);
            if (iVar2 == 0) {
                if (*(arg2 + 1) != -0x40) {
                    _printk(0x8000424);
                }
                uVar5 = 0;
            }
            else {
                _printk(0x8000ed0,iVar2);
                uVar5 = 0xfffffffb;
            }
        }
        scsi_device_put(arg1);
        *(*(iVar6 + 0xa20) + 600) = *(*(iVar6 + 0xa20) + 600) & 0xffbf;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.err_state_show;
    puVar4 = get_ufs_data();
    uVar5 = 0;
    if (puVar4 != NULL) {
        iVar2 = snprintf(in_x2,0x1000,0x8000b9c,*puVar4);
        uVar5 = iVar2;
    }
    return uVar5;
}


// ===== sym.err_state_show @ 0x08003888 (size 80) =====

int64_t sym.err_state_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = get_ufs_data();
    iVar3 = 0;
    if (puVar2 != NULL) {
        iVar1 = snprintf(arg1,0x1000,0x8000b9c,*puVar2);
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.err_reason_show @ 0x080038d8 (size 136) =====

int64_t sym.err_reason_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_ufs_data();
    iVar3 = 0;
    if (iVar2 != 0) {
        iVar1 = snprintf(arg1,0x1000,"%s%s%s%s%s%s%s%s%s%s",iVar2 + 8,iVar2 + 0x28,iVar2 + 0x48,iVar2 + 0x68,
                         iVar2 + 0x88,iVar2 + 0xa8,iVar2 + 200,iVar2 + 0xe8,iVar2 + 0x108,iVar2 + 0x128);
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.get_ddr_size @ 0x08003960 (size 64) =====

uchar sym.get_ddr_size(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        sym.init_ddr_info();
    }
    return *_segment.ehdr;
}


// ===== sym.init_ddr_info @ 0x080039a0 (size 276) =====

uint64_t sym.init_ddr_info(void)

{
    uchar *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,8);
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    _segment.ehdr = puVar1;
    iVar2 = of_find_node_opts_by_path("/memory",0);
    uVar3 = 0;
    if (iVar2 != 0) {
        of_property_read_variable_u32_array(iVar2,"ddr_device_type",&uStack_2c,1,0);
        of_property_read_variable_u32_array(iVar2,"ddr_size",&uStack_30,1,0);
        uVar3 = of_property_read_variable_u32_array(iVar2,"ddr_manufacturer_id",&uStack_34,1,0);
        *(puVar1 + 4) = uStack_2c;
        *puVar1 = uStack_30;
        puVar1[1] = uStack_34;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.get_ddr_id;
    if (_segment.ehdr == NULL) {
        sym.init_ddr_info();
    }
    return _segment.ehdr[1];
}


// ===== sym.get_ddr_id @ 0x08003ab4 (size 64) =====

uchar sym.get_ddr_id(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        sym.init_ddr_info();
    }
    return *(_segment.ehdr + 1);
}


// ===== sym.get_ddr_type @ 0x08003af4 (size 64) =====

uint sym.get_ddr_type(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        sym.init_ddr_info();
    }
    return *(_segment.ehdr + 4);
}


// ===== sym.ddr_size_show @ 0x08003b34 (size 92) =====

int64_t sym.ddr_size_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        noname_1 = sym.init_ddr_info();
    }
    iVar1 = snprintf(noname_1,arg1,0x1000,0x8000b9c,*_segment.ehdr);
    return iVar1;
}


// ===== sym.ddr_id_show @ 0x08003b90 (size 92) =====

int64_t sym.ddr_id_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        noname_1 = sym.init_ddr_info();
    }
    iVar1 = snprintf(noname_1,arg1,0x1000,"0x%02x\n",*(_segment.ehdr + 1));
    return iVar1;
}


// ===== sym.ddr_vendor_show @ 0x08003bec (size 384) =====

int64_t sym.ddr_vendor_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ushort uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if (_segment.ehdr == 0) {
        noname_1 = sym.init_ddr_info();
    }
    //switch table (19 cases) at 0x80012b8
    switch(*(_segment.ehdr + 1)) {
    case '\x01':
        uStack_30 = 0x474e55534d4153;
        break;
    case '\x03':
        uVar1 = 0x414449;
        uVar6 = 0x49504c45;
code_r0x08003cb4:
        uStack_30._4_4_ = CONCAT14(uStack_30._7_1_,uVar1) >> 8;
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar6);
        break;
    case '\x05':
        uVar5 = 0x41;
        uVar6 = 0x594e414e;
        goto code_r0x08003d00;
    case '\x06':
        uStack_30 = 0x58494e59484b53;
        break;
    case '\x0e':
        uVar5 = 0x4c;
        uVar6 = 0x45544e49;
code_r0x08003d00:
        uStack_30 = CONCAT44(CONCAT22(uStack_30._6_2_,uVar5),uVar6);
        break;
    case '\x13':
        uStack_30._4_4_ = uStack_30 >> 0x20 & 0xffffff00;
        uStack_30 = CONCAT44(uStack_30._4_4_,0x544d5843);
        break;
    default:
        if (*(_segment.ehdr + 1) == -1) {
            uVar1 = 0x4e4f52;
            uVar6 = 0x5243494d;
            goto code_r0x08003cb4;
        }
    case '\x02':
    case '\x04':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
        uStack_30 = 0x4e574f4e4b4e55;
    }
    uVar4 = 0x80011c0;
    iVar3 = snprintf(noname_1,arg2,0x1000,0x80011c0,&uStack_30);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.ddr_type_show;
        if (_segment.ehdr == 0) {
            sym.init_ddr_info();
        }
        iVar3 = snprintf(uVar4,0x1000,"0x%0x\n",*(_segment.ehdr + 4));
        return iVar3;
    }
    return iVar3;
}


// ===== sym.ddr_type_show @ 0x08003d6c (size 92) =====

int64_t sym.ddr_type_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        noname_1 = sym.init_ddr_info();
    }
    iVar1 = snprintf(noname_1,arg1,0x1000,"0x%0x\n",*(_segment.ehdr + 4));
    return iVar1;
}


// ===== sym.add_proc_mv_node @ 0x08003dc8 (size 64) =====

ulong sym.add_proc_mv_node(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    proc_create(obj..str.llvm.13844763090706535407,0x16d,0,obj.mv_proc_fops.llvm.13844763090706535407);
    return 0;
}


// ===== sym.remove_proc_mv_node @ 0x08003e08 (size 52) =====

ulong sym.remove_proc_mv_node(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry(obj..str.llvm.13844763090706535407,0);
    return 0;
}


// ===== sym.mv_proc_open @ 0x08003e3c (size 52) =====

void sym.mv_proc_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.mv_proc_show.0ffbfa8315f319151b13952aa2173828.cfi_jt,0);
    return;
}


// ===== sym.mv_proc_show @ 0x08003e70 (size 552) =====

//WARNING: Removing unreachable block (ram,0x08003fe4)
//WARNING: Removing unreachable block (ram,0x08003fbc)
//WARNING: Removing unreachable block (ram,0x08003f94)
//WARNING: Removing unreachable block (ram,0x08003fa8)
//WARNING: Removing unreachable block (ram,0x08003fd0)
//WARNING: Removing unreachable block (ram,0x08003ffc)
//WARNING: Removing unreachable block (ram,0x08003f80)
//WARNING: Removing unreachable block (ram,0x08004000)

uint64_t sym.mv_proc_show(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t arg1_00;
    int64_t iVar6;
    uint16_t *puVar7;
    uint64_t *puVar8;
    ulong *puVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint16_t *puVar12;
    uint16_t *puVar13;
    uint64_t *puVar14;
    uint64_t *puVar15;
    uint **ppuVar16;
    uint in_w6;
    uint *puVar17;
    uint in_w7;
    code cVar18;
    uint uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    uint8_t *puVar22;
    uint8_t uVar23;
    uint64_t uVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar25;
    char *pcVar26;
    uint16_t *puVar27;
    uint64_t uVar28;
    uint16_t *unaff_x22;
    uint64_t uVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    uint *puStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint16_t *puStack_e0;
    uint64_t uStack_d8;
    char *pcStack_d0;
    ulong *puStack_c8;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iVar20 = *(iVar20 + 0x5e0);
    if (_segment.ehdr == NULL) {
        arg1_00 = sym.get_ufs_hba_data(arg1);
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x28);
        sym.ufs_get_string_desc(arg1_00,_segment.ehdr + 8,0x11,0x15);
        sym.ufs_get_string_desc(arg1_00,_segment.ehdr + 0x11,5,0x2a);
        sym.ufs_read_desc_param(arg1_00,0,0,0x18);
        *_segment.ehdr = 0;
        sym.ufs_read_desc_param(arg1_00,7,0,4);
        puVar27 = _segment.ehdr;
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[6] = 0;
        puVar27[7] = 0;
        _printk(0x8000d07);
    }
    uVar2 = sym.get_ddr_id();
    uVar3 = sym.get_ddr_size();
    seq_printf(arg1,"D: 0x%02x %d\n",uVar2,uVar3);
    uVar10 = *_segment.ehdr;
    puVar14 = _segment.ehdr + 8;
    puVar12 = *(_segment.ehdr + 4);
    puVar27 = _segment.ehdr + 0x11;
    seq_printf(arg1,"U: 0x%04x %d %s %s\n");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar20) {
        return 0;
    }
    auVar30 = __stack_chk_fail();
    puVar9 = auVar30._8_8_;
    iVar6 = auVar30._0_8_;
    *extraout_x18 = sym.ufs_get_string_desc;
    pcStack_a8 = sym.ufs_get_string_desc;
    iVar20 = sp_el0;
    iStack_b8 = *(iVar20 + 0x5e0);
    pcVar26 = uVar10 & 0xffffffff;
    uVar25 = 0xff;
    uVar29 = puVar14 & 0xffffffff;
    uVar28 = puVar12 & 0xffffffff;
    uStack_bc = 0xff;
    puVar13 = puVar12;
    puVar15 = puVar14;
    puStack_b0 = &stack0xffffffffffffffd0;
    puVar7 = kmem_cache_alloc_trace(_seq_lseek,0xb20);
    if (puVar7 == NULL) {
        uVar10 = 0xfffffff4;
    }
    else {
        __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
        puVar17 = &uStack_bc;
        uVar25 = 0;
        puVar13 = NULL;
        puVar15 = NULL;
        puVar27 = puVar7;
        iVar4 = mi_ufshcd_query_descriptor_retry(iVar6,1,0,0);
        __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
        in_w6 = SUB84(puVar17,0);
        if (iVar4 == 0) {
            uVar23 = *(puVar7 + uVar28);
            kfree(puVar7);
            uVar25 = 0xff;
            puVar8 = kmem_cache_alloc_trace(_seq_lseek,0xdc0);
            in_w6 = SUB84(puVar17,0);
            if (puVar8 == NULL) {
                puVar7 = NULL;
                uVar10 = 0;
            }
            else {
                __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
                puVar13 = NULL;
                puVar27 = 0xff;
                puVar15 = puVar8;
                uVar25 = uVar23;
                uVar5 = mi_ufshcd_read_desc_param(iVar6,5,uVar23,0);
                __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
                in_w6 = SUB84(puVar17,0);
                if (uVar5 < 0) {
                    uVar25 = 3;
                    puVar13 = uVar5;
                    _dev_err(*(iVar6 + 0x40),"Reading String Desc failed after %d retries. err = %d\n",3,puVar13);
                    goto code_r0x08004358;
                }
                if (*puVar8 < 3) {
                    puVar7 = NULL;
code_r0x0800429c:
                    kfree(puVar8);
                }
                else {
                    if ((puVar14 & 1) == 0) {
                        uVar25 = 0xcc0;
                        puVar7 = kmemdup(puVar8);
                        in_w6 = SUB84(puVar17,0);
                        if (puVar7 == NULL) goto code_r0x08004358;
                        goto code_r0x0800429c;
                    }
                    uVar5 = *puVar8 - 2;
                    uVar5 = (uVar5 + ((uVar5 & 0x8000) >> 0xf) >> 1) + 1;
                    uVar29 = uVar5;
                    puVar7 = __kmalloc(uVar29 & 0xffff,0xdc0);
                    in_w6 = SUB84(puVar17,0);
                    if (puVar7 == NULL) {
code_r0x08004358:
                        kfree(puVar8);
                        puVar7 = NULL;
                        goto code_r0x0800414c;
                    }
                    puVar15 = uVar5 & 0xffff;
                    uVar25 = 2;
                    puVar13 = puVar7;
                    uVar5 = utf16s_to_utf8s(puVar8 + 2,*puVar8 - 2,2,puVar7);
                    if (0 < uVar5) {
                        uVar29 = uVar5;
                        if (uVar5 == 1) {
                            uVar21 = 0;
                        }
                        else {
                            uVar21 = uVar29 & 0xfffffffe;
                            puVar22 = puVar7 + 1;
                            uVar24 = uVar21;
                            do {
                                uVar1 = *puVar22;
                                uVar23 = puVar22[-1];
                                if (0x5e < puVar22[-1] - 0x20) {
                                    uVar23 = 0x20;
                                }
                                if (0x5e < uVar1 - 0x20) {
                                    uVar1 = 0x20;
                                }
                                uVar24 = uVar24 - 2;
                                puVar22[-1] = uVar23;
                                *puVar22 = uVar1;
                                puVar22 = puVar22 + 2;
                            } while (uVar24 != 0);
                            if (uVar21 == uVar29) goto code_r0x080043d8;
                        }
                        iVar20 = uVar29 - uVar21;
                        puVar22 = puVar7 + uVar21;
                        do {
                            uVar23 = *puVar22;
                            if (0x5e < uVar23 - 0x20) {
                                uVar23 = 0x20;
                            }
                            iVar20 = iVar20 + -1;
                            *puVar22 = uVar23;
                            puVar22 = puVar22 + 1;
                        } while (iVar20 != 0);
                    }
code_r0x080043d8:
                    uVar29 = uVar5 + 1;
                    *(puVar7 + uVar5) = 0;
                    kfree(puVar8);
                    in_w6 = SUB84(puVar17,0);
                    if (uVar5 + 1 < 0) goto code_r0x0800414c;
                }
                in_w6 = SUB84(puVar17,0);
                if (puVar12 != 0x16) {
                    uVar25 = uVar10;
                    memcpy(puVar9,puVar7);
                    goto code_r0x0800414c;
                }
                *puVar9 = 0x3a6c6169726573;
                if (*puVar7 < 3) {
                    uVar28 = 7;
                }
                else {
                    uVar28 = 7;
                    pcVar26 = "%02x%02x";
                    iVar20 = 0;
                    do {
                        puVar13 = *(puVar7 + iVar20 + 2);
                        puVar15 = *(puVar7 + iVar20 + 3);
                        pcVar11 = pcVar26;
                        iVar4 = snprintf(puVar9 + uVar28,0x1000,"%02x%02x",puVar13);
                        uVar25 = pcVar11;
                        in_w6 = SUB84(puVar17,0);
                        uVar10 = iVar20 + 4;
                        uVar28 = iVar4 + uVar28;
                        iVar20 = iVar20 + 2;
                    } while (uVar10 < *puVar7);
                }
                uVar10 = uVar28 + 1;
                *(puVar9 + uVar28) = 10;
            }
        }
        else {
code_r0x0800414c:
            uVar10 = 0;
        }
        kfree(puVar7);
        unaff_x22 = puVar7;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_b8) {
        return uVar10;
    }
    auVar30 = __stack_chk_fail();
    iVar6 = auVar30._0_8_;
    ppuVar16 = &puStack_110;
    *extraout_x18_00 = sym.ufs_read_desc_param;
    pcStack_f8 = sym.ufs_read_desc_param;
    iVar20 = sp_el0;
    uVar5 = puVar27;
    iStack_108 = *(iVar20 + 0x5e0);
    puStack_110 = NULL;
    puVar14 = puVar15;
    ppuStack_100 = &puStack_b0;
    uStack_f0 = uVar29;
    uStack_e8 = uVar10;
    puStack_e0 = unaff_x22;
    uStack_d8 = uVar28;
    pcStack_d0 = pcVar26;
    puStack_c8 = puVar9;
    if ((uVar5 & 0xff) < 9) {
        puVar27 = puVar27 & 0xffffffff;
        puVar13 = puVar13 & 0xffffffff;
        __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
        uVar25 = uVar25 & 0xff;
        iVar4 = mi_ufshcd_read_desc_param(iVar6,auVar30._8_8_ & 0xffffffff,uVar25,puVar13);
        __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
        puVar14 = ppuVar16;
        if (iVar4 == 0) {
            switch(uVar5 & 0xff) {
            default:
                uVar10 = 0;
                *puVar15 = puStack_110;
                break;
            case 2:
                uVar10 = 0;
                *puVar15 = puStack_110 >> 8 | puStack_110 << 8;
                break;
            case 4:
                uVar10 = 0;
                uVar5 = (puStack_110 & 0xff00ff00) >> 8 | (puStack_110 & 0xff00ff) << 8;
                *puVar15 = uVar5 >> 0x10 | uVar5 << 0x10;
                break;
            case 8:
                uVar10 = 0;
                uVar28 = (puStack_110 & 0xff00ff00ff00ff00) >> 8 | (puStack_110 & 0xff00ff00ff00ff) << 8;
                uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
                *puVar15 = uVar28 >> 0x20 | uVar28 << 0x20;
            }
            goto code_r0x08004490;
        }
    }
    uVar10 = 0xffffffea;
    ppuVar16 = puVar14;
code_r0x08004490:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_108) {
        return uVar10;
    }
    auVar30 = __stack_chk_fail(uVar10);
    puVar22 = auVar30._8_8_;
    *extraout_x18_01 = sym.scsi_exec_req;
    uVar19 = 0x22;
    if (uVar25 == 1) {
        uVar19 = 0x23;
    }
    uVar25 = ppuVar16;
    uVar10 = blk_get_request(*(auVar30._0_8_ + 8),uVar19,4);
    if (uVar10 < 0xfffffffffffff001) {
        if ((uVar25 == 0) ||
           (uVar5 = blk_rq_map_kern(*(auVar30._0_8_ + 8),uVar10,puVar13,ppuVar16 & 0xffffffff,0xc00), uVar5 == 0))
        {
            puVar17 = puStack_110;
            cVar18 = scsi_command_size_tbl[*puVar22 >> 5];
            *(uVar10 + 0x148) = cVar18;
            if ((*puVar22 | 0x10) == 0xd0) {
                cVar18 = 0x10;
                *(uVar10 + 0x148) = 0x10;
            }
            memcpy(*(uVar10 + 0x140),puVar22,cVar18);
            *(uVar10 + 0x158) = in_w7;
            *(uVar10 + 0xec) = in_w6;
            *(uVar10 + 0x1c) = *(uVar10 + 0x1c) | 0x8800;
            blk_execute_rq(0,uVar10,1);
            uVar5 = *(uVar10 + 0x154);
            if ((uVar5 != 0) && (uVar5 <= uVar25)) {
                memset(puVar13 + (uVar25 - uVar5),0);
            }
            if (puVar17 != NULL) {
                *puVar17 = *(uVar10 + 0x154);
            }
            if (puVar27 != NULL) {
                scsi_normalize_sense(*(uVar10 + 0x160),*(uVar10 + 0x150),puVar27);
            }
            uVar5 = *(uVar10 + 0x14c);
        }
        blk_put_request(uVar10);
        return uVar5;
    }
    return 0x4000000;
}


// ===== sym.ufs_get_string_desc @ 0x08004098 (size 860) =====

uint64_t sym.ufs_get_string_desc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t *puVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    char *pcVar7;
    uint8_t *puVar8;
    uint64_t *in_x4;
    uint64_t *puVar9;
    uint **ppuVar10;
    uint8_t *in_x5;
    uint in_w6;
    uint *puVar11;
    uint in_w7;
    code cVar12;
    uint uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint8_t *puVar16;
    uint8_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar18;
    char *pcVar19;
    uint64_t uVar20;
    uint8_t *unaff_x22;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint *puStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint8_t *puStack_90;
    uint64_t uStack_88;
    char *pcStack_80;
    int64_t iStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    pcVar19 = arg3 & 0xffffffff;
    uVar18 = 0xff;
    uVar22 = in_x4 & 0xffffffff;
    uVar20 = arg4 & 0xffffffff;
    uStack_6c = 0xff;
    puVar8 = arg4;
    puVar9 = in_x4;
    puVar4 = kmem_cache_alloc_trace(_seq_lseek,0xb20);
    if (puVar4 == NULL) {
        uVar21 = 0xfffffff4;
    }
    else {
        __pm_runtime_resume(*(arg1 + 0x50) + 0x1b0,4);
        puVar11 = &uStack_6c;
        uVar18 = 0;
        puVar8 = NULL;
        puVar9 = NULL;
        in_x5 = puVar4;
        iVar2 = mi_ufshcd_query_descriptor_retry(arg1,1,0,0);
        __pm_runtime_idle(*(arg1 + 0x50) + 0x1b0,4);
        in_w6 = SUB84(puVar11,0);
        if (iVar2 == 0) {
            uVar17 = puVar4[uVar20];
            kfree(puVar4);
            uVar18 = 0xff;
            puVar5 = kmem_cache_alloc_trace(_seq_lseek,0xdc0);
            in_w6 = SUB84(puVar11,0);
            if (puVar5 == NULL) {
                puVar4 = NULL;
                uVar21 = 0;
            }
            else {
                __pm_runtime_resume(*(arg1 + 0x50) + 0x1b0,4);
                puVar8 = NULL;
                in_x5 = 0xff;
                puVar9 = puVar5;
                uVar18 = uVar17;
                uVar3 = mi_ufshcd_read_desc_param(arg1,5,uVar17,0);
                __pm_runtime_idle(*(arg1 + 0x50) + 0x1b0,4);
                in_w6 = SUB84(puVar11,0);
                if (uVar3 < 0) {
                    uVar18 = 3;
                    puVar8 = uVar3;
                    _dev_err(*(arg1 + 0x40),"Reading String Desc failed after %d retries. err = %d\n",3,puVar8);
                    goto code_r0x08004358;
                }
                if (*puVar5 < 3) {
                    puVar4 = NULL;
code_r0x0800429c:
                    kfree(puVar5);
                }
                else {
                    if ((in_x4 & 1) == 0) {
                        uVar18 = 0xcc0;
                        puVar4 = kmemdup(puVar5);
                        in_w6 = SUB84(puVar11,0);
                        if (puVar4 == NULL) goto code_r0x08004358;
                        goto code_r0x0800429c;
                    }
                    uVar3 = *puVar5 - 2;
                    uVar3 = (uVar3 + ((uVar3 & 0x8000) >> 0xf) >> 1) + 1;
                    uVar22 = uVar3;
                    puVar4 = __kmalloc(uVar22 & 0xffff,0xdc0);
                    in_w6 = SUB84(puVar11,0);
                    if (puVar4 == NULL) {
code_r0x08004358:
                        kfree(puVar5);
                        puVar4 = NULL;
                        goto code_r0x0800414c;
                    }
                    puVar9 = uVar3 & 0xffff;
                    uVar18 = 2;
                    puVar8 = puVar4;
                    uVar3 = utf16s_to_utf8s(puVar5 + 2,*puVar5 - 2,2,puVar4);
                    if (0 < uVar3) {
                        uVar22 = uVar3;
                        if (uVar3 == 1) {
                            uVar15 = 0;
                        }
                        else {
                            uVar15 = uVar22 & 0xfffffffe;
                            puVar16 = puVar4 + 1;
                            uVar21 = uVar15;
                            do {
                                uVar1 = *puVar16;
                                uVar17 = puVar16[-1];
                                if (0x5e < puVar16[-1] - 0x20) {
                                    uVar17 = 0x20;
                                }
                                if (0x5e < uVar1 - 0x20) {
                                    uVar1 = 0x20;
                                }
                                uVar21 = uVar21 - 2;
                                puVar16[-1] = uVar17;
                                *puVar16 = uVar1;
                                puVar16 = puVar16 + 2;
                            } while (uVar21 != 0);
                            if (uVar15 == uVar22) goto code_r0x080043d8;
                        }
                        iVar14 = uVar22 - uVar15;
                        puVar16 = puVar4 + uVar15;
                        do {
                            uVar17 = *puVar16;
                            if (0x5e < uVar17 - 0x20) {
                                uVar17 = 0x20;
                            }
                            iVar14 = iVar14 + -1;
                            *puVar16 = uVar17;
                            puVar16 = puVar16 + 1;
                        } while (iVar14 != 0);
                    }
code_r0x080043d8:
                    uVar22 = uVar3 + 1;
                    puVar4[uVar3] = 0;
                    kfree(puVar5);
                    in_w6 = SUB84(puVar11,0);
                    if (uVar3 + 1 < 0) goto code_r0x0800414c;
                }
                in_w6 = SUB84(puVar11,0);
                if (arg4 != 0x16) {
                    uVar18 = arg3;
                    memcpy(arg2,puVar4);
                    goto code_r0x0800414c;
                }
                *arg2 = 0x3a6c6169726573;
                if (*puVar4 < 3) {
                    uVar20 = 7;
                }
                else {
                    uVar20 = 7;
                    pcVar19 = "%02x%02x";
                    iVar14 = 0;
                    do {
                        puVar8 = puVar4[iVar14 + 2];
                        puVar9 = puVar4[iVar14 + 3];
                        pcVar7 = pcVar19;
                        iVar2 = snprintf(arg2 + uVar20,0x1000,"%02x%02x",puVar8);
                        uVar18 = pcVar7;
                        in_w6 = SUB84(puVar11,0);
                        uVar21 = iVar14 + 4;
                        uVar20 = iVar2 + uVar20;
                        iVar14 = iVar14 + 2;
                    } while (uVar21 < *puVar4);
                }
                uVar21 = uVar20 + 1;
                *(arg2 + uVar20) = 10;
            }
        }
        else {
code_r0x0800414c:
            uVar21 = 0;
        }
        kfree(puVar4);
        unaff_x22 = puVar4;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar21;
    }
    auVar23 = __stack_chk_fail();
    iVar6 = auVar23._0_8_;
    ppuVar10 = &puStack_c0;
    *extraout_x18 = sym.ufs_read_desc_param;
    pcStack_a8 = sym.ufs_read_desc_param;
    iVar14 = sp_el0;
    uVar3 = in_x5;
    iStack_b8 = *(iVar14 + 0x5e0);
    puStack_c0 = NULL;
    puVar5 = puVar9;
    puStack_b0 = &stack0xffffffffffffffa0;
    uStack_a0 = uVar22;
    uStack_98 = uVar21;
    puStack_90 = unaff_x22;
    uStack_88 = uVar20;
    pcStack_80 = pcVar19;
    iStack_78 = arg2;
    if ((uVar3 & 0xff) < 9) {
        in_x5 = in_x5 & 0xffffffff;
        puVar8 = puVar8 & 0xffffffff;
        __pm_runtime_resume(*(iVar6 + 0x50) + 0x1b0,4);
        uVar18 = uVar18 & 0xff;
        iVar2 = mi_ufshcd_read_desc_param(iVar6,auVar23._8_8_ & 0xffffffff,uVar18,puVar8);
        __pm_runtime_idle(*(iVar6 + 0x50) + 0x1b0,4);
        puVar5 = ppuVar10;
        if (iVar2 == 0) {
            switch(uVar3 & 0xff) {
            default:
                uVar20 = 0;
                *puVar9 = puStack_c0;
                break;
            case 2:
                uVar20 = 0;
                *puVar9 = puStack_c0 >> 8 | puStack_c0 << 8;
                break;
            case 4:
                uVar20 = 0;
                uVar3 = (puStack_c0 & 0xff00ff00) >> 8 | (puStack_c0 & 0xff00ff) << 8;
                *puVar9 = uVar3 >> 0x10 | uVar3 << 0x10;
                break;
            case 8:
                uVar20 = 0;
                uVar22 = (puStack_c0 & 0xff00ff00ff00ff00) >> 8 | (puStack_c0 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                *puVar9 = uVar22 >> 0x20 | uVar22 << 0x20;
            }
            goto code_r0x08004490;
        }
    }
    uVar20 = 0xffffffea;
    ppuVar10 = puVar5;
code_r0x08004490:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_b8) {
        return uVar20;
    }
    auVar23 = __stack_chk_fail(uVar20);
    puVar4 = auVar23._8_8_;
    *extraout_x18_00 = sym.scsi_exec_req;
    uVar13 = 0x22;
    if (uVar18 == 1) {
        uVar13 = 0x23;
    }
    uVar18 = ppuVar10;
    uVar20 = blk_get_request(*(auVar23._0_8_ + 8),uVar13,4);
    if (uVar20 < 0xfffffffffffff001) {
        if ((uVar18 == 0) ||
           (uVar3 = blk_rq_map_kern(*(auVar23._0_8_ + 8),uVar20,puVar8,ppuVar10 & 0xffffffff,0xc00), uVar3 == 0)) {
            puVar11 = puStack_c0;
            cVar12 = scsi_command_size_tbl[*puVar4 >> 5];
            *(uVar20 + 0x148) = cVar12;
            if ((*puVar4 | 0x10) == 0xd0) {
                cVar12 = 0x10;
                *(uVar20 + 0x148) = 0x10;
            }
            memcpy(*(uVar20 + 0x140),puVar4,cVar12);
            *(uVar20 + 0x158) = in_w7;
            *(uVar20 + 0xec) = in_w6;
            *(uVar20 + 0x1c) = *(uVar20 + 0x1c) | 0x8800;
            blk_execute_rq(0,uVar20,1);
            uVar3 = *(uVar20 + 0x154);
            if ((uVar3 != 0) && (uVar3 <= uVar18)) {
                memset(puVar8 + (uVar18 - uVar3),0);
            }
            if (puVar11 != NULL) {
                *puVar11 = *(uVar20 + 0x154);
            }
            if (in_x5 != NULL) {
                scsi_normalize_sense(*(uVar20 + 0x160),*(uVar20 + 0x150),in_x5);
            }
            uVar3 = *(uVar20 + 0x14c);
        }
        blk_put_request(uVar20);
        return uVar3;
    }
    return 0x4000000;
}


// ===== sym.ufs_read_desc_param @ 0x080043f4 (size 348) =====

int sym.ufs_read_desc_param(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint *puVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    uint64_t *in_x4;
    uint **ppuVar7;
    uint64_t *puVar8;
    uint32_t uVar9;
    uint64_t in_x5;
    uint in_w6;
    uint in_w7;
    code cVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint *puStack_50;
    int64_t iStack_48;
    
    uVar6 = arg3;
    ppuVar7 = &puStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar9 = in_x5;
    iStack_48 = *(iVar1 + 0x5e0);
    puStack_50 = NULL;
    puVar8 = in_x4;
    if ((uVar9 & 0xff) < 9) {
        in_x5 = in_x5 & 0xffffffff;
        arg4 = arg4 & 0xffffffff;
        __pm_runtime_resume(*(arg1 + 0x50) + 0x1b0,4);
        uVar6 = uVar6 & 0xff;
        iVar3 = mi_ufshcd_read_desc_param(arg1,arg2 & 0xffffffff,uVar6,arg4);
        __pm_runtime_idle(*(arg1 + 0x50) + 0x1b0,4);
        puVar8 = ppuVar7;
        if (iVar3 == 0) {
    //switch table (7 cases) at 0x8001358
            switch(uVar9 & 0xff) {
            default:
                iVar3 = 0;
                *in_x4 = puStack_50._0_1_;
                break;
            case 2:
                iVar3 = 0;
                *in_x4 = puStack_50 >> 8 | puStack_50 << 8;
                break;
            case 4:
                iVar3 = 0;
                uVar9 = (puStack_50 & 0xff00ff00) >> 8 | (puStack_50 & 0xff00ff) << 8;
                *in_x4 = uVar9 >> 0x10 | uVar9 << 0x10;
                break;
            case 8:
                iVar3 = 0;
                uVar4 = (puStack_50 & 0xff00ff00ff00ff00) >> 8 | (puStack_50 & 0xff00ff00ff00ff) << 8;
                uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                *in_x4 = uVar4 >> 0x20 | uVar4 << 0x20;
            }
            goto code_r0x08004490;
        }
    }
    iVar3 = -0x16;
    ppuVar7 = puVar8;
code_r0x08004490:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    auVar12 = __stack_chk_fail(iVar3);
    puVar5 = auVar12._8_8_;
    *extraout_x18 = sym.scsi_exec_req;
    uVar11 = 0x22;
    if (uVar6 == 1) {
        uVar11 = 0x23;
    }
    uVar6 = ppuVar7;
    uVar4 = blk_get_request(*(auVar12._0_8_ + 8),uVar11,4);
    if (uVar4 < 0xfffffffffffff001) {
        if ((uVar6 == 0) ||
           (iVar3 = blk_rq_map_kern(*(auVar12._0_8_ + 8),uVar4,arg4,ppuVar7 & 0xffffffff,0xc00), iVar3 == 0)) {
            puVar2 = puStack_50;
            cVar10 = scsi_command_size_tbl[*puVar5 >> 5];
            *(uVar4 + 0x148) = cVar10;
            if ((*puVar5 | 0x10) == 0xd0) {
                cVar10 = 0x10;
                *(uVar4 + 0x148) = 0x10;
            }
            memcpy(*(uVar4 + 0x140),puVar5,cVar10);
            *(uVar4 + 0x158) = in_w7;
            *(uVar4 + 0xec) = in_w6;
            *(uVar4 + 0x1c) = *(uVar4 + 0x1c) | 0x8800;
            blk_execute_rq(0,uVar4,1);
            uVar9 = *(uVar4 + 0x154);
            if ((uVar9 != 0) && (uVar9 <= uVar6)) {
                memset(arg4 + (uVar6 - uVar9),0);
            }
            if (puVar2 != NULL) {
                *puVar2 = *(uVar4 + 0x154);
            }
            if (in_x5 != 0) {
                scsi_normalize_sense(*(uVar4 + 0x160),*(uVar4 + 0x150),in_x5);
            }
            iVar3 = *(uVar4 + 0x14c);
        }
        blk_put_request(uVar4);
    }
    else {
        iVar3 = 0x4000000;
    }
    return iVar3;
}


// ===== sym.scsi_exec_req @ 0x08004550 (size 368) =====

int sym.scsi_exec_req(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t in_w4;
    int64_t in_x5;
    uint in_w6;
    uint in_w7;
    code cVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uint *in_stack_00000000;
    
    *in_x18 = unaff_x30;
    uVar5 = 0x22;
    if (arg3 == 1) {
        uVar5 = 0x23;
    }
    uVar3 = blk_get_request(*(arg1 + 8),uVar5,4);
    if (uVar3 < 0xfffffffffffff001) {
        if ((in_w4 == 0) || (iVar2 = blk_rq_map_kern(*(arg1 + 8),uVar3,arg4,in_w4,0xc00), iVar2 == 0)) {
            cVar4 = scsi_command_size_tbl[*arg2 >> 5];
            *(uVar3 + 0x148) = cVar4;
            if ((*arg2 | 0x10) == 0xd0) {
                cVar4 = 0x10;
                *(uVar3 + 0x148) = 0x10;
            }
            memcpy(*(uVar3 + 0x140),arg2,cVar4);
            *(uVar3 + 0x158) = in_w7;
            *(uVar3 + 0xec) = in_w6;
            *(uVar3 + 0x1c) = *(uVar3 + 0x1c) | 0x8800;
            blk_execute_rq(0,uVar3,1);
            uVar1 = *(uVar3 + 0x154);
            if ((uVar1 != 0) && (uVar1 <= in_w4)) {
                memset(arg4 + (in_w4 - uVar1),0);
            }
            if (in_stack_00000000 != NULL) {
                *in_stack_00000000 = *(uVar3 + 0x154);
            }
            if (in_x5 != 0) {
                scsi_normalize_sense(*(uVar3 + 0x160),*(uVar3 + 0x150));
            }
            iVar2 = *(uVar3 + 0x14c);
        }
        blk_put_request(uVar3);
    }
    else {
        iVar2 = 0x4000000;
    }
    return iVar2;
}


// ===== sym.init_module @ 0x080046c4 (size 500) =====

uint64_t sym.init_module(void)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    uVar4 = __class_create(obj.__this_module,"mi_memory",obj.mi_memory_sysfs_init.__key);
    *_segment.ehdr = uVar4;
    if (uVar4 < 0xfffffffffffff001) {
        uVar5 = __register_chrdev(0,0,0x100,"mi_memory_module",obj.mi_memory);
        puVar2 = _segment.ehdr;
        uVar4 = uVar5 & 0xffffffff;
        iVar3 = uVar5;
        *(_segment.ehdr + 2) = iVar3;
        if (iVar3 < 0) {
            _printk(0x800055d,"mi_memory_sysfs_init",uVar4);
        }
        else {
            uVar4 = device_create(*puVar2,0,iVar3 << 0x14 | 1,0,"mi_memory_device");
            _segment.ehdr[1] = uVar4;
            if (uVar4 < 0xfffffffffffff001) {
                uVar5 = sysfs_create_groups(uVar4,reloc.ufshcd_sysfs_group);
                uVar4 = uVar5 & 0xffffffff;
                if (uVar5 == 0) {
                    proc_create(obj..str.llvm.13844763090706535407,0x16d,0,obj.mv_proc_fops.llvm.13844763090706535407
                               );
                    debugfs_create_symlink("ufshcd0",0,"../../class/mi_memory/mi_memory_device/ufshcd0");
                    goto code_r0x080048a0;
                }
                _printk(0x80009bf,"mi_memory_sysfs_init",uVar4);
                device_destroy(*_segment.ehdr,_segment.ehdr[2] << 0x14 | 1);
            }
            else {
                uVar4 = 0xffffffed;
                _printk(0x8000fa8,"mi_memory_sysfs_init",0xffffffed);
            }
            __unregister_chrdev(0,0,0x100,"mi_memory_module");
        }
        class_destroy(*_segment.ehdr);
    }
    else {
        _printk(0x80003b7,"mi_memory_sysfs_init",uVar4 & 0xffffffff);
    }
    kfree(_segment.ehdr);
code_r0x080048a0:
    return uVar4 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x080048b8 (size 148) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry(obj..str.llvm.13844763090706535407,0);
    sysfs_remove_groups(_segment.ehdr[1],reloc.ufshcd_sysfs_group);
    device_destroy(*_segment.ehdr,*(_segment.ehdr + 2) << 0x14 | 1);
    __unregister_chrdev(0,0,0x100,"mi_memory_module");
    class_destroy(*_segment.ehdr);
    kfree(_segment.ehdr);
    return;
}

