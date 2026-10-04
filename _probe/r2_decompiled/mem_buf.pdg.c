// decompiled from mem_buf by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x08001e50

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x7b10bcc8d5245985) {
                pcVar2 = sym.mem_buf_retrieve_release.38b212b217376b213cbf26637648b44f.cfi_jt;
            }
            else {
                if (arg1 != -0x59399687048b6be5) {
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x08001e10;
                    pcVar2 = sym.mem_buf_alloc_req_work.38b212b217376b213cbf26637648b44f.cfi_jt;
                    goto code_r0x080011d4;
                }
                pcVar2 = sym.mem_buf_alloc_resp_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt;
                goto code_r0x080011d4;
            }
            if (arg1 == -0x339c2e8918efa2d1) {
                pcVar2 = sym.mem_buf_relinquish_memparcel_hdl.38b212b217376b213cbf26637648b44f.cfi_jt;
            }
            else {
                if (arg1 != -0x158e2f70325fbf1b) goto code_r0x08001e10;
                pcVar2 = sym.mem_buf_get_sgl.cfi_jt;
            }
        }
    }
    else {
        if (arg1 < 0x4c550309df1cf4c1) {
            if (arg1 == -0x890743871a4a53) {
                pcVar2 = sym.mem_buf_dev_ioctl.964092d81b7022c9d91bd8082a8b4782.cfi_jt;
            }
            else {
                if (arg1 == 0x2b3a43e29242445) {
                    pcVar2 = sym.init_module.cfi_jt;
                    goto code_r0x08001210;
                }
                if (arg1 != 0x1871a4ba1e253e55) goto code_r0x08001e10;
                pcVar2 = sym.mem_buf_alloc_req_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt;
            }
code_r0x080011d4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001e10;
        }
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.mem_buf_free.cfi_jt;
        }
        else if (arg1 == 0x4df5fbb8c17cbc62) {
            pcVar2 = sym.mem_buf_retrieve.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001e10;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
code_r0x08001210:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001e10:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e64);
    (*pcVar1)();
}


// ===== sym.mem_buf_retrieve_release.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001228 (size 8) =====

void sym.mem_buf_retrieve_release.38b212b217376b213cbf26637648b44f.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sg_free_table(param_1 + 0x50);
    kfree(param_1);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr,1);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001238 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = alloc_chrdev_region(obj.is_valid_mem_buf_perms._rs,0,1,"membuf");
    if (uVar1 < 0) {
        uVar2 = uVar1;
    }
    else {
        uVar2 = __class_create(obj.__this_module,"membuf",obj.mem_buf_init.__key);
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar1 = __platform_driver_register
                              (reloc.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt,obj.__this_module);
            if (-1 < uVar1) {
                uVar2 = 0;
                goto code_r0x08004030;
            }
            uVar2 = uVar1;
            class_destroy(_segment.ehdr);
        }
        unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    }
code_r0x08004030:
    return uVar2 & 0xffffffff;
}


// ===== sym.mem_buf_alloc_req_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001240 (size 8) =====

void sym.mem_buf_alloc_req_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability & 1) != 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x40);
        if (piVar2 != NULL) {
            iVar3 = kmemdup(param_2,param_3,0xcc0);
            if (iVar3 == 0) {
                kfree(piVar2);
            }
            else {
                *piVar2 = iVar3;
                piVar2[1] = param_3;
                piVar2[2] = 0xfffffffe0;
                piVar2[3] = piVar2 + 3;
                piVar2[4] = piVar2 + 3;
                uVar1 = _segment.ehdr;
                piVar2[5] = sym.mem_buf_alloc_req_work.38b212b217376b213cbf26637648b44f.cfi_jt;
                queue_work_on(0x20,uVar1);
            }
        }
    }
    return;
}


// ===== sym.mem_buf_relinquish_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001248 (size 8) =====

void sym.mem_buf_relinquish_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability & 1) != 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x40);
        if (piVar2 != NULL) {
            iVar3 = kmemdup(param_2,param_3,0xcc0);
            if (iVar3 == 0) {
                kfree(piVar2);
            }
            else {
                *piVar2 = iVar3;
                piVar2[1] = param_3;
                piVar2[2] = 0xfffffffe0;
                piVar2[3] = piVar2 + 3;
                piVar2[4] = piVar2 + 3;
                uVar1 = _segment.ehdr;
                piVar2[5] = sym.mem_buf_relinquish_work.38b212b217376b213cbf26637648b44f.cfi_jt;
                queue_work_on(0x20,uVar1);
            }
        }
    }
    return;
}


// ===== sym.mem_buf_retrieve.cfi_jt @ 0x08001250 (size 8) =====

ulong * sym.mem_buf_retrieve.cfi_jt(uint32_t *param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    uint32_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong *puStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    puStack_68 = *0x8000e38;
    uStack_60 = *0x8000e40;
    uStack_88 = *0x8000e18;
    uStack_80 = *0x8000e20;
    uStack_58 = *0x8000e48;
    uStack_78 = *0x8000e28;
    uStack_70 = *0x8000e30;
    uStack_98 = *0x8000e08;
    uStack_90 = *0x8000e10;
    if (((((param_1[7] & 0xfff7fffc) == 0) && (param_1[1] != 0)) && (*(param_1 + 2) != 0)) && (*(param_1 + 4) != 0)) {
        puVar3 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0xa8);
        if (puVar3 == NULL) {
            puVar9 = 0xfffffffffffffff4;
        }
        else {
            puVar4 = mem_buf_vmid_perm_list_to_gh_acl(*(param_1 + 2),*(param_1 + 4),param_1[1]);
            if (puVar4 < 0xfffffffffffff001) {
                uVar7 = *puVar4;
                if (*puVar4 != 0) {
                    pcVar8 = puVar4 + 6;
                    do {
                        if ((*param_1 == *(pcVar8 + -2)) && (*pcVar8 != '\0')) {
                            uVar5 = 2;
                            goto code_r0x080025bc;
                        }
                        uVar7 = uVar7 - 1;
                        pcVar8 = pcVar8 + 4;
                    } while (uVar7 != 0);
                }
                uVar5 = 1;
code_r0x080025bc:
                iVar2 = mem_buf_map_mem_s2(uVar5,param_1 + 6,puVar4,&uStack_50);
                if (iVar2 == 0) {
                    iVar2 = mem_buf_map_mem_s1(uStack_50);
                    if (-1 < iVar2) {
                        puVar9 = dup_gh_sgl_desc_to_sgt(uStack_50);
                        if (puVar9 < 0xfffffffffffff001) {
                            uVar5 = puVar9[1];
                            puVar10 = puVar3 + 10;
                            *puVar10 = *puVar9;
                            puVar3[0xb] = uVar5;
                            kfree(puVar9);
                            puVar3[1] = puVar3 + 1;
                            puVar3[2] = puVar3 + 1;
                            __mutex_init(puVar3 + 3,"&buffer->lock",obj.mem_buf_retrieve.__key);
                            *puVar3 = 0;
                            uVar5 = mem_buf_get_sgl_buf_size(uStack_50);
                            uVar1 = param_1[6];
                            puVar3[9] = uVar5;
                            *(puVar3 + 0xe) = 0;
                            puVar3[0x14] = sym.mem_buf_retrieve_release.38b212b217376b213cbf26637648b44f.cfi_jt;
                            uVar5 = mem_buf_vmperm_alloc_accept(puVar10,uVar1);
                            uStack_80 = puVar3[9];
                            uVar1 = param_1[7];
                            puVar3[0xf] = uVar5;
                            uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
                            puStack_68 = puVar3;
                            puVar9 = mem_buf_dma_buf_export(&uStack_98,qcom_sg_buf_ops);
                            if (puVar9 < 0xfffffffffffff001) {
                                kvfree(uStack_50);
                                kfree(puVar4);
                                goto code_r0x080024e4;
                            }
                            sg_free_table(puVar10);
                        }
                        iVar2 = puVar9;
                        mem_buf_unmap_mem_s1(uStack_50);
                    }
                    kvfree(uStack_50);
                    mem_buf_unmap_mem_s2(param_1[6]);
                }
                kfree(puVar4);
            }
            else {
                iVar2 = puVar4;
            }
            kfree(puVar3);
            puVar9 = iVar2;
        }
    }
    else {
        puVar9 = 0xffffffffffffffea;
    }
code_r0x080024e4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.mem_buf_retrieve_release;
        sg_free_table(iVar6 + 0x50);
        puVar9 = kfree(iVar6);
        return puVar9;
    }
    return puVar9;
}


// ===== sym.mem_buf_dev_ioctl.964092d81b7022c9d91bd8082a8b4782.cfi_jt @ 0x08001258 (size 8) =====

ulong * sym.mem_buf_dev_ioctl.964092d81b7022c9d91bd8082a8b4782.cfi_jt(ulong param_1,uint32_t param_2,ulong *param_3)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *arg3;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar7 = param_2 >> 0x10 & 0x3fff;
    puVar14 = uVar7;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_80 = 0;
    if (uVar7 < 0x49) {
        __check_object_size(&uStack_80,puVar14,0);
        arg3 = puVar14;
        iVar9 = sym._copy_from_user(&uStack_80,param_3,puVar14);
        if (iVar9 == 0) {
            if ((param_2 >> 0x1e & 1) == 0) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                iStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                iStack_70 = 0;
                uStack_80 = 0;
            }
            puVar8 = 0xffffffffffffffe7;
            if (param_2 < -0x3fcfb2fa) {
                if (param_2 == 0xc0084d02) {
                    uVar11 = dma_buf_get(uStack_80 & 0xffffffff);
                    if (uVar11 < 0xfffffffffffff001) {
                        uVar12 = to_mem_buf_vmperm(uVar11);
                        if (uVar12 < 0xfffffffffffff001) {
                            uVar6 = mem_buf_dma_buf_exclusive_owner(uVar11);
                            iVar5 = 0;
                            uStack_80 = CONCAT44(uVar6,uStack_80) & 0x1ffffffff;
                        }
                        else {
                            iVar5 = -0x16;
                        }
                        dma_buf_put(uVar11);
                    }
                    else {
                        iVar5 = uVar11;
                    }
                    if (iVar5 == 0) goto code_r0x08001b1c;
                    puVar8 = iVar5;
                }
                else if (param_2 == 0xc0204d03) {
                    puVar8 = 0xffffffffffffffea;
                    if (((uStack_78._4_4_ == 0) && (iStack_70 == 0)) && (iStack_68 == 0)) {
                        uVar12 = dma_buf_get(uStack_78 & 0xffffffff);
                        uVar11 = uVar12;
                        if (uVar12 < 0xfffffffffffff001) {
                            uVar11 = mem_buf_reclaim(uVar12);
                            uVar11 = uVar11 & 0xffffffff;
                            dma_buf_put(uVar12);
                        }
                        if (uVar11 == 0) goto code_r0x08001b1c;
                        puVar8 = uVar11;
                    }
                }
                else if (param_2 == 0xc0304d03) {
                    iVar5 = sym.mem_buf_lend_user(&uStack_80,1);
                    goto joined_r0x08001ab8;
                }
            }
            else if (param_2 == 0xc0304d06) {
                iVar5 = sym.mem_buf_lend_user(&uStack_80,0);
                if (iVar5 == 0) goto code_r0x08001b1c;
code_r0x08001ad4:
                puVar8 = iVar5;
            }
            else if (param_2 == 0xc0384d04) {
                iVar5 = sym.mem_buf_retrieve_user(&uStack_80);
joined_r0x08001ab8:
                if (iVar5 != 0) goto code_r0x08001ad4;
code_r0x08001b1c:
                auVar15 = __check_object_size(&uStack_80,puVar14,1);
                iVar9 = sym._copy_to_user(param_3,auVar15,puVar14);
                puVar8 = NULL;
                arg3 = puVar14;
                if (iVar9 != 0) {
                    puVar8 = 0xfffffffffffffff2;
                }
            }
            else if (param_2 == 0xc0484d00) {
                if ((mem_buf_capability >> 1 & 1) != 0) {
                    iVar5 = sym.mem_buf_alloc_fd(&uStack_80);
                    if (iVar5 < 0) goto code_r0x08001ad4;
                    uStack_60 = CONCAT44(iVar5,uStack_60);
                    goto code_r0x08001b1c;
                }
                puVar8 = 0xffffffffffffffa1;
            }
        }
        else {
            puVar8 = 0xfffffffffffffff2;
        }
    }
    else {
        puVar8 = 0xffffffffffffffea;
        arg3 = param_3;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return puVar8;
    }
    auVar15 = __stack_chk_fail(puVar8);
    puVar10 = auVar15._0_8_;
    *extraout_x18 = sym.mem_buf_lend_user;
    pcStack_b8 = sym.mem_buf_lend_user;
    iVar9 = sp_el0;
    iStack_c8 = *(iVar9 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    if (puVar10[1] != 0) {
        puVar14 = 0xffffffea;
        if ((*(puVar10 + 2) == 0) || (0x10 < puVar10[1])) goto code_r0x08001bc8;
        if ((*(puVar10 + 6) == 0) && ((*(puVar10 + 8) == 0 && (*(puVar10 + 10) == 0)))) {
            uVar11 = dma_buf_get(*puVar10);
            if (uVar11 < 0xfffffffffffff001) {
                arg3 = &uStack_d0;
                uVar7 = sym.mem_buf_acl_to_vmid_perms_list(puVar10[1],*(puVar10 + 2),arg3,&uStack_d8);
                uVar3 = uStack_d0;
                uVar2 = uStack_d8;
                puVar14 = uVar7;
                if (uVar7 == 0) {
                    uStack_100 = CONCAT44(uStack_100._4_4_,puVar10[1]);
                    uStack_f8 = uStack_d0;
                    uStack_f0 = uStack_d8;
                    if ((auVar15._8_8_ & 1) == 0) {
                        uVar7 = mem_buf_share(uVar11,&uStack_100);
                    }
                    else {
                        uVar7 = mem_buf_lend();
                    }
                    puVar14 = uVar7;
                    if (uVar7 == 0) {
                        puVar14 = NULL;
                        *(puVar10 + 4) = uStack_e8 & 0xffffffff;
                    }
                    kfree(uVar2);
                    kfree(uVar3);
                }
                dma_buf_put(uVar11);
            }
            else {
                puVar14 = uVar11 & 0xffffffff;
            }
            goto code_r0x08001bc8;
        }
    }
    puVar14 = 0xffffffea;
code_r0x08001bc8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return puVar14;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar14 = sp_el0;
    uVar11 = (uVar12 << 8) >> 8;
    if (((*(puVar14 + 0x3e) >> 5 & 1) != 0) || (uVar13 = uVar12, (*puVar14 >> 0x1a & 1) != 0)) {
        uVar13 = uVar12 & uVar11;
    }
    bVar4 = CARRY8(uVar13,arg3);
    uVar13 = uVar13 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar13 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar13 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar13,~uVar1) && !CARRY8(uVar13 + ~uVar1,bVar4) || uVar13 == uVar1 + !bVar4) {
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar13 = daif;
            if ((uVar13 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar14[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar14[1];
            InstructionSynchronizationBarrier();
            daif = uVar13;
        }
        if ((uVar12 & uVar11 & 0xffffff8000000000) != 0) {
            uVar12 = 0;
        }
        arg3 = __arch_copy_to_user(uVar12);
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar12 = daif;
                daif = uVar12 | 0xc0;
            }
            uVar12 = ttbr1_el1;
            ttbr0_el1 = (uVar12 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar12 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
    }
    return arg3;
}


// ===== sym.compat_ptr_ioctl.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.compat_ptr_ioctl.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mem_buf_relinquish_memparcel_hdl.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001268 (size 8) =====

void sym.mem_buf_relinquish_memparcel_hdl.38b212b217376b213cbf26637648b44f.cfi_jt
               (ulong param_1,uint64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mem_buf_relinquish_mem(param_2 & 0xffffffff,param_3);
    return;
}


// ===== sym.mem_buf_get_sgl.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.mem_buf_get_sgl.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x10);
}


