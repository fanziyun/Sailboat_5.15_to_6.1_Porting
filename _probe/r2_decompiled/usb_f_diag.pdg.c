// decompiled from usb_f_diag by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1036) =====

//WARNING: Switch with 1 destination removed at 0x08003004

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0xb18138ae74ccd30) {
            if (arg1 < -0x55bd4d1e73a69e63) {
                if (arg1 == -0x6f436feb9ec8bd9c) {
                    pcVar2 = sym.usb_diag_open.cfi_jt;
                }
                else {
                    if (arg1 != -0x61af895beaf3d6ee) goto code_r0x08002fc4;
                    pcVar2 = sym.diag_function_bind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
                }
            }
            else if (arg1 == -0x55bd4d1e73a69e63) {
                pcVar2 = sym.diag_free_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else if (arg1 == -0x40c850f010e177ae) {
                pcVar2 = sym.usb_diag_close.cfi_jt;
            }
            else {
                if (arg1 != -0x1f5194b81050a881) goto code_r0x08002fc4;
                pcVar2 = sym.diag_alloc_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
        }
        else if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 == -0xb18138ae74ccd30) {
                pcVar2 = sym.diag_set_inst_name.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.debug_open.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else {
                if (arg1 != -0x391b10cb41dc2a3) goto code_r0x08002fc4;
                pcVar2 = sym.diag_alloc.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
        }
        else if (arg1 == -0x2ac316d8df914f8) {
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x52cc36eb4d4de95) goto code_r0x08002fc4;
            pcVar2 = sym.usb_diag_alloc_req.cfi_jt;
        }
    }
    else if (arg1 < 0x40ceb27a7e2157a1) {
        if (arg1 < 0x1e8c334cfa2d7333) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.debug_read_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else {
                if (arg1 == 0xeeff0ad281f3bef) {
                    pcVar2 = sym.diag_serial_show.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
                    goto code_r0x080013d8;
                }
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08002fc4;
                pcVar2 = sym.debug_reset_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x1e8c334cfa2d7333) {
                pcVar2 = sym.diag_function_disable.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
                goto code_r0x080013d8;
            }
            if (arg1 == 0x2335293b6d480f98) {
                pcVar2 = sym.diag_function_unbind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else {
                if (arg1 != 0x24dcfc1bf9debad7) goto code_r0x08002fc4;
                pcVar2 = sym.usb_diag_request_size.cfi_jt;
            }
        }
    }
    else {
        if (0x643f348a21390605 < arg1) {
            if (arg1 == 0x643f348a21390606) {
                pcVar2 = sym.diag_read_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            }
            else {
                if (arg1 != 0x7991820446edd3d6) {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002fc4;
                    pcVar2 = sym.cleanup_module.cfi_jt;
                    goto code_r0x080013fc;
                }
                pcVar2 = sym.usb_diag_write.cfi_jt;
            }
code_r0x080013d8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002fc4;
        }
        if (arg1 == 0x40ceb27a7e2157a1) {
            pcVar2 = sym.diag_function_set_alt.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        }
        else {
            if (arg1 != 0x6322b72e887e81ab) {
                if (arg1 != 0x63cbeba280ab7603) goto code_r0x08002fc4;
                pcVar2 = sym.diag_pid_store.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
                goto code_r0x080013d8;
            }
            pcVar2 = sym.diag_opts_release.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        }
    }
code_r0x080013fc:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002fc4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003018);
    (*pcVar1)();
}


// ===== sym.diag_function_bind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001418 (size 8) =====

void sym.diag_function_bind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    char cVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t arg1;
    int64_t iVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    ulong unaff_x30;
    uint32_t auStack_c8 [36];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar8 = *(param_1 + 0x30);
    *(param_2 + 0x110) = puVar8;
    *0x80002ba = usb_interface_id();
    piVar3 = usb_ep_autoconfig(*puVar8,obj.fs_bulk_in_desc);
    if (piVar3 == NULL) {
code_r0x08002b68:
        uVar4 = 0xffffffed;
    }
    else {
        *(param_2 + 0xe0) = piVar3;
        *piVar3 = param_2;
        piVar3 = usb_ep_autoconfig(*puVar8,obj.fs_bulk_out_desc);
        if (piVar3 == NULL) goto code_r0x08002b68;
        *(param_2 + 0xd8) = piVar3;
        *piVar3 = param_2;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        uVar4 = usb_assign_descriptors(param_2,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (uVar4 == 0) {
            if (_segment.ehdr + -0x140 == param_2) {
                auStack_c8[0x1f] = 0;
                auStack_c8[0x20] = 0;
                iVar5 = *(param_2 + 0x110);
                auStack_c8[0x1d] = 0;
                auStack_c8[0x1e] = 0;
                auStack_c8[0x1b] = 0;
                auStack_c8[0x1c] = 0;
                auStack_c8[0x19] = 0;
                auStack_c8[0x1a] = 0;
                auStack_c8[0x17] = 0;
                auStack_c8[0x18] = 0;
                auStack_c8[0x15] = 0;
                auStack_c8[0x16] = 0;
                auStack_c8[0x13] = 0;
                auStack_c8[0x14] = 0;
                auStack_c8[0x11] = 0;
                auStack_c8[0x12] = 0;
                auStack_c8[0xf] = 0;
                auStack_c8[0x10] = 0;
                auStack_c8[0xd] = 0;
                auStack_c8[0xe] = 0;
                auStack_c8[0xb] = 0;
                auStack_c8[0xc] = 0;
                auStack_c8[9] = 0;
                auStack_c8[10] = 0;
                auStack_c8[7] = 0;
                auStack_c8[8] = 0;
                auStack_c8[5] = 0;
                auStack_c8[6] = 0;
                auStack_c8[3] = 0;
                auStack_c8[4] = 0;
                auStack_c8[1] = 0;
                auStack_c8[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_c8[0] = *(iVar5 + 0x43);
                        auStack_c8[0x21] = 0x71432909;
                        auStack_c8[0x22] = 0x61945374;
                        piVar3 = iVar5 + 0x60;
                        piVar6 = *piVar3;
                        if (piVar6 != piVar3) {
                            do {
                                pcVar7 = *(piVar6[2] + 8);
                                while ((pcVar7 != NULL && (piVar1 = pcVar7 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar7;
                                    pcVar7 = pcVar7 + 0x10;
                                    if (cVar2 == *(iVar5 + 0x49)) {
                                        strscpy(auStack_c8 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar6 = *piVar6;
                            } while (piVar6 != piVar3);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_c8,0x8c);
                    }
                }
            }
            uVar4 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(param_2 + 0xd8) != NULL) {
        **(param_2 + 0xd8) = 0;
    }
    if (*(param_2 + 0xe0) != NULL) {
        **(param_2 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1);
    iVar5 = *(arg1 + 0x118);
    if ((iVar5 != 0) && (*(iVar5 + 0x28) == arg1)) {
        *(iVar5 + 0x28) = 0;
    }
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x108);
    sym.free_reqs(arg1);
    _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar4);
    return;
}


// ===== sym.usb_diag_alloc_req.cfi_jt @ 0x08001420 (size 8) =====

uint sym.usb_diag_alloc_req.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    int64_t arg1;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x28);
    if (arg1 == 0) {
        return 0xffffffed;
    }
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x108);
    sym.free_reqs(arg1);
    if (0 < param_2) {
        do {
            iVar3 = usb_ep_alloc_request(*(arg1 + 0xe0),0xa20);
            if (iVar3 == 0) goto code_r0x0800189c;
            *(iVar3 + 0x30) = sym.diag_write_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            iVar1 = iVar3 + 0x40;
            *(iVar3 + 0x28) = *(iVar3 + 0x28) | 0x40000;
            piVar6 = *(arg1 + 0x100);
            uVar4 = __list_add_valid(iVar1,piVar6,arg1 + 0xf8);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x100) = iVar1;
                *(iVar3 + 0x40) = arg1 + 0xf8;
                *(iVar3 + 0x48) = piVar6;
                *piVar6 = iVar1;
            }
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    if (param_3 < 1) {
        uVar5 = 0;
    }
    else {
        do {
            iVar3 = usb_ep_alloc_request(*(arg1 + 0xd8),0xa20);
            if (iVar3 == 0) goto code_r0x0800189c;
            *(iVar3 + 0x30) = sym.diag_read_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            iVar1 = iVar3 + 0x40;
            piVar6 = *(arg1 + 0xf0);
            uVar4 = __list_add_valid(iVar1,piVar6,arg1 + 0xe8);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0xf0) = iVar1;
                *(iVar3 + 0x40) = arg1 + 0xe8;
                *(iVar3 + 0x48) = piVar6;
                *piVar6 = iVar1;
            }
            param_3 = param_3 + -1;
            uVar5 = 0;
        } while (param_3 != 0);
    }
code_r0x080018b0:
    _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar2);
    return uVar5;
code_r0x0800189c:
    sym.free_reqs(arg1);
    uVar5 = 0xfffffff4;
    goto code_r0x080018b0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001428 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iounmap();
    }
    usb_function_unregister(obj.diagusb_func);
    debugfs_remove(_segment.ehdr);
    pcVar5 = _obj.ch_lock;
    if (_obj.ch_lock != obj.ch_lock) {
        do {
            pcVar6 = *pcVar5;
            uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
            if (*(pcVar5 + 0x18) == 0) {
                uVar4 = __list_del_entry_valid(pcVar5);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5 + -8);
            }
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            pcVar5 = pcVar6;
        } while (pcVar6 != obj.ch_lock);
    }
    return;
}


// ===== sym.usb_diag_close.cfi_jt @ 0x08001430 (size 8) =====

void sym.usb_diag_close.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
    *(param_1 + 0x18) = 0;
    *(param_1 + 0x20) = 0;
    uVar4 = __list_del_entry_valid(param_1 + 8);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(param_1 + 8);
        piVar2 = *(param_1 + 0x10);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    pcVar5 = _obj.diag_dev_list;
    *(param_1 + 8) = 0xdead000000000100;
    *(param_1 + 0x10) = 0xdead000000000122;
    for (; pcVar5 != obj.diag_dev_list; pcVar5 = *pcVar5) {
        if (*(pcVar5 + -0x28) == param_1) {
            *(pcVar5 + -0x28) = 0;
        }
    }
    kfree(param_1);
    _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001438 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.diag_dev_list = obj.diag_dev_list;
    _obj.usb_diag_read.rl = obj.diag_dev_list;
    _segment.ehdr = debugfs_create_dir("usb_diag",0);
    if (((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) &&
       ((uVar2 = debugfs_create_file("status",0x124,_segment.ehdr,0,obj.debug_fdiag_ops), uVar2 == 0 ||
        (0xfffffffffffff000 < uVar2)))) {
        debugfs_remove(_segment.ehdr);
        _segment.ehdr = 0;
    }
    iVar1 = usb_function_register(obj.diagusb_func);
    if (iVar1 == 0) {
        iVar3 = of_find_compatible_node(0,0,"qcom,msm-imem-diag-dload");
        if ((iVar3 == 0) && (iVar3 = of_find_compatible_node(0,0,"qcom,android-usb"), iVar3 == 0)) {
            _printk(0x8000464);
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = of_iomap(iVar3,0);
        }
    }
    else {
        _printk(0x800058e,"diag_init",iVar1);
    }
    return iVar1;
}


