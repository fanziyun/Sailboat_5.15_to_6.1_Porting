// decompiled from mhi_dev_uci by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 604) =====

//WARNING: Switch with 1 destination removed at 0x0800304c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.mhi_uci_poll.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
            }
            else if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.log_level_show.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
            }
            else {
                if (arg1 != -0x2648401b1c1d210c) goto code_r0x0800300c;
                pcVar2 = sym.mhi_uci_probe.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.mhi_uci_release.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
code_r0x08001240:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800300c;
            }
            if (arg1 == -0x890743871a4a53) {
                pcVar2 = sym.mhi_uci_ioctl.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x0800300c;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x67f3a51ad5c16f72) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.mhi_uci_read.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.mhi_uci_write.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
        }
        else {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800300c;
            pcVar2 = sym.log_level_store.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
        }
    }
    else if (arg1 < 0x791a5468d96d0f95) {
        if (arg1 == 0x67f3a51ad5c16f72) {
            pcVar2 = sym.mhi_status_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
        }
        else {
            if (arg1 != 0x6e9fb1c868c44dc4) goto code_r0x0800300c;
            pcVar2 = sym.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x791a5468d96d0f95) {
            pcVar2 = sym.mhi_ul_xfer_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt;
            goto code_r0x08001240;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800300c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800300c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003060);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001268 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        unregister_chrdev_region(_segment.ehdr << 0x14);
        _segment.ehdr = 0;
    }
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    mhi_driver_unregister(obj.mhi_uci_drv);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001270 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __register_chrdev(0,0,0x100,"mhi_uci",obj.mhidev_fops);
    if (-1 < iVar1) {
        *0x80002d8 = iVar1;
        *0x80002d0 = __class_create(obj.__this_module,"mhi_uci",obj.mhi_uci_init.__key);
        if (*0x80002d0 < 0xfffffffffffff001) {
            __mutex_init(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt,"&mhi_uci_drv.lock",
                         obj.mhi_uci_init.__key);
            _obj.mhi_uci_drv = obj.mhi_uci_drv;
            _reloc.mhi_uci_probe.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt = obj.mhi_uci_drv;
            iVar1 = __mhi_driver_register(obj.mhi_uci_drv,obj.__this_module);
            if (iVar1 != 0) {
                class_destroy(_segment.ehdr);
            }
        }
        else {
            iVar1 = -0x13;
        }
    }
    return iVar1;
}


// ===== sym.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x08001278 (size 8) =====

void sym.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(param_1 + 0xc0);
    if ((piVar9[0x2c] != 0) && (*(piVar9 + 0x2d) < 2)) {
        ipc_log_string(piVar9[0x2c],"%s[I][%s] Enter\n",0x8000a31,"mhi_uci_remove");
    }
    mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    piVar1 = piVar9 + 6;
    mutex_lock(piVar1);
    _raw_spin_lock_irq(piVar9 + 0x1d);
    _raw_spin_lock_irq(piVar9 + 0xf);
    *(piVar9 + 0x154) = 0;
    _raw_spin_unlock_irq(piVar9 + 0xf);
    _raw_spin_unlock_irq(piVar9 + 0x1d);
    __wake_up(piVar9 + 0x1a,3,1,0);
    __wake_up(piVar9 + 0xc,3,1,0);
    device_destroy(*0x80002d0,piVar9[2]);
    piVar9[3] = 0;
    uVar8 = __list_del_entry_valid(piVar9);
    if ((uVar8 & 1) != 0) {
        iVar3 = *piVar9;
        piVar4 = piVar9[1];
        *(iVar3 + 8) = piVar4;
        *piVar4 = iVar3;
    }
    *piVar9 = -0x2152ffffffffff00;
    piVar9[1] = -0x2152fffffffffede;
    sysfs_remove_group(param_1 + 0x28,obj.mhi_uci_group);
    if (piVar9[0x2a] == 0) {
        mutex_unlock(piVar1);
        uVar5 = *(piVar9 + 2);
        pcVar2 = obj.mhi_uci_init.__key + ((uVar5 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar2,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar7) {
                *pcVar2 = *pcVar2 & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        kfree(piVar9);
    }
    else {
        if ((piVar9[0x2c] != 0) && (*(piVar9 + 0x2d) < 2)) {
            ipc_log_string(piVar9[0x2c],"%s[I][%s] Exit\n",0x8000a31,"mhi_uci_remove");
        }
        mutex_unlock(piVar1);
    }
    mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    return;
}


// ===== sym.log_level_store.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x08001280 (size 8) =====

uchar * sym.log_level_store.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x98);
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,0,&uStack_2c);
    if (iVar2 < 0) {
        param_4 = 0xffffffffffffffea;
    }
    else if (iVar4 == 0) {
        param_4 = 0xfffffffffffffffb;
    }
    else {
        *(iVar4 + 0x168) = uStack_2c;
        if ((*(iVar4 + 0x160) != 0) && (uStack_2c < 2)) {
            ipc_log_string(*(iVar4 + 0x160),"%s[I][%s] IPC log level changed to: %s\n",0x8000a31,"log_level_store",
                           *(obj.mhi_uci_log_level_str + uStack_2c * 8));
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8003060);
        (*pcVar1)();
    }
    return param_4;
}


// ===== sym.log_level_show.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x08001288 (size 8) =====

int64_t sym.log_level_show.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x98) == 0) {
        iVar3 = -5;
    }
    else {
        uVar1 = *(*(param_1 + 0x98) + 0x168);
        if (uVar1 < 5) {
            pcVar4 = *(obj.mhi_uci_log_level_str + uVar1 * 8);
        }
        else {
            pcVar4 = "Mask all";
        }
        iVar2 = scnprintf(param_3,0x1000,"IPC log level begins from: %s\n",pcVar4);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.mhi_uci_probe.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x08001290 (size 8) =====

uint64_t sym.mhi_uci_probe.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(uint64_t param_1,code *param_2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *extraout_x8;
    code *pcVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t *unaff_x20;
    int64_t *unaff_x21;
    int64_t *unaff_x23;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    piVar6 = kmem_cache_alloc_trace(___mutex_init,0xdc0,0x170);
    if (piVar6 == NULL) {
        param_1 = 0xfffffff4;
    }
    else {
        unaff_x21 = piVar6 + 6;
        __mutex_init(unaff_x21,"&uci_dev->mutex",obj.mhi_uci_probe.__key);
        piVar6[4] = param_1;
        uVar9 = (~_segment.ehdr & 0xaaaaaaaaaaaaaaaa) >> 1 | (~_segment.ehdr & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = 0x40;
        if (_segment.ehdr != 0xffffffffffffffff) {
            uVar9 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        }
        unaff_x20 = piVar6;
        if (uVar9 < 0x40) {
            unaff_x23 = param_1 + 0x28;
            iVar8 = (*(param_1 + 0x88))[0xe];
            if (iVar8 == 0) {
                iVar8 = **(param_1 + 0x88);
            }
            snprintf(&uStack_88,0x20,"%s_pipe_%d",iVar8,*(param_1 + 0x3bc));
            mutex_lock(unaff_x21);
            mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
            uVar4 = *0x80002d0;
            uVar1 = uVar9 | *0x80002d8 << 0x14;
            *(piVar6 + 2) = uVar1;
            uVar7 = device_create(uVar4,unaff_x23,uVar1,piVar6,0x80004dc,&uStack_88);
            piVar6[3] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                pcVar10 = obj.mhi_uci_init.__key + (uVar9 >> 3 & 8);
                uVar9 = 1L << (uVar9 & 0x3f);
                goto code_r0x08002a8c;
            }
            mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
            mutex_unlock(unaff_x21);
            param_1 = *(piVar6 + 3);
            kfree(piVar6);
        }
        else {
            kfree(piVar6);
            param_1 = 0xffffffe4;
        }
    }
    while( true ) {
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        pcVar10 = extraout_x8;
        uVar9 = extraout_x9;
        piVar6 = unaff_x20;
code_r0x08002a8c:
        Hint_Prefetch(pcVar10,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar10,0x10);
            if (bVar3) {
                *pcVar10 = *pcVar10 | uVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar8 = *(param_1 + 0x98);
        if (iVar8 == 0) {
            iVar8 = *unaff_x23;
        }
        iVar8 = ipc_log_context_create(0x32,iVar8,0);
        piVar6[0x2c] = iVar8;
        *(piVar6 + 0x2d) = 2;
        iVar5 = sysfs_create_group(unaff_x23,obj.mhi_uci_group);
        if (iVar5 != 0) {
            _printk(0x8000541,"mhi_uci_probe");
            if ((piVar6[0x2c] != 0) && (*(piVar6 + 0x2d) < 3)) {
                ipc_log_string(piVar6[0x2c],"%s[E][%s] Failed to create MHI UCI sysfs group\n",0x8000a31,
                               "mhi_uci_probe");
            }
        }
        *(piVar6 + 0x1d) = 0;
        __mutex_init(piVar6 + 0x22,"&uci_chan->chan_lock",obj.mhi_uci_probe.__key);
        __init_waitqueue_head(piVar6 + 0x1a,"&uci_chan->wq",obj.mhi_uci_probe.__key);
        piVar6[0x1e] = piVar6 + 0x1e;
        piVar6[0x1f] = piVar6 + 0x1e;
        *(piVar6 + 0xf) = 0;
        __mutex_init(piVar6 + 0x14,"&uci_chan->chan_lock",obj.mhi_uci_probe.__key);
        __init_waitqueue_head(piVar6 + 0xc,"&uci_chan->wq",obj.mhi_uci_probe.__key);
        piVar6[0x10] = piVar6 + 0x10;
        piVar6[0x11] = piVar6 + 0x10;
        uVar9 = *(param_2 + 0x20);
        param_2 = obj.mhi_uci_drv;
        *(piVar6 + 0x154) = 1;
        *(param_1 + 0xc0) = piVar6;
        unaff_x23 = _obj.mhi_uci_drv;
        if (0xfffe < uVar9) {
            uVar9 = 0xffff;
        }
        piVar6[0x28] = uVar9;
        piVar6[0x29] = uVar9 - 0x20;
        uVar9 = __list_add_valid(piVar6,obj.mhi_uci_drv,unaff_x23);
        if ((uVar9 & 1) != 0) {
            unaff_x23[1] = piVar6;
            *piVar6 = unaff_x23;
            piVar6[1] = obj.mhi_uci_drv;
            _obj.mhi_uci_drv = piVar6;
        }
        mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
        mutex_unlock(unaff_x21);
        if ((piVar6[0x2c] != 0) && (*(piVar6 + 0x2d) < 2)) {
            ipc_log_string(piVar6[0x2c],"%s[I][%s] channel:%s successfully probed\n",0x8000a31,"mhi_uci_probe",
                           *(param_1 + 8));
        }
        param_1 = 0;
        unaff_x20 = piVar6;
    }
    return param_1;
}


// ===== sym.mhi_status_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x08001298 (size 8) =====

void sym.mhi_status_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_2 == 10) {
        *in_x18 = unaff_x30;
        iVar2 = *(param_1 + 0xc0);
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0xe8);
        *(iVar2 + 0x158) = *(param_1 + 0x3d0);
        _raw_spin_unlock_irqrestore(iVar2 + 0xe8,uVar1);
        __wake_up(iVar2 + 0xd0,3,1,0);
    }
    return;
}


