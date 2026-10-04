// decompiled from pmic_glink by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 544) =====

//WARNING: Switch with 1 destination removed at 0x08002700

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x5894c2d08727cfe2) {
        if (arg1 < -0x19ad56ffbc919b67) {
            if (arg1 != -0x61278529fef85643) {
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.pmic_glink_rx_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
                }
                else {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x080026c0;
                    pcVar2 = sym.pmic_glink_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
                }
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080026c0;
            }
            pcVar2 = sym.pmic_glink_rpmsg_callback.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        }
        else if (arg1 == -0x19ad56ffbc919b67) {
            pcVar2 = sym.pmic_glink_rpmsg_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x2ce63a3287021e91) goto code_r0x080026c0;
            pcVar2 = sym.pmic_glink_rpmsg_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        }
    }
    else if (arg1 < 0x78ffe26a0eca4fc8) {
        if (arg1 == 0x5894c2d08727cfe2) {
            pcVar2 = sym.pmic_glink_register_client.cfi_jt;
        }
        else if (arg1 == 0x5b3900db17571107) {
            pcVar2 = sym.pmic_glink_write.cfi_jt;
        }
        else {
            if (arg1 != 0x717e13c02c8a8b12) goto code_r0x080026c0;
            pcVar2 = sym.pmic_glink_pdr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        }
    }
    else if (arg1 == 0x78ffe26a0eca4fc8) {
        pcVar2 = sym.pmic_glink_unregister_client.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.pmic_glink_ssr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080026c0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080026c0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002714);
    (*pcVar1)();
}


// ===== sym.pmic_glink_rpmsg_callback.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.pmic_glink_rpmsg_callback.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 < 0xc) {
        _printk(0x80007b1,"pmic_glink_rpmsg_callback",param_3,0xc);
        uVar2 = 0xffffffea;
    }
    else {
        iVar4 = param_3;
        iVar6 = *(param_1 + 0x98);
        piVar1 = __kmalloc(iVar4 + 0x18,0xb20);
        if (piVar1 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            piVar1[2] = iVar4;
            memcpy(piVar1 + 3,param_2,iVar4);
            uVar2 = _raw_spin_lock_irqsave(iVar6 + 0xb0);
            puVar5 = *(iVar6 + 0x128);
            uVar3 = __list_add_valid(piVar1,puVar5,iVar6 + 0x120);
            if ((uVar3 & 1) != 0) {
                *(iVar6 + 0x128) = piVar1;
                *piVar1 = iVar6 + 0x120;
                piVar1[1] = puVar5;
                *puVar5 = piVar1;
            }
            _raw_spin_unlock_irqrestore(iVar6 + 0xb0,uVar2);
            queue_work_on(0x20,*(iVar6 + 0x118),iVar6 + 0xb8);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.pmic_glink_rpmsg_driver);
    platform_driver_unregister(reloc.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001238 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt,obj.__this_module);
    if (-1 < iVar1) {
        __register_rpmsg_driver(obj.pmic_glink_rpmsg_driver,obj.__this_module);
    }
    return;
}


// ===== sym.pmic_glink_register_client.cfi_jt @ 0x08001240 (size 8) =====

ulong * sym.pmic_glink_register_client.cfi_jt(int64_t param_1,int64_t *param_2)

{
    ulong *puVar1;
    int64_t iVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    code *pcVar8;
    ulong uVar9;
    ulong *puVar10;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar7 = *(param_1 + 0x60), iVar7 == 0)) {
        puVar4 = 0xffffffffffffffed;
    }
    else if (((param_2[1] == 0) || (param_2[3] == 0)) || (*param_2 == 0)) {
        puVar4 = 0xffffffffffffffea;
    }
    else {
        mutex_lock(obj.pmic_glink_dev_lock);
        pcVar11 = obj.pmic_glink_dev_list;
        do {
            pcVar11 = *pcVar11;
            if (pcVar11 == obj.pmic_glink_dev_list) {
                mutex_unlock(obj.pmic_glink_dev_lock);
                goto code_r0x0800160c;
            }
        } while (*(pcVar11 + -0x128) != iVar7);
        mutex_unlock(obj.pmic_glink_dev_lock);
        if (pcVar11 + -0x130 == NULL) {
code_r0x0800160c:
            _printk(0x800075e,"pmic_glink_register_client",*param_2);
            puVar4 = 0xffffffffffffffed;
        }
        else {
            down_read(pcVar11 + -0xc0);
            uVar9 = *(pcVar11 + 0x10);
            up_read(pcVar11 + -0xc0);
            if (uVar9 == 0) {
                _printk(0x8000a63,"pmic_glink_register_client");
                puVar4 = 0xfffffffffffffdfb;
            }
            else {
                puVar4 = kmem_cache_alloc_trace(_down_read,0xdc0,0x70);
                if (puVar4 == NULL) {
                    puVar4 = 0xfffffffffffffff4;
                }
                else {
                    iVar7 = kstrdup(*param_2,0xcc0);
                    puVar4[1] = iVar7;
                    if (iVar7 == 0) {
                        kfree(puVar4);
                        puVar4 = 0xfffffffffffffff4;
                    }
                    else {
                        __mutex_init(puVar4 + 3,"&client->lock",obj.pmic_glink_dev_lock);
                        iVar6 = param_2[1];
                        *puVar4 = pcVar11 + -0x130;
                        iVar7 = param_2[2];
                        iVar2 = param_2[3];
                        *(puVar4 + 2) = iVar6;
                        iVar6 = param_2[4];
                        pcVar8 = pcVar11 + -0xf0;
                        puVar4[9] = iVar7;
                        puVar4[10] = iVar2;
                        puVar4[0xd] = iVar6;
                        mutex_lock(pcVar8);
                        iVar3 = idr_alloc(pcVar11 + -0x108,puVar4,*(puVar4 + 2),*(puVar4 + 2) + 1,0xcc0);
                        if (iVar3 < 0) {
                            _printk(0x80003d6,"pmic_glink_register_client",puVar4[1],iVar3);
                            mutex_unlock(pcVar8);
                            kfree(puVar4[1]);
                            kfree(puVar4);
                            puVar4 = iVar3;
                        }
                        else {
                            if (puVar4[0xd] != 0) {
                                puVar1 = puVar4 + 0xb;
                                puVar4[0xb] = puVar1;
                                puVar4[0xc] = puVar1;
                                puVar10 = *(pcVar11 + 0x30);
                                uVar5 = __list_add_valid(puVar1,puVar10,pcVar11 + 0x28);
                                if ((uVar5 & 1) != 0) {
                                    *(pcVar11 + 0x30) = puVar1;
                                    puVar4[0xb] = pcVar11 + 0x28;
                                    puVar4[0xc] = puVar10;
                                    *puVar10 = puVar1;
                                }
                            }
                            mutex_unlock(pcVar8);
                            ipc_log_string(*(pcVar11 + -0x110),"Registered client %s\n",puVar4[1]);
                        }
                    }
                }
            }
        }
    }
    return puVar4;
}