// ===== sym.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt @ 0x08001278 (size 8) =====

uint64_t sym.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_mem_buf_fd_to_vmid == 0) {
        uVar3 = 0xfffffdfb;
    }
    else {
        uVar2 = sym.mem_buf_msgq_alloc(param_1 + 0x10);
        uVar3 = uVar2 & 0xffffffff;
        if (uVar2 == 0) {
            cdev_init(obj.mem_buf_char_dev,obj.mem_buf_dev_fops);
            uVar1 = cdev_add(obj.mem_buf_char_dev,_segment.ehdr,1);
            if (uVar1 < 0) {
                uVar3 = uVar1;
            }
            else {
                uVar3 = device_create(CONCAT44(*0x8000004,_segment.ehdr),0,_segment.ehdr,0,"membuf");
                if (uVar3 < 0xfffffffffffff001) {
                    uVar3 = 0;
                    goto code_r0x08001854;
                }
                cdev_del(obj.mem_buf_char_dev);
            }
            sym.mem_buf_msgq_free(param_1 + 0x10);
        }
    }
code_r0x08001854:
    return uVar3 & 0xffffffff;
}


// ===== sym.mem_buf_msgq_remove.964092d81b7022c9d91bd8082a8b4782.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.mem_buf_msgq_remove.964092d81b7022c9d91bd8082a8b4782.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
    cdev_del(obj.mem_buf_char_dev);
    sym.mem_buf_msgq_free(param_1 + 0x10);
    return 0;
}


// ===== sym.mem_buf_alloc_req_work.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001288 (size 8) =====

void sym.mem_buf_alloc_req_work.38b212b217376b213cbf26637648b44f.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t *piVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint uVar16;
    uint uVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong *in_x18;
    uint uVar22;
    uint64_t *puVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    ulong uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    puVar23 = param_1 + -0x10;
    uVar24 = *puVar23;
    do {
        uStack_78 = 0;
        uStack_70 = 0;
        iStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = 0;
        if ((*(uVar24 + 0x1c) == 1) && (uVar24 + 0x24 != 0)) {
            iVar11 = *(uVar24 + 0x14);
            piVar12 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x60);
            if (piVar12 == NULL) {
                piVar12 = 0xfffffffffffffff4;
                goto code_r0x080037d4;
            }
            mutex_lock(obj.mem_buf_idr_mutex);
            iVar9 = idr_alloc_cyclic(obj.mem_buf_obj_idr,0,0,0x7fffffff,0xcc0);
            mutex_unlock(obj.mem_buf_idr_mutex);
            if (iVar9 < 0) {
                _printk(0x8000a51,"mem_buf_alloc_obj_id",iVar9);
                _printk(0x8000954,"mem_buf_prep_xfer_mem",iVar9);
code_r0x080036b4:
                kfree(piVar12);
                piVar12 = iVar9;
            }
            else {
                *(piVar12 + 0xb) = iVar9;
                iVar18 = *(uVar24 + 0xc);
                *(piVar12 + 1) = iVar11;
                *piVar12 = iVar18;
                *(piVar12 + 8) = 1;
                uVar10 = mem_buf_gh_acl_desc_to_vmid_perm_list(uVar24 + 0x1c,piVar12 + 9,piVar12 + 10);
                if (uVar10 != 0) {
                    uVar13 = uVar10;
                    _printk(0x80006c5,"mem_buf_prep_xfer_mem",uVar13);
code_r0x08003688:
                    iVar9 = uVar13;
                    iVar18 = piVar12[0xb];
                    mutex_lock(obj.mem_buf_idr_mutex);
                    idr_remove(obj.mem_buf_obj_idr,iVar18);
                    mutex_unlock(obj.mem_buf_idr_mutex);
                    goto code_r0x080036b4;
                }
                if (iVar11 != 2) {
                    if (iVar11 == 1) {
                        uVar13 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x90);
                        if (uVar13 == 0) {
                            uVar13 = 0xfffffffffffffff4;
                        }
                        else {
                            strscpy(uVar13,uVar24 + 0x24,0x80);
                            if (uVar13 < 0xfffffffffffff001) goto code_r0x08003344;
                        }
                    }
                    else {
                        uVar13 = 0xffffffffffffffea;
                    }
                    _printk(0x80009d7,"mem_buf_prep_xfer_mem",uVar13);
                    kfree(piVar12[9]);
                    kfree(piVar12[10]);
                    goto code_r0x08003688;
                }
                uVar13 = 0;
code_r0x08003344:
                piVar12[2] = uVar13;
                piVar12[6] = piVar12 + 6;
                piVar12[7] = piVar12 + 6;
            }
            if (piVar12 < 0xfffffffffffff001) {
                if (piVar12[1] == 2) {
                    iVar19 = *piVar12;
                    iVar18 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar18 = 0x30;
                    }
                    uVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0,0x10);
                    if (uVar13 == 0) {
                        iVar11 = -0xc;
                    }
                    else {
                        uVar14 = iVar19 + 0xfff;
                        iVar18 = kvmalloc_node(uVar14 >> 9 & 0x7fffffff8,0xdc0,0xffffffff);
                        if (iVar18 == 0) {
                            uVar14 = 0xfffffff4;
code_r0x0800372c:
                            kfree(uVar13);
                            goto code_r0x08003734;
                        }
                        uVar15 = uVar14 >> 0xc;
                        if (uVar15 == 0) {
                            iVar11 = 0;
                        }
                        else {
                            iVar11 = 0;
                            uVar25 = 0x7ff;
                            do {
                                uVar25 = uVar25 & (2 << ((LZCOUNT(uVar15) ^ 0x1f) & 0x1f)) + -1;
                                while( true ) {
                                    if (uVar25 == 0) {
                                        uVar14 = 0xfffffff4;
                                        goto code_r0x08003704;
                                    }
                                    uVar10 = LZCOUNT(uVar25) ^ 0x3f;
                                    uVar6 = 1 << (uVar10 & 0x1f);
                                    uVar7 = tpidr_el1;
                                    uVar16 = 0x12dc0;
                                    if (uVar25 <= uVar6) {
                                        uVar16 = 0xdc0;
                                    }
                                    iVar19 = __alloc_pages(uVar16,uVar10,0,0);
                                    if (iVar19 != 0) break;
                                    uVar25 = uVar25 & ~uVar6;
                                }
                                if (uVar10 != 0) {
                                    split_page(iVar19,uVar10);
                                }
                                uVar10 = uVar6;
                                if ((uVar6 - 1 == 0) || (uVar6 + iVar11 + -1 < iVar11)) {
code_r0x0800353c:
                                    do {
                                        iVar9 = iVar11 + 1;
                                        *(iVar18 + iVar11 * 8) = iVar19;
                                        uVar10 = uVar10 - 1;
                                        iVar19 = iVar19 + 0x40;
                                        iVar11 = iVar9;
                                    } while (uVar10 != 0);
                                }
                                else {
                                    uVar2 = (uVar6 - 1) + 1;
                                    uVar20 = uVar2 & 0x1fffffffe;
                                    iVar9 = iVar11 + uVar20;
                                    iVar4 = iVar19 + uVar20 * 0x40;
                                    uVar21 = uVar20;
                                    do {
                                        iVar3 = iVar19 + 0x40;
                                        iVar1 = iVar11 + 1;
                                        *(iVar18 + iVar11 * 8) = iVar19;
                                        iVar19 = iVar19 + 0x80;
                                        uVar21 = uVar21 - 2;
                                        iVar11 = iVar11 + 2;
                                        *(iVar18 + iVar1 * 8) = iVar3;
                                    } while (uVar21 != 0);
                                    iVar19 = iVar4;
                                    uVar10 = uVar6 - uVar20;
                                    iVar11 = iVar9;
                                    if (uVar2 != uVar20) goto code_r0x0800353c;
                                }
                                uVar6 = uVar15 - uVar6;
                                uVar15 = uVar6;
                            } while (uVar6 != 0);
                        }
                        uVar15 = sg_alloc_table_from_pages_segment
                                           (uVar13,iVar18,iVar11,0,uVar14 & 0xfffff000,0xffffffff,0xcc0);
                        uVar14 = uVar15 & 0xffffffff;
                        if (uVar15 != 0) {
code_r0x08003704:
                            if (iVar11 != 0) {
                                iVar11 = iVar11 + -1;
                                do {
                                    __free_pages(*(iVar18 + iVar11 * 8),0);
                                    iVar11 = iVar11 + -1;
                                } while (iVar11 != -1);
                            }
                            kvfree(iVar18);
                            goto code_r0x0800372c;
                        }
                        kvfree(iVar18);
code_r0x080033d8:
                        piVar12[3] = uVar13;
                        *(piVar12 + 4) = 0;
code_r0x080033e0:
                        uVar16 = *(uVar24 + 0x18);
                        iStack_88 = piVar12[9];
                        iStack_80 = piVar12[10];
                        uStack_90 = CONCAT44(uStack_90._4_4_,piVar12[8]);
                        iVar11 = mem_buf_assign_mem(uVar16,uVar13,&uStack_90);
                        if (-1 < iVar11) {
                            *(piVar12 + 0x24) = uVar16;
                            *(piVar12 + 5) = uStack_78;
code_r0x08003740:
                            mutex_lock(obj.mem_buf_xfer_mem_list_lock);
                            piVar8 = _obj.mem_buf_xfer_mem_list;
                            piVar5 = piVar12 + 6;
                            uVar13 = __list_add_valid(piVar5,obj.mem_buf_xfer_mem_list,_obj.mem_buf_xfer_mem_list);
                            if ((uVar13 & 1) != 0) {
                                piVar8[1] = piVar5;
                                piVar12[6] = piVar8;
                                piVar12[7] = obj.mem_buf_xfer_mem_list;
                                _obj.mem_buf_xfer_mem_list = piVar5;
                            }
                            mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
                            goto code_r0x080037bc;
                        }
                        if (iVar11 == -99) {
                            iVar11 = -99;
                        }
                        else {
                            sym.mem_buf_rmt_free_mem(piVar12);
                        }
                    }
                }
                else {
                    if (piVar12[1] == 1) {
                        iVar19 = piVar12[2];
                        iVar18 = dma_heap_find(iVar19);
                        if (iVar18 != 0) {
                            uVar14 = dma_heap_buffer_alloc(iVar18,*piVar12,0x80002,0);
                            if (uVar14 < 0xfffffffffffff001) {
                                uVar15 = dma_buf_attach(uVar14,_mem_buf_fd_to_vmid);
                                if (uVar15 < 0xfffffffffffff001) {
                                    uVar13 = dma_buf_map_attachment(uVar15,0);
                                    if (uVar13 < 0xfffffffffffff001) {
                                        *(iVar19 + 0x80) = uVar14;
                                        *(iVar19 + 0x88) = uVar15;
                                        goto code_r0x080033d8;
                                    }
                                    _printk(0x8000a79,"mem_buf_rmt_alloc_dmaheap_mem",uVar13);
                                    dma_buf_detach(uVar14,uVar15);
                                    dma_buf_put(uVar14);
                                    uVar14 = uVar13 & 0xffffffff;
                                }
                                else {
                                    _printk(0x8000768,"mem_buf_rmt_alloc_dmaheap_mem",uVar15);
                                    dma_buf_put(uVar14);
                                    uVar14 = uVar15 & 0xffffffff;
                                }
                            }
                            else {
                                _printk(0x800078c,"mem_buf_rmt_alloc_dmaheap_mem",*piVar12,iVar19,0x80002,uVar14);
                            }
code_r0x08003734:
                            iVar11 = uVar14;
                            if (-1 < iVar11) {
                                if (piVar12[4] == '\0') {
                                    uVar13 = piVar12[3];
                                    goto code_r0x080033e0;
                                }
                                goto code_r0x08003740;
                            }
                            goto code_r0x080037b0;
                        }
                        _printk(0x80007cd,"mem_buf_rmt_alloc_dmaheap_mem",iVar19);
                    }
                    iVar11 = -0x16;
                }