// ===== sym.diag_set_inst_name.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001440 (size 8) =====

ulong sym.diag_set_inst_name.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strlen(param_2);
    if (iVar1 + 1 < 0x29) {
        iVar3 = kstrndup(param_2,iVar1 + 1,0xcc0);
        if (iVar3 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
            *(param_1 + 0xb8) = iVar3;
        }
    }
    else {
        uVar2 = 0xffffffdc;
    }
    return uVar2;
}


// ===== sym.debug_read_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001448 (size 8) =====

void sym.debug_read_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.ch_lock == obj.ch_lock) {
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        pcVar5 = _obj.ch_lock;
        do {
            iVar3 = *(pcVar5 + 0x20);
            if (iVar3 != 0) {
                uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x108);
                iVar1 = scnprintf(obj.debug_buffer + iVar4,0x1000 - iVar4,
                                  "---Name: %s---\nendpoints: %s, %s\ndpkts_tolaptop: %lu\ndpkts_tomodem:  %lu\npkts_tolaptop_pending: %u\n"
                                  ,*(pcVar5 + -8),*(*(iVar3 + 0xe0) + 8),*(*(iVar3 + 0xd8) + 8),*(iVar3 + 0x128),
                                  *(iVar3 + 0x130),*(iVar3 + 0x138));
                iVar4 = iVar1 + iVar4;
                _raw_spin_unlock_irqrestore(iVar3 + 0x108,uVar2);
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.ch_lock);
    }
    simple_read_from_buffer(param_2,param_3,param_4,obj.debug_buffer,iVar4);
    return;
}


// ===== sym.usb_diag_request_size.cfi_jt @ 0x08001450 (size 8) =====

ulong sym.usb_diag_request_size.cfi_jt(void)

{
    return 0x1000000;
}


// ===== sym.usb_diag_write.cfi_jt @ 0x08001458 (size 8) =====

ulong sym.usb_diag_write.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    char cVar7;
    bool bVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar16 = *(param_1 + 0x28);
    if (iVar16 == 0) {
        return 0xffffffed;
    }
    iVar1 = iVar16 + 0x108;
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    if ((*(iVar16 + 0x10c) == 0) || (iVar15 = *(iVar16 + 0xe0), iVar15 == 0)) goto code_r0x0800206c;
    puVar2 = iVar16 + 0xf8;
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar10);
        _dev_err(**(iVar16 + 0x110) + 0x78,"%s: no requests available\n","usb_diag_write");
        return 0xfffffff5;
    }
    piVar13 = *puVar2;
    uVar11 = __list_del_entry_valid(piVar13);
    if ((uVar11 & 1) != 0) {
        iVar4 = *piVar13;
        piVar5 = piVar13[1];
        *(iVar4 + 8) = piVar5;
        *piVar5 = iVar4;
    }
    puVar3 = iVar16 + 0x120;
    *piVar13 = -0x2152ffffffffff00;
    piVar13[1] = -0x2152fffffffffede;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar6 = *puVar3;
        cVar7 = '\x01';
        bVar8 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar8) {
            *puVar3 = uVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
        }
    } while (cVar7 != '\0');
    if (uVar6 == 0) {
        uVar12 = 2;
code_r0x080021c4:
        refcount_warn_saturate(puVar3,uVar12);
    }
    else if ((uVar6 + 1 | uVar6) < 0) {
        uVar12 = 1;
        goto code_r0x080021c4;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar10);
    piVar13[-8] = *param_2;
    iVar4 = param_2[1];
    piVar13[-1] = param_2;
    *(piVar13 + -7) = iVar4;
    if (iVar16 != *(param_1 + 0x28)) {
        usb_ep_free_request(iVar15,piVar13 + -8);
        uVar11 = refcount_dec_and_lock(puVar3,iVar1);
        if ((uVar11 & 1) == 0) {
            return 0xfffffffb;
        }
        _raw_spin_unlock(iVar16 + 0x108);
        kfree(iVar16);
        return 0xfffffffb;
    }
    *(iVar16 + 0x138) = *(iVar16 + 0x138) + 1;
    uVar10 = usb_ep_queue(iVar15,piVar13 + -8,0xa20);
    if (uVar10 == 0) {
        return uVar10;
    }
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    puVar14 = *(iVar16 + 0x100);
    uVar11 = __list_add_valid(piVar13,puVar14,puVar2);
    if ((uVar11 & 1) != 0) {
        *(iVar16 + 0x100) = piVar13;
        *piVar13 = puVar2;
        piVar13[1] = puVar14;
        *puVar14 = piVar13;
    }
    *(iVar16 + 0x138) = *(iVar16 + 0x138) + -1;
    iVar9 = ___ratelimit(obj.usb_diag_write.rl,"usb_diag_write");
    if (iVar9 != 0) {
        _dev_err(**(iVar16 + 0x110) + 0x78,"%s: cannot queue read request\n","usb_diag_write");
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar6 = *puVar3;
        cVar7 = '\x01';
        bVar8 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar8) {
            *puVar3 = uVar6 - 1;
            cVar7 = ExclusiveMonitorsStatus();
        }
    } while (cVar7 != '\0');
    if (uVar6 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(iVar16 + 0x108);
        kfree(iVar16);
        daif = uVar10;
        return 0xfffffffb;
    }
    if (uVar6 < 1) {
        refcount_warn_saturate(puVar3,3);
    }
code_r0x0800206c:
    _raw_spin_unlock_irqrestore(iVar1,uVar10);
    return 0xfffffffb;
}


// ===== sym.usb_diag_read.cfi_jt @ 0x08001460 (size 8) =====

ulong sym.usb_diag_read.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    char cVar7;
    bool bVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar16 = *(param_1 + 0x28);
    if (iVar16 == 0) {
        return 0xffffffed;
    }
    iVar1 = iVar16 + 0x108;
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    if ((*(iVar16 + 0x10c) == 0) || (iVar15 = *(iVar16 + 0xd8), iVar15 == 0)) goto code_r0x08001d58;
    puVar2 = iVar16 + 0xe8;
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar10);
        _dev_err(**(iVar16 + 0x110) + 0x78,"%s: no requests available\n","usb_diag_read");
        return 0xfffffff5;
    }
    piVar13 = *puVar2;
    uVar11 = __list_del_entry_valid(piVar13);
    if ((uVar11 & 1) != 0) {
        iVar4 = *piVar13;
        piVar5 = piVar13[1];
        *(iVar4 + 8) = piVar5;
        *piVar5 = iVar4;
    }
    puVar3 = iVar16 + 0x120;
    *piVar13 = -0x2152ffffffffff00;
    piVar13[1] = -0x2152fffffffffede;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar6 = *puVar3;
        cVar7 = '\x01';
        bVar8 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar8) {
            *puVar3 = uVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
        }
    } while (cVar7 != '\0');
    if (uVar6 == 0) {
        uVar12 = 2;
code_r0x08001e90:
        refcount_warn_saturate(puVar3,uVar12);
    }
    else if ((uVar6 + 1 | uVar6) < 0) {
        uVar12 = 1;
        goto code_r0x08001e90;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar10);
    piVar13[-8] = *param_2;
    iVar4 = param_2[1];
    piVar13[-1] = param_2;
    *(piVar13 + -7) = iVar4;
    if (iVar16 != *(param_1 + 0x28)) {
        usb_ep_free_request();
        uVar11 = refcount_dec_and_lock(puVar3,iVar1);
        if ((uVar11 & 1) == 0) {
            return 0xfffffffb;
        }
        _raw_spin_unlock(iVar16 + 0x108);
        kfree(iVar16);
        return 0xfffffffb;
    }
    uVar10 = usb_ep_queue(iVar15,piVar13 + -8,0xa20);
    if (uVar10 == 0) {
        return uVar10;
    }
    uVar10 = _raw_spin_lock_irqsave(iVar1);
    puVar14 = *(iVar16 + 0xf0);
    uVar11 = __list_add_valid(piVar13,puVar14,puVar2);
    if ((uVar11 & 1) != 0) {
        *(iVar16 + 0xf0) = piVar13;
        *piVar13 = puVar2;
        piVar13[1] = puVar14;
        *puVar14 = piVar13;
    }
    iVar9 = ___ratelimit(obj.usb_diag_read.rl,"usb_diag_read");
    if (iVar9 != 0) {
        _dev_err(**(iVar16 + 0x110) + 0x78,"%s: cannot queue read request\n","usb_diag_read");
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar6 = *puVar3;
        cVar7 = '\x01';
        bVar8 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar8) {
            *puVar3 = uVar6 - 1;
            cVar7 = ExclusiveMonitorsStatus();
        }
    } while (cVar7 != '\0');
    if (uVar6 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(iVar16 + 0x108);
        kfree(iVar16);
        daif = uVar10;
        return 0xfffffffb;
    }
    if (uVar6 < 1) {
        refcount_warn_saturate(puVar3,3);
    }
code_r0x08001d58:
    _raw_spin_unlock_irqrestore(iVar1,uVar10);
    return 0xfffffffb;
}


// ===== sym.diag_alloc_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001468 (size 8) =====

int64_t sym.diag_alloc_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x150);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.diag_set_inst_name.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        *(iVar1 + 0xb0) = sym.diag_free_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        config_group_init_type_name(iVar1,0x8000699,obj.diag_func_type);
    }
    return iVar1;
}


// ===== sym.diag_pid_store.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001470 (size 8) =====

ulong sym.diag_pid_store.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_store");
        param_3 = 0;
    }
    return param_3;
}


// ===== sym.diag_serial_store.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001478 (size 8) =====

