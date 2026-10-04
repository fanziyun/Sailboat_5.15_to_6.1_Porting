// decompiled from synx-driver by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1540) =====

//WARNING: Switch with 1 destination removed at 0x08006f28

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2ac316d8df914f8) {
        if (arg1 < -0x4771aaf6a6f8945b) {
            if (-0x64f33af92b1b4f40 < arg1) {
                if (arg1 < -0x6337fd4c05c10264) {
                    if (arg1 == -0x64f33af92b1b4f3f) {
                        pcVar2 = sym.synx_register_callback.cfi_jt;
                        goto code_r0x080035f4;
                    }
                    if (arg1 != -0x636dd8b121aa9698) goto code_r0x08006ee8;
                    pcVar2 = sym.synx_get_status.cfi_jt;
                }
                else {
                    if (arg1 != -0x6337fd4c05c10264) {
                        if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x8003740 >> 3 | pcVar1 << 0x3d) < 4)) {
                            return;
                        }
                        goto code_r0x08006ee8;
                    }
                    pcVar2 = sym.synx_deregister_ops.cfi_jt;
                }
code_r0x080035c0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08006ee8;
            }
            if (arg1 == -0x7d06e8cff2727a2d) {
                pcVar2 = sym.synx_deregister_callback.cfi_jt;
            }
            else {
                if (arg1 != -0x7bcbda558eb245e5) {
                    if (arg1 != -0x6cdbb4f605af0f4f) goto code_r0x08006ee8;
                    pcVar2 = sym.__typeid__ZTSFviiPvE_global_addr;
                    goto code_r0x080035c0;
                }
                pcVar2 = sym.synx_poll.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
            }
        }
        else if (arg1 < -0x276d58b31835f548) {
            if (arg1 < -0x2e80607f5fb8523b) {
                if (arg1 == -0x4771aaf6a6f8945b) {
                    pcVar2 = sym.synx_ipc_callback.cfi_jt;
                }
                else {
                    if (arg1 != -0x355fb0e7f43799b1) goto code_r0x08006ee8;
                    pcVar2 = sym.dma_fence_default_wait.cfi_jt;
                }
            }
            else if (arg1 == -0x2e80607f5fb8523b) {
                pcVar2 = sym.synx_create.cfi_jt;
            }
            else {
                if (arg1 != -0x2abe29c12eab9d07) goto code_r0x08006ee8;
                pcVar2 = sym.synx_export.cfi_jt;
            }
        }
        else if (arg1 < -0x1513c3f21c946060) {
            if (arg1 == -0x276d58b31835f548) {
                pcVar2 = sym.synx_get_fence.cfi_jt;
            }
            else {
                if (arg1 != -0x17c09db4a566c248) goto code_r0x08006ee8;
                pcVar2 = sym.synx_wait.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x1513c3f21c946060) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x80036c0 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08006ee8;
            }
            pcVar2 = sym.synx_uninitialize.cfi_jt;
        }
    }
    else if (arg1 < 0x15332306f8fba7a5) {
        if (arg1 < 0xeb11432976ff277) {
            if (arg1 < 0x2b3a43e29242445) {
                if (arg1 == -0x2ac316d8df914f8) {
                    if ((pcVar1 + -0x8003678 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x08006ee8;
                }
                if (arg1 != -0x890743871a4a53) goto code_r0x08006ee8;
                pcVar2 = sym.synx_ioctl.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) {
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08006ee8;
                    pcVar2 = sym.synx_read.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
                    goto code_r0x080035c0;
                }
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 < 0x126dd45c029dc391) {
            if (arg1 == 0xeb11432976ff277) {
                pcVar2 = sym.synx_initialize.cfi_jt;
            }
            else {
                if (arg1 != 0x11e1d19aebef0b66) goto code_r0x08006ee8;
                pcVar2 = sym.synx_bind.cfi_jt;
            }
        }
        else if (arg1 == 0x126dd45c029dc391) {
            pcVar2 = sym.synx_signal.cfi_jt;
        }
        else {
            if (arg1 != 0x12e363c8792d9b86) goto code_r0x08006ee8;
            pcVar2 = sym.synx_merge.cfi_jt;
        }
    }
    else if (arg1 < 0x491e2130f8ab67c4) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x15332306f8fba7a5) {
                pcVar2 = sym.__typeid__ZTSFbP9dma_fenceE_global_addr;
            }
            else {
                if (arg1 != 0x1d3e2be5013c569d) goto code_r0x08006ee8;
                pcVar2 = sym.synx_fence_release.cfi_jt;
            }
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.synx_table_write.bdcf4b4dc9b8f95b2df8e2a6b1e3eb68.cfi_jt;
        }
        else {
            if (arg1 != 0x32b07b7be65c26c8) goto code_r0x08006ee8;
            pcVar2 = sym.synx_fence_callback.cfi_jt;
        }
    }
    else if (arg1 < 0x7a9f9f5cae0a3b66) {
        if (arg1 == 0x491e2130f8ab67c4) {
            pcVar2 = sym.synx_addrefcount.cfi_jt;
        }
        else {
            if (arg1 != 0x70e2699796d3bed6) goto code_r0x08006ee8;
            pcVar2 = sym.synx_import.cfi_jt;
        }
    }
    else if (arg1 == 0x7a9f9f5cae0a3b66) {
        pcVar2 = sym.synx_fence_driver_name.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08006ee8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x080035f4:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006ee8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006f3c);
    (*pcVar1)();
}


// ===== sym.synx_register_callback.cfi_jt @ 0x08003610 (size 8) =====

int sym.synx_register_callback.cfi_jt
              (uint32_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,int64_t param_5)

{
    uint32_t *puVar1;
    int64_t iVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint32_t *arg3;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_90;
    uint64_t uStack_88;
    uint32_t *puStack_80;
    ulong uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_6c = 0;
    puStack_80 = NULL;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    arg3 = param_3;
    uVar10 = param_4;
    iVar6 = sym.synx_get_client(param_1);
    if (iVar6 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar7 = sym.synx_util_acquire_handle(iVar6,param_2);
        if ((iVar7 == 0) || (iVar13 = *(iVar7 + 8), iVar13 == 0)) {
            arg3 = *(iVar6 + 0x48);
            uVar10 = param_2;
            _printk(0x8001101,"synx_register_callback");
            iVar4 = -0x16;
        }
        else {
            mutex_lock(iVar13 + 0x60);
            if ((*(iVar13 + 0x94) & 6) == 0) {
                arg3 = 0x50;
                puVar8 = kmem_cache_alloc_trace(_dma_fence_release,0xb20);
                if (puVar8 == NULL) {
                    iVar4 = -0xc;
                }
                else {
                    arg3 = &uStack_6c;
                    uStack_90 = CONCAT44(uStack_90._4_4_,param_2);
                    uStack_88 = param_4;
                    puStack_80 = param_3;
                    iVar4 = sym.synx_util_alloc_cb_entry(iVar6,&uStack_90,arg3);
                    if (iVar4 == 0) {
                        uVar5 = sym.synx_util_get_object_status(iVar13);
                        *puVar8 = param_1;
                        puVar8[1] = uStack_6c;
                        arg3 = puVar8 + 4;
                        arg3[0] = 0xffffffe0;
                        arg3[1] = 0xf;
                        *(puVar8 + 6) = puVar8 + 6;
                        *(puVar8 + 8) = puVar8 + 6;
                        *(puVar8 + 10) = sym.synx_util_cb_dispatch.cfi_jt;
                        if (uVar5 == 1) {
                            piVar15 = iVar13 + 0x160;
                            puVar14 = *(iVar13 + 0x160);
                            puVar1 = puVar8 + 0x10;
                            arg3 = puVar14;
                            uVar9 = __list_add_valid(puVar1,piVar15);
                            if ((uVar9 & 1) != 0) {
                                iVar4 = 0;
                                *(puVar14 + 2) = puVar1;
                                *(puVar8 + 0x10) = puVar14;
                                *(puVar8 + 0x12) = piVar15;
                                *piVar15 = puVar1;
                                goto code_r0x080047dc;
                            }
                        }
                        else {
                            puVar8[2] = uVar5;
                            queue_work_on(0x20,*(_segment.ehdr + 0x10e8));
                        }
                        iVar4 = 0;
                    }
                    else {
                        _printk(0x80026e9,*(iVar6 + 0x48));
                        kfree(puVar8);
                    }
                }
            }
            else {
                _printk(0x800284b);
                iVar4 = -0x16;
            }
code_r0x080047dc:
            mutex_unlock(iVar13 + 0x60);
        }
        sym.synx_util_release_handle(iVar7);
        sym.synx_put_client(iVar6);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.synx_deregister_callback;
    uVar9 = auVar16._8_8_ & 0xffffffff;
    iVar6 = sym.synx_get_client(auVar16._0_8_ & 0xffffffff);
    if (iVar6 == 0) {
        return -0x16;
    }
    iVar7 = sym.synx_util_acquire_handle(iVar6,uVar9);
    if ((iVar7 == 0) || (iVar13 = *(iVar7 + 8), iVar13 == 0)) {
        _printk(0x8001101,"",*(iVar6 + 0x48),uVar9);
        iVar4 = -0x16;
        goto code_r0x08004ad0;
    }
    mutex_lock(iVar13 + 0x60);
    if ((*(iVar13 + 0x94) & 6) == 0) {
        iVar4 = sym.synx_util_get_object_status(iVar13);
        if (iVar4 == 1) {
            if (iVar13 + 0x160 != *(iVar13 + 0x160)) {
                bVar3 = false;
                piVar15 = *(iVar13 + 0x160);
                do {
                    piVar12 = *piVar15;
                    if (piVar15[-8] == *(iVar6 + 0x48)) {
                        uVar5 = *(piVar15 + -0x3c);
                        uVar9 = uVar5;
                        if ((uVar5 == 0) || (0xff < uVar5)) {
                            _printk(0x8001f4b,auVar16._0_8_ & 0xffffffff);
                        }
                        else {
                            iVar2 = iVar6 + uVar9 * 0x40;
                            if (((iVar2 != -0xd8) && (piVar11 = iVar2 + 0xe8, *piVar11 == arg3)) &&
                               (*(iVar6 + uVar9 * 0x40 + 0xe0) == uVar10)) {
                                if (param_5 == 0) {
                                    iVar4 = sym.synx_util_clear_cb_entry(iVar6,iVar6 + uVar9 * 0x40 + 200);
                                    if (iVar4 != 0) {
                                        _printk(0x800139e,"",*(iVar6 + 0x48),auVar16._8_4_);
                                    }
                                    uVar9 = __list_del_entry_valid(piVar15);
                                    if ((uVar9 & 1) != 0) {
                                        iVar2 = *piVar15;
                                        piVar11 = piVar15[1];
                                        *(iVar2 + 8) = piVar11;
                                        *piVar11 = iVar2;
                                    }
                                    *piVar15 = piVar15;
                                    piVar15[1] = piVar15;
                                    kfree(piVar15 + -8);
                                }
                                else {
                                    *piVar11 = param_5;
                                    uVar9 = __list_del_entry_valid(piVar15);
                                    if ((uVar9 & 1) != 0) {
                                        iVar2 = *piVar15;
                                        piVar11 = piVar15[1];
                                        *(iVar2 + 8) = piVar11;
                                        *piVar11 = iVar2;
                                    }
                                    *piVar15 = piVar15;
                                    piVar15[1] = piVar15;
                                    *(piVar15 + -7) = 4;
                                    queue_work_on(0x20,*(_segment.ehdr + 0x10e8),piVar15 + -6);
                                }
                                bVar3 = true;
                            }
                        }
                    }
                    piVar15 = piVar12;
                } while (iVar13 + 0x160 != piVar12);
                iVar4 = 0;
                if (!bVar3) {
                    iVar4 = -0x16;
                }
                goto code_r0x08004ac8;
            }
        }
        else {
            _printk(0x8001976,uVar9);
        }
        iVar4 = -0x16;
    }
    else {
        _printk(0x8001e63);
        iVar4 = 0;
    }
code_r0x08004ac8:
    mutex_unlock(iVar13 + 0x60);
code_r0x08004ad0:
    sym.synx_util_release_handle(iVar7);
    sym.synx_put_client(iVar6);
    return iVar4;
}


// ===== sym.synx_bind.cfi_jt @ 0x08003618 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08005048)
//WARNING: Removing unreachable block (ram,0x08005050)
//WARNING: Removing unreachable block (ram,0x08005270)
//WARNING: Removing unreachable block (ram,0x0800505c)
//WARNING: Removing unreachable block (ram,0x0800528c)
//WARNING: Removing unreachable block (ram,0x08005078)
//WARNING: Removing unreachable block (ram,0x08005094)
//WARNING: Removing unreachable block (ram,0x08005214)
//WARNING: Removing unreachable block (ram,0x080050ac)
//WARNING: Removing unreachable block (ram,0x08005318)
//WARNING: Removing unreachable block (ram,0x080050c0)
//WARNING: Removing unreachable block (ram,0x08005334)
//WARNING: Removing unreachable block (ram,0x080050cc)
//WARNING: Removing unreachable block (ram,0x080050d0)
//WARNING: Removing unreachable block (ram,0x080050dc)
//WARNING: Removing unreachable block (ram,0x080050e4)
//WARNING: Removing unreachable block (ram,0x080050f0)
//WARNING: Removing unreachable block (ram,0x080050f8)
//WARNING: Removing unreachable block (ram,0x08005104)
//WARNING: Removing unreachable block (ram,0x0800510c)
//WARNING: Removing unreachable block (ram,0x08005118)
//WARNING: Removing unreachable block (ram,0x08005120)
//WARNING: Removing unreachable block (ram,0x0800512c)
//WARNING: Removing unreachable block (ram,0x08005134)
//WARNING: Removing unreachable block (ram,0x08005140)
//WARNING: Removing unreachable block (ram,0x08005148)
//WARNING: Removing unreachable block (ram,0x08005154)
//WARNING: Removing unreachable block (ram,0x08005164)
//WARNING: Removing unreachable block (ram,0x08005178)
//WARNING: Removing unreachable block (ram,0x0800521c)
//WARNING: Removing unreachable block (ram,0x0800525c)
//WARNING: Removing unreachable block (ram,0x08005350)
//WARNING: Removing unreachable block (ram,0x0800538c)
//WARNING: Removing unreachable block (ram,0x08005378)
//WARNING: Removing unreachable block (ram,0x080051b8)
//WARNING: Removing unreachable block (ram,0x080051cc)
//WARNING: Removing unreachable block (ram,0x080051d4)
//WARNING: Removing unreachable block (ram,0x080052fc)
//WARNING: Removing unreachable block (ram,0x080051dc)
//WARNING: Removing unreachable block (ram,0x080052a4)

int sym.synx_bind.cfi_jt(uint32_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar3 = sym.synx_get_client(param_1);
    if (iVar3 == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar2 = sym.synx_util_update_handle(iVar3,param_2,param_4 & 0xffffffff,param_3 & 0xffffffff);
        if (iVar2 != 0) {
            _printk(0x8001101,"synx_bind",*(iVar3 + 0x48),param_2);
        }
        sym.synx_util_release_handle(0);
        sym.synx_put_client(iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iVar4) {
        __stack_chk_fail();
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80053d8);
        (*pcVar1)();
    }
    return iVar2;
}


// ===== sym.synx_wait.cfi_jt @ 0x08003620 (size 8) =====

int sym.synx_wait.cfi_jt(uint64_t param_1,uint32_t param_2,uint param_3)

{
    int iVar1;
    int64_t arg1;
    int64_t arg1_00;
    ulong uVar2;
    ulong *in_x18;
    int iVar3;
    int64_t arg1_01;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        iVar3 = -0x16;
    }
    else {
        arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
        if (((arg1_00 == 0) || (arg1_01 = *(arg1_00 + 8), arg1_01 == 0)) || (iVar4 = *(arg1_01 + 0x40), iVar4 == 0)) {
            _printk(0x8001101,"synx_wait",*(arg1 + 0x48),param_2);
            iVar3 = -0x16;
        }
        else {
            uVar2 = __msecs_to_jiffies(param_3);
            iVar4 = dma_fence_wait_timeout(iVar4,0,uVar2);
            if (iVar4 == 0) {
                _printk(0x80014a9,*(arg1 + 0x48),param_2);
                iVar3 = -0x6e;
            }
            else {
                mutex_lock(arg1_01 + 0x60);
                iVar1 = sym.synx_util_get_object_status(arg1_01);
                mutex_unlock(arg1_01 + 0x60);
                iVar3 = 0;
                if (iVar1 != 2) {
                    iVar3 = iVar1;
                }
            }
        }
        sym.synx_util_release_handle(arg1_00);
        sym.synx_put_client(arg1);
    }
    return iVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003628 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(*(_segment.ehdr + 0x90),*(_segment.ehdr + 0x88));
    class_destroy(*(_segment.ehdr + 0x90));
    cdev_del(_segment.ehdr);
    unregister_chrdev_region(*(_segment.ehdr + 0x88),1);
    debugfs_remove(*(_segment.ehdr + 0x1190));
    piVar4 = *(_segment.ehdr + 0x1198);
    if (_segment.ehdr + 0x1198 != piVar4) {
        do {
            piVar5 = *piVar4;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4 + -6);
            piVar4 = piVar5;
        } while (_segment.ehdr + 0x1198 != piVar5);
    }
    kfree();
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003630 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    uint *puVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001cdf);
    _segment.ehdr = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x11e0);
    if (_segment.ehdr == 0) {
        iVar6 = -0xc;
    }
    else {
        iVar6 = alloc_chrdev_region(_segment.ehdr + 0x88,0,1,"synx_device");
        if (iVar6 < 0) {
            _printk(0x80018dc);
        }
        else {
            cdev_init(_segment.ehdr,obj.synx_fops);
            iVar5 = _segment.ehdr;
            puVar1 = _segment.ehdr + 0x88;
            *(_segment.ehdr + 0x60) = obj.__this_module;
            iVar6 = cdev_add(iVar5,*puVar1,1);
            if (iVar6 < 0) {
                _printk(0x8001e3a);
            }
            else {
                uVar7 = __class_create(obj.__this_module,"synx_device",obj.synx_initialize.__key);
                puVar1 = _segment.ehdr + 0x88;
                *(_segment.ehdr + 0x90) = uVar7;
                device_create(uVar7,0,*puVar1,0,"synx_device");
                iVar8 = alloc_workqueue("",0x12,4);
                iVar5 = _segment.ehdr;
                *(_segment.ehdr + 0x10e8) = iVar8;
                if (iVar8 != 0) {
                    __mutex_init(iVar5 + 0x98,"",obj.synx_initialize.__key);
                    __mutex_init(_segment.ehdr + 0x10f8,"",obj.synx_initialize.__key);
                    uVar7 = dma_fence_context_alloc(1);
                    puVar2 = _segment.ehdr + 200;
                    *(_segment.ehdr + 0x10f0) = uVar7;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar4) {
                            *puVar2 = *puVar2 | 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    uVar7 = sym.synx_init_debugfs_dir(_segment.ehdr);
                    *(_segment.ehdr + 0x1190) = uVar7;
                    ipc_lite_register_client(sym.synx_ipc_callback.cfi_jt,0);
                    memset(obj.synx_fence_ops,0,0x800);
                    memset("",0,0x800);
                    *0x8001000 = 0;
                    _printk(0x80018fe);
                    return 0;
                }
                _printk(0x8002345);
                device_destroy(*(_segment.ehdr + 0x90),*(_segment.ehdr + 0x88));
                class_destroy(*(_segment.ehdr + 0x90));
                iVar6 = -0x16;
            }
            unregister_chrdev_region(*(_segment.ehdr + 0x88),1);
        }
        kfree(_segment.ehdr);
    }
    return iVar6;
}


// ===== sym.synx_fence_release.cfi_jt @ 0x08003638 (size 8) =====

void sym.synx_fence_release.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*param_1);
    kfree(param_1);
    return;
}


// ===== sym.synx_merge.cfi_jt @ 0x08003640 (size 8) =====

int sym.synx_merge.cfi_jt(uint64_t param_1,int64_t param_2,uint32_t param_3,uint *param_4)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    int64_t arg1;
    int64_t iVar6;
    int *piVar7;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x23;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_60;
    uint32_t uStack_54;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    iVar6 = unaff_x23;
    if ((param_2 == 0) || (param_4 == NULL)) {
        _printk(0x80017a3,"");
        iVar5 = -0x16;
        arg1 = unaff_x20;
        goto code_r0x08004c10;
    }
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        iVar5 = -0x16;
        arg1 = unaff_x20;
        unaff_x21 = param_2;
        goto code_r0x08004c10;
    }
    iVar5 = sym.synx_util_validate_merge(arg1,param_2,param_3,&uStack_60);
    if (-1 < iVar5) {
        iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x178);
        if (iVar6 == 0) {
            iVar5 = -0xc;
            iVar6 = unaff_x23;
            goto code_r0x08004be0;
        }
        iVar5 = sym.synx_util_init_group_coredata(iVar6,noname_1,uStack_54);
        if (iVar5 == 0) {
            iVar5 = sym.synx_util_init_handle(arg1,iVar6,&uStack_50);
            if (iVar5 == 0) {
                *param_4 = uStack_50;
                while( true ) {
                    sym.synx_put_client(arg1);
                    unaff_x21 = param_2;
code_r0x08004c10:
                    iVar4 = sp_el0;
                    if (*(iVar4 + 0x5e0) == iStack_48) break;
                    piVar7 = __stack_chk_fail();
                    param_2 = unaff_x21;
code_r0x08004ce4:
                    Hint_Prefetch(piVar7,2,0,1);
                    do {
                        iVar1 = *piVar7;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
                        if (bVar3) {
                            *piVar7 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release();
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(piVar7,3);
                    }
code_r0x08004cfc:
                    kfree(iVar6);
code_r0x08004be0:
                    sym.synx_util_merge_error(arg1,param_2,uStack_54);
                    if ((param_3 != 0) && (param_3 <= uStack_54)) {
                        kfree(uStack_60);
                    }
                }
                return iVar5;
            }
            _printk(0x8001e9c,*(arg1 + 0x48),uStack_50);
            if (*(iVar6 + 0x40) == 0) goto code_r0x08004cfc;
            piVar7 = *(iVar6 + 0x40) + 0x38;
            goto code_r0x08004ce4;
        }
        _printk(0x8002197,*(arg1 + 0x48));
        goto code_r0x08004cfc;
    }
    _printk(0x80016e6,*(arg1 + 0x48));
    iVar5 = -0x16;
    goto code_r0x08004be0;
}


// ===== sym.__typeid__ZTSFviiPvE_global_addr @ 0x08003648 (size 8) =====

void sym.__typeid__ZTSFviiPvE_global_addr(uint32_t param_1,uint32_t param_2,uint32_t *param_3)

{
    int *arg1;
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong *in_x18;
    int64_t iVar4;
    int64_t arg1_02;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == NULL) {
        _printk(0x8002749,param_1);
        return;
    }
    arg1_00 = sym.synx_get_client(*param_3);
    if (arg1_00 == 0) {
        _printk(0x8001b6d,param_1);
        goto code_r0x08003938;
    }
    arg1_01 = sym.synx_util_acquire_handle(arg1_00,param_3[1]);
    if (((arg1_01 == 0) || (arg1_02 = *(arg1_01 + 8), arg1_02 == 0)) || (*(arg1_02 + 0x40) == 0)) {
        _printk(0x800277c,*(arg1_00 + 0x48),param_1,param_3[1],param_2);
        iVar4 = sym.synx_util_retrieve_data(param_1,0);
        if (iVar4 != 0) {
            _printk(0x80022a9,*(arg1_00 + 0x48),param_1,param_3[1]);
            arg1_02 = *(iVar4 + 8);
            if (arg1_02 != 0) goto code_r0x080037dc;
            goto code_r0x0800381c;
        }
        _printk(0x8002094,*(arg1_00 + 0x48),param_1,param_3[1]);
    }
    else {
        iVar4 = 0;
code_r0x080037dc:
        mutex_lock(arg1_02 + 0x60);
        iVar3 = sym.synx_signal_fence(arg1_02,param_2,1);
        if (iVar3 == 0) {
            sym.synx_signal_core(arg1_02,param_2,1,param_1);
        }
        else {
            _printk(0x8001a3c,*(arg1_00 + 0x48),param_3[1],iVar3);
        }
        mutex_unlock(arg1_02 + 0x60);
        if (iVar4 != 0) {
code_r0x0800381c:
            _raw_spin_lock_bh(obj.camera_tbl_lock);
            arg1 = iVar4 + 0x10;
            Hint_Prefetch(arg1,2,0,1);
            do {
                iVar3 = *arg1;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(arg1,0x10);
                if (bVar2) {
                    *arg1 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sym.synx_util_destroy_data(arg1);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(arg1,3);
            }
            _raw_spin_unlock_bh(obj.camera_tbl_lock);
        }
    }
    sym.synx_util_release_handle(arg1_01);
    sym.synx_put_client(arg1_00);
code_r0x08003938:
    kfree(param_3);
    return;
}


// ===== sym.synx_util_default_user_callback.cfi_jt @ 0x08003650 (size 8) =====

void sym.synx_util_default_user_callback.cfi_jt(ulong param_1,uint param_2,int64_t param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 == 0) || (iVar4 = *(param_3 + 8), iVar4 == 0)) {
        _printk(0x8002228,"synx_util_default_user_callback");
    }
    else {
        *(param_3 + 0x14) = param_2;
        mutex_lock(iVar4 + 0x50);
        piVar3 = *(iVar4 + 0x88);
        iVar1 = param_3 + 0x30;
        uVar2 = __list_add_valid(iVar1,piVar3,iVar4 + 0x80);
        if ((uVar2 & 1) != 0) {
            *(iVar4 + 0x88) = iVar1;
            *(param_3 + 0x30) = iVar4 + 0x80;
            *(param_3 + 0x38) = piVar3;
            *piVar3 = iVar1;
        }
        mutex_unlock(iVar4 + 0x50);
        __wake_up(iVar4 + 0x90,3,0,0);
    }
    return;
}


// ===== sym.synx_create.cfi_jt @ 0x08003658 (size 8) =====

int * sym.synx_create.cfi_jt(uint64_t param_1,int64_t *param_2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg1;
    int *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    if ((param_2 == NULL) || (*param_2 == 0)) {
        _printk(0x8001c64);
    }
    else {
        iVar5 = sym.synx_get_client(param_1 & 0xffffffff);
        if (iVar5 != 0) {
            arg1 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x178);
            if (arg1 == 0) {
                uVar4 = 0xfffffff4;
            }
            else {
                uVar4 = sym.synx_util_init_coredata(arg1,param_2,0x8000e10);
                if (uVar4 == 0) {
                    uVar4 = sym.synx_util_init_handle(iVar5,arg1,&uStack_40);
                    if (-1 < uVar4) {
                        **param_2 = uStack_40;
                        sym.synx_put_client(iVar5);
                        uVar4 = 0;
                        goto code_r0x080042e8;
                    }
                    _printk(0x8001d96,*(iVar5 + 0x48));
                    if ((*(arg1 + 0x94) >> 2 & 1) == 0) {
                        dma_fence_remove_callback(*(arg1 + 0x40),arg1 + 0x48);
                        sym.dma_fence_put(*(arg1 + 0x40));
                    }
                }
                else {
                    _printk(0x80027ef,*(iVar5 + 0x48));
                }
                kfree(arg1);
            }
            sym.synx_put_client(iVar5);
            goto code_r0x080042e8;
        }
    }
    uVar4 = 0xffffffea;
code_r0x080042e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.dma_fence_put;
    if (piVar6 != NULL) {
        piVar6 = piVar6 + 0xe;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            piVar6 = dma_fence_release();
        }
        else if (iVar1 < 1) {
            piVar6 = refcount_warn_saturate(piVar6,3);
        }
    }
    return piVar6;
}


// ===== sym.synx_uninitialize.cfi_jt @ 0x08003660 (size 8) =====

ulong sym.synx_uninitialize.cfi_jt(uint32_t param_1)

{
    int64_t arg1;
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1);
    if (arg1 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",param_1);
        uVar1 = 0xffffffea;
    }
    else {
        sym.synx_put_client(arg1);
        sym.synx_put_client(arg1);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.synx_export.cfi_jt @ 0x08003668 (size 8) =====

int sym.synx_export.cfi_jt(uint64_t param_1,uint *param_2)

{
    int iVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == NULL) || (*(param_2 + 2) == 0)) {
        _printk(0x800204b);
        iVar1 = -0x16;
    }
    else {
        arg1 = sym.synx_get_client(param_1 & 0xffffffff);
        if (arg1 == 0) {
            iVar1 = -0x16;
        }
        else {
            if ((*(param_2 + 6) & 1) == 0) {
                iVar1 = sym.synx_util_export_local(arg1,param_2);
            }
            else {
                iVar1 = sym.synx_util_export_global(arg1,param_2);
            }
            if (iVar1 != 0) {
                _printk(0x8000fc0,*(arg1 + 0x48),*param_2);
            }
            sym.synx_put_client(arg1);
        }
    }
    return iVar1;
}


// ===== sym.synx_fence_driver_name.cfi_jt @ 0x08003670 (size 8) =====

char * sym.synx_fence_driver_name.cfi_jt(void)

{
    return "";
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08003678 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int *arg1;
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(param_1 + -8);
    if ((*(arg1_00 + 0x98) != 0) && (*(arg1_00 + 0x90) == *(arg1_00 + 0x98) + 1)) {
        sym.release_bound_synxs(arg1_00);
    }
    arg1 = arg1_00 + 0x90;
    Hint_Prefetch(arg1,2,0,1);
    do {
        iVar1 = *arg1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar3) {
            *arg1 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.synx_util_destroy_coredata(arg1);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1,3);
    }
    kfree(param_1 + -0x10);
    return;
}


