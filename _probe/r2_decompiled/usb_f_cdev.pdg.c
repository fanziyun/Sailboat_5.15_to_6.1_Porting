// decompiled from usb_f_cdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1448) =====

//WARNING: Switch with 1 destination removed at 0x08005664

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xb9156c395278e7d) {
        if (arg1 < -0x1f5194b81050a881) {
            if (arg1 < -0x5c299434d380556a) {
                if (arg1 == -0x7bcbda558eb245e5) {
                    pcVar2 = sym.f_cdev_poll.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                }
                else {
                    if (arg1 == -0x7114d2616f3a39f0) {
                        pcVar2 = sym.dun_cser_connect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        goto code_r0x0800258c;
                    }
                    if (arg1 != -0x61af895beaf3d6ee) goto code_r0x08005624;
                    pcVar2 = sym.usb_cser_bind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                }
            }
            else if (arg1 < -0x5559db05f9d8bdf4) {
                if (arg1 == -0x5c299434d380556a) {
                    pcVar2 = sym.usb_cser_func_suspend.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                }
                else {
                    if (arg1 != -0x55bd4d1e73a69e63) goto code_r0x08005624;
                    pcVar2 = sym.cser_free_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                }
            }
            else {
                if (arg1 != -0x5559db05f9d8bdf4) {
                    if (arg1 != -0x1f5195091ebc2a73) goto code_r0x08005624;
                    pcVar2 = sym.__typeid__ZTSFjP7cserialE_global_addr;
                    goto code_r0x0800258c;
                }
                pcVar2 = sym.usb_cser_setup.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
        }
        else if (arg1 < -0x391b10cb41dc2a3) {
            if (arg1 < -0xb18138ae74ccd30) {
                if (arg1 != -0x1f5194b81050a881) {
                    if (arg1 != -0x118ad6e3daaa6194) goto code_r0x08005624;
                    pcVar2 = sym.__typeid__ZTSFjP7cserialjE_global_addr;
code_r0x0800258c:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08005624;
                }
                pcVar2 = sym.cser_alloc_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
            else {
                if (arg1 != -0xb18138ae74ccd30) {
                    if (arg1 != -0x8dc801903aca538) goto code_r0x08005624;
                    pcVar2 = sym.f_cdev_release.cfi_jt;
code_r0x08002384:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08005624;
                }
                pcVar2 = sym.cser_set_inst_name.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x391b10cb41dc2a3) {
                pcVar2 = sym.cser_alloc.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
            else {
                if (arg1 != -0x890743871a4a53) goto code_r0x08005624;
                pcVar2 = sym.f_cdev_ioctl.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08005624;
                pcVar2 = sym.seq_read.cfi_jt;
                goto code_r0x0800258c;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 < 0x1e8c334cfa2d7333) {
            if (arg1 == 0xb9156c395278e7d) {
                pcVar2 = sym.usb_cser_get_status.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
            else {
                if (arg1 != 0xeeff0ad281f3bef) {
                    if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08005624;
                    pcVar2 = sym.f_cdev_write.cfi_jt;
                    goto code_r0x0800258c;
                }
                pcVar2 = sym.usb_cser_status_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
        }
        else if (arg1 < 0x321969b888d4949e) {
            if (arg1 == 0x1e8c334cfa2d7333) {
                pcVar2 = sym.usb_cser_free_func.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                goto code_r0x0800258c;
            }
            if (arg1 != 0x2335293b6d480f98) goto code_r0x08005624;
            pcVar2 = sym.usb_cser_unbind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else {
            if (arg1 != 0x40ceb27a7e2157a1) goto code_r0x08005624;
            pcVar2 = sym.usb_cser_set_alt.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        }
    }
    else if (arg1 < 0x63cbeba280ab7603) {
        if (arg1 < 0x5b83a3fd302a5421) {
            if (arg1 == 0x5233d5bc7887ae44) {
                pcVar2 = sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            }
            else {
                if (arg1 != 0x5b47a89153d9f822) goto code_r0x08005624;
                pcVar2 = sym.__typeid__ZTSFvPviE_global_addr;
            }
        }
        else if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.cdev_device_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        }
        else {
            if (arg1 != 0x6322b72e887e81ab) goto code_r0x08005624;
            pcVar2 = sym.cserial_attr_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        }
    }
    else if (arg1 < 0x675f7914543f88c5) {
        if (arg1 != 0x63cbeba280ab7603) {
            if (arg1 != 0x643f348a21390606) goto code_r0x08005624;
            pcVar2 = sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            goto code_r0x08002384;
        }
        pcVar2 = sym.usb_cser_status_store.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    }
    else {
        if (arg1 == 0x675f7914543f88c5) {
            pcVar2 = sym.dun_cser_send_ctrl_bits.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
            goto code_r0x0800258c;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005624;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005624:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005678);
    (*pcVar1)();
}


// ===== sym.f_cdev_poll.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080025b0 (size 8) =====

uint32_t sym.f_cdev_poll.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xd8);
    if ((iVar4 == 0) || (*(iVar4 + 0x610) == '\0')) {
        _printk(0x8000c08,"f_cdev_poll");
        uVar2 = 8;
    }
    else {
        if (((param_2 != NULL) && (iVar4 + 0x448 != 0)) && (pcVar3 = *param_2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80006d0);
            (*pcVar3)(param_1,iVar4 + 0x448,param_2);
        }
        uVar1 = _raw_spin_lock_irqsave(iVar4 + 0x42c);
        uVar2 = 0;
        if (iVar4 + 0x470 != *(iVar4 + 0x470)) {
            uVar2 = 0x41;
        }
        if (*(iVar4 + 0x604) != '\0') {
            uVar2 = uVar2 | 2;
        }
        _raw_spin_unlock_irqrestore(iVar4 + 0x42c,uVar1);
    }
    return uVar2;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080025b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFvPviE_global_addr @ 0x080025c0 (size 8) =====

void sym.__typeid__ZTSFvPviE_global_addr(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x800085c,"usb_cser_notify_modem");
    }
    else {
        iVar1 = (param_2 & 3) << 1;
        if (iVar1 != *(param_1 + 0x600)) {
            *(param_1 + 0x600) = iVar1;
            *(param_1 + 0x604) = 1;
            __wake_up(param_1 + 0x448,3,1,0);
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080025c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_unregister(obj.cserusb_func);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080025d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_register(obj.cserusb_func);
    return;
}


// ===== sym.__typeid__ZTSFjP7cserialE_global_addr @ 0x080025d8 (size 8) =====

uint16_t sym.__typeid__ZTSFjP7cserialE_global_addr(int64_t param_1)

{
    return *(param_1 + 0x104) >> 1 & 1;
}


// ===== sym.dun_cser_get_dtr.cfi_jt @ 0x080025e0 (size 8) =====

uint16_t sym.dun_cser_get_dtr.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x104) & 1;
}


// ===== sym.usb_cser_bind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080025e8 (size 8) =====

//WARNING: Type propagation algorithm not settling

int sym.usb_cser_bind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ulong *param_2)

{
    code cVar1;
    int iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_1 + 0x30);
    iVar7 = param_2[0x19];
    if (obj.cser_string_defs == 0x0) {
        iVar2 = usb_string_id(puVar6);
        if (iVar2 < 0) {
            return iVar2;
        }
        obj.cser_string_defs = SUB41(iVar2,0);
    }
    iVar2 = usb_interface_id(param_1,param_2);
    if (-1 < iVar2) {
        *0x800055a = iVar2;
        *(param_2 + 0x101) = *0x800055a;
        *0x800055f = *(iVar7 + 0xc9);
        puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_in_desc);
        if (puVar3 != NULL) {
            param_2[0x1b] = puVar3;
            *puVar3 = puVar6;
            puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_out_desc);
            if (puVar3 != NULL) {
                param_2[0x1c] = puVar3;
                *puVar3 = puVar6;
                puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_notify_desc);
                if (puVar3 != NULL) {
                    param_2[0x1d] = puVar3;
                    *puVar3 = puVar6;
                    piVar4 = usb_ep_alloc_request(puVar3,0xcc0);
                    cVar1 = android_kmalloc_64_create;
                    if (piVar4 == NULL) {
                        _printk(0x8000a06,"usb_cser_alloc_req");
                    }
                    else {
                        *(piVar4 + 1) = 10;
                        iVar7 = 0x38;
                        if (cVar1 != 0x0) {
                            iVar7 = 0x30;
                        }
                        iVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,10);
                        *piVar4 = iVar7;
                        if (iVar7 != 0) {
                            param_2[0x1e] = piVar4;
                            *0x8000590 = *0x8000563;
                            piVar4[6] = sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                            *0x8000587 = *0x800056c;
                            *0x800057e = *0x8000590;
                            *(param_2[0x1e] + 0x38) = param_2 + -0x96;
                            *0x8000599 = *0x8000587;
                            if ((2 < *(**(param_1 + 0x30) + 0x5c)) &&
                               (*0x80005a2 = *0x8000575, 4 < *(**(param_1 + 0x30) + 0x5c))) {
                                *0x80005ab = *0x8000575;
                            }
                            iVar2 = usb_assign_descriptors
                                              (param_2,obj.cser_fs_function,obj.cser_hs_function,obj.cser_ss_function
                                               ,obj.cser_ss_function);
                            if (iVar2 == 0) {
                                return 0;
                            }
                            goto code_r0x08004a3c;
                        }
                        _printk(0x8000c4f,"usb_cser_alloc_req");
                        usb_ep_free_request(puVar3,piVar4);
                    }
                    iVar2 = -0x13;
                    param_2[0x1e] = 0;
                    puVar6 = param_2[0x1e];
                    goto joined_r0x08004a40;
                }
            }
        }
        iVar2 = -0x13;
    }
code_r0x08004a3c:
    puVar6 = param_2[0x1e];
joined_r0x08004a40:
    if (puVar6 == NULL) {
        puVar6 = param_2[0x1d];
    }
    else {
        uVar5 = param_2[0x1d];
        kfree(*puVar6);
        usb_ep_free_request(uVar5,param_2[0x1e]);
        param_2[0x1e] = 0;
        puVar6 = param_2[0x1d];
    }
    if (puVar6 == NULL) {
        puVar6 = param_2[0x1c];
    }
    else {
        *puVar6 = 0;
        puVar6 = param_2[0x1c];
    }
    if (puVar6 == NULL) {
        puVar6 = param_2[0x1b];
    }
    else {
        *puVar6 = 0;
        puVar6 = param_2[0x1b];
    }
    if (puVar6 != NULL) {
        *puVar6 = 0;
    }
    _printk(0x8001018,"usb_cser_bind",*param_2,iVar2);
    return iVar2;
}


// ===== sym.cserial_attr_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080025f0 (size 8) =====

void sym.cserial_attr_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.usb_cser_status_store.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080025f8 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.usb_cser_status_store.94c3747b6c276f8f7191513fbaf779a3.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    code cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0xb8);
    acStack_3c[0] = '\0';
    if (param_2 == 0) {
        _printk(0x8000979,"usb_cser_status_store");
    }
    else {
        iVar2 = kstrtou8(param_2,0,acStack_3c);
        if ((iVar2 == 0) && (acStack_3c[0] == '\0')) {
            uVar4 = _raw_spin_lock_irqsave(iVar8 + 0x42c);
            *(iVar8 + 0x618) = 0;
            *(iVar8 + 0x620) = 0;
            *(iVar8 + 0x628) = 0;
            *(iVar8 + 0x630) = 0;
            _raw_spin_unlock_irqrestore(iVar8 + 0x42c,uVar4);
        }
        else {
            _printk(0x80009dc,"usb_cser_status_store");
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar12 = __stack_chk_fail();
    puVar7 = auVar12._8_8_;
    iVar8 = auVar12._0_8_;
    *extraout_x18 = sym.usb_cser_bind;
    puVar10 = *(iVar8 + 0x30);
    iVar11 = puVar7[0x19];
    if (obj.cser_string_defs == 0x0) {
        uVar3 = usb_string_id(puVar10);
        if (uVar3 < 0) {
            return uVar3;
        }
        obj.cser_string_defs = SUB41(uVar3,0);
    }
    uVar3 = usb_interface_id(iVar8,puVar7);
    uVar9 = uVar3;
    if (-1 < uVar3) {
        *0x800055a = uVar3;
        *(puVar7 + 0x101) = *0x800055a;
        *0x800055f = *(iVar11 + 0xc9);
        puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_in_desc);
        if (puVar5 != NULL) {
            puVar7[0x1b] = puVar5;
            *puVar5 = puVar10;
            puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_out_desc);
            if (puVar5 != NULL) {
                puVar7[0x1c] = puVar5;
                *puVar5 = puVar10;
                puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_notify_desc);
                if (puVar5 != NULL) {
                    puVar7[0x1d] = puVar5;
                    *puVar5 = puVar10;
                    piVar6 = usb_ep_alloc_request(puVar5,0xcc0);
                    cVar1 = android_kmalloc_64_create;
                    if (piVar6 == NULL) {
                        _printk(0x8000a06,"usb_cser_alloc_req");
                    }
                    else {
                        *(piVar6 + 1) = 10;
                        iVar11 = 0x38;
                        if (cVar1 != 0x0) {
                            iVar11 = 0x30;
                        }
                        iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xcc0,10);
                        *piVar6 = iVar11;
                        if (iVar11 != 0) {
                            puVar7[0x1e] = piVar6;
                            *0x8000590 = *0x8000563;
                            piVar6[6] = sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                            *0x8000587 = *0x800056c;
                            *0x800057e = *0x8000590;
                            *(puVar7[0x1e] + 0x38) = puVar7 + -0x96;
                            *0x8000599 = *0x8000587;
                            if ((2 < *(**(iVar8 + 0x30) + 0x5c)) &&
                               (*0x80005a2 = *0x8000575, 4 < *(**(iVar8 + 0x30) + 0x5c))) {
                                *0x80005ab = *0x8000575;
                            }
                            uVar3 = usb_assign_descriptors
                                              (puVar7,obj.cser_fs_function,obj.cser_hs_function,obj.cser_ss_function
                                               ,obj.cser_ss_function);
                            uVar9 = uVar3;
                            if (uVar3 == 0) {
                                return 0;
                            }
                            goto code_r0x08004a3c;
                        }
                        _printk(0x8000c4f,"usb_cser_alloc_req");
                        usb_ep_free_request(puVar5,piVar6);
                    }
                    uVar9 = 0xffffffed;
                    puVar7[0x1e] = 0;
                    puVar10 = puVar7[0x1e];
                    goto joined_r0x08004a40;
                }
            }
        }
        uVar9 = 0xffffffed;
    }