code_r0x080037b0:
                sym.mem_buf_free_xfer_mem(piVar12);
                piVar12 = iVar11;
            }
code_r0x080037bc:
            if (0xfffffffffffff000 < piVar12) goto code_r0x080037d4;
            uVar22 = 0;
            uVar16 = piVar12[5];
            uVar17 = piVar12[0xb];
        }
        else {
            piVar12 = 0xffffffffffffffea;
code_r0x080037d4:
            uVar22 = SUB84(piVar12,0);
            _printk(0x8000abb,"mem_buf_alloc_req_work",piVar12 & 0xffffffff);
            piVar12 = NULL;
            uVar16 = 0;
            uVar17 = 0;
        }
        uVar24 = mem_buf_construct_alloc_resp(uVar24,uVar22,uVar16,uVar17);
        kfree(*puVar23);
        kfree(puVar23);
        if (uVar24 < 0xfffffffffffff001) {
            uVar10 = mem_buf_msgq_send(_segment.ehdr,uVar24);
            puVar23 = uVar10;
            kfree(uVar24);
            if (uVar10 < 0) {
                _printk(0x80006fa,"mem_buf_alloc_req_work",uVar10);
                goto joined_r0x080038f4;
            }
        }
        else {
joined_r0x080038f4:
            if (piVar12 != NULL) {
                mutex_lock(obj.mem_buf_xfer_mem_list_lock);
                uVar13 = __list_del_entry_valid(piVar12 + 6);
                if ((uVar13 & 1) != 0) {
                    iVar18 = piVar12[6];
                    piVar5 = piVar12[7];
                    *(iVar18 + 8) = piVar5;
                    *piVar5 = iVar18;
                }
                piVar12[6] = -0x2152ffffffffff00;
                piVar12[7] = -0x2152fffffffffede;
                mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
                sym.mem_buf_cleanup_alloc_req(piVar12,*(piVar12 + 5));
            }
        }
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        iVar18 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar18) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar18) & 0x3f) & 1)
            != 0) {
            iVar18 = sp_el0;
            piVar12 = iVar18 + 0x10;
            *(iVar18 + 0x10) = *piVar12 + 1;
            __traceiter_receive_alloc_req(0,uVar24);
            iVar19 = *piVar12;
            *(iVar18 + 0x10) = iVar19 + -1;
            if ((iVar19 + -1 == 0) || (*piVar12 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.mem_buf_relinquish_work.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x08001290 (size 8) =====

void sym.mem_buf_relinquish_work.38b212b217376b213cbf26637648b44f.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = param_1 + -0x10;
    iVar6 = *piVar5;
    iVar3 = *(iVar6 + 0x10);
    mutex_lock(obj.mem_buf_xfer_mem_list_lock);
    pcVar7 = obj.mem_buf_xfer_mem_list;
    do {
        pcVar7 = *pcVar7;
        if (pcVar7 == obj.mem_buf_xfer_mem_list) {
            mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
            goto code_r0x08003e5c;
        }
    } while (*(pcVar7 + 0x28) != iVar3);
    uVar4 = __list_del_entry_valid(pcVar7);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar7;
        piVar2 = *(pcVar7 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar7 = 0xdead000000000100;
    *(pcVar7 + 8) = 0xdead000000000122;
    mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
    if (pcVar7 + -0x30 == NULL) {
code_r0x08003e5c:
        _printk(0x8000863,"mem_buf_relinquish_work",iVar3);
    }
    else {
        sym.mem_buf_cleanup_alloc_req(pcVar7 + -0x30,*(iVar6 + 0xc));
    }
    uVar4 = mem_buf_construct_relinquish_resp(iVar6);
    if (uVar4 < 0xfffffffffffff001) {
        mem_buf_msgq_send(_segment.ehdr,uVar4);
        kfree(uVar4);
    }
    kfree(*piVar5);
    kfree(piVar5);
    return;
}


// ===== sym.mem_buf_free.cfi_jt @ 0x08001298 (size 8) =====

void sym.mem_buf_free.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mem_buf_list_lock);
    uVar3 = __list_del_entry_valid(param_1 + 0x48);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(param_1 + 0x48);
        piVar2 = *(param_1 + 0x50);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + 0x48) = 0xdead000000000100;
    *(param_1 + 0x50) = 0xdead000000000122;
    mutex_unlock(obj.mem_buf_list_lock);
    sym.mem_buf_relinquish_mem(param_1);
    kvfree(*(param_1 + 0x10));
    if (*(param_1 + 0x30) == 1) {
        kfree(*(param_1 + 0x38));
    }
    if (*(param_1 + 0x20) == 1) {
        kfree(*(param_1 + 0x28));
    }
    kfree(*(param_1 + 8));
    kfree(param_1);
    return;
}


// ===== sym.mem_buf_alloc_resp_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt @ 0x080012a0 (size 8) =====

int sym.mem_buf_alloc_resp_hdlr.38b212b217376b213cbf26637648b44f.cfi_jt
              (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    ulong *in_x18;
    int iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability >> 1 & 1) == 0) {
        iVar1 = -1;
    }
    else {
        iVar1 = *(param_2 + 0xc);
        if (iVar1 < 0) {
            _printk(0x8000983,"mem_buf_alloc_resp_hdlr",iVar1);
        }
        else {
            *(param_4 + 0x18) = *(param_2 + 0x10);
            *(param_4 + 0x58) = *(param_2 + 0x14);
        }
    }
    return iVar1;
}


// ===== sym.mem_buf_acl_to_vmid_perms_list @ 0x080012a8 (size 400) =====

uint64_t sym.mem_buf_acl_to_vmid_perms_list(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar14 = 0xffffffea;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_60 = 0;
    uVar11 = arg3;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar13 = (arg1 & 0xffffffffU) << 2;
        iVar7 = __kmalloc(iVar13,0xcc0);
        if (iVar7 == 0) {
            uVar14 = 0xfffffff4;
        }
        else {
            iVar13 = __kmalloc(iVar13,0xcc0);
            if (iVar13 == 0) {
                kfree(iVar7);
                uVar14 = 0xfffffff4;
            }
            else {
                iVar6 = 0;
                do {
                    uVar11 = 8;
                    iVar8 = sym._copy_from_user(&uStack_60,arg2 + iVar6 * 8,8);
                    if (iVar8 != 0) {
                        uVar14 = 0xfffffff2;
code_r0x080013d0:
                        kfree(iVar13);
                        kfree(iVar7);
                        goto code_r0x080013e0;
                    }
                    iVar8 = iVar6;
                    iVar5 = mem_buf_fd_to_vmid(uStack_60 & 0xffffffff);
                    *(iVar7 + iVar8 * 4) = iVar5;
                    if (7 < uStack_60._4_4_) {
                        iVar6 = ___ratelimit(obj.is_valid_mem_buf_perms._rs,"is_valid_mem_buf_perms");
                        if (iVar6 != 0) {
                            _printk(0x80008c9,"is_valid_mem_buf_perms");
                        }
                        uVar14 = 0xffffffea;
                        *(iVar13 + iVar8 * 4) = 0xffffffea;
                        goto code_r0x080013d0;
                    }
                    uVar14 = (uStack_60._4_4_ & 0xaaaaaaaa) >> 1 | (uStack_60._4_4_ & 0x55555555) << 1;
                    *(iVar13 + iVar8 * 4) = (((uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2) << 0x1c) >> 0x1d;
                    if (iVar5 < 0) {
                        uVar14 = 0xffffffea;
                        goto code_r0x080013d0;
                    }
                    iVar6 = iVar6 + 1;
                } while (arg1 != iVar6);
                uVar14 = 0;
                *arg3 = iVar7;
                *arg4 = iVar13;
            }
        }
    }
code_r0x080013e0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar14;
    }
    auVar15 = __stack_chk_fail();
    uVar10 = auVar15._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar10 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar10, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar12 = uVar10 & uVar3;
    }
    bVar4 = CARRY8(uVar12,uVar11);
    uVar12 = uVar12 + uVar11;
    uVar1 = 0;
    if (!bVar4 || uVar12 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar12 = 0xffffffffffffffff;
    }
    uVar9 = uVar11;
    if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar4) || uVar12 == uVar1 + !bVar4) {
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar10 & uVar3 & 0xffffff8000000000) != 0) {
            uVar10 = 0;
        }
        uVar9 = __arch_copy_from_user(auVar15._0_8_,uVar10,uVar11);
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (uVar9 != 0) {
        memset(auVar15._0_8_ + (uVar11 - uVar9),0,uVar9);
    }
    return uVar9;
}


// ===== sym._copy_from_user @ 0x08001438 (size 376) =====

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
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x080015ec (size 364) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2)

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
    bVar4 = 0xfffffffffffffff7 < uVar6;
    uVar6 = uVar6 + 8;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 8;
    }
    else {
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,8);
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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
        if (iVar5 == 0) {
            return 0;
        }
    }
    memset((arg1 - iVar5) + 8,0,iVar5);
    return iVar5;
}


// ===== sym.mem_buf_msgq_probe @ 0x08001794 (size 220) =====

uint64_t sym.mem_buf_msgq_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_mem_buf_fd_to_vmid == 0) {
        uVar3 = 0xfffffdfb;
    }
    else {
        uVar2 = sym.mem_buf_msgq_alloc(arg1 + 0x10);
        uVar3 = uVar2 & 0xffffffff;
        if (uVar2 == 0) {
            cdev_init(obj.mem_buf_char_dev,obj.mem_buf_dev_fops);
            uVar1 = cdev_add(obj.mem_buf_char_dev,_segment.ehdr,1);
            if (uVar1 < 0) {
                uVar3 = uVar1;
            }
            else {
                uVar3 = device_create(CONCAT44(*0x8000004,_segment.ehdr),0,_segment.ehdr,0,"membuf");
                if (uVar3 < 0xfffffffffffff001) {
                    uVar3 = 0;
                    goto code_r0x08001854;
                }
                cdev_del(obj.mem_buf_char_dev);
            }
            sym.mem_buf_msgq_free(arg1 + 0x10);
        }
    }