// ===== sym.synx_util_destroy_internal_handle.cfi_jt @ 0x08003680 (size 8) =====

void sym.synx_util_destroy_internal_handle.cfi_jt(ulong *param_1)

{
    int *arg1;
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 4) == 0) {
        uVar3 = *(param_1 + 1);
        iVar2 = param_1[-2];
        arg1_00 = param_1[-1];
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[-2] = 0;
        param_1[-1] = 0;
        puVar1 = iVar2 + ((uVar3 & 0xc0) >> 3) + 0x40c8;
        *param_1 = 0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if ((*(arg1_00 + 0x98) != 0) && (*(arg1_00 + 0x90) == *(arg1_00 + 0x98) + 1)) {
            sym.release_bound_synxs(arg1_00);
        }
        arg1 = arg1_00 + 0x90;
        Hint_Prefetch(arg1,2,0,1);
        do {
            iVar4 = *arg1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(arg1,0x10);
            if (bVar6) {
                *arg1 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.synx_util_destroy_coredata(arg1);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg1,3);
        }
    }
    return;
}


// ===== sym.dma_fence_release.cfi_jt @ 0x08003688 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.dma_fence_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.synx_util_destroy_import_handle.cfi_jt @ 0x08003690 (size 8) =====

void sym.synx_util_destroy_import_handle.cfi_jt(int64_t param_1)

{
    int *arg1;
    uint64_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -4) == 0) {
        uVar2 = *(param_1 + 4);
        iVar6 = *(param_1 + -0x14);
        *(param_1 + -4) = 0;
        arg1_00 = *(param_1 + -0xc);
        *(param_1 + 0xc) = 0;
        *(param_1 + -0x14) = 0;
        puVar1 = iVar6 + ((uVar2 & 0xc0) >> 3) + 0x40c8;
        *(param_1 + -0xc) = 0;
        *(param_1 + 4) = 0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 & (1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU);
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if ((*(arg1_00 + 0x98) != 0) && (*(arg1_00 + 0x90) == *(arg1_00 + 0x98) + 1)) {
            sym.release_bound_synxs(arg1_00);
        }
        arg1 = arg1_00 + 0x90;
        Hint_Prefetch(arg1,2,0,1);
        do {
            iVar3 = *arg1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(arg1,0x10);
            if (bVar5) {
                *arg1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            sym.synx_util_destroy_coredata(arg1);
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(arg1,3);
        }
    }
    return;
}


// ===== sym.synx_util_destroy_coredata.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt @ 0x08003698 (size 8) =====

void sym.synx_util_destroy_coredata.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt(int64_t param_1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x50) != 0) {
        if ((((*(param_1 + 4) >> 1 & 1) == 0) && (iVar4 = sym.synx_util_get_object_status(param_1 + -0x90), iVar4 == 1)
            ) && (uVar5 = dma_fence_remove_callback(*(param_1 + -0x50),param_1 + -0x48), (uVar5 & 1) == 0)) {
            _printk(0x8001d51,*(param_1 + -0x50));
            iVar6 = *(param_1 + -0x50);
        }
        else {
            iVar6 = *(param_1 + -0x50);
        }
        if (iVar6 != 0) {
            piVar1 = iVar6 + 0x38;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release();
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
        }
    }
    sym.synx_util_object_destroy(param_1 + -0x90);
    return;
}


// ===== sym.synx_client_destroy.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt @ 0x080036a0 (size 8) =====

void sym.synx_client_destroy.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt(ulong *param_1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = param_1 + -1;
    if (*piVar8 == 0) {
        _printk(0x80019f3);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
        if (piVar5 != NULL) {
            iVar7 = *piVar8;
            uVar6 = *(iVar7 + 0x48);
            *piVar8 = 0;
            *param_1 = 0;
            iVar2 = _segment.ehdr;
            *piVar5 = iVar7;
            puVar1 = iVar2 + ((uVar6 & 0xc0) >> 3) + 200;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            piVar5[1] = 0xfffffffe0;
            piVar5[2] = piVar5 + 2;
            piVar5[3] = piVar5 + 2;
            iVar2 = _segment.ehdr;
            piVar5[4] = sym.synx_client_cleanup.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt;
            queue_work_on(0x20,*(iVar2 + 0x10e8));
        }
    }
    return;
}


// ===== sym.synx_read.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x080036a8 (size 8) =====

uint64_t sym.synx_read.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    if (param_3 == 0x28) {
        iVar5 = sym.synx_get_client(**(param_1 + 0xd8));
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            iVar6 = iVar5 + 0x50;
            mutex_lock(iVar6);
            piVar12 = *(iVar5 + 0x80);
            if (iVar5 + 0x80 == piVar12 || piVar12 + -6 == NULL) {
                mutex_unlock(iVar6);
                uVar10 = 0;
            }
            else if (*(piVar12 + -0x2c) - 0x100U < 0xffffff01) {
                _printk(0x8001592,"synx_read");
                mutex_unlock(iVar6);
                uVar10 = 0xffffffffffffffea;
            }
            else {
                uVar10 = __list_del_entry_valid(piVar12);
                if ((uVar10 & 1) != 0) {
                    iVar1 = *piVar12;
                    piVar2 = piVar12[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar12 = piVar12;
                piVar12[1] = piVar12;
                auVar13 = mutex_unlock(iVar6);
                uVar10 = 0x28;
                uVar3 = piVar12[-4];
                iVar6 = sym._copy_to_user(param_2,auVar13,0x28);
                if (iVar6 != 0) {
                    _printk(0x8001232);
                    uVar10 = 0xfffffffffffffff2;
                }
                iVar4 = sym.synx_util_clear_cb_entry(iVar5,piVar12 + -6);
                if (iVar4 != 0) {
                    _printk(0x8002377,"synx_read",*(iVar5 + 0x48),uVar3 & 0xffffffff);
                }
            }
            sym.synx_put_client(iVar5);
        }
    }
    else {
        _printk(0x8001078);
        uVar10 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar8) {
        return uVar10;
    }
    auVar13 = __stack_chk_fail();
    puVar7 = auVar13._8_8_;
    *extraout_x18 = 0x8006148;
    iVar8 = sym.synx_get_client(**(auVar13._0_8_ + 0xd8));
    if (iVar8 == 0) {
        _printk(0x800263f);
        uVar9 = 0;
    }
    else {
        if (puVar7 != NULL) {
            pcVar11 = *puVar7;
            if (iVar8 + 0x90 != 0 && pcVar11 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x8000f00);
                (*pcVar11)(auVar13._0_8_,iVar8 + 0x90,puVar7);
            }
        }
        mutex_lock(iVar8 + 0x50);
        uVar9 = (iVar8 + 0x80 != *(iVar8 + 0x80)) << 1;
        mutex_unlock(iVar8 + 0x50);
        sym.synx_put_client(iVar8);
    }
    return uVar9;
}


// ===== sym.synx_table_read.bdcf4b4dc9b8f95b2df8e2a6b1e3eb68.cfi_jt @ 0x080036b0 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.synx_table_read.bdcf4b4dc9b8f95b2df8e2a6b1e3eb68.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t *puVar1;
    int64_t arg3;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    int64_t arg1;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t arg1_00;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0xd8);
    iVar8 = kmalloc_order_trace(0x2400,0xdc0,2);
    if (iVar8 == 0) {
        uVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar12 = iVar8;
        if ((_segment.ehdr & 1) != 0) {
            iVar6 = scnprintf(iVar8,0x2400,"");
            iVar12 = iVar8 + iVar6;
        }
        arg3 = iVar8 + 0x2400;
        if ((_segment.ehdr >> 1 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3 - iVar12,"|    ID    |");
            iVar12 = iVar12 + iVar6;
        }
        if ((_segment.ehdr >> 2 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3 - iVar12,"");
            iVar12 = iVar12 + iVar6;
        }
        if ((_segment.ehdr >> 3 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3 - iVar12,"");
            iVar12 = iVar12 + iVar6;
        }
        iVar6 = scnprintf(iVar12,arg3 - iVar12,0x8002287);
        iVar12 = iVar12 + iVar6;
        iVar15 = 0;
        do {
            mutex_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
            iVar14 = CONCAT44(*0x8000004,_segment.ehdr) + iVar15 * 0x10;
            piVar13 = iVar14 + 0xe8;
            if (*piVar13 == 0) {
                mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
            }
            else {
                puVar1 = iVar14 + 0xf0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar16 = *puVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar16 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar16 == 0) {
                    uVar10 = 2;
code_r0x0800b434:
                    refcount_warn_saturate(puVar1,uVar10);
                }
                else if ((uVar16 + 1 | uVar16) < 0) {
                    uVar10 = 1;
                    goto code_r0x0800b434;
                }
                iVar14 = *piVar13;
                mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
                iVar6 = scnprintf(iVar12,arg3 - iVar12,"=============== session %08u ===============\n",
                                  *(iVar14 + 0x48));
                iVar12 = iVar12 + iVar6;
                iVar6 = scnprintf(iVar12,arg3 - iVar12,"session name ::: %s\n",iVar14 + 8);
                uVar16 = 0;
                iVar12 = iVar12 + iVar6;
                do {
                    arg1 = sym.synx_util_acquire_handle(iVar14,uVar16);
                    if (((arg1 != 0) && (arg1_00 = *(arg1 + 8), arg1_00 != 0)) && (*(arg1_00 + 0x40) != 0)) {
                        mutex_lock(arg1_00 + 0x60);
                        if ((_segment.ehdr & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3 - iVar12,"|%10s|",arg1_00);
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 1 & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3 - iVar12,"",uVar16);
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 2 & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3 - iVar12,"|%11d|",*(arg1_00 + 0x98));
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 3 & 1) != 0) {
                            uVar7 = sym.synx_util_get_object_status(arg1_00);
                            iVar6 = scnprintf(iVar12,arg3 - iVar12,"",uVar7);
                            iVar12 = iVar12 + iVar6;
                        }
                        if (((_segment.ehdr >> 2 & 1) != 0) && (*(arg1_00 + 0x98) != 0)) {
                            iVar6 = scnprintf(iVar12,arg3 - iVar12,"\nBound synx: ");
                            iVar12 = iVar12 + iVar6;
                            sym.populate_bound_rows(arg1_00,iVar12,arg3);
                        }
                        mutex_unlock(arg1_00 + 0x60);
                        iVar6 = scnprintf(iVar12,arg3 - iVar12,0x8002287);
                        iVar12 = iVar12 + iVar6;
                        sym.synx_util_release_handle(arg1);
                    }
                    uVar16 = uVar16 + 1;
                } while (uVar16 != 0x100);
                iVar6 = scnprintf(iVar12,arg3 - iVar12,"\n================================================\n\n");
                iVar12 = iVar12 + iVar6;
                sym.synx_put_client(iVar14);
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 0x100);
        if ((*0x8000e59 < '\0') && (piVar13 = iVar11 + 0x1198, piVar13 != *piVar13)) {
            iVar6 = scnprintf(iVar12,arg3 - iVar12,"\nError(s): ");
            iVar12 = iVar12 + iVar6;
            mutex_lock(iVar11 + 0x11a8);
            piVar5 = *(iVar11 + 0x1198);
            while (piVar13 != piVar5) {
                piVar17 = *piVar5;
                iVar6 = scnprintf(iVar12,arg3 - iVar12,"",piVar5 + -6,*(piVar5 + -0xc),piVar5[-1]);
                uVar9 = __list_del_entry_valid(piVar5);
                if ((uVar9 & 1) != 0) {
                    iVar15 = *piVar5;
                    piVar2 = piVar5[1];
                    *(iVar15 + 8) = piVar2;
                    *piVar2 = iVar15;
                }
                iVar12 = iVar12 + iVar6;
                *piVar5 = -0x2152ffffffffff00;
                piVar5[1] = -0x2152fffffffffede;
                kfree(piVar5 + -6);
                piVar5 = piVar17;
            }
            mutex_unlock(iVar11 + 0x11a8);
        }
        uVar10 = simple_read_from_buffer(param_2,param_3,param_4,iVar8,iVar12 - iVar8);
        kfree(iVar8);
    }
    return uVar10;
}


// ===== sym.synx_signal.cfi_jt @ 0x080036b8 (size 8) =====

int sym.synx_signal.cfi_jt(uint64_t param_1,uint32_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t arg1;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        return -0x16;
    }
    arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
    if (((arg1_00 == 0) || (arg1_01 = *(arg1_00 + 8), arg1_01 == 0)) || (*(arg1_01 + 0x40) == 0)) {
        _printk(0x8001101,"",*(arg1 + 0x48),param_2);
        iVar2 = -0x16;
    }
    else {
        iVar1 = arg1_01 + 0x60;
        mutex_lock(iVar1);
        iVar2 = sym.synx_signal_fence(arg1_01,param_3,1);
        if (iVar2 == 0) {
            iVar3 = sym.synx_signal_core(arg1_01,param_3,0,0);
            mutex_unlock(iVar1);
            if (iVar3 == 0) goto code_r0x080045ec;
        }
        else {
            mutex_unlock(iVar1);
            iVar3 = iVar2;
        }
        _printk(0x8001a3c,*(arg1 + 0x48),param_2,iVar3);
        iVar2 = iVar3;
    }
code_r0x080045ec:
    sym.synx_util_release_handle(arg1_00);
    sym.synx_put_client(arg1);
    return iVar2;
}


// ===== sym.synx_open.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x080036c0 (size 8) =====

int sym.synx_open.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar4;
    uint64_t arg1;
    ulong unaff_x30;
    ulong *puStack_80;
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
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,4);
    if (iVar3 == 0) {
        iVar2 = -0xc;
    }
    else {
        iVar1 = sp_el0;
        scnprintf(&uStack_78,0x40,"",*(iVar1 + 0x5d8));
        puStack_80 = &uStack_78;
        iVar2 = sym.synx_initialize(iVar3,&puStack_80);
        if (iVar2 == 0) {
            *(param_2 + 0xd8) = iVar3;
        }
        else {
            kfree(iVar3);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.synx_close;
    puVar4 = *(extraout_x1 + 0xd8);
    arg1 = *puVar4;
    iVar3 = sym.synx_get_client(arg1);
    if (iVar3 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",arg1);
        iVar2 = -0x16;
    }
    else {
        sym.synx_put_client(iVar3);
        sym.synx_put_client(iVar3);
        iVar2 = 0;
    }
    kfree(puVar4);
    return iVar2;
}


// ===== sym.synx_close.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x080036c8 (size 8) =====

uint sym.synx_close.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t arg1;
    ulong *in_x18;
    uint32_t *puVar1;
    uint uVar2;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_2 + 0xd8);
    arg1_00 = *puVar1;
    arg1 = sym.synx_get_client(arg1_00);
    if (arg1 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",arg1_00);
        uVar2 = 0xffffffea;
    }
    else {
        sym.synx_put_client(arg1);
        sym.synx_put_client(arg1);
        uVar2 = 0;
    }
    kfree(puVar1);
    return uVar2;
}


// ===== sym.simple_open.cfi_jt @ 0x080036d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.synx_get_fence.cfi_jt @ 0x080036d8 (size 8) =====

int64_t sym.synx_get_fence.cfi_jt(uint64_t param_1,uint32_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1;
    int64_t arg1_00;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        return 0;
    }
    arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
    if (((arg1_00 == 0) || (iVar7 = *(arg1_00 + 8), iVar7 == 0)) || (*(iVar7 + 0x40) == 0)) {
        _printk(0x8001101,"synx_get_fence",*(arg1 + 0x48),param_2);
        iVar6 = 0;
        goto code_r0x08004184;
    }
    mutex_lock(iVar7 + 0x60);
    iVar6 = *(iVar7 + 0x40);
    if (iVar6 != 0) {
        puVar1 = iVar6 + 0x38;
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
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0800417c;
            uVar5 = 1;
        }
        refcount_warn_saturate(puVar1,uVar5);
    }
code_r0x0800417c:
    mutex_unlock(iVar7 + 0x60);
code_r0x08004184:
    sym.synx_util_release_handle(arg1_00);
    sym.synx_put_client(arg1);
    return iVar6;
}


// ===== sym.synx_deregister_callback.cfi_jt @ 0x080036e0 (size 8) =====

uint sym.synx_deregister_callback.cfi_jt
               (uint32_t param_1,uint32_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    int64_t iVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int64_t arg1;
    int64_t arg1_00;
    uint uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t arg1_01;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1);
    if (arg1 == 0) {
        return 0xffffffea;
    }
    arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
    if ((arg1_00 == 0) || (arg1_01 = *(arg1_00 + 8), arg1_01 == 0)) {
        _printk(0x8001101,"",*(arg1 + 0x48),param_2);
        uVar5 = 0xffffffea;
        goto code_r0x08004ad0;
    }
    mutex_lock(arg1_01 + 0x60);
    if ((*(arg1_01 + 0x94) & 6) == 0) {
        iVar4 = sym.synx_util_get_object_status(arg1_01);
        if (iVar4 == 1) {
            if (arg1_01 + 0x160 != *(arg1_01 + 0x160)) {
                bVar3 = false;
                piVar9 = *(arg1_01 + 0x160);
                do {
                    piVar8 = *piVar9;
                    if (piVar9[-8] == *(arg1 + 0x48)) {
                        uVar2 = *(piVar9 + -0x3c);
                        uVar6 = uVar2;
                        if ((uVar2 == 0) || (0xff < uVar2)) {
                            _printk(0x8001f4b,param_1);
                        }
                        else {
                            iVar1 = arg1 + uVar6 * 0x40;
                            if (((iVar1 != -0xd8) && (piVar7 = iVar1 + 0xe8, *piVar7 == param_3)) &&
                               (*(arg1 + uVar6 * 0x40 + 0xe0) == param_4)) {
                                if (param_5 == 0) {
                                    iVar4 = sym.synx_util_clear_cb_entry(arg1,arg1 + uVar6 * 0x40 + 200);
                                    if (iVar4 != 0) {
                                        _printk(0x800139e,"",*(arg1 + 0x48),param_2);
                                    }
                                    uVar6 = __list_del_entry_valid(piVar9);
                                    if ((uVar6 & 1) != 0) {
                                        iVar1 = *piVar9;
                                        piVar7 = piVar9[1];
                                        *(iVar1 + 8) = piVar7;
                                        *piVar7 = iVar1;
                                    }
                                    *piVar9 = piVar9;
                                    piVar9[1] = piVar9;
                                    kfree(piVar9 + -8);
                                }
                                else {
                                    *piVar7 = param_5;
                                    uVar6 = __list_del_entry_valid(piVar9);
                                    if ((uVar6 & 1) != 0) {
                                        iVar1 = *piVar9;
                                        piVar7 = piVar9[1];
                                        *(iVar1 + 8) = piVar7;
                                        *piVar7 = iVar1;
                                    }
                                    *piVar9 = piVar9;
                                    piVar9[1] = piVar9;
                                    *(piVar9 + -7) = 4;
                                    queue_work_on(0x20,*(_segment.ehdr + 0x10e8),piVar9 + -6);
                                }
                                bVar3 = true;
                            }
                        }
                    }
                    piVar9 = piVar8;
                } while (arg1_01 + 0x160 != piVar8);
                uVar5 = 0;
                if (!bVar3) {
                    uVar5 = 0xffffffea;
                }
                goto code_r0x08004ac8;
            }
        }
        else {
            _printk(0x8001976,param_2);
        }
        uVar5 = 0xffffffea;
    }
    else {
        _printk(0x8001e63);
        uVar5 = 0;
    }
code_r0x08004ac8:
    mutex_unlock(arg1_01 + 0x60);
code_r0x08004ad0:
    sym.synx_util_release_handle(arg1_00);
    sym.synx_put_client(arg1);
    return uVar5;
}


// ===== sym.__typeid__ZTSFbP9dma_fenceE_global_addr @ 0x080036e8 (size 8) =====

ulong sym.__typeid__ZTSFbP9dma_fenceE_global_addr(void)

{
    return 1;
}


// ===== sym.dma_fence_default_wait.cfi_jt @ 0x080036f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.dma_fence_default_wait.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.synx_fence_callback.cfi_jt @ 0x080036f8 (size 8) =====

void sym.synx_fence_callback.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + 0x4c) & 1) != 0) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x38);
        if (puVar3 != NULL) {
            *puVar3 = *(param_2 + 0x128);
            uVar2 = sym.synx_util_get_object_status_locked(param_2 + -0x48);
            *(puVar3 + 2) = 0xfffffffe0;
            puVar3[1] = uVar2;
            *(puVar3 + 4) = puVar3 + 4;
            *(puVar3 + 6) = puVar3 + 4;
            iVar1 = _segment.ehdr;
            *(puVar3 + 8) = sym.synx_ipc_signal.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
            queue_work_on(0x20,*(iVar1 + 0x10e8),puVar3 + 2);
        }
    }
    return;
}


// ===== sym.synx_get_status.cfi_jt @ 0x08003700 (size 8) =====

uint sym.synx_get_status.cfi_jt(uint64_t param_1,uint32_t param_2)

{
    uint uVar1;
    int64_t arg1;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
        if (((arg1_00 == 0) || (arg1_01 = *(arg1_00 + 8), arg1_01 == 0)) || (*(arg1_01 + 0x40) == 0)) {
            _printk(0x8001101,"",*(arg1 + 0x48),param_2);
            uVar1 = 0;
        }
        else {
            mutex_lock(arg1_01 + 0x60);
            uVar1 = sym.synx_util_get_object_status(arg1_01);
            mutex_unlock(arg1_01 + 0x60);
        }
        sym.synx_util_release_handle(arg1_00);
        sym.synx_put_client(arg1);
    }
    return uVar1;
}


// ===== sym.synx_release.cfi_jt @ 0x08003708 (size 8) =====

ulong sym.synx_release.cfi_jt(uint64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    int *piVar2;
    int *arg1;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1_00 == 0) {
        return 0xffffffea;
    }
    uVar8 = param_2 & 0xff;
    iVar1 = arg1_00 + uVar8 * 0x30 + 0x68e8;
    mutex_lock(iVar1);
    if (*(arg1_00 + uVar8 * 0x28 + 0x40f0) == 0) {
        uVar7 = *(arg1_00 + 0x48);
        uVar6 = 0x80025b5;
    }
    else if (*(arg1_00 + uVar8 * 0x28 + 0x4100) == param_2) {
        piVar2 = arg1_00 + uVar8 * 0x28 + 0x4108;
        if (*piVar2 == 0) {
            uVar7 = *(arg1_00 + 0x48);
            uVar6 = 0x80025e2;
        }
        else {
            arg1 = arg1_00 + uVar8 * 0x28 + 0x40f8;
            if (*arg1 != 0) {
                *piVar2 = *piVar2 + -1;
                Hint_Prefetch(arg1,2,0,1);
                do {
                    iVar3 = *arg1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(arg1,0x10);
                    if (bVar5) {
                        *arg1 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.synx_util_destroy_internal_handle(arg1);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(arg1,3);
                }
                goto code_r0x08004e6c;
            }
            uVar7 = *(arg1_00 + 0x48);
            uVar6 = 0x8001dd0;
        }
    }
    else {
        uVar7 = *(arg1_00 + 0x48);
        uVar6 = 0x8001ed0;
    }
    _printk(uVar6,uVar7,param_2);
code_r0x08004e6c:
    mutex_unlock(iVar1);
    sym.synx_put_client(arg1_00);
    return 0;
}


// ===== sym.synx_addrefcount.cfi_jt @ 0x08003710 (size 8) =====

uint sym.synx_addrefcount.cfi_jt(uint64_t param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t arg1;
    int64_t arg1_00;
    ulong uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(param_1 & 0xffffffff);
    if (arg1 == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        arg1_00 = sym.synx_util_acquire_handle(arg1,param_2);
        if (((arg1_00 == 0) || (*(arg1_00 + 8) == 0)) || (*(*(arg1_00 + 8) + 0x40) == 0)) {
            _printk(0x8001101,"",*(arg1 + 0x48),param_2);
            uVar7 = 0xffffffea;
        }
        else if (param_3 < 0x801) {
            iVar2 = arg1 + (param_2 & 0xff) * 0x30 + 0x68e8;
            mutex_lock(iVar2);
            if (param_3 != 0) {
                puVar1 = arg1_00 + 0x10;
                do {
                    while( true ) {
                        *(arg1_00 + 0x20) = *(arg1_00 + 0x20) + 1;
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
                        param_3 = param_3 - 1;
                        if (uVar3 != 0) break;
                        uVar6 = 2;
code_r0x08005578:
                        refcount_warn_saturate(puVar1,uVar6);
                        if (param_3 == 0) goto code_r0x08005584;
                    }
                    if ((uVar3 + 1 | uVar3) < 0) {
                        uVar6 = 1;
                        goto code_r0x08005578;
                    }
                } while (param_3 != 0);
            }
code_r0x08005584:
            mutex_unlock(iVar2);
            uVar7 = 0;
        }
        else {
            _printk(0x8002244,*(arg1 + 0x48),param_2);
            uVar7 = 0xffffffea;
        }
        sym.synx_util_release_handle(arg1_00);
        sym.synx_put_client(arg1);
    }
    return uVar7;
}


// ===== sym.synx_import.cfi_jt @ 0x08003718 (size 8) =====

int sym.synx_import.cfi_jt(uint64_t param_1,uint *param_2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2;
    uint *arg2_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    if ((param_2 == NULL) || (*(param_2 + 2) == 0)) {
        _printk(0x8001f75);
    }
    else {
        iVar2 = sym.synx_get_client(param_1 & 0xffffffff);
        if (iVar2 != 0) {
            arg2 = sym.synx_util_import_object(param_2);
            if (arg2 == 0) {
                _printk(0x80018a3,*(iVar2 + 0x48),*param_2,param_2[1]);
                iVar1 = -0x16;
            }
            else {
                iVar1 = sym.synx_util_init_handle(iVar2,arg2,&uStack_40);
                if (iVar1 == 0) {
                    **(param_2 + 2) = uStack_40;
                }
                else {
                    _printk(0x8002021,*(iVar2 + 0x48));
                    sym.synx_util_put_object(arg2);
                }
            }
            sym.synx_put_client(iVar2);
            goto code_r0x080056c0;
        }
    }
    iVar1 = -0x16;
code_r0x080056c0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar3 = __stack_chk_fail();
        arg2_00 = auVar3._8_8_;
        *extraout_x18 = sym.synx_export;
        if ((arg2_00 == NULL) || (*(arg2_00 + 2) == 0)) {
            _printk(0x800204b);
            iVar1 = -0x16;
        }
        else {
            iVar2 = sym.synx_get_client(auVar3._0_8_ & 0xffffffff);
            if (iVar2 == 0) {
                iVar1 = -0x16;
            }
            else {
                if ((*(arg2_00 + 6) & 1) == 0) {
                    iVar1 = sym.synx_util_export_local(iVar2,arg2_00);
                }
                else {
                    iVar1 = sym.synx_util_export_global(iVar2,arg2_00);
                }
                if (iVar1 != 0) {
                    _printk(0x8000fc0,*(iVar2 + 0x48),*arg2_00);
                }
                sym.synx_put_client(iVar2);
            }
        }
        return iVar1;
    }
    return iVar1;
}


// ===== sym.synx_deregister_ops.cfi_jt @ 0x08003720 (size 8) =====

ulong sym.synx_deregister_ops.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (*(param_1 + 0x20) == 0)) || (*(param_1 + 0x28) != 0)) {
        _printk(0x8001ca1);
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 0x10f8);
        if (1 < *(param_1 + 0x28)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8005d14);
            (*pcVar1)();
        }
        iVar3 = _segment.ehdr + *(param_1 + 0x28) * 0x68;
        *(iVar3 + 0x1130) = 0;
        *(iVar3 + 0x1138) = 0;
        *(iVar3 + 0x1140) = 0;
        *(iVar3 + 0x1148) = 0;
        *(iVar3 + 0x1150) = 0;
        *(iVar3 + 0x1158) = 0;
        *(iVar3 + 0x1160) = 0;
        *(iVar3 + 0x1168) = 0;
        *(iVar3 + 0x1170) = 0;
        *(iVar3 + 0x1178) = 0;
        *(iVar3 + 0x1180) = 0;
        *(iVar3 + 0x1188) = 0;
        *(iVar3 + 0x1128) = 0;
        _printk(0x80020fb,*(param_1 + 0x20));
        mutex_unlock(_segment.ehdr + 0x10f8);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.synx_register_ops.cfi_jt @ 0x08003728 (size 8) =====

ulong sym.synx_register_ops.cfi_jt(int64_t *param_1)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 == NULL) || (param_1[4] == 0)) || (param_1[5] != 0)) ||
       (((*param_1 == 0 || (param_1[1] == 0)) || (param_1[3] == 0)))) {
        _printk(0x80013fc);
        uVar8 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 0x10f8);
        uVar6 = *(param_1 + 5);
        if (1 < *(param_1 + 5)) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8005c38);
            (*pcVar5)();
        }
        iVar7 = _segment.ehdr + uVar6 * 0x68;
        pcVar1 = iVar7 + 0x118c;
        if (*pcVar1 == '\0') {
            iVar9 = _segment.ehdr + uVar6 * 0x68;
            *pcVar1 = '\x01';
            iVar3 = param_1[3];
            iVar2 = *param_1;
            iVar4 = param_1[1];
            *(iVar9 + 0x1178) = param_1[2];
            *(iVar9 + 0x1180) = iVar3;
            *(iVar9 + 0x1168) = iVar2;
            *(iVar9 + 0x1170) = iVar4;
            strscpy(iVar7 + 0x1128,param_1[4],0x40);
            *(iVar9 + 0x1188) = param_1[5];
            _printk(0x80022de,param_1[5],param_1[4]);
            uVar8 = 0;
        }
        else {
            _printk(0x80011d7,*(_segment.ehdr + uVar6 * 0x68 + 0x1188));
            uVar8 = 0xffffff8e;
        }
        mutex_unlock(_segment.ehdr + 0x10f8);
    }
    return uVar8;
}


