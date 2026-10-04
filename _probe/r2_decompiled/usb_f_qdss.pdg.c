// decompiled from usb_f_qdss by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 892) =====

//WARNING: Switch with 1 destination removed at 0x08003078

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x391b10cb41dc2a3) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 < -0x5a17ec1679a0e09d) {
                if (arg1 == -0x6c0aaa0333c047bc) {
                    pcVar2 = sym.usb_qdss_write.cfi_jt;
                }
                else {
                    if (arg1 != -0x61af895beaf3d6ee) goto code_r0x08003038;
                    pcVar2 = sym.qdss_bind.68df7a556070e599ad999f95de1f638a.cfi_jt;
                }
            }
            else if (arg1 == -0x5a17ec1679a0e09d) {
                pcVar2 = sym.usb_qdss_alloc_req.cfi_jt;
            }
            else {
                if (arg1 != -0x55bd4d1e73a69e63) goto code_r0x08003038;
                pcVar2 = sym.usb_qdss_free_inst.68df7a556070e599ad999f95de1f638a.cfi_jt;
            }
        }
        else if (arg1 < -0x1f5194b81050a881) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.usb_qdss_disconnect_work.68df7a556070e599ad999f95de1f638a.cfi_jt;
code_r0x0800133c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003038;
            }
            if (arg1 != -0x345f11fb788f79d2) goto code_r0x08003038;
            pcVar2 = sym.usb_qdss_open.cfi_jt;
        }
        else if (arg1 == -0x1f5194b81050a881) {
            pcVar2 = sym.qdss_alloc_inst.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
        else {
            if (arg1 == -0x1265bfb47a91d0e2) {
                pcVar2 = sym.usb_qdss_close.cfi_jt;
                goto code_r0x0800133c;
            }
            if (arg1 != -0xb18138ae74ccd30) goto code_r0x08003038;
            pcVar2 = sym.usb_qdss_set_inst_name.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
    }
    else if (arg1 < 0x40ceb27a7e2157a1) {
        if (arg1 < 0xeeff0ad281f3bef) {
            if (arg1 == -0x391b10cb41dc2a3) {
                pcVar2 = sym.qdss_alloc.68df7a556070e599ad999f95de1f638a.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08003038;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0xeeff0ad281f3bef) {
            pcVar2 = sym.qdss_enable_debug_inface_show.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
        else {
            if (arg1 == 0x1e8c334cfa2d7333) {
                pcVar2 = sym.qdss_disable.68df7a556070e599ad999f95de1f638a.cfi_jt;
                goto code_r0x0800133c;
            }
            if (arg1 != 0x2335293b6d480f98) goto code_r0x08003038;
            pcVar2 = sym.qdss_unbind.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
    }
    else if (arg1 < 0x63cbeba280ab7603) {
        if (arg1 == 0x40ceb27a7e2157a1) {
            pcVar2 = sym.qdss_set_alt.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
        else {
            if (arg1 != 0x6322b72e887e81ab) goto code_r0x08003038;
            pcVar2 = sym.qdss_attr_release.68df7a556070e599ad999f95de1f638a.cfi_jt;
        }
    }
    else if (arg1 == 0x63cbeba280ab7603) {
        pcVar2 = sym.qdss_enable_debug_inface_store.68df7a556070e599ad999f95de1f638a.cfi_jt;
    }
    else if (arg1 == 0x643f348a21390606) {
        pcVar2 = sym.qdss_write_complete.68df7a556070e599ad999f95de1f638a.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003038;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003038:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800308c);
    (*pcVar1)();
}


// ===== sym.usb_qdss_free_inst.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001388 (size 8) =====

void sym.usb_qdss_free_inst.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(param_1 + 0xb8));
    kfree(param_1);
    return;
}


// ===== sym.qdss_set_alt.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001390 (size 8) =====

int sym.qdss_set_alt.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1,uint32_t param_2,int param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = **(*(param_1 + 0x30) + 0x30);
    ipc_log_string(_segment.ehdr,"%s: qdss pointer = %pK\n","qdss_set_alt",param_1);
    *(param_1 + 0x130) = iVar11;
    if (param_3 != 0) {
        iVar5 = 0;
        goto code_r0x08002ea4;
    }
    if (*(iVar11 + 0x58) < 3) {
        _printk(0x800071a,"qdss_set_alt");
    }
    else {
        if ((*(param_1 + 0x13b) == param_2) && ((*(param_1 + 0x214) & 1) == 0)) {
            if ((iVar11 != 0) &&
               (((*(iVar11 + 0xd8) != 0 && (iVar5 = __pm_runtime_resume(*(iVar11 + 0xd8),5), iVar5 < 0)) &&
                (iVar5 != -0x73)))) {
                puVar1 = *(iVar11 + 0xd8) + 0x1f8;
                uVar10 = *puVar1;
                do {
                    uVar9 = uVar10;
                    if (uVar9 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar10 = uVar2;
                        if (uVar2 != uVar9) goto code_r0x08002ce4;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar9 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x08002ce4:
                } while (uVar9 != uVar2);
            }
            puVar12 = param_1 + 0xe8;
            iVar5 = config_ep_by_speed(iVar11,param_1,*puVar12);
            if (iVar5 == 0) {
                iVar5 = usb_ep_enable(*puVar12);
                if (iVar5 == 0) {
                    uVar8 = 1;
code_r0x08002d9c:
                    **puVar12 = param_1;
                    *(param_1 + 0x214) = *(param_1 + 0x214) | uVar8;
                    goto code_r0x08002db0;
                }
                uVar6 = 0x8000c56;
            }
            else {
                uVar6 = 0x8000bc4;
            }
            _printk(uVar6,"qdss_set_alt",iVar5);
            if ((*(param_1 + 0x130) != 0) && (iVar11 = *(*(param_1 + 0x130) + 0xd8), iVar11 != 0)) {
                __pm_runtime_idle(iVar11,5);
            }
            goto code_r0x08002ea4;
        }
        if ((*(param_1 + 0x13a) != param_2) || (*(param_1 + 0x140) == '\0')) {
code_r0x08002db0:
            uVar6 = _segment.ehdr;
            if (*(param_1 + 0x140) == '\0') {
                if ((*(param_1 + 0x214) & 1) == 0) goto code_r0x08002df8;
                pcVar7 = "%s: usb_connected INTF disabled\n";
            }
            else {
                if ((~*(param_1 + 0x214) & 7) != 0) goto code_r0x08002df8;
                pcVar7 = "%s: usb_connected INTF enabled\n";
            }
            *(param_1 + 0x13c) = 1;
            ipc_log_string(uVar6,pcVar7,"qdss_set_alt");
code_r0x08002df8:
            if (*(param_1 + 0x13c) != 0) {
                queue_work_on(0x20,*(param_1 + 0x218),param_1 + 0x1b0);
            }
            return 0;
        }
        iVar5 = config_ep_by_speed(iVar11,param_1,*(param_1 + 0xe0));
        if (iVar5 == 0) {
            iVar5 = usb_ep_enable(*(param_1 + 0xe0));
            if (iVar5 != 0) goto code_r0x08002ea4;
            **(param_1 + 0xe0) = param_1;
            puVar12 = param_1 + 0xd8;
            *(param_1 + 0x214) = *(param_1 + 0x214) | 2;
            iVar5 = config_ep_by_speed(iVar11,param_1,*puVar12);
            if (iVar5 == 0) {
                iVar5 = usb_ep_enable(*puVar12);
                if (iVar5 != 0) goto code_r0x08002ea4;
                uVar8 = 4;
                goto code_r0x08002d9c;
            }
        }
    }
    iVar5 = -0x16;
code_r0x08002ea4:
    _printk(0x8000656,"qdss_set_alt",iVar5);
    sym.qdss_eps_disable(param_1);
    return iVar5;
}


// ===== sym.usb_qdss_close.cfi_jt @ 0x08001398 (size 8) =====

void sym.usb_qdss_close.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    uint uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x8000400,"usb_qdss_close");
    }
    else {
        ipc_log_string(_segment.ehdr,"%s: channel:%s\n","usb_qdss_close",*param_1);
        mutex_lock(param_1 + 0x1a);
        if (*(param_1 + 0x20) == '\0') {
            _printk(0x80005b4,"usb_qdss_close",*param_1);
        }
        else {
            puVar1 = param_1 + 0x18;
            uVar8 = _raw_spin_lock_irqsave(puVar1);
            puVar2 = param_1 + 10;
            *(param_1 + 0x20) = 0;
            puVar10 = param_1[8];
            while (puVar10 != param_1 + 8) {
                piVar11 = param_1[9];
                uVar9 = __list_del_entry_valid(piVar11);
                if ((uVar9 & 1) != 0) {
                    iVar3 = *piVar11;
                    piVar4 = piVar11[1];
                    *(iVar3 + 8) = piVar4;
                    *piVar4 = iVar3;
                }
                puVar10 = param_1[0xb];
                uVar9 = __list_add_valid(piVar11,puVar10,puVar2);
                if ((uVar9 & 1) != 0) {
                    param_1[0xb] = piVar11;
                    *piVar11 = puVar2;
                    piVar11[1] = puVar10;
                    *puVar10 = piVar11;
                }
                _raw_spin_unlock_irqrestore(puVar1,uVar8);
                uVar6 = usb_ep_dequeue(param_1[-0xd],piVar11[-2]);
                ipc_log_string(_segment.ehdr,"%s: dequeue req:%pK status=%d\n","usb_qdss_close",piVar11[-2],uVar6);
                uVar8 = _raw_spin_lock_irqsave(puVar1);
                puVar10 = param_1[8];
            }
            puVar10 = *puVar2;
            _raw_spin_unlock_irqrestore(puVar1,uVar8);
            if (puVar10 != puVar2) {
                ipc_log_string(_segment.ehdr,"%s: waiting for completion on dequeued requests\n","usb_qdss_close");
                wait_for_completion(param_1 + 0x21);
            }
            if (*puVar2 != puVar2) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8001fd8);
                (*pcVar5)();
            }
            sym.qdss_free_reqs(param_1 + -0x2a);
            param_1[3] = 0;
            if (*(param_1 + -0x14) != 0) {
                uVar8 = *param_1;
                iVar7 = strcmp(uVar8,"qdss_mdm");
                if ((iVar7 != 0) && (iVar7 = strcmp(uVar8,"qdss_sw"), iVar7 != 0)) {
                    if (param_1[-1] != 0) {
                        usb_ep_dequeue(param_1[-0xd]);
                    }
                    iVar7 = sym.set_qdss_data_connection(param_1 + -0x2a);
                    if (iVar7 != 0) {
                        _printk(0x8000894,"usb_qdss_close");
                    }
                }
            }
        }
        mutex_unlock(param_1 + 0x1a);
    }
    return;
}


// ===== sym.usb_qdss_free_req.cfi_jt @ 0x080013a0 (size 8) =====

void sym.usb_qdss_free_req.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x8000400,"usb_qdss_free_req");
    }
    else {
        mutex_lock(param_1 + 0x1a);
        if (*(param_1 + 0x20) == '\0') {
            _printk(0x80005b4,"usb_qdss_free_req",*param_1);
        }
        else {
            sym.qdss_free_reqs(param_1 + -0x2a);
        }
        mutex_unlock(param_1 + 0x1a);
    }
    return;
}


// ===== sym.usb_qdss_open.cfi_jt @ 0x080013a8 (size 8) =====