// ===== sym.pmic_glink_rpmsg_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001248 (size 8) =====

void sym.pmic_glink_rpmsg_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pmic_glink_dev_lock);
    param_1 = param_1 + 0x390;
    pcVar2 = obj.pmic_glink_dev_list;
    do {
        pcVar2 = *pcVar2;
        if (pcVar2 == obj.pmic_glink_dev_list) {
            mutex_unlock(obj.pmic_glink_dev_lock);
            goto code_r0x080025ac;
        }
        iVar1 = strcmp(param_1,*(pcVar2 + -0x118));
    } while (iVar1 != 0);
    mutex_unlock(obj.pmic_glink_dev_lock);
    if (pcVar2 + -0x130 == NULL) {
code_r0x080025ac:
        _printk(0x800075e,"pmic_glink_rpmsg_remove",param_1);
    }
    else {
        down_write(pcVar2 + -0xc0);
        *(pcVar2 + 0x10) = 0;
        *(pcVar2 + -0x130) = 0;
        up_write(pcVar2 + -0xc0);
        ipc_log_string(*(pcVar2 + -0x110),"%s removed\n",param_1);
    }
    return;
}


// ===== sym.pmic_glink_write.cfi_jt @ 0x08001250 (size 8) =====

int sym.pmic_glink_write.cfi_jt(int64_t *param_1,int *param_2,uint64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == NULL) || (*param_1 == 0)) || (param_1[1] == 0)) {
        iVar1 = -0x13;
    }
    else {
        down_read(*param_1 + 0x70);
        if ((**param_1 == 0) || ((*param_1)[0x28] == 0)) {
            _printk(0x8000822,"pmic_glink_write",param_1[1]);
            up_read(*param_1 + 0x70);
            iVar1 = -0x6b;
        }
        else {
            mutex_lock(param_1 + 3);
            iVar1 = rpmsg_send(*(**param_1 + 0x3c8),param_2,param_3 & 0xffffffff);
            mutex_unlock(param_1 + 3);
            up_read(*param_1 + 0x70);
            if (iVar1 < 0) {
                _printk(0x80004ed,"pmic_glink_write",param_3,param_2,param_1[1],iVar1);
            }
            else if (iVar1 == 0) {
                if (*(*param_1 + 0x150) != '\0') {
                    iVar1 = *(*param_1 + 0x14c);
                    if (iVar1 == *param_2) {
                        _printk(0x8000859,"pmic_glink_write",param_3,param_2);
                    }
                    else if (iVar1 == 0xffff) {
                        _printk(0x80009e0,"pmic_glink_write",*param_2,param_3,param_2);
                    }
                }
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.pmic_glink_rpmsg_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.pmic_glink_rpmsg_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pmic_glink_dev_lock);
    iVar1 = param_1 + 0x390;
    pcVar4 = obj.pmic_glink_dev_list;
    do {
        pcVar4 = *pcVar4;
        if (pcVar4 == obj.pmic_glink_dev_list) {
            mutex_unlock(obj.pmic_glink_dev_lock);
            goto code_r0x080024c8;
        }
        iVar2 = strcmp(iVar1,*(pcVar4 + -0x118));
    } while (iVar2 != 0);
    pcVar5 = pcVar4 + -0x130;
    mutex_unlock(obj.pmic_glink_dev_lock);
    if (pcVar5 == NULL) {
code_r0x080024c8:
        _printk(0x800075e,"pmic_glink_rpmsg_probe",iVar1);
        uVar3 = 0xfffffdfb;
    }
    else {
        down_write(pcVar4 + -0xc0);
        *(param_1 + 0x98) = pcVar5;
        *pcVar5 = param_1;
        *(pcVar4 + 0x10) = 1;
        up_write(pcVar4 + -0xc0);
        queue_work_on(0x20,_rpmsg_send,pcVar4 + -0x48);
        ipc_log_string(*(pcVar4 + -0x110),"%s probed\n",iVar1);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.pmic_glink_unregister_client.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.pmic_glink_unregister_client.cfi_jt(int64_t *param_1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        uVar2 = 0xffffffed;
    }
    else {
        mutex_lock(*param_1 + 0x40);
        iVar3 = *param_1;
        piVar4 = *(iVar3 + 0x158);
        if (iVar3 + 0x158 != piVar4) {
            do {
                piVar5 = piVar4 + -0xb;
                piVar4 = *piVar4;
                if (piVar5 == param_1) {
                    uVar1 = __list_del_entry_valid(param_1 + 0xb);
                    if ((uVar1 & 1) != 0) {
                        iVar3 = param_1[0xb];
                        piVar5 = param_1[0xc];
                        *(iVar3 + 8) = piVar5;
                        *piVar5 = iVar3;
                    }
                    iVar3 = *param_1;
                    param_1[0xb] = -0x2152ffffffffff00;
                    param_1[0xc] = -0x2152fffffffffede;
                }
            } while (iVar3 + 0x158 != piVar4);
        }
        idr_remove(iVar3 + 0x28,param_1[2]);
        mutex_unlock(*param_1 + 0x40);
        ipc_log_string(*(*param_1 + 0x20),"Unregistered client %s\n",param_1[1]);
        kfree(param_1[1]);
        kfree(param_1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.pmic_glink_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.pmic_glink_remove.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar5 = *(param_1 + 0xa8);
    ipc_log_context_destroy(*(pcVar5 + 0x20));
    pdr_handle_release(*(pcVar5 + 400));
    qcom_unregister_ssr_notifier(*(pcVar5 + 0x188),pcVar5 + 0x168);
    device_init_wakeup(*(pcVar5 + 8),0);
    debugfs_remove(*(pcVar5 + 0x10));
    flush_workqueue(*(pcVar5 + 0x118));
    destroy_workqueue(*(pcVar5 + 0x118));
    idr_destroy(pcVar5 + 0x28);
    of_platform_depopulate(param_1 + 0x10);
    pcVar5[0x148] = 0x0;
    mutex_lock(obj.pmic_glink_dev_lock);
    if (_obj.pmic_glink_dev_list != obj.pmic_glink_dev_list) {
        pcVar4 = _obj.pmic_glink_dev_list;
        do {
            pcVar6 = *pcVar4;
            if (pcVar4 + -0x130 == pcVar5) {
                uVar3 = __list_del_entry_valid(pcVar5 + 0x130);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *(pcVar5 + 0x130);
                    piVar2 = *(pcVar5 + 0x138);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *(pcVar5 + 0x130) = 0xdead000000000100;
                *(pcVar5 + 0x138) = 0xdead000000000122;
            }
            pcVar4 = pcVar6;
        } while (pcVar6 != obj.pmic_glink_dev_list);
    }
    mutex_unlock(obj.pmic_glink_dev_lock);
    return 0;
}


// ===== sym.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001270 (size 8) =====

uint64_t sym.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = devm_kmalloc(param_1 + 0x10,0x1b0,0xdc0);
    if (iVar3 == 0) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001bcc;
    }
    uVar2 = of_property_read_string(*(param_1 + 0x300),"qcom,pmic-glink-channel",iVar3 + 0x18);
    if (uVar2 < 0) {
        uVar4 = uVar2;
        uVar8 = 0x8000a06;
        goto code_r0x08001b9c;
    }
    uVar8 = *(iVar3 + 0x18);
    uVar4 = strlen(uVar8);
    if (0x20 < uVar4) {
        uVar7 = 0x8000721;
        goto code_r0x08001bc4;
    }
    piVar1 = iVar3 + 0x180;
    of_property_read_string(*(param_1 + 0x300),"qcom,subsys-name",piVar1);
    iVar5 = of_find_property(*(param_1 + 0x300),"qcom,protection-domain",0);
    if (iVar5 != 0) {
        uVar2 = of_property_read_string_helper(*(param_1 + 0x300),"qcom,protection-domain",iVar3 + 0x198,1,0);
        if (uVar2 < 0) {
            uVar4 = uVar2;
            uVar8 = 0x80008f9;
code_r0x08001b9c:
            _printk(uVar8,"pmic_glink_probe",uVar4);
        }
        else {
            uVar8 = *(iVar3 + 0x198);
            uVar4 = strlen(uVar8);
            if (uVar4 < 0x41) {
                uVar2 = of_property_read_string_helper
                                  (*(param_1 + 0x300),"qcom,protection-domain",iVar3 + 0x1a0,1,1);
                if (uVar2 < 0) {
                    uVar4 = uVar2;
                    uVar8 = 0x800087a;
                    goto code_r0x08001b9c;
                }
                uVar8 = *(iVar3 + 0x1a0);
                uVar4 = strlen(uVar8);
                if (uVar4 < 0x41) goto code_r0x08001894;
                uVar7 = 0x8000a8b;
            }
            else {
                uVar7 = 0x80008c6;
            }
code_r0x08001bc4:
            _printk(uVar7,"pmic_glink_probe",uVar8);
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001bcc;
    }
code_r0x08001894:
    iVar5 = alloc_workqueue(0x8000530,0xe000a,1,"pmic_glink_rx");
    *(iVar3 + 0x118) = iVar5;
    if (iVar5 == 0) {
        _printk(0x800095e,"pmic_glink_probe");
        uVar4 = 0xfffffff4;
        goto code_r0x08001bcc;
    }
    __init_rwsem(iVar3 + 0x70,"&pgdev->rpdev_sem",obj.pmic_glink_dev_lock);
    *(iVar3 + 0xb8) = 0xfffffffe0;
    iVar5 = iVar3 + 0x130;
    *(iVar3 + 0xc0) = iVar3 + 0xc0;
    *(iVar3 + 200) = iVar3 + 0xc0;
    *(iVar3 + 0xd0) = sym.pmic_glink_rx_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
    *(iVar3 + 0xe8) = 0xfffffffe0;
    *(iVar3 + 0xf0) = iVar3 + 0xf0;
    *(iVar3 + 0xf8) = iVar3 + 0xf0;
    *(iVar3 + 0x100) = sym.pmic_glink_init_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
    *(iVar3 + 0x158) = iVar3 + 0x158;
    *(iVar3 + 0x160) = iVar3 + 0x158;
    *(iVar3 + 0x120) = iVar3 + 0x120;
    *(iVar3 + 0x128) = iVar3 + 0x120;
    *(iVar3 + 0x130) = iVar5;
    *(iVar3 + 0x138) = iVar5;
    *(iVar3 + 0xb0) = 0;
    __mutex_init(iVar3 + 0x40,"&pgdev->client_lock",obj.pmic_glink_dev_lock);
    *(iVar3 + 0x28) = 0x1000000400000000;
    *(iVar3 + 0x30) = 0;
    *(iVar3 + 0x38) = 0;
    *(iVar3 + 0x144) = 0;
    *(iVar3 + 0x1a8) = 0x7fffffff;
    iVar6 = ipc_log_context_create(10,*(iVar3 + 0x18),0);
    *(iVar3 + 0x20) = iVar6;
    if (iVar6 == 0) {
        _printk(0x8000931,"pmic_glink_probe");
        iVar6 = *piVar1;
        if (iVar6 != 0) goto code_r0x08001990;
code_r0x080019b0:
        if (*(iVar3 + 0x198) == 0) {
code_r0x08001a48:
            *(param_1 + 0xa8) = iVar3;
            *(iVar3 + 8) = param_1 + 0x10;
            mutex_lock(obj.pmic_glink_dev_lock);
            iVar6 = _obj.pmic_glink_dev_list;
            uVar4 = __list_add_valid(iVar5,obj.pmic_glink_dev_list,_obj.pmic_glink_dev_list);
            if ((uVar4 & 1) != 0) {
                *(iVar6 + 8) = iVar5;
                *(iVar3 + 0x130) = iVar6;
                *(iVar3 + 0x138) = obj.pmic_glink_dev_list;
                _obj.pmic_glink_dev_list = iVar5;
            }
            mutex_unlock(obj.pmic_glink_dev_lock);
            iVar5 = (*(iVar3 + 8))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 8);
            }
            uVar4 = debugfs_create_dir(iVar5,0);
            if (uVar4 < 0xfffffffffffff001) {
                *(iVar3 + 0x10) = uVar4;
                debugfs_create_u32("filter",0x180,uVar4,iVar3 + 0x14c);
                debugfs_create_bool("enable",0x180,uVar4,iVar3 + 0x150);
            }
            else {
                _printk(0x8000416,"pmic_glink_add_debugfs",uVar4);
            }
            device_init_wakeup(*(iVar3 + 8),1);
            ipc_log_string(*(iVar3 + 0x20),"%s probed successfully\n",*(iVar3 + 0x18));
            uVar4 = 0;
            goto code_r0x08001bcc;
        }
        uVar4 = pdr_handle_alloc(sym.pmic_glink_pdr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt,iVar3);
        *(iVar3 + 400) = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            uVar4 = pdr_add_lookup(uVar4,*(iVar3 + 0x198),*(iVar3 + 0x1a0));
            if ((uVar4 < 0xfffffffffffff001) || (uVar4 == 0xffffffffffffff8e)) {
                ipc_log_string(*(iVar3 + 0x20),"Registering PDR for path_name: %s service_name: %s\n",*(iVar3 + 0x1a0)
                               ,*(iVar3 + 0x198));
                goto code_r0x08001a48;
            }
            _printk(0x8000578,"pmic_glink_probe",uVar4 & 0xffffffff);
            pdr_handle_release(*(iVar3 + 400));
        }
        else if (uVar4 == -0x205) {
            uVar4 = 0xfffffdfb;
        }
        else {
            _printk(0x8000497,"pmic_glink_probe",uVar4 & 0xffffffff);
        }
        qcom_unregister_ssr_notifier(*(iVar3 + 0x188),iVar3 + 0x168);
    }
    else {
        iVar6 = *piVar1;
        if (iVar6 == 0) goto code_r0x080019b0;
code_r0x08001990:
        *(iVar3 + 0x168) = sym.pmic_glink_ssr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        uVar4 = qcom_register_ssr_notifier(iVar6,iVar3 + 0x168);
        *(iVar3 + 0x188) = uVar4;
        if (uVar4 < 0xfffffffffffff001) goto code_r0x080019b0;
        _printk(0x8000abb,"pmic_glink_probe",uVar4 & 0xffffffff);
    }
    ipc_log_context_destroy(*(iVar3 + 0x20));
    idr_destroy(iVar3 + 0x28);
    destroy_workqueue(*(iVar3 + 0x118));
code_r0x08001bcc:
    return uVar4 & 0xffffffff;
}