code_r0x08001854:
    return uVar3 & 0xffffffff;
}


// ===== sym.mem_buf_msgq_remove @ 0x08001870 (size 88) =====

ulong sym.mem_buf_msgq_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
    cdev_del(obj.mem_buf_char_dev);
    sym.mem_buf_msgq_free(arg1 + 0x10);
    return 0;
}


// ===== sym.mem_buf_dev_ioctl @ 0x080018c8 (size 648) =====

ulong * sym.mem_buf_dev_ioctl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *arg3;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar13 = arg1;
    uVar7 = uVar13 >> 0x10 & 0x3fff;
    puVar15 = uVar7;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_80 = 0;
    if (uVar7 < 0x49) {
        __check_object_size(&uStack_80,puVar15,0);
        arg3 = puVar15;
        iVar9 = sym._copy_from_user(&uStack_80,arg2,puVar15);
        if (iVar9 == 0) {
            if ((uVar13 >> 0x1e & 1) == 0) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                iStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                iStack_70 = 0;
                uStack_80 = 0;
            }
            puVar8 = 0xffffffffffffffe7;
            if (uVar13 < -0x3fcfb2fa) {
                if (uVar13 == 0xc0084d02) {
                    uVar11 = dma_buf_get(uStack_80 & 0xffffffff);
                    if (uVar11 < 0xfffffffffffff001) {
                        uVar12 = to_mem_buf_vmperm(uVar11);
                        if (uVar12 < 0xfffffffffffff001) {
                            uVar6 = mem_buf_dma_buf_exclusive_owner(uVar11);
                            iVar5 = 0;
                            uStack_80 = CONCAT44(uVar6,uStack_80) & 0x1ffffffff;
                        }
                        else {
                            iVar5 = -0x16;
                        }
                        dma_buf_put(uVar11);
                    }
                    else {
                        iVar5 = uVar11;
                    }
                    if (iVar5 == 0) goto code_r0x08001b1c;
                    puVar8 = iVar5;
                }
                else if (uVar13 == 0xc0204d03) {
                    puVar8 = 0xffffffffffffffea;
                    if (((uStack_78._4_4_ == 0) && (iStack_70 == 0)) && (iStack_68 == 0)) {
                        uVar12 = dma_buf_get(uStack_78 & 0xffffffff);
                        uVar11 = uVar12;
                        if (uVar12 < 0xfffffffffffff001) {
                            uVar11 = mem_buf_reclaim(uVar12);
                            uVar11 = uVar11 & 0xffffffff;
                            dma_buf_put(uVar12);
                        }
                        if (uVar11 == 0) goto code_r0x08001b1c;
                        puVar8 = uVar11;
                    }
                }
                else if (uVar13 == 0xc0304d03) {
                    iVar5 = sym.mem_buf_lend_user(&uStack_80,1);
                    goto joined_r0x08001ab8;
                }
            }
            else if (uVar13 == 0xc0304d06) {
                iVar5 = sym.mem_buf_lend_user(&uStack_80,0);
                if (iVar5 == 0) goto code_r0x08001b1c;
code_r0x08001ad4:
                puVar8 = iVar5;
            }
            else if (uVar13 == 0xc0384d04) {
                iVar5 = sym.mem_buf_retrieve_user(&uStack_80);
joined_r0x08001ab8:
                if (iVar5 != 0) goto code_r0x08001ad4;
code_r0x08001b1c:
                auVar16 = __check_object_size(&uStack_80,puVar15,1);
                iVar9 = sym._copy_to_user(arg2,auVar16,puVar15);
                puVar8 = NULL;
                arg3 = puVar15;
                if (iVar9 != 0) {
                    puVar8 = 0xfffffffffffffff2;
                }
            }
            else if (uVar13 == 0xc0484d00) {
                if ((mem_buf_capability >> 1 & 1) != 0) {
                    iVar5 = sym.mem_buf_alloc_fd(&uStack_80);
                    if (iVar5 < 0) goto code_r0x08001ad4;
                    uStack_60 = CONCAT44(iVar5,uStack_60);
                    goto code_r0x08001b1c;
                }
                puVar8 = 0xffffffffffffffa1;
            }
        }
        else {
            puVar8 = 0xfffffffffffffff2;
        }
    }
    else {
        puVar8 = 0xffffffffffffffea;
        arg3 = arg2;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return puVar8;
    }
    auVar16 = __stack_chk_fail(puVar8);
    puVar10 = auVar16._0_8_;
    *extraout_x18 = sym.mem_buf_lend_user;
    pcStack_b8 = sym.mem_buf_lend_user;
    iVar9 = sp_el0;
    iStack_c8 = *(iVar9 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    if (puVar10[1] != 0) {
        puVar15 = 0xffffffea;
        if ((*(puVar10 + 2) == 0) || (0x10 < puVar10[1])) goto code_r0x08001bc8;
        if ((*(puVar10 + 6) == 0) && ((*(puVar10 + 8) == 0 && (*(puVar10 + 10) == 0)))) {
            uVar11 = dma_buf_get(*puVar10);
            if (uVar11 < 0xfffffffffffff001) {
                arg3 = &uStack_d0;
                uVar7 = sym.mem_buf_acl_to_vmid_perms_list(puVar10[1],*(puVar10 + 2),arg3,&uStack_d8);
                uVar3 = uStack_d0;
                uVar2 = uStack_d8;
                puVar15 = uVar7;
                if (uVar7 == 0) {
                    uStack_100 = CONCAT44(uStack_100._4_4_,puVar10[1]);
                    uStack_f8 = uStack_d0;
                    uStack_f0 = uStack_d8;
                    if ((auVar16._8_8_ & 1) == 0) {
                        uVar7 = mem_buf_share(uVar11,&uStack_100);
                    }
                    else {
                        uVar7 = mem_buf_lend();
                    }
                    puVar15 = uVar7;
                    if (uVar7 == 0) {
                        puVar15 = NULL;
                        *(puVar10 + 4) = uStack_e8 & 0xffffffff;
                    }
                    kfree(uVar2);
                    kfree(uVar3);
                }
                dma_buf_put(uVar11);
            }
            else {
                puVar15 = uVar11 & 0xffffffff;
            }
            goto code_r0x08001bc8;
        }
    }
    puVar15 = 0xffffffea;
code_r0x08001bc8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_c8) {
        return puVar15;
    }
    uVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar15 = sp_el0;
    uVar11 = (uVar12 << 8) >> 8;
    if (((*(puVar15 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar12, (*puVar15 >> 0x1a & 1) != 0)) {
        uVar14 = uVar12 & uVar11;
    }
    bVar4 = CARRY8(uVar14,arg3);
    uVar14 = uVar14 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar14 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar14 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar14,~uVar1) && !CARRY8(uVar14 + ~uVar1,bVar4) || uVar14 == uVar1 + !bVar4) {
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar14 = daif;
            if ((uVar14 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar15[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar15[1];
            InstructionSynchronizationBarrier();
            daif = uVar14;
        }
        if ((uVar12 & uVar11 & 0xffffff8000000000) != 0) {
            uVar12 = 0;
        }
        arg3 = __arch_copy_to_user(uVar12);
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar12 = daif;
                daif = uVar12 | 0xc0;
            }
            uVar12 = ttbr1_el1;
            ttbr0_el1 = (uVar12 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar12 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
    }
    return arg3;
}


// ===== sym.mem_buf_lend_user @ 0x08001b50 (size 328) =====

ulong * sym.mem_buf_lend_user(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x2;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if (*(arg1 + 4) != 0) {
        puVar10 = 0xffffffea;
        if ((*(arg1 + 8) == 0) || (0x10 < *(arg1 + 4))) goto code_r0x08001bc8;
        if ((*(arg1 + 0x18) == 0) && ((*(arg1 + 0x20) == 0 && (*(arg1 + 0x28) == 0)))) {
            uVar7 = dma_buf_get(*arg1);
            if (uVar7 < 0xfffffffffffff001) {
                in_x2 = &uStack_50;
                uVar6 = sym.mem_buf_acl_to_vmid_perms_list(*(arg1 + 4),*(arg1 + 8),in_x2,&uStack_58);
                uVar4 = uStack_50;
                uVar3 = uStack_58;
                puVar10 = uVar6;
                if (uVar6 == 0) {
                    uStack_80 = CONCAT44(uStack_80._4_4_,*(arg1 + 4));
                    uStack_78 = uStack_50;
                    uStack_70 = uStack_58;
                    if ((arg2 & 1U) == 0) {
                        uVar6 = mem_buf_share(uVar7,&uStack_80);
                    }
                    else {
                        uVar6 = mem_buf_lend();
                    }
                    puVar10 = uVar6;
                    if (uVar6 == 0) {
                        puVar10 = NULL;
                        *(arg1 + 0x10) = uStack_68 & 0xffffffff;
                    }
                    kfree(uVar3);
                    kfree(uVar4);
                }
                dma_buf_put(uVar7);
            }
            else {
                puVar10 = uVar7 & 0xffffffff;
            }
            goto code_r0x08001bc8;
        }
    }
    puVar10 = 0xffffffea;
code_r0x08001bc8:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return puVar10;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar10 = sp_el0;
    uVar7 = (uVar8 << 8) >> 8;
    if (((*(puVar10 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar10 >> 0x1a & 1) != 0)) {
        uVar9 = uVar8 & uVar7;
    }
    bVar5 = CARRY8(uVar9,in_x2);
    uVar9 = uVar9 + in_x2;
    uVar1 = 0;
    if (!bVar5 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar5) || uVar9 == uVar1 + !bVar5) {
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar10[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar10[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar8 & uVar7 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        in_x2 = __arch_copy_to_user(uVar8);
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
    }
    return in_x2;
}


// ===== sym._copy_to_user @ 0x08001c98 (size 312) =====

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
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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
        if ((_compat_ptr_ioctl >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08001e0c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e50

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
    //switch table (4 cases) at 0x80006c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e64);
    (*pcVar1)();
}


// ===== sym.mem_buf_alloc @ 0x08001e64 (size 716) =====

ulong * sym.mem_buf_alloc(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    int iVar11;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 7;
    if ((mem_buf_capability >> 1 & 1) == 0) {
        puVar10 = 0xffffffffffffffa1;
        goto code_r0x08001f40;
    }
    if ((((arg1 == 0) || (*arg1 == 0)) || (*(arg1 + 8) != 1)) ||
       (((*(arg1 + 0x10) == 0 || (*(arg1 + 0x18) == 0)) || ((1 < *(arg1 + 0x30) - 1U || (1 < *(arg1 + 0x40) - 1U)))))) {
        puVar10 = 0xffffffffffffffea;
        goto code_r0x08001f40;
    }
    puVar10 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x60);
    if (puVar10 == NULL) {
        puVar10 = 0xfffffffffffffff4;
        goto code_r0x08001f40;
    }
    uVar6 = *(arg1 + 0x10);
    uVar2 = *(arg1 + 8);
    *puVar10 = *arg1;
    uVar7 = mem_buf_vmid_perm_list_to_gh_acl(uVar6,&uStack_3c,uVar2);
    puVar10[1] = uVar7;
    if (uVar7 < 0xfffffffffffff001) {
        if (*(arg1 + 0x28) == 0) {
code_r0x08001f9c:
            iVar11 = *(arg1 + 0x30);
            iVar9 = *(arg1 + 0x40);
            *(puVar10 + 0x1c) = *(arg1 + 0x20);
            *(puVar10 + 4) = iVar11;
            *(puVar10 + 6) = iVar9;
            if (iVar11 == 1) {
                uVar7 = kstrdup(*(arg1 + 0x38),0xcc0);
                puVar10[5] = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
                    iVar9 = *(arg1 + 0x40);
                    goto code_r0x08001ff0;
                }
            }
            else if (iVar11 == 2) {
                puVar10[5] = 0;
code_r0x08001ff0:
                if (iVar9 == 1) {
                    uVar7 = kstrdup(*(arg1 + 0x48),0xcc0);
                    puVar10[7] = uVar7;
                    if (uVar7 < 0xfffffffffffff001) goto code_r0x0800203c;
                    uVar7 = uVar7 & 0xffffffff;
                }
                else if (iVar9 == 2) {
                    puVar10[7] = 0;
code_r0x0800203c:
                    sym.trace_mem_buf_alloc_info(*puVar10,*(puVar10 + 4),*(puVar10 + 6),puVar10[1]);
                    uVar8 = sym.mem_buf_request_mem(puVar10);
                    uVar7 = uVar8 & 0xffffffff;
                    if (uVar8 == 0) {
                        uVar5 = mem_buf_map_mem_s2(*(puVar10 + 0x1c),puVar10 + 3,puVar10[1],puVar10 + 2,3);
                        if (uVar5 == 0) {
                            mutex_lock(obj.mem_buf_list_lock);
                            piVar4 = *0x8000608;
                            piVar1 = puVar10 + 9;
                            uVar7 = __list_add_valid(piVar1,*0x8000608,obj.mem_buf_list);
                            if ((uVar7 & 1) != 0) {
                                *0x8000608 = piVar1;
                                puVar10[9] = obj.mem_buf_list;
                                puVar10[10] = piVar4;
                                *piVar4 = piVar1;
                            }
                            mutex_unlock(obj.mem_buf_list_lock);
                            goto code_r0x08001f40;
                        }
                        uVar7 = uVar5;
                        sym.mem_buf_relinquish_mem(puVar10);
                    }
                    if (*(puVar10 + 6) == 1) {
                        kfree(puVar10[7]);
                    }
                }
                else {
                    uVar7 = 0xffffffea;
                    puVar10[7] = 0xffffffffffffffea;
                }
                if (*(puVar10 + 4) == 1) {
                    kfree(puVar10[5]);
                }
            }
            else {
                uVar7 = 0xffffffffffffffea;
                puVar10[5] = 0xffffffffffffffea;
            }
            iVar11 = uVar7;
            if (puVar10[2] != 0) {
                kvfree();
            }
        }
        else {
            uVar7 = dup_gh_sgl_desc();
            puVar10[2] = uVar7;
            if (uVar7 < 0xfffffffffffff001) goto code_r0x08001f9c;
            iVar11 = uVar7;
        }
        kfree(puVar10[1]);
    }
    else {
        iVar11 = uVar7;
    }
    kfree(puVar10);
    puVar10 = iVar11;
code_r0x08001f40:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return puVar10;
    }
    puVar10 = __stack_chk_fail();
    *extraout_x18 = sym.trace_mem_buf_alloc_info;
    return puVar10;
}


// ===== sym.trace_mem_buf_alloc_info @ 0x08002130 (size 44) =====

void sym.trace_mem_buf_alloc_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}