code * sym.usb_qdss_open.cfi_jt(char *param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: called for channel:%s\n","usb_qdss_open",param_1);
    if (param_3 == 0) {
        _printk(0x8000967,"usb_qdss_open");
    }
    else {
        uVar2 = _raw_spin_lock_irqsave(obj.channel_lock);
        while( true ) {
            pcVar4 = _obj._qdss_ipc_log;
            if (_obj._qdss_ipc_log != obj._qdss_ipc_log) {
                do {
                    iVar1 = strcmp(param_1,*(pcVar4 + -8));
                    if (iVar1 == 0) {
                        pcVar3 = pcVar4 + -0x158;
                        iVar1 = strcmp(param_1,"qdss_sw");
                        if (iVar1 == 0) {
                            if ((pcVar3 == NULL) || (*pcVar3 == 0)) goto code_r0x08001c18;
                            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
                        }
                        else {
                            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
                            if (pcVar3 == NULL) goto code_r0x08001ca0;
                        }
                        mutex_lock(pcVar4 + 200);
                        ipc_log_string(_segment.ehdr,"%s: qdss ctx found for channel:%s\n","usb_qdss_open",param_1);
                        *(pcVar4 + 0x100) = 0;
                        pcVar4[0xf8] = 0x1;
                        *(pcVar4 + 0x10) = param_3;
                        *(pcVar4 + 0x18) = param_2;
                        if (*(pcVar4 + -0x1c) != 0) {
                            queue_work_on(0x20,*(pcVar4 + 0xc0),pcVar4 + 0x58);
                        }
                        mutex_unlock(pcVar4 + 200);
                        return pcVar4 + -8;
                    }
                    pcVar4 = *pcVar4;
                } while (pcVar4 != obj._qdss_ipc_log);
            }
            iVar1 = strcmp(param_1,"qdss_sw");
            if (iVar1 != 0) break;
code_r0x08001c18:
            ipc_log_string(_segment.ehdr,"%s: qdss_sw not added to config, fall back to qdss_mdm\n","usb_qdss_open");
            param_1 = "qdss_mdm";
        }
        _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
code_r0x08001ca0:
        ipc_log_string(_segment.ehdr,"%s: failed to find channel:%s\n","usb_qdss_open",param_1);
    }
    return NULL;
}


// ===== sym.init_module.cfi_jt @ 0x080013b0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = ipc_log_context_create(10,"usb_qdss",0);
    _segment.ehdr = 0;
    if (uVar2 < 0xfffffffffffff001 && uVar2 != 0) {
        _segment.ehdr = uVar2;
    }
    _obj._qdss_ipc_log = obj._qdss_ipc_log;
    _obj.channel_lock = obj._qdss_ipc_log;
    iVar1 = usb_function_register(obj.qdssusb_func);
    if (iVar1 != 0) {
        _printk(0x80009fe,"usb_qdss_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080013b8 (size 8) =====

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
    ipc_log_context_destroy(_segment.ehdr);
    usb_function_unregister(obj.qdssusb_func);
    ipc_log_string(_segment.ehdr,"%s: cleaning up channel resources.\n","qdss_cleanup");
    pcVar5 = _obj._qdss_ipc_log;
    if (_obj._qdss_ipc_log != obj._qdss_ipc_log) {
        do {
            pcVar6 = *pcVar5;
            destroy_workqueue(*(pcVar5 + 0xc0));
            uVar3 = _raw_spin_lock_irqsave(obj.channel_lock);
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
                kfree(pcVar5 + -0x158);
            }
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar3);
            pcVar5 = pcVar6;
        } while (pcVar6 != obj._qdss_ipc_log);
    }
    return;
}


// ===== sym.usb_qdss_write.cfi_jt @ 0x080013c0 (size 8) =====

ulong sym.usb_qdss_write.cfi_jt(ulong *param_1,ulong *param_2)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    int64_t *piVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t *piVar12;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x8000400,"usb_qdss_write");
        return 0xffffffea;
    }
    puVar1 = param_1 + 0x1a;
    puVar2 = param_1 + 0x18;
    mutex_lock(puVar1);
    ipc_log_string(_segment.ehdr,"%s: channel:%s d_req:%pK\n","usb_qdss_write",*param_1,param_2);
    uVar8 = _raw_spin_lock_irqsave(puVar2);
    if ((*(param_1 + 0x20) == '\0') || (*(param_1 + -0x14) == 0)) {
        _raw_spin_unlock_irqrestore(puVar2,uVar8);
        ipc_log_string(_segment.ehdr,"%s: return -EIO\n","usb_qdss_write");
    }
    else {
        puVar3 = param_1 + 6;
        if (*puVar3 == puVar3) {
            _printk(0x800074c);
            _raw_spin_unlock_irqrestore(puVar2,uVar8);
            mutex_unlock(puVar1);
            return 0xfffffff5;
        }
        piVar12 = param_1[6];
        uVar9 = __list_del_entry_valid(piVar12);
        if ((uVar9 & 1) != 0) {
            iVar11 = *piVar12;
            piVar4 = piVar12[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        puVar13 = param_1[9];
        uVar9 = __list_add_valid(piVar12,puVar13,param_1 + 8);
        if ((uVar9 & 1) != 0) {
            param_1[9] = piVar12;
            *piVar12 = param_1 + 8;
            piVar12[1] = puVar13;
            *puVar13 = piVar12;
        }
        _raw_spin_unlock_irqrestore(puVar2,uVar8);
        piVar12[-1] = param_2;
        puVar13 = piVar12[-2];
        *puVar13 = *param_2;
        uVar8 = _segment.ehdr;
        uVar5 = *(param_2 + 1);
        *(puVar13 + 1) = uVar5;
        iVar11 = param_2[4];
        puVar13[3] = iVar11;
        uVar6 = *(param_2 + 5);
        *(puVar13 + 4) = uVar6;
        if (iVar11 == 0) {
            pcVar10 = "%s: %s: req:%pK rq->length:0x%x\n";
        }
        else {
            pcVar10 = "%s: %s: req:%pK req->num_sgs:0x%x\n";
            uVar5 = uVar6;
        }
        ipc_log_string(uVar8,pcVar10,"usb_qdss_write",*param_1,puVar13,uVar5);
        iVar7 = usb_ep_queue(param_1[-0xd],puVar13,0xa20);
        if (iVar7 == 0) {
            mutex_unlock(puVar1);
            return 0;
        }
        uVar8 = _raw_spin_lock_irqsave(puVar2);
        uVar9 = __list_del_entry_valid(piVar12);
        if ((uVar9 & 1) != 0) {
            iVar11 = *piVar12;
            piVar4 = piVar12[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        puVar13 = param_1[7];
        uVar9 = __list_add_valid(piVar12,puVar13,puVar3);
        if ((uVar9 & 1) != 0) {
            param_1[7] = piVar12;
            *piVar12 = puVar3;
            piVar12[1] = puVar13;
            *puVar13 = piVar12;
        }
        _raw_spin_unlock_irqrestore(puVar2,uVar8);
        _printk(0x8000b97);
    }
    mutex_unlock(puVar1);
    return 0xfffffffb;
}


// ===== sym.qdss_enable_debug_inface_store.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013c8 (size 8) =====

uint64_t sym.qdss_enable_debug_inface_store.68df7a556070e599ad999f95de1f638a.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0xb8);
    acStack_3c[0] = '\0';
    if (param_2 == 0) {
        _printk(0x8000c44);
    }
    else {
        iVar2 = kstrtou8(param_2,0,acStack_3c);
        if (((iVar2 == 0) || (acStack_3c[0] == '\0')) || (acStack_3c[0] == '\x01')) {
            iVar6 = iVar10 + 0x210;
            uVar4 = _raw_spin_lock_irqsave(iVar6);
            *(iVar10 + 0x140) = acStack_3c[0] != '\0';
            _raw_spin_unlock_irqrestore(iVar6,uVar4);
        }
        else {
            _printk(0x8000844);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar12 = __stack_chk_fail();
    iVar6 = auVar12._8_8_;
    iVar10 = auVar12._0_8_;
    *extraout_x18 = sym.qdss_bind;
    uVar4 = **(iVar10 + 0x30);
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_bind",*(iVar6 + 0x150));
    uVar3 = usb_interface_id(iVar10,iVar6);
    if (uVar3 < 0) {
code_r0x08002a60:
        _printk(0x80009e0);
        return uVar3;
    }
    *0x800022a = uVar3;
    *(iVar6 + 0x13b) = *0x800022a;
    if (obj.qdss_string_defs == 0x0) {
        uVar3 = usb_string_id(*(iVar10 + 0x30));
        if (uVar3 < 0) {
            return uVar3;
        }
        obj.qdss_string_defs = SUB41(uVar3,0);
        cVar1 = *(iVar6 + 0x140);
        *0x8000230 = obj.qdss_string_defs;
    }
    else {
        cVar1 = *(iVar6 + 0x140);
    }
    if (cVar1 != '\0') {
        uVar3 = usb_interface_id(iVar10,iVar6);
        if (uVar3 < 0) goto code_r0x08002a60;
        *0x8000233 = uVar3;
        *(iVar6 + 0x13a) = *0x8000233;
        if (*0x8000208 == '\0') {
            uVar3 = usb_string_id(*(iVar10 + 0x30));
            if (uVar3 < 0) {
                return uVar3;
            }
            *0x8000208 = uVar3;
            *0x8000239 = *0x8000208;
        }
    }
    uVar11 = *(iVar6 + 0x150);
    iVar2 = strcmp(uVar11,"qdss_mdm");
    if ((iVar2 == 0) || (iVar2 = strcmp(uVar11,"qdss_sw"), iVar2 == 0)) {
        *0x800023c = 0;
    }
    piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_data_desc);
    if (piVar5 != NULL) {
        *(iVar6 + 0xe8) = piVar5;
        *piVar5 = iVar6;
        uVar11 = *(iVar6 + 0x150);
        iVar2 = strcmp(uVar11,"qdss_mdm");
        if ((iVar2 != 0) && (iVar2 = strcmp(uVar11,"qdss_sw"), iVar2 != 0)) {
            iVar2 = msm_ep_set_mode(*(iVar6 + 0xe8),*(iVar6 + 0x178));
            if (iVar2 < 0) goto code_r0x08002a84;
            msm_ep_update_ops(*(iVar6 + 0xe8));
        }
        if (*(iVar6 + 0x140) == '\0') {
code_r0x08002974:
            uVar4 = *(iVar6 + 0x150);
            iVar2 = strcmp(uVar4,"qdss_mdm");
            if (((iVar2 == 0) || (iVar2 = strcmp(uVar4,"qdss_sw"), iVar2 == 0)) ||
               (iVar2 = sym.alloc_hw_req(*(iVar6 + 0xe8)), iVar2 == 0)) {
                *0x800025d = *0x8000242;
                *0x8000266 = *0x8000242;
                if (*(iVar6 + 0x140) == '\0') {
                    pcVar7 = obj.qdss_fs_data_only_desc;
                    pcVar8 = obj.qdss_hs_data_only_desc;
                    pcVar9 = obj.qdss_ss_data_only_desc;
                }
                else {
                    pcVar7 = obj.qdss_fs_desc;
                    *0x800026f = *0x800024b;
                    pcVar8 = obj.qdss_hs_desc;
                    *0x8000278 = *0x800024b;
                    pcVar9 = obj.qdss_ss_desc;
                    *0x8000281 = *0x8000254;
                    *0x800028a = *0x8000254;
                }
                iVar2 = usb_assign_descriptors(iVar6,pcVar7,pcVar8,pcVar9,pcVar9);
                if (iVar2 == 0) {
                    return 0;
                }
                if (*(iVar6 + 0x148) != 0) {
                    usb_ep_free_request(*(iVar6 + 0xe8));
                    *(iVar6 + 0x148) = 0;
                }
            }
            else {
                _printk(0x8000a6e,"qdss_bind",iVar2);
            }
            goto code_r0x08002a84;
        }
        piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_ctrl_in_desc);
        if (piVar5 != NULL) {
            *(iVar6 + 0xe0) = piVar5;
            *piVar5 = iVar6;
            piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_ctrl_out_desc);
            if (piVar5 != NULL) {
                *(iVar6 + 0xd8) = piVar5;
                *piVar5 = iVar6;
                goto code_r0x08002974;
            }
        }
    }
    _printk(0x800098b,"qdss_bind");
code_r0x08002a84:
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(iVar6 + 0x150));
    if (*(iVar6 + 0xe0) != NULL) {
        **(iVar6 + 0xe0) = 0;
    }
    if (*(iVar6 + 0xd8) != NULL) {
        **(iVar6 + 0xd8) = 0;
    }
    if (*(iVar6 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(iVar6 + 0xe8),0);
        **(iVar6 + 0xe8) = 0;
    }
    return 0xffffffa1;
}


