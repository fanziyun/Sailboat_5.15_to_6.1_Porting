// decompiled from qsee_ipc_irq_bridge by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08002080

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 == -0x7bcbda558eb245e5) {
            pcVar2 = sym.qiib_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08002040;
                pcVar2 = sym.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001108;
            }
            pcVar2 = sym.qiib_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.qiib_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001108:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002040;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08002040;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qiib_restart_notifier_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002040;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002040:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002094);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    if (*(_segment.ehdr + 0x58) == 0) {
        ipc_log_context_destroy(0);
    }
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_of_get_next_available_child,0xdc0,0x60);
    _segment.ehdr = iVar2;
    if (iVar2 == 0) {
        iVar1 = -0xc;
        _printk(0x8000404,"qsee_ipc_irq_bridge_init",0xfffffff4);
        pcVar3 = "%s: driver data init failed %d\n";
    }
    else {
        *iVar2 = iVar2;
        *(iVar2 + 8) = iVar2;
        __mutex_init(iVar2 + 0x10,"&qiib_info->list_lock",
                     reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        iVar2 = ipc_log_context_create(4,"qsee_ipc_irq_bridge",0);
        *(_segment.ehdr + 0x58) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80003cb,"qiib_driver_data_init");
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: unable to create logging context\n","qiib_driver_data_init");
        }
        iVar1 = __platform_driver_register
                          (reloc.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
        if (iVar1 == 0) {
            return 0;
        }
        _printk(0x800084d,"qsee_ipc_irq_bridge_init",iVar1);
        pcVar3 = "%s: platform driver register failed %d\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x58),pcVar3,"qsee_ipc_irq_bridge_init",iVar1);
    return iVar1;
}


// ===== sym.qiib_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

uint32_t sym.qiib_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xd8);
    if (iVar4 == 0) {
        _printk(0x800043f,"qiib_poll");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_poll");
        uVar2 = 8;
    }
    else if (*(iVar4 + 0x100) == '\0') {
        if (((param_2 != NULL) && (iVar4 + 0xb0 != 0)) && (pcVar3 = *param_2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80001f0);
            (*pcVar3)(param_1,iVar4 + 0xb0,param_2);
        }
        uVar1 = _raw_spin_lock_irqsave(iVar4 + 0xd0);
        if (*(iVar4 + 0xcc) == 0) {
            uVar2 = 0;
        }
        else {
            if (*(_segment.ehdr + 0x58) != 0) {
                ipc_log_string(*(_segment.ehdr + 0x58),"%s set POLLIN on [%s] count[%d]\n","qiib_poll",
                               *(iVar4 + 0x18));
            }
            uVar2 = 1;
            *(iVar4 + 0xcc) = 0;
        }
        _raw_spin_unlock_irqrestore(iVar4 + 0xd0,uVar1);
        if (*(iVar4 + 0x100) != '\0') {
            uVar2 = uVar2 | 0x2000;
            if (*(_segment.ehdr + 0x58) != 0) {
                ipc_log_string(*(_segment.ehdr + 0x58),"%s set POLLRDHUP on [%s] count[%d]\n","qiib_poll",
                               *(iVar4 + 0x18),*(iVar4 + 0xcc));
            }
        }
    }
    else {
        uVar2 = 0x2000;
    }
    return uVar2;
}


// ===== sym.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qiib_cleanup();
    return 0;
}


// ===== sym.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