// ===== sym.mem_buf_request_mem @ 0x080021e8 (size 188) =====

uint64_t sym.mem_buf_request_mem(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = mem_buf_init_txn(_segment.ehdr,arg1);
    if (uVar2 < 0xfffffffffffff001) {
        uVar3 = mem_buf_construct_alloc_req(uVar2,*arg1,*(arg1 + 8),*(arg1 + 0x20),*(arg1 + 0x28),*(arg1 + 0x1c));
        if (uVar3 < 0xfffffffffffff001) {
            uVar1 = mem_buf_msgq_send(_segment.ehdr,uVar3);
            kfree(uVar3);
            if (uVar1 < 0) {
                uVar3 = uVar1;
            }
            else {
                uVar3 = mem_buf_txn_wait(_segment.ehdr,uVar2);
                uVar3 = uVar3 & 0xffffffff;
            }
        }
        mem_buf_destroy_txn(_segment.ehdr,uVar2);
    }
    else {
        uVar3 = uVar2 & 0xffffffff;
    }
    return uVar3 & 0xffffffff;
}


// ===== sym.mem_buf_relinquish_mem @ 0x080022a4 (size 256) =====

void sym.mem_buf_relinquish_mem(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    uint *puStack_50;
    uint *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uVar3 = *(arg1 + 0x18);
    uStack_30 = 7;
    uStack_2c = 3;
    puStack_48 = NULL;
    uStack_40 = 0;
    uStack_58 = 0;
    puStack_50 = NULL;
    if (uVar3 == 0xffffffff) {
        uVar6 = dup_gh_sgl_desc_to_sgt(*(arg1 + 0x10));
        if (uVar6 < 0xfffffffffffff001) {
            puStack_50 = &uStack_2c;
            puStack_48 = &uStack_30;
            uStack_58 = CONCAT44(uStack_58._4_4_,1);
            uStack_40 = CONCAT44(1,uStack_40);
            uStack_38 = 0;
            iVar4 = mem_buf_assign_mem(0,uVar6,&uStack_58);
            if (iVar4 == 0) {
                *(arg1 + 0x18) = uStack_40;
                sym.__mem_buf_relinquish_mem(*(arg1 + 0x58),uStack_40 & 0xffffffff);
            }
            sg_free_table(uVar6);
            kfree(uVar6);
        }
    }
    else {
        if (*(arg1 + 0x1c) != 0) {
            iVar4 = mem_buf_unmap_mem_s2(uVar3);
            if (iVar4 != 0) goto code_r0x08002374;
            uVar3 = *(arg1 + 0x18);
        }
        sym.__mem_buf_relinquish_mem(*(arg1 + 0x58),uVar3);
    }
code_r0x08002374:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_free;
    mutex_lock(obj.mem_buf_list_lock);
    uVar6 = __list_del_entry_valid(iVar5 + 0x48);
    if ((uVar6 & 1) != 0) {
        iVar1 = *(iVar5 + 0x48);
        piVar2 = *(iVar5 + 0x50);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(iVar5 + 0x48) = 0xdead000000000100;
    *(iVar5 + 0x50) = 0xdead000000000122;
    mutex_unlock(obj.mem_buf_list_lock);
    sym.mem_buf_relinquish_mem(iVar5);
    kvfree(*(iVar5 + 0x10));
    if (*(iVar5 + 0x30) == 1) {
        kfree(*(iVar5 + 0x38));
    }
    if (*(iVar5 + 0x20) == 1) {
        kfree(*(iVar5 + 0x28));
    }
    kfree(*(iVar5 + 8));
    kfree(iVar5);
    return;
}


// ===== sym.mem_buf_free @ 0x080023a4 (size 184) =====

void sym.mem_buf_free(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mem_buf_list_lock);
    uVar3 = __list_del_entry_valid(arg1 + 0x48);
    if ((uVar3 & 1) != 0) {
        iVar1 = *(arg1 + 0x48);
        piVar2 = *(arg1 + 0x50);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x48) = 0xdead000000000100;
    *(arg1 + 0x50) = 0xdead000000000122;
    mutex_unlock(obj.mem_buf_list_lock);
    sym.mem_buf_relinquish_mem(arg1);
    kvfree(*(arg1 + 0x10));
    if (*(arg1 + 0x30) == 1) {
        kfree(*(arg1 + 0x38));
    }
    if (*(arg1 + 0x20) == 1) {
        kfree(*(arg1 + 0x28));
    }
    kfree(*(arg1 + 8));
    kfree(arg1);
    return;
}


// ===== sym.mem_buf_get_sgl @ 0x0800245c (size 16) =====

ulong sym.mem_buf_get_sgl(int64_t arg1)

{
    return *(arg1 + 0x10);
}


// ===== sym.mem_buf_retrieve @ 0x0800246c (size 640) =====

ulong * sym.mem_buf_retrieve(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong *puVar3;
    uint32_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong *puStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    puStack_68 = *0x8000e38;
    uStack_60 = *0x8000e40;
    uStack_88 = *0x8000e18;
    uStack_80 = *0x8000e20;
    uStack_58 = *0x8000e48;
    uStack_78 = *0x8000e28;
    uStack_70 = *0x8000e30;
    uStack_98 = *0x8000e08;
    uStack_90 = *0x8000e10;
    if (((((*(arg1 + 0x1c) & 0xfff7fffc) == 0) && (*(arg1 + 4) != 0)) && (*(arg1 + 8) != 0)) && (*(arg1 + 0x10) != 0)) {
        puVar3 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0xa8);
        if (puVar3 == NULL) {
            puVar9 = 0xfffffffffffffff4;
        }
        else {
            puVar4 = mem_buf_vmid_perm_list_to_gh_acl(*(arg1 + 8),*(arg1 + 0x10),*(arg1 + 4));
            if (puVar4 < 0xfffffffffffff001) {
                uVar7 = *puVar4;
                if (*puVar4 != 0) {
                    pcVar8 = puVar4 + 6;
                    do {
                        if ((*arg1 == *(pcVar8 + -2)) && (*pcVar8 != '\0')) {
                            uVar5 = 2;
                            goto code_r0x080025bc;
                        }
                        uVar7 = uVar7 - 1;
                        pcVar8 = pcVar8 + 4;
                    } while (uVar7 != 0);
                }
                uVar5 = 1;
code_r0x080025bc:
                iVar2 = mem_buf_map_mem_s2(uVar5,arg1 + 0x18,puVar4,&uStack_50);
                if (iVar2 == 0) {
                    iVar2 = mem_buf_map_mem_s1(uStack_50);
                    if (-1 < iVar2) {
                        puVar9 = dup_gh_sgl_desc_to_sgt(uStack_50);
                        if (puVar9 < 0xfffffffffffff001) {
                            uVar5 = puVar9[1];
                            puVar10 = puVar3 + 10;
                            *puVar10 = *puVar9;
                            puVar3[0xb] = uVar5;
                            kfree(puVar9);
                            puVar3[1] = puVar3 + 1;
                            puVar3[2] = puVar3 + 1;
                            __mutex_init(puVar3 + 3,"&buffer->lock",obj.mem_buf_retrieve.__key);
                            *puVar3 = 0;
                            uVar5 = mem_buf_get_sgl_buf_size(uStack_50);
                            uVar1 = *(arg1 + 0x18);
                            puVar3[9] = uVar5;
                            *(puVar3 + 0xe) = 0;
                            puVar3[0x14] = sym.mem_buf_retrieve_release.38b212b217376b213cbf26637648b44f.cfi_jt;
                            uVar5 = mem_buf_vmperm_alloc_accept(puVar10,uVar1);
                            uStack_80 = puVar3[9];
                            uVar1 = *(arg1 + 0x1c);
                            puVar3[0xf] = uVar5;
                            uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
                            puStack_68 = puVar3;
                            puVar9 = mem_buf_dma_buf_export(&uStack_98,qcom_sg_buf_ops);
                            if (puVar9 < 0xfffffffffffff001) {
                                kvfree(uStack_50);
                                kfree(puVar4);
                                goto code_r0x080024e4;
                            }
                            sg_free_table(puVar10);
                        }
                        iVar2 = puVar9;
                        mem_buf_unmap_mem_s1(uStack_50);
                    }
                    kvfree(uStack_50);
                    mem_buf_unmap_mem_s2(*(arg1 + 0x18));
                }
                kfree(puVar4);
            }
            else {
                iVar2 = puVar4;
            }
            kfree(puVar3);
            puVar9 = iVar2;
        }
    }
    else {
        puVar9 = 0xffffffffffffffea;
    }
code_r0x080024e4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.mem_buf_retrieve_release;
        sg_free_table(iVar6 + 0x50);
        puVar9 = kfree(iVar6);
        return puVar9;
    }
    return puVar9;
}


// ===== sym.mem_buf_retrieve_release @ 0x080026ec (size 60) =====

void sym.mem_buf_retrieve_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sg_free_table(arg1 + 0x50);
    kfree(arg1);
    return;
}


// ===== sym.mem_buf_alloc_fd @ 0x08002728 (size 208) =====