code_r0x08004a3c:
    puVar10 = puVar7[0x1e];
joined_r0x08004a40:
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1d];
    }
    else {
        uVar4 = puVar7[0x1d];
        kfree(*puVar10);
        usb_ep_free_request(uVar4,puVar7[0x1e]);
        puVar7[0x1e] = 0;
        puVar10 = puVar7[0x1d];
    }
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1c];
    }
    else {
        *puVar10 = 0;
        puVar10 = puVar7[0x1c];
    }
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1b];
    }
    else {
        *puVar10 = 0;
        puVar10 = puVar7[0x1b];
    }
    if (puVar10 != NULL) {
        *puVar10 = 0;
    }
    _printk(0x8001018,"usb_cser_bind",*puVar7,uVar9);
    return uVar9;
}


// ===== sym.f_cdev_release.cfi_jt @ 0x08002600 (size 8) =====

ulong sym.f_cdev_release.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0xd8);
    uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x42c);
    *(iVar2 + 0x611) = 0;
    *(iVar2 + 0x604) = 0;
    _raw_spin_unlock_irqrestore(iVar2 + 0x42c,uVar1);
    put_device(iVar2 + 0x88);
    return 0;
}


// ===== sym.f_cdev_open.cfi_jt @ 0x08002608 (size 8) =====

uint64_t sym.f_cdev_open.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar9 = *(param_1 + 0x2b0);
    iVar8 = iVar9 + 0x88;
    get_device(iVar8);
    if (*(iVar9 + 0x611) == '\0') {
        *(param_2 + 0xd8) = iVar9;
        if (*(iVar9 + 0x610) == '\0') {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            init_wait_entry(&uStack_60,0);
            iVar11 = iVar9 + 0x430;
            uVar6 = prepare_to_wait_event(iVar11,&uStack_60,1);
            cVar4 = *(iVar9 + 0x610);
            while (cVar4 == '\0') {
                if (uVar6 != 0) {
                    if (uVar6 == 0) goto code_r0x0800298c;
                    put_device(iVar8);
                    goto code_r0x080029b8;
                }
                schedule();
                uVar6 = prepare_to_wait_event(iVar11,&uStack_60,1);
                cVar4 = *(iVar9 + 0x610);
            }
            finish_wait(iVar11,&uStack_60);
        }
code_r0x0800298c:
        uVar7 = _raw_spin_lock_irqsave(iVar9 + 0x42c);
        *(iVar9 + 0x611) = 1;
        _raw_spin_unlock_irqrestore(iVar9 + 0x42c,uVar7);
        sym.usb_cser_start_rx(iVar9);
        uVar6 = 0;
    }
    else {
        _printk(0x8000acc,"f_cdev_open");
        put_device(iVar8);
        uVar6 = 0xfffffff0;
    }
code_r0x080029b8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar6 & 0xffffffff;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.usb_cser_start_rx;
    if (iVar8 == 0) {
        uVar6 = _printk(0x800085c,"usb_cser_start_rx");
    }
    else {
        iVar9 = iVar8 + 0x42c;
        uVar7 = _raw_spin_lock_irqsave(iVar9);
        if ((*(iVar8 + 0x610) != '\0') && (*(iVar8 + 0x611) != '\0')) {
            puVar1 = iVar8 + 0x460;
            iVar11 = *(iVar8 + 0x590);
            do {
                if (puVar1 == *puVar1) goto code_r0x08002b54;
                piVar10 = *puVar1;
                uVar6 = __list_del_entry_valid(piVar10);
                if ((uVar6 & 1) != 0) {
                    iVar2 = *piVar10;
                    piVar3 = piVar10[1];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *piVar10 = piVar10;
                piVar10[1] = piVar10;
                *(piVar10 + -7) = 0x800;
                piVar10[-2] = sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                _raw_spin_unlock_irqrestore(iVar9,uVar7);
                iVar5 = usb_ep_queue(iVar11,piVar10 + -8,0xcc0);
                uVar7 = _raw_spin_lock_irqsave(iVar9);
            } while (iVar5 == 0);
            _printk(0x8000d2b,"usb_cser_start_rx",*(iVar8 + 0x418),iVar8,*(iVar11 + 8));
            iVar8 = *(iVar8 + 0x460);
            uVar6 = __list_add_valid(piVar10,puVar1,iVar8);
            if ((uVar6 & 1) != 0) {
                *(iVar8 + 8) = piVar10;
                *piVar10 = iVar8;
                piVar10[1] = puVar1;
                *puVar1 = piVar10;
            }
        }
code_r0x08002b54:
        uVar6 = _raw_spin_unlock_irqrestore(iVar9,uVar7);
    }
    return uVar6;
}


// ===== sym.seq_release.cfi_jt @ 0x08002610 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debug_cdev_rw_open.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002618 (size 8) =====

void sym.debug_cdev_rw_open.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.cser_alloc.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002620 (size 8) =====

int64_t sym.cser_alloc.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = *(param_1 + 0xb8);
    *(iVar1 + 0x4b0) = "cser";
    *(iVar1 + 0x4b8) = obj.usb_cser_strings;
    *(iVar1 + 0x4f8) = sym.usb_cser_bind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x500) = sym.usb_cser_unbind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x550) = sym.usb_cser_get_status.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x518) = sym.usb_cser_set_alt.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x528) = sym.usb_cser_disable.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x530) = sym.usb_cser_setup.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x558) = sym.usb_cser_func_suspend.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x508) = sym.usb_cser_free_func.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    return iVar1 + 0x4b0;
}


// ===== sym.cser_free_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002628 (size 8) =====

void sym.cser_free_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xb8);
    if (iVar1 != 0) {
        cdev_device_del(iVar1,iVar1 + 0x88);
        mutex_lock(obj.chardev_ida_lock);
        ida_free(obj.chardev_ida,*(*(param_1 + 0xb8) + 0x428));
        mutex_unlock(obj.chardev_ida_lock);
        debugfs_remove(*(*(param_1 + 0xb8) + 0x638));
        put_device(*(param_1 + 0xb8) + 0x88);
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        if (_segment.ehdr != 0) {
            uVar2 = 4;
            if (obj.minors == 0x0) {
                uVar2 = 0;
            }
            unregister_chrdev_region(_segment.ehdr << 0x14,uVar2);
            obj.minors = 0x0;
            _segment.ehdr = 0;
        }
        if ((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001)) {
            class_destroy();
        }
    }
    kfree(*(param_1 + 0xc0));
    kfree(param_1);
    return;
}


// ===== sym.usb_cser_setup.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002630 (size 8) =====

int sym.usb_cser_setup.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,uint16_t *param_2)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(param_1 + 0x30) + 0x30);
    uVar3 = (((*param_2 & 0xff00) << 0x10) >> 8 | *param_2 << 0x18) >> 0x10;
    puVar5 = piVar6[1];
    if (uVar3 == 0xa121) {
        uVar3 = param_2[3];
        if (6 < uVar3) {
            uVar3 = 7;
        }
        memcpy(*puVar5,param_1 + 0xf8,uVar3);
    }
    else if (uVar3 == 0x2122) {
        uVar1 = param_2[1];
        pcVar4 = *(param_1 + 0x148);
        *(param_1 + 0x104) = uVar1;
        if (pcVar4 != NULL) {
            if (pcVar4 != sym.__typeid__ZTSFvPviE_global_addr) {
                __cfi_slowpath_diag(0x5b47a89153d9f822,pcVar4,0x80007b0);
            }
            (*pcVar4)(param_1 + -0x4b0,uVar1);
        }
        uVar3 = 0;
    }
    else {
        if ((uVar3 != 0x2120) || (param_2[3] != 7)) {
            return -0x5f;
        }
        uVar3 = 7;
        **(*piVar6 + 0x40) = param_1 + -0x4b0;
        puVar5[6] = sym.port_complete_set_line_coding.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    }
    *(puVar5 + 1) = uVar3;
    *(puVar5 + 5) = *(puVar5 + 5) & 0xfffbffff;
    iVar2 = usb_ep_queue(*(*piVar6 + 0x40),puVar5,0xa20);
    if (iVar2 < 0) {
        _printk(0x8000f69,"usb_cser_setup",param_1 + -0x94,iVar2);
    }
    return iVar2;
}


// ===== sym.__typeid__ZTSFjP7cserialjE_global_addr @ 0x08002638 (size 8) =====

void sym.__typeid__ZTSFjP7cserialjE_global_addr(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = *(param_1 + 0x102) & 0xfff7 | (param_2 != 0) << 3;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.dun_cser_send_carrier_detect.cfi_jt @ 0x08002640 (size 8) =====

void sym.dun_cser_send_carrier_detect.cfi_jt(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = *(param_1 + 0x102) & 0xfffe | param_2 != 0;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.dun_cser_connect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002648 (size 8) =====

void sym.dun_cser_connect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = *(param_1 + 0x102) | 3;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.dun_cser_disconnect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002650 (size 8) =====

void sym.dun_cser_disconnect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = *(param_1 + 0x102) & 0xfffc;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002658 (size 8) =====

ulong sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 0) {
        _printk(0x800085c,"usb_cser_rw_show");
    }
    else {
        seq_printf(param_1,0x8000cdc,*(*(param_1 + 0x80) + 0x640));
    }
    return 0;
}


// ===== sym.usb_cser_set_alt.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002660 (size 8) =====

int sym.usb_cser_set_alt.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *arg2;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong uVar10;
    ulong uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(param_1 + 0xe8);
    iVar8 = param_1 + -0x4b0;
    piVar9 = *(*(param_1 + 0x30) + 0x30);
    if (*piVar6 != 0) {
        usb_ep_disable(piVar6);
        piVar6 = *(param_1 + 0xe8);
    }
    if (piVar6[7] == 0) {
        iVar3 = config_ep_by_speed(*piVar9,param_1);
        piVar6 = *(param_1 + 0xe8);
        if (iVar3 != 0) {
            piVar6[7] = 0;
            return -0x16;
        }
    }
    iVar3 = usb_ep_enable(piVar6);
    if (iVar3 != 0) {
        _dev_err(*piVar9 + 0x78,"can\'t enable %s, result %d\n",*(*(param_1 + 0xe8) + 8),iVar3);
        return iVar3;
    }
    **(param_1 + 0xe8) = iVar8;
    piVar6 = *(param_1 + 0xd8);
    if (*piVar6 != 0) {
        sym.usb_cser_disconnect(iVar8);
        piVar6 = *(param_1 + 0xd8);
    }
    if (((piVar6[7] == 0) || (*(*(param_1 + 0xe0) + 0x38) == 0)) &&
       ((iVar3 = config_ep_by_speed(*piVar9,param_1), iVar3 != 0 ||
        (iVar3 = config_ep_by_speed(*piVar9,param_1,*(param_1 + 0xe0)), iVar3 != 0)))) {
        *(*(param_1 + 0xd8) + 0x38) = 0;
        *(*(param_1 + 0xe0) + 0x38) = 0;
        return -0x16;
    }
    if (iVar8 == 0) {
        _printk(0x8000e2c,"usb_cser_connect");
        return 0;
    }
    *(param_1 + 0x148) = sym.__typeid__ZTSFvPviE_global_addr;
    iVar3 = usb_ep_enable(*(param_1 + 0xd8));
    if (iVar3 != 0) {
        _printk(0x8000870,"usb_cser_connect",*(param_1 + 0xd8),iVar3);
        return 0;
    }
    **(param_1 + 0xd8) = iVar8;
    iVar3 = usb_ep_enable(*(param_1 + 0xe0));
    if (iVar3 != 0) {
        _printk(0x8000ba5,"usb_cser_connect",*(param_1 + 0xe0),iVar3);
        **(param_1 + 0xd8) = 0;
        return 0;
    }
    iVar1 = param_1 + -0x84;
    **(param_1 + 0xe0) = iVar8;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    *(param_1 + 0xff) = 0;
    *(param_1 + 0x160) = 1;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(param_1 + 0x160) != '\0') {
        arg2 = param_1 + -0x50;
        *(param_1 + -0x10) = 0;
        *(param_1 + -0x18) = 0;
        *(param_1 + -0x20) = 0;
        iVar3 = sym.usb_cser_alloc_requests(*(param_1 + 0xe0),arg2,0x80026d8);
        if (iVar3 == 0) {
            iVar3 = sym.usb_cser_alloc_requests(*(param_1 + 0xd8),param_1 + -0x30,0x80026e0);
            if (iVar3 == 0) {
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                sym.usb_cser_start_rx(iVar8);
                goto code_r0x08004e10;
            }
            uVar11 = *(param_1 + 0xe0);
            uVar10 = 0x8001036;
            puVar7 = *(param_1 + -0x50);
            while (arg2 != puVar7) {
                piVar9 = *arg2;
                piVar6 = piVar9 + -8;
                uVar5 = __list_del_entry_valid(piVar9);
                if ((uVar5 & 1) != 0) {
                    iVar8 = *piVar9;
                    piVar2 = piVar9[1];
                    *(iVar8 + 8) = piVar2;
                    *piVar2 = iVar8;
                }
                *piVar9 = piVar9;
                piVar9[1] = piVar9;
                if (piVar6 != NULL) {
                    kfree(*piVar6);
                    usb_ep_free_request(uVar11,piVar6);
                }
                puVar7 = *arg2;
            }
        }
        else {
            uVar10 = 0x80007f3;
        }
        _printk(uVar10,"usb_cser_start_io");
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
code_r0x08004e10:
    __wake_up(param_1 + -0x80,3,1,0);
    return 0;
}


// ===== sym.usb_cser_unbind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002668 (size 8) =====

void sym.usb_cser_unbind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x160) != '\0') {
        sym.usb_cser_disconnect(param_2 + -0x4b0);
        usb_ep_disable(*(param_2 + 0xe8));
        **(param_2 + 0xe8) = 0;
    }
    obj.cser_string_defs = 0x0;
    usb_free_all_descriptors(param_2);
    if (*(param_2 + 0xf0) != NULL) {
        uVar1 = *(param_2 + 0xe8);
        kfree(**(param_2 + 0xf0));
        usb_ep_free_request(uVar1,*(param_2 + 0xf0));
        *(param_2 + 0xf0) = 0;
    }
    return;
}