ulong sym.diag_serial_store.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    char cVar2;
    uchar *puVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t arg1;
    int64_t iVar7;
    int64_t *piVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t auStack_178 [36];
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint uStack_ac;
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
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_store");
        param_3 = 0;
    }
    else {
        strscpy(&uStack_a8,param_2,0x80);
        puVar3 = strnchr(&uStack_a8,0x80,10);
        if (puVar3 != NULL) {
            *puVar3 = 0;
        }
        __memcpy_toio(_segment.ehdr + 4,&uStack_a8,0x80);
        uStack_ac = 0x61945374;
        __memcpy_toio(_segment.ehdr + 0x88,&uStack_ac,4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._8_8_;
    *extraout_x18 = sym.diag_function_bind;
    pcStack_d8 = sym.diag_function_bind;
    iVar7 = sp_el0;
    iStack_e8 = *(iVar7 + 0x5e0);
    puVar10 = *(auVar11._0_8_ + 0x30);
    *(iVar6 + 0x110) = puVar10;
    puStack_e0 = &stack0xffffffffffffffe0;
    *0x80002ba = usb_interface_id();
    piVar4 = usb_ep_autoconfig(*puVar10,obj.fs_bulk_in_desc);
    if (piVar4 == NULL) {
code_r0x08002b68:
        uVar5 = 0xffffffed;
    }
    else {
        *(iVar6 + 0xe0) = piVar4;
        *piVar4 = iVar6;
        piVar4 = usb_ep_autoconfig(*puVar10,obj.fs_bulk_out_desc);
        if (piVar4 == NULL) goto code_r0x08002b68;
        *(iVar6 + 0xd8) = piVar4;
        *piVar4 = iVar6;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        uVar5 = usb_assign_descriptors(iVar6,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (uVar5 == 0) {
            if (_segment.ehdr + -0x140 == iVar6) {
                auStack_178[0x1f] = 0;
                auStack_178[0x20] = 0;
                iVar7 = *(iVar6 + 0x110);
                auStack_178[0x1d] = 0;
                auStack_178[0x1e] = 0;
                auStack_178[0x1b] = 0;
                auStack_178[0x1c] = 0;
                auStack_178[0x19] = 0;
                auStack_178[0x1a] = 0;
                auStack_178[0x17] = 0;
                auStack_178[0x18] = 0;
                auStack_178[0x15] = 0;
                auStack_178[0x16] = 0;
                auStack_178[0x13] = 0;
                auStack_178[0x14] = 0;
                auStack_178[0x11] = 0;
                auStack_178[0x12] = 0;
                auStack_178[0xf] = 0;
                auStack_178[0x10] = 0;
                auStack_178[0xd] = 0;
                auStack_178[0xe] = 0;
                auStack_178[0xb] = 0;
                auStack_178[0xc] = 0;
                auStack_178[9] = 0;
                auStack_178[10] = 0;
                auStack_178[7] = 0;
                auStack_178[8] = 0;
                auStack_178[5] = 0;
                auStack_178[6] = 0;
                auStack_178[3] = 0;
                auStack_178[4] = 0;
                auStack_178[1] = 0;
                auStack_178[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_178[0] = *(iVar7 + 0x43);
                        auStack_178[0x21] = 0x71432909;
                        auStack_178[0x22] = 0x61945374;
                        piVar4 = iVar7 + 0x60;
                        piVar8 = *piVar4;
                        if (piVar8 != piVar4) {
                            do {
                                pcVar9 = *(piVar8[2] + 8);
                                while ((pcVar9 != NULL && (piVar1 = pcVar9 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar9;
                                    pcVar9 = pcVar9 + 0x10;
                                    if (cVar2 == *(iVar7 + 0x49)) {
                                        strscpy(auStack_178 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar8 = *piVar8;
                            } while (piVar8 != piVar4);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_178,0x8c);
                    }
                }
            }
            uVar5 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(iVar6 + 0xd8) != NULL) {
        **(iVar6 + 0xd8) = 0;
    }
    if (*(iVar6 + 0xe0) != NULL) {
        **(iVar6 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1);
    iVar7 = *(arg1 + 0x118);
    if ((iVar7 != 0) && (*(iVar7 + 0x28) == arg1)) {
        *(iVar7 + 0x28) = 0;
    }
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x108);
    sym.free_reqs(arg1);
    uVar5 = _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar5);
    return uVar5;
}


// ===== sym.diag_read_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001480 (size 8) =====

void sym.diag_read_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_2 + 0x38);
    iVar8 = *param_1;
    *(iVar5 + 0xc) = *(param_2 + 0x58);
    iVar1 = iVar8 + 0x108;
    *(iVar5 + 0x10) = *(param_2 + 0x54);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    piVar7 = *(iVar8 + 0xf0);
    iVar2 = param_2 + 0x40;
    uVar4 = __list_add_valid(iVar2,piVar7,iVar8 + 0xe8);
    if ((uVar4 & 1) != 0) {
        *(iVar8 + 0xf0) = iVar2;
        *(param_2 + 0x40) = iVar8 + 0xe8;
        *(param_2 + 0x48) = piVar7;
        *piVar7 = iVar2;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    *(iVar8 + 0x130) = *(iVar8 + 0x130) + 1;
    if ((*(iVar8 + 0x118) != 0) && (pcVar6 = *(*(iVar8 + 0x118) + 0x18), pcVar6 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x80003c0);
        (*pcVar6)(*(*(iVar8 + 0x118) + 0x20),3,iVar5);
    }
    uVar4 = refcount_dec_and_lock(iVar8 + 0x120,iVar1);
    if ((uVar4 & 1) != 0) {
        _raw_spin_unlock(iVar8 + 0x108);
        kfree(iVar8);
    }
    return;
}


// ===== sym.diag_write_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001488 (size 8) =====

void sym.diag_write_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *param_1;
    iVar5 = *(param_2 + 0x38);
    *(iVar8 + 0x138) = *(iVar8 + 0x138) + -1;
    if (*(param_2 + 0x54) == 0) {
        *(iVar8 + 0x128) = *(iVar8 + 0x128) + 1;
    }
    iVar1 = iVar8 + 0x108;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    piVar7 = *(iVar8 + 0x100);
    iVar2 = param_2 + 0x40;
    uVar4 = __list_add_valid(iVar2,piVar7,iVar8 + 0xf8);
    if ((uVar4 & 1) != 0) {
        *(iVar8 + 0x100) = iVar2;
        *(param_2 + 0x40) = iVar8 + 0xf8;
        *(param_2 + 0x48) = piVar7;
        *piVar7 = iVar2;
    }
    if (*(param_2 + 8) != 0) {
        *(iVar5 + 0xc) = *(param_2 + 0x58);
        *(iVar5 + 0x10) = *(param_2 + 0x54);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    if ((*(iVar8 + 0x118) != 0) && (pcVar6 = *(*(iVar8 + 0x118) + 0x18), pcVar6 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x80003a0);
        (*pcVar6)(*(*(iVar8 + 0x118) + 0x20),2,iVar5);
    }
    uVar4 = refcount_dec_and_lock(iVar8 + 0x120,iVar1);
    if ((uVar4 & 1) != 0) {
        _raw_spin_unlock(iVar8 + 0x108);
        kfree(iVar8);
    }
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08001490 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_unlock(param_1 + -0x18);
    kfree(param_1 + -0x120);
    return;
}


// ===== sym.diag_function_disable.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x08001498 (size 8) =====

void sym.diag_function_disable.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x108);
    *(param_1 + 0x10c) = 0;
    _raw_spin_unlock_irqrestore(param_1 + 0x108,uVar1);
    if ((*(param_1 + 0x118) != 0) && (pcVar2 = *(*(param_1 + 0x118) + 0x18), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar2,0x8000400);
        (*pcVar2)(*(*(param_1 + 0x118) + 0x20),1,0);
    }
    usb_ep_disable(*(param_1 + 0xe0));
    **(param_1 + 0xe0) = 0;
    usb_ep_disable(*(param_1 + 0xd8));
    **(param_1 + 0xd8) = 0;
    if (*(param_1 + 0x118) != 0) {
        *(*(param_1 + 0x118) + 0x28) = 0;
    }
    return;
}


// ===== sym.diag_free_func.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014a0 (size 8) =====

void sym.diag_free_func.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(param_1 + 0x108);
    uVar8 = __list_del_entry_valid(param_1 + 0x140);
    if ((uVar8 & 1) != 0) {
        iVar2 = *(param_1 + 0x140);
        piVar3 = *(param_1 + 0x148);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    piVar1 = param_1 + 0x120;
    *(param_1 + 0x140) = 0xdead000000000100;
    *(param_1 + 0x148) = 0xdead000000000122;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(param_1 + 0x108);
        kfree(param_1);
        daif = uVar7;
    }
    else {
        if (iVar4 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x108,uVar7);
    }
    return;
}


// ===== sym.diag_function_unbind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014a8 (size 8) =====

void sym.diag_function_unbind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_free_all_descriptors(param_2);
    iVar2 = *(param_2 + 0x118);
    if ((iVar2 != 0) && (*(iVar2 + 0x28) == param_2)) {
        *(iVar2 + 0x28) = 0;
    }
    uVar1 = _raw_spin_lock_irqsave(param_2 + 0x108);
    sym.free_reqs(param_2);
    _raw_spin_unlock_irqrestore(param_2 + 0x108,uVar1);
    return;
}


// ===== sym.debug_reset_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014b0 (size 8) =====

ulong sym.debug_reset_stats.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (pcVar2 = _obj.ch_lock; pcVar2 != obj.ch_lock; pcVar2 = *pcVar2) {
        iVar3 = *(pcVar2 + 0x20);
        if (iVar3 != 0) {
            uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x108);
            *(iVar3 + 0x128) = 0;
            *(iVar3 + 0x130) = 0;
            *(iVar3 + 0x138) = 0;
            _raw_spin_unlock_irqrestore(iVar3 + 0x108,uVar1);
        }
    }
    return param_3;
}


// ===== sym.diag_function_set_alt.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014b8 (size 8) =====

int sym.diag_function_set_alt.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(*(param_1 + 0x30) + 0x30);
    iVar1 = config_ep_by_speed(*puVar3,param_1,*(param_1 + 0xe0));
    if ((iVar1 == 0) && (iVar1 = config_ep_by_speed(*puVar3,param_1,*(param_1 + 0xd8)), iVar1 == 0)) {
        if (*(param_1 + 0x118) == 0) {
            iVar1 = -0x13;
        }
        else {
            *(*(param_1 + 0x118) + 0x28) = param_1;
            **(param_1 + 0xe0) = param_1;
            iVar1 = usb_ep_enable(*(param_1 + 0xe0));
            if (iVar1 == 0) {
                **(param_1 + 0xd8) = param_1;
                iVar1 = usb_ep_enable(*(param_1 + 0xd8));
                if (iVar1 == 0) {
                    *(param_1 + 0x138) = 0;
                    *(param_1 + 0x128) = 0;
                    *(param_1 + 0x130) = 0;
                    uVar2 = _raw_spin_lock_irqsave(param_1 + 0x108);
                    *(param_1 + 0x10c) = 1;
                    _raw_spin_unlock_irqrestore(param_1 + 0x108,uVar2);
                    pcVar4 = *(*(param_1 + 0x118) + 0x18);
                    iVar1 = 0;
                    if (pcVar4 != NULL) {
                        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar4,0x80003e0);
                        (*pcVar4)(*(*(param_1 + 0x118) + 0x20),0,0);
                        iVar1 = 0;
                    }
                }
                else {
                    _dev_err(**(param_1 + 0x110) + 0x78,"can\'t enable %s, result %d\n",*(*(param_1 + 0xd8) + 8),
                             iVar1);
                    usb_ep_disable(*(param_1 + 0xe0));
                }
            }
            else {
                _dev_err(**(param_1 + 0x110) + 0x78,"can\'t enable %s, result %d\n",*(*(param_1 + 0xe0) + 8),iVar1);
            }
        }
    }
    else {
        iVar1 = -0x16;
        *(*(param_1 + 0xe0) + 0x38) = 0;
        *(*(param_1 + 0xd8) + 0x38) = 0;
    }
    return iVar1;
}


// ===== sym.diag_opts_release.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014c0 (size 8) =====

void sym.diag_opts_release.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.diag_free_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014c8 (size 8) =====

void sym.diag_free_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(param_1 + 0xb8));
    kfree(param_1);
    return;
}


// ===== sym.usb_diag_open.cfi_jt @ 0x080014d0 (size 8) =====