// ===== sym.synx_initialize.cfi_jt @ 0x08003730 (size 8) =====

void sym.synx_initialize.cfi_jt(uint *param_1,int64_t *param_2)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uVar3 = 0xffffffea;
    auStack_6c[0] = 0;
    if (param_1 == NULL) goto code_r0x08005898;
    if (param_2 == NULL) goto code_r0x08005898;
    uVar4 = sym.synx_util_get_free_handle(_segment.ehdr + 200,0x100);
    if (0xff < uVar4) {
        _printk(0x80020d5);
        while( true ) {
            uVar3 = 0xfffffff4;
code_r0x08005898:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) break;
            __stack_chk_fail(uVar3);
            puVar6 = extraout_x8;
            uVar4 = extraout_x9;
code_r0x08005a1c:
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar2) {
                    *puVar6 = *puVar6 & (uVar4 ^ 0xffffffffffffffff);
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    piVar5 = vzalloc(0x98e8);
    if (piVar5 != NULL) {
        if (*param_2 != 0) {
            strscpy(piVar5 + 1,*param_2,0x40);
        }
        do {
            get_random_bytes(auStack_6c,1);
        } while (auStack_6c[0] == 0);
        *piVar5 = _segment.ehdr;
        *(piVar5 + 9) = uVar4 & 0xff | auStack_6c[0] << 8;
        __mutex_init(piVar5 + 10,"",obj.synx_initialize.__key);
        iVar7 = 0;
        do {
            __mutex_init(piVar5 + iVar7 + 0x68e8,"",obj.synx_initialize.__key);
            iVar7 = iVar7 + 0x30;
        } while (iVar7 != 0x3000);
        piVar5[0x10] = piVar5 + 0x10;
        piVar5[0x11] = piVar5 + 0x10;
        __init_waitqueue_head(piVar5 + 0x12,"&client->event_wq",obj.synx_initialize.__key);
        puVar6 = piVar5 + 0x819;
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        puVar6 = piVar5 + 0x15;
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        mutex_lock(_segment.ehdr + 0x98);
        iVar7 = _segment.ehdr + uVar4 * 0x10;
        *(iVar7 + 0xe8) = piVar5;
        *(iVar7 + 0xf0) = 1;
        *param_1 = piVar5[9];
        mutex_unlock(_segment.ehdr + 0x98);
        _printk(0x8000fec,*param_1,*param_2);
        uVar3 = 0;
        goto code_r0x08005898;
    }
    puVar6 = _segment.ehdr + (uVar4 >> 3 & 0x1ffffffffffffff8) + 200;
    uVar4 = 1L << (uVar4 & 0x3f);
    goto code_r0x08005a1c;
}


// ===== sym.synx_ioctl.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x08003738 (size 8) =====

void sym.synx_ioctl.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar auVar10 [16];
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    uint32_t *puStack_a8;
    ulong uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint32_t auStack_50 [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_b8 = 0;
    iStack_b0 = 0;
    uStack_c0 = 0;
    if (param_2 != -0x3fe78c7e) {
        _printk(0x8002660);
        iVar5 = -0x203;
        goto code_r0x0800677c;
    }
    puVar7 = *(param_1 + 0xd8);
    iVar5 = sym._copy_from_user(&uStack_c0,param_3,0x18);
    if (iVar5 != 0) {
        _printk(0x8001d09);
        iVar5 = -0xe;
        goto code_r0x0800677c;
    }
    if (iStack_b0 == 0) {
        iVar5 = -0x16;
        goto code_r0x0800677c;
    }
    switch(uStack_c0 & 0xffffffff) {
    case 0:
        uVar1 = *puVar7;
        auStack_50[0] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        uStack_a0 = NULL;
        if (uStack_c0._4_4_ != 0x44) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x44);
        if (iVar5 != 0) goto code_r0x08006700;
        puStack_a8 = auStack_50;
        puStack_98 = &uStack_90;
        iVar4 = sym.synx_create(uVar1,&puStack_a8);
        iVar5 = iStack_b0;
        if (iVar4 == 0) {
            uVar8 = uStack_c0 >> 0x20;
            if (uStack_c0 < 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x800685c);
                (*pcVar2)();
            }
            auVar10 = __check_object_size(&uStack_90,uVar8,1);
            iVar5 = sym._copy_to_user(iVar5,auVar10,uVar8);
            if (iVar5 != 0) goto code_r0x08006700;
        }
        break;
    case 1:
        uVar1 = *puVar7;
        auStack_50[0] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ != 0x44) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x44);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_release(uVar1,auStack_50[0]);
        break;
    case 2:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 8) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_signal(uVar1,uStack_90 & 0xffffffff,uStack_90 >> 0x20);
        break;
    case 3:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uVar8 = uStack_88 & 0xffffffff;
            if (uStack_88 < 0x100) {
                iVar5 = __kmalloc(uVar8 << 2,0xdc0);
                puVar7 = uStack_90;
                if (iVar5 == 0) {
                    iVar4 = -0xc;
                    break;
                }
                if (uStack_88 >> 0x1d != 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006880);
                    (*pcVar2)();
                }
                iVar9 = (uStack_88 & 0xffffffff) << 2;
                __check_object_size(iVar5,iVar9,0);
                iVar9 = sym._copy_from_user(iVar5,puVar7,iVar9);
                if (iVar9 == 0) {
                    iVar4 = sym.synx_merge(uVar1,iVar5,uVar8,&uStack_88 + 4);
                    iVar9 = iStack_b0;
                    if (iVar4 == 0) {
                        uVar8 = uStack_c0 >> 0x20;
                        if (uStack_c0 < 0) goto code_r0x08006888;
                        auVar10 = __check_object_size(&uStack_90,uVar8,1);
                        iVar9 = sym._copy_to_user(iVar9,auVar10,uVar8);
                        if (iVar9 != 0) goto code_r0x0800648c;
                    }
                }
                else {
code_r0x0800648c:
                    iVar4 = -0xe;
                }
                kfree(iVar5);
                break;
            }
        }
    default:
code_r0x08006774:
        iVar4 = -0x16;
        break;
    case 4:
        uVar8 = *puVar7;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x28) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x28);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_register_callback(uVar8,uStack_90 & 0xffffffff,0x8003650,uStack_88);
        if (iVar4 != 0) {
            uVar6 = 0x8001aac;
code_r0x08006554:
            _printk(uVar6,uVar8,uStack_90);
        }
        break;
    case 5:
        uVar8 = *puVar7;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x28) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x28);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_deregister_callback(uVar8,uStack_90 & 0xffffffff,0x8003650,uStack_88);
        if (iVar4 != 0) {
            uVar6 = 0x800114c;
            goto code_r0x08006554;
        }
        break;
    case 6:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 == 0) {
                uVar3 = sym.synx_wait(uVar1,uStack_90 & 0xffffffff,uStack_88);
                iVar4 = 0;
                uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
                auVar10 = extraout_q0_01;
            }
            else {
                iVar4 = -0xe;
                auVar10 = extraout_q0_00;
            }
        }
        else {
            iVar4 = -0x16;
            auVar10 = extraout_q0;
        }
        iVar5 = sym._copy_to_user(param_3,auVar10,0x18);
        if (iVar5 != 0) {
            _printk(0x8001d09);
code_r0x08006700:
            iVar4 = -0xe;
        }
        break;
    case 7:
        uVar1 = *puVar7;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x18) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x18);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_bind(uVar1,uStack_90 & 0xffffffff,uStack_88,iStack_80);
code_r0x08006604:
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar4);
        break;
    case 8:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ == 8) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
            if (iVar5 == 0) {
                iVar4 = sym.synx_addrefcount(uVar1,uStack_90 & 0xffffffff,uStack_90 >> 0x20);
                goto code_r0x08006604;
            }
            goto code_r0x08006700;
        }
        goto code_r0x08006774;
    case 9:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 8) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
        if (iVar5 != 0) goto code_r0x08006700;
        uVar3 = sym.synx_get_status(uVar1,uStack_90 & 0xffffffff);
        uStack_90 = CONCAT44(uVar3,uStack_90);
        if (uStack_c0 < 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006658);
            (*pcVar2)();
        }
code_r0x080066b0:
        iVar5 = iStack_b0;
        uVar8 = uStack_c0._4_4_;
        auVar10 = __check_object_size(&uStack_90,uVar8,1);
code_r0x080067d0:
        iVar5 = sym._copy_to_user(iVar5,auVar10,uVar8);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
        break;
    case 10:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uStack_a0 = &uStack_88;
            puStack_a8 = uStack_90;
            iVar4 = sym.synx_import(uVar1,&puStack_a8);
            if (iVar4 == 0) {
                if (uStack_c0 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006868);
                    (*pcVar2)();
                }
                goto code_r0x080066b0;
            }
        }
        goto code_r0x08006774;
    case 0xb:
        uVar1 = *puVar7;
        puStack_a8 = NULL;
        uStack_a0 = NULL;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&puStack_a8,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uStack_88 = &puStack_a8 | 4;
            uStack_90 = CONCAT44(uStack_90._4_4_,puStack_a8._0_4_);
            uStack_78 = CONCAT44(uStack_78._4_4_,uStack_a0._4_4_);
            iStack_80 = 0;
            iVar4 = sym.synx_export(uVar1,&uStack_90);
            iVar5 = iStack_b0;
            if (iVar4 == 0) {
                uVar8 = uStack_c0 >> 0x20;
                if (uStack_c0 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006874);
                    (*pcVar2)();
                }
                auVar10 = __check_object_size(&puStack_a8,uVar8,1);
                goto code_r0x080067d0;
            }
        }
        goto code_r0x08006774;
    }
    iVar5 = iVar4;
code_r0x0800677c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(iVar5);
code_r0x08006888:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8006890);
    (*pcVar2)();
}


// ===== sym.synx_ipc_signal_handler.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x08003740 (size 8) =====

void sym.synx_ipc_signal_handler.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int *arg1;
    uint32_t arg2;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t *puVar6;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = param_1 + -8;
    iVar5 = sym.synx_util_release_data(*puVar6,1);
    if (iVar5 == 0) {
        _printk(0x8001cb9,*puVar6);
        goto code_r0x08005ee4;
    }
    arg1_00 = *(iVar5 + 8);
    if (arg1_00 == 0) {
        iVar4 = -0x16;
code_r0x08005ea4:
        _printk(0x8001a7c,*puVar6,iVar4);
    }
    else {
        iVar1 = arg1_00 + 0x60;
        arg2 = *(param_1 + -4);
        mutex_lock(iVar1);
        iVar4 = sym.synx_signal_fence(arg1_00,arg2,0);
        if (iVar4 != 0) {
            mutex_unlock(iVar1);
            goto code_r0x08005ea4;
        }
        iVar4 = sym.synx_signal_core(arg1_00,arg2,0,0);
        mutex_unlock(iVar1);
        if (iVar4 != 0) goto code_r0x08005ea4;
    }
    _raw_spin_lock_bh(obj.global_tbl_lock);
    arg1 = iVar5 + 0x10;
    Hint_Prefetch(arg1,2,0,1);
    do {
        iVar4 = *arg1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar3) {
            *arg1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        sym.synx_util_destroy_data(arg1);
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(arg1,3);
    }
    _raw_spin_unlock_bh(obj.global_tbl_lock);
code_r0x08005ee4:
    kfree(puVar6);
    return;
}


// ===== sym.synx_ipc_signal.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x08003748 (size 8) =====

void sym.synx_ipc_signal.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = param_1 + -8;
    iVar1 = ipc_lite_msg_send(6,CONCAT44(*puVar2,*(param_1 + -4)),1);
    if (iVar1 != 0) {
        _printk(0x800120c,*puVar2);
    }
    kfree(puVar2);
    return;
}


// ===== sym.synx_client_cleanup.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt @ 0x08003750 (size 8) =====

void sym.synx_client_cleanup.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int64_t *arg1;
    int *arg1_00;
    int64_t iVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = 0;
    iVar9 = *(param_1 + -8);
    iVar2 = iVar9 + 0x40e8;
    do {
        if (*(iVar2 + iVar11 * 0x28 + 8) != 0) {
            piVar12 = iVar2 + iVar11 * 0x28;
            piVar13 = piVar12 + 2;
            iVar7 = *piVar13;
            while (iVar7 != 0) {
                Hint_Prefetch(piVar13,2,0,1);
                do {
                    iVar7 = *piVar13;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar13,0x10);
                    if (bVar6) {
                        *piVar13 = iVar7 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                arg1 = piVar13;
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    if (*(piVar12 + 0x14) == 0) {
                        uVar4 = *(piVar12 + 3);
                        iVar8 = *piVar12;
                        iVar10 = piVar12[1];
                        *piVar12 = 0;
                        piVar12[1] = 0;
                        piVar12[3] = 0;
                        piVar12[4] = 0;
                        piVar12[2] = 0;
                        puVar3 = iVar8 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
                        Hint_Prefetch(puVar3,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
                            if (bVar6) {
                                *puVar3 = *puVar3 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if ((*(iVar10 + 0x98) != 0) && (*(iVar10 + 0x90) == *(iVar10 + 0x98) + 1)) {
                            sym.release_bound_synxs(iVar10);
                        }
                        arg1 = iVar10 + 0x90;
                        Hint_Prefetch(arg1,2,0,1);
                        do {
                            iVar7 = *arg1;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(arg1,0x10);
                            if (bVar6) {
                                *arg1 = iVar7 + -1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (iVar7 != 1) goto joined_r0x0800ab80;
                        DataMemoryBarrier(2,1);
                        sym.synx_util_destroy_coredata(arg1);
                    }
                }
                else {
joined_r0x0800ab80:
                    if (iVar7 < 1) {
                        refcount_warn_saturate(arg1,3);
                    }
                }
                iVar7 = *piVar13;
            }
            piVar13 = iVar2 + iVar11 * 0x28;
            piVar1 = piVar13 + 0x14;
            iVar7 = *piVar1;
            while (iVar7 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar7 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                        *piVar1 = iVar7 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                arg1_00 = piVar1;
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    if (piVar13[2] == 0) {
                        uVar4 = *(piVar13 + 3);
                        iVar8 = *piVar13;
                        iVar10 = piVar13[1];
                        *piVar13 = 0;
                        piVar13[1] = 0;
                        piVar13[3] = 0;
                        piVar13[4] = 0;
                        piVar13[2] = 0;
                        puVar3 = iVar8 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
                        Hint_Prefetch(puVar3,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
                            if (bVar6) {
                                *puVar3 = *puVar3 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if ((*(iVar10 + 0x98) != 0) && (*(iVar10 + 0x90) == *(iVar10 + 0x98) + 1)) {
                            sym.release_bound_synxs(iVar10);
                        }
                        arg1_00 = iVar10 + 0x90;
                        Hint_Prefetch(arg1_00,2,0,1);
                        do {
                            iVar7 = *arg1_00;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(arg1_00,0x10);
                            if (bVar6) {
                                *arg1_00 = iVar7 + -1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (iVar7 != 1) goto joined_r0x0800ac94;
                        DataMemoryBarrier(2,1);
                        sym.synx_util_destroy_coredata(arg1_00);
                    }
                }
                else {
joined_r0x0800ac94:
                    if (iVar7 < 1) {
                        refcount_warn_saturate(arg1_00,3);
                    }
                }
                iVar7 = *piVar1;
            }
        }
        iVar11 = iVar11 + 1;
        if (iVar11 == 0x100) {
            _printk(0x8002717,*(iVar9 + 0x48),iVar9 + 8,*(iVar9 + 0x48));
            vfree(iVar9);
            kfree(param_1 + -8);
            return;
        }
    } while( true );
}


// ===== sym.synx_util_cb_dispatch.cfi_jt @ 0x08003758 (size 8) =====

void sym.synx_util_cb_dispatch.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t arg1;
    char *pcVar8;
    ulong *in_x18;
    uint32_t *puVar9;
    code *pcVar10;
    char *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = param_1 + -0x10;
    arg1 = sym.synx_get_client(*puVar9);
    if (arg1 == 0) {
        _printk(0x800173f,*puVar9);
        goto code_r0x08009b64;
    }
    uVar3 = *(param_1 + -0xc);
    if ((uVar3 == 0) || (0xff < uVar3)) {
        _printk(0x80023af,*(arg1 + 0x48));
    }
    else {
        iVar2 = arg1 + uVar3 * 0x40;
        pcVar8 = iVar2 + 200;
        if (*pcVar8 == '\0') {
            _printk(0x8002078);
        }
        else {
            pcVar10 = *(iVar2 + 0xe8);
            uVar4 = *(param_1 + -8);
            uVar5 = *(iVar2 + 0xd8);
            pcVar11 = pcVar8;
            if (pcVar10 != sym.synx_util_default_user_callback.cfi_jt) {
                pcVar11 = *(iVar2 + 0xe0);
                if (pcVar8 != NULL) {
                    uVar3 = *(arg1 + uVar3 * 0x40 + 0xcc);
                    *(iVar2 + 0xf8) = 0;
                    *(iVar2 + 0x100) = 0;
                    *(iVar2 + 0xe8) = 0;
                    *(iVar2 + 0xf0) = 0;
                    *(iVar2 + 0xd8) = 0;
                    *(iVar2 + 0xe0) = 0;
                    pcVar8[0] = '\0';
                    pcVar8[1] = '\0';
                    pcVar8[2] = '\0';
                    pcVar8[3] = '\0';
                    pcVar8[4] = '\0';
                    pcVar8[5] = '\0';
                    pcVar8[6] = '\0';
                    pcVar8[7] = '\0';
                    *(iVar2 + 0xd0) = 0;
                    if (uVar3 - 1 < 0xff) {
                        puVar1 = arg1 + (uVar3 >> 3 & 0x1ffffff8) + 0xa8;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar7) {
                                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        goto code_r0x08009b34;
                    }
                    _printk(0x800118d,"synx_util_clear_cb_entry");
                }
                _printk(0x8001653,"",*(arg1 + 0x48));
            }
code_r0x08009b34:
            if (1 < (pcVar10 + -0x8003648 >> 3 | pcVar10 << 0x3d)) {
                __cfi_slowpath_diag(0x93244b09fa50f0b1,pcVar10,0x8000f40);
            }
            (*pcVar10)(uVar5,uVar4,pcVar11);
        }
    }
    sym.synx_put_client(arg1);
code_r0x08009b64:
    kfree(puVar9);
    return;
}


// ===== sym.synx_table_write.bdcf4b4dc9b8f95b2df8e2a6b1e3eb68.cfi_jt @ 0x08003760 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.synx_table_write.bdcf4b4dc9b8f95b2df8e2a6b1e3eb68.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    iStack_70 = iVar2;
    if (iVar2 == 0) {
        param_3 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = sym._copy_from_user_1(iVar2,param_2);
        if (iVar1 == 0) {
            iVar2 = strsep(&iStack_70,obj.delim);
            while (iVar2 != 0) {
                iVar1 = strcmp(iVar2,"bound\n");
                if (iVar1 == 0) {
                    uVar3 = 4;
code_r0x0800b670:
                    _segment.ehdr = _segment.ehdr ^ uVar3;
                }
                else {
                    iVar1 = strcmp(iVar2,"name\n");
                    if (iVar1 == 0) {
                        uVar3 = 1;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"");
                    if (iVar1 == 0) {
                        uVar3 = 2;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"status\n");
                    if (iVar1 == 0) {
                        uVar3 = 8;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"");
                    if (iVar1 == 0) {
                        uVar3 = 0x8000;
                        goto code_r0x0800b670;
                    }
                }
                iVar2 = strsep(&iStack_70,obj.delim);
            }
            kfree(iStack_70);
        }
        else {
            kfree(iVar2);
            param_3 = 0xfffffffffffffff2;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return param_3;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.synx_poll.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt @ 0x08003768 (size 8) =====

int sym.synx_poll.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t arg1;
    ulong *in_x18;
    int iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = sym.synx_get_client(**(param_1 + 0xd8));
    if (arg1 == 0) {
        _printk(0x800263f);
        iVar1 = 0;
    }
    else {
        if (param_2 != NULL) {
            pcVar2 = *param_2;
            if (arg1 + 0x90 != 0 && pcVar2 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x8000f00);
                (*pcVar2)(param_1,arg1 + 0x90,param_2);
            }
        }
        mutex_lock(arg1 + 0x50);
        iVar1 = (arg1 + 0x80 != *(arg1 + 0x80)) << 1;
        mutex_unlock(arg1 + 0x50);
        sym.synx_put_client(arg1);
    }
    return iVar1;
}


// ===== sym.synx_ipc_callback.cfi_jt @ 0x08003770 (size 8) =====

ulong sym.synx_ipc_callback.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    uint *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x38);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        *(puVar2 + 2) = 0xfffffffe0;
        *puVar2 = param_2 >> 0x20;
        puVar2[1] = param_2;
        *(puVar2 + 4) = puVar2 + 4;
        *(puVar2 + 6) = puVar2 + 4;
        iVar1 = _segment.ehdr;
        *(puVar2 + 8) = sym.synx_ipc_signal_handler.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
        queue_work_on(0x20,*(iVar1 + 0x10e8));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.synx_external_callback @ 0x08003778 (size 524) =====

void sym.synx_external_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *arg1_00;
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t arg1_01;
    int64_t arg1_02;
    ulong *in_x18;
    uint64_t arg1_03;
    int64_t iVar4;
    int64_t arg1_04;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_03 = arg1 & 0xffffffff;
    if (arg3 == 0) {
        _printk(0x8002749,arg1_03);
        return;
    }
    arg1_01 = sym.synx_get_client(*arg3);
    if (arg1_01 == 0) {
        _printk(0x8001b6d,arg1_03);
        goto code_r0x08003938;
    }
    arg1_02 = sym.synx_util_acquire_handle(arg1_01,*(arg3 + 4));
    if (((arg1_02 == 0) || (arg1_04 = *(arg1_02 + 8), arg1_04 == 0)) || (*(arg1_04 + 0x40) == 0)) {
        _printk(0x800277c,*(arg1_01 + 0x48),arg1_03,*(arg3 + 4),arg2 & 0xffffffffU);
        iVar4 = sym.synx_util_retrieve_data(arg1_03,0);
        if (iVar4 != 0) {
            _printk(0x80022a9,*(arg1_01 + 0x48),arg1_03,*(arg3 + 4));
            arg1_04 = *(iVar4 + 8);
            if (arg1_04 != 0) goto code_r0x080037dc;
            goto code_r0x0800381c;
        }
        _printk(0x8002094,*(arg1_01 + 0x48),arg1_03,*(arg3 + 4));
    }
    else {
        iVar4 = 0;
code_r0x080037dc:
        mutex_lock(arg1_04 + 0x60);
        iVar3 = sym.synx_signal_fence(arg1_04,arg2,1);
        if (iVar3 == 0) {
            sym.synx_signal_core(arg1_04,arg2 & 0xffffffffU,1,arg1_03);
        }
        else {
            _printk(0x8001a3c,*(arg1_01 + 0x48),*(arg3 + 4),iVar3);
        }
        mutex_unlock(arg1_04 + 0x60);
        if (iVar4 != 0) {
code_r0x0800381c:
            _raw_spin_lock_bh(obj.camera_tbl_lock);
            arg1_00 = iVar4 + 0x10;
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar3 = *arg1_00;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar2) {
                    *arg1_00 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sym.synx_util_destroy_data(arg1_00);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
            _raw_spin_unlock_bh(obj.camera_tbl_lock);
        }
    }
    sym.synx_util_release_handle(arg1_02);
    sym.synx_put_client(arg1_01);
code_r0x08003938:
    kfree(arg3);
    return;
}


// ===== sym.synx_signal_fence @ 0x08003984 (size 508) =====

int sym.synx_signal_fence(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (*(arg1 + 0x40) != 0)) {
        if (arg2 < 2) {
            _printk(0x80027b9,arg2);
        }
        else {
            if ((*(arg1 + 0x94) >> 1 & 1) == 0) {
                iVar4 = sym.synx_util_get_object_status(arg1);
                if (iVar4 != 1) {
                    return -0x72;
                }
                uVar6 = dma_fence_remove_callback(*(arg1 + 0x40),arg1 + 0x48);
                if ((uVar6 & 1) != 0) {
                    uVar7 = _raw_spin_lock_irqsave(**(arg1 + 0x40));
                    iVar4 = sym.synx_util_get_object_status_locked(arg1);
                    if (iVar4 != 1) {
                        _raw_spin_unlock_irqrestore(**(arg1 + 0x40),uVar7);
                        return -0x72;
                    }
                    if (arg2 != 2) {
                        if ((*(*(arg1 + 0x40) + 0x30) & 1) != 0) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8003b74);
                            (*pcVar3)();
                        }
                        if (-arg2 < 0xfffff000 || arg2 == 0x1000) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8003b80);
                            (*pcVar3)();
                        }
                        *(*(arg1 + 0x40) + 0x3c) = -arg2;
                    }
                    iVar4 = dma_fence_signal_locked(*(arg1 + 0x40));
                    if (iVar4 == 0) {
                        uVar2 = *(arg1 + 0x94);
                    }
                    else {
                        _printk(0x80024ef,iVar4);
                        uVar2 = *(arg1 + 0x94);
                    }
                    if (((uVar2 & 1) != 0) && ((arg3 & 1U) != 0)) {
                        iVar1 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar1 = 0x30;
                        }
                        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x38);
                        if (puVar8 == NULL) {
                            iVar4 = -0xc;
                        }
                        else {
                            *puVar8 = *(arg1 + 0x170);
                            uVar5 = sym.synx_util_get_object_status_locked(arg1);
                            *(puVar8 + 2) = 0xfffffffe0;
                            puVar8[1] = uVar5;
                            *(puVar8 + 4) = puVar8 + 4;
                            *(puVar8 + 6) = puVar8 + 4;
                            iVar1 = _segment.ehdr;
                            *(puVar8 + 8) = sym.synx_ipc_signal.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
                            queue_work_on(0x20,*(iVar1 + 0x10e8),puVar8 + 2);
                            iVar4 = 0;
                        }
                    }
                    _raw_spin_unlock_irqrestore(**(arg1 + 0x40),uVar7);
                    return iVar4;
                }
                uVar7 = 0x800281f;
            }
            else {
                uVar7 = 0x800177d;
            }
            _printk(uVar7);
        }
    }
    return -0x16;
}


// ===== sym.synx_signal_core @ 0x08003b84 (size 1072) =====