// ===== sym.usb_qdss_set_inst_name.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013d0 (size 8) =====

ulong sym.usb_qdss_set_inst_name.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint uVar8;
    ulong *in_x18;
    ulong uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = strlen(param_2);
    if (0xf < iVar4 + 1U) {
        return 0xffffffdc;
    }
    iVar4 = kstrndup(param_2,iVar4 + 1U,0xcc0);
    uVar5 = _segment.ehdr;
    if (iVar4 == 0) {
        uVar9 = 0;
        uVar5 = 0x800063f;
        goto code_r0x080023a4;
    }
    *(param_1 + 0xc0) = iVar4;
    ipc_log_string(uVar5,"%s: qdss: channel_name:%s\n","usb_qdss_set_inst_name");
    uVar9 = *(param_1 + 0xc0);
    uVar5 = _raw_spin_lock_irqsave(obj.channel_lock);
    for (pcVar10 = _obj._qdss_ipc_log; pcVar10 != obj._qdss_ipc_log; pcVar10 = *pcVar10) {
        iVar3 = strcmp(uVar9,*(pcVar10 + -8));
        if (iVar3 == 0) {
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
            _printk(0x8000c1e,"alloc_usb_qdss",uVar9);
            goto code_r0x08002398;
        }
    }
    _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
    uVar6 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x278);
    if (uVar6 == 0) {
        _printk(0x8000696,"alloc_usb_qdss");
    }
    else {
        iVar4 = alloc_workqueue(0x8000567,0xe000a,1,uVar9);
        *(uVar6 + 0x218) = iVar4;
        if (iVar4 == 0) {
            kfree(uVar6);
        }
        else {
            uVar5 = _raw_spin_lock_irqsave(obj.channel_lock);
            *(uVar6 + 0x150) = uVar9;
            iVar3 = strcmp(uVar9,"qdss");
            if (iVar3 == 0) {
                uVar8 = 1;
code_r0x08002254:
                *(uVar6 + 0x178) = uVar8;
            }
            else {
                iVar3 = strcmp(uVar9,"qdss_ebc");
                if (iVar3 == 0) {
                    uVar8 = 3;
                    goto code_r0x08002254;
                }
                *(uVar6 + 0x178) = 0;
            }
            piVar2 = _obj.channel_lock;
            piVar1 = uVar6 + 0x158;
            uVar7 = __list_add_valid(piVar1,_obj.channel_lock,obj._qdss_ipc_log);
            if ((uVar7 & 1) != 0) {
                _obj.channel_lock = piVar1;
                *(uVar6 + 0x158) = obj._qdss_ipc_log;
                *(uVar6 + 0x160) = piVar2;
                *piVar2 = piVar1;
            }
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
            *(uVar6 + 0x210) = 0;
            *(uVar6 + 0x180) = uVar6 + 0x180;
            *(uVar6 + 0x188) = uVar6 + 0x180;
            *(uVar6 + 400) = uVar6 + 400;
            *(uVar6 + 0x198) = uVar6 + 400;
            *(uVar6 + 0x1a0) = uVar6 + 0x1a0;
            *(uVar6 + 0x1a8) = uVar6 + 0x1a0;
            *(uVar6 + 0x1b0) = 0xfffffffe0;
            *(uVar6 + 0x1b8) = uVar6 + 0x1b8;
            *(uVar6 + 0x1c0) = uVar6 + 0x1b8;
            *(uVar6 + 0x1e0) = 0xfffffffe0;
            *(uVar6 + 0x1c8) = sym.usb_qdss_connect_work.68df7a556070e599ad999f95de1f638a.cfi_jt;
            *(uVar6 + 0x1e8) = uVar6 + 0x1e8;
            *(uVar6 + 0x1f0) = uVar6 + 0x1e8;
            *(uVar6 + 0x1f8) = sym.usb_qdss_disconnect_work.68df7a556070e599ad999f95de1f638a.cfi_jt;
            __mutex_init(uVar6 + 0x220,"&qdss->mutex",obj.alloc_usb_qdss.__key);
            *(uVar6 + 600) = 0;
            __init_swait_queue_head(uVar6 + 0x260,"&x->wait",obj.alloc_usb_qdss.__key);
            if (uVar6 < 0xfffffffffffff001) {
                *(param_1 + 0xb8) = uVar6;
                return 0;
            }
        }
    }
code_r0x08002398:
    uVar9 = *(param_1 + 0xc0);
    uVar5 = 0x800047d;
code_r0x080023a4:
    _printk(uVar5,uVar9);
    return 0xfffffff4;
}


// ===== sym.qdss_write_complete.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013d8 (size 8) =====

void sym.qdss_write_complete.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_2 + 0x38);
    iVar2 = *param_1;
    iVar6 = *(iVar9 + 8);
    ipc_log_string(_segment.ehdr,"%s: channel:%s ep:%s req:%pK req->status:%d req->length:%d\n","qdss_write_complete"
                   ,*(iVar2 + 0x150),param_1[1],param_2,*(param_2 + 0x54),*(param_2 + 8));
    uVar4 = _raw_spin_lock_irqsave(iVar2 + 0x210);
    iVar1 = iVar9 + 0x10;
    uVar5 = __list_del_entry_valid(iVar1);
    if ((uVar5 & 1) != 0) {
        iVar3 = *(iVar9 + 0x10);
        piVar8 = *(iVar9 + 0x18);
        *(iVar3 + 8) = piVar8;
        *piVar8 = iVar3;
    }
    piVar8 = *(iVar2 + 0x188);
    uVar5 = __list_add_valid(iVar1,piVar8,iVar2 + 0x180);
    if ((uVar5 & 1) != 0) {
        *(iVar2 + 0x188) = iVar1;
        *(iVar9 + 0x10) = iVar2 + 0x180;
        *(iVar9 + 0x18) = piVar8;
        *piVar8 = iVar1;
    }
    if (((*(iVar2 + 0x250) == '\0') && (iVar2 + 0x1a0 == *(iVar2 + 0x1a0))) && (iVar2 + 400 == *(iVar2 + 400))) {
        complete(iVar2 + 600);
    }
    if (*(param_2 + 8) != 0) {
        *(iVar6 + 0xc) = *(param_2 + 0x58);
        *(iVar6 + 0x10) = *(param_2 + 0x54);
    }
    _raw_spin_unlock_irqrestore(iVar2 + 0x210,uVar4);
    pcVar7 = *(iVar2 + 0x168);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar7,0x80003a0);
        (*pcVar7)(*(iVar2 + 0x170),3,iVar6,0);
    }
    return;
}


// ===== sym.qdss_enable_debug_inface_show.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013e0 (size 8) =====

int64_t sym.qdss_enable_debug_inface_show.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1,ulong param_2)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "Disabled";
    if (*(*(param_1 + 0xb8) + 0x140) != '\0') {
        pcVar1 = "Enabled";
    }
    iVar2 = scnprintf(param_2,0x1000,0x8000c40,pcVar1);
    return iVar2;
}


// ===== sym.qdss_disable.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013e8 (size 8) =====

void sym.qdss_disable.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_disable",*(param_1 + 0x150));
    iVar1 = param_1 + 0x210;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    if (*(param_1 + 0x13c) == 0) {
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(param_1 + 0x13c) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.qdss_eps_disable(param_1);
        queue_work_on(0x20,*(param_1 + 0x218),param_1 + 0x1e0);
    }
    return;
}


// ===== sym.qdss_free_func.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x080013f0 (size 8) =====

void sym.qdss_free_func.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x140) = 0;
    return;
}


// ===== sym.usb_qdss_alloc_req.cfi_jt @ 0x080013f8 (size 8) =====

ulong sym.usb_qdss_alloc_req.cfi_jt(ulong *param_1,int param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x8000400,"usb_qdss_alloc_req");
        uVar7 = 0xffffffea;
    }
    else {
        ipc_log_string(_segment.ehdr,"%s: channel:%s num_write_buf:%d\n","usb_qdss_alloc_req",*param_1,param_2);
        if (param_1 + -0x2a == NULL) {
            _printk(0x8000582,"usb_qdss_alloc_req",*param_1);
            uVar7 = 0xffffffed;
        }
        else {
            mutex_lock();
            if (0 < param_2) {
                uVar7 = param_1[-0xd];
                do {
                    iVar3 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar3 = 0x30;
                    }
                    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
                    if (piVar2 == NULL) {
code_r0x08001754:
                        sym.qdss_free_reqs(param_1 + -0x2a);
                        mutex_unlock(param_1 + 0x1a);
                        return 0xfffffff4;
                    }
                    iVar3 = usb_ep_alloc_request(uVar7,0xa20);
                    if (iVar3 == 0) {
                        _printk(0x8000ca6,"usb_qdss_alloc_req");
                        kfree(piVar2);
                        goto code_r0x08001754;
                    }
                    uVar4 = _raw_spin_lock_irqsave(param_1 + 0x18);
                    *piVar2 = iVar3;
                    piVar1 = piVar2 + 2;
                    *(iVar3 + 0x30) = sym.qdss_write_complete.68df7a556070e599ad999f95de1f638a.cfi_jt;
                    *(iVar3 + 0x38) = piVar2;
                    piVar6 = param_1[7];
                    uVar5 = __list_add_valid(piVar1,piVar6,param_1 + 6);
                    if ((uVar5 & 1) != 0) {
                        param_1[7] = piVar1;
                        piVar2[2] = param_1 + 6;
                        piVar2[3] = piVar6;
                        *piVar6 = piVar1;
                    }
                    _raw_spin_unlock_irqrestore(param_1 + 0x18,uVar4);
                    param_2 = param_2 + -1;
                } while (param_2 != 0);
            }
            mutex_unlock(param_1 + 0x1a);
            uVar7 = 0;
        }
    }
    return uVar7;
}


// ===== sym.usb_qdss_disconnect_work.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001400 (size 8) =====

