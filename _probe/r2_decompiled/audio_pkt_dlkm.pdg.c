// decompiled from audio_pkt_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08003520

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 != -0x7bcbda558eb245e5) {
                if (arg1 != -0x7a1aa6da8fe5e465) goto code_r0x080034e0;
                pcVar2 = sym.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt;
code_r0x08002198:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080034e0;
            }
            pcVar2 = sym.audio_pkt_poll.72713d5b9ce3d092dab592f002cda6ff.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt;
                goto code_r0x08002198;
            }
            if (arg1 != -0xa97bb5b83a5679b) goto code_r0x080034e0;
            pcVar2 = sym.audio_pkt_srvc_callback.72713d5b9ce3d092dab592f002cda6ff.cfi_jt;
        }
    }
    else if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.audio_pkt_open.cfi_jt;
            goto code_r0x08002198;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x080034e0;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7ff5a213d37b1a6) {
        pcVar2 = sym.audio_pkt_read.cfi_jt;
    }
    else if (arg1 == 0x1d7ed092cb04d3f1) {
        pcVar2 = sym.audio_pkt_write.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080034e0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080034e0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003534);
    (*pcVar1)();
}


// ===== sym.audio_pkt_poll.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x080021c0 (size 8) =====

uint sym.audio_pkt_poll.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong uVar2;
    uint uVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0xd8) + 0x10);
    if (iVar5 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_poll._rs,"audio_pkt_poll");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_poll");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_poll");
        uVar3 = 8;
    }
    else {
        if (param_2 != NULL) {
            pcVar4 = *param_2;
            if (iVar5 + 0xe0 != 0 && pcVar4 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000590);
                (*pcVar4)(param_1,iVar5 + 0xe0,param_2);
            }
        }
        mutex_lock(iVar5 + 0x90);
        uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        uVar3 = 0;
        if (*(iVar5 + 200) != iVar5 + 200) {
            uVar3 = 0x41;
        }
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar2);
        mutex_unlock(iVar5 + 0x90);
    }
    return uVar3;
}


// ===== sym.audio_pkt_srvc_callback.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x080021c8 (size 8) =====

ulong sym.audio_pkt_srvc_callback.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0x98) + 0x10);
    uVar1 = *param_2;
    if ((obj.audio_pkt_debug_mask & 1) == 0) {
        uVar4 = uVar1 >> 8 & 0xffff;
    }
    else {
        uVar4 = uVar1 >> 8 & 0xffff;
        ipc_log_string(0,"[%s]: %s: header %d packet %d \n","audio_pkt_srvc_callback","audio_pkt_srvc_callback",
                       uVar1 >> 2 & 0x3c,uVar4);
    }
    iVar2 = __alloc_skb(uVar4,0xa20,0,0xffffffff);
    if (iVar2 == 0) {
        uVar3 = 0xfffffff4;
    }
    else {
        uVar3 = skb_put(iVar2,uVar4);
        memcpy(uVar3,param_2,uVar4);
        uVar3 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        skb_queue_tail(iVar5 + 200,iVar2);
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar3);
        __wake_up(iVar5 + 0xe0,1,1,0);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.audio_pkt_write.cfi_jt @ 0x080021e0 (size 8) =====

uint32_t * sym.audio_pkt_write.cfi_jt(int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    int iVar1;
    int iVar2;
    uint32_t *arg1;
    char *pcVar3;
    ulong *in_x18;
    uint32_t *puVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == 0)) || (puVar5 = *(param_1 + 0xd8), puVar5 == NULL)) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000a76,"audio_pkt_write");
        }
        pcVar3 = "[%s]: invalid parameters\n";
code_r0x08002820:
        ipc_log_string(0,pcVar3,"audio_pkt_write");
        return 0xffffffffffffffea;
    }
    iVar6 = puVar5[2];
    if (iVar6 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.11,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_write");
        }
        pcVar3 = "[%s]: invalid device handle\n";
        goto code_r0x08002820;
    }
    mutex_lock(puVar5 + 3);
    iVar1 = *(puVar5 + 9);
    mutex_unlock(puVar5 + 3);
    if (iVar1 != 1) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.12,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x800079d,"audio_pkt_write");
        }
        ipc_log_string(0,"[%s]: dev is in reset\n","audio_pkt_write");
        return 0xffffffffffffff9a;
    }
    if (param_3 < 0x18) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.13,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000831,"audio_pkt_write",param_3);
        }
        ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",param_3);
        return 0xffffffffffffffea;
    }
    arg1 = memdup_user(param_2,param_3);
    if (0xfffffffffffff000 < arg1) {
        return arg1;
    }
    if ((0x1000 < param_3) || (param_3 < *arg1 >> 8)) {
        puVar4 = 0xffffffffffffffea;
        goto code_r0x08002900;
    }
    if (arg1[5] == 0x100100c) {
        if (param_3 < 0x2c) {
            iVar1 = ___ratelimit(obj.audio_pkt_write._rs.16,"audio_pkt_write");
            if (iVar1 != 0) {
                _printk(0x8000831,"audio_pkt_write",param_3);
            }
            ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",param_3);
            puVar4 = 0xffffffffffffffea;
            goto code_r0x08002900;
        }
        iVar1 = sym.audpkt_chk_and_update_physical_addr(arg1);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.audio_pkt_write._rs.17,"audio_pkt_write");
            if (iVar2 != 0) {
                _printk(0x80009f3,"audio_pkt_write",iVar1);
            }
            ipc_log_string(0,"[%s]: Update Physical Address Failed -%d\n","audio_pkt_write",iVar1);
            puVar4 = iVar1;
            goto code_r0x08002900;
        }
    }
    iVar6 = iVar6 + 0x90;
    iVar1 = mutex_lock_interruptible(iVar6);
    if (iVar1 == 0) {
        iVar2 = gpr_send_pkt(*puVar5,arg1);
        iVar1 = iVar2;
        if (iVar2 < 0) {
            iVar1 = ___ratelimit(obj.audio_pkt_write._rs.21,"audio_pkt_write");
            if (iVar1 != 0) {
                _printk(0x800084c,"audio_pkt_write",iVar2);
            }
            ipc_log_string(0,"[%s]: APR Send Packet Failed ret -%d\n","audio_pkt_write",iVar2);
            iVar1 = -0x66;
            if (iVar2 != -0x68) {
                iVar1 = iVar2;
            }
        }
        mutex_unlock(iVar6);
        kfree(arg1);
        if (iVar1 < 0) {
            return iVar1;
        }
        return param_3;
    }
    puVar4 = 0xfffffffffffffe00;
code_r0x08002900:
    kfree(arg1);
    return puVar4;
}


// ===== sym.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x080021e8 (size 8) =====