// ===== sym.mhi_uci_poll.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012a0 (size 8) =====

uint32_t sym.mhi_uci_poll.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xd8);
    uVar2 = *(iVar5 + 0x20);
    if (param_2 != NULL) {
        pcVar4 = *param_2;
        if (iVar5 + 0xd0 != 0 && pcVar4 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x80003a0);
            (*pcVar4)(param_1,iVar5 + 0xd0,param_2);
            pcVar4 = *param_2;
        }
        if ((iVar5 + 0x60 != 0) && (pcVar4 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x80003a0);
            (*pcVar4)(param_1,iVar5 + 0x60,param_2);
        }
    }
    _raw_spin_lock_bh(iVar5 + 0xe8);
    if (*(iVar5 + 0x154) == '\0') {
        uVar3 = 8;
    }
    else {
        if ((iVar5 + 0xf0 == *(iVar5 + 0xf0)) && (*(iVar5 + 0x100) == 0)) {
            uVar3 = 0;
            iVar1 = *(iVar5 + 0x158);
        }
        else {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = 0x41;
            iVar1 = *(iVar5 + 0x158);
        }
        if (iVar1 != 0) {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = uVar3 | 2;
        }
    }
    _raw_spin_unlock_bh(iVar5 + 0xe8);
    _raw_spin_lock_bh(iVar5 + 0x78);
    if (*(iVar5 + 0x154) == '\0') {
        uVar3 = uVar3 | 8;
    }
    else {
        iVar1 = mhi_get_free_desc_count(uVar2,1);
        if (0 < iVar1) {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = uVar3 | 0x104;
        }
    }
    _raw_spin_unlock_bh(iVar5 + 0x78);
    if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) < 2)) {
        ipc_log_string(*(iVar5 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                       "mhi_uci_poll",uVar3);
    }
    return uVar3;
}


// ===== sym.mhi_ul_xfer_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012a8 (size 8) =====

void sym.mhi_ul_xfer_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xc0);
    if ((*(iVar1 + 0x160) != 0) && (*(iVar1 + 0x168) == 0)) {
        ipc_log_string(*(iVar1 + 0x160),"%s[D][%s] status:%d xfer_len:%zu\n",0x8000a31,"mhi_ul_xfer_cb",
                       *(param_2 + 0x14),param_2[1]);
    }
    kfree(*param_2);
    if (*(param_2 + 0x14) == 0) {
        __wake_up(iVar1 + 0x60,3,1,0);
    }
    return;
}


// ===== sym.mhi_dl_xfer_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012b0 (size 8) =====

void sym.mhi_dl_xfer_cb.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0xc0);
    if ((*(iVar6 + 0x160) != 0) && (*(iVar6 + 0x168) == 0)) {
        ipc_log_string(*(iVar6 + 0x160),"%s[D][%s] status:%d receive_len:%zu\n",0x8000a31,"mhi_dl_xfer_cb",
                       *(param_2 + 0x14),param_2[1]);
    }
    if (*(param_2 + 0x14) == -0x6b) {
        kfree(*param_2);
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(iVar6 + 0xe8);
        piVar2 = *param_2 + *(iVar6 + 0x148);
        *piVar2 = *param_2;
        piVar1 = piVar2 + 2;
        piVar2[1] = param_2[1];
        puVar5 = *(iVar6 + 0xf8);
        uVar4 = __list_add_valid(piVar1,puVar5,iVar6 + 0xf0);
        if ((uVar4 & 1) != 0) {
            *(iVar6 + 0xf8) = piVar1;
            *piVar1 = iVar6 + 0xf0;
            piVar2[3] = puVar5;
            *puVar5 = piVar1;
        }
        _raw_spin_unlock_irqrestore(iVar6 + 0xe8,uVar3);
        if (*(param_1 + 0x170) != 0) {
            pm_wakeup_dev_event(param_1 + 0x28,0,1);
        }
        __wake_up(iVar6 + 0xd0,3,1,0);
    }
    return;
}


// ===== sym.mhi_uci_release.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012b8 (size 8) =====

ulong sym.mhi_uci_release.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_2 + 0xd8);
    iVar1 = iVar11 + 0x30;
    mutex_lock(iVar1);
    iVar8 = *(iVar11 + 0x150) + -1;
    *(iVar11 + 0x150) = iVar8;
    if (iVar8 == 0) {
        if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
            ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] Last client left, closing node\n",0x8000a31,"mhi_uci_release"
                          );
        }
        if (*(iVar11 + 0x154) != '\0') {
            mhi_unprepare_from_transfer(*(iVar11 + 0x20));
        }
        piVar9 = *(iVar11 + 0xf0);
        while (piVar9 != iVar11 + 0xf0) {
            piVar12 = *piVar9;
            uVar10 = __list_del_entry_valid(piVar9);
            if ((uVar10 & 1) != 0) {
                iVar3 = *piVar9;
                piVar4 = piVar9[1];
                *(iVar3 + 8) = piVar4;
                *piVar4 = iVar3;
            }
            *piVar9 = -0x2152ffffffffff00;
            piVar9[1] = -0x2152fffffffffede;
            kfree(piVar9[-2]);
            piVar9 = piVar12;
        }
        if (*(iVar11 + 0x100) != NULL) {
            kfree(**(iVar11 + 0x100));
        }
        *(iVar11 + 0x100) = 0;
        if (*(iVar11 + 0x154) == '\0') {
            if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
                ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] Node is deleted, freeing dev node\n",0x8000a31,
                               "mhi_uci_release");
            }
            mutex_unlock(iVar1);
            uVar5 = *(iVar11 + 0x10);
            pcVar2 = obj.mhi_uci_init.__key + ((uVar5 & 0xfffc0) >> 3);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar7) {
                    *pcVar2 = *pcVar2 & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            kfree(iVar11);
            return 0;
        }
    }
    if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
        ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] exit: ref_count:%d\n",0x8000a31,"mhi_uci_release",
                       *(iVar11 + 0x150));
    }
    mutex_unlock(iVar1);
    return 0;
}


// ===== sym.mhi_uci_open.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012c0 (size 8) =====

int sym.mhi_uci_open.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    code *pcVar10;
    ulong uVar11;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    if (_obj.mhi_uci_drv != obj.mhi_uci_drv) {
        pcVar12 = _obj.mhi_uci_drv;
        do {
            if (*(pcVar12 + 0x10) == *(param_1 + 0x4c)) {
                if (pcVar12 != NULL) {
                    mutex_lock(pcVar12 + 0x30);
                    if (pcVar12[0x154] == 0x0) {
                        _printk(0x80008ff,"mhi_uci_open");
                        if ((*(pcVar12 + 0x160) == 0) || (2 < *(pcVar12 + 0x168))) {
                            iVar5 = -5;
                        }
                        else {
                            ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Node exist, but not in active state!\n",
                                           0x8000a31,"mhi_uci_open");
                            iVar5 = -5;
                        }
                        goto code_r0x0800205c;
                    }
                    iVar5 = *(pcVar12 + 0x150) + 1;
                    *(pcVar12 + 0x150) = iVar5;
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 2)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[I][%s] Node open, ref counts %u\n",0x8000a31,
                                       "mhi_uci_open");
                        iVar5 = *(pcVar12 + 0x150);
                    }
                    if (iVar5 != 1) goto code_r0x08002050;
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 2)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[I][%s] Starting channel\n",0x8000a31,"mhi_uci_open");
                    }
                    iVar5 = mhi_prepare_for_transfer(*(pcVar12 + 0x20),0);
                    if (iVar5 == 0) {
                        uVar11 = *(pcVar12 + 0x20);
                        iVar6 = mhi_get_free_desc_count(uVar11,2);
                        if (0 < iVar6) {
                            uVar1 = *(pcVar12 + 0x140);
                            iVar2 = *(pcVar12 + 0x148);
                            iVar9 = 0;
                            goto code_r0x08001fdc;
                        }
                        iVar5 = -5;
                        goto code_r0x080020b0;
                    }
                    _printk(0x8000637,"mhi_uci_open");
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 3)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Error starting transfer channels\n",0x8000a31,
                                       "mhi_uci_open");
                    }
                    *(pcVar12 + 0x150) = *(pcVar12 + 0x150) + -1;
                    goto code_r0x0800205c;
                }
                break;
            }
            pcVar12 = *pcVar12;
        } while (pcVar12 != obj.mhi_uci_drv);
    }
    iVar5 = -5;
    goto code_r0x0800206c;
code_r0x08002050:
    iVar5 = 0;
    *(param_2 + 0xd8) = pcVar12;
    goto code_r0x0800205c;
code_r0x08001fdc:
    iVar7 = __kmalloc(uVar1,0xcc0);
    if (iVar7 == 0) {
        iVar5 = -0xc;
        goto code_r0x080020b0;
    }
    *(iVar7 + iVar2) = iVar7;
    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) == 0)) {
        ipc_log_string(*(pcVar12 + 0x160),"%s[D][%s] Allocated buf %d of %d size %ld\n",0x8000a31,"mhi_queue_inbound"
                       ,iVar9,iVar6,iVar2);
    }
    iVar5 = mhi_queue_buf(uVar11,2,iVar7,iVar2,2);
    if (iVar5 == 0) {
        iVar9 = iVar9 + 1;
        if (iVar6 == iVar9) goto code_r0x08002050;
        goto code_r0x08001fdc;
    }
    kfree(iVar7);
    _printk(0x8000696,"mhi_queue_inbound",iVar9);
    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 3)) {
        ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Failed to queue buffer %d\n",0x8000a31,"mhi_queue_inbound",
                       iVar9);
    }
code_r0x080020b0:
    mhi_unprepare_from_transfer(*(pcVar12 + 0x20));
    pcVar4 = *(pcVar12 + 0xf0);
    while (pcVar12 + 0xf0 != pcVar4) {
        pcVar10 = *pcVar4;
        uVar8 = __list_del_entry_valid(pcVar4);
        if ((uVar8 & 1) != 0) {
            iVar2 = *pcVar4;
            piVar3 = *(pcVar4 + 8);
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *pcVar4 = -0x2152ffffffffff00;
        *(pcVar4 + 8) = -0x2152fffffffffede;
        kfree(*(pcVar4 + -0x10));
        pcVar4 = pcVar10;
    }
code_r0x0800205c:
    mutex_unlock(pcVar12 + 0x30);
code_r0x0800206c:
    mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    return iVar5;
}


// ===== sym.mhi_uci_read.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012c8 (size 8) =====