uint64_t sym.mem_buf_alloc_fd(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_18 = *(iVar5 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if ((*arg1 == 0) || (*(arg1 + 0x10) == 0)) {
code_r0x080027c8:
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = 0xffffffea;
        if ((*(arg1 + 8) != 0) && (*(arg1 + 0x10) < 0x11)) {
            if ((((*(arg1 + 0x14) == 1) && (*(arg1 + 0x20) == 1)) && (*(arg1 + 0x30) == 0)) &&
               ((*(arg1 + 0x38) == 0 && (*(arg1 + 0x40) == 0)))) {
                uVar3 = sym.mem_buf_prep_alloc_data(&uStack_68,arg1);
                if (uVar3 < 0) goto code_r0x080027cc;
                sym.mem_buf_free_alloc_data(&uStack_68);
            }
            goto code_r0x080027c8;
        }
    }
code_r0x080027cc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail(uVar3);
    puVar6 = auVar8._8_8_;
    puVar4 = auVar8._0_8_;
    *extraout_x18 = sym.mem_buf_prep_alloc_data;
    pcStack_a8 = sym.mem_buf_prep_alloc_data;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uVar1 = *(puVar6 + 2);
    *puVar4 = *puVar6;
    *(puVar4 + 1) = uVar1;
    puStack_b0 = &stack0xfffffffffffffff0;
    uVar3 = sym.mem_buf_acl_to_vmid_perms_list(uVar1,puVar6[1],puVar4 + 2,puVar4 + 3);
    uVar7 = uVar3 & 0xffffffff;
    if (uVar3 != 0) goto code_r0x08002900;
    puVar4[5] = 0;
    *(puVar4 + 6) = *(puVar6 + 0x14);
    *(puVar4 + 8) = *(puVar6 + 4);
    if (*(puVar6 + 0x14) == 1) {
        uStack_c0 = 0;
        iVar5 = sym._copy_from_user_1(&uStack_c0,puVar6[3]);
        if (iVar5 != 0) goto code_r0x080028e8;
        uVar7 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x80);
        if (uVar7 == 0) {
            uVar7 = 0xfffffffffffffff4;
            goto code_r0x080028ec;
        }
        iVar2 = strncpy_from_user(uVar7,uStack_c0,0x80);
        if ((iVar2 < 0) || (iVar2 == 0x80)) {
            kfree(uVar7);
            goto code_r0x080028e8;
        }
        puVar4[7] = uVar7;
        if (uVar7 < 0xfffffffffffff001) goto code_r0x0800288c;
    }
    else if (*(puVar6 + 0x14) == 2) {
        puVar4[7] = 0;
code_r0x0800288c:
        if (*(puVar6 + 4) == 2) {
            uVar7 = 0;
            puVar4[9] = 0;
            goto code_r0x08002900;
        }
        if (*(puVar6 + 4) == 1) {
            uStack_c0 = 0;
            iVar5 = sym._copy_from_user_1(&uStack_c0,puVar6[5]);
            if (iVar5 != 0) goto code_r0x080028b4;
            uVar7 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x80);
            if (uVar7 == 0) {
                uVar7 = 0xfffffffffffffff4;
                goto code_r0x080028b8;
            }
            iVar2 = strncpy_from_user(uVar7,uStack_c0,0x80);
            if ((iVar2 < 0) || (iVar2 == 0x80)) {
                kfree(uVar7);
                goto code_r0x080028b4;
            }
            puVar4[9] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                uVar7 = 0;
                goto code_r0x08002900;
            }
        }
        else {
code_r0x080028b4:
            uVar7 = 0xffffffffffffffea;
code_r0x080028b8:
            puVar4[9] = uVar7;
        }
        if (*(puVar4 + 6) == 1) {
            kfree(puVar4[7]);
        }
    }
    else {
code_r0x080028e8:
        uVar7 = 0xffffffffffffffea;
code_r0x080028ec:
        puVar4[7] = uVar7;
    }
    kfree(puVar4[2]);
    kfree(puVar4[3]);
code_r0x08002900:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_b8) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_00 = sym.mem_buf_free_alloc_data;
        if (*(iVar5 + 0x40) == 1) {
            kfree(*(iVar5 + 0x48));
        }
        if (*(iVar5 + 0x30) == 1) {
            kfree(*(iVar5 + 0x38));
        }
        kfree(*(iVar5 + 0x10));
        uVar3 = kfree(*(iVar5 + 0x18));
        return uVar3;
    }
    return uVar7 & 0xffffffff;
}


// ===== sym.mem_buf_prep_alloc_data @ 0x080027f8 (size 520) =====

uint64_t sym.mem_buf_prep_alloc_data(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar1 = *(arg2 + 0x10);
    *arg1 = *arg2;
    *(arg1 + 8) = uVar1;
    uVar3 = sym.mem_buf_acl_to_vmid_perms_list(uVar1,*(arg2 + 8),arg1 + 0x10,arg1 + 0x18);
    uVar5 = uVar3 & 0xffffffff;
    if (uVar3 != 0) goto code_r0x08002900;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = *(arg2 + 0x14);
    *(arg1 + 0x40) = *(arg2 + 0x20);
    if (*(arg2 + 0x14) == 1) {
        uStack_50 = 0;
        iVar4 = sym._copy_from_user_1(&uStack_50,*(arg2 + 0x18));
        if (iVar4 != 0) goto code_r0x080028e8;
        uVar5 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x80);
        if (uVar5 == 0) {
            uVar5 = 0xfffffffffffffff4;
            goto code_r0x080028ec;
        }
        iVar2 = strncpy_from_user(uVar5,uStack_50,0x80);
        if ((iVar2 < 0) || (iVar2 == 0x80)) {
            kfree(uVar5);
            goto code_r0x080028e8;
        }
        *(arg1 + 0x38) = uVar5;
        if (uVar5 < 0xfffffffffffff001) goto code_r0x0800288c;
    }
    else if (*(arg2 + 0x14) == 2) {
        *(arg1 + 0x38) = 0;
code_r0x0800288c:
        if (*(arg2 + 0x20) == 2) {
            uVar5 = 0;
            *(arg1 + 0x48) = 0;
            goto code_r0x08002900;
        }
        if (*(arg2 + 0x20) == 1) {
            uStack_50 = 0;
            iVar4 = sym._copy_from_user_1(&uStack_50,*(arg2 + 0x28));
            if (iVar4 != 0) goto code_r0x080028b4;
            uVar5 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x80);
            if (uVar5 == 0) {
                uVar5 = 0xfffffffffffffff4;
                goto code_r0x080028b8;
            }
            iVar2 = strncpy_from_user(uVar5,uStack_50,0x80);
            if ((iVar2 < 0) || (iVar2 == 0x80)) {
                kfree(uVar5);
                goto code_r0x080028b4;
            }
            *(arg1 + 0x48) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                uVar5 = 0;
                goto code_r0x08002900;
            }
        }
        else {
code_r0x080028b4:
            uVar5 = 0xffffffffffffffea;
code_r0x080028b8:
            *(arg1 + 0x48) = uVar5;
        }
        if (*(arg1 + 0x30) == 1) {
            kfree(*(arg1 + 0x38));
        }
    }
    else {
code_r0x080028e8:
        uVar5 = 0xffffffffffffffea;
code_r0x080028ec:
        *(arg1 + 0x38) = uVar5;
    }
    kfree(*(arg1 + 0x10));
    kfree(*(arg1 + 0x18));
code_r0x08002900:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.mem_buf_free_alloc_data;
        if (*(iVar4 + 0x40) == 1) {
            kfree(*(iVar4 + 0x48));
        }
        if (*(iVar4 + 0x30) == 1) {
            kfree(*(iVar4 + 0x38));
        }
        kfree(*(iVar4 + 0x10));
        uVar3 = kfree(*(iVar4 + 0x18));
        return uVar3;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.mem_buf_free_alloc_data @ 0x08002a00 (size 100) =====

void sym.mem_buf_free_alloc_data(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) == 1) {
        kfree(*(arg1 + 0x48));
    }
    if (*(arg1 + 0x30) == 1) {
        kfree(*(arg1 + 0x38));
    }
    kfree(*(arg1 + 0x10));
    kfree(*(arg1 + 0x18));
    return;
}


// ===== sym.mem_buf_retrieve_user @ 0x08002a64 (size 392) =====

uint64_t sym.mem_buf_retrieve_user(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint *puVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar6;
    uint64_t unaff_x21;
    ulong unaff_x30;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    uint64_t uStack_80;
    uint *puStack_78;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar2 = puVar4[1];
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (uVar2 == 0) {
code_r0x08002ae4:
        uVar6 = 0xffffffea;
    }
    else {
        uVar6 = 0xffffffea;
        if ((*(puVar4 + 2) != 0) && (uVar2 < 0x11)) {
            if ((*(puVar4 + 8) != 0) ||
               (((*(puVar4 + 10) != 0 || (*(puVar4 + 0xc) != 0)) || ((puVar4[7] & 0xfff7fffc) != 0))))
            goto code_r0x08002ae4;
            uVar2 = sym.mem_buf_acl_to_vmid_perms_list(uVar2,*(puVar4 + 2),&uStack_40,&uStack_48);
            uVar6 = uVar2;
            if (uVar2 == 0) {
                iVar3 = mem_buf_fd_to_vmid(*puVar4);
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar3);
                if (iVar3 < 0) {
                    iVar3 = ___ratelimit(obj.mem_buf_retrieve_user._rs,"mem_buf_retrieve_user");
                    if (iVar3 != 0) {
                        _printk(0x8000b16,"mem_buf_retrieve_user",*puVar4);
                    }
code_r0x08002bc4:
                    uVar6 = 0;
                }
                else {
                    uStack_68 = CONCAT44(puVar4[1],iVar3);
                    uStack_4c = puVar4[7];
                    uStack_60 = uStack_40;
                    uStack_58 = uStack_48;
                    uStack_50 = *(puVar4 + 4);
                    unaff_x21 = sym.mem_buf_retrieve(&uStack_68);
                    if (unaff_x21 < 0xfffffffffffff001) {
                        uVar2 = dma_buf_fd(unaff_x21,uStack_4c);
                        uVar6 = uVar2;
                        if (-1 < uVar2) {
                            puVar4[6] = uVar2;
                            goto code_r0x08002bc4;
                        }
                        dma_buf_put(unaff_x21);
                    }
                    else {
                        uVar6 = unaff_x21 & 0xffffffff;
                    }
                }
                kfree(uStack_40);
                kfree(uStack_48);
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_msgq_alloc;
    pcStack_98 = sym.mem_buf_msgq_alloc;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_b8 = *0x8000e50;
    uStack_b0 = *0x8000e58;
    puStack_a0 = &stack0xffffffffffffffd0;
    uStack_90 = unaff_x21;
    uStack_80 = uVar6;
    puStack_78 = puVar4;
    if ((mem_buf_capability & 3) != 0) {
        _segment.ehdr = alloc_workqueue("mem_buf_wq",0x12,0);
        if (_segment.ehdr == 0) {
            _dev_err(uVar5,"Unable to initialize workqueue\n");
            uVar6 = 0xffffffea;
            goto code_r0x08002c7c;
        }
        uVar6 = mem_buf_msgq_register("trusted_vm",&uStack_b8);
        _segment.ehdr = uVar6;
        if (0xfffffffffffff000 < uVar6) {
            _dev_err(uVar5,"Unable to register for mem-buf message queue\n");
            destroy_workqueue(_segment.ehdr);
            _segment.ehdr = 0;
            goto code_r0x08002c7c;
        }
    }
    uVar6 = 0;
code_r0x08002c7c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar6 & 0xffffffff;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.mem_buf_msgq_free;
    if ((mem_buf_capability & 3) != 0) {
        mutex_lock(obj.mem_buf_list_lock);
        if (_obj.mem_buf_list != obj.mem_buf_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while there are membufs\n");
        }
        mutex_unlock(obj.mem_buf_list_lock);
        mutex_lock(obj.mem_buf_xfer_mem_list_lock);
        if (_obj.mem_buf_xfer_mem_list != obj.mem_buf_xfer_mem_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while memory is still lent\n");
        }
        mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
        mem_buf_msgq_unregister(_segment.ehdr);
        _segment.ehdr = 0;
        uVar6 = destroy_workqueue(0);
        _segment.ehdr = 0;
    }
    return uVar6;
}


// ===== sym.mem_buf_msgq_alloc @ 0x08002bec (size 260) =====

uint64_t sym.mem_buf_msgq_alloc(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = *0x8000e50;
    uStack_40 = *0x8000e58;
    if ((mem_buf_capability & 3) != 0) {
        _segment.ehdr = alloc_workqueue("mem_buf_wq",0x12,0);
        if (_segment.ehdr == 0) {
            _dev_err(arg1,"Unable to initialize workqueue\n");
            uVar2 = 0xffffffea;
            goto code_r0x08002c7c;
        }
        uVar2 = mem_buf_msgq_register("trusted_vm",&uStack_48);
        _segment.ehdr = uVar2;
        if (0xfffffffffffff000 < uVar2) {
            _dev_err(arg1,"Unable to register for mem-buf message queue\n");
            destroy_workqueue(_segment.ehdr);
            _segment.ehdr = 0;
            goto code_r0x08002c7c;
        }
    }
    uVar2 = 0;
code_r0x08002c7c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2 & 0xffffffff;
    }
    uVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_msgq_free;
    if ((mem_buf_capability & 3) != 0) {
        mutex_lock(obj.mem_buf_list_lock);
        if (_obj.mem_buf_list != obj.mem_buf_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while there are membufs\n");
        }
        mutex_unlock(obj.mem_buf_list_lock);
        mutex_lock(obj.mem_buf_xfer_mem_list_lock);
        if (_obj.mem_buf_xfer_mem_list != obj.mem_buf_xfer_mem_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while memory is still lent\n");
        }
        mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
        mem_buf_msgq_unregister(_segment.ehdr);
        _segment.ehdr = 0;
        uVar2 = destroy_workqueue(0);
        _segment.ehdr = 0;
    }
    return uVar2;
}


// ===== sym.mem_buf_msgq_free @ 0x08002cf0 (size 224) =====

void sym.mem_buf_msgq_free(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability & 3) != 0) {
        mutex_lock(obj.mem_buf_list_lock);
        if (_obj.mem_buf_list != obj.mem_buf_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while there are membufs\n");
        }
        mutex_unlock(obj.mem_buf_list_lock);
        mutex_lock(obj.mem_buf_xfer_mem_list_lock);
        if (_obj.mem_buf_xfer_mem_list != obj.mem_buf_xfer_mem_list) {
            _dev_err(_mem_buf_fd_to_vmid,"Removing mem-buf driver while memory is still lent\n");
        }
        mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
        mem_buf_msgq_unregister(_segment.ehdr);
        _segment.ehdr = 0;
        destroy_workqueue(0);
        _segment.ehdr = 0;
    }
    return;
}