uint64_t sym.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    code cVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    puVar6 = devm_kmalloc(iVar1,0x130,0xdc0);
    if (puVar6 == NULL) {
        uVar7 = 0xfffffff4;
    }
    else {
        uVar4 = alloc_chrdev_region(puVar6 + 0x24,0,1,"aud_pasthru_adsp");
        if (uVar4 < 0) {
            uVar7 = uVar4;
            iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs,"audio_pkt_platform_driver_probe");
            if (iVar5 != 0) {
                _printk(0x8000b12,"audio_pkt_platform_driver_probe",uVar7);
            }
            ipc_log_string(0,"[%s]: alloc_chrdev_region failed ret:%d\n","audio_pkt_platform_driver_probe",uVar7);
        }
        else {
            uVar7 = __class_create(obj.__this_module,"aud_pasthru_adsp",obj.audio_pkt_platform_driver_probe.__key);
            puVar6[0x25] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                uVar7 = device_create(uVar7,0,puVar6[0x24],0,"aud_pasthru_adsp");
                *puVar6 = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
                    puVar2 = puVar6 + 0x1f;
                    strlcpy(puVar2,"aud_pasthru_adsp",0x14);
                    strlcpy(puVar6 + 0x10c,"adsp_apps",0x14);
                    dev_set_name(*puVar6,puVar2);
                    __mutex_init(puVar6 + 0x12,"&audpkt_dev->lock",obj.audio_pkt_platform_driver_probe.__key);
                    *(puVar6 + 0x18) = 0;
                    puVar6[0x19] = puVar6 + 0x19;
                    puVar6[0x1a] = puVar6 + 0x19;
                    puVar6[0x1b] = 0;
                    __init_waitqueue_head
                              (puVar6 + 0x1c,"&audpkt_dev->readq",obj.audio_pkt_platform_driver_probe.__key);
                    cdev_init(puVar6 + 1,obj.audio_pkt_fops);
                    puVar6[0xd] = obj.__this_module;
                    uVar4 = cdev_add(puVar6 + 1,puVar6[0x24],1);
                    if (uVar4 == 0) {
                        _segment.ehdr = devm_kmalloc(iVar1,0x50,0xdc0);
                        if (_segment.ehdr == 0) {
                            uVar7 = 0xfffffff4;
                        }
                        else {
                            uVar8 = __gpr_driver_register
                                              (reloc.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt,
                                               obj.__this_module);
                            uVar7 = uVar8 & 0xffffffff;
                            if (-1 < uVar8) {
                                __mutex_init(_segment.ehdr + 0x18,"&ap_priv->lock",
                                             obj.audio_pkt_platform_driver_probe.__key);
                                iVar1 = _segment.ehdr;
                                *(_segment.ehdr + 0x48) = 0;
                                cVar3 = obj.audio_pkt_debug_mask;
                                *(iVar1 + 0x10) = puVar6;
                                *(iVar1 + 8) = *puVar6;
                                *(param_1 + 0xa8) = iVar1;
                                if ((cVar3 & 1) != 0) {
                                    ipc_log_string(0,"[%s]: Audio Packet Port Driver Initialized\n",
                                                   "audio_pkt_platform_driver_probe");
                                }
                                goto code_r0x08002ec0;
                            }
                            _dev_err(iVar1,"%s: registering to gpr driver failed, err = %d\n",
                                     "audio_pkt_plaform_driver_register_gpr",uVar7);
                        }
                        _dev_err(iVar1,"%s: Failed to register with gpr, err = %d\n","audio_pkt_platform_driver_probe"
                                 ,uVar7);
                    }
                    else {
                        uVar7 = uVar4;
                        iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.40,
                                             "audio_pkt_platform_driver_probe");
                        if (iVar5 != 0) {
                            _printk(0x80008f6,"audio_pkt_platform_driver_probe",puVar2,uVar7);
                        }
                        ipc_log_string(0,"[%s]: cdev_add failed for %s ret:%d\n","audio_pkt_platform_driver_probe",
                                       puVar2,uVar7);
                    }
                    device_destroy(puVar6[0x25],puVar6[0x24]);
                }
                else {
                    iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.32,"audio_pkt_platform_driver_probe");
                    if (iVar5 != 0) {
                        _printk(0x800061c,"audio_pkt_platform_driver_probe",*puVar6);
                    }
                    ipc_log_string(0,"[%s]: device_create failed ret:%ld\n","audio_pkt_platform_driver_probe",*puVar6
                                  );
                }
                class_destroy(puVar6[0x25]);
            }
            else {
                iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.29,"audio_pkt_platform_driver_probe");
                if (iVar5 != 0) {
                    _printk(0x8000999,"audio_pkt_platform_driver_probe",puVar6[0x25]);
                }
                ipc_log_string(0,"[%s]: class_create failed ret:%ld\n","audio_pkt_platform_driver_probe",puVar6[0x25]
                              );
            }
            unregister_chrdev_region(puVar6[0x24] >> 0x14,1);
        }
    }
code_r0x08002ec0:
    return uVar7 & 0xffffffff;
}


// ===== sym.audio_pkt_platform_driver_remove.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x080021f0 (size 8) =====

ulong sym.audio_pkt_platform_driver_remove.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0xa8) + 0x10);
    gpr_driver_unregister(reloc.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt);
    iVar6 = *(*(param_1 + 0xa8) + 0x10);
    if (iVar6 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_internal_release._rs,"audio_pkt_internal_release");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_internal_release");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_internal_release");
    }
    else {
        if ((obj.audio_pkt_debug_mask & 1) != 0) {
            ipc_log_string(0,"[%s]: %s: for %s\n","audio_pkt_internal_release","audio_pkt_internal_release",
                           iVar6 + 0x10c);
        }
        uVar2 = _raw_spin_lock_irqsave(iVar6 + 0xc0);
        puVar4 = iVar6 + 200;
        puVar3 = *puVar4;
        while (puVar3 != puVar4) {
            skb_dequeue(puVar4);
            kfree_skb();
            puVar3 = *puVar4;
        }
        _raw_spin_unlock_irqrestore(iVar6 + 0xc0,uVar2);
        __wake_up(iVar6 + 0xe0,1,1,0);
    }
    if (iVar5 != 0) {
        cdev_del(iVar5 + 8);
        device_destroy(*(iVar5 + 0x128),*(iVar5 + 0x120));
        class_destroy(*(iVar5 + 0x128));
        unregister_chrdev_region(*(iVar5 + 0x120) >> 0x14,1);
    }
    if ((obj.audio_pkt_debug_mask & 1) != 0) {
        ipc_log_string(0,"[%s]: Audio Packet Port Driver Removed\n","audio_pkt_platform_driver_remove");
    }
    return 0;
}


// ===== sym.audio_pkt_read.cfi_jt @ 0x080021f8 (size 8) =====

