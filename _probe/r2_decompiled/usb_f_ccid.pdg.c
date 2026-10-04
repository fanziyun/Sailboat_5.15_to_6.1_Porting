// decompiled from usb_f_ccid by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 852) =====

//WARNING: Switch with 1 destination removed at 0x08003474

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0xb18138ae74ccd30) {
            if (arg1 < -0x5559db05f9d8bdf4) {
                if (arg1 == -0x61af895beaf3d6ee) {
                    pcVar2 = sym.ccid_function_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                else {
                    if (arg1 != -0x55bd4d1e73a69e63) goto code_r0x08003434;
                    pcVar2 = sym.ccid_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
            }
            else if (arg1 == -0x5559db05f9d8bdf4) {
                pcVar2 = sym.ccid_function_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x1f5194b81050a881) goto code_r0x08003434;
                pcVar2 = sym.ccid_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < -0x391b10cb41dc2a3) {
            if (arg1 != -0xb18138ae74ccd30) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8001400 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003434;
            }
            pcVar2 = sym.ccid_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x391b10cb41dc2a3) {
            pcVar2 = sym.ccid_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x890743871a4a53) goto code_r0x08003434;
            pcVar2 = sym.ccid_ctrl_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x2335293b6d480f98) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08003434;
                pcVar2 = sym.ccid_ctrl_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001274:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003434;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) {
                if (arg1 != 0x1e8c334cfa2d7333) goto code_r0x08003434;
                pcVar2 = sym.ccid_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001274;
            }
            pcVar2 = sym.ccid_bulk_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x6322b72e887e81ab) {
        if (arg1 == 0x2335293b6d480f98) {
            pcVar2 = sym.ccid_function_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x40ceb27a7e2157a1) goto code_r0x08003434;
            pcVar2 = sym.ccid_function_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x6322b72e887e81ab) {
        pcVar2 = sym.ccid_attr_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x643f348a21390606) {
            if ((pcVar1 + -0x8001398 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08003434;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003434;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003434:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003488);
    (*pcVar1)();
}


// ===== sym.ccid_function_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001360 (size 8) =====

uint64_t sym.ccid_function_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    code cVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(param_1 + 0x30);
    iVar4 = usb_interface_id();
    *(param_2 + 0xd8) = iVar4;
    if (iVar4 < 0) {
        _printk(0x80009e3,"ccid_function_bind");
        piVar10 = *(param_2 + 0xd8);
        goto code_r0x08002e28;
    }
    *0x800041a = iVar4;
    puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_notify_desc);
    if (puVar5 == NULL) {
        _printk(0x8000683,"ccid_function_bind");
        piVar10 = 0xffffffed;
        goto code_r0x08002e28;
    }
    *(param_2 + 0xe8) = puVar5;
    *puVar5 = puVar9;
    puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_in_desc);
    if (puVar5 == NULL) {
        _printk(0x8000a0c,"ccid_function_bind");
        piVar10 = 0xffffffed;
    }
    else {
        *(param_2 + 0xf0) = puVar5;
        *puVar5 = puVar9;
        puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_out_desc);
        if (puVar5 == NULL) {
            _printk(0x800086d,"ccid_function_bind");
            piVar10 = 0xffffffed;
        }
        else {
            *(param_2 + 0xf8) = puVar5;
            *puVar5 = puVar9;
            *0x800043e = *0x800042c;
            *0x8000459 = *0x800042c;
            *0x8000447 = *0x8000435;
            *0x8000450 = *0x8000423;
            *0x8000462 = *0x8000435;
            *0x800046b = *0x8000423;
            uVar6 = usb_assign_descriptors
                              (param_2,obj.ccid_fs_descs,obj.ccid_hs_descs,obj.ccid_ss_descs,obj.ccid_ss_descs);
            piVar10 = uVar6 & 0xffffffff;
            if (uVar6 == 0) {
                uVar11 = *(param_2 + 0xe8);
                piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                cVar3 = android_kmalloc_64_create;
                if (piVar10 == NULL) {
code_r0x08002d94:
                    *(param_2 + 0x100) = 0xfffffffffffffff4;
code_r0x08002d9c:
                    _printk(0x8000800,"ccid_function_bind");
                    piVar10 = NULL;
                }
                else {
                    *(piVar10 + 1) = 4;
                    iVar7 = 0x38;
                    if (cVar3 != 0x0) {
                        iVar7 = 0x30;
                    }
                    iVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,4);
                    *piVar10 = iVar7;
                    if (iVar7 == 0) {
                        usb_ep_free_request(uVar11,piVar10);
                        goto code_r0x08002d94;
                    }
                    *(param_2 + 0x100) = piVar10;
                    if (0xfffffffffffff000 < piVar10) goto code_r0x08002d9c;
                    piVar10[6] = sym.ccid_notify_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(*(param_2 + 0x100) + 0x38) = param_2;
                    uVar11 = *(param_2 + 0xf8);
                    piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                    if (piVar10 == NULL) {
code_r0x08002dc4:
                        piVar10 = 0xfffffffffffffff4;
code_r0x08002dc8:
                        _printk(0x800078c,"ccid_function_bind");
                        puVar9 = *(param_2 + 0x100);
                    }
                    else {
                        *(piVar10 + 1) = 0x400;
                        iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x400);
                        *piVar10 = iVar7;
                        if (iVar7 == 0) {
                            usb_ep_free_request(uVar11,piVar10);
                            goto code_r0x08002dc4;
                        }
                        if (0xfffffffffffff000 < piVar10) goto code_r0x08002dc8;
                        piVar10[6] = sym.ccid_bulk_complete_out.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        piVar10[7] = param_2;
                        uVar11 = *(param_2 + 0xf0);
                        *(param_2 + 0x208) = piVar10;
                        piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                        if (piVar10 == NULL) {
code_r0x08002d44:
                            piVar10 = 0xfffffffffffffff4;
                        }
                        else {
                            *(piVar10 + 1) = 0x20b;
                            iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                            *piVar10 = iVar7;
                            if (iVar7 == 0) {
code_r0x08002d38:
                                usb_ep_free_request(uVar11,piVar10);
                                goto code_r0x08002d44;
                            }
                            if (piVar10 < 0xfffffffffffff001) {
                                iVar7 = param_2 + 0xdc;
                                iVar1 = param_2 + 0x218;
                                piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                piVar10[7] = param_2;
                                uVar11 = _raw_spin_lock_irqsave(iVar7);
                                piVar12 = *(param_2 + 0x220);
                                piVar2 = piVar10 + 8;
                                uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                if ((uVar6 & 1) != 0) {
                                    *(param_2 + 0x220) = piVar2;
                                    piVar10[8] = iVar1;
                                    piVar10[9] = piVar12;
                                    *piVar12 = piVar2;
                                }
                                _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                uVar11 = *(param_2 + 0xf0);
                                piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                if (piVar10 == NULL) goto code_r0x08002d44;
                                *(piVar10 + 1) = 0x20b;
                                iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                *piVar10 = iVar8;
                                if (iVar8 == 0) goto code_r0x08002d38;
                                if (piVar10 < 0xfffffffffffff001) {
                                    piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar10[7] = param_2;
                                    uVar11 = _raw_spin_lock_irqsave(iVar7);
                                    piVar12 = *(param_2 + 0x220);
                                    piVar2 = piVar10 + 8;
                                    uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                    if ((uVar6 & 1) != 0) {
                                        *(param_2 + 0x220) = piVar2;
                                        piVar10[8] = iVar1;
                                        piVar10[9] = piVar12;
                                        *piVar12 = piVar2;
                                    }
                                    _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                    uVar11 = *(param_2 + 0xf0);
                                    piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                    if (piVar10 == NULL) goto code_r0x08002d44;
                                    *(piVar10 + 1) = 0x20b;
                                    iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                    *piVar10 = iVar8;
                                    if (iVar8 == 0) goto code_r0x08002d38;
                                    if (piVar10 < 0xfffffffffffff001) {
                                        piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                        piVar10[7] = param_2;
                                        uVar11 = _raw_spin_lock_irqsave(iVar7);
                                        piVar12 = *(param_2 + 0x220);
                                        piVar2 = piVar10 + 8;
                                        uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                        if ((uVar6 & 1) != 0) {
                                            *(param_2 + 0x220) = piVar2;
                                            piVar10[8] = iVar1;
                                            piVar10[9] = piVar12;
                                            *piVar12 = piVar2;
                                        }
                                        _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                        uVar11 = *(param_2 + 0xf0);
                                        piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                        if (piVar10 == NULL) goto code_r0x08002d44;
                                        *(piVar10 + 1) = 0x20b;
                                        iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                        *piVar10 = iVar8;
                                        if (iVar8 == 0) goto code_r0x08002d38;
                                        if (piVar10 < 0xfffffffffffff001) {
                                            piVar10[6] = 
                                            sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                            piVar10[7] = param_2;
                                            uVar11 = _raw_spin_lock_irqsave(iVar7);
                                            piVar12 = *(param_2 + 0x220);
                                            piVar2 = piVar10 + 8;
                                            uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                            if ((uVar6 & 1) != 0) {
                                                *(param_2 + 0x220) = piVar2;
                                                piVar10[8] = iVar1;
                                                piVar10[9] = piVar12;
                                                *piVar12 = piVar2;
                                            }
                                            _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                            piVar10 = NULL;
                                            goto code_r0x08002e28;
                                        }
                                    }
                                }
                            }
                        }
                        _printk(0x80007b9,"ccid_function_bind");
                        puVar9 = *(param_2 + 0x208);
                        if (puVar9 != NULL) {
                            uVar11 = *(param_2 + 0xf8);
                            kfree(*puVar9);
                            usb_ep_free_request(uVar11,puVar9);
                        }
                        puVar9 = *(param_2 + 0x100);
                    }
                    if (puVar9 != NULL) {
                        uVar11 = *(param_2 + 0xe8);
                        kfree(*puVar9);
                        usb_ep_free_request(uVar11,puVar9);
                    }
                }
                usb_free_all_descriptors(param_2);
            }
            **(param_2 + 0xf8) = 0;
            *(param_2 + 0xf8) = 0;
        }
        **(param_2 + 0xf0) = 0;
        *(param_2 + 0xf0) = 0;
    }
    **(param_2 + 0xe8) = 0;
    *(param_2 + 0xe8) = 0;
code_r0x08002e28:
    return piVar10 & 0xffffffff;
}


// ===== sym.ccid_function_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001368 (size 8) =====

int sym.ccid_function_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(*(param_1 + 0x30) + 0x30);
    iVar1 = config_ep_by_speed(*puVar4,param_1,*(param_1 + 0xe8));
    if (iVar1 != 0) {
        *(*(param_1 + 0xe8) + 0x38) = 0;
        iVar3 = *(param_1 + 0xe8);
        uVar2 = 0x8000994;
code_r0x08003064:
        _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
        return iVar1;
    }
    iVar1 = usb_ep_enable();
    if (iVar1 != 0) {
        iVar3 = *(param_1 + 0xe8);
        uVar2 = 0x8000846;
        goto code_r0x08003064;
    }
    **(param_1 + 0xe8) = param_1;
    iVar1 = config_ep_by_speed(*puVar4,param_1,*(param_1 + 0xf0));
    if (iVar1 == 0) {
        iVar1 = usb_ep_enable();
        if (iVar1 == 0) {
            iVar1 = config_ep_by_speed(*puVar4,param_1,*(param_1 + 0xf8));
            if (iVar1 == 0) {
                iVar1 = usb_ep_enable();
                if (iVar1 == 0) {
                    *(param_1 + 0x2b0) = 1;
                    *(param_1 + 0xe0) = 1;
                    return 0;
                }
                iVar3 = *(param_1 + 0xf8);
                uVar2 = 0x8000846;
            }
            else {
                *(*(param_1 + 0xf8) + 0x38) = 0;
                iVar3 = *(param_1 + 0xf8);
                uVar2 = 0x8000994;
            }
            _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
            usb_ep_disable(*(param_1 + 0xf0));
            goto code_r0x080030f4;
        }
        iVar3 = *(param_1 + 0xf0);
        uVar2 = 0x8000846;
    }
    else {
        *(*(param_1 + 0xf0) + 0x38) = 0;
        iVar3 = *(param_1 + 0xf0);
        uVar2 = 0x8000994;
    }
    _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