code * sym.usb_diag_open.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
    pcVar8 = _obj.ch_lock;
    do {
        if (pcVar8 == obj.ch_lock) {
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            iVar7 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar7 = 0x30;
            }
            pcVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x30);
            if (pcVar4 == NULL) {
                pcVar4 = 0xfffffffffffffff4;
            }
            else {
                *pcVar4 = param_1;
                *(pcVar4 + 0x20) = param_2;
                pcVar6 = pcVar4 + 0x18;
                *pcVar6 = param_3;
                uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
                pcVar1 = _obj.diag_dev_list;
                pcVar8 = pcVar4 + 8;
                uVar5 = __list_add_valid(pcVar8,_obj.diag_dev_list,obj.ch_lock);
                if ((uVar5 & 1) != 0) {
                    _obj.diag_dev_list = pcVar8;
                    *(pcVar4 + 8) = obj.ch_lock;
                    *(pcVar4 + 0x10) = pcVar1;
                    *pcVar1 = pcVar8;
                }
                _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
                iVar7 = *(pcVar4 + 0x28);
joined_r0x0800160c:
                if (iVar7 != 0) {
                    uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x108);
                    iVar2 = *(iVar7 + 0x10c);
                    _raw_spin_unlock_irqrestore(iVar7 + 0x108,uVar3);
                    pcVar6 = *pcVar6;
                    if ((pcVar6 != NULL) && (iVar2 != 0)) {
                        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x8000380);
                        (*pcVar6)(param_2,0,0);
                    }
                }
            }
            return pcVar4;
        }
        pcVar4 = pcVar8 + -8;
        iVar2 = strcmp(param_1,*pcVar4);
        if (iVar2 == 0) {
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            pcVar6 = pcVar8 + 0x10;
            *pcVar6 = param_3;
            *(pcVar8 + -8) = param_1;
            *(pcVar8 + 0x18) = param_2;
            iVar7 = *(pcVar8 + 0x20);
            goto joined_r0x0800160c;
        }
        pcVar8 = *pcVar8;
    } while( true );
}


// ===== sym.debug_open.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014d8 (size 8) =====

ulong sym.debug_open.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(void)

{
    return 0;
}


// ===== sym.diag_alloc.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014e0 (size 8) =====

ulong * sym.diag_alloc.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(param_1 + 0xb8);
    for (pcVar9 = _obj.ch_lock; pcVar9 != obj.ch_lock; pcVar9 = *pcVar9) {
        pcVar5 = pcVar9 + -8;
        iVar4 = strcmp(uVar8,*pcVar5);
        if (iVar4 == 0) goto code_r0x08002550;
    }
    _printk(0x8000491,"diag_context_init");
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    pcVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    if (pcVar5 != NULL) {
        pcVar10 = pcVar5 + 8;
        *pcVar5 = uVar8;
        uVar8 = _raw_spin_lock_irqsave(obj.ch_lock);
        pcVar9 = _obj.diag_dev_list;
        uVar6 = __list_add_valid(pcVar10,_obj.diag_dev_list,obj.ch_lock);
        if ((uVar6 & 1) != 0) {
            _obj.diag_dev_list = pcVar10;
            *(pcVar5 + 8) = obj.ch_lock;
            *(pcVar5 + 0x10) = pcVar9;
            *pcVar9 = pcVar10;
        }
        _raw_spin_unlock_irqrestore(obj.ch_lock,uVar8);
code_r0x08002550:
        puVar7 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x150);
        piVar3 = _obj.usb_diag_read.rl;
        if (puVar7 != NULL) {
            piVar1 = puVar7 + 0x28;
            uVar6 = __list_add_valid(piVar1,_obj.usb_diag_read.rl,obj.diag_dev_list);
            if ((uVar6 & 1) != 0) {
                _obj.usb_diag_read.rl = piVar1;
                puVar7[0x28] = obj.diag_dev_list;
                puVar7[0x29] = piVar3;
                *piVar3 = piVar1;
            }
            puVar7[0x23] = pcVar5;
            uVar8 = *pcVar5;
            puVar7[9] = sym.diag_function_bind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[10] = sym.diag_function_unbind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            *puVar7 = uVar8;
            puVar7[0xd] = sym.diag_function_set_alt.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[0xb] = sym.diag_free_func.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[0xf] = sym.diag_function_disable.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            *(puVar7 + 0x24) = 1;
            *(puVar7 + 0x21) = 0;
            puVar7[0x1d] = puVar7 + 0x1d;
            puVar7[0x1e] = puVar7 + 0x1d;
            puVar7[0x1f] = puVar7 + 0x1f;
            puVar7[0x20] = puVar7 + 0x1f;
            return puVar7;
        }
    }
    return 0xfffffffffffffff4;
}


// ===== sym.diag_serial_show.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014e8 (size 8) =====

int64_t sym.diag_serial_show.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    int64_t *piVar6;
    ulong uVar7;
    ulong extraout_x1;
    int64_t iVar8;
    int64_t arg1;
    int64_t *piVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x19;
    uint64_t unaff_x20;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint32_t auStack_238 [36];
    int64_t iStack_1a8;
    uchar **ppuStack_1a0;
    code *pcStack_198;
    uint uStack_16c;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_show");
        iVar4 = -0x16;
    }
    else {
        unaff_x20 = &uStack_b8 | 4;
        __memcpy_fromio(unaff_x20,_segment.ehdr + 4,0x80);
        param_3 = 0x80006a8;
        iVar3 = scnprintf(param_2,0x1000,0x80006a8,unaff_x20);
        iVar4 = iVar3;
        unaff_x19 = param_2;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18 = sym.diag_serial_store;
    pcStack_d8 = sym.diag_serial_store;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    puStack_e0 = &stack0xffffffffffffffe0;
    uStack_d0 = unaff_x20;
    uStack_c8 = unaff_x19;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_store");
        param_3 = 0;
    }
    else {
        strscpy(&uStack_168,extraout_x1,0x80);
        puVar5 = strnchr(&uStack_168,0x80,10);
        if (puVar5 != NULL) {
            *puVar5 = 0;
        }
        __memcpy_toio(_segment.ehdr + 4,&uStack_168,0x80);
        uStack_16c = 0x61945374;
        __memcpy_toio(_segment.ehdr + 0x88,&uStack_16c,4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return param_3;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_8_;
    *extraout_x18_00 = sym.diag_function_bind;
    pcStack_198 = sym.diag_function_bind;
    iVar4 = sp_el0;
    iStack_1a8 = *(iVar4 + 0x5e0);
    puVar11 = *(auVar12._0_8_ + 0x30);
    *(iVar8 + 0x110) = puVar11;
    ppuStack_1a0 = &puStack_e0;
    *0x80002ba = usb_interface_id();
    piVar6 = usb_ep_autoconfig(*puVar11,obj.fs_bulk_in_desc);
    if (piVar6 == NULL) {
code_r0x08002b68:
        iVar4 = 0xffffffed;
    }
    else {
        *(iVar8 + 0xe0) = piVar6;
        *piVar6 = iVar8;
        piVar6 = usb_ep_autoconfig(*puVar11,obj.fs_bulk_out_desc);
        if (piVar6 == NULL) goto code_r0x08002b68;
        *(iVar8 + 0xd8) = piVar6;
        *piVar6 = iVar8;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        iVar4 = usb_assign_descriptors(iVar8,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (iVar4 == 0) {
            if (_segment.ehdr + -0x140 == iVar8) {
                auStack_238[0x1f] = 0;
                auStack_238[0x20] = 0;
                iVar4 = *(iVar8 + 0x110);
                auStack_238[0x1d] = 0;
                auStack_238[0x1e] = 0;
                auStack_238[0x1b] = 0;
                auStack_238[0x1c] = 0;
                auStack_238[0x19] = 0;
                auStack_238[0x1a] = 0;
                auStack_238[0x17] = 0;
                auStack_238[0x18] = 0;
                auStack_238[0x15] = 0;
                auStack_238[0x16] = 0;
                auStack_238[0x13] = 0;
                auStack_238[0x14] = 0;
                auStack_238[0x11] = 0;
                auStack_238[0x12] = 0;
                auStack_238[0xf] = 0;
                auStack_238[0x10] = 0;
                auStack_238[0xd] = 0;
                auStack_238[0xe] = 0;
                auStack_238[0xb] = 0;
                auStack_238[0xc] = 0;
                auStack_238[9] = 0;
                auStack_238[10] = 0;
                auStack_238[7] = 0;
                auStack_238[8] = 0;
                auStack_238[5] = 0;
                auStack_238[6] = 0;
                auStack_238[3] = 0;
                auStack_238[4] = 0;
                auStack_238[1] = 0;
                auStack_238[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_238[0] = *(iVar4 + 0x43);
                        auStack_238[0x21] = 0x71432909;
                        auStack_238[0x22] = 0x61945374;
                        piVar6 = iVar4 + 0x60;
                        piVar9 = *piVar6;
                        if (piVar9 != piVar6) {
                            do {
                                pcVar10 = *(piVar9[2] + 8);
                                while ((pcVar10 != NULL && (piVar1 = pcVar10 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar10;
                                    pcVar10 = pcVar10 + 0x10;
                                    if (cVar2 == *(iVar4 + 0x49)) {
                                        strscpy(auStack_238 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar9 = *piVar9;
                            } while (piVar9 != piVar6);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_238,0x8c);
                    }
                }
            }
            iVar4 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(iVar8 + 0xd8) != NULL) {
        **(iVar8 + 0xd8) = 0;
    }
    if (*(iVar8 + 0xe0) != NULL) {
        **(iVar8 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1a8) {
        return iVar4;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18_01 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1);
    iVar4 = *(arg1 + 0x118);
    if ((iVar4 != 0) && (*(iVar4 + 0x28) == arg1)) {
        *(iVar4 + 0x28) = 0;
    }
    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x108);
    sym.free_reqs(arg1);
    iVar4 = _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar7);
    return iVar4;
}


// ===== sym.diag_pid_show.33d1317ee70240f11d7c2b8118384c9b.cfi_jt @ 0x080014f0 (size 8) =====

int64_t sym.diag_pid_show.33d1317ee70240f11d7c2b8118384c9b.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_b8 [17];
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    auStack_b8[0xf] = 0;
    auStack_b8[0x10] = 0;
    auStack_b8[0xd] = 0;
    auStack_b8[0xe] = 0;
    auStack_b8[0xb] = 0;
    auStack_b8[0xc] = 0;
    auStack_b8[9] = 0;
    auStack_b8[10] = 0;
    auStack_b8[7] = 0;
    auStack_b8[8] = 0;
    auStack_b8[5] = 0;
    auStack_b8[6] = 0;
    auStack_b8[3] = 0;
    auStack_b8[4] = 0;
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    auStack_b8[0] = 0;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_show");
        iVar3 = -0x16;
    }
    else {
        __memcpy_fromio(auStack_b8,_segment.ehdr,4);
        param_3 = 0x8000641;
        iVar2 = scnprintf(param_2,0x1000,0x8000641,auStack_b8[0] & 0xffffffff);
        iVar3 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18 = sym.diag_pid_store;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_store");
        param_3 = 0;
    }
    return param_3;
}


// ===== sym.usb_diag_open @ 0x080014f8 (size 452) =====

code * sym.usb_diag_open(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
    pcVar8 = _obj.ch_lock;
    do {
        if (pcVar8 == obj.ch_lock) {
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            iVar7 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar7 = 0x30;
            }
            pcVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x30);
            if (pcVar4 == NULL) {
                pcVar4 = 0xfffffffffffffff4;
            }
            else {
                *pcVar4 = arg1;
                *(pcVar4 + 0x20) = arg2;
                pcVar6 = pcVar4 + 0x18;
                *pcVar6 = arg3;
                uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
                pcVar1 = _obj.diag_dev_list;
                pcVar8 = pcVar4 + 8;
                uVar5 = __list_add_valid(pcVar8,_obj.diag_dev_list,obj.ch_lock);
                if ((uVar5 & 1) != 0) {
                    _obj.diag_dev_list = pcVar8;
                    *(pcVar4 + 8) = obj.ch_lock;
                    *(pcVar4 + 0x10) = pcVar1;
                    *pcVar1 = pcVar8;
                }
                _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
                iVar7 = *(pcVar4 + 0x28);
joined_r0x0800160c:
                if (iVar7 != 0) {
                    uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x108);
                    iVar2 = *(iVar7 + 0x10c);
                    _raw_spin_unlock_irqrestore(iVar7 + 0x108,uVar3);
                    pcVar6 = *pcVar6;
                    if ((pcVar6 != NULL) && (iVar2 != 0)) {
                        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x8000380);
                        (*pcVar6)(arg2,0,0);
                    }
                }
            }
            return pcVar4;
        }
        pcVar4 = pcVar8 + -8;
        iVar2 = strcmp(arg1,*pcVar4);
        if (iVar2 == 0) {
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            pcVar6 = pcVar8 + 0x10;
            *pcVar6 = arg3;
            *(pcVar8 + -8) = arg1;
            *(pcVar8 + 0x18) = arg2;
            iVar7 = *(pcVar8 + 0x20);
            goto joined_r0x0800160c;
        }
        pcVar8 = *pcVar8;
    } while( true );
}