uint32_t * sym.audio_pkt_read.cfi_jt(int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar10;
    uint32_t *unaff_x20;
    uint32_t *puVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_b8;
    uint32_t auStack_b0 [2];
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t *puStack_90;
    uint32_t *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    iVar12 = *(param_1 + 0xd8);
    iVar16 = *(iVar12 + 0x10);
    if (iVar16 == 0) {
        iVar4 = ___ratelimit(obj.audio_pkt_read._rs,"audio_pkt_read");
        if (iVar4 != 0) {
            _printk(0x8000aba,"audio_pkt_read");
        }
        pcVar8 = "audio_pkt_read";
        ipc_log_string(0,"[%s]: invalid device handle\n");
        puVar11 = 0xffffffffffffffea;
    }
    else {
        pcVar8 = param_3;
        mutex_lock(iVar12 + 0x18);
        iVar4 = *(iVar12 + 0x48);
        mutex_unlock(iVar12 + 0x18);
        unaff_x20 = param_3;
        if (iVar4 == 1) {
            iVar12 = iVar16 + 0xc0;
            uVar6 = _raw_spin_lock_irqsave(iVar12);
            piVar13 = iVar16 + 200;
            piVar15 = *piVar13;
            if (piVar15 == piVar13) {
                _raw_spin_unlock_irqrestore(iVar12,uVar6);
                if ((*(param_1 + 0x41) >> 3 & 1) != 0) {
                    puVar11 = 0xfffffffffffffff5;
                    goto code_r0x080025c4;
                }
                if (*piVar13 == piVar15) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    iVar1 = iVar16 + 0xe0;
                    pcVar8 = 0x1;
                    iVar7 = prepare_to_wait_event(iVar1,&uStack_80);
                    piVar9 = *(iVar16 + 200);
                    while (piVar9 == piVar15) {
                        if (iVar7 != 0) {
                            if (iVar7 == 0) goto code_r0x080024cc;
                            puVar11 = 0xfffffffffffffe00;
                            goto code_r0x080025c4;
                        }
                        schedule();
                        pcVar8 = 0x1;
                        iVar7 = prepare_to_wait_event(iVar1,&uStack_80);
                        piVar9 = *piVar13;
                    }
                    finish_wait(iVar1,&uStack_80);
                }
code_r0x080024cc:
                uVar6 = _raw_spin_lock_irqsave(iVar12);
            }
            iVar16 = skb_dequeue(piVar13);
            _raw_spin_unlock_irqrestore(iVar12,uVar6);
            if (iVar16 == 0) {
                puVar11 = 0xfffffffffffffff2;
            }
            else {
                if (*(iVar16 + 0x70) <= param_3) {
                    param_3 = *(iVar16 + 0x70);
                }
                if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8002644);
                    (*pcVar2)();
                }
                unaff_x20 = *(iVar16 + 0xd8);
                puVar11 = param_3;
                auVar17 = __check_object_size(unaff_x20,puVar11,1);
                pcVar8 = puVar11;
                iVar12 = sym._copy_to_user(param_2,auVar17,puVar11);
                if (iVar12 != 0) {
                    puVar11 = 0xfffffffffffffff2;
                }
                kfree_skb(iVar16);
            }
        }
        else {
            iVar4 = ___ratelimit(obj.audio_pkt_read._rs.3,"audio_pkt_read");
            if (iVar4 != 0) {
                _printk(0x800079d,"audio_pkt_read");
            }
            pcVar8 = "audio_pkt_read";
            ipc_log_string(0,"[%s]: dev is in reset\n");
            puVar11 = 0xffffffffffffff9a;
        }
    }
code_r0x080025c4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return puVar11;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18 = sym.audpkt_chk_and_update_physical_addr;
    pcStack_98 = sym.audpkt_chk_and_update_physical_addr;
    iVar12 = sp_el0;
    iStack_a8 = *(iVar12 + 0x5e0);
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    puStack_a0 = &stack0xffffffffffffffb0;
    puStack_90 = unaff_x20;
    puStack_88 = puVar11;
    if ((*(iVar16 + 0x1c) >> 2 & 1) == 0) {
        puVar11 = NULL;
    }
    else {
        pcVar8 = auStack_b0;
        uVar3 = msm_audio_get_phy_addr(*(iVar16 + 0x20),&uStack_b8);
        puVar11 = uVar3;
        if (uVar3 < 0) {
            iVar4 = ___ratelimit(obj.audpkt_chk_and_update_physical_addr._rs,"audpkt_chk_and_update_physical_addr");
            if (iVar4 != 0) {
                _printk(0x80008b8,"audpkt_chk_and_update_physical_addr","audpkt_chk_and_update_physical_addr",puVar11
                       );
            }
            pcVar8 = "audpkt_chk_and_update_physical_addr";
            ipc_log_string(0,"[%s]: %s Get phy. address failed, ret %d\n","audpkt_chk_and_update_physical_addr",
                           "audpkt_chk_and_update_physical_addr",puVar11);
        }
        else {
            if ((obj.audio_pkt_debug_mask & 1) != 0) {
                pcVar8 = "audpkt_chk_and_update_physical_addr";
                ipc_log_string(0,"[%s]: %s physical address %pK","audpkt_chk_and_update_physical_addr",
                               "audpkt_chk_and_update_physical_addr",uStack_b8);
            }
            *(iVar16 + 0x20) = uStack_b8;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_a8) {
        return puVar11;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.audio_pkt_write;
    if (((auVar17._0_8_ == 0) || (auVar17._8_8_ == 0)) || (puVar14 = *(auVar17._0_8_ + 0xd8), puVar14 == NULL)) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000a76,"audio_pkt_write");
        }
        pcVar8 = "[%s]: invalid parameters\n";
code_r0x08002820:
        ipc_log_string(0,pcVar8,"audio_pkt_write");
        return 0xffffffffffffffea;
    }
    iVar12 = puVar14[2];
    if (iVar12 == 0) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.11,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000aba,"audio_pkt_write");
        }
        pcVar8 = "[%s]: invalid device handle\n";
        goto code_r0x08002820;
    }
    mutex_lock(puVar14 + 3);
    iVar4 = *(puVar14 + 9);
    mutex_unlock(puVar14 + 3);
    if (iVar4 != 1) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.12,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x800079d,"audio_pkt_write");
        }
        ipc_log_string(0,"[%s]: dev is in reset\n","audio_pkt_write");
        return 0xffffffffffffff9a;
    }
    if (pcVar8 < 0x18) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.13,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000831,"audio_pkt_write",pcVar8);
        }
        ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",pcVar8);
        return 0xffffffffffffffea;
    }
    puVar11 = memdup_user(auVar17._8_8_,pcVar8);
    if (0xfffffffffffff000 < puVar11) {
        return puVar11;
    }
    if ((0x1000 < pcVar8) || (pcVar8 < *puVar11 >> 8)) {
        puVar10 = 0xffffffffffffffea;
        goto code_r0x08002900;
    }
    if (puVar11[5] == 0x100100c) {
        if (pcVar8 < 0x2c) {
            iVar4 = ___ratelimit(obj.audio_pkt_write._rs.16,"audio_pkt_write");
            if (iVar4 != 0) {
                _printk(0x8000831,"audio_pkt_write",pcVar8);
            }
            ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",pcVar8);
            puVar10 = 0xffffffffffffffea;
            goto code_r0x08002900;
        }
        iVar4 = sym.audpkt_chk_and_update_physical_addr(puVar11);
        if (iVar4 < 0) {
            iVar5 = ___ratelimit(obj.audio_pkt_write._rs.17,"audio_pkt_write");
            if (iVar5 != 0) {
                _printk(0x80009f3,"audio_pkt_write",iVar4);
            }
            ipc_log_string(0,"[%s]: Update Physical Address Failed -%d\n","audio_pkt_write",iVar4);
            puVar10 = iVar4;
            goto code_r0x08002900;
        }
    }
    iVar12 = iVar12 + 0x90;
    iVar4 = mutex_lock_interruptible(iVar12);
    if (iVar4 == 0) {
        iVar5 = gpr_send_pkt(*puVar14,puVar11);
        iVar4 = iVar5;
        if (iVar5 < 0) {
            iVar4 = ___ratelimit(obj.audio_pkt_write._rs.21,"audio_pkt_write");
            if (iVar4 != 0) {
                _printk(0x800084c,"audio_pkt_write",iVar5);
            }
            ipc_log_string(0,"[%s]: APR Send Packet Failed ret -%d\n","audio_pkt_write",iVar5);
            iVar4 = -0x66;
            if (iVar5 != -0x68) {
                iVar4 = iVar5;
            }
        }
        mutex_unlock(iVar12);
        kfree(puVar11);
        if (iVar4 < 0) {
            return iVar4;
        }
        return pcVar8;
    }
    puVar10 = 0xfffffffffffffe00;