// ===== sym.pmic_glink_rx_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001278 (size 8) =====

void sym.pmic_glink_rx_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_1 + -8;
    uVar2 = _raw_spin_lock_irqsave(iVar5);
    piVar1 = param_1 + 0x68;
    if ((piVar1 != *piVar1) && (*(param_1 + 0x68) != piVar1)) {
        piVar6 = *(param_1 + 0x68);
        do {
            piVar7 = *piVar6;
            _raw_spin_unlock_irqrestore(iVar5,uVar2);
            mutex_lock(param_1 + -0x78);
            piVar9 = piVar6 + 3;
            iVar3 = idr_find(param_1 + -0x90,*piVar9);
            mutex_unlock(param_1 + -0x78);
            if ((iVar3 == 0) || (*(iVar3 + 0x50) == 0)) {
                _printk(0x800045d,"pmic_glink_rx_callback",*piVar9);
            }
            else {
                if (*(param_1 + 0x98) != '\0') {
                    if (*(param_1 + 0x94) == *piVar9) {
                        _printk(0x80006d3,"pmic_glink_rx_callback",piVar6[2],piVar9);
                    }
                    else if (*(param_1 + 0x94) == 0xffff) {
                        _printk(0x80009a2,"pmic_glink_rx_callback",*piVar9,piVar6[2],piVar9);
                    }
                }
                pcVar8 = *(iVar3 + 0x50);
                __cfi_slowpath_diag(0x268e9722c14a4592,pcVar8,0x8000380);
                (*pcVar8)(*(iVar3 + 0x48),piVar9,piVar6[2]);
            }
            uVar2 = _raw_spin_lock_irqsave(iVar5);
            uVar4 = __list_del_entry_valid(piVar6);
            if ((uVar4 & 1) != 0) {
                iVar3 = *piVar6;
                piVar9 = piVar6[1];
                *(iVar3 + 8) = piVar9;
                *piVar9 = iVar3;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6);
            piVar6 = piVar7;
        } while (piVar7 != piVar1);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar2);
    return;
}