code_r0x080030f4:
    usb_ep_disable(*(param_1 + 0xe8));
    **(param_1 + 0xe8) = 0;
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001370 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_unregister(obj.ccidusb_func);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001378 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_register(obj.ccidusb_func);
    return;
}


// ===== sym.ccid_bulk_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001380 (size 8) =====

int64_t sym.ccid_bulk_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t iVar11;
    ulong *puVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(param_1 + 0xd8);
    if (*(iVar14 + 0xe0) == 0) {
        iVar14 = -0x13;
        goto code_r0x0800278c;
    }
    if (param_3 == 0) {
        _printk(0x80005c0,"ccid_bulk_write");
        iVar14 = -0x13;
        goto code_r0x0800278c;
    }
    if (0x20b < param_3) {
        _printk(0x8000935,"ccid_bulk_write",0x20b,param_3);
        iVar14 = -0xc;
        goto code_r0x0800278c;
    }
    iVar1 = iVar14 + 0xdc;
    puVar2 = iVar14 + 0x218;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
code_r0x08002488:
        if (*(iVar14 + 0x1c8) == 0) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            init_wait_entry(&uStack_90,0);
            iVar11 = iVar14 + 0x1f0;
            while( true ) {
                uVar7 = prepare_to_wait_event(iVar11,&uStack_90,1);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                if (puVar2 == *puVar2) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                }
                else {
                    piVar13 = *puVar2;
                    piVar10 = piVar13 + -8;
                    uVar8 = __list_del_entry_valid(piVar13);
                    if ((uVar8 & 1) != 0) {
                        iVar3 = *piVar13;
                        piVar4 = piVar13[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar13 = -0x2152ffffffffff00;
                    piVar13[1] = -0x2152fffffffffede;
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                    if (piVar10 != NULL) {
                        finish_wait(iVar11,&uStack_90);
                        goto code_r0x08002550;
                    }
                }
                if (*(iVar14 + 0x1c8) != 0) {
                    finish_wait(iVar11,&uStack_90);
                    goto code_r0x08002750;
                }
                if (uVar7 != 0) break;
                schedule();
            }
            if (uVar7 < 0) goto code_r0x08002788;
        }
code_r0x08002750:
        _printk(0x800077a,"ccid_bulk_write");
        uVar7 = 0xfffffffffffffffb;
    }
    else {
        piVar13 = *puVar2;
        piVar10 = piVar13 + -8;
        uVar7 = __list_del_entry_valid(piVar13);
        if ((uVar7 & 1) != 0) {
            iVar11 = *piVar13;
            piVar4 = piVar13[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        *piVar13 = -0x2152ffffffffff00;
        piVar13[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        if (piVar10 == NULL) goto code_r0x08002488;
code_r0x08002550:
        if (*(iVar14 + 0x1c8) != 0) goto code_r0x08002750;
        iVar11 = *piVar10;
        __check_object_size(iVar11,param_3,0);
        iVar11 = sym._copy_from_user(iVar11,param_2,param_3);
        if (iVar11 == 0) {
            *(piVar10 + 1) = param_3;
            iVar5 = usb_ep_queue(*(iVar14 + 0xf0),piVar10,0xcc0);
            uVar7 = param_3;
            if (iVar5 < 0) {
                *(iVar14 + 0x1c8) = 1;
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                puVar12 = *(iVar14 + 0x220);
                piVar13 = piVar10 + 8;
                uVar7 = __list_add_valid(piVar13,puVar12,puVar2);
                if ((uVar7 & 1) != 0) {
                    *(iVar14 + 0x220) = piVar13;
                    piVar10[8] = puVar2;
                    piVar10[9] = puVar12;
                    *puVar12 = piVar13;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                if (*(iVar14 + 0xe0) == 0) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                    uVar9 = _raw_spin_lock_irqsave(iVar1);
                    puVar12 = *puVar2;
                    while (puVar2 != puVar12) {
                        piVar13 = *puVar2;
                        piVar10 = piVar13 + -8;
                        uVar7 = __list_del_entry_valid(piVar13);
                        if ((uVar7 & 1) != 0) {
                            iVar11 = *piVar13;
                            piVar4 = piVar13[1];
                            *(iVar11 + 8) = piVar4;
                            *piVar4 = iVar11;
                        }
                        *piVar13 = -0x2152ffffffffff00;
                        piVar13[1] = -0x2152fffffffffede;
                        _raw_spin_unlock_irqrestore(iVar1,uVar9);
                        if (piVar10 == NULL) goto code_r0x08002778;
                        uVar9 = *(iVar14 + 0xf0);
                        kfree(*piVar10);
                        usb_ep_free_request(uVar9,piVar10);
                        uVar9 = _raw_spin_lock_irqsave(iVar1);
                        puVar12 = *(iVar14 + 0x218);
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar9);
code_r0x08002778:
                    uVar7 = 0xffffffffffffffed;
                }
                else {
                    uVar7 = 0xfffffffffffffffb;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
            }
        }
        else if (*(iVar14 + 0xe0) == 0) {
            uVar6 = *(iVar14 + 0xf0);
            kfree(*piVar10);
            usb_ep_free_request(uVar6,piVar10);
            uVar7 = 0xffffffffffffffed;
        }
        else {
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            puVar12 = *(iVar14 + 0x220);
            piVar13 = piVar10 + 8;
            uVar7 = __list_add_valid(piVar13,puVar12,puVar2);
            if ((uVar7 & 1) != 0) {
                *(iVar14 + 0x220) = piVar13;
                piVar10[8] = puVar2;
                piVar10[9] = puVar12;
                *puVar12 = piVar13;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            uVar7 = 0xfffffffffffffff2;
        }
    }
code_r0x08002788:
    iVar14 = uVar7;
code_r0x0800278c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar15 = __stack_chk_fail(iVar14);
        *extraout_x18 = 0x80027cc;
        iVar14 = *(auVar15._0_8_ + 0x2b0);
        if (*(iVar14 + -0x148) == 0) {
            iVar14 = 0xffffffed;
        }
        else if (*(iVar14 + -0x5c) == 0) {
            *(iVar14 + -0x5c) = 1;
            *(iVar14 + -0x60) = 0;
            uVar6 = _raw_spin_lock_irqsave(iVar14 + -0x14c);
            *(auVar15._8_8_ + 0xd8) = iVar14 + -0x228;
            _raw_spin_unlock_irqrestore(iVar14 + -0x14c,uVar6);
            iVar14 = 0;
        }
        else {
            iVar14 = 0xfffffff0;
        }
        return iVar14;
    }
    return iVar14;
}


// ===== sym.ccid_ctrl_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001388 (size 8) =====

int64_t sym.ccid_ctrl_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (uchar param_1 [16],int64_t param_2,int param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_2 + 0xd8);
    if (param_3 == -0x7ffbbcfd) {
        iVar4 = sym._copy_to_user(param_4,param_1,4);
        if (iVar4 != 0) {
            return -0xe;
        }
        return 0;
    }
    piVar3 = *(iVar4 + 0x100);
    if (param_3 == 0x40044302) {
        uVar5 = 4;
        iVar2 = sym._copy_from_user(*piVar3,param_4,4);
        if (iVar2 != 0) {
            return -0xe;
        }
    }
    else {
        if (param_3 != 0x40044301) goto code_r0x08001c0c;
        iVar2 = sym._copy_from_user(*piVar3,param_4,4);
        if (iVar2 != 0) {
            return -0xe;
        }
        uVar5 = 2;
    }
    *(piVar3 + 1) = uVar5;
    piVar3 = *(iVar4 + 0x100);
code_r0x08001c0c:
    iVar1 = usb_ep_queue(*(iVar4 + 0xe8),piVar3,0xcc0);
    if (iVar1 < 0) {
        _printk(0x800056d,iVar1);
        iVar4 = iVar1;
    }
    else {
        iVar4 = 0;
    }
    return iVar4;
}


// ===== sym.ccid_function_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001390 (size 8) =====

int sym.ccid_function_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint16_t *param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint *puVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_2[1];
    piVar7 = *(*(param_1 + 0x30) + 0x30);
    puVar6 = piVar7[1];
    if (*(param_1 + 0xe0) == 0) {
        return -0x6b;
    }
    uVar2 = (((*param_2 & 0xff00) << 0x10) >> 8 | *param_2 << 0x18) >> 0x10;
    uVar5 = param_2[3];
    if (uVar2 == 0xa103) {
        puVar4 = 0x8000533;
    }
    else {
        if (uVar2 != 0xa102) {
            if ((uVar2 != 0x2101) || (uVar5 != 0)) {
                return -0x5f;
            }
            *(param_1 + 0x138) = 1;
            *(param_1 + 0x139) = uVar1;
            *(param_1 + 0x13a) = uVar1 >> 8;
            *(param_1 + 0x13b) = 0;
            *(param_1 + 0x13c) = 1;
            __wake_up(param_1 + 0x120,3,1,0);
            uVar5 = 0;
            goto code_r0x080031c4;
        }
        puVar4 = 0x800052a;
    }
    if (3 < uVar5) {
        uVar5 = 4;
    }
    **puVar6 = *puVar4;
code_r0x080031c4:
    *(puVar6 + 1) = uVar5;
    iVar3 = usb_ep_queue(*(*piVar7 + 0x40),puVar6,0xa20);
    if (iVar3 < 0) {
        _printk(0x8000890,iVar3);
    }
    return iVar3;
}


// ===== sym.ccid_notify_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001398 (size 8) =====

void sym.ccid_notify_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 0x54);
    if (((iVar1 != -0x6c) && (iVar1 != -0x68)) && (iVar1 != 0)) {
        _printk(0x80007e5);
    }
    return;
}


// ===== sym.ccid_bulk_complete_out.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013a0 (size 8) =====

void sym.ccid_bulk_complete_out.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 0x38);
    if (*(param_2 + 0x54) != 0) {
        *(iVar1 + 0x1c8) = 1;
    }
    *(iVar1 + 0x210) = 1;
    __wake_up(iVar1 + 0x1d8,3,1,0);
    return;
}


// ===== sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013a8 (size 8) =====

void sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_2 + 0x38);
    if (*(param_2 + 0x54) != 0) {
        *(iVar5 + 0x1c8) = 1;
    }
    uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xdc);
    piVar4 = *(iVar5 + 0x220);
    iVar1 = param_2 + 0x40;
    uVar3 = __list_add_valid(iVar1,piVar4,iVar5 + 0x218);
    if ((uVar3 & 1) != 0) {
        *(iVar5 + 0x220) = iVar1;
        *(param_2 + 0x40) = iVar5 + 0x218;
        *(param_2 + 0x48) = piVar4;
        *piVar4 = iVar1;
    }
    _raw_spin_unlock_irqrestore(iVar5 + 0xdc,uVar2);
    __wake_up(iVar5 + 0x1f0,3,1,0);
    return;
}


// ===== sym.ccid_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013b0 (size 8) =====

void sym.ccid_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    if (iVar2 != 0) {
        uVar1 = *(iVar2 + 0x1c0);
        device_destroy(_segment.ehdr);
        cdev_del(iVar2 + 0x140);
        ida_free(obj.ccid_ida,uVar1 & 0xfffff);
        iVar2 = *(param_1 + 0xb8);
        uVar1 = *(iVar2 + 0x2a8);
        device_destroy(_segment.ehdr);
        cdev_del(iVar2 + 0x228);
        ida_free(obj.ccid_ida,uVar1 & 0xfffff);
        mutex_lock(obj.ccid_ida_lock);
        if (*0x80003f8 == 0) {
            if (_segment.ehdr != 0) {
                unregister_chrdev_region(_segment.ehdr << 0x14,4);
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
            if (_segment.ehdr != 0) {
                class_destroy();
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(obj.ccid_ida_lock);
        kfree(*(param_1 + 0xb8));
        kfree(param_1);
    }
    return;
}


// ===== sym.ccid_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013b8 (size 8) =====

ulong sym.ccid_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    
    puVar1 = *(param_1 + 0xb8);
    *puVar1 = "ccid";
    puVar1[9] = sym.ccid_function_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[10] = sym.ccid_function_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xd] = sym.ccid_function_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xf] = sym.ccid_function_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0x10] = sym.ccid_function_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xb] = sym.ccid_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    return *(param_1 + 0xb8);
}