code_r0x08002900:
    kfree(puVar11);
    return puVar10;
}


// ===== sym.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x08002200 (size 8) =====

ulong sym.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _dev_err(param_1,"%s: Driver[%s] Probe Failed\n","audio_pkt_probe",param_1 + 0x398);
        uVar3 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 3);
        piVar2 = _segment.ehdr;
        piVar1 = _segment.ehdr + 3;
        *_segment.ehdr = param_1;
        *(piVar2 + 9) = 1;
        mutex_unlock(piVar1);
        uVar3 = 0;
        *(param_1 + 0x98) = _segment.ehdr;
    }
    return uVar3;
}


// ===== sym.audio_pkt_remove.72713d5b9ce3d092dab592f002cda6ff.cfi_jt @ 0x08002208 (size 8) =====

ulong sym.audio_pkt_remove.72713d5b9ce3d092dab592f002cda6ff.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _dev_err(param_1,"%s: Driver[%s] Remove Failed\n","audio_pkt_remove",param_1 + 0x398);
        uVar3 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 3);
        puVar2 = _segment.ehdr;
        puVar1 = _segment.ehdr + 3;
        *_segment.ehdr = 0;
        *(puVar2 + 9) = 2;
        mutex_unlock(puVar1);
        uVar3 = 0;
        *(param_1 + 0x98) = 0;
    }
    return uVar3;
}


// ===== sym.audio_pkt_open.cfi_jt @ 0x08002210 (size 8) =====

ulong sym.audio_pkt_open.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.audio_pkt_debug_mask & 1) != 0) {
        ipc_log_string(0,"[%s]: %s: for %s \n","audio_pkt_open","audio_pkt_open",*(_segment.ehdr + 0x10) + 0x10c);
    }
    *(param_2 + 0xd8) = _segment.ehdr;
    return 0;
}


// ===== sym.audio_pkt_release.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.audio_pkt_release.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_2 + 0xd8) + 0x10);
    if (iVar5 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_debug_mask,"audio_pkt_release");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_release");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_release");
        uVar2 = 0xffffffea;
    }
    else {
        if ((obj.audio_pkt_debug_mask & 1) != 0) {
            ipc_log_string(0,"[%s]: %s: for %s \n","audio_pkt_release","audio_pkt_release",iVar5 + 0x10c);
        }
        uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        puVar4 = iVar5 + 200;
        puVar3 = *puVar4;
        while (puVar3 != puVar4) {
            skb_dequeue(puVar4);
            kfree_skb();
            puVar3 = *puVar4;
        }
        __wake_up(iVar5 + 0xe0,1,1,0);
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar2);
        *(param_2 + 0xd8) = 0;
        spf_core_apm_close_all();
        msm_audio_ion_crash_handler();
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.audio_pkt_open @ 0x08002220 (size 112) =====

ulong sym.audio_pkt_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.audio_pkt_debug_mask & 1) != 0) {
        ipc_log_string(0,"[%s]: %s: for %s \n","audio_pkt_open","audio_pkt_open",*(_segment.ehdr + 0x10) + 0x10c);
    }
    *(arg2 + 0xd8) = _segment.ehdr;
    return 0;
}


// ===== sym.audio_pkt_release @ 0x08002290 (size 300) =====

ulong sym.audio_pkt_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0xd8) + 0x10);
    if (iVar5 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_debug_mask,"audio_pkt_release");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_release");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_release");
        uVar2 = 0xffffffea;
    }
    else {
        if ((obj.audio_pkt_debug_mask & 1) != 0) {
            ipc_log_string(0,"[%s]: %s: for %s \n","audio_pkt_release","audio_pkt_release",iVar5 + 0x10c);
        }
        uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        puVar4 = iVar5 + 200;
        puVar3 = *puVar4;
        while (puVar3 != puVar4) {
            skb_dequeue(puVar4);
            kfree_skb();
            puVar3 = *puVar4;
        }
        __wake_up(iVar5 + 0xe0,1,1,0);
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar2);
        *(arg1 + 0xd8) = 0;
        spf_core_apm_close_all();
        msm_audio_ion_crash_handler();
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.audio_pkt_read @ 0x080023bc (size 656) =====