void sym.usb_qdss_disconnect_work.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","usb_qdss_disconnect_work",*(param_1 + -0x90));
    pcVar3 = *(param_1 + -0x78);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar3,0x80003e0);
        (*pcVar3)(*(param_1 + -0x70),1,0,0);
    }
    mutex_lock(param_1 + 0x40);
    if (*(param_1 + 0x70) != '\0') {
        uVar4 = *(param_1 + -0x90);
        iVar1 = strcmp(uVar4,"qdss_mdm");
        if (((iVar1 != 0) && (iVar1 = strcmp(uVar4,"qdss_sw"), iVar1 != 0)) &&
           (iVar1 = sym.set_qdss_data_connection(param_1 + -0x1e0), iVar1 != 0)) {
            _printk(0x80006bc);
            iVar2 = *(param_1 + -0xb0);
            goto joined_r0x0800260c;
        }
    }
    iVar2 = *(param_1 + -0xb0);
joined_r0x0800260c:
    if ((iVar2 != 0) && (*(iVar2 + 0xd8) != 0)) {
        __pm_runtime_idle(*(iVar2 + 0xd8),5);
    }
    mutex_unlock(param_1 + 0x40);
    return;
}


// ===== sym.usb_qdss_connect_work.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001408 (size 8) =====

void sym.usb_qdss_connect_work.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x74) == 0) {
        cancel_work_sync(param_1 + 0x30);
        return;
    }
    iVar1 = param_1 + 0x70;
    mutex_lock(iVar1);
    puVar4 = param_1 + -0x60;
    ipc_log_string(_segment.ehdr,"%s: channel:%s opened:%d\n","usb_qdss_connect_work",*puVar4,*(param_1 + 0xa0));
    if (*(param_1 + 0xa0) != '\0') {
        uVar5 = *puVar4;
        iVar2 = strcmp(uVar5,"qdss_mdm");
        if ((iVar2 == 0) || (iVar2 = strcmp(uVar5,"qdss_sw"), iVar2 == 0)) {
code_r0x0800249c:
            mutex_unlock(iVar1);
            pcVar3 = *(param_1 + -0x48);
            if (pcVar3 == NULL) {
                return;
            }
            __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar3,0x80003c0);
            (*pcVar3)(*(param_1 + -0x40),0,0,puVar4);
            return;
        }
        iVar2 = sym.set_qdss_data_connection(param_1 + -0x1b0);
        if (iVar2 == 0) {
            uVar5 = _raw_spin_lock_irqsave(param_1 + 0x60);
            iVar6 = *(param_1 + -0x68);
            _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar5);
            if (iVar6 != 0) {
                iVar2 = usb_ep_queue(*(param_1 + -200),iVar6,0xa20);
                if (iVar2 == 0) goto code_r0x0800249c;
                _printk(0x8000825,"usb_qdss_connect_work",iVar2);
            }
        }
        else {
            _printk(0x8000aca,iVar2);
        }
    }
    mutex_unlock(iVar1);
    return;
}


// ===== sym.qdss_alloc.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001410 (size 8) =====

void sym.qdss_alloc.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    
    puVar1 = *(param_1 + 0xb8);
    *puVar1 = "usb_qdss";
    puVar1[1] = obj.qdss_strings;
    puVar1[9] = sym.qdss_bind.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[10] = sym.qdss_unbind.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xd] = sym.qdss_set_alt.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xb] = sym.qdss_free_func.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xf] = sym.qdss_disable.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0x10] = 0;
    return;
}


// ===== sym.qdss_alloc_inst.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001418 (size 8) =====

int64_t sym.qdss_alloc_inst.68df7a556070e599ad999f95de1f638a.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,200);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.usb_qdss_set_inst_name.68df7a556070e599ad999f95de1f638a.cfi_jt;
        *(iVar1 + 0xb0) = sym.usb_qdss_free_inst.68df7a556070e599ad999f95de1f638a.cfi_jt;
        config_group_init_type_name(iVar1,0x8000b1f,obj.qdss_func_type);
    }
    return iVar1;
}


// ===== sym.qdss_attr_release.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001420 (size 8) =====

void sym.qdss_attr_release.68df7a556070e599ad999f95de1f638a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.qdss_bind.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001428 (size 8) =====

int sym.qdss_bind.68df7a556070e599ad999f95de1f638a.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    int iVar2;
    int64_t *piVar3;
    code *pcVar4;
    code *pcVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = **(param_1 + 0x30);
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_bind",*(param_2 + 0x150));
    iVar2 = usb_interface_id(param_1,param_2);
    if (iVar2 < 0) {
code_r0x08002a60:
        _printk(0x80009e0);
        return iVar2;
    }
    *0x800022a = iVar2;
    *(param_2 + 0x13b) = *0x800022a;
    if (obj.qdss_string_defs == 0x0) {
        iVar2 = usb_string_id(*(param_1 + 0x30));
        if (iVar2 < 0) {
            return iVar2;
        }
        obj.qdss_string_defs = SUB41(iVar2,0);
        cVar1 = *(param_2 + 0x140);
        *0x8000230 = obj.qdss_string_defs;
    }
    else {
        cVar1 = *(param_2 + 0x140);
    }
    if (cVar1 != '\0') {
        iVar2 = usb_interface_id(param_1,param_2);
        if (iVar2 < 0) goto code_r0x08002a60;
        *0x8000233 = iVar2;
        *(param_2 + 0x13a) = *0x8000233;
        if (*0x8000208 == '\0') {
            iVar2 = usb_string_id(*(param_1 + 0x30));
            if (iVar2 < 0) {
                return iVar2;
            }
            *0x8000208 = iVar2;
            *0x8000239 = *0x8000208;
        }
    }
    uVar8 = *(param_2 + 0x150);
    iVar2 = strcmp(uVar8,"qdss_mdm");
    if ((iVar2 == 0) || (iVar2 = strcmp(uVar8,"qdss_sw"), iVar2 == 0)) {
        *0x800023c = 0;
    }
    piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_data_desc);
    if (piVar3 != NULL) {
        *(param_2 + 0xe8) = piVar3;
        *piVar3 = param_2;
        uVar8 = *(param_2 + 0x150);
        iVar2 = strcmp(uVar8,"qdss_mdm");
        if ((iVar2 != 0) && (iVar2 = strcmp(uVar8,"qdss_sw"), iVar2 != 0)) {
            iVar2 = msm_ep_set_mode(*(param_2 + 0xe8),*(param_2 + 0x178));
            if (iVar2 < 0) goto code_r0x08002a84;
            msm_ep_update_ops(*(param_2 + 0xe8));
        }
        if (*(param_2 + 0x140) == '\0') {
code_r0x08002974:
            uVar7 = *(param_2 + 0x150);
            iVar2 = strcmp(uVar7,"qdss_mdm");
            if (((iVar2 == 0) || (iVar2 = strcmp(uVar7,"qdss_sw"), iVar2 == 0)) ||
               (iVar2 = sym.alloc_hw_req(*(param_2 + 0xe8)), iVar2 == 0)) {
                *0x800025d = *0x8000242;
                *0x8000266 = *0x8000242;
                if (*(param_2 + 0x140) == '\0') {
                    pcVar4 = obj.qdss_fs_data_only_desc;
                    pcVar5 = obj.qdss_hs_data_only_desc;
                    pcVar6 = obj.qdss_ss_data_only_desc;
                }
                else {
                    pcVar4 = obj.qdss_fs_desc;
                    *0x800026f = *0x800024b;
                    pcVar5 = obj.qdss_hs_desc;
                    *0x8000278 = *0x800024b;
                    pcVar6 = obj.qdss_ss_desc;
                    *0x8000281 = *0x8000254;
                    *0x800028a = *0x8000254;
                }
                iVar2 = usb_assign_descriptors(param_2,pcVar4,pcVar5,pcVar6,pcVar6);
                if (iVar2 == 0) {
                    return 0;
                }
                if (*(param_2 + 0x148) != 0) {
                    usb_ep_free_request(*(param_2 + 0xe8));
                    *(param_2 + 0x148) = 0;
                }
            }
            else {
                _printk(0x8000a6e,"qdss_bind",iVar2);
            }
            goto code_r0x08002a84;
        }
        piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_ctrl_in_desc);
        if (piVar3 != NULL) {
            *(param_2 + 0xe0) = piVar3;
            *piVar3 = param_2;
            piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_ctrl_out_desc);
            if (piVar3 != NULL) {
                *(param_2 + 0xd8) = piVar3;
                *piVar3 = param_2;
                goto code_r0x08002974;
            }
        }
    }
    _printk(0x800098b,"qdss_bind");
code_r0x08002a84:
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(param_2 + 0x150));
    if (*(param_2 + 0xe0) != NULL) {
        **(param_2 + 0xe0) = 0;
    }
    if (*(param_2 + 0xd8) != NULL) {
        **(param_2 + 0xd8) = 0;
    }
    if (*(param_2 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(param_2 + 0xe8),0);
        **(param_2 + 0xe8) = 0;
    }
    return -0x5f;
}


// ===== sym.qdss_unbind.68df7a556070e599ad999f95de1f638a.cfi_jt @ 0x08001430 (size 8) =====

void sym.qdss_unbind.68df7a556070e599ad999f95de1f638a.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_unbind",*(param_2 + 0x150));
    sym.qdss_disable(param_2);
    flush_workqueue(*(param_2 + 0x218));
    if (*(param_2 + 0x148) != 0) {
        usb_ep_free_request(*(param_2 + 0xe8));
        *(param_2 + 0x148) = 0;
    }
    obj.qdss_string_defs = 0x0;
    *0x8000208 = 0;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(param_2 + 0x150));
    if (*(param_2 + 0xe0) != NULL) {
        **(param_2 + 0xe0) = 0;
    }
    if (*(param_2 + 0xd8) != NULL) {
        **(param_2 + 0xd8) = 0;
    }
    if (*(param_2 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(param_2 + 0xe8),0);
        **(param_2 + 0xe8) = 0;
    }
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_desc",*(param_2 + 0x150));
    usb_free_all_descriptors(param_2);
    return;
}


// ===== sym.usb_qdss_free_req @ 0x08001438 (size 136) =====

void sym.usb_qdss_free_req(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000400,"usb_qdss_free_req");
    }
    else {
        mutex_lock(arg1 + 0xd0);
        if (*(arg1 + 0x100) == '\0') {
            _printk(0x80005b4,"usb_qdss_free_req",*arg1);
        }
        else {
            sym.qdss_free_reqs(arg1 + -0x150);
        }
        mutex_unlock(arg1 + 0xd0);
    }
    return;
}


// ===== sym.qdss_free_reqs @ 0x080014c0 (size 256) =====