// ===== sym.ccid_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013c0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001758)

uint64_t sym.ccid_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar1 = strlen(param_2);
    if (0x28 < iVar1 + 1) {
        uVar5 = 0xffffffdc;
        goto code_r0x08001690;
    }
    uVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x2b8);
    if (uVar5 == 0) {
        iVar1 = -0xc;
code_r0x080017dc:
        _printk(0x80008d7);
        uVar5 = iVar1;
    }
    else {
        *(uVar5 + 0xdc) = 0;
        *(uVar5 + 0x110) = uVar5 + 0x110;
        *(uVar5 + 0x118) = uVar5 + 0x110;
        __init_waitqueue_head(uVar5 + 0x120,"&ccid_dev->ctrl_dev.tx_wait_q",obj.ccidusb_func);
        __init_waitqueue_head(uVar5 + 0x1d8,"&ccid_dev->bulk_dev.read_wq",obj.ccidusb_func);
        __init_waitqueue_head(uVar5 + 0x1f0,"&ccid_dev->bulk_dev.write_wq",obj.ccidusb_func);
        *(uVar5 + 0x218) = uVar5 + 0x218;
        *(uVar5 + 0x220) = uVar5 + 0x218;
        mutex_lock(obj.ccid_ida_lock);
        if (_segment.ehdr == 0) {
            uStack_4c = 0;
            uVar3 = __class_create(obj.__this_module,"ccid_usb",obj.ccidusb_func);
            if (uVar3 < 0xfffffffffffff001) {
                _segment.ehdr = uVar3;
                uVar2 = alloc_chrdev_region(&uStack_4c,0,4,"ccid_usb");
                if (uVar2 == 0) {
                    _segment.ehdr = CONCAT44(*0x8000004,uStack_4c >> 0x14);
                    goto code_r0x08001638;
                }
                uVar3 = uVar2;
                _printk(0x80006b3,"ccid_alloc_chrdev_region",uVar3);
                class_destroy(_segment.ehdr);
                _segment.ehdr = 0;
            }
            else {
                _segment.ehdr = 0;
                _printk(0x8000654,"ccid_alloc_chrdev_region",uVar3 & 0xffffffff);
                if (uVar3 == 0) goto code_r0x08001638;
            }
code_r0x080017c8:
            iVar1 = uVar3;
            mutex_unlock(obj.ccid_ida_lock);
            kfree(uVar5);
            goto code_r0x080017dc;
        }
code_r0x08001638:
        mutex_unlock(obj.ccid_ida_lock);
        uVar2 = sym.ccid_cdev_init(uVar5 + 0x140,0x8000a48,0x80006a9);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            _printk(0x80008ab,"ccid_setup",uVar3);
code_r0x08001738:
            mutex_lock(obj.ccid_ida_lock);
            goto code_r0x080017c8;
        }
        uVar3 = sym.ccid_cdev_init(uVar5 + 0x228,0x8000b68,0x8000605);
        if (uVar3 != 0) {
            uVar3 = uVar3 & 0xffffffff;
            _printk(0x800060f,"ccid_setup",uVar3);
            uVar2 = *(uVar5 + 0x1c0);
            device_destroy(_segment.ehdr);
            cdev_del(uVar5 + 0x140);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            goto code_r0x08001738;
        }
    }
    if (uVar5 < 0xfffffffffffff001) {
        *(param_1 + 0xb8) = uVar5;
        uVar5 = 0;
    }
code_r0x08001690:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        uVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ccid_free_inst;
        iVar4 = *(uVar5 + 0xb8);
        if (iVar4 != 0) {
            uVar2 = *(iVar4 + 0x1c0);
            device_destroy(_segment.ehdr);
            cdev_del(iVar4 + 0x140);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            iVar4 = *(uVar5 + 0xb8);
            uVar2 = *(iVar4 + 0x2a8);
            device_destroy(_segment.ehdr);
            cdev_del(iVar4 + 0x228);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            mutex_lock(obj.ccid_ida_lock);
            if (*0x80003f8 == 0) {
                if (_segment.ehdr != 0) {
                    unregister_chrdev_region(_segment.ehdr << 0x14,4);
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                if (_segment.ehdr != 0) {
                    class_destroy();
                    _segment.ehdr = 0;
                }
            }
            mutex_unlock(obj.ccid_ida_lock);
            kfree(*(uVar5 + 0xb8));
            uVar5 = kfree(uVar5);
        }
        return uVar5;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.ccid_ctrl_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013c8 (size 8) =====

uint64_t sym.ccid_ctrl_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int extraout_w1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    uint uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0xd8);
    if (*(iVar6 + 0xe0) == 0) {
code_r0x08001b08:
        uVar3 = 0xffffffffffffffed;
    }
    else {
        uVar3 = param_3;
        if (3 < param_3) {
            uVar3 = 4;
        }
        if ((*(iVar6 + 0x13c) == 0) && (*(iVar6 + 0xe0) != 0)) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            init_wait_entry(&uStack_60,0);
            while( true ) {
                param_3 = 1;
                iVar2 = prepare_to_wait_event(iVar6 + 0x120,&uStack_60);
                if ((*(iVar6 + 0x13c) != 0) || (*(iVar6 + 0xe0) == 0)) break;
                if (iVar2 != 0) {
                    if (-1 < iVar2) goto code_r0x08001ac4;
                    uVar3 = iVar2;
                    goto code_r0x08001b0c;
                }
                schedule();
            }
            finish_wait(iVar6 + 0x120,&uStack_60);
        }
code_r0x08001ac4:
        *(iVar6 + 0x13c) = 0;
        if (*(iVar6 + 0xe0) == 0) goto code_r0x08001b08;
        noname_1 = __check_object_size(iVar6 + 0x138,uVar3,1);
        param_3 = uVar3;
        iVar1 = sym._copy_to_user(param_2,noname_1,uVar3);
        if (iVar1 != 0) {
            uVar3 = 0xfffffffffffffff2;
        }
    }
code_r0x08001b0c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail(uVar3);
    *extraout_x18 = 0x8001b4c;
    iVar6 = *(iVar6 + 0xd8);
    if (extraout_w1 == -0x7ffbbcfd) {
        iVar6 = sym._copy_to_user(param_3,noname_1_00,4);
        if (iVar6 != 0) {
            return 0xfffffffffffffff2;
        }
        return 0;
    }
    piVar4 = *(iVar6 + 0x100);
    if (extraout_w1 == 0x40044302) {
        uVar5 = 4;
        iVar2 = sym._copy_from_user(*piVar4,param_3,4);
        if (iVar2 != 0) {
            return 0xfffffffffffffff2;
        }
    }
    else {
        if (extraout_w1 != 0x40044301) goto code_r0x08001c0c;
        iVar2 = sym._copy_from_user(*piVar4,param_3,4);
        if (iVar2 != 0) {
            return 0xfffffffffffffff2;
        }
        uVar5 = 2;
    }
    *(piVar4 + 1) = uVar5;
    piVar4 = *(iVar6 + 0x100);