// ===== sym.__mem_buf_relinquish_mem @ 0x08002dd8 (size 200) =====

void sym.__mem_buf_relinquish_mem(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = mem_buf_init_txn(_segment.ehdr,0);
    if (uVar2 < 0xfffffffffffff001) {
        uVar3 = mem_buf_construct_relinquish_msg(uVar2,arg1 & 0xffffffff,arg2 & 0xffffffff);
        if (uVar3 < 0xfffffffffffff001) {
            iVar1 = mem_buf_msgq_send(_segment.ehdr,uVar3);
            kfree(uVar3);
            if (iVar1 < 0) {
                _printk(0x8000732,"__mem_buf_relinquish_mem",iVar1);
            }
            mem_buf_txn_wait(_segment.ehdr,uVar2);
        }
        mem_buf_destroy_txn(_segment.ehdr,uVar2);
    }
    return;
}


// ===== sym.mem_buf_alloc_req_hdlr @ 0x08002f20 (size 212) =====

void sym.mem_buf_alloc_req_hdlr(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability & 1) != 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x40);
        if (piVar2 != NULL) {
            iVar3 = kmemdup(arg1,arg2,0xcc0);
            if (iVar3 == 0) {
                kfree(piVar2);
            }
            else {
                *piVar2 = iVar3;
                piVar2[1] = arg2;
                piVar2[2] = 0xfffffffe0;
                piVar2[3] = piVar2 + 3;
                piVar2[4] = piVar2 + 3;
                uVar1 = _segment.ehdr;
                piVar2[5] = sym.mem_buf_alloc_req_work.38b212b217376b213cbf26637648b44f.cfi_jt;
                queue_work_on(0x20,uVar1);
            }
        }
    }
    return;
}


// ===== sym.mem_buf_alloc_resp_hdlr @ 0x08002ff4 (size 128) =====

int sym.mem_buf_alloc_resp_hdlr(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    ulong *in_x18;
    int iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability >> 1 & 1) == 0) {
        iVar1 = -1;
    }
    else {
        iVar1 = *(arg1 + 0xc);
        if (iVar1 < 0) {
            _printk(0x8000983,"mem_buf_alloc_resp_hdlr",iVar1);
        }
        else {
            *(arg2 + 0x18) = *(arg1 + 0x10);
            *(arg2 + 0x58) = *(arg1 + 0x14);
        }
    }
    return iVar1;
}


// ===== sym.mem_buf_relinquish_hdlr @ 0x08003108 (size 212) =====

void sym.mem_buf_relinquish_hdlr(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((mem_buf_capability & 1) != 0) {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xcc0,0x40);
        if (piVar2 != NULL) {
            iVar3 = kmemdup(arg1,arg2,0xcc0);
            if (iVar3 == 0) {
                kfree(piVar2);
            }
            else {
                *piVar2 = iVar3;
                piVar2[1] = arg2;
                piVar2[2] = 0xfffffffe0;
                piVar2[3] = piVar2 + 3;
                piVar2[4] = piVar2 + 3;
                uVar1 = _segment.ehdr;
                piVar2[5] = sym.mem_buf_relinquish_work.38b212b217376b213cbf26637648b44f.cfi_jt;
                queue_work_on(0x20,uVar1);
            }
        }
    }
    return;
}


// ===== sym.mem_buf_relinquish_memparcel_hdl @ 0x080031dc (size 44) =====

void sym.mem_buf_relinquish_memparcel_hdl(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__mem_buf_relinquish_mem(arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.mem_buf_alloc_req_work @ 0x08003208 (size 2044) =====

void sym.mem_buf_alloc_req_work(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t *piVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint uVar16;
    uint uVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong *in_x18;
    uint uVar22;
    uint64_t *puVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    ulong uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    puVar23 = arg1 + -0x10;
    uVar24 = *puVar23;
    do {
        uStack_78 = 0;
        uStack_70 = 0;
        iStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = 0;
        if ((*(uVar24 + 0x1c) == 1) && (uVar24 + 0x24 != 0)) {
            iVar11 = *(uVar24 + 0x14);
            piVar12 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x60);
            if (piVar12 == NULL) {
                piVar12 = 0xfffffffffffffff4;
                goto code_r0x080037d4;
            }
            mutex_lock(obj.mem_buf_idr_mutex);
            iVar9 = idr_alloc_cyclic(obj.mem_buf_obj_idr,0,0,0x7fffffff,0xcc0);
            mutex_unlock(obj.mem_buf_idr_mutex);
            if (iVar9 < 0) {
                _printk(0x8000a51,"mem_buf_alloc_obj_id",iVar9);
                _printk(0x8000954,"mem_buf_prep_xfer_mem",iVar9);
code_r0x080036b4:
                kfree(piVar12);
                piVar12 = iVar9;
            }
            else {
                *(piVar12 + 0xb) = iVar9;
                iVar18 = *(uVar24 + 0xc);
                *(piVar12 + 1) = iVar11;
                *piVar12 = iVar18;
                *(piVar12 + 8) = 1;
                uVar10 = mem_buf_gh_acl_desc_to_vmid_perm_list(uVar24 + 0x1c,piVar12 + 9,piVar12 + 10);
                if (uVar10 != 0) {
                    uVar13 = uVar10;
                    _printk(0x80006c5,"mem_buf_prep_xfer_mem",uVar13);
code_r0x08003688:
                    iVar9 = uVar13;
                    iVar18 = piVar12[0xb];
                    mutex_lock(obj.mem_buf_idr_mutex);
                    idr_remove(obj.mem_buf_obj_idr,iVar18);
                    mutex_unlock(obj.mem_buf_idr_mutex);
                    goto code_r0x080036b4;
                }
                if (iVar11 != 2) {
                    if (iVar11 == 1) {
                        uVar13 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x90);
                        if (uVar13 == 0) {
                            uVar13 = 0xfffffffffffffff4;
                        }
                        else {
                            strscpy(uVar13,uVar24 + 0x24,0x80);
                            if (uVar13 < 0xfffffffffffff001) goto code_r0x08003344;
                        }
                    }
                    else {
                        uVar13 = 0xffffffffffffffea;
                    }
                    _printk(0x80009d7,"mem_buf_prep_xfer_mem",uVar13);
                    kfree(piVar12[9]);
                    kfree(piVar12[10]);
                    goto code_r0x08003688;
                }
                uVar13 = 0;
code_r0x08003344:
                piVar12[2] = uVar13;
                piVar12[6] = piVar12 + 6;
                piVar12[7] = piVar12 + 6;
            }
            if (piVar12 < 0xfffffffffffff001) {
                if (piVar12[1] == 2) {
                    iVar19 = *piVar12;
                    iVar18 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar18 = 0x30;
                    }
                    uVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0,0x10);
                    if (uVar13 == 0) {
                        iVar11 = -0xc;
                    }
                    else {
                        uVar14 = iVar19 + 0xfff;
                        iVar18 = kvmalloc_node(uVar14 >> 9 & 0x7fffffff8,0xdc0,0xffffffff);
                        if (iVar18 == 0) {
                            uVar14 = 0xfffffff4;
code_r0x0800372c:
                            kfree(uVar13);
                            goto code_r0x08003734;
                        }
                        uVar15 = uVar14 >> 0xc;
                        if (uVar15 == 0) {
                            iVar11 = 0;
                        }
                        else {
                            iVar11 = 0;
                            uVar25 = 0x7ff;
                            do {
                                uVar25 = uVar25 & (2 << ((LZCOUNT(uVar15) ^ 0x1f) & 0x1f)) + -1;
                                while( true ) {
                                    if (uVar25 == 0) {
                                        uVar14 = 0xfffffff4;
                                        goto code_r0x08003704;
                                    }
                                    uVar10 = LZCOUNT(uVar25) ^ 0x3f;
                                    uVar6 = 1 << (uVar10 & 0x1f);
                                    uVar7 = tpidr_el1;
                                    uVar16 = 0x12dc0;
                                    if (uVar25 <= uVar6) {
                                        uVar16 = 0xdc0;
                                    }
                                    iVar19 = __alloc_pages(uVar16,uVar10,0,0);
                                    if (iVar19 != 0) break;
                                    uVar25 = uVar25 & ~uVar6;
                                }
                                if (uVar10 != 0) {
                                    split_page(iVar19,uVar10);
                                }
                                uVar10 = uVar6;
                                if ((uVar6 - 1 == 0) || (uVar6 + iVar11 + -1 < iVar11)) {
code_r0x0800353c:
                                    do {
                                        iVar9 = iVar11 + 1;
                                        *(iVar18 + iVar11 * 8) = iVar19;
                                        uVar10 = uVar10 - 1;
                                        iVar19 = iVar19 + 0x40;
                                        iVar11 = iVar9;
                                    } while (uVar10 != 0);
                                }
                                else {
                                    uVar2 = (uVar6 - 1) + 1;
                                    uVar20 = uVar2 & 0x1fffffffe;
                                    iVar9 = iVar11 + uVar20;
                                    iVar4 = iVar19 + uVar20 * 0x40;
                                    uVar21 = uVar20;
                                    do {
                                        iVar3 = iVar19 + 0x40;
                                        iVar1 = iVar11 + 1;
                                        *(iVar18 + iVar11 * 8) = iVar19;
                                        iVar19 = iVar19 + 0x80;
                                        uVar21 = uVar21 - 2;
                                        iVar11 = iVar11 + 2;
                                        *(iVar18 + iVar1 * 8) = iVar3;
                                    } while (uVar21 != 0);
                                    iVar19 = iVar4;
                                    uVar10 = uVar6 - uVar20;
                                    iVar11 = iVar9;
                                    if (uVar2 != uVar20) goto code_r0x0800353c;
                                }
                                uVar6 = uVar15 - uVar6;
                                uVar15 = uVar6;
                            } while (uVar6 != 0);
                        }
                        uVar15 = sg_alloc_table_from_pages_segment
                                           (uVar13,iVar18,iVar11,0,uVar14 & 0xfffff000,0xffffffff,0xcc0);
                        uVar14 = uVar15 & 0xffffffff;
                        if (uVar15 != 0) {
code_r0x08003704:
                            if (iVar11 != 0) {
                                iVar11 = iVar11 + -1;
                                do {
                                    __free_pages(*(iVar18 + iVar11 * 8),0);
                                    iVar11 = iVar11 + -1;
                                } while (iVar11 != -1);
                            }
                            kvfree(iVar18);
                            goto code_r0x0800372c;
                        }
                        kvfree(iVar18);
code_r0x080033d8:
                        piVar12[3] = uVar13;
                        *(piVar12 + 4) = 0;
code_r0x080033e0:
                        uVar16 = *(uVar24 + 0x18);
                        iStack_88 = piVar12[9];
                        iStack_80 = piVar12[10];
                        uStack_90 = CONCAT44(uStack_90._4_4_,piVar12[8]);
                        iVar11 = mem_buf_assign_mem(uVar16,uVar13,&uStack_90);
                        if (-1 < iVar11) {
                            *(piVar12 + 0x24) = uVar16;
                            *(piVar12 + 5) = uStack_78;
code_r0x08003740:
                            mutex_lock(obj.mem_buf_xfer_mem_list_lock);
                            piVar8 = _obj.mem_buf_xfer_mem_list;
                            piVar5 = piVar12 + 6;
                            uVar13 = __list_add_valid(piVar5,obj.mem_buf_xfer_mem_list,_obj.mem_buf_xfer_mem_list);
                            if ((uVar13 & 1) != 0) {
                                piVar8[1] = piVar5;
                                piVar12[6] = piVar8;
                                piVar12[7] = obj.mem_buf_xfer_mem_list;
                                _obj.mem_buf_xfer_mem_list = piVar5;
                            }
                            mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
                            goto code_r0x080037bc;
                        }
                        if (iVar11 == -99) {
                            iVar11 = -99;
                        }
                        else {
                            sym.mem_buf_rmt_free_mem(piVar12);
                        }
                    }
                }
                else {
                    if (piVar12[1] == 1) {
                        iVar19 = piVar12[2];
                        iVar18 = dma_heap_find(iVar19);
                        if (iVar18 != 0) {
                            uVar14 = dma_heap_buffer_alloc(iVar18,*piVar12,0x80002,0);
                            if (uVar14 < 0xfffffffffffff001) {
                                uVar15 = dma_buf_attach(uVar14,_mem_buf_fd_to_vmid);
                                if (uVar15 < 0xfffffffffffff001) {
                                    uVar13 = dma_buf_map_attachment(uVar15,0);
                                    if (uVar13 < 0xfffffffffffff001) {
                                        *(iVar19 + 0x80) = uVar14;
                                        *(iVar19 + 0x88) = uVar15;
                                        goto code_r0x080033d8;
                                    }
                                    _printk(0x8000a79,"mem_buf_rmt_alloc_dmaheap_mem",uVar13);
                                    dma_buf_detach(uVar14,uVar15);
                                    dma_buf_put(uVar14);
                                    uVar14 = uVar13 & 0xffffffff;
                                }
                                else {
                                    _printk(0x8000768,"mem_buf_rmt_alloc_dmaheap_mem",uVar15);
                                    dma_buf_put(uVar14);
                                    uVar14 = uVar15 & 0xffffffff;
                                }
                            }
                            else {
                                _printk(0x800078c,"mem_buf_rmt_alloc_dmaheap_mem",*piVar12,iVar19,0x80002,uVar14);
                            }
code_r0x08003734:
                            iVar11 = uVar14;
                            if (-1 < iVar11) {
                                if (piVar12[4] == '\0') {
                                    uVar13 = piVar12[3];
                                    goto code_r0x080033e0;
                                }
                                goto code_r0x08003740;
                            }
                            goto code_r0x080037b0;
                        }
                        _printk(0x80007cd,"mem_buf_rmt_alloc_dmaheap_mem",iVar19);
                    }
                    iVar11 = -0x16;
                }
code_r0x080037b0:
                sym.mem_buf_free_xfer_mem(piVar12);
                piVar12 = iVar11;
            }
code_r0x080037bc:
            if (0xfffffffffffff000 < piVar12) goto code_r0x080037d4;
            uVar22 = 0;
            uVar16 = piVar12[5];
            uVar17 = piVar12[0xb];
        }
        else {
            piVar12 = 0xffffffffffffffea;
code_r0x080037d4:
            uVar22 = SUB84(piVar12,0);
            _printk(0x8000abb,"mem_buf_alloc_req_work",piVar12 & 0xffffffff);
            piVar12 = NULL;
            uVar16 = 0;
            uVar17 = 0;
        }
        uVar24 = mem_buf_construct_alloc_resp(uVar24,uVar22,uVar16,uVar17);
        kfree(*puVar23);
        kfree(puVar23);
        if (uVar24 < 0xfffffffffffff001) {
            uVar10 = mem_buf_msgq_send(_segment.ehdr,uVar24);
            puVar23 = uVar10;
            kfree(uVar24);
            if (uVar10 < 0) {
                _printk(0x80006fa,"mem_buf_alloc_req_work",uVar10);
                goto joined_r0x080038f4;
            }
        }
        else {
joined_r0x080038f4:
            if (piVar12 != NULL) {
                mutex_lock(obj.mem_buf_xfer_mem_list_lock);
                uVar13 = __list_del_entry_valid(piVar12 + 6);
                if ((uVar13 & 1) != 0) {
                    iVar18 = piVar12[6];
                    piVar5 = piVar12[7];
                    *(iVar18 + 8) = piVar5;
                    *piVar5 = iVar18;
                }
                piVar12[6] = -0x2152ffffffffff00;
                piVar12[7] = -0x2152fffffffffede;
                mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
                sym.mem_buf_cleanup_alloc_req(piVar12,*(piVar12 + 5));
            }
        }
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        iVar18 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar18) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar18) & 0x3f) & 1)
            != 0) {
            iVar18 = sp_el0;
            piVar12 = iVar18 + 0x10;
            *(iVar18 + 0x10) = *piVar12 + 1;
            __traceiter_receive_alloc_req(0,uVar24);
            iVar19 = *piVar12;
            *(iVar18 + 0x10) = iVar19 + -1;
            if ((iVar19 + -1 == 0) || (*piVar12 == 0)) {
                preempt_schedule_notrace();
            }
        }
    } while( true );
}