uint64_t sym.mhi_uci_read.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x21;
    int64_t unaff_x22;
    uint64_t uVar12;
    code *pcVar13;
    int64_t iVar14;
    uint64_t unaff_x24;
    ulong uVar15;
    int64_t iVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    int64_t unaff_x26;
    uint64_t *unaff_x27;
    int64_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    uint64_t *puStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if (param_2 == 0) {
        uVar10 = 0xffffffffffffffea;
        goto code_r0x0800175c;
    }
    unaff_x26 = *(param_1 + 0xd8);
    unaff_x21 = *(unaff_x26 + 0x20);
    uVar10 = param_3;
    if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
        uVar10 = 0x8000a31;
        ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Client provided buf len:%lu\n",0x8000a31,"mhi_uci_read",
                       param_3);
    }
    unaff_x19 = unaff_x26 + 0x110;
    mutex_lock(unaff_x19);
    unaff_x20 = unaff_x26 + 0xe8;
    _raw_spin_lock_bh(unaff_x20);
    unaff_x22 = param_2;
    if (*(unaff_x26 + 0x154) == '\0') {
        _raw_spin_unlock_bh(unaff_x20);
code_r0x08001514:
        unaff_x24 = 0xfffffe00;
        param_3 = uVar10;
    }
    else {
        unaff_x27 = *(unaff_x26 + 0x100);
        if (unaff_x27 == NULL) {
            unaff_x28 = unaff_x26 + 0xf0;
            if (unaff_x28 != *unaff_x28) {
code_r0x08001538:
                unaff_x27 = *(unaff_x26 + 0x100);
                if (unaff_x27 == NULL) {
                    unaff_x24 = 0xfffffffb;
                    piVar17 = *unaff_x28;
                    if ((unaff_x28 == piVar17) || (unaff_x27 = piVar17 + -2, unaff_x27 == NULL)) goto code_r0x080017f4;
                    uVar10 = __list_del_entry_valid(piVar17);
                    if ((uVar10 & 1) != 0) {
                        iVar7 = *piVar17;
                        piVar2 = piVar17[1];
                        *(iVar7 + 8) = piVar2;
                        *piVar2 = iVar7;
                    }
                    *piVar17 = -0x2152ffffffffff00;
                    piVar17[1] = -0x2152fffffffffede;
                    *(unaff_x26 + 0x100) = unaff_x27;
                    *(unaff_x26 + 0x108) = piVar17[-1];
                    if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                        ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Got pkt of size:%zu\n",0x8000a31,
                                       "mhi_uci_read");
                        unaff_x27 = *(unaff_x26 + 0x100);
                    }
                }
                goto code_r0x08001540;
            }
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] No data available to read waiting\n",0x8000a31,
                               "mhi_uci_read");
            }
            _raw_spin_unlock_bh(unaff_x20);
            if ((*(unaff_x26 + 0x154) != '\0') && (unaff_x28 == *unaff_x28)) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_90 = 0;
                init_wait_entry(&uStack_90,0);
                while( true ) {
                    uVar10 = 1;
                    iVar7 = prepare_to_wait_event(unaff_x26 + 0xd0,&uStack_90);
                    if ((*(unaff_x26 + 0x154) == '\0') || (unaff_x28 != *unaff_x28)) break;
                    if (iVar7 != 0) {
                        if (iVar7 != -0x200) goto code_r0x08001528;
                        if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 2)) {
                            uVar10 = 0x8000a31;
                            ipc_log_string(*(unaff_x26 + 0x160),"%s[I][%s] Exit signal caught for node\n",0x8000a31,
                                           "mhi_uci_read");
                        }
                        goto code_r0x08001514;
                    }
                    schedule();
                }
                finish_wait(unaff_x26 + 0xd0,&uStack_90);
            }
code_r0x08001528:
            _raw_spin_lock_bh(unaff_x20);
            if (*(unaff_x26 + 0x154) != '\0') goto code_r0x08001538;
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 2)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[I][%s] node is disabled\n",0x8000a31,"mhi_uci_read");
            }
            unaff_x24 = 0xfffffe00;
        }
        else {
code_r0x08001540:
            _raw_spin_unlock_bh(unaff_x20);
            uVar12 = *(unaff_x26 + 0x108);
            uVar10 = param_3;
            if (uVar12 <= param_3) {
                uVar10 = uVar12;
            }
            if (uVar10 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x80016a0);
                (*pcVar13)();
            }
            auVar19 = __check_object_size(*unaff_x27 + (unaff_x27[1] - uVar12),uVar10,1);
            param_3 = uVar10;
            uVar4 = sym._copy_to_user(param_2,auVar19,uVar10);
            unaff_x24 = uVar4;
            if (uVar4 != 0) goto code_r0x08001590;
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                param_3 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Copied %lu of %lu bytes\n",0x8000a31,"mhi_uci_read",
                               uVar10,*(unaff_x26 + 0x108));
            }
            iVar7 = *(unaff_x26 + 0x108) - uVar10;
            *(unaff_x26 + 0x108) = iVar7;
            if (iVar7 != 0) {
code_r0x08001724:
                if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                    param_3 = 0x8000a31;
                    ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Returning %lu bytes\n",0x8000a31,"mhi_uci_read",
                                   uVar10);
                }
                mutex_unlock(unaff_x19);
                goto code_r0x0800175c;
            }
            _raw_spin_lock_bh(unaff_x20);
            *(unaff_x26 + 0x100) = 0;
            if (*(unaff_x26 + 0x154) == '\0') {
                unaff_x24 = 0xfffffe00;
                uVar10 = param_3;
            }
            else {
                param_3 = *unaff_x27;
                uVar4 = mhi_queue_buf(unaff_x21,2,param_3,*(unaff_x26 + 0x148),2);
                if (uVar4 == 0) {
                    _raw_spin_unlock_bh(unaff_x20);
                    goto code_r0x08001724;
                }
                unaff_x24 = uVar4;
                uVar10 = param_3;
            }
            _printk(0x80009ef,"mhi_uci_read");
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 3)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[E][%s] Failed to recycle element\n",0x8000a31,"mhi_uci_read")
                ;
            }
            kfree(*unaff_x27);
        }
code_r0x080017f4:
        _raw_spin_unlock_bh(unaff_x20);
        param_3 = uVar10;
    }
code_r0x08001590:
    mutex_unlock(unaff_x19);
    uVar10 = unaff_x24;
code_r0x0800175c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    auVar19 = __stack_chk_fail();
    iStack_128 = auVar19._8_8_;
    *extraout_x18 = 0x8001804;
    uStack_e8 = 0x8001804;
    iVar7 = sp_el0;
    uVar12 = 0xffffffffffffffea;
    iStack_f8 = *(iVar7 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffa0;
    piStack_e0 = unaff_x28;
    puStack_d8 = unaff_x27;
    iStack_d0 = unaff_x26;
    uStack_c0 = unaff_x24;
    uStack_b8 = uVar10;
    iStack_b0 = unaff_x22;
    uStack_a8 = unaff_x21;
    iStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if ((iStack_128 != 0) && (param_3 != 0)) {
        iVar14 = *(auVar19._0_8_ + 0xd8);
        iVar7 = iVar14 + 0xa0;
        uVar15 = *(iVar14 + 0x20);
        mutex_lock(iVar7);
        iVar16 = iVar14 + 0x78;
        _raw_spin_lock_bh(iVar16);
        if (*(iVar14 + 0x154) == '\0') {
            _raw_spin_unlock_bh(iVar16);
code_r0x08001af8:
            iVar6 = -0x200;
code_r0x08001afc:
            mutex_unlock(iVar7);
            uVar12 = iVar6;
        }
        else {
            if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Enter: to xfer:%lu bytes\n",0x8000a31,"mhi_uci_write",
                               param_3);
            }
            uVar12 = 0;
            iVar1 = iVar14 + 0x60;
            do {
                _raw_spin_unlock_bh(iVar16);
                if (*(iVar14 + 0x154) == '\0') {
code_r0x08001a54:
                    if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) < 2)) {
                        ipc_log_string(*(iVar14 + 0x160),"%s[I][%s] Exit signal caught for node or not enabled\n",
                                       0x8000a31,"mhi_uci_write");
                    }
                    goto code_r0x08001af8;
                }
                iVar5 = mhi_get_free_desc_count(uVar15,1);
                if (iVar5 < 1) {
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_120 = 0;
                    init_wait_entry(&uStack_120,0);
                    iVar8 = prepare_to_wait_event(iVar1,&uStack_120,1);
                    cVar3 = *(iVar14 + 0x154);
                    while ((cVar3 != '\0' && (iVar5 = mhi_get_free_desc_count(uVar15,1), iVar5 < 1))) {
                        if (iVar8 != 0) {
                            if (iVar8 != -0x200) goto code_r0x08001974;
                            goto code_r0x08001a54;
                        }
                        schedule();
                        iVar8 = prepare_to_wait_event(iVar1,&uStack_120,1);
                        cVar3 = *(iVar14 + 0x154);
                    }
                    finish_wait(iVar1,&uStack_120);
                }