uint32_t sym.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar10 = *(param_1 + 0x300);
    iVar4 = of_get_next_available_child(uVar10,0);
    if (iVar4 == 0) {
        *(_segment.ehdr + 8) = 0;
    }
    else {
        iVar3 = 0;
        do {
            iVar3 = iVar3 + 1;
            iVar4 = of_get_next_available_child(uVar10,iVar4);
            puVar6 = _segment.ehdr;
        } while (iVar4 != 0);
        *(_segment.ehdr + 8) = iVar3;
        if (iVar3 != 0) {
            uVar2 = alloc_chrdev_region(puVar6 + 10,0,iVar3,"qsee_ipc_irq_bridge");
            if (uVar2 < 0xfffff001) {
                uVar5 = __class_create(obj.__this_module,"qsee_ipc_irq_bridge",
                                       reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                _segment.ehdr[9] = uVar5;
                if (uVar5 < 0xfffffffffffff001) {
                    iVar4 = of_get_next_available_child(*(param_1 + 0x300),0);
                    if (iVar4 != 0) {
                        uVar9 = 0;
                        do {
                            puVar6 = kmem_cache_alloc_trace(_of_get_next_available_child,0xdc0,0x108);
                            if ((puVar6 == NULL) || (0xfffffffffffff000 < puVar6)) {
                                _printk(0x8000772,"qsee_ipc_irq_bridge_probe",uVar9);
                                ipc_log_string(_segment.ehdr[0xb],"%s:Allocation failed id:%d\n",
                                               "qsee_ipc_irq_bridge_probe",uVar9);
                                uVar2 = 0xfffffff4;
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uVar2 = of_property_read_string(iVar4,"qcom,dev-name",&uStack_78);
                            pcVar8 = "qcom,dev-name";
                            if (uVar2 != 0) {
code_r0x08001684:
                                _printk(0x80004f4,"qiib_parse_node",pcVar8);
                                ipc_log_string(_segment.ehdr[0xb],"%s: missing key: %s\n","qiib_parse_node",pcVar8);
                                _printk(0x80007a9,"qsee_ipc_irq_bridge_probe",uVar9);
                                pcVar8 = "%s:qiib_parse_node failed %d\n";
code_r0x080018b4:
                                ipc_log_string(_segment.ehdr[0xb],pcVar8,"qsee_ipc_irq_bridge_probe",uVar9);
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %s\n","qiib_parse_node","qcom,dev-name",
                                               uStack_78);
                            }
                            uVar2 = of_property_read_string(iVar4,"label",&uStack_70);
                            pcVar8 = "label";
                            if (uVar2 != 0) goto code_r0x08001684;
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %s\n","qiib_parse_node","label",
                                               uStack_70);
                            }
                            *(puVar6 + 2) = uVar9;
                            puVar6[3] = uStack_78;
                            puVar6[0x1b] = uStack_70;
                            __init_waitqueue_head
                                      (puVar6 + 0x16,"&devp->poll_wait_queue",
                                       reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                            puVar12 = puVar6 + 4;
                            *(puVar6 + 0x1a) = 0;
                            cdev_init(puVar12,obj.qiib_fops);
                            puVar1 = _segment.ehdr;
                            puVar6[0x10] = obj.__this_module;
                            uVar2 = cdev_add(puVar12,uVar9 + puVar1[10],1);
                            if (0xfffff000 < uVar2) {
                                _printk(0x8000597,"qiib_add_device",puVar6[3],uVar2);
                                ipc_log_string(_segment.ehdr[0xb],"%s: cdev_add() failed for dev [%s] ret:%i\n",
                                               "qiib_add_device",puVar6[3],uVar2);
code_r0x08001734:
                                _printk(0x8000738,"qsee_ipc_irq_bridge_probe",puVar6[3],uVar2);
                                ipc_log_string(_segment.ehdr[0xb],"%s: add [%s] device failed ret=%d\n",
                                               "qsee_ipc_irq_bridge_probe",puVar6[3],uVar2);
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            uVar5 = device_create(_segment.ehdr[9],0,uVar9 + _segment.ehdr[10],0,puVar6[3]);
                            puVar6[0x15] = uVar5;
                            if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                                _printk(0x80006c8,"qiib_add_device",puVar6[3]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: device_create() failed for dev [%s]\n",
                                               "qiib_add_device",puVar6[3]);
                                cdev_del(puVar12);
                                uVar2 = 0xfffffff4;
                                goto code_r0x08001734;
                            }
                            mutex_lock(_segment.ehdr + 2);
                            puVar12 = _segment.ehdr;
                            uVar11 = *_segment.ehdr;
                            uVar5 = __list_add_valid(puVar6,_segment.ehdr,uVar11);
                            if ((uVar5 & 1) != 0) {
                                *(uVar11 + 8) = puVar6;
                                *puVar6 = uVar11;
                                puVar6[1] = puVar12;
                                *puVar12 = puVar6;
                            }
                            mutex_unlock(_segment.ehdr + 2);
                            if (uVar2 < 0) goto code_r0x08001734;
                            iVar3 = irq_of_parse_and_map(iVar4,0);
                            *(puVar6 + 0x19) = iVar3;
                            if (iVar3 == 0) {
                                _printk(0x80004f4,"qiib_init_notifs","interrupts");
                                ipc_log_string(_segment.ehdr[0xb],"%s: missing key: %s\n","qiib_init_notifs",
                                               "interrupts");
                                uVar2 = 0xffffffed;
code_r0x08001884:
                                _printk(0x80004ce,"qsee_ipc_irq_bridge_probe",uVar2);
                                pcVar8 = "%s: qiib_init_notifs failed ret=%d\n";
                                uVar9 = uVar2;
                                goto code_r0x080018b4;
                            }
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %d\n","qiib_init_notifs","interrupts");
                                iVar3 = puVar6[0x19];
                            }
                            iVar7 = irq_get_irq_data(iVar3);
                            if (iVar7 == 0) {
                                _printk(0x80007ed,"qiib_init_notifs",puVar6[0x19]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: get irqdata fail:%d\n","qiib_init_notifs",
                                               puVar6[0x19]);
                                uVar2 = 0xffffffed;
                                goto code_r0x08001884;
                            }
                            uVar2 = **(iVar7 + 0x10) & 0xf;
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: irqtype = %d\n","qiib_init_notifs",uVar2);
                            }
                            puVar12 = puVar6 + 0x1c;
                            *puVar12 = sym.qiib_restart_notifier_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            uVar5 = qcom_register_ssr_notifier(puVar6[0x1b],puVar12);
                            puVar6[0x1f] = uVar5;
                            if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                                _printk(0x800046b,"qiib_init_notifs");
                                ipc_log_string(_segment.ehdr[0xb],"%s: Could not register SSR notifier cb\n",
                                               "qiib_init_notifs");
                                uVar2 = 0xffffffea;
                                goto code_r0x08001884;
                            }
                            uVar2 = request_threaded_irq
                                              (puVar6[0x19],
                                               sym.qiib_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,uVar2,
                                               puVar6[3],puVar6);
                            if (uVar2 < 0) {
                                _printk(0x8000320,"qiib_init_notifs",puVar6[0x19]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: request_irq() failed on %d\n",
                                               "qiib_init_notifs",puVar6[0x19]);
                                qcom_unregister_ssr_notifier(puVar6[0x1f],puVar12);
                                goto code_r0x08001884;
                            }
                            uVar9 = uVar9 + 1;
                            iVar4 = of_get_next_available_child(*(param_1 + 0x300),iVar4);
                        } while (iVar4 != 0);
                    }
                    if (_segment.ehdr[0xb] != 0) {
                        ipc_log_string(_segment.ehdr[0xb],"%s: Driver Initialized.\n","qsee_ipc_irq_bridge_probe");
                    }
                    uVar2 = 0;
                    goto code_r0x08001524;
                }
                _printk(0x800099a,"qiib_alloc_chrdev_region");
                ipc_log_string(_segment.ehdr[0xb],"%s: class_create() failed ENOMEM\n","qiib_alloc_chrdev_region");
                unregister_chrdev_region(_segment.ehdr[10] >> 0x14,_segment.ehdr[8]);
                uVar2 = 0xfffffff4;
            }
            else {
                _printk(0x8000679,"qiib_alloc_chrdev_region",uVar2);
                ipc_log_string(_segment.ehdr[0xb],"%s: alloc_chrdev_region() failed ret:%i\n",
                               "qiib_alloc_chrdev_region",uVar2);
            }
            _printk(0x800088d,"qsee_ipc_irq_bridge_probe",uVar2);
            ipc_log_string(_segment.ehdr[0xb],"%s: chrdev_region allocation failed ret:%i\n",
                           "qsee_ipc_irq_bridge_probe",uVar2);
            goto code_r0x08001524;
        }
    }
    _printk(0x80009c8,"qsee_ipc_irq_bridge_probe",0);
    ipc_log_string(_segment.ehdr[0xb],"%s:Fail nports = %d\n","qsee_ipc_irq_bridge_probe",_segment.ehdr[8]);
    uVar2 = 0xffffffea;