// ===== sym.pmic_glink_init_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001280 (size 8) =====

void sym.pmic_glink_init_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + -0xe0);
    if ((*(param_1 + 0xc0) == 0xfffffff) || (*(param_1 + 0x5c) == 2)) {
        sym.pmic_glink_notify_clients(param_1 + -0xe8,1);
        *(param_1 + 0xc0) = 0x1fffffff;
        *(param_1 + 0x5c) = 1;
    }
    if (*(param_1 + 0x60) == '\0') {
        iVar1 = of_platform_populate(*(iVar2 + 0x2f0),0,0,iVar2);
        if (iVar1 < 0) {
            _printk(0x8000bad,"pmic_glink_init_work",iVar1);
        }
        else {
            *(param_1 + 0x60) = 1;
        }
    }
    return;
}


// ===== sym.pmic_glink_pdr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001288 (size 8) =====

void sym.pmic_glink_pdr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(param_3 + 0x20),"PDR state: %x\n",param_1);
    if (param_1 == 0x1fffffff) {
        ipc_log_string(*(param_3 + 0x20),"PD state up for %s\n",*(param_3 + 0x198));
    }
    else if (param_1 == 0xfffffff) {
        ipc_log_string(*(param_3 + 0x20),"PD state down for %s\n",*(param_3 + 0x198));
        sym.pmic_glink_notify_clients(param_3,0);
        *(param_3 + 0x1a8) = 0xfffffff;
    }
    return;
}


// ===== sym.pmic_glink_ssr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt @ 0x08001290 (size 8) =====

uchar  [16] sym.pmic_glink_ssr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar auVar1 [16];
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(param_1 + -0x148),"code: %lu\n",param_2);
    if ((param_2 != 1) && (param_2 == 2)) {
        *(param_1 + -0x24) = 2;
        sym.pmic_glink_notify_clients(param_1 + -0x168,0);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(param_1 + 0x18);
    return auVar1 << 0x40;
}