void sym.synx_signal_core(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    int *piVar9;
    ulong *puVar10;
    int extraout_w11;
    ulong uVar11;
    ulong *in_x18;
    ulong *unaff_x19;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    uint32_t *unaff_x22;
    code *unaff_x25;
    code *unaff_x26;
    code *unaff_x27;
    code *pcVar12;
    uint64_t unaff_x28;
    uint64_t uVar13;
    ulong unaff_x30;
    uint uStack_134;
    ulong uStack_130;
    ulong uStack_128;
    uint64_t auStack_120 [24];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    auStack_120[0x16] = *(iVar7 + 0x5e0);
    if (arg1 == 0) {
        uVar8 = 0xffffffea;
        goto code_r0x08003f40;
    }
    unaff_x20 = arg4 & 0xffffffff;
    unaff_x21 = arg3 & 0xffffffff;
    unaff_x19 = arg2 & 0xffffffff;
    sym.synx_util_callback_dispatch(arg1,arg2);
    unaff_x26 = *(arg1 + 0x98);
    if (*(arg1 + 0x98) == 0) goto code_r0x08003f34;
    uStack_134 = arg2;
    unaff_x27 = NULL;
    unaff_x28 = 0;
    unaff_x25 = obj.camera_tbl_lock;
    unaff_x22 = arg1 + 0xa0;
    unaff_x19 = &uStack_130;
    auStack_120[0x14] = 0;
    auStack_120[0x15] = 0;
    auStack_120[0x12] = 0;
    auStack_120[0x13] = 0;
    auStack_120[0x10] = 0;
    auStack_120[0x11] = 0;
    auStack_120[0xe] = 0;
    auStack_120[0xf] = 0;
    auStack_120[0xc] = 0;
    auStack_120[0xd] = 0;
    auStack_120[10] = 0;
    auStack_120[0xb] = 0;
    auStack_120[8] = 0;
    auStack_120[9] = 0;
    auStack_120[6] = 0;
    auStack_120[7] = 0;
    auStack_120[4] = 0;
    auStack_120[5] = 0;
    auStack_120[2] = 0;
    auStack_120[3] = 0;
    auStack_120[0] = 0;
    auStack_120[1] = 0;
    *(arg1 + 0x98) = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    do {
        if ((unaff_x21 & 1) == 0) {
code_r0x08003cd4:
            if ((8 < unaff_x28) || (0x8 < unaff_x27)) goto code_r0x08003f7c;
            uVar8 = *(unaff_x22 + 2);
            puVar10 = unaff_x19 + (unaff_x28 & 0xffffffff) * 3;
            unaff_x28 = unaff_x28 + 1;
            uVar11 = *(unaff_x22 + 4);
            unaff_x22[0] = 0;
            unaff_x22[1] = 0;
            unaff_x22[2] = 0;
            unaff_x22[3] = 0;
            unaff_x22[4] = 0;
            unaff_x22[5] = 0;
            *puVar10 = *unaff_x22;
            puVar10[1] = uVar8;
            puVar10[2] = uVar11;
        }
        else {
            if (0x7 < unaff_x27) {
code_r0x08003f7c:
    //WARNING: Does not return
                pcVar12 = SoftwareBreakpoint(0x5512,0x8003f80);
                (*pcVar12)();
            }
            if (unaff_x22[2] != unaff_x20) goto code_r0x08003cd4;
            uVar1 = *unaff_x22;
            unaff_x22[2] = 0;
            unaff_x22[3] = 0;
            unaff_x22[4] = 0;
            unaff_x22[5] = 0;
            unaff_x22[0] = 0;
            unaff_x22[1] = 0;
            iVar7 = sym.synx_util_release_data(unaff_x20 & 0xffffffff,uVar1);
            if ((uVar1 == 0) && (iVar7 != 0)) {
                _raw_spin_lock_bh(unaff_x25);
                piVar9 = iVar7 + 0x10;
                iVar6 = 1;
                goto code_r0x08003f84;
            }
            _printk(0x8002566,unaff_x20 & 0xffffffff);
        }
        while( true ) {
            unaff_x27 = unaff_x27 + 1;
            unaff_x22 = unaff_x22 + 6;
            if (unaff_x26 != unaff_x27) break;
            if (unaff_x28 != 0) {
                unaff_x25 = NULL;
                unaff_x22 = (unaff_x28 & 0xffffffff) * 0x18;
                unaff_x19 = 0x8001482;
                unaff_x21 = 0;
                uVar13 = unaff_x28;
                do {
                    if (unaff_x25 == 0xc0) goto code_r0x08003f7c;
                    uVar1 = *(&uStack_130 + unaff_x25);
                    unaff_x20 = uVar1;
                    uVar2 = *(unaff_x25 + &uStack_128);
                    unaff_x26 = *(auStack_120 + unaff_x25);
                    unaff_x28 = sym.synx_util_get_bind_ops(unaff_x20);
                    if (unaff_x28 == 0) {
                        _printk(0x8001482,unaff_x20);
code_r0x08003ebc:
                        kfree(unaff_x26);
                        unaff_x28 = uVar13;
                    }
                    else {
                        iVar7 = sym.synx_util_release_data(uVar2,uVar1);
                        if ((uVar1 == 0) && (iVar7 != 0)) {
                            _raw_spin_lock_bh(obj.camera_tbl_lock);
                            piVar9 = iVar7 + 0x10;
                            Hint_Prefetch(piVar9,2,0,1);
                            do {
                                iVar6 = *piVar9;
                                cVar4 = '\x01';
                                bVar5 = ExclusiveMonitorPass(piVar9,0x10);
                                if (bVar5) {
                                    *piVar9 = iVar6 + -1;
                                    cVar4 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar4 != '\0');
                            if (iVar6 == 1) {
                                DataMemoryBarrier(2,1);
                                sym.synx_util_destroy_data(piVar9);
                            }
                            else if (iVar6 < 1) {
                                refcount_warn_saturate(piVar9,3);
                            }
                            _raw_spin_unlock_bh(obj.camera_tbl_lock);
                        }
                        else {
                            _printk(0x800258f,uVar2);
                        }
                        unaff_x27 = *(unaff_x28 + 8);
                        __cfi_slowpath_diag(0x25e6cdd8542e5912,unaff_x27,0x8000e60);
                        iVar6 = (*unaff_x27)(sym.__typeid__ZTSFviiPvE_global_addr,unaff_x26,uVar2);
                        if (-1 < iVar6) {
                            pcVar12 = *(unaff_x28 + 0x10);
                            if (pcVar12 != NULL) {
                                __cfi_slowpath_diag(0x47ce015a85343a42,pcVar12,0x8000e80);
                                iVar6 = (*pcVar12)(uVar2);
                                if (iVar6 < 0) {
                                    _printk(0x800243d,uVar2,unaff_x20,iVar6);
                                }
                            }
                            unaff_x27 = *(unaff_x28 + 0x18);
                            __cfi_slowpath_diag(0xad7ab2b11359dfa1,unaff_x27,0x8000ea0);
                            iVar6 = (*unaff_x27)(uVar2,uStack_134);
                            uVar13 = unaff_x28;
                            if (iVar6 < 0) {
                                _printk(0x80024be,uVar2,unaff_x20,iVar6);
                            }
                            goto code_r0x08003ebc;
                        }
                        _printk(0x80016b0,uVar2,unaff_x20,iVar6);
                    }
                    unaff_x25 = unaff_x25 + 0x18;
                    uVar13 = unaff_x28;
                } while (unaff_x22 - unaff_x25 != 0);
            }
code_r0x08003f34:
            uVar8 = 0;
code_r0x08003f40:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == auStack_120[0x16]) {
                return;
            }
            piVar9 = __stack_chk_fail(uVar8);
            iVar6 = extraout_w11;
code_r0x08003f84:
            Hint_Prefetch(piVar9,2,0,1);
            do {
                iVar3 = *piVar9;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar9,0x10);
                if (bVar5) {
                    *piVar9 = iVar3 - iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sym.synx_util_destroy_data(piVar9);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(piVar9,3);
            }
            _raw_spin_unlock_bh(unaff_x25);
        }
    } while( true );
}


// ===== sym.kref_put @ 0x08003fb4 (size 224) =====

//WARNING: Removing unreachable block (ram,0x08004010)

void sym.kref_put(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    Hint_Prefetch(arg1,2,0,1);
    do {
        iVar1 = *arg1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar3) {
            *arg1 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.__typeid__ZTSFvP4krefE_global_addr(arg1);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1,3);
    }
    return;
}


// ===== sym.synx_fence_enable_signaling @ 0x08004094 (size 16) =====

ulong sym.synx_fence_enable_signaling(void)

{
    return 1;
}


// ===== sym.synx_fence_driver_name @ 0x080040a4 (size 20) =====

char * sym.synx_fence_driver_name(void)

{
    return "";
}


// ===== sym.synx_fence_release @ 0x080040b8 (size 60) =====

void sym.synx_fence_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*arg1);
    kfree(arg1);
    return;
}


// ===== sym.synx_get_fence @ 0x080040f4 (size 292) =====

int64_t sym.synx_get_fence(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        return 0;
    }
    arg1_01 = sym.synx_util_acquire_handle(arg1_00,arg2 & 0xffffffffU);
    if (((arg1_01 == 0) || (iVar7 = *(arg1_01 + 8), iVar7 == 0)) || (*(iVar7 + 0x40) == 0)) {
        _printk(0x8001101,"synx_get_fence",*(arg1_00 + 0x48),arg2 & 0xffffffffU);
        iVar6 = 0;
        goto code_r0x08004184;
    }
    mutex_lock(iVar7 + 0x60);
    iVar6 = *(iVar7 + 0x40);
    if (iVar6 != 0) {
        puVar1 = iVar6 + 0x38;
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
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0800417c;
            uVar5 = 1;
        }
        refcount_warn_saturate(puVar1,uVar5);
    }
code_r0x0800417c:
    mutex_unlock(iVar7 + 0x60);
code_r0x08004184:
    sym.synx_util_release_handle(arg1_01);
    sym.synx_put_client(arg1_00);
    return iVar6;
}


// ===== sym.synx_create @ 0x08004218 (size 348) =====

int * sym.synx_create(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg1_00;
    int *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    if ((arg2 == 0) || (*arg2 == 0)) {
        _printk(0x8001c64);
    }
    else {
        iVar5 = sym.synx_get_client(arg1 & 0xffffffff);
        if (iVar5 != 0) {
            arg1_00 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x178);
            if (arg1_00 == 0) {
                uVar4 = 0xfffffff4;
            }
            else {
                uVar4 = sym.synx_util_init_coredata(arg1_00,arg2,0x8000e10);
                if (uVar4 == 0) {
                    uVar4 = sym.synx_util_init_handle(iVar5,arg1_00,&uStack_40);
                    if (-1 < uVar4) {
                        **arg2 = uStack_40;
                        sym.synx_put_client(iVar5);
                        uVar4 = 0;
                        goto code_r0x080042e8;
                    }
                    _printk(0x8001d96,*(iVar5 + 0x48));
                    if ((*(arg1_00 + 0x94) >> 2 & 1) == 0) {
                        dma_fence_remove_callback(*(arg1_00 + 0x40),arg1_00 + 0x48);
                        sym.dma_fence_put(*(arg1_00 + 0x40));
                    }
                }
                else {
                    _printk(0x80027ef,*(iVar5 + 0x48));
                }
                kfree(arg1_00);
            }
            sym.synx_put_client(iVar5);
            goto code_r0x080042e8;
        }
    }
    uVar4 = 0xffffffea;
code_r0x080042e8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.dma_fence_put;
    if (piVar6 != NULL) {
        piVar6 = piVar6 + 0xe;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            piVar6 = dma_fence_release();
        }
        else if (iVar1 < 1) {
            piVar6 = refcount_warn_saturate(piVar6,3);
        }
    }
    return piVar6;
}


// ===== sym.dma_fence_put @ 0x08004374 (size 144) =====

void sym.dma_fence_put(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
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
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.dma_fence_put_1 @ 0x08004404 (size 144) =====

void sym.dma_fence_put_1(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
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
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.synx_fence_callback @ 0x08004494 (size 184) =====

void sym.synx_fence_callback(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x4c) & 1) != 0) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x38);
        if (puVar3 != NULL) {
            *puVar3 = *(arg1 + 0x128);
            uVar2 = sym.synx_util_get_object_status_locked(arg1 + -0x48);
            *(puVar3 + 2) = 0xfffffffe0;
            puVar3[1] = uVar2;
            *(puVar3 + 4) = puVar3 + 4;
            *(puVar3 + 6) = puVar3 + 4;
            iVar1 = _segment.ehdr;
            *(puVar3 + 8) = sym.synx_ipc_signal.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
            queue_work_on(0x20,*(iVar1 + 0x10e8),puVar3 + 2);
        }
    }
    return;
}


// ===== sym.synx_signal @ 0x0800454c (size 300) =====

int sym.synx_signal(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong *in_x18;
    uint64_t arg2_00;
    int64_t arg1_02;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        return -0x16;
    }
    arg1_01 = sym.synx_util_acquire_handle(arg1_00,arg2_00);
    if (((arg1_01 == 0) || (arg1_02 = *(arg1_01 + 8), arg1_02 == 0)) || (*(arg1_02 + 0x40) == 0)) {
        _printk(0x8001101,"",*(arg1_00 + 0x48),arg2_00);
        iVar2 = -0x16;
    }
    else {
        iVar1 = arg1_02 + 0x60;
        mutex_lock(iVar1);
        iVar2 = sym.synx_signal_fence(arg1_02,arg3,1);
        if (iVar2 == 0) {
            iVar3 = sym.synx_signal_core(arg1_02,arg3 & 0xffffffff,0,0);
            mutex_unlock(iVar1);
            if (iVar3 == 0) goto code_r0x080045ec;
        }
        else {
            mutex_unlock(iVar1);
            iVar3 = iVar2;
        }
        _printk(0x8001a3c,*(arg1_00 + 0x48),arg2_00,iVar3);
        iVar2 = iVar3;
    }
code_r0x080045ec:
    sym.synx_util_release_handle(arg1_01);
    sym.synx_put_client(arg1_00);
    return iVar2;
}


// ===== sym.synx_register_callback @ 0x08004678 (size 536) =====

int sym.synx_register_callback(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint *puVar8;
    ulong *arg3_00;
    uint64_t uVar9;
    int64_t in_x4;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uVar11 = arg2 & 0xffffffff;
    uStack_6c = 0;
    iStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    iStack_88 = 0;
    arg3_00 = arg3;
    uVar9 = arg4;
    iVar6 = sym.synx_get_client(arg1 & 0xffffffff);
    if (iVar6 == 0) {
        iVar5 = -0x16;
    }
    else {
        iVar7 = sym.synx_util_acquire_handle(iVar6,uVar11);
        if ((iVar7 == 0) || (iVar13 = *(iVar7 + 8), iVar13 == 0)) {
            arg3_00 = *(iVar6 + 0x48);
            _printk(0x8001101,"synx_register_callback");
            iVar5 = -0x16;
        }
        else {
            mutex_lock(iVar13 + 0x60);
            if ((*(iVar13 + 0x94) & 6) == 0) {
                arg3_00 = 0x50;
                puVar8 = kmem_cache_alloc_trace(_dma_fence_release,0xb20);
                if (puVar8 == NULL) {
                    iVar5 = -0xc;
                }
                else {
                    arg3_00 = &uStack_6c;
                    uStack_90 = CONCAT44(uStack_90._4_4_,arg2);
                    iStack_88 = arg4;
                    iStack_80 = arg3;
                    iVar5 = sym.synx_util_alloc_cb_entry(iVar6,&uStack_90,arg3_00);
                    if (iVar5 == 0) {
                        iVar5 = sym.synx_util_get_object_status(iVar13);
                        *puVar8 = arg1;
                        puVar8[1] = uStack_6c;
                        arg3_00 = puVar8 + 4;
                        *arg3_00 = 0xfffffffe0;
                        *(puVar8 + 6) = puVar8 + 6;
                        *(puVar8 + 8) = puVar8 + 6;
                        *(puVar8 + 10) = sym.synx_util_cb_dispatch.cfi_jt;
                        if (iVar5 == 1) {
                            piVar15 = iVar13 + 0x160;
                            puVar14 = *(iVar13 + 0x160);
                            puVar1 = puVar8 + 0x10;
                            arg3_00 = puVar14;
                            uVar11 = __list_add_valid(puVar1,piVar15);
                            if ((uVar11 & 1) != 0) {
                                iVar5 = 0;
                                puVar14[1] = puVar1;
                                *(puVar8 + 0x10) = puVar14;
                                *(puVar8 + 0x12) = piVar15;
                                *piVar15 = puVar1;
                                goto code_r0x080047dc;
                            }
                        }
                        else {
                            puVar8[2] = iVar5;
                            queue_work_on(0x20,*(_segment.ehdr + 0x10e8));
                        }
                        iVar5 = 0;
                    }
                    else {
                        _printk(0x80026e9,*(iVar6 + 0x48));
                        kfree(puVar8);
                    }
                }
            }
            else {
                _printk(0x800284b);
                iVar5 = -0x16;
            }
code_r0x080047dc:
            mutex_unlock(iVar13 + 0x60);
            uVar11 = uVar9;
        }
        sym.synx_util_release_handle(iVar7);
        sym.synx_put_client(iVar6);
        uVar9 = uVar11;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.synx_deregister_callback;
    uVar11 = auVar16._8_8_ & 0xffffffff;
    iVar6 = sym.synx_get_client(auVar16._0_8_ & 0xffffffff);
    if (iVar6 == 0) {
        return -0x16;
    }
    iVar7 = sym.synx_util_acquire_handle(iVar6,uVar11);
    if ((iVar7 == 0) || (iVar13 = *(iVar7 + 8), iVar13 == 0)) {
        _printk(0x8001101,"",*(iVar6 + 0x48),uVar11);
        iVar5 = -0x16;
        goto code_r0x08004ad0;
    }
    mutex_lock(iVar13 + 0x60);
    if ((*(iVar13 + 0x94) & 6) == 0) {
        iVar5 = sym.synx_util_get_object_status(iVar13);
        if (iVar5 == 1) {
            if (iVar13 + 0x160 != *(iVar13 + 0x160)) {
                bVar4 = false;
                piVar15 = *(iVar13 + 0x160);
                do {
                    piVar12 = *piVar15;
                    if (piVar15[-8] == *(iVar6 + 0x48)) {
                        uVar3 = *(piVar15 + -0x3c);
                        uVar11 = uVar3;
                        if ((uVar3 == 0) || (0xff < uVar3)) {
                            _printk(0x8001f4b,auVar16._0_8_ & 0xffffffff);
                        }
                        else {
                            iVar2 = iVar6 + uVar11 * 0x40;
                            if (((iVar2 != -0xd8) && (piVar10 = iVar2 + 0xe8, *piVar10 == arg3_00)) &&
                               (*(iVar6 + uVar11 * 0x40 + 0xe0) == uVar9)) {
                                if (in_x4 == 0) {
                                    iVar5 = sym.synx_util_clear_cb_entry(iVar6,iVar6 + uVar11 * 0x40 + 200);
                                    if (iVar5 != 0) {
                                        _printk(0x800139e,"",*(iVar6 + 0x48),auVar16._8_4_);
                                    }
                                    uVar11 = __list_del_entry_valid(piVar15);
                                    if ((uVar11 & 1) != 0) {
                                        iVar2 = *piVar15;
                                        piVar10 = piVar15[1];
                                        *(iVar2 + 8) = piVar10;
                                        *piVar10 = iVar2;
                                    }
                                    *piVar15 = piVar15;
                                    piVar15[1] = piVar15;
                                    kfree(piVar15 + -8);
                                }
                                else {
                                    *piVar10 = in_x4;
                                    uVar11 = __list_del_entry_valid(piVar15);
                                    if ((uVar11 & 1) != 0) {
                                        iVar2 = *piVar15;
                                        piVar10 = piVar15[1];
                                        *(iVar2 + 8) = piVar10;
                                        *piVar10 = iVar2;
                                    }
                                    *piVar15 = piVar15;
                                    piVar15[1] = piVar15;
                                    *(piVar15 + -7) = 4;
                                    queue_work_on(0x20,*(_segment.ehdr + 0x10e8),piVar15 + -6);
                                }
                                bVar4 = true;
                            }
                        }
                    }
                    piVar15 = piVar12;
                } while (iVar13 + 0x160 != piVar12);
                iVar5 = 0;
                if (!bVar4) {
                    iVar5 = -0x16;
                }
                goto code_r0x08004ac8;
            }
        }
        else {
            _printk(0x8001976,uVar11);
        }
        iVar5 = -0x16;
    }
    else {
        _printk(0x8001e63);
        iVar5 = 0;
    }
code_r0x08004ac8:
    mutex_unlock(iVar13 + 0x60);
code_r0x08004ad0:
    sym.synx_util_release_handle(iVar7);
    sym.synx_put_client(iVar6);
    return iVar5;
}


// ===== sym.synx_deregister_callback @ 0x08004890 (size 636) =====

uint sym.synx_deregister_callback(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t in_x4;
    uint uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t arg1_02;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2 & 0xffffffff;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        return 0xffffffea;
    }
    arg1_01 = sym.synx_util_acquire_handle(arg1_00,uVar7);
    if ((arg1_01 == 0) || (arg1_02 = *(arg1_01 + 8), arg1_02 == 0)) {
        _printk(0x8001101,"",*(arg1_00 + 0x48),uVar7);
        uVar5 = 0xffffffea;
        goto code_r0x08004ad0;
    }
    mutex_lock(arg1_02 + 0x60);
    if ((*(arg1_02 + 0x94) & 6) == 0) {
        iVar4 = sym.synx_util_get_object_status(arg1_02);
        if (iVar4 == 1) {
            if (arg1_02 + 0x160 != *(arg1_02 + 0x160)) {
                bVar3 = false;
                piVar9 = *(arg1_02 + 0x160);
                do {
                    piVar8 = *piVar9;
                    if (piVar9[-8] == *(arg1_00 + 0x48)) {
                        uVar2 = *(piVar9 + -0x3c);
                        uVar7 = uVar2;
                        if ((uVar2 == 0) || (0xff < uVar2)) {
                            _printk(0x8001f4b,arg1 & 0xffffffff);
                        }
                        else {
                            iVar1 = arg1_00 + uVar7 * 0x40;
                            if (((iVar1 != -0xd8) && (piVar6 = iVar1 + 0xe8, *piVar6 == arg3)) &&
                               (*(arg1_00 + uVar7 * 0x40 + 0xe0) == arg4)) {
                                if (in_x4 == 0) {
                                    iVar4 = sym.synx_util_clear_cb_entry(arg1_00,arg1_00 + uVar7 * 0x40 + 200);
                                    if (iVar4 != 0) {
                                        _printk(0x800139e,"",*(arg1_00 + 0x48),arg2);
                                    }
                                    uVar7 = __list_del_entry_valid(piVar9);
                                    if ((uVar7 & 1) != 0) {
                                        iVar1 = *piVar9;
                                        piVar6 = piVar9[1];
                                        *(iVar1 + 8) = piVar6;
                                        *piVar6 = iVar1;
                                    }
                                    *piVar9 = piVar9;
                                    piVar9[1] = piVar9;
                                    kfree(piVar9 + -8);
                                }
                                else {
                                    *piVar6 = in_x4;
                                    uVar7 = __list_del_entry_valid(piVar9);
                                    if ((uVar7 & 1) != 0) {
                                        iVar1 = *piVar9;
                                        piVar6 = piVar9[1];
                                        *(iVar1 + 8) = piVar6;
                                        *piVar6 = iVar1;
                                    }
                                    *piVar9 = piVar9;
                                    piVar9[1] = piVar9;
                                    *(piVar9 + -7) = 4;
                                    queue_work_on(0x20,*(_segment.ehdr + 0x10e8),piVar9 + -6);
                                }
                                bVar3 = true;
                            }
                        }
                    }
                    piVar9 = piVar8;
                } while (arg1_02 + 0x160 != piVar8);
                uVar5 = 0;
                if (!bVar3) {
                    uVar5 = 0xffffffea;
                }
                goto code_r0x08004ac8;
            }
        }
        else {
            _printk(0x8001976,uVar7);
        }
        uVar5 = 0xffffffea;
    }
    else {
        _printk(0x8001e63);
        uVar5 = 0;
    }
code_r0x08004ac8:
    mutex_unlock(arg1_02 + 0x60);
code_r0x08004ad0:
    sym.synx_util_release_handle(arg1_01);
    sym.synx_put_client(arg1_00);
    return uVar5;
}


// ===== sym.synx_merge @ 0x08004b0c (size 544) =====

int sym.synx_merge(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    int64_t arg1_00;
    int64_t iVar6;
    int *piVar7;
    uint32_t arg3_00;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x23;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_60;
    uint32_t uStack_54;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    arg3_00 = arg3;
    iVar6 = unaff_x23;
    if ((arg2 == 0) || (arg4 == 0)) {
        _printk(0x80017a3,"");
        iVar5 = -0x16;
        arg1_00 = unaff_x20;
        goto code_r0x08004c10;
    }
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        iVar5 = -0x16;
        arg1_00 = unaff_x20;
        unaff_x21 = arg2;
        goto code_r0x08004c10;
    }
    iVar5 = sym.synx_util_validate_merge(arg1_00,arg2,arg3_00,&uStack_60);
    if (-1 < iVar5) {
        iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x178);
        if (iVar6 == 0) {
            iVar5 = -0xc;
            iVar6 = unaff_x23;
            goto code_r0x08004be0;
        }
        iVar5 = sym.synx_util_init_group_coredata(iVar6,noname_1,uStack_54);
        if (iVar5 == 0) {
            iVar5 = sym.synx_util_init_handle(arg1_00,iVar6,&uStack_50);
            if (iVar5 == 0) {
                *arg4 = uStack_50;
                while( true ) {
                    sym.synx_put_client(arg1_00);
                    unaff_x21 = arg2;
code_r0x08004c10:
                    iVar4 = sp_el0;
                    if (*(iVar4 + 0x5e0) == iStack_48) break;
                    piVar7 = __stack_chk_fail();
                    arg2 = unaff_x21;
code_r0x08004ce4:
                    Hint_Prefetch(piVar7,2,0,1);
                    do {
                        iVar1 = *piVar7;
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
                        if (bVar3) {
                            *piVar7 = iVar1 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (iVar1 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release();
                    }
                    else if (iVar1 < 1) {
                        refcount_warn_saturate(piVar7,3);
                    }
code_r0x08004cfc:
                    kfree(iVar6);
code_r0x08004be0:
                    sym.synx_util_merge_error(arg1_00,arg2,uStack_54);
                    if ((arg3_00 != 0) && (arg3_00 <= uStack_54)) {
                        kfree(uStack_60);
                    }
                }
                return iVar5;
            }
            _printk(0x8001e9c,*(arg1_00 + 0x48),uStack_50);
            if (*(iVar6 + 0x40) == 0) goto code_r0x08004cfc;
            piVar7 = *(iVar6 + 0x40) + 0x38;
            goto code_r0x08004ce4;
        }
        _printk(0x8002197,*(arg1_00 + 0x48));
        goto code_r0x08004cfc;
    }
    _printk(0x80016e6,*(arg1_00 + 0x48));
    iVar5 = -0x16;
    goto code_r0x08004be0;
}


// ===== sym.synx_release @ 0x08004d2c (size 404) =====

ulong sym.synx_release(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    int *arg1_00;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t arg1_01;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_01 == 0) {
        return 0xffffffea;
    }
    uVar8 = arg2 & 0xff;
    iVar1 = arg1_01 + uVar8 * 0x30 + 0x68e8;
    mutex_lock(iVar1);
    if (*(arg1_01 + uVar8 * 0x28 + 0x40f0) == 0) {
        uVar7 = *(arg1_01 + 0x48);
        uVar6 = 0x80025b5;
    }
    else if (*(arg1_01 + uVar8 * 0x28 + 0x4100) == arg2) {
        piVar2 = arg1_01 + uVar8 * 0x28 + 0x4108;
        if (*piVar2 == 0) {
            uVar7 = *(arg1_01 + 0x48);
            uVar6 = 0x80025e2;
        }
        else {
            arg1_00 = arg1_01 + uVar8 * 0x28 + 0x40f8;
            if (*arg1_00 != 0) {
                *piVar2 = *piVar2 + -1;
                Hint_Prefetch(arg1_00,2,0,1);
                do {
                    iVar3 = *arg1_00;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(arg1_00,0x10);
                    if (bVar5) {
                        *arg1_00 = iVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.synx_util_destroy_internal_handle(arg1_00);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(arg1_00,3);
                }
                goto code_r0x08004e6c;
            }
            uVar7 = *(arg1_01 + 0x48);
            uVar6 = 0x8001dd0;
        }
    }
    else {
        uVar7 = *(arg1_01 + 0x48);
        uVar6 = 0x8001ed0;
    }
    _printk(uVar6,uVar7,arg2 & 0xffffffff);
code_r0x08004e6c:
    mutex_unlock(iVar1);
    sym.synx_put_client(arg1_01);
    return 0;
}


// ===== sym.synx_wait @ 0x08004ec0 (size 272) =====

int sym.synx_wait(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar2;
    ulong *in_x18;
    int iVar3;
    uint64_t arg2_00;
    int64_t arg1_02;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        iVar3 = -0x16;
    }
    else {
        arg1_01 = sym.synx_util_acquire_handle(arg1_00,arg2_00);
        if (((arg1_01 == 0) || (arg1_02 = *(arg1_01 + 8), arg1_02 == 0)) || (iVar4 = *(arg1_02 + 0x40), iVar4 == 0)) {
            _printk(0x8001101,"synx_wait",*(arg1_00 + 0x48),arg2_00);
            iVar3 = -0x16;
        }
        else {
            uVar2 = __msecs_to_jiffies(arg3 & 0xffffffff);
            iVar4 = dma_fence_wait_timeout(iVar4,0,uVar2);
            if (iVar4 == 0) {
                _printk(0x80014a9,*(arg1_00 + 0x48),arg2_00);
                iVar3 = -0x6e;
            }
            else {
                mutex_lock(arg1_02 + 0x60);
                iVar1 = sym.synx_util_get_object_status(arg1_02);
                mutex_unlock(arg1_02 + 0x60);
                iVar3 = 0;
                if (iVar1 != 2) {
                    iVar3 = iVar1;
                }
            }
        }
        sym.synx_util_release_handle(arg1_01);
        sym.synx_put_client(arg1_00);
    }
    return iVar3;
}


// ===== sym.synx_bind @ 0x08004fd0 (size 1032) =====

//WARNING: Removing unreachable block (ram,0x08005048)
//WARNING: Removing unreachable block (ram,0x08005050)
//WARNING: Removing unreachable block (ram,0x08005270)
//WARNING: Removing unreachable block (ram,0x0800505c)
//WARNING: Removing unreachable block (ram,0x0800528c)
//WARNING: Removing unreachable block (ram,0x08005078)
//WARNING: Removing unreachable block (ram,0x08005094)
//WARNING: Removing unreachable block (ram,0x08005214)
//WARNING: Removing unreachable block (ram,0x080050ac)
//WARNING: Removing unreachable block (ram,0x08005318)
//WARNING: Removing unreachable block (ram,0x080050c0)
//WARNING: Removing unreachable block (ram,0x08005334)
//WARNING: Removing unreachable block (ram,0x080050cc)
//WARNING: Removing unreachable block (ram,0x080050d0)
//WARNING: Removing unreachable block (ram,0x080050dc)
//WARNING: Removing unreachable block (ram,0x080050e4)
//WARNING: Removing unreachable block (ram,0x080050f0)
//WARNING: Removing unreachable block (ram,0x080050f8)
//WARNING: Removing unreachable block (ram,0x08005104)
//WARNING: Removing unreachable block (ram,0x0800510c)
//WARNING: Removing unreachable block (ram,0x08005118)
//WARNING: Removing unreachable block (ram,0x08005120)
//WARNING: Removing unreachable block (ram,0x0800512c)
//WARNING: Removing unreachable block (ram,0x08005134)
//WARNING: Removing unreachable block (ram,0x08005140)
//WARNING: Removing unreachable block (ram,0x08005148)
//WARNING: Removing unreachable block (ram,0x08005154)
//WARNING: Removing unreachable block (ram,0x08005164)
//WARNING: Removing unreachable block (ram,0x08005178)
//WARNING: Removing unreachable block (ram,0x0800521c)
//WARNING: Removing unreachable block (ram,0x0800525c)
//WARNING: Removing unreachable block (ram,0x08005350)
//WARNING: Removing unreachable block (ram,0x0800538c)
//WARNING: Removing unreachable block (ram,0x08005378)
//WARNING: Removing unreachable block (ram,0x080051b8)
//WARNING: Removing unreachable block (ram,0x080051cc)
//WARNING: Removing unreachable block (ram,0x080051d4)
//WARNING: Removing unreachable block (ram,0x080052fc)
//WARNING: Removing unreachable block (ram,0x080051dc)
//WARNING: Removing unreachable block (ram,0x080052a4)