code_r0x08001974:
                if (*(iVar14 + 0x154) == '\0') goto code_r0x08001a54;
                uVar18 = *(iVar14 + 0x140);
                uVar10 = param_3;
                if (uVar18 <= param_3) {
                    uVar10 = uVar18;
                }
                iVar8 = __kmalloc(uVar10,0xcc0);
                if (iVar8 == 0) {
                    _printk(0x80007c3,"mhi_uci_write",uVar10);
                    if (*(iVar14 + 0x160) == 0) {
                        iVar6 = -0xc;
                    }
                    else {
                        if (*(iVar14 + 0x168) < 3) {
                            ipc_log_string(*(iVar14 + 0x160),"%s[E][%s] Failed to allocate memory %lu\n",0x8000a31,
                                           "mhi_uci_write",uVar10);
                        }
                        iVar6 = -0xc;
                    }
                    goto code_r0x08001afc;
                }
                if (uVar10 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x8001a30);
                    (*pcVar13)();
                }
                __check_object_size(iVar8,uVar10,0);
                iVar6 = sym._copy_from_user(iVar8,iStack_128,uVar10);
                if (iVar6 != 0) {
                    kfree(iVar8);
                    goto code_r0x08001afc;
                }
                _raw_spin_lock_bh(iVar16);
                if (*(iVar14 + 0x154) == '\0') {
                    iVar6 = -0x200;
code_r0x08001a98:
                    kfree(iVar8);
                    _raw_spin_unlock_bh(iVar16);
                    goto code_r0x08001afc;
                }
                uVar11 = 4;
                if (param_3 <= uVar18 || iVar5 < 2) {
                    uVar11 = 2;
                }
                iVar6 = mhi_queue_buf(uVar15,1,iVar8,uVar10,uVar11);
                if (iVar6 != 0) goto code_r0x08001a98;
                uVar12 = uVar10 + uVar12;
                param_3 = param_3 - uVar10;
                iStack_128 = iStack_128 + uVar10;
            } while (param_3 != 0);
            _raw_spin_unlock_bh(iVar16);
            mutex_unlock(iVar7);
            if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Exit: Number of bytes xferred:%lu\n",0x8000a31,
                               "mhi_uci_write",uVar12);
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_f8) {
        auVar19 = __stack_chk_fail();
        puVar9 = auVar19._8_8_;
        iVar7 = auVar19._0_8_;
        *extraout_x18_00 = sym.mhi_uci_poll;
        iVar16 = *(iVar7 + 0xd8);
        uVar15 = *(iVar16 + 0x20);
        if (puVar9 != NULL) {
            pcVar13 = *puVar9;
            if (iVar16 + 0xd0 != 0 && pcVar13 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar13,0x80003a0);
                (*pcVar13)(iVar7,iVar16 + 0xd0,puVar9);
                pcVar13 = *puVar9;
            }
            if ((iVar16 + 0x60 != 0) && (pcVar13 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar13,0x80003a0);
                (*pcVar13)(iVar7,iVar16 + 0x60,puVar9);
            }
        }
        _raw_spin_lock_bh(iVar16 + 0xe8);
        if (*(iVar16 + 0x154) == '\0') {
            uVar4 = 8;
        }
        else {
            if ((iVar16 + 0xf0 == *(iVar16 + 0xf0)) && (*(iVar16 + 0x100) == 0)) {
                uVar4 = 0;
                iVar5 = *(iVar16 + 0x158);
            }
            else {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll"
                                  );
                }
                uVar4 = 0x41;
                iVar5 = *(iVar16 + 0x158);
            }
            if (iVar5 != 0) {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
                }
                uVar4 = uVar4 | 2;
            }
        }
        _raw_spin_unlock_bh(iVar16 + 0xe8);
        _raw_spin_lock_bh(iVar16 + 0x78);
        if (*(iVar16 + 0x154) == '\0') {
            uVar4 = uVar4 | 8;
        }
        else {
            iVar5 = mhi_get_free_desc_count(uVar15,1);
            if (0 < iVar5) {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll")
                    ;
                }
                uVar4 = uVar4 | 0x104;
            }
        }
        _raw_spin_unlock_bh(iVar16 + 0x78);
        if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) < 2)) {
            ipc_log_string(*(iVar16 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                           "mhi_uci_poll",uVar4);
        }
        return uVar4;
    }
    return uVar12;
}


// ===== sym.mhi_uci_write.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012d0 (size 8) =====

uint64_t sym.mhi_uci_write.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    uint64_t arg3;
    char cVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar10 = 0xffffffffffffffea;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((param_2 != 0) && (param_3 != 0)) {
        iVar12 = *(param_1 + 0xd8);
        iVar6 = iVar12 + 0xa0;
        uVar13 = *(iVar12 + 0x20);
        mutex_lock(iVar6);
        iVar14 = iVar12 + 0x78;
        _raw_spin_lock_bh(iVar14);
        if (*(iVar12 + 0x154) == '\0') {
            _raw_spin_unlock_bh(iVar14);
code_r0x08001af8:
            iVar4 = -0x200;
code_r0x08001afc:
            mutex_unlock(iVar6);
            uVar10 = iVar4;
        }
        else {
            if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) == 0)) {
                ipc_log_string(*(iVar12 + 0x160),"%s[D][%s] Enter: to xfer:%lu bytes\n",0x8000a31,"mhi_uci_write",
                               param_3);
            }
            uVar10 = 0;
            iVar1 = iVar12 + 0x60;
            iStack_98 = param_2;
            do {
                _raw_spin_unlock_bh(iVar14);
                if (*(iVar12 + 0x154) == '\0') {
code_r0x08001a54:
                    if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) < 2)) {
                        ipc_log_string(*(iVar12 + 0x160),"%s[I][%s] Exit signal caught for node or not enabled\n",
                                       0x8000a31,"mhi_uci_write");
                    }
                    goto code_r0x08001af8;
                }
                iVar3 = mhi_get_free_desc_count(uVar13,1);
                if (iVar3 < 1) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_90,1);
                    cVar2 = *(iVar12 + 0x154);
                    while ((cVar2 != '\0' && (iVar3 = mhi_get_free_desc_count(uVar13,1), iVar3 < 1))) {
                        if (iVar5 != 0) {
                            if (iVar5 != -0x200) goto code_r0x08001974;
                            goto code_r0x08001a54;
                        }
                        schedule();
                        iVar5 = prepare_to_wait_event(iVar1,&uStack_90,1);
                        cVar2 = *(iVar12 + 0x154);
                    }
                    finish_wait(iVar1,&uStack_90);
                }
code_r0x08001974:
                if (*(iVar12 + 0x154) == '\0') goto code_r0x08001a54;
                uVar15 = *(iVar12 + 0x140);
                arg3 = param_3;
                if (uVar15 <= param_3) {
                    arg3 = uVar15;
                }
                iVar5 = __kmalloc(arg3,0xcc0);
                if (iVar5 == 0) {
                    _printk(0x80007c3,"mhi_uci_write",arg3);
                    if (*(iVar12 + 0x160) == 0) {
                        iVar4 = -0xc;
                    }
                    else {
                        if (*(iVar12 + 0x168) < 3) {
                            ipc_log_string(*(iVar12 + 0x160),"%s[E][%s] Failed to allocate memory %lu\n",0x8000a31,
                                           "mhi_uci_write",arg3);
                        }
                        iVar4 = -0xc;
                    }
                    goto code_r0x08001afc;
                }
                if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x800,0x8001a30);
                    (*pcVar11)();
                }
                __check_object_size(iVar5,arg3,0);
                iVar4 = sym._copy_from_user(iVar5,iStack_98,arg3);
                if (iVar4 != 0) {
                    kfree(iVar5);
                    goto code_r0x08001afc;
                }
                _raw_spin_lock_bh(iVar14);
                if (*(iVar12 + 0x154) == '\0') {
                    iVar4 = -0x200;
code_r0x08001a98:
                    kfree(iVar5);
                    _raw_spin_unlock_bh(iVar14);
                    goto code_r0x08001afc;
                }
                uVar8 = 4;
                if (param_3 <= uVar15 || iVar3 < 2) {
                    uVar8 = 2;
                }
                iVar4 = mhi_queue_buf(uVar13,1,iVar5,arg3,uVar8);
                if (iVar4 != 0) goto code_r0x08001a98;
                uVar10 = arg3 + uVar10;
                param_3 = param_3 - arg3;
                iStack_98 = iStack_98 + arg3;
            } while (param_3 != 0);
            _raw_spin_unlock_bh(iVar14);
            mutex_unlock(iVar6);
            if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) == 0)) {
                ipc_log_string(*(iVar12 + 0x160),"%s[D][%s] Exit: Number of bytes xferred:%lu\n",0x8000a31,
                               "mhi_uci_write",uVar10);
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        auVar16 = __stack_chk_fail();
        puVar7 = auVar16._8_8_;
        iVar6 = auVar16._0_8_;
        *extraout_x18 = sym.mhi_uci_poll;
        iVar14 = *(iVar6 + 0xd8);
        uVar13 = *(iVar14 + 0x20);
        if (puVar7 != NULL) {
            pcVar11 = *puVar7;
            if (iVar14 + 0xd0 != 0 && pcVar11 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x80003a0);
                (*pcVar11)(iVar6,iVar14 + 0xd0,puVar7);
                pcVar11 = *puVar7;
            }
            if ((iVar14 + 0x60 != 0) && (pcVar11 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x80003a0);
                (*pcVar11)(iVar6,iVar14 + 0x60,puVar7);
            }
        }
        _raw_spin_lock_bh(iVar14 + 0xe8);
        if (*(iVar14 + 0x154) == '\0') {
            uVar9 = 8;
        }
        else {
            if ((iVar14 + 0xf0 == *(iVar14 + 0xf0)) && (*(iVar14 + 0x100) == 0)) {
                uVar9 = 0;
                iVar3 = *(iVar14 + 0x158);
            }
            else {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll"
                                  );
                }
                uVar9 = 0x41;
                iVar3 = *(iVar14 + 0x158);
            }
            if (iVar3 != 0) {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
                }
                uVar9 = uVar9 | 2;
            }
        }
        _raw_spin_unlock_bh(iVar14 + 0xe8);
        _raw_spin_lock_bh(iVar14 + 0x78);
        if (*(iVar14 + 0x154) == '\0') {
            uVar9 = uVar9 | 8;
        }
        else {
            iVar3 = mhi_get_free_desc_count(uVar13,1);
            if (0 < iVar3) {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll")
                    ;
                }
                uVar9 = uVar9 | 0x104;
            }
        }
        _raw_spin_unlock_bh(iVar14 + 0x78);
        if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) < 2)) {
            ipc_log_string(*(iVar14 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                           "mhi_uci_poll",uVar9);
        }
        return uVar9;
    }
    return uVar10;
}


// ===== sym.mhi_uci_ioctl.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt @ 0x080012d8 (size 8) =====

uint64_t sym.mhi_uci_ioctl.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt(int64_t param_1,int param_2,ulong param_3)

{
    ulong *in_x18;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xd8);
    iVar1 = *(iVar3 + 0x20);
    mutex_lock(iVar3 + 0x30);
    if (param_2 == 0x5415) {
        _raw_spin_lock_bh(iVar3 + 0xe8);
        uVar2 = *(iVar3 + 0x158);
    }
    else {
        if (*(iVar3 + 0x154) == '\0') {
            uVar2 = 0xfffffffffffffdfd;
            goto code_r0x08001e78;
        }
        uVar2 = mhi_device_ioctl(iVar1,param_2,param_3);
        if (uVar2 != 0) goto code_r0x08001e78;
        _raw_spin_lock_bh(iVar3 + 0xe8);
        *(iVar3 + 0x158) = *(iVar1 + 0x3d0);
    }
    _raw_spin_unlock_bh(iVar3 + 0xe8);
code_r0x08001e78:
    mutex_unlock(iVar3 + 0x30);
    return uVar2;
}


// ===== sym.init_module @ 0x080012e0 (size 224) =====

int sym.init_module(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __register_chrdev(0,0,0x100,"mhi_uci",obj.mhidev_fops);
    if (-1 < iVar1) {
        *0x80002d8 = iVar1;
        *0x80002d0 = __class_create(obj.__this_module,"mhi_uci",obj.mhi_uci_init.__key);
        if (*0x80002d0 < 0xfffffffffffff001) {
            __mutex_init(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt,"&mhi_uci_drv.lock",
                         obj.mhi_uci_init.__key);
            _obj.mhi_uci_drv = obj.mhi_uci_drv;
            _reloc.mhi_uci_probe.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt = obj.mhi_uci_drv;
            iVar1 = __mhi_driver_register(obj.mhi_uci_drv,obj.__this_module);
            if (iVar1 != 0) {
                class_destroy(_segment.ehdr);
            }
        }
        else {
            iVar1 = -0x13;
        }
    }
    return iVar1;
}