code_r0x08001524:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.qsee_ipc_irq_bridge_remove;
        sym.qiib_cleanup();
        return 0;
    }
    return uVar2;
}


// ===== sym.qiib_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.qiib_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xd8) == 0) {
        _printk(0x800043f,"qiib_release");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_release");
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s on [%s]\n","qiib_release",*(*(param_2 + 0xd8) + 0x18));
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.qiib_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.qiib_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x2b0);
    iVar1 = iVar3 + -0x20;
    if (iVar1 == 0) {
        _printk(0x800043f,"qiib_open");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_open");
        uVar2 = 0xffffffea;
    }
    else {
        *(param_2 + 0xd8) = iVar1;
        uVar2 = 0;
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s on [%s]\n","qiib_open",*(iVar3 + -8));
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.qiib_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.qiib_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_2 + 0xd0);
    *(param_2 + 0xcc) = *(param_2 + 0xcc) + 1;
    _raw_spin_unlock_irqrestore(param_2 + 0xd0,uVar1);
    __wake_up(param_2 + 0xb0,1,1,0);
    if (*(_segment.ehdr + 0x58) != 0) {
        ipc_log_string(*(_segment.ehdr + 0x58),"%s name[%s] pend_count[%d]\n","qiib_irq_handler",*(param_2 + 0x18),
                       *(param_2 + 0xcc));
    }
    return 1;
}