int sym.synx_bind(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar3 = sym.synx_get_client(arg1 & 0xffffffff);
    if (iVar3 == 0) {
        iVar2 = -0x16;
    }
    else {
        iVar2 = sym.synx_util_update_handle(iVar3,arg2 & 0xffffffffU,arg4 & 0xffffffff,arg3 & 0xffffffff);
        if (iVar2 != 0) {
            _printk(0x8001101,"synx_bind",*(iVar3 + 0x48),arg2 & 0xffffffffU);
        }
        sym.synx_util_release_handle(0);
        sym.synx_put_client(iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iVar4) {
        __stack_chk_fail();
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80053d8);
        (*pcVar1)();
    }
    return iVar2;
}


// ===== sym.synx_get_status @ 0x080053d8 (size 204) =====

uint sym.synx_get_status(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong *in_x18;
    int64_t arg1_02;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        arg1_01 = sym.synx_util_acquire_handle(arg1_00,arg2 & 0xffffffffU);
        if (((arg1_01 == 0) || (arg1_02 = *(arg1_01 + 8), arg1_02 == 0)) || (*(arg1_02 + 0x40) == 0)) {
            _printk(0x8001101,"",*(arg1_00 + 0x48),arg2 & 0xffffffffU);
            uVar1 = 0;
        }
        else {
            mutex_lock(arg1_02 + 0x60);
            uVar1 = sym.synx_util_get_object_status(arg1_02);
            mutex_unlock(arg1_02 + 0x60);
        }
        sym.synx_util_release_handle(arg1_01);
        sym.synx_put_client(arg1_00);
    }
    return uVar1;
}


// ===== sym.synx_addrefcount @ 0x080054a4 (size 380) =====

uint sym.synx_addrefcount(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint32_t uVar6;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    uint64_t uVar9;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg3 & 0xffffffff;
    arg2_00 = arg2 & 0xffffffff;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        arg1_01 = sym.synx_util_acquire_handle(arg1_00,arg2_00);
        if (((arg1_01 == 0) || (*(arg1_01 + 8) == 0)) || (*(*(arg1_01 + 8) + 0x40) == 0)) {
            _printk(0x8001101,"",*(arg1_00 + 0x48),arg2_00);
            uVar8 = 0xffffffea;
        }
        else if (arg3 < 0x801) {
            iVar2 = arg1_00 + (arg2 & 0xff) * 0x30 + 0x68e8;
            mutex_lock(iVar2);
            if (arg3 != 0) {
                puVar1 = arg1_01 + 0x10;
                do {
                    while( true ) {
                        *(arg1_01 + 0x20) = *(arg1_01 + 0x20) + 1;
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
                        uVar6 = uVar9 - 1;
                        uVar9 = uVar6;
                        if (uVar3 != 0) break;
                        uVar7 = 2;
code_r0x08005578:
                        refcount_warn_saturate(puVar1,uVar7);
                        if (uVar6 == 0) goto code_r0x08005584;
                    }
                    if ((uVar3 + 1 | uVar3) < 0) {
                        uVar7 = 1;
                        goto code_r0x08005578;
                    }
                } while (uVar6 != 0);
            }
code_r0x08005584:
            mutex_unlock(iVar2);
            uVar8 = 0;
        }
        else {
            _printk(0x8002244,*(arg1_00 + 0x48),arg2_00);
            uVar8 = 0xffffffea;
        }
        sym.synx_util_release_handle(arg1_01);
        sym.synx_put_client(arg1_00);
    }
    return uVar8;
}


// ===== sym.synx_import @ 0x08005620 (size 272) =====

int sym.synx_import(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint *arg2_01;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    if ((arg2 == 0) || (*(arg2 + 8) == 0)) {
        _printk(0x8001f75);
    }
    else {
        iVar2 = sym.synx_get_client(arg1 & 0xffffffff);
        if (iVar2 != 0) {
            arg2_00 = sym.synx_util_import_object(arg2);
            if (arg2_00 == 0) {
                _printk(0x80018a3,*(iVar2 + 0x48),*arg2,*(arg2 + 4));
                iVar1 = -0x16;
            }
            else {
                iVar1 = sym.synx_util_init_handle(iVar2,arg2_00,&uStack_40);
                if (iVar1 == 0) {
                    **(arg2 + 8) = uStack_40;
                }
                else {
                    _printk(0x8002021,*(iVar2 + 0x48));
                    sym.synx_util_put_object(arg2_00);
                }
            }
            sym.synx_put_client(iVar2);
            goto code_r0x080056c0;
        }
    }
    iVar1 = -0x16;
code_r0x080056c0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar3 = __stack_chk_fail();
        arg2_01 = auVar3._8_8_;
        *extraout_x18 = sym.synx_export;
        if ((arg2_01 == NULL) || (*(arg2_01 + 2) == 0)) {
            _printk(0x800204b);
            iVar1 = -0x16;
        }
        else {
            iVar2 = sym.synx_get_client(auVar3._0_8_ & 0xffffffff);
            if (iVar2 == 0) {
                iVar1 = -0x16;
            }
            else {
                if ((*(arg2_01 + 6) & 1) == 0) {
                    iVar1 = sym.synx_util_export_local(iVar2,arg2_01);
                }
                else {
                    iVar1 = sym.synx_util_export_global(iVar2,arg2_01);
                }
                if (iVar1 != 0) {
                    _printk(0x8000fc0,*(iVar2 + 0x48),*arg2_01);
                }
                sym.synx_put_client(iVar2);
            }
        }
        return iVar1;
    }
    return iVar1;
}


// ===== sym.synx_export @ 0x08005730 (size 196) =====

int sym.synx_export(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (*(arg2 + 8) == 0)) {
        _printk(0x800204b);
        iVar1 = -0x16;
    }
    else {
        arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
        if (arg1_00 == 0) {
            iVar1 = -0x16;
        }
        else {
            if ((*(arg2 + 0x18) & 1) == 0) {
                iVar1 = sym.synx_util_export_local(arg1_00,arg2);
            }
            else {
                iVar1 = sym.synx_util_export_global(arg1_00,arg2);
            }
            if (iVar1 != 0) {
                _printk(0x8000fc0,*(arg1_00 + 0x48),*arg2);
            }
            sym.synx_put_client(arg1_00);
        }
    }
    return iVar1;
}


// ===== sym.synx_initialize @ 0x080057f4 (size 656) =====

void sym.synx_initialize(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uVar3 = 0xffffffea;
    auStack_6c[0] = 0;
    if (arg1 == 0) goto code_r0x08005898;
    if (arg2 == 0) goto code_r0x08005898;
    uVar4 = sym.synx_util_get_free_handle(_segment.ehdr + 200,0x100);
    if (0xff < uVar4) {
        _printk(0x80020d5);
        while( true ) {
            uVar3 = 0xfffffff4;
code_r0x08005898:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) break;
            __stack_chk_fail(uVar3);
            puVar6 = extraout_x8;
            uVar4 = extraout_x9;
code_r0x08005a1c:
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar2) {
                    *puVar6 = *puVar6 & (uVar4 ^ 0xffffffffffffffff);
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        return;
    }
    piVar5 = vzalloc(0x98e8);
    if (piVar5 != NULL) {
        if (*arg2 != 0) {
            strscpy(piVar5 + 1,*arg2,0x40);
        }
        do {
            get_random_bytes(auStack_6c,1);
        } while (auStack_6c[0] == 0);
        *piVar5 = _segment.ehdr;
        *(piVar5 + 9) = uVar4 & 0xff | auStack_6c[0] << 8;
        __mutex_init(piVar5 + 10,"",obj.synx_initialize.__key);
        iVar7 = 0;
        do {
            __mutex_init(piVar5 + iVar7 + 0x68e8,"",obj.synx_initialize.__key);
            iVar7 = iVar7 + 0x30;
        } while (iVar7 != 0x3000);
        piVar5[0x10] = piVar5 + 0x10;
        piVar5[0x11] = piVar5 + 0x10;
        __init_waitqueue_head(piVar5 + 0x12,"&client->event_wq",obj.synx_initialize.__key);
        puVar6 = piVar5 + 0x819;
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        puVar6 = piVar5 + 0x15;
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        mutex_lock(_segment.ehdr + 0x98);
        iVar7 = _segment.ehdr + uVar4 * 0x10;
        *(iVar7 + 0xe8) = piVar5;
        *(iVar7 + 0xf0) = 1;
        *arg1 = piVar5[9];
        mutex_unlock(_segment.ehdr + 0x98);
        _printk(0x8000fec,*arg1,*arg2);
        uVar3 = 0;
        goto code_r0x08005898;
    }
    puVar6 = _segment.ehdr + (uVar4 >> 3 & 0x1ffffffffffffff8) + 200;
    uVar4 = 1L << (uVar4 & 0x3f);
    goto code_r0x08005a1c;
}


// ===== sym.synx_uninitialize @ 0x08005a84 (size 108) =====

ulong sym.synx_uninitialize(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.synx_get_client(arg1 & 0xffffffff);
    if (arg1_00 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",arg1 & 0xffffffff);
        uVar1 = 0xffffffea;
    }
    else {
        sym.synx_put_client(arg1_00);
        sym.synx_put_client(arg1_00);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.synx_register_ops @ 0x08005af0 (size 328) =====

ulong sym.synx_register_ops(int64_t arg1)

{
    char *pcVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 == 0) || (*(arg1 + 0x20) == 0)) || (*(arg1 + 0x28) != 0)) ||
       (((*arg1 == 0 || (*(arg1 + 8) == 0)) || (*(arg1 + 0x18) == 0)))) {
        _printk(0x80013fc);
        uVar7 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 0x10f8);
        uVar5 = *(arg1 + 0x28);
        if (1 < *(arg1 + 0x28)) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8005c38);
            (*pcVar4)();
        }
        iVar6 = _segment.ehdr + uVar5 * 0x68;
        pcVar1 = iVar6 + 0x118c;
        if (*pcVar1 == '\0') {
            iVar8 = _segment.ehdr + uVar5 * 0x68;
            *pcVar1 = '\x01';
            uVar2 = *(arg1 + 0x18);
            uVar7 = *arg1;
            uVar3 = *(arg1 + 8);
            *(iVar8 + 0x1178) = *(arg1 + 0x10);
            *(iVar8 + 0x1180) = uVar2;
            *(iVar8 + 0x1168) = uVar7;
            *(iVar8 + 0x1170) = uVar3;
            strscpy(iVar6 + 0x1128,*(arg1 + 0x20),0x40);
            *(iVar8 + 0x1188) = *(arg1 + 0x28);
            _printk(0x80022de,*(arg1 + 0x28),*(arg1 + 0x20));
            uVar7 = 0;
        }
        else {
            _printk(0x80011d7,*(_segment.ehdr + uVar5 * 0x68 + 0x1188));
            uVar7 = 0xffffff8e;
        }
        mutex_unlock(_segment.ehdr + 0x10f8);
    }
    return uVar7;
}


// ===== sym.synx_deregister_ops @ 0x08005c38 (size 220) =====

ulong sym.synx_deregister_ops(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*(arg1 + 0x20) == 0)) || (*(arg1 + 0x28) != 0)) {
        _printk(0x8001ca1);
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 0x10f8);
        if (1 < *(arg1 + 0x28)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8005d14);
            (*pcVar1)();
        }
        iVar3 = _segment.ehdr + *(arg1 + 0x28) * 0x68;
        *(iVar3 + 0x1130) = 0;
        *(iVar3 + 0x1138) = 0;
        *(iVar3 + 0x1140) = 0;
        *(iVar3 + 0x1148) = 0;
        *(iVar3 + 0x1150) = 0;
        *(iVar3 + 0x1158) = 0;
        *(iVar3 + 0x1160) = 0;
        *(iVar3 + 0x1168) = 0;
        *(iVar3 + 0x1170) = 0;
        *(iVar3 + 0x1178) = 0;
        *(iVar3 + 0x1180) = 0;
        *(iVar3 + 0x1188) = 0;
        *(iVar3 + 0x1128) = 0;
        _printk(0x80020fb,*(arg1 + 0x20));
        mutex_unlock(_segment.ehdr + 0x10f8);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.synx_ipc_callback @ 0x08005d14 (size 172) =====

ulong sym.synx_ipc_callback(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x38);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        *(puVar2 + 2) = 0xfffffffe0;
        *puVar2 = arg1 >> 0x20;
        puVar2[1] = arg1;
        *(puVar2 + 4) = puVar2 + 4;
        *(puVar2 + 6) = puVar2 + 4;
        iVar1 = _segment.ehdr;
        *(puVar2 + 8) = sym.synx_ipc_signal_handler.a5db5ef06f1685a5332e494f7f498c3c.cfi_jt;
        queue_work_on(0x20,*(iVar1 + 0x10e8));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.synx_ipc_signal_handler @ 0x08005dc0 (size 364) =====

void sym.synx_ipc_signal_handler(int64_t arg1)

{
    int64_t iVar1;
    int *arg1_00;
    uint32_t arg2;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t *puVar6;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = arg1 + -8;
    iVar5 = sym.synx_util_release_data(*puVar6,1);
    if (iVar5 == 0) {
        _printk(0x8001cb9,*puVar6);
        goto code_r0x08005ee4;
    }
    arg1_01 = *(iVar5 + 8);
    if (arg1_01 == 0) {
        iVar4 = -0x16;
code_r0x08005ea4:
        _printk(0x8001a7c,*puVar6,iVar4);
    }
    else {
        iVar1 = arg1_01 + 0x60;
        arg2 = *(arg1 + -4);
        mutex_lock(iVar1);
        iVar4 = sym.synx_signal_fence(arg1_01,arg2,0);
        if (iVar4 != 0) {
            mutex_unlock(iVar1);
            goto code_r0x08005ea4;
        }
        iVar4 = sym.synx_signal_core(arg1_01,arg2,0,0);
        mutex_unlock(iVar1);
        if (iVar4 != 0) goto code_r0x08005ea4;
    }
    _raw_spin_lock_bh(obj.global_tbl_lock);
    arg1_00 = iVar5 + 0x10;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        iVar4 = *arg1_00;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar3) {
            *arg1_00 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        sym.synx_util_destroy_data(arg1_00);
    }
    else if (iVar4 < 1) {
        refcount_warn_saturate(arg1_00,3);
    }
    _raw_spin_unlock_bh(obj.global_tbl_lock);
code_r0x08005ee4:
    kfree(puVar6);
    return;
}


// ===== sym.synx_ipc_signal @ 0x08005f2c (size 96) =====

void sym.synx_ipc_signal(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = arg1 + -8;
    iVar1 = ipc_lite_msg_send(6,CONCAT44(*puVar2,*(arg1 + -4)),1);
    if (iVar1 != 0) {
        _printk(0x800120c,*puVar2);
    }
    kfree(puVar2);
    return;
}


// ===== sym.synx_read @ 0x08005f8c (size 448) =====

uint64_t sym.synx_read(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    if (arg3 == 0x28) {
        iVar5 = sym.synx_get_client(**(arg1 + 0xd8));
        if (iVar5 == 0) {
            uVar10 = 0xffffffffffffffea;
        }
        else {
            iVar6 = iVar5 + 0x50;
            mutex_lock(iVar6);
            piVar12 = *(iVar5 + 0x80);
            if (iVar5 + 0x80 == piVar12 || piVar12 + -6 == NULL) {
                mutex_unlock(iVar6);
                uVar10 = 0;
            }
            else if (*(piVar12 + -0x2c) - 0x100U < 0xffffff01) {
                _printk(0x8001592,"synx_read");
                mutex_unlock(iVar6);
                uVar10 = 0xffffffffffffffea;
            }
            else {
                uVar10 = __list_del_entry_valid(piVar12);
                if ((uVar10 & 1) != 0) {
                    iVar1 = *piVar12;
                    piVar2 = piVar12[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar12 = piVar12;
                piVar12[1] = piVar12;
                auVar13 = mutex_unlock(iVar6);
                uVar10 = 0x28;
                uVar3 = piVar12[-4];
                iVar6 = sym._copy_to_user(arg2,auVar13,0x28);
                if (iVar6 != 0) {
                    _printk(0x8001232);
                    uVar10 = 0xfffffffffffffff2;
                }
                iVar4 = sym.synx_util_clear_cb_entry(iVar5,piVar12 + -6);
                if (iVar4 != 0) {
                    _printk(0x8002377,"synx_read",*(iVar5 + 0x48),uVar3 & 0xffffffff);
                }
            }
            sym.synx_put_client(iVar5);
        }
    }
    else {
        _printk(0x8001078);
        uVar10 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar8) {
        return uVar10;
    }
    auVar13 = __stack_chk_fail();
    puVar7 = auVar13._8_8_;
    *extraout_x18 = 0x8006148;
    iVar8 = sym.synx_get_client(**(auVar13._0_8_ + 0xd8));
    if (iVar8 == 0) {
        _printk(0x800263f);
        uVar9 = 0;
    }
    else {
        if (puVar7 != NULL) {
            pcVar11 = *puVar7;
            if (iVar8 + 0x90 != 0 && pcVar11 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x8000f00);
                (*pcVar11)(auVar13._0_8_,iVar8 + 0x90,puVar7);
            }
        }
        mutex_lock(iVar8 + 0x50);
        uVar9 = (iVar8 + 0x80 != *(iVar8 + 0x80)) << 1;
        mutex_unlock(iVar8 + 0x50);
        sym.synx_put_client(iVar8);
    }
    return uVar9;
}


// ===== sym.synx_poll @ 0x0800614c (size 228) =====

int sym.synx_poll(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong *in_x18;
    int iVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.synx_get_client(**(arg1 + 0xd8));
    if (arg1_00 == 0) {
        _printk(0x800263f);
        iVar1 = 0;
    }
    else {
        if (arg2 != 0) {
            pcVar2 = *arg2;
            if (arg1_00 + 0x90 != 0 && pcVar2 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,0x8000f00);
                (*pcVar2)(arg1,arg1_00 + 0x90,arg2);
            }
        }
        mutex_lock(arg1_00 + 0x50);
        iVar1 = (arg1_00 + 0x80 != *(arg1_00 + 0x80)) << 1;
        mutex_unlock(arg1_00 + 0x50);
        sym.synx_put_client(arg1_00);
    }
    return iVar1;
}


// ===== sym.synx_ioctl @ 0x08006234 (size 1628) =====

void sym.synx_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar auVar10 [16];
    ulong uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    uint32_t *puStack_a8;
    ulong uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint32_t auStack_50 [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_b8 = 0;
    iStack_b0 = 0;
    uStack_c0 = 0;
    if (arg2 != 0xc0187382) {
        _printk(0x8002660);
        iVar5 = -0x203;
        goto code_r0x0800677c;
    }
    puVar7 = *(arg1 + 0xd8);
    iVar5 = sym._copy_from_user(&uStack_c0,arg3,0x18);
    if (iVar5 != 0) {
        _printk(0x8001d09);
        iVar5 = -0xe;
        goto code_r0x0800677c;
    }
    if (iStack_b0 == 0) {
        iVar5 = -0x16;
        goto code_r0x0800677c;
    }
    //switch table (12 cases) at 0x80028e8
    switch(uStack_c0 & 0xffffffff) {
    case 0:
        uVar1 = *puVar7;
        auStack_50[0] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        uStack_a0 = NULL;
        if (uStack_c0._4_4_ != 0x44) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x44);
        if (iVar5 != 0) goto code_r0x08006700;
        puStack_a8 = auStack_50;
        puStack_98 = &uStack_90;
        iVar4 = sym.synx_create(uVar1,&puStack_a8);
        iVar5 = iStack_b0;
        if (iVar4 == 0) {
            uVar8 = uStack_c0 >> 0x20;
            if (uStack_c0 < 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x800685c);
                (*pcVar2)();
            }
            auVar10 = __check_object_size(&uStack_90,uVar8,1);
            iVar5 = sym._copy_to_user(iVar5,auVar10,uVar8);
            if (iVar5 != 0) goto code_r0x08006700;
        }
        break;
    case 1:
        uVar1 = *puVar7;
        auStack_50[0] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ != 0x44) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x44);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_release(uVar1,auStack_50[0]);
        break;
    case 2:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 8) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_signal(uVar1,uStack_90 & 0xffffffff,uStack_90 >> 0x20);
        break;
    case 3:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uVar8 = uStack_88 & 0xffffffff;
            if (uStack_88 < 0x100) {
                iVar5 = __kmalloc(uVar8 << 2,0xdc0);
                puVar7 = uStack_90;
                if (iVar5 == 0) {
                    iVar4 = -0xc;
                    break;
                }
                if (uStack_88 >> 0x1d != 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006880);
                    (*pcVar2)();
                }
                iVar9 = (uStack_88 & 0xffffffff) << 2;
                __check_object_size(iVar5,iVar9,0);
                iVar9 = sym._copy_from_user(iVar5,puVar7,iVar9);
                if (iVar9 == 0) {
                    iVar4 = sym.synx_merge(uVar1,iVar5,uVar8,&uStack_88 + 4);
                    iVar9 = iStack_b0;
                    if (iVar4 == 0) {
                        uVar8 = uStack_c0 >> 0x20;
                        if (uStack_c0 < 0) goto code_r0x08006888;
                        auVar10 = __check_object_size(&uStack_90,uVar8,1);
                        iVar9 = sym._copy_to_user(iVar9,auVar10,uVar8);
                        if (iVar9 != 0) goto code_r0x0800648c;
                    }
                }
                else {
code_r0x0800648c:
                    iVar4 = -0xe;
                }
                kfree(iVar5);
                break;
            }
        }
    default:
code_r0x08006774:
        iVar4 = -0x16;
        break;
    case 4:
        uVar8 = *puVar7;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x28) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x28);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_register_callback(uVar8,uStack_90 & 0xffffffff,0x8003650,uStack_88);
        if (iVar4 != 0) {
            uVar6 = 0x8001aac;
code_r0x08006554:
            _printk(uVar6,uVar8,uStack_90);
        }
        break;
    case 5:
        uVar8 = *puVar7;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x28) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x28);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_deregister_callback(uVar8,uStack_90 & 0xffffffff,0x8003650,uStack_88);
        if (iVar4 != 0) {
            uVar6 = 0x800114c;
            goto code_r0x08006554;
        }
        break;
    case 6:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 == 0) {
                uVar3 = sym.synx_wait(uVar1,uStack_90 & 0xffffffff,uStack_88);
                iVar4 = 0;
                uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
                auVar10 = extraout_q0_01;
            }
            else {
                iVar4 = -0xe;
                auVar10 = extraout_q0_00;
            }
        }
        else {
            iVar4 = -0x16;
            auVar10 = extraout_q0;
        }
        iVar5 = sym._copy_to_user(arg3,auVar10,0x18);
        if (iVar5 != 0) {
            _printk(0x8001d09);
code_r0x08006700:
            iVar4 = -0xe;
        }
        break;
    case 7:
        uVar1 = *puVar7;
        uStack_88 = 0;
        iStack_80 = 0;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 0x18) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x18);
        if (iVar5 != 0) goto code_r0x08006700;
        iVar4 = sym.synx_bind(uVar1,uStack_90 & 0xffffffff,uStack_88,iStack_80);
code_r0x08006604:
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar4);
        break;
    case 8:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ == 8) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
            if (iVar5 == 0) {
                iVar4 = sym.synx_addrefcount(uVar1,uStack_90 & 0xffffffff,uStack_90 >> 0x20);
                goto code_r0x08006604;
            }
            goto code_r0x08006700;
        }
        goto code_r0x08006774;
    case 9:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        if (uStack_c0._4_4_ != 8) goto code_r0x08006774;
        iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,8);
        if (iVar5 != 0) goto code_r0x08006700;
        uVar3 = sym.synx_get_status(uVar1,uStack_90 & 0xffffffff);
        uStack_90 = CONCAT44(uVar3,uStack_90);
        if (uStack_c0 < 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006658);
            (*pcVar2)();
        }
code_r0x080066b0:
        iVar5 = iStack_b0;
        uVar8 = uStack_c0._4_4_;
        auVar10 = __check_object_size(&uStack_90,uVar8,1);
code_r0x080067d0:
        iVar5 = sym._copy_to_user(iVar5,auVar10,uVar8);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
        break;
    case 10:
        uVar1 = *puVar7;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&uStack_90,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uStack_a0 = &uStack_88;
            puStack_a8 = uStack_90;
            iVar4 = sym.synx_import(uVar1,&puStack_a8);
            if (iVar4 == 0) {
                if (uStack_c0 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006868);
                    (*pcVar2)();
                }
                goto code_r0x080066b0;
            }
        }
        goto code_r0x08006774;
    case 0xb:
        uVar1 = *puVar7;
        puStack_a8 = NULL;
        uStack_a0 = NULL;
        iStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = NULL;
        uStack_88 = 0;
        if (uStack_c0._4_4_ == 0x10) {
            iVar5 = sym._copy_from_user(&puStack_a8,iStack_b0,0x10);
            if (iVar5 != 0) goto code_r0x08006700;
            uStack_88 = &puStack_a8 | 4;
            uStack_90 = CONCAT44(uStack_90._4_4_,puStack_a8._0_4_);
            uStack_78 = CONCAT44(uStack_78._4_4_,uStack_a0._4_4_);
            iStack_80 = 0;
            iVar4 = sym.synx_export(uVar1,&uStack_90);
            iVar5 = iStack_b0;
            if (iVar4 == 0) {
                uVar8 = uStack_c0 >> 0x20;
                if (uStack_c0 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8006874);
                    (*pcVar2)();
                }
                auVar10 = __check_object_size(&puStack_a8,uVar8,1);
                goto code_r0x080067d0;
            }
        }
        goto code_r0x08006774;
    }
    iVar5 = iVar4;
code_r0x0800677c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(iVar5);
code_r0x08006888:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8006890);
    (*pcVar2)();
}


// ===== sym.synx_open @ 0x08006894 (size 252) =====

int sym.synx_open(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar4;
    uint64_t arg1_00;
    ulong unaff_x30;
    ulong *puStack_80;
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
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,4);
    if (iVar3 == 0) {
        iVar2 = -0xc;
    }
    else {
        iVar1 = sp_el0;
        scnprintf(&uStack_78,0x40,"",*(iVar1 + 0x5d8));
        puStack_80 = &uStack_78;
        iVar2 = sym.synx_initialize(iVar3,&puStack_80);
        if (iVar2 == 0) {
            *(arg1 + 0xd8) = iVar3;
        }
        else {
            kfree(iVar3);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.synx_close;
    puVar4 = *(extraout_x1 + 0xd8);
    arg1_00 = *puVar4;
    iVar3 = sym.synx_get_client(arg1_00);
    if (iVar3 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",arg1_00);
        iVar2 = -0x16;
    }
    else {
        sym.synx_put_client(iVar3);
        sym.synx_put_client(iVar3);
        iVar2 = 0;
    }
    kfree(puVar4);
    return iVar2;
}


// ===== sym.synx_close @ 0x08006990 (size 132) =====

uint sym.synx_close(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    uint32_t *puVar1;
    uint uVar2;
    uint64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xd8);
    arg1_01 = *puVar1;
    arg1_00 = sym.synx_get_client(arg1_01);
    if (arg1_00 == 0) {
        _printk(0x8001fa2,"synx_uninitialize",arg1_01);
        uVar2 = 0xffffffea;
    }
    else {
        sym.synx_put_client(arg1_00);
        sym.synx_put_client(arg1_00);
        uVar2 = 0;
    }
    kfree(puVar1);
    return uVar2;
}


// ===== sym._copy_to_user @ 0x08006a14 (size 312) =====

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
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x08006b88 (size 376) =====

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
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08006d3c (size 364) =====

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
    bVar4 = 0xffffffffffffffcf < uVar6;
    uVar6 = uVar6 + 0x30;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x30;
    }
    else {
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x30);
        if ((_dma_fence_default_wait >> 0x18 & 1) == 0) {
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
    memset((arg1 - iVar5) + 0x30,0,iVar5);
    return iVar5;
}


// ===== sym.__cfi_check_fail @ 0x08006ee4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006f28

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
    //switch table (4 cases) at 0x8002918
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006f3c);
    (*pcVar1)();
}


// ===== sym.synx_util_init_coredata @ 0x08006f3c (size 424) =====

ulong sym.synx_util_init_coredata(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) || (7 < *(arg2 + 8))) {
        _printk(0x800230a,"");
        return 0xffffffea;
    }
    *(arg1 + 0x94) = *(arg2 + 8);
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x90) = 1;
    __mutex_init(arg1 + 0x60,"&synx_obj->obj_lock",obj.synx_fence_ops);
    *(arg1 + 0x160) = arg1 + 0x160;
    *(arg1 + 0x168) = arg1 + 0x160;
    if (*(arg2 + 0x10) != 0) {
        strscpy(arg1,*(arg2 + 0x10),0x40);
    }
    uVar1 = *(arg1 + 0x94);
    if ((uVar1 >> 2 & 1) == 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
        if (puVar3 != NULL) {
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            iVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x40);
            if (iVar4 != 0) {
                *puVar3 = 0;
                dma_fence_init(iVar4,arg3,puVar3,*(_segment.ehdr + 0x10f0),1);
                iVar2 = dma_fence_add_callback(iVar4,arg1 + 0x48,sym.synx_fence_callback.cfi_jt);
                if (iVar2 != 0) {
                    _printk(0x800192a,iVar4);
                    sym.dma_fence_put_1(iVar4);
                    return 0xffffffea;
                }
                uVar1 = *(arg1 + 0x94);
                *(arg1 + 0x40) = iVar4;
                goto code_r0x0800706c;
            }
            kfree(puVar3);
        }
        return 0xfffffff4;
    }