code_r0x08001c0c:
    iVar1 = usb_ep_queue(*(iVar6 + 0xe8),piVar4,0xcc0);
    if (iVar1 < 0) {
        _printk(0x800056d,iVar1);
        uVar3 = iVar1;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.ccid_bulk_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013d0 (size 8) =====

int64_t sym.ccid_bulk_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *puVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    if (param_3 < 0x401) {
        iVar18 = *(param_1 + 0xd8);
        if (*(iVar18 + 0x1c8) == 0) {
            iVar1 = iVar18 + 0xdc;
            uVar4 = *(*(iVar18 + 0xf8) + 0x2e);
            uVar8 = param_3;
            uVar7 = _raw_spin_lock_irqsave(iVar1);
            if (*(iVar18 + 0xe0) != 0) {
                uVar12 = uVar4;
                iVar15 = iVar18 + 0x1d8;
                do {
                    puVar13 = *(iVar18 + 0x208);
                    *(puVar13 + 1) = (param_3 + uVar12) - 1 & -uVar12;
                    *(iVar18 + 0x210) = 0;
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar11 = 0xcc0;
                    iVar6 = usb_ep_queue(*(iVar18 + 0xf8),puVar13);
                    if (iVar6 < 0) {
                        _printk(0x800091b,"ccid_bulk_read");
                        uVar8 = 0xfffffffffffffffb;
                        *(iVar18 + 0x1c8) = 1;
                        param_3 = uVar11;
                        goto code_r0x08002300;
                    }
                    if (((*(iVar18 + 0x210) == 0) && (*(iVar18 + 0x1c8) == 0)) && (*(iVar18 + 0xe0) != 0)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        init_wait_entry(&uStack_90,0);
                        uVar11 = 1;
                        uVar8 = prepare_to_wait_event(iVar15,&uStack_90);
                        iVar6 = *(iVar18 + 0x210);
                        while (((iVar6 == 0 && (*(iVar18 + 0x1c8) == 0)) && (*(iVar18 + 0xe0) != 0))) {
                            if (uVar8 != 0) {
                                if (-1 < uVar8) goto code_r0x0800213c;
                                *(iVar18 + 0x1c8) = 1;
                                usb_ep_dequeue(*(iVar18 + 0xf8),puVar13);
                                param_3 = uVar11;
                                goto code_r0x08002300;
                            }
                            schedule();
                            uVar11 = 1;
                            uVar8 = prepare_to_wait_event(iVar15,&uStack_90);
                            iVar6 = *(iVar18 + 0x210);
                        }
                        finish_wait(iVar15,&uStack_90);
                    }
code_r0x0800213c:
                    if (*(iVar18 + 0x1c8) != 0) {
                        uVar8 = 0xfffffffffffffffb;
                        param_3 = uVar11;
                        goto code_r0x08002300;
                    }
                    uVar7 = _raw_spin_lock_irqsave(iVar1);
                    if (*(iVar18 + 0xe0) == 0) {
code_r0x080022f8:
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        uVar8 = 0xffffffffffffffed;
                        param_3 = uVar11;
                        goto code_r0x08002300;
                    }
                    uVar8 = *(puVar13 + 0xb);
                    if (*(puVar13 + 0xb) != 0) {
                        if (param_3 < uVar8) {
                            _printk(0x8000590,"ccid_bulk_read",uVar8,param_3);
                            uVar8 = *(puVar13 + 0xb);
                        }
                        if (param_3 <= uVar8) {
                            uVar8 = param_3;
                        }
                        *(iVar18 + 0x1d0) = 1;
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        if (uVar8 >> 0x1f != 0) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8002388);
                            (*pcVar5)();
                        }
                        auVar19 = __check_object_size(*puVar13,uVar8,1);
                        uVar11 = uVar8;
                        sym._copy_to_user(param_2,auVar19,uVar8);
                        uVar7 = _raw_spin_lock_irqsave(iVar1);
                        *(iVar18 + 0x1d0) = 0;
                        if (*(iVar18 + 0xe0) == 0) {
                            puVar13 = *(iVar18 + 0x208);
                            if (puVar13 != NULL) {
                                uVar10 = *(iVar18 + 0xf8);
                                kfree(*puVar13);
                                usb_ep_free_request(uVar10,puVar13);
                            }
                            goto code_r0x080022f8;
                        }
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        param_3 = uVar11;
                        goto code_r0x08002300;
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar7 = _raw_spin_lock_irqsave(iVar1);
                } while (*(iVar18 + 0xe0) != 0);
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            iVar18 = -0x13;
        }
        else {
            _printk(0x8000a2e,"ccid_bulk_read");
            uVar8 = 0xfffffffffffffffb;
code_r0x08002300:
            iVar18 = uVar8;
            uVar8 = param_3;
        }
    }
    else {
        uVar8 = 0x400;
        _printk(0x80006da,"ccid_bulk_read",0x400,param_3);
        iVar18 = -0xc;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar18;
    }
    auVar19 = __stack_chk_fail(iVar18);
    *extraout_x18 = 0x8002390;
    uStack_e8 = 0x8002390;
    iVar18 = sp_el0;
    iStack_f8 = *(iVar18 + 0x5e0);
    iVar18 = *(auVar19._0_8_ + 0xd8);
    puStack_f0 = &stack0xffffffffffffffa0;
    if (*(iVar18 + 0xe0) == 0) {
        iVar18 = -0x13;
        goto code_r0x0800278c;
    }
    if (uVar8 == 0) {
        _printk(0x80005c0,"ccid_bulk_write");
        iVar18 = -0x13;
        goto code_r0x0800278c;
    }
    if (0x20b < uVar8) {
        _printk(0x8000935,"ccid_bulk_write",0x20b,uVar8);
        iVar18 = -0xc;
        goto code_r0x0800278c;
    }
    iVar1 = iVar18 + 0xdc;
    puVar13 = iVar18 + 0x218;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    if (puVar13 == *puVar13) {
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
code_r0x08002488:
        if (*(iVar18 + 0x1c8) == 0) {
            uStack_108 = 0;
            uStack_100 = 0;
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_120 = 0;
            init_wait_entry(&uStack_120,0);
            iVar15 = iVar18 + 0x1f0;
            while( true ) {
                uVar11 = prepare_to_wait_event(iVar15,&uStack_120,1);
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                if (puVar13 == *puVar13) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                }
                else {
                    piVar17 = *puVar13;
                    piVar14 = piVar17 + -8;
                    uVar9 = __list_del_entry_valid(piVar17);
                    if ((uVar9 & 1) != 0) {
                        iVar2 = *piVar17;
                        piVar3 = piVar17[1];
                        *(iVar2 + 8) = piVar3;
                        *piVar3 = iVar2;
                    }
                    *piVar17 = -0x2152ffffffffff00;
                    piVar17[1] = -0x2152fffffffffede;
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    if (piVar14 != NULL) {
                        finish_wait(iVar15,&uStack_120);
                        goto code_r0x08002550;
                    }
                }
                if (*(iVar18 + 0x1c8) != 0) {
                    finish_wait(iVar15,&uStack_120);
                    goto code_r0x08002750;
                }
                if (uVar11 != 0) break;
                schedule();
            }
            if (uVar11 < 0) goto code_r0x08002788;
        }
code_r0x08002750:
        _printk(0x800077a,"ccid_bulk_write");
        uVar11 = 0xfffffffffffffffb;
    }
    else {
        piVar17 = *puVar13;
        piVar14 = piVar17 + -8;
        uVar11 = __list_del_entry_valid(piVar17);
        if ((uVar11 & 1) != 0) {
            iVar15 = *piVar17;
            piVar3 = piVar17[1];
            *(iVar15 + 8) = piVar3;
            *piVar3 = iVar15;
        }
        *piVar17 = -0x2152ffffffffff00;
        piVar17[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        if (piVar14 == NULL) goto code_r0x08002488;
code_r0x08002550:
        if (*(iVar18 + 0x1c8) != 0) goto code_r0x08002750;
        iVar15 = *piVar14;
        __check_object_size(iVar15,uVar8,0);
        iVar15 = sym._copy_from_user(iVar15,auVar19._8_8_,uVar8);
        if (iVar15 == 0) {
            *(piVar14 + 1) = uVar8;
            iVar6 = usb_ep_queue(*(iVar18 + 0xf0),piVar14,0xcc0);
            uVar11 = uVar8;
            if (iVar6 < 0) {
                *(iVar18 + 0x1c8) = 1;
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                puVar16 = *(iVar18 + 0x220);
                piVar17 = piVar14 + 8;
                uVar8 = __list_add_valid(piVar17,puVar16,puVar13);
                if ((uVar8 & 1) != 0) {
                    *(iVar18 + 0x220) = piVar17;
                    piVar14[8] = puVar13;
                    piVar14[9] = puVar16;
                    *puVar16 = piVar17;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar7);
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                if (*(iVar18 + 0xe0) == 0) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar10 = _raw_spin_lock_irqsave(iVar1);
                    puVar16 = *puVar13;
                    while (puVar13 != puVar16) {
                        piVar17 = *puVar13;
                        piVar14 = piVar17 + -8;
                        uVar8 = __list_del_entry_valid(piVar17);
                        if ((uVar8 & 1) != 0) {
                            iVar15 = *piVar17;
                            piVar3 = piVar17[1];
                            *(iVar15 + 8) = piVar3;
                            *piVar3 = iVar15;
                        }
                        *piVar17 = -0x2152ffffffffff00;
                        piVar17[1] = -0x2152fffffffffede;
                        _raw_spin_unlock_irqrestore(iVar1,uVar10);
                        if (piVar14 == NULL) goto code_r0x08002778;
                        uVar10 = *(iVar18 + 0xf0);
                        kfree(*piVar14);
                        usb_ep_free_request(uVar10,piVar14);
                        uVar10 = _raw_spin_lock_irqsave(iVar1);
                        puVar16 = *(iVar18 + 0x218);
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar10);
code_r0x08002778:
                    uVar11 = 0xffffffffffffffed;
                }
                else {
                    uVar11 = 0xfffffffffffffffb;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar7);
            }
        }
        else if (*(iVar18 + 0xe0) == 0) {
            uVar7 = *(iVar18 + 0xf0);
            kfree(*piVar14);
            usb_ep_free_request(uVar7,piVar14);
            uVar11 = 0xffffffffffffffed;
        }
        else {
            uVar7 = _raw_spin_lock_irqsave(iVar1);
            puVar16 = *(iVar18 + 0x220);
            piVar17 = piVar14 + 8;
            uVar8 = __list_add_valid(piVar17,puVar16,puVar13);
            if ((uVar8 & 1) != 0) {
                *(iVar18 + 0x220) = piVar17;
                piVar14[8] = puVar13;
                piVar14[9] = puVar16;
                *puVar16 = piVar17;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            uVar11 = 0xfffffffffffffff2;
        }
    }
code_r0x08002788:
    iVar18 = uVar11;
code_r0x0800278c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return iVar18;
    }
    auVar19 = __stack_chk_fail(iVar18);
    *extraout_x18_00 = 0x80027cc;
    iVar18 = *(auVar19._0_8_ + 0x2b0);
    if (*(iVar18 + -0x148) == 0) {
        iVar18 = 0xffffffed;
    }
    else if (*(iVar18 + -0x5c) == 0) {
        *(iVar18 + -0x5c) = 1;
        *(iVar18 + -0x60) = 0;
        uVar7 = _raw_spin_lock_irqsave(iVar18 + -0x14c);
        *(auVar19._8_8_ + 0xd8) = iVar18 + -0x228;
        _raw_spin_unlock_irqrestore(iVar18 + -0x14c,uVar7);
        iVar18 = 0;
    }
    else {
        iVar18 = 0xfffffff0;
    }
    return iVar18;
}


// ===== sym.ccid_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013d8 (size 8) =====

int64_t sym.ccid_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xc0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.ccid_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar1 + 0xb0) = sym.ccid_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        config_group_init_type_name(iVar1,0x8000993,obj.ccid_func_type);
    }
    return iVar1;
}


// ===== sym.ccid_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013e0 (size 8) =====

void sym.ccid_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    return;
}


// ===== sym.ccid_function_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013e8 (size 8) =====

void sym.ccid_function_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_ep_disable(*(param_1 + 0xe8));
    usb_ep_disable(*(param_1 + 0xf0));
    usb_ep_disable(*(param_1 + 0xf8));
    *(param_1 + 0x2b0) = 0;
    *(param_1 + 0xe0) = 0;
    __wake_up(param_1 + 0x1f0,3,1,0);
    __wake_up(param_1 + 0x1d8,3,1,0);
    __wake_up(param_1 + 0x120,3,1,0);
    return;
}


// ===== sym.ccid_attr_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013f0 (size 8) =====

void sym.ccid_attr_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.ccid_function_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080013f8 (size 8) =====

void sym.ccid_function_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_2 + 0x100);
    if (puVar6 != NULL) {
        uVar7 = *(param_2 + 0xe8);
        kfree(*puVar6);
        usb_ep_free_request(uVar7,puVar6);
    }
    if ((*(param_2 + 0x1d0) == 0) && (puVar6 = *(param_2 + 0x208), puVar6 != NULL)) {
        uVar7 = *(param_2 + 0xf8);
        kfree(*puVar6);
        usb_ep_free_request(uVar7,puVar6);
    }
    iVar1 = param_2 + 0xdc;
    puVar6 = param_2 + 0x218;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    puVar5 = *puVar6;
    while (puVar5 != puVar6) {
        piVar9 = *puVar6;
        piVar8 = piVar9 + -8;
        uVar4 = __list_del_entry_valid(piVar9);
        if ((uVar4 & 1) != 0) {
            iVar2 = *piVar9;
            piVar3 = piVar9[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar9 = -0x2152ffffffffff00;
        piVar9[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        if (piVar8 == NULL) goto code_r0x08002f60;
        uVar7 = *(param_2 + 0xf0);
        kfree(*piVar8);
        usb_ep_free_request(uVar7,piVar8);
        uVar7 = _raw_spin_lock_irqsave(iVar1);
        puVar5 = *(param_2 + 0x218);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar7);
code_r0x08002f60:
    usb_free_all_descriptors(param_2);
    return;
}


// ===== sym.ccid_ctrl_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001400 (size 8) =====

ulong sym.ccid_ctrl_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x2b0);
    if (*(iVar2 + -0x60) == 0) {
        uVar1 = 0xffffffed;
    }
    else if (*(iVar2 + -0x38) == 0) {
        *(iVar2 + -0x38) = 1;
        uVar1 = _raw_spin_lock_irqsave(iVar2 + -100);
        *(param_2 + 0xd8) = iVar2 + -0x140;
        _raw_spin_unlock_irqrestore(iVar2 + -100,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.ccid_bulk_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001408 (size 8) =====

ulong sym.ccid_bulk_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x2b0);
    if (*(iVar2 + -0x148) == 0) {
        uVar1 = 0xffffffed;
    }
    else if (*(iVar2 + -0x5c) == 0) {
        *(iVar2 + -0x5c) = 1;
        *(iVar2 + -0x60) = 0;
        uVar1 = _raw_spin_lock_irqsave(iVar2 + -0x14c);
        *(param_2 + 0xd8) = iVar2 + -0x228;
        _raw_spin_unlock_irqrestore(iVar2 + -0x14c,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.ccid_bulk_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001410 (size 8) =====

ulong sym.ccid_bulk_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(*(param_2 + 0xd8) + 0x1cc) = 0;
    return 0;
}


// ===== sym.ccid_ctrl_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001418 (size 8) =====

ulong sym.ccid_ctrl_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(*(param_2 + 0xd8) + 0x108) = 0;
    return 0;
}


// ===== sym.ccid_alloc_inst @ 0x08001420 (size 120) =====

int64_t sym.ccid_alloc_inst(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0xc0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.ccid_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar1 + 0xb0) = sym.ccid_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        config_group_init_type_name(iVar1,0x8000993,obj.ccid_func_type);
    }
    return iVar1;
}


// ===== sym.ccid_alloc @ 0x08001498 (size 96) =====

ulong sym.ccid_alloc(int64_t arg1)

{
    ulong *puVar1;
    
    puVar1 = *(arg1 + 0xb8);
    *puVar1 = "ccid";
    puVar1[9] = sym.ccid_function_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[10] = sym.ccid_function_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xd] = sym.ccid_function_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xf] = sym.ccid_function_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0x10] = sym.ccid_function_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    puVar1[0xb] = sym.ccid_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    return *(arg1 + 0xb8);
}


// ===== sym.ccid_set_inst_name @ 0x080014f8 (size 772) =====

//WARNING: Removing unreachable block (ram,0x08001758)