void sym.qdss_free_reqs(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0x210);
    if (*(arg1 + 0x180) == arg1 + 0x180) {
        iVar5 = 0;
    }
    else {
        iVar5 = 0;
        piVar6 = *(arg1 + 0x180);
        do {
            piVar7 = *piVar6;
            uVar4 = __list_del_entry_valid(piVar6);
            if ((uVar4 & 1) != 0) {
                iVar1 = *piVar6;
                piVar2 = piVar6[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            usb_ep_free_request(*(arg1 + 0xe8),piVar6[-2]);
            kfree(piVar6 + -2);
            iVar5 = iVar5 + 1;
            piVar6 = piVar7;
        } while (piVar7 != arg1 + 0x180);
    }
    ipc_log_string(_segment.ehdr,"%s: channel:%s data_write_req:%d freed\n","qdss_free_reqs",*(arg1 + 0x150),iVar5);
    _raw_spin_unlock_irqrestore(arg1 + 0x210,uVar3);
    return;
}


// ===== sym.usb_qdss_alloc_req @ 0x080015c0 (size 464) =====

ulong sym.usb_qdss_alloc_req(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000400,"usb_qdss_alloc_req");
        uVar9 = 0xffffffea;
    }
    else {
        uVar8 = arg2 & 0xffffffff;
        ipc_log_string(_segment.ehdr,"%s: channel:%s num_write_buf:%d\n","usb_qdss_alloc_req",*arg1,uVar8);
        if (arg1 + -0x150 == 0) {
            _printk(0x8000582,"usb_qdss_alloc_req",*arg1);
            uVar9 = 0xffffffed;
        }
        else {
            mutex_lock();
            if (0 < arg2) {
                uVar9 = *(arg1 + -0x68);
                do {
                    iVar4 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar4 = 0x30;
                    }
                    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x20);
                    if (piVar3 == NULL) {
code_r0x08001754:
                        sym.qdss_free_reqs(arg1 + -0x150);
                        mutex_unlock(arg1 + 0xd0);
                        return 0xfffffff4;
                    }
                    iVar4 = usb_ep_alloc_request(uVar9,0xa20);
                    if (iVar4 == 0) {
                        _printk(0x8000ca6,"usb_qdss_alloc_req");
                        kfree(piVar3);
                        goto code_r0x08001754;
                    }
                    uVar5 = _raw_spin_lock_irqsave(arg1 + 0xc0);
                    *piVar3 = iVar4;
                    piVar1 = piVar3 + 2;
                    *(iVar4 + 0x30) = sym.qdss_write_complete.68df7a556070e599ad999f95de1f638a.cfi_jt;
                    *(iVar4 + 0x38) = piVar3;
                    piVar7 = *(arg1 + 0x38);
                    uVar6 = __list_add_valid(piVar1,piVar7,arg1 + 0x30);
                    if ((uVar6 & 1) != 0) {
                        *(arg1 + 0x38) = piVar1;
                        piVar3[2] = arg1 + 0x30;
                        piVar3[3] = piVar7;
                        *piVar7 = piVar1;
                    }
                    _raw_spin_unlock_irqrestore(arg1 + 0xc0,uVar5);
                    uVar2 = uVar8 - 1;
                    uVar8 = uVar2;
                } while (uVar2 != 0);
            }
            mutex_unlock(arg1 + 0xd0);
            uVar9 = 0;
        }
    }
    return uVar9;
}


// ===== sym.qdss_write_complete @ 0x08001790 (size 364) =====

void sym.qdss_write_complete(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg2 + 0x38);
    iVar2 = *arg1;
    iVar6 = *(iVar9 + 8);
    ipc_log_string(_segment.ehdr,"%s: channel:%s ep:%s req:%pK req->status:%d req->length:%d\n","qdss_write_complete"
                   ,*(iVar2 + 0x150),*(arg1 + 8),arg2,*(arg2 + 0x54),*(arg2 + 8));
    uVar4 = _raw_spin_lock_irqsave(iVar2 + 0x210);
    iVar1 = iVar9 + 0x10;
    uVar5 = __list_del_entry_valid(iVar1);
    if ((uVar5 & 1) != 0) {
        iVar3 = *(iVar9 + 0x10);
        piVar8 = *(iVar9 + 0x18);
        *(iVar3 + 8) = piVar8;
        *piVar8 = iVar3;
    }
    piVar8 = *(iVar2 + 0x188);
    uVar5 = __list_add_valid(iVar1,piVar8,iVar2 + 0x180);
    if ((uVar5 & 1) != 0) {
        *(iVar2 + 0x188) = iVar1;
        *(iVar9 + 0x10) = iVar2 + 0x180;
        *(iVar9 + 0x18) = piVar8;
        *piVar8 = iVar1;
    }
    if (((*(iVar2 + 0x250) == '\0') && (iVar2 + 0x1a0 == *(iVar2 + 0x1a0))) && (iVar2 + 400 == *(iVar2 + 400))) {
        complete(iVar2 + 600);
    }
    if (*(arg2 + 8) != 0) {
        *(iVar6 + 0xc) = *(arg2 + 0x58);
        *(iVar6 + 0x10) = *(arg2 + 0x54);
    }
    _raw_spin_unlock_irqrestore(iVar2 + 0x210,uVar4);
    pcVar7 = *(iVar2 + 0x168);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar7,0x80003a0);
        (*pcVar7)(*(iVar2 + 0x170),3,iVar6,0);
    }
    return;
}


// ===== sym.usb_qdss_write @ 0x08001904 (size 616) =====

ulong sym.usb_qdss_write(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t *piVar12;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000400,"usb_qdss_write");
        return 0xffffffea;
    }
    iVar1 = arg1 + 0xd0;
    iVar2 = arg1 + 0xc0;
    mutex_lock(iVar1);
    ipc_log_string(_segment.ehdr,"%s: channel:%s d_req:%pK\n","usb_qdss_write",*arg1,arg2);
    uVar8 = _raw_spin_lock_irqsave(iVar2);
    if ((*(arg1 + 0x100) == '\0') || (*(arg1 + -0x14) == 0)) {
        _raw_spin_unlock_irqrestore(iVar2,uVar8);
        ipc_log_string(_segment.ehdr,"%s: return -EIO\n","usb_qdss_write");
    }
    else {
        piVar3 = arg1 + 0x30;
        if (*piVar3 == piVar3) {
            _printk(0x800074c);
            _raw_spin_unlock_irqrestore(iVar2,uVar8);
            mutex_unlock(iVar1);
            return 0xfffffff5;
        }
        piVar12 = *(arg1 + 0x30);
        uVar9 = __list_del_entry_valid(piVar12);
        if ((uVar9 & 1) != 0) {
            iVar11 = *piVar12;
            piVar4 = piVar12[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        puVar13 = *(arg1 + 0x48);
        uVar9 = __list_add_valid(piVar12,puVar13,arg1 + 0x40);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 0x48) = piVar12;
            *piVar12 = arg1 + 0x40;
            piVar12[1] = puVar13;
            *puVar13 = piVar12;
        }
        _raw_spin_unlock_irqrestore(iVar2,uVar8);
        piVar12[-1] = arg2;
        puVar13 = piVar12[-2];
        *puVar13 = *arg2;
        uVar8 = _segment.ehdr;
        uVar5 = *(arg2 + 8);
        *(puVar13 + 1) = uVar5;
        iVar11 = *(arg2 + 0x20);
        puVar13[3] = iVar11;
        uVar6 = *(arg2 + 0x28);
        *(puVar13 + 4) = uVar6;
        if (iVar11 == 0) {
            pcVar10 = "%s: %s: req:%pK rq->length:0x%x\n";
        }
        else {
            pcVar10 = "%s: %s: req:%pK req->num_sgs:0x%x\n";
            uVar5 = uVar6;
        }
        ipc_log_string(uVar8,pcVar10,"usb_qdss_write",*arg1,puVar13,uVar5);
        iVar7 = usb_ep_queue(*(arg1 + -0x68),puVar13,0xa20);
        if (iVar7 == 0) {
            mutex_unlock(iVar1);
            return 0;
        }
        uVar8 = _raw_spin_lock_irqsave(iVar2);
        uVar9 = __list_del_entry_valid(piVar12);
        if ((uVar9 & 1) != 0) {
            iVar11 = *piVar12;
            piVar4 = piVar12[1];
            *(iVar11 + 8) = piVar4;
            *piVar4 = iVar11;
        }
        puVar13 = *(arg1 + 0x38);
        uVar9 = __list_add_valid(piVar12,puVar13,piVar3);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 0x38) = piVar12;
            *piVar12 = piVar3;
            piVar12[1] = puVar13;
            *puVar13 = piVar12;
        }
        _raw_spin_unlock_irqrestore(iVar2,uVar8);
        _printk(0x8000b97);
    }
    mutex_unlock(iVar1);
    return 0xfffffffb;
}


// ===== sym.usb_qdss_open @ 0x08001b70 (size 524) =====

code * sym.usb_qdss_open(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: called for channel:%s\n","usb_qdss_open",arg1);
    if (arg3 == 0) {
        _printk(0x8000967,"usb_qdss_open");
    }
    else {
        uVar2 = _raw_spin_lock_irqsave(obj.channel_lock);
        while( true ) {
            pcVar4 = _obj._qdss_ipc_log;
            if (_obj._qdss_ipc_log != obj._qdss_ipc_log) {
                do {
                    iVar1 = strcmp(arg1,*(pcVar4 + -8));
                    if (iVar1 == 0) {
                        pcVar3 = pcVar4 + -0x158;
                        iVar1 = strcmp(arg1,"qdss_sw");
                        if (iVar1 == 0) {
                            if ((pcVar3 == NULL) || (*pcVar3 == 0)) goto code_r0x08001c18;
                            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
                        }
                        else {
                            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
                            if (pcVar3 == NULL) goto code_r0x08001ca0;
                        }
                        mutex_lock(pcVar4 + 200);
                        ipc_log_string(_segment.ehdr,"%s: qdss ctx found for channel:%s\n","usb_qdss_open",arg1);
                        *(pcVar4 + 0x100) = 0;
                        pcVar4[0xf8] = 0x1;
                        *(pcVar4 + 0x10) = arg3;
                        *(pcVar4 + 0x18) = arg2;
                        if (*(pcVar4 + -0x1c) != 0) {
                            queue_work_on(0x20,*(pcVar4 + 0xc0),pcVar4 + 0x58);
                        }
                        mutex_unlock(pcVar4 + 200);
                        return pcVar4 + -8;
                    }
                    pcVar4 = *pcVar4;
                } while (pcVar4 != obj._qdss_ipc_log);
            }
            iVar1 = strcmp(arg1,"qdss_sw");
            if (iVar1 != 0) break;
code_r0x08001c18:
            ipc_log_string(_segment.ehdr,"%s: qdss_sw not added to config, fall back to qdss_mdm\n","usb_qdss_open");
            arg1 = "qdss_mdm";
        }
        _raw_spin_unlock_irqrestore(obj.channel_lock,uVar2);
code_r0x08001ca0:
        ipc_log_string(_segment.ehdr,"%s: failed to find channel:%s\n","usb_qdss_open",arg1);
    }
    return NULL;
}


// ===== sym.usb_qdss_close @ 0x08001d7c (size 604) =====