// ===== sym.pmic_glink_write @ 0x08001298 (size 392) =====

int sym.pmic_glink_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*arg1 == 0)) || (*(arg1 + 8) == 0)) {
        iVar1 = -0x13;
    }
    else {
        down_read(*arg1 + 0x70);
        if ((**arg1 == 0) || ((*arg1)[0x28] == 0)) {
            _printk(0x8000822,"pmic_glink_write",*(arg1 + 8));
            up_read(*arg1 + 0x70);
            iVar1 = -0x6b;
        }
        else {
            mutex_lock(arg1 + 0x18);
            iVar1 = rpmsg_send(*(**arg1 + 0x3c8),arg2,arg3 & 0xffffffff);
            mutex_unlock(arg1 + 0x18);
            up_read(*arg1 + 0x70);
            if (iVar1 < 0) {
                _printk(0x80004ed,"pmic_glink_write",arg3,arg2,*(arg1 + 8),iVar1);
            }
            else if (iVar1 == 0) {
                if (*(*arg1 + 0x150) != '\0') {
                    iVar1 = *(*arg1 + 0x14c);
                    if (iVar1 == *arg2) {
                        _printk(0x8000859,"pmic_glink_write",arg3,arg2);
                    }
                    else if (iVar1 == 0xffff) {
                        _printk(0x80009e0,"pmic_glink_write",*arg2,arg3,arg2);
                    }
                }
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.pmic_glink_register_client @ 0x08001424 (size 612) =====

ulong * sym.pmic_glink_register_client(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uint uVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    code *pcVar9;
    ulong uVar10;
    ulong *puVar11;
    code *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar8 = *(arg1 + 0x60), iVar8 == 0)) {
        puVar5 = 0xffffffffffffffed;
    }
    else if (((*(arg2 + 8) == 0) || (*(arg2 + 0x18) == 0)) || (*arg2 == 0)) {
        puVar5 = 0xffffffffffffffea;
    }
    else {
        mutex_lock(obj.pmic_glink_dev_lock);
        pcVar12 = obj.pmic_glink_dev_list;
        do {
            pcVar12 = *pcVar12;
            if (pcVar12 == obj.pmic_glink_dev_list) {
                mutex_unlock(obj.pmic_glink_dev_lock);
                goto code_r0x0800160c;
            }
        } while (*(pcVar12 + -0x128) != iVar8);
        mutex_unlock(obj.pmic_glink_dev_lock);
        if (pcVar12 + -0x130 == NULL) {
code_r0x0800160c:
            _printk(0x800075e,"pmic_glink_register_client",*arg2);
            puVar5 = 0xffffffffffffffed;
        }
        else {
            down_read(pcVar12 + -0xc0);
            uVar10 = *(pcVar12 + 0x10);
            up_read(pcVar12 + -0xc0);
            if (uVar10 == 0) {
                _printk(0x8000a63,"pmic_glink_register_client");
                puVar5 = 0xfffffffffffffdfb;
            }
            else {
                puVar5 = kmem_cache_alloc_trace(_down_read,0xdc0,0x70);
                if (puVar5 == NULL) {
                    puVar5 = 0xfffffffffffffff4;
                }
                else {
                    iVar8 = kstrdup(*arg2,0xcc0);
                    puVar5[1] = iVar8;
                    if (iVar8 == 0) {
                        kfree(puVar5);
                        puVar5 = 0xfffffffffffffff4;
                    }
                    else {
                        __mutex_init(puVar5 + 3,"&client->lock",obj.pmic_glink_dev_lock);
                        uVar3 = *(arg2 + 8);
                        *puVar5 = pcVar12 + -0x130;
                        uVar10 = *(arg2 + 0x10);
                        uVar2 = *(arg2 + 0x18);
                        *(puVar5 + 2) = uVar3;
                        uVar7 = *(arg2 + 0x20);
                        pcVar9 = pcVar12 + -0xf0;
                        puVar5[9] = uVar10;
                        puVar5[10] = uVar2;
                        puVar5[0xd] = uVar7;
                        mutex_lock(pcVar9);
                        iVar4 = idr_alloc(pcVar12 + -0x108,puVar5,*(puVar5 + 2),*(puVar5 + 2) + 1,0xcc0);
                        if (iVar4 < 0) {
                            _printk(0x80003d6,"pmic_glink_register_client",puVar5[1],iVar4);
                            mutex_unlock(pcVar9);
                            kfree(puVar5[1]);
                            kfree(puVar5);
                            puVar5 = iVar4;
                        }
                        else {
                            if (puVar5[0xd] != 0) {
                                puVar1 = puVar5 + 0xb;
                                puVar5[0xb] = puVar1;
                                puVar5[0xc] = puVar1;
                                puVar11 = *(pcVar12 + 0x30);
                                uVar6 = __list_add_valid(puVar1,puVar11,pcVar12 + 0x28);
                                if ((uVar6 & 1) != 0) {
                                    *(pcVar12 + 0x30) = puVar1;
                                    puVar5[0xb] = pcVar12 + 0x28;
                                    puVar5[0xc] = puVar11;
                                    *puVar11 = puVar1;
                                }
                            }
                            mutex_unlock(pcVar9);
                            ipc_log_string(*(pcVar12 + -0x110),"Registered client %s\n",puVar5[1]);
                        }
                    }
                }
            }
        }
    }
    return puVar5;
}


// ===== sym.pmic_glink_unregister_client @ 0x0800168c (size 248) =====

ulong sym.pmic_glink_unregister_client(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        uVar2 = 0xffffffed;
    }
    else {
        mutex_lock(*arg1 + 0x40);
        iVar3 = *arg1;
        piVar4 = *(iVar3 + 0x158);
        if (iVar3 + 0x158 != piVar4) {
            do {
                piVar5 = piVar4 + -0xb;
                piVar4 = *piVar4;
                if (piVar5 == arg1) {
                    uVar1 = __list_del_entry_valid(arg1 + 0x58);
                    if ((uVar1 & 1) != 0) {
                        iVar3 = *(arg1 + 0x58);
                        piVar5 = *(arg1 + 0x60);
                        *(iVar3 + 8) = piVar5;
                        *piVar5 = iVar3;
                    }
                    iVar3 = *arg1;
                    *(arg1 + 0x58) = 0xdead000000000100;
                    *(arg1 + 0x60) = 0xdead000000000122;
                }
            } while (iVar3 + 0x158 != piVar4);
        }
        idr_remove(iVar3 + 0x28,*(arg1 + 0x10));
        mutex_unlock(*arg1 + 0x40);
        ipc_log_string(*(*arg1 + 0x20),"Unregistered client %s\n",*(arg1 + 8));
        kfree(*(arg1 + 8));
        kfree(arg1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.pmic_glink_probe @ 0x08001784 (size 1256) =====

uint64_t sym.pmic_glink_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = devm_kmalloc(arg1 + 0x10,0x1b0,0xdc0);
    if (iVar3 == 0) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001bcc;
    }
    uVar2 = of_property_read_string(*(arg1 + 0x300),"qcom,pmic-glink-channel",iVar3 + 0x18);
    if (uVar2 < 0) {
        uVar4 = uVar2;
        uVar8 = 0x8000a06;
        goto code_r0x08001b9c;
    }
    uVar8 = *(iVar3 + 0x18);
    uVar4 = strlen(uVar8);
    if (0x20 < uVar4) {
        uVar7 = 0x8000721;
        goto code_r0x08001bc4;
    }
    piVar1 = iVar3 + 0x180;
    of_property_read_string(*(arg1 + 0x300),"qcom,subsys-name",piVar1);
    iVar5 = of_find_property(*(arg1 + 0x300),"qcom,protection-domain",0);
    if (iVar5 != 0) {
        uVar2 = of_property_read_string_helper(*(arg1 + 0x300),"qcom,protection-domain",iVar3 + 0x198,1,0);
        if (uVar2 < 0) {
            uVar4 = uVar2;
            uVar8 = 0x80008f9;
code_r0x08001b9c:
            _printk(uVar8,"pmic_glink_probe",uVar4);
        }
        else {
            uVar8 = *(iVar3 + 0x198);
            uVar4 = strlen(uVar8);
            if (uVar4 < 0x41) {
                uVar2 = of_property_read_string_helper(*(arg1 + 0x300),"qcom,protection-domain",iVar3 + 0x1a0,1,1);
                if (uVar2 < 0) {
                    uVar4 = uVar2;
                    uVar8 = 0x800087a;
                    goto code_r0x08001b9c;
                }
                uVar8 = *(iVar3 + 0x1a0);
                uVar4 = strlen(uVar8);
                if (uVar4 < 0x41) goto code_r0x08001894;
                uVar7 = 0x8000a8b;
            }
            else {
                uVar7 = 0x80008c6;
            }
code_r0x08001bc4:
            _printk(uVar7,"pmic_glink_probe",uVar8);
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001bcc;
    }
code_r0x08001894:
    iVar5 = alloc_workqueue(0x8000530,0xe000a,1,"pmic_glink_rx");
    *(iVar3 + 0x118) = iVar5;
    if (iVar5 == 0) {
        _printk(0x800095e,"pmic_glink_probe");
        uVar4 = 0xfffffff4;
        goto code_r0x08001bcc;
    }
    __init_rwsem(iVar3 + 0x70,"&pgdev->rpdev_sem",obj.pmic_glink_dev_lock);
    *(iVar3 + 0xb8) = 0xfffffffe0;
    iVar5 = iVar3 + 0x130;
    *(iVar3 + 0xc0) = iVar3 + 0xc0;
    *(iVar3 + 200) = iVar3 + 0xc0;
    *(iVar3 + 0xd0) = sym.pmic_glink_rx_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
    *(iVar3 + 0xe8) = 0xfffffffe0;
    *(iVar3 + 0xf0) = iVar3 + 0xf0;
    *(iVar3 + 0xf8) = iVar3 + 0xf0;
    *(iVar3 + 0x100) = sym.pmic_glink_init_work.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
    *(iVar3 + 0x158) = iVar3 + 0x158;
    *(iVar3 + 0x160) = iVar3 + 0x158;
    *(iVar3 + 0x120) = iVar3 + 0x120;
    *(iVar3 + 0x128) = iVar3 + 0x120;
    *(iVar3 + 0x130) = iVar5;
    *(iVar3 + 0x138) = iVar5;
    *(iVar3 + 0xb0) = 0;
    __mutex_init(iVar3 + 0x40,"&pgdev->client_lock",obj.pmic_glink_dev_lock);
    *(iVar3 + 0x28) = 0x1000000400000000;
    *(iVar3 + 0x30) = 0;
    *(iVar3 + 0x38) = 0;
    *(iVar3 + 0x144) = 0;
    *(iVar3 + 0x1a8) = 0x7fffffff;
    iVar6 = ipc_log_context_create(10,*(iVar3 + 0x18),0);
    *(iVar3 + 0x20) = iVar6;
    if (iVar6 == 0) {
        _printk(0x8000931,"pmic_glink_probe");
        iVar6 = *piVar1;
        if (iVar6 != 0) goto code_r0x08001990;
code_r0x080019b0:
        if (*(iVar3 + 0x198) == 0) {
code_r0x08001a48:
            *(arg1 + 0xa8) = iVar3;
            *(iVar3 + 8) = arg1 + 0x10;
            mutex_lock(obj.pmic_glink_dev_lock);
            iVar6 = _obj.pmic_glink_dev_list;
            uVar4 = __list_add_valid(iVar5,obj.pmic_glink_dev_list,_obj.pmic_glink_dev_list);
            if ((uVar4 & 1) != 0) {
                *(iVar6 + 8) = iVar5;
                *(iVar3 + 0x130) = iVar6;
                *(iVar3 + 0x138) = obj.pmic_glink_dev_list;
                _obj.pmic_glink_dev_list = iVar5;
            }
            mutex_unlock(obj.pmic_glink_dev_lock);
            iVar5 = (*(iVar3 + 8))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 8);
            }
            uVar4 = debugfs_create_dir(iVar5,0);
            if (uVar4 < 0xfffffffffffff001) {
                *(iVar3 + 0x10) = uVar4;
                debugfs_create_u32("filter",0x180,uVar4,iVar3 + 0x14c);
                debugfs_create_bool("enable",0x180,uVar4,iVar3 + 0x150);
            }
            else {
                _printk(0x8000416,"pmic_glink_add_debugfs",uVar4);
            }
            device_init_wakeup(*(iVar3 + 8),1);
            ipc_log_string(*(iVar3 + 0x20),"%s probed successfully\n",*(iVar3 + 0x18));
            uVar4 = 0;
            goto code_r0x08001bcc;
        }
        uVar4 = pdr_handle_alloc(sym.pmic_glink_pdr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt,iVar3);
        *(iVar3 + 400) = uVar4;
        if (uVar4 < 0xfffffffffffff001) {
            uVar4 = pdr_add_lookup(uVar4,*(iVar3 + 0x198),*(iVar3 + 0x1a0));
            if ((uVar4 < 0xfffffffffffff001) || (uVar4 == 0xffffffffffffff8e)) {
                ipc_log_string(*(iVar3 + 0x20),"Registering PDR for path_name: %s service_name: %s\n",*(iVar3 + 0x1a0)
                               ,*(iVar3 + 0x198));
                goto code_r0x08001a48;
            }
            _printk(0x8000578,"pmic_glink_probe",uVar4 & 0xffffffff);
            pdr_handle_release(*(iVar3 + 400));
        }
        else if (uVar4 == -0x205) {
            uVar4 = 0xfffffdfb;
        }
        else {
            _printk(0x8000497,"pmic_glink_probe",uVar4 & 0xffffffff);
        }
        qcom_unregister_ssr_notifier(*(iVar3 + 0x188),iVar3 + 0x168);
    }
    else {
        iVar6 = *piVar1;
        if (iVar6 == 0) goto code_r0x080019b0;
code_r0x08001990:
        *(iVar3 + 0x168) = sym.pmic_glink_ssr_notifier_cb.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt;
        uVar4 = qcom_register_ssr_notifier(iVar6,iVar3 + 0x168);
        *(iVar3 + 0x188) = uVar4;
        if (uVar4 < 0xfffffffffffff001) goto code_r0x080019b0;
        _printk(0x8000abb,"pmic_glink_probe",uVar4 & 0xffffffff);
    }
    ipc_log_context_destroy(*(iVar3 + 0x20));
    idr_destroy(iVar3 + 0x28);
    destroy_workqueue(*(iVar3 + 0x118));
code_r0x08001bcc:
    return uVar4 & 0xffffffff;
}