// ===== sym.mhi_uci_read @ 0x080013c0 (size 1108) =====

uint64_t sym.mhi_uci_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x21;
    int64_t unaff_x22;
    uint64_t uVar12;
    code *pcVar13;
    int64_t iVar14;
    uint64_t unaff_x24;
    ulong uVar15;
    int64_t iVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    int64_t unaff_x26;
    uint64_t *unaff_x27;
    int64_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t iStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    uint64_t *puStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    if (arg2 == 0) {
        uVar10 = 0xffffffffffffffea;
        goto code_r0x0800175c;
    }
    unaff_x26 = *(arg1 + 0xd8);
    unaff_x21 = *(unaff_x26 + 0x20);
    uVar10 = arg3;
    if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
        uVar10 = 0x8000a31;
        ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Client provided buf len:%lu\n",0x8000a31,"mhi_uci_read",arg3)
        ;
    }
    unaff_x19 = unaff_x26 + 0x110;
    mutex_lock(unaff_x19);
    unaff_x20 = unaff_x26 + 0xe8;
    _raw_spin_lock_bh(unaff_x20);
    unaff_x22 = arg2;
    if (*(unaff_x26 + 0x154) == '\0') {
        _raw_spin_unlock_bh(unaff_x20);
code_r0x08001514:
        unaff_x24 = 0xfffffe00;
        arg3 = uVar10;
    }
    else {
        unaff_x27 = *(unaff_x26 + 0x100);
        if (unaff_x27 == NULL) {
            unaff_x28 = unaff_x26 + 0xf0;
            if (unaff_x28 != *unaff_x28) {
code_r0x08001538:
                unaff_x27 = *(unaff_x26 + 0x100);
                if (unaff_x27 == NULL) {
                    unaff_x24 = 0xfffffffb;
                    piVar17 = *unaff_x28;
                    if ((unaff_x28 == piVar17) || (unaff_x27 = piVar17 + -2, unaff_x27 == NULL)) goto code_r0x080017f4;
                    uVar10 = __list_del_entry_valid(piVar17);
                    if ((uVar10 & 1) != 0) {
                        iVar7 = *piVar17;
                        piVar2 = piVar17[1];
                        *(iVar7 + 8) = piVar2;
                        *piVar2 = iVar7;
                    }
                    *piVar17 = -0x2152ffffffffff00;
                    piVar17[1] = -0x2152fffffffffede;
                    *(unaff_x26 + 0x100) = unaff_x27;
                    *(unaff_x26 + 0x108) = piVar17[-1];
                    if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                        ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Got pkt of size:%zu\n",0x8000a31,
                                       "mhi_uci_read");
                        unaff_x27 = *(unaff_x26 + 0x100);
                    }
                }
                goto code_r0x08001540;
            }
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] No data available to read waiting\n",0x8000a31,
                               "mhi_uci_read");
            }
            _raw_spin_unlock_bh(unaff_x20);
            if ((*(unaff_x26 + 0x154) != '\0') && (unaff_x28 == *unaff_x28)) {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_90 = 0;
                init_wait_entry(&stack0xffffffffffffff70,0);
                while( true ) {
                    uVar10 = 1;
                    iVar7 = prepare_to_wait_event(unaff_x26 + 0xd0,&stack0xffffffffffffff70);
                    if ((*(unaff_x26 + 0x154) == '\0') || (unaff_x28 != *unaff_x28)) break;
                    if (iVar7 != 0) {
                        if (iVar7 != -0x200) goto code_r0x08001528;
                        if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 2)) {
                            uVar10 = 0x8000a31;
                            ipc_log_string(*(unaff_x26 + 0x160),"%s[I][%s] Exit signal caught for node\n",0x8000a31,
                                           "mhi_uci_read");
                        }
                        goto code_r0x08001514;
                    }
                    schedule();
                }
                finish_wait(unaff_x26 + 0xd0,&stack0xffffffffffffff70);
            }
code_r0x08001528:
            _raw_spin_lock_bh(unaff_x20);
            if (*(unaff_x26 + 0x154) != '\0') goto code_r0x08001538;
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 2)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[I][%s] node is disabled\n",0x8000a31,"mhi_uci_read");
            }
            unaff_x24 = 0xfffffe00;
        }
        else {
code_r0x08001540:
            _raw_spin_unlock_bh(unaff_x20);
            uVar12 = *(unaff_x26 + 0x108);
            uVar10 = arg3;
            if (uVar12 <= arg3) {
                uVar10 = uVar12;
            }
            if (uVar10 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x80016a0);
                (*pcVar13)();
            }
            auVar19 = __check_object_size(*unaff_x27 + (unaff_x27[1] - uVar12),uVar10,1);
            arg3 = uVar10;
            uVar4 = sym._copy_to_user(arg2,auVar19,uVar10);
            unaff_x24 = uVar4;
            if (uVar4 != 0) goto code_r0x08001590;
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                arg3 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Copied %lu of %lu bytes\n",0x8000a31,"mhi_uci_read",
                               uVar10,*(unaff_x26 + 0x108));
            }
            iVar7 = *(unaff_x26 + 0x108) - uVar10;
            *(unaff_x26 + 0x108) = iVar7;
            if (iVar7 != 0) {
code_r0x08001724:
                if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) == 0)) {
                    arg3 = 0x8000a31;
                    ipc_log_string(*(unaff_x26 + 0x160),"%s[D][%s] Returning %lu bytes\n",0x8000a31,"mhi_uci_read",
                                   uVar10);
                }
                mutex_unlock(unaff_x19);
                goto code_r0x0800175c;
            }
            _raw_spin_lock_bh(unaff_x20);
            *(unaff_x26 + 0x100) = 0;
            if (*(unaff_x26 + 0x154) == '\0') {
                unaff_x24 = 0xfffffe00;
                uVar10 = arg3;
            }
            else {
                arg3 = *unaff_x27;
                uVar4 = mhi_queue_buf(unaff_x21,2,arg3,*(unaff_x26 + 0x148),2);
                if (uVar4 == 0) {
                    _raw_spin_unlock_bh(unaff_x20);
                    goto code_r0x08001724;
                }
                unaff_x24 = uVar4;
                uVar10 = arg3;
            }
            _printk(0x80009ef,"mhi_uci_read");
            if ((*(unaff_x26 + 0x160) != 0) && (*(unaff_x26 + 0x168) < 3)) {
                uVar10 = 0x8000a31;
                ipc_log_string(*(unaff_x26 + 0x160),"%s[E][%s] Failed to recycle element\n",0x8000a31,"mhi_uci_read")
                ;
            }
            kfree(*unaff_x27);
        }
code_r0x080017f4:
        _raw_spin_unlock_bh(unaff_x20);
        arg3 = uVar10;
    }
code_r0x08001590:
    mutex_unlock(unaff_x19);
    uVar10 = unaff_x24;
code_r0x0800175c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    auVar19 = __stack_chk_fail();
    iStack_128 = auVar19._8_8_;
    *extraout_x18 = 0x8001804;
    uStack_e8 = 0x8001804;
    iVar7 = sp_el0;
    uVar12 = 0xffffffffffffffea;
    iStack_f8 = *(iVar7 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffa0;
    piStack_e0 = unaff_x28;
    puStack_d8 = unaff_x27;
    iStack_d0 = unaff_x26;
    uStack_c0 = unaff_x24;
    uStack_b8 = uVar10;
    iStack_b0 = unaff_x22;
    uStack_a8 = unaff_x21;
    iStack_a0 = unaff_x20;
    iStack_98 = unaff_x19;
    if ((iStack_128 != 0) && (arg3 != 0)) {
        iVar14 = *(auVar19._0_8_ + 0xd8);
        iVar7 = iVar14 + 0xa0;
        uVar15 = *(iVar14 + 0x20);
        mutex_lock(iVar7);
        iVar16 = iVar14 + 0x78;
        _raw_spin_lock_bh(iVar16);
        if (*(iVar14 + 0x154) == '\0') {
            _raw_spin_unlock_bh(iVar16);
code_r0x08001af8:
            iVar6 = -0x200;
code_r0x08001afc:
            mutex_unlock(iVar7);
            uVar12 = iVar6;
        }
        else {
            if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Enter: to xfer:%lu bytes\n",0x8000a31,"mhi_uci_write",
                               arg3);
            }
            uVar12 = 0;
            iVar1 = iVar14 + 0x60;
            do {
                _raw_spin_unlock_bh(iVar16);
                if (*(iVar14 + 0x154) == '\0') {
code_r0x08001a54:
                    if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) < 2)) {
                        ipc_log_string(*(iVar14 + 0x160),"%s[I][%s] Exit signal caught for node or not enabled\n",
                                       0x8000a31,"mhi_uci_write");
                    }
                    goto code_r0x08001af8;
                }
                iVar5 = mhi_get_free_desc_count(uVar15,1);
                if (iVar5 < 1) {
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_120 = 0;
                    init_wait_entry(&stack0xfffffffffffffee0,0);
                    iVar8 = prepare_to_wait_event(iVar1,&stack0xfffffffffffffee0,1);
                    cVar3 = *(iVar14 + 0x154);
                    while ((cVar3 != '\0' && (iVar5 = mhi_get_free_desc_count(uVar15,1), iVar5 < 1))) {
                        if (iVar8 != 0) {
                            if (iVar8 != -0x200) goto code_r0x08001974;
                            goto code_r0x08001a54;
                        }
                        schedule();
                        iVar8 = prepare_to_wait_event(iVar1,&stack0xfffffffffffffee0,1);
                        cVar3 = *(iVar14 + 0x154);
                    }
                    finish_wait(iVar1,&stack0xfffffffffffffee0);
                }