// ===== sym.usb_diag_close @ 0x080016bc (size 184) =====

void sym.usb_diag_close(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 0;
    uVar4 = __list_del_entry_valid(arg1 + 8);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(arg1 + 8);
        piVar2 = *(arg1 + 0x10);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    pcVar5 = _obj.diag_dev_list;
    *(arg1 + 8) = 0xdead000000000100;
    *(arg1 + 0x10) = 0xdead000000000122;
    for (; pcVar5 != obj.diag_dev_list; pcVar5 = *pcVar5) {
        if (*(pcVar5 + -0x28) == arg1) {
            *(pcVar5 + -0x28) = 0;
        }
    }
    kfree(arg1);
    _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
    return;
}


// ===== sym.usb_diag_alloc_req @ 0x08001774 (size 368) =====

uint64_t sym.usb_diag_alloc_req(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int64_t arg1_00;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x28);
    if (arg1_00 == 0) {
        return 0xffffffed;
    }
    uVar6 = arg3 & 0xffffffff;
    uVar7 = arg2 & 0xffffffff;
    uVar3 = _raw_spin_lock_irqsave(arg1_00 + 0x108);
    sym.free_reqs(arg1_00);
    if (0 < arg2) {
        do {
            iVar4 = usb_ep_alloc_request(*(arg1_00 + 0xe0),0xa20);
            if (iVar4 == 0) goto code_r0x0800189c;
            *(iVar4 + 0x30) = sym.diag_write_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            iVar1 = iVar4 + 0x40;
            *(iVar4 + 0x28) = *(iVar4 + 0x28) | 0x40000;
            piVar8 = *(arg1_00 + 0x100);
            uVar5 = __list_add_valid(iVar1,piVar8,arg1_00 + 0xf8);
            if ((uVar5 & 1) != 0) {
                *(arg1_00 + 0x100) = iVar1;
                *(iVar4 + 0x40) = arg1_00 + 0xf8;
                *(iVar4 + 0x48) = piVar8;
                *piVar8 = iVar1;
            }
            uVar2 = uVar7 - 1;
            uVar7 = uVar2;
        } while (uVar2 != 0);
    }
    if (arg3 < 1) {
        uVar6 = 0;
    }
    else {
        do {
            iVar4 = usb_ep_alloc_request(*(arg1_00 + 0xd8),0xa20);
            if (iVar4 == 0) goto code_r0x0800189c;
            *(iVar4 + 0x30) = sym.diag_read_complete.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            iVar1 = iVar4 + 0x40;
            piVar8 = *(arg1_00 + 0xf0);
            uVar7 = __list_add_valid(iVar1,piVar8,arg1_00 + 0xe8);
            if ((uVar7 & 1) != 0) {
                *(arg1_00 + 0xf0) = iVar1;
                *(iVar4 + 0x40) = arg1_00 + 0xe8;
                *(iVar4 + 0x48) = piVar8;
                *piVar8 = iVar1;
            }
            uVar2 = uVar6 - 1;
            uVar6 = uVar2;
        } while (uVar2 != 0);
    }
code_r0x080018b0:
    _raw_spin_unlock_irqrestore(arg1_00 + 0x108,uVar3);
    return uVar6;
code_r0x0800189c:
    sym.free_reqs(arg1_00);
    uVar6 = 0xfffffff4;
    goto code_r0x080018b0;
}


// ===== sym.free_reqs @ 0x080018e4 (size 236) =====

void sym.free_reqs(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0xf8);
    while (piVar3 != arg1 + 0xf8) {
        piVar5 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        usb_ep_free_request(*(arg1 + 0xe0),piVar3 + -8);
        piVar3 = piVar5;
    }
    piVar3 = *(arg1 + 0xe8);
    while (piVar3 != arg1 + 0xe8) {
        piVar5 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        usb_ep_free_request(*(arg1 + 0xd8),piVar3 + -8);
        piVar3 = piVar5;
    }
    return;
}


// ===== sym.diag_write_complete @ 0x080019d0 (size 312) =====

void sym.diag_write_complete(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    iVar5 = *(arg2 + 0x38);
    *(arg1 + 0x138) = *(arg1 + 0x138) + -1;
    if (*(arg2 + 0x54) == 0) {
        *(arg1 + 0x128) = *(arg1 + 0x128) + 1;
    }
    iVar1 = arg1 + 0x108;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    piVar7 = *(arg1 + 0x100);
    iVar2 = arg2 + 0x40;
    uVar4 = __list_add_valid(iVar2,piVar7,arg1 + 0xf8);
    if ((uVar4 & 1) != 0) {
        *(arg1 + 0x100) = iVar2;
        *(arg2 + 0x40) = arg1 + 0xf8;
        *(arg2 + 0x48) = piVar7;
        *piVar7 = iVar2;
    }
    if (*(arg2 + 8) != 0) {
        *(iVar5 + 0xc) = *(arg2 + 0x58);
        *(iVar5 + 0x10) = *(arg2 + 0x54);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    if ((*(arg1 + 0x118) != 0) && (pcVar6 = *(*(arg1 + 0x118) + 0x18), pcVar6 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x80003a0);
        (*pcVar6)(*(*(arg1 + 0x118) + 0x20),2,iVar5);
    }
    uVar4 = refcount_dec_and_lock(arg1 + 0x120,iVar1);
    if ((uVar4 & 1) != 0) {
        _raw_spin_unlock(arg1 + 0x108);
        kfree(arg1);
    }
    return;
}


// ===== sym.diag_read_complete @ 0x08001b08 (size 284) =====

void sym.diag_read_complete(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg2 + 0x38);
    arg1 = *arg1;
    *(iVar5 + 0xc) = *(arg2 + 0x58);
    iVar1 = arg1 + 0x108;
    *(iVar5 + 0x10) = *(arg2 + 0x54);
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    piVar7 = *(arg1 + 0xf0);
    iVar2 = arg2 + 0x40;
    uVar4 = __list_add_valid(iVar2,piVar7,arg1 + 0xe8);
    if ((uVar4 & 1) != 0) {
        *(arg1 + 0xf0) = iVar2;
        *(arg2 + 0x40) = arg1 + 0xe8;
        *(arg2 + 0x48) = piVar7;
        *piVar7 = iVar2;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    *(arg1 + 0x130) = *(arg1 + 0x130) + 1;
    if ((*(arg1 + 0x118) != 0) && (pcVar6 = *(*(arg1 + 0x118) + 0x18), pcVar6 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar6,0x80003c0);
        (*pcVar6)(*(*(arg1 + 0x118) + 0x20),3,iVar5);
    }
    uVar4 = refcount_dec_and_lock(arg1 + 0x120,iVar1);
    if ((uVar4 & 1) != 0) {
        _raw_spin_unlock(arg1 + 0x108);
        kfree(arg1);
    }
    return;
}


// ===== sym.usb_diag_request_size @ 0x08001c24 (size 16) =====

ulong sym.usb_diag_request_size(void)

{
    return 0x1000000;
}


// ===== sym.usb_diag_read @ 0x08001c34 (size 728) =====

ulong sym.usb_diag_read(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    uint32_t uVar7;
    char cVar8;
    bool bVar9;
    int iVar10;
    ulong uVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    ulong *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar17 = *(arg1 + 0x28);
    if (iVar17 == 0) {
        return 0xffffffed;
    }
    iVar1 = iVar17 + 0x108;
    uVar11 = _raw_spin_lock_irqsave(iVar1);
    if ((*(iVar17 + 0x10c) == 0) || (iVar16 = *(iVar17 + 0xd8), iVar16 == 0)) goto code_r0x08001d58;
    puVar2 = iVar17 + 0xe8;
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar11);
        _dev_err(**(iVar17 + 0x110) + 0x78,"%s: no requests available\n","usb_diag_read");
        return 0xfffffff5;
    }
    piVar14 = *puVar2;
    uVar12 = __list_del_entry_valid(piVar14);
    if ((uVar12 & 1) != 0) {
        iVar4 = *piVar14;
        piVar5 = piVar14[1];
        *(iVar4 + 8) = piVar5;
        *piVar5 = iVar4;
    }
    puVar3 = iVar17 + 0x120;
    *piVar14 = -0x2152ffffffffff00;
    piVar14[1] = -0x2152fffffffffede;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar7 = *puVar3;
        cVar8 = '\x01';
        bVar9 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
            *puVar3 = uVar7 + 1;
            cVar8 = ExclusiveMonitorsStatus();
        }
    } while (cVar8 != '\0');
    if (uVar7 == 0) {
        uVar13 = 2;
code_r0x08001e90:
        refcount_warn_saturate(puVar3,uVar13);
    }
    else if ((uVar7 + 1 | uVar7) < 0) {
        uVar13 = 1;
        goto code_r0x08001e90;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar11);
    piVar14[-8] = *arg2;
    uVar6 = *(arg2 + 8);
    piVar14[-1] = arg2;
    *(piVar14 + -7) = uVar6;
    if (iVar17 != *(arg1 + 0x28)) {
        usb_ep_free_request();
        uVar12 = refcount_dec_and_lock(puVar3,iVar1);
        if ((uVar12 & 1) == 0) {
            return 0xfffffffb;
        }
        _raw_spin_unlock(iVar17 + 0x108);
        kfree(iVar17);
        return 0xfffffffb;
    }
    uVar11 = usb_ep_queue(iVar16,piVar14 + -8,0xa20);
    if (uVar11 == 0) {
        return uVar11;
    }
    uVar11 = _raw_spin_lock_irqsave(iVar1);
    puVar15 = *(iVar17 + 0xf0);
    uVar12 = __list_add_valid(piVar14,puVar15,puVar2);
    if ((uVar12 & 1) != 0) {
        *(iVar17 + 0xf0) = piVar14;
        *piVar14 = puVar2;
        piVar14[1] = puVar15;
        *puVar15 = piVar14;
    }
    iVar10 = ___ratelimit(obj.usb_diag_read.rl,"usb_diag_read");
    if (iVar10 != 0) {
        _dev_err(**(iVar17 + 0x110) + 0x78,"%s: cannot queue read request\n","usb_diag_read");
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar7 = *puVar3;
        cVar8 = '\x01';
        bVar9 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
            *puVar3 = uVar7 - 1;
            cVar8 = ExclusiveMonitorsStatus();
        }
    } while (cVar8 != '\0');
    if (uVar7 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(iVar17 + 0x108);
        kfree(iVar17);
        daif = uVar11;
        return 0xfffffffb;
    }
    if (uVar7 < 1) {
        refcount_warn_saturate(puVar3,3);
    }