// ===== sym.pmic_glink_remove @ 0x08001c6c (size 276) =====

ulong sym.pmic_glink_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar5 = *(arg1 + 0xa8);
    ipc_log_context_destroy(*(pcVar5 + 0x20));
    pdr_handle_release(*(pcVar5 + 400));
    qcom_unregister_ssr_notifier(*(pcVar5 + 0x188),pcVar5 + 0x168);
    device_init_wakeup(*(pcVar5 + 8),0);
    debugfs_remove(*(pcVar5 + 0x10));
    flush_workqueue(*(pcVar5 + 0x118));
    destroy_workqueue(*(pcVar5 + 0x118));
    idr_destroy(pcVar5 + 0x28);
    of_platform_depopulate(arg1 + 0x10);
    pcVar5[0x148] = 0x0;
    mutex_lock(obj.pmic_glink_dev_lock);
    if (_obj.pmic_glink_dev_list != obj.pmic_glink_dev_list) {
        pcVar4 = _obj.pmic_glink_dev_list;
        do {
            pcVar6 = *pcVar4;
            if (pcVar4 + -0x130 == pcVar5) {
                uVar3 = __list_del_entry_valid(pcVar5 + 0x130);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *(pcVar5 + 0x130);
                    piVar2 = *(pcVar5 + 0x138);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *(pcVar5 + 0x130) = 0xdead000000000100;
                *(pcVar5 + 0x138) = 0xdead000000000122;
            }
            pcVar4 = pcVar6;
        } while (pcVar6 != obj.pmic_glink_dev_list);
    }
    mutex_unlock(obj.pmic_glink_dev_lock);
    return 0;
}