// ===== sym.qiib_restart_notifier_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011a0 (size 8) =====

uchar  [16] sym.qiib_restart_notifier_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar auVar1 [16];
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 1) {
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: %s: subsystem restart for %s\n","qiib_restart_notifier_cb",
                           "QCOM_SSR_AFTER_POWERUP",*(param_1 + -8));
        }
        *(param_1 + 0x20) = 0;
    }
    else if (param_2 == 2) {
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: %s: subsystem restart for %s\n","qiib_restart_notifier_cb",
                           "QCOM_SSR_BEFORE_SHUTDOWN",*(param_1 + -8));
        }
        *(param_1 + 0x20) = 1;
        __wake_up(param_1 + -0x30,1,1,0);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(param_1 + -8);
    return auVar1 << 0x40;
}


// ===== sym.qsee_ipc_irq_bridge_probe @ 0x080011a8 (size 1956) =====

uint32_t sym.qsee_ipc_irq_bridge_probe(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar10 = *(arg1 + 0x300);
    iVar4 = of_get_next_available_child(uVar10,0);
    if (iVar4 == 0) {
        *(_segment.ehdr + 8) = 0;
    }
    else {
        iVar3 = 0;
        do {
            iVar3 = iVar3 + 1;
            iVar4 = of_get_next_available_child(uVar10,iVar4);
            puVar6 = _segment.ehdr;
        } while (iVar4 != 0);
        *(_segment.ehdr + 8) = iVar3;
        if (iVar3 != 0) {
            uVar2 = alloc_chrdev_region(puVar6 + 10,0,iVar3,"qsee_ipc_irq_bridge");
            if (uVar2 < 0xfffff001) {
                uVar5 = __class_create(obj.__this_module,"qsee_ipc_irq_bridge",
                                       reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                _segment.ehdr[9] = uVar5;
                if (uVar5 < 0xfffffffffffff001) {
                    iVar4 = of_get_next_available_child(*(arg1 + 0x300),0);
                    if (iVar4 != 0) {
                        uVar9 = 0;
                        do {
                            puVar6 = kmem_cache_alloc_trace(_of_get_next_available_child,0xdc0,0x108);
                            if ((puVar6 == NULL) || (0xfffffffffffff000 < puVar6)) {
                                _printk(0x8000772,"qsee_ipc_irq_bridge_probe",uVar9);
                                ipc_log_string(_segment.ehdr[0xb],"%s:Allocation failed id:%d\n",
                                               "qsee_ipc_irq_bridge_probe",uVar9);
                                uVar2 = 0xfffffff4;
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uVar2 = of_property_read_string(iVar4,"qcom,dev-name",&uStack_78);
                            pcVar8 = "qcom,dev-name";
                            if (uVar2 != 0) {
code_r0x08001684:
                                _printk(0x80004f4,"qiib_parse_node",pcVar8);
                                ipc_log_string(_segment.ehdr[0xb],"%s: missing key: %s\n","qiib_parse_node",pcVar8);
                                _printk(0x80007a9,"qsee_ipc_irq_bridge_probe",uVar9);
                                pcVar8 = "%s:qiib_parse_node failed %d\n";
code_r0x080018b4:
                                ipc_log_string(_segment.ehdr[0xb],pcVar8,"qsee_ipc_irq_bridge_probe",uVar9);
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %s\n","qiib_parse_node","qcom,dev-name",
                                               uStack_78);
                            }
                            uVar2 = of_property_read_string(iVar4,"label",&uStack_70);
                            pcVar8 = "label";
                            if (uVar2 != 0) goto code_r0x08001684;
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %s\n","qiib_parse_node","label",
                                               uStack_70);
                            }
                            *(puVar6 + 2) = uVar9;
                            puVar6[3] = uStack_78;
                            puVar6[0x1b] = uStack_70;
                            __init_waitqueue_head
                                      (puVar6 + 0x16,"&devp->poll_wait_queue",
                                       reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                            puVar12 = puVar6 + 4;
                            *(puVar6 + 0x1a) = 0;
                            cdev_init(puVar12,obj.qiib_fops);
                            puVar1 = _segment.ehdr;
                            puVar6[0x10] = obj.__this_module;
                            uVar2 = cdev_add(puVar12,uVar9 + puVar1[10],1);
                            if (0xfffff000 < uVar2) {
                                _printk(0x8000597,"qiib_add_device",puVar6[3],uVar2);
                                ipc_log_string(_segment.ehdr[0xb],"%s: cdev_add() failed for dev [%s] ret:%i\n",
                                               "qiib_add_device",puVar6[3],uVar2);
code_r0x08001734:
                                _printk(0x8000738,"qsee_ipc_irq_bridge_probe",puVar6[3],uVar2);
                                ipc_log_string(_segment.ehdr[0xb],"%s: add [%s] device failed ret=%d\n",
                                               "qsee_ipc_irq_bridge_probe",puVar6[3],uVar2);
                                sym.qiib_cleanup();
                                goto code_r0x08001524;
                            }
                            uVar5 = device_create(_segment.ehdr[9],0,uVar9 + _segment.ehdr[10],0,puVar6[3]);
                            puVar6[0x15] = uVar5;
                            if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                                _printk(0x80006c8,"qiib_add_device",puVar6[3]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: device_create() failed for dev [%s]\n",
                                               "qiib_add_device",puVar6[3]);
                                cdev_del(puVar12);
                                uVar2 = 0xfffffff4;
                                goto code_r0x08001734;
                            }
                            mutex_lock(_segment.ehdr + 2);
                            puVar12 = _segment.ehdr;
                            uVar11 = *_segment.ehdr;
                            uVar5 = __list_add_valid(puVar6,_segment.ehdr,uVar11);
                            if ((uVar5 & 1) != 0) {
                                *(uVar11 + 8) = puVar6;
                                *puVar6 = uVar11;
                                puVar6[1] = puVar12;
                                *puVar12 = puVar6;
                            }
                            mutex_unlock(_segment.ehdr + 2);
                            if (uVar2 < 0) goto code_r0x08001734;
                            iVar3 = irq_of_parse_and_map(iVar4,0);
                            *(puVar6 + 0x19) = iVar3;
                            if (iVar3 == 0) {
                                _printk(0x80004f4,"qiib_init_notifs","interrupts");
                                ipc_log_string(_segment.ehdr[0xb],"%s: missing key: %s\n","qiib_init_notifs",
                                               "interrupts");
                                uVar2 = 0xffffffed;
code_r0x08001884:
                                _printk(0x80004ce,"qsee_ipc_irq_bridge_probe",uVar2);
                                pcVar8 = "%s: qiib_init_notifs failed ret=%d\n";
                                uVar9 = uVar2;
                                goto code_r0x080018b4;
                            }
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: %s = %d\n","qiib_init_notifs","interrupts");
                                iVar3 = puVar6[0x19];
                            }
                            iVar7 = irq_get_irq_data(iVar3);
                            if (iVar7 == 0) {
                                _printk(0x80007ed,"qiib_init_notifs",puVar6[0x19]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: get irqdata fail:%d\n","qiib_init_notifs",
                                               puVar6[0x19]);
                                uVar2 = 0xffffffed;
                                goto code_r0x08001884;
                            }
                            uVar2 = **(iVar7 + 0x10) & 0xf;
                            if (_segment.ehdr[0xb] != 0) {
                                ipc_log_string(_segment.ehdr[0xb],"%s: irqtype = %d\n","qiib_init_notifs",uVar2);
                            }
                            puVar12 = puVar6 + 0x1c;
                            *puVar12 = sym.qiib_restart_notifier_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            uVar5 = qcom_register_ssr_notifier(puVar6[0x1b],puVar12);
                            puVar6[0x1f] = uVar5;
                            if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                                _printk(0x800046b,"qiib_init_notifs");
                                ipc_log_string(_segment.ehdr[0xb],"%s: Could not register SSR notifier cb\n",
                                               "qiib_init_notifs");
                                uVar2 = 0xffffffea;
                                goto code_r0x08001884;
                            }
                            uVar2 = request_threaded_irq
                                              (puVar6[0x19],
                                               sym.qiib_irq_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,uVar2,
                                               puVar6[3],puVar6);
                            if (uVar2 < 0) {
                                _printk(0x8000320,"qiib_init_notifs",puVar6[0x19]);
                                ipc_log_string(_segment.ehdr[0xb],"%s: request_irq() failed on %d\n",
                                               "qiib_init_notifs",puVar6[0x19]);
                                qcom_unregister_ssr_notifier(puVar6[0x1f],puVar12);
                                goto code_r0x08001884;
                            }
                            uVar9 = uVar9 + 1;
                            iVar4 = of_get_next_available_child(*(arg1 + 0x300),iVar4);
                        } while (iVar4 != 0);
                    }
                    if (_segment.ehdr[0xb] != 0) {
                        ipc_log_string(_segment.ehdr[0xb],"%s: Driver Initialized.\n","qsee_ipc_irq_bridge_probe");
                    }
                    uVar2 = 0;
                    goto code_r0x08001524;
                }
                _printk(0x800099a,"qiib_alloc_chrdev_region");
                ipc_log_string(_segment.ehdr[0xb],"%s: class_create() failed ENOMEM\n","qiib_alloc_chrdev_region");
                unregister_chrdev_region(_segment.ehdr[10] >> 0x14,_segment.ehdr[8]);
                uVar2 = 0xfffffff4;
            }
            else {
                _printk(0x8000679,"qiib_alloc_chrdev_region",uVar2);
                ipc_log_string(_segment.ehdr[0xb],"%s: alloc_chrdev_region() failed ret:%i\n",
                               "qiib_alloc_chrdev_region",uVar2);
            }
            _printk(0x800088d,"qsee_ipc_irq_bridge_probe",uVar2);
            ipc_log_string(_segment.ehdr[0xb],"%s: chrdev_region allocation failed ret:%i\n",
                           "qsee_ipc_irq_bridge_probe",uVar2);
            goto code_r0x08001524;
        }
    }
    _printk(0x80009c8,"qsee_ipc_irq_bridge_probe",0);
    ipc_log_string(_segment.ehdr[0xb],"%s:Fail nports = %d\n","qsee_ipc_irq_bridge_probe",_segment.ehdr[8]);
    uVar2 = 0xffffffea;