// ===== sym.cser_set_inst_name.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002670 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080038e0)
//WARNING: Removing unreachable block (ram,0x080038f4)
//WARNING: Removing unreachable block (ram,0x08003910)
//WARNING: Removing unreachable block (ram,0x08003918)

void sym.cser_set_inst_name.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ulong param_2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uchar uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar4 = strlen(param_2);
    if (0xf < iVar4 + 1U) {
code_r0x08003770:
        uVar6 = 0xffffffdc;
        goto code_r0x08003774;
    }
    iVar5 = strnchr(param_2,iVar4,0x2e);
    if (iVar5 == 0) {
        _printk(0x8000a3e,"cser_set_inst_name",param_2);
        uVar6 = 0xffffffea;
        goto code_r0x08003774;
    }
    iVar5 = strlen();
    uVar9 = (iVar4 + 1U) - iVar5;
    if (5 < uVar9) goto code_r0x08003770;
    iVar4 = kstrndup(param_2,uVar9 - 1,0xcc0);
    if (iVar4 == 0) {
        _printk(0x8000c99,"cser_set_inst_name",0);
        uVar6 = 0xfffffff4;
        goto code_r0x08003774;
    }
    *(param_1 + 0xc0) = iVar4;
    puVar7 = strrchr(param_2,0x2e);
    if (puVar7 == NULL) {
        uVar6 = 0x800081a;
    }
    else {
        puVar1 = param_1 + 200;
        *puVar7 = 0;
        iVar3 = kstrtou8(puVar7 + 1,0,puVar1);
        if (iVar3 == 0) {
            uVar2 = *puVar1;
            uVar9 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x648);
            if (uVar9 != 0) {
                mutex_lock(obj.chardev_ida_lock);
                if (_segment.ehdr == 0) {
                    uStack_5c = 0;
                    iVar3 = alloc_chrdev_region(&uStack_5c,0,4,"msm_usb_bridge");
                    if (iVar3 == 0) {
                        _segment.ehdr = CONCAT44(*0x8000004,uStack_5c >> 0x14);
                        obj.minors = 0x1;
                        _segment.ehdr =
                             __class_create(obj.__this_module,"msm_usb_bridge",obj.usb_cser_alloc_chardev_region.__key
                                           );
                        if (0xfffffffffffff000 < _segment.ehdr) {
                            _printk(0x8000ff4,"usb_cser_alloc_chardev_region");
                        }
                        goto code_r0x0800388c;
                    }
                    _printk(0x8000cb1,"usb_cser_alloc_chardev_region",iVar3);
                    mutex_unlock(obj.chardev_ida_lock);
                    _printk(0x8000e54,"f_cdev_alloc");
code_r0x0800391c:
                    kfree(uVar9);
                    uVar9 = iVar3;
                }
                else {
code_r0x0800388c:
                    iVar3 = ida_alloc_range(obj.chardev_ida,0,0xffffffff,0xcc0);
                    if (3 < iVar3) {
                        ida_free(obj.chardev_ida);
                        mutex_unlock(obj.chardev_ida_lock);
                        iVar3 = -0x13;
                        goto code_r0x0800391c;
                    }
                    *(uVar9 + 0x418) = uVar2;
                    *(uVar9 + 0x428) = iVar3;
                    mutex_unlock(obj.chardev_ida_lock);
                    iVar4 = uVar9 + 0x41c;
                    snprintf(iVar4,9,"%s%d","at_usb",uVar2);
                    *(uVar9 + 0x42c) = 0;
                    __init_waitqueue_head(uVar9 + 0x430,"&port->open_wq",obj.usb_cser_alloc_chardev_region.__key);
                    __init_waitqueue_head(uVar9 + 0x448,"&port->read_wq",obj.usb_cser_alloc_chardev_region.__key);
                    *(uVar9 + 0x460) = uVar9 + 0x460;
                    *(uVar9 + 0x468) = uVar9 + 0x460;
                    *(uVar9 + 0x470) = uVar9 + 0x470;
                    *(uVar9 + 0x478) = uVar9 + 0x470;
                    *(uVar9 + 0x480) = uVar9 + 0x480;
                    *(uVar9 + 0x488) = uVar9 + 0x480;
                    iVar5 = alloc_workqueue(0x8000959,0xe000a,1,iVar4);
                    *(uVar9 + 0x608) = iVar5;
                    if (iVar5 == 0) {
                        _printk(0x8000aeb,"f_cdev_alloc",iVar4);
                        iVar3 = -0xc;
                        goto code_r0x0800391c;
                    }
                    cdev_init(uVar9,obj.f_cdev_fops);
                    iVar5 = uVar9 + 0x88;
                    device_initialize(iVar5);
                    *(uVar9 + 0xe8) = 0;
                    iVar3 = _segment.ehdr;
                    *(uVar9 + 0x3a8) = _segment.ehdr;
                    *(uVar9 + 0x388) = *(uVar9 + 0x428) | iVar3 << 0x14;
                    *(uVar9 + 0x3b8) = sym.cdev_device_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                    dev_set_name(iVar5,iVar4);
                    iVar3 = cdev_device_add(uVar9,iVar5);
                    if (iVar3 != 0) {
                        _printk(0x8000d57,"f_cdev_alloc",iVar4);
                        destroy_workqueue(*(uVar9 + 0x608));
                        goto code_r0x0800391c;
                    }
                    sym.usb_cser_debugfs_init(uVar9);
                    _printk(0x8000fb0,"f_cdev_alloc",iVar4,uVar9,*(uVar9 + 0x418));
                }
                if (uVar9 < 0xfffffffffffff001) {
                    *(param_1 + 0xb8) = uVar9;
                    uVar6 = strcmp(*(param_1 + 0xc0),0x8000e41);
                    if (uVar6 == 0) {
                        uVar8 = 0x40;
                        *(uVar9 + 0x5c8) = sym.dun_cser_connect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5b8) = sym.dun_cser_get_dtr.cfi_jt;
                        *(uVar9 + 0x5c0) = sym.__typeid__ZTSFjP7cserialE_global_addr;
                        *(uVar9 + 0x5e0) = sym.dun_cser_send_carrier_detect.cfi_jt;
                        *(uVar9 + 0x5e8) = sym.__typeid__ZTSFjP7cserialjE_global_addr;
                        *(uVar9 + 0x5f0) = sym.dun_cser_send_ctrl_bits.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5d0) = sym.dun_cser_disconnect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5d8) = sym.dun_cser_send_break.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                    }
                    else {
                        uVar8 = 0x60;
                        uVar6 = 0;
                    }
                    *(param_1 + 0xc9) = uVar8;
                    goto code_r0x08003774;
                }
            }
            _printk(0x8000e8c,"cser_set_inst_name",*puVar1);
            uVar6 = 0xfffffff4;
            goto code_r0x08003774;
        }
        uVar6 = 0x800098f;
    }
    _printk(uVar6,"cser_set_inst_name");
    uVar6 = 0xffffffea;
code_r0x08003774:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_58) {
        iVar4 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.dun_cser_connect;
        *(iVar4 + 0x102) = *(iVar4 + 0x102) | 3;
        sym.port_notify_serial_state(iVar4);
        return;
    }
    return;
}


// ===== sym.dun_cser_send_ctrl_bits.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002678 (size 8) =====

void sym.dun_cser_send_ctrl_bits.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ushort param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = param_2;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.dun_cser_send_break.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002680 (size 8) =====

void sym.dun_cser_send_break.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x102) = *(param_1 + 0x102) & 0xfffb | (param_2 != 0) << 2;
    sym.port_notify_serial_state(param_1);
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x08002688 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.f_cdev_read.cfi_jt @ 0x08002690 (size 8) =====

int64_t sym.f_cdev_read.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    code *pcVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    int64_t arg1;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xd8);
    if (arg1 == 0) {
        _printk(0x8000e2c,"f_cdev_read");
        iVar10 = -0x16;
    }
    else {
        iVar1 = arg1 + 0x42c;
        uVar6 = _raw_spin_lock_irqsave(iVar1);
        uVar12 = *(arg1 + 0x498);
        puVar2 = arg1 + 0x470;
        piVar8 = *(arg1 + 0x490);
        *(arg1 + 0x490) = 0;
        *(arg1 + 0x498) = 0;
        iVar13 = *(arg1 + 0x4a0);
        *(arg1 + 0x4a0) = 0;
        if (puVar2 == *puVar2 && uVar12 == 0) {
            iVar10 = 0;
code_r0x08002db0:
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            sym.usb_cser_start_rx(arg1);
        }
        else {
            iVar10 = 0;
            iVar3 = arg1 + 0x460;
code_r0x08002c74:
            if (uVar12 == 0) {
                if ((puVar2 == *puVar2) || (param_3 == 0)) goto code_r0x08002da4;
                piVar8 = *puVar2;
                uVar12 = __list_del_entry_valid(piVar8);
                if ((uVar12 & 1) != 0) {
                    iVar13 = *piVar8;
                    piVar9 = piVar8[1];
                    *(iVar13 + 8) = piVar9;
                    *piVar9 = iVar13;
                }
                *piVar8 = piVar8;
                piVar8[1] = piVar8;
                uVar12 = *(piVar8 + 3);
                iVar13 = piVar8[-8];
                piVar9 = piVar8 + -8;
            }
            else {
                piVar9 = piVar8;
                if (param_3 == 0) {
code_r0x08002da4:
                    *(arg1 + 0x498) = uVar12;
                    *(arg1 + 0x4a0) = iVar13;
                    *(arg1 + 0x490) = piVar8;
                    goto code_r0x08002db0;
                }
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            uVar14 = uVar12;
            if (param_3 <= uVar12) {
                uVar14 = param_3;
            }
            if (uVar14 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8002d98);
                (*pcVar4)();
            }
            noname_1 = __check_object_size(iVar13,uVar14,1);
            iVar7 = sym._copy_to_user(param_2,noname_1,uVar14);
            uVar14 = uVar14 - iVar7;
            *(arg1 + 0x628) = *(arg1 + 0x628) + uVar14;
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            if (*(arg1 + 0x610) != '\0') {
                iVar10 = uVar14 + iVar10;
                param_3 = param_3 - uVar14;
                param_2 = param_2 + uVar14;
                bVar5 = uVar12 < uVar14;
                uVar12 = uVar12 - uVar14;
                if (bVar5 || uVar12 == 0) {
                    piVar15 = *(arg1 + 0x468);
                    piVar11 = piVar9 + 8;
                    uVar14 = __list_add_valid(piVar11,piVar15,iVar3);
                    uVar12 = 0;
                    iVar13 = 0;
                    piVar8 = NULL;
                    if ((uVar14 & 1) != 0) {
                        uVar12 = 0;
                        iVar13 = 0;
                        *(arg1 + 0x468) = piVar11;
                        piVar9[8] = iVar3;
                        piVar9[9] = piVar15;
                        *piVar15 = piVar11;
                        piVar8 = NULL;
                    }
                }
                else {
                    iVar13 = iVar13 + uVar14;
                    piVar8 = piVar9;
                }
                goto code_r0x08002c74;
            }
            piVar11 = *(arg1 + 0x468);
            piVar8 = piVar9 + 8;
            uVar12 = __list_add_valid(piVar8,piVar11,iVar3);
            if ((uVar12 & 1) != 0) {
                *(arg1 + 0x468) = piVar8;
                piVar9[8] = iVar3;
                piVar9[9] = piVar11;
                *piVar11 = piVar8;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            iVar10 = -0xb;
        }
    }
    return iVar10;
}


// ===== sym.f_cdev_ioctl.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002698 (size 8) =====

int64_t sym.f_cdev_ioctl.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,int param_2,uint32_t *param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *puVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0xd8);
    if (iVar10 == 0) {
        _printk(0x8000c3a,"f_cdev_ioctl");
        iVar7 = 8;
    }
    else if (param_2 - 0x5416U < 3) {
        puVar4 = sp_el0;
        if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (puVar8 = param_3, (*puVar4 >> 0x1a & 1) != 0)) {
            puVar8 = param_3 & (param_3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < puVar8;
        puVar8 = puVar8 + 1;
        uVar1 = 0;
        if (!bVar5 || puVar8 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar8,~uVar1) || CARRY8(puVar8 + ~uVar1,bVar5)) && puVar8 != uVar1 + !bVar5) {
            _printk(0x800092e,"f_cdev_ioctl");
            iVar7 = -0xe;
        }
        else {
            if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar4[1];
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
            uVar3 = *param_3;
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
            iVar7 = iVar10 + 0x4b0;
            if (((uVar3 >> 7 & 1) == 0) || (pcVar9 = *(iVar10 + 0x5e8), pcVar9 == NULL)) {
                iVar6 = 0;
            }
            else {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) | 0x80;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x80006f0);
                }
                iVar6 = (*pcVar9)(iVar7,1);
            }
            if (((~uVar3 >> 7 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e8), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) & 0xff7f;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000710);
                }
                iVar6 = (*pcVar9)(iVar7,0);
            }
            if (((uVar3 >> 6 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e0), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) | 0x40;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000730);
                }
                iVar6 = (*pcVar9)(iVar7,1);
            }
            if (((~uVar3 >> 6 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e0), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) & 0xffbf;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000750);
                }
                iVar6 = (*pcVar9)(iVar7,0);
            }
            iVar7 = iVar6;
        }
    }
    else if (param_2 == 0x5415) {
        pcVar9 = *(iVar10 + 0x5b8);
        if (pcVar9 == NULL) {
            pcVar9 = *(iVar10 + 0x5c0);
        }
        else {
            if (1 < (pcVar9 + -0x80025d8 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xe0ae6af6e143d58d,pcVar9,0x8000770);
            }
            (*pcVar9)(iVar10 + 0x4b0);
            pcVar9 = *(iVar10 + 0x5c0);
        }
        if (pcVar9 != NULL) {
            if (1 < (pcVar9 + -0x80025d8 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xe0ae6af6e143d58d,pcVar9,0x8000790);
            }
            (*pcVar9)(iVar10 + 0x4b0);
        }
        puVar4 = sp_el0;
        uVar1 = (param_3 << 8) >> 8;
        if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (puVar8 = param_3, (*puVar4 >> 0x1a & 1) != 0)) {
            puVar8 = param_3 & uVar1;
        }
        bVar5 = 0xfffffffffffffffb < puVar8;
        puVar8 = puVar8 + 1;
        uVar2 = 0;
        if (!bVar5 || puVar8 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar8,~uVar2) || CARRY8(puVar8 + ~uVar2,bVar5)) && puVar8 != uVar2 + !bVar5) {
            iVar7 = -0xe;
            *(iVar10 + 0x604) = 0;
        }
        else {
            if ((param_3 & uVar1 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar4[1];
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
            *param_3 = 0;
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar1 = daif;
                if ((uVar1 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar1;
            }
            iVar7 = 0;
            *(iVar10 + 0x604) = 0;
        }
    }
    else {
        _printk(0x8000e07,"f_cdev_ioctl");
        iVar7 = -0x203;
    }
    return iVar7;
}


// ===== sym.cdev_device_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026a0 (size 8) =====

void sym.cdev_device_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(param_1 + -0x88);
    return;
}