// ===== sym.pmic_glink_rx_work @ 0x08001d80 (size 480) =====

void sym.pmic_glink_rx_work(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -8;
    uVar2 = _raw_spin_lock_irqsave(iVar5);
    piVar1 = arg1 + 0x68;
    if ((piVar1 != *piVar1) && (*(arg1 + 0x68) != piVar1)) {
        piVar6 = *(arg1 + 0x68);
        do {
            piVar7 = *piVar6;
            _raw_spin_unlock_irqrestore(iVar5,uVar2);
            mutex_lock(arg1 + -0x78);
            piVar9 = piVar6 + 3;
            iVar3 = idr_find(arg1 + -0x90,*piVar9);
            mutex_unlock(arg1 + -0x78);
            if ((iVar3 == 0) || (*(iVar3 + 0x50) == 0)) {
                _printk(0x800045d,"pmic_glink_rx_callback",*piVar9);
            }
            else {
                if (*(arg1 + 0x98) != '\0') {
                    if (*(arg1 + 0x94) == *piVar9) {
                        _printk(0x80006d3,"pmic_glink_rx_callback",piVar6[2],piVar9);
                    }
                    else if (*(arg1 + 0x94) == 0xffff) {
                        _printk(0x80009a2,"pmic_glink_rx_callback",*piVar9,piVar6[2],piVar9);
                    }
                }
                pcVar8 = *(iVar3 + 0x50);
                __cfi_slowpath_diag(0x268e9722c14a4592,pcVar8,0x8000380);
                (*pcVar8)(*(iVar3 + 0x48),piVar9,piVar6[2]);
            }
            uVar2 = _raw_spin_lock_irqsave(iVar5);
            uVar4 = __list_del_entry_valid(piVar6);
            if ((uVar4 & 1) != 0) {
                iVar3 = *piVar6;
                piVar9 = piVar6[1];
                *(iVar3 + 8) = piVar9;
                *piVar9 = iVar3;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6);
            piVar6 = piVar7;
        } while (piVar7 != piVar1);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar2);
    return;
}


// ===== sym.pmic_glink_init_work @ 0x08001f64 (size 188) =====

void sym.pmic_glink_init_work(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + -0xe0);
    if ((*(arg1 + 0xc0) == 0xfffffff) || (*(arg1 + 0x5c) == 2)) {
        sym.pmic_glink_notify_clients(arg1 + -0xe8,1);
        *(arg1 + 0xc0) = 0x1fffffff;
        *(arg1 + 0x5c) = 1;
    }
    if (*(arg1 + 0x60) == '\0') {
        iVar1 = of_platform_populate(*(iVar2 + 0x2f0),0,0,iVar2);
        if (iVar1 < 0) {
            _printk(0x8000bad,"pmic_glink_init_work",iVar1);
        }
        else {
            *(arg1 + 0x60) = 1;
        }
    }
    return;
}