code_r0x08001524:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.qsee_ipc_irq_bridge_remove;
        sym.qiib_cleanup();
        return 0;
    }
    return uVar2;
}


// ===== sym.qsee_ipc_irq_bridge_remove @ 0x0800194c (size 40) =====

ulong sym.qsee_ipc_irq_bridge_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qiib_cleanup();
    return 0;
}


// ===== sym.qiib_cleanup @ 0x08001974 (size 264) =====

void sym.qiib_cleanup(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(_segment.ehdr + 2);
    piVar4 = *_segment.ehdr;
    if (piVar4 != _segment.ehdr) {
        do {
            piVar5 = *piVar4;
            cdev_del(piVar4 + 4);
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            device_destroy(_segment.ehdr[9],*(_segment.ehdr + 10) & 0xfff00000 | *(piVar4 + 2));
            if (piVar4[0x1f] != 0) {
                qcom_unregister_ssr_notifier(piVar4[0x1f],piVar4 + 0x1c);
            }
            kfree(piVar4);
            piVar4 = piVar5;
        } while (piVar5 != _segment.ehdr);
    }
    mutex_unlock(_segment.ehdr + 2);
    piVar4 = _segment.ehdr;
    if ((_segment.ehdr[9] != 0) && (_segment.ehdr[9] < 0xfffffffffffff001)) {
        class_destroy();
        piVar4 = _segment.ehdr;
        _segment.ehdr[9] = 0;
    }
    unregister_chrdev_region(*(piVar4 + 10) >> 0x14,piVar4[8]);
    return;
}