// ===== sym.usb_cser_get_status.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026a8 (size 8) =====

ulong sym.usb_cser_get_status.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(void)

{
    return 0;
}


// ===== sym.cser_alloc_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026b0 (size 8) =====

int64_t sym.cser_alloc_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_seq_read,0xdc0,0xd0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.cser_set_inst_name.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        *(iVar1 + 0xb0) = sym.cser_free_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        config_group_init_type_name(iVar1,0x8000e75,obj.cserial_func_type);
    }
    return iVar1;
}


// ===== sym.usb_cser_free_func.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026b8 (size 8) =====

void sym.usb_cser_free_func.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(void)

{
    return;
}


// ===== sym.usb_cser_disable.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026c0 (size 8) =====

void sym.usb_cser_disable.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.usb_cser_disconnect(param_1 + -0x4b0);
    usb_ep_disable(*(param_1 + 0xe8));
    **(param_1 + 0xe8) = 0;
    return;
}


// ===== sym.usb_cser_func_suspend.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026c8 (size 8) =====

ulong sym.usb_cser_func_suspend.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,uint32_t param_2)

{
    *(param_1 + -7) = param_2 >> 1 & 1;
    *(param_1 + -8) = param_2 & 1;
    return 0;
}


// ===== sym.usb_cser_status_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026d0 (size 8) =====

int64_t sym.usb_cser_status_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,ulong param_2)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xb8);
    iVar3 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x200);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        uVar4 = _raw_spin_lock_irqsave(iVar5 + 0x42c);
        pcVar1 = "Closed";
        if (*(iVar5 + 0x611) != '\0') {
            pcVar1 = "Opened";
        }
        iVar2 = scnprintf(iVar3,0x200,
                          "###PORT:%s###\nport_no:%d\nfunc:%s\nnbytes_to_host: %lu\nnbytes_from_host: %lu\nnbytes_to_port_bridge:  %lu\nnbytes_from_port_bridge: %lu\ncbits_to_modem:  %u\nPort Opened: %s\n"
                          ,iVar5 + 0x41c,*(iVar5 + 0x418),*(param_1 + 0xc0),*(iVar5 + 0x620),*(iVar5 + 0x618),
                          *(iVar5 + 0x628),*(iVar5 + 0x630),*(iVar5 + 0x600),pcVar1);
        _raw_spin_unlock_irqrestore(iVar5 + 0x42c,uVar4);
        iVar2 = scnprintf(param_2,iVar2,iVar3);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026d8 (size 8) =====

void sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *param_1;
    if (iVar7 == 0) {
        _printk(0x800085c,"usb_cser_read_complete");
        return;
    }
    iVar1 = iVar7 + 0x42c;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar7 + 0x611) != '\0') {
        iVar3 = *(param_2 + 0x54);
        if ((iVar3 == -0x68) || (iVar3 == -0x20)) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            iVar3 = usb_ep_queue(param_1,param_2,0xcc0);
            if (iVar3 == 0) {
                return;
            }
            uVar4 = _raw_spin_lock_irqsave(iVar1);
        }
        else if ((iVar3 == 0) && (*(param_2 + 0x58) != 0)) {
            iVar2 = param_2 + 0x40;
            piVar6 = *(iVar7 + 0x478);
            *(iVar7 + 0x618) = *(iVar7 + 0x618) + *(param_2 + 0x58);
            uVar5 = __list_add_valid(iVar2,piVar6,iVar7 + 0x470);
            if ((uVar5 & 1) != 0) {
                *(iVar7 + 0x478) = iVar2;
                *(param_2 + 0x40) = iVar7 + 0x470;
                *(param_2 + 0x48) = piVar6;
                *piVar6 = iVar2;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            __wake_up(iVar7 + 0x448,3,1,0);
            return;
        }
    }
    piVar6 = *(iVar7 + 0x468);
    iVar2 = param_2 + 0x40;
    uVar5 = __list_add_valid(iVar2,piVar6,iVar7 + 0x460);
    if ((uVar5 & 1) != 0) {
        *(iVar7 + 0x468) = iVar2;
        *(param_2 + 0x40) = iVar7 + 0x460;
        *(param_2 + 0x48) = piVar6;
        *piVar6 = iVar2;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return;
}


// ===== sym.usb_cser_write_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026e0 (size 8) =====

void sym.usb_cser_write_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *param_1;
    if (iVar5 == 0) {
        _printk(0x800085c,"usb_cser_write_complete");
    }
    else {
        uVar2 = _raw_spin_lock_irqsave(iVar5 + 0x42c);
        iVar1 = param_2 + 0x40;
        piVar4 = *(iVar5 + 0x488);
        *(iVar5 + 0x620) = *(iVar5 + 0x620) + *(param_2 + 0x58);
        uVar3 = __list_add_valid(iVar1,piVar4,iVar5 + 0x480);
        if ((uVar3 & 1) != 0) {
            *(iVar5 + 0x488) = iVar1;
            *(param_2 + 0x40) = iVar5 + 0x480;
            *(param_2 + 0x48) = piVar4;
            *piVar4 = iVar1;
        }
        _raw_spin_unlock_irqrestore(iVar5 + 0x42c,uVar2);
    }
    return;
}


// ===== sym.port_complete_set_line_coding.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026e8 (size 8) =====

void sym.port_complete_set_line_coding.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t *param_1,ulong *param_2)

{
    uint uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x54) == 0) {
        if (*(param_2 + 0xb) == 7) {
            iVar2 = *param_1;
            uVar1 = **param_2;
            *(iVar2 + 0x5ab) = *(*param_2 + 3);
            *(iVar2 + 0x5a8) = uVar1;
        }
        else {
            usb_ep_set_halt();
        }
    }
    return;
}


// ===== sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x080026f0 (size 8) =====

void sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_2 + 0x38);
    iVar1 = iVar3 + 0x42c;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(iVar3 + 0x5af) = 0;
    if ((*(param_2 + 0x54) != -0x6c) && (*(iVar3 + 0x5b0) != '\0')) {
        *(iVar3 + 0x5b0) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.port_notify_serial_state(iVar3 + 0x4b0);
        uVar2 = _raw_spin_lock_irqsave(iVar1);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    return;
}


// ===== sym.f_cdev_write.cfi_jt @ 0x080026f8 (size 8) =====

uint64_t sym.f_cdev_write.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_1 + 0xd8);
    if (iVar11 == 0) {
        _printk(0x8000e2c,"f_cdev_write");
        return 0xffffffffffffffea;
    }
    iVar1 = iVar11 + 0x42c;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar11 + 0x610) == '\0') {
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        _printk(0x8000f8e,"f_cdev_write","f_cdev_write");
        return 0xffffffffffffffed;
    }
    piVar2 = iVar11 + 0x480;
    if (piVar2 == *piVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        return 0;
    }
    piVar7 = *(iVar11 + 0x480);
    uVar8 = *(iVar11 + 0x588);
    piVar9 = piVar7 + -8;
    uVar6 = __list_del_entry_valid(piVar7);
    if ((uVar6 & 1) != 0) {
        iVar10 = *piVar7;
        piVar3 = piVar7[1];
        *(iVar10 + 8) = piVar3;
        *piVar3 = iVar10;
    }
    *piVar7 = piVar7;
    piVar7[1] = piVar7;
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    iVar10 = piVar7[-8];
    if (0x7ff < param_3) {
        param_3 = 0x800;
    }
    __check_object_size(iVar10,param_3,0);
    iVar4 = sym._copy_from_user(iVar10,param_2,param_3);
    if (iVar4 == 0) {
        *(piVar7 + -7) = param_3;
        *(piVar7 + -3) = *(piVar7 + -3) | 0x40000;
        iVar4 = usb_ep_queue(uVar8,piVar9,0xcc0);
        if (iVar4 == 0) {
            uVar5 = _raw_spin_lock_irqsave(iVar1);
            *(iVar11 + 0x630) = *(iVar11 + 0x630) + *(piVar7 + -7);
            goto code_r0x08002f64;
        }
        _printk(0x8000bdc,"f_cdev_write",iVar4);
        param_3 = 0xfffffffffffffffb;
    }
    else {
        _printk(0x8000c74,"f_cdev_write");
        param_3 = 0xfffffffffffffff2;
    }
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar11 + 0x610) == '\0') {
        if (piVar9 != NULL) {
            kfree(*piVar9);
            usb_ep_free_request(uVar8,piVar9);
        }
    }
    else {
        iVar11 = *piVar2;
        uVar6 = __list_add_valid(piVar7,piVar2,iVar11);
        if ((uVar6 & 1) != 0) {
            *(iVar11 + 8) = piVar7;
            *piVar7 = iVar11;
            piVar7[1] = piVar2;
            *piVar2 = piVar7;
        }
    }
code_r0x08002f64:
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return param_3;
}


// ===== sym.cser_rw_write.94c3747b6c276f8f7191513fbaf779a3.cfi_jt @ 0x08002700 (size 8) =====

ulong sym.cser_rw_write.94c3747b6c276f8f7191513fbaf779a3.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    acStack_2c[0] = '\0';
    iVar3 = *(*(param_1 + 0xd8) + 0x80);
    if (iVar3 == -0x4b0) {
        _printk(0x8000dc4,"cser_rw_write");
        param_3 = 0xffffffffffffffea;
    }
    else if (*(iVar3 + 0x610) == '\0') {
        param_3 = 0xffffffffffffffed;
    }
    else if (param_2 != 0) {
        iVar1 = kstrtou8_from_user(param_2,param_3,0,acStack_2c);
        if (iVar1 == 0) {
            if ((*(iVar3 + 0x640) == (acStack_2c[0] != '\0')) ||
               (*(iVar3 + 0x640) = acStack_2c[0] != '\0', acStack_2c[0] == '\0')) goto code_r0x08004544;
            if ((*(**(*(iVar3 + 0x4e0) + 0x30) + 0x58) < 5) || (*(iVar3 + 0x4a8) == '\0')) {
                iVar1 = usb_gadget_wakeup();
                if ((iVar1 + 0x10U < 0x11) && ((1 << (iVar1 + 0x10U & 0x1f) & 0x10021U) != 0)) goto code_r0x08004544;
            }
            else {
                iVar1 = -1;
            }
            uVar2 = 0x8000d7e;
        }
        else {
            uVar2 = 0x800095c;
        }
        _printk(uVar2,"cser_rw_write",iVar1);
    }
code_r0x08004544:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar4 = __stack_chk_fail();
        *extraout_x18 = sym.debug_cdev_rw_open;
        uVar2 = single_open(auVar4._8_8_,sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt,
                            *(auVar4._0_8_ + 0x2d8));
        return uVar2;
    }
    return param_3;
}


// ===== sym.dun_cser_get_dtr @ 0x08002708 (size 20) =====

uint16_t sym.dun_cser_get_dtr(int64_t arg1)

{
    return *(arg1 + 0x104) & 1;
}


// ===== sym.dun_cser_get_rts @ 0x0800271c (size 20) =====

uint16_t sym.dun_cser_get_rts(int64_t arg1)

{
    return *(arg1 + 0x104) >> 1 & 1;
}


// ===== sym.dun_cser_send_carrier_detect @ 0x08002730 (size 60) =====