void sym.usb_qdss_close(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    code *pcVar5;
    uint uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000400,"usb_qdss_close");
    }
    else {
        ipc_log_string(_segment.ehdr,"%s: channel:%s\n","usb_qdss_close",*arg1);
        mutex_lock(arg1 + 0xd0);
        if (*(arg1 + 0x100) == '\0') {
            _printk(0x80005b4,"usb_qdss_close",*arg1);
        }
        else {
            iVar1 = arg1 + 0xc0;
            uVar8 = _raw_spin_lock_irqsave(iVar1);
            piVar2 = arg1 + 0x50;
            *(arg1 + 0x100) = 0;
            puVar10 = *(arg1 + 0x40);
            while (puVar10 != arg1 + 0x40) {
                piVar11 = *(arg1 + 0x48);
                uVar9 = __list_del_entry_valid(piVar11);
                if ((uVar9 & 1) != 0) {
                    iVar3 = *piVar11;
                    piVar4 = piVar11[1];
                    *(iVar3 + 8) = piVar4;
                    *piVar4 = iVar3;
                }
                puVar10 = *(arg1 + 0x58);
                uVar9 = __list_add_valid(piVar11,puVar10,piVar2);
                if ((uVar9 & 1) != 0) {
                    *(arg1 + 0x58) = piVar11;
                    *piVar11 = piVar2;
                    piVar11[1] = puVar10;
                    *puVar10 = piVar11;
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar8);
                uVar6 = usb_ep_dequeue(*(arg1 + -0x68),piVar11[-2]);
                ipc_log_string(_segment.ehdr,"%s: dequeue req:%pK status=%d\n","usb_qdss_close",piVar11[-2],uVar6);
                uVar8 = _raw_spin_lock_irqsave(iVar1);
                puVar10 = *(arg1 + 0x40);
            }
            piVar11 = *piVar2;
            _raw_spin_unlock_irqrestore(iVar1,uVar8);
            if (piVar11 != piVar2) {
                ipc_log_string(_segment.ehdr,"%s: waiting for completion on dequeued requests\n","usb_qdss_close");
                wait_for_completion(arg1 + 0x108);
            }
            if (*piVar2 != piVar2) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8001fd8);
                (*pcVar5)();
            }
            sym.qdss_free_reqs(arg1 + -0x150);
            *(arg1 + 0x18) = 0;
            if (*(arg1 + -0x14) != 0) {
                uVar8 = *arg1;
                iVar7 = strcmp(uVar8,"qdss_mdm");
                if ((iVar7 != 0) && (iVar7 = strcmp(uVar8,"qdss_sw"), iVar7 != 0)) {
                    if (*(arg1 + -8) != 0) {
                        usb_ep_dequeue(*(arg1 + -0x68));
                    }
                    iVar7 = sym.set_qdss_data_connection(arg1 + -0x150);
                    if (iVar7 != 0) {
                        _printk(0x8000894,"usb_qdss_close");
                    }
                }
            }
        }
        mutex_unlock(arg1 + 0xd0);
    }
    return;
}


// ===== sym.qdss_alloc_inst @ 0x08001fec (size 120) =====

int64_t sym.qdss_alloc_inst(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,200);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.usb_qdss_set_inst_name.68df7a556070e599ad999f95de1f638a.cfi_jt;
        *(iVar1 + 0xb0) = sym.usb_qdss_free_inst.68df7a556070e599ad999f95de1f638a.cfi_jt;
        config_group_init_type_name(iVar1,0x8000b1f,obj.qdss_func_type);
    }
    return iVar1;
}


// ===== sym.qdss_alloc @ 0x08002064 (size 92) =====

void sym.qdss_alloc(int64_t arg1)

{
    ulong *puVar1;
    
    puVar1 = *(arg1 + 0xb8);
    *puVar1 = "usb_qdss";
    puVar1[1] = obj.qdss_strings;
    puVar1[9] = sym.qdss_bind.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[10] = sym.qdss_unbind.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xd] = sym.qdss_set_alt.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xb] = sym.qdss_free_func.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0xf] = sym.qdss_disable.68df7a556070e599ad999f95de1f638a.cfi_jt;
    puVar1[0x10] = 0;
    return;
}


// ===== sym.usb_qdss_free_inst @ 0x080020c0 (size 60) =====

void sym.usb_qdss_free_inst(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 0xb8));
    kfree(arg1);
    return;
}


// ===== sym.usb_qdss_set_inst_name @ 0x080020fc (size 716) =====

ulong sym.usb_qdss_set_inst_name(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint uVar8;
    ulong *in_x18;
    ulong uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = strlen(arg2);
    if (0xf < iVar4 + 1U) {
        return 0xffffffdc;
    }
    iVar4 = kstrndup(arg2,iVar4 + 1U,0xcc0);
    uVar5 = _segment.ehdr;
    if (iVar4 == 0) {
        uVar9 = 0;
        uVar5 = 0x800063f;
        goto code_r0x080023a4;
    }
    *(arg1 + 0xc0) = iVar4;
    ipc_log_string(uVar5,"%s: qdss: channel_name:%s\n","usb_qdss_set_inst_name");
    uVar9 = *(arg1 + 0xc0);
    uVar5 = _raw_spin_lock_irqsave(obj.channel_lock);
    for (pcVar10 = _obj._qdss_ipc_log; pcVar10 != obj._qdss_ipc_log; pcVar10 = *pcVar10) {
        iVar3 = strcmp(uVar9,*(pcVar10 + -8));
        if (iVar3 == 0) {
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
            _printk(0x8000c1e,"alloc_usb_qdss",uVar9);
            goto code_r0x08002398;
        }
    }
    _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
    uVar6 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x278);
    if (uVar6 == 0) {
        _printk(0x8000696,"alloc_usb_qdss");
    }
    else {
        iVar4 = alloc_workqueue(0x8000567,0xe000a,1,uVar9);
        *(uVar6 + 0x218) = iVar4;
        if (iVar4 == 0) {
            kfree(uVar6);
        }
        else {
            uVar5 = _raw_spin_lock_irqsave(obj.channel_lock);
            *(uVar6 + 0x150) = uVar9;
            iVar3 = strcmp(uVar9,"qdss");
            if (iVar3 == 0) {
                uVar8 = 1;
code_r0x08002254:
                *(uVar6 + 0x178) = uVar8;
            }
            else {
                iVar3 = strcmp(uVar9,"qdss_ebc");
                if (iVar3 == 0) {
                    uVar8 = 3;
                    goto code_r0x08002254;
                }
                *(uVar6 + 0x178) = 0;
            }
            piVar2 = _obj.channel_lock;
            piVar1 = uVar6 + 0x158;
            uVar7 = __list_add_valid(piVar1,_obj.channel_lock,obj._qdss_ipc_log);
            if ((uVar7 & 1) != 0) {
                _obj.channel_lock = piVar1;
                *(uVar6 + 0x158) = obj._qdss_ipc_log;
                *(uVar6 + 0x160) = piVar2;
                *piVar2 = piVar1;
            }
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar5);
            *(uVar6 + 0x210) = 0;
            *(uVar6 + 0x180) = uVar6 + 0x180;
            *(uVar6 + 0x188) = uVar6 + 0x180;
            *(uVar6 + 400) = uVar6 + 400;
            *(uVar6 + 0x198) = uVar6 + 400;
            *(uVar6 + 0x1a0) = uVar6 + 0x1a0;
            *(uVar6 + 0x1a8) = uVar6 + 0x1a0;
            *(uVar6 + 0x1b0) = 0xfffffffe0;
            *(uVar6 + 0x1b8) = uVar6 + 0x1b8;
            *(uVar6 + 0x1c0) = uVar6 + 0x1b8;
            *(uVar6 + 0x1e0) = 0xfffffffe0;
            *(uVar6 + 0x1c8) = sym.usb_qdss_connect_work.68df7a556070e599ad999f95de1f638a.cfi_jt;
            *(uVar6 + 0x1e8) = uVar6 + 0x1e8;
            *(uVar6 + 0x1f0) = uVar6 + 0x1e8;
            *(uVar6 + 0x1f8) = sym.usb_qdss_disconnect_work.68df7a556070e599ad999f95de1f638a.cfi_jt;
            __mutex_init(uVar6 + 0x220,"&qdss->mutex",obj.alloc_usb_qdss.__key);
            *(uVar6 + 600) = 0;
            __init_swait_queue_head(uVar6 + 0x260,"&x->wait",obj.alloc_usb_qdss.__key);
            if (uVar6 < 0xfffffffffffff001) {
                *(arg1 + 0xb8) = uVar6;
                return 0;
            }
        }
    }
code_r0x08002398:
    uVar9 = *(arg1 + 0xc0);
    uVar5 = 0x800047d;
code_r0x080023a4:
    _printk(uVar5,uVar9);
    return 0xfffffff4;
}


// ===== sym.usb_qdss_connect_work @ 0x080023c8 (size 376) =====

void sym.usb_qdss_connect_work(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x74) == 0) {
        cancel_work_sync(arg1 + 0x30);
        return;
    }
    iVar1 = arg1 + 0x70;
    mutex_lock(iVar1);
    puVar4 = arg1 + -0x60;
    ipc_log_string(_segment.ehdr,"%s: channel:%s opened:%d\n","usb_qdss_connect_work",*puVar4,*(arg1 + 0xa0));
    if (*(arg1 + 0xa0) != '\0') {
        uVar5 = *puVar4;
        iVar2 = strcmp(uVar5,"qdss_mdm");
        if ((iVar2 == 0) || (iVar2 = strcmp(uVar5,"qdss_sw"), iVar2 == 0)) {
code_r0x0800249c:
            mutex_unlock(iVar1);
            pcVar3 = *(arg1 + -0x48);
            if (pcVar3 == NULL) {
                return;
            }
            __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar3,0x80003c0);
            (*pcVar3)(*(arg1 + -0x40),0,0,puVar4);
            return;
        }
        iVar2 = sym.set_qdss_data_connection(arg1 + -0x1b0);
        if (iVar2 == 0) {
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x60);
            iVar6 = *(arg1 + -0x68);
            _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar5);
            if (iVar6 != 0) {
                iVar2 = usb_ep_queue(*(arg1 + -200),iVar6,0xa20);
                if (iVar2 == 0) goto code_r0x0800249c;
                _printk(0x8000825,"usb_qdss_connect_work",iVar2);
            }
        }
        else {
            _printk(0x8000aca,iVar2);
        }
    }
    mutex_unlock(iVar1);
    return;
}


// ===== sym.usb_qdss_disconnect_work @ 0x08002540 (size 280) =====

void sym.usb_qdss_disconnect_work(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","usb_qdss_disconnect_work",*(arg1 + -0x90));
    pcVar3 = *(arg1 + -0x78);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x3663961c71c6fd25,pcVar3,0x80003e0);
        (*pcVar3)(*(arg1 + -0x70),1,0,0);
    }
    mutex_lock(arg1 + 0x40);
    if (*(arg1 + 0x70) != '\0') {
        uVar4 = *(arg1 + -0x90);
        iVar1 = strcmp(uVar4,"qdss_mdm");
        if (((iVar1 != 0) && (iVar1 = strcmp(uVar4,"qdss_sw"), iVar1 != 0)) &&
           (iVar1 = sym.set_qdss_data_connection(arg1 + -0x1e0), iVar1 != 0)) {
            _printk(0x80006bc);
            iVar2 = *(arg1 + -0xb0);
            goto joined_r0x0800260c;
        }
    }
    iVar2 = *(arg1 + -0xb0);
joined_r0x0800260c:
    if ((iVar2 != 0) && (*(iVar2 + 0xd8) != 0)) {
        __pm_runtime_idle(*(iVar2 + 0xd8),5);
    }
    mutex_unlock(arg1 + 0x40);
    return;
}


// ===== sym.qdss_attr_release @ 0x08002658 (size 36) =====

void sym.qdss_attr_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_put_function_instance();
    return;
}


// ===== sym.qdss_enable_debug_inface_show @ 0x0800267c (size 88) =====

int64_t sym.qdss_enable_debug_inface_show(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "Disabled";
    if (*(*(arg1 + 0xb8) + 0x140) != '\0') {
        pcVar1 = "Enabled";
    }
    iVar2 = scnprintf(arg2,0x1000,0x8000c40,pcVar1);
    return iVar2;
}


// ===== sym.qdss_enable_debug_inface_store @ 0x080026d4 (size 220) =====