uint32_t * sym.audio_pkt_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar10;
    int64_t unaff_x20;
    uint32_t *puVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_b8;
    uint32_t auStack_b0 [2];
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uint32_t *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0xd8);
    iVar16 = *(iVar12 + 0x10);
    if (iVar16 == 0) {
        iVar4 = ___ratelimit(obj.audio_pkt_read._rs,"audio_pkt_read");
        if (iVar4 != 0) {
            _printk(0x8000aba,"audio_pkt_read");
        }
        pcVar8 = "audio_pkt_read";
        ipc_log_string(0,"[%s]: invalid device handle\n");
        puVar11 = 0xffffffffffffffea;
    }
    else {
        pcVar8 = arg3;
        mutex_lock(iVar12 + 0x18);
        iVar4 = *(iVar12 + 0x48);
        mutex_unlock(iVar12 + 0x18);
        unaff_x20 = arg3;
        if (iVar4 == 1) {
            iVar12 = iVar16 + 0xc0;
            uVar6 = _raw_spin_lock_irqsave(iVar12);
            piVar13 = iVar16 + 200;
            piVar15 = *piVar13;
            if (piVar15 == piVar13) {
                _raw_spin_unlock_irqrestore(iVar12,uVar6);
                if ((*(arg1 + 0x41) >> 3 & 1) != 0) {
                    puVar11 = 0xfffffffffffffff5;
                    goto code_r0x080025c4;
                }
                if (*piVar13 == piVar15) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    iVar1 = iVar16 + 0xe0;
                    pcVar8 = 0x1;
                    iVar7 = prepare_to_wait_event(iVar1,&uStack_80);
                    piVar9 = *(iVar16 + 200);
                    while (piVar9 == piVar15) {
                        if (iVar7 != 0) {
                            if (iVar7 == 0) goto code_r0x080024cc;
                            puVar11 = 0xfffffffffffffe00;
                            goto code_r0x080025c4;
                        }
                        schedule();
                        pcVar8 = 0x1;
                        iVar7 = prepare_to_wait_event(iVar1,&uStack_80);
                        piVar9 = *piVar13;
                    }
                    finish_wait(iVar1,&uStack_80);
                }
code_r0x080024cc:
                uVar6 = _raw_spin_lock_irqsave(iVar12);
            }
            iVar16 = skb_dequeue(piVar13);
            _raw_spin_unlock_irqrestore(iVar12,uVar6);
            if (iVar16 == 0) {
                puVar11 = 0xfffffffffffffff2;
            }
            else {
                if (*(iVar16 + 0x70) <= arg3) {
                    arg3 = *(iVar16 + 0x70);
                }
                if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8002644);
                    (*pcVar2)();
                }
                unaff_x20 = *(iVar16 + 0xd8);
                puVar11 = arg3;
                auVar17 = __check_object_size(unaff_x20,puVar11,1);
                pcVar8 = puVar11;
                iVar12 = sym._copy_to_user(arg2,auVar17,puVar11);
                if (iVar12 != 0) {
                    puVar11 = 0xfffffffffffffff2;
                }
                kfree_skb(iVar16);
            }
        }
        else {
            iVar4 = ___ratelimit(obj.audio_pkt_read._rs.3,"audio_pkt_read");
            if (iVar4 != 0) {
                _printk(0x800079d,"audio_pkt_read");
            }
            pcVar8 = "audio_pkt_read";
            ipc_log_string(0,"[%s]: dev is in reset\n");
            puVar11 = 0xffffffffffffff9a;
        }
    }
code_r0x080025c4:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return puVar11;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18 = sym.audpkt_chk_and_update_physical_addr;
    pcStack_98 = sym.audpkt_chk_and_update_physical_addr;
    iVar12 = sp_el0;
    iStack_a8 = *(iVar12 + 0x5e0);
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = unaff_x20;
    puStack_88 = puVar11;
    if ((*(iVar16 + 0x1c) >> 2 & 1) == 0) {
        puVar11 = NULL;
    }
    else {
        pcVar8 = auStack_b0;
        uVar3 = msm_audio_get_phy_addr(*(iVar16 + 0x20),&uStack_b8);
        puVar11 = uVar3;
        if (uVar3 < 0) {
            iVar4 = ___ratelimit(obj.audpkt_chk_and_update_physical_addr._rs,"audpkt_chk_and_update_physical_addr");
            if (iVar4 != 0) {
                _printk(0x80008b8,"audpkt_chk_and_update_physical_addr","audpkt_chk_and_update_physical_addr",puVar11
                       );
            }
            pcVar8 = "audpkt_chk_and_update_physical_addr";
            ipc_log_string(0,"[%s]: %s Get phy. address failed, ret %d\n","audpkt_chk_and_update_physical_addr",
                           "audpkt_chk_and_update_physical_addr",puVar11);
        }
        else {
            if ((obj.audio_pkt_debug_mask & 1) != 0) {
                pcVar8 = "audpkt_chk_and_update_physical_addr";
                ipc_log_string(0,"[%s]: %s physical address %pK","audpkt_chk_and_update_physical_addr",
                               "audpkt_chk_and_update_physical_addr",uStack_b8);
            }
            *(iVar16 + 0x20) = uStack_b8;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_a8) {
        return puVar11;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.audio_pkt_write;
    if (((auVar17._0_8_ == 0) || (auVar17._8_8_ == 0)) || (puVar14 = *(auVar17._0_8_ + 0xd8), puVar14 == NULL)) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000a76,"audio_pkt_write");
        }
        pcVar8 = "[%s]: invalid parameters\n";
code_r0x08002820:
        ipc_log_string(0,pcVar8,"audio_pkt_write");
        return 0xffffffffffffffea;
    }
    iVar12 = puVar14[2];
    if (iVar12 == 0) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.11,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000aba,"audio_pkt_write");
        }
        pcVar8 = "[%s]: invalid device handle\n";
        goto code_r0x08002820;
    }
    mutex_lock(puVar14 + 3);
    iVar4 = *(puVar14 + 9);
    mutex_unlock(puVar14 + 3);
    if (iVar4 != 1) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.12,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x800079d,"audio_pkt_write");
        }
        ipc_log_string(0,"[%s]: dev is in reset\n","audio_pkt_write");
        return 0xffffffffffffff9a;
    }
    if (pcVar8 < 0x18) {
        iVar4 = ___ratelimit(obj.audio_pkt_write._rs.13,"audio_pkt_write");
        if (iVar4 != 0) {
            _printk(0x8000831,"audio_pkt_write",pcVar8);
        }
        ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",pcVar8);
        return 0xffffffffffffffea;
    }
    puVar11 = memdup_user(auVar17._8_8_,pcVar8);
    if (0xfffffffffffff000 < puVar11) {
        return puVar11;
    }
    if ((0x1000 < pcVar8) || (pcVar8 < *puVar11 >> 8)) {
        puVar10 = 0xffffffffffffffea;
        goto code_r0x08002900;
    }
    if (puVar11[5] == 0x100100c) {
        if (pcVar8 < 0x2c) {
            iVar4 = ___ratelimit(obj.audio_pkt_write._rs.16,"audio_pkt_write");
            if (iVar4 != 0) {
                _printk(0x8000831,"audio_pkt_write",pcVar8);
            }
            ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",pcVar8);
            puVar10 = 0xffffffffffffffea;
            goto code_r0x08002900;
        }
        iVar4 = sym.audpkt_chk_and_update_physical_addr(puVar11);
        if (iVar4 < 0) {
            iVar5 = ___ratelimit(obj.audio_pkt_write._rs.17,"audio_pkt_write");
            if (iVar5 != 0) {
                _printk(0x80009f3,"audio_pkt_write",iVar4);
            }
            ipc_log_string(0,"[%s]: Update Physical Address Failed -%d\n","audio_pkt_write",iVar4);
            puVar10 = iVar4;
            goto code_r0x08002900;
        }
    }
    iVar12 = iVar12 + 0x90;
    iVar4 = mutex_lock_interruptible(iVar12);
    if (iVar4 == 0) {
        iVar5 = gpr_send_pkt(*puVar14,puVar11);
        iVar4 = iVar5;
        if (iVar5 < 0) {
            iVar4 = ___ratelimit(obj.audio_pkt_write._rs.21,"audio_pkt_write");
            if (iVar4 != 0) {
                _printk(0x800084c,"audio_pkt_write",iVar5);
            }
            ipc_log_string(0,"[%s]: APR Send Packet Failed ret -%d\n","audio_pkt_write",iVar5);
            iVar4 = -0x66;
            if (iVar5 != -0x68) {
                iVar4 = iVar5;
            }
        }
        mutex_unlock(iVar12);
        kfree(puVar11);
        if (iVar4 < 0) {
            return iVar4;
        }
        return pcVar8;
    }
    puVar10 = 0xfffffffffffffe00;