void sym.dun_cser_send_carrier_detect(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = *(arg1 + 0x102) & 0xfffe | arg2 != 0;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.port_notify_serial_state @ 0x0800276c (size 300) =====

int sym.port_notify_serial_state(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    ulong uVar3;
    uint *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -0x84;
    uVar3 = _raw_spin_lock_irqsave(iVar5);
    if (*(arg1 + 0xff) != '\0') {
        iVar2 = 0;
        *(arg1 + 0x100) = 1;
        goto code_r0x08002874;
    }
    *(arg1 + 0xff) = 1;
    _raw_spin_unlock_irqrestore(iVar5,uVar3);
    uVar6 = *(arg1 + 0xe8);
    uVar3 = _raw_spin_lock_irqsave(iVar5);
    if (*(arg1 + 0x160) == '\0') {
        iVar2 = -0x13;
code_r0x08002860:
        _raw_spin_unlock_irqrestore(iVar5,uVar3);
    }
    else {
        puVar7 = *(arg1 + 0xf0);
        puVar4 = *puVar7;
        *(puVar7 + 1) = 10;
        *puVar4 = 0x20a1;
        uVar1 = *(arg1 + 0x101);
        *(puVar4 + 6) = 2;
        *(puVar4 + 1) = uVar1;
        *(puVar4 + 2) = *(arg1 + 0x102);
        _raw_spin_unlock_irqrestore(iVar5,uVar3);
        iVar2 = usb_ep_queue(uVar6,puVar7,0xa20);
        if (iVar2 < 0) {
            _printk(0x8000cfe,"usb_cser_notify",arg1 + -0x94,iVar2);
            uVar3 = _raw_spin_lock_irqsave(iVar5);
            *(arg1 + 0xff) = 0;
            goto code_r0x08002860;
        }
    }
    uVar3 = _raw_spin_lock_irqsave(iVar5);
code_r0x08002874:
    _raw_spin_unlock_irqrestore(iVar5,uVar3);
    return iVar2;
}


// ===== sym.dun_cser_send_ring_indicator @ 0x08002898 (size 60) =====

void sym.dun_cser_send_ring_indicator(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = *(arg1 + 0x102) & 0xfff7 | (arg2 != 0) << 3;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.f_cdev_open @ 0x080028d4 (size 336) =====

uint64_t sym.f_cdev_open(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar9 = *(arg1 + 0x2b0);
    iVar8 = iVar9 + 0x88;
    get_device(iVar8);
    if (*(iVar9 + 0x611) == '\0') {
        *(arg2 + 0xd8) = iVar9;
        if (*(iVar9 + 0x610) == '\0') {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            init_wait_entry(&uStack_60,0);
            iVar11 = iVar9 + 0x430;
            uVar6 = prepare_to_wait_event(iVar11,&uStack_60,1);
            cVar4 = *(iVar9 + 0x610);
            while (cVar4 == '\0') {
                if (uVar6 != 0) {
                    if (uVar6 == 0) goto code_r0x0800298c;
                    put_device(iVar8);
                    goto code_r0x080029b8;
                }
                schedule();
                uVar6 = prepare_to_wait_event(iVar11,&uStack_60,1);
                cVar4 = *(iVar9 + 0x610);
            }
            finish_wait(iVar11,&uStack_60);
        }
code_r0x0800298c:
        uVar7 = _raw_spin_lock_irqsave(iVar9 + 0x42c);
        *(iVar9 + 0x611) = 1;
        _raw_spin_unlock_irqrestore(iVar9 + 0x42c,uVar7);
        sym.usb_cser_start_rx(iVar9);
        uVar6 = 0;
    }
    else {
        _printk(0x8000acc,"f_cdev_open");
        put_device(iVar8);
        uVar6 = 0xfffffff0;
    }
code_r0x080029b8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar6 & 0xffffffff;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.usb_cser_start_rx;
    if (iVar8 == 0) {
        uVar6 = _printk(0x800085c,"usb_cser_start_rx");
    }
    else {
        iVar9 = iVar8 + 0x42c;
        uVar7 = _raw_spin_lock_irqsave(iVar9);
        if ((*(iVar8 + 0x610) != '\0') && (*(iVar8 + 0x611) != '\0')) {
            puVar1 = iVar8 + 0x460;
            iVar11 = *(iVar8 + 0x590);
            do {
                if (puVar1 == *puVar1) goto code_r0x08002b54;
                piVar10 = *puVar1;
                uVar6 = __list_del_entry_valid(piVar10);
                if ((uVar6 & 1) != 0) {
                    iVar2 = *piVar10;
                    piVar3 = piVar10[1];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *piVar10 = piVar10;
                piVar10[1] = piVar10;
                *(piVar10 + -7) = 0x800;
                piVar10[-2] = sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                _raw_spin_unlock_irqrestore(iVar9,uVar7);
                iVar5 = usb_ep_queue(iVar11,piVar10 + -8,0xcc0);
                uVar7 = _raw_spin_lock_irqsave(iVar9);
            } while (iVar5 == 0);
            _printk(0x8000d2b,"usb_cser_start_rx",*(iVar8 + 0x418),iVar8,*(iVar11 + 8));
            iVar8 = *(iVar8 + 0x460);
            uVar6 = __list_add_valid(piVar10,puVar1,iVar8);
            if ((uVar6 & 1) != 0) {
                *(iVar8 + 8) = piVar10;
                *piVar10 = iVar8;
                piVar10[1] = puVar1;
                *puVar1 = piVar10;
            }
        }
code_r0x08002b54:
        uVar6 = _raw_spin_unlock_irqrestore(iVar9,uVar7);
    }
    return uVar6;
}


// ===== sym.usb_cser_start_rx @ 0x08002a24 (size 352) =====

void sym.usb_cser_start_rx(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800085c,"usb_cser_start_rx");
    }
    else {
        iVar1 = arg1 + 0x42c;
        uVar6 = _raw_spin_lock_irqsave(iVar1);
        if ((*(arg1 + 0x610) != '\0') && (*(arg1 + 0x611) != '\0')) {
            puVar2 = arg1 + 0x460;
            iVar9 = *(arg1 + 0x590);
            do {
                if (puVar2 == *puVar2) goto code_r0x08002b54;
                piVar8 = *puVar2;
                uVar7 = __list_del_entry_valid(piVar8);
                if ((uVar7 & 1) != 0) {
                    iVar3 = *piVar8;
                    piVar4 = piVar8[1];
                    *(iVar3 + 8) = piVar4;
                    *piVar4 = iVar3;
                }
                *piVar8 = piVar8;
                piVar8[1] = piVar8;
                *(piVar8 + -7) = 0x800;
                piVar8[-2] = sym.usb_cser_read_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                iVar5 = usb_ep_queue(iVar9,piVar8 + -8,0xcc0);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
            } while (iVar5 == 0);
            _printk(0x8000d2b,"usb_cser_start_rx",*(arg1 + 0x418),arg1,*(iVar9 + 8));
            iVar9 = *(arg1 + 0x460);
            uVar7 = __list_add_valid(piVar8,puVar2,iVar9);
            if ((uVar7 & 1) != 0) {
                *(iVar9 + 8) = piVar8;
                *piVar8 = iVar9;
                piVar8[1] = puVar2;
                *puVar2 = piVar8;
            }
        }
code_r0x08002b54:
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
    }
    return;
}


// ===== sym.f_cdev_release @ 0x08002b88 (size 88) =====

ulong sym.f_cdev_release(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xd8);
    uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x42c);
    *(iVar2 + 0x611) = 0;
    *(iVar2 + 0x604) = 0;
    _raw_spin_unlock_irqrestore(iVar2 + 0x42c,uVar1);
    put_device(iVar2 + 0x88);
    return 0;
}


// ===== sym.f_cdev_read @ 0x08002be0 (size 620) =====

int64_t sym.f_cdev_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    code *pcVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    if (arg1_00 == 0) {
        _printk(0x8000e2c,"f_cdev_read");
        iVar10 = -0x16;
    }
    else {
        iVar1 = arg1_00 + 0x42c;
        uVar6 = _raw_spin_lock_irqsave(iVar1);
        uVar12 = *(arg1_00 + 0x498);
        puVar2 = arg1_00 + 0x470;
        piVar8 = *(arg1_00 + 0x490);
        *(arg1_00 + 0x490) = 0;
        *(arg1_00 + 0x498) = 0;
        iVar13 = *(arg1_00 + 0x4a0);
        *(arg1_00 + 0x4a0) = 0;
        if (puVar2 == *puVar2 && uVar12 == 0) {
            iVar10 = 0;
code_r0x08002db0:
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            sym.usb_cser_start_rx(arg1_00);
        }
        else {
            iVar10 = 0;
            iVar3 = arg1_00 + 0x460;
code_r0x08002c74:
            if (uVar12 == 0) {
                if ((puVar2 == *puVar2) || (arg3 == 0)) goto code_r0x08002da4;
                piVar8 = *puVar2;
                uVar12 = __list_del_entry_valid(piVar8);
                if ((uVar12 & 1) != 0) {
                    iVar13 = *piVar8;
                    piVar9 = piVar8[1];
                    *(iVar13 + 8) = piVar9;
                    *piVar9 = iVar13;
                }
                *piVar8 = piVar8;
                piVar8[1] = piVar8;
                uVar12 = *(piVar8 + 3);
                iVar13 = piVar8[-8];
                piVar9 = piVar8 + -8;
            }
            else {
                piVar9 = piVar8;
                if (arg3 == 0) {
code_r0x08002da4:
                    *(arg1_00 + 0x498) = uVar12;
                    *(arg1_00 + 0x4a0) = iVar13;
                    *(arg1_00 + 0x490) = piVar8;
                    goto code_r0x08002db0;
                }
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            uVar14 = uVar12;
            if (arg3 <= uVar12) {
                uVar14 = arg3;
            }
            if (uVar14 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8002d98);
                (*pcVar4)();
            }
            noname_1 = __check_object_size(iVar13,uVar14,1);
            iVar7 = sym._copy_to_user(arg2,noname_1,uVar14);
            uVar14 = uVar14 - iVar7;
            *(arg1_00 + 0x628) = *(arg1_00 + 0x628) + uVar14;
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            if (*(arg1_00 + 0x610) != '\0') {
                iVar10 = uVar14 + iVar10;
                arg3 = arg3 - uVar14;
                arg2 = arg2 + uVar14;
                bVar5 = uVar12 < uVar14;
                uVar12 = uVar12 - uVar14;
                if (bVar5 || uVar12 == 0) {
                    piVar15 = *(arg1_00 + 0x468);
                    piVar11 = piVar9 + 8;
                    uVar14 = __list_add_valid(piVar11,piVar15,iVar3);
                    uVar12 = 0;
                    iVar13 = 0;
                    piVar8 = NULL;
                    if ((uVar14 & 1) != 0) {
                        uVar12 = 0;
                        iVar13 = 0;
                        *(arg1_00 + 0x468) = piVar11;
                        piVar9[8] = iVar3;
                        piVar9[9] = piVar15;
                        *piVar15 = piVar11;
                        piVar8 = NULL;
                    }
                }
                else {
                    iVar13 = iVar13 + uVar14;
                    piVar8 = piVar9;
                }
                goto code_r0x08002c74;
            }
            piVar11 = *(arg1_00 + 0x468);
            piVar8 = piVar9 + 8;
            uVar12 = __list_add_valid(piVar8,piVar11,iVar3);
            if ((uVar12 & 1) != 0) {
                *(arg1_00 + 0x468) = piVar8;
                piVar9[8] = iVar3;
                piVar9[9] = piVar11;
                *piVar11 = piVar8;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            iVar10 = -0xb;
        }
    }
    return iVar10;
}


// ===== sym.f_cdev_write @ 0x08002e54 (size 560) =====

int64_t sym.f_cdev_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0xd8);
    if (iVar11 == 0) {
        _printk(0x8000e2c,"f_cdev_write");
        return -0x16;
    }
    iVar1 = iVar11 + 0x42c;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar11 + 0x610) == '\0') {
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        _printk(0x8000f8e,"f_cdev_write","f_cdev_write");
        return -0x13;
    }
    piVar2 = iVar11 + 0x480;
    if (piVar2 == *piVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        return 0;
    }
    piVar7 = *(iVar11 + 0x480);
    uVar8 = *(iVar11 + 0x588);
    piVar9 = piVar7 + -8;
    uVar6 = __list_del_entry_valid(piVar7);
    if ((uVar6 & 1) != 0) {
        iVar10 = *piVar7;
        piVar3 = piVar7[1];
        *(iVar10 + 8) = piVar3;
        *piVar3 = iVar10;
    }
    *piVar7 = piVar7;
    piVar7[1] = piVar7;
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    iVar10 = piVar7[-8];
    if (0x7ff < arg3) {
        arg3 = 0x800;
    }
    __check_object_size(iVar10,arg3,0);
    iVar4 = sym._copy_from_user(iVar10,arg2,arg3);
    if (iVar4 == 0) {
        *(piVar7 + -7) = arg3;
        *(piVar7 + -3) = *(piVar7 + -3) | 0x40000;
        iVar4 = usb_ep_queue(uVar8,piVar9,0xcc0);
        if (iVar4 == 0) {
            uVar5 = _raw_spin_lock_irqsave(iVar1);
            *(iVar11 + 0x630) = *(iVar11 + 0x630) + *(piVar7 + -7);
            goto code_r0x08002f64;
        }
        _printk(0x8000bdc,"f_cdev_write",iVar4);
        arg3 = -5;
    }
    else {
        _printk(0x8000c74,"f_cdev_write");
        arg3 = -0xe;
    }
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar11 + 0x610) == '\0') {
        if (piVar9 != NULL) {
            kfree(*piVar9);
            usb_ep_free_request(uVar8,piVar9);
        }
    }
    else {
        iVar11 = *piVar2;
        uVar6 = __list_add_valid(piVar7,piVar2,iVar11);
        if ((uVar6 & 1) != 0) {
            *(iVar11 + 8) = piVar7;
            *piVar7 = iVar11;
            piVar7[1] = piVar2;
            *piVar2 = piVar7;
        }
    }
code_r0x08002f64:
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return arg3;
}


// ===== sym.usb_cser_read_complete @ 0x08003088 (size 352) =====

void sym.usb_cser_read_complete(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *arg1;
    if (iVar7 == 0) {
        _printk(0x800085c,"usb_cser_read_complete");
        return;
    }
    iVar1 = iVar7 + 0x42c;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(iVar7 + 0x611) != '\0') {
        iVar3 = *(arg2 + 0x54);
        if ((iVar3 == -0x68) || (iVar3 == -0x20)) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            iVar3 = usb_ep_queue(arg1,arg2,0xcc0);
            if (iVar3 == 0) {
                return;
            }
            uVar4 = _raw_spin_lock_irqsave(iVar1);
        }
        else if ((iVar3 == 0) && (*(arg2 + 0x58) != 0)) {
            iVar2 = arg2 + 0x40;
            piVar6 = *(iVar7 + 0x478);
            *(iVar7 + 0x618) = *(iVar7 + 0x618) + *(arg2 + 0x58);
            uVar5 = __list_add_valid(iVar2,piVar6,iVar7 + 0x470);
            if ((uVar5 & 1) != 0) {
                *(iVar7 + 0x478) = iVar2;
                *(arg2 + 0x40) = iVar7 + 0x470;
                *(arg2 + 0x48) = piVar6;
                *piVar6 = iVar2;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            __wake_up(iVar7 + 0x448,3,1,0);
            return;
        }
    }
    piVar6 = *(iVar7 + 0x468);
    iVar2 = arg2 + 0x40;
    uVar5 = __list_add_valid(iVar2,piVar6,iVar7 + 0x460);
    if ((uVar5 & 1) != 0) {
        *(iVar7 + 0x468) = iVar2;
        *(arg2 + 0x40) = iVar7 + 0x460;
        *(arg2 + 0x48) = piVar6;
        *piVar6 = iVar2;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return;
}


// ===== sym._copy_to_user @ 0x080031e8 (size 312) =====

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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x0800335c (size 376) =====

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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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


// ===== sym.cser_alloc_inst @ 0x08003510 (size 120) =====