code_r0x0800706c:
    if ((uVar1 >> 2 & 1) == 0) {
        dma_fence_enable_sw_signaling(*(arg1 + 0x40));
    }
    return 0;
}


// ===== sym.synx_util_activate @ 0x080070e4 (size 64) =====

ulong sym.synx_util_activate(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        if ((*(arg1 + 0x94) >> 2 & 1) == 0) {
            dma_fence_enable_sw_signaling(*(arg1 + 0x40));
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.synx_util_init_group_coredata @ 0x08007124 (size 168) =====

ulong sym.synx_util_init_group_coredata(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) ||
       (iVar1 = dma_fence_array_create(arg2 & 0xffffffff,in_x1,*(_segment.ehdr + 0x10f0),1,0), iVar1 == 0)) {
        uVar2 = 0xffffffea;
    }
    else {
        *(arg1 + 0x40) = iVar1;
        *(arg1 + 0x94) = 2;
        *(arg1 + 0x90) = 1;
        __mutex_init(arg1 + 0x60,"&synx_obj->obj_lock",obj.synx_fence_ops);
        *(arg1 + 0x160) = arg1 + 0x160;
        *(arg1 + 0x168) = arg1 + 0x160;
        if ((*(arg1 + 0x94) >> 2 & 1) == 0) {
            dma_fence_enable_sw_signaling(*(arg1 + 0x40));
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.synx_util_get_object @ 0x080071cc (size 124) =====

void sym.synx_util_get_object(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0x90;
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


// ===== sym.synx_util_put_object @ 0x08007248 (size 196) =====

void sym.synx_util_put_object(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x98) != 0) && (*(arg1 + 0x90) == *(arg1 + 0x98) + 1)) {
        sym.release_bound_synxs(arg1);
    }
    arg1_00 = arg1 + 0x90;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        iVar1 = *arg1_00;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar3) {
            *arg1_00 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.synx_util_destroy_coredata(arg1_00);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1_00,3);
    }
    return;
}


// ===== sym.release_bound_synxs @ 0x0800730c (size 1312) =====

void sym.release_bound_synxs(int64_t arg1)

{
    int *piVar1;
    uint8_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int extraout_w11;
    ulong *in_x18;
    code *unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    code *pcVar9;
    int64_t unaff_x24;
    int *unaff_x25;
    int unaff_w26;
    int64_t unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    int64_t aiStack_120 [23];
    ulong uStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    aiStack_120[0x16] = *(iVar7 + 0x5e0);
    iVar6 = *(arg1 + 0x98);
    aiStack_120[0x14] = 0;
    aiStack_120[0x15] = 0;
    aiStack_120[0x12] = 0;
    aiStack_120[0x13] = 0;
    aiStack_120[0x10] = 0;
    aiStack_120[0x11] = 0;
    aiStack_120[0xe] = 0;
    aiStack_120[0xf] = 0;
    aiStack_120[0xc] = 0;
    aiStack_120[0xd] = 0;
    aiStack_120[10] = 0;
    aiStack_120[0xb] = 0;
    aiStack_120[8] = 0;
    aiStack_120[9] = 0;
    aiStack_120[6] = 0;
    aiStack_120[7] = 0;
    aiStack_120[4] = 0;
    aiStack_120[5] = 0;
    aiStack_120[2] = 0;
    aiStack_120[3] = 0;
    aiStack_120[1] = 0;
    if (iVar6 == 0) {
        *(arg1 + 0x98) = 0;
        goto code_r0x080073a0;
    }
    uStack_130 = *(arg1 + 0xa0);
    uStack_128 = *(arg1 + 0xa8);
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xa8) = 0;
    aiStack_120[0] = *(arg1 + 0xb0);
    *(arg1 + 0xb0) = 0;
    if (iVar6 == 1) {
        unaff_x24 = 1;
    }
    else {
        aiStack_120[1] = *(arg1 + 0xb8);
        aiStack_120[2] = *(arg1 + 0xc0);
        aiStack_120[3] = *(arg1 + 200);
        *(arg1 + 0xb8) = 0;
        *(arg1 + 0xc0) = 0;
        *(arg1 + 200) = 0;
        if (iVar6 == 2) {
            unaff_x24 = 2;
        }
        else {
            aiStack_120[4] = *(arg1 + 0xd0);
            aiStack_120[5] = *(arg1 + 0xd8);
            *(arg1 + 0xd0) = 0;
            *(arg1 + 0xd8) = 0;
            aiStack_120[6] = *(arg1 + 0xe0);
            *(arg1 + 0xe0) = 0;
            if (iVar6 == 3) {
                unaff_x24 = 3;
            }
            else {
                aiStack_120[7] = *(arg1 + 0xe8);
                aiStack_120[8] = *(arg1 + 0xf0);
                *(arg1 + 0xe8) = 0;
                *(arg1 + 0xf0) = 0;
                aiStack_120[9] = *(arg1 + 0xf8);
                *(arg1 + 0xf8) = 0;
                if (iVar6 == 4) {
                    unaff_x24 = 4;
                }
                else {
                    aiStack_120[10] = *(arg1 + 0x100);
                    aiStack_120[0xb] = *(arg1 + 0x108);
                    *(arg1 + 0x100) = 0;
                    *(arg1 + 0x108) = 0;
                    aiStack_120[0xc] = *(arg1 + 0x110);
                    *(arg1 + 0x110) = 0;
                    if (iVar6 == 5) {
                        unaff_x24 = 5;
                    }
                    else {
                        aiStack_120[0xd] = *(arg1 + 0x118);
                        aiStack_120[0xe] = *(arg1 + 0x120);
                        *(arg1 + 0x118) = 0;
                        *(arg1 + 0x120) = 0;
                        aiStack_120[0xf] = *(arg1 + 0x128);
                        *(arg1 + 0x128) = 0;
                        if (iVar6 == 6) {
                            unaff_x24 = 6;
                        }
                        else {
                            aiStack_120[0x10] = *(arg1 + 0x130);
                            aiStack_120[0x11] = *(arg1 + 0x138);
                            *(arg1 + 0x130) = 0;
                            *(arg1 + 0x138) = 0;
                            aiStack_120[0x12] = *(arg1 + 0x140);
                            *(arg1 + 0x140) = 0;
                            if (iVar6 == 7) {
                                unaff_x24 = 7;
                            }
                            else {
                                aiStack_120[0x13] = *(arg1 + 0x148);
                                aiStack_120[0x14] = *(arg1 + 0x150);
                                *(arg1 + 0x148) = 0;
                                *(arg1 + 0x150) = 0;
                                aiStack_120[0x15] = *(arg1 + 0x158);
                                *(arg1 + 0x158) = 0;
                                if (iVar6 == 8) {
                                    unaff_x24 = 8;
                                }
                                else {
                                    aiStack_120[0x16] = *(arg1 + 0x160);
                                    uStack_68 = *(arg1 + 0x168);
                                    *(arg1 + 0x160) = 0;
                                    *(arg1 + 0x168) = 0;
                                    *(arg1 + 0x170) = 0;
                                    if (iVar6 != 9) goto code_r0x080077f0;
                                    unaff_x24 = 9;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    unaff_x27 = 0;
    unaff_x22 = segment.ehdr;
    unaff_x20 = 0x10f8;
    unaff_x19 = obj.camera_tbl_lock;
    *(arg1 + 0x98) = 0;
    uStack_138 = 0x20;
    while (unaff_x27 != 8) {
        iVar6 = *(&uStack_130 + unaff_x27 * 3);
        unaff_x28 = aiStack_120[unaff_x27 * 3];
        if (iVar6 != 0) {
code_r0x080076e8:
            _printk(0x8001482,iVar6);
            goto code_r0x08007794;
        }
        unaff_w26 = *(&uStack_128 + unaff_x27 * 3);
        mutex_lock(*unaff_x22 + unaff_x20);
        unaff_x21 = *unaff_x22;
        uVar2 = *(unaff_x21 + 0x118c);
        unaff_x25 = uVar2;
        mutex_unlock(unaff_x21 + unaff_x20);
        if ((uVar2 == 0) || (unaff_x21 == -0x1168)) goto code_r0x080076e8;
        _raw_spin_lock_bh(unaff_x19);
        if (*("" + (unaff_w26 * 0x61c88647 >> 0x18) * 8) != 0) {
            piVar1 = *("" + (unaff_w26 * 0x61c88647 >> 0x18) * 8) + -0x18;
            while (piVar1 != NULL) {
                iVar7 = *(piVar1 + 6);
                if (*piVar1 == unaff_w26) {
                    piVar8 = *(piVar1 + 8);
                    if (piVar8 != NULL) {
                        *piVar8 = iVar7;
                        if (iVar7 != 0) {
                            *(iVar7 + 8) = piVar8;
                        }
                        *(piVar1 + 6) = 0;
                        piVar1[8] = 0;
                        piVar1[9] = 0;
                    }
                    _raw_spin_unlock_bh(unaff_x19);
                    if (piVar1 != NULL) {
                        _raw_spin_lock_bh(unaff_x19);
                        unaff_x25 = piVar1 + 4;
                        iVar6 = 1;
                        goto code_r0x080077fc;
                    }
                    goto code_r0x080076d4;
                }
                piVar1 = NULL;
                if (iVar7 != 0) {
                    piVar1 = iVar7 + -0x18;
                }
            }
        }
        _raw_spin_unlock_bh(unaff_x19);
code_r0x080076d4:
        _printk(0x800258f,unaff_w26);
        while( true ) {
            pcVar9 = *(unaff_x21 + 0x1170);
            __cfi_slowpath_diag(0x25e6cdd8542e5912,pcVar9,0x8000f60);
            iVar6 = (*pcVar9)(sym.__typeid__ZTSFviiPvE_global_addr,unaff_x28,unaff_w26);
            if (iVar6 < 0) {
                _printk(0x8001bb3,"",unaff_w26,iVar6,*(unaff_x28 + 4));
            }
            else {
code_r0x08007794:
                kfree(unaff_x28);
            }
            unaff_x27 = unaff_x27 + 1;
            if (unaff_x27 != unaff_x24) break;
code_r0x080073a0:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == aiStack_120[0x16]) {
                return;
            }
            __stack_chk_fail();
            iVar6 = extraout_w11;
code_r0x080077fc:
            Hint_Prefetch(unaff_x25,2,0,1);
            do {
                iVar3 = *unaff_x25;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(unaff_x25,0x10);
                if (bVar5) {
                    *unaff_x25 = iVar3 - iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                iVar7 = *(unaff_x25 + -2);
                if ((*(iVar7 + 0x98) != 0) && (*(iVar7 + 0x90) == *(iVar7 + 0x98) + 1)) {
                    sym.release_bound_synxs(iVar7);
                }
                piVar1 = iVar7 + 0x90;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar6 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = iVar6 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                unaff_x25 = unaff_x25 + -4;
                if (iVar6 == 1) {
                    DataMemoryBarrier(2,1);
                    if (5 < (uStack_138 >> 3 | uStack_138 << 0x3d)) {
                        __cfi_slowpath_diag(0xfd53ce927206eb08,
                                            sym.synx_util_destroy_coredata.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt,
                                            0x8000f80);
                    }
                    sym.synx_util_destroy_coredata.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt(piVar1);
                }
                else if (iVar6 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
                kfree(unaff_x25);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x25,3);
            }
            _raw_spin_unlock_bh(unaff_x19);
        }
    }
code_r0x080077f0:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x80077f4);
    (*pcVar9)();
}


// ===== sym.synx_util_destroy_coredata @ 0x0800782c (size 248) =====

void sym.synx_util_destroy_coredata(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x50) != 0) {
        if ((((*(arg1 + 4) >> 1 & 1) == 0) && (iVar4 = sym.synx_util_get_object_status(arg1 + -0x90), iVar4 == 1)) &&
           (uVar5 = dma_fence_remove_callback(*(arg1 + -0x50),arg1 + -0x48), (uVar5 & 1) == 0)) {
            _printk(0x8001d51,*(arg1 + -0x50));
            iVar6 = *(arg1 + -0x50);
        }
        else {
            iVar6 = *(arg1 + -0x50);
        }
        if (iVar6 != 0) {
            piVar1 = iVar6 + 0x38;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release();
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
        }
    }
    sym.synx_util_object_destroy(arg1 + -0x90);
    return;
}


// ===== sym.synx_util_object_destroy @ 0x08007924 (size 844) =====

void sym.synx_util_object_destroy(int64_t arg1)

{
    int *piVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong uVar12;
    int *piVar13;
    code *pcVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(arg1 + 0x160);
    while (arg1 + 0x160 != piVar10) {
        piVar11 = *piVar10;
        _printk(0x8001801,piVar10[-8]);
        uVar7 = __list_del_entry_valid(piVar10);
        if ((uVar7 & 1) != 0) {
            iVar8 = *piVar10;
            piVar2 = piVar10[1];
            *(iVar8 + 8) = piVar2;
            *piVar2 = iVar8;
        }
        *piVar10 = piVar10;
        piVar10[1] = piVar10;
        kfree(piVar10 + -8);
        piVar10 = piVar11;
    }
    if (*(arg1 + 0x98) != 0) {
        uVar7 = 0;
        do {
            if (uVar7 == 9) {
    //WARNING: Does not return
                pcVar14 = SoftwareBreakpoint(0x5512,0x8007c3c);
                (*pcVar14)();
            }
            iVar8 = arg1 + uVar7 * 0x18;
            iVar6 = *(iVar8 + 0xa0);
            iVar3 = *(iVar8 + 0xa8);
            if (iVar6 == 0) {
                uVar12 = *(iVar8 + 0xb0);
                mutex_lock(_segment.ehdr + 0x10f8);
                iVar8 = _segment.ehdr;
                cVar4 = *(_segment.ehdr + 0x118c);
                mutex_unlock(_segment.ehdr + 0x10f8);
                if ((cVar4 == '\0') || (iVar8 == -0x1168)) goto code_r0x080079cc;
                _raw_spin_lock_bh(obj.camera_tbl_lock);
                if ((*("" + (iVar3 * 0x61c88647 >> 0x18) * 8) != 0) &&
                   (piVar13 = *("" + (iVar3 * 0x61c88647 >> 0x18) * 8) + -0x18, piVar13 != NULL)) {
code_r0x08007a70:
                    iVar9 = *(piVar13 + 6);
                    if (*piVar13 != iVar3) goto code_r0x08007a84;
                    piVar10 = *(piVar13 + 8);
                    if (piVar10 != NULL) {
                        *piVar10 = iVar9;
                        if (iVar9 != 0) {
                            *(iVar9 + 8) = piVar10;
                        }
                        *(piVar13 + 6) = 0;
                        piVar13[8] = 0;
                        piVar13[9] = 0;
                    }
                    _raw_spin_unlock_bh(obj.camera_tbl_lock);
                    if (piVar13 != NULL) {
                        _raw_spin_lock_bh(obj.camera_tbl_lock);
                        piVar1 = piVar13 + 4;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar6 = *piVar1;
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar5) {
                                *piVar1 = iVar6 + -1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        if (iVar6 == 1) {
                            DataMemoryBarrier(2,1);
                            iVar9 = *(piVar13 + 2);
                            if ((*(iVar9 + 0x98) != 0) && (*(iVar9 + 0x90) == *(iVar9 + 0x98) + 1)) {
                                sym.release_bound_synxs(iVar9);
                            }
                            piVar1 = iVar9 + 0x90;
                            Hint_Prefetch(piVar1,2,0,1);
                            do {
                                iVar6 = *piVar1;
                                cVar4 = '\x01';
                                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                                if (bVar5) {
                                    *piVar1 = iVar6 + -1;
                                    cVar4 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar4 != '\0');
                            if (iVar6 == 1) {
                                DataMemoryBarrier(2,1);
                                sym.synx_util_destroy_coredata(piVar1);
                            }
                            else if (iVar6 < 1) {
                                refcount_warn_saturate(piVar1,3);
                            }
                            kfree(piVar13);
                        }
                        else if (iVar6 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                        goto code_r0x08007b80;
                    }
                    goto code_r0x08007b88;
                }
code_r0x08007b80:
                _raw_spin_unlock_bh(obj.camera_tbl_lock);
code_r0x08007b88:
                pcVar14 = *(iVar8 + 0x1170);
                __cfi_slowpath_diag(0x25e6cdd8542e5912,pcVar14,0x8000f20);
                iVar6 = (*pcVar14)(sym.__typeid__ZTSFviiPvE_global_addr,uVar12,iVar3);
                if (iVar6 < 0) {
                    _printk(0x800161b,iVar3,0,iVar6);
                }
                else {
                    kfree(uVar12);
                }
            }
            else {
code_r0x080079cc:
                _printk(0x80021e1,iVar3,iVar6);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(arg1 + 0x98));
    }
    kfree(arg1);
    return;
code_r0x08007a84:
    piVar13 = NULL;
    if (iVar9 != 0) {
        piVar13 = iVar9 + -0x18;
    }
    if (piVar13 == NULL) goto code_r0x08007b80;
    goto code_r0x08007a70;
}


// ===== sym.synx_util_get_bind_ops @ 0x08007c70 (size 120) =====

int64_t sym.synx_util_get_bind_ops(int param_1)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        return 0;
    }
    *in_x18 = unaff_x30;
    mutex_lock(_segment.ehdr + 0x10f8);
    iVar3 = _segment.ehdr;
    cVar2 = *(_segment.ehdr + 0x118c);
    mutex_unlock(_segment.ehdr + 0x10f8);
    iVar1 = 0;
    if (cVar2 != '\0') {
        iVar1 = iVar3 + 0x1168;
    }
    return iVar1;
}


// ===== sym.synx_util_release_data @ 0x08007ce8 (size 360) =====

int * sym.synx_util_release_data(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1;
    if (arg2 == 1) {
        _raw_spin_lock_bh(obj.global_tbl_lock);
        piVar5 = *(obj.synx_fence_ops + (iVar1 * 0x61c88647 >> 0x18) * 8) + -0x18;
        if (*(obj.synx_fence_ops + (iVar1 * 0x61c88647 >> 0x18) * 8) == 0 || piVar5 == NULL) {
            piVar5 = NULL;
        }
        else {
            do {
                iVar3 = *(piVar5 + 6);
                if (*piVar5 == iVar1) {
                    piVar4 = *(piVar5 + 8);
                    if (piVar4 != NULL) {
                        *piVar4 = iVar3;
                        if (iVar3 != 0) {
                            *(iVar3 + 8) = piVar4;
                        }
                        *(piVar5 + 6) = 0;
                        piVar5[8] = 0;
                        piVar5[9] = 0;
                    }
                    break;
                }
                piVar5 = NULL;
                if (iVar3 != 0) {
                    piVar5 = iVar3 + -0x18;
                }
            } while (piVar5 != NULL);
        }
        pcVar2 = obj.global_tbl_lock;
    }
    else {
        if (arg2 != 0) {
            _printk(0x80010c0);
            return NULL;
        }
        _raw_spin_lock_bh(obj.camera_tbl_lock);
        piVar5 = *("" + (iVar1 * 0x61c88647 >> 0x18) * 8) + -0x18;
        if (*("" + (iVar1 * 0x61c88647 >> 0x18) * 8) == 0 || piVar5 == NULL) {
            piVar5 = NULL;
        }
        else {
            do {
                iVar3 = *(piVar5 + 6);
                if (*piVar5 == iVar1) {
                    piVar4 = *(piVar5 + 8);
                    if (piVar4 != NULL) {
                        *piVar4 = iVar3;
                        if (iVar3 != 0) {
                            *(iVar3 + 8) = piVar4;
                        }
                        *(piVar5 + 6) = 0;
                        piVar5[8] = 0;
                        piVar5[9] = 0;
                    }
                    break;
                }
                piVar5 = NULL;
                if (iVar3 != 0) {
                    piVar5 = iVar3 + -0x18;
                }
            } while (piVar5 != NULL);
        }
        pcVar2 = obj.camera_tbl_lock;
    }
    _raw_spin_unlock_bh(pcVar2);
    return piVar5;
}


// ===== sym.synx_util_destroy_data @ 0x08007e50 (size 208) =====

void sym.synx_util_destroy_data(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(arg1 + -8);
    if ((*(arg1_01 + 0x98) != 0) && (*(arg1_01 + 0x90) == *(arg1_01 + 0x98) + 1)) {
        sym.release_bound_synxs(arg1_01);
    }
    arg1_00 = arg1_01 + 0x90;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        iVar1 = *arg1_00;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar3) {
            *arg1_00 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.synx_util_destroy_coredata(arg1_00);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1_00,3);
    }
    kfree(arg1 + -0x10);
    return;
}


// ===== sym.synx_util_get_free_handle @ 0x08007f20 (size 164) =====

void sym.synx_util_get_free_handle(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    do {
        uVar4 = _find_first_zero_bit(arg1,arg2 & 0xffffffffU);
        if ((arg2 & 0xffffffffU) <= uVar4) {
            return;
        }
        uVar5 = 1L << (uVar4 & 0x3f);
        puVar1 = arg1 + (uVar4 >> 6 & 0x3ffffff) * 8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
    } while ((uVar4 & uVar5) != 0);
    return;
}


// ===== sym.synx_util_init_handle @ 0x08007fc4 (size 424) =====

void sym.synx_util_init_handle(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    uint8_t auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar8 = 0xffffffea;
    auStack_5c[0] = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar4 = *(arg1 + 0x48);
        do {
            uVar9 = _find_first_zero_bit(arg1 + 0x40c8,0x100);
            if (0xff < uVar9) goto code_r0x0800807c;
            uVar10 = 1L << (uVar9 & 0x3f);
            puVar1 = arg1 + (uVar9 >> 6 & 0x3ffffff) * 8 + 0x40c8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar12 = *puVar1;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                    *puVar1 = uVar12 | uVar10;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
        } while ((uVar12 & uVar10) != 0);
        if (uVar9 < 0x100) {
            do {
                get_random_bytes(auStack_5c,1);
            } while (auStack_5c[0] == 0);
            if (0x100 < uVar9) goto code_r0x0800814c;
            uVar3 = iVar4 << 0x10 | uVar9 & 0xff | auStack_5c[0] << 8;
            iVar2 = arg1 + uVar9 * 0x30 + 0x68e8;
            mutex_lock(iVar2);
            iVar11 = arg1 + uVar9 * 0x28;
            *(iVar11 + 0x4100) = 0;
            *(iVar11 + 0x40f8) = 0;
            *(iVar11 + 0x4108) = 0;
            *(iVar11 + 0x40e8) = arg1;
            *(iVar11 + 0x4100) = uVar3;
            *(iVar11 + 0x40f0) = arg2;
            *(iVar11 + 0x40f8) = 1;
            *(iVar11 + 0x4108) = 1;
            mutex_unlock(iVar2);
            uVar8 = 0;
            *arg3 = uVar3;
        }
        else {
code_r0x0800807c:
            uVar8 = 0xfffffff4;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(uVar8);
code_r0x0800814c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8008150);
    (*pcVar7)();
}


// ===== sym.synx_util_merge_error @ 0x0800816c (size 180) =====

ulong sym.synx_util_merge_error(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((arg1 != 0) && (arg2 != 0)) {
        if (arg3 != 0) {
            uVar2 = arg3 & 0xffffffff;
            do {
                arg1_00 = sym.synx_util_acquire_handle(arg1,*arg2);
                if (((arg1_00 == 0) || (arg1_01 = *(arg1_00 + 8), arg1_01 == 0)) || (*(arg1_01 + 0x40) == 0)) {
                    _printk(0x80015ac,*(arg1 + 0x48),*arg2);
                }
                else {
                    sym.synx_util_put_references(arg1_01);
                    sym.synx_util_release_handle(arg1_00);
                }
                uVar2 = uVar2 - 1;
                arg2 = arg2 + 4;
            } while (uVar2 != 0);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.synx_util_acquire_handle @ 0x08008220 (size 364) =====

int64_t sym.synx_util_acquire_handle(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    uVar9 = arg2 & 0xff;
    iVar1 = arg1 + uVar9 * 0x30 + 0x68e8;
    mutex_lock(iVar1);
    iVar8 = arg1 + uVar9 * 0x28;
    if (*(iVar8 + 0x40f0) == 0) {
        uVar6 = *(arg1 + 0x48);
        uVar7 = 0x80025b5;
    }
    else if (*(arg1 + uVar9 * 0x28 + 0x4100) == arg2) {
        if (*(arg1 + uVar9 * 0x28 + 0x4108) == 0) {
            uVar6 = *(arg1 + 0x48);
            uVar7 = 0x80025e2;
        }
        else {
            puVar2 = arg1 + uVar9 * 0x28 + 0x40f8;
            if (*puVar2 != 0) {
                iVar8 = iVar8 + 0x40e8;
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    uVar3 = *puVar2;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                        *puVar2 = uVar3 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar3 == 0) {
                    uVar7 = 2;
                }
                else {
                    if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x08008334;
                    uVar7 = 1;
                }
                refcount_warn_saturate(puVar2,uVar7);
                goto code_r0x08008334;
            }
            uVar6 = *(arg1 + 0x48);
            uVar7 = 0x8001dd0;
        }
    }
    else {
        uVar6 = *(arg1 + 0x48);
        uVar7 = 0x8001ed0;
    }
    _printk(uVar7,uVar6,arg2 & 0xffffffff);
    iVar8 = 0;
code_r0x08008334:
    mutex_unlock(iVar1);
    return iVar8;
}


// ===== sym.synx_util_put_references @ 0x0800838c (size 340) =====

void sym.synx_util_put_references(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x40);
    if (*(iVar6 + 8) == dma_fence_array_ops) {
        if ((iVar6 != 0) && (*(iVar6 + 0x44) != 0)) {
            uVar7 = 0;
            do {
                iVar5 = *(*(iVar6 + 0x50) + uVar7 * 8);
                if (iVar5 != 0) {
                    piVar1 = iVar5 + 0x38;
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
                        dma_fence_release();
                    }
                    else if (iVar2 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(iVar6 + 0x44));
        }
    }
    else if (iVar6 != 0) {
        piVar1 = iVar6 + 0x38;
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
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.synx_util_release_handle @ 0x080084e0 (size 480) =====

void sym.synx_util_release_handle(int64_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    int *arg1_01;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    iVar1 = *arg1 + *(arg1 + 0x18) * 0x30 + 0x68e8;
    mutex_lock(iVar1);
    if (*(arg1 + 8) == 0) {
        _printk(0x8002209,"synx_util_release_handle",*(arg1 + 0x18));
        goto code_r0x0800861c;
    }
    arg1_01 = arg1 + 0x10;
    Hint_Prefetch(arg1_01,2,0,1);
    do {
        iVar5 = *arg1_01;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(arg1_01,0x10);
        if (bVar7) {
            *arg1_01 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (iVar5 == 1) {
        DataMemoryBarrier(2,1);
        if (*(arg1 + 0x14) != 0) goto code_r0x0800861c;
        uVar4 = *(arg1 + 0x18);
        iVar3 = *arg1;
        arg1_00 = *(arg1 + 8);
        *(arg1 + 0x18) = 0;
        *(arg1 + 0x20) = 0;
        *arg1 = 0;
        *(arg1 + 8) = 0;
        puVar2 = iVar3 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
        arg1_01[0] = 0;
        arg1_01[1] = 0;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
                *puVar2 = *puVar2 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        if ((*(arg1_00 + 0x98) != 0) && (*(arg1_00 + 0x90) == *(arg1_00 + 0x98) + 1)) {
            sym.release_bound_synxs(arg1_00);
        }
        arg1_01 = arg1_00 + 0x90;
        Hint_Prefetch(arg1_01,2,0,1);
        do {
            iVar5 = *arg1_01;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(arg1_01,0x10);
            if (bVar7) {
                *arg1_01 = iVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        if (iVar5 == 1) {
            DataMemoryBarrier(2,1);
            sym.synx_util_destroy_coredata(arg1_01);
            goto code_r0x0800861c;
        }
    }
    if (iVar5 < 1) {
        refcount_warn_saturate(arg1_01,3);
    }
code_r0x0800861c:
    mutex_unlock(iVar1);
    return;
}


// ===== sym.synx_util_validate_merge @ 0x080086c0 (size 560) =====

ulong sym.synx_util_validate_merge(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *in_x4;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 2) {
        _printk(0x8001d25);
    }
    else {
        iVar8 = arg3 << 3;
        iVar4 = __kmalloc(iVar8,0xdc0);
        if ((iVar4 == 0) || (iVar8 = __kmalloc(iVar8,0xdc0), iVar8 == 0)) {
            return 0xfffffff4;
        }
        uVar9 = 0;
        uVar10 = 0;
        do {
            iVar5 = sym.synx_util_acquire_handle(arg1,*(arg2 + uVar9 * 4));
            *(iVar4 + uVar9 * 8) = iVar5;
            if (iVar5 == 0) {
                *(iVar8 + uVar9 * 8) = 0;
code_r0x08008870:
                _printk(0x80012d8,*(arg1 + 0x48),*(arg2 + uVar9 * 4));
                *in_x4 = uVar9;
                if (uVar9 != 0) goto code_r0x0800888c;
                goto code_r0x080088b4;
            }
            iVar5 = *(iVar5 + 8);
            *(iVar8 + uVar9 * 8) = iVar5;
            if ((iVar5 == 0) || (*(iVar5 + 0x40) == 0)) goto code_r0x08008870;
            iVar2 = sym.synx_util_get_references(iVar5);
            uVar9 = uVar9 + 1;
            uVar10 = iVar2 + uVar10;
        } while (arg3 != uVar9);
        iVar5 = __kmalloc(uVar10 << 3,0xdc0);
        if (iVar5 != 0) {
            *arg4 = iVar5;
            uVar9 = 0;
            uVar3 = 0;
            if (arg3 < 2) {
                arg3 = 1;
            }
            do {
                iVar6 = *(*(iVar8 + uVar9 * 8) + 0x40);
                if (*(iVar6 + 8) == dma_fence_array_ops) {
                    if ((iVar6 == 0) || (*(iVar6 + 0x44) == 0)) {
                        uVar7 = 0;
                    }
                    else {
                        uVar10 = 0;
                        do {
                            iVar2 = uVar10;
                            iVar1 = uVar10 * 8;
                            uVar10 = uVar10 + 1;
                            *(iVar5 + (uVar3 + iVar2) * 8) = *(*(iVar6 + 0x50) + iVar1);
                            uVar7 = *(iVar6 + 0x44);
                        } while (uVar10 < uVar7);
                    }
                }
                else {
                    uVar7 = 1;
                    *(iVar5 + uVar3 * 8) = iVar6;
                }
                uVar3 = uVar7 + uVar3;
                sym.synx_util_release_handle(*(iVar4 + uVar9 * 8));
                uVar9 = uVar9 + 1;
            } while (uVar9 != arg3);
            uVar3 = sym.synx_util_remove_duplicates(iVar5,uVar3);
            *in_x4 = uVar3;
            kfree(iVar8);
            kfree(iVar4);
            return 0;
        }
        *in_x4 = arg3;
        if (arg3 != 0) {
code_r0x0800888c:
            uVar9 = 0;
            do {
                sym.synx_util_put_references(*(iVar8 + uVar9 * 8));
                sym.synx_util_release_handle(*(iVar4 + uVar9 * 8));
                uVar9 = uVar9 + 1;
            } while (uVar9 < *in_x4);
        }
code_r0x080088b4:
        *in_x4 = 0;
        kfree(iVar8);
        kfree(iVar4);
    }
    return 0xffffffea;
}


// ===== sym.synx_util_get_references @ 0x080088f0 (size 312) =====

uint64_t sym.synx_util_get_references(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x40);
    if (*(iVar8 + 8) == dma_fence_array_ops) {
        if ((iVar8 == 0) || (*(iVar8 + 0x44) == 0)) {
            uVar6 = 0;
        }
        else {
            uVar9 = 0;
            do {
                iVar7 = *(*(iVar8 + 0x50) + uVar9 * 8);
                if (iVar7 != 0) {
                    puVar1 = iVar7 + 0x38;
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
                        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08008970;
                        uVar5 = 1;
                    }
                    refcount_warn_saturate(puVar1,uVar5);
                }
code_r0x08008970:
                uVar6 = *(iVar8 + 0x44);
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar6);
        }
    }
    else {
        if (iVar8 != 0) {
            puVar1 = iVar8 + 0x38;
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
                uVar5 = 1;
                if (-1 < (uVar2 + 1 | uVar2)) {
                    return 1;
                }
            }
            refcount_warn_saturate(puVar1,uVar5);
        }
        uVar6 = 1;
    }
    return uVar6;
}


// ===== sym.synx_util_remove_duplicates @ 0x08008a28 (size 340) =====

uint32_t sym.synx_util_remove_duplicates(int64_t arg1,uint32_t arg2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8001be8);
        uVar6 = 0;
    }
    else if (arg2 < 2) {
        uVar6 = 1;
    }
    else {
        uVar7 = 1;
        uVar6 = 1;
        do {
            if (uVar6 != 0) {
                iVar5 = *(arg1 + uVar7 * 8);
                uVar8 = 0;
code_r0x08008a8c:
                if (iVar5 != *(arg1 + uVar8 * 8)) goto code_r0x08008a98;
                if (iVar5 != 0) {
                    piVar1 = iVar5 + 0x38;
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
                        dma_fence_release();
joined_r0x08008ae8:
                        if (uVar8 != uVar6) goto code_r0x08008a74;
                        goto code_r0x08008b10;
                    }
                    if (iVar2 < 1) {
                        refcount_warn_saturate(piVar1,3);
                        goto joined_r0x08008ae8;
                    }
                }
                if (uVar8 == uVar6) goto code_r0x08008b10;
                goto code_r0x08008a74;
            }
code_r0x08008b10:
            iVar5 = *(arg1 + uVar7 * 8);
code_r0x08008a68:
            *(arg1 + uVar6 * 8) = iVar5;
            uVar6 = uVar6 + 1;
code_r0x08008a74:
            uVar7 = uVar7 + 1;
        } while (uVar7 != arg2);
    }
    return uVar6;
code_r0x08008a98:
    uVar8 = uVar8 + 1;
    if (uVar6 == uVar8) goto code_r0x08008a68;
    goto code_r0x08008a8c;
}


// ===== sym.synx_util_get_object_status @ 0x08008b7c (size 364) =====

int sym.synx_util_get_object_status(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    iVar3 = *(arg1 + 0x40);
    if ((*(arg1 + 0x94) >> 1 & 1) == 0) {
        if (iVar3 != 0) {
            iVar1 = dma_fence_get_status();
            uVar5 = iVar1 + 5;
            if ((uVar5 < 7) && ((0x67U >> (uVar5 & 0x1f) & 1) != 0)) {
                return *(uVar5 * 4 + 0x8002d04);
            }
            return -iVar1;
        }
    }
    else if (iVar3 != 0) {
        if (*(iVar3 + 8) != dma_fence_array_ops) {
            return 0;
        }
        if (*(iVar3 + 0x44) == 0) {
            uVar5 = 0;
            uVar4 = 0;
        }
        else {
            uVar7 = 0;
            iVar1 = 0;
            uVar5 = 0;
            iVar6 = 0;
            do {
                if (*(*(iVar3 + 0x50) + uVar7 * 8) == 0) {
                    _printk(0x800184e);
code_r0x08008c20:
                    iVar1 = iVar1 + 1;
                }
                else {
                    iVar2 = dma_fence_get_status();
                    if (iVar2 + 5U < 3) goto code_r0x08008c20;
                    if (iVar2 == 0) {
code_r0x08008c70:
                        iVar6 = iVar6 + 1;
                    }
                    else {
                        if ((iVar2 != 1) && (iVar2 != -2)) {
                            if (iVar2 != -1) goto code_r0x08008c20;
                            goto code_r0x08008c70;
                        }
                        uVar5 = uVar5 + 1;
                    }
                }
                uVar4 = *(iVar3 + 0x44);
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar4);
            if (iVar1 != 0) {
                return 3;
            }
            if (iVar6 != 0) {
                return 1;
            }
        }
        return (uVar5 == uVar4) << 1;
    }
    _printk(0x800184e);
    return 0;
}


// ===== sym.__fence_state @ 0x08008ce8 (size 224) =====

int sym.__fence_state(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800184e);
        return 0;
    }
    if ((*(arg1 + 0x30) & 1) == 0) {
        pcVar4 = *(*(arg1 + 8) + 0x20);
        if (pcVar4 != NULL) {
            if (pcVar4 != sym.__typeid__ZTSFbP9dma_fenceE_global_addr) {
                __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar4,0x8000fa0);
            }
            uVar3 = (*pcVar4)(arg1);
            if ((uVar3 & 1) != 0) {
                dma_fence_signal_locked(arg1);
                goto code_r0x08008d3c;
            }
        }
        iVar2 = 1;
    }
    else {
code_r0x08008d3c:
        uVar1 = *(arg1 + 0x3c) + 5;
        if ((uVar1 < 7) && ((0x67U >> (uVar1 & 0x1f) & 1) != 0)) {
            iVar2 = *(uVar1 * 4 + 0x8002d20);
        }
        else {
            iVar2 = -*(arg1 + 0x3c);
        }
    }
    return iVar2;
}


// ===== sym.synx_util_get_object_status_locked @ 0x08008dc8 (size 264) =====

int64_t sym.synx_util_get_object_status_locked(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    if (arg1 != 0) {
        iVar2 = *(arg1 + 0x40);
        if ((*(arg1 + 0x94) >> 1 & 1) == 0) {
            iVar2 = sym.__fence_state(iVar2);
        }
        else {
            if (iVar2 == 0) {
                _printk(0x800184e);
            }
            else if (*(iVar2 + 8) == dma_fence_array_ops) {
                if (*(iVar2 + 0x44) == 0) {
                    uVar4 = 0;
                    uVar3 = 0;
                }
                else {
                    uVar7 = 0;
                    iVar6 = 0;
                    uVar4 = 0;
                    iVar5 = 0;
                    do {
                        iVar1 = sym.__fence_state(*(*(iVar2 + 0x50) + uVar7 * 8));
                        if (iVar1 == 2) {
                            uVar4 = uVar4 + 1;
                        }
                        else if (iVar1 == 1) {
                            iVar5 = iVar5 + 1;
                        }
                        else {
                            iVar6 = iVar6 + 1;
                        }
                        uVar3 = *(iVar2 + 0x44);
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar3);
                    if (iVar6 != 0) {
                        return 3;
                    }
                    if (iVar5 != 0) {
                        return 1;
                    }
                }
                return (uVar4 == uVar3) << 1;
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


// ===== sym.synx_util_update_handle @ 0x08008ed0 (size 1024) =====

uint sym.synx_util_update_handle(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t *puVar4;
    int iVar5;
    uint32_t uVar6;
    char cVar7;
    bool bVar8;
    ulong uVar9;
    int64_t *in_x4;
    ulong *in_x18;
    uint uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = 0xffffffea;
    if ((arg1 != 0) && (in_x4 != NULL)) {
        uVar13 = arg2 & 0xff;
        iVar11 = arg1 + uVar13 * 0x28;
        iVar2 = arg1 + uVar13 * 0x30 + 0x68e8;
        mutex_lock(iVar2);
        if (*(iVar11 + 0x40f0) != 0) {
            piVar3 = iVar11 + 0x40f0;
            puVar4 = iVar11 + 0x40f8;
code_r0x08008f58:
            if (*(iVar11 + 0x4100) == arg2) {
                if (*puVar4 != 0) {
                    if (*puVar4 != 1) goto code_r0x08008f78;
                    iVar11 = sym.synx_util_retrieve_data(arg3 & 0xffffffff,arg4);
                    if ((iVar11 == 0) || (iVar12 = *piVar3, *(iVar11 + 8) == iVar12)) {
                        Hint_Prefetch(puVar4,2,0,1);
                        do {
                            uVar6 = *puVar4;
                            cVar7 = '\x01';
                            bVar8 = ExclusiveMonitorPass(puVar4,0x10);
                            if (bVar8) {
                                *puVar4 = uVar6 + 1;
                                cVar7 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar7 != '\0');
                        if (uVar6 == 0) {
                            uVar9 = 2;
code_r0x0800909c:
                            refcount_warn_saturate(puVar4,uVar9);
                        }
                        else if ((uVar6 + 1 | uVar6) < 0) {
                            uVar9 = 1;
                            goto code_r0x0800909c;
                        }
                        uVar10 = 0;
                        *in_x4 = arg1 + uVar13 * 0x28 + 0x40e8;
                    }
                    else {
                        if ((*(iVar12 + 0x98) != 0) && (*(iVar12 + 0x90) == *(iVar12 + 0x98) + 1)) {
                            sym.release_bound_synxs(iVar12);
                        }
                        piVar1 = iVar12 + 0x90;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar5 = *piVar1;
                            cVar7 = '\x01';
                            bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar8) {
                                *piVar1 = iVar5 + -1;
                                cVar7 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar7 != '\0');
                        if (iVar5 == 1) {
                            DataMemoryBarrier(2,1);
                            sym.synx_util_destroy_coredata(piVar1);
                        }
                        else if (iVar5 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                        puVar4 = *(iVar11 + 8) + 0x90;
                        *piVar3 = *(iVar11 + 8);
                        Hint_Prefetch(puVar4,2,0,1);
                        do {
                            uVar6 = *puVar4;
                            cVar7 = '\x01';
                            bVar8 = ExclusiveMonitorPass(puVar4,0x10);
                            if (bVar8) {
                                *puVar4 = uVar6 + 1;
                                cVar7 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar7 != '\0');
                        if (uVar6 == 0) {
                            uVar9 = 2;
code_r0x080091a4:
                            refcount_warn_saturate(puVar4,uVar9);
                        }
                        else if ((uVar6 + 1 | uVar6) < 0) {
                            uVar9 = 1;
                            goto code_r0x080091a4;
                        }
                        *in_x4 = 0;
                        _raw_spin_lock_bh(obj.camera_tbl_lock);
                        piVar1 = iVar11 + 0x10;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar5 = *piVar1;
                            cVar7 = '\x01';
                            bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar8) {
                                *piVar1 = iVar5 + -1;
                                cVar7 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar7 != '\0');
                        if (iVar5 == 1) {
                            DataMemoryBarrier(2,1);
                            iVar12 = *(iVar11 + 8);
                            if ((*(iVar12 + 0x98) != 0) && (*(iVar12 + 0x90) == *(iVar12 + 0x98) + 1)) {
                                sym.release_bound_synxs(iVar12);
                            }
                            piVar1 = iVar12 + 0x90;
                            Hint_Prefetch(piVar1,2,0,1);
                            do {
                                iVar5 = *piVar1;
                                cVar7 = '\x01';
                                bVar8 = ExclusiveMonitorPass(piVar1,0x10);
                                if (bVar8) {
                                    *piVar1 = iVar5 + -1;
                                    cVar7 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar7 != '\0');
                            if (iVar5 == 1) {
                                DataMemoryBarrier(2,1);
                                sym.synx_util_destroy_coredata(piVar1);
                            }
                            else if (iVar5 < 1) {
                                refcount_warn_saturate(piVar1,3);
                            }
                            kfree(iVar11);
                        }
                        else if (iVar5 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                        _raw_spin_unlock_bh(obj.camera_tbl_lock);
                        uVar10 = 0;
                    }
                    goto code_r0x0800920c;
                }
                uVar10 = *(arg1 + 0x48);
                uVar9 = 0x8001dd0;
            }
            else {
                uVar10 = *(arg1 + 0x48);
                uVar9 = 0x8001ed0;
            }
            goto code_r0x08009070;
        }
code_r0x08008f90:
        uVar10 = *(arg1 + 0x48);
        uVar9 = 0x80025b5;
code_r0x08009070:
        _printk(uVar9,uVar10,arg2 & 0xffffffff);
        uVar10 = 0xffffffea;
code_r0x0800920c:
        mutex_unlock(iVar2);
    }
    return uVar10;
code_r0x08008f78:
    mutex_unlock(iVar2);
    mutex_lock(iVar2);
    if (*piVar3 == 0) goto code_r0x08008f90;
    goto code_r0x08008f58;
}


// ===== sym.synx_util_retrieve_data @ 0x080092d0 (size 496) =====

int * sym.synx_util_retrieve_data(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    code *pcVar7;
    ulong *in_x18;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg1;
    if (arg2 == 1) {
        _raw_spin_lock_bh(obj.global_tbl_lock);
        piVar8 = *(obj.synx_fence_ops + (iVar6 * 0x61c88647 >> 0x18) * 8) + -0x18;
        if (*(obj.synx_fence_ops + (iVar6 * 0x61c88647 >> 0x18) * 8) != 0 && piVar8 != NULL) {
code_r0x08009398:
            if (*piVar8 != iVar6) goto code_r0x080093a4;
            puVar2 = piVar8 + 4;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar3 = *puVar2;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (uVar3 == 0) {
                refcount_warn_saturate(puVar2,2);
            }
            else if ((uVar3 + 1 | uVar3) < 0) {
                refcount_warn_saturate(puVar2,1);
            }
            goto code_r0x08009410;
        }
        piVar8 = NULL;
code_r0x08009410:
        pcVar7 = obj.global_tbl_lock;
    }
    else {
        if (arg2 != 0) {
            _printk(0x80010c0);
            return NULL;
        }
        _raw_spin_lock_bh(obj.camera_tbl_lock);
        piVar8 = *("" + (iVar6 * 0x61c88647 >> 0x18) * 8) + -0x18;
        if (*("" + (iVar6 * 0x61c88647 >> 0x18) * 8) != 0 && piVar8 != NULL) {
code_r0x08009334:
            if (*piVar8 != iVar6) goto code_r0x08009340;
            puVar2 = piVar8 + 4;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar3 = *puVar2;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = uVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if (uVar3 == 0) {
                refcount_warn_saturate(puVar2,2);
            }
            else if ((uVar3 + 1 | uVar3) < 0) {
                refcount_warn_saturate(puVar2,1);
            }
            goto code_r0x080093e0;
        }
        piVar8 = NULL;
code_r0x080093e0:
        pcVar7 = obj.camera_tbl_lock;
    }
    _raw_spin_unlock_bh(pcVar7);
    return piVar8;
code_r0x080093a4:
    piVar1 = piVar8 + 6;
    piVar8 = NULL;
    if (*piVar1 != 0) {
        piVar8 = *piVar1 + -0x18;
    }
    if (piVar8 == NULL) goto code_r0x08009410;
    goto code_r0x08009398;
code_r0x08009340:
    piVar1 = piVar8 + 6;
    piVar8 = NULL;
    if (*piVar1 != 0) {
        piVar8 = *piVar1 + -0x18;
    }
    if (piVar8 == NULL) goto code_r0x080093e0;
    goto code_r0x08009334;
}


// ===== sym.synx_util_destroy_import_handle @ 0x080094c0 (size 320) =====

void sym.synx_util_destroy_import_handle(int64_t arg1)

{
    int *arg1_00;
    uint64_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -4) == 0) {
        uVar2 = *(arg1 + 4);
        iVar6 = *(arg1 + -0x14);
        *(arg1 + -4) = 0;
        arg1_01 = *(arg1 + -0xc);
        *(arg1 + 0xc) = 0;
        *(arg1 + -0x14) = 0;
        puVar1 = iVar6 + ((uVar2 & 0xc0) >> 3) + 0x40c8;
        *(arg1 + -0xc) = 0;
        *(arg1 + 4) = 0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 & (1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU);
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if ((*(arg1_01 + 0x98) != 0) && (*(arg1_01 + 0x90) == *(arg1_01 + 0x98) + 1)) {
            sym.release_bound_synxs(arg1_01);
        }
        arg1_00 = arg1_01 + 0x90;
        Hint_Prefetch(arg1_00,2,0,1);
        do {
            iVar3 = *arg1_00;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(arg1_00,0x10);
            if (bVar5) {
                *arg1_00 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            sym.synx_util_destroy_coredata(arg1_00);
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(arg1_00,3);
        }
    }
    return;
}


// ===== sym.synx_util_destroy_internal_handle @ 0x08009600 (size 308) =====

void sym.synx_util_destroy_internal_handle(int64_t arg1)

{
    int *arg1_00;
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t arg1_01;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 4) == 0) {
        uVar3 = *(arg1 + 8);
        iVar2 = *(arg1 + -0x10);
        arg1_01 = *(arg1 + -8);
        *(arg1 + 8) = 0;
        *(arg1 + 0x10) = 0;
        *(arg1 + -0x10) = 0;
        *(arg1 + -8) = 0;
        puVar1 = iVar2 + ((uVar3 & 0xc0) >> 3) + 0x40c8;
        *arg1 = 0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if ((*(arg1_01 + 0x98) != 0) && (*(arg1_01 + 0x90) == *(arg1_01 + 0x98) + 1)) {
            sym.release_bound_synxs(arg1_01);
        }
        arg1_00 = arg1_01 + 0x90;
        Hint_Prefetch(arg1_00,2,0,1);
        do {
            iVar4 = *arg1_00;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(arg1_00,0x10);
            if (bVar6) {
                *arg1_00 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.synx_util_destroy_coredata(arg1_00);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg1_00,3);
        }
    }
    return;
}


// ===== sym.synx_util_alloc_cb_entry @ 0x08009734 (size 292) =====

ulong sym.synx_util_alloc_cb_entry(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    char cVar6;
    bool bVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = 0xffffffea;
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        do {
            uVar8 = _find_first_zero_bit(arg1 + 0xa8,0x100);
            if (0xff < uVar8) goto code_r0x08009824;
            uVar10 = 1L << (uVar8 & 0x3f);
            puVar1 = arg1 + (uVar8 >> 6 & 0x3ffffff) * 8 + 0xa8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar11 = *puVar1;
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                    *puVar1 = uVar11 | uVar10;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
        } while ((uVar11 & uVar10) != 0);
        if (uVar8 < 0x100) {
            iVar2 = arg1 + uVar8 * 0x40;
            uVar9 = 0;
            *(iVar2 + 0xf8) = 0;
            *(iVar2 + 0x100) = 0;
            *(iVar2 + 0xe8) = 0;
            *(iVar2 + 0xf0) = 0;
            *(iVar2 + 0xd8) = 0;
            *(iVar2 + 0xe0) = 0;
            *(iVar2 + 200) = 0;
            *(iVar2 + 0xd0) = arg1;
            *(iVar2 + 200) = 1;
            *(iVar2 + 0xcc) = uVar8;
            uVar4 = *(arg2 + 0x18);
            uVar3 = *arg2;
            uVar5 = *(arg2 + 8);
            *(iVar2 + 0xe8) = *(arg2 + 0x10);
            *(iVar2 + 0xf0) = uVar4;
            *(iVar2 + 0xd8) = uVar3;
            *(iVar2 + 0xe0) = uVar5;
            *arg3 = uVar8;
        }
        else {
code_r0x08009824:
            _printk(0x800213a,*(arg1 + 0x48));
            uVar9 = 0xfffffff4;
        }
    }
    return uVar9;
}


// ===== sym.synx_util_clear_cb_entry @ 0x08009858 (size 176) =====

ulong sym.synx_util_clear_cb_entry(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        uVar2 = *(arg2 + 4);
        *(arg2 + 0x10) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x38) = 0;
        *arg2 = 0;
        *(arg2 + 8) = 0;
        if (uVar2 - 1 < 0xff) {
            puVar1 = arg1 + (uVar2 >> 3 & 0x1ffffff8) + 0xa8;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & (1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            return 0;
        }
        _printk(0x800118d,"synx_util_clear_cb_entry");
    }
    return 0xffffffea;
}


// ===== sym.synx_util_default_user_callback @ 0x08009908 (size 184) =====

void sym.synx_util_default_user_callback(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (iVar4 = *(arg2 + 8), iVar4 == 0)) {
        _printk(0x8002228,"synx_util_default_user_callback");
    }
    else {
        *(arg2 + 0x14) = arg1;
        mutex_lock(iVar4 + 0x50);
        piVar3 = *(iVar4 + 0x88);
        iVar1 = arg2 + 0x30;
        uVar2 = __list_add_valid(iVar1,piVar3,iVar4 + 0x80);
        if ((uVar2 & 1) != 0) {
            *(iVar4 + 0x88) = iVar1;
            *(arg2 + 0x30) = iVar4 + 0x80;
            *(arg2 + 0x38) = piVar3;
            *piVar3 = iVar1;
        }
        mutex_unlock(iVar4 + 0x50);
        __wake_up(iVar4 + 0x90,3,0,0);
    }
    return;
}


// ===== sym.synx_util_callback_dispatch @ 0x080099c0 (size 176) =====

void sym.synx_util_callback_dispatch(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800130c);
    }
    else if (arg1 + 0x160 != *(arg1 + 0x160)) {
        piVar4 = *(arg1 + 0x160);
        do {
            piVar5 = *piVar4;
            *(piVar4 + -7) = arg2;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = piVar4;
            piVar4[1] = piVar4;
            queue_work_on(0x20,*(_segment.ehdr + 0x10e8),piVar4 + -6);
            piVar4 = piVar5;
        } while (arg1 + 0x160 != piVar5);
    }
    return;
}