// ===== sym.qiib_poll @ 0x08001a7c (size 364) =====

uint32_t sym.qiib_poll(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd8);
    if (iVar4 == 0) {
        _printk(0x800043f,"qiib_poll");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_poll");
        uVar2 = 8;
    }
    else if (*(iVar4 + 0x100) == '\0') {
        if (((arg2 != 0) && (iVar4 + 0xb0 != 0)) && (pcVar3 = *arg2, pcVar3 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80001f0);
            (*pcVar3)(arg1,iVar4 + 0xb0,arg2);
        }
        uVar1 = _raw_spin_lock_irqsave(iVar4 + 0xd0);
        if (*(iVar4 + 0xcc) == 0) {
            uVar2 = 0;
        }
        else {
            if (*(_segment.ehdr + 0x58) != 0) {
                ipc_log_string(*(_segment.ehdr + 0x58),"%s set POLLIN on [%s] count[%d]\n","qiib_poll",
                               *(iVar4 + 0x18));
            }
            uVar2 = 1;
            *(iVar4 + 0xcc) = 0;
        }
        _raw_spin_unlock_irqrestore(iVar4 + 0xd0,uVar1);
        if (*(iVar4 + 0x100) != '\0') {
            uVar2 = uVar2 | 0x2000;
            if (*(_segment.ehdr + 0x58) != 0) {
                ipc_log_string(*(_segment.ehdr + 0x58),"%s set POLLRDHUP on [%s] count[%d]\n","qiib_poll",
                               *(iVar4 + 0x18),*(iVar4 + 0xcc));
            }
        }
    }
    else {
        uVar2 = 0x2000;
    }
    return uVar2;
}