code_r0x08001974:
                if (*(iVar14 + 0x154) == '\0') goto code_r0x08001a54;
                uVar18 = *(iVar14 + 0x140);
                uVar10 = arg3;
                if (uVar18 <= arg3) {
                    uVar10 = uVar18;
                }
                iVar8 = __kmalloc(uVar10,0xcc0);
                if (iVar8 == 0) {
                    _printk(0x80007c3,"mhi_uci_write",uVar10);
                    if (*(iVar14 + 0x160) == 0) {
                        iVar6 = -0xc;
                    }
                    else {
                        if (*(iVar14 + 0x168) < 3) {
                            ipc_log_string(*(iVar14 + 0x160),"%s[E][%s] Failed to allocate memory %lu\n",0x8000a31,
                                           "mhi_uci_write",uVar10);
                        }
                        iVar6 = -0xc;
                    }
                    goto code_r0x08001afc;
                }
                if (uVar10 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x8001a30);
                    (*pcVar13)();
                }
                __check_object_size(iVar8,uVar10,0);
                iVar6 = sym._copy_from_user(iVar8,iStack_128,uVar10);
                if (iVar6 != 0) {
                    kfree(iVar8);
                    goto code_r0x08001afc;
                }
                _raw_spin_lock_bh(iVar16);
                if (*(iVar14 + 0x154) == '\0') {
                    iVar6 = -0x200;
code_r0x08001a98:
                    kfree(iVar8);
                    _raw_spin_unlock_bh(iVar16);
                    goto code_r0x08001afc;
                }
                uVar11 = 4;
                if (arg3 <= uVar18 || iVar5 < 2) {
                    uVar11 = 2;
                }
                iVar6 = mhi_queue_buf(uVar15,1,iVar8,uVar10,uVar11);
                if (iVar6 != 0) goto code_r0x08001a98;
                uVar12 = uVar10 + uVar12;
                arg3 = arg3 - uVar10;
                iStack_128 = iStack_128 + uVar10;
            } while (arg3 != 0);
            _raw_spin_unlock_bh(iVar16);
            mutex_unlock(iVar7);
            if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Exit: Number of bytes xferred:%lu\n",0x8000a31,
                               "mhi_uci_write",uVar12);
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_f8) {
        auVar19 = __stack_chk_fail();
        puVar9 = auVar19._8_8_;
        iVar7 = auVar19._0_8_;
        *extraout_x18_00 = sym.mhi_uci_poll;
        iVar16 = *(iVar7 + 0xd8);
        uVar15 = *(iVar16 + 0x20);
        if (puVar9 != NULL) {
            pcVar13 = *puVar9;
            if (iVar16 + 0xd0 != 0 && pcVar13 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar13,0x80003a0);
                (*pcVar13)(iVar7,iVar16 + 0xd0,puVar9);
                pcVar13 = *puVar9;
            }
            if ((iVar16 + 0x60 != 0) && (pcVar13 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar13,0x80003a0);
                (*pcVar13)(iVar7,iVar16 + 0x60,puVar9);
            }
        }
        _raw_spin_lock_bh(iVar16 + 0xe8);
        if (*(iVar16 + 0x154) == '\0') {
            uVar4 = 8;
        }
        else {
            if ((iVar16 + 0xf0 == *(iVar16 + 0xf0)) && (*(iVar16 + 0x100) == 0)) {
                uVar4 = 0;
                iVar5 = *(iVar16 + 0x158);
            }
            else {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll"
                                  );
                }
                uVar4 = 0x41;
                iVar5 = *(iVar16 + 0x158);
            }
            if (iVar5 != 0) {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
                }
                uVar4 = uVar4 | 2;
            }
        }
        _raw_spin_unlock_bh(iVar16 + 0xe8);
        _raw_spin_lock_bh(iVar16 + 0x78);
        if (*(iVar16 + 0x154) == '\0') {
            uVar4 = uVar4 | 8;
        }
        else {
            iVar5 = mhi_get_free_desc_count(uVar15,1);
            if (0 < iVar5) {
                if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) == 0)) {
                    ipc_log_string(*(iVar16 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll")
                    ;
                }
                uVar4 = uVar4 | 0x104;
            }
        }
        _raw_spin_unlock_bh(iVar16 + 0x78);
        if ((*(iVar16 + 0x160) != 0) && (*(iVar16 + 0x168) < 2)) {
            ipc_log_string(*(iVar16 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                           "mhi_uci_poll",uVar4);
        }
        return uVar4;
    }
    return uVar12;
}


// ===== sym.mhi_uci_write @ 0x08001814 (size 924) =====

uint64_t sym.mhi_uci_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t arg3_00;
    char cVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint64_t uVar10;
    code *pcVar11;
    int64_t iVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar10 = 0xffffffffffffffea;
    iStack_68 = *(iVar6 + 0x5e0);
    if ((arg2 != 0) && (arg3 != 0)) {
        iVar12 = *(arg1 + 0xd8);
        iVar6 = iVar12 + 0xa0;
        uVar13 = *(iVar12 + 0x20);
        mutex_lock(iVar6);
        iVar14 = iVar12 + 0x78;
        _raw_spin_lock_bh(iVar14);
        if (*(iVar12 + 0x154) == '\0') {
            _raw_spin_unlock_bh(iVar14);
code_r0x08001af8:
            iVar4 = -0x200;
code_r0x08001afc:
            mutex_unlock(iVar6);
            uVar10 = iVar4;
        }
        else {
            if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) == 0)) {
                ipc_log_string(*(iVar12 + 0x160),"%s[D][%s] Enter: to xfer:%lu bytes\n",0x8000a31,"mhi_uci_write",
                               arg3);
            }
            uVar10 = 0;
            iVar1 = iVar12 + 0x60;
            iStack_98 = arg2;
            do {
                _raw_spin_unlock_bh(iVar14);
                if (*(iVar12 + 0x154) == '\0') {
code_r0x08001a54:
                    if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) < 2)) {
                        ipc_log_string(*(iVar12 + 0x160),"%s[I][%s] Exit signal caught for node or not enabled\n",
                                       0x8000a31,"mhi_uci_write");
                    }
                    goto code_r0x08001af8;
                }
                iVar3 = mhi_get_free_desc_count(uVar13,1);
                if (iVar3 < 1) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    iVar5 = prepare_to_wait_event(iVar1,&uStack_90,1);
                    cVar2 = *(iVar12 + 0x154);
                    while ((cVar2 != '\0' && (iVar3 = mhi_get_free_desc_count(uVar13,1), iVar3 < 1))) {
                        if (iVar5 != 0) {
                            if (iVar5 != -0x200) goto code_r0x08001974;
                            goto code_r0x08001a54;
                        }
                        schedule();
                        iVar5 = prepare_to_wait_event(iVar1,&uStack_90,1);
                        cVar2 = *(iVar12 + 0x154);
                    }
                    finish_wait(iVar1,&uStack_90);
                }
code_r0x08001974:
                if (*(iVar12 + 0x154) == '\0') goto code_r0x08001a54;
                uVar15 = *(iVar12 + 0x140);
                arg3_00 = arg3;
                if (uVar15 <= arg3) {
                    arg3_00 = uVar15;
                }
                iVar5 = __kmalloc(arg3_00,0xcc0);
                if (iVar5 == 0) {
                    _printk(0x80007c3,"mhi_uci_write",arg3_00);
                    if (*(iVar12 + 0x160) == 0) {
                        iVar4 = -0xc;
                    }
                    else {
                        if (*(iVar12 + 0x168) < 3) {
                            ipc_log_string(*(iVar12 + 0x160),"%s[E][%s] Failed to allocate memory %lu\n",0x8000a31,
                                           "mhi_uci_write",arg3_00);
                        }
                        iVar4 = -0xc;
                    }
                    goto code_r0x08001afc;
                }
                if (arg3_00 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x800,0x8001a30);
                    (*pcVar11)();
                }
                __check_object_size(iVar5,arg3_00,0);
                iVar4 = sym._copy_from_user(iVar5,iStack_98,arg3_00);
                if (iVar4 != 0) {
                    kfree(iVar5);
                    goto code_r0x08001afc;
                }
                _raw_spin_lock_bh(iVar14);
                if (*(iVar12 + 0x154) == '\0') {
                    iVar4 = -0x200;
code_r0x08001a98:
                    kfree(iVar5);
                    _raw_spin_unlock_bh(iVar14);
                    goto code_r0x08001afc;
                }
                uVar8 = 4;
                if (arg3 <= uVar15 || iVar3 < 2) {
                    uVar8 = 2;
                }
                iVar4 = mhi_queue_buf(uVar13,1,iVar5,arg3_00,uVar8);
                if (iVar4 != 0) goto code_r0x08001a98;
                uVar10 = arg3_00 + uVar10;
                arg3 = arg3 - arg3_00;
                iStack_98 = iStack_98 + arg3_00;
            } while (arg3 != 0);
            _raw_spin_unlock_bh(iVar14);
            mutex_unlock(iVar6);
            if ((*(iVar12 + 0x160) != 0) && (*(iVar12 + 0x168) == 0)) {
                ipc_log_string(*(iVar12 + 0x160),"%s[D][%s] Exit: Number of bytes xferred:%lu\n",0x8000a31,
                               "mhi_uci_write",uVar10);
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        auVar16 = __stack_chk_fail();
        puVar7 = auVar16._8_8_;
        iVar6 = auVar16._0_8_;
        *extraout_x18 = sym.mhi_uci_poll;
        iVar14 = *(iVar6 + 0xd8);
        uVar13 = *(iVar14 + 0x20);
        if (puVar7 != NULL) {
            pcVar11 = *puVar7;
            if (iVar14 + 0xd0 != 0 && pcVar11 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x80003a0);
                (*pcVar11)(iVar6,iVar14 + 0xd0,puVar7);
                pcVar11 = *puVar7;
            }
            if ((iVar14 + 0x60 != 0) && (pcVar11 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar11,0x80003a0);
                (*pcVar11)(iVar6,iVar14 + 0x60,puVar7);
            }
        }
        _raw_spin_lock_bh(iVar14 + 0xe8);
        if (*(iVar14 + 0x154) == '\0') {
            uVar9 = 8;
        }
        else {
            if ((iVar14 + 0xf0 == *(iVar14 + 0xf0)) && (*(iVar14 + 0x100) == 0)) {
                uVar9 = 0;
                iVar3 = *(iVar14 + 0x158);
            }
            else {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll"
                                  );
                }
                uVar9 = 0x41;
                iVar3 = *(iVar14 + 0x158);
            }
            if (iVar3 != 0) {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
                }
                uVar9 = uVar9 | 2;
            }
        }
        _raw_spin_unlock_bh(iVar14 + 0xe8);
        _raw_spin_lock_bh(iVar14 + 0x78);
        if (*(iVar14 + 0x154) == '\0') {
            uVar9 = uVar9 | 8;
        }
        else {
            iVar3 = mhi_get_free_desc_count(uVar13,1);
            if (0 < iVar3) {
                if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) == 0)) {
                    ipc_log_string(*(iVar14 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll")
                    ;
                }
                uVar9 = uVar9 | 0x104;
            }
        }
        _raw_spin_unlock_bh(iVar14 + 0x78);
        if ((*(iVar14 + 0x160) != 0) && (*(iVar14 + 0x168) < 2)) {
            ipc_log_string(*(iVar14 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                           "mhi_uci_poll",uVar9);
        }
        return uVar9;
    }
    return uVar10;
}


// ===== sym.mhi_uci_poll @ 0x08001bb0 (size 552) =====