code_r0x08002900:
    kfree(puVar11);
    return puVar10;
}


// ===== sym.audpkt_chk_and_update_physical_addr @ 0x0800264c (size 280) =====

uint32_t * sym.audpkt_chk_and_update_physical_addr(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    char *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar5;
    uint32_t *puVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_38;
    uint32_t auStack_30 [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_38 = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    if ((*(arg1 + 0x1c) >> 2 & 1) == 0) {
        puVar5 = NULL;
    }
    else {
        in_x2 = auStack_30;
        uVar1 = msm_audio_get_phy_addr(*(arg1 + 0x20),&uStack_38);
        puVar5 = uVar1;
        if (uVar1 < 0) {
            iVar2 = ___ratelimit(obj.audpkt_chk_and_update_physical_addr._rs,"audpkt_chk_and_update_physical_addr");
            if (iVar2 != 0) {
                _printk(0x80008b8,"audpkt_chk_and_update_physical_addr","audpkt_chk_and_update_physical_addr",puVar5)
                ;
            }
            in_x2 = "audpkt_chk_and_update_physical_addr";
            ipc_log_string(0,"[%s]: %s Get phy. address failed, ret %d\n","audpkt_chk_and_update_physical_addr",
                           "audpkt_chk_and_update_physical_addr",puVar5);
        }
        else {
            if ((obj.audio_pkt_debug_mask & 1) != 0) {
                in_x2 = "audpkt_chk_and_update_physical_addr";
                ipc_log_string(0,"[%s]: %s physical address %pK","audpkt_chk_and_update_physical_addr",
                               "audpkt_chk_and_update_physical_addr",uStack_38);
            }
            *(arg1 + 0x20) = uStack_38;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return puVar5;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.audio_pkt_write;
    if (((auVar9._0_8_ == 0) || (auVar9._8_8_ == 0)) || (puVar7 = *(auVar9._0_8_ + 0xd8), puVar7 == NULL)) {
        iVar2 = ___ratelimit(obj.audio_pkt_write._rs,"audio_pkt_write");
        if (iVar2 != 0) {
            _printk(0x8000a76,"audio_pkt_write");
        }
        pcVar4 = "[%s]: invalid parameters\n";
code_r0x08002820:
        ipc_log_string(0,pcVar4,"audio_pkt_write");
        return 0xffffffffffffffea;
    }
    iVar8 = puVar7[2];
    if (iVar8 == 0) {
        iVar2 = ___ratelimit(obj.audio_pkt_write._rs.11,"audio_pkt_write");
        if (iVar2 != 0) {
            _printk(0x8000aba,"audio_pkt_write");
        }
        pcVar4 = "[%s]: invalid device handle\n";
        goto code_r0x08002820;
    }
    mutex_lock(puVar7 + 3);
    iVar2 = *(puVar7 + 9);
    mutex_unlock(puVar7 + 3);
    if (iVar2 != 1) {
        iVar2 = ___ratelimit(obj.audio_pkt_write._rs.12,"audio_pkt_write");
        if (iVar2 != 0) {
            _printk(0x800079d,"audio_pkt_write");
        }
        ipc_log_string(0,"[%s]: dev is in reset\n","audio_pkt_write");
        return 0xffffffffffffff9a;
    }
    if (in_x2 < 0x18) {
        iVar2 = ___ratelimit(obj.audio_pkt_write._rs.13,"audio_pkt_write");
        if (iVar2 != 0) {
            _printk(0x8000831,"audio_pkt_write",in_x2);
        }
        ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",in_x2);
        return 0xffffffffffffffea;
    }
    puVar5 = memdup_user(auVar9._8_8_,in_x2);
    if (0xfffffffffffff000 < puVar5) {
        return puVar5;
    }
    if ((0x1000 < in_x2) || (in_x2 < *puVar5 >> 8)) {
        puVar6 = 0xffffffffffffffea;
        goto code_r0x08002900;
    }
    if (puVar5[5] == 0x100100c) {
        if (in_x2 < 0x2c) {
            iVar2 = ___ratelimit(obj.audio_pkt_write._rs.16,"audio_pkt_write");
            if (iVar2 != 0) {
                _printk(0x8000831,"audio_pkt_write",in_x2);
            }
            ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",in_x2);
            puVar6 = 0xffffffffffffffea;
            goto code_r0x08002900;
        }
        iVar2 = sym.audpkt_chk_and_update_physical_addr(puVar5);
        if (iVar2 < 0) {
            iVar3 = ___ratelimit(obj.audio_pkt_write._rs.17,"audio_pkt_write");
            if (iVar3 != 0) {
                _printk(0x80009f3,"audio_pkt_write",iVar2);
            }
            ipc_log_string(0,"[%s]: Update Physical Address Failed -%d\n","audio_pkt_write",iVar2);
            puVar6 = iVar2;
            goto code_r0x08002900;
        }
    }
    iVar8 = iVar8 + 0x90;
    iVar2 = mutex_lock_interruptible(iVar8);
    if (iVar2 == 0) {
        iVar3 = gpr_send_pkt(*puVar7,puVar5);
        iVar2 = iVar3;
        if (iVar3 < 0) {
            iVar2 = ___ratelimit(obj.audio_pkt_write._rs.21,"audio_pkt_write");
            if (iVar2 != 0) {
                _printk(0x800084c,"audio_pkt_write",iVar3);
            }
            ipc_log_string(0,"[%s]: APR Send Packet Failed ret -%d\n","audio_pkt_write",iVar3);
            iVar2 = -0x66;
            if (iVar3 != -0x68) {
                iVar2 = iVar3;
            }
        }
        mutex_unlock(iVar8);
        kfree(puVar5);
        if (iVar2 < 0) {
            return iVar2;
        }
        return in_x2;
    }
    puVar6 = 0xfffffffffffffe00;
code_r0x08002900:
    kfree(puVar5);
    return puVar6;
}


// ===== sym.audio_pkt_write @ 0x08002764 (size 884) =====

uint32_t * sym.audio_pkt_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    uint32_t *arg1_00;
    char *pcVar3;
    ulong *in_x18;
    uint32_t *puVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (puVar5 = *(arg1 + 0xd8), puVar5 == NULL)) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000a76,"audio_pkt_write");
        }
        pcVar3 = "[%s]: invalid parameters\n";