// ===== sym.synx_util_cb_dispatch @ 0x08009a70 (size 456) =====

void sym.synx_util_cb_dispatch(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t arg1_00;
    char *pcVar8;
    ulong *in_x18;
    uint32_t *puVar9;
    code *pcVar10;
    char *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = arg1 + -0x10;
    arg1_00 = sym.synx_get_client(*puVar9);
    if (arg1_00 == 0) {
        _printk(0x800173f,*puVar9);
        goto code_r0x08009b64;
    }
    uVar3 = *(arg1 + -0xc);
    if ((uVar3 == 0) || (0xff < uVar3)) {
        _printk(0x80023af,*(arg1_00 + 0x48));
    }
    else {
        iVar2 = arg1_00 + uVar3 * 0x40;
        pcVar8 = iVar2 + 200;
        if (*pcVar8 == '\0') {
            _printk(0x8002078);
        }
        else {
            pcVar10 = *(iVar2 + 0xe8);
            uVar4 = *(arg1 + -8);
            uVar5 = *(iVar2 + 0xd8);
            pcVar11 = pcVar8;
            if (pcVar10 != sym.synx_util_default_user_callback.cfi_jt) {
                pcVar11 = *(iVar2 + 0xe0);
                if (pcVar8 != NULL) {
                    uVar3 = *(arg1_00 + uVar3 * 0x40 + 0xcc);
                    *(iVar2 + 0xf8) = 0;
                    *(iVar2 + 0x100) = 0;
                    *(iVar2 + 0xe8) = 0;
                    *(iVar2 + 0xf0) = 0;
                    *(iVar2 + 0xd8) = 0;
                    *(iVar2 + 0xe0) = 0;
                    pcVar8[0] = '\0';
                    pcVar8[1] = '\0';
                    pcVar8[2] = '\0';
                    pcVar8[3] = '\0';
                    pcVar8[4] = '\0';
                    pcVar8[5] = '\0';
                    pcVar8[6] = '\0';
                    pcVar8[7] = '\0';
                    *(iVar2 + 0xd0) = 0;
                    if (uVar3 - 1 < 0xff) {
                        puVar1 = arg1_00 + (uVar3 >> 3 & 0x1ffffff8) + 0xa8;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar7) {
                                *puVar1 = *puVar1 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        goto code_r0x08009b34;
                    }
                    _printk(0x800118d,"synx_util_clear_cb_entry");
                }
                _printk(0x8001653,"",*(arg1_00 + 0x48));
            }
code_r0x08009b34:
            if (1 < (pcVar10 + -0x8003648 >> 3 | pcVar10 << 0x3d)) {
                __cfi_slowpath_diag(0x93244b09fa50f0b1,pcVar10,0x8000f40);
            }
            (*pcVar10)(uVar5,uVar4,pcVar11);
        }
    }
    sym.synx_put_client(arg1_00);
code_r0x08009b64:
    kfree(puVar9);
    return;
}


// ===== sym.synx_get_client @ 0x08009c38 (size 276) =====

int64_t sym.synx_get_client(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(_segment.ehdr + 0x98);
    iVar6 = *(_segment.ehdr + (arg1 & 0xffU) * 0x10 + 0xe8);
    if (iVar6 == 0) {
        iVar5 = sp_el0;
        _printk(0x8002403,arg1 & 0xffffffff,*(iVar5 + 0x5d8));
    }
    else if (*(iVar6 + 0x48) == arg1) {
        puVar1 = _segment.ehdr + (arg1 & 0xffU) * 0x10 + 0xf0;
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
            refcount_warn_saturate(puVar1,2);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            refcount_warn_saturate(puVar1,1);
        }
    }
    else {
        iVar6 = sp_el0;
        _printk(0x8001fc5,arg1 & 0xffffffff,*(iVar6 + 0x5d8));
        iVar6 = 0;
    }
    mutex_unlock(_segment.ehdr + 0x98);
    return iVar6;
}


// ===== sym.synx_put_client @ 0x08009d4c (size 272) =====

void sym.synx_put_client(int64_t arg1)

{
    int *arg1_00;
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8002694,"");
    }
    else {
        mutex_lock(_segment.ehdr + 0x98);
        uVar1 = *(arg1 + 0x48);
        if (*(_segment.ehdr + uVar1 * 0x10 + 0xe8) == arg1) {
            arg1_00 = _segment.ehdr + (uVar1 & 0xff) * 0x10 + 0xf0;
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar2 = *arg1_00;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar4) {
                    *arg1_00 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                sym.synx_client_destroy(arg1_00);
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
        }
        else {
            iVar5 = sp_el0;
            _printk(0x8001093,"",uVar1,*(iVar5 + 0x5d8));
        }
        mutex_unlock(_segment.ehdr + 0x98);
    }
    return;
}


// ===== sym.synx_util_import_object @ 0x08009e5c (size 780) =====