// ===== sym.pmic_glink_ssr_notifier_cb @ 0x08002028 (size 148) =====

uchar  [16] sym.pmic_glink_ssr_notifier_cb(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(arg1 + -0x148),"code: %lu\n",arg2);
    if ((arg2 != 1) && (arg2 == 2)) {
        *(arg1 + -0x24) = 2;
        sym.pmic_glink_notify_clients(arg1 + -0x168,0);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(arg1 + 0x18);
    return auVar1 << 0x40;
}


// ===== sym.pmic_glink_pdr_notifier_cb @ 0x0800226c (size 160) =====

void sym.pmic_glink_pdr_notifier_cb(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(arg2 + 0x20),"PDR state: %x\n",arg1 & 0xffffffff);
    if (arg1 == 0x1fffffff) {
        ipc_log_string(*(arg2 + 0x20),"PD state up for %s\n",*(arg2 + 0x198));
    }
    else if (arg1 == 0xfffffff) {
        ipc_log_string(*(arg2 + 0x20),"PD state down for %s\n",*(arg2 + 0x198));
        sym.pmic_glink_notify_clients(arg2,0);
        *(arg2 + 0x1a8) = 0xfffffff;
    }
    return;
}


// ===== sym.pmic_glink_notify_clients @ 0x0800230c (size 208) =====

void sym.pmic_glink_notify_clients(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pm_stay_awake(*(arg1 + 8));
    mutex_lock(arg1 + 0x40);
    for (piVar2 = *(arg1 + 0x158); arg1 + 0x158 != piVar2; piVar2 = *piVar2) {
        pcVar1 = piVar2[2];
        __cfi_slowpath_diag(0x270677cd32fe9fb0,pcVar1,0x80003a0);
        (*pcVar1)(piVar2[-2],arg2 & 0xffffffffU);
    }
    mutex_unlock(arg1 + 0x40);
    pm_relax(*(arg1 + 8));
    ipc_log_string(*(arg1 + 0x20),"state_cb done %d\n",arg2 & 0xffffffffU);
    return;
}


// ===== sym.pmic_glink_rpmsg_probe @ 0x080023dc (size 268) =====

ulong sym.pmic_glink_rpmsg_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pmic_glink_dev_lock);
    iVar1 = arg1 + 0x390;
    pcVar4 = obj.pmic_glink_dev_list;
    do {
        pcVar4 = *pcVar4;
        if (pcVar4 == obj.pmic_glink_dev_list) {
            mutex_unlock(obj.pmic_glink_dev_lock);
            goto code_r0x080024c8;
        }
        iVar2 = strcmp(iVar1,*(pcVar4 + -0x118));
    } while (iVar2 != 0);
    pcVar5 = pcVar4 + -0x130;
    mutex_unlock(obj.pmic_glink_dev_lock);
    if (pcVar5 == NULL) {
code_r0x080024c8:
        _printk(0x800075e,"pmic_glink_rpmsg_probe",iVar1);
        uVar3 = 0xfffffdfb;
    }
    else {
        down_write(pcVar4 + -0xc0);
        *(arg1 + 0x98) = pcVar5;
        *pcVar5 = arg1;
        *(pcVar4 + 0x10) = 1;
        up_write(pcVar4 + -0xc0);
        queue_work_on(0x20,_rpmsg_send,pcVar4 + -0x48);
        ipc_log_string(*(pcVar4 + -0x110),"%s probed\n",iVar1);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.pmic_glink_rpmsg_remove @ 0x080024e8 (size 224) =====

void sym.pmic_glink_rpmsg_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.pmic_glink_dev_lock);
    arg1 = arg1 + 0x390;
    pcVar2 = obj.pmic_glink_dev_list;
    do {
        pcVar2 = *pcVar2;
        if (pcVar2 == obj.pmic_glink_dev_list) {
            mutex_unlock(obj.pmic_glink_dev_lock);
            goto code_r0x080025ac;
        }
        iVar1 = strcmp(arg1,*(pcVar2 + -0x118));
    } while (iVar1 != 0);
    mutex_unlock(obj.pmic_glink_dev_lock);
    if (pcVar2 + -0x130 == NULL) {
code_r0x080025ac:
        _printk(0x800075e,"pmic_glink_rpmsg_remove",arg1);
    }
    else {
        down_write(pcVar2 + -0xc0);
        *(pcVar2 + 0x10) = 0;
        *(pcVar2 + -0x130) = 0;
        up_write(pcVar2 + -0xc0);
        ipc_log_string(*(pcVar2 + -0x110),"%s removed\n",arg1);
    }
    return;
}


// ===== sym.pmic_glink_rpmsg_callback @ 0x080025c8 (size 244) =====

ulong sym.pmic_glink_rpmsg_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 0xc) {
        _printk(0x80007b1,"pmic_glink_rpmsg_callback",arg3,0xc);
        uVar2 = 0xffffffea;
    }
    else {
        iVar4 = arg3;
        iVar6 = *(arg1 + 0x98);
        piVar1 = __kmalloc(iVar4 + 0x18,0xb20);
        if (piVar1 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            piVar1[2] = iVar4;
            memcpy(piVar1 + 3,arg2,iVar4);
            uVar2 = _raw_spin_lock_irqsave(iVar6 + 0xb0);
            puVar5 = *(iVar6 + 0x128);
            uVar3 = __list_add_valid(piVar1,puVar5,iVar6 + 0x120);
            if ((uVar3 & 1) != 0) {
                *(iVar6 + 0x128) = piVar1;
                *piVar1 = iVar6 + 0x120;
                piVar1[1] = puVar5;
                *puVar5 = piVar1;
            }
            _raw_spin_unlock_irqrestore(iVar6 + 0xb0,uVar2);
            queue_work_on(0x20,*(iVar6 + 0x118),iVar6 + 0xb8);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x080026bc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002700

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
    //switch table (4 cases) at 0x80003c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002714);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002770 (size 76) =====

void sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt,obj.__this_module);
    if (-1 < iVar1) {
        __register_rpmsg_driver(obj.pmic_glink_rpmsg_driver,obj.__this_module);
    }
    return;
}


// ===== sym.cleanup_module @ 0x080027bc (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.pmic_glink_rpmsg_driver);
    platform_driver_unregister(reloc.pmic_glink_probe.7d5b00eae26b800f052f6bee13e4f7b3.cfi_jt);
    return;
}