uint64_t sym.ccid_set_inst_name(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar1 = strlen(arg2);
    if (0x28 < iVar1 + 1) {
        uVar5 = 0xffffffdc;
        goto code_r0x08001690;
    }
    uVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x2b8);
    if (uVar5 == 0) {
        iVar1 = -0xc;
code_r0x080017dc:
        _printk(0x80008d7);
        uVar5 = iVar1;
    }
    else {
        *(uVar5 + 0xdc) = 0;
        *(uVar5 + 0x110) = uVar5 + 0x110;
        *(uVar5 + 0x118) = uVar5 + 0x110;
        __init_waitqueue_head(uVar5 + 0x120,"&ccid_dev->ctrl_dev.tx_wait_q",obj.ccidusb_func);
        __init_waitqueue_head(uVar5 + 0x1d8,"&ccid_dev->bulk_dev.read_wq",obj.ccidusb_func);
        __init_waitqueue_head(uVar5 + 0x1f0,"&ccid_dev->bulk_dev.write_wq",obj.ccidusb_func);
        *(uVar5 + 0x218) = uVar5 + 0x218;
        *(uVar5 + 0x220) = uVar5 + 0x218;
        mutex_lock(obj.ccid_ida_lock);
        if (_segment.ehdr == 0) {
            uStack_4c = 0;
            uVar3 = __class_create(obj.__this_module,"ccid_usb",obj.ccidusb_func);
            if (uVar3 < 0xfffffffffffff001) {
                _segment.ehdr = uVar3;
                uVar2 = alloc_chrdev_region(&uStack_4c,0,4,"ccid_usb");
                if (uVar2 == 0) {
                    _segment.ehdr = CONCAT44(*0x8000004,uStack_4c >> 0x14);
                    goto code_r0x08001638;
                }
                uVar3 = uVar2;
                _printk(0x80006b3,"ccid_alloc_chrdev_region",uVar3);
                class_destroy(_segment.ehdr);
                _segment.ehdr = 0;
            }
            else {
                _segment.ehdr = 0;
                _printk(0x8000654,"ccid_alloc_chrdev_region",uVar3 & 0xffffffff);
                if (uVar3 == 0) goto code_r0x08001638;
            }
code_r0x080017c8:
            iVar1 = uVar3;
            mutex_unlock(obj.ccid_ida_lock);
            kfree(uVar5);
            goto code_r0x080017dc;
        }
code_r0x08001638:
        mutex_unlock(obj.ccid_ida_lock);
        uVar2 = sym.ccid_cdev_init(uVar5 + 0x140,0x8000a48,0x80006a9);
        if (uVar2 != 0) {
            uVar3 = uVar2;
            _printk(0x80008ab,"ccid_setup",uVar3);
code_r0x08001738:
            mutex_lock(obj.ccid_ida_lock);
            goto code_r0x080017c8;
        }
        uVar3 = sym.ccid_cdev_init(uVar5 + 0x228,0x8000b68,0x8000605);
        if (uVar3 != 0) {
            uVar3 = uVar3 & 0xffffffff;
            _printk(0x800060f,"ccid_setup",uVar3);
            uVar2 = *(uVar5 + 0x1c0);
            device_destroy(_segment.ehdr);
            cdev_del(uVar5 + 0x140);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            goto code_r0x08001738;
        }
    }
    if (uVar5 < 0xfffffffffffff001) {
        *(arg1 + 0xb8) = uVar5;
        uVar5 = 0;
    }
code_r0x08001690:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        uVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ccid_free_inst;
        iVar4 = *(uVar5 + 0xb8);
        if (iVar4 != 0) {
            uVar2 = *(iVar4 + 0x1c0);
            device_destroy(_segment.ehdr);
            cdev_del(iVar4 + 0x140);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            iVar4 = *(uVar5 + 0xb8);
            uVar2 = *(iVar4 + 0x2a8);
            device_destroy(_segment.ehdr);
            cdev_del(iVar4 + 0x228);
            ida_free(obj.ccid_ida,uVar2 & 0xfffff);
            mutex_lock(obj.ccid_ida_lock);
            if (*0x80003f8 == 0) {
                if (_segment.ehdr != 0) {
                    unregister_chrdev_region(_segment.ehdr << 0x14,4);
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                }
                if (_segment.ehdr != 0) {
                    class_destroy();
                    _segment.ehdr = 0;
                }
            }
            mutex_unlock(obj.ccid_ida_lock);
            kfree(*(uVar5 + 0xb8));
            uVar5 = kfree(uVar5);
        }
        return uVar5;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.ccid_free_inst @ 0x080017fc (size 256) =====

void sym.ccid_free_inst(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    if (iVar2 != 0) {
        uVar1 = *(iVar2 + 0x1c0);
        device_destroy(_segment.ehdr);
        cdev_del(iVar2 + 0x140);
        ida_free(obj.ccid_ida,uVar1 & 0xfffff);
        iVar2 = *(arg1 + 0xb8);
        uVar1 = *(iVar2 + 0x2a8);
        device_destroy(_segment.ehdr);
        cdev_del(iVar2 + 0x228);
        ida_free(obj.ccid_ida,uVar1 & 0xfffff);
        mutex_lock(obj.ccid_ida_lock);
        if (*0x80003f8 == 0) {
            if (_segment.ehdr != 0) {
                unregister_chrdev_region(_segment.ehdr << 0x14,4);
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
            if (_segment.ehdr != 0) {
                class_destroy();
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(obj.ccid_ida_lock);
        kfree(*(arg1 + 0xb8));
        kfree(arg1);
    }
    return;
}


// ===== sym.ccid_cdev_init @ 0x080018fc (size 276) =====

uint64_t sym.ccid_cdev_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = ida_alloc_range(obj.ccid_ida,0,3,0xcc0);
    uVar4 = uVar1;
    if (uVar1 < 0) {
        _printk(0x8000742,"ccid_cdev_init",uVar4);
    }
    else {
        cdev_init(arg1,arg2);
        uVar2 = cdev_add(arg1,uVar1 | _segment.ehdr << 0x14,1);
        if (uVar2 == 0) {
            uVar3 = device_create(CONCAT44(*0x8000004,_segment.ehdr),0,uVar1 | _segment.ehdr << 0x14,0,arg3);
            if (uVar3 < 0xfffffffffffff001) {
                return 0;
            }
            cdev_del(arg1);
        }
        else {
            uVar3 = uVar2;
            _printk(0x8000723,arg3);
        }
        ida_free(obj.ccid_ida,uVar4);
        uVar4 = uVar3 & 0xffffffff;
    }
    return uVar4;
}


// ===== sym.ccid_ctrl_read @ 0x08001a10 (size 332) =====

uint64_t sym.ccid_ctrl_read(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t arg2_00;
    int extraout_w1;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    uint uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar3 = arg3;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0xd8);
    if (*(iVar6 + 0xe0) == 0) {
code_r0x08001b08:
        arg2_00 = 0xffffffffffffffed;
    }
    else {
        arg2_00 = uVar3;
        if (3 < uVar3) {
            arg2_00 = 4;
        }
        if ((*(iVar6 + 0x13c) == 0) && (*(iVar6 + 0xe0) != 0)) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            init_wait_entry(&stack0xffffffffffffffa0,0);
            while( true ) {
                uVar3 = 1;
                iVar2 = prepare_to_wait_event(iVar6 + 0x120,&stack0xffffffffffffffa0);
                if ((*(iVar6 + 0x13c) != 0) || (*(iVar6 + 0xe0) == 0)) break;
                if (iVar2 != 0) {
                    if (-1 < iVar2) goto code_r0x08001ac4;
                    arg2_00 = iVar2;
                    goto code_r0x08001b0c;
                }
                schedule();
            }
            finish_wait(iVar6 + 0x120,&stack0xffffffffffffffa0);
        }
code_r0x08001ac4:
        *(iVar6 + 0x13c) = 0;
        if (*(iVar6 + 0xe0) == 0) goto code_r0x08001b08;
        noname_1 = __check_object_size(iVar6 + 0x138,arg2_00,1);
        uVar3 = arg2_00;
        iVar1 = sym._copy_to_user(arg2,noname_1,arg2_00);
        if (iVar1 != 0) {
            arg2_00 = 0xfffffffffffffff2;
        }
    }
code_r0x08001b0c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg2_00;
    }
    iVar6 = __stack_chk_fail(arg2_00);
    *extraout_x18 = 0x8001b4c;
    iVar6 = *(iVar6 + 0xd8);
    if (extraout_w1 == -0x7ffbbcfd) {
        iVar6 = sym._copy_to_user(uVar3,noname_1_00,4);
        if (iVar6 != 0) {
            return 0xfffffffffffffff2;
        }
        return 0;
    }
    piVar4 = *(iVar6 + 0x100);
    if (extraout_w1 == 0x40044302) {
        uVar5 = 4;
        iVar2 = sym._copy_from_user(*piVar4,uVar3,4);
        if (iVar2 != 0) {
            return 0xfffffffffffffff2;
        }
    }
    else {
        if (extraout_w1 != 0x40044301) goto code_r0x08001c0c;
        iVar2 = sym._copy_from_user(*piVar4,uVar3,4);
        if (iVar2 != 0) {
            return 0xfffffffffffffff2;
        }
        uVar5 = 2;
    }
    *(piVar4 + 1) = uVar5;
    piVar4 = *(iVar6 + 0x100);
code_r0x08001c0c:
    iVar1 = usb_ep_queue(*(iVar6 + 0xe8),piVar4,0xcc0);
    if (iVar1 < 0) {
        _printk(0x800056d,iVar1);
        uVar3 = iVar1;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.ccid_ctrl_ioctl @ 0x08001b5c (size 252) =====

int64_t sym.ccid_ctrl_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    uint uVar5;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd8);
    if (arg2 == 0x80044303) {
        iVar4 = sym._copy_to_user(arg3,in_q0,4);
        if (iVar4 != 0) {
            return -0xe;
        }
        return 0;
    }
    piVar3 = *(iVar4 + 0x100);
    if (arg2 == 0x40044302) {
        uVar5 = 4;
        iVar2 = sym._copy_from_user(*piVar3,arg3,4);
        if (iVar2 != 0) {
            return -0xe;
        }
    }
    else {
        if (arg2 != 0x40044301) goto code_r0x08001c0c;
        iVar2 = sym._copy_from_user(*piVar3,arg3,4);
        if (iVar2 != 0) {
            return -0xe;
        }
        uVar5 = 2;
    }
    *(piVar3 + 1) = uVar5;
    piVar3 = *(iVar4 + 0x100);
code_r0x08001c0c:
    iVar1 = usb_ep_queue(*(iVar4 + 0xe8),piVar3,0xcc0);
    if (iVar1 < 0) {
        _printk(0x800056d,iVar1);
        iVar4 = iVar1;
    }
    else {
        iVar4 = 0;
    }
    return iVar4;
}


// ===== sym.ccid_ctrl_open @ 0x08001c58 (size 140) =====