uint64_t sym.qdss_enable_debug_inface_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    ulong uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0xb8);
    acStack_3c[0] = '\0';
    if (arg2 == 0) {
        _printk(0x8000c44);
    }
    else {
        iVar2 = kstrtou8(arg2,0,acStack_3c);
        if (((iVar2 == 0) || (acStack_3c[0] == '\0')) || (acStack_3c[0] == '\x01')) {
            iVar6 = iVar10 + 0x210;
            uVar4 = _raw_spin_lock_irqsave(iVar6);
            *(iVar10 + 0x140) = acStack_3c[0] != '\0';
            _raw_spin_unlock_irqrestore(iVar6,uVar4);
        }
        else {
            _printk(0x8000844);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar12 = __stack_chk_fail();
    iVar6 = auVar12._8_8_;
    iVar10 = auVar12._0_8_;
    *extraout_x18 = sym.qdss_bind;
    uVar4 = **(iVar10 + 0x30);
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_bind",*(iVar6 + 0x150));
    uVar3 = usb_interface_id(iVar10,iVar6);
    if (uVar3 < 0) {
code_r0x08002a60:
        _printk(0x80009e0);
        return uVar3;
    }
    *0x800022a = uVar3;
    *(iVar6 + 0x13b) = *0x800022a;
    if (obj.qdss_string_defs == 0x0) {
        uVar3 = usb_string_id(*(iVar10 + 0x30));
        if (uVar3 < 0) {
            return uVar3;
        }
        obj.qdss_string_defs = SUB41(uVar3,0);
        cVar1 = *(iVar6 + 0x140);
        *0x8000230 = obj.qdss_string_defs;
    }
    else {
        cVar1 = *(iVar6 + 0x140);
    }
    if (cVar1 != '\0') {
        uVar3 = usb_interface_id(iVar10,iVar6);
        if (uVar3 < 0) goto code_r0x08002a60;
        *0x8000233 = uVar3;
        *(iVar6 + 0x13a) = *0x8000233;
        if (*0x8000208 == '\0') {
            uVar3 = usb_string_id(*(iVar10 + 0x30));
            if (uVar3 < 0) {
                return uVar3;
            }
            *0x8000208 = uVar3;
            *0x8000239 = *0x8000208;
        }
    }
    uVar11 = *(iVar6 + 0x150);
    iVar2 = strcmp(uVar11,"qdss_mdm");
    if ((iVar2 == 0) || (iVar2 = strcmp(uVar11,"qdss_sw"), iVar2 == 0)) {
        *0x800023c = 0;
    }
    piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_data_desc);
    if (piVar5 != NULL) {
        *(iVar6 + 0xe8) = piVar5;
        *piVar5 = iVar6;
        uVar11 = *(iVar6 + 0x150);
        iVar2 = strcmp(uVar11,"qdss_mdm");
        if ((iVar2 != 0) && (iVar2 = strcmp(uVar11,"qdss_sw"), iVar2 != 0)) {
            iVar2 = msm_ep_set_mode(*(iVar6 + 0xe8),*(iVar6 + 0x178));
            if (iVar2 < 0) goto code_r0x08002a84;
            msm_ep_update_ops(*(iVar6 + 0xe8));
        }
        if (*(iVar6 + 0x140) == '\0') {
code_r0x08002974:
            uVar4 = *(iVar6 + 0x150);
            iVar2 = strcmp(uVar4,"qdss_mdm");
            if (((iVar2 == 0) || (iVar2 = strcmp(uVar4,"qdss_sw"), iVar2 == 0)) ||
               (iVar2 = sym.alloc_hw_req(*(iVar6 + 0xe8)), iVar2 == 0)) {
                *0x800025d = *0x8000242;
                *0x8000266 = *0x8000242;
                if (*(iVar6 + 0x140) == '\0') {
                    pcVar7 = obj.qdss_fs_data_only_desc;
                    pcVar8 = obj.qdss_hs_data_only_desc;
                    pcVar9 = obj.qdss_ss_data_only_desc;
                }
                else {
                    pcVar7 = obj.qdss_fs_desc;
                    *0x800026f = *0x800024b;
                    pcVar8 = obj.qdss_hs_desc;
                    *0x8000278 = *0x800024b;
                    pcVar9 = obj.qdss_ss_desc;
                    *0x8000281 = *0x8000254;
                    *0x800028a = *0x8000254;
                }
                iVar2 = usb_assign_descriptors(iVar6,pcVar7,pcVar8,pcVar9,pcVar9);
                if (iVar2 == 0) {
                    return 0;
                }
                if (*(iVar6 + 0x148) != 0) {
                    usb_ep_free_request(*(iVar6 + 0xe8));
                    *(iVar6 + 0x148) = 0;
                }
            }
            else {
                _printk(0x8000a6e,"qdss_bind",iVar2);
            }
            goto code_r0x08002a84;
        }
        piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_ctrl_in_desc);
        if (piVar5 != NULL) {
            *(iVar6 + 0xe0) = piVar5;
            *piVar5 = iVar6;
            piVar5 = usb_ep_autoconfig(uVar4,obj.qdss_fs_ctrl_out_desc);
            if (piVar5 != NULL) {
                *(iVar6 + 0xd8) = piVar5;
                *piVar5 = iVar6;
                goto code_r0x08002974;
            }
        }
    }
    _printk(0x800098b,"qdss_bind");
code_r0x08002a84:
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(iVar6 + 0x150));
    if (*(iVar6 + 0xe0) != NULL) {
        **(iVar6 + 0xe0) = 0;
    }
    if (*(iVar6 + 0xd8) != NULL) {
        **(iVar6 + 0xd8) = 0;
    }
    if (*(iVar6 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(iVar6 + 0xe8),0);
        **(iVar6 + 0xe8) = 0;
    }
    return 0xffffffa1;
}


// ===== sym.qdss_bind @ 0x080027b0 (size 880) =====

int sym.qdss_bind(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    int64_t *piVar3;
    code *pcVar4;
    code *pcVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong uVar7;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = **(arg1 + 0x30);
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_bind",*(arg2 + 0x150));
    iVar2 = usb_interface_id(arg1,arg2);
    if (iVar2 < 0) {
code_r0x08002a60:
        _printk(0x80009e0);
        return iVar2;
    }
    *0x800022a = iVar2;
    *(arg2 + 0x13b) = *0x800022a;
    if (obj.qdss_string_defs == 0x0) {
        iVar2 = usb_string_id(*(arg1 + 0x30));
        if (iVar2 < 0) {
            return iVar2;
        }
        obj.qdss_string_defs = SUB41(iVar2,0);
        cVar1 = *(arg2 + 0x140);
        *0x8000230 = obj.qdss_string_defs;
    }
    else {
        cVar1 = *(arg2 + 0x140);
    }
    if (cVar1 != '\0') {
        iVar2 = usb_interface_id(arg1,arg2);
        if (iVar2 < 0) goto code_r0x08002a60;
        *0x8000233 = iVar2;
        *(arg2 + 0x13a) = *0x8000233;
        if (*0x8000208 == '\0') {
            iVar2 = usb_string_id(*(arg1 + 0x30));
            if (iVar2 < 0) {
                return iVar2;
            }
            *0x8000208 = iVar2;
            *0x8000239 = *0x8000208;
        }
    }
    uVar8 = *(arg2 + 0x150);
    iVar2 = strcmp(uVar8,"qdss_mdm");
    if ((iVar2 == 0) || (iVar2 = strcmp(uVar8,"qdss_sw"), iVar2 == 0)) {
        *0x800023c = 0;
    }
    piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_data_desc);
    if (piVar3 != NULL) {
        *(arg2 + 0xe8) = piVar3;
        *piVar3 = arg2;
        uVar8 = *(arg2 + 0x150);
        iVar2 = strcmp(uVar8,"qdss_mdm");
        if ((iVar2 != 0) && (iVar2 = strcmp(uVar8,"qdss_sw"), iVar2 != 0)) {
            iVar2 = msm_ep_set_mode(*(arg2 + 0xe8),*(arg2 + 0x178));
            if (iVar2 < 0) goto code_r0x08002a84;
            msm_ep_update_ops(*(arg2 + 0xe8));
        }
        if (*(arg2 + 0x140) == '\0') {
code_r0x08002974:
            uVar7 = *(arg2 + 0x150);
            iVar2 = strcmp(uVar7,"qdss_mdm");
            if (((iVar2 == 0) || (iVar2 = strcmp(uVar7,"qdss_sw"), iVar2 == 0)) ||
               (iVar2 = sym.alloc_hw_req(*(arg2 + 0xe8)), iVar2 == 0)) {
                *0x800025d = *0x8000242;
                *0x8000266 = *0x8000242;
                if (*(arg2 + 0x140) == '\0') {
                    pcVar4 = obj.qdss_fs_data_only_desc;
                    pcVar5 = obj.qdss_hs_data_only_desc;
                    pcVar6 = obj.qdss_ss_data_only_desc;
                }
                else {
                    pcVar4 = obj.qdss_fs_desc;
                    *0x800026f = *0x800024b;
                    pcVar5 = obj.qdss_hs_desc;
                    *0x8000278 = *0x800024b;
                    pcVar6 = obj.qdss_ss_desc;
                    *0x8000281 = *0x8000254;
                    *0x800028a = *0x8000254;
                }
                iVar2 = usb_assign_descriptors(arg2,pcVar4,pcVar5,pcVar6,pcVar6);
                if (iVar2 == 0) {
                    return 0;
                }
                if (*(arg2 + 0x148) != 0) {
                    usb_ep_free_request(*(arg2 + 0xe8));
                    *(arg2 + 0x148) = 0;
                }
            }
            else {
                _printk(0x8000a6e,"qdss_bind",iVar2);
            }
            goto code_r0x08002a84;
        }
        piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_ctrl_in_desc);
        if (piVar3 != NULL) {
            *(arg2 + 0xe0) = piVar3;
            *piVar3 = arg2;
            piVar3 = usb_ep_autoconfig(uVar7,obj.qdss_fs_ctrl_out_desc);
            if (piVar3 != NULL) {
                *(arg2 + 0xd8) = piVar3;
                *piVar3 = arg2;
                goto code_r0x08002974;
            }
        }
    }
    _printk(0x800098b,"qdss_bind");
code_r0x08002a84:
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(arg2 + 0x150));
    if (*(arg2 + 0xe0) != NULL) {
        **(arg2 + 0xe0) = 0;
    }
    if (*(arg2 + 0xd8) != NULL) {
        **(arg2 + 0xd8) = 0;
    }
    if (*(arg2 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(arg2 + 0xe8),0);
        **(arg2 + 0xe8) = 0;
    }
    return -0x5f;
}


// ===== sym.qdss_unbind @ 0x08002b20 (size 248) =====

void sym.qdss_unbind(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_unbind",*(arg1 + 0x150));
    sym.qdss_disable(arg1);
    flush_workqueue(*(arg1 + 0x218));
    if (*(arg1 + 0x148) != 0) {
        usb_ep_free_request(*(arg1 + 0xe8));
        *(arg1 + 0x148) = 0;
    }
    obj.qdss_string_defs = 0x0;
    *0x8000208 = 0;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_eps",*(arg1 + 0x150));
    if (*(arg1 + 0xe0) != NULL) {
        **(arg1 + 0xe0) = 0;
    }
    if (*(arg1 + 0xd8) != NULL) {
        **(arg1 + 0xd8) = 0;
    }
    if (*(arg1 + 0xe8) != 0) {
        msm_ep_clear_ops();
        msm_ep_set_mode(*(arg1 + 0xe8),0);
        **(arg1 + 0xe8) = 0;
    }
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","clear_desc",*(arg1 + 0x150));
    usb_free_all_descriptors(arg1);
    return;
}