uint32_t sym.mhi_uci_poll(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    uVar2 = *(iVar5 + 0x20);
    if (arg2 != 0) {
        pcVar4 = *arg2;
        if (iVar5 + 0xd0 != 0 && pcVar4 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x80003a0);
            (*pcVar4)(arg1,iVar5 + 0xd0,arg2);
            pcVar4 = *arg2;
        }
        if ((iVar5 + 0x60 != 0) && (pcVar4 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x80003a0);
            (*pcVar4)(arg1,iVar5 + 0x60,arg2);
        }
    }
    _raw_spin_lock_bh(iVar5 + 0xe8);
    if (*(iVar5 + 0x154) == '\0') {
        uVar3 = 8;
    }
    else {
        if ((iVar5 + 0xf0 == *(iVar5 + 0xf0)) && (*(iVar5 + 0x100) == 0)) {
            uVar3 = 0;
            iVar1 = *(iVar5 + 0x158);
        }
        else {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Client can read from node\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = 0x41;
            iVar1 = *(iVar5 + 0x158);
        }
        if (iVar1 != 0) {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Line status changed\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = uVar3 | 2;
        }
    }
    _raw_spin_unlock_bh(iVar5 + 0xe8);
    _raw_spin_lock_bh(iVar5 + 0x78);
    if (*(iVar5 + 0x154) == '\0') {
        uVar3 = uVar3 | 8;
    }
    else {
        iVar1 = mhi_get_free_desc_count(uVar2,1);
        if (0 < iVar1) {
            if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) == 0)) {
                ipc_log_string(*(iVar5 + 0x160),"%s[D][%s] Client can write to node\n",0x8000a31,"mhi_uci_poll");
            }
            uVar3 = uVar3 | 0x104;
        }
    }
    _raw_spin_unlock_bh(iVar5 + 0x78);
    if ((*(iVar5 + 0x160) != 0) && (*(iVar5 + 0x168) < 2)) {
        ipc_log_string(*(iVar5 + 0x160),"%s[I][%s] Client attempted to poll, returning mask 0x%x\n",0x8000a31,
                       "mhi_uci_poll",uVar3);
    }
    return uVar3;
}


// ===== sym.mhi_uci_ioctl @ 0x08001ddc (size 196) =====

uint64_t sym.mhi_uci_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    iVar1 = *(iVar3 + 0x20);
    mutex_lock(iVar3 + 0x30);
    if (arg2 == 0x5415) {
        _raw_spin_lock_bh(iVar3 + 0xe8);
        uVar2 = *(iVar3 + 0x158);
    }
    else {
        if (*(iVar3 + 0x154) == '\0') {
            uVar2 = 0xfffffffffffffdfd;
            goto code_r0x08001e78;
        }
        uVar2 = mhi_device_ioctl(iVar1,arg2 & 0xffffffff,arg3);
        if (uVar2 != 0) goto code_r0x08001e78;
        _raw_spin_lock_bh(iVar3 + 0xe8);
        *(iVar3 + 0x158) = *(iVar1 + 0x3d0);
    }
    _raw_spin_unlock_bh(iVar3 + 0xe8);
code_r0x08001e78:
    mutex_unlock(iVar3 + 0x30);
    return uVar2;
}


// ===== sym.mhi_uci_open @ 0x08001ea0 (size 884) =====

int sym.mhi_uci_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    code *pcVar10;
    ulong uVar11;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    if (_obj.mhi_uci_drv != obj.mhi_uci_drv) {
        pcVar12 = _obj.mhi_uci_drv;
        do {
            if (*(pcVar12 + 0x10) == *(arg1 + 0x4c)) {
                if (pcVar12 != NULL) {
                    mutex_lock(pcVar12 + 0x30);
                    if (pcVar12[0x154] == 0x0) {
                        _printk(0x80008ff,"mhi_uci_open");
                        if ((*(pcVar12 + 0x160) == 0) || (2 < *(pcVar12 + 0x168))) {
                            iVar5 = -5;
                        }
                        else {
                            ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Node exist, but not in active state!\n",
                                           0x8000a31,"mhi_uci_open");
                            iVar5 = -5;
                        }
                        goto code_r0x0800205c;
                    }
                    iVar5 = *(pcVar12 + 0x150) + 1;
                    *(pcVar12 + 0x150) = iVar5;
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 2)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[I][%s] Node open, ref counts %u\n",0x8000a31,
                                       "mhi_uci_open");
                        iVar5 = *(pcVar12 + 0x150);
                    }
                    if (iVar5 != 1) goto code_r0x08002050;
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 2)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[I][%s] Starting channel\n",0x8000a31,"mhi_uci_open");
                    }
                    iVar5 = mhi_prepare_for_transfer(*(pcVar12 + 0x20),0);
                    if (iVar5 == 0) {
                        uVar11 = *(pcVar12 + 0x20);
                        iVar6 = mhi_get_free_desc_count(uVar11,2);
                        if (0 < iVar6) {
                            uVar1 = *(pcVar12 + 0x140);
                            iVar2 = *(pcVar12 + 0x148);
                            iVar9 = 0;
                            goto code_r0x08001fdc;
                        }
                        iVar5 = -5;
                        goto code_r0x080020b0;
                    }
                    _printk(0x8000637,"mhi_uci_open");
                    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 3)) {
                        ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Error starting transfer channels\n",0x8000a31,
                                       "mhi_uci_open");
                    }
                    *(pcVar12 + 0x150) = *(pcVar12 + 0x150) + -1;
                    goto code_r0x0800205c;
                }
                break;
            }
            pcVar12 = *pcVar12;
        } while (pcVar12 != obj.mhi_uci_drv);
    }
    iVar5 = -5;
    goto code_r0x0800206c;
code_r0x08002050:
    iVar5 = 0;
    *(arg2 + 0xd8) = pcVar12;
    goto code_r0x0800205c;
code_r0x08001fdc:
    iVar7 = __kmalloc(uVar1,0xcc0);
    if (iVar7 == 0) {
        iVar5 = -0xc;
        goto code_r0x080020b0;
    }
    *(iVar7 + iVar2) = iVar7;
    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) == 0)) {
        ipc_log_string(*(pcVar12 + 0x160),"%s[D][%s] Allocated buf %d of %d size %ld\n",0x8000a31,"mhi_queue_inbound"
                       ,iVar9,iVar6,iVar2);
    }
    iVar5 = mhi_queue_buf(uVar11,2,iVar7,iVar2,2);
    if (iVar5 == 0) {
        iVar9 = iVar9 + 1;
        if (iVar6 == iVar9) goto code_r0x08002050;
        goto code_r0x08001fdc;
    }
    kfree(iVar7);
    _printk(0x8000696,"mhi_queue_inbound",iVar9);
    if ((*(pcVar12 + 0x160) != 0) && (*(pcVar12 + 0x168) < 3)) {
        ipc_log_string(*(pcVar12 + 0x160),"%s[E][%s] Failed to queue buffer %d\n",0x8000a31,"mhi_queue_inbound",
                       iVar9);
    }
code_r0x080020b0:
    mhi_unprepare_from_transfer(*(pcVar12 + 0x20));
    pcVar4 = *(pcVar12 + 0xf0);
    while (pcVar12 + 0xf0 != pcVar4) {
        pcVar10 = *pcVar4;
        uVar8 = __list_del_entry_valid(pcVar4);
        if ((uVar8 & 1) != 0) {
            iVar2 = *pcVar4;
            piVar3 = *(pcVar4 + 8);
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *pcVar4 = -0x2152ffffffffff00;
        *(pcVar4 + 8) = -0x2152fffffffffede;
        kfree(*(pcVar4 + -0x10));
        pcVar4 = pcVar10;
    }
code_r0x0800205c:
    mutex_unlock(pcVar12 + 0x30);
code_r0x0800206c:
    mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    return iVar5;
}


// ===== sym.mhi_uci_release @ 0x08002214 (size 476) =====

ulong sym.mhi_uci_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0xd8);
    iVar1 = iVar11 + 0x30;
    mutex_lock(iVar1);
    iVar8 = *(iVar11 + 0x150) + -1;
    *(iVar11 + 0x150) = iVar8;
    if (iVar8 == 0) {
        if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
            ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] Last client left, closing node\n",0x8000a31,"mhi_uci_release"
                          );
        }
        if (*(iVar11 + 0x154) != '\0') {
            mhi_unprepare_from_transfer(*(iVar11 + 0x20));
        }
        piVar9 = *(iVar11 + 0xf0);
        while (piVar9 != iVar11 + 0xf0) {
            piVar12 = *piVar9;
            uVar10 = __list_del_entry_valid(piVar9);
            if ((uVar10 & 1) != 0) {
                iVar3 = *piVar9;
                piVar4 = piVar9[1];
                *(iVar3 + 8) = piVar4;
                *piVar4 = iVar3;
            }
            *piVar9 = -0x2152ffffffffff00;
            piVar9[1] = -0x2152fffffffffede;
            kfree(piVar9[-2]);
            piVar9 = piVar12;
        }
        if (*(iVar11 + 0x100) != NULL) {
            kfree(**(iVar11 + 0x100));
        }
        *(iVar11 + 0x100) = 0;
        if (*(iVar11 + 0x154) == '\0') {
            if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
                ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] Node is deleted, freeing dev node\n",0x8000a31,
                               "mhi_uci_release");
            }
            mutex_unlock(iVar1);
            uVar5 = *(iVar11 + 0x10);
            pcVar2 = obj.mhi_uci_init.__key + ((uVar5 & 0xfffc0) >> 3);
            Hint_Prefetch(pcVar2,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar7) {
                    *pcVar2 = *pcVar2 & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            kfree(iVar11);
            return 0;
        }
    }
    if ((*(iVar11 + 0x160) != 0) && (*(iVar11 + 0x168) < 2)) {
        ipc_log_string(*(iVar11 + 0x160),"%s[I][%s] exit: ref_count:%d\n",0x8000a31,"mhi_uci_release",
                       *(iVar11 + 0x150));
    }
    mutex_unlock(iVar1);
    return 0;
}