int64_t sym.synx_util_import_object(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int *arg1_00;
    uint64_t *puVar3;
    uint32_t uVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t arg1_01;
    ulong uVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t arg1_02;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0;
    }
    uVar4 = *arg1;
    arg1_01 = sym.synx_get_client(uVar4 >> 0x10);
    if (arg1_01 == 0) {
        _printk(0x800252f,uVar4 >> 0x10);
        return 0;
    }
    uVar13 = *arg1 & 0xff;
    iVar2 = arg1_01 + uVar13 * 0x30 + 0x68e8;
    mutex_lock(iVar2);
    if ((arg1_01 + uVar13 * 0x28 == -0x40e8) || (iVar12 = *(arg1_01 + uVar13 * 0x28 + 0x40f0), iVar12 == 0)) {
        uVar5 = *(arg1_01 + 0x48);
        iVar9 = *arg1;
        uVar8 = 0x80015e3;
    }
    else {
        iVar9 = *arg1;
        if (*(arg1_01 + uVar13 * 0x28 + 0x4100) == iVar9) {
            iVar10 = arg1_01 + uVar13 * 0x28;
            arg1_00 = iVar10 + 0x40fc;
            if (*arg1_00 == 0) {
                iVar12 = 0;
                goto code_r0x0800a088;
            }
            puVar1 = iVar12 + 0x90;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar4 = *puVar1;
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                    *puVar1 = uVar4 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            if (uVar4 == 0) {
                uVar8 = 2;
code_r0x0800a064:
                refcount_warn_saturate(puVar1,uVar8);
            }
            else if ((uVar4 + 1 | uVar4) < 0) {
                uVar8 = 1;
                goto code_r0x0800a064;
            }
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar9 = *arg1_00;
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar7) {
                    *arg1_00 = iVar9 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            if (iVar9 == 1) {
                DataMemoryBarrier(2,1);
                if (*(iVar10 + 0x40f8) != 0) goto code_r0x0800a088;
                uVar4 = *(iVar10 + 0x4100);
                iVar11 = *(iVar10 + 0x40e8);
                *(iVar10 + 0x40f8) = 0;
                arg1_02 = *(iVar10 + 0x40f0);
                *(iVar10 + 0x4108) = 0;
                *(iVar10 + 0x40e8) = 0;
                puVar3 = iVar11 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
                *(iVar10 + 0x40f0) = 0;
                *(iVar10 + 0x4100) = 0;
                Hint_Prefetch(puVar3,2,0,1);
                do {
                    cVar6 = '\x01';
                    bVar7 = ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar7) {
                        *puVar3 = *puVar3 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if ((*(arg1_02 + 0x98) != 0) && (*(arg1_02 + 0x90) == *(arg1_02 + 0x98) + 1)) {
                    sym.release_bound_synxs(arg1_02);
                }
                arg1_00 = arg1_02 + 0x90;
                Hint_Prefetch(arg1_00,2,0,1);
                do {
                    iVar9 = *arg1_00;
                    cVar6 = '\x01';
                    bVar7 = ExclusiveMonitorPass(arg1_00,0x10);
                    if (bVar7) {
                        *arg1_00 = iVar9 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if (iVar9 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.synx_util_destroy_coredata(arg1_00);
                    goto code_r0x0800a088;
                }
            }
            if (iVar9 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
            goto code_r0x0800a088;
        }
        uVar5 = *(arg1_01 + 0x48);
        uVar8 = 0x8002882;
    }
    _printk(uVar8,uVar5,iVar9);
    iVar12 = 0;
code_r0x0800a088:
    mutex_unlock(iVar2);
    sym.synx_put_client(arg1_01);
    return iVar12;
}


// ===== sym.synx_util_export_global @ 0x0800a168 (size 300) =====

int sym.synx_util_export_global(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (*(arg2 + 8) == 0)) {
        return -0x16;
    }
    arg1_00 = sym.synx_util_acquire_handle(arg1,*arg2);
    if ((arg1_00 == 0) || (arg3 = *(arg1_00 + 8), arg3 == 0)) {
        _printk(0x8001683,*(arg1 + 0x48),*arg2);
        iVar2 = -0x16;
        goto code_r0x0800a234;
    }
    mutex_lock(arg3 + 0x60);
    iVar2 = *(arg3 + 0x170);
    *(arg3 + 0x94) = *(arg3 + 0x94) | 1;
    if (iVar2 == 0) {
        uVar1 = *arg2;
        *(arg3 + 0x170) = uVar1 & 0xffffff;
        iVar2 = sym.synx_util_save_data(uVar1 & 0xffffff,1,arg3);
        if (iVar2 == 0) {
            iVar2 = *(arg3 + 0x170);
            goto code_r0x0800a1f0;
        }
        _printk(0x80023d7,*(arg1 + 0x48),*arg2);
    }
    else {
code_r0x0800a1f0:
        **(arg2 + 8) = iVar2;
        if ((*(arg3 + 0x94) >> 2 & 1) == 0) {
            iVar2 = -0x16;
            if (*(arg3 + 0x40) != 0) {
                iVar2 = 0;
            }
        }
        else {
            iVar2 = sym.synx_util_export_external(arg3,arg2);
        }
    }
    mutex_unlock(arg3 + 0x60);
code_r0x0800a234:
    sym.synx_util_release_handle(arg1_00);
    return iVar2;
}


// ===== sym.synx_util_save_data @ 0x0800a294 (size 532) =====

ulong sym.synx_util_save_data(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int *piVar6;
    code *pcVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        return 0xffffffea;
    }
    iVar5 = arg1;
    iVar11 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar11 = 0x30;
    }
    piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x28);
    if (piVar6 == NULL) {
        return 0xfffffff4;
    }
    *piVar6 = iVar5;
    *(piVar6 + 2) = arg3;
    piVar6[4] = 1;
    if (arg2 != 1) {
        if (arg2 != 0) {
            _printk(0x800216a);
            kfree(piVar6);
            return 0xffffffea;
        }
        puVar1 = arg3 + 0x90;
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
            uVar8 = 2;
code_r0x0800a458:
            refcount_warn_saturate(puVar1,uVar8);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar8 = 1;
            goto code_r0x0800a458;
        }
        _raw_spin_lock_bh(obj.camera_tbl_lock);
        piVar10 = "" + (iVar5 * 0x61c88647 >> 0x18) * 8;
        iVar11 = *piVar10;
        piVar9 = piVar6 + 6;
        *piVar9 = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = piVar9;
        }
        *piVar10 = piVar9;
        pcVar7 = obj.camera_tbl_lock;
        *(piVar6 + 8) = piVar10;
        goto code_r0x0800a3fc;
    }
    puVar1 = arg3 + 0x90;
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
        uVar8 = 2;
code_r0x0800a470:
        refcount_warn_saturate(puVar1,uVar8);
    }
    else if ((uVar2 + 1 | uVar2) < 0) {
        uVar8 = 1;
        goto code_r0x0800a470;
    }
    _raw_spin_lock_bh(obj.global_tbl_lock);
    pcVar7 = obj.synx_fence_ops + (iVar5 * 0x61c88647 >> 0x18) * 8;
    iVar11 = *pcVar7;
    piVar10 = piVar6 + 6;
    *piVar10 = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = piVar10;
    }
    *pcVar7 = piVar10;
    *(piVar6 + 8) = pcVar7;
    pcVar7 = obj.global_tbl_lock;
code_r0x0800a3fc:
    _raw_spin_unlock_bh(pcVar7);
    return 0;
}


// ===== sym.synx_util_export_external @ 0x0800a4a8 (size 372) =====

int sym.synx_util_export_external(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return -0x16;
    }
    if (arg2 == 0) {
        return -0x16;
    }
    iVar8 = *(arg2 + 0x10);
    if (iVar8 == 0) {
        return -0x16;
    }
    if (*(arg1 + 0x40) == 0) {
        *(arg1 + 0x40) = iVar8;
    }
    else {
        iVar5 = sym.synx_util_get_object_status(arg1);
        if ((iVar5 == 1) && (uVar6 = dma_fence_remove_callback(*(arg1 + 0x40),arg1 + 0x48), (uVar6 & 1) == 0)) {
            _printk(0x8001d51,*(arg1 + 0x40));
        }
        sym.dma_fence_put_1(*(arg1 + 0x40));
        _printk(0x80028ad,"synx_util_export_external",*(arg1 + 0x40),*(arg2 + 0x10));
        iVar8 = *(arg2 + 0x10);
        *(arg1 + 0x40) = iVar8;
        if (iVar8 == 0) goto code_r0x0800a50c;
    }
    puVar1 = iVar8 + 0x38;
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
        uVar7 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0800a50c;
        uVar7 = 1;
    }
    refcount_warn_saturate(puVar1,uVar7);
code_r0x0800a50c:
    iVar5 = dma_fence_add_callback(*(arg1 + 0x40),arg1 + 0x48,sym.synx_fence_callback.cfi_jt);
    if (iVar5 == -2) {
        sym.synx_signal_core(arg1,5,0,0);
        iVar5 = 0;
    }
    else if (iVar5 != 0) {
        _printk(0x8001c05,*arg2);
    }
    return iVar5;
}


// ===== sym.synx_util_export_local @ 0x0800a61c (size 368) =====

int sym.synx_util_export_local(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t arg1_00;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (*(arg2 + 8) == 0)) {
        return -0x16;
    }
    arg1_00 = sym.synx_util_acquire_handle(arg1,*arg2);
    if ((arg1_00 == 0) || (iVar8 = *(arg1_00 + 8), iVar8 == 0)) {
        _printk(0x8001683,*(arg1 + 0x48),*arg2);
code_r0x0800a72c:
        iVar6 = -0x16;
        goto code_r0x0800a730;
    }
    iVar1 = iVar8 + 0x60;
    mutex_lock(iVar1);
    if ((*(iVar8 + 0x94) >> 2 & 1) == 0) {
        iVar8 = *(iVar8 + 0x40);
        mutex_unlock(iVar1);
        if (iVar8 == 0) goto code_r0x0800a72c;
    }
    else {
        iVar6 = sym.synx_util_export_external(iVar8,arg2);
        mutex_unlock(iVar1);
        if (iVar6 != 0) goto code_r0x0800a730;
    }
    iVar8 = arg1 + *arg2 * 0x30 + 0x68e8;
    mutex_lock(iVar8);
    puVar2 = arg1_00 + 0x14;
    if (*puVar2 == 0) {
        *puVar2 = 1;
    }
    else {
        Hint_Prefetch(puVar2,2,0,1);
        do {
            uVar3 = *puVar2;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
                *puVar2 = uVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 0) {
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800a708;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar2,uVar7);
    }
code_r0x0800a708:
    mutex_unlock(iVar8);
    iVar6 = 0;
code_r0x0800a730:
    sym.synx_util_release_handle(arg1_00);
    return iVar6;
}


// ===== sym.synx_client_destroy @ 0x0800a78c (size 264) =====

void sym.synx_client_destroy(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = arg1 + -8;
    if (*piVar8 == 0) {
        _printk(0x80019f3);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
        if (piVar5 != NULL) {
            iVar7 = *piVar8;
            uVar6 = *(iVar7 + 0x48);
            *piVar8 = 0;
            *arg1 = 0;
            iVar2 = _segment.ehdr;
            *piVar5 = iVar7;
            puVar1 = iVar2 + ((uVar6 & 0xc0) >> 3) + 200;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            piVar5[1] = 0xfffffffe0;
            piVar5[2] = piVar5 + 2;
            piVar5[3] = piVar5 + 2;
            iVar2 = _segment.ehdr;
            piVar5[4] = sym.synx_client_cleanup.e5f9c54229f7c529d5d6064a71a4c35b.cfi_jt;
            queue_work_on(0x20,*(iVar2 + 0x10e8));
        }
    }
    return;
}


// ===== sym.synx_util_generate_timestamp @ 0x0800a894 (size 168) =====

ulong sym.synx_util_generate_timestamp(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [12];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    ktime_get_real_ts64(&uStack_38);
    time64_to_tm(uStack_38,0,&uStack_60);
    uVar6 = 0x8001aea;
    uVar3 = snprintf(arg1,arg2,"",uStack_50 + 1,uStack_58._4_4_,uStack_58 & 0xffffffff,uStack_60._4_4_,
                     uStack_60 & 0xffffffff);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar8 = __stack_chk_fail();
    uVar3 = auVar8._0_8_;
    *extraout_x18 = sym.synx_util_log_error;
    pcStack_98 = sym.synx_util_log_error;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffe0;
    if (*(_segment.ehdr + 0x1190) != 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        iVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x40);
        uVar3 = 0;
        if (iVar4 != 0) {
            *(iVar4 + 0x24) = auVar8._8_4_;
            *(iVar4 + 0x28) = uVar6;
            *(iVar4 + 0x20) = auVar8._0_4_;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e0 = 0;
            ktime_get_real_ts64(&uStack_b8);
            time64_to_tm(uStack_b8,0,&uStack_e0);
            snprintf(iVar4,0x20,"",uStack_d0 + 1,uStack_d8._4_4_,uStack_d8 & 0xffffffff,uStack_e0._4_4_,
                     uStack_e0 & 0xffffffff);
            mutex_lock(_segment.ehdr + 0x11a8);
            iVar1 = iVar4 + 0x30;
            iVar7 = *(_segment.ehdr + 0x1198);
            piVar2 = _segment.ehdr + 0x1198;
            uVar5 = __list_add_valid(iVar1,piVar2,iVar7);
            if ((uVar5 & 1) != 0) {
                *(iVar7 + 8) = iVar1;
                *(iVar4 + 0x30) = iVar7;
                *(iVar4 + 0x38) = piVar2;
                *piVar2 = iVar1;
            }
            uVar3 = mutex_unlock(_segment.ehdr + 0x11a8);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_a8) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.synx_util_init_table;
    memset(obj.synx_fence_ops,0,0x800);
    memset("",0,0x800);
    *0x8001000 = 0;
    return 0;
}


// ===== sym.synx_util_log_error @ 0x0800a93c (size 352) =====

int64_t sym.synx_util_log_error(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    if (*(_segment.ehdr + 0x1190) != 0) {
        uVar3 = arg1;
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        iVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x40);
        arg1 = 0;
        if (iVar4 != 0) {
            *(iVar4 + 0x24) = arg2;
            *(iVar4 + 0x28) = arg3;
            *(iVar4 + 0x20) = uVar3;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            ktime_get_real_ts64(&uStack_58);
            time64_to_tm(uStack_58,0,&uStack_80);
            snprintf(iVar4,0x20,"",uStack_70 + 1,uStack_78._4_4_,uStack_78 & 0xffffffff,uStack_80._4_4_,
                     uStack_80 & 0xffffffff);
            mutex_lock(_segment.ehdr + 0x11a8);
            iVar1 = iVar4 + 0x30;
            iVar6 = *(_segment.ehdr + 0x1198);
            piVar2 = _segment.ehdr + 0x1198;
            uVar5 = __list_add_valid(iVar1,piVar2,iVar6);
            if ((uVar5 & 1) != 0) {
                *(iVar6 + 8) = iVar1;
                *(iVar4 + 0x30) = iVar6;
                *(iVar4 + 0x38) = piVar2;
                *piVar2 = iVar1;
            }
            arg1 = mutex_unlock(_segment.ehdr + 0x11a8);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return arg1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.synx_util_init_table;
    memset(obj.synx_fence_ops,0,0x800);
    memset("",0,0x800);
    *0x8001000 = 0;
    return 0;
}


// ===== sym.synx_util_init_table @ 0x0800aa9c (size 92) =====

ulong sym.synx_util_init_table(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    memset(obj.synx_fence_ops,0,0x800);
    memset("",0,0x800);
    *0x8001000 = 0;
    return 0;
}


// ===== sym.synx_client_cleanup @ 0x0800aaf8 (size 940) =====

void sym.synx_client_cleanup(int64_t arg1)

{
    int *piVar1;
    int64_t *arg1_00;
    int *arg1_01;
    int64_t iVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = 0;
    iVar9 = *(arg1 + -8);
    iVar2 = iVar9 + 0x40e8;
    do {
        if (*(iVar2 + iVar11 * 0x28 + 8) != 0) {
            piVar12 = iVar2 + iVar11 * 0x28;
            piVar13 = piVar12 + 2;
            iVar7 = *piVar13;
            while (iVar7 != 0) {
                Hint_Prefetch(piVar13,2,0,1);
                do {
                    iVar7 = *piVar13;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar13,0x10);
                    if (bVar6) {
                        *piVar13 = iVar7 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                arg1_00 = piVar13;
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    if (*(piVar12 + 0x14) == 0) {
                        uVar4 = *(piVar12 + 3);
                        iVar8 = *piVar12;
                        iVar10 = piVar12[1];
                        *piVar12 = 0;
                        piVar12[1] = 0;
                        piVar12[3] = 0;
                        piVar12[4] = 0;
                        piVar12[2] = 0;
                        puVar3 = iVar8 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
                        Hint_Prefetch(puVar3,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
                            if (bVar6) {
                                *puVar3 = *puVar3 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if ((*(iVar10 + 0x98) != 0) && (*(iVar10 + 0x90) == *(iVar10 + 0x98) + 1)) {
                            sym.release_bound_synxs(iVar10);
                        }
                        arg1_00 = iVar10 + 0x90;
                        Hint_Prefetch(arg1_00,2,0,1);
                        do {
                            iVar7 = *arg1_00;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(arg1_00,0x10);
                            if (bVar6) {
                                *arg1_00 = iVar7 + -1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (iVar7 != 1) goto joined_r0x0800ab80;
                        DataMemoryBarrier(2,1);
                        sym.synx_util_destroy_coredata(arg1_00);
                    }
                }
                else {
joined_r0x0800ab80:
                    if (iVar7 < 1) {
                        refcount_warn_saturate(arg1_00,3);
                    }
                }
                iVar7 = *piVar13;
            }
            piVar13 = iVar2 + iVar11 * 0x28;
            piVar1 = piVar13 + 0x14;
            iVar7 = *piVar1;
            while (iVar7 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar7 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                        *piVar1 = iVar7 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                arg1_01 = piVar1;
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    if (piVar13[2] == 0) {
                        uVar4 = *(piVar13 + 3);
                        iVar8 = *piVar13;
                        iVar10 = piVar13[1];
                        *piVar13 = 0;
                        piVar13[1] = 0;
                        piVar13[3] = 0;
                        piVar13[4] = 0;
                        piVar13[2] = 0;
                        puVar3 = iVar8 + ((uVar4 & 0xc0) >> 3) + 0x40c8;
                        Hint_Prefetch(puVar3,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
                            if (bVar6) {
                                *puVar3 = *puVar3 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if ((*(iVar10 + 0x98) != 0) && (*(iVar10 + 0x90) == *(iVar10 + 0x98) + 1)) {
                            sym.release_bound_synxs(iVar10);
                        }
                        arg1_01 = iVar10 + 0x90;
                        Hint_Prefetch(arg1_01,2,0,1);
                        do {
                            iVar7 = *arg1_01;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(arg1_01,0x10);
                            if (bVar6) {
                                *arg1_01 = iVar7 + -1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (iVar7 != 1) goto joined_r0x0800ac94;
                        DataMemoryBarrier(2,1);
                        sym.synx_util_destroy_coredata(arg1_01);
                    }
                }
                else {
joined_r0x0800ac94:
                    if (iVar7 < 1) {
                        refcount_warn_saturate(arg1_01,3);
                    }
                }
                iVar7 = *piVar1;
            }
        }
        iVar11 = iVar11 + 1;
        if (iVar11 == 0x100) {
            _printk(0x8002717,*(iVar9 + 0x48),iVar9 + 8,*(iVar9 + 0x48));
            vfree(iVar9);
            kfree(arg1 + -8);
            return;
        }
    } while( true );
}


// ===== sym.populate_bound_rows @ 0x0800aea4 (size 384) =====

void sym.populate_bound_rows(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x98) != 0) {
        iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0xa8));
        if (1 < *(arg1 + 0x98)) {
            arg2 = arg2 + iVar2;
            iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0xc0));
            if (2 < *(arg1 + 0x98)) {
                arg2 = arg2 + iVar2;
                iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0xd8));
                if (3 < *(arg1 + 0x98)) {
                    arg2 = arg2 + iVar2;
                    iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0xf0));
                    if (4 < *(arg1 + 0x98)) {
                        arg2 = arg2 + iVar2;
                        iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0x108));
                        if (5 < *(arg1 + 0x98)) {
                            arg2 = arg2 + iVar2;
                            iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0x120));
                            if (6 < *(arg1 + 0x98)) {
                                arg2 = arg2 + iVar2;
                                iVar2 = scnprintf(arg2,arg3 - arg2,"",*(arg1 + 0x138));
                                if ((7 < *(arg1 + 0x98)) &&
                                   (scnprintf(arg2 + iVar2,arg3 - (arg2 + iVar2),"",*(arg1 + 0x150)),
                                   8 < *(arg1 + 0x98))) {
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800b024);
                                    (*pcVar1)();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


// ===== sym.synx_init_debugfs_dir @ 0x0800b024 (size 160) =====

int64_t sym.synx_init_debugfs_dir(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = debugfs_create_dir("synx_debug",0);
    if (iVar1 != 0) {
        iVar2 = debugfs_create_file("",0x1a4,iVar1,arg1,obj.synx_table_fops);
        if (iVar2 == 0) {
            iVar1 = 0;
        }
        else {
            __mutex_init(arg1 + 0x11a8,"",obj.synx_init_debugfs_dir.__key);
            *(arg1 + 0x1198) = arg1 + 0x1198;
            *(arg1 + 0x11a0) = arg1 + 0x1198;
        }
    }
    return iVar1;
}


// ===== sym.synx_remove_debugfs_dir @ 0x0800b0c4 (size 40) =====

void sym.synx_remove_debugfs_dir(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(arg1 + 0x1190));
    return;
}


// ===== sym.synx_table_read @ 0x0800b0ec (size 1168) =====

//WARNING: Type propagation algorithm not settling

ulong sym.synx_table_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t arg3_00;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int iVar6;
    uint uVar7;
    int64_t iVar8;
    int64_t arg1_00;
    uint64_t uVar9;
    ulong uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t arg1_01;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0xd8);
    iVar8 = kmalloc_order_trace(0x2400,0xdc0,2);
    if (iVar8 == 0) {
        uVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar12 = iVar8;
        if ((_segment.ehdr & 1) != 0) {
            iVar6 = scnprintf(iVar8,0x2400,"");
            iVar12 = iVar8 + iVar6;
        }
        arg3_00 = iVar8 + 0x2400;
        if ((_segment.ehdr >> 1 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"|    ID    |");
            iVar12 = iVar12 + iVar6;
        }
        if ((_segment.ehdr >> 2 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"");
            iVar12 = iVar12 + iVar6;
        }
        if ((_segment.ehdr >> 3 & 1) != 0) {
            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"");
            iVar12 = iVar12 + iVar6;
        }
        iVar6 = scnprintf(iVar12,arg3_00 - iVar12,0x8002287);
        iVar12 = iVar12 + iVar6;
        iVar15 = 0;
        do {
            mutex_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
            iVar14 = CONCAT44(*0x8000004,_segment.ehdr) + iVar15 * 0x10;
            piVar13 = iVar14 + 0xe8;
            if (*piVar13 == 0) {
                mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
            }
            else {
                puVar1 = iVar14 + 0xf0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar16 = *puVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar16 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (uVar16 == 0) {
                    uVar10 = 2;
code_r0x0800b434:
                    refcount_warn_saturate(puVar1,uVar10);
                }
                else if ((uVar16 + 1 | uVar16) < 0) {
                    uVar10 = 1;
                    goto code_r0x0800b434;
                }
                iVar14 = *piVar13;
                mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x98);
                iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"=============== session %08u ===============\n",
                                  *(iVar14 + 0x48));
                iVar12 = iVar12 + iVar6;
                iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"session name ::: %s\n",iVar14 + 8);
                uVar16 = 0;
                iVar12 = iVar12 + iVar6;
                do {
                    arg1_00 = sym.synx_util_acquire_handle(iVar14,uVar16);
                    if (((arg1_00 != 0) && (arg1_01 = *(arg1_00 + 8), arg1_01 != 0)) && (*(arg1_01 + 0x40) != 0)) {
                        mutex_lock(arg1_01 + 0x60);
                        if ((_segment.ehdr & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"|%10s|",arg1_01);
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 1 & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"",uVar16);
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 2 & 1) != 0) {
                            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"|%11d|",*(arg1_01 + 0x98));
                            iVar12 = iVar12 + iVar6;
                        }
                        if ((_segment.ehdr >> 3 & 1) != 0) {
                            uVar7 = sym.synx_util_get_object_status(arg1_01);
                            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"",uVar7);
                            iVar12 = iVar12 + iVar6;
                        }
                        if (((_segment.ehdr >> 2 & 1) != 0) && (*(arg1_01 + 0x98) != 0)) {
                            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"\nBound synx: ");
                            iVar12 = iVar12 + iVar6;
                            sym.populate_bound_rows(arg1_01,iVar12,arg3_00);
                        }
                        mutex_unlock(arg1_01 + 0x60);
                        iVar6 = scnprintf(iVar12,arg3_00 - iVar12,0x8002287);
                        iVar12 = iVar12 + iVar6;
                        sym.synx_util_release_handle(arg1_00);
                    }
                    uVar16 = uVar16 + 1;
                } while (uVar16 != 0x100);
                iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"\n================================================\n\n");
                iVar12 = iVar12 + iVar6;
                sym.synx_put_client(iVar14);
            }
            iVar15 = iVar15 + 1;
        } while (iVar15 != 0x100);
        if ((*0x8000e59 < '\0') && (piVar13 = iVar11 + 0x1198, piVar13 != *piVar13)) {
            iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"\nError(s): ");
            iVar12 = iVar12 + iVar6;
            mutex_lock(iVar11 + 0x11a8);
            piVar5 = *(iVar11 + 0x1198);
            while (piVar13 != piVar5) {
                piVar17 = *piVar5;
                iVar6 = scnprintf(iVar12,arg3_00 - iVar12,"",piVar5 + -6,*(piVar5 + -0xc),piVar5[-1]);
                uVar9 = __list_del_entry_valid(piVar5);
                if ((uVar9 & 1) != 0) {
                    iVar15 = *piVar5;
                    piVar2 = piVar5[1];
                    *(iVar15 + 8) = piVar2;
                    *piVar2 = iVar15;
                }
                iVar12 = iVar12 + iVar6;
                *piVar5 = -0x2152ffffffffff00;
                piVar5[1] = -0x2152fffffffffede;
                kfree(piVar5 + -6);
                piVar5 = piVar17;
            }
            mutex_unlock(iVar11 + 0x11a8);
        }
        uVar10 = simple_read_from_buffer(arg2,arg3,arg4,iVar8,iVar12 - iVar8);
        kfree(iVar8);
    }
    return uVar10;
}


// ===== sym.synx_table_write @ 0x0800b580 (size 460) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.synx_table_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    iStack_70 = iVar2;
    if (iVar2 == 0) {
        arg2 = -0xc;
    }
    else {
        iVar1 = sym._copy_from_user_1(iVar2,arg1);
        if (iVar1 == 0) {
            iVar2 = strsep(&iStack_70,obj.delim);
            while (iVar2 != 0) {
                iVar1 = strcmp(iVar2,"bound\n");
                if (iVar1 == 0) {
                    uVar3 = 4;
code_r0x0800b670:
                    _segment.ehdr = _segment.ehdr ^ uVar3;
                }
                else {
                    iVar1 = strcmp(iVar2,"name\n");
                    if (iVar1 == 0) {
                        uVar3 = 1;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"");
                    if (iVar1 == 0) {
                        uVar3 = 2;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"status\n");
                    if (iVar1 == 0) {
                        uVar3 = 8;
                        goto code_r0x0800b670;
                    }
                    iVar1 = strcmp(iVar2,"");
                    if (iVar1 == 0) {
                        uVar3 = 0x8000;
                        goto code_r0x0800b670;
                    }
                }
                iVar2 = strsep(&iStack_70,obj.delim);
            }
            kfree(iStack_70);
        }
        else {
            kfree(iVar2);
            arg2 = -0xe;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return arg2;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800b8a8 (size 608) =====

int sym.init_module(void)

{
    uint *puVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001cdf);
    _segment.ehdr = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x11e0);
    if (_segment.ehdr == 0) {
        iVar6 = -0xc;
    }
    else {
        iVar6 = alloc_chrdev_region(_segment.ehdr + 0x88,0,1,"synx_device");
        if (iVar6 < 0) {
            _printk(0x80018dc);
        }
        else {
            cdev_init(_segment.ehdr,obj.synx_fops);
            iVar5 = _segment.ehdr;
            puVar1 = _segment.ehdr + 0x88;
            *(_segment.ehdr + 0x60) = obj.__this_module;
            iVar6 = cdev_add(iVar5,*puVar1,1);
            if (iVar6 < 0) {
                _printk(0x8001e3a);
            }
            else {
                uVar7 = __class_create(obj.__this_module,"synx_device",obj.synx_initialize.__key);
                puVar1 = _segment.ehdr + 0x88;
                *(_segment.ehdr + 0x90) = uVar7;
                device_create(uVar7,0,*puVar1,0,"synx_device");
                iVar8 = alloc_workqueue("",0x12,4);
                iVar5 = _segment.ehdr;
                *(_segment.ehdr + 0x10e8) = iVar8;
                if (iVar8 != 0) {
                    __mutex_init(iVar5 + 0x98,"",obj.synx_initialize.__key);
                    __mutex_init(_segment.ehdr + 0x10f8,"",obj.synx_initialize.__key);
                    uVar7 = dma_fence_context_alloc(1);
                    puVar2 = _segment.ehdr + 200;
                    *(_segment.ehdr + 0x10f0) = uVar7;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar4) {
                            *puVar2 = *puVar2 | 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    uVar7 = sym.synx_init_debugfs_dir(_segment.ehdr);
                    *(_segment.ehdr + 0x1190) = uVar7;
                    ipc_lite_register_client(sym.synx_ipc_callback.cfi_jt,0);
                    memset(obj.synx_fence_ops,0,0x800);
                    memset("",0,0x800);
                    *0x8001000 = 0;
                    _printk(0x80018fe);
                    return 0;
                }
                _printk(0x8002345);
                device_destroy(*(_segment.ehdr + 0x90),*(_segment.ehdr + 0x88));
                class_destroy(*(_segment.ehdr + 0x90));
                iVar6 = -0x16;
            }
            unregister_chrdev_region(*(_segment.ehdr + 0x88),1);
        }
        kfree(_segment.ehdr);
    }
    return iVar6;
}


// ===== sym.cleanup_module @ 0x0800bb08 (size 232) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(*(_segment.ehdr + 0x90),*(_segment.ehdr + 0x88));
    class_destroy(*(_segment.ehdr + 0x90));
    cdev_del(_segment.ehdr);
    unregister_chrdev_region(*(_segment.ehdr + 0x88),1);
    debugfs_remove(*(_segment.ehdr + 0x1190));
    piVar4 = *(_segment.ehdr + 0x1198);
    if (_segment.ehdr + 0x1198 != piVar4) {
        do {
            piVar5 = *piVar4;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4 + -6);
            piVar4 = piVar5;
        } while (_segment.ehdr + 0x1198 != piVar5);
    }
    kfree();
    return;
}