ulong sym.ccid_ctrl_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x2b0);
    if (*(iVar2 + -0x60) == 0) {
        uVar1 = 0xffffffed;
    }
    else if (*(iVar2 + -0x38) == 0) {
        *(iVar2 + -0x38) = 1;
        uVar1 = _raw_spin_lock_irqsave(iVar2 + -100);
        *(arg2 + 0xd8) = iVar2 + -0x140;
        _raw_spin_unlock_irqrestore(iVar2 + -100,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.ccid_ctrl_release @ 0x08001cec (size 24) =====

ulong sym.ccid_ctrl_release(int64_t arg1,int64_t arg2)

{
    *(*(arg2 + 0xd8) + 0x108) = 0;
    return 0;
}


// ===== sym._copy_to_user @ 0x08001d04 (size 312) =====

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
        if ((_config_group_init_type_name >> 0x18 & 1) == 0) {
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
        if ((_config_group_init_type_name >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x08001e78 (size 376) =====

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
        if ((_config_group_init_type_name >> 0x18 & 1) == 0) {
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
        if ((_config_group_init_type_name >> 0x18 & 1) == 0) {
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


// ===== sym.ccid_bulk_read @ 0x0800202c (size 908) =====

int64_t sym.ccid_bulk_read(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    uint64_t arg2_00;
    uint64_t uVar8;
    ulong uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar11;
    ulong *puVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong *puVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    uVar8 = arg3;
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    if (uVar8 < 0x401) {
        iVar17 = *(arg1 + 0xd8);
        if (*(iVar17 + 0x1c8) == 0) {
            iVar1 = iVar17 + 0xdc;
            uVar4 = *(*(iVar17 + 0xf8) + 0x2e);
            arg2_00 = uVar8;
            uVar7 = _raw_spin_lock_irqsave(iVar1);
            if (*(iVar17 + 0xe0) != 0) {
                uVar11 = uVar4;
                iVar14 = iVar17 + 0x1d8;
                do {
                    puVar12 = *(iVar17 + 0x208);
                    *(puVar12 + 1) = (arg3 + uVar11) - 1 & -uVar11;
                    *(iVar17 + 0x210) = 0;
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar10 = 0xcc0;
                    iVar6 = usb_ep_queue(*(iVar17 + 0xf8),puVar12);
                    if (iVar6 < 0) {
                        _printk(0x800091b,"ccid_bulk_read");
                        arg2_00 = 0xfffffffffffffffb;
                        *(iVar17 + 0x1c8) = 1;
                        uVar8 = uVar10;
                        goto code_r0x08002300;
                    }
                    if (((*(iVar17 + 0x210) == 0) && (*(iVar17 + 0x1c8) == 0)) && (*(iVar17 + 0xe0) != 0)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        init_wait_entry(&stack0xffffffffffffff70,0);
                        uVar10 = 1;
                        arg2_00 = prepare_to_wait_event(iVar14,&stack0xffffffffffffff70);
                        iVar6 = *(iVar17 + 0x210);
                        while (((iVar6 == 0 && (*(iVar17 + 0x1c8) == 0)) && (*(iVar17 + 0xe0) != 0))) {
                            if (arg2_00 != 0) {
                                if (-1 < arg2_00) goto code_r0x0800213c;
                                *(iVar17 + 0x1c8) = 1;
                                usb_ep_dequeue(*(iVar17 + 0xf8),puVar12);
                                uVar8 = uVar10;
                                goto code_r0x08002300;
                            }
                            schedule();
                            uVar10 = 1;
                            arg2_00 = prepare_to_wait_event(iVar14,&stack0xffffffffffffff70);
                            iVar6 = *(iVar17 + 0x210);
                        }
                        finish_wait(iVar14,&stack0xffffffffffffff70);
                    }
code_r0x0800213c:
                    if (*(iVar17 + 0x1c8) != 0) {
                        arg2_00 = 0xfffffffffffffffb;
                        uVar8 = uVar10;
                        goto code_r0x08002300;
                    }
                    uVar7 = _raw_spin_lock_irqsave(iVar1);
                    if (*(iVar17 + 0xe0) == 0) {
code_r0x080022f8:
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        arg2_00 = 0xffffffffffffffed;
                        uVar8 = uVar10;
                        goto code_r0x08002300;
                    }
                    arg2_00 = *(puVar12 + 0xb);
                    if (*(puVar12 + 0xb) != 0) {
                        if (uVar8 < arg2_00) {
                            _printk(0x8000590,"ccid_bulk_read",arg2_00,uVar8);
                            arg2_00 = *(puVar12 + 0xb);
                        }
                        if (uVar8 <= arg2_00) {
                            arg2_00 = uVar8;
                        }
                        *(iVar17 + 0x1d0) = 1;
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        if (arg2_00 >> 0x1f != 0) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8002388);
                            (*pcVar5)();
                        }
                        auVar18 = __check_object_size(*puVar12,arg2_00,1);
                        uVar10 = arg2_00;
                        sym._copy_to_user(arg2,auVar18,arg2_00);
                        uVar7 = _raw_spin_lock_irqsave(iVar1);
                        *(iVar17 + 0x1d0) = 0;
                        if (*(iVar17 + 0xe0) == 0) {
                            puVar12 = *(iVar17 + 0x208);
                            if (puVar12 != NULL) {
                                uVar9 = *(iVar17 + 0xf8);
                                kfree(*puVar12);
                                usb_ep_free_request(uVar9,puVar12);
                            }
                            goto code_r0x080022f8;
                        }
                        _raw_spin_unlock_irqrestore(iVar1,uVar7);
                        uVar8 = uVar10;
                        goto code_r0x08002300;
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar7 = _raw_spin_lock_irqsave(iVar1);
                } while (*(iVar17 + 0xe0) != 0);
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            iVar17 = -0x13;
        }
        else {
            _printk(0x8000a2e,"ccid_bulk_read");
            arg2_00 = 0xfffffffffffffffb;
code_r0x08002300:
            iVar17 = arg2_00;
            arg2_00 = uVar8;
        }
    }
    else {
        arg2_00 = 0x400;
        _printk(0x80006da,"ccid_bulk_read",0x400,uVar8);
        iVar17 = -0xc;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar17;
    }
    auVar18 = __stack_chk_fail(iVar17);
    *extraout_x18 = 0x8002390;
    uStack_e8 = 0x8002390;
    iVar17 = sp_el0;
    iStack_f8 = *(iVar17 + 0x5e0);
    iVar17 = *(auVar18._0_8_ + 0xd8);
    puStack_f0 = &stack0xffffffffffffffa0;
    if (*(iVar17 + 0xe0) == 0) {
        iVar17 = -0x13;
        goto code_r0x0800278c;
    }
    if (arg2_00 == 0) {
        _printk(0x80005c0,"ccid_bulk_write");
        iVar17 = -0x13;
        goto code_r0x0800278c;
    }
    if (0x20b < arg2_00) {
        _printk(0x8000935,"ccid_bulk_write",0x20b,arg2_00);
        iVar17 = -0xc;
        goto code_r0x0800278c;
    }
    iVar1 = iVar17 + 0xdc;
    puVar12 = iVar17 + 0x218;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    if (puVar12 == *puVar12) {
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
code_r0x08002488:
        if (*(iVar17 + 0x1c8) == 0) {
            uStack_108 = 0;
            uStack_100 = 0;
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_120 = 0;
            init_wait_entry(&stack0xfffffffffffffee0,0);
            iVar14 = iVar17 + 0x1f0;
            while( true ) {
                uVar8 = prepare_to_wait_event(iVar14,&stack0xfffffffffffffee0,1);
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                if (puVar12 == *puVar12) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                }
                else {
                    piVar16 = *puVar12;
                    piVar13 = piVar16 + -8;
                    uVar10 = __list_del_entry_valid(piVar16);
                    if ((uVar10 & 1) != 0) {
                        iVar2 = *piVar16;
                        piVar3 = piVar16[1];
                        *(iVar2 + 8) = piVar3;
                        *piVar3 = iVar2;
                    }
                    *piVar16 = -0x2152ffffffffff00;
                    piVar16[1] = -0x2152fffffffffede;
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    if (piVar13 != NULL) {
                        finish_wait(iVar14,&stack0xfffffffffffffee0);
                        goto code_r0x08002550;
                    }
                }
                if (*(iVar17 + 0x1c8) != 0) {
                    finish_wait(iVar14,&stack0xfffffffffffffee0);
                    goto code_r0x08002750;
                }
                if (uVar8 != 0) break;
                schedule();
            }
            if (uVar8 < 0) goto code_r0x08002788;
        }
code_r0x08002750:
        _printk(0x800077a,"ccid_bulk_write");
        uVar8 = 0xfffffffffffffffb;
    }
    else {
        piVar16 = *puVar12;
        piVar13 = piVar16 + -8;
        uVar8 = __list_del_entry_valid(piVar16);
        if ((uVar8 & 1) != 0) {
            iVar14 = *piVar16;
            piVar3 = piVar16[1];
            *(iVar14 + 8) = piVar3;
            *piVar3 = iVar14;
        }
        *piVar16 = -0x2152ffffffffff00;
        piVar16[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        if (piVar13 == NULL) goto code_r0x08002488;
code_r0x08002550:
        if (*(iVar17 + 0x1c8) != 0) goto code_r0x08002750;
        iVar14 = *piVar13;
        __check_object_size(iVar14,arg2_00,0);
        iVar14 = sym._copy_from_user(iVar14,auVar18._8_8_,arg2_00);
        if (iVar14 == 0) {
            *(piVar13 + 1) = arg2_00;
            iVar6 = usb_ep_queue(*(iVar17 + 0xf0),piVar13,0xcc0);
            uVar8 = arg2_00;
            if (iVar6 < 0) {
                *(iVar17 + 0x1c8) = 1;
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                puVar15 = *(iVar17 + 0x220);
                piVar16 = piVar13 + 8;
                uVar8 = __list_add_valid(piVar16,puVar15,puVar12);
                if ((uVar8 & 1) != 0) {
                    *(iVar17 + 0x220) = piVar16;
                    piVar13[8] = puVar12;
                    piVar13[9] = puVar15;
                    *puVar15 = piVar16;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar7);
                uVar7 = _raw_spin_lock_irqsave(iVar1);
                if (*(iVar17 + 0xe0) == 0) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar7);
                    uVar9 = _raw_spin_lock_irqsave(iVar1);
                    puVar15 = *puVar12;
                    while (puVar12 != puVar15) {
                        piVar16 = *puVar12;
                        piVar13 = piVar16 + -8;
                        uVar8 = __list_del_entry_valid(piVar16);
                        if ((uVar8 & 1) != 0) {
                            iVar14 = *piVar16;
                            piVar3 = piVar16[1];
                            *(iVar14 + 8) = piVar3;
                            *piVar3 = iVar14;
                        }
                        *piVar16 = -0x2152ffffffffff00;
                        piVar16[1] = -0x2152fffffffffede;
                        _raw_spin_unlock_irqrestore(iVar1,uVar9);
                        if (piVar13 == NULL) goto code_r0x08002778;
                        uVar9 = *(iVar17 + 0xf0);
                        kfree(*piVar13);
                        usb_ep_free_request(uVar9,piVar13);
                        uVar9 = _raw_spin_lock_irqsave(iVar1);
                        puVar15 = *(iVar17 + 0x218);
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar9);
code_r0x08002778:
                    uVar8 = 0xffffffffffffffed;
                }
                else {
                    uVar8 = 0xfffffffffffffffb;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar7);
            }
        }
        else if (*(iVar17 + 0xe0) == 0) {
            uVar7 = *(iVar17 + 0xf0);
            kfree(*piVar13);
            usb_ep_free_request(uVar7,piVar13);
            uVar8 = 0xffffffffffffffed;
        }
        else {
            uVar7 = _raw_spin_lock_irqsave(iVar1);
            puVar15 = *(iVar17 + 0x220);
            piVar16 = piVar13 + 8;
            uVar8 = __list_add_valid(piVar16,puVar15,puVar12);
            if ((uVar8 & 1) != 0) {
                *(iVar17 + 0x220) = piVar16;
                piVar13[8] = puVar12;
                piVar13[9] = puVar15;
                *puVar15 = piVar16;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar7);
            uVar8 = 0xfffffffffffffff2;
        }
    }
code_r0x08002788:
    iVar17 = uVar8;
code_r0x0800278c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return iVar17;
    }
    auVar18 = __stack_chk_fail(iVar17);
    *extraout_x18_00 = 0x80027cc;
    iVar17 = *(auVar18._0_8_ + 0x2b0);
    if (*(iVar17 + -0x148) == 0) {
        iVar17 = 0xffffffed;
    }
    else if (*(iVar17 + -0x5c) == 0) {
        *(iVar17 + -0x5c) = 1;
        *(iVar17 + -0x60) = 0;
        uVar7 = _raw_spin_lock_irqsave(iVar17 + -0x14c);
        *(auVar18._8_8_ + 0xd8) = iVar17 + -0x228;
        _raw_spin_unlock_irqrestore(iVar17 + -0x14c,uVar7);
        iVar17 = 0;
    }
    else {
        iVar17 = 0xfffffff0;
    }
    return iVar17;
}


// ===== sym.ccid_bulk_write @ 0x080023b8 (size 1084) =====

int64_t sym.ccid_bulk_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t iVar11;
    ulong *puVar12;
    int64_t *piVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(arg1 + 0xd8);
    if (*(iVar14 + 0xe0) == 0) {
        iVar14 = -0x13;
        goto code_r0x0800278c;
    }
    if (arg3 == 0) {
        _printk(0x80005c0,"ccid_bulk_write");
        iVar14 = -0x13;
        goto code_r0x0800278c;
    }
    if (0x20b < arg3) {
        _printk(0x8000935,"ccid_bulk_write",0x20b,arg3);
        iVar14 = -0xc;
        goto code_r0x0800278c;
    }
    iVar1 = iVar14 + 0xdc;
    puVar2 = iVar14 + 0x218;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
code_r0x08002488:
        if (*(iVar14 + 0x1c8) == 0) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            init_wait_entry(&stack0xffffffffffffff70,0);
            iVar11 = iVar14 + 0x1f0;
            while( true ) {
                iVar8 = prepare_to_wait_event(iVar11,&stack0xffffffffffffff70,1);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                if (puVar2 == *puVar2) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                }
                else {
                    piVar13 = *puVar2;
                    piVar10 = piVar13 + -8;
                    uVar7 = __list_del_entry_valid(piVar13);
                    if ((uVar7 & 1) != 0) {
                        iVar3 = *piVar13;
                        piVar4 = piVar13[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar13 = -0x2152ffffffffff00;
                    piVar13[1] = -0x2152fffffffffede;
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                    if (piVar10 != NULL) {
                        finish_wait(iVar11,&stack0xffffffffffffff70);
                        goto code_r0x08002550;
                    }
                }
                if (*(iVar14 + 0x1c8) != 0) {
                    finish_wait(iVar11,&stack0xffffffffffffff70);
                    goto code_r0x08002750;
                }
                if (iVar8 != 0) break;
                schedule();
            }
            if (iVar8 < 0) goto code_r0x08002788;
        }
code_r0x08002750:
        _printk(0x800077a,"ccid_bulk_write");
        iVar8 = -5;
    }
    else {
        piVar13 = *puVar2;
        piVar10 = piVar13 + -8;
        uVar7 = __list_del_entry_valid(piVar13);
        if ((uVar7 & 1) != 0) {
            iVar11 = *piVar13;
            piVar4 = piVar13[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        *piVar13 = -0x2152ffffffffff00;
        piVar13[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        if (piVar10 == NULL) goto code_r0x08002488;
code_r0x08002550:
        if (*(iVar14 + 0x1c8) != 0) goto code_r0x08002750;
        iVar11 = *piVar10;
        __check_object_size(iVar11,arg3,0);
        iVar11 = sym._copy_from_user(iVar11,arg2,arg3);
        if (iVar11 == 0) {
            *(piVar10 + 1) = arg3;
            iVar5 = usb_ep_queue(*(iVar14 + 0xf0),piVar10,0xcc0);
            iVar8 = arg3;
            if (iVar5 < 0) {
                *(iVar14 + 0x1c8) = 1;
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                puVar12 = *(iVar14 + 0x220);
                piVar13 = piVar10 + 8;
                uVar7 = __list_add_valid(piVar13,puVar12,puVar2);
                if ((uVar7 & 1) != 0) {
                    *(iVar14 + 0x220) = piVar13;
                    piVar10[8] = puVar2;
                    piVar10[9] = puVar12;
                    *puVar12 = piVar13;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                if (*(iVar14 + 0xe0) == 0) {
                    _raw_spin_unlock_irqrestore(iVar1,uVar6);
                    uVar9 = _raw_spin_lock_irqsave(iVar1);
                    puVar12 = *puVar2;
                    while (puVar2 != puVar12) {
                        piVar13 = *puVar2;
                        piVar10 = piVar13 + -8;
                        uVar7 = __list_del_entry_valid(piVar13);
                        if ((uVar7 & 1) != 0) {
                            iVar11 = *piVar13;
                            piVar4 = piVar13[1];
                            *(iVar11 + 8) = piVar4;
                            *piVar4 = iVar11;
                        }
                        *piVar13 = -0x2152ffffffffff00;
                        piVar13[1] = -0x2152fffffffffede;
                        _raw_spin_unlock_irqrestore(iVar1,uVar9);
                        if (piVar10 == NULL) goto code_r0x08002778;
                        uVar9 = *(iVar14 + 0xf0);
                        kfree(*piVar10);
                        usb_ep_free_request(uVar9,piVar10);
                        uVar9 = _raw_spin_lock_irqsave(iVar1);
                        puVar12 = *(iVar14 + 0x218);
                    }
                    _raw_spin_unlock_irqrestore(iVar1,uVar9);
code_r0x08002778:
                    iVar8 = -0x13;
                }
                else {
                    iVar8 = -5;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
            }
        }
        else if (*(iVar14 + 0xe0) == 0) {
            uVar6 = *(iVar14 + 0xf0);
            kfree(*piVar10);
            usb_ep_free_request(uVar6,piVar10);
            iVar8 = -0x13;
        }
        else {
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            puVar12 = *(iVar14 + 0x220);
            piVar13 = piVar10 + 8;
            uVar7 = __list_add_valid(piVar13,puVar12,puVar2);
            if ((uVar7 & 1) != 0) {
                *(iVar14 + 0x220) = piVar13;
                piVar10[8] = puVar2;
                piVar10[9] = puVar12;
                *puVar12 = piVar13;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            iVar8 = -0xe;
        }
    }
code_r0x08002788:
    iVar14 = iVar8;
code_r0x0800278c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar15 = __stack_chk_fail(iVar14);
        *extraout_x18 = 0x80027cc;
        iVar14 = *(auVar15._0_8_ + 0x2b0);
        if (*(iVar14 + -0x148) == 0) {
            iVar14 = 0xffffffed;
        }
        else if (*(iVar14 + -0x5c) == 0) {
            *(iVar14 + -0x5c) = 1;
            *(iVar14 + -0x60) = 0;
            uVar6 = _raw_spin_lock_irqsave(iVar14 + -0x14c);
            *(auVar15._8_8_ + 0xd8) = iVar14 + -0x228;
            _raw_spin_unlock_irqrestore(iVar14 + -0x14c,uVar6);
            iVar14 = 0;
        }
        else {
            iVar14 = 0xfffffff0;
        }
        return iVar14;
    }
    return iVar14;
}


// ===== sym.ccid_bulk_open @ 0x080027f4 (size 144) =====

ulong sym.ccid_bulk_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x2b0);
    if (*(iVar2 + -0x148) == 0) {
        uVar1 = 0xffffffed;
    }
    else if (*(iVar2 + -0x5c) == 0) {
        *(iVar2 + -0x5c) = 1;
        *(iVar2 + -0x60) = 0;
        uVar1 = _raw_spin_lock_irqsave(iVar2 + -0x14c);
        *(arg2 + 0xd8) = iVar2 + -0x228;
        _raw_spin_unlock_irqrestore(iVar2 + -0x14c,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.ccid_bulk_release @ 0x0800288c (size 24) =====

ulong sym.ccid_bulk_release(int64_t arg1,int64_t arg2)

{
    *(*(arg2 + 0xd8) + 0x1cc) = 0;
    return 0;
}


// ===== sym.ccid_attr_release @ 0x080028a4 (size 36) =====

void sym.ccid_attr_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.ccid_function_bind @ 0x080028c8 (size 1416) =====

uint64_t sym.ccid_function_bind(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    code cVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(arg1 + 0x30);
    iVar4 = usb_interface_id();
    *(arg2 + 0xd8) = iVar4;
    if (iVar4 < 0) {
        _printk(0x80009e3,"ccid_function_bind");
        piVar10 = *(arg2 + 0xd8);
        goto code_r0x08002e28;
    }
    *0x800041a = iVar4;
    puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_notify_desc);
    if (puVar5 == NULL) {
        _printk(0x8000683,"ccid_function_bind");
        piVar10 = 0xffffffed;
        goto code_r0x08002e28;
    }
    *(arg2 + 0xe8) = puVar5;
    *puVar5 = puVar9;
    puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_in_desc);
    if (puVar5 == NULL) {
        _printk(0x8000a0c,"ccid_function_bind");
        piVar10 = 0xffffffed;
    }
    else {
        *(arg2 + 0xf0) = puVar5;
        *puVar5 = puVar9;
        puVar5 = usb_ep_autoconfig(*puVar9,obj.ccid_fs_out_desc);
        if (puVar5 == NULL) {
            _printk(0x800086d,"ccid_function_bind");
            piVar10 = 0xffffffed;
        }
        else {
            *(arg2 + 0xf8) = puVar5;
            *puVar5 = puVar9;
            *0x800043e = *0x800042c;
            *0x8000459 = *0x800042c;
            *0x8000447 = *0x8000435;
            *0x8000450 = *0x8000423;
            *0x8000462 = *0x8000435;
            *0x800046b = *0x8000423;
            uVar6 = usb_assign_descriptors
                              (arg2,obj.ccid_fs_descs,obj.ccid_hs_descs,obj.ccid_ss_descs,obj.ccid_ss_descs);
            piVar10 = uVar6 & 0xffffffff;
            if (uVar6 == 0) {
                uVar11 = *(arg2 + 0xe8);
                piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                cVar3 = android_kmalloc_64_create;
                if (piVar10 == NULL) {
code_r0x08002d94:
                    *(arg2 + 0x100) = 0xfffffffffffffff4;
code_r0x08002d9c:
                    _printk(0x8000800,"ccid_function_bind");
                    piVar10 = NULL;
                }
                else {
                    *(piVar10 + 1) = 4;
                    iVar7 = 0x38;
                    if (cVar3 != 0x0) {
                        iVar7 = 0x30;
                    }
                    iVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,4);
                    *piVar10 = iVar7;
                    if (iVar7 == 0) {
                        usb_ep_free_request(uVar11,piVar10);
                        goto code_r0x08002d94;
                    }
                    *(arg2 + 0x100) = piVar10;
                    if (0xfffffffffffff000 < piVar10) goto code_r0x08002d9c;
                    piVar10[6] = sym.ccid_notify_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(*(arg2 + 0x100) + 0x38) = arg2;
                    uVar11 = *(arg2 + 0xf8);
                    piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                    if (piVar10 == NULL) {
code_r0x08002dc4:
                        piVar10 = 0xfffffffffffffff4;
code_r0x08002dc8:
                        _printk(0x800078c,"ccid_function_bind");
                        puVar9 = *(arg2 + 0x100);
                    }
                    else {
                        *(piVar10 + 1) = 0x400;
                        iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x400);
                        *piVar10 = iVar7;
                        if (iVar7 == 0) {
                            usb_ep_free_request(uVar11,piVar10);
                            goto code_r0x08002dc4;
                        }
                        if (0xfffffffffffff000 < piVar10) goto code_r0x08002dc8;
                        piVar10[6] = sym.ccid_bulk_complete_out.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        piVar10[7] = arg2;
                        uVar11 = *(arg2 + 0xf0);
                        *(arg2 + 0x208) = piVar10;
                        piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                        if (piVar10 == NULL) {
code_r0x08002d44:
                            piVar10 = 0xfffffffffffffff4;
                        }
                        else {
                            *(piVar10 + 1) = 0x20b;
                            iVar7 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                            *piVar10 = iVar7;
                            if (iVar7 == 0) {
code_r0x08002d38:
                                usb_ep_free_request(uVar11,piVar10);
                                goto code_r0x08002d44;
                            }
                            if (piVar10 < 0xfffffffffffff001) {
                                iVar7 = arg2 + 0xdc;
                                iVar1 = arg2 + 0x218;
                                piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                piVar10[7] = arg2;
                                uVar11 = _raw_spin_lock_irqsave(iVar7);
                                piVar12 = *(arg2 + 0x220);
                                piVar2 = piVar10 + 8;
                                uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                if ((uVar6 & 1) != 0) {
                                    *(arg2 + 0x220) = piVar2;
                                    piVar10[8] = iVar1;
                                    piVar10[9] = piVar12;
                                    *piVar12 = piVar2;
                                }
                                _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                uVar11 = *(arg2 + 0xf0);
                                piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                if (piVar10 == NULL) goto code_r0x08002d44;
                                *(piVar10 + 1) = 0x20b;
                                iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                *piVar10 = iVar8;
                                if (iVar8 == 0) goto code_r0x08002d38;
                                if (piVar10 < 0xfffffffffffff001) {
                                    piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                    piVar10[7] = arg2;
                                    uVar11 = _raw_spin_lock_irqsave(iVar7);
                                    piVar12 = *(arg2 + 0x220);
                                    piVar2 = piVar10 + 8;
                                    uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                    if ((uVar6 & 1) != 0) {
                                        *(arg2 + 0x220) = piVar2;
                                        piVar10[8] = iVar1;
                                        piVar10[9] = piVar12;
                                        *piVar12 = piVar2;
                                    }
                                    _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                    uVar11 = *(arg2 + 0xf0);
                                    piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                    if (piVar10 == NULL) goto code_r0x08002d44;
                                    *(piVar10 + 1) = 0x20b;
                                    iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                    *piVar10 = iVar8;
                                    if (iVar8 == 0) goto code_r0x08002d38;
                                    if (piVar10 < 0xfffffffffffff001) {
                                        piVar10[6] = sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                        piVar10[7] = arg2;
                                        uVar11 = _raw_spin_lock_irqsave(iVar7);
                                        piVar12 = *(arg2 + 0x220);
                                        piVar2 = piVar10 + 8;
                                        uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                        if ((uVar6 & 1) != 0) {
                                            *(arg2 + 0x220) = piVar2;
                                            piVar10[8] = iVar1;
                                            piVar10[9] = piVar12;
                                            *piVar12 = piVar2;
                                        }
                                        _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                        uVar11 = *(arg2 + 0xf0);
                                        piVar10 = usb_ep_alloc_request(uVar11,0xcc0);
                                        if (piVar10 == NULL) goto code_r0x08002d44;
                                        *(piVar10 + 1) = 0x20b;
                                        iVar8 = kmem_cache_alloc_trace(_kmalloc_caches,0xcc0,0x20b);
                                        *piVar10 = iVar8;
                                        if (iVar8 == 0) goto code_r0x08002d38;
                                        if (piVar10 < 0xfffffffffffff001) {
                                            piVar10[6] = 
                                            sym.ccid_bulk_complete_in.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                            piVar10[7] = arg2;
                                            uVar11 = _raw_spin_lock_irqsave(iVar7);
                                            piVar12 = *(arg2 + 0x220);
                                            piVar2 = piVar10 + 8;
                                            uVar6 = __list_add_valid(piVar2,piVar12,iVar1);
                                            if ((uVar6 & 1) != 0) {
                                                *(arg2 + 0x220) = piVar2;
                                                piVar10[8] = iVar1;
                                                piVar10[9] = piVar12;
                                                *piVar12 = piVar2;
                                            }
                                            _raw_spin_unlock_irqrestore(iVar7,uVar11);
                                            piVar10 = NULL;
                                            goto code_r0x08002e28;
                                        }
                                    }
                                }
                            }
                        }
                        _printk(0x80007b9,"ccid_function_bind");
                        puVar9 = *(arg2 + 0x208);
                        if (puVar9 != NULL) {
                            uVar11 = *(arg2 + 0xf8);
                            kfree(*puVar9);
                            usb_ep_free_request(uVar11,puVar9);
                        }
                        puVar9 = *(arg2 + 0x100);
                    }
                    if (puVar9 != NULL) {
                        uVar11 = *(arg2 + 0xe8);
                        kfree(*puVar9);
                        usb_ep_free_request(uVar11,puVar9);
                    }
                }
                usb_free_all_descriptors(arg2);
            }
            **(arg2 + 0xf8) = 0;
            *(arg2 + 0xf8) = 0;
        }
        **(arg2 + 0xf0) = 0;
        *(arg2 + 0xf0) = 0;
    }
    **(arg2 + 0xe8) = 0;
    *(arg2 + 0xe8) = 0;
code_r0x08002e28:
    return piVar10 & 0xffffffff;
}


// ===== sym.ccid_function_unbind @ 0x08002e50 (size 312) =====

void sym.ccid_function_unbind(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong uVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg1 + 0x100);
    if (puVar6 != NULL) {
        uVar7 = *(arg1 + 0xe8);
        kfree(*puVar6);
        usb_ep_free_request(uVar7,puVar6);
    }
    if ((*(arg1 + 0x1d0) == 0) && (puVar6 = *(arg1 + 0x208), puVar6 != NULL)) {
        uVar7 = *(arg1 + 0xf8);
        kfree(*puVar6);
        usb_ep_free_request(uVar7,puVar6);
    }
    iVar1 = arg1 + 0xdc;
    puVar6 = arg1 + 0x218;
    uVar7 = _raw_spin_lock_irqsave(iVar1);
    puVar5 = *puVar6;
    while (puVar5 != puVar6) {
        piVar9 = *puVar6;
        piVar8 = piVar9 + -8;
        uVar4 = __list_del_entry_valid(piVar9);
        if ((uVar4 & 1) != 0) {
            iVar2 = *piVar9;
            piVar3 = piVar9[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar9 = -0x2152ffffffffff00;
        piVar9[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irqrestore(iVar1,uVar7);
        if (piVar8 == NULL) goto code_r0x08002f60;
        uVar7 = *(arg1 + 0xf0);
        kfree(*piVar8);
        usb_ep_free_request(uVar7,piVar8);
        uVar7 = _raw_spin_lock_irqsave(iVar1);
        puVar5 = *(arg1 + 0x218);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar7);
code_r0x08002f60:
    usb_free_all_descriptors(arg1);
    return;
}


// ===== sym.ccid_function_set_alt @ 0x08002f94 (size 396) =====

int sym.ccid_function_set_alt(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(*(arg1 + 0x30) + 0x30);
    iVar1 = config_ep_by_speed(*puVar4,arg1,*(arg1 + 0xe8));
    if (iVar1 != 0) {
        *(*(arg1 + 0xe8) + 0x38) = 0;
        iVar3 = *(arg1 + 0xe8);
        uVar2 = 0x8000994;
code_r0x08003064:
        _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
        return iVar1;
    }
    iVar1 = usb_ep_enable();
    if (iVar1 != 0) {
        iVar3 = *(arg1 + 0xe8);
        uVar2 = 0x8000846;
        goto code_r0x08003064;
    }
    **(arg1 + 0xe8) = arg1;
    iVar1 = config_ep_by_speed(*puVar4,arg1,*(arg1 + 0xf0));
    if (iVar1 == 0) {
        iVar1 = usb_ep_enable();
        if (iVar1 == 0) {
            iVar1 = config_ep_by_speed(*puVar4,arg1,*(arg1 + 0xf8));
            if (iVar1 == 0) {
                iVar1 = usb_ep_enable();
                if (iVar1 == 0) {
                    *(arg1 + 0x2b0) = 1;
                    *(arg1 + 0xe0) = 1;
                    return 0;
                }
                iVar3 = *(arg1 + 0xf8);
                uVar2 = 0x8000846;
            }
            else {
                *(*(arg1 + 0xf8) + 0x38) = 0;
                iVar3 = *(arg1 + 0xf8);
                uVar2 = 0x8000994;
            }
            _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
            usb_ep_disable(*(arg1 + 0xf0));
            goto code_r0x080030f4;
        }
        iVar3 = *(arg1 + 0xf0);
        uVar2 = 0x8000846;
    }
    else {
        *(*(arg1 + 0xf0) + 0x38) = 0;
        iVar3 = *(arg1 + 0xf0);
        uVar2 = 0x8000994;
    }
    _printk(uVar2,"ccid_function_set_alt",*(iVar3 + 8),iVar1);
code_r0x080030f4:
    usb_ep_disable(*(arg1 + 0xe8));
    **(arg1 + 0xe8) = 0;
    return iVar1;
}


// ===== sym.ccid_function_setup @ 0x08003120 (size 300) =====

int sym.ccid_function_setup(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint32_t uVar2;
    int iVar3;
    uint *puVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg2 + 2);
    piVar7 = *(*(arg1 + 0x30) + 0x30);
    puVar6 = piVar7[1];
    if (*(arg1 + 0xe0) == 0) {
        return -0x6b;
    }
    uVar2 = (((*arg2 & 0xff00) << 0x10) >> 8 | *arg2 << 0x18) >> 0x10;
    uVar5 = *(arg2 + 6);
    if (uVar2 == 0xa103) {
        puVar4 = 0x8000533;
    }
    else {
        if (uVar2 != 0xa102) {
            if ((uVar2 != 0x2101) || (uVar5 != 0)) {
                return -0x5f;
            }
            *(arg1 + 0x138) = 1;
            *(arg1 + 0x139) = uVar1;
            *(arg1 + 0x13a) = uVar1 >> 8;
            *(arg1 + 0x13b) = 0;
            *(arg1 + 0x13c) = 1;
            __wake_up(arg1 + 0x120,3,1,0);
            uVar5 = 0;
            goto code_r0x080031c4;
        }
        puVar4 = 0x800052a;
    }
    if (3 < uVar5) {
        uVar5 = 4;
    }
    **puVar6 = *puVar4;
code_r0x080031c4:
    *(puVar6 + 1) = uVar5;
    iVar3 = usb_ep_queue(*(*piVar7 + 0x40),puVar6,0xa20);
    if (iVar3 < 0) {
        _printk(0x8000890,iVar3);
    }
    return iVar3;
}


// ===== sym.ccid_function_disable @ 0x08003250 (size 136) =====

void sym.ccid_function_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_ep_disable(*(arg1 + 0xe8));
    usb_ep_disable(*(arg1 + 0xf0));
    usb_ep_disable(*(arg1 + 0xf8));
    *(arg1 + 0x2b0) = 0;
    *(arg1 + 0xe0) = 0;
    __wake_up(arg1 + 0x1f0,3,1,0);
    __wake_up(arg1 + 0x1d8,3,1,0);
    __wake_up(arg1 + 0x120,3,1,0);
    return;
}


// ===== sym.ccid_free_func @ 0x080032d8 (size 12) =====

void sym.ccid_free_func(void)

{
    return;
}


// ===== sym.ccid_notify_complete @ 0x080032e4 (size 72) =====

void sym.ccid_notify_complete(ulong noname_0,uint32_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x54);
    if (((iVar1 != -0x6c) && (iVar1 != -0x68)) && (iVar1 != 0)) {
        _printk(0x80007e5);
    }
    return;
}


// ===== sym.ccid_bulk_complete_out @ 0x0800332c (size 80) =====

void sym.ccid_bulk_complete_out(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x38);
    if (*(arg1 + 0x54) != 0) {
        *(iVar1 + 0x1c8) = 1;
    }
    *(iVar1 + 0x210) = 1;
    __wake_up(iVar1 + 0x1d8,3,1,0);
    return;
}


// ===== sym.ccid_bulk_complete_in @ 0x0800337c (size 180) =====

void sym.ccid_bulk_complete_in(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x38);
    if (*(arg1 + 0x54) != 0) {
        *(iVar5 + 0x1c8) = 1;
    }
    uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xdc);
    piVar4 = *(iVar5 + 0x220);
    iVar1 = arg1 + 0x40;
    uVar3 = __list_add_valid(iVar1,piVar4,iVar5 + 0x218);
    if ((uVar3 & 1) != 0) {
        *(iVar5 + 0x220) = iVar1;
        *(arg1 + 0x40) = iVar5 + 0x218;
        *(arg1 + 0x48) = piVar4;
        *piVar4 = iVar1;
    }
    _raw_spin_unlock_irqrestore(iVar5 + 0xdc,uVar2);
    __wake_up(iVar5 + 0x1f0,3,1,0);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003430 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003474

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
    //switch table (4 cases) at 0x8000a43
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003488);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003494 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_register(obj.ccidusb_func);
    return;
}


// ===== sym.cleanup_module @ 0x080034c0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_unregister(obj.ccidusb_func);
    return;
}