// ===== sym._copy_to_user @ 0x080023f0 (size 312) =====

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
        if ((___register_chrdev >> 0x18 & 1) == 0) {
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
        if ((___register_chrdev >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x08002564 (size 376) =====

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
        if ((___register_chrdev >> 0x18 & 1) == 0) {
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
        if ((___register_chrdev >> 0x18 & 1) == 0) {
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


// ===== sym.mhi_uci_probe @ 0x08002718 (size 924) =====

uint64_t sym.mhi_uci_probe(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    code *extraout_x8;
    code *pcVar10;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t *unaff_x20;
    int64_t *unaff_x21;
    int64_t *unaff_x23;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    piVar6 = kmem_cache_alloc_trace(___mutex_init,0xdc0,0x170);
    if (piVar6 == NULL) {
        arg1 = 0xfffffff4;
    }
    else {
        unaff_x21 = piVar6 + 6;
        __mutex_init(unaff_x21,"&uci_dev->mutex",obj.mhi_uci_probe.__key);
        piVar6[4] = arg1;
        uVar9 = (~_segment.ehdr & 0xaaaaaaaaaaaaaaaa) >> 1 | (~_segment.ehdr & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = 0x40;
        if (_segment.ehdr != 0xffffffffffffffff) {
            uVar9 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        }
        unaff_x20 = piVar6;
        if (uVar9 < 0x40) {
            unaff_x23 = arg1 + 0x28;
            iVar8 = (*(arg1 + 0x88))[0xe];
            if (iVar8 == 0) {
                iVar8 = **(arg1 + 0x88);
            }
            snprintf(&uStack_88,0x20,"%s_pipe_%d",iVar8,*(arg1 + 0x3bc));
            mutex_lock(unaff_x21);
            mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
            uVar4 = *0x80002d0;
            uVar1 = uVar9 | *0x80002d8 << 0x14;
            *(piVar6 + 2) = uVar1;
            uVar7 = device_create(uVar4,unaff_x23,uVar1,piVar6,0x80004dc,&uStack_88);
            piVar6[3] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                pcVar10 = obj.mhi_uci_init.__key + (uVar9 >> 3 & 8);
                uVar9 = 1L << (uVar9 & 0x3f);
                goto code_r0x08002a8c;
            }
            mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
            mutex_unlock(unaff_x21);
            arg1 = *(piVar6 + 3);
            kfree(piVar6);
        }
        else {
            kfree(piVar6);
            arg1 = 0xffffffe4;
        }
    }
    while( true ) {
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
        pcVar10 = extraout_x8;
        uVar9 = extraout_x9;
        piVar6 = unaff_x20;
code_r0x08002a8c:
        Hint_Prefetch(pcVar10,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar10,0x10);
            if (bVar3) {
                *pcVar10 = *pcVar10 | uVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar8 = *(arg1 + 0x98);
        if (iVar8 == 0) {
            iVar8 = *unaff_x23;
        }
        iVar8 = ipc_log_context_create(0x32,iVar8,0);
        piVar6[0x2c] = iVar8;
        *(piVar6 + 0x2d) = 2;
        iVar5 = sysfs_create_group(unaff_x23,obj.mhi_uci_group);
        if (iVar5 != 0) {
            _printk(0x8000541,"mhi_uci_probe");
            if ((piVar6[0x2c] != 0) && (*(piVar6 + 0x2d) < 3)) {
                ipc_log_string(piVar6[0x2c],"%s[E][%s] Failed to create MHI UCI sysfs group\n",0x8000a31,
                               "mhi_uci_probe");
            }
        }
        *(piVar6 + 0x1d) = 0;
        __mutex_init(piVar6 + 0x22,"&uci_chan->chan_lock",obj.mhi_uci_probe.__key);
        __init_waitqueue_head(piVar6 + 0x1a,"&uci_chan->wq",obj.mhi_uci_probe.__key);
        piVar6[0x1e] = piVar6 + 0x1e;
        piVar6[0x1f] = piVar6 + 0x1e;
        *(piVar6 + 0xf) = 0;
        __mutex_init(piVar6 + 0x14,"&uci_chan->chan_lock",obj.mhi_uci_probe.__key);
        __init_waitqueue_head(piVar6 + 0xc,"&uci_chan->wq",obj.mhi_uci_probe.__key);
        piVar6[0x10] = piVar6 + 0x10;
        piVar6[0x11] = piVar6 + 0x10;
        uVar9 = *(arg2 + 0x20);
        *(piVar6 + 0x154) = 1;
        *(arg1 + 0xc0) = piVar6;
        unaff_x23 = _obj.mhi_uci_drv;
        if (0xfffe < uVar9) {
            uVar9 = 0xffff;
        }
        piVar6[0x28] = uVar9;
        piVar6[0x29] = uVar9 - 0x20;
        uVar9 = __list_add_valid(piVar6,obj.mhi_uci_drv,unaff_x23);
        if ((uVar9 & 1) != 0) {
            unaff_x23[1] = piVar6;
            *piVar6 = unaff_x23;
            piVar6[1] = obj.mhi_uci_drv;
            _obj.mhi_uci_drv = piVar6;
        }
        mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
        mutex_unlock(unaff_x21);
        if ((piVar6[0x2c] != 0) && (*(piVar6 + 0x2d) < 2)) {
            ipc_log_string(piVar6[0x2c],"%s[I][%s] channel:%s successfully probed\n",0x8000a31,"mhi_uci_probe",
                           *(arg1 + 8));
        }
        arg1 = 0;
        unaff_x20 = piVar6;
        arg2 = obj.mhi_uci_drv;
    }
    return arg1;
}


// ===== sym.mhi_uci_remove @ 0x08002ab4 (size 488) =====

void sym.mhi_uci_remove(int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(arg1 + 0xc0);
    if ((piVar9[0x2c] != 0) && (*(piVar9 + 0x2d) < 2)) {
        ipc_log_string(piVar9[0x2c],"%s[I][%s] Enter\n",0x8000a31,"mhi_uci_remove");
    }
    mutex_lock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    piVar1 = piVar9 + 6;
    mutex_lock(piVar1);
    _raw_spin_lock_irq(piVar9 + 0x1d);
    _raw_spin_lock_irq(piVar9 + 0xf);
    *(piVar9 + 0x154) = 0;
    _raw_spin_unlock_irq(piVar9 + 0xf);
    _raw_spin_unlock_irq(piVar9 + 0x1d);
    __wake_up(piVar9 + 0x1a,3,1,0);
    __wake_up(piVar9 + 0xc,3,1,0);
    device_destroy(*0x80002d0,piVar9[2]);
    piVar9[3] = 0;
    uVar8 = __list_del_entry_valid(piVar9);
    if ((uVar8 & 1) != 0) {
        iVar3 = *piVar9;
        piVar4 = piVar9[1];
        *(iVar3 + 8) = piVar4;
        *piVar4 = iVar3;
    }
    *piVar9 = -0x2152ffffffffff00;
    piVar9[1] = -0x2152fffffffffede;
    sysfs_remove_group(arg1 + 0x28,obj.mhi_uci_group);
    if (piVar9[0x2a] == 0) {
        mutex_unlock(piVar1);
        uVar5 = *(piVar9 + 2);
        pcVar2 = obj.mhi_uci_init.__key + ((uVar5 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar2,2,0,1);
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar7) {
                *pcVar2 = *pcVar2 & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        kfree(piVar9);
    }
    else {
        if ((piVar9[0x2c] != 0) && (*(piVar9 + 0x2d) < 2)) {
            ipc_log_string(piVar9[0x2c],"%s[I][%s] Exit\n",0x8000a31,"mhi_uci_remove");
        }
        mutex_unlock(piVar1);
    }
    mutex_unlock(reloc.mhi_uci_remove.a189eb64f9c5a61c6ba6b5239a5e9cfc.cfi_jt);
    return;
}


// ===== sym.mhi_ul_xfer_cb @ 0x08002c9c (size 136) =====

void sym.mhi_ul_xfer_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xc0);
    if ((*(iVar1 + 0x160) != 0) && (*(iVar1 + 0x168) == 0)) {
        ipc_log_string(*(iVar1 + 0x160),"%s[D][%s] status:%d xfer_len:%zu\n",0x8000a31,"mhi_ul_xfer_cb",
                       *(arg2 + 0x14),*(arg2 + 8));
    }
    kfree(*arg2);
    if (*(arg2 + 0x14) == 0) {
        __wake_up(iVar1 + 0x60,3,1,0);
    }
    return;
}


// ===== sym.mhi_dl_xfer_cb @ 0x08002d24 (size 296) =====

void sym.mhi_dl_xfer_cb(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0xc0);
    if ((*(iVar6 + 0x160) != 0) && (*(iVar6 + 0x168) == 0)) {
        ipc_log_string(*(iVar6 + 0x160),"%s[D][%s] status:%d receive_len:%zu\n",0x8000a31,"mhi_dl_xfer_cb",
                       *(arg2 + 0x14),*(arg2 + 8));
    }
    if (*(arg2 + 0x14) == -0x6b) {
        kfree(*arg2);
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(iVar6 + 0xe8);
        piVar2 = *arg2 + *(iVar6 + 0x148);
        *piVar2 = *arg2;
        piVar1 = piVar2 + 2;
        piVar2[1] = *(arg2 + 8);
        puVar5 = *(iVar6 + 0xf8);
        uVar4 = __list_add_valid(piVar1,puVar5,iVar6 + 0xf0);
        if ((uVar4 & 1) != 0) {
            *(iVar6 + 0xf8) = piVar1;
            *piVar1 = iVar6 + 0xf0;
            piVar2[3] = puVar5;
            *puVar5 = piVar1;
        }
        _raw_spin_unlock_irqrestore(iVar6 + 0xe8,uVar3);
        if (*(arg1 + 0x170) != 0) {
            pm_wakeup_dev_event(arg1 + 0x28,0,1);
        }
        __wake_up(iVar6 + 0xd0,3,1,0);
    }
    return;
}


// ===== sym.mhi_status_cb @ 0x08002e4c (size 124) =====

void sym.mhi_status_cb(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg2 == 10) {
        *in_x18 = unaff_x30;
        iVar2 = *(arg1 + 0xc0);
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0xe8);
        *(iVar2 + 0x158) = *(arg1 + 0x3d0);
        _raw_spin_unlock_irqrestore(iVar2 + 0xe8,uVar1);
        __wake_up(iVar2 + 0xd0,3,1,0);
    }
    return;
}


// ===== sym.log_level_show @ 0x08002ec8 (size 112) =====

int64_t sym.log_level_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x98) == 0) {
        iVar3 = -5;
    }
    else {
        uVar1 = *(*(arg1 + 0x98) + 0x168);
        if (uVar1 < 5) {
            pcVar4 = *(obj.mhi_uci_log_level_str + uVar1 * 8);
        }
        else {
            pcVar4 = "Mask all";
        }
        iVar2 = scnprintf(arg2,0x1000,"IPC log level begins from: %s\n",pcVar4);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.log_level_store @ 0x08002f38 (size 208) =====

uchar * sym.log_level_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x98);
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,0,&uStack_2c);
    if (iVar2 < 0) {
        arg3 = -0x16;
    }
    else if (iVar4 == 0) {
        arg3 = -5;
    }
    else {
        *(iVar4 + 0x168) = uStack_2c;
        if ((*(iVar4 + 0x160) != 0) && (uStack_2c < 2)) {
            ipc_log_string(*(iVar4 + 0x160),"%s[I][%s] IPC log level changed to: %s\n",0x8000a31,"log_level_store",
                           *(obj.mhi_uci_log_level_str + uStack_2c * 8));
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8003060);
        (*pcVar1)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08003008 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800304c

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
    //switch table (4 cases) at 0x8000b45
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003060);
    (*pcVar1)();
}


// ===== sym.cleanup_module @ 0x08003064 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        unregister_chrdev_region(_segment.ehdr << 0x14);
        _segment.ehdr = 0;
    }
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    mhi_driver_unregister(obj.mhi_uci_drv);
    return;
}