// ===== sym.qiib_open @ 0x08001be8 (size 160) =====

ulong sym.qiib_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x2b0);
    iVar1 = iVar3 + -0x20;
    if (iVar1 == 0) {
        _printk(0x800043f,"qiib_open");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_open");
        uVar2 = 0xffffffea;
    }
    else {
        *(arg2 + 0xd8) = iVar1;
        uVar2 = 0;
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s on [%s]\n","qiib_open",*(iVar3 + -8));
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.qiib_release @ 0x08001c88 (size 152) =====

ulong sym.qiib_release(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == 0) {
        _printk(0x800043f,"qiib_release");
        ipc_log_string(*(_segment.ehdr + 0x58),"%s on NULL device\n","qiib_release");
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s on [%s]\n","qiib_release",*(*(arg1 + 0xd8) + 0x18));
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.qiib_restart_notifier_cb @ 0x08001d20 (size 228) =====

uchar  [16] sym.qiib_restart_notifier_cb(int64_t arg1,uint32_t arg2)

{
    uchar auVar1 [16];
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 1) {
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: %s: subsystem restart for %s\n","qiib_restart_notifier_cb",
                           "QCOM_SSR_AFTER_POWERUP",*(arg1 + -8));
        }
        *(arg1 + 0x20) = 0;
    }
    else if (arg2 == 2) {
        if (*(_segment.ehdr + 0x58) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: %s: subsystem restart for %s\n","qiib_restart_notifier_cb",
                           "QCOM_SSR_BEFORE_SHUTDOWN",*(arg1 + -8));
        }
        *(arg1 + 0x20) = 1;
        __wake_up(arg1 + -0x30,1,1,0);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(arg1 + -8);
    return auVar1 << 0x40;
}