int64_t sym.cser_alloc_inst(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_seq_read,0xdc0,0xd0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.cser_set_inst_name.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        *(iVar1 + 0xb0) = sym.cser_free_inst.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
        config_group_init_type_name(iVar1,0x8000e75,obj.cserial_func_type);
    }
    return iVar1;
}


// ===== sym.cser_alloc @ 0x08003588 (size 140) =====

int64_t sym.cser_alloc(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0xb8);
    *(iVar1 + 0x4b0) = "cser";
    *(iVar1 + 0x4b8) = obj.usb_cser_strings;
    *(iVar1 + 0x4f8) = sym.usb_cser_bind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x500) = sym.usb_cser_unbind.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x550) = sym.usb_cser_get_status.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x518) = sym.usb_cser_set_alt.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x528) = sym.usb_cser_disable.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x530) = sym.usb_cser_setup.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x558) = sym.usb_cser_func_suspend.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    *(iVar1 + 0x508) = sym.usb_cser_free_func.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    return iVar1 + 0x4b0;
}


// ===== sym.cser_free_inst @ 0x08003614 (size 236) =====

void sym.cser_free_inst(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xb8);
    if (iVar1 != 0) {
        cdev_device_del(iVar1,iVar1 + 0x88);
        mutex_lock(obj.chardev_ida_lock);
        ida_free(obj.chardev_ida,*(*(arg1 + 0xb8) + 0x428));
        mutex_unlock(obj.chardev_ida_lock);
        debugfs_remove(*(*(arg1 + 0xb8) + 0x638));
        put_device(*(arg1 + 0xb8) + 0x88);
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        if (_segment.ehdr != 0) {
            uVar2 = 4;
            if (obj.minors == 0x0) {
                uVar2 = 0;
            }
            unregister_chrdev_region(_segment.ehdr << 0x14,uVar2);
            obj.minors = 0x0;
            _segment.ehdr = 0;
        }
        if ((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (CONCAT44(*0x8000004,_segment.ehdr) < 0xfffffffffffff001)) {
            class_destroy();
        }
    }
    kfree(*(arg1 + 0xc0));
    kfree(arg1);
    return;
}


// ===== sym.cser_set_inst_name @ 0x08003700 (size 1336) =====

//WARNING: Removing unreachable block (ram,0x080038e0)
//WARNING: Removing unreachable block (ram,0x080038f4)
//WARNING: Removing unreachable block (ram,0x08003910)
//WARNING: Removing unreachable block (ram,0x08003918)

void sym.cser_set_inst_name(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar *puVar7;
    uchar uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar4 = strlen(arg2);
    if (0xf < iVar4 + 1U) {
code_r0x08003770:
        uVar6 = 0xffffffdc;
        goto code_r0x08003774;
    }
    iVar5 = strnchr(arg2,iVar4,0x2e);
    if (iVar5 == 0) {
        _printk(0x8000a3e,"cser_set_inst_name",arg2);
        uVar6 = 0xffffffea;
        goto code_r0x08003774;
    }
    iVar5 = strlen();
    uVar9 = (iVar4 + 1U) - iVar5;
    if (5 < uVar9) goto code_r0x08003770;
    iVar4 = kstrndup(arg2,uVar9 - 1,0xcc0);
    if (iVar4 == 0) {
        _printk(0x8000c99,"cser_set_inst_name",0);
        uVar6 = 0xfffffff4;
        goto code_r0x08003774;
    }
    *(arg1 + 0xc0) = iVar4;
    puVar7 = strrchr(arg2,0x2e);
    if (puVar7 == NULL) {
        uVar6 = 0x800081a;
    }
    else {
        puVar1 = arg1 + 200;
        *puVar7 = 0;
        iVar3 = kstrtou8(puVar7 + 1,0,puVar1);
        if (iVar3 == 0) {
            uVar2 = *puVar1;
            uVar9 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x648);
            if (uVar9 != 0) {
                mutex_lock(obj.chardev_ida_lock);
                if (_segment.ehdr == 0) {
                    uStack_5c = 0;
                    iVar3 = alloc_chrdev_region(&uStack_5c,0,4,"msm_usb_bridge");
                    if (iVar3 == 0) {
                        _segment.ehdr = CONCAT44(*0x8000004,uStack_5c >> 0x14);
                        obj.minors = 0x1;
                        _segment.ehdr =
                             __class_create(obj.__this_module,"msm_usb_bridge",obj.usb_cser_alloc_chardev_region.__key
                                           );
                        if (0xfffffffffffff000 < _segment.ehdr) {
                            _printk(0x8000ff4,"usb_cser_alloc_chardev_region");
                        }
                        goto code_r0x0800388c;
                    }
                    _printk(0x8000cb1,"usb_cser_alloc_chardev_region",iVar3);
                    mutex_unlock(obj.chardev_ida_lock);
                    _printk(0x8000e54,"f_cdev_alloc");
code_r0x0800391c:
                    kfree(uVar9);
                    uVar9 = iVar3;
                }
                else {
code_r0x0800388c:
                    iVar3 = ida_alloc_range(obj.chardev_ida,0,0xffffffff,0xcc0);
                    if (3 < iVar3) {
                        ida_free(obj.chardev_ida);
                        mutex_unlock(obj.chardev_ida_lock);
                        iVar3 = -0x13;
                        goto code_r0x0800391c;
                    }
                    *(uVar9 + 0x418) = uVar2;
                    *(uVar9 + 0x428) = iVar3;
                    mutex_unlock(obj.chardev_ida_lock);
                    iVar4 = uVar9 + 0x41c;
                    snprintf(iVar4,9,"%s%d","at_usb",uVar2);
                    *(uVar9 + 0x42c) = 0;
                    __init_waitqueue_head(uVar9 + 0x430,"&port->open_wq",obj.usb_cser_alloc_chardev_region.__key);
                    __init_waitqueue_head(uVar9 + 0x448,"&port->read_wq",obj.usb_cser_alloc_chardev_region.__key);
                    *(uVar9 + 0x460) = uVar9 + 0x460;
                    *(uVar9 + 0x468) = uVar9 + 0x460;
                    *(uVar9 + 0x470) = uVar9 + 0x470;
                    *(uVar9 + 0x478) = uVar9 + 0x470;
                    *(uVar9 + 0x480) = uVar9 + 0x480;
                    *(uVar9 + 0x488) = uVar9 + 0x480;
                    iVar5 = alloc_workqueue(0x8000959,0xe000a,1,iVar4);
                    *(uVar9 + 0x608) = iVar5;
                    if (iVar5 == 0) {
                        _printk(0x8000aeb,"f_cdev_alloc",iVar4);
                        iVar3 = -0xc;
                        goto code_r0x0800391c;
                    }
                    cdev_init(uVar9,obj.f_cdev_fops);
                    iVar5 = uVar9 + 0x88;
                    device_initialize(iVar5);
                    *(uVar9 + 0xe8) = 0;
                    iVar3 = _segment.ehdr;
                    *(uVar9 + 0x3a8) = _segment.ehdr;
                    *(uVar9 + 0x388) = *(uVar9 + 0x428) | iVar3 << 0x14;
                    *(uVar9 + 0x3b8) = sym.cdev_device_release.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                    dev_set_name(iVar5,iVar4);
                    iVar3 = cdev_device_add(uVar9,iVar5);
                    if (iVar3 != 0) {
                        _printk(0x8000d57,"f_cdev_alloc",iVar4);
                        destroy_workqueue(*(uVar9 + 0x608));
                        goto code_r0x0800391c;
                    }
                    sym.usb_cser_debugfs_init(uVar9);
                    _printk(0x8000fb0,"f_cdev_alloc",iVar4,uVar9,*(uVar9 + 0x418));
                }
                if (uVar9 < 0xfffffffffffff001) {
                    *(arg1 + 0xb8) = uVar9;
                    uVar6 = strcmp(*(arg1 + 0xc0),0x8000e41);
                    if (uVar6 == 0) {
                        uVar8 = 0x40;
                        *(uVar9 + 0x5c8) = sym.dun_cser_connect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5b8) = sym.dun_cser_get_dtr.cfi_jt;
                        *(uVar9 + 0x5c0) = sym.__typeid__ZTSFjP7cserialE_global_addr;
                        *(uVar9 + 0x5e0) = sym.dun_cser_send_carrier_detect.cfi_jt;
                        *(uVar9 + 0x5e8) = sym.__typeid__ZTSFjP7cserialjE_global_addr;
                        *(uVar9 + 0x5f0) = sym.dun_cser_send_ctrl_bits.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5d0) = sym.dun_cser_disconnect.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                        *(uVar9 + 0x5d8) = sym.dun_cser_send_break.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                    }
                    else {
                        uVar8 = 0x60;
                        uVar6 = 0;
                    }
                    *(arg1 + 0xc9) = uVar8;
                    goto code_r0x08003774;
                }
            }
            _printk(0x8000e8c,"cser_set_inst_name",*puVar1);
            uVar6 = 0xfffffff4;
            goto code_r0x08003774;
        }
        uVar6 = 0x800098f;
    }
    _printk(uVar6,"cser_set_inst_name");
    uVar6 = 0xffffffea;
code_r0x08003774:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_58) {
        iVar4 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.dun_cser_connect;
        *(iVar4 + 0x102) = *(iVar4 + 0x102) | 3;
        sym.port_notify_serial_state(iVar4);
        return;
    }
    return;
}


// ===== sym.dun_cser_connect @ 0x08003c38 (size 48) =====

void sym.dun_cser_connect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = *(arg1 + 0x102) | 3;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.dun_cser_send_ctrl_bits @ 0x08003c68 (size 40) =====

void sym.dun_cser_send_ctrl_bits(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = arg2;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.dun_cser_disconnect @ 0x08003c90 (size 48) =====

void sym.dun_cser_disconnect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = *(arg1 + 0x102) & 0xfffc;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.dun_cser_send_break @ 0x08003cc0 (size 60) =====

void sym.dun_cser_send_break(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x102) = *(arg1 + 0x102) & 0xfffb | (arg2 != 0) << 2;
    sym.port_notify_serial_state(arg1);
    return;
}


// ===== sym.cdev_device_release @ 0x08003cfc (size 40) =====

void sym.cdev_device_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(arg1 + -0x88);
    return;
}


// ===== sym.usb_cser_debugfs_init @ 0x08003d24 (size 100) =====

void sym.usb_cser_debugfs_init(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = debugfs_create_dir(arg1 + 0x41c,0);
    *(arg1 + 0x638) = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        debugfs_create_file("remote_wakeup",0x180,uVar1,arg1,obj.cser_rem_wakeup_fops);
    }
    return;
}


// ===== sym.f_cdev_poll @ 0x08003d88 (size 240) =====

uint32_t sym.f_cdev_poll(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd8);
    if ((iVar4 == 0) || (*(iVar4 + 0x610) == '\0')) {
        _printk(0x8000c08,"f_cdev_poll");
        uVar2 = 8;
    }
    else {
        if (((arg2 != 0) && (iVar4 + 0x448 != 0)) && (pcVar3 = *arg2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80006d0);
            (*pcVar3)(arg1,iVar4 + 0x448,arg2);
        }
        uVar1 = _raw_spin_lock_irqsave(iVar4 + 0x42c);
        uVar2 = 0;
        if (iVar4 + 0x470 != *(iVar4 + 0x470)) {
            uVar2 = 0x41;
        }
        if (*(iVar4 + 0x604) != '\0') {
            uVar2 = uVar2 | 2;
        }
        _raw_spin_unlock_irqrestore(iVar4 + 0x42c,uVar1);
    }
    return uVar2;
}


// ===== sym.f_cdev_ioctl @ 0x08003e7c (size 1428) =====