code_r0x08001d58:
    _raw_spin_unlock_irqrestore(iVar1,uVar11);
    return 0xfffffffb;
}


// ===== sym.diag_context_release @ 0x08001f0c (size 60) =====

void sym.diag_context_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_unlock(arg1 + -0x18);
    kfree(arg1 + -0x120);
    return;
}


// ===== sym.usb_diag_write @ 0x08001f48 (size 760) =====

ulong sym.usb_diag_write(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    uint32_t uVar7;
    char cVar8;
    bool bVar9;
    int iVar10;
    ulong uVar11;
    uint64_t uVar12;
    ulong uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    ulong *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar17 = *(arg1 + 0x28);
    if (iVar17 == 0) {
        return 0xffffffed;
    }
    iVar1 = iVar17 + 0x108;
    uVar11 = _raw_spin_lock_irqsave(iVar1);
    if ((*(iVar17 + 0x10c) == 0) || (iVar16 = *(iVar17 + 0xe0), iVar16 == 0)) goto code_r0x0800206c;
    puVar2 = iVar17 + 0xf8;
    if (puVar2 == *puVar2) {
        _raw_spin_unlock_irqrestore(iVar1,uVar11);
        _dev_err(**(iVar17 + 0x110) + 0x78,"%s: no requests available\n","usb_diag_write");
        return 0xfffffff5;
    }
    piVar14 = *puVar2;
    uVar12 = __list_del_entry_valid(piVar14);
    if ((uVar12 & 1) != 0) {
        iVar4 = *piVar14;
        piVar5 = piVar14[1];
        *(iVar4 + 8) = piVar5;
        *piVar5 = iVar4;
    }
    puVar3 = iVar17 + 0x120;
    *piVar14 = -0x2152ffffffffff00;
    piVar14[1] = -0x2152fffffffffede;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar7 = *puVar3;
        cVar8 = '\x01';
        bVar9 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
            *puVar3 = uVar7 + 1;
            cVar8 = ExclusiveMonitorsStatus();
        }
    } while (cVar8 != '\0');
    if (uVar7 == 0) {
        uVar13 = 2;
code_r0x080021c4:
        refcount_warn_saturate(puVar3,uVar13);
    }
    else if ((uVar7 + 1 | uVar7) < 0) {
        uVar13 = 1;
        goto code_r0x080021c4;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar11);
    piVar14[-8] = *arg2;
    uVar6 = *(arg2 + 8);
    piVar14[-1] = arg2;
    *(piVar14 + -7) = uVar6;
    if (iVar17 != *(arg1 + 0x28)) {
        usb_ep_free_request(iVar16,piVar14 + -8);
        uVar12 = refcount_dec_and_lock(puVar3,iVar1);
        if ((uVar12 & 1) == 0) {
            return 0xfffffffb;
        }
        _raw_spin_unlock(iVar17 + 0x108);
        kfree(iVar17);
        return 0xfffffffb;
    }
    *(iVar17 + 0x138) = *(iVar17 + 0x138) + 1;
    uVar11 = usb_ep_queue(iVar16,piVar14 + -8,0xa20);
    if (uVar11 == 0) {
        return uVar11;
    }
    uVar11 = _raw_spin_lock_irqsave(iVar1);
    puVar15 = *(iVar17 + 0x100);
    uVar12 = __list_add_valid(piVar14,puVar15,puVar2);
    if ((uVar12 & 1) != 0) {
        *(iVar17 + 0x100) = piVar14;
        *piVar14 = puVar2;
        piVar14[1] = puVar15;
        *puVar15 = piVar14;
    }
    *(iVar17 + 0x138) = *(iVar17 + 0x138) + -1;
    iVar10 = ___ratelimit(obj.usb_diag_write.rl,"usb_diag_write");
    if (iVar10 != 0) {
        _dev_err(**(iVar17 + 0x110) + 0x78,"%s: cannot queue read request\n","usb_diag_write");
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar7 = *puVar3;
        cVar8 = '\x01';
        bVar9 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
            *puVar3 = uVar7 - 1;
            cVar8 = ExclusiveMonitorsStatus();
        }
    } while (cVar8 != '\0');
    if (uVar7 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(iVar17 + 0x108);
        kfree(iVar17);
        daif = uVar11;
        return 0xfffffffb;
    }
    if (uVar7 < 1) {
        refcount_warn_saturate(puVar3,3);
    }
code_r0x0800206c:
    _raw_spin_unlock_irqrestore(iVar1,uVar11);
    return 0xfffffffb;
}


// ===== sym.debug_read_stats @ 0x08002240 (size 276) =====

void sym.debug_read_stats(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.ch_lock == obj.ch_lock) {
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        pcVar5 = _obj.ch_lock;
        do {
            iVar3 = *(pcVar5 + 0x20);
            if (iVar3 != 0) {
                uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x108);
                iVar1 = scnprintf(obj.debug_buffer + iVar4,0x1000 - iVar4,
                                  "---Name: %s---\nendpoints: %s, %s\ndpkts_tolaptop: %lu\ndpkts_tomodem:  %lu\npkts_tolaptop_pending: %u\n"
                                  ,*(pcVar5 + -8),*(*(iVar3 + 0xe0) + 8),*(*(iVar3 + 0xd8) + 8),*(iVar3 + 0x128),
                                  *(iVar3 + 0x130),*(iVar3 + 0x138));
                iVar4 = iVar1 + iVar4;
                _raw_spin_unlock_irqrestore(iVar3 + 0x108,uVar2);
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.ch_lock);
    }
    simple_read_from_buffer(arg2,arg3,arg4,obj.debug_buffer,iVar4);
    return;
}


// ===== sym.debug_reset_stats @ 0x08002354 (size 136) =====

int64_t sym.debug_reset_stats(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (pcVar2 = _obj.ch_lock; pcVar2 != obj.ch_lock; pcVar2 = *pcVar2) {
        iVar3 = *(pcVar2 + 0x20);
        if (iVar3 != 0) {
            uVar1 = _raw_spin_lock_irqsave(noname_1,iVar3 + 0x108);
            *(iVar3 + 0x128) = 0;
            *(iVar3 + 0x130) = 0;
            *(iVar3 + 0x138) = 0;
            noname_1 = _raw_spin_unlock_irqrestore(iVar3 + 0x108,uVar1);
        }
    }
    return arg1;
}


// ===== sym.debug_open @ 0x080023dc (size 16) =====

ulong sym.debug_open(int64_t arg1)

{
    return 0;
}


// ===== sym.diag_alloc_inst @ 0x080023ec (size 120) =====

int64_t sym.diag_alloc_inst(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x150);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.diag_set_inst_name.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        *(iVar1 + 0xb0) = sym.diag_free_inst.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
        config_group_init_type_name(iVar1,0x8000699,obj.diag_func_type);
    }
    return iVar1;
}


// ===== sym.diag_alloc @ 0x08002464 (size 456) =====

ulong * sym.diag_alloc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    code *pcVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 0xb8);
    for (pcVar9 = _obj.ch_lock; pcVar9 != obj.ch_lock; pcVar9 = *pcVar9) {
        pcVar5 = pcVar9 + -8;
        iVar4 = strcmp(uVar8,*pcVar5);
        if (iVar4 == 0) goto code_r0x08002550;
    }
    _printk(0x8000491,"diag_context_init");
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    pcVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    if (pcVar5 != NULL) {
        pcVar10 = pcVar5 + 8;
        *pcVar5 = uVar8;
        uVar8 = _raw_spin_lock_irqsave(obj.ch_lock);
        pcVar9 = _obj.diag_dev_list;
        uVar6 = __list_add_valid(pcVar10,_obj.diag_dev_list,obj.ch_lock);
        if ((uVar6 & 1) != 0) {
            _obj.diag_dev_list = pcVar10;
            *(pcVar5 + 8) = obj.ch_lock;
            *(pcVar5 + 0x10) = pcVar9;
            *pcVar9 = pcVar10;
        }
        _raw_spin_unlock_irqrestore(obj.ch_lock,uVar8);
code_r0x08002550:
        puVar7 = kmem_cache_alloc_trace(__raw_spin_lock_irqsave,0xdc0,0x150);
        piVar3 = _obj.usb_diag_read.rl;
        if (puVar7 != NULL) {
            piVar1 = puVar7 + 0x28;
            uVar6 = __list_add_valid(piVar1,_obj.usb_diag_read.rl,obj.diag_dev_list);
            if ((uVar6 & 1) != 0) {
                _obj.usb_diag_read.rl = piVar1;
                puVar7[0x28] = obj.diag_dev_list;
                puVar7[0x29] = piVar3;
                *piVar3 = piVar1;
            }
            puVar7[0x23] = pcVar5;
            uVar8 = *pcVar5;
            puVar7[9] = sym.diag_function_bind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[10] = sym.diag_function_unbind.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            *puVar7 = uVar8;
            puVar7[0xd] = sym.diag_function_set_alt.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[0xb] = sym.diag_free_func.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            puVar7[0xf] = sym.diag_function_disable.33d1317ee70240f11d7c2b8118384c9b.cfi_jt;
            *(puVar7 + 0x24) = 1;
            *(puVar7 + 0x21) = 0;
            puVar7[0x1d] = puVar7 + 0x1d;
            puVar7[0x1e] = puVar7 + 0x1d;
            puVar7[0x1f] = puVar7 + 0x1f;
            puVar7[0x20] = puVar7 + 0x1f;
            return puVar7;
        }
    }
    return 0xfffffffffffffff4;
}


// ===== sym.diag_set_inst_name @ 0x0800262c (size 116) =====

ulong sym.diag_set_inst_name(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = strlen(arg2);
    if (iVar1 + 1 < 0x29) {
        iVar3 = kstrndup(arg2,iVar1 + 1,0xcc0);
        if (iVar3 == 0) {
            uVar2 = 0xfffffff4;
        }
        else {
            uVar2 = 0;
            *(arg1 + 0xb8) = iVar3;
        }
    }
    else {
        uVar2 = 0xffffffdc;
    }
    return uVar2;
}