// ===== sym.qiib_irq_handler @ 0x08001fa8 (size 148) =====

ulong sym.qiib_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xd0);
    *(arg1 + 0xcc) = *(arg1 + 0xcc) + 1;
    _raw_spin_unlock_irqrestore(arg1 + 0xd0,uVar1);
    __wake_up(arg1 + 0xb0,1,1,0);
    if (*(_segment.ehdr + 0x58) != 0) {
        ipc_log_string(*(_segment.ehdr + 0x58),"%s name[%s] pend_count[%d]\n","qiib_irq_handler",*(arg1 + 0x18),
                       *(arg1 + 0xcc));
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x0800203c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002080

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
    //switch table (4 cases) at 0x8000210
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002094);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080020a4 (size 348) =====

int sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_of_get_next_available_child,0xdc0,0x60);
    _segment.ehdr = iVar2;
    if (iVar2 == 0) {
        iVar1 = -0xc;
        _printk(0x8000404,"qsee_ipc_irq_bridge_init",0xfffffff4);
        pcVar3 = "%s: driver data init failed %d\n";
    }
    else {
        *iVar2 = iVar2;
        *(iVar2 + 8) = iVar2;
        __mutex_init(iVar2 + 0x10,"&qiib_info->list_lock",
                     reloc.qsee_ipc_irq_bridge_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        iVar2 = ipc_log_context_create(4,"qsee_ipc_irq_bridge",0);
        *(_segment.ehdr + 0x58) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80003cb,"qiib_driver_data_init");
            ipc_log_string(*(_segment.ehdr + 0x58),"%s: unable to create logging context\n","qiib_driver_data_init");
        }
        iVar1 = __platform_driver_register
                          (reloc.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
        if (iVar1 == 0) {
            return 0;
        }
        _printk(0x800084d,"qsee_ipc_irq_bridge_init",iVar1);
        pcVar3 = "%s: platform driver register failed %d\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x58),pcVar3,"qsee_ipc_irq_bridge_init",iVar1);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002200 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qsee_ipc_irq_bridge_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    if (*(_segment.ehdr + 0x58) == 0) {
        ipc_log_context_destroy(0);
    }
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}