int64_t sym.f_cdev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *puVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0xd8);
    if (iVar10 == 0) {
        _printk(0x8000c3a,"f_cdev_ioctl");
        iVar6 = 8;
    }
    else if (arg2 - 0x5416U < 3) {
        puVar3 = sp_el0;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar7 = arg3, (*puVar3 >> 0x1a & 1) != 0)) {
            uVar7 = arg3 & (arg3 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < uVar7;
        uVar7 = uVar7 + 4;
        uVar8 = 0;
        if (!bVar4 || uVar7 == 0) {
            uVar8 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar7 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar7,~uVar8) || CARRY8(uVar7 + ~uVar8,bVar4)) && uVar7 != uVar8 + !bVar4) {
            _printk(0x800092e,"f_cdev_ioctl");
            iVar6 = -0xe;
        }
        else {
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                arg3 = 0;
            }
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar7 = daif;
                if ((uVar7 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar3[1];
                InstructionSynchronizationBarrier();
                daif = uVar7;
            }
            uVar2 = *arg3;
            if ((_seq_lseek >> 0x18 & 1) == 0) {
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
            iVar6 = iVar10 + 0x4b0;
            if (((uVar2 >> 7 & 1) == 0) || (pcVar9 = *(iVar10 + 0x5e8), pcVar9 == NULL)) {
                iVar5 = 0;
            }
            else {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) | 0x80;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x80006f0);
                }
                iVar5 = (*pcVar9)(iVar6,1);
            }
            if (((~uVar2 >> 7 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e8), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) & 0xff7f;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000710);
                }
                iVar5 = (*pcVar9)(iVar6,0);
            }
            if (((uVar2 >> 6 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e0), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) | 0x40;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000730);
                }
                iVar5 = (*pcVar9)(iVar6,1);
            }
            if (((~uVar2 >> 6 & 1) != 0) && (pcVar9 = *(iVar10 + 0x5e0), pcVar9 != NULL)) {
                *(iVar10 + 0x5b2) = *(iVar10 + 0x5b2) & 0xffbf;
                if (1 < (pcVar9 + -0x8002638 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xee75291c25559e6c,pcVar9,0x8000750);
                }
                iVar5 = (*pcVar9)(iVar6,0);
            }
            iVar6 = iVar5;
        }
    }
    else if (arg2 == 0x5415) {
        pcVar9 = *(iVar10 + 0x5b8);
        if (pcVar9 == NULL) {
            pcVar9 = *(iVar10 + 0x5c0);
        }
        else {
            if (1 < (pcVar9 + -0x80025d8 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xe0ae6af6e143d58d,pcVar9,0x8000770);
            }
            (*pcVar9)(iVar10 + 0x4b0);
            pcVar9 = *(iVar10 + 0x5c0);
        }
        if (pcVar9 != NULL) {
            if (1 < (pcVar9 + -0x80025d8 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0xe0ae6af6e143d58d,pcVar9,0x8000790);
            }
            (*pcVar9)(iVar10 + 0x4b0);
        }
        puVar3 = sp_el0;
        uVar7 = (arg3 << 8) >> 8;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = arg3, (*puVar3 >> 0x1a & 1) != 0)) {
            uVar8 = arg3 & uVar7;
        }
        bVar4 = 0xfffffffffffffffb < uVar8;
        uVar8 = uVar8 + 4;
        uVar1 = 0;
        if (!bVar4 || uVar8 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar8,~uVar1) || CARRY8(uVar8 + ~uVar1,bVar4)) && uVar8 != uVar1 + !bVar4) {
            iVar6 = -0xe;
            *(iVar10 + 0x604) = 0;
        }
        else {
            if ((arg3 & uVar7 & 0xffffff8000000000) != 0) {
                arg3 = 0;
            }
            if ((_seq_lseek >> 0x18 & 1) == 0) {
                uVar7 = daif;
                if ((uVar7 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar3[1];
                InstructionSynchronizationBarrier();
                daif = uVar7;
            }
            *arg3 = 0;
            if ((_seq_lseek >> 0x18 & 1) == 0) {
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
            iVar6 = 0;
            *(iVar10 + 0x604) = 0;
        }
    }
    else {
        _printk(0x8000e07,"f_cdev_ioctl");
        iVar6 = -0x203;
    }
    return iVar6;
}


// ===== sym.cser_rw_write @ 0x08004470 (size 336) =====

int64_t sym.cser_rw_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    acStack_2c[0] = '\0';
    iVar3 = *(*(arg1 + 0xd8) + 0x80);
    if (iVar3 == -0x4b0) {
        _printk(0x8000dc4,"cser_rw_write");
        arg3 = -0x16;
    }
    else if (*(iVar3 + 0x610) == '\0') {
        arg3 = -0x13;
    }
    else if (arg2 != 0) {
        iVar1 = kstrtou8_from_user(arg2,arg3,0,acStack_2c);
        if (iVar1 == 0) {
            if ((*(iVar3 + 0x640) == (acStack_2c[0] != '\0')) ||
               (*(iVar3 + 0x640) = acStack_2c[0] != '\0', acStack_2c[0] == '\0')) goto code_r0x08004544;
            if ((*(**(*(iVar3 + 0x4e0) + 0x30) + 0x58) < 5) || (*(iVar3 + 0x4a8) == '\0')) {
                iVar1 = usb_gadget_wakeup();
                if ((iVar1 + 0x10U < 0x11) && ((1 << (iVar1 + 0x10U & 0x1f) & 0x10021U) != 0)) goto code_r0x08004544;
            }
            else {
                iVar1 = -1;
            }
            uVar2 = 0x8000d7e;
        }
        else {
            uVar2 = 0x800095c;
        }
        _printk(uVar2,"cser_rw_write",iVar1);
    }
code_r0x08004544:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        auVar4 = __stack_chk_fail();
        *extraout_x18 = sym.debug_cdev_rw_open;
        iVar3 = single_open(auVar4._8_8_,sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt,
                            *(auVar4._0_8_ + 0x2d8));
        return iVar3;
    }
    return arg3;
}


// ===== sym.debug_cdev_rw_open @ 0x080045c0 (size 56) =====

void sym.debug_cdev_rw_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.usb_cser_rw_show.94c3747b6c276f8f7191513fbaf779a3.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.usb_cser_rw_show @ 0x080045f8 (size 84) =====

ulong sym.usb_cser_rw_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 0) {
        _printk(0x800085c,"usb_cser_rw_show");
    }
    else {
        seq_printf(arg1,0x8000cdc,*(*(arg1 + 0x80) + 0x640));
    }
    return 0;
}


// ===== sym.cserial_attr_release @ 0x0800464c (size 36) =====

void sym.cserial_attr_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.usb_cser_status_show @ 0x08004670 (size 268) =====

int64_t sym.usb_cser_status_show(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xb8);
    iVar3 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x200);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        uVar4 = _raw_spin_lock_irqsave(iVar5 + 0x42c);
        pcVar1 = "Closed";
        if (*(iVar5 + 0x611) != '\0') {
            pcVar1 = "Opened";
        }
        iVar2 = scnprintf(iVar3,0x200,
                          "###PORT:%s###\nport_no:%d\nfunc:%s\nnbytes_to_host: %lu\nnbytes_from_host: %lu\nnbytes_to_port_bridge:  %lu\nnbytes_from_port_bridge: %lu\ncbits_to_modem:  %u\nPort Opened: %s\n"
                          ,iVar5 + 0x41c,*(iVar5 + 0x418),*(arg1 + 0xc0),*(iVar5 + 0x620),*(iVar5 + 0x618),
                          *(iVar5 + 0x628),*(iVar5 + 0x630),*(iVar5 + 0x600),pcVar1);
        _raw_spin_unlock_irqrestore(iVar5 + 0x42c,uVar4);
        iVar2 = scnprintf(arg2,iVar2,iVar3);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.usb_cser_status_store @ 0x0800477c (size 228) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.usb_cser_status_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0xb8);
    acStack_3c[0] = '\0';
    if (arg2 == 0) {
        _printk(0x8000979,"usb_cser_status_store");
    }
    else {
        iVar2 = kstrtou8(arg2,0,acStack_3c);
        if ((iVar2 == 0) && (acStack_3c[0] == '\0')) {
            uVar4 = _raw_spin_lock_irqsave(iVar8 + 0x42c);
            *(iVar8 + 0x618) = 0;
            *(iVar8 + 0x620) = 0;
            *(iVar8 + 0x628) = 0;
            *(iVar8 + 0x630) = 0;
            _raw_spin_unlock_irqrestore(iVar8 + 0x42c,uVar4);
        }
        else {
            _printk(0x80009dc,"usb_cser_status_store");
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar12 = __stack_chk_fail();
    puVar7 = auVar12._8_8_;
    iVar8 = auVar12._0_8_;
    *extraout_x18 = sym.usb_cser_bind;
    puVar10 = *(iVar8 + 0x30);
    iVar11 = puVar7[0x19];
    if (obj.cser_string_defs == 0x0) {
        uVar3 = usb_string_id(puVar10);
        if (uVar3 < 0) {
            return uVar3;
        }
        obj.cser_string_defs = SUB41(uVar3,0);
    }
    uVar3 = usb_interface_id(iVar8,puVar7);
    uVar9 = uVar3;
    if (-1 < uVar3) {
        *0x800055a = uVar3;
        *(puVar7 + 0x101) = *0x800055a;
        *0x800055f = *(iVar11 + 0xc9);
        puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_in_desc);
        if (puVar5 != NULL) {
            puVar7[0x1b] = puVar5;
            *puVar5 = puVar10;
            puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_out_desc);
            if (puVar5 != NULL) {
                puVar7[0x1c] = puVar5;
                *puVar5 = puVar10;
                puVar5 = usb_ep_autoconfig(*puVar10,obj.cser_fs_notify_desc);
                if (puVar5 != NULL) {
                    puVar7[0x1d] = puVar5;
                    *puVar5 = puVar10;
                    piVar6 = usb_ep_alloc_request(puVar5,0xcc0);
                    cVar1 = android_kmalloc_64_create;
                    if (piVar6 == NULL) {
                        _printk(0x8000a06,"usb_cser_alloc_req");
                    }
                    else {
                        *(piVar6 + 1) = 10;
                        iVar11 = 0x38;
                        if (cVar1 != 0x0) {
                            iVar11 = 0x30;
                        }
                        iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xcc0,10);
                        *piVar6 = iVar11;
                        if (iVar11 != 0) {
                            puVar7[0x1e] = piVar6;
                            *0x8000590 = *0x8000563;
                            piVar6[6] = sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                            *0x8000587 = *0x800056c;
                            *0x800057e = *0x8000590;
                            *(puVar7[0x1e] + 0x38) = puVar7 + -0x96;
                            *0x8000599 = *0x8000587;
                            if ((2 < *(**(iVar8 + 0x30) + 0x5c)) &&
                               (*0x80005a2 = *0x8000575, 4 < *(**(iVar8 + 0x30) + 0x5c))) {
                                *0x80005ab = *0x8000575;
                            }
                            uVar3 = usb_assign_descriptors
                                              (puVar7,obj.cser_fs_function,obj.cser_hs_function,obj.cser_ss_function
                                               ,obj.cser_ss_function);
                            uVar9 = uVar3;
                            if (uVar3 == 0) {
                                return 0;
                            }
                            goto code_r0x08004a3c;
                        }
                        _printk(0x8000c4f,"usb_cser_alloc_req");
                        usb_ep_free_request(puVar5,piVar6);
                    }
                    uVar9 = 0xffffffed;
                    puVar7[0x1e] = 0;
                    puVar10 = puVar7[0x1e];
                    goto joined_r0x08004a40;
                }
            }
        }
        uVar9 = 0xffffffed;
    }
code_r0x08004a3c:
    puVar10 = puVar7[0x1e];
joined_r0x08004a40:
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1d];
    }
    else {
        uVar4 = puVar7[0x1d];
        kfree(*puVar10);
        usb_ep_free_request(uVar4,puVar7[0x1e]);
        puVar7[0x1e] = 0;
        puVar10 = puVar7[0x1d];
    }
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1c];
    }
    else {
        *puVar10 = 0;
        puVar10 = puVar7[0x1c];
    }
    if (puVar10 == NULL) {
        puVar10 = puVar7[0x1b];
    }
    else {
        *puVar10 = 0;
        puVar10 = puVar7[0x1b];
    }
    if (puVar10 != NULL) {
        *puVar10 = 0;
    }
    _printk(0x8001018,"usb_cser_bind",*puVar7,uVar9);
    return uVar9;
}


// ===== sym.usb_cser_bind @ 0x08004860 (size 708) =====

//WARNING: Type propagation algorithm not settling

int sym.usb_cser_bind(int64_t arg1,int64_t arg2)

{
    code cVar1;
    int iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg1 + 0x30);
    iVar7 = *(arg2 + 200);
    if (obj.cser_string_defs == 0x0) {
        iVar2 = usb_string_id(puVar6);
        if (iVar2 < 0) {
            return iVar2;
        }
        obj.cser_string_defs = SUB41(iVar2,0);
    }
    iVar2 = usb_interface_id(arg1,arg2);
    if (-1 < iVar2) {
        *0x800055a = iVar2;
        *(arg2 + 0x101) = *0x800055a;
        *0x800055f = *(iVar7 + 0xc9);
        puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_in_desc);
        if (puVar3 != NULL) {
            *(arg2 + 0xd8) = puVar3;
            *puVar3 = puVar6;
            puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_out_desc);
            if (puVar3 != NULL) {
                *(arg2 + 0xe0) = puVar3;
                *puVar3 = puVar6;
                puVar3 = usb_ep_autoconfig(*puVar6,obj.cser_fs_notify_desc);
                if (puVar3 != NULL) {
                    *(arg2 + 0xe8) = puVar3;
                    *puVar3 = puVar6;
                    piVar4 = usb_ep_alloc_request(puVar3,0xcc0);
                    cVar1 = android_kmalloc_64_create;
                    if (piVar4 == NULL) {
                        _printk(0x8000a06,"usb_cser_alloc_req");
                    }
                    else {
                        *(piVar4 + 1) = 10;
                        iVar7 = 0x38;
                        if (cVar1 != 0x0) {
                            iVar7 = 0x30;
                        }
                        iVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,10);
                        *piVar4 = iVar7;
                        if (iVar7 != 0) {
                            *(arg2 + 0xf0) = piVar4;
                            *0x8000590 = *0x8000563;
                            piVar4[6] = sym.usb_cser_notify_complete.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
                            *0x8000587 = *0x800056c;
                            *0x800057e = *0x8000590;
                            *(*(arg2 + 0xf0) + 0x38) = arg2 + -0x4b0;
                            *0x8000599 = *0x8000587;
                            if ((2 < *(**(arg1 + 0x30) + 0x5c)) &&
                               (*0x80005a2 = *0x8000575, 4 < *(**(arg1 + 0x30) + 0x5c))) {
                                *0x80005ab = *0x8000575;
                            }
                            iVar2 = usb_assign_descriptors
                                              (arg2,obj.cser_fs_function,obj.cser_hs_function,obj.cser_ss_function,
                                               obj.cser_ss_function);
                            if (iVar2 == 0) {
                                return 0;
                            }
                            goto code_r0x08004a3c;
                        }
                        _printk(0x8000c4f,"usb_cser_alloc_req");
                        usb_ep_free_request(puVar3,piVar4);
                    }
                    iVar2 = -0x13;
                    *(arg2 + 0xf0) = 0;
                    puVar6 = *(arg2 + 0xf0);
                    goto joined_r0x08004a40;
                }
            }
        }
        iVar2 = -0x13;
    }
code_r0x08004a3c:
    puVar6 = *(arg2 + 0xf0);
joined_r0x08004a40:
    if (puVar6 == NULL) {
        puVar6 = *(arg2 + 0xe8);
    }
    else {
        uVar5 = *(arg2 + 0xe8);
        kfree(*puVar6);
        usb_ep_free_request(uVar5,*(arg2 + 0xf0));
        *(arg2 + 0xf0) = 0;
        puVar6 = *(arg2 + 0xe8);
    }
    if (puVar6 == NULL) {
        puVar6 = *(arg2 + 0xe0);
    }
    else {
        *puVar6 = 0;
        puVar6 = *(arg2 + 0xe0);
    }
    if (puVar6 == NULL) {
        puVar6 = *(arg2 + 0xd8);
    }
    else {
        *puVar6 = 0;
        puVar6 = *(arg2 + 0xd8);
    }
    if (puVar6 != NULL) {
        *puVar6 = 0;
    }
    _printk(0x8001018,"usb_cser_bind",*arg2,iVar2);
    return iVar2;
}


// ===== sym.usb_cser_unbind @ 0x08004b24 (size 132) =====