// ===== sym.diag_free_inst @ 0x080026a0 (size 60) =====

void sym.diag_free_inst(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 0xb8));
    kfree(arg1);
    return;
}


// ===== sym.diag_opts_release @ 0x080026dc (size 36) =====

void sym.diag_opts_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.diag_pid_show @ 0x08002700 (size 208) =====

int64_t sym.diag_pid_show(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t auStack_b8 [17];
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    auStack_b8[0xf] = 0;
    auStack_b8[0x10] = 0;
    auStack_b8[0xd] = 0;
    auStack_b8[0xe] = 0;
    auStack_b8[0xb] = 0;
    auStack_b8[0xc] = 0;
    auStack_b8[9] = 0;
    auStack_b8[10] = 0;
    auStack_b8[7] = 0;
    auStack_b8[8] = 0;
    auStack_b8[5] = 0;
    auStack_b8[6] = 0;
    auStack_b8[3] = 0;
    auStack_b8[4] = 0;
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    auStack_b8[0] = 0;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_show");
        iVar3 = -0x16;
    }
    else {
        __memcpy_fromio(auStack_b8,_segment.ehdr,4);
        in_x2 = 0x8000641;
        iVar2 = scnprintf(arg2,0x1000,0x8000641,auStack_b8[0] & 0xffffffff);
        iVar3 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18 = sym.diag_pid_store;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_store");
        in_x2 = 0;
    }
    return in_x2;
}


// ===== sym.diag_pid_store @ 0x080027d0 (size 76) =====

int64_t sym.diag_pid_store(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_pid_store");
        arg1 = 0;
    }
    return arg1;
}


// ===== sym.diag_serial_show @ 0x0800281c (size 220) =====