// ===== sym.mem_buf_cleanup_alloc_req @ 0x08003a98 (size 300) =====

void sym.mem_buf_cleanup_alloc_req(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar9;
    ulong unaff_x30;
    uint64_t *puStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = arg2;
    if (*(arg1 + 0x20) == '\0') {
        if (*(arg1 + 0x28) == arg2) {
            iVar4 = mem_buf_unassign_mem(*(arg1 + 0x18),*(arg1 + 0x48),*(arg1 + 0x40));
            if (iVar4 < 0) goto code_r0x08003adc;
        }
        else {
            uStack_38 = 0;
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,8,arg2);
            if (puVar5 == NULL) goto code_r0x08003adc;
            *puVar5 = 1;
            *(puVar5 + 1) = 3;
            *(puVar5 + 6) = 7;
            iVar4 = mem_buf_map_mem_s2(0,&uStack_2c,puVar5,&uStack_38,0x2d);
            if (iVar4 != 0) {
                kfree(puVar5);
                goto code_r0x08003adc;
            }
            kvfree(uStack_38);
            kfree(puVar5);
        }
    }
    sym.mem_buf_rmt_free_mem(arg1);
    sym.mem_buf_free_xfer_mem(arg1);
code_r0x08003adc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_rmt_free_mem;
    pcStack_68 = sym.mem_buf_rmt_free_mem;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffe0;
    if (*(iVar6 + 8) == 2) {
        puVar9 = *(iVar6 + 0x18);
        uStack_88 = 0;
        uStack_80 = 0;
        puStack_90 = NULL;
        __sg_page_iter_start(&puStack_90,*puVar9,*(puVar9 + 1),0);
        while (uVar7 = __sg_page_iter_next(&puStack_90), (uVar7 & 1) != 0) {
            __free_pages((*puStack_90 & 0xfffffffffffffffc) + (uStack_88 & 0xffffffff) * 0x40,0);
        }
        sg_free_table(puVar9);
        kfree(puVar9);
    }
    else if (*(iVar6 + 8) == 1) {
        iVar8 = *(iVar6 + 0x10);
        uVar1 = *(iVar8 + 0x80);
        uVar2 = *(iVar8 + 0x88);
        dma_buf_unmap_attachment(uVar2,*(iVar6 + 0x18),0);
        dma_buf_detach(uVar1,uVar2);
        dma_buf_put(*(iVar8 + 0x80));
        flush_delayed_fput();
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_78) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.mem_buf_free_xfer_mem;
        if (*(iVar8 + 8) == 1) {
            kfree(*(iVar8 + 0x10));
        }
        kfree(*(iVar8 + 0x48));
        kfree(*(iVar8 + 0x50));
        uVar3 = *(iVar8 + 0x58);
        mutex_lock(obj.mem_buf_idr_mutex);
        idr_remove(obj.mem_buf_obj_idr,uVar3);
        mutex_unlock(obj.mem_buf_idr_mutex);
        kfree(iVar8);
        return;
    }
    return;
}


// ===== sym.mem_buf_rmt_free_mem @ 0x08003bc4 (size 252) =====

void sym.mem_buf_rmt_free_mem(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    ulong unaff_x30;
    uint64_t *puStack_50;
    uint64_t uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (*(arg1 + 8) == 2) {
        puVar6 = *(arg1 + 0x18);
        uStack_48 = 0;
        uStack_40 = 0;
        puStack_50 = NULL;
        __sg_page_iter_start(&puStack_50,*puVar6,*(puVar6 + 1),0);
        while (uVar4 = __sg_page_iter_next(&puStack_50), (uVar4 & 1) != 0) {
            __free_pages((*puStack_50 & 0xfffffffffffffffc) + (uStack_48 & 0xffffffff) * 0x40,0);
        }
        sg_free_table(puVar6);
        kfree(puVar6);
    }
    else if (*(arg1 + 8) == 1) {
        iVar5 = *(arg1 + 0x10);
        uVar1 = *(iVar5 + 0x80);
        uVar2 = *(iVar5 + 0x88);
        dma_buf_unmap_attachment(uVar2,*(arg1 + 0x18),0);
        dma_buf_detach(uVar1,uVar2);
        dma_buf_put(*(iVar5 + 0x80));
        flush_delayed_fput();
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_free_xfer_mem;
    if (*(iVar5 + 8) == 1) {
        kfree(*(iVar5 + 0x10));
    }
    kfree(*(iVar5 + 0x48));
    kfree(*(iVar5 + 0x50));
    uVar3 = *(iVar5 + 0x58);
    mutex_lock(obj.mem_buf_idr_mutex);
    idr_remove(obj.mem_buf_obj_idr,uVar3);
    mutex_unlock(obj.mem_buf_idr_mutex);
    kfree(iVar5);
    return;
}


// ===== sym.mem_buf_free_xfer_mem @ 0x08003cc0 (size 140) =====

void sym.mem_buf_free_xfer_mem(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) == 1) {
        kfree(*(arg1 + 0x10));
    }
    kfree(*(arg1 + 0x48));
    kfree(*(arg1 + 0x50));
    uVar1 = *(arg1 + 0x58);
    mutex_lock(obj.mem_buf_idr_mutex);
    idr_remove(obj.mem_buf_obj_idr,uVar1);
    mutex_unlock(obj.mem_buf_idr_mutex);
    kfree(arg1);
    return;
}


// ===== sym.mem_buf_relinquish_work @ 0x08003d4c (size 300) =====

void sym.mem_buf_relinquish_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = arg1 + -0x10;
    iVar6 = *piVar5;
    iVar3 = *(iVar6 + 0x10);
    mutex_lock(obj.mem_buf_xfer_mem_list_lock);
    pcVar7 = obj.mem_buf_xfer_mem_list;
    do {
        pcVar7 = *pcVar7;
        if (pcVar7 == obj.mem_buf_xfer_mem_list) {
            mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
            goto code_r0x08003e5c;
        }
    } while (*(pcVar7 + 0x28) != iVar3);
    uVar4 = __list_del_entry_valid(pcVar7);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar7;
        piVar2 = *(pcVar7 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar7 = 0xdead000000000100;
    *(pcVar7 + 8) = 0xdead000000000122;
    mutex_unlock(obj.mem_buf_xfer_mem_list_lock);
    if (pcVar7 + -0x30 == NULL) {
code_r0x08003e5c:
        _printk(0x8000863,"mem_buf_relinquish_work",iVar3);
    }
    else {
        sym.mem_buf_cleanup_alloc_req(pcVar7 + -0x30,*(iVar6 + 0xc));
    }
    uVar4 = mem_buf_construct_relinquish_resp(iVar6);
    if (uVar4 < 0xfffffffffffff001) {
        mem_buf_msgq_send(_segment.ehdr,uVar4);
        kfree(uVar4);
    }
    kfree(*piVar5);
    kfree(piVar5);
    return;
}


// ===== sym.init_module @ 0x08003f84 (size 196) =====

uint64_t sym.init_module(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = alloc_chrdev_region(obj.is_valid_mem_buf_perms._rs,0,1,"membuf");
    if (uVar1 < 0) {
        uVar2 = uVar1;
    }
    else {
        uVar2 = __class_create(obj.__this_module,"membuf",obj.mem_buf_init.__key);
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar1 = __platform_driver_register
                              (reloc.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt,obj.__this_module);
            if (-1 < uVar1) {
                uVar2 = 0;
                goto code_r0x08004030;
            }
            uVar2 = uVar1;
            class_destroy(_segment.ehdr);
        }
        unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    }
code_r0x08004030:
    return uVar2 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08004048 (size 72) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_buf_msgq_probe.964092d81b7022c9d91bd8082a8b4782.cfi_jt);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr,1);
    return;
}