void sym.usb_cser_unbind(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x160) != '\0') {
        sym.usb_cser_disconnect(arg1 + -0x4b0);
        usb_ep_disable(*(arg1 + 0xe8));
        **(arg1 + 0xe8) = 0;
    }
    obj.cser_string_defs = 0x0;
    usb_free_all_descriptors(arg1);
    if (*(arg1 + 0xf0) != NULL) {
        uVar1 = *(arg1 + 0xe8);
        kfree(**(arg1 + 0xf0));
        usb_ep_free_request(uVar1,*(arg1 + 0xf0));
        *(arg1 + 0xf0) = 0;
    }
    return;
}


// ===== sym.usb_cser_set_alt @ 0x08004ba8 (size 780) =====

int sym.usb_cser_set_alt(int64_t arg1)

{
    int64_t iVar1;
    ulong *arg2;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong uVar10;
    ulong uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(arg1 + 0xe8);
    iVar8 = arg1 + -0x4b0;
    piVar9 = *(*(arg1 + 0x30) + 0x30);
    if (*piVar6 != 0) {
        usb_ep_disable(piVar6);
        piVar6 = *(arg1 + 0xe8);
    }
    if (piVar6[7] == 0) {
        iVar3 = config_ep_by_speed(*piVar9,arg1);
        piVar6 = *(arg1 + 0xe8);
        if (iVar3 != 0) {
            piVar6[7] = 0;
            return -0x16;
        }
    }
    iVar3 = usb_ep_enable(piVar6);
    if (iVar3 != 0) {
        _dev_err(*piVar9 + 0x78,"can\'t enable %s, result %d\n",*(*(arg1 + 0xe8) + 8),iVar3);
        return iVar3;
    }
    **(arg1 + 0xe8) = iVar8;
    piVar6 = *(arg1 + 0xd8);
    if (*piVar6 != 0) {
        sym.usb_cser_disconnect(iVar8);
        piVar6 = *(arg1 + 0xd8);
    }
    if (((piVar6[7] == 0) || (*(*(arg1 + 0xe0) + 0x38) == 0)) &&
       ((iVar3 = config_ep_by_speed(*piVar9,arg1), iVar3 != 0 ||
        (iVar3 = config_ep_by_speed(*piVar9,arg1,*(arg1 + 0xe0)), iVar3 != 0)))) {
        *(*(arg1 + 0xd8) + 0x38) = 0;
        *(*(arg1 + 0xe0) + 0x38) = 0;
        return -0x16;
    }
    if (iVar8 == 0) {
        _printk(0x8000e2c,"usb_cser_connect");
        return 0;
    }
    *(arg1 + 0x148) = sym.__typeid__ZTSFvPviE_global_addr;
    iVar3 = usb_ep_enable(*(arg1 + 0xd8));
    if (iVar3 != 0) {
        _printk(0x8000870,"usb_cser_connect",*(arg1 + 0xd8),iVar3);
        return 0;
    }
    **(arg1 + 0xd8) = iVar8;
    iVar3 = usb_ep_enable(*(arg1 + 0xe0));
    if (iVar3 != 0) {
        _printk(0x8000ba5,"usb_cser_connect",*(arg1 + 0xe0),iVar3);
        **(arg1 + 0xd8) = 0;
        return 0;
    }
    iVar1 = arg1 + -0x84;
    **(arg1 + 0xe0) = iVar8;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    *(arg1 + 0xff) = 0;
    *(arg1 + 0x160) = 1;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x160) != '\0') {
        arg2 = arg1 + -0x50;
        *(arg1 + -0x10) = 0;
        *(arg1 + -0x18) = 0;
        *(arg1 + -0x20) = 0;
        iVar3 = sym.usb_cser_alloc_requests(*(arg1 + 0xe0),arg2,0x80026d8);
        if (iVar3 == 0) {
            iVar3 = sym.usb_cser_alloc_requests(*(arg1 + 0xd8),arg1 + -0x30,0x80026e0);
            if (iVar3 == 0) {
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                sym.usb_cser_start_rx(iVar8);
                goto code_r0x08004e10;
            }
            uVar11 = *(arg1 + 0xe0);
            uVar10 = 0x8001036;
            puVar7 = *(arg1 + -0x50);
            while (arg2 != puVar7) {
                piVar9 = *arg2;
                piVar6 = piVar9 + -8;
                uVar5 = __list_del_entry_valid(piVar9);
                if ((uVar5 & 1) != 0) {
                    iVar8 = *piVar9;
                    piVar2 = piVar9[1];
                    *(iVar8 + 8) = piVar2;
                    *piVar2 = iVar8;
                }
                *piVar9 = piVar9;
                piVar9[1] = piVar9;
                if (piVar6 != NULL) {
                    kfree(*piVar6);
                    usb_ep_free_request(uVar11,piVar6);
                }
                puVar7 = *arg2;
            }
        }
        else {
            uVar10 = 0x80007f3;
        }
        _printk(uVar10,"usb_cser_start_io");
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
code_r0x08004e10:
    __wake_up(arg1 + -0x80,3,1,0);
    return 0;
}


// ===== sym.usb_cser_disable @ 0x08004ebc (size 68) =====

void sym.usb_cser_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.usb_cser_disconnect(arg1 + -0x4b0);
    usb_ep_disable(*(arg1 + 0xe8));
    **(arg1 + 0xe8) = 0;
    return;
}


// ===== sym.usb_cser_setup @ 0x08004f00 (size 376) =====

int sym.usb_cser_setup(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(arg1 + 0x30) + 0x30);
    uVar3 = (((*arg2 & 0xff00) << 0x10) >> 8 | *arg2 << 0x18) >> 0x10;
    puVar5 = piVar6[1];
    if (uVar3 == 0xa121) {
        uVar3 = *(arg2 + 6);
        if (6 < uVar3) {
            uVar3 = 7;
        }
        memcpy(*puVar5,arg1 + 0xf8,uVar3);
    }
    else if (uVar3 == 0x2122) {
        uVar1 = *(arg2 + 2);
        pcVar4 = *(arg1 + 0x148);
        *(arg1 + 0x104) = uVar1;
        if (pcVar4 != NULL) {
            if (pcVar4 != sym.__typeid__ZTSFvPviE_global_addr) {
                __cfi_slowpath_diag(0x5b47a89153d9f822,pcVar4,0x80007b0);
            }
            (*pcVar4)(arg1 + -0x4b0,uVar1);
        }
        uVar3 = 0;
    }
    else {
        if ((uVar3 != 0x2120) || (*(arg2 + 6) != 7)) {
            return -0x5f;
        }
        uVar3 = 7;
        **(*piVar6 + 0x40) = arg1 + -0x4b0;
        puVar5[6] = sym.port_complete_set_line_coding.94c3747b6c276f8f7191513fbaf779a3.cfi_jt;
    }
    *(puVar5 + 1) = uVar3;
    *(puVar5 + 5) = *(puVar5 + 5) & 0xfffbffff;
    iVar2 = usb_ep_queue(*(*piVar6 + 0x40),puVar5,0xa20);
    if (iVar2 < 0) {
        _printk(0x8000f69,"usb_cser_setup",arg1 + -0x94,iVar2);
    }
    return iVar2;
}


// ===== sym.usb_cser_func_suspend @ 0x08005078 (size 36) =====

ulong sym.usb_cser_func_suspend(int64_t arg1,int64_t arg2)

{
    *(arg1 + -7) = arg2 >> 1 & 1;
    *(arg1 + -8) = arg2 & 1;
    return 0;
}


// ===== sym.usb_cser_get_status @ 0x0800509c (size 16) =====

ulong sym.usb_cser_get_status(int64_t arg1)

{
    return 0;
}


// ===== sym.usb_cser_free_func @ 0x080050ac (size 12) =====

void sym.usb_cser_free_func(void)

{
    return;
}


// ===== sym.usb_cser_notify_complete @ 0x080050b8 (size 140) =====

void sym.usb_cser_notify_complete(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x38);
    iVar1 = iVar3 + 0x42c;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(iVar3 + 0x5af) = 0;
    if ((*(arg1 + 0x54) != -0x6c) && (*(iVar3 + 0x5b0) != '\0')) {
        *(iVar3 + 0x5b0) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.port_notify_serial_state(iVar3 + 0x4b0);
        uVar2 = _raw_spin_lock_irqsave(iVar1);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    return;
}


// ===== sym.usb_cser_disconnect @ 0x08005144 (size 544) =====

void sym.usb_cser_disconnect(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *puVar8;
    ulong *puVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(arg1 + 0x590);
    puVar8 = *(arg1 + 0x588);
    usb_ep_disable(puVar9);
    *puVar9 = 0;
    usb_ep_disable(puVar8);
    iVar1 = arg1 + 0x42c;
    *puVar8 = 0;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x490) != NULL) {
        kfree(**(arg1 + 0x490));
        usb_ep_free_request(puVar9,*(arg1 + 0x490));
    }
    *(arg1 + 0x4a0) = 0;
    puVar7 = arg1 + 0x470;
    *(arg1 + 0x498) = 0;
    puVar6 = *puVar7;
    while (puVar7 != puVar6) {
        piVar11 = *puVar7;
        piVar10 = piVar11 + -8;
        uVar5 = __list_del_entry_valid(piVar11);
        if ((uVar5 & 1) != 0) {
            iVar2 = *piVar11;
            piVar3 = piVar11[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar11 = piVar11;
        piVar11[1] = piVar11;
        if (piVar10 != NULL) {
            kfree(*piVar10);
            usb_ep_free_request(puVar9,piVar10);
        }
        puVar6 = *puVar7;
    }
    puVar7 = arg1 + 0x460;
    puVar6 = *puVar7;
    while (puVar7 != puVar6) {
        piVar11 = *puVar7;
        piVar10 = piVar11 + -8;
        uVar5 = __list_del_entry_valid(piVar11);
        if ((uVar5 & 1) != 0) {
            iVar2 = *piVar11;
            piVar3 = piVar11[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar11 = piVar11;
        piVar11[1] = piVar11;
        if (piVar10 != NULL) {
            kfree(*piVar10);
            usb_ep_free_request(puVar9,piVar10);
        }
        puVar6 = *puVar7;
    }
    puVar9 = arg1 + 0x480;
    puVar7 = *puVar9;
    while (puVar9 != puVar7) {
        piVar11 = *puVar9;
        piVar10 = piVar11 + -8;
        uVar5 = __list_del_entry_valid(piVar11);
        if ((uVar5 & 1) != 0) {
            iVar2 = *piVar11;
            piVar3 = piVar11[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar11 = piVar11;
        piVar11[1] = piVar11;
        if (piVar10 != NULL) {
            kfree(*piVar10);
            usb_ep_free_request(puVar8,piVar10);
        }
        puVar7 = *puVar9;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    if (arg1 == 0) {
        _printk(0x800085c,"usb_cser_notify_modem");
    }
    else if (*(arg1 + 0x600) != 0) {
        *(arg1 + 0x600) = 0;
        *(arg1 + 0x604) = 1;
        __wake_up(arg1 + 0x448,3,1,0);
    }
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    *(arg1 + 0x610) = 0;
    *(arg1 + 0x618) = 0;
    *(arg1 + 0x620) = 0;
    *(arg1 + 0x628) = 0;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return;
}


// ===== sym.usb_cser_notify_modem @ 0x0800537c (size 112) =====

void sym.usb_cser_notify_modem(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800085c,"usb_cser_notify_modem");
    }
    else {
        iVar1 = (arg2 & 3) << 1;
        if (iVar1 != *(arg1 + 0x600)) {
            *(arg1 + 0x600) = iVar1;
            *(arg1 + 0x604) = 1;
            __wake_up(arg1 + 0x448,3,1,0);
        }
    }
    return;
}


// ===== sym.usb_cser_alloc_requests @ 0x080053ec (size 284) =====

uint sym.usb_cser_alloc_requests(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 8;
    do {
        piVar2 = usb_ep_alloc_request(arg1,0xa20);
        if (piVar2 == NULL) {
            _printk(0x8000a06,"usb_cser_alloc_req");
code_r0x080054f4:
            if (*arg2 == arg2) {
                return 0xfffffff4;
            }
            return 0;
        }
        *(piVar2 + 1) = 0x800;
        iVar3 = kmem_cache_alloc_trace(_seq_read,0xa20,0x800);
        *piVar2 = iVar3;
        if (iVar3 == 0) {
            _printk(0x8000c4f,"usb_cser_alloc_req");
            usb_ep_free_request(arg1,piVar2);
            goto code_r0x080054f4;
        }
        piVar2[6] = arg3;
        piVar1 = piVar2 + 8;
        piVar5 = *(arg2 + 8);
        uVar4 = __list_add_valid(piVar1,piVar5,arg2);
        if ((uVar4 & 1) != 0) {
            *(arg2 + 8) = piVar1;
            piVar2[8] = arg2;
            piVar2[9] = piVar5;
            *piVar5 = piVar1;
        }
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
            return 0;
        }
    } while( true );
}


// ===== sym.usb_cser_write_complete @ 0x0800550c (size 188) =====

void sym.usb_cser_write_complete(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    if (arg1 == 0) {
        _printk(0x800085c,"usb_cser_write_complete");
    }
    else {
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x42c);
        iVar1 = arg2 + 0x40;
        piVar4 = *(arg1 + 0x488);
        *(arg1 + 0x620) = *(arg1 + 0x620) + *(arg2 + 0x58);
        uVar3 = __list_add_valid(iVar1,piVar4,arg1 + 0x480);
        if ((uVar3 & 1) != 0) {
            *(arg1 + 0x488) = iVar1;
            *(arg2 + 0x40) = arg1 + 0x480;
            *(arg2 + 0x48) = piVar4;
            *piVar4 = iVar1;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x42c,uVar2);
    }
    return;
}


// ===== sym.port_complete_set_line_coding @ 0x080055c8 (size 88) =====

void sym.port_complete_set_line_coding(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x54) == 0) {
        if (*(arg2 + 0x58) == 7) {
            arg1 = *arg1;
            uVar1 = **arg2;
            *(arg1 + 0x5ab) = *(*arg2 + 3);
            *(arg1 + 0x5a8) = uVar1;
        }
        else {
            usb_ep_set_halt();
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08005620 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005664

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
    //switch table (4 cases) at 0x800105c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005678);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005684 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_register(obj.cserusb_func);
    return;
}


// ===== sym.cleanup_module @ 0x080056b0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_function_unregister(obj.cserusb_func);
    return;
}