int64_t sym.diag_serial_show(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    int64_t *piVar6;
    ulong uVar7;
    ulong extraout_x1;
    int64_t iVar8;
    int64_t arg1_00;
    int64_t in_x2;
    int64_t *piVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    ulong *puVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint32_t auStack_238 [36];
    int64_t iStack_1a8;
    uchar **ppuStack_1a0;
    code *pcStack_198;
    uint uStack_16c;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_show");
        iVar4 = -0x16;
    }
    else {
        unaff_x20 = &uStack_b8 | 4;
        __memcpy_fromio(unaff_x20,_segment.ehdr + 4,0x80);
        in_x2 = 0x80006a8;
        iVar3 = scnprintf(arg2,0x1000,0x80006a8,unaff_x20);
        iVar4 = iVar3;
        unaff_x19 = arg2;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18 = sym.diag_serial_store;
    pcStack_d8 = sym.diag_serial_store;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    puStack_e0 = &stack0xffffffffffffffe0;
    uStack_d0 = unaff_x20;
    iStack_c8 = unaff_x19;
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_store");
        in_x2 = 0;
    }
    else {
        strscpy(&uStack_168,extraout_x1,0x80);
        puVar5 = strnchr(&uStack_168,0x80,10);
        if (puVar5 != NULL) {
            *puVar5 = 0;
        }
        __memcpy_toio(_segment.ehdr + 4,&uStack_168,0x80);
        uStack_16c = 0x61945374;
        __memcpy_toio(_segment.ehdr + 0x88,&uStack_16c,4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return in_x2;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_8_;
    *extraout_x18_00 = sym.diag_function_bind;
    pcStack_198 = sym.diag_function_bind;
    iVar4 = sp_el0;
    iStack_1a8 = *(iVar4 + 0x5e0);
    puVar11 = *(auVar12._0_8_ + 0x30);
    *(iVar8 + 0x110) = puVar11;
    ppuStack_1a0 = &puStack_e0;
    *0x80002ba = usb_interface_id();
    piVar6 = usb_ep_autoconfig(*puVar11,obj.fs_bulk_in_desc);
    if (piVar6 == NULL) {
code_r0x08002b68:
        iVar4 = 0xffffffed;
    }
    else {
        *(iVar8 + 0xe0) = piVar6;
        *piVar6 = iVar8;
        piVar6 = usb_ep_autoconfig(*puVar11,obj.fs_bulk_out_desc);
        if (piVar6 == NULL) goto code_r0x08002b68;
        *(iVar8 + 0xd8) = piVar6;
        *piVar6 = iVar8;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        iVar4 = usb_assign_descriptors(iVar8,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (iVar4 == 0) {
            if (_segment.ehdr + -0x140 == iVar8) {
                auStack_238[0x1f] = 0;
                auStack_238[0x20] = 0;
                iVar4 = *(iVar8 + 0x110);
                auStack_238[0x1d] = 0;
                auStack_238[0x1e] = 0;
                auStack_238[0x1b] = 0;
                auStack_238[0x1c] = 0;
                auStack_238[0x19] = 0;
                auStack_238[0x1a] = 0;
                auStack_238[0x17] = 0;
                auStack_238[0x18] = 0;
                auStack_238[0x15] = 0;
                auStack_238[0x16] = 0;
                auStack_238[0x13] = 0;
                auStack_238[0x14] = 0;
                auStack_238[0x11] = 0;
                auStack_238[0x12] = 0;
                auStack_238[0xf] = 0;
                auStack_238[0x10] = 0;
                auStack_238[0xd] = 0;
                auStack_238[0xe] = 0;
                auStack_238[0xb] = 0;
                auStack_238[0xc] = 0;
                auStack_238[9] = 0;
                auStack_238[10] = 0;
                auStack_238[7] = 0;
                auStack_238[8] = 0;
                auStack_238[5] = 0;
                auStack_238[6] = 0;
                auStack_238[3] = 0;
                auStack_238[4] = 0;
                auStack_238[1] = 0;
                auStack_238[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_238[0] = *(iVar4 + 0x43);
                        auStack_238[0x21] = 0x71432909;
                        auStack_238[0x22] = 0x61945374;
                        piVar6 = iVar4 + 0x60;
                        piVar9 = *piVar6;
                        if (piVar9 != piVar6) {
                            do {
                                pcVar10 = *(piVar9[2] + 8);
                                while ((pcVar10 != NULL && (piVar1 = pcVar10 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar10;
                                    pcVar10 = pcVar10 + 0x10;
                                    if (cVar2 == *(iVar4 + 0x49)) {
                                        strscpy(auStack_238 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar9 = *piVar9;
                            } while (piVar9 != piVar6);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_238,0x8c);
                    }
                }
            }
            iVar4 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(iVar8 + 0xd8) != NULL) {
        **(iVar8 + 0xd8) = 0;
    }
    if (*(iVar8 + 0xe0) != NULL) {
        **(iVar8 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1a8) {
        return iVar4;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18_01 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1_00);
    iVar4 = *(arg1_00 + 0x118);
    if ((iVar4 != 0) && (*(iVar4 + 0x28) == arg1_00)) {
        *(iVar4 + 0x28) = 0;
    }
    uVar7 = _raw_spin_lock_irqsave(arg1_00 + 0x108);
    sym.free_reqs(arg1_00);
    iVar4 = _raw_spin_unlock_irqrestore(arg1_00 + 0x108,uVar7);
    return iVar4;
}


// ===== sym.diag_serial_store @ 0x080028f8 (size 252) =====

int64_t sym.diag_serial_store(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    uchar *puVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong in_x1;
    int64_t iVar7;
    int64_t arg1_00;
    int64_t *piVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t auStack_178 [36];
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint uStack_ac;
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
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
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
    if (_segment.ehdr == 0) {
        _printk(0x800065f,"diag_serial_store");
        arg1 = 0;
    }
    else {
        strscpy(&uStack_a8,in_x1,0x80);
        puVar3 = strnchr(&uStack_a8,0x80,10);
        if (puVar3 != NULL) {
            *puVar3 = 0;
        }
        __memcpy_toio(_segment.ehdr + 4,&uStack_a8,0x80);
        uStack_ac = 0x61945374;
        __memcpy_toio(_segment.ehdr + 0x88,&uStack_ac,4);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg1;
    }
    auVar11 = __stack_chk_fail();
    iVar7 = auVar11._8_8_;
    *extraout_x18 = sym.diag_function_bind;
    pcStack_d8 = sym.diag_function_bind;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    puVar10 = *(auVar11._0_8_ + 0x30);
    *(iVar7 + 0x110) = puVar10;
    puStack_e0 = &stack0xffffffffffffffe0;
    *0x80002ba = usb_interface_id();
    piVar4 = usb_ep_autoconfig(*puVar10,obj.fs_bulk_in_desc);
    if (piVar4 == NULL) {
code_r0x08002b68:
        iVar5 = 0xffffffed;
    }
    else {
        *(iVar7 + 0xe0) = piVar4;
        *piVar4 = iVar7;
        piVar4 = usb_ep_autoconfig(*puVar10,obj.fs_bulk_out_desc);
        if (piVar4 == NULL) goto code_r0x08002b68;
        *(iVar7 + 0xd8) = piVar4;
        *piVar4 = iVar7;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        iVar5 = usb_assign_descriptors(iVar7,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (iVar5 == 0) {
            if (_segment.ehdr + -0x140 == iVar7) {
                auStack_178[0x1f] = 0;
                auStack_178[0x20] = 0;
                iVar5 = *(iVar7 + 0x110);
                auStack_178[0x1d] = 0;
                auStack_178[0x1e] = 0;
                auStack_178[0x1b] = 0;
                auStack_178[0x1c] = 0;
                auStack_178[0x19] = 0;
                auStack_178[0x1a] = 0;
                auStack_178[0x17] = 0;
                auStack_178[0x18] = 0;
                auStack_178[0x15] = 0;
                auStack_178[0x16] = 0;
                auStack_178[0x13] = 0;
                auStack_178[0x14] = 0;
                auStack_178[0x11] = 0;
                auStack_178[0x12] = 0;
                auStack_178[0xf] = 0;
                auStack_178[0x10] = 0;
                auStack_178[0xd] = 0;
                auStack_178[0xe] = 0;
                auStack_178[0xb] = 0;
                auStack_178[0xc] = 0;
                auStack_178[9] = 0;
                auStack_178[10] = 0;
                auStack_178[7] = 0;
                auStack_178[8] = 0;
                auStack_178[5] = 0;
                auStack_178[6] = 0;
                auStack_178[3] = 0;
                auStack_178[4] = 0;
                auStack_178[1] = 0;
                auStack_178[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_178[0] = *(iVar5 + 0x43);
                        auStack_178[0x21] = 0x71432909;
                        auStack_178[0x22] = 0x61945374;
                        piVar4 = iVar5 + 0x60;
                        piVar8 = *piVar4;
                        if (piVar8 != piVar4) {
                            do {
                                pcVar9 = *(piVar8[2] + 8);
                                while ((pcVar9 != NULL && (piVar1 = pcVar9 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar9;
                                    pcVar9 = pcVar9 + 0x10;
                                    if (cVar2 == *(iVar5 + 0x49)) {
                                        strscpy(auStack_178 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar8 = *piVar8;
                            } while (piVar8 != piVar4);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_178,0x8c);
                    }
                }
            }
            iVar5 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(iVar7 + 0xd8) != NULL) {
        **(iVar7 + 0xd8) = 0;
    }
    if (*(iVar7 + 0xe0) != NULL) {
        **(iVar7 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18_00 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1_00);
    iVar5 = *(arg1_00 + 0x118);
    if ((iVar5 != 0) && (*(iVar5 + 0x28) == arg1_00)) {
        *(iVar5 + 0x28) = 0;
    }
    uVar6 = _raw_spin_lock_irqsave(arg1_00 + 0x108);
    sym.free_reqs(arg1_00);
    iVar5 = _raw_spin_unlock_irqrestore(arg1_00 + 0x108,uVar6);
    return iVar5;
}


// ===== sym.diag_function_bind @ 0x080029f4 (size 536) =====

void sym.diag_function_bind(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t arg1_00;
    int64_t iVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    ulong unaff_x30;
    uint32_t auStack_c8 [36];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    puVar8 = *(arg1 + 0x30);
    *(arg2 + 0x110) = puVar8;
    *0x80002ba = usb_interface_id();
    piVar3 = usb_ep_autoconfig(*puVar8,obj.fs_bulk_in_desc);
    if (piVar3 == NULL) {
code_r0x08002b68:
        uVar4 = 0xffffffed;
    }
    else {
        *(arg2 + 0xe0) = piVar3;
        *piVar3 = arg2;
        piVar3 = usb_ep_autoconfig(*puVar8,obj.fs_bulk_out_desc);
        if (piVar3 == NULL) goto code_r0x08002b68;
        *(arg2 + 0xd8) = piVar3;
        *piVar3 = arg2;
        *0x80002d5 = *0x80002c3;
        *0x80002de = *0x80002cc;
        *0x80002e7 = *0x80002c3;
        *0x80002f0 = *0x80002cc;
        uVar4 = usb_assign_descriptors(arg2,obj.fs_diag_desc,obj.hs_diag_desc,obj.ss_diag_desc,obj.ss_diag_desc);
        if (uVar4 == 0) {
            if (_segment.ehdr + -0x140 == arg2) {
                auStack_c8[0x1f] = 0;
                auStack_c8[0x20] = 0;
                iVar5 = *(arg2 + 0x110);
                auStack_c8[0x1d] = 0;
                auStack_c8[0x1e] = 0;
                auStack_c8[0x1b] = 0;
                auStack_c8[0x1c] = 0;
                auStack_c8[0x19] = 0;
                auStack_c8[0x1a] = 0;
                auStack_c8[0x17] = 0;
                auStack_c8[0x18] = 0;
                auStack_c8[0x15] = 0;
                auStack_c8[0x16] = 0;
                auStack_c8[0x13] = 0;
                auStack_c8[0x14] = 0;
                auStack_c8[0x11] = 0;
                auStack_c8[0x12] = 0;
                auStack_c8[0xf] = 0;
                auStack_c8[0x10] = 0;
                auStack_c8[0xd] = 0;
                auStack_c8[0xe] = 0;
                auStack_c8[0xb] = 0;
                auStack_c8[0xc] = 0;
                auStack_c8[9] = 0;
                auStack_c8[10] = 0;
                auStack_c8[7] = 0;
                auStack_c8[8] = 0;
                auStack_c8[5] = 0;
                auStack_c8[6] = 0;
                auStack_c8[3] = 0;
                auStack_c8[4] = 0;
                auStack_c8[1] = 0;
                auStack_c8[2] = 0;
                if (*0x80002ba == '\0') {
                    if (_segment.ehdr != 0) {
                        auStack_c8[0] = *(iVar5 + 0x43);
                        auStack_c8[0x21] = 0x71432909;
                        auStack_c8[0x22] = 0x61945374;
                        piVar3 = iVar5 + 0x60;
                        piVar6 = *piVar3;
                        if (piVar6 != piVar3) {
                            do {
                                pcVar7 = *(piVar6[2] + 8);
                                while ((pcVar7 != NULL && (piVar1 = pcVar7 + 8, *piVar1 != 0))) {
                                    cVar2 = *pcVar7;
                                    pcVar7 = pcVar7 + 0x10;
                                    if (cVar2 == *(iVar5 + 0x49)) {
                                        strscpy(auStack_c8 | 4,*piVar1,0x80);
                                        goto code_r0x08002bc8;
                                    }
                                }
                                piVar6 = *piVar6;
                            } while (piVar6 != piVar3);
                        }
code_r0x08002bc8:
                        __memcpy_toio(_segment.ehdr,auStack_c8,0x8c);
                    }
                }
            }
            uVar4 = 0;
            goto code_r0x08002bd8;
        }
    }
    if (*(arg2 + 0xd8) != NULL) {
        **(arg2 + 0xd8) = 0;
    }
    if (*(arg2 + 0xe0) != NULL) {
        **(arg2 + 0xe0) = 0;
    }
code_r0x08002bd8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.diag_function_unbind;
    usb_free_all_descriptors(arg1_00);
    iVar5 = *(arg1_00 + 0x118);
    if ((iVar5 != 0) && (*(iVar5 + 0x28) == arg1_00)) {
        *(iVar5 + 0x28) = 0;
    }
    uVar4 = _raw_spin_lock_irqsave(arg1_00 + 0x108);
    sym.free_reqs(arg1_00);
    _raw_spin_unlock_irqrestore(arg1_00 + 0x108,uVar4);
    return;
}


// ===== sym.diag_function_unbind @ 0x08002c0c (size 120) =====

void sym.diag_function_unbind(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_free_all_descriptors(arg1);
    iVar2 = *(arg1 + 0x118);
    if ((iVar2 != 0) && (*(iVar2 + 0x28) == arg1)) {
        *(iVar2 + 0x28) = 0;
    }
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x108);
    sym.free_reqs(arg1);
    _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar1);
    return;
}


// ===== sym.diag_function_set_alt @ 0x08002c84 (size 384) =====

int sym.diag_function_set_alt(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(*(arg1 + 0x30) + 0x30);
    iVar1 = config_ep_by_speed(*puVar3,arg1,*(arg1 + 0xe0));
    if ((iVar1 == 0) && (iVar1 = config_ep_by_speed(*puVar3,arg1,*(arg1 + 0xd8)), iVar1 == 0)) {
        if (*(arg1 + 0x118) == 0) {
            iVar1 = -0x13;
        }
        else {
            *(*(arg1 + 0x118) + 0x28) = arg1;
            **(arg1 + 0xe0) = arg1;
            iVar1 = usb_ep_enable(*(arg1 + 0xe0));
            if (iVar1 == 0) {
                **(arg1 + 0xd8) = arg1;
                iVar1 = usb_ep_enable(*(arg1 + 0xd8));
                if (iVar1 == 0) {
                    *(arg1 + 0x138) = 0;
                    *(arg1 + 0x128) = 0;
                    *(arg1 + 0x130) = 0;
                    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x108);
                    *(arg1 + 0x10c) = 1;
                    _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar2);
                    pcVar4 = *(*(arg1 + 0x118) + 0x18);
                    iVar1 = 0;
                    if (pcVar4 != NULL) {
                        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar4,0x80003e0);
                        (*pcVar4)(*(*(arg1 + 0x118) + 0x20),0,0);
                        iVar1 = 0;
                    }
                }
                else {
                    _dev_err(**(arg1 + 0x110) + 0x78,"can\'t enable %s, result %d\n",*(*(arg1 + 0xd8) + 8),iVar1);
                    usb_ep_disable(*(arg1 + 0xe0));
                }
            }
            else {
                _dev_err(**(arg1 + 0x110) + 0x78,"can\'t enable %s, result %d\n",*(*(arg1 + 0xe0) + 8),iVar1);
            }
        }
    }
    else {
        iVar1 = -0x16;
        *(*(arg1 + 0xe0) + 0x38) = 0;
        *(*(arg1 + 0xd8) + 0x38) = 0;
    }
    return iVar1;
}


// ===== sym.diag_function_disable @ 0x08002e04 (size 184) =====

void sym.diag_function_disable(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x108);
    *(arg1 + 0x10c) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar1);
    if ((*(arg1 + 0x118) != 0) && (pcVar2 = *(*(arg1 + 0x118) + 0x18), pcVar2 != NULL)) {
        __cfi_slowpath_diag(0xa8ee91a6abc2318b,pcVar2,0x8000400);
        (*pcVar2)(*(*(arg1 + 0x118) + 0x20),1,0);
    }
    usb_ep_disable(*(arg1 + 0xe0));
    **(arg1 + 0xe0) = 0;
    usb_ep_disable(*(arg1 + 0xd8));
    **(arg1 + 0xd8) = 0;
    if (*(arg1 + 0x118) != 0) {
        *(*(arg1 + 0x118) + 0x28) = 0;
    }
    return;
}


// ===== sym.diag_free_func @ 0x08002ebc (size 260) =====

void sym.diag_free_func(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x108);
    uVar8 = __list_del_entry_valid(arg1 + 0x140);
    if ((uVar8 & 1) != 0) {
        iVar2 = *(arg1 + 0x140);
        piVar3 = *(arg1 + 0x148);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    piVar1 = arg1 + 0x120;
    *(arg1 + 0x140) = 0xdead000000000100;
    *(arg1 + 0x148) = 0xdead000000000122;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
        DataMemoryBarrier(2,1);
        _raw_spin_unlock(arg1 + 0x108);
        kfree(arg1);
        daif = uVar7;
    }
    else {
        if (iVar4 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x108,uVar7);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002fc0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003004

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
    //switch table (4 cases) at 0x8000420
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003018);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003088 (size 280) =====

int sym.init_module(void)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.diag_dev_list = obj.diag_dev_list;
    _obj.usb_diag_read.rl = obj.diag_dev_list;
    _segment.ehdr = debugfs_create_dir("usb_diag",0);
    if (((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) &&
       ((uVar2 = debugfs_create_file("status",0x124,_segment.ehdr,0,obj.debug_fdiag_ops), uVar2 == 0 ||
        (0xfffffffffffff000 < uVar2)))) {
        debugfs_remove(_segment.ehdr);
        _segment.ehdr = 0;
    }
    iVar1 = usb_function_register(obj.diagusb_func);
    if (iVar1 == 0) {
        iVar3 = of_find_compatible_node(0,0,"qcom,msm-imem-diag-dload");
        if ((iVar3 == 0) && (iVar3 = of_find_compatible_node(0,0,"qcom,android-usb"), iVar3 == 0)) {
            _printk(0x8000464);
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = of_iomap(iVar3,0);
        }
    }
    else {
        _printk(0x800058e,"diag_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080031a0 (size 224) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iounmap();
    }
    usb_function_unregister(obj.diagusb_func);
    debugfs_remove(_segment.ehdr);
    pcVar5 = _obj.ch_lock;
    if (_obj.ch_lock != obj.ch_lock) {
        do {
            pcVar6 = *pcVar5;
            uVar3 = _raw_spin_lock_irqsave(obj.ch_lock);
            if (*(pcVar5 + 0x18) == 0) {
                uVar4 = __list_del_entry_valid(pcVar5);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5 + -8);
            }
            _raw_spin_unlock_irqrestore(obj.ch_lock,uVar3);
            pcVar5 = pcVar6;
        } while (pcVar6 != obj.ch_lock);
    }
    return;
}