code_r0x08002820:
        ipc_log_string(0,pcVar3,"audio_pkt_write");
        return 0xffffffffffffffea;
    }
    iVar6 = puVar5[2];
    if (iVar6 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.11,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_write");
        }
        pcVar3 = "[%s]: invalid device handle\n";
        goto code_r0x08002820;
    }
    mutex_lock(puVar5 + 3);
    iVar1 = *(puVar5 + 9);
    mutex_unlock(puVar5 + 3);
    if (iVar1 != 1) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.12,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x800079d,"audio_pkt_write");
        }
        ipc_log_string(0,"[%s]: dev is in reset\n","audio_pkt_write");
        return 0xffffffffffffff9a;
    }
    if (arg3 < 0x18) {
        iVar1 = ___ratelimit(obj.audio_pkt_write._rs.13,"audio_pkt_write");
        if (iVar1 != 0) {
            _printk(0x8000831,"audio_pkt_write",arg3);
        }
        ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",arg3);
        return 0xffffffffffffffea;
    }
    arg1_00 = memdup_user(arg2,arg3);
    if (0xfffffffffffff000 < arg1_00) {
        return arg1_00;
    }
    if ((0x1000 < arg3) || (arg3 < *arg1_00 >> 8)) {
        puVar4 = 0xffffffffffffffea;
        goto code_r0x08002900;
    }
    if (arg1_00[5] == 0x100100c) {
        if (arg3 < 0x2c) {
            iVar1 = ___ratelimit(obj.audio_pkt_write._rs.16,"audio_pkt_write");
            if (iVar1 != 0) {
                _printk(0x8000831,"audio_pkt_write",arg3);
            }
            ipc_log_string(0,"[%s]: Invalid count %zu\n","audio_pkt_write",arg3);
            puVar4 = 0xffffffffffffffea;
            goto code_r0x08002900;
        }
        iVar1 = sym.audpkt_chk_and_update_physical_addr(arg1_00);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.audio_pkt_write._rs.17,"audio_pkt_write");
            if (iVar2 != 0) {
                _printk(0x80009f3,"audio_pkt_write",iVar1);
            }
            ipc_log_string(0,"[%s]: Update Physical Address Failed -%d\n","audio_pkt_write",iVar1);
            puVar4 = iVar1;
            goto code_r0x08002900;
        }
    }
    iVar6 = iVar6 + 0x90;
    iVar1 = mutex_lock_interruptible(iVar6);
    if (iVar1 == 0) {
        iVar2 = gpr_send_pkt(*puVar5,arg1_00);
        iVar1 = iVar2;
        if (iVar2 < 0) {
            iVar1 = ___ratelimit(obj.audio_pkt_write._rs.21,"audio_pkt_write");
            if (iVar1 != 0) {
                _printk(0x800084c,"audio_pkt_write",iVar2);
            }
            ipc_log_string(0,"[%s]: APR Send Packet Failed ret -%d\n","audio_pkt_write",iVar2);
            iVar1 = -0x66;
            if (iVar2 != -0x68) {
                iVar1 = iVar2;
            }
        }
        mutex_unlock(iVar6);
        kfree(arg1_00);
        if (iVar1 < 0) {
            return iVar1;
        }
        return arg3;
    }
    puVar4 = 0xfffffffffffffe00;
code_r0x08002900:
    kfree(arg1_00);
    return puVar4;
}


// ===== sym._copy_to_user @ 0x08002ad8 (size 312) =====

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
        if ((_ipc_log_string >> 0x18 & 1) == 0) {
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
        if ((_ipc_log_string >> 0x18 & 1) == 0) {
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


// ===== sym.audio_pkt_platform_driver_probe @ 0x08002c4c (size 996) =====

uint64_t sym.audio_pkt_platform_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    code cVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    puVar6 = devm_kmalloc(iVar1,0x130,0xdc0);
    if (puVar6 == NULL) {
        uVar7 = 0xfffffff4;
    }
    else {
        uVar4 = alloc_chrdev_region(puVar6 + 0x24,0,1,"aud_pasthru_adsp");
        if (uVar4 < 0) {
            uVar7 = uVar4;
            iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs,"audio_pkt_platform_driver_probe");
            if (iVar5 != 0) {
                _printk(0x8000b12,"audio_pkt_platform_driver_probe",uVar7);
            }
            ipc_log_string(0,"[%s]: alloc_chrdev_region failed ret:%d\n","audio_pkt_platform_driver_probe",uVar7);
        }
        else {
            uVar7 = __class_create(obj.__this_module,"aud_pasthru_adsp",obj.audio_pkt_platform_driver_probe.__key);
            puVar6[0x25] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                uVar7 = device_create(uVar7,0,puVar6[0x24],0,"aud_pasthru_adsp");
                *puVar6 = uVar7;
                if (uVar7 < 0xfffffffffffff001) {
                    puVar2 = puVar6 + 0x1f;
                    strlcpy(puVar2,"aud_pasthru_adsp",0x14);
                    strlcpy(puVar6 + 0x10c,"adsp_apps",0x14);
                    dev_set_name(*puVar6,puVar2);
                    __mutex_init(puVar6 + 0x12,"&audpkt_dev->lock",obj.audio_pkt_platform_driver_probe.__key);
                    *(puVar6 + 0x18) = 0;
                    puVar6[0x19] = puVar6 + 0x19;
                    puVar6[0x1a] = puVar6 + 0x19;
                    puVar6[0x1b] = 0;
                    __init_waitqueue_head
                              (puVar6 + 0x1c,"&audpkt_dev->readq",obj.audio_pkt_platform_driver_probe.__key);
                    cdev_init(puVar6 + 1,obj.audio_pkt_fops);
                    puVar6[0xd] = obj.__this_module;
                    uVar4 = cdev_add(puVar6 + 1,puVar6[0x24],1);
                    if (uVar4 == 0) {
                        _segment.ehdr = devm_kmalloc(iVar1,0x50,0xdc0);
                        if (_segment.ehdr == 0) {
                            uVar7 = 0xfffffff4;
                        }
                        else {
                            uVar8 = __gpr_driver_register
                                              (reloc.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt,
                                               obj.__this_module);
                            uVar7 = uVar8 & 0xffffffff;
                            if (-1 < uVar8) {
                                __mutex_init(_segment.ehdr + 0x18,"&ap_priv->lock",
                                             obj.audio_pkt_platform_driver_probe.__key);
                                iVar1 = _segment.ehdr;
                                *(_segment.ehdr + 0x48) = 0;
                                cVar3 = obj.audio_pkt_debug_mask;
                                *(iVar1 + 0x10) = puVar6;
                                *(iVar1 + 8) = *puVar6;
                                *(arg1 + 0xa8) = iVar1;
                                if ((cVar3 & 1) != 0) {
                                    ipc_log_string(0,"[%s]: Audio Packet Port Driver Initialized\n",
                                                   "audio_pkt_platform_driver_probe");
                                }
                                goto code_r0x08002ec0;
                            }
                            _dev_err(iVar1,"%s: registering to gpr driver failed, err = %d\n",
                                     "audio_pkt_plaform_driver_register_gpr",uVar7);
                        }
                        _dev_err(iVar1,"%s: Failed to register with gpr, err = %d\n","audio_pkt_platform_driver_probe"
                                 ,uVar7);
                    }
                    else {
                        uVar7 = uVar4;
                        iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.40,
                                             "audio_pkt_platform_driver_probe");
                        if (iVar5 != 0) {
                            _printk(0x80008f6,"audio_pkt_platform_driver_probe",puVar2,uVar7);
                        }
                        ipc_log_string(0,"[%s]: cdev_add failed for %s ret:%d\n","audio_pkt_platform_driver_probe",
                                       puVar2,uVar7);
                    }
                    device_destroy(puVar6[0x25],puVar6[0x24]);
                }
                else {
                    iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.32,"audio_pkt_platform_driver_probe");
                    if (iVar5 != 0) {
                        _printk(0x800061c,"audio_pkt_platform_driver_probe",*puVar6);
                    }
                    ipc_log_string(0,"[%s]: device_create failed ret:%ld\n","audio_pkt_platform_driver_probe",*puVar6
                                  );
                }
                class_destroy(puVar6[0x25]);
            }
            else {
                iVar5 = ___ratelimit(obj.audio_pkt_platform_driver_probe._rs.29,"audio_pkt_platform_driver_probe");
                if (iVar5 != 0) {
                    _printk(0x8000999,"audio_pkt_platform_driver_probe",puVar6[0x25]);
                }
                ipc_log_string(0,"[%s]: class_create failed ret:%ld\n","audio_pkt_platform_driver_probe",puVar6[0x25]
                              );
            }
            unregister_chrdev_region(puVar6[0x24] >> 0x14,1);
        }
    }