// ===== sym.qdss_set_alt @ 0x08002c18 (size 724) =====

int sym.qdss_set_alt(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = **(*(arg1 + 0x30) + 0x30);
    ipc_log_string(_segment.ehdr,"%s: qdss pointer = %pK\n","qdss_set_alt",arg1);
    *(arg1 + 0x130) = iVar11;
    if (arg3 != 0) {
        iVar5 = 0;
        goto code_r0x08002ea4;
    }
    if (*(iVar11 + 0x58) < 3) {
        _printk(0x800071a,"qdss_set_alt");
    }
    else {
        if ((*(arg1 + 0x13b) == arg2) && ((*(arg1 + 0x214) & 1) == 0)) {
            if ((iVar11 != 0) &&
               (((*(iVar11 + 0xd8) != 0 && (iVar5 = __pm_runtime_resume(*(iVar11 + 0xd8),5), iVar5 < 0)) &&
                (iVar5 != -0x73)))) {
                puVar1 = *(iVar11 + 0xd8) + 0x1f8;
                uVar10 = *puVar1;
                do {
                    uVar9 = uVar10;
                    if (uVar9 == 0) break;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar2 = *puVar1;
                        uVar10 = uVar2;
                        if (uVar2 != uVar9) goto code_r0x08002ce4;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                            *puVar1 = uVar9 - 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x08002ce4:
                } while (uVar9 != uVar2);
            }
            puVar12 = arg1 + 0xe8;
            iVar5 = config_ep_by_speed(iVar11,arg1,*puVar12);
            if (iVar5 == 0) {
                iVar5 = usb_ep_enable(*puVar12);
                if (iVar5 == 0) {
                    uVar8 = 1;
code_r0x08002d9c:
                    **puVar12 = arg1;
                    *(arg1 + 0x214) = *(arg1 + 0x214) | uVar8;
                    goto code_r0x08002db0;
                }
                uVar6 = 0x8000c56;
            }
            else {
                uVar6 = 0x8000bc4;
            }
            _printk(uVar6,"qdss_set_alt",iVar5);
            if ((*(arg1 + 0x130) != 0) && (iVar11 = *(*(arg1 + 0x130) + 0xd8), iVar11 != 0)) {
                __pm_runtime_idle(iVar11,5);
            }
            goto code_r0x08002ea4;
        }
        if ((*(arg1 + 0x13a) != arg2) || (*(arg1 + 0x140) == '\0')) {
code_r0x08002db0:
            uVar6 = _segment.ehdr;
            if (*(arg1 + 0x140) == '\0') {
                if ((*(arg1 + 0x214) & 1) == 0) goto code_r0x08002df8;
                pcVar7 = "%s: usb_connected INTF disabled\n";
            }
            else {
                if ((~*(arg1 + 0x214) & 7) != 0) goto code_r0x08002df8;
                pcVar7 = "%s: usb_connected INTF enabled\n";
            }
            *(arg1 + 0x13c) = 1;
            ipc_log_string(uVar6,pcVar7,"qdss_set_alt");
code_r0x08002df8:
            if (*(arg1 + 0x13c) != 0) {
                queue_work_on(0x20,*(arg1 + 0x218),arg1 + 0x1b0);
            }
            return 0;
        }
        iVar5 = config_ep_by_speed(iVar11,arg1,*(arg1 + 0xe0));
        if (iVar5 == 0) {
            iVar5 = usb_ep_enable(*(arg1 + 0xe0));
            if (iVar5 != 0) goto code_r0x08002ea4;
            **(arg1 + 0xe0) = arg1;
            puVar12 = arg1 + 0xd8;
            *(arg1 + 0x214) = *(arg1 + 0x214) | 2;
            iVar5 = config_ep_by_speed(iVar11,arg1,*puVar12);
            if (iVar5 == 0) {
                iVar5 = usb_ep_enable(*puVar12);
                if (iVar5 != 0) goto code_r0x08002ea4;
                uVar8 = 4;
                goto code_r0x08002d9c;
            }
        }
    }
    iVar5 = -0x16;
code_r0x08002ea4:
    _printk(0x8000656,"qdss_set_alt",iVar5);
    sym.qdss_eps_disable(arg1);
    return iVar5;
}


// ===== sym.qdss_disable @ 0x08002eec (size 148) =====

void sym.qdss_disable(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_disable",*(arg1 + 0x150));
    iVar1 = arg1 + 0x210;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x13c) == 0) {
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(arg1 + 0x13c) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        sym.qdss_eps_disable(arg1);
        queue_work_on(0x20,*(arg1 + 0x218),arg1 + 0x1e0);
    }
    return;
}


// ===== sym.qdss_free_func @ 0x08002f80 (size 16) =====

void sym.qdss_free_func(int64_t arg1)

{
    *(arg1 + 0x140) = 0;
    return;
}


// ===== sym.qdss_eps_disable @ 0x08002f90 (size 164) =====

void sym.qdss_eps_disable(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(_segment.ehdr,"%s: channel:%s\n","qdss_eps_disable",*(arg1 + 0x150));
    uVar1 = *(arg1 + 0x214);
    uVar2 = uVar1;
    if ((uVar1 >> 1 & 1) != 0) {
        usb_ep_disable(*(arg1 + 0xe0));
        uVar2 = *(arg1 + 0x214);
        uVar1 = uVar2 & 0xfd;
        *(arg1 + 0x214) = uVar1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
        usb_ep_disable(*(arg1 + 0xd8));
        uVar1 = *(arg1 + 0x214);
        *(arg1 + 0x214) = uVar1 & 0xfb;
    }
    if ((uVar1 & 1) != 0) {
        usb_ep_disable(*(arg1 + 0xe8));
        *(arg1 + 0x214) = *(arg1 + 0x214) & 0xfe;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003034 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003078

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
    //switch table (4 cases) at 0x8000d2f
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800308c);
    (*pcVar1)();
}


// ===== sym.alloc_hw_req @ 0x0800308c (size 96) =====

uint sym.alloc_hw_req(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *arg1;
    iVar1 = usb_ep_alloc_request(arg1,0xa20);
    if (iVar1 == 0) {
        _printk(0x80004e4);
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = 0;
        *(iVar1 + 8) = 0x8000;
        *(iVar3 + 0x148) = iVar1;
    }
    return uVar2;
}


// ===== sym.set_qdss_data_connection @ 0x080030ec (size 792) =====

//WARNING: Control flow encountered bad instruction data

int sym.set_qdss_data_connection(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint64_t uVar7;
    int in_w1;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uint64_t uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x800056a,"set_qdss_data_connection");
        iVar4 = -0x16;
    }
    else if (in_w1 == 0) {
        iVar4 = msm_ep_unconfig(*(arg1 + 0xe8));
        if (iVar4 != 0) {
            _printk(0x8000b38);
        }
        if (*(arg1 + 0x178) == 1) {
            iVar8 = *(*(arg1 + 0x130) + 0xd8);
            uVar7 = usb_bam_get_bam_type(*(*(arg1 + 0x130) + 0x70));
            uVar1 = *(arg1 + 0x110);
            uVar2 = *(arg1 + 0x118);
            uVar3 = *(arg1 + 0x128);
            uVar6 = usb_bam_get_connection_idx(uVar7,0,1,0);
            iVar4 = usb_bam_disconnect_pipe(uVar7 & 0xffffffff,uVar6);
            if (iVar4 != 0) {
                _printk(0x80006d5);
            }
            dma_unmap_resource(*(iVar8 + 0x60),uVar2,uVar3,0,0);
            usb_bam_free_fifos(uVar7 & 0xffffffff,uVar6);
            kfree(uVar1);
        }
    }
    else if (*(arg1 + 0x178) == 1) {
        iVar8 = *(arg1 + 0x130);
        uVar7 = usb_bam_get_bam_type(*(iVar8 + 0x70));
        iStack_78 = *(arg1 + 0x110);
        iStack_70 = *(arg1 + 0x118);
        uStack_68 = *(arg1 + 0x120);
        uStack_60 = *(arg1 + 0x128);
        uVar9 = uVar7 & 0xffffffff;
        iVar8 = *(iVar8 + 0xd8);
        uStack_88 = *(arg1 + 0x100);
        uStack_80 = *(arg1 + 0x108);
        iVar4 = usb_bam_get_connection_idx(uVar7,0,1,0);
        if (iVar4 < 0) {
            _printk(0x8000503,"enable_qdss_bam_data_connection");
        }
        else {
            iVar5 = get_qdss_bam_info(uVar9,iVar4,&uStack_68,&uStack_60);
            if (iVar5 == 0) {
                iStack_70 = dma_map_resource(*(iVar8 + 0x60),uStack_68,uStack_60 & 0xffffffff,0,0);
                if (iStack_70 == 0) {
                    _printk(0x800066a);
                }
                else {
                    usb_bam_alloc_fifos(uVar9,iVar4);
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    iStack_78 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x20);
                    if (iStack_78 != 0) {
                        get_bam2bam_connection_info(uVar9,iVar4,&uStack_88,0,iStack_78,0);
                        msm_data_fifo_config
                                  (*(arg1 + 0xe8),*(iStack_78 + 0x10),*(iStack_78 + 0x18),uStack_88 & 0xffffffff);
                        iVar5 = msm_ep_config(*(arg1 + 0xe8),*(arg1 + 0x148),*(arg1 + 0x100) | 0x120);
                        if (iVar5 != 0) {
                            _printk(0x8000b7f);
                        }
                        iVar4 = usb_bam_connect(uVar9,iVar4,&uStack_88,iStack_70);
                        goto code_r0x08003394;
                    }
                    usb_bam_free_fifos(uVar9,iVar4);
                }
                iVar4 = -0xc;
            }
            else {
                _printk(0x8000b52,"enable_qdss_bam_data_connection",iVar5);
                iVar4 = iVar5;
            }
        }
    }
    else {
        iVar4 = msm_ep_config(*(arg1 + 0xe8),*(arg1 + 0x148),1);
        if (iVar4 != 0) {
            _printk(0x8000b7f);
        }
    }
code_r0x08003394:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return iVar4;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x08003468 (size 148) =====

int sym.init_module(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = ipc_log_context_create(10,"usb_qdss",0);
    _segment.ehdr = 0;
    if (uVar2 < 0xfffffffffffff001 && uVar2 != 0) {
        _segment.ehdr = uVar2;
    }
    _obj._qdss_ipc_log = obj._qdss_ipc_log;
    _obj.channel_lock = obj._qdss_ipc_log;
    iVar1 = usb_function_register(obj.qdssusb_func);
    if (iVar1 != 0) {
        _printk(0x80009fe,"usb_qdss_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080034fc (size 252) =====

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
    ipc_log_context_destroy(_segment.ehdr);
    usb_function_unregister(obj.qdssusb_func);
    ipc_log_string(_segment.ehdr,"%s: cleaning up channel resources.\n","qdss_cleanup");
    pcVar5 = _obj._qdss_ipc_log;
    if (_obj._qdss_ipc_log != obj._qdss_ipc_log) {
        do {
            pcVar6 = *pcVar5;
            destroy_workqueue(*(pcVar5 + 0xc0));
            uVar3 = _raw_spin_lock_irqsave(obj.channel_lock);
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
                kfree(pcVar5 + -0x158);
            }
            _raw_spin_unlock_irqrestore(obj.channel_lock,uVar3);
            pcVar5 = pcVar6;
        } while (pcVar6 != obj._qdss_ipc_log);
    }
    return;
}