code_r0x08002ec0:
    return uVar7 & 0xffffffff;
}


// ===== sym.audio_pkt_platform_driver_remove @ 0x08003030 (size 388) =====

ulong sym.audio_pkt_platform_driver_remove(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0xa8) + 0x10);
    gpr_driver_unregister(reloc.audio_pkt_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt);
    iVar6 = *(*(arg1 + 0xa8) + 0x10);
    if (iVar6 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_internal_release._rs,"audio_pkt_internal_release");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_internal_release");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_internal_release");
    }
    else {
        if ((obj.audio_pkt_debug_mask & 1) != 0) {
            ipc_log_string(0,"[%s]: %s: for %s\n","audio_pkt_internal_release","audio_pkt_internal_release",
                           iVar6 + 0x10c);
        }
        uVar2 = _raw_spin_lock_irqsave(iVar6 + 0xc0);
        puVar4 = iVar6 + 200;
        puVar3 = *puVar4;
        while (puVar3 != puVar4) {
            skb_dequeue(puVar4);
            kfree_skb();
            puVar3 = *puVar4;
        }
        _raw_spin_unlock_irqrestore(iVar6 + 0xc0,uVar2);
        __wake_up(iVar6 + 0xe0,1,1,0);
    }
    if (iVar5 != 0) {
        cdev_del(iVar5 + 8);
        device_destroy(*(iVar5 + 0x128),*(iVar5 + 0x120));
        class_destroy(*(iVar5 + 0x128));
        unregister_chrdev_region(*(iVar5 + 0x120) >> 0x14,1);
    }
    if ((obj.audio_pkt_debug_mask & 1) != 0) {
        ipc_log_string(0,"[%s]: Audio Packet Port Driver Removed\n","audio_pkt_platform_driver_remove");
    }
    return 0;
}


// ===== sym.audio_pkt_poll @ 0x080031b4 (size 292) =====

uint sym.audio_pkt_poll(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint uVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0xd8) + 0x10);
    if (iVar5 == 0) {
        iVar1 = ___ratelimit(obj.audio_pkt_poll._rs,"audio_pkt_poll");
        if (iVar1 != 0) {
            _printk(0x8000aba,"audio_pkt_poll");
        }
        ipc_log_string(0,"[%s]: invalid device handle\n","audio_pkt_poll");
        uVar3 = 8;
    }
    else {
        if (arg2 != 0) {
            pcVar4 = *arg2;
            if (iVar5 + 0xe0 != 0 && pcVar4 != NULL) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000590);
                (*pcVar4)(arg1,iVar5 + 0xe0,arg2);
            }
        }
        mutex_lock(iVar5 + 0x90);
        uVar2 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        uVar3 = 0;
        if (*(iVar5 + 200) != iVar5 + 200) {
            uVar3 = 0x41;
        }
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar2);
        mutex_unlock(iVar5 + 0x90);
    }
    return uVar3;
}


// ===== sym.audio_pkt_probe @ 0x080032d8 (size 136) =====

ulong sym.audio_pkt_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _dev_err(arg1,"%s: Driver[%s] Probe Failed\n","audio_pkt_probe",arg1 + 0x398);
        uVar3 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 3);
        piVar2 = _segment.ehdr;
        piVar1 = _segment.ehdr + 3;
        *_segment.ehdr = arg1;
        *(piVar2 + 9) = 1;
        mutex_unlock(piVar1);
        uVar3 = 0;
        *(arg1 + 0x98) = _segment.ehdr;
    }
    return uVar3;
}


// ===== sym.audio_pkt_remove @ 0x08003360 (size 132) =====

ulong sym.audio_pkt_remove(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == NULL) {
        _dev_err(arg1,"%s: Driver[%s] Remove Failed\n","audio_pkt_remove",arg1 + 0x398);
        uVar3 = 0xffffffea;
    }
    else {
        mutex_lock(_segment.ehdr + 3);
        puVar2 = _segment.ehdr;
        puVar1 = _segment.ehdr + 3;
        *_segment.ehdr = 0;
        *(puVar2 + 9) = 2;
        mutex_unlock(puVar1);
        uVar3 = 0;
        *(arg1 + 0x98) = 0;
    }
    return uVar3;
}


// ===== sym.audio_pkt_srvc_callback @ 0x080033e4 (size 248) =====

ulong sym.audio_pkt_srvc_callback(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0x98) + 0x10);
    uVar1 = *arg2;
    if ((obj.audio_pkt_debug_mask & 1) == 0) {
        uVar4 = uVar1 >> 8 & 0xffff;
    }
    else {
        uVar4 = uVar1 >> 8 & 0xffff;
        ipc_log_string(0,"[%s]: %s: header %d packet %d \n","audio_pkt_srvc_callback","audio_pkt_srvc_callback",
                       uVar1 >> 2 & 0x3c,uVar4);
    }
    iVar2 = __alloc_skb(uVar4,0xa20,0,0xffffffff);
    if (iVar2 == 0) {
        uVar3 = 0xfffffff4;
    }
    else {
        uVar3 = skb_put(iVar2,uVar4);
        memcpy(uVar3,arg2,uVar4);
        uVar3 = _raw_spin_lock_irqsave(iVar5 + 0xc0);
        skb_queue_tail(iVar5 + 200,iVar2);
        _raw_spin_unlock_irqrestore(iVar5 + 0xc0,uVar3);
        __wake_up(iVar5 + 0xe0,1,1,0);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x080034dc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003520

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
    //switch table (4 cases) at 0x8000c07
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003534);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003544 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08003578 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_pkt_platform_driver_probe.72713d5b9ce3d092dab592f002cda6ff.cfi_jt);
    return;
}

