// decompiled from gunyah by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1744) =====

//WARNING: Switch with 1 destination removed at 0x08005f20

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x494a0590c0a5a292) {
                if (arg1 < -0x550b9e52359ac614) {
                    if (arg1 == -0x79e1ae77be533008) {
                        pcVar2 = sym.__traceiter_gh_virtio_backend_irq_inj.cfi_jt;
                        goto code_r0x080046bc;
                    }
                    if (arg1 != -0x766f294193284ae1) goto code_r0x08005ee0;
                    pcVar2 = sym.vb_dev_irqfd_ptable_queue_proc.1016b347f3458ea20e90756fd466f079.cfi_jt;
                }
                else if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.irqfd_shutdown.1016b347f3458ea20e90756fd466f079.cfi_jt;
                }
                else {
                    if (arg1 != -0x5303200087c5d0c5) goto code_r0x08005ee0;
                    pcVar2 = sym.__traceiter_gh_virtio_backend_irq.cfi_jt;
                }
            }
            else {
                if (-0x39beb7744f23a70e < arg1) {
                    if (arg1 == -0x39beb7744f23a70d) {
                        pcVar2 = sym.__bpf_trace_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
                    }
                    else if (arg1 == -0x3987c0e26ee29729) {
                        pcVar2 = sym.gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x36ce0408b6d38ea2) goto code_r0x08005ee0;
                        pcVar2 = sym.__bpf_trace_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt;
                    }
                    goto code_r0x08004610;
                }
                if (arg1 == -0x494a0590c0a5a292) {
                    pcVar2 = sym.gh_populate_all_res_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
                }
                else {
                    if (arg1 != -0x479d42399ed97088) goto code_r0x08005ee0;
                    pcVar2 = sym.__traceiter_gh_virtio_backend_wait_event.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x218c0108fde83420) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 != -0x3557318fb8d07b71) {
                    if ((arg1 == -0x34913799b27fd2f8) && ((pcVar1 + -0x8004868 >> 3 | pcVar1 << 0x3d) < 6)) {
                        return;
                    }
                    goto code_r0x08005ee0;
                }
                pcVar2 = sym.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt;
code_r0x080046bc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005ee0;
            }
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x256ba0fffb792241) goto code_r0x08005ee0;
                pcVar2 = sym.gh_unpopulate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
            }
        }
        else if (arg1 < -0x12da59326219aa0d) {
            if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 != -0x137864a1a184e8a7) goto code_r0x08005ee0;
                pcVar2 = sym.__traceiter_gh_vcpu_irq_handler.cfi_jt;
            }
        }
        else if (arg1 == -0x12da59326219aa0d) {
            pcVar2 = sym.gh_populate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.gh_vm_release.fc5859ae27bea53546df851ae32ba2aa.cfi_jt;
                goto code_r0x080046bc;
            }
            if (arg1 != -0x3f0f25dde75e225) goto code_r0x08005ee0;
            pcVar2 = sym.gh_unpopulate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
        }
    }
    else if (arg1 < 0x3dd1a39e589289fe) {
        if (arg1 < 0x20be4a5f0029de1b) {
            if (arg1 < 0x1244507f880c484d) {
                if (arg1 == -0x890743871a4a53) {
                    pcVar2 = sym.gh_vcpu_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt;
                    goto code_r0x08004610;
                }
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08005ee0;
                pcVar2 = sym.init_module.cfi_jt;
            }
            else if (arg1 == 0x1244507f880c484d) {
                pcVar2 = sym.gh_wdog_manage.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
            }
            else {
                if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08005ee0;
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
        }
        else if (arg1 < 0x379d36f049eb9a81) {
            if (arg1 == 0x20be4a5f0029de1b) {
                pcVar2 = sym.gh_populate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
            }
            else {
                if (arg1 != 0x321969b888d4949e) goto code_r0x08005ee0;
                pcVar2 = sym.noop_llseek.cfi_jt;
            }
        }
        else if (arg1 == 0x379d36f049eb9a81) {
            pcVar2 = sym.gh_vm_mmap.fc5859ae27bea53546df851ae32ba2aa.cfi_jt;
        }
        else if (arg1 == 0x388e5bf9b642a752) {
            pcVar2 = sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt;
        }
        else {
            if (arg1 != 0x3a68b5908a8b970b) goto code_r0x08005ee0;
            pcVar2 = sym.__traceiter_gh_hcall_vcpu_run.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x6040f5087e34c703) {
            if (arg1 < 0x4aa3977fc3532e27) {
                if (arg1 == 0x3dd1a39e589289fe) {
                    if ((pcVar1 + -0x8004810 >> 3 | pcVar1 << 0x3d) < 7) {
                        return;
                    }
                    goto code_r0x08005ee0;
                }
                if (arg1 != 0x43edafbdd92b67ea) goto code_r0x08005ee0;
                pcVar2 = sym.__bpf_trace_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
            }
            else {
                if (arg1 == 0x4aa3977fc3532e27) {
                    pcVar2 = sym.gh_unregister_vm_notifier.cfi_jt;
                    goto code_r0x080046bc;
                }
                if (arg1 != 0x4e1c2aab8cdfe581) goto code_r0x08005ee0;
                pcVar2 = sym.perf_trace_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt;
            }
code_r0x08004610:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08005ee0;
        }
        if (arg1 < 0x72ae12a92f21175c) {
            if (arg1 == 0x6040f5087e34c703) {
                pcVar2 = sym.vb_dev_irqfd_wakeup.1016b347f3458ea20e90756fd466f079.cfi_jt;
            }
            else {
                if (arg1 != 0x6b141b54612cf75f) goto code_r0x08005ee0;
                pcVar2 = sym.__traceiter_gh_susp_res_irq_handler.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x72ae12a92f21175c) {
                pcVar2 = sym.perf_trace_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt;
                goto code_r0x08004610;
            }
            if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.gh_vm_rm_notifier_fn.fc5859ae27bea53546df851ae32ba2aa.cfi_jt;
            }
            else {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005ee0;
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005ee0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005f34);
    (*pcVar1)();
}


// ===== sym.gh_wdog_manage.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080046d8 (size 8) =====

uint sym.gh_wdog_manage.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(int16_t param_1,ulong param_2,uint32_t param_3)

{
    int iVar1;
    int16_t *piVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return 0xfffffffa;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar2 = _segment.ehdr;
    if (*_segment.ehdr != param_1 && *_segment.ehdr != -1) {
        piVar2 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
            piVar2 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                piVar2 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                    piVar2 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((piVar2 == NULL) || (*piVar2 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar1 = *(piVar2 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar1) {
            mutex_lock(obj.gh_vm_mutex);
            piVar2 = _segment.ehdr;
            if ((*_segment.ehdr != param_1) && (*_segment.ehdr != -1)) {
                piVar2 = _segment.ehdr + 0x234;
                if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
                    piVar2 = _segment.ehdr + 0x468;
                    if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                        piVar2 = _segment.ehdr + 0x69c;
                        if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                            piVar2 = _segment.ehdr + 0x8d0;
                        }
                    }
                }
            }
            if (piVar2 == NULL) {
                uVar3 = 0xffffffed;
            }
            else {
                if ((param_3 & 1) == 0) {
                    param_2 = 0xffffffffffffffff;
                }
                uVar3 = 0;
                *(piVar2 + 0x228) = param_2;
            }
            mutex_unlock(obj.gh_vm_mutex);
            return uVar3;
        }
    }
    _printk(0x8002b62,param_1);
    return 0xffffffea;
}


// ===== sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x080046e0 (size 8) =====

uint32_t sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt
                   (uint32_t param_1,code *param_2,uint64_t param_3,code *param_4,uint64_t param_5,code *param_6,
                   uint *param_7)

{
    int64_t *piVar1;
    uint uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    code *pcVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    code *pcVar14;
    code *pcVar15;
    int64_t iVar16;
    uint *puVar17;
    code *pcVar18;
    ulong unaff_x30;
    uint16_t auStack_84 [2];
    ulong uStack_80;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    param_5 = param_5 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    _raw_spin_lock(obj.gh_create_vm.__key);
    for (pcVar15 = _obj.vm_list; pcVar15 != obj.vm_list; pcVar15 = *pcVar15) {
        iVar4 = strcmp(pcVar15 + 0x10,param_2);
        if (iVar4 == 0) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            if (pcVar15 != NULL) goto code_r0x08008a58;
            goto code_r0x08008bf4;
        }
    }
    _raw_spin_unlock(obj.gh_create_vm.__key);
code_r0x08008bf4:
    _printk(0x8002f9b,"gh_virtio_backend",param_2);
    uVar5 = 0xffffffed;
    pcVar14 = param_6;
    uVar13 = param_5;
    puVar17 = param_7;
    pcVar18 = param_4;
code_r0x08008c78:
    do {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return uVar5;
            }
            __stack_chk_fail();
            __dynamic_dev_dbg(obj.gh_virtio_mmio_init.__UNIQUE_ID_ddebug411,*(pcVar15 + 0x28),
                              "%s: vmid %d vm_name %s label %x cap_id %x irq %d base %pK size %d\n","gh_virtio_backend"
                              ,param_1 & 0xffff,param_2,param_3 & 0xffffffff,pcVar18,uVar13,pcVar14,puVar17);
            param_6 = pcVar14;
            param_5 = uVar13;
            param_7 = puVar17;
            param_4 = pcVar18;
code_r0x08008a58:
            iVar7 = strnlen(param_2,0x10);
            pcVar14 = param_6;
            uVar13 = param_5;
            puVar17 = param_7;
            pcVar18 = param_4;
            if (iVar7 != 0x10) break;
            uVar5 = 0xffffffea;
        }
        pcVar10 = pcVar15 + 0x3c;
        _raw_spin_lock(pcVar10);
        for (param_2 = *(pcVar15 + 0x40); param_2 != pcVar15 + 0x40; param_2 = *param_2) {
            if (*(param_2 + 0x7c) == param_3) {
                if ((*(param_2 + 0x48) != -1) && (param_2 != NULL)) {
                    *(param_2 + 0x48) = *(param_2 + 0x48) + 1;
                    _raw_spin_unlock(pcVar10);
                    pcVar14 = param_2 + 0x188;
                    mutex_lock(pcVar14);
                    if (*(pcVar15 + 0x20) != 0) goto code_r0x08008b10;
                    auStack_84[0] = 0;
                    uVar5 = gh_rm_get_vmid(1,auStack_84);
                    if (uVar5 != 0) goto code_r0x08008c2c;
                    if (*(pcVar15 + 0x38) < 1) goto code_r0x08008eec;
                    iVar16 = 0;
                    iVar7 = 0;
                    goto code_r0x08008cf8;
                }
                break;
            }
        }
        _raw_spin_unlock(pcVar10);
        _dev_err(*(pcVar15 + 0x28),"%s: Device with label %x not found\n","gh_virtio_backend",param_3 & 0xffffffff);
        uVar5 = 0xffffffed;
    } while( true );
    while( true ) {
        iVar12 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar12 = 0x30;
        }
        pcVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x14);
        puVar17 = puVar9;
        if (pcVar10 == NULL) {
            kfree(puVar9);
            goto code_r0x08009070;
        }
        piVar1 = uVar13 + iVar16;
        uVar11 = hyp_assign_phys(*piVar1,(piVar1[1] - *piVar1) + 1,&uStack_6c,1,&uStack_78,&uStack_80,2);
        uVar5 = uVar11;
        if (uVar5 == 0) {
            *(puVar9 + 1) = uVar3;
            *puVar9 = 2;
            *(puVar9 + 2) = param_1;
            *(puVar9 + 6) = 6;
            *(puVar9 + 10) = 6;
            *pcVar10 = 1;
            iVar12 = *(uVar13 + iVar16);
            *(pcVar10 + 4) = iVar12;
            *(pcVar10 + 0xc) = (piVar1[1] - iVar12) + 1;
            uVar6 = gh_rm_mem_share(uVar11,0,uVar2,puVar9,pcVar10,0,uVar13 + iVar16 + 100);
            if (uVar6 != 0) {
                param_3 = uVar6;
                _printk(0x80024c2,"gh_virtio_backend",param_3);
                hyp_assign_phys(*(uVar13 + iVar16),(piVar1[1] - *(uVar13 + iVar16)) + 1,&uStack_78,2,&uStack_6c,
                                &uStack_70,1);
                uVar5 = uVar6;
            }
        }
        else {
            _printk(0x8001ca1,"gh_virtio_backend",*(uVar13 + iVar16),(piVar1[1] - *(uVar13 + iVar16)) + 1,
                    uVar11 & 0xffffffff);
        }
        kfree(puVar9);
        kfree(pcVar10);
        pcVar18 = pcVar10;
        if (uVar5 != 0) goto code_r0x08009078;
        iVar7 = iVar7 + 1;
        iVar16 = iVar16 + 0x68;
        if (*(pcVar15 + 0x38) <= iVar7) break;
code_r0x08008cf8:
        uVar3 = auStack_84[0];
        pcVar18 = trace_event_raw_init;
        uVar13 = *(pcVar15 + 0x30);
        iVar12 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar12 = 0x30;
        }
        uVar2 = *(uVar13 + iVar16 + 0x60);
        uStack_78 = auStack_84[0];
        uStack_70 = 7;
        uStack_80 = 0x600000006;
        uStack_74 = param_1 & 0xffff;
        uStack_6c = uStack_78;
        puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0xc);
        if (puVar9 == NULL) {
code_r0x08009070:
            uVar5 = 0xfffffff4;
code_r0x08009078:
            if (iVar7 != 0) {
                param_3 = iVar7 + 1;
                do {
                    iVar16 = iVar16 + -0x68;
                    sym.unshare_a_vm_buffer
                              (auStack_84[0],param_1,*(pcVar15 + 0x30) + iVar16,*(pcVar15 + 0x30) + iVar16);
                    param_3 = param_3 - 1;
                } while (1 < param_3);
            }
            goto code_r0x08008c2c;
        }
    }
code_r0x08008eec:
    param_5 = param_5 & 0xffffffff;
    *(pcVar15 + 0x20) = 1;
code_r0x08008b10:
    uVar5 = request_threaded_irq
                      (param_5 & 0xffffffff,sym.vdev_interrupt.1016b347f3458ea20e90756fd466f079.cfi_jt,0,0,
                       param_2 + 0x150,param_2);
    uVar13 = param_5;
    if (uVar5 == 0) {
        uVar8 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar8 = 0x68000000000f13;
        }
        iVar7 = __ioremap(param_6,param_7,uVar8);
        *(param_2 + 0x1d0) = iVar7;
        if (iVar7 == 0) {
            _dev_err(*(pcVar15 + 0x28),"%s: Unable to map config page\n","gh_virtio_backend");
            free_irq(param_5 & 0xffffffff,param_2);
            uStack_78 = uStack_78 & 0xffff0000;
            if ((*(pcVar15 + 0x20) != 0) && (iVar4 = gh_rm_get_vmid(1,&uStack_78), iVar4 == 0)) {
                if (0 < *(pcVar15 + 0x38)) {
                    iVar7 = 0;
                    param_3 = 0;
                    do {
                        iVar4 = sym.unshare_a_vm_buffer
                                          (uStack_78,param_1,*(pcVar15 + 0x30) + iVar7,*(pcVar15 + 0x30) + iVar7);
                        if (iVar4 != 0) goto code_r0x08009014;
                        param_3 = param_3 + 1;
                        iVar7 = iVar7 + 0x68;
                    } while (param_3 < *(pcVar15 + 0x38));
                }
                *(pcVar15 + 0x20) = 0;
            }
code_r0x08009014:
            mutex_unlock(pcVar14);
            iVar7 = *(param_2 + 0x88);
            _raw_spin_lock(iVar7 + 0x3c);
            iVar4 = *(param_2 + 0x48);
            *(param_2 + 0x48) = iVar4 + -1;
            if ((iVar4 + -1 == 0) && (*(param_2 + 0x4c) != 0)) {
                __wake_up(param_2 + 0x30,3,1,0);
            }
            _raw_spin_unlock(iVar7 + 0x3c);
            uVar5 = 0xfffffff4;
            puVar17 = param_7;
            pcVar18 = param_4;
        }
        else {
            *(param_2 + 0x78) = param_5;
            *(param_2 + 0x1b8) = param_4;
            *(param_2 + 0x1d8) = param_7;
            uVar8 = _raw_spin_lock_irqsave(param_2 + 0x10);
            *(param_2 + 0x4c) = 0;
            *(param_2 + 0x54) = 0;
            *(param_2 + 0x5c) = 0;
            *(param_2 + 100) = 0;
            *(param_2 + 0x6c) = 0;
            *(param_2 + 0x74) = 0;
            _raw_spin_unlock_irqrestore(param_2 + 0x10,uVar8);
            mutex_unlock(pcVar14);
            iVar7 = *(param_2 + 0x88);
            _raw_spin_lock(iVar7 + 0x3c);
            iVar4 = *(param_2 + 0x48);
            *(param_2 + 0x48) = iVar4 + -1;
            if ((iVar4 + -1 == 0) && (*(param_2 + 0x4c) != 0)) {
                __wake_up(param_2 + 0x30,3,1,0);
            }
            _raw_spin_unlock(iVar7 + 0x3c);
            uVar5 = 0;
            puVar17 = param_7;
            pcVar18 = param_4;
        }
    }
    else {
        _dev_err(*(pcVar15 + 0x28),"%s: Unable to register interrupt handler for %d\n","gh_virtio_backend",
                 param_5 & 0xffffffff);
        uStack_78 = uStack_78 & 0xffff0000;
        puVar17 = param_7;
        pcVar18 = param_4;
        if ((*(pcVar15 + 0x20) != 0) && (iVar4 = gh_rm_get_vmid(1,&uStack_78), iVar4 == 0)) {
            if (0 < *(pcVar15 + 0x38)) {
                iVar7 = 0;
                param_3 = 0;
                do {
                    iVar4 = sym.unshare_a_vm_buffer
                                      (uStack_78,param_1,*(pcVar15 + 0x30) + iVar7,*(pcVar15 + 0x30) + iVar7);
                    if (iVar4 != 0) goto code_r0x08008c2c;
                    param_3 = param_3 + 1;
                    iVar7 = iVar7 + 0x68;
                } while (param_3 < *(pcVar15 + 0x38));
            }
            *(pcVar15 + 0x20) = 0;
        }
code_r0x08008c2c:
        mutex_unlock(pcVar14);
        iVar7 = *(param_2 + 0x88);
        _raw_spin_lock(iVar7 + 0x3c);
        iVar4 = *(param_2 + 0x48);
        *(param_2 + 0x48) = iVar4 + -1;
        if ((iVar4 + -1 == 0) && (*(param_2 + 0x4c) != 0)) {
            __wake_up(param_2 + 0x30,3,1,0);
        }
        _raw_spin_unlock(iVar7 + 0x3c);
    }
    goto code_r0x08008c78;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080046e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080046f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080046f8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80027df,iVar1);
    }
    iVar1 = sym.gh_proxy_sched_init();
    if (iVar1 != 0) {
        _printk(0x8001fee,iVar1);
    }
    iVar1 = misc_register(obj.gh_dev);
    if (iVar1 == 0) {
        iVar1 = gh_rm_set_virtio_mmio_cb(sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt);
        if (iVar1 != 0) {
            _printk(0x80032b5,iVar1);
        }
    }
    else {
        _printk(0x8002887,iVar1);
        kfree(_segment.ehdr);
        platform_driver_unregister(reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt);
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.vb_dev_irqfd_ptable_queue_proc.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004700 (size 8) =====

void sym.vb_dev_irqfd_ptable_queue_proc.1016b347f3458ea20e90756fd466f079.cfi_jt
               (ulong param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    add_wait_queue(param_2,param_3 + -0x28);
    return;
}


// ===== sym.noop_llseek.cfi_jt @ 0x08004708 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.noop_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gh_vm_rm_notifier_fn.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x08004710 (size 8) =====

ulong sym.gh_vm_rm_notifier_fn.fc5859ae27bea53546df851ae32ba2aa.cfi_jt
                (int64_t param_1,int64_t param_2,int16_t *param_3)

{
    char cVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0x56100001) {
        if (*(param_1 + -0x54) == *param_3) {
            mutex_lock(param_1 + 0x48);
            *(param_1 + 0x38) = param_3[1];
            *(param_1 + 0x18) = 9;
            sym.gh_wakeup_all_vcpus(*(param_1 + -0x54));
            __wake_up(param_1 + 0x20,1,1,0);
            mutex_unlock(param_1 + 0x48);
        }
    }
    else if ((param_2 == 0x56100008) && (*(param_1 + -0x54) == *param_3)) {
        cVar1 = param_3[2];
        if ((cVar1 != *(param_1 + 0x18)) && ((cVar1 == '\v' || (cVar1 == '\x02')))) {
            _printk(0x8002eb1);
            *(param_1 + 0x18) = param_3[2];
            __wake_up(param_1 + 0x20,1,1,0);
        }
    }
    return 0;
}


// ===== sym.vb_dev_irqfd_wakeup.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004718 (size 8) =====

ulong sym.vb_dev_irqfd_wakeup.1016b347f3458ea20e90756fd466f079.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t extraout_x8;
    int64_t *piVar4;
    uint extraout_w9;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    if ((param_4 & 1) != 0) {
        auVar7._8_8_ = 1;
        auVar7._0_8_ = *(param_1 + 0xe0);
        CallHyperVisor(0x604e);
    }
    while( true ) {
        if ((param_4 >> 4 & 1) != 0) {
            auVar7 = queue_work_on(0x20,_init_wait_entry,param_1 + 0x48);
        }
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iVar5) break;
        auVar7 = __stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
        uVar3 = auVar7._0_8_;
        iVar2 = tpidr_el1;
        param_4 = extraout_x8;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar6 = *0x800da08;
            piVar4 = *0x800da08;
            while (piVar4 != NULL) {
                auVar7 = (**piVar6)(piVar6[1],extraout_w9,uVar3);
                piVar6 = piVar6 + 3;
                piVar4 = *piVar6;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                auVar7 = preempt_schedule_notrace();
            }
        }
    }
    return 0;
}


// ===== sym.gh_vm_mmap.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x08004720 (size 8) =====

void sym.gh_vm_mmap.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_virtio_backend_mmap(*(param_1 + 0xd8) + 0x50,param_2);
    return;
}


// ===== sym.__traceiter_gh_hcall_vcpu_run.cfi_jt @ 0x08004728 (size 8) =====

ulong sym.__traceiter_gh_hcall_vcpu_run.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,ulong param_5,ulong param_6,ulong param_7)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800db28;
    piVar1 = *0x800db28;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6,param_7);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_wait_event.cfi_jt @ 0x08004730 (size 8) =====

ulong sym.__traceiter_gh_virtio_backend_wait_event.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800da98;
    piVar1 = *0x800da98;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.gh_unpopulate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004738 (size 8) =====

ulong sym.gh_unpopulate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(int16_t param_1,uint *param_2)

{
    int iVar1;
    int16_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_unpopulate_vm_vpm_grp_info");
        return 0xfffffffa;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar2 = _segment.ehdr;
    if (*_segment.ehdr != param_1 && *_segment.ehdr != -1) {
        piVar2 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
            piVar2 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                piVar2 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                    piVar2 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((piVar2 == NULL) || (*piVar2 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar1 = *(piVar2 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar1) {
            mutex_lock(obj.gh_vm_mutex);
            piVar2 = _segment.ehdr;
            if ((*_segment.ehdr != param_1) && (*_segment.ehdr != -1)) {
                piVar2 = _segment.ehdr + 0x234;
                if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
                    piVar2 = _segment.ehdr + 0x468;
                    if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                        piVar2 = _segment.ehdr + 0x69c;
                        if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                            piVar2 = _segment.ehdr + 0x8d0;
                        }
                    }
                }
            }
            if ((piVar2 != NULL) && (piVar2[0x232] != '\0')) {
                *param_2 = *(piVar2 + 0x230);
                free_irq(*(piVar2 + 0x230),0);
                *(piVar2 + 0x232) = 0;
                piVar2[0x230] = -1;
                piVar2[0x231] = -1;
            }
            mutex_unlock(obj.gh_vm_mutex);
            return 0;
        }
    }
    _printk(0x8001efa,param_1);
    return 0;
}


// ===== sym.gh_populate_all_res_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004740 (size 8) =====

void sym.gh_populate_all_res_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(int16_t param_1,uint64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int16_t *piVar3;
    code *pcVar4;
    int16_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_populate_all_res_info");
    }
    else {
        mutex_lock(obj.gh_vm_mutex);
        piVar3 = CONCAT44(*0x8000004,_segment.ehdr);
        piVar5 = piVar3;
        if (*piVar3 != param_1 && *piVar3 != -1) {
            piVar5 = piVar3 + 0x234;
            if ((piVar3[0x234] != param_1) && (piVar3[0x234] != -1)) {
                piVar5 = piVar3 + 0x468;
                if ((piVar3[0x468] != param_1) && (piVar3[0x468] != -1)) {
                    piVar5 = piVar3 + 0x69c;
                    if (piVar3[0x69c] != -1 && piVar3[0x69c] != param_1) {
                        piVar5 = piVar3 + 0x8d0;
                    }
                }
            }
        }
        if ((piVar5 == NULL) || (*piVar5 == -1)) {
            mutex_unlock(obj.gh_vm_mutex);
        }
        else {
            iVar1 = *(piVar5 + 2);
            mutex_unlock(obj.gh_vm_mutex);
            if (0 < iVar1) {
                if (4 < _segment.ehdr) {
                    _printk(0x80021b7);
                    return;
                }
                mutex_lock(obj.gh_vm_mutex);
                piVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                piVar5 = piVar3;
                if ((*piVar3 != param_1) && (*piVar3 != -1)) {
                    piVar5 = piVar3 + 0x234;
                    if ((piVar3[0x234] != param_1) && (piVar3[0x234] != -1)) {
                        piVar5 = piVar3 + 0x468;
                        if ((piVar3[0x468] != param_1) && (piVar3[0x468] != -1)) {
                            piVar5 = piVar3 + 0x69c;
                            if (piVar3[0x69c] != -1 && piVar3[0x69c] != param_1) {
                                piVar5 = piVar3 + 0x8d0;
                            }
                        }
                    }
                }
                if (piVar5 != NULL) {
                    if ((param_2 & 1) == 0) {
                        if (piVar5[0x224] != '\0') {
                            iVar6 = 0;
                            piVar5[2] = 0;
                            piVar5[3] = 0;
                            piVar5[0x224] = 0;
                            *piVar5 = -1;
                            piVar5[0x230] = -1;
                            piVar5[0x231] = -1;
                            *(piVar5 + 0x232) = 0;
                            piVar5[0x22c] = -1;
                            piVar5[0x22d] = -1;
                            piVar5[0x22e] = -1;
                            piVar5[0x22f] = -1;
                            do {
                                uVar2 = *(piVar5 + 2);
                                *(piVar5 + iVar6 + 0x28) = 0xffffffff;
                                *(piVar5 + iVar6 + 0x18) = 0xffffffff;
                                *(piVar5 + iVar6 + 8) = 0;
                                *(piVar5 + iVar6 + 0x10) = 0xffffffffffffffff;
                                *(piVar5 + iVar6 + 0x1c) = 0;
                                *(piVar5 + iVar6 + 0x88) = 0;
                                if (7 < uVar2) goto code_r0x0800d14c;
                                strscpy(piVar5 + uVar2 * 0x44 + 0x16,0x8003090,0x20);
                                if (7 < *(piVar5 + 2)) goto code_r0x0800d14c;
                                strscpy(piVar5 + *(piVar5 + 2) * 0x44 + 0x26,0x8003090,0x20);
                                iVar6 = iVar6 + 0x88;
                            } while (iVar6 != 0x440);
                            if (_segment.ehdr != 0) {
                                _segment.ehdr = _segment.ehdr + -1;
                            }
                        }
                    }
                    else if (piVar5[0x224] == '\0') {
                        if ((((((*(piVar5 + 2) != 0) &&
                               (__init_waitqueue_head
                                          (piVar5 + 0x38,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                               1 < *(piVar5 + 2))) &&
                              (__init_waitqueue_head
                                         (piVar5 + 0x7c,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              2 < *(piVar5 + 2))) &&
                             ((__init_waitqueue_head
                                         (piVar5 + 0xc0,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              3 < *(piVar5 + 2) &&
                              (__init_waitqueue_head
                                         (piVar5 + 0x104,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              4 < *(piVar5 + 2))))) &&
                            ((__init_waitqueue_head
                                        (piVar5 + 0x148,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                             5 < *(piVar5 + 2) &&
                             ((__init_waitqueue_head
                                         (piVar5 + 0x18c,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              6 < *(piVar5 + 2) &&
                              (__init_waitqueue_head
                                         (piVar5 + 0x1d0,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              7 < *(piVar5 + 2))))))) &&
                           (__init_waitqueue_head
                                      (piVar5 + 0x214,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                           8 < *(piVar5 + 2))) {
code_r0x0800d14c:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x800d150);
                            (*pcVar4)();
                        }
                        _segment.ehdr = _segment.ehdr + 1;
                        piVar5[0x224] = 0x101;
                    }
                }
                mutex_unlock(obj.gh_vm_mutex);
                return;
            }
        }
        _printk(0x8002b24,param_1);
    }
    return;
}


// ===== sym.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt @ 0x08004748 (size 8) =====

uint64_t sym.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    uint64_t uVar15;
    code *pcVar16;
    ulong unaff_x30;
    int64_t iStack_a8;
    int64_t iStack_a0;
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
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar12 = param_1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    pcVar6 = devm_kmalloc(iVar12,0x50,0xdc0);
    if (pcVar6 == NULL) {
        uVar15 = 0xfffffff4;
        goto code_r0x0800a928;
    }
    uVar7 = *(param_1 + 0x300);
    *(pcVar6 + 0x18) = iVar12;
    *(param_1 + 0xa8) = pcVar6;
    uVar4 = of_property_read_variable_u32_array(uVar7,"qcom,pas-id",pcVar6 + 0x40,1,0);
    if (uVar4 < 0) {
        pcVar13 = "DT error getting \"qcom,pas-id\": %d\n";
    }
    else {
        iVar8 = of_find_property(*(param_1 + 0x300),"qcom,no-shutdown",0);
        pcVar6[0x20] = iVar8 != 0;
        if (iVar8 != 0) {
            _dev_info(iVar12,"Vm with no shutdown attribute added\n");
        }
        uVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,vmid",pcVar6 + 0x44,1,0);
        if (-1 < uVar4) {
            iVar8 = *(pcVar6 + 0x18);
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
            iStack_a8 = 0;
            iStack_a0 = 0;
            puVar9 = of_parse_phandle(*(iVar8 + 0x2f0),"memory-region",0);
            if (puVar9 == NULL) {
                _dev_err(iVar8,"DT error getting \"memory-region\"\n");
                uVar15 = 0xffffffea;
                goto code_r0x0800a928;
            }
            iVar10 = of_find_property(puVar9,"no-map",0);
            if (iVar10 == 0) {
                pcVar6[0x48] = 0x0;
                uVar4 = dma_set_mask(iVar8,0xffffffffffffffff);
                if (uVar4 != 0) {
                    uVar15 = uVar4;
                    _printk(0x8001bb5,"gh_vm_loader_mem_probe");
                    goto code_r0x0800a928;
                }
                dma_set_coherent_mask(iVar8,0xffffffffffffffff);
                uVar4 = of_reserved_mem_device_init_by_idx(iVar8,*(iVar8 + 0x2f0),0);
                if (uVar4 != 0) {
                    uVar15 = uVar4;
                    _printk(0x8001abe,"gh_vm_loader_mem_probe",uVar15);
                    goto code_r0x0800a928;
                }
                iVar8 = of_reserved_mem_lookup(puVar9);
                if (iVar8 == 0) {
                    _printk(0x80028fc,"gh_vm_loader_mem_probe",*puVar9);
                    uVar15 = 0xffffffea;
                    goto code_r0x0800a928;
                }
                iVar10 = *(iVar8 + 0x28);
            }
            else {
                pcVar6[0x48] = 0x1;
                uVar4 = of_address_to_resource(puVar9,0,&iStack_a8);
                iVar3 = iStack_a8;
                if (uVar4 != 0) {
                    pcVar13 = "error %d getting \"memory-region\" resource\n";
                    iVar12 = iVar8;
                    goto code_r0x0800aa04;
                }
                iVar10 = (iStack_a0 - iStack_a8) + 1;
                iVar11 = memremap(iStack_a8,iVar10,4);
                if (iVar11 == 0) {
                    _dev_err(iVar8,"Unable to remap firmware memory\n");
                    uVar15 = 0xfffffff4;
                    goto code_r0x0800a928;
                }
                *(pcVar6 + 0x28) = iVar3;
                *(pcVar6 + 0x30) = iVar11;
            }
            uVar7 = *(param_1 + 0x300);
            pcVar1 = pcVar6 + 0x10;
            *(pcVar6 + 0x38) = iVar10;
            uVar4 = of_property_read_string(uVar7,"qcom,firmware-name",pcVar1);
            uVar15 = uVar4;
            if (uVar4 == 0) {
                uVar7 = *pcVar1;
                iVar5 = strcmp(uVar7,0x800297c);
                if ((((iVar5 == 0) || (iVar5 = strcmp(uVar7,"trustedvm"), iVar5 == 0)) ||
                    (iVar5 = strcmp(uVar7,"cpusys_vm"), iVar5 == 0)) || (iVar5 = strcmp(uVar7,"oemvm"), iVar5 == 0))
                {
                    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
                    for (pcVar16 = _obj.gh_sec_vm_list; pcVar16 != obj.gh_sec_vm_list; pcVar16 = *pcVar16) {
                        iVar5 = strcmp(*(pcVar16 + 0x10),uVar7);
                        if (iVar5 == 0) {
                            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
                            if (pcVar16 == NULL) goto code_r0x0800a90c;
                            _dev_err(iVar12,"Requested Secure VM %s already present\n",*pcVar1);
                            goto code_r0x0800aab0;
                        }
                    }
                    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a90c:
                    uVar4 = sym.gh_parse_virtio_properties(iVar12,*pcVar1);
                    uVar15 = uVar4;
                    if (uVar4 == 0) {
                        _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
                        pcVar1 = _obj.gh_sec_vm_list;
                        uVar15 = __list_add_valid(pcVar6,obj.gh_sec_vm_list,_obj.gh_sec_vm_list);
                        if ((uVar15 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar6;
                            *pcVar6 = pcVar1;
                            *(pcVar6 + 8) = obj.gh_sec_vm_list;
                            _obj.gh_sec_vm_list = pcVar6;
                        }
                        _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
                        uVar15 = 0;
                        goto code_r0x0800a928;
                    }
                }
                else {
                    _dev_err(iVar12,"Requested Secure VM %d not supported\n",5);
code_r0x0800aab0:
                    uVar15 = 0xffffffea;
                }
            }
            memunmap(*(pcVar6 + 0x30));
            goto code_r0x0800a928;
        }
        pcVar13 = "DT error getting \"qcom,vmid\": %d\n";
    }
code_r0x0800aa04:
    uVar15 = uVar4;
    _dev_err(iVar12,pcVar13,uVar15);
code_r0x0800a928:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return uVar15;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.gh_secure_vm_loader_remove;
    piVar14 = *(iVar12 + 0xa8);
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    uVar15 = __list_del_entry_valid(piVar14);
    if ((uVar15 & 1) != 0) {
        iVar8 = *piVar14;
        piVar2 = piVar14[1];
        *(iVar8 + 8) = piVar2;
        *piVar2 = iVar8;
    }
    *piVar14 = -0x2152ffffffffff00;
    piVar14[1] = -0x2152fffffffffede;
    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
    if (piVar14[9] == '\0') {
        of_reserved_mem_device_release(iVar12 + 0x10);
    }
    else {
        memunmap(piVar14[6]);
    }
    uVar15 = sym.gh_virtio_backend_remove(piVar14[2]);
    return uVar15;
}


// ===== sym.gh_secure_vm_loader_remove.3ff479e546a49f25d5327676542516bb.cfi_jt @ 0x08004750 (size 8) =====

void sym.gh_secure_vm_loader_remove.3ff479e546a49f25d5327676542516bb.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + 0xa8);
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
    if (piVar4[9] == '\0') {
        of_reserved_mem_device_release(param_1 + 0x10);
    }
    else {
        memunmap(piVar4[6]);
    }
    sym.gh_virtio_backend_remove(piVar4[2]);
    return;
}


// ===== sym.gh_vcpu_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x08004758 (size 8) =====

int64_t sym.gh_vcpu_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(int64_t param_1,int param_2)

{
    char *pcVar1;
    char *pcVar2;
    int *piVar3;
    char cVar4;
    ushort uVar5;
    int iVar6;
    bool bVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar14;
    uint32_t *puVar15;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    if (param_2 != 0xb280) {
        _printk(0x8001955);
        iVar11 = -0x16;
        goto code_r0x08005cd8;
    }
    puVar15 = *(param_1 + 0xd8);
    pcVar14 = *(puVar15 + 2);
    pcVar1 = pcVar14 + 0xa8;
    mutex_lock(pcVar1);
    if (pcVar14[0x78] == '\x03') {
code_r0x08005c20:
        mutex_unlock(pcVar1);
        uVar10 = sym.gh_vm_supports_proxy_sched(*(pcVar14 + 0xc));
        if (((uVar10 & 1) == 0) || (uVar9 = sym.gh_vcpu_run(*(pcVar14 + 0xc),*puVar15,0,0), -1 < uVar9)) {
            if (pcVar14[0x78] != '\t') {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                init_wait_entry(&uStack_70,0);
                pcVar1 = pcVar14 + 0x80;
                uVar10 = prepare_to_wait_event(pcVar1,&uStack_70,1);
                cVar4 = pcVar14[0x78];
                while (cVar4 != '\t') {
                    if (uVar10 != 0) {
                        if (uVar10 < 0) {
                            uVar13 = 9;
                            uVar12 = 0x80021ec;
                            goto code_r0x08005db8;
                        }
                        if (uVar10 != 0) goto code_r0x08005cd4;
                        goto code_r0x08005cd0;
                    }
                    schedule();
                    uVar10 = prepare_to_wait_event(pcVar1,&uStack_70,1);
                    cVar4 = pcVar14[0x78];
                }
                finish_wait(pcVar1,&uStack_70);
            }
code_r0x08005cd0:
            uVar10 = *(pcVar14 + 0x98);
        }
        else {
            uVar13 = uVar9;
            uVar12 = 0x8001c2c;
            uVar10 = uVar13;
code_r0x08005db8:
            _printk(uVar12,uVar13);
        }
    }
    else {
        if (pcVar14[1] == '\0') {
            pcVar14[1] = '\x01';
            if (*pcVar14 == '\0') {
code_r0x08005d50:
                pcVar2 = pcVar14 + 0xc;
                if (pcVar14[0x78] == '\x02') {
                    srcu_notifier_call_chain(obj.gh_vm_notifier,1,pcVar2);
                    uVar9 = gh_rm_vm_start(*pcVar2);
                    if (uVar9 == 0) {
                        pcVar14[0x78] = '\x03';
                        _printk(0x8001b4a,*(pcVar14 + 0xc));
                        goto code_r0x08005c20;
                    }
                    uVar10 = uVar9;
                    _printk(0x8001fca,*pcVar2,uVar10);
                    mutex_unlock(pcVar1);
                    srcu_notifier_call_chain(obj.gh_vm_notifier,2,pcVar2);
                    goto code_r0x08005cd4;
                }
                uVar5 = *pcVar2;
                uVar12 = 0x8002227;
                goto code_r0x08005dcc;
            }
            if (*(pcVar14 + 4) == *(pcVar14 + 8)) goto code_r0x08005d50;
            _printk(0x8002729,*(pcVar14 + 4),*(pcVar14 + 8),*(pcVar14 + 0xc));
        }
        else {
            uVar5 = *(pcVar14 + 0xc);
            uVar12 = 0x80030bc;
code_r0x08005dcc:
            _printk(uVar12,uVar5);
        }
        mutex_unlock(pcVar1);
        uVar10 = 0xffffffea;
    }
code_r0x08005cd4:
    iVar11 = uVar10;
code_r0x08005cd8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar11;
    }
    __stack_chk_fail(iVar11);
    *extraout_x18 = sym.gh_vcpu_release;
    iVar11 = *(*(extraout_x1 + 0xd8) + 8);
    piVar3 = iVar11 + 0x9c;
    Hint_Prefetch(piVar3,2,0,1);
    do {
        iVar6 = *piVar3;
        cVar4 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
            *piVar3 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar6 == 1) {
        DataMemoryBarrier(2,1);
        sym.gh_destroy_vm(iVar11);
    }
    else if (iVar6 < 1) {
        refcount_warn_saturate(piVar3,3);
    }
    return 0;
}


// ===== sym.gh_vm_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x08004760 (size 8) =====

int64_t sym.gh_vm_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    char *arg1;
    int64_t iVar1;
    int64_t extraout_x0;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xd8);
    iVar2 = param_2;
    if (iVar2 < 0xb243) {
        if (iVar2 == -0x7fef4dbe) {
            iVar1 = sym.gh_vm_ioctl_get_fw_name(arg1,param_3);
            return iVar1;
        }
        if (iVar2 == 0xb240) {
            iVar1 = sym.gh_vm_ioctl_create_vcpu(arg1,param_3);
            return iVar1;
        }
    }
    else {
        if (iVar2 == 0xb243) {
            if (*arg1 == '\0') {
                return -0x16;
            }
            if (arg1[0x78] == '\x02') {
                return *(arg1 + 8);
            }
            return -0xb;
        }
        if (iVar2 == 0x4010b241) {
            iVar1 = sym.gh_vm_ioctl_set_fw_name(arg1,param_3);
            return iVar1;
        }
    }
    sym.gh_virtio_backend_ioctl(arg1 + 0x50,param_2,param_3);
    return extraout_x0;
}


// ===== sym.gh_dev_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x08004768 (size 8) =====

ulong sym.gh_dev_ioctl.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(ulong param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0xb201) {
        uVar1 = sym.gh_dev_ioctl_create_vm();
    }
    else {
        _printk(0x8002076);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.__bpf_trace_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004770 (size 8) =====

void sym.__bpf_trace_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004778 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    uint uVar14;
    uint uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar22 = *(param_1 + 0x48);
    uVar13 = param_4;
    uVar7 = param_5;
    uVar17 = param_6;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar9 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0xc) = param_3;
            *(iVar4 + 0x10) = param_4;
            *(iVar4 + 0x14) = param_5;
            *(iVar4 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar5 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_d8 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar19 = uVar7 & 0xffffffff;
    uVar20 = uVar13 & 0xffffffff;
    uVar21 = puVar9 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    uVar24 = auVar25._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar5 + 0x78);
    uVar3 = uVar13;
    uVar16 = uVar7;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar5 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_f0);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            puVar10 = uStack_f4;
            uVar16 = 1;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_f0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar9;
            *(iVar4 + 0x10) = uVar13;
            *(iVar4 + 0x14) = uVar7;
            *(iVar4 + 0x18) = uVar17;
            uVar3 = uVar5;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar11 = uVar3;
    uVar14 = uVar16;
    uVar23 = tpidr_el2;
    *extraout_x18_00 = 0x8006730;
    uStack_138 = 0x8006730;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    uVar13 = auVar25._8_8_ & 0xffffffff;
    uVar23 = *(iVar6 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar22 = uVar23;
    uVar15 = uVar14;
    uVar12 = uVar11;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar1;
    uStack_128 = uVar21;
    uStack_120 = uVar20;
    uStack_118 = uVar19;
    uStack_110 = uVar18;
    uStack_108 = uVar5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar9 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_178,iVar6);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar25._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        *(iVar4 + 0x14) = uVar14;
        trace_event_buffer_commit(&uStack_178);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_1c8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uVar11 = SUB84(puVar9,0);
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar8 + 0x78);
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = uVar24;
    uStack_1b0 = uVar23;
    iStack_1a8 = iVar6;
    uStack_1a0 = uVar13;
    uStack_198 = puVar10 & 0xffffffff;
    uStack_190 = uVar3 & 0xffffffff;
    uStack_188 = uVar16 & 0xffffffff;
    if ((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_1e4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_1e0,puVar9);
        uVar13 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            puVar9 = uStack_1e4;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8006818;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = uVar11;
            *(iVar4 + 0x10) = uVar12;
            *(iVar4 + 0x14) = uVar15;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar9,iVar8,1,iStack_1e0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1d8) {
        auVar25 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_02 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar9 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004780 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,
               uint32_t param_6)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint uVar7;
    uint uVar8;
    uint64_t uVar9;
    uint uVar10;
    uint uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    ulong uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar14 = param_6;
    uVar15 = param_5 & 0xffffffff;
    uVar16 = param_4 & 0xffffffff;
    uVar17 = param_3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(param_1 + 0x78);
    uVar9 = param_4;
    uVar12 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar5 = param_3, *piVar1 != 0)) {
        puVar5 = &uStack_64;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_60);
        uVar13 = _noop_llseek;
        if (iVar2 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar5 = uStack_64;
            uVar13 = -1L << (uVar13 & 0x3f);
            uVar12 = 1;
            uVar9 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar13 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar9;
            *(iStack_60 + 0x108) = 5;
            *(iVar2 + 8) = param_2;
            *(iVar2 + 0xc) = param_3;
            *(iVar2 + 0x10) = param_4;
            *(iVar2 + 0x14) = param_5;
            *(iVar2 + 0x18) = param_6;
            uVar9 = param_1;
            perf_trace_run_bpf_submit(iVar2,0x1c);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar3 = auVar20._0_8_;
    uVar7 = uVar9;
    uVar10 = uVar12;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x8006730;
    uStack_a8 = 0x8006730;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uVar13 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar3 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = uVar19;
    uVar11 = uVar10;
    uVar8 = uVar7;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar17;
    uStack_90 = uVar16;
    uStack_88 = uVar15;
    uStack_80 = uVar14;
    uStack_78 = param_1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar6 = puVar5;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar6 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar3,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar3), (uVar14 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar6 = 0x18;
    iVar2 = trace_event_buffer_reserve(&uStack_e8,iVar3);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar20._8_4_;
        *(iVar2 + 0xc) = puVar5;
        *(iVar2 + 0x10) = uVar7;
        *(iVar2 + 0x14) = uVar10;
        trace_event_buffer_commit(&uStack_e8);
    }
code_r0x080067e0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar4 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_138 = sym.perf_trace_gh_virtio_backend_irq;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar7 = SUB84(puVar6,0);
    iStack_150 = 0;
    uStack_154 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar4 + 0x78);
    ppuStack_140 = &puStack_b0;
    uStack_130 = param_2;
    uStack_120 = uVar19;
    iStack_118 = iVar3;
    uStack_110 = uVar13;
    uStack_108 = puVar5 & 0xffffffff;
    uStack_100 = uVar9 & 0xffffffff;
    uStack_f8 = uVar12 & 0xffffffff;
    if ((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar6 = &uStack_154;
        iVar2 = perf_trace_buf_alloc(0x1c,&iStack_150,puVar6);
        uVar9 = _noop_llseek;
        if (iVar2 != 0) {
            *(iStack_150 + 0xe8) = &ppuStack_140;
            puVar6 = uStack_154;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8006818;
            *(iStack_150 + 0x108) = 5;
            *(iVar2 + 8) = auVar21._8_4_;
            *(iVar2 + 0xc) = uVar7;
            *(iVar2 + 0x10) = uVar8;
            *(iVar2 + 0x14) = uVar11;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar6,iVar4,1,iStack_150,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_148) {
        auVar20 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_01 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.irqfd_shutdown.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004788 (size 8) =====

void sym.irqfd_shutdown.1016b347f3458ea20e90756fd466f079.cfi_jt(int64_t param_1,ulong param_2,uchar *param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong extraout_x1;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uVar2 = _raw_spin_lock_irqsave(param_1 + -0x110);
    piVar4 = param_1 + -0x50;
    if (*piVar4 != 0) {
        eventfd_ctx_remove_wait_queue(*piVar4,param_1 + -0x48,&uStack_40);
        eventfd_ctx_put(*piVar4);
        if ((*(param_1 + -8) & 1) != 0) {
            fput(*(param_1 + -0x10));
        }
        *piVar4 = 0;
        *(param_1 + -0x10) = 0;
        param_3 = puVar3;
    }
    _raw_spin_unlock_irqrestore(param_1 + -0x110,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.vb_dev_irqfd_ptable_queue_proc;
    add_wait_queue(extraout_x1,param_3 + -0x28);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004790 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.gh_dev);
    kfree(_segment.ehdr);
    platform_driver_unregister(reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt);
    gh_rm_unset_virtio_mmio_cb();
    return;
}


// ===== sym.__traceiter_gh_vcpu_irq_handler.cfi_jt @ 0x08004798 (size 8) =====

ulong sym.__traceiter_gh_vcpu_irq_handler.cfi_jt(ulong param_1,uint param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800dbb8;
    piVar1 = *0x800dbb8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.gh_populate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047a0 (size 8) =====

int sym.gh_populate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
              (uint16_t param_1,uint32_t param_2,uint *param_3,uint *param_4)

{
    uint32_t uVar1;
    uint16_t *puVar2;
    int16_t *piVar3;
    code *pcVar4;
    int16_t iVar5;
    int iVar6;
    ulong uVar7;
    uint *puVar8;
    uint *puVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint *puVar13;
    uint64_t arg1;
    uint16_t *puVar14;
    ulong unaff_x30;
    uint16_t auStack_5c [2];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    auStack_5c[0] = 0;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        iVar6 = -6;
    }
    else {
        puVar13 = param_2;
        puVar8 = param_3;
        puVar9 = param_4;
        iVar6 = gh_rm_get_vmid(2,auStack_5c);
        if ((((iVar6 == 0) && (auStack_5c[0] != param_1)) && (iVar6 = gh_rm_get_vmid(4,auStack_5c), iVar6 == 0)) &&
           (auStack_5c[0] != param_1)) {
            _printk(0x8002b62,param_1);
            iVar6 = 0;
            param_3 = puVar8;
            param_4 = puVar9;
        }
        else if (_segment.ehdr < 0x28) {
            if (param_4 + 1U < 2) {
                _printk(0x80022f3);
                iVar6 = 0;
                param_3 = puVar8;
                param_4 = puVar9;
            }
            else {
                mutex_lock(obj.gh_vm_mutex);
                puVar2 = CONCAT44(*0x8000004,_segment.ehdr);
                puVar14 = puVar2;
                if (*puVar2 == param_1) {
code_r0x0800c2e0:
                    if (puVar14 == NULL) goto code_r0x0800c2ec;
code_r0x0800c2e4:
                    if (puVar14[0x224] != '\0') goto code_r0x0800c2ec;
                    uVar1 = *(puVar14 + 2);
                    if (uVar1 < 8) {
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        strscpy(puVar14 + uVar1 * 0x44 + 0x16,"gh_vcpu_irq",0x20);
                        uVar1 = *(puVar14 + 2);
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        arg1 = param_1;
                        sym.gh_get_vcpu_prop_name(arg1,uVar1,puVar14 + uVar1 * 0x44 + 0x16);
                        uVar1 = *(puVar14 + 2);
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        puVar9 = NULL;
                        iVar6 = request_threaded_irq
                                          (param_4 & 0xffffffff,
                                           sym.gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt,0,0,
                                           puVar14 + uVar1 * 0x44 + 0x16,puVar14 + uVar1 * 0x44 + 4);
                        if (iVar6 < 0) {
                            _printk(0x8002fdd,"gh_populate_vm_vcpu_info",iVar6);
                        }
                        else {
                            if (7 < *(puVar14 + 2)) goto code_r0x0800c5b4;
                            strscpy(puVar14 + *(puVar14 + 2) * 0x44 + 0x26,"gh_vcpu_ws",0x20);
                            uVar1 = *(puVar14 + 2);
                            if (7 < uVar1) goto code_r0x0800c5b4;
                            sym.gh_get_vcpu_prop_name(arg1,uVar1,puVar14 + uVar1 * 0x44 + 0x26);
                            if (7 < *(puVar14 + 2)) goto code_r0x0800c5b4;
                            iVar12 = wakeup_source_register(0,puVar14 + *(puVar14 + 2) * 0x44 + 0x26);
                            uVar1 = *(puVar14 + 2);
                            uVar10 = uVar1;
                            if (7 < uVar1) goto code_r0x0800c5b4;
                            *(puVar14 + uVar10 * 0x44 + 0x44) = iVar12;
                            if (iVar12 != 0) {
                                *puVar14 = param_1;
                                *(puVar14 + 2) = uVar1 + 1;
                                *(puVar14 + uVar10 * 0x44 + 0x14) = param_4;
                                *(puVar14 + uVar10 * 0x44 + 0xc) = param_2;
                                *(puVar14 + uVar10 * 0x44 + 4) = puVar14;
                                *(puVar14 + uVar10 * 0x44 + 8) = param_3;
                                _segment.ehdr = _segment.ehdr + 1;
                                _printk(0x8002a9c,arg1,puVar13,param_3,param_4 & 0xffffffff,
                                        puVar14 + uVar10 * 0x44 + 0x16);
                                puVar9 = param_3;
                                goto code_r0x0800c2f0;
                            }
                            _printk(0x8002e4c,"gh_populate_vm_vcpu_info");
                            if (7 < *(puVar14 + 2)) goto code_r0x0800c5b4;
                            strscpy(puVar14 + *(puVar14 + 2) * 0x44 + 0x26,0x8003090,0x20);
                            if (8 < *(puVar14 + 2)) goto code_r0x0800c5b4;
                            free_irq(param_4 & 0xffffffff,puVar14 + *(puVar14 + 2) * 0x44 + 4);
                        }
                        if (7 < *(puVar14 + 2)) {
code_r0x0800c5b4:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x800c5b8);
                            (*pcVar4)();
                        }
                        puVar13 = 0x20;
                        strscpy(puVar14 + *(puVar14 + 2) * 0x44 + 0x16,0x8003090);
                    }
                    else {
                        _printk(0x80031d3);
                        iVar6 = -6;
                        puVar13 = puVar8;
                    }
                }
                else {
                    if (*puVar2 != 0xffff) {
                        puVar14 = puVar2 + 0x234;
                        if ((puVar2[0x234] != param_1) && (puVar2[0x234] != 0xffff)) {
                            puVar14 = puVar2 + 0x468;
                            if ((puVar2[0x468] != param_1) && (puVar2[0x468] != 0xffff)) {
                                puVar14 = puVar2 + 0x69c;
                                if (puVar2[0x69c] != 0xffff && puVar2[0x69c] != param_1) {
                                    puVar14 = puVar2 + 0x8d0;
                                }
                                goto joined_r0x0800c2d4;
                            }
                        }
                        goto code_r0x0800c2e0;
                    }
joined_r0x0800c2d4:
                    if (puVar14 != NULL) goto code_r0x0800c2e4;
code_r0x0800c2ec:
                    iVar6 = 0;
                    puVar13 = puVar8;
                }
code_r0x0800c2f0:
                mutex_unlock(obj.gh_vm_mutex);
                param_3 = puVar13;
                param_4 = puVar9;
            }
        }
        else {
            _printk(0x800319c);
            iVar6 = -6;
            param_3 = puVar8;
            param_4 = puVar9;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return iVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gh_unpopulate_vm_vcpu_info;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return -6;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar11 = piVar3;
    if (*piVar3 != iVar5 && *piVar3 != -1) {
        piVar11 = piVar3 + 0x234;
        if ((piVar3[0x234] != iVar5) && (piVar3[0x234] != -1)) {
            piVar11 = piVar3 + 0x468;
            if ((piVar3[0x468] != iVar5) && (piVar3[0x468] != -1)) {
                piVar11 = piVar3 + 0x69c;
                if (piVar3[0x69c] != -1 && piVar3[0x69c] != iVar5) {
                    piVar11 = piVar3 + 0x8d0;
                }
            }
        }
    }
    if ((piVar11 == NULL) || (*piVar11 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
code_r0x0800c7b8:
        _printk(0x8002980,iVar5);
        return 0;
    }
    iVar6 = *(piVar11 + 2);
    mutex_unlock(obj.gh_vm_mutex);
    if (iVar6 < 1) goto code_r0x0800c7b8;
    mutex_lock(obj.gh_vm_mutex);
    piVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar11 = piVar3;
    if ((*piVar3 != iVar5) && (*piVar3 != -1)) {
        piVar11 = piVar3 + 0x234;
        if ((piVar3[0x234] != iVar5) && (piVar3[0x234] != -1)) {
            piVar11 = piVar3 + 0x468;
            if ((piVar3[0x468] != iVar5) && (piVar3[0x468] != -1)) {
                piVar11 = piVar3 + 0x69c;
                if (piVar3[0x69c] != -1 && piVar3[0x69c] != iVar5) {
                    piVar11 = piVar3 + 0x8d0;
                }
            }
        }
    }
    if (((piVar11 == NULL) || (piVar11[0x224] == '\0')) || (iVar6 = *(piVar11 + 2), iVar6 < 1)) goto code_r0x0800c7d4;
    if (*(piVar11 + 8) == param_3) {
        iVar12 = 0;
    }
    else {
        if (iVar6 == 1) goto code_r0x0800c7d4;
        if (*(piVar11 + 0x4c) == param_3) {
            iVar12 = 1;
        }
        else {
            if (iVar6 == 2) goto code_r0x0800c7d4;
            if (*(piVar11 + 0x90) == param_3) {
                iVar12 = 2;
            }
            else {
                if (iVar6 == 3) goto code_r0x0800c7d4;
                if (*(piVar11 + 0xd4) == param_3) {
                    iVar12 = 3;
                }
                else {
                    if (iVar6 == 4) goto code_r0x0800c7d4;
                    if (*(piVar11 + 0x118) == param_3) {
                        iVar12 = 4;
                    }
                    else {
                        if (iVar6 == 5) goto code_r0x0800c7d4;
                        if (*(piVar11 + 0x15c) == param_3) {
                            iVar12 = 5;
                        }
                        else {
                            if (iVar6 == 6) goto code_r0x0800c7d4;
                            if (*(piVar11 + 0x1a0) == param_3) {
                                iVar12 = 6;
                            }
                            else {
                                if (iVar6 == 7) goto code_r0x0800c7d4;
                                if (*(piVar11 + 0x1e4) != param_3) {
                                    if (iVar6 != 8) {
    //WARNING: Does not return
                                        pcVar4 = SoftwareBreakpoint(0x5512,0x800c8dc);
                                        (*pcVar4)();
                                    }
                                    goto code_r0x0800c7d4;
                                }
                                iVar12 = 7;
                            }
                        }
                    }
                }
            }
        }
    }
    if (piVar11 + iVar12 * 0x44 + 4 != NULL) {
        *param_4 = *(piVar11 + iVar12 * 0x44 + 0x14);
        free_irq(*(piVar11 + iVar12 * 0x44 + 0x14),piVar11 + iVar12 * 0x44 + 4);
        uVar7 = *(piVar11 + iVar12 * 0x44 + 0x44);
        (piVar11 + iVar12 * 0x44 + 0x14)[0] = -1;
        (piVar11 + iVar12 * 0x44 + 0x14)[1] = -1;
        wakeup_source_unregister(uVar7);
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
code_r0x0800c7d4:
    mutex_unlock(obj.gh_vm_mutex);
    return 0;
}


// ===== sym.__bpf_trace_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047a8 (size 8) =====

void sym.__bpf_trace_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.perf_trace_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047b0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.perf_trace_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (uint64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar9;
    uint64_t unaff_x30;
    unkbyte10 Var10;
    uchar auVar11 [16];
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar auStack_50 [12];
    uint32_t uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_44;
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_40);
        uVar6 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            param_3 = uStack_44;
            uVar8 = -1L << (uVar6 & 0x3f);
            uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar8 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = auStack_50;
            *(iStack_40 + 0x100) = uVar6;
            *(iStack_40 + 0x108) = 5;
            *(iVar4 + 8) = param_2;
            perf_trace_run_bpf_submit(iVar4,0x14,param_3,param_1,1,iStack_40,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    Var10 = __stack_chk_fail();
    iVar5 = Var10;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x800b0e8;
    uStack_78 = 0x800b0e8;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar9 = *(iVar5 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            param_4 = 0;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x0800b18c;
    }
    puVar7 = 0x10;
    iVar4 = trace_event_buffer_reserve(&uStack_b8,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = Var10 >> 0x40;
        *(iVar4 + 0xc) = param_3;
        trace_event_buffer_commit(&uStack_b8);
    }
code_r0x0800b18c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    Var10 = __stack_chk_fail();
    uVar6 = Var10;
    *extraout_x18_00 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_f8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar3 = SUB84(puVar7,0);
    iStack_110 = 0;
    uStack_114 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    ppuStack_100 = &puStack_80;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_114;
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_110,puVar7);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_110 + 0xe8) = &ppuStack_100;
            puVar7 = uStack_114;
            *(iStack_110 + 0xf8) = auStack_120;
            *(iStack_110 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x800b1c0;
            *(iStack_110 + 0x108) = 5;
            *(iVar4 + 8) = Var10 >> 0x40;
            *(iVar4 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar4,0x14,puVar7,uVar6,1,iStack_110,piVar1,0);
            param_4 = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_108) {
        auVar11 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar7 & 0xffff,param_4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047b8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    unkbyte10 Var11;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    code *pcStack_e0;
    int64_t *piStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c8;
    uchar auStack_c0 [12];
    uint32_t uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(param_1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        param_3 = 0x10;
        iVar6 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = param_2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar5 = auVar10._0_8_;
    *extraout_x18 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_98 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_b4;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_b0);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            param_3 = uStack_b4;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800afd8;
            *(iStack_b0 + 0x108) = 5;
            *(iVar6 + 8) = auVar10._8_8_;
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar6,0x14,param_3,uVar5,1,iStack_b0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return;
    }
    Var11 = __stack_chk_fail();
    iVar7 = Var11;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x800b0e8;
    uStack_e8 = 0x800b0e8;
    pcStack_e0 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar9 = *(iVar7 + 0x48);
    ppuStack_f0 = &puStack_a0;
    piStack_d8 = piVar1;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            uStack_d0 = auVar10._8_8_;
            uStack_c8 = uVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar10._8_8_ = uStack_d0;
            auVar10._0_8_ = uStack_c8;
        }
        uStack_d0 = auVar10._8_8_;
        uStack_c8 = auVar10._0_8_;
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 &&
            (uVar5 = trace_event_ignore_this_pid(iVar7), auVar10._8_8_ = uStack_d0, auVar10._0_8_ = uStack_c8,
            (uVar5 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_d0 = auVar10._8_8_;
    uStack_c8 = auVar10._0_8_;
    puVar8 = 0x10;
    iVar6 = trace_event_buffer_reserve(&uStack_128,iVar7);
    auVar10._8_8_ = uStack_d0;
    auVar10._0_8_ = uStack_c8;
    if (iVar6 != 0) {
        *(iVar6 + 8) = Var11 >> 0x40;
        *(iVar6 + 0xc) = param_3;
        trace_event_buffer_commit(&uStack_128);
        auVar10._8_8_ = uStack_d0;
        auVar10._0_8_ = uStack_c8;
    }
code_r0x0800b18c:
    uStack_d0 = auVar10._8_8_;
    uStack_c8 = auVar10._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    Var11 = __stack_chk_fail();
    uVar5 = Var11;
    *extraout_x18_01 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_168 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar6 = sp_el0;
    iStack_178 = *(iVar6 + 0x5e0);
    uVar3 = SUB84(puVar8,0);
    iStack_180 = 0;
    uStack_184 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    ppuStack_170 = &ppuStack_f0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_184;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_180,puVar8);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            puVar8 = uStack_184;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800b1c0;
            *(iStack_180 + 0x108) = 5;
            *(iVar6 + 8) = Var11 >> 0x40;
            *(iVar6 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar8,uVar5,1,iStack_180,piVar1,0);
            param_4 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_178) {
        auVar10 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_02 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar8 & 0xffff,param_4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.gh_unregister_vm_notifier.cfi_jt @ 0x080047c0 (size 8) =====

void sym.gh_unregister_vm_notifier.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister(obj.gh_vm_notifier,param_1);
    return;
}


// ===== sym.gh_register_vm_notifier.cfi_jt @ 0x080047c8 (size 8) =====

void sym.gh_register_vm_notifier.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_register(obj.gh_vm_notifier,param_1);
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x080047d0 (size 8) =====

void sym.perf_trace_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar4 = SUB84(param_3,0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_64;
        iVar5 = perf_trace_buf_alloc(0x1c,&iStack_60,param_3);
        uVar2 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            param_3 = uStack_64;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar2;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = uVar4;
            *(iVar5 + 0x10) = param_4;
            *(iVar5 + 0x14) = param_5;
            perf_trace_run_bpf_submit(iVar5,0x1c,param_3,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8006948;
    bpf_trace_run2(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,param_3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x080047d8 (size 8) =====

void sym.__bpf_trace_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x080047e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint uVar8;
    uint uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar10 = *(param_1 + 0x48);
    uVar8 = param_4;
    uVar9 = param_5;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar8 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar7 = 0x18;
    iVar5 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar5 != 0) {
        *(iVar5 + 8) = param_2;
        *(iVar5 + 0xc) = param_3;
        *(iVar5 + 0x10) = param_4;
        *(iVar5 + 0x14) = param_5;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080067e0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_c8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar3 = SUB84(puVar7,0);
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(iVar6 + 0x78);
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_e4;
        iVar5 = perf_trace_buf_alloc(0x1c,&iStack_e0,puVar7);
        uVar4 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar7 = uStack_e4;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8006818;
            *(iStack_e0 + 0x108) = 5;
            *(iVar5 + 8) = auVar11._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar8;
            *(iVar5 + 0x14) = uVar9;
            perf_trace_run_bpf_submit(iVar5,0x1c,puVar7,iVar6,1,iStack_e0,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_d8) {
        auVar12 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047e8 (size 8) =====

void sym.__bpf_trace_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (ulong param_1,ushort param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3);
    return;
}


// ===== sym.trace_event_raw_event_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,ushort param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    ulong unaff_x30;
    unkbyte10 Var9;
    uchar auVar10 [16];
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar8 = *(param_1 + 0x48);
    if ((uVar8 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar8 >> 7 & 1) != 0) {
            puVar7 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) != 0))))
        goto code_r0x0800b18c;
    }
    puVar7 = 0x10;
    iVar6 = trace_event_buffer_reserve(&uStack_68,param_1);
    if (iVar6 != 0) {
        *(iVar6 + 8) = param_2;
        *(iVar6 + 0xc) = param_3;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x0800b18c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    Var9 = __stack_chk_fail();
    uVar5 = Var9;
    *extraout_x18 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_a8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    uVar3 = SUB84(puVar7,0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_c4;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_c0,puVar7);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar7 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800b1c0;
            *(iStack_c0 + 0x108) = 5;
            *(iVar6 + 8) = Var9 >> 0x40;
            *(iVar6 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar7,uVar5,1,iStack_c0,piVar1,0);
            param_4 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_b8) {
        auVar10 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar7 & 0xffff,param_4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080047f8 (size 8) =====

void sym.perf_trace_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (uint64_t param_1,ushort param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar4 = SUB84(param_3,0);
    iStack_50 = 0;
    uStack_54 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_54;
        iVar5 = perf_trace_buf_alloc(0x14,&iStack_50,param_3);
        uVar2 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            param_3 = uStack_54;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = uVar4;
            perf_trace_run_bpf_submit(iVar5,0x14,param_3,param_1,1,iStack_50,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800b2e0;
    bpf_trace_run6(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,param_3 & 0xffff,param_4 & 0xffffffff);
    return;
}


// ===== sym.gh_populate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004800 (size 8) =====

int sym.gh_populate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(int16_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    int16_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_populate_vm_vpm_grp_info");
        return -6;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar2 = _segment.ehdr;
    if (*_segment.ehdr != param_1 && *_segment.ehdr != -1) {
        piVar2 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
            piVar2 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                piVar2 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                    piVar2 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((piVar2 == NULL) || (*piVar2 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar1 = *(piVar2 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar1) {
            if (-1 < param_3) {
                mutex_lock(obj.gh_vm_mutex);
                piVar2 = _segment.ehdr;
                if ((*_segment.ehdr != param_1) && (*_segment.ehdr != -1)) {
                    piVar2 = _segment.ehdr + 0x234;
                    if ((_segment.ehdr[0x234] != param_1) && (_segment.ehdr[0x234] != -1)) {
                        piVar2 = _segment.ehdr + 0x468;
                        if ((_segment.ehdr[0x468] != param_1) && (_segment.ehdr[0x468] != -1)) {
                            piVar2 = _segment.ehdr + 0x69c;
                            if (_segment.ehdr[0x69c] != -1 && _segment.ehdr[0x69c] != param_1) {
                                piVar2 = _segment.ehdr + 0x8d0;
                            }
                        }
                    }
                }
                if ((piVar2 == NULL) || (piVar2[0x232] != '\0')) {
                    iVar1 = 0;
                }
                else {
                    iVar1 = request_threaded_irq
                                      (param_3,sym.gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt,0,
                                       0,"gh_susp_res_irq",0);
                    if (iVar1 < 0) {
                        _printk(0x8002fdd,"gh_populate_vm_vpm_grp_info",iVar1);
                    }
                    else {
                        *(piVar2 + 0x22c) = param_2;
                        *(piVar2 + 0x230) = param_3;
                        *(piVar2 + 0x232) = 1;
                    }
                }
                mutex_unlock(obj.gh_vm_mutex);
                return iVar1;
            }
            _printk(0x800323d,"gh_populate_vm_vpm_grp_info");
            return -0x16;
        }
    }
    _printk(0x8003203,param_1);
    return 0;
}


// ===== sym.__traceiter_gh_susp_res_irq_handler.cfi_jt @ 0x08004808 (size 8) =====

ulong sym.__traceiter_gh_susp_res_irq_handler.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800db70;
    piVar1 = *0x800db70;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_raw_output_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004810 (size 8) =====

void sym.trace_raw_output_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"device %d inj_irq rc %d\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004818 (size 8) =====

void sym.trace_raw_output_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"ret=%d vm=%u vcpu=%u yield_time=%llu vcpu_state=%llu vcpu_suspend_state=%llu\n",1
                           ,*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004820 (size 8) =====

void sym.trace_raw_output_gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"vm=%u vcpu=%u\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004828 (size 8) =====

void sym.trace_raw_output_gh_virtio_backend_wait_event.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"device %d cur_evt/org_evt %x/%x, cur_evt_data/org_evt_data %x/%x\n",*(iVar2 + 8),
                           *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004830 (size 8) =====

void sym.trace_raw_output_gh_virtio_backend_irq.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"device %d irq (rc %d) event %x event_data %x\n",*(iVar2 + 8),*(iVar2 + 0x14),
                           *(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004838 (size 8) =====

void sym.trace_raw_output_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"device %d queue_notify on %d\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004840 (size 8) =====

void sym.trace_raw_output_gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"vpmg_state=%llu\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.perf_trace_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004848 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.perf_trace_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (uint64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,ulong param_6,
               ulong param_7)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong uVar11;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    unkbyte10 Var14;
    uchar auStack_210 [12];
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    ulong uStack_168;
    code *pcStack_160;
    int64_t *piStack_158;
    ulong uStack_150;
    uint64_t uStack_148;
    uchar auStack_140 [12];
    uint32_t uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    ulong uStack_110;
    ulong uStack_108;
    uchar auStack_100 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_90;
    uint64_t uStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    uVar3 = SUB82(param_3,0);
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    uVar7 = param_4;
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_74;
        iVar4 = perf_trace_buf_alloc(0x34,&iStack_70);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            param_3 = uStack_74;
            uVar8 = -1L << (uVar8 & 0x3f);
            uVar7 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar8 | unaff_x30;
            }
            *(iStack_70 + 0xf8) = auStack_80;
            *(iStack_70 + 0x100) = uVar7;
            *(iStack_70 + 0x108) = 5;
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0xc) = uVar3;
            *(iVar4 + 0x10) = param_4;
            *(iVar4 + 0x18) = param_5;
            *(iVar4 + 0x20) = param_6;
            *(iVar4 + 0x28) = param_7;
            uVar7 = param_1;
            perf_trace_run_bpf_submit(iVar4,0x34,param_3,param_1,1,iStack_70,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x800af08;
    uStack_a8 = 0x800af08;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar11 = *(iVar5 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar10 = uVar11;
    puStack_b0 = &stack0xffffffffffffffa0;
    uStack_a0 = param_6;
    uStack_90 = param_7;
    uStack_88 = param_1;
    if ((uVar10 >> 8 & 1) == 0) {
        if ((uVar10 >> 7 & 1) != 0) {
            param_3 = NULL;
            uVar7 = 0;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar10 >> 6 & 1) == 0) &&
           (((uVar10 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar5), (uVar8 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        param_3 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_e8,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar12._8_8_;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_118 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar8 + 0x78);
    ppuStack_120 = &puStack_b0;
    uStack_110 = param_5;
    uStack_108 = uVar11;
    auStack_100 = auVar12;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_134;
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_130);
        uVar9 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_130 + 0xe8) = &ppuStack_120;
            param_3 = uStack_134;
            *(iStack_130 + 0xf8) = auStack_140;
            *(iStack_130 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x800afd8;
            *(iStack_130 + 0x108) = 5;
            *(iVar4 + 8) = auVar13._8_8_;
            uVar7 = uVar8;
            perf_trace_run_bpf_submit(iVar4,0x14,param_3,uVar8,1,iStack_130,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_01 = 0x800b0e8;
    uStack_168 = 0x800b0e8;
    pcStack_160 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uVar9 = auVar12._8_8_ & 0xffffffff;
    uVar11 = *(iVar5 + 0x48);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uVar10 = uVar11;
    ppuStack_170 = &ppuStack_120;
    piStack_158 = piVar1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar6 = param_3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar6 = NULL;
            uVar7 = 0;
            uStack_150 = auVar13._8_8_;
            uStack_148 = uVar8;
            event_triggers_call(iVar5,0,0,0);
            auVar13._8_8_ = uStack_150;
            auVar13._0_8_ = uStack_148;
        }
        uStack_150 = auVar13._8_8_;
        uStack_148 = auVar13._0_8_;
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 &&
            (uVar8 = trace_event_ignore_this_pid(iVar5), auVar13._8_8_ = uStack_150, auVar13._0_8_ = uStack_148,
            (uVar8 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_150 = auVar13._8_8_;
    uStack_148 = auVar13._0_8_;
    puVar6 = 0x10;
    iVar4 = trace_event_buffer_reserve(&uStack_1a8,iVar5);
    auVar13._8_8_ = uStack_150;
    auVar13._0_8_ = uStack_148;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar12._8_2_;
        *(iVar4 + 0xc) = param_3;
        trace_event_buffer_commit(&uStack_1a8);
        auVar13._8_8_ = uStack_150;
        auVar13._0_8_ = uStack_148;
    }
code_r0x0800b18c:
    uStack_150 = auVar13._8_8_;
    uStack_148 = auVar13._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    Var14 = __stack_chk_fail();
    uVar8 = Var14;
    *extraout_x18_02 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_1e8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar4 = sp_el0;
    iStack_1f8 = *(iVar4 + 0x5e0);
    uVar2 = SUB84(puVar6,0);
    iStack_200 = 0;
    uStack_204 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar8 + 0x78);
    ppuStack_1f0 = &ppuStack_170;
    uStack_1e0 = param_4 & 0xffffffff;
    uStack_1d0 = uVar11;
    iStack_1c8 = iVar5;
    uStack_1c0 = uVar9;
    uStack_1b8 = param_3 & 0xffffffff;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar6 = &uStack_204;
        iVar4 = perf_trace_buf_alloc(0x14,&iStack_200,puVar6);
        uVar9 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            puVar6 = uStack_204;
            *(iStack_200 + 0xf8) = auStack_210;
            *(iStack_200 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x800b1c0;
            *(iStack_200 + 0x108) = 5;
            *(iVar4 + 8) = Var14 >> 0x40;
            *(iVar4 + 0xc) = uVar2;
            perf_trace_run_bpf_submit(iVar4,0x14,puVar6,uVar8,1,iStack_200,piVar1,0);
            uVar7 = uVar8;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1f8) {
        auVar12 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_03 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar6 & 0xffff,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004850 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800ae9c)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,ulong param_6,
               ulong param_7)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    ulong in_tmp_ldXn;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    ulong uVar11;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar13;
    uint32_t uVar14;
    ulong uVar15;
    ulong uVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    uchar auVar18 [16];
    uchar auVar19 [16];
    unkbyte10 Var20;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    uint64_t uStack_270;
    ulong uStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    ulong uStack_1f8;
    code *pcStack_1f0;
    int64_t *piStack_1e8;
    ulong uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    uchar auStack_190 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_120;
    uint64_t uStack_118;
    uchar auStack_110 [12];
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar14 = *(param_1 + 0x48);
    uVar10 = param_4;
    uVar16 = param_5;
    uVar11 = param_6;
    uVar12 = param_7;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(param_1), (uVar4 & 1) == 0))))
        goto code_r0x0800ad50;
    }
    else {
code_r0x0800ad50:
        puVar8 = 0x30;
        iVar5 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0xc) = param_3;
            *(iVar5 + 0x10) = param_4;
            *(iVar5 + 0x18) = param_5;
            *(iVar5 + 0x20) = param_6;
            *(iVar5 + 0x28) = param_7;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar17 = __stack_chk_fail();
    uVar7 = auVar17._0_8_;
    *extraout_x18 = sym.perf_trace_gh_hcall_vcpu_run;
    pcStack_e8 = sym.perf_trace_gh_hcall_vcpu_run;
    iVar5 = sp_el0;
    iStack_f8 = *(iVar5 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    uVar3 = SUB82(puVar8,0);
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    uVar4 = uVar10;
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_104;
        iVar5 = perf_trace_buf_alloc(0x34,&iStack_100);
        uVar13 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_100 + 0xe8) = &puStack_f0;
            puVar8 = uStack_104;
            *(iStack_100 + 0xf8) = auStack_110;
            *(iStack_100 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800adbc;
            *(iStack_100 + 0x108) = 5;
            *(iVar5 + 8) = auVar17._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar10;
            *(iVar5 + 0x18) = uVar16;
            *(iVar5 + 0x20) = uVar11;
            *(iVar5 + 0x28) = uVar12;
            uVar4 = uVar7;
            perf_trace_run_bpf_submit(iVar5,0x34,puVar8,uVar7,1,iStack_100,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x800af08;
    uStack_138 = 0x800af08;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    uVar15 = *(iVar6 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar14 = uVar15;
    ppuStack_140 = &puStack_f0;
    uStack_130 = uVar11;
    uStack_120 = uVar12;
    uStack_118 = uVar7;
    if ((uVar14 >> 8 & 1) == 0) {
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar4 = 0;
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        puVar8 = 0x10;
        iVar5 = trace_event_buffer_reserve(&uStack_178,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar18._8_8_;
            trace_event_buffer_commit(&uStack_178);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_148) {
        return;
    }
    auVar19 = __stack_chk_fail();
    uVar7 = auVar19._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_1a8 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar5 = sp_el0;
    iStack_1b8 = *(iVar5 + 0x5e0);
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_1b0 = &ppuStack_140;
    uStack_1a0 = uVar16;
    uStack_198 = uVar15;
    auStack_190 = auVar18;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_1c4;
        iVar5 = perf_trace_buf_alloc(0x14,&iStack_1c0);
        uVar13 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar8 = uStack_1c4;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800afd8;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar5 + 8) = auVar19._8_8_;
            uVar4 = uVar7;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar7,1,iStack_1c0,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._0_8_;
    uVar16 = tpidr_el2;
    *extraout_x18_02 = 0x800b0e8;
    uStack_1f8 = 0x800b0e8;
    pcStack_1f0 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar5 = sp_el0;
    iStack_208 = *(iVar5 + 0x5e0);
    uVar13 = auVar18._8_8_ & 0xffffffff;
    uVar16 = *(iVar6 + 0x48);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar14 = uVar16;
    ppuStack_200 = &ppuStack_1b0;
    piStack_1e8 = piVar1;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar4 = 0;
            uStack_1e0 = auVar19._8_8_;
            uStack_1d8 = uVar7;
            event_triggers_call(iVar6,0,0,0);
            auVar19._8_8_ = uStack_1e0;
            auVar19._0_8_ = uStack_1d8;
        }
        uStack_1e0 = auVar19._8_8_;
        uStack_1d8 = auVar19._0_8_;
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 &&
            (uVar7 = trace_event_ignore_this_pid(iVar6), auVar19._8_8_ = uStack_1e0, auVar19._0_8_ = uStack_1d8,
            (uVar7 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_1e0 = auVar19._8_8_;
    uStack_1d8 = auVar19._0_8_;
    puVar9 = 0x10;
    iVar5 = trace_event_buffer_reserve(&uStack_238,iVar6);
    auVar19._8_8_ = uStack_1e0;
    auVar19._0_8_ = uStack_1d8;
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar18._8_2_;
        *(iVar5 + 0xc) = puVar8;
        trace_event_buffer_commit(&uStack_238);
        auVar19._8_8_ = uStack_1e0;
        auVar19._0_8_ = uStack_1d8;
    }
code_r0x0800b18c:
    uStack_1e0 = auVar19._8_8_;
    uStack_1d8 = auVar19._0_8_;
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_208) {
        return;
    }
    Var20 = __stack_chk_fail();
    uVar7 = Var20;
    *extraout_x18_03 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_278 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar5 = sp_el0;
    iStack_288 = *(iVar5 + 0x5e0);
    uVar2 = SUB84(puVar9,0);
    iStack_290 = 0;
    uStack_294 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_280 = &ppuStack_200;
    uStack_270 = uVar10 & 0xffffffff;
    uStack_260 = uVar16;
    iStack_258 = iVar6;
    uStack_250 = uVar13;
    uStack_248 = puVar8 & 0xffffffff;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_294;
        iVar5 = perf_trace_buf_alloc(0x14,&iStack_290,puVar9);
        uVar10 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_290 + 0xe8) = &ppuStack_280;
            puVar9 = uStack_294;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800b1c0;
            *(iStack_290 + 0x108) = 5;
            *(iVar5 + 8) = Var20 >> 0x40;
            *(iVar5 + 0xc) = uVar2;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar7,1,iStack_290,piVar1,0);
            uVar4 = uVar7;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_288) {
        auVar18 = __stack_chk_fail();
        uVar16 = tpidr_el2;
        *extraout_x18_04 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar9 & 0xffff,uVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004858 (size 8) =====

void sym.__bpf_trace_gh_hcall_vcpu_run.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
               (ulong param_1,uint param_2,ushort param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run6(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08004860 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.perf_trace_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004868 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt
               (uint64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint uVar10;
    uint uVar11;
    uint64_t uVar12;
    uint uVar13;
    uint uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    ulong **ppuStack_230;
    code *pcStack_228;
    uint64_t uStack_220;
    ulong uStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    if ((*(param_1 + 0x80) != 0) || (puVar8 = param_3, *(iVar3 + *(param_1 + 0x78)) != 0)) {
        puVar8 = &uStack_54;
        iVar3 = perf_trace_buf_alloc(0x14,&uStack_50);
        uVar12 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar8 = uStack_54;
            uVar17 = -1L << (uVar12 & 0x3f);
            param_5 = 1;
            uVar12 = (~uVar17 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar17 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = auStack_60;
            *(uStack_50 + 0x100) = uVar12;
            *(uStack_50 + 0x108) = 5;
            *(iVar3 + 8) = param_2;
            *(iVar3 + 0xc) = param_3;
            param_6 = uStack_50;
            perf_trace_run_bpf_submit(iVar3,0x14);
            param_4 = param_1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006500;
    uStack_a8 = 0x8006500;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar22 = *(iVar4 + 0x48);
    uVar12 = param_4;
    uVar17 = param_5;
    uVar16 = param_6;
    puStack_b0 = &stack0xffffffffffffffc0;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar9 = 0x1c;
        iVar3 = trace_event_buffer_reserve(&uStack_e8,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar8;
            *(iVar3 + 0x10) = param_4;
            *(iVar3 + 0x14) = param_5;
            *(iVar3 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_138 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar3 = sp_el0;
    iStack_148 = *(iVar3 + 0x5e0);
    uVar18 = uVar16 & 0xffffffff;
    uVar19 = uVar17 & 0xffffffff;
    uVar20 = uVar12 & 0xffffffff;
    uVar21 = puVar9 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(uVar6 + 0x78);
    uVar5 = uVar12;
    uVar15 = uVar17;
    ppuStack_140 = &puStack_b0;
    if ((*(uVar6 + 0x80) != 0) || (puVar8 = puVar9, *piVar1 != 0)) {
        puVar8 = &uStack_154;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_150);
        uVar2 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_150 + 0xe8) = &ppuStack_140;
            puVar8 = uStack_154;
            uVar15 = 1;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_150 + 0x108) = 5;
            *(iVar3 + 8) = auVar26._8_4_;
            *(iVar3 + 0xc) = puVar9;
            *(iVar3 + 0x10) = uVar12;
            *(iVar3 + 0x14) = uVar17;
            *(iVar3 + 0x18) = uVar16;
            uVar5 = uVar6;
            perf_trace_run_bpf_submit(iVar3,0x1c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar4 = auVar26._0_8_;
    uVar10 = uVar5;
    uVar13 = uVar15;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006730;
    uStack_198 = 0x8006730;
    iVar3 = sp_el0;
    iStack_1a8 = *(iVar3 + 0x5e0);
    uVar12 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar4 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar22 = uVar23;
    uVar14 = uVar13;
    uVar11 = uVar10;
    ppuStack_1a0 = &ppuStack_140;
    piStack_190 = piVar1;
    uStack_188 = uVar21;
    uStack_180 = uVar20;
    uStack_178 = uVar19;
    uStack_170 = uVar18;
    uStack_168 = uVar6;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar17 = trace_event_ignore_this_pid(iVar4), (uVar17 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar9 = 0x18;
    iVar3 = trace_event_buffer_reserve(&uStack_1d8,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar26._8_4_;
        *(iVar3 + 0xc) = puVar8;
        *(iVar3 + 0x10) = uVar10;
        *(iVar3 + 0x14) = uVar13;
        trace_event_buffer_commit(&uStack_1d8);
    }
code_r0x080067e0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_228 = sym.perf_trace_gh_virtio_backend_irq;
    iVar3 = sp_el0;
    iStack_238 = *(iVar3 + 0x5e0);
    uVar10 = SUB84(puVar9,0);
    iStack_240 = 0;
    uStack_244 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar7 + 0x78);
    ppuStack_230 = &ppuStack_1a0;
    uStack_220 = uVar24;
    uStack_210 = uVar23;
    iStack_208 = iVar4;
    uStack_200 = uVar12;
    uStack_1f8 = puVar8 & 0xffffffff;
    uStack_1f0 = uVar5 & 0xffffffff;
    uStack_1e8 = uVar15 & 0xffffffff;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_244;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_240,puVar9);
        uVar12 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_240 + 0xe8) = &ppuStack_230;
            puVar9 = uStack_244;
            *(iStack_240 + 0xf8) = auStack_250;
            *(iStack_240 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8006818;
            *(iStack_240 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = uVar10;
            *(iVar3 + 0x10) = uVar11;
            *(iVar3 + 0x14) = uVar14;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar9,iVar7,1,iStack_240,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_238) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_03 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar9 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004870 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080062bc)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    ulong uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    uint64_t uStack_360;
    ulong uStack_350;
    int64_t iStack_348;
    uint64_t uStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    int64_t iStack_2e8;
    ulong **ppuStack_2e0;
    ulong uStack_2d8;
    int64_t *piStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    code *pcStack_170;
    ulong uStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t *piStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(param_1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x080061a0;
    }
    else {
code_r0x080061a0:
        puVar8 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0xc) = param_3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar3 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_irq_inj;
    pcStack_a8 = sym.perf_trace_gh_virtio_backend_irq_inj;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar16 = puVar8 & 0xffffffff;
    uVar19 = auVar26._8_8_ & 0xffffffff;
    uStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar3 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar3 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_c0);
        uVar17 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_c0 + 0xe8) = &puStack_b0;
            puVar9 = uStack_c4;
            param_5 = 1;
            *(uStack_c0 + 0xf8) = auStack_d0;
            *(uStack_c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80061f4;
            *(uStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar8;
            param_4 = uVar3;
            param_6 = uStack_c0;
            perf_trace_run_bpf_submit(iVar4,0x14);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar22 = tpidr_el2;
    *extraout_x18_00 = 0x8006310;
    uStack_f8 = 0x8006310;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar22 = *(iVar5 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar21 = uVar22;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    uStack_e8 = uVar19;
    uStack_e0 = uVar16;
    uStack_d8 = uVar3;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar5), (uVar3 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar8 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_138,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar9;
            trace_event_buffer_commit(&uStack_138);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar3 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_178 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_170 = sym.perf_trace_gh_virtio_backend_irq_inj;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    uStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    ppuStack_180 = &ppuStack_100;
    uStack_160 = uVar22;
    iStack_158 = iVar5;
    uStack_150 = uVar17;
    uStack_148 = puVar9 & 0xffffffff;
    if ((*(uVar3 + 0x80) != 0) || (puVar10 = puVar8, *(iVar4 + *(uVar3 + 0x78)) != 0)) {
        puVar10 = &uStack_194;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_190);
        uVar16 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_190 + 0xe8) = &ppuStack_180;
            puVar10 = uStack_194;
            param_5 = 1;
            *(uStack_190 + 0xf8) = auStack_1a0;
            *(uStack_190 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x80063e4;
            *(uStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = puVar8;
            param_6 = uStack_190;
            perf_trace_run_bpf_submit(iVar4,0x14);
            param_4 = uVar3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar5 = auVar27._0_8_;
    uVar22 = tpidr_el2;
    *extraout_x18_02 = 0x8006500;
    uStack_1e8 = 0x8006500;
    iVar4 = sp_el0;
    iStack_1f8 = *(iVar4 + 0x5e0);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar21 = *(iVar5 + 0x48);
    uVar3 = param_4;
    uVar16 = param_5;
    uVar19 = param_6;
    ppuStack_1f0 = &ppuStack_180;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar3 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar5), (uVar17 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar8 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_228,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = puVar10;
            *(iVar4 + 0x10) = param_4;
            *(iVar4 + 0x14) = param_5;
            *(iVar4 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_228);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_278 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_288 = *(iVar4 + 0x5e0);
    uVar18 = uVar19 & 0xffffffff;
    uVar20 = uVar16 & 0xffffffff;
    uVar23 = uVar3 & 0xffffffff;
    uVar24 = puVar8 & 0xffffffff;
    iStack_290 = 0;
    uStack_294 = 0;
    uVar25 = auVar26._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar17 = uVar3;
    uVar15 = uVar16;
    ppuStack_280 = &ppuStack_1f0;
    if ((*(uVar6 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_294;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_290);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_290 + 0xe8) = &ppuStack_280;
            puVar9 = uStack_294;
            uVar15 = 1;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_290 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar8;
            *(iVar4 + 0x10) = uVar3;
            *(iVar4 + 0x14) = uVar16;
            *(iVar4 + 0x18) = uVar19;
            uVar17 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar11 = uVar17;
    uVar13 = uVar15;
    uVar22 = tpidr_el2;
    *extraout_x18_04 = 0x8006730;
    uStack_2d8 = 0x8006730;
    iVar4 = sp_el0;
    iStack_2e8 = *(iVar4 + 0x5e0);
    uVar3 = auVar26._8_8_ & 0xffffffff;
    uVar22 = *(iVar5 + 0x48);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uVar21 = uVar22;
    uVar14 = uVar13;
    uVar12 = uVar11;
    ppuStack_2e0 = &ppuStack_280;
    piStack_2d0 = piVar1;
    uStack_2c8 = uVar24;
    uStack_2c0 = uVar23;
    uStack_2b8 = uVar20;
    uStack_2b0 = uVar18;
    uStack_2a8 = uVar6;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar5), (uVar16 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar8 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_318,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar26._8_4_;
        *(iVar4 + 0xc) = puVar9;
        *(iVar4 + 0x10) = uVar11;
        *(iVar4 + 0x14) = uVar13;
        trace_event_buffer_commit(&uStack_318);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_368 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_378 = *(iVar4 + 0x5e0);
    uVar11 = SUB84(puVar8,0);
    iStack_380 = 0;
    uStack_384 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_370 = &ppuStack_2e0;
    uStack_360 = uVar25;
    uStack_350 = uVar22;
    iStack_348 = iVar5;
    uStack_340 = uVar3;
    uStack_338 = puVar9 & 0xffffffff;
    uStack_330 = uVar17 & 0xffffffff;
    uStack_328 = uVar15 & 0xffffffff;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_384;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_380,puVar8);
        uVar3 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_380 + 0xe8) = &ppuStack_370;
            puVar8 = uStack_384;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006818;
            *(iStack_380 + 0x108) = 5;
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = uVar11;
            *(iVar4 + 0x10) = uVar12;
            *(iVar4 + 0x14) = uVar14;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar7,1,iStack_380,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_378) {
        auVar26 = __stack_chk_fail();
        uVar22 = tpidr_el2;
        *extraout_x18_06 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004878 (size 8) =====

void sym.__bpf_trace_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt
               (ulong param_1,uint param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004880 (size 8) =====

void sym.__bpf_trace_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt
               (ulong param_1,uint param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3);
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004888 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_queue_notify.1016b347f3458ea20e90756fd466f079.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_280;
    int64_t iStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar20 = *(param_1 + 0x48);
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar10 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = param_2;
            *(iVar4 + 0xc) = param_3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar3 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_a8 = sym.perf_trace_gh_virtio_backend_queue_notify;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar3 + 0x80) != 0) || (puVar11 = puVar10, *(iVar4 + *(uVar3 + 0x78)) != 0)) {
        puVar11 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_c0);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_c0 + 0xe8) = &puStack_b0;
            puVar11 = uStack_c4;
            param_5 = 1;
            *(uStack_c0 + 0xf8) = auStack_d0;
            *(uStack_c0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x80063e4;
            *(uStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar10;
            param_6 = uStack_c0;
            perf_trace_run_bpf_submit(iVar4,0x14);
            param_4 = uVar3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar5 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_00 = 0x8006500;
    uStack_118 = 0x8006500;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar20 = *(iVar5 + 0x48);
    uVar3 = param_4;
    uVar8 = param_5;
    uVar17 = param_6;
    ppuStack_120 = &puStack_b0;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar3 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar10 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_158,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar11;
            *(iVar4 + 0x10) = param_4;
            *(iVar4 + 0x14) = param_5;
            *(iVar4 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_158);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar7 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_1a8 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar19 = uVar8 & 0xffffffff;
    uVar21 = uVar3 & 0xffffffff;
    uVar22 = puVar10 & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar7 + 0x78);
    uVar6 = uVar3;
    uVar16 = uVar8;
    ppuStack_1b0 = &ppuStack_120;
    if ((*(uVar7 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_1c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_1c0);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar11 = uStack_1c4;
            uVar16 = 1;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar10;
            *(iVar4 + 0x10) = uVar3;
            *(iVar4 + 0x14) = uVar8;
            *(iVar4 + 0x18) = uVar17;
            uVar6 = uVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar12 = uVar6;
    uVar14 = uVar16;
    uVar23 = tpidr_el2;
    *extraout_x18_02 = 0x8006730;
    uStack_208 = 0x8006730;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    uVar3 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar5 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar20 = uVar23;
    uVar15 = uVar14;
    uVar13 = uVar12;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar1;
    uStack_1f8 = uVar22;
    uStack_1f0 = uVar21;
    uStack_1e8 = uVar19;
    uStack_1e0 = uVar18;
    uStack_1d8 = uVar7;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(iVar5), (uVar8 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar10 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_248,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar26._8_4_;
        *(iVar4 + 0xc) = puVar11;
        *(iVar4 + 0x10) = uVar12;
        *(iVar4 + 0x14) = uVar14;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar9 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_298 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_2a8 = *(iVar4 + 0x5e0);
    uVar12 = SUB84(puVar10,0);
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar9 + 0x78);
    ppuStack_2a0 = &ppuStack_210;
    uStack_290 = uVar24;
    uStack_280 = uVar23;
    iStack_278 = iVar5;
    uStack_270 = uVar3;
    uStack_268 = puVar11 & 0xffffffff;
    uStack_260 = uVar6 & 0xffffffff;
    uStack_258 = uVar16 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_2b4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_2b0,puVar10);
        uVar3 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_2b0 + 0xe8) = &ppuStack_2a0;
            puVar10 = uStack_2b4;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            *(iStack_2b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006818;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x10) = uVar13;
            *(iVar4 + 0x14) = uVar15;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar10,iVar9,1,iStack_2b0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_2a8) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_04 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x08004890 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_irq_inj.1016b347f3458ea20e90756fd466f079.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,
               uint64_t param_6)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_320 [12];
    uint32_t uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    ulong **ppuStack_300;
    code *pcStack_2f8;
    uint64_t uStack_2f0;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    ulong uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    ulong uStack_178;
    uchar auStack_130 [12];
    uint32_t uStack_124;
    uint64_t uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uVar16 = param_3 & 0xffffffff;
    uVar18 = param_2;
    uStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar7 = param_3, *piVar1 != 0)) {
        puVar7 = &uStack_54;
        iVar3 = perf_trace_buf_alloc(0x14,&uStack_50);
        uVar14 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar15 = -1L << (uVar14 & 0x3f);
            param_5 = 1;
            uVar14 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar14 = uVar15 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = auStack_60;
            *(uStack_50 + 0x100) = uVar14;
            *(uStack_50 + 0x108) = 5;
            *(iVar3 + 8) = param_2;
            *(iVar3 + 0xc) = param_3;
            param_4 = param_1;
            param_6 = uStack_50;
            perf_trace_run_bpf_submit(iVar3,0x14);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006310;
    uStack_88 = 0x8006310;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar20 = *(iVar4 + 0x48);
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    uStack_78 = uVar18;
    uStack_70 = uVar16;
    uStack_68 = param_1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            param_4 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar4), (uVar16 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar8 = 0x10;
        iVar3 = trace_event_buffer_reserve(&uStack_c8,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar7;
            trace_event_buffer_commit(&uStack_c8);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_108 = sym.perf_trace_gh_virtio_backend_queue_notify;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    uStack_120 = 0;
    uStack_124 = 0;
    iVar3 = tpidr_el1;
    ppuStack_110 = &puStack_90;
    if ((*(uVar16 + 0x80) != 0) || (puVar7 = puVar8, *(iVar3 + *(uVar16 + 0x78)) != 0)) {
        puVar7 = &uStack_124;
        iVar3 = perf_trace_buf_alloc(0x14,&uStack_120);
        uVar18 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_120 + 0xe8) = &ppuStack_110;
            puVar7 = uStack_124;
            param_5 = 1;
            *(uStack_120 + 0xf8) = auStack_130;
            *(uStack_120 + 0x100) = ~(-1L << (uVar18 & 0x3f)) & 0x80063e4;
            *(uStack_120 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar8;
            param_6 = uStack_120;
            perf_trace_run_bpf_submit(iVar3,0x14);
            param_4 = uVar16;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_118) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006500;
    uStack_178 = 0x8006500;
    iVar3 = sp_el0;
    iStack_188 = *(iVar3 + 0x5e0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar20 = *(iVar4 + 0x48);
    uVar16 = param_4;
    uVar18 = param_5;
    uVar14 = param_6;
    ppuStack_180 = &ppuStack_110;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar4), (uVar15 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar8 = 0x1c;
        iVar3 = trace_event_buffer_reserve(&uStack_1b8,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar7;
            *(iVar3 + 0x10) = param_4;
            *(iVar3 + 0x14) = param_5;
            *(iVar3 + 0x18) = param_6;
            trace_event_buffer_commit(&uStack_1b8);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_188) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar5 = auVar26._0_8_;
    *extraout_x18_02 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_208 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar3 = sp_el0;
    iStack_218 = *(iVar3 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar19 = uVar18 & 0xffffffff;
    uVar21 = uVar16 & 0xffffffff;
    uVar22 = puVar8 & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(uVar5 + 0x78);
    uVar15 = uVar16;
    uVar13 = uVar18;
    ppuStack_210 = &ppuStack_180;
    if ((*(uVar5 + 0x80) != 0) || (puVar7 = puVar8, *piVar1 != 0)) {
        puVar7 = &uStack_224;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_220);
        uVar2 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_220 + 0xe8) = &ppuStack_210;
            puVar7 = uStack_224;
            uVar13 = 1;
            *(iStack_220 + 0xf8) = auStack_230;
            *(iStack_220 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_220 + 0x108) = 5;
            *(iVar3 + 8) = auVar26._8_4_;
            *(iVar3 + 0xc) = puVar8;
            *(iVar3 + 0x10) = uVar16;
            *(iVar3 + 0x14) = uVar18;
            *(iVar3 + 0x18) = uVar14;
            uVar15 = uVar5;
            perf_trace_run_bpf_submit(iVar3,0x1c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_218) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar4 = auVar26._0_8_;
    uVar9 = uVar15;
    uVar11 = uVar13;
    uVar23 = tpidr_el2;
    *extraout_x18_03 = 0x8006730;
    uStack_268 = 0x8006730;
    iVar3 = sp_el0;
    iStack_278 = *(iVar3 + 0x5e0);
    uVar16 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar4 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar20 = uVar23;
    uVar12 = uVar11;
    uVar10 = uVar9;
    ppuStack_270 = &ppuStack_210;
    piStack_260 = piVar1;
    uStack_258 = uVar22;
    uStack_250 = uVar21;
    uStack_248 = uVar19;
    uStack_240 = uVar17;
    uStack_238 = uVar5;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar4), (uVar18 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar8 = 0x18;
    iVar3 = trace_event_buffer_reserve(&uStack_2a8,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar26._8_4_;
        *(iVar3 + 0xc) = puVar7;
        *(iVar3 + 0x10) = uVar9;
        *(iVar3 + 0x14) = uVar11;
        trace_event_buffer_commit(&uStack_2a8);
    }
code_r0x080067e0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_278) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_2f8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar3 = sp_el0;
    iStack_308 = *(iVar3 + 0x5e0);
    uVar9 = SUB84(puVar8,0);
    iStack_310 = 0;
    uStack_314 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar6 + 0x78);
    ppuStack_300 = &ppuStack_270;
    uStack_2f0 = uVar24;
    uStack_2e0 = uVar23;
    iStack_2d8 = iVar4;
    uStack_2d0 = uVar16;
    uStack_2c8 = puVar7 & 0xffffffff;
    uStack_2c0 = uVar15 & 0xffffffff;
    uStack_2b8 = uVar13 & 0xffffffff;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_314;
        iVar3 = perf_trace_buf_alloc(0x1c,&iStack_310,puVar8);
        uVar16 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_310 + 0xe8) = &ppuStack_300;
            puVar8 = uStack_314;
            *(iStack_310 + 0xf8) = auStack_320;
            *(iStack_310 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x8006818;
            *(iStack_310 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = uVar9;
            *(iVar3 + 0x10) = uVar10;
            *(iVar3 + 0x14) = uVar12;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar8,iVar6,1,iStack_310,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_308) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_05 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x08004898 (size 8) =====

ulong sym.gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_vm_lock);
    if (((param_2 != NULL) && (*param_2 != 0)) && (*(*param_2 + 0x448) != '\0')) {
        *(param_2 + 0x14) = 1;
        __wake_up(param_2 + 0xd,3,1,0);
    }
    _raw_spin_unlock(obj.gh_vm_lock);
    return 1;
}


// ===== sym.gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080048a0 (size 8) =====

ulong sym.gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt(int param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(_segment.ehdr + 0x460) == param_1) {
        uVar3 = *(_segment.ehdr + 0x458);
    }
    else {
        uVar3 = 0;
    }
    if (*(_segment.ehdr + 0x8c8) == param_1) {
        uVar3 = *(_segment.ehdr + 0x8c0);
    }
    if (*(_segment.ehdr + 0xd30) == param_1) {
        uVar3 = *(_segment.ehdr + 0xd28);
    }
    if (*(_segment.ehdr + 0x1198) == param_1) {
        uVar3 = *(_segment.ehdr + 0x1190);
    }
    if (*(_segment.ehdr + 0x1600) == param_1) {
        uVar3 = *(_segment.ehdr + 0x15f8);
    }
    CallHyperVisor(0x6045);
    uStack_40 = 0;
    if (uVar3 == 0) {
        puVar5 = NULL;
        _printk(0x8001ec2,0,uVar3,0,0,0,0,0);
    }
    else {
        _printk(0x80029c2,uVar3,uVar3,0,0,0,0,0);
    }
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar6 = *0x800db70;
            piVar4 = *0x800db70;
            while (piVar4 != NULL) {
                (**piVar6)(piVar6[1],puVar5);
                piVar6 = piVar6 + 3;
                piVar4 = *piVar6;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.vdev_interrupt.1016b347f3458ea20e90756fd466f079.cfi_jt @ 0x080048a8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08009d3c)
//WARNING: Removing unreachable block (ram,0x08009d54)
//WARNING: Removing unreachable block (ram,0x08009d6c)
//WARNING: Removing unreachable block (ram,0x08009d5c)
//WARNING: Removing unreachable block (ram,0x08009da0)

ulong sym.vdev_interrupt.1016b347f3458ea20e90756fd466f079.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    CallHyperVisor(0x6053);
    uVar1 = *(param_2 + 0x7c);
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iVar5) {
        uVar4 = __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            piVar7 = *0x800dae0;
            piVar6 = *0x800dae0;
            while (piVar6 != NULL) {
                (**piVar7)(piVar7[1],uVar1,0,0,uVar4);
                piVar7 = piVar7 + 3;
                piVar6 = *piVar7;
            }
            iVar2 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar2;
            if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.__traceiter_gh_virtio_backend_irq.cfi_jt @ 0x080048b0 (size 8) =====

ulong sym.__traceiter_gh_virtio_backend_irq.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800dae0;
    piVar1 = *0x800dae0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.gh_unpopulate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt @ 0x080048b8 (size 8) =====

ulong sym.gh_unpopulate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt
                (int16_t param_1,ulong param_2,int64_t param_3,uint *param_4)

{
    int iVar1;
    int16_t *piVar2;
    code *pcVar3;
    ulong uVar4;
    int16_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return 0xfffffffa;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar5 = piVar2;
    if (*piVar2 != param_1 && *piVar2 != -1) {
        piVar5 = piVar2 + 0x234;
        if ((piVar2[0x234] != param_1) && (piVar2[0x234] != -1)) {
            piVar5 = piVar2 + 0x468;
            if ((piVar2[0x468] != param_1) && (piVar2[0x468] != -1)) {
                piVar5 = piVar2 + 0x69c;
                if (piVar2[0x69c] != -1 && piVar2[0x69c] != param_1) {
                    piVar5 = piVar2 + 0x8d0;
                }
            }
        }
    }
    if ((piVar5 == NULL) || (*piVar5 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
code_r0x0800c7b8:
        _printk(0x8002980,param_1);
        return 0;
    }
    iVar1 = *(piVar5 + 2);
    mutex_unlock(obj.gh_vm_mutex);
    if (iVar1 < 1) goto code_r0x0800c7b8;
    mutex_lock(obj.gh_vm_mutex);
    piVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar5 = piVar2;
    if ((*piVar2 != param_1) && (*piVar2 != -1)) {
        piVar5 = piVar2 + 0x234;
        if ((piVar2[0x234] != param_1) && (piVar2[0x234] != -1)) {
            piVar5 = piVar2 + 0x468;
            if ((piVar2[0x468] != param_1) && (piVar2[0x468] != -1)) {
                piVar5 = piVar2 + 0x69c;
                if (piVar2[0x69c] != -1 && piVar2[0x69c] != param_1) {
                    piVar5 = piVar2 + 0x8d0;
                }
            }
        }
    }
    if (((piVar5 == NULL) || (piVar5[0x224] == '\0')) || (iVar1 = *(piVar5 + 2), iVar1 < 1)) goto code_r0x0800c7d4;
    if (*(piVar5 + 8) == param_3) {
        iVar6 = 0;
    }
    else {
        if (iVar1 == 1) goto code_r0x0800c7d4;
        if (*(piVar5 + 0x4c) == param_3) {
            iVar6 = 1;
        }
        else {
            if (iVar1 == 2) goto code_r0x0800c7d4;
            if (*(piVar5 + 0x90) == param_3) {
                iVar6 = 2;
            }
            else {
                if (iVar1 == 3) goto code_r0x0800c7d4;
                if (*(piVar5 + 0xd4) == param_3) {
                    iVar6 = 3;
                }
                else {
                    if (iVar1 == 4) goto code_r0x0800c7d4;
                    if (*(piVar5 + 0x118) == param_3) {
                        iVar6 = 4;
                    }
                    else {
                        if (iVar1 == 5) goto code_r0x0800c7d4;
                        if (*(piVar5 + 0x15c) == param_3) {
                            iVar6 = 5;
                        }
                        else {
                            if (iVar1 == 6) goto code_r0x0800c7d4;
                            if (*(piVar5 + 0x1a0) == param_3) {
                                iVar6 = 6;
                            }
                            else {
                                if (iVar1 == 7) goto code_r0x0800c7d4;
                                if (*(piVar5 + 0x1e4) != param_3) {
                                    if (iVar1 != 8) {
    //WARNING: Does not return
                                        pcVar3 = SoftwareBreakpoint(0x5512,0x800c8dc);
                                        (*pcVar3)();
                                    }
                                    goto code_r0x0800c7d4;
                                }
                                iVar6 = 7;
                            }
                        }
                    }
                }
            }
        }
    }
    if (piVar5 + iVar6 * 0x44 + 4 != NULL) {
        *param_4 = *(piVar5 + iVar6 * 0x44 + 0x14);
        free_irq(*(piVar5 + iVar6 * 0x44 + 0x14),piVar5 + iVar6 * 0x44 + 4);
        uVar4 = *(piVar5 + iVar6 * 0x44 + 0x44);
        (piVar5 + iVar6 * 0x44 + 0x14)[0] = -1;
        (piVar5 + iVar6 * 0x44 + 0x14)[1] = -1;
        wakeup_source_unregister(uVar4);
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
code_r0x0800c7d4:
    mutex_unlock(obj.gh_vm_mutex);
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_irq_inj.cfi_jt @ 0x080048c0 (size 8) =====

ulong sym.__traceiter_gh_virtio_backend_irq_inj.cfi_jt(ulong param_1,uint param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800da08;
    piVar1 = *0x800da08;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_queue_notify.cfi_jt @ 0x080048c8 (size 8) =====

ulong sym.__traceiter_gh_virtio_backend_queue_notify.cfi_jt(ulong param_1,uint param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800da50;
    piVar1 = *0x800da50;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.gh_vm_release.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x080048d0 (size 8) =====

ulong sym.gh_vm_release.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0xd8);
    piVar1 = arg1 + 0x9c;
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
        sym.gh_destroy_vm(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return 0;
}


// ===== sym.gh_vcpu_release.fc5859ae27bea53546df851ae32ba2aa.cfi_jt @ 0x080048d8 (size 8) =====

ulong sym.gh_vcpu_release.fc5859ae27bea53546df851ae32ba2aa.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_2 + 0xd8) + 8);
    piVar1 = arg1 + 0x9c;
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
        sym.gh_destroy_vm(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return 0;
}


// ===== sym.gh_register_vm_notifier @ 0x080048e0 (size 48) =====

void sym.gh_register_vm_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_register(obj.gh_vm_notifier,arg1);
    return;
}


// ===== sym.gh_unregister_vm_notifier @ 0x08004910 (size 48) =====

void sym.gh_unregister_vm_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    srcu_notifier_chain_unregister(obj.gh_vm_notifier,arg1);
    return;
}


// ===== sym.gh_wait_for_vm_status @ 0x08004940 (size 268) =====

uint64_t sym.gh_wait_for_vm_status(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    code *pcVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    if (*(arg1 + 0x78) == arg2) {
        uVar7 = 0;
    }
    else {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        init_wait_entry(&uStack_60,0);
        iVar6 = arg1 + 0x80;
        uVar7 = prepare_to_wait_event(iVar6,&uStack_60,1);
        uVar3 = *(arg1 + 0x78);
        while (uVar3 != arg2) {
            if (uVar7 != 0) {
                if (uVar7 < 0) {
                    _printk(0x80021ec,arg2);
                }
                goto code_r0x08004a00;
            }
            schedule();
            uVar7 = prepare_to_wait_event(iVar6,&uStack_60,1);
            uVar3 = *(arg1 + 0x78);
        }
        finish_wait(iVar6,&uStack_60);
        uVar7 = 0;
    }
code_r0x08004a00:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar7 & 0xffffffff;
    }
    puVar5 = __stack_chk_fail();
    *extraout_x18 = sym.gh_destroy_vcpu;
    iVar6 = *(puVar5 + 2);
    uVar1 = *puVar5;
    uVar7 = kfree();
    if (uVar1 < 8) {
        iVar2 = *(iVar6 + 4);
        *(iVar6 + uVar1 * 8 + 0x10) = 0;
        *(iVar6 + 4) = iVar2 + -1;
        return uVar7;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8004aa0);
    (*pcVar4)();
}


// ===== sym.gh_destroy_vcpu @ 0x08004a4c (size 84) =====

void sym.gh_destroy_vcpu(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 8);
    uVar1 = *arg1;
    kfree();
    if (uVar1 < 8) {
        iVar2 = *(iVar4 + 4);
        *(iVar4 + uVar1 * 8 + 0x10) = 0;
        *(iVar4 + 4) = iVar2 + -1;
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8004aa0);
    (*pcVar3)();
}


// ===== sym.gh_destroy_vm @ 0x08004aa0 (size 780) =====

void sym.gh_destroy_vm(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char cVar3;
    ushort uVar4;
    code *pcVar5;
    bool bVar6;
    int iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ushort *puVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    if (*(arg1 + 0x78) == '\0') goto code_r0x08004cec;
    puVar11 = arg1 + 0xc;
    uVar4 = *puVar11;
    iVar7 = sym.gh_exit_vm(arg1,1,0);
    if (((iVar7 == -0x13) || (iVar7 == 0)) || (iVar7 = sym.gh_exit_vm(arg1,3,1), iVar7 == 0)) {
        iVar7 = *(arg1 + 4);
    }
    else {
        _printk(0x80026d3,uVar4);
        iVar7 = *(arg1 + 4);
    }
    if (iVar7 != 0) {
        uVar12 = 0;
        do {
            puVar8 = *(arg1 + 0x10 + uVar12 * 8);
            if (puVar8 == NULL) {
                do {
    //WARNING: Do nothing block with infinite loop
                } while( true );
            }
            iVar13 = *(puVar8 + 2);
            uVar1 = *puVar8;
            kfree();
            if (7 < uVar1) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8004da8);
                (*pcVar5)();
            }
            iVar7 = *(iVar13 + 4);
            *(iVar13 + uVar1 * 8 + 0x10) = 0;
            *(iVar13 + 4) = iVar7 + -1;
        } while ((*(arg1 + 4) != 0) && (bVar6 = uVar12 < 7, uVar12 = uVar12 + 1, bVar6));
    }
    srcu_notifier_call_chain(obj.gh_vm_notifier,3,puVar11);
    uVar2 = *(arg1 + 0x78);
    if (uVar2 < 10) {
        uVar12 = *(arg1 + 0xc);
        uVar1 = 1 << (uVar2 & 0x1f);
        if ((uVar1 & 0x20c) == 0) {
            if ((uVar1 & 0x42) != 0) goto code_r0x08004be0;
            if (uVar2 != 5) goto code_r0x08004cc4;
        }
        else {
            iVar7 = gh_rm_unpopulate_hyp_res(uVar12,arg1 + 0x50);
            if (iVar7 != 0) {
                _printk(0x8002c8f,iVar7);
            }
            iVar7 = sym.gh_virtio_mmio_exit(uVar12,arg1 + 0x50);
            if (iVar7 != 0) {
                _printk(0x8002e81,iVar7);
            }
code_r0x08004be0:
            iVar7 = gh_rm_vm_reset(uVar12);
            if (iVar7 == 0) {
                if (*(arg1 + 0x78) != '\v') {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_70 = 0;
                    init_wait_entry(&uStack_70,0);
                    iVar13 = arg1 + 0x80;
                    uVar9 = prepare_to_wait_event(iVar13,&uStack_70,1);
                    cVar3 = *(arg1 + 0x78);
                    while (cVar3 != '\v') {
                        if (uVar9 != 0) {
                            if (-1 < uVar9) goto code_r0x08004ca0;
                            _printk(0x80021ec,0xb);
                            uVar10 = 0x8002335;
                            uVar9 = uVar9 & 0xffffffff;
                            goto code_r0x08004c9c;
                        }
                        schedule();
                        uVar9 = prepare_to_wait_event(iVar13,&uStack_70,1);
                        cVar3 = *(arg1 + 0x78);
                    }
                    finish_wait(iVar13,&uStack_70);
                }
            }
            else {
                uVar10 = 0x8001b1f;
                uVar9 = uVar12;
code_r0x08004c9c:
                _printk(uVar10,uVar9);
            }
code_r0x08004ca0:
            if ((*arg1 != '\0') && (iVar7 = sym.gh_secure_vm_loader_reclaim_fw(arg1), iVar7 != 0)) {
                _printk(0x8002373,uVar12,iVar7);
            }
        }
        iVar7 = gh_rm_vm_dealloc_vmid(uVar12);
        if (iVar7 != 0) {
            _printk(0x80025d0,uVar12,iVar7);
        }
        *puVar11 = 0;
    }
code_r0x08004cc4:
    *(arg1 + 0x78) = 0;
    sym.gh_uevent_notify_change(1,arg1);
    srcu_notifier_call_chain(obj.gh_vm_notifier,4,puVar11);
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x58) = 0;
code_r0x08004cec:
    gh_rm_unregister_notifier(arg1 + 0x60);
    kfree(arg1);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.gh_uevent_notify_change;
    iVar13 = kmem_cache_alloc_trace(_trace_event_raw_init,0x400dc0,0xa20);
    if (iVar13 != 0) {
        if (iVar7 == 1) {
            add_uevent_var(iVar13,"EVENT=destroy");
            add_uevent_var(iVar13,"vm_exit=%d",*(extraout_x1 + 0x98));
        }
        else if (iVar7 == 0) {
            add_uevent_var(iVar13,"EVENT=create");
        }
        add_uevent_var(iVar13,"vm_name=%s",extraout_x1 + 0x50);
        uVar1 = *(iVar13 + 0x218);
        *(iVar13 + 0x218) = uVar1 + 1;
        if (0x3f < uVar1) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8004e94);
            (*pcVar5)();
        }
        *(iVar13 + 0x18 + uVar1 * 8) = 0;
        kobject_uevent_env(_segment.ehdr,2);
        kfree(iVar13);
    }
    return;
}


// ===== sym.gh_uevent_notify_change @ 0x08004dac (size 232) =====

void sym.gh_uevent_notify_change(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_trace_event_raw_init,0x400dc0,0xa20);
    if (iVar3 != 0) {
        if (arg1 == 1) {
            add_uevent_var(iVar3,"EVENT=destroy");
            add_uevent_var(iVar3,"vm_exit=%d",*(arg2 + 0x98));
        }
        else if (arg1 == 0) {
            add_uevent_var(iVar3,"EVENT=create");
        }
        add_uevent_var(iVar3,"vm_name=%s",arg2 + 0x50);
        uVar1 = *(iVar3 + 0x218);
        *(iVar3 + 0x218) = uVar1 + 1;
        if (0x3f < uVar1) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8004e94);
            (*pcVar2)();
        }
        *(iVar3 + 0x18 + uVar1 * 8) = 0;
        kobject_uevent_env(_segment.ehdr,2);
        kfree(iVar3);
    }
    return;
}


// ===== sym.gh_reclaim_mem @ 0x08004e94 (size 200) =====

uint32_t * sym.gh_reclaim_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    ulong uVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    ushort uVar13;
    int extraout_w1;
    ulong extraout_x1;
    uint32_t *puVar14;
    uint64_t in_x3;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint *puVar17;
    int64_t iVar18;
    uint32_t *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t *puVar19;
    uint32_t *puVar20;
    uint32_t *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    uint32_t *puStack_160;
    uint32_t *puStack_158;
    uint32_t *puStack_150;
    uint32_t *puStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint32_t *puStack_f0;
    uint32_t *puStack_e8;
    uint32_t *puStack_e0;
    uint32_t *puStack_d8;
    uint32_t *puStack_d0;
    uint32_t uStack_c4;
    uint32_t uStack_c0;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_38 = *(iVar18 + 0x5e0);
    uStack_3c = 7;
    uStack_44 = *(arg1 + 0xc);
    uStack_40 = 3;
    if (((in_x3 & 1) == 0) && (iVar4 = gh_rm_mem_reclaim(*(arg1 + 0xa0),0), iVar4 != 0)) {
        _printk(0x8002949,*(arg1 + 0xc),iVar4);
    }
    puVar12 = &uStack_44;
    puVar9 = &uStack_40;
    puVar17 = &uStack_3c;
    puVar15 = 0x1;
    iVar18 = 1;
    puVar6 = hyp_assign_phys(arg2,arg3,puVar12,1,puVar9,puVar17,1);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return puVar6;
    }
    auVar22 = __stack_chk_fail();
    puVar6 = auVar22._8_8_;
    *extraout_x18 = sym.gh_provide_mem;
    pcStack_a8 = sym.gh_provide_mem;
    iVar11 = sp_el0;
    iStack_b8 = *(iVar11 + 0x5e0);
    uVar2 = *(auVar22._0_8_ + 0xc);
    puVar20 = uVar2;
    puVar19 = 0x7;
    iVar11 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar11 = 0x30;
    }
    puVar14 = 0x8;
    uStack_c4 = uVar2;
    uStack_c0 = 3;
    uStack_bc = 7;
    puVar16 = puVar15;
    puStack_d0 = puVar6;
    puStack_b0 = &stack0xffffffffffffffd0;
    puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,8);
    if (puVar7 == NULL) {
        puVar21 = 0xfffffff4;
    }
    else {
        puVar14 = 0x14;
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        *puVar7 = 1;
        *(puVar7 + 1) = uVar2;
        *(puVar7 + 6) = 7;
        puVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x14);
        if (puVar19 == NULL) {
            puVar21 = 0xfffffff4;
            puVar19 = puVar7;
        }
        else {
            *puVar19 = 1;
            *(puVar19 + 1) = puVar6;
            *(puVar19 + 3) = puVar12;
            puVar17 = &uStack_bc;
            iVar18 = 1;
            uVar5 = hyp_assign_phys(puVar6,puVar12,&uStack_c0,1,&uStack_c4,puVar17,1);
            if (uVar5 == 0) {
                iVar18 = auVar22._0_8_ + 0xa0;
                puVar14 = NULL;
                puVar17 = NULL;
                puVar20 = puVar7;
                puVar9 = puVar19;
                if ((puVar15 & 1) == 0) {
                    iVar4 = gh_rm_mem_lend(0,0,0,puVar7,puVar19,0,iVar18);
                }
                else {
                    iVar4 = gh_rm_mem_donate();
                }
                if (iVar4 == 0) {
                    puVar21 = NULL;
                }
                else {
                    puVar14 = &uStack_c4;
                    puVar9 = &uStack_c0;
                    puVar17 = &uStack_bc;
                    puVar20 = 0x1;
                    iVar18 = 1;
                    uVar8 = hyp_assign_phys(puVar6,puVar12,puVar14,1,puVar9,puVar17,1);
                    puVar21 = uVar8 & 0xffffffff;
                }
            }
            else {
                puVar21 = uVar5;
                puVar14 = puVar12;
                puVar9 = puVar21;
                _printk(0x8003317,&puStack_d0,puVar12,puVar20,puVar21);
            }
            kfree(puVar7);
            puVar16 = puVar20;
        }
        kfree(puVar19);
        arg2 = puVar7;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_b8) {
        return puVar21;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.gh_vm_configure;
    pcStack_f8 = sym.gh_vm_configure;
    iVar11 = sp_el0;
    iStack_108 = *(iVar11 + 0x5e0);
    uStack_138 = 0;
    ppuStack_100 = &puStack_b0;
    puStack_f0 = puVar19;
    puStack_e8 = puVar6;
    puStack_e0 = arg2;
    puStack_d8 = puVar12;
    if (iVar3 == 1) {
        puVar6 = puVar17 & 0xffffffff;
        iVar4 = gh_rm_vm_config_image(in_x7[3],1,in_x7[0x28],extraout_x1,puVar14,puVar16,puVar9);
        puVar12 = in_x7;
        if (iVar4 == 0) {
            *(in_x7 + 0x1e) = '\x06';
            if (puVar17 == 0) {
                puVar14 = in_x7[3];
                _printk(0x8001c03,0,puVar14);
                puVar9 = 0xffffffffffffffea;
                goto code_r0x08005344;
            }
            puVar14 = &uStack_138;
            uStack_138 = CONCAT44(puVar17,uStack_138);
            puVar6 = 0x1;
            iVar4 = gh_rm_vm_auth_image(in_x7[3],1,puVar14);
            if (iVar4 == 0) {
                *(in_x7 + 0x1e) = '\x01';
                iVar4 = gh_rm_vm_init(in_x7[3]);
                if (iVar4 == 0) {
                    if (in_x7[0x1e] != '\x02') {
                        uStack_118 = 0;
                        uStack_110 = 0;
                        uStack_128 = 0;
                        uStack_120 = 0;
                        uStack_130 = 0;
                        init_wait_entry(&uStack_130,0);
                        puVar6 = in_x7 + 0x20;
                        puVar14 = 0x1;
                        puVar20 = prepare_to_wait_event(puVar6,&uStack_130,1);
                        cVar1 = in_x7[0x1e];
                        puVar9 = puVar19;
                        while (puVar19 = puVar20, cVar1 != '\x02') {
                            if (puVar19 != NULL) {
                                if (puVar19 < 0) {
                                    _printk(0x80021ec,2);
                                    _printk(0x8002335,puVar19);
                                }
                                goto code_r0x08005268;
                            }
                            schedule();
                            puVar14 = 0x1;
                            puVar9 = prepare_to_wait_event(puVar6,&uStack_130,1);
                            puVar20 = puVar9;
                            cVar1 = in_x7[0x1e];
                        }
                        finish_wait(puVar6,&uStack_130);
                        puVar19 = puVar9;
                    }
code_r0x08005268:
                    iVar4 = gh_rm_populate_hyp_res(in_x7[3],iVar18);
                    puVar9 = iVar4;
                    if (iVar4 < 0) {
                        _printk(0x8003091,puVar9);
                    }
                    else if (*in_x7 != '\0') {
                        uVar5 = sym.gh_get_nr_vcpus(in_x7[3]);
                        puVar6 = uVar5;
                        if (uVar5 < 0) {
                            puVar14 = puVar6;
                            _printk(0x80024f5,in_x7[3],puVar6);
                            puVar9 = uVar5;
                        }
                        else {
                            if (uVar5 == 0) {
                                uVar5 = 1;
                            }
                            in_x7[2] = uVar5;
                        }
                    }
                    goto code_r0x08005344;
                }
                uVar13 = in_x7[3];
                puVar9 = iVar4;
                uVar10 = 0x8001af2;
            }
            else {
                uVar13 = in_x7[3];
                puVar9 = iVar4;
                uVar10 = 0x80027b2;
            }
        }
        else {
            puVar9 = iVar4;
            uVar13 = in_x7[3];
            uVar10 = 0x800204d;
        }
        puVar14 = puVar9;
        _printk(uVar10,uVar13,puVar9);
    }
    else {
        _printk(0x8002c5b);
        puVar9 = 0xffffffffffffffea;
    }
code_r0x08005344:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_108) {
        return puVar9;
    }
    auVar22 = __stack_chk_fail();
    iVar11 = auVar22._0_8_;
    *extraout_x18_01 = sym.gh_exit_vm;
    pcStack_178 = sym.gh_exit_vm;
    iVar18 = sp_el0;
    iStack_188 = *(iVar18 + 0x5e0);
    iVar3 = *(iVar11 + 0xc);
    pppuStack_180 = &ppuStack_100;
    uStack_170 = puVar15 & 0xffffffff;
    puStack_160 = puVar19;
    puStack_158 = puVar6;
    puStack_150 = puVar9;
    puStack_148 = puVar12;
    if (iVar3 == 0) {
        uVar8 = 0xffffffed;
    }
    else {
        iVar18 = iVar11 + 0xa8;
        mutex_lock(iVar18);
        if (*(iVar11 + 0x78) == '\x03') {
            uVar5 = gh_rm_vm_stop(iVar3,auVar22._8_8_ & 0xffffffff,puVar14 & 0xffffffff);
            if (uVar5 == 0) {
                mutex_unlock(iVar18);
                if (*(iVar11 + 0x78) == '\t') {
                    uVar8 = 0;
                }
                else {
                    uStack_198 = 0;
                    uStack_190 = 0;
                    uStack_1a8 = 0;
                    uStack_1a0 = 0;
                    uStack_1b0 = 0;
                    init_wait_entry(&uStack_1b0,0);
                    iVar18 = iVar11 + 0x80;
                    uVar8 = prepare_to_wait_event(iVar18,&uStack_1b0,1);
                    cVar1 = *(iVar11 + 0x78);
                    while (cVar1 != '\t') {
                        if (uVar8 != 0) {
                            if (uVar8 < 0) {
                                _printk(0x80021ec,9);
                            }
                            else if (uVar8 == 0) goto code_r0x080054f4;
                            _printk(0x8002dba,iVar3);
                            goto code_r0x080054f4;
                        }
                        schedule();
                        uVar8 = prepare_to_wait_event(iVar18,&uStack_1b0,1);
                        cVar1 = *(iVar11 + 0x78);
                    }
                    finish_wait(iVar18,&uStack_1b0);
                    uVar8 = 0;
                }
            }
            else {
                uVar8 = uVar5;
                _printk(0x8002ba2,iVar3,uVar8);
                mutex_unlock(iVar18);
            }
        }
        else {
            _printk(0x800245c,iVar3);
            mutex_unlock(iVar18);
            uVar8 = 0xffffffed;
        }
    }
code_r0x080054f4:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iStack_188) {
        __stack_chk_fail();
        *extraout_x18_02 = sym.gh_dev_ioctl;
        if (extraout_w1 == 0xb201) {
            puVar12 = sym.gh_dev_ioctl_create_vm();
        }
        else {
            _printk(0x8002076);
            puVar12 = 0xffffffffffffffea;
        }
        return puVar12;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.gh_provide_mem @ 0x08004f5c (size 488) =====

uint32_t * sym.gh_provide_mem(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    ulong uVar10;
    int64_t iVar11;
    ushort uVar12;
    int extraout_w1;
    ulong extraout_x1;
    uint32_t *puVar13;
    uint32_t *in_x4;
    uint *in_x5;
    int64_t in_x6;
    char *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t *unaff_x20;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    uint32_t *puStack_110;
    uint32_t *puStack_108;
    uint32_t *puStack_100;
    char *pcStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t *puStack_a0;
    int64_t iStack_98;
    uint32_t *puStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uint32_t uStack_74;
    uint32_t uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar3 = *(arg1 + 0xc);
    puVar15 = uVar3;
    puVar14 = 0x7;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar13 = 0x8;
    uStack_74 = uVar3;
    uStack_70 = 3;
    uStack_6c = 7;
    puVar9 = arg4;
    iStack_80 = arg2;
    puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
    if (puVar7 == NULL) {
        puVar16 = 0xfffffff4;
    }
    else {
        puVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        *puVar7 = 1;
        *(puVar7 + 1) = uVar3;
        *(puVar7 + 6) = 7;
        puVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        if (puVar14 == NULL) {
            puVar16 = 0xfffffff4;
            puVar14 = puVar7;
        }
        else {
            *puVar14 = 1;
            *(puVar14 + 1) = arg2;
            *(puVar14 + 3) = arg3;
            in_x5 = &uStack_6c;
            in_x6 = 1;
            uVar5 = hyp_assign_phys(arg2,arg3,&uStack_70,1,&uStack_74,in_x5,1);
            if (uVar5 == 0) {
                in_x6 = arg1 + 0xa0;
                puVar13 = NULL;
                in_x5 = NULL;
                puVar15 = puVar7;
                in_x4 = puVar14;
                if ((arg4 & 1U) == 0) {
                    iVar6 = gh_rm_mem_lend(0,0,0,puVar7,puVar14,0,in_x6);
                }
                else {
                    iVar6 = gh_rm_mem_donate();
                }
                if (iVar6 == 0) {
                    puVar16 = NULL;
                }
                else {
                    puVar13 = &uStack_74;
                    in_x4 = &uStack_70;
                    in_x5 = &uStack_6c;
                    puVar15 = 0x1;
                    in_x6 = 1;
                    uVar8 = hyp_assign_phys(arg2,arg3,puVar13,1,in_x4,in_x5,1);
                    puVar16 = uVar8 & 0xffffffff;
                }
            }
            else {
                puVar16 = uVar5;
                puVar13 = arg3;
                in_x4 = puVar16;
                _printk(0x8003317,&iStack_80,arg3,puVar15,puVar16);
            }
            kfree(puVar7);
            puVar9 = puVar15;
        }
        kfree(puVar14);
        unaff_x20 = puVar7;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return puVar16;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.gh_vm_configure;
    pcStack_a8 = sym.gh_vm_configure;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uStack_e8 = 0;
    puStack_b0 = &stack0xffffffffffffffa0;
    puStack_a0 = puVar14;
    iStack_98 = arg2;
    puStack_90 = unaff_x20;
    iStack_88 = arg3;
    if (iVar4 == 1) {
        puVar7 = in_x5 & 0xffffffff;
        iVar6 = gh_rm_vm_config_image(*(in_x7 + 0xc),1,*(in_x7 + 0xa0),extraout_x1,puVar13,puVar9,in_x4);
        arg3 = in_x7;
        if (iVar6 == 0) {
            in_x7[0x78] = '\x06';
            if (in_x5 == 0) {
                puVar13 = *(in_x7 + 0xc);
                _printk(0x8001c03,0,puVar13);
                puVar15 = 0xffffffffffffffea;
                arg2 = puVar7;
                goto code_r0x08005344;
            }
            puVar13 = &uStack_e8;
            uStack_e8 = CONCAT44(in_x5,uStack_e8);
            puVar7 = 0x1;
            iVar6 = gh_rm_vm_auth_image(*(in_x7 + 0xc),1,puVar13);
            if (iVar6 == 0) {
                in_x7[0x78] = '\x01';
                iVar6 = gh_rm_vm_init(*(in_x7 + 0xc));
                if (iVar6 == 0) {
                    if (in_x7[0x78] != '\x02') {
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_d8 = 0;
                        uStack_d0 = 0;
                        uStack_e0 = 0;
                        init_wait_entry(&uStack_e0,0);
                        puVar7 = in_x7 + 0x80;
                        puVar13 = 0x1;
                        puVar9 = prepare_to_wait_event(puVar7,&uStack_e0,1);
                        cVar2 = in_x7[0x78];
                        puVar15 = puVar14;
                        while (puVar14 = puVar9, cVar2 != '\x02') {
                            if (puVar14 != NULL) {
                                if (puVar14 < 0) {
                                    _printk(0x80021ec,2);
                                    _printk(0x8002335,puVar14);
                                }
                                goto code_r0x08005268;
                            }
                            schedule();
                            puVar13 = 0x1;
                            puVar15 = prepare_to_wait_event(puVar7,&uStack_e0,1);
                            puVar9 = puVar15;
                            cVar2 = in_x7[0x78];
                        }
                        finish_wait(puVar7,&uStack_e0);
                        puVar14 = puVar15;
                    }
code_r0x08005268:
                    iVar6 = gh_rm_populate_hyp_res(*(in_x7 + 0xc),in_x6);
                    puVar15 = iVar6;
                    arg2 = puVar7;
                    if (iVar6 < 0) {
                        _printk(0x8003091,puVar15);
                    }
                    else if (*in_x7 != '\0') {
                        uVar5 = sym.gh_get_nr_vcpus(*(in_x7 + 0xc));
                        arg2 = uVar5;
                        if (uVar5 < 0) {
                            puVar13 = arg2;
                            _printk(0x80024f5,*(in_x7 + 0xc),arg2);
                            puVar15 = uVar5;
                        }
                        else {
                            if (uVar5 == 0) {
                                uVar5 = 1;
                            }
                            *(in_x7 + 8) = uVar5;
                        }
                    }
                    goto code_r0x08005344;
                }
                uVar12 = *(in_x7 + 0xc);
                puVar15 = iVar6;
                uVar10 = 0x8001af2;
            }
            else {
                uVar12 = *(in_x7 + 0xc);
                puVar15 = iVar6;
                uVar10 = 0x80027b2;
            }
        }
        else {
            puVar15 = iVar6;
            uVar12 = *(in_x7 + 0xc);
            uVar10 = 0x800204d;
        }
        puVar13 = puVar15;
        _printk(uVar10,uVar12,puVar15);
        arg2 = puVar7;
    }
    else {
        _printk(0x8002c5b);
        puVar15 = 0xffffffffffffffea;
    }
code_r0x08005344:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return puVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar11 = auVar17._0_8_;
    *extraout_x18_00 = sym.gh_exit_vm;
    pcStack_128 = sym.gh_exit_vm;
    iVar1 = sp_el0;
    iStack_138 = *(iVar1 + 0x5e0);
    iVar4 = *(iVar11 + 0xc);
    ppuStack_130 = &puStack_b0;
    uStack_120 = arg4 & 0xffffffff;
    puStack_110 = puVar14;
    puStack_108 = arg2;
    puStack_100 = puVar15;
    pcStack_f8 = arg3;
    if (iVar4 == 0) {
        uVar8 = 0xffffffed;
    }
    else {
        iVar1 = iVar11 + 0xa8;
        mutex_lock(iVar1);
        if (*(iVar11 + 0x78) == '\x03') {
            uVar5 = gh_rm_vm_stop(iVar4,auVar17._8_8_ & 0xffffffff,puVar13 & 0xffffffff);
            if (uVar5 == 0) {
                mutex_unlock(iVar1);
                if (*(iVar11 + 0x78) == '\t') {
                    uVar8 = 0;
                }
                else {
                    uStack_148 = 0;
                    uStack_140 = 0;
                    uStack_158 = 0;
                    uStack_150 = 0;
                    uStack_160 = 0;
                    init_wait_entry(&uStack_160,0);
                    iVar1 = iVar11 + 0x80;
                    uVar8 = prepare_to_wait_event(iVar1,&uStack_160,1);
                    cVar2 = *(iVar11 + 0x78);
                    while (cVar2 != '\t') {
                        if (uVar8 != 0) {
                            if (uVar8 < 0) {
                                _printk(0x80021ec,9);
                            }
                            else if (uVar8 == 0) goto code_r0x080054f4;
                            _printk(0x8002dba,iVar4);
                            goto code_r0x080054f4;
                        }
                        schedule();
                        uVar8 = prepare_to_wait_event(iVar1,&uStack_160,1);
                        cVar2 = *(iVar11 + 0x78);
                    }
                    finish_wait(iVar1,&uStack_160);
                    uVar8 = 0;
                }
            }
            else {
                uVar8 = uVar5;
                _printk(0x8002ba2,iVar4,uVar8);
                mutex_unlock(iVar1);
            }
        }
        else {
            _printk(0x800245c,iVar4);
            mutex_unlock(iVar1);
            uVar8 = 0xffffffed;
        }
    }
code_r0x080054f4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_138) {
        __stack_chk_fail();
        *extraout_x18_01 = sym.gh_dev_ioctl;
        if (extraout_w1 == 0xb201) {
            puVar15 = sym.gh_dev_ioctl_create_vm();
        }
        else {
            _printk(0x8002076);
            puVar15 = 0xffffffffffffffea;
        }
        return puVar15;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.gh_vm_configure @ 0x08005144 (size 604) =====

ulong * sym.gh_vm_configure(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ushort uVar10;
    int extraout_w1;
    int in_w5;
    char *in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
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
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_68 = 0;
    if ((arg1 & 0xffff) == 1) {
        iVar4 = gh_rm_vm_config_image(*(in_x7 + 0xc),1,*(in_x7 + 0xa0),arg2,arg3,arg4);
        if (iVar4 == 0) {
            in_x7[0x78] = '\x06';
            if (in_w5 == 0) {
                arg3 = *(in_x7 + 0xc);
                _printk(0x8001c03,0,arg3);
                puVar11 = 0xffffffffffffffea;
                goto code_r0x08005344;
            }
            arg3 = &uStack_68;
            uStack_68 = CONCAT44(in_w5,uStack_68);
            iVar4 = gh_rm_vm_auth_image(*(in_x7 + 0xc),1,arg3);
            if (iVar4 == 0) {
                in_x7[0x78] = '\x01';
                iVar4 = gh_rm_vm_init(*(in_x7 + 0xc));
                if (iVar4 == 0) {
                    if (in_x7[0x78] != '\x02') {
                        uStack_48 = 0;
                        uStack_40 = 0;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_60 = 0;
                        init_wait_entry(&uStack_60,0);
                        pcVar1 = in_x7 + 0x80;
                        arg3 = 1;
                        iVar6 = prepare_to_wait_event(pcVar1,&uStack_60,1);
                        cVar2 = in_x7[0x78];
                        while (cVar2 != '\x02') {
                            if (iVar6 != 0) {
                                if (iVar6 < 0) {
                                    _printk(0x80021ec,2);
                                    _printk(0x8002335,iVar6);
                                }
                                goto code_r0x08005268;
                            }
                            schedule();
                            arg3 = 1;
                            iVar6 = prepare_to_wait_event(pcVar1,&uStack_60,1);
                            cVar2 = in_x7[0x78];
                        }
                        finish_wait(pcVar1,&uStack_60);
                    }
code_r0x08005268:
                    iVar4 = gh_rm_populate_hyp_res(*(in_x7 + 0xc));
                    puVar11 = iVar4;
                    if (iVar4 < 0) {
                        _printk(0x8003091,puVar11);
                    }
                    else if (*in_x7 != '\0') {
                        uVar7 = sym.gh_get_nr_vcpus(*(in_x7 + 0xc));
                        puVar12 = uVar7 & 0xffffffff;
                        iVar4 = uVar7;
                        if (iVar4 < 0) {
                            _printk(0x80024f5,*(in_x7 + 0xc),puVar12);
                            puVar11 = iVar4;
                            arg3 = puVar12;
                        }
                        else {
                            if (iVar4 == 0) {
                                iVar4 = 1;
                            }
                            *(in_x7 + 8) = iVar4;
                        }
                    }
                    goto code_r0x08005344;
                }
                uVar10 = *(in_x7 + 0xc);
                puVar11 = iVar4;
                uVar8 = 0x8001af2;
            }
            else {
                uVar10 = *(in_x7 + 0xc);
                puVar11 = iVar4;
                uVar8 = 0x80027b2;
            }
        }
        else {
            puVar11 = iVar4;
            uVar10 = *(in_x7 + 0xc);
            uVar8 = 0x800204d;
        }
        arg3 = puVar11;
        _printk(uVar8,uVar10,puVar11);
    }
    else {
        _printk(0x8002c5b);
        puVar11 = 0xffffffffffffffea;
    }
code_r0x08005344:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar11;
    }
    auVar13 = __stack_chk_fail();
    iVar9 = auVar13._0_8_;
    *extraout_x18 = sym.gh_exit_vm;
    pcStack_a8 = sym.gh_exit_vm;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    iVar3 = *(iVar9 + 0xc);
    puStack_b0 = &stack0xffffffffffffffd0;
    if (iVar3 == 0) {
        uVar7 = 0xffffffed;
    }
    else {
        iVar6 = iVar9 + 0xa8;
        mutex_lock(iVar6);
        if (*(iVar9 + 0x78) == '\x03') {
            uVar5 = gh_rm_vm_stop(iVar3,auVar13._8_8_ & 0xffffffff,arg3 & 0xffffffff);
            if (uVar5 == 0) {
                mutex_unlock(iVar6);
                if (*(iVar9 + 0x78) == '\t') {
                    uVar7 = 0;
                }
                else {
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e0 = 0;
                    init_wait_entry(&uStack_e0,0);
                    iVar6 = iVar9 + 0x80;
                    uVar7 = prepare_to_wait_event(iVar6,&uStack_e0,1);
                    cVar2 = *(iVar9 + 0x78);
                    while (cVar2 != '\t') {
                        if (uVar7 != 0) {
                            if (uVar7 < 0) {
                                _printk(0x80021ec,9);
                            }
                            else if (uVar7 == 0) goto code_r0x080054f4;
                            _printk(0x8002dba,iVar3);
                            goto code_r0x080054f4;
                        }
                        schedule();
                        uVar7 = prepare_to_wait_event(iVar6,&uStack_e0,1);
                        cVar2 = *(iVar9 + 0x78);
                    }
                    finish_wait(iVar6,&uStack_e0);
                    uVar7 = 0;
                }
            }
            else {
                uVar7 = uVar5;
                _printk(0x8002ba2,iVar3,uVar7);
                mutex_unlock(iVar6);
            }
        }
        else {
            _printk(0x800245c,iVar3);
            mutex_unlock(iVar6);
            uVar7 = 0xffffffed;
        }
    }
code_r0x080054f4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return uVar7 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gh_dev_ioctl;
    if (extraout_w1 == 0xb201) {
        puVar11 = sym.gh_dev_ioctl_create_vm();
    }
    else {
        _printk(0x8002076);
        puVar11 = 0xffffffffffffffea;
    }
    return puVar11;
}


// ===== sym.gh_exit_vm @ 0x080053a0 (size 436) =====

uint64_t sym.gh_exit_vm(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int extraout_w1;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iVar3 = *(arg1 + 0xc);
    if (iVar3 == 0) {
        uVar5 = 0xffffffed;
    }
    else {
        iVar1 = arg1 + 0xa8;
        mutex_lock(iVar1);
        if (*(arg1 + 0x78) == '\x03') {
            uVar4 = gh_rm_vm_stop(iVar3,arg2 & 0xffffffff,arg3 & 0xffffffff);
            if (uVar4 == 0) {
                mutex_unlock(iVar1);
                if (*(arg1 + 0x78) == '\t') {
                    uVar5 = 0;
                }
                else {
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_70 = 0;
                    init_wait_entry(&uStack_70,0);
                    iVar1 = arg1 + 0x80;
                    uVar5 = prepare_to_wait_event(iVar1,&uStack_70,1);
                    cVar2 = *(arg1 + 0x78);
                    while (cVar2 != '\t') {
                        if (uVar5 != 0) {
                            if (uVar5 < 0) {
                                _printk(0x80021ec,9);
                            }
                            else if (uVar5 == 0) goto code_r0x080054f4;
                            _printk(0x8002dba,iVar3);
                            goto code_r0x080054f4;
                        }
                        schedule();
                        uVar5 = prepare_to_wait_event(iVar1,&uStack_70,1);
                        cVar2 = *(arg1 + 0x78);
                    }
                    finish_wait(iVar1,&uStack_70);
                    uVar5 = 0;
                }
            }
            else {
                uVar5 = uVar4;
                _printk(0x8002ba2,iVar3,uVar5);
                mutex_unlock(iVar1);
            }
        }
        else {
            _printk(0x800245c,iVar3);
            mutex_unlock(iVar1);
            uVar5 = 0xffffffed;
        }
    }
code_r0x080054f4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar5 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gh_dev_ioctl;
    if (extraout_w1 == 0xb201) {
        uVar5 = sym.gh_dev_ioctl_create_vm();
    }
    else {
        _printk(0x8002076);
        uVar5 = 0xffffffffffffffea;
    }
    return uVar5;
}


// ===== sym.gh_dev_ioctl @ 0x08005554 (size 68) =====

ulong sym.gh_dev_ioctl(ulong noname_0,uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0xb201) {
        uVar1 = sym.gh_dev_ioctl_create_vm();
    }
    else {
        _printk(0x8002076);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.gh_dev_ioctl_create_vm @ 0x08005598 (size 424) =====

uint64_t sym.gh_dev_ioctl_create_vm(void)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t arg1;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0xd8);
    if (arg1 == 0) {
        arg1 = 0xfffffffffffffff4;
    }
    else {
        __mutex_init(arg1 + 0xa8,"&vm->vm_lock",obj.gh_create_vm.__key);
        *(arg1 + 0x60) = sym.gh_vm_rm_notifier_fn.fc5859ae27bea53546df851ae32ba2aa.cfi_jt;
        *(arg1 + 0x70) = 1;
        iVar4 = gh_rm_register_notifier();
        if (iVar4 == 0) {
            *(arg1 + 0x9c) = 1;
            __init_waitqueue_head(arg1 + 0x80,"&vm->vm_status_wait",obj.gh_create_vm.__key);
            *(arg1 + 0x78) = 0;
            *(arg1 + 0x98) = 0xffffffea;
        }
        else {
            kfree(arg1);
            arg1 = iVar4;
        }
        if (arg1 < 0xfffffffffffff001) {
            uVar5 = get_unused_fd_flags(0x80000);
            uVar7 = uVar5;
            if (-1 < uVar5) {
                uVar6 = anon_inode_getfile("gunyah-vm",obj.gh_vm_fops,arg1,2);
                if (uVar6 < 0xfffffffffffff001) {
                    fd_install(uVar7,uVar6);
                    return uVar7;
                }
                put_unused_fd(uVar7);
                uVar5 = uVar6;
            }
            piVar1 = arg1 + 0x9c;
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
                sym.gh_destroy_vm(arg1);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
            arg1 = uVar5;
        }
    }
    return arg1;
}


// ===== sym.gh_vm_rm_notifier_fn @ 0x08005740 (size 264) =====

ulong sym.gh_vm_rm_notifier_fn(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0x56100001) {
        if (*(arg1 + -0x54) == *arg3) {
            mutex_lock(arg1 + 0x48);
            *(arg1 + 0x38) = *(arg3 + 2);
            *(arg1 + 0x18) = 9;
            sym.gh_wakeup_all_vcpus(*(arg1 + -0x54));
            __wake_up(arg1 + 0x20,1,1,0);
            mutex_unlock(arg1 + 0x48);
        }
    }
    else if ((arg2 == 0x56100008) && (*(arg1 + -0x54) == *arg3)) {
        cVar1 = *(arg3 + 4);
        if ((cVar1 != *(arg1 + 0x18)) && ((cVar1 == '\v' || (cVar1 == '\x02')))) {
            _printk(0x8002eb1);
            *(arg1 + 0x18) = *(arg3 + 4);
            __wake_up(arg1 + 0x20,1,1,0);
        }
    }
    return 0;
}


// ===== sym.gh_vm_ioctl @ 0x08005848 (size 192) =====

int64_t sym.gh_vm_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *arg1_00;
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    iVar2 = arg2;
    if (iVar2 < 0xb243) {
        if (iVar2 == -0x7fef4dbe) {
            iVar1 = sym.gh_vm_ioctl_get_fw_name(arg1_00,arg3);
            return iVar1;
        }
        if (iVar2 == 0xb240) {
            iVar1 = sym.gh_vm_ioctl_create_vcpu(arg1_00,arg3);
            return iVar1;
        }
    }
    else {
        if (iVar2 == 0xb243) {
            if (*arg1_00 == '\0') {
                return -0x16;
            }
            if (arg1_00[0x78] == '\x02') {
                return *(arg1_00 + 8);
            }
            return -0xb;
        }
        if (iVar2 == 0x4010b241) {
            iVar1 = sym.gh_vm_ioctl_set_fw_name(arg1_00,arg3);
            return iVar1;
        }
    }
    iVar1 = sym.gh_virtio_backend_ioctl(arg1_00 + 0x50,arg2,arg3);
    return iVar1;
}


// ===== sym.gh_vm_mmap @ 0x08005908 (size 44) =====

void sym.gh_vm_mmap(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_virtio_backend_mmap(*(arg1 + 0xd8) + 0x50,arg2);
    return;
}


// ===== sym.gh_vm_release @ 0x08005934 (size 152) =====

ulong sym.gh_vm_release(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    piVar1 = arg1_00 + 0x9c;
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
        sym.gh_destroy_vm(arg1_00);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return 0;
}


// ===== sym.gh_vm_ioctl_create_vcpu @ 0x080059cc (size 496) =====

void sym.gh_vm_ioctl_create_vcpu(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    uint32_t *unaff_x21;
    uint64_t unaff_x22;
    int64_t *unaff_x24;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    if (arg2 < 8) {
        unaff_x19 = arg1 + 0xa8;
        mutex_lock(unaff_x19);
        unaff_x24 = arg1 + arg2 * 8 + 0x10;
        if (*unaff_x24 == 0) {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
            if (puVar7 == NULL) {
                mutex_unlock(unaff_x19);
                uVar6 = 0xfffffffffffffff4;
            }
            else {
                *puVar7 = arg2;
                *(puVar7 + 2) = arg1;
                uVar6 = get_unused_fd_flags(0x80000);
                unaff_x22 = uVar6 & 0xffffffff;
                if (-1 < uVar6) {
                    snprintf(&uStack_60,0x14,"gh-vcpu:%d",arg2);
                    uVar6 = anon_inode_getfile(&uStack_60,obj.gh_vcpu_fops,puVar7,2);
                    if (uVar6 < 0xfffffffffffff001) {
                        fd_install(unaff_x22,uVar6);
                        puVar8 = arg1 + 0x9c;
                        goto code_r0x08005b90;
                    }
                    put_unused_fd(unaff_x22);
                    unaff_x22 = uVar6 & 0xffffffff;
                }
                kfree(puVar7);
                mutex_unlock(unaff_x19);
                uVar6 = unaff_x22;
                unaff_x21 = puVar7;
            }
        }
        else {
            mutex_unlock(unaff_x19);
            uVar6 = 0xffffffffffffffef;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
        arg1 = unaff_x20;
    }
    do {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) {
            return;
        }
        puVar8 = __stack_chk_fail(uVar6);
        puVar7 = unaff_x21;
code_r0x08005b90:
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar3 = *puVar8;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar5) {
                *puVar8 = uVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 0) {
            uVar9 = 2;
code_r0x08005b9c:
            refcount_warn_saturate(puVar8,uVar9);
        }
        else if ((uVar3 + 1 | uVar3) < 0) {
            uVar9 = 1;
            goto code_r0x08005b9c;
        }
        iVar2 = *(arg1 + 4);
        *unaff_x24 = puVar7;
        *(arg1 + 4) = iVar2 + 1;
        mutex_unlock(unaff_x19);
        uVar6 = unaff_x22 & 0xffffffff;
        unaff_x21 = puVar7;
    } while( true );
}


// ===== sym.gh_vcpu_ioctl @ 0x08005bbc (size 644) =====

int64_t sym.gh_vcpu_ioctl(int64_t arg1,uint32_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    int *piVar3;
    char cVar4;
    ushort uVar5;
    int iVar6;
    bool bVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar14;
    uint32_t *puVar15;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    if (arg2 != 0xb280) {
        _printk(0x8001955);
        iVar11 = -0x16;
        goto code_r0x08005cd8;
    }
    puVar15 = *(arg1 + 0xd8);
    pcVar14 = *(puVar15 + 2);
    pcVar1 = pcVar14 + 0xa8;
    mutex_lock(pcVar1);
    if (pcVar14[0x78] == '\x03') {
code_r0x08005c20:
        mutex_unlock(pcVar1);
        uVar10 = sym.gh_vm_supports_proxy_sched(*(pcVar14 + 0xc));
        if (((uVar10 & 1) == 0) || (uVar9 = sym.gh_vcpu_run(*(pcVar14 + 0xc),*puVar15,0,0), -1 < uVar9)) {
            if (pcVar14[0x78] != '\t') {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                init_wait_entry(&uStack_70,0);
                pcVar1 = pcVar14 + 0x80;
                uVar10 = prepare_to_wait_event(pcVar1,&uStack_70,1);
                cVar4 = pcVar14[0x78];
                while (cVar4 != '\t') {
                    if (uVar10 != 0) {
                        if (uVar10 < 0) {
                            uVar13 = 9;
                            uVar12 = 0x80021ec;
                            goto code_r0x08005db8;
                        }
                        if (uVar10 != 0) goto code_r0x08005cd4;
                        goto code_r0x08005cd0;
                    }
                    schedule();
                    uVar10 = prepare_to_wait_event(pcVar1,&uStack_70,1);
                    cVar4 = pcVar14[0x78];
                }
                finish_wait(pcVar1,&uStack_70);
            }
code_r0x08005cd0:
            uVar10 = *(pcVar14 + 0x98);
        }
        else {
            uVar13 = uVar9;
            uVar12 = 0x8001c2c;
            uVar10 = uVar13;
code_r0x08005db8:
            _printk(uVar12,uVar13);
        }
    }
    else {
        if (pcVar14[1] == '\0') {
            pcVar14[1] = '\x01';
            if (*pcVar14 == '\0') {
code_r0x08005d50:
                pcVar2 = pcVar14 + 0xc;
                if (pcVar14[0x78] == '\x02') {
                    srcu_notifier_call_chain(obj.gh_vm_notifier,1,pcVar2);
                    uVar9 = gh_rm_vm_start(*pcVar2);
                    if (uVar9 == 0) {
                        pcVar14[0x78] = '\x03';
                        _printk(0x8001b4a,*(pcVar14 + 0xc));
                        goto code_r0x08005c20;
                    }
                    uVar10 = uVar9;
                    _printk(0x8001fca,*pcVar2,uVar10);
                    mutex_unlock(pcVar1);
                    srcu_notifier_call_chain(obj.gh_vm_notifier,2,pcVar2);
                    goto code_r0x08005cd4;
                }
                uVar5 = *pcVar2;
                uVar12 = 0x8002227;
                goto code_r0x08005dcc;
            }
            if (*(pcVar14 + 4) == *(pcVar14 + 8)) goto code_r0x08005d50;
            _printk(0x8002729,*(pcVar14 + 4),*(pcVar14 + 8),*(pcVar14 + 0xc));
        }
        else {
            uVar5 = *(pcVar14 + 0xc);
            uVar12 = 0x80030bc;
code_r0x08005dcc:
            _printk(uVar12,uVar5);
        }
        mutex_unlock(pcVar1);
        uVar10 = 0xffffffea;
    }
code_r0x08005cd4:
    iVar11 = uVar10;
code_r0x08005cd8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar11;
    }
    __stack_chk_fail(iVar11);
    *extraout_x18 = sym.gh_vcpu_release;
    iVar11 = *(*(extraout_x1 + 0xd8) + 8);
    piVar3 = iVar11 + 0x9c;
    Hint_Prefetch(piVar3,2,0,1);
    do {
        iVar6 = *piVar3;
        cVar4 = '\x01';
        bVar7 = ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
            *piVar3 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar6 == 1) {
        DataMemoryBarrier(2,1);
        sym.gh_destroy_vm(iVar11);
    }
    else if (iVar6 < 1) {
        refcount_warn_saturate(piVar3,3);
    }
    return 0;
}


// ===== sym.gh_vcpu_release @ 0x08005e40 (size 156) =====

ulong sym.gh_vcpu_release(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0xd8) + 8);
    piVar1 = arg1_00 + 0x9c;
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
        sym.gh_destroy_vm(arg1_00);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08005edc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005f20

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
    //switch table (4 cases) at 0x8001950
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005f34);
    (*pcVar1)();
}


// ===== sym.__traceiter_gh_virtio_backend_irq_inj @ 0x08005f34 (size 104) =====

ulong sym.__traceiter_gh_virtio_backend_irq_inj(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800da08 != NULL) {
        piVar1 = *0x800da08;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_queue_notify @ 0x08005fa4 (size 104) =====

ulong sym.__traceiter_gh_virtio_backend_queue_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800da50 != NULL) {
        piVar1 = *0x800da50;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_wait_event @ 0x08006014 (size 136) =====

ulong sym.__traceiter_gh_virtio_backend_wait_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    uint in_w5;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800da98 != NULL) {
        piVar1 = *0x800da98;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4,in_w5);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gh_virtio_backend_irq @ 0x080060a4 (size 128) =====

ulong sym.__traceiter_gh_virtio_backend_irq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800dae0 != NULL) {
        piVar1 = *0x800dae0;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_irq_inj @ 0x0800612c (size 200) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080062bc)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_irq_inj(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t in_x3;
    uint uVar13;
    uint uVar14;
    uint64_t in_x4;
    uint64_t uVar15;
    uint64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    ulong uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    uint64_t uStack_360;
    ulong uStack_350;
    int64_t iStack_348;
    uint64_t uStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    int64_t iStack_2e8;
    ulong **ppuStack_2e0;
    ulong uStack_2d8;
    int64_t *piStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    code *pcStack_170;
    ulong uStack_160;
    int64_t iStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    int64_t *piStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(arg1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x080061a0;
    }
    else {
code_r0x080061a0:
        puVar8 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0xc) = arg3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar3 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_irq_inj;
    pcStack_a8 = sym.perf_trace_gh_virtio_backend_irq_inj;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar16 = puVar8 & 0xffffffff;
    uVar19 = auVar26._8_8_ & 0xffffffff;
    uStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar3 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar3 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_c0);
        uVar17 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_c0 + 0xe8) = &puStack_b0;
            puVar9 = uStack_c4;
            in_x4 = 1;
            *(uStack_c0 + 0xf8) = auStack_d0;
            *(uStack_c0 + 0x100) = ~(-1L << (uVar17 & 0x3f)) & 0x80061f4;
            *(uStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar8;
            in_x3 = uVar3;
            in_x5 = uStack_c0;
            perf_trace_run_bpf_submit(iVar4,0x14);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar22 = tpidr_el2;
    *extraout_x18_00 = 0x8006310;
    uStack_f8 = 0x8006310;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar17 = auVar26._8_8_ & 0xffffffff;
    uVar22 = *(iVar5 + 0x48);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar21 = uVar22;
    ppuStack_100 = &puStack_b0;
    piStack_f0 = piVar1;
    uStack_e8 = uVar19;
    uStack_e0 = uVar16;
    uStack_d8 = uVar3;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(iVar5), (uVar3 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar8 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_138,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar9;
            trace_event_buffer_commit(&uStack_138);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_108) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar3 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_178 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_170 = sym.perf_trace_gh_virtio_backend_irq_inj;
    iVar4 = sp_el0;
    iStack_188 = *(iVar4 + 0x5e0);
    uStack_190 = 0;
    uStack_194 = 0;
    iVar4 = tpidr_el1;
    ppuStack_180 = &ppuStack_100;
    uStack_160 = uVar22;
    iStack_158 = iVar5;
    uStack_150 = uVar17;
    uStack_148 = puVar9 & 0xffffffff;
    if ((*(uVar3 + 0x80) != 0) || (puVar10 = puVar8, *(iVar4 + *(uVar3 + 0x78)) != 0)) {
        puVar10 = &uStack_194;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_190);
        uVar16 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_190 + 0xe8) = &ppuStack_180;
            puVar10 = uStack_194;
            in_x4 = 1;
            *(uStack_190 + 0xf8) = auStack_1a0;
            *(uStack_190 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x80063e4;
            *(uStack_190 + 0x108) = 5;
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = puVar8;
            in_x5 = uStack_190;
            perf_trace_run_bpf_submit(iVar4,0x14);
            in_x3 = uVar3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_188) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar5 = auVar27._0_8_;
    uVar22 = tpidr_el2;
    *extraout_x18_02 = 0x8006500;
    uStack_1e8 = 0x8006500;
    iVar4 = sp_el0;
    iStack_1f8 = *(iVar4 + 0x5e0);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar21 = *(iVar5 + 0x48);
    uVar3 = in_x3;
    uVar16 = in_x4;
    uVar19 = in_x5;
    ppuStack_1f0 = &ppuStack_180;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar3 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar5), (uVar17 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar8 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_228,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = puVar10;
            *(iVar4 + 0x10) = in_x3;
            *(iVar4 + 0x14) = in_x4;
            *(iVar4 + 0x18) = in_x5;
            trace_event_buffer_commit(&uStack_228);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_278 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_288 = *(iVar4 + 0x5e0);
    uVar18 = uVar19 & 0xffffffff;
    uVar20 = uVar16 & 0xffffffff;
    uVar23 = uVar3 & 0xffffffff;
    uVar24 = puVar8 & 0xffffffff;
    iStack_290 = 0;
    uStack_294 = 0;
    uVar25 = auVar26._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    uVar17 = uVar3;
    uVar15 = uVar16;
    ppuStack_280 = &ppuStack_1f0;
    if ((*(uVar6 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_294;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_290);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_290 + 0xe8) = &ppuStack_280;
            puVar9 = uStack_294;
            uVar15 = 1;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_290 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar8;
            *(iVar4 + 0x10) = uVar3;
            *(iVar4 + 0x14) = uVar16;
            *(iVar4 + 0x18) = uVar19;
            uVar17 = uVar6;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar11 = uVar17;
    uVar13 = uVar15;
    uVar22 = tpidr_el2;
    *extraout_x18_04 = 0x8006730;
    uStack_2d8 = 0x8006730;
    iVar4 = sp_el0;
    iStack_2e8 = *(iVar4 + 0x5e0);
    uVar3 = auVar26._8_8_ & 0xffffffff;
    uVar22 = *(iVar5 + 0x48);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uVar21 = uVar22;
    uVar14 = uVar13;
    uVar12 = uVar11;
    ppuStack_2e0 = &ppuStack_280;
    piStack_2d0 = piVar1;
    uStack_2c8 = uVar24;
    uStack_2c0 = uVar23;
    uStack_2b8 = uVar20;
    uStack_2b0 = uVar18;
    uStack_2a8 = uVar6;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar5), (uVar16 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar8 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_318,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar26._8_4_;
        *(iVar4 + 0xc) = puVar9;
        *(iVar4 + 0x10) = uVar11;
        *(iVar4 + 0x14) = uVar13;
        trace_event_buffer_commit(&uStack_318);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    iVar7 = auVar27._0_8_;
    *extraout_x18_05 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_368 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_378 = *(iVar4 + 0x5e0);
    uVar11 = SUB84(puVar8,0);
    iStack_380 = 0;
    uStack_384 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar7 + 0x78);
    ppuStack_370 = &ppuStack_2e0;
    uStack_360 = uVar25;
    uStack_350 = uVar22;
    iStack_348 = iVar5;
    uStack_340 = uVar3;
    uStack_338 = puVar9 & 0xffffffff;
    uStack_330 = uVar17 & 0xffffffff;
    uStack_328 = uVar15 & 0xffffffff;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_384;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_380,puVar8);
        uVar3 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_380 + 0xe8) = &ppuStack_370;
            puVar8 = uStack_384;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006818;
            *(iStack_380 + 0x108) = 5;
            *(iVar4 + 8) = auVar27._8_4_;
            *(iVar4 + 0xc) = uVar11;
            *(iVar4 + 0x10) = uVar12;
            *(iVar4 + 0x14) = uVar14;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar8,iVar7,1,iStack_380,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_378) {
        auVar26 = __stack_chk_fail();
        uVar22 = tpidr_el2;
        *extraout_x18_06 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_irq_inj @ 0x080061f4 (size 296) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_irq_inj(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar *puVar8;
    uint uVar9;
    uint uVar10;
    uint64_t in_x3;
    uint uVar11;
    uint uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t in_x5;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_320 [12];
    uint32_t uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    code *pcStack_2f8;
    uint64_t uStack_2f0;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    uchar *puStack_270;
    ulong uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    uchar *puStack_210;
    code *pcStack_208;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    ulong uStack_178;
    uchar auStack_130 [12];
    uint32_t uStack_124;
    uint64_t uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uVar16 = arg3 & 0xffffffff;
    uVar18 = arg2 & 0xffffffff;
    uStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar7 = arg3, *piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffffac;
        iVar3 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0);
        uVar14 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar7 = uStack_54;
            uVar15 = -1L << (uVar14 & 0x3f);
            in_x4 = 1;
            uVar14 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar14 = uVar15 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(uStack_50 + 0x100) = uVar14;
            *(uStack_50 + 0x108) = 5;
            *(iVar3 + 8) = arg2;
            *(iVar3 + 0xc) = arg3;
            in_x3 = arg1;
            in_x5 = uStack_50;
            perf_trace_run_bpf_submit(iVar3,0x14);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006310;
    uStack_88 = 0x8006310;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar20 = *(iVar4 + 0x48);
    puStack_90 = &stack0xffffffffffffffc0;
    piStack_80 = piVar1;
    uStack_78 = uVar18;
    uStack_70 = uVar16;
    iStack_68 = arg1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar4), (uVar16 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar8 = 0x10;
        iVar3 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar7;
            trace_event_buffer_commit(&stack0xffffffffffffff38);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_108 = sym.perf_trace_gh_virtio_backend_queue_notify;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    uStack_120 = 0;
    uStack_124 = 0;
    iVar3 = tpidr_el1;
    puStack_110 = &stack0xffffffffffffff70;
    if ((*(uVar16 + 0x80) != 0) || (puVar7 = puVar8, *(iVar3 + *(uVar16 + 0x78)) != 0)) {
        puVar7 = &stack0xfffffffffffffedc;
        iVar3 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffee0);
        uVar18 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_120 + 0xe8) = &stack0xfffffffffffffef0;
            puVar7 = uStack_124;
            in_x4 = 1;
            *(uStack_120 + 0xf8) = &stack0xfffffffffffffed0;
            *(uStack_120 + 0x100) = ~(-1L << (uVar18 & 0x3f)) & 0x80063e4;
            *(uStack_120 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar8;
            in_x5 = uStack_120;
            perf_trace_run_bpf_submit(iVar3,0x14);
            in_x3 = uVar16;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_118) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006500;
    uStack_178 = 0x8006500;
    iVar3 = sp_el0;
    iStack_188 = *(iVar3 + 0x5e0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar20 = *(iVar4 + 0x48);
    uVar16 = in_x3;
    uVar18 = in_x4;
    uVar14 = in_x5;
    puStack_180 = &stack0xfffffffffffffef0;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar4), (uVar15 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar8 = 0x1c;
        iVar3 = trace_event_buffer_reserve(&stack0xfffffffffffffe48,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar7;
            *(iVar3 + 0x10) = in_x3;
            *(iVar3 + 0x14) = in_x4;
            *(iVar3 + 0x18) = in_x5;
            trace_event_buffer_commit(&stack0xfffffffffffffe48);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_188) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar5 = auVar26._0_8_;
    *extraout_x18_02 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_208 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar3 = sp_el0;
    iStack_218 = *(iVar3 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar19 = uVar18 & 0xffffffff;
    uVar21 = uVar16 & 0xffffffff;
    uVar22 = puVar8 & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(uVar5 + 0x78);
    uVar15 = uVar16;
    uVar13 = uVar18;
    puStack_210 = &stack0xfffffffffffffe80;
    if ((*(uVar5 + 0x80) != 0) || (puVar7 = puVar8, *piVar1 != 0)) {
        puVar7 = &stack0xfffffffffffffddc;
        iVar3 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffde0);
        uVar2 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_220 + 0xe8) = &stack0xfffffffffffffdf0;
            puVar7 = uStack_224;
            uVar13 = 1;
            *(iStack_220 + 0xf8) = &stack0xfffffffffffffdd0;
            *(iStack_220 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_220 + 0x108) = 5;
            *(iVar3 + 8) = auVar26._8_4_;
            *(iVar3 + 0xc) = puVar8;
            *(iVar3 + 0x10) = uVar16;
            *(iVar3 + 0x14) = uVar18;
            *(iVar3 + 0x18) = uVar14;
            uVar15 = uVar5;
            perf_trace_run_bpf_submit(iVar3,0x1c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_218) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar4 = auVar26._0_8_;
    uVar9 = uVar15;
    uVar11 = uVar13;
    uVar23 = tpidr_el2;
    *extraout_x18_03 = 0x8006730;
    uStack_268 = 0x8006730;
    iVar3 = sp_el0;
    iStack_278 = *(iVar3 + 0x5e0);
    uVar16 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar4 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar20 = uVar23;
    uVar12 = uVar11;
    uVar10 = uVar9;
    puStack_270 = &stack0xfffffffffffffdf0;
    piStack_260 = piVar1;
    uStack_258 = uVar22;
    uStack_250 = uVar21;
    uStack_248 = uVar19;
    uStack_240 = uVar17;
    uStack_238 = uVar5;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar7;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar4), (uVar18 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar8 = 0x18;
    iVar3 = trace_event_buffer_reserve(&stack0xfffffffffffffd58,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar26._8_4_;
        *(iVar3 + 0xc) = puVar7;
        *(iVar3 + 0x10) = uVar9;
        *(iVar3 + 0x14) = uVar11;
        trace_event_buffer_commit(&stack0xfffffffffffffd58);
    }
code_r0x080067e0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_278) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_2f8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar3 = sp_el0;
    iStack_308 = *(iVar3 + 0x5e0);
    uVar9 = SUB84(puVar8,0);
    iStack_310 = 0;
    uStack_314 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar6 + 0x78);
    puStack_300 = &stack0xfffffffffffffd90;
    uStack_2f0 = uVar24;
    uStack_2e0 = uVar23;
    iStack_2d8 = iVar4;
    uStack_2d0 = uVar16;
    uStack_2c8 = puVar7 & 0xffffffff;
    uStack_2c0 = uVar15 & 0xffffffff;
    uStack_2b8 = uVar13 & 0xffffffff;
    if ((*(iVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xfffffffffffffcec;
        iVar3 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffcf0,puVar8);
        uVar16 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_310 + 0xe8) = &stack0xfffffffffffffd00;
            puVar8 = uStack_314;
            *(iStack_310 + 0xf8) = &stack0xfffffffffffffce0;
            *(iStack_310 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x8006818;
            *(iStack_310 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = uVar9;
            *(iVar3 + 0x10) = uVar10;
            *(iVar3 + 0x14) = uVar12;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar8,iVar6,1,iStack_310,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_308) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_05 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_queue_notify @ 0x0800631c (size 200) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080064ac)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_queue_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint uVar12;
    uint uVar13;
    uint64_t in_x3;
    uint uVar14;
    uint uVar15;
    uint64_t in_x4;
    uint64_t uVar16;
    uint64_t in_x5;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    code *pcStack_298;
    uint64_t uStack_290;
    ulong uStack_280;
    int64_t iStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar20 = *(arg1 + 0x48);
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08006390;
    }
    else {
code_r0x08006390:
        puVar10 = 0x10;
        iVar4 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0xc) = arg3;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar3 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_queue_notify;
    pcStack_a8 = sym.perf_trace_gh_virtio_backend_queue_notify;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uStack_c0 = 0;
    uStack_c4 = 0;
    iVar4 = tpidr_el1;
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar3 + 0x80) != 0) || (puVar11 = puVar10, *(iVar4 + *(uVar3 + 0x78)) != 0)) {
        puVar11 = &uStack_c4;
        iVar4 = perf_trace_buf_alloc(0x14,&uStack_c0);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(uStack_c0 + 0xe8) = &puStack_b0;
            puVar11 = uStack_c4;
            in_x4 = 1;
            *(uStack_c0 + 0xf8) = auStack_d0;
            *(uStack_c0 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x80063e4;
            *(uStack_c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar10;
            in_x5 = uStack_c0;
            perf_trace_run_bpf_submit(iVar4,0x14);
            in_x3 = uVar3;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar5 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_00 = 0x8006500;
    uStack_118 = 0x8006500;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar20 = *(iVar5 + 0x48);
    uVar3 = in_x3;
    uVar8 = in_x4;
    uVar17 = in_x5;
    ppuStack_120 = &puStack_b0;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar3 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar10 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_158,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar11;
            *(iVar4 + 0x10) = in_x3;
            *(iVar4 + 0x14) = in_x4;
            *(iVar4 + 0x18) = in_x5;
            trace_event_buffer_commit(&uStack_158);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar7 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_1a8 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar19 = uVar8 & 0xffffffff;
    uVar21 = uVar3 & 0xffffffff;
    uVar22 = puVar10 & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar7 + 0x78);
    uVar6 = uVar3;
    uVar16 = uVar8;
    ppuStack_1b0 = &ppuStack_120;
    if ((*(uVar7 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_1c4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_1c0);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar11 = uStack_1c4;
            uVar16 = 1;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = puVar10;
            *(iVar4 + 0x10) = uVar3;
            *(iVar4 + 0x14) = uVar8;
            *(iVar4 + 0x18) = uVar17;
            uVar6 = uVar7;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar5 = auVar26._0_8_;
    uVar12 = uVar6;
    uVar14 = uVar16;
    uVar23 = tpidr_el2;
    *extraout_x18_02 = 0x8006730;
    uStack_208 = 0x8006730;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    uVar3 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar5 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar20 = uVar23;
    uVar15 = uVar14;
    uVar13 = uVar12;
    ppuStack_210 = &ppuStack_1b0;
    piStack_200 = piVar1;
    uStack_1f8 = uVar22;
    uStack_1f0 = uVar21;
    uStack_1e8 = uVar19;
    uStack_1e0 = uVar18;
    uStack_1d8 = uVar7;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar5,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(iVar5), (uVar8 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar10 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_248,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar26._8_4_;
        *(iVar4 + 0xc) = puVar11;
        *(iVar4 + 0x10) = uVar12;
        *(iVar4 + 0x14) = uVar14;
        trace_event_buffer_commit(&uStack_248);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar9 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_298 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_2a8 = *(iVar4 + 0x5e0);
    uVar12 = SUB84(puVar10,0);
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar9 + 0x78);
    ppuStack_2a0 = &ppuStack_210;
    uStack_290 = uVar24;
    uStack_280 = uVar23;
    iStack_278 = iVar5;
    uStack_270 = uVar3;
    uStack_268 = puVar11 & 0xffffffff;
    uStack_260 = uVar6 & 0xffffffff;
    uStack_258 = uVar16 & 0xffffffff;
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_2b4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_2b0,puVar10);
        uVar3 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_2b0 + 0xe8) = &ppuStack_2a0;
            puVar10 = uStack_2b4;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            *(iStack_2b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006818;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = uVar12;
            *(iVar4 + 0x10) = uVar13;
            *(iVar4 + 0x14) = uVar15;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar10,iVar9,1,iStack_2b0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_2a8) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_04 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_queue_notify @ 0x080063e4 (size 296) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_queue_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uchar *puVar8;
    uchar *puVar9;
    uint uVar10;
    uint uVar11;
    uint64_t in_x3;
    uint64_t uVar12;
    uint uVar13;
    uint uVar14;
    uint64_t in_x4;
    uint64_t uVar15;
    uint64_t in_x5;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    uint64_t unaff_x30;
    uchar auVar25 [12];
    uchar auVar26 [16];
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar *puStack_230;
    code *pcStack_228;
    uint64_t uStack_220;
    ulong uStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_50 = 0;
    uStack_54 = 0;
    iVar3 = tpidr_el1;
    if ((*(arg1 + 0x80) != 0) || (puVar8 = arg3, *(iVar3 + *(arg1 + 0x78)) != 0)) {
        puVar8 = &stack0xffffffffffffffac;
        iVar3 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0);
        uVar12 = _noop_llseek;
        if (iVar3 != 0) {
            *(uStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar8 = uStack_54;
            uVar17 = -1L << (uVar12 & 0x3f);
            in_x4 = 1;
            uVar12 = (~uVar17 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar17 | unaff_x30;
            }
            *(uStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(uStack_50 + 0x100) = uVar12;
            *(uStack_50 + 0x108) = 5;
            *(iVar3 + 8) = arg2;
            *(iVar3 + 0xc) = arg3;
            in_x5 = uStack_50;
            perf_trace_run_bpf_submit(iVar3,0x14);
            in_x3 = arg1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar4 = auVar25._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006500;
    uStack_a8 = 0x8006500;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar22 = *(iVar4 + 0x48);
    uVar12 = in_x3;
    uVar17 = in_x4;
    uVar16 = in_x5;
    puStack_b0 = &stack0xffffffffffffffc0;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar9 = 0x1c;
        iVar3 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar4);
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = puVar8;
            *(iVar3 + 0x10) = in_x3;
            *(iVar3 + 0x14) = in_x4;
            *(iVar3 + 0x18) = in_x5;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_138 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar3 = sp_el0;
    iStack_148 = *(iVar3 + 0x5e0);
    uVar18 = uVar16 & 0xffffffff;
    uVar19 = uVar17 & 0xffffffff;
    uVar20 = uVar12 & 0xffffffff;
    uVar21 = puVar9 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    uVar24 = auVar26._8_8_ & 0xffffffff;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(uVar6 + 0x78);
    uVar5 = uVar12;
    uVar15 = uVar17;
    puStack_140 = &stack0xffffffffffffff50;
    if ((*(uVar6 + 0x80) != 0) || (puVar8 = puVar9, *piVar1 != 0)) {
        puVar8 = &stack0xfffffffffffffeac;
        iVar3 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffeb0);
        uVar2 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            puVar8 = uStack_154;
            uVar15 = 1;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_150 + 0x108) = 5;
            *(iVar3 + 8) = auVar26._8_4_;
            *(iVar3 + 0xc) = puVar9;
            *(iVar3 + 0x10) = uVar12;
            *(iVar3 + 0x14) = uVar17;
            *(iVar3 + 0x18) = uVar16;
            uVar5 = uVar6;
            perf_trace_run_bpf_submit(iVar3,0x1c);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar4 = auVar26._0_8_;
    uVar10 = uVar5;
    uVar13 = uVar15;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006730;
    uStack_198 = 0x8006730;
    iVar3 = sp_el0;
    iStack_1a8 = *(iVar3 + 0x5e0);
    uVar12 = auVar26._8_8_ & 0xffffffff;
    uVar23 = *(iVar4 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar22 = uVar23;
    uVar14 = uVar13;
    uVar11 = uVar10;
    puStack_1a0 = &stack0xfffffffffffffec0;
    piStack_190 = piVar1;
    uStack_188 = uVar21;
    uStack_180 = uVar20;
    uStack_178 = uVar19;
    uStack_170 = uVar18;
    uStack_168 = uVar6;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar4,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar17 = trace_event_ignore_this_pid(iVar4), (uVar17 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar9 = 0x18;
    iVar3 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar4);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar26._8_4_;
        *(iVar3 + 0xc) = puVar8;
        *(iVar3 + 0x10) = uVar10;
        *(iVar3 + 0x14) = uVar13;
        trace_event_buffer_commit(&stack0xfffffffffffffe28);
    }
code_r0x080067e0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar7 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_228 = sym.perf_trace_gh_virtio_backend_irq;
    iVar3 = sp_el0;
    iStack_238 = *(iVar3 + 0x5e0);
    uVar10 = SUB84(puVar9,0);
    iStack_240 = 0;
    uStack_244 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar7 + 0x78);
    puStack_230 = &stack0xfffffffffffffe60;
    uStack_220 = uVar24;
    uStack_210 = uVar23;
    iStack_208 = iVar4;
    uStack_200 = uVar12;
    uStack_1f8 = puVar8 & 0xffffffff;
    uStack_1f0 = uVar5 & 0xffffffff;
    uStack_1e8 = uVar15 & 0xffffffff;
    if ((*(iVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffdbc;
        iVar3 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffdc0,puVar9);
        uVar12 = _noop_llseek;
        if (iVar3 != 0) {
            *(iStack_240 + 0xe8) = &stack0xfffffffffffffdd0;
            puVar9 = uStack_244;
            *(iStack_240 + 0xf8) = &stack0xfffffffffffffdb0;
            *(iStack_240 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x8006818;
            *(iStack_240 + 0x108) = 5;
            *(iVar3 + 8) = auVar25._8_4_;
            *(iVar3 + 0xc) = uVar10;
            *(iVar3 + 0x10) = uVar11;
            *(iVar3 + 0x14) = uVar14;
            perf_trace_run_bpf_submit(iVar3,0x1c,puVar9,iVar7,1,iStack_240,piVar1,0);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_238) {
        auVar26 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_03 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_ & 0xffffffff,puVar9 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_wait_event @ 0x0800650c (size 236) =====

//WARNING: Removing unreachable block (ram,0x080066d0)
//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_wait_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    uint64_t uVar13;
    uint uVar14;
    uint uVar15;
    uint64_t in_x4;
    uint64_t uVar16;
    uint64_t in_x5;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    ulong uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uint64_t uStack_190;
    uint64_t uStack_188;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar22 = *(arg1 + 0x48);
    uVar13 = arg4;
    uVar7 = in_x4;
    uVar17 = in_x5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar13 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) == 0))))
        goto code_r0x08006594;
    }
    else {
code_r0x08006594:
        puVar9 = 0x1c;
        iVar4 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar4 != 0) {
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0xc) = arg3;
            *(iVar4 + 0x10) = arg4;
            *(iVar4 + 0x14) = in_x4;
            *(iVar4 + 0x18) = in_x5;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar5 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_wait_event;
    pcStack_d8 = sym.perf_trace_gh_virtio_backend_wait_event;
    iVar4 = sp_el0;
    iStack_e8 = *(iVar4 + 0x5e0);
    uVar18 = uVar17 & 0xffffffff;
    uVar19 = uVar7 & 0xffffffff;
    uVar20 = uVar13 & 0xffffffff;
    uVar21 = puVar9 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    uVar24 = auVar25._8_8_ & 0xffffffff;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar5 + 0x78);
    uVar3 = uVar13;
    uVar16 = uVar7;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar5 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_f0);
        uVar2 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            puVar10 = uStack_f4;
            uVar16 = 1;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80065f8;
            *(iStack_f0 + 0x108) = 5;
            *(iVar4 + 8) = auVar25._8_4_;
            *(iVar4 + 0xc) = puVar9;
            *(iVar4 + 0x10) = uVar13;
            *(iVar4 + 0x14) = uVar7;
            *(iVar4 + 0x18) = uVar17;
            uVar3 = uVar5;
            perf_trace_run_bpf_submit(iVar4,0x1c);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar6 = auVar25._0_8_;
    uVar11 = uVar3;
    uVar14 = uVar16;
    uVar23 = tpidr_el2;
    *extraout_x18_00 = 0x8006730;
    uStack_138 = 0x8006730;
    iVar4 = sp_el0;
    iStack_148 = *(iVar4 + 0x5e0);
    uVar13 = auVar25._8_8_ & 0xffffffff;
    uVar23 = *(iVar6 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar22 = uVar23;
    uVar15 = uVar14;
    uVar12 = uVar11;
    ppuStack_140 = &puStack_e0;
    piStack_130 = piVar1;
    uStack_128 = uVar21;
    uStack_120 = uVar20;
    uStack_118 = uVar19;
    uStack_110 = uVar18;
    uStack_108 = uVar5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar6,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar9 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_178,iVar6);
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar25._8_4_;
        *(iVar4 + 0xc) = puVar10;
        *(iVar4 + 0x10) = uVar11;
        *(iVar4 + 0x14) = uVar14;
        trace_event_buffer_commit(&uStack_178);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_148) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar8 = auVar26._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_1c8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_1d8 = *(iVar4 + 0x5e0);
    uVar11 = SUB84(puVar9,0);
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar8 + 0x78);
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = uVar24;
    uStack_1b0 = uVar23;
    iStack_1a8 = iVar6;
    uStack_1a0 = uVar13;
    uStack_198 = puVar10 & 0xffffffff;
    uStack_190 = uVar3 & 0xffffffff;
    uStack_188 = uVar16 & 0xffffffff;
    if ((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_1e4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_1e0,puVar9);
        uVar13 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            puVar9 = uStack_1e4;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8006818;
            *(iStack_1e0 + 0x108) = 5;
            *(iVar4 + 8) = auVar26._8_4_;
            *(iVar4 + 0xc) = uVar11;
            *(iVar4 + 0x10) = uVar12;
            *(iVar4 + 0x14) = uVar15;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar9,iVar8,1,iStack_1e0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1d8) {
        auVar25 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_02 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar9 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_wait_event @ 0x080065f8 (size 324) =====

//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.perf_trace_gh_virtio_backend_wait_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    uchar *puVar6;
    uint uVar7;
    uint uVar8;
    uint64_t uVar9;
    uint uVar10;
    uint uVar11;
    uint64_t in_x4;
    uint64_t uVar12;
    uint32_t in_w5;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    ulong uVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uVar14 = in_w5;
    uVar15 = in_x4 & 0xffffffff;
    uVar16 = arg4 & 0xffffffff;
    uVar17 = arg3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(arg1 + 0x78);
    uVar9 = arg4;
    uVar12 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar5 = arg3, *piVar1 != 0)) {
        puVar5 = &stack0xffffffffffffff9c;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0);
        uVar13 = _noop_llseek;
        if (iVar2 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar5 = uStack_64;
            uVar13 = -1L << (uVar13 & 0x3f);
            uVar12 = 1;
            uVar9 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar13 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar9;
            *(iStack_60 + 0x108) = 5;
            *(iVar2 + 8) = arg2;
            *(iVar2 + 0xc) = arg3;
            *(iVar2 + 0x10) = arg4;
            *(iVar2 + 0x14) = in_x4;
            *(iVar2 + 0x18) = in_w5;
            uVar9 = arg1;
            perf_trace_run_bpf_submit(iVar2,0x1c);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return;
    }
    auVar20 = __stack_chk_fail();
    iVar3 = auVar20._0_8_;
    uVar7 = uVar9;
    uVar10 = uVar12;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x8006730;
    uStack_a8 = 0x8006730;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uVar13 = auVar20._8_8_ & 0xffffffff;
    uVar19 = *(iVar3 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar18 = uVar19;
    uVar11 = uVar10;
    uVar8 = uVar7;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_98 = uVar17;
    uStack_90 = uVar16;
    uStack_88 = uVar15;
    uStack_80 = uVar14;
    iStack_78 = arg1;
    if ((uVar18 >> 8 & 1) == 0) {
        puVar6 = puVar5;
        if ((uVar18 >> 7 & 1) != 0) {
            puVar6 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar3,0);
        }
        if (((uVar18 >> 6 & 1) != 0) ||
           (((uVar18 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar3), (uVar14 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar6 = 0x18;
    iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar3);
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar20._8_4_;
        *(iVar2 + 0xc) = puVar5;
        *(iVar2 + 0x10) = uVar7;
        *(iVar2 + 0x14) = uVar10;
        trace_event_buffer_commit(&stack0xffffffffffffff18);
    }
code_r0x080067e0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar4 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_138 = sym.perf_trace_gh_virtio_backend_irq;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar7 = SUB84(puVar6,0);
    iStack_150 = 0;
    uStack_154 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar4 + 0x78);
    puStack_140 = &stack0xffffffffffffff50;
    uStack_130 = arg2 & 0xffffffff;
    uStack_120 = uVar19;
    iStack_118 = iVar3;
    uStack_110 = uVar13;
    uStack_108 = puVar5 & 0xffffffff;
    uStack_100 = uVar9 & 0xffffffff;
    uStack_f8 = uVar12 & 0xffffffff;
    if ((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar6 = &stack0xfffffffffffffeac;
        iVar2 = perf_trace_buf_alloc(0x1c,&stack0xfffffffffffffeb0,puVar6);
        uVar9 = _noop_llseek;
        if (iVar2 != 0) {
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            puVar6 = uStack_154;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x8006818;
            *(iStack_150 + 0x108) = 5;
            *(iVar2 + 8) = auVar21._8_4_;
            *(iVar2 + 0xc) = uVar7;
            *(iVar2 + 0x10) = uVar8;
            *(iVar2 + 0x14) = uVar11;
            perf_trace_run_bpf_submit(iVar2,0x1c,puVar6,iVar4,1,iStack_150,piVar1,0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_148) {
        auVar20 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_01 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_virtio_backend_irq @ 0x0800673c (size 220) =====

//WARNING: Removing unreachable block (ram,0x080068ec)

void sym.trace_event_raw_event_gh_virtio_backend_irq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint uVar7;
    uint uVar8;
    uint in_w4;
    uint uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uchar auVar12 [16];
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar7 = arg4;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar10 = *(arg1 + 0x48);
    uVar8 = uVar7;
    uVar9 = in_w4;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar6 = arg3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar6 = NULL;
            uVar8 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x080067e0;
    }
    puVar6 = 0x18;
    iVar4 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        *(iVar4 + 0xc) = arg3;
        *(iVar4 + 0x10) = uVar7;
        *(iVar4 + 0x14) = in_w4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080067e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar5 = auVar11._0_8_;
    *extraout_x18 = sym.perf_trace_gh_virtio_backend_irq;
    pcStack_c8 = sym.perf_trace_gh_virtio_backend_irq;
    iVar4 = sp_el0;
    iStack_d8 = *(iVar4 + 0x5e0);
    uVar7 = SUB84(puVar6,0);
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar6 = &uStack_e4;
        iVar4 = perf_trace_buf_alloc(0x1c,&iStack_e0,puVar6);
        uVar3 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar6 = uStack_e4;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8006818;
            *(iStack_e0 + 0x108) = 5;
            *(iVar4 + 8) = auVar11._8_4_;
            *(iVar4 + 0xc) = uVar7;
            *(iVar4 + 0x10) = uVar8;
            *(iVar4 + 0x14) = uVar9;
            perf_trace_run_bpf_submit(iVar4,0x1c,puVar6,iVar5,1,iStack_e0,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_d8) {
        auVar12 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8006948;
        bpf_trace_run2(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_virtio_backend_irq @ 0x08006818 (size 316) =====

void sym.perf_trace_gh_virtio_backend_irq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint in_w4;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar4 = arg3;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffff9c;
        iVar5 = perf_trace_buf_alloc(0x1c,&stack0xffffffffffffffa0,arg3);
        uVar2 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            arg3 = uStack_64;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar2;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = uVar4;
            *(iVar5 + 0x10) = arg4;
            *(iVar5 + 0x14) = in_w4;
            perf_trace_run_bpf_submit(iVar5,0x1c,arg3,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8006948;
    bpf_trace_run2(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_irq_inj @ 0x08006954 (size 44) =====

void sym.__bpf_trace_gh_virtio_backend_irq_inj(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_queue_notify @ 0x08006980 (size 44) =====

void sym.__bpf_trace_gh_virtio_backend_queue_notify(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_wait_event @ 0x080069ac (size 56) =====

void sym.__bpf_trace_gh_virtio_backend_wait_event(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    uint in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4,in_w5);
    return;
}


// ===== sym.__bpf_trace_gh_virtio_backend_irq @ 0x080069e4 (size 52) =====

void sym.__bpf_trace_gh_virtio_backend_irq(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff,in_w4);
    return;
}


// ===== sym.gh_virtio_backend_ioctl @ 0x08006a18 (size 3652) =====

void sym.gh_virtio_backend_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t arg1_00;
    char *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    code *pcVar11;
    uint32_t uVar12;
    code *pcVar13;
    uint32_t *puVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_70 = *(iVar6 + 0x5e0);
    iVar5 = arg2;
    _raw_spin_lock(obj.gh_create_vm.__key);
    for (pcVar11 = _obj.vm_list; pcVar11 != obj.vm_list; pcVar11 = *pcVar11) {
        iVar4 = strcmp(pcVar11 + 0x10,arg1);
        if (iVar4 == 0) goto code_r0x08006a98;
    }
    pcVar11 = NULL;
code_r0x08006a98:
    auVar17 = _raw_spin_unlock(obj.gh_create_vm.__key);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    iStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    if (pcVar11 == NULL) {
code_r0x08007590:
        iVar6 = -0x16;
        goto code_r0x08007594;
    }
    if (iVar5 < -0x3fd74d97) {
        if (iVar5 < -0x3fef4d9c) {
            if (iVar5 != -0x7ff74d9f) {
                if (iVar5 != -0x3ffb4d95) goto code_r0x080074ec;
                if (arg3 != 0) {
                    pcVar1 = pcVar11 + 0x3c;
                    _raw_spin_lock(pcVar1);
                    for (pcVar13 = *(pcVar11 + 0x40); pcVar13 != pcVar11 + 0x40; pcVar13 = *pcVar13) {
                        if (*(pcVar13 + 0x7c) == arg3) {
                            if ((*(pcVar13 + 0x48) != -1) && (pcVar13 != NULL)) {
                                *(pcVar13 + 0x48) = *(pcVar13 + 0x48) + 1;
                                _raw_spin_unlock(pcVar1);
                                iVar6 = *(pcVar13 + 0x88);
                                *(pcVar13 + 0x50) = 1;
                                _raw_spin_lock(iVar6 + 0x3c);
                                iVar5 = *(pcVar13 + 0x48);
                                *(pcVar13 + 0x48) = iVar5 + -1;
                                if ((iVar5 + -1 == 0) && (*(pcVar13 + 0x4c) != 0)) {
                                    __wake_up(pcVar13 + 0x30,3,1,0);
                                }
                                _raw_spin_unlock(iVar6 + 0x3c);
                                goto code_r0x080074d0;
                            }
                            break;
                        }
                    }
                    _raw_spin_unlock(pcVar1);
                }
                goto code_r0x08007590;
            }
            iVar6 = sym._copy_to_user(arg3,auVar17,8);
joined_r0x08006fe8:
            if (iVar6 == 0) goto code_r0x080074d0;
        }
        else if (iVar5 == -0x3fef4d9c) {
            iVar6 = sym._copy_from_user(&stack0xfffffffffffffef0,arg3,0x10);
            if (iVar6 == 0) {
                if ((uStack_110 == 0) || (iVar6 = sym.vb_dev_get(pcVar11,uStack_110 & 0xffffffff), iVar6 == 0))
                goto code_r0x08007590;
                iVar2 = iVar6 + 0x18;
                uVar8 = sp_el0;
                do {
                    if (*(iVar6 + 0x54) == 0) {
                        uStack_120 = 0;
                        uStack_118 = 0;
                        uStack_130 = 0;
                        uStack_128 = 0;
                        uStack_138 = 0;
                        init_wait_entry(&stack0xfffffffffffffec8,0);
                        iVar7 = prepare_to_wait_event(iVar2,&stack0xfffffffffffffec8,1);
                        iVar5 = *(iVar6 + 0x54);
                        while (iVar5 == 0) {
                            if (iVar7 != 0) {
                                if (iVar7 == 0) goto code_r0x08006e10;
                                sym.vb_dev_put(iVar6);
                                iVar6 = iVar7;
                                goto code_r0x08007594;
                            }
                            schedule();
                            iVar7 = prepare_to_wait_event(iVar2,&stack0xfffffffffffffec8,1);
                            iVar5 = *(iVar6 + 0x54);
                        }
                        finish_wait(iVar2,&stack0xfffffffffffffec8);
                    }
code_r0x08006e10:
                    uVar8 = _raw_spin_lock_irqsave(iVar6 + 0x10);
                    uVar16 = *(iVar6 + 0x70);
                    *(iVar6 + 0x68) = 0;
                    *(iVar6 + 0x58) = 0;
                    *(iVar6 + 0x54) = 0;
                    if ((uVar16 & 0x60) == 0) {
                        uVar15 = uVar16;
                        if ((uVar15 >> 1 & 1) == 0) {
                            if ((uVar15 >> 3 & 1) == 0) {
                                iVar7 = *(iVar6 + 0x1d0);
                                if ((uVar16 & 1) == 0) {
                                    if ((uVar15 >> 2 & 1) != 0) {
                                        *(iVar6 + 0x60) = 0;
                                        *(iVar6 + 0x68) = 4;
                                        *(iVar6 + 0x70) = uVar16 & 0xfffffffffffffffb;
code_r0x08006f04:
                                        uVar16 = sym.readl_relaxed(iVar7 + 100);
                                        *(iVar6 + 0x58) = uVar16 & 0xffffffff;
                                    }
                                }
                                else {
                                    uVar16 = uVar16 & 0xfffffffffffffffe;
                                    *(iVar6 + 0x70) = uVar16;
                                    if ((*(iVar6 + 0x60) != 0) && (*(iVar6 + 0x50) != 0)) {
                                        sym.signal_vqs(iVar6);
                                        uVar16 = *(iVar6 + 0x70);
                                    }
                                    if (uVar16 != 0) {
                                        *(iVar6 + 0x68) = uVar16;
                                        *(iVar6 + 0x70) = 0;
                                        *(iVar6 + 0x58) = *(iVar6 + 0x60);
                                        *(iVar6 + 0x60) = 0;
                                        if ((uVar16 >> 2 & 1) != 0) goto code_r0x08006f04;
                                    }
                                }
                            }
                            else {
                                uVar16 = uVar16 & 0xfffffffffffffff7;
                                *(iVar6 + 0x70) = uVar16;
                                if (*(iVar6 + 0x50) == 0) {
                                    *(iVar6 + 0x68) = 8;
                                    goto joined_r0x08006e98;
                                }
                            }
                        }
                        else {
                            uVar16 = uVar16 & 0xfffffffffffffffd;
                            *(iVar6 + 0x68) = 2;
                            *(iVar6 + 0x70) = uVar16;
joined_r0x08006e98:
                            if (uVar16 != 0) {
                                *(iVar6 + 0x54) = 1;
                            }
                        }
                    }
                    else {
                        *(iVar6 + 0x68) = 0x100;
                    }
                    _raw_spin_unlock_irqrestore(iVar6 + 0x10,uVar8);
                } while (*(iVar6 + 0x68) == 0);
                uStack_110 = CONCAT44(*(iVar6 + 0x68),uStack_110);
                uStack_108 = CONCAT44(uStack_108._4_4_,*(iVar6 + 0x58));
                auVar17 = sym.vb_dev_put(iVar6);
                iVar6 = sym._copy_to_user(arg3,auVar17,0x10);
                goto joined_r0x08006fe8;
            }
        }
        else {
            if (iVar5 == -0x3fef4d98) {
                sym._copy_from_user(&stack0xffffffffffffff38,arg3,0x10);
                return;
            }
            if (iVar5 != -0x3fef4d96) goto code_r0x080074ec;
            iVar6 = sym._copy_from_user(&stack0xffffffffffffff00,arg3,0x10);
            if (iVar6 == 0) {
                iVar6 = -0x16;
                if ((uStack_100 != 0) && (uStack_f8 < 2)) {
                    iVar6 = sym.vb_dev_get(pcVar11,uStack_100 & 0xffffffff);
                    if (iVar6 == 0) goto code_r0x08007590;
                    if (*(iVar6 + 0x1b8) == 0) goto code_r0x0800758c;
                    CallHyperVisor(0x6051);
                    uStack_138 = 0;
                    iVar5 = *(iVar6 + 0x1b8);
                    uVar3 = uStack_f8;
                    if (iVar5 != 0) {
                        uVar3 = 0;
                    }
                    auVar17 = sym.vb_dev_put(iVar6);
                    if (iVar5 == 0) {
                        uStack_f8 = CONCAT44(uVar3,uStack_f8);
                        iVar6 = sym._copy_to_user(arg3,auVar17,0x10);
                        goto joined_r0x08006fe8;
                    }
                    iVar6 = iVar5;
                }
                goto code_r0x08007594;
            }
        }
        goto code_r0x08007344;
    }
    if (5 < iVar5 + 0xbfef4d9eU) {
        if (iVar5 == -0x3fd74d97) {
            iVar6 = sym._copy_from_user(&stack0xffffffffffffff10,arg3,0x28);
            if (iVar6 == 0) {
                iVar6 = -0x16;
                if ((uStack_f0 != 0) && (uStack_f0._4_4_ < 4)) {
                    iVar6 = sym.vb_dev_get(pcVar11,uStack_f0 & 0xffffffff);
                    if (iVar6 == 0) goto code_r0x08007590;
                    if (*(iVar6 + 0x1b8) == 0) goto code_r0x0800758c;
                    CallHyperVisor(0x6052);
                    uStack_138 = 0;
                    iVar5 = *(iVar6 + 0x1b8);
                    uVar15 = 0;
                    if (iVar5 == 0) {
                        uVar15 = uStack_f0._4_4_;
                    }
                    auVar17 = sym.vb_dev_put(iVar6);
                    if (iVar5 == 0) {
                        uStack_e8 = uVar15;
                        uStack_e0 = 0;
                        uStack_d8 = 0;
                        uStack_d0 = 0;
                        iVar6 = sym._copy_to_user(arg3,auVar17,0x28);
                        goto joined_r0x08006fe8;
                    }
                    iVar6 = iVar5;
                }
                goto code_r0x08007594;
            }
        }
        else {
            if (iVar5 != 0x4008b26d) goto code_r0x080074ec;
            iVar6 = sym._copy_from_user(&stack0xffffffffffffff48,arg3,8);
            if (iVar6 == 0) {
                if (((uStack_b8 != 0) && (iVar6 = sym.vb_dev_get(pcVar11,uStack_b8 & 0xffffffff), iVar6 != 0)) &&
                   (*(iVar6 + 0x1b8) != 0)) {
                    CallHyperVisor(0x6054);
                    uStack_138 = 0;
                    sym.vb_dev_put(iVar6);
                    goto code_r0x080074d0;
                }
                goto code_r0x08007590;
            }
        }
        goto code_r0x08007344;
    }
    //switch table (6 cases) at 0x8003720
    switch(*((iVar5 + 0xbfef4d9eU) * 4 + 0x8003720) + 0x8006bdc) {
    case 0x8006bf0:
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff80,arg3,0x10);
        if (iVar6 == 0) {
            if (uStack_78 < 4) {
                if (uStack_80._4_4_ != 1) {
code_r0x080074d8:
                    iVar6 = -0x5f;
                    goto code_r0x08007594;
                }
                iVar6 = sym.vb_dev_get(pcVar11,uStack_80 & 0xffffffff);
                if (iVar6 != 0) {
                    iVar5 = sym.vb_dev_ioeventfd(iVar6,&stack0xffffffffffffff80);
code_r0x080071bc:
                    sym.vb_dev_put(iVar6);
                    iVar6 = iVar5;
                    goto code_r0x08007594;
                }
            }
            goto code_r0x08007590;
        }
        break;
    case 0x8007094:
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff60,arg3,0x10);
        if (iVar6 == 0) {
            iVar6 = -0x16;
            if ((uStack_a0 != 0) && (uStack_98 < 2)) {
                iVar6 = sym.vb_dev_get(pcVar11,uStack_a0 & 0xffffffff);
                if (iVar6 == 0) goto code_r0x08007590;
                if (1 < uStack_98) {
code_r0x08007778:
    //WARNING: Does not return
                    pcVar11 = SoftwareBreakpoint(0x5512,0x800777c);
                    (*pcVar11)();
                }
                *(iVar6 + (uStack_98 & 0xffffffff) * 4 + 0x170) = uStack_98._4_4_;
                if (1 < uStack_98) goto code_r0x08007778;
                uVar16 = *(iVar6 + 0x1b8);
                CallHyperVisor(0x604f);
                uStack_138 = 0;
                sym.vb_dev_put(iVar6);
                if (uVar16 == 0) goto code_r0x080074d0;
                uVar10 = uStack_98 & 0xffffffff;
                if (1 < uStack_98) goto code_r0x08007778;
                uVar8 = *(pcVar11 + 0x28);
                pcVar9 = "%s: set_features %d/%x failed ret %d\n";
                uVar3 = *(iVar6 + uVar10 * 4 + 0x170);
code_r0x08007624:
                _dev_err(uVar8,pcVar9,"gh_virtio_backend",uVar10,uVar3,uVar16 & 0xffffffff);
                iVar6 = uVar16;
            }
            goto code_r0x08007594;
        }
        break;
    case 0x800716c:
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff70,arg3,0x10);
        if (iVar6 != 0) break;
        iVar6 = -0x16;
        if ((uStack_90 != 0) && (0 < uStack_88)) {
            if (uStack_90._4_4_ != 1) goto code_r0x080074d8;
            iVar6 = sym.vb_dev_get(pcVar11,uStack_90 & 0xffffffff);
            if (iVar6 != 0) {
                iVar5 = sym.vb_dev_irqfd(iVar6,&stack0xffffffffffffff70);
                goto code_r0x080071bc;
            }
            goto code_r0x08007590;
        }
        goto code_r0x08007594;
    case 0x80071d4:
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff50,arg3,0x10);
        if (iVar6 == 0) {
            iVar6 = -0x16;
            if ((uStack_b0 == 0) || (3 < uStack_a8)) goto code_r0x08007594;
            iVar6 = sym.vb_dev_get(pcVar11,uStack_b0 & 0xffffffff);
            if (iVar6 == 0) goto code_r0x08007590;
            if (3 < uStack_a8) goto code_r0x08007778;
            *(iVar6 + (uStack_a8 & 0xffffffff) * 4 + 0x178) = uStack_a8._4_4_;
            if (3 < uStack_a8) goto code_r0x08007778;
            uVar16 = *(iVar6 + 0x1b8);
            CallHyperVisor(0x6050);
            uStack_138 = 0;
            sym.vb_dev_put(iVar6);
            if (uVar16 != 0) {
                uVar10 = uStack_a8 & 0xffffffff;
                if (3 < uStack_a8) goto code_r0x08007778;
                uVar8 = *(pcVar11 + 0x28);
                pcVar9 = "%s: set_queue_num_max %d/%x failed ret %d\n";
                uVar3 = *(iVar6 + uVar10 * 4 + 0x178);
                goto code_r0x08007624;
            }
code_r0x080074d0:
            iVar6 = 0;
            goto code_r0x08007594;
        }
        break;
    case 0x80072b8:
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff38,arg3,0x10);
        if (iVar6 == 0) {
            iVar6 = sym.vb_dev_get(pcVar11,uStack_c8 & 0xffffffff);
            if (iVar6 == 0) goto code_r0x08007590;
            iVar2 = iVar6 + 0x188;
            mutex_lock(iVar2);
            if (uStack_c8 != 0) {
                if (((uStack_c8._4_4_ != 0) && (uStack_c8._4_4_ <= *(iVar6 + 0x1d8))) && (iStack_c0 != 0)) {
                    if (*(iVar6 + 0x1c0) == 0) {
                        if (*(iVar6 + 0x1d0) == 0) goto code_r0x08007580;
                        arg1_00 = __get_free_pages(0xdc0,0);
                        iVar7 = iStack_c0;
                        *(iVar6 + 0x1c0) = arg1_00;
                        if (arg1_00 == 0) {
                            mutex_unlock(iVar2);
                            sym.vb_dev_put(iVar6);
                            iVar6 = -0xc;
                        }
                        else {
                            uVar16 = uStack_c8 >> 0x20;
                            if (uStack_c8 < 0) goto code_r0x08007770;
                            __check_object_size(arg1_00,uVar16,0);
                            iVar7 = sym._copy_from_user(arg1_00,iVar7,uVar16);
                            if (iVar7 == 0) {
                                iVar7 = 0;
                                *(iVar6 + 0x1c8) = uStack_c8._4_4_;
                                do {
                                    iVar7 = iVar7 + 4;
                                } while (iVar7 != 0x10);
                                if (3 < *(iVar6 + 0x1c8)) {
                                    uVar15 = *(iVar6 + 0x1c8) >> 2;
                                    iVar7 = *(iVar6 + 0x1d0);
                                    puVar14 = *(iVar6 + 0x1c0);
                                    uVar12 = uVar15;
                                    do {
                                        sym.writel_relaxed(*puVar14,iVar7);
                                        uVar12 = uVar12 - 1;
                                        iVar7 = iVar7 + 4;
                                        puVar14 = puVar14 + 1;
                                    } while (uVar12 != 0);
                                    uVar12 = 0;
                                    do {
                                        uVar12 = uVar12 + 1;
                                    } while (uVar15 != uVar12);
                                }
                                mutex_unlock(iVar2);
                                sym.vb_dev_put(iVar6);
                                goto code_r0x080074d0;
                            }
                            free_pages(*(iVar6 + 0x1c0),0);
                            *(iVar6 + 0x1c0) = 0;
                            mutex_unlock(iVar2);
                            sym.vb_dev_put(iVar6);
                            iVar6 = -0xe;
                        }
                    }
                    else {
                        mutex_unlock(iVar2);
                        sym.vb_dev_put(iVar6);
                        iVar6 = -0x10;
                    }
                    goto code_r0x08007594;
                }
            }
code_r0x08007580:
            mutex_unlock(iVar2);
code_r0x0800758c:
            sym.vb_dev_put(iVar6);
            goto code_r0x08007590;
        }
        break;
    case 0x80074ec:
code_r0x080074ec:
        _dev_err(*(pcVar11 + 0x28),"%s: cmd %x not supported\n","gh_virtio_backend",arg2 & 0xffffffff);
        goto code_r0x08007590;
    }
code_r0x08007344:
    iVar6 = -0xe;
code_r0x08007594:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x08007770:
    //WARNING: Does not return
    pcVar11 = SoftwareBreakpoint(0x800,0x8007774);
    (*pcVar11)();
}


// ===== sym.vb_dev_get @ 0x08007874 (size 156) =====

int64_t sym.vb_dev_get(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x3c);
    piVar1 = *(arg1 + 0x40);
    do {
        if (piVar1 == arg1 + 0x40) {
            piVar2 = 0;
code_r0x080078ec:
            _raw_spin_unlock(arg1 + 0x3c);
            return piVar2;
        }
        if (*(piVar1 + 0x7c) == arg2) {
            piVar2 = 0;
            if ((*(piVar1 + 9) != -1) && (piVar1 != NULL)) {
                *(piVar1 + 9) = *(piVar1 + 9) + 1;
                piVar2 = piVar1;
            }
            goto code_r0x080078ec;
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.vb_dev_ioeventfd @ 0x08007910 (size 204) =====

uint64_t sym.vb_dev_ioeventfd(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0xc) < 1) {
        uVar4 = 0xffffffea;
    }
    else {
        uVar1 = *(arg2 + 8);
        uVar3 = _raw_spin_lock_irqsave(arg1 + 0x10);
        if (3 < uVar1) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80079dc);
            (*pcVar2)();
        }
        piVar5 = arg1 + uVar1 * 0x10 + 0x90;
        if (*piVar5 < 1) {
            uVar4 = eventfd_ctx_fdget(*(arg2 + 0xc));
            if (uVar4 < 0xfffffffffffff001) {
                *(arg1 + uVar1 * 0x10 + 0x98) = uVar4;
                uVar4 = 0;
                *piVar5 = *(arg2 + 0xc);
            }
        }
        else {
            uVar4 = 0xfffffff0;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x10,uVar3);
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.vb_dev_put @ 0x080079dc (size 112) =====

void sym.vb_dev_put(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x88) + 0x3c;
    _raw_spin_lock(iVar1);
    iVar2 = *(arg1 + 0x48) + -1;
    *(arg1 + 0x48) = iVar2;
    if ((iVar2 == 0) && (*(arg1 + 0x4c) != 0)) {
        __wake_up(arg1 + 0x30,3,1,0);
    }
    _raw_spin_unlock(iVar1);
    return;
}


// ===== sym.vb_dev_irqfd @ 0x08007a4c (size 332) =====

uint64_t sym.vb_dev_irqfd(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x110) == 0) {
        uVar4 = __fdget(*(arg2 + 8));
        uVar2 = uVar4 & 0xfffffffffffffffc;
        if (uVar2 == 0) goto code_r0x08007a88;
        uVar6 = eventfd_ctx_fileget(uVar2);
        if (uVar6 < 0xfffffffffffff001) {
            *(arg1 + 0xd0) = uVar6;
            *(arg1 + 0x110) = uVar2;
            *(arg1 + 0x118) = uVar4 & 3;
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            *(arg1 + 0xd8) = 0;
            *(arg1 + 0x120) = 0xfffffffe0;
            *(arg1 + 0xe0) = 0;
            *(arg1 + 0xe8) = sym.vb_dev_irqfd_wakeup.1016b347f3458ea20e90756fd466f079.cfi_jt;
            *(arg1 + 0x128) = arg1 + 0x128;
            *(arg1 + 0x130) = arg1 + 0x128;
            *(arg1 + 0x100) = sym.vb_dev_irqfd_ptable_queue_proc.1016b347f3458ea20e90756fd466f079.cfi_jt;
            *(arg1 + 0x138) = sym.irqfd_shutdown.1016b347f3458ea20e90756fd466f079.cfi_jt;
            *(arg1 + 0x108) = 0xffffffff;
            pcVar5 = *(*(uVar2 + 0x28) + 0x48);
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0x843425aa714dba1b,pcVar5,0x8001930);
                (*pcVar5)(uVar2,arg1 + 0x100);
            }
            uVar6 = 0;
            goto code_r0x08007a98;
        }
        if ((uVar4 & 1) != 0) {
            fput(uVar2);
        }
    }
    else {
code_r0x08007a88:
        uVar6 = 0xfffffff0;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
code_r0x08007a98:
    return uVar6 & 0xffffffff;
}


// ===== sym.signal_vqs @ 0x08007bc8 (size 316) =====

void sym.signal_vqs(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    uVar1 = sp_el0;
    do {
        uVar4 = 1 << (iVar3 & 0x1f);
        if ((*(arg1 + 0x60) & uVar4) != 0) {
            iVar2 = *(arg1 + iVar3 * 0x10 + 0x98);
            if (iVar2 != 0) {
                eventfd_signal(iVar2,1);
                *(arg1 + 0x60) = *(arg1 + 0x60) & (uVar4 ^ 0xffffffffffffffff);
            }
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    return;
}


// ===== sym.readl_relaxed @ 0x08007d1c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8007d20);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8007d54);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08007d8c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8007da8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8007dd0);
    return;
}


// ===== sym.gh_virtio_backend_mmap @ 0x08007e04 (size 236) =====

ulong sym.gh_virtio_backend_mmap(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_create_vm.__key);
    pcVar4 = _obj.vm_list;
    while( true ) {
        if (pcVar4 == obj.vm_list) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            return 0xffffffea;
        }
        iVar1 = strcmp(pcVar4 + 0x10,arg1);
        if (iVar1 == 0) break;
        pcVar4 = *pcVar4;
    }
    _raw_spin_unlock(obj.gh_create_vm.__key);
    if (pcVar4 == NULL) {
        return 0xffffffea;
    }
    iVar3 = *(arg2 + 8) - *arg2;
    if (iVar3 != *(pcVar4 + 0x58)) {
        return 0xffffffea;
    }
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    uVar2 = remap_pfn_range(arg2,*arg2,*(pcVar4 + 0x50) >> 0xc,iVar3,*(arg2 + 0x48));
    if (uVar2 != 0) {
        _dev_err(*(pcVar4 + 0x28),"%s: ioremap_pfn_range failed\n","gh_virtio_backend");
        return 0xfffffff5;
    }
    return uVar2;
}


// ===== sym.gh_parse_virtio_properties @ 0x08007ef0 (size 1868) =====

uint sym.gh_parse_virtio_properties(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    char *pcVar11;
    ulong *in_x18;
    int64_t unaff_x19;
    code *pcVar12;
    ulong uVar13;
    int64_t unaff_x22;
    uint64_t uVar14;
    uint uVar15;
    code *pcVar16;
    uint32_t uVar17;
    code *pcVar18;
    ulong unaff_x30;
    uint32_t uStack_d8;
    int iStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar15 = 0xffffffea;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_d8 = 0;
    if ((arg1 != 0) && (unaff_x19 = arg2, arg2 != 0)) {
        uVar13 = *(arg1 + 0x2f0);
        iVar6 = of_find_property(uVar13,"virtio-backends",&uStack_d8);
        unaff_x22 = arg1;
        if ((iVar6 == 0) || (uStack_d8 < 4)) {
            uVar15 = 0;
        }
        else {
            uVar17 = 0;
            uVar3 = uStack_d8 >> 2;
            do {
                iVar6 = of_parse_phandle(uVar13,"virtio-backends",uVar17);
                if (iVar6 == 0) {
                    _dev_err(arg1,"%s: Can\'t parse virtio-backends property %d\n","gh_virtio_backend",uVar17);
                    uVar15 = 0xffffffea;
                    break;
                }
                iStack_d4 = 0;
                iVar7 = of_parse_phandle(iVar6,"qcom,vm",0);
                if (iVar7 == 0) {
                    pcVar11 = "%s: \'qcom,vm\' property not present\n";
code_r0x0800855c:
                    _dev_err(arg1,pcVar11,"gh_virtio_backend");
                    uVar15 = 0xffffffea;
code_r0x080083e4:
                    mutex_lock(obj.vm_mutex);
                    _raw_spin_lock(obj.gh_create_vm.__key);
                    pcVar16 = _obj.vm_list;
                    if (_obj.vm_list == obj.vm_list) goto code_r0x08008470;
                    goto code_r0x08008408;
                }
                iVar8 = strnlen(arg2,0x10);
                if (iVar8 == 0x10) {
                    _dev_err(arg1,"%s: VM name %s too long\n","gh_virtio_backend",arg2);
                    uVar15 = 0xffffffea;
                    goto code_r0x080083e4;
                }
                iVar5 = of_property_read_variable_u32_array(iVar6,"qcom,label",&iStack_d4,1,0);
                if ((iVar5 < 0) || (iStack_d4 == 0)) {
                    pcVar11 = "%s: Invalid qcom,label property\n";
                    goto code_r0x0800855c;
                }
                mutex_lock(obj.vm_mutex);
                _raw_spin_lock(obj.gh_create_vm.__key);
                for (pcVar16 = _obj.vm_list; pcVar16 != obj.vm_list; pcVar16 = *pcVar16) {
                    iVar5 = strcmp(pcVar16 + 0x10,arg2);
                    if (iVar5 == 0) {
                        _raw_spin_unlock(obj.gh_create_vm.__key);
                        if (pcVar16 == NULL) goto code_r0x08008050;
                        goto code_r0x08008218;
                    }
                }
                _raw_spin_unlock(obj.gh_create_vm.__key);
code_r0x08008050:
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                iStack_d0 = 0;
                iStack_c8 = 0;
                iVar5 = of_address_to_resource(iVar7,0,&iStack_d0);
                if (((iVar5 != 0) || (iStack_d0 == 0)) || (iStack_c8 + 1 == iStack_d0)) {
                    _printk(0x80032e6,"gh_virtio_backend",arg2);
code_r0x080083d4:
                    mutex_unlock(obj.vm_mutex);
                    uVar15 = 0xffffffed;
                    unaff_x22 = arg1;
                    goto code_r0x080083e4;
                }
                pcVar16 = devm_kmalloc(arg1,0x60,0xdc0);
                if (pcVar16 == NULL) goto code_r0x080083d4;
                pcVar1 = pcVar16 + 0x10;
                strscpy(pcVar1,arg2,0x10);
                *(pcVar16 + 0x28) = arg1;
                uStack_6c = 0;
                iVar6 = of_find_property(iVar7,"shared-buffers",&uStack_6c);
                if ((iVar6 == 0) || (uStack_6c < 4)) {
                    _dev_err(*(pcVar16 + 0x28),"%s: No shared-buffers specified for vm %s\n","gh_virtio_backend",
                             pcVar1);
                    goto code_r0x080083d4;
                }
                uVar4 = uStack_6c >> 2;
                iVar6 = devm_kmalloc(*(pcVar16 + 0x28),uVar4 * 0x68,0xdc0);
                *(pcVar16 + 0x30) = iVar6;
                if (iVar6 == 0) goto code_r0x080083d4;
                uVar14 = 0;
                uVar2 = uVar4;
                if (uVar4 < 2) {
                    uVar2 = 1;
                }
                iVar6 = 0x60;
                iVar8 = arg1;
                do {
                    iVar9 = of_parse_phandle(iVar7,"shared-buffers",uVar14 & 0xffffffff);
                    if (iVar9 == 0) {
                        iVar6 = *(pcVar16 + 0x28);
                        pcVar11 = "%s: Can\'t parse shared-buffer property %d\n";
code_r0x080083bc:
                        _dev_err(iVar6,pcVar11,"gh_virtio_backend",uVar14 & 0xffffffff);
                        arg1 = iVar8;
                        goto code_r0x080083d4;
                    }
                    iVar5 = of_address_to_resource(iVar9,0,*(pcVar16 + 0x30) + iVar6 + -0x60);
                    iVar8 = iVar9;
                    if (iVar5 != 0) {
                        iVar6 = *(pcVar16 + 0x28);
                        pcVar11 = "%s: Invalid address at index %d\n";
                        goto code_r0x080083bc;
                    }
                    iVar5 = of_property_read_variable_u32_array(iVar9,"gunyah-label",*(pcVar16 + 0x30) + iVar6,1,0);
                    if (iVar5 < 0) {
                        iVar6 = *(pcVar16 + 0x28);
                        pcVar11 = "%s: gunyah-label property absent at index %d\n";
                        goto code_r0x080083bc;
                    }
                    uVar14 = uVar14 + 1;
                    iVar6 = iVar6 + 0x68;
                } while (uVar2 != uVar14);
                *(pcVar16 + 0x38) = uVar4;
                *(pcVar16 + 0x3c) = 0;
                *(pcVar16 + 0x50) = iStack_d0;
                *(pcVar16 + 0x58) = (iStack_c8 - iStack_d0) + 1;
                *(pcVar16 + 0x40) = pcVar16 + 0x40;
                *(pcVar16 + 0x48) = pcVar16 + 0x40;
                _raw_spin_lock(obj.gh_create_vm.__key);
                pcVar12 = _obj.vm_list;
                uVar14 = __list_add_valid(pcVar16,obj.vm_list,_obj.vm_list);
                if ((uVar14 & 1) != 0) {
                    *(pcVar12 + 8) = pcVar16;
                    *pcVar16 = pcVar12;
                    *(pcVar16 + 8) = obj.vm_list;
                    _obj.vm_list = pcVar16;
                }
                _raw_spin_unlock(obj.gh_create_vm.__key);
                _printk(0x8002489,"gh_virtio_backend",pcVar1,*(pcVar16 + 0x50),*(pcVar16 + 0x58));
code_r0x08008218:
                pcVar1 = pcVar16 + 0x3c;
                _raw_spin_lock(pcVar1);
                pcVar18 = pcVar16 + 0x40;
                for (pcVar12 = *pcVar18; pcVar12 != pcVar18; pcVar12 = *pcVar12) {
                    if (iStack_d4 == *(pcVar12 + 0x7c)) {
                        _raw_spin_unlock(pcVar1);
                        if (pcVar12 == NULL) goto code_r0x08008268;
                        unaff_x22 = *(pcVar12 + 0x88) + 0x3c;
                        _raw_spin_lock(unaff_x22);
                        iVar5 = *(pcVar12 + 0x48);
                        *(pcVar12 + 0x48) = iVar5 + -1;
                        if ((iVar5 + -1 == 0) && (*(pcVar12 + 0x4c) != 0)) {
                            __wake_up(pcVar12 + 0x30,3,1,0);
                        }
                        _raw_spin_unlock(unaff_x22);
                        mutex_unlock(obj.vm_mutex);
                        _dev_err(arg1,"%s: Duplicate qcom,label %d\n","gh_virtio_backend",iStack_d4);
                        uVar15 = 0xffffffea;
                        goto code_r0x080083e4;
                    }
                }
                _raw_spin_unlock(pcVar1);
code_r0x08008268:
                piVar10 = devm_kmalloc(arg1,0x1e0,0xdc0);
                if (piVar10 == NULL) {
                    mutex_unlock(obj.vm_mutex);
                    uVar15 = 0xfffffff4;
                    goto code_r0x080083e4;
                }
                piVar10[0x11] = pcVar16;
                *(piVar10 + 0x7c) = iStack_d4;
                *(piVar10 + 2) = 0;
                __init_waitqueue_head(piVar10 + 3,"&vb_dev->evt_queue",obj.gh_virtio_backend_probe.__key);
                __init_waitqueue_head(piVar10 + 6,"&vb_dev->notify_queue",obj.gh_virtio_backend_probe.__key);
                __mutex_init(piVar10 + 0x31,"&vb_dev->mutex",obj.gh_virtio_backend_probe.__key);
                _raw_spin_lock(pcVar1);
                iVar6 = *(pcVar16 + 0x40);
                uVar14 = __list_add_valid(piVar10,pcVar18,iVar6);
                if ((uVar14 & 1) != 0) {
                    *(iVar6 + 8) = piVar10;
                    *piVar10 = iVar6;
                    piVar10[1] = pcVar18;
                    *pcVar18 = piVar10;
                }
                _raw_spin_unlock(pcVar1);
                snprintf(piVar10 + 0x2a,0x20,"virtio_dev_%x",*(piVar10 + 0x7c));
                mutex_unlock(obj.vm_mutex);
                _printk(0x8001f7d,"gh_virtio_backend",pcVar16 + 0x10,*(piVar10 + 0x7c));
                uVar15 = 0;
                uVar17 = uVar17 + 1;
            } while (uVar17 != uVar3);
        }
    }
    goto code_r0x08008488;
    while (pcVar16 = *pcVar16, pcVar16 != obj.vm_list) {
code_r0x08008408:
        iVar5 = strcmp(pcVar16 + 0x10,arg2);
        if (iVar5 == 0) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            if (pcVar16 == NULL) goto code_r0x0800847c;
            _raw_spin_lock(obj.gh_create_vm.__key);
            uVar14 = __list_del_entry_valid(pcVar16);
            if ((uVar14 & 1) != 0) {
                iVar6 = *pcVar16;
                piVar10 = *(pcVar16 + 8);
                *(iVar6 + 8) = piVar10;
                *piVar10 = iVar6;
            }
            *pcVar16 = -0x2152ffffffffff00;
            *(pcVar16 + 8) = -0x2152fffffffffede;
            break;
        }
    }
code_r0x08008470:
    _raw_spin_unlock(obj.gh_create_vm.__key);
code_r0x0800847c:
    mutex_unlock(obj.vm_mutex);
code_r0x08008488:
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        __dynamic_dev_dbg(obj.gh_parse_virtio_properties.__UNIQUE_ID_ddebug409,unaff_x22,
                          "%s: No virtio-backends specified for vm %s\n","gh_virtio_backend",unaff_x19);
        uVar15 = 0;
    }
    return uVar15;
}


// ===== sym.gh_virtio_backend_remove @ 0x0800863c (size 220) =====

ulong sym.gh_virtio_backend_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_create_vm.__key);
    pcVar5 = _obj.vm_list;
    while( true ) {
        if (pcVar5 == obj.vm_list) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            return 0;
        }
        iVar3 = strcmp(pcVar5 + 0x10,arg1);
        if (iVar3 == 0) break;
        pcVar5 = *pcVar5;
    }
    _raw_spin_unlock(obj.gh_create_vm.__key);
    if (pcVar5 == NULL) {
        return 0;
    }
    _raw_spin_lock(obj.gh_create_vm.__key);
    uVar4 = __list_del_entry_valid(pcVar5);
    if ((uVar4 & 1) != 0) {
        iVar1 = *pcVar5;
        piVar2 = *(pcVar5 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar5 = -0x2152ffffffffff00;
    *(pcVar5 + 8) = -0x2152fffffffffede;
    _raw_spin_unlock(obj.gh_create_vm.__key);
    return 0;
}


// ===== sym.gh_virtio_mmio_exit @ 0x08008740 (size 616) =====

void sym.gh_virtio_mmio_exit(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    uint64_t uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    _raw_spin_lock(obj.gh_create_vm.__key);
    pcVar5 = _obj.vm_list;
    do {
        if (pcVar5 == obj.vm_list) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
code_r0x080087c8:
            while( true ) {
                uVar2 = 0;
code_r0x080087cc:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_68) break;
                __stack_chk_fail(uVar2);
                __dynamic_pr_debug(obj.gh_virtio_mmio_exit.__UNIQUE_ID_ddebug413,"%s: VM name %s not found\n",
                                   "gh_virtio_backend",arg2);
            }
            return;
        }
        iVar1 = strcmp(pcVar5 + 0x10,arg2);
        if (iVar1 == 0) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            if (pcVar5 != NULL) {
                arg2 = pcVar5 + 0x3c;
                _raw_spin_lock(arg2);
                for (pcVar3 = *(pcVar5 + 0x40); pcVar3 != pcVar5 + 0x40; pcVar3 = *pcVar3) {
                    uVar2 = _raw_spin_lock_irqsave(pcVar3 + 0x10);
                    iVar1 = *(pcVar3 + 0x48);
                    *(pcVar3 + 0x70) = 0x40;
                    *(pcVar3 + 0x60) = 0;
                    *(pcVar3 + 0x54) = 1;
                    *(pcVar3 + 0x4c) = 1;
                    _raw_spin_unlock_irqrestore(pcVar3 + 0x10,uVar2);
                    __wake_up(pcVar3 + 0x18,1,1,0);
                    _raw_spin_unlock(arg2);
                    if ((iVar1 != 0) && (*(pcVar3 + 0x48) != 0)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        init_wait_entry(&uStack_90,0);
                        while (prepare_to_wait_event(pcVar3 + 0x30,&uStack_90,2), *(pcVar3 + 0x48) != 0) {
                            schedule();
                        }
                        finish_wait(pcVar3 + 0x30,&uStack_90);
                    }
                    free_irq(*(pcVar3 + 0x78),pcVar3);
                    iounmap(*(pcVar3 + 0x1d0));
                    *(pcVar3 + 0x1d0) = 0;
                    _raw_spin_lock(arg2);
                }
                _raw_spin_unlock(arg2);
                uStack_90 = uStack_90 & 0xffffffffffff0000;
                if (*(pcVar5 + 0x20) != 0) {
                    uVar2 = gh_rm_get_vmid(1,&uStack_90);
                    if (uVar2 != 0) goto code_r0x080087cc;
                    if (0 < *(pcVar5 + 0x38)) {
                        arg2 = 0;
                        iVar4 = 0;
                        do {
                            uVar2 = sym.unshare_a_vm_buffer
                                              (uStack_90 & 0xffff,arg1 & 0xffffffff,arg2 + *(pcVar5 + 0x30),
                                               arg2 + *(pcVar5 + 0x30));
                            if (uVar2 != 0) goto code_r0x080087cc;
                            iVar4 = iVar4 + 1;
                            arg2 = arg2 + 0x68;
                        } while (iVar4 < *(pcVar5 + 0x38));
                    }
                    uVar2 = 0;
                    *(pcVar5 + 0x20) = 0;
                    goto code_r0x080087cc;
                }
            }
            goto code_r0x080087c8;
        }
        pcVar5 = *pcVar5;
    } while( true );
}


// ===== sym.gh_virtio_mmio_init @ 0x080089a8 (size 1880) =====

uint32_t sym.gh_virtio_mmio_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    code *pcVar10;
    uint64_t uVar11;
    uint64_t in_x4;
    code *in_x5;
    uint *in_x6;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    code *pcVar15;
    uint64_t uVar16;
    code *pcVar17;
    uint64_t arg2_00;
    int64_t iVar18;
    uint *puVar19;
    code *pcVar20;
    ulong unaff_x30;
    uint16_t auStack_84 [2];
    ulong uStack_80;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    arg2_00 = arg1 & 0xffffffff;
    iStack_68 = *(iVar7 + 0x5e0);
    uVar16 = in_x4 & 0xffffffff;
    uVar14 = arg3 & 0xffffffff;
    _raw_spin_lock(obj.gh_create_vm.__key);
    for (pcVar17 = _obj.vm_list; pcVar17 != obj.vm_list; pcVar17 = *pcVar17) {
        iVar4 = strcmp(pcVar17 + 0x10,arg2);
        if (iVar4 == 0) {
            _raw_spin_unlock(obj.gh_create_vm.__key);
            if (pcVar17 != NULL) goto code_r0x08008a58;
            goto code_r0x08008bf4;
        }
    }
    _raw_spin_unlock(obj.gh_create_vm.__key);
code_r0x08008bf4:
    _printk(0x8002f9b,"gh_virtio_backend",arg2);
    uVar5 = 0xffffffed;
    pcVar15 = in_x5;
    uVar13 = uVar16;
    puVar19 = in_x6;
code_r0x08008c78:
    do {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return uVar5;
            }
            __stack_chk_fail();
            __dynamic_dev_dbg(obj.gh_virtio_mmio_init.__UNIQUE_ID_ddebug411,*(pcVar17 + 0x28),
                              "%s: vmid %d vm_name %s label %x cap_id %x irq %d base %pK size %d\n","gh_virtio_backend"
                              ,arg1 & 0xffff,arg2,uVar14 & 0xffffffff,arg4,uVar13,pcVar15,puVar19);
            in_x5 = pcVar15;
            uVar16 = uVar13;
            in_x6 = puVar19;
code_r0x08008a58:
            iVar7 = strnlen(arg2,0x10);
            pcVar15 = in_x5;
            uVar13 = uVar16;
            puVar19 = in_x6;
            if (iVar7 != 0x10) break;
            uVar5 = 0xffffffea;
        }
        pcVar20 = pcVar17 + 0x3c;
        _raw_spin_lock(pcVar20);
        for (arg2 = *(pcVar17 + 0x40); arg2 != pcVar17 + 0x40; arg2 = *arg2) {
            if (*(arg2 + 0x7c) == uVar14) {
                if ((*(arg2 + 0x48) != -1) && (arg2 != NULL)) {
                    *(arg2 + 0x48) = *(arg2 + 0x48) + 1;
                    _raw_spin_unlock(pcVar20);
                    pcVar15 = arg2 + 0x188;
                    mutex_lock(pcVar15);
                    if (*(pcVar17 + 0x20) != 0) goto code_r0x08008b10;
                    auStack_84[0] = 0;
                    uVar5 = gh_rm_get_vmid(1,auStack_84);
                    pcVar20 = arg4;
                    if (uVar5 != 0) goto code_r0x08008c2c;
                    if (*(pcVar17 + 0x38) < 1) goto code_r0x08008eec;
                    iVar18 = 0;
                    iVar7 = 0;
                    goto code_r0x08008cf8;
                }
                break;
            }
        }
        _raw_spin_unlock(pcVar20);
        _dev_err(*(pcVar17 + 0x28),"%s: Device with label %x not found\n","gh_virtio_backend",uVar14 & 0xffffffff);
        uVar5 = 0xffffffed;
    } while( true );
    while( true ) {
        iVar12 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar12 = 0x30;
        }
        pcVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0x14);
        puVar19 = puVar9;
        if (pcVar10 == NULL) {
            kfree(puVar9);
            goto code_r0x08009070;
        }
        piVar1 = uVar13 + iVar18;
        uVar11 = hyp_assign_phys(*piVar1,(piVar1[1] - *piVar1) + 1,&uStack_6c,1,&uStack_78,&uStack_80,2);
        uVar5 = uVar11;
        if (uVar5 == 0) {
            *(puVar9 + 1) = uVar3;
            *puVar9 = 2;
            *(puVar9 + 2) = arg2_00;
            *(puVar9 + 6) = 6;
            *(puVar9 + 10) = 6;
            *pcVar10 = 1;
            iVar12 = *(uVar13 + iVar18);
            *(pcVar10 + 4) = iVar12;
            *(pcVar10 + 0xc) = (piVar1[1] - iVar12) + 1;
            uVar6 = gh_rm_mem_share(uVar11,0,uVar2,puVar9,pcVar10,0,uVar13 + iVar18 + 100);
            if (uVar6 != 0) {
                uVar14 = uVar6;
                _printk(0x80024c2,"gh_virtio_backend",uVar14);
                hyp_assign_phys(*(uVar13 + iVar18),(piVar1[1] - *(uVar13 + iVar18)) + 1,&uStack_78,2,&uStack_6c,
                                &uStack_70,1);
                uVar5 = uVar6;
            }
        }
        else {
            _printk(0x8001ca1,"gh_virtio_backend",*(uVar13 + iVar18),(piVar1[1] - *(uVar13 + iVar18)) + 1,
                    uVar11 & 0xffffffff);
        }
        kfree(puVar9);
        kfree(pcVar10);
        pcVar20 = pcVar10;
        if (uVar5 != 0) goto code_r0x08009078;
        iVar7 = iVar7 + 1;
        iVar18 = iVar18 + 0x68;
        if (*(pcVar17 + 0x38) <= iVar7) break;
code_r0x08008cf8:
        uVar3 = auStack_84[0];
        pcVar20 = trace_event_raw_init;
        uVar13 = *(pcVar17 + 0x30);
        iVar12 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar12 = 0x30;
        }
        uVar2 = *(uVar13 + iVar18 + 0x60);
        uStack_78 = auStack_84[0];
        uStack_70 = 7;
        uStack_80 = 0x600000006;
        uStack_74 = arg1 & 0xffff;
        uStack_6c = uStack_78;
        puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,0xc);
        if (puVar9 == NULL) {
code_r0x08009070:
            uVar5 = 0xfffffff4;
code_r0x08009078:
            if (iVar7 != 0) {
                uVar14 = iVar7 + 1;
                do {
                    iVar18 = iVar18 + -0x68;
                    sym.unshare_a_vm_buffer
                              (auStack_84[0],arg2_00,*(pcVar17 + 0x30) + iVar18,*(pcVar17 + 0x30) + iVar18);
                    uVar14 = uVar14 - 1;
                } while (1 < uVar14);
            }
            goto code_r0x08008c2c;
        }
    }
code_r0x08008eec:
    uVar16 = uVar16 & 0xffffffff;
    *(pcVar17 + 0x20) = 1;
code_r0x08008b10:
    uVar5 = request_threaded_irq
                      (uVar16 & 0xffffffff,sym.vdev_interrupt.1016b347f3458ea20e90756fd466f079.cfi_jt,0,0,
                       arg2 + 0x150,arg2);
    uVar13 = uVar16;
    if (uVar5 == 0) {
        uVar8 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar8 = 0x68000000000f13;
        }
        iVar7 = __ioremap(in_x5,in_x6,uVar8);
        *(arg2 + 0x1d0) = iVar7;
        if (iVar7 == 0) {
            _dev_err(*(pcVar17 + 0x28),"%s: Unable to map config page\n","gh_virtio_backend");
            free_irq(uVar16 & 0xffffffff,arg2);
            uStack_78 = uStack_78 & 0xffff0000;
            if ((*(pcVar17 + 0x20) != 0) && (iVar4 = gh_rm_get_vmid(1,&uStack_78), iVar4 == 0)) {
                if (0 < *(pcVar17 + 0x38)) {
                    iVar7 = 0;
                    uVar14 = 0;
                    do {
                        iVar4 = sym.unshare_a_vm_buffer
                                          (uStack_78,arg2_00,*(pcVar17 + 0x30) + iVar7,*(pcVar17 + 0x30) + iVar7);
                        if (iVar4 != 0) goto code_r0x08009014;
                        uVar14 = uVar14 + 1;
                        iVar7 = iVar7 + 0x68;
                    } while (uVar14 < *(pcVar17 + 0x38));
                }
                *(pcVar17 + 0x20) = 0;
            }
code_r0x08009014:
            mutex_unlock(pcVar15);
            iVar7 = *(arg2 + 0x88);
            _raw_spin_lock(iVar7 + 0x3c);
            iVar4 = *(arg2 + 0x48);
            *(arg2 + 0x48) = iVar4 + -1;
            if ((iVar4 + -1 == 0) && (*(arg2 + 0x4c) != 0)) {
                __wake_up(arg2 + 0x30,3,1,0);
            }
            _raw_spin_unlock(iVar7 + 0x3c);
            uVar5 = 0xfffffff4;
            puVar19 = in_x6;
        }
        else {
            *(arg2 + 0x78) = uVar16;
            *(arg2 + 0x1b8) = arg4;
            *(arg2 + 0x1d8) = in_x6;
            uVar8 = _raw_spin_lock_irqsave(arg2 + 0x10);
            *(arg2 + 0x4c) = 0;
            *(arg2 + 0x54) = 0;
            *(arg2 + 0x5c) = 0;
            *(arg2 + 100) = 0;
            *(arg2 + 0x6c) = 0;
            *(arg2 + 0x74) = 0;
            _raw_spin_unlock_irqrestore(arg2 + 0x10,uVar8);
            mutex_unlock(pcVar15);
            iVar7 = *(arg2 + 0x88);
            _raw_spin_lock(iVar7 + 0x3c);
            iVar4 = *(arg2 + 0x48);
            *(arg2 + 0x48) = iVar4 + -1;
            if ((iVar4 + -1 == 0) && (*(arg2 + 0x4c) != 0)) {
                __wake_up(arg2 + 0x30,3,1,0);
            }
            _raw_spin_unlock(iVar7 + 0x3c);
            uVar5 = 0;
            puVar19 = in_x6;
        }
    }
    else {
        _dev_err(*(pcVar17 + 0x28),"%s: Unable to register interrupt handler for %d\n","gh_virtio_backend",
                 uVar16 & 0xffffffff);
        uStack_78 = uStack_78 & 0xffff0000;
        puVar19 = in_x6;
        pcVar20 = arg4;
        if ((*(pcVar17 + 0x20) != 0) && (iVar4 = gh_rm_get_vmid(1,&uStack_78), iVar4 == 0)) {
            if (0 < *(pcVar17 + 0x38)) {
                iVar7 = 0;
                uVar14 = 0;
                do {
                    iVar4 = sym.unshare_a_vm_buffer
                                      (uStack_78,arg2_00,*(pcVar17 + 0x30) + iVar7,*(pcVar17 + 0x30) + iVar7);
                    if (iVar4 != 0) goto code_r0x08008c2c;
                    uVar14 = uVar14 + 1;
                    iVar7 = iVar7 + 0x68;
                } while (uVar14 < *(pcVar17 + 0x38));
            }
            *(pcVar17 + 0x20) = 0;
        }
code_r0x08008c2c:
        mutex_unlock(pcVar15);
        iVar7 = *(arg2 + 0x88);
        _raw_spin_lock(iVar7 + 0x3c);
        iVar4 = *(arg2 + 0x48);
        *(arg2 + 0x48) = iVar4 + -1;
        if ((iVar4 + -1 == 0) && (*(arg2 + 0x4c) != 0)) {
            __wake_up(arg2 + 0x30,3,1,0);
        }
        _raw_spin_unlock(iVar7 + 0x3c);
        arg4 = pcVar20;
    }
    goto code_r0x08008c78;
}


// ===== sym.trace_raw_output_gh_virtio_backend_irq_inj @ 0x08009130 (size 108) =====

void sym.trace_raw_output_gh_virtio_backend_irq_inj(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"device %d inj_irq rc %d\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_queue_notify @ 0x0800919c (size 108) =====

void sym.trace_raw_output_gh_virtio_backend_queue_notify(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"device %d queue_notify on %d\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_wait_event @ 0x08009208 (size 116) =====

void sym.trace_raw_output_gh_virtio_backend_wait_event(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"device %d cur_evt/org_evt %x/%x, cur_evt_data/org_evt_data %x/%x\n",*(iVar2 + 8),
                           *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_virtio_backend_irq @ 0x0800927c (size 112) =====

void sym.trace_raw_output_gh_virtio_backend_irq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"device %d irq (rc %d) event %x event_data %x\n",*(iVar2 + 8),*(iVar2 + 0x14),
                           *(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym._copy_to_user @ 0x080092ec (size 312) =====

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
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user_1 @ 0x08009460 (size 320) =====

ulong sym._copy_to_user_1(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    uVar5 = 0x10;
    bVar4 = 0xffffffffffffffef < uVar6;
    uVar6 = uVar6 + 0x10;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        uVar5 = __arch_copy_to_user(arg1,in_x1,0x10);
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
    return uVar5;
}


// ===== sym._copy_from_user @ 0x080095dc (size 376) =====

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
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08009790 (size 364) =====

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
    bVar4 = 0xffffffffffffffef < uVar6;
    uVar6 = uVar6 + 0x10;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x10;
    }
    else {
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x10);
        if ((_srcu_notifier_chain_register >> 0x18 & 1) == 0) {
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
    memset((arg1 - iVar5) + 0x10,0,iVar5);
    return iVar5;
}


// ===== sym.vb_dev_irqfd_wakeup @ 0x08009938 (size 364) =====

ulong sym.vb_dev_irqfd_wakeup(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_x8;
    int64_t *piVar4;
    uint extraout_w9;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar5 = *(iVar2 + 0x5e0);
    iVar2 = arg1;
    if ((arg2 & 1U) != 0) {
        CallHyperVisor(0x604e);
        iVar2 = *(arg1 + 0xe0);
    }
    while( true ) {
        if ((arg2 >> 4 & 1) != 0) {
            iVar2 = queue_work_on(noname_1,0x20,_init_wait_entry,arg1 + 0x48);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iVar5) break;
        iVar3 = __stack_chk_fail(iVar2);
        iVar1 = tpidr_el1;
        iVar2 = iVar3;
        arg2 = extraout_x8;
        noname_1 = extraout_q0;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar1) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar1) & 0x3f) & 1) !=
            0) {
            iVar1 = sp_el0;
            *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
            piVar6 = *0x800da08;
            piVar4 = *0x800da08;
            while (piVar4 != NULL) {
                iVar2 = (**piVar6)(piVar6[1],extraout_w9,iVar3);
                piVar6 = piVar6 + 3;
                noname_1 = extraout_q0_00;
                piVar4 = *piVar6;
            }
            iVar3 = *(iVar1 + 0x10) + -1;
            *(iVar1 + 0x10) = iVar3;
            if ((iVar3 == 0) || (*(iVar1 + 0x10) == 0)) {
                iVar2 = preempt_schedule_notrace();
                noname_1 = extraout_q0_01;
            }
        }
    }
    return 0;
}


// ===== sym.irqfd_shutdown @ 0x08009abc (size 184) =====

void sym.irqfd_shutdown(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong extraout_x1;
    uchar *in_x2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uVar2 = _raw_spin_lock_irqsave(arg1 + -0x110);
    piVar4 = arg1 + -0x50;
    if (*piVar4 != 0) {
        eventfd_ctx_remove_wait_queue(*piVar4,arg1 + -0x48,&uStack_40);
        eventfd_ctx_put(*piVar4);
        if ((*(arg1 + -8) & 1) != 0) {
            fput(*(arg1 + -0x10));
        }
        *piVar4 = 0;
        *(arg1 + -0x10) = 0;
        in_x2 = puVar3;
    }
    _raw_spin_unlock_irqrestore(arg1 + -0x110,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.vb_dev_irqfd_ptable_queue_proc;
    add_wait_queue(extraout_x1,in_x2 + -0x28);
    return;
}


// ===== sym.vb_dev_irqfd_ptable_queue_proc @ 0x08009b74 (size 44) =====

void sym.vb_dev_irqfd_ptable_queue_proc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    add_wait_queue(arg1,arg2 + -0x28);
    return;
}


// ===== sym.unshare_a_vm_buffer @ 0x08009ba0 (size 276) =====

//WARNING: Removing unreachable block (ram,0x08009d3c)
//WARNING: Removing unreachable block (ram,0x08009d54)
//WARNING: Removing unreachable block (ram,0x08009d6c)
//WARNING: Removing unreachable block (ram,0x08009d5c)
//WARNING: Removing unreachable block (ram,0x08009da0)

int sym.unshare_a_vm_buffer(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    ulong uVar5;
    int64_t extraout_x1;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uStack_48 = arg1 & 0xffff;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_44 = arg2 & 0xffff;
    uStack_40 = 7;
    uStack_3c = uStack_48;
    iVar4 = gh_rm_mem_reclaim(*(arg4 + 100),0);
    if (iVar4 == 0) {
        iVar4 = hyp_assign_phys(*arg3,(*(arg3 + 8) - *arg3) + 1,&uStack_48,2,&uStack_3c,&uStack_40,1);
        if (iVar4 != 0) {
            _printk(0x8001ca1,"gh_virtio_backend",*arg3,(*(arg3 + 8) - *arg3) + 1,iVar4);
        }
    }
    else {
        _printk(0x8002540,"gh_virtio_backend",*(arg4 + 100),*arg3,(*(arg3 + 8) - *arg3) + 1,iVar4);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.vdev_interrupt;
    iVar6 = sp_el0;
    iVar6 = *(iVar6 + 0x5e0);
    CallHyperVisor(0x6053);
    uVar1 = *(extraout_x1 + 0x7c);
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iVar6) {
        uVar5 = __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            piVar8 = *0x800dae0;
            piVar7 = *0x800dae0;
            while (piVar7 != NULL) {
                (**piVar8)(piVar8[1],uVar1,0,0,uVar5);
                piVar8 = piVar8 + 3;
                piVar7 = *piVar8;
            }
            iVar2 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar2;
            if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.vdev_interrupt @ 0x08009cb4 (size 480) =====

//WARNING: Removing unreachable block (ram,0x08009d3c)
//WARNING: Removing unreachable block (ram,0x08009d54)
//WARNING: Removing unreachable block (ram,0x08009d6c)
//WARNING: Removing unreachable block (ram,0x08009d5c)
//WARNING: Removing unreachable block (ram,0x08009da0)

ulong sym.vdev_interrupt(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    CallHyperVisor(0x6053);
    uVar1 = *(arg1 + 0x7c);
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iVar5) {
        uVar4 = __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            piVar7 = *0x800dae0;
            piVar6 = *0x800dae0;
            while (piVar6 != NULL) {
                (**piVar7)(piVar7[1],uVar1,0,0,uVar4);
                piVar7 = piVar7 + 3;
                piVar6 = *piVar7;
            }
            iVar2 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar2;
            if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.gh_vm_ioctl_set_fw_name @ 0x08009eac (size 1480) =====

int64_t sym.gh_vm_ioctl_set_fw_name(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    uint32_t *puVar2;
    ulong uVar3;
    uint32_t uVar4;
    code cVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong *puVar12;
    uint64_t uVar13;
    uint64_t *puVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t iVar21;
    code *unaff_x21;
    code *pcVar22;
    uint uVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_88 = 0;
    uStack_80 = 0;
    iVar9 = sym._copy_from_user_1(&uStack_88,arg2);
    if (iVar9 != 0) {
        iVar9 = -0xe;
        goto code_r0x0800a430;
    }
    unaff_x19 = arg1 + 0xa8;
    mutex_lock(unaff_x19);
    iVar9 = arg1 + 0x50;
    iVar21 = strlen(iVar9);
    if (iVar21 == 0) {
        _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
        unaff_x21 = obj.gh_sec_vm_list;
        for (pcVar22 = _obj.gh_sec_vm_list; pcVar22 != obj.gh_sec_vm_list; pcVar22 = *pcVar22) {
            iVar8 = strcmp(*(pcVar22 + 0x10),&uStack_88);
            if (iVar8 == 0) {
                _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
                if (pcVar22 == NULL) goto code_r0x0800a048;
                uVar3 = *(pcVar22 + 0x10);
                unaff_x21 = *(pcVar22 + 0x18);
                uStack_a0 = 0;
                iVar8 = strcmp(uVar3,0x800297c);
                if (iVar8 == 0) {
                    iVar21 = 0;
code_r0x0800a06c:
                    uVar23 = *(obj.fw_name_to_vm_name + iVar21 * 0x10);
                    cVar5 = pcVar22[0x48];
                }
                else {
                    iVar8 = strcmp(uVar3,"trustedvm");
                    if (iVar8 == 0) {
                        iVar21 = 1;
                        goto code_r0x0800a06c;
                    }
                    iVar8 = strcmp(uVar3,"cpusys_vm");
                    if (iVar8 == 0) {
                        iVar21 = 2;
                        goto code_r0x0800a06c;
                    }
                    iVar8 = strcmp(uVar3,"oemvm");
                    if (iVar8 == 0) {
                        iVar21 = 3;
                        goto code_r0x0800a06c;
                    }
                    uVar23 = 5;
                    cVar5 = pcVar22[0x48];
                }
                if (cVar5 != 0x0) {
                    iVar21 = 0;
                    goto code_r0x0800a0b4;
                }
                iVar21 = dma_alloc_attrs(unaff_x21,*(pcVar22 + 0x38),&uStack_a0,0xcc0,0);
                if (iVar21 == 0) {
                    iVar8 = -0xc;
                    _dev_err(unaff_x21,"Couldn\'t allocate cma memory for %s %d\n",*(pcVar22 + 0x10),0xfffffff4);
                    goto code_r0x0800a40c;
                }
                *(pcVar22 + 0x30) = iVar21;
                iVar10 = *(unaff_x21 + 0x2b8);
                uVar13 = uStack_a0;
                if (iVar10 == 0) goto code_r0x0800a0b0;
                uVar13 = *(iVar10 + 0x10);
                if (uVar13 == 0) goto code_r0x0800a030;
                piVar15 = iVar10 + 0x18;
                goto code_r0x0800a014;
            }
        }
        _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a048:
        _printk(0x8003027,&uStack_88);
        iVar9 = -0x16;
    }
    else {
        _printk(0x800310c,iVar9,0xffffffffffffffea);
        iVar9 = -0x11;
    }
    goto code_r0x0800a428;
    while( true ) {
        uVar13 = piVar15[3];
        piVar15 = piVar15 + 4;
        if (uVar13 == 0) break;
code_r0x0800a014:
        if (piVar15[-2] <= uStack_a0 && uStack_a0 - piVar15[-2] < uVar13) {
            uVar13 = *piVar15 + uStack_a0;
            goto code_r0x0800a0b0;
        }
    }
code_r0x0800a030:
    uVar13 = 0xffffffffffffffff;
code_r0x0800a0b0:
    *(pcVar22 + 0x28) = uVar13;
code_r0x0800a0b4:
    iVar8 = gh_rm_vm_alloc_vmid(uVar23,pcVar22 + 0x44);
    if (iVar8 < 0) {
        _dev_err(unaff_x21,"Couldn\'t allocate VMID for %s %d\n",*(pcVar22 + 0x10),iVar8);
        if (pcVar22[0x48] == 0x0) {
            dma_free_attrs(unaff_x21,*(pcVar22 + 0x38),iVar21,uStack_a0,0);
        }
    }
    else {
        uStack_98 = 0;
        uStack_90 = 0;
        *(arg1 + 0x78) = 5;
        uStack_78 = 0;
        uStack_70 = 0;
        *(arg1 + 0xc) = *(pcVar22 + 0x44);
        uVar3 = *(pcVar22 + 0x18);
        scnprintf(&uStack_78,0x10,"%s.mdt",*(pcVar22 + 0x10));
        uVar7 = request_firmware(&uStack_90,&uStack_78,uVar3);
        if (uVar7 == 0) {
            uVar17 = qcom_mdt_read_metadata(uVar3,uStack_90,&uStack_78,&uStack_98,0,0);
            if (uVar17 < 0xfffffffffffff001) {
                uVar13 = uStack_98 + 0xfff & 0xfffffffffffff000;
                if (uVar13 < uStack_98) {
                    pcVar11 = "Overflow detected while calculating metadata size\"%s\"\n";
code_r0x0800a354:
                    _dev_err(*(pcVar22 + 0x18),pcVar11,*(pcVar22 + 0x10));
code_r0x0800a35c:
                    _dev_err(uVar3,"Failed to load metadata \"%s\": %d\n",&uStack_78,0);
                    uVar13 = 0;
                }
                else {
                    uVar19 = *(uVar17 + 0x2c);
                    if (uVar19 == 0) {
                        uVar19 = *(pcVar22 + 0x38);
                        if (uVar19 < uVar13) goto code_r0x0800a314;
                        uVar16 = 0;
code_r0x0800a1e8:
                        uVar18 = *(pcVar22 + 0x28);
                    }
                    else {
                        uVar18 = 0;
                        uVar16 = 0;
                        uVar7 = 0;
                        iVar21 = uVar17 + 0x4c;
                        uVar20 = 0;
                        do {
                            puVar1 = iVar21 + 3;
                            uVar4 = *(iVar21 + -0xc);
                            puVar2 = iVar21 + -4;
                            iVar21 = iVar21 + 0x20;
                            uVar18 = uVar18 + *puVar2;
                            uVar6 = *puVar2 + uVar4;
                            if (uVar4 <= uVar20) {
                                uVar4 = uVar20;
                                uVar6 = uVar16;
                            }
                            uVar16 = uVar6;
                            uVar7 = uVar7 | (*puVar1 & 8) >> 3;
                            uVar19 = uVar19 - 1;
                            uVar20 = uVar4;
                        } while (uVar19 != 0);
                        if (((-uStack_98 - 0x1000 | 0xfff) < uVar18) ||
                           (uVar19 = *(pcVar22 + 0x38), uVar19 < uVar18 + uVar13)) {
code_r0x0800a314:
                            pcVar11 = "Metadata cannot fit in mem_region  \"%s\"\n";
                            goto code_r0x0800a354;
                        }
                        if (uVar7 == 0) goto code_r0x0800a1e8;
                        uVar18 = 0;
                    }
                    uVar6 = uVar19 - uVar13;
                    if (((uVar19 < uVar13) || (~uVar6 < uVar18)) || (~uVar6 < *(pcVar22 + 0x30))) {
                        pcVar11 = "Overflow detected while calculating metadata offset\"%s\"\n";
                        goto code_r0x0800a354;
                    }
                    if (uVar18 + uVar6 < uVar16) {
                        pcVar11 = "Metadata cannot fit in mem_region %s\n";
                        goto code_r0x0800a354;
                    }
                    memcpy(*(pcVar22 + 0x30) + uVar6,uVar17);
                    if (uVar6 == 0) goto code_r0x0800a35c;
                    uVar7 = qcom_mdt_load_no_init
                                      (uVar3,uStack_90,&uStack_78,*(pcVar22 + 0x40),*(pcVar22 + 0x30),
                                       *(pcVar22 + 0x28),*(pcVar22 + 0x38),0);
                    if (uVar7 == 0) {
                        uVar7 = sym.gh_provide_mem(arg1,*(pcVar22 + 0x28),*(pcVar22 + 0x38),pcVar22[0x20]);
                        if (uVar7 != 0) {
                            puVar12 = *(pcVar22 + 0x10);
                            uVar13 = uVar7;
                            pcVar11 = "Failed to provide memory for %s, %d\n";
                            goto code_r0x0800a3a0;
                        }
                        *arg1 = 1;
                        uVar13 = sym.gh_vm_configure(1,uVar6,uStack_98,0);
                        if (uVar13 != 0) {
                            puVar12 = *(pcVar22 + 0x10);
                            pcVar11 = "Configuring secure VM %s to memory failed %ld\n";
                            goto code_r0x0800a3a0;
                        }
                    }
                    else {
                        uVar13 = uVar7;
                        pcVar11 = "Failed to load fw \"%s\": %d\n";
                        puVar12 = &uStack_78;
code_r0x0800a3a0:
                        _dev_err(uVar3,pcVar11,puVar12,uVar13 & 0xffffffff);
                    }
                }
                kfree(uVar17);
                release_firmware(uStack_90);
            }
            else {
                release_firmware(uStack_90);
                uVar13 = uVar17 & 0xffffffff;
            }
            if (uVar13 == 0) {
                scnprintf(iVar9,0x10,0x8001fb7,&uStack_88);
                mutex_unlock(unaff_x19);
                sym.gh_uevent_notify_change(0,arg1);
                iVar9 = 0;
                goto code_r0x0800a430;
            }
        }
        else {
            uVar13 = uVar7;
            _dev_err(uVar3,"Error requesting fw \"%s\": %d\n",&uStack_78,uVar13);
        }
        iVar8 = uVar13;
        _dev_err(unaff_x21,"Loading Secure VM %s failed %d\n",*(pcVar22 + 0x10),uVar13 & 0xffffffff);
    }
code_r0x0800a40c:
    iVar9 = iVar8;
    _dev_err(unaff_x21,"Loading secure VM %s to memory failed %ld\n",*(pcVar22 + 0x10),iVar9);
code_r0x0800a428:
    mutex_unlock(unaff_x19);
code_r0x0800a430:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_68) {
        return iVar9;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18 = sym.gh_vm_ioctl_get_fw_name;
    pcStack_c8 = sym.gh_vm_ioctl_get_fw_name;
    iVar10 = sp_el0;
    iVar21 = auVar24._0_8_ + 0xa8;
    iStack_d8 = *(iVar10 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    pcStack_c0 = unaff_x21;
    iStack_b0 = iVar9;
    iStack_a8 = unaff_x19;
    mutex_lock(iVar21);
    scnprintf(&uStack_e8,0x10,0x8001fb7,auVar24._0_8_ + 0x50);
    mutex_unlock(iVar21);
    iVar10 = sym._copy_to_user_1(auVar24._8_8_);
    iVar21 = sp_el0;
    iVar9 = 0;
    if (iVar10 != 0) {
        iVar9 = -0xe;
    }
    if (*(iVar21 + 0x5e0) == iStack_d8) {
        return iVar9;
    }
    iVar9 = __stack_chk_fail(iVar9);
    *extraout_x18_00 = sym.gh_secure_vm_loader_reclaim_fw;
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    pcVar22 = _obj.gh_sec_vm_list;
    do {
        if (pcVar22 == obj.gh_sec_vm_list) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a5fc:
            _printk(0x8003027,iVar9 + 0x50);
            return 0xffffffea;
        }
        iVar8 = strcmp(*(pcVar22 + 0x10),iVar9 + 0x50);
        if (iVar8 == 0) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
            if (pcVar22 == NULL) goto code_r0x0800a5fc;
            iVar21 = *(pcVar22 + 0x18);
            iVar9 = sym.gh_reclaim_mem(iVar9,*(pcVar22 + 0x28),*(pcVar22 + 0x38));
            if (iVar9 != 0) {
                return iVar9;
            }
            if (pcVar22[0x48] != 0x0) {
                return 0;
            }
            puVar14 = *(iVar21 + 0x2b8);
            uVar13 = *(pcVar22 + 0x28);
            if (puVar14 == NULL) goto code_r0x0800a61c;
            uVar17 = puVar14[2];
            break;
        }
        pcVar22 = *pcVar22;
    } while( true );
joined_r0x0800a5d4:
    if (uVar17 == 0) {
        uVar13 = 0xffffffffffffffff;
code_r0x0800a61c:
        dma_free_attrs(iVar21,*(pcVar22 + 0x38),*(pcVar22 + 0x30),uVar13,0);
        return 0;
    }
    if (*puVar14 <= uVar13 && uVar13 - *puVar14 < uVar17) {
        uVar13 = uVar13 - puVar14[3];
        goto code_r0x0800a61c;
    }
    uVar17 = puVar14[6];
    puVar14 = puVar14 + 4;
    goto joined_r0x0800a5d4;
}


// ===== sym.gh_vm_ioctl_get_fw_name @ 0x0800a474 (size 172) =====

ulong sym.gh_vm_ioctl_get_fw_name(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    mutex_lock(arg1 + 0xa8);
    scnprintf(&uStack_48,0x10,0x8001fb7,arg1 + 0x50);
    mutex_unlock(arg1 + 0xa8);
    iVar2 = sym._copy_to_user_1(arg2);
    iVar3 = sp_el0;
    uVar4 = 0;
    if (iVar2 != 0) {
        uVar4 = 0xfffffffffffffff2;
    }
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.gh_secure_vm_loader_reclaim_fw;
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    pcVar8 = _obj.gh_sec_vm_list;
    do {
        if (pcVar8 == obj.gh_sec_vm_list) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a5fc:
            _printk(0x8003027,iVar3 + 0x50);
            return 0xffffffea;
        }
        iVar1 = strcmp(*(pcVar8 + 0x10),iVar3 + 0x50);
        if (iVar1 == 0) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
            if (pcVar8 == NULL) goto code_r0x0800a5fc;
            iVar2 = *(pcVar8 + 0x18);
            uVar4 = sym.gh_reclaim_mem(iVar3,*(pcVar8 + 0x28),*(pcVar8 + 0x38));
            if (uVar4 != 0) {
                return uVar4;
            }
            if (pcVar8[0x48] != 0x0) {
                return 0;
            }
            puVar6 = *(iVar2 + 0x2b8);
            uVar5 = *(pcVar8 + 0x28);
            if (puVar6 == NULL) goto code_r0x0800a61c;
            uVar7 = puVar6[2];
            break;
        }
        pcVar8 = *pcVar8;
    } while( true );
joined_r0x0800a5d4:
    if (uVar7 == 0) {
        uVar5 = 0xffffffffffffffff;
code_r0x0800a61c:
        dma_free_attrs(iVar2,*(pcVar8 + 0x38),*(pcVar8 + 0x30),uVar5,0);
        return 0;
    }
    if (*puVar6 <= uVar5 && uVar5 - *puVar6 < uVar7) {
        uVar5 = uVar5 - puVar6[3];
        goto code_r0x0800a61c;
    }
    uVar7 = puVar6[6];
    puVar6 = puVar6 + 4;
    goto joined_r0x0800a5d4;
}


// ===== sym.gh_secure_vm_loader_reclaim_fw @ 0x0800a520 (size 292) =====

ulong sym.gh_secure_vm_loader_reclaim_fw(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    pcVar7 = _obj.gh_sec_vm_list;
    do {
        if (pcVar7 == obj.gh_sec_vm_list) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a5fc:
            _printk(0x8003027,arg1 + 0x50);
            return 0xffffffea;
        }
        iVar1 = strcmp(*(pcVar7 + 0x10),arg1 + 0x50);
        if (iVar1 == 0) {
            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
            if (pcVar7 == NULL) goto code_r0x0800a5fc;
            iVar6 = *(pcVar7 + 0x18);
            uVar2 = sym.gh_reclaim_mem(arg1,*(pcVar7 + 0x28),*(pcVar7 + 0x38));
            if (uVar2 != 0) {
                return uVar2;
            }
            if (pcVar7[0x48] != 0x0) {
                return 0;
            }
            puVar4 = *(iVar6 + 0x2b8);
            uVar3 = *(pcVar7 + 0x28);
            if (puVar4 == NULL) goto code_r0x0800a61c;
            uVar5 = puVar4[2];
            break;
        }
        pcVar7 = *pcVar7;
    } while( true );
joined_r0x0800a5d4:
    if (uVar5 == 0) {
        uVar3 = 0xffffffffffffffff;
code_r0x0800a61c:
        dma_free_attrs(iVar6,*(pcVar7 + 0x38),*(pcVar7 + 0x30),uVar3,0);
        return 0;
    }
    if (*puVar4 <= uVar3 && uVar3 - *puVar4 < uVar5) {
        uVar3 = uVar3 - puVar4[3];
        goto code_r0x0800a61c;
    }
    uVar5 = puVar4[6];
    puVar4 = puVar4 + 4;
    goto joined_r0x0800a5d4;
}


// ===== sym.gh_secure_vm_loader_init @ 0x0800a644 (size 52) =====

void sym.gh_secure_vm_loader_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.gh_secure_vm_loader_exit @ 0x0800a678 (size 44) =====

void sym.gh_secure_vm_loader_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt);
    return;
}


// ===== sym.gh_secure_vm_loader_probe @ 0x0800a6a4 (size 1048) =====

uint64_t sym.gh_secure_vm_loader_probe(int64_t arg1)

{
    code *pcVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    uint64_t uVar15;
    code *pcVar16;
    ulong unaff_x30;
    int64_t iStack_a8;
    int64_t iStack_a0;
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
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar12 = arg1 + 0x10;
    iStack_48 = *(iVar8 + 0x5e0);
    pcVar6 = devm_kmalloc(iVar12,0x50,0xdc0);
    if (pcVar6 == NULL) {
        uVar15 = 0xfffffff4;
        goto code_r0x0800a928;
    }
    uVar7 = *(arg1 + 0x300);
    *(pcVar6 + 0x18) = iVar12;
    *(arg1 + 0xa8) = pcVar6;
    uVar4 = of_property_read_variable_u32_array(uVar7,"qcom,pas-id",pcVar6 + 0x40,1,0);
    if (uVar4 < 0) {
        pcVar13 = "DT error getting \"qcom,pas-id\": %d\n";
    }
    else {
        iVar8 = of_find_property(*(arg1 + 0x300),"qcom,no-shutdown",0);
        pcVar6[0x20] = iVar8 != 0;
        if (iVar8 != 0) {
            _dev_info(iVar12,"Vm with no shutdown attribute added\n");
        }
        uVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,vmid",pcVar6 + 0x44,1,0);
        if (-1 < uVar4) {
            iVar8 = *(pcVar6 + 0x18);
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
            iStack_a8 = 0;
            iStack_a0 = 0;
            puVar9 = of_parse_phandle(*(iVar8 + 0x2f0),"memory-region",0);
            if (puVar9 == NULL) {
                _dev_err(iVar8,"DT error getting \"memory-region\"\n");
                uVar15 = 0xffffffea;
                goto code_r0x0800a928;
            }
            iVar10 = of_find_property(puVar9,"no-map",0);
            if (iVar10 == 0) {
                pcVar6[0x48] = 0x0;
                uVar4 = dma_set_mask(iVar8,0xffffffffffffffff);
                if (uVar4 != 0) {
                    uVar15 = uVar4;
                    _printk(0x8001bb5,"gh_vm_loader_mem_probe");
                    goto code_r0x0800a928;
                }
                dma_set_coherent_mask(iVar8,0xffffffffffffffff);
                uVar4 = of_reserved_mem_device_init_by_idx(iVar8,*(iVar8 + 0x2f0),0);
                if (uVar4 != 0) {
                    uVar15 = uVar4;
                    _printk(0x8001abe,"gh_vm_loader_mem_probe",uVar15);
                    goto code_r0x0800a928;
                }
                iVar8 = of_reserved_mem_lookup(puVar9);
                if (iVar8 == 0) {
                    _printk(0x80028fc,"gh_vm_loader_mem_probe",*puVar9);
                    uVar15 = 0xffffffea;
                    goto code_r0x0800a928;
                }
                iVar10 = *(iVar8 + 0x28);
            }
            else {
                pcVar6[0x48] = 0x1;
                uVar4 = of_address_to_resource(puVar9,0,&iStack_a8);
                iVar3 = iStack_a8;
                if (uVar4 != 0) {
                    pcVar13 = "error %d getting \"memory-region\" resource\n";
                    iVar12 = iVar8;
                    goto code_r0x0800aa04;
                }
                iVar10 = (iStack_a0 - iStack_a8) + 1;
                iVar11 = memremap(iStack_a8,iVar10,4);
                if (iVar11 == 0) {
                    _dev_err(iVar8,"Unable to remap firmware memory\n");
                    uVar15 = 0xfffffff4;
                    goto code_r0x0800a928;
                }
                *(pcVar6 + 0x28) = iVar3;
                *(pcVar6 + 0x30) = iVar11;
            }
            uVar7 = *(arg1 + 0x300);
            pcVar1 = pcVar6 + 0x10;
            *(pcVar6 + 0x38) = iVar10;
            uVar4 = of_property_read_string(uVar7,"qcom,firmware-name",pcVar1);
            uVar15 = uVar4;
            if (uVar4 == 0) {
                uVar7 = *pcVar1;
                iVar5 = strcmp(uVar7,0x800297c);
                if ((((iVar5 == 0) || (iVar5 = strcmp(uVar7,"trustedvm"), iVar5 == 0)) ||
                    (iVar5 = strcmp(uVar7,"cpusys_vm"), iVar5 == 0)) || (iVar5 = strcmp(uVar7,"oemvm"), iVar5 == 0))
                {
                    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
                    for (pcVar16 = _obj.gh_sec_vm_list; pcVar16 != obj.gh_sec_vm_list; pcVar16 = *pcVar16) {
                        iVar5 = strcmp(*(pcVar16 + 0x10),uVar7);
                        if (iVar5 == 0) {
                            _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
                            if (pcVar16 == NULL) goto code_r0x0800a90c;
                            _dev_err(iVar12,"Requested Secure VM %s already present\n",*pcVar1);
                            goto code_r0x0800aab0;
                        }
                    }
                    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
code_r0x0800a90c:
                    uVar4 = sym.gh_parse_virtio_properties(iVar12,*pcVar1);
                    uVar15 = uVar4;
                    if (uVar4 == 0) {
                        _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
                        pcVar1 = _obj.gh_sec_vm_list;
                        uVar15 = __list_add_valid(pcVar6,obj.gh_sec_vm_list,_obj.gh_sec_vm_list);
                        if ((uVar15 & 1) != 0) {
                            *(pcVar1 + 8) = pcVar6;
                            *pcVar6 = pcVar1;
                            *(pcVar6 + 8) = obj.gh_sec_vm_list;
                            _obj.gh_sec_vm_list = pcVar6;
                        }
                        _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
                        uVar15 = 0;
                        goto code_r0x0800a928;
                    }
                }
                else {
                    _dev_err(iVar12,"Requested Secure VM %d not supported\n",5);
code_r0x0800aab0:
                    uVar15 = 0xffffffea;
                }
            }
            memunmap(*(pcVar6 + 0x30));
            goto code_r0x0800a928;
        }
        pcVar13 = "DT error getting \"qcom,vmid\": %d\n";
    }
code_r0x0800aa04:
    uVar15 = uVar4;
    _dev_err(iVar12,pcVar13,uVar15);
code_r0x0800a928:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return uVar15;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.gh_secure_vm_loader_remove;
    piVar14 = *(iVar12 + 0xa8);
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    uVar15 = __list_del_entry_valid(piVar14);
    if ((uVar15 & 1) != 0) {
        iVar8 = *piVar14;
        piVar2 = piVar14[1];
        *(iVar8 + 8) = piVar2;
        *piVar2 = iVar8;
    }
    *piVar14 = -0x2152ffffffffff00;
    piVar14[1] = -0x2152fffffffffede;
    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
    if (piVar14[9] == '\0') {
        of_reserved_mem_device_release(iVar12 + 0x10);
    }
    else {
        memunmap(piVar14[6]);
    }
    uVar15 = sym.gh_virtio_backend_remove(piVar14[2]);
    return uVar15;
}


// ===== sym.gh_secure_vm_loader_remove @ 0x0800aabc (size 152) =====

void sym.gh_secure_vm_loader_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0xa8);
    _raw_spin_lock(obj.gh_virtio_backend_probe.__key);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    _raw_spin_unlock(obj.gh_virtio_backend_probe.__key);
    if (piVar4[9] == '\0') {
        of_reserved_mem_device_release(arg1 + 0x10);
    }
    else {
        memunmap(piVar4[6]);
    }
    sym.gh_virtio_backend_remove(piVar4[2]);
    return;
}


// ===== sym.__traceiter_gh_hcall_vcpu_run @ 0x0800ab54 (size 152) =====

ulong sym.__traceiter_gh_hcall_vcpu_run(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800db28 != NULL) {
        piVar1 = *0x800db28;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_gh_susp_res_irq_handler @ 0x0800abf4 (size 88) =====

ulong sym.__traceiter_gh_susp_res_irq_handler(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800db70;
    piVar1 = *0x800db70;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_gh_vcpu_irq_handler @ 0x0800ac54 (size 104) =====

ulong sym.__traceiter_gh_vcpu_irq_handler(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800dbb8 != NULL) {
        piVar1 = *0x800dbb8;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_gh_hcall_vcpu_run @ 0x0800acc4 (size 248) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800ae9c)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_hcall_vcpu_run(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    ulong in_tmp_ldXn;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    ulong in_x4;
    ulong in_x5;
    ulong uVar11;
    ulong in_x6;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar13;
    uint32_t uVar14;
    ulong uVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    uchar auVar17 [16];
    uchar auVar18 [16];
    unkbyte10 Var19;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    uint64_t uStack_270;
    ulong uStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    ulong uStack_1f8;
    code *pcStack_1f0;
    int64_t *piStack_1e8;
    ulong uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_198;
    uchar auStack_190 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    ulong uStack_138;
    uint64_t uStack_118;
    uchar auStack_110 [12];
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar14 = *(arg1 + 0x48);
    uVar10 = arg4;
    uVar15 = in_x4;
    uVar11 = in_x5;
    uVar12 = in_x6;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(arg1), (uVar4 & 1) == 0))))
        goto code_r0x0800ad50;
    }
    else {
code_r0x0800ad50:
        puVar8 = 0x30;
        iVar5 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar5 != 0) {
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = arg3;
            *(iVar5 + 0x10) = arg4;
            *(iVar5 + 0x18) = in_x4;
            *(iVar5 + 0x20) = in_x5;
            *(iVar5 + 0x28) = in_x6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar7 = auVar16._0_8_;
    *extraout_x18 = sym.perf_trace_gh_hcall_vcpu_run;
    pcStack_e8 = sym.perf_trace_gh_hcall_vcpu_run;
    iVar5 = sp_el0;
    iStack_f8 = *(iVar5 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    uVar3 = SUB82(puVar8,0);
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    uVar4 = uVar10;
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_104;
        iVar5 = perf_trace_buf_alloc(0x34,&iStack_100);
        uVar13 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_100 + 0xe8) = &puStack_f0;
            puVar8 = uStack_104;
            *(iStack_100 + 0xf8) = auStack_110;
            *(iStack_100 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800adbc;
            *(iStack_100 + 0x108) = 5;
            *(iVar5 + 8) = auVar16._8_4_;
            *(iVar5 + 0xc) = uVar3;
            *(iVar5 + 0x10) = uVar10;
            *(iVar5 + 0x18) = uVar15;
            *(iVar5 + 0x20) = uVar11;
            *(iVar5 + 0x28) = uVar12;
            uVar4 = uVar7;
            perf_trace_run_bpf_submit(iVar5,0x34,puVar8,uVar7,1,iStack_100,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x800af08;
    uStack_138 = 0x800af08;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    uVar15 = *(iVar6 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar14 = uVar15;
    ppuStack_140 = &puStack_f0;
    uStack_118 = uVar7;
    if ((uVar14 >> 8 & 1) == 0) {
        if ((uVar14 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar4 = 0;
            event_triggers_call(iVar6,0,0,0);
        }
        if (((uVar14 >> 6 & 1) == 0) &&
           (((uVar14 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar6), (uVar7 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        puVar8 = 0x10;
        iVar5 = trace_event_buffer_reserve(&uStack_178,iVar6);
        if (iVar5 != 0) {
            *(iVar5 + 8) = auVar17._8_8_;
            trace_event_buffer_commit(&uStack_178);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_148) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar7 = auVar18._0_8_;
    *extraout_x18_01 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_1a8 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar5 = sp_el0;
    iStack_1b8 = *(iVar5 + 0x5e0);
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_1b0 = &ppuStack_140;
    uStack_198 = uVar15;
    auStack_190 = auVar17;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_1c4;
        iVar5 = perf_trace_buf_alloc(0x14,&iStack_1c0);
        uVar13 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar8 = uStack_1c4;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800afd8;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar5 + 8) = auVar18._8_8_;
            uVar4 = uVar7;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar8,uVar7,1,iStack_1c0,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar6 = auVar17._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x800b0e8;
    uStack_1f8 = 0x800b0e8;
    pcStack_1f0 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar5 = sp_el0;
    iStack_208 = *(iVar5 + 0x5e0);
    uVar13 = auVar17._8_8_ & 0xffffffff;
    uVar15 = *(iVar6 + 0x48);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar14 = uVar15;
    ppuStack_200 = &ppuStack_1b0;
    piStack_1e8 = piVar1;
    if ((uVar14 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar14 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar4 = 0;
            uStack_1e0 = auVar18._8_8_;
            uStack_1d8 = uVar7;
            event_triggers_call(iVar6,0,0,0);
            auVar18._8_8_ = uStack_1e0;
            auVar18._0_8_ = uStack_1d8;
        }
        uStack_1e0 = auVar18._8_8_;
        uStack_1d8 = auVar18._0_8_;
        if (((uVar14 >> 6 & 1) != 0) ||
           (((uVar14 >> 9 & 1) != 0 &&
            (uVar7 = trace_event_ignore_this_pid(iVar6), auVar18._8_8_ = uStack_1e0, auVar18._0_8_ = uStack_1d8,
            (uVar7 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_1e0 = auVar18._8_8_;
    uStack_1d8 = auVar18._0_8_;
    puVar9 = 0x10;
    iVar5 = trace_event_buffer_reserve(&uStack_238,iVar6);
    auVar18._8_8_ = uStack_1e0;
    auVar18._0_8_ = uStack_1d8;
    if (iVar5 != 0) {
        *(iVar5 + 8) = auVar17._8_2_;
        *(iVar5 + 0xc) = puVar8;
        trace_event_buffer_commit(&uStack_238);
        auVar18._8_8_ = uStack_1e0;
        auVar18._0_8_ = uStack_1d8;
    }
code_r0x0800b18c:
    uStack_1e0 = auVar18._8_8_;
    uStack_1d8 = auVar18._0_8_;
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_208) {
        return;
    }
    Var19 = __stack_chk_fail();
    uVar7 = Var19;
    *extraout_x18_03 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_278 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar5 = sp_el0;
    iStack_288 = *(iVar5 + 0x5e0);
    uVar2 = SUB84(puVar9,0);
    iStack_290 = 0;
    uStack_294 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar7 + 0x78);
    ppuStack_280 = &ppuStack_200;
    uStack_270 = uVar10 & 0xffffffff;
    uStack_260 = uVar15;
    iStack_258 = iVar6;
    uStack_250 = uVar13;
    uStack_248 = puVar8 & 0xffffffff;
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_294;
        iVar5 = perf_trace_buf_alloc(0x14,&iStack_290,puVar9);
        uVar10 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_290 + 0xe8) = &ppuStack_280;
            puVar9 = uStack_294;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800b1c0;
            *(iStack_290 + 0x108) = 5;
            *(iVar5 + 8) = Var19 >> 0x40;
            *(iVar5 + 0xc) = uVar2;
            perf_trace_run_bpf_submit(iVar5,0x14,puVar9,uVar7,1,iStack_290,piVar1,0);
            uVar4 = uVar7;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_288) {
        auVar17 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_04 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar9 & 0xffff,uVar4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_hcall_vcpu_run @ 0x0800adbc (size 344) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.perf_trace_gh_hcall_vcpu_run(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint uVar2;
    ushort uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uchar *puVar6;
    uint64_t uVar7;
    ulong in_x4;
    ulong in_x5;
    ulong in_x6;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong uVar11;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    unkbyte10 Var14;
    uchar auStack_210 [12];
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uint64_t uStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    ulong uStack_168;
    code *pcStack_160;
    int64_t *piStack_158;
    ulong uStack_150;
    uint64_t uStack_148;
    uchar auStack_140 [12];
    uint32_t uStack_134;
    int64_t iStack_130;
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    ulong uStack_108;
    uchar auStack_100 [16];
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    uVar3 = arg3;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    uVar7 = arg4;
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffff8c;
        iVar4 = perf_trace_buf_alloc(0x34,&stack0xffffffffffffff90);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            arg3 = uStack_74;
            uVar8 = -1L << (uVar8 & 0x3f);
            uVar7 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar8 | unaff_x30;
            }
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            *(iStack_70 + 0x100) = uVar7;
            *(iStack_70 + 0x108) = 5;
            *(iVar4 + 8) = arg2;
            *(iVar4 + 0xc) = uVar3;
            *(iVar4 + 0x10) = arg4;
            *(iVar4 + 0x18) = in_x4;
            *(iVar4 + 0x20) = in_x5;
            *(iVar4 + 0x28) = in_x6;
            uVar7 = arg1;
            perf_trace_run_bpf_submit(iVar4,0x34,arg3,arg1,1,iStack_70,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x800af08;
    uStack_a8 = 0x800af08;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uVar11 = *(iVar5 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar10 = uVar11;
    puStack_b0 = &stack0xffffffffffffffa0;
    iStack_88 = arg1;
    if ((uVar10 >> 8 & 1) == 0) {
        if ((uVar10 >> 7 & 1) != 0) {
            arg3 = 0;
            uVar7 = 0;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar10 >> 6 & 1) == 0) &&
           (((uVar10 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar5), (uVar8 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        arg3 = 0x10;
        iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar5);
        if (iVar4 != 0) {
            *(iVar4 + 8) = auVar12._8_8_;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18_00 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_118 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar4 = sp_el0;
    iStack_128 = *(iVar4 + 0x5e0);
    iStack_130 = 0;
    uStack_134 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar8 + 0x78);
    puStack_120 = &stack0xffffffffffffff50;
    uStack_108 = uVar11;
    auStack_100 = auVar12;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xfffffffffffffecc;
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffed0);
        uVar9 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_130 + 0xe8) = &stack0xfffffffffffffee0;
            arg3 = uStack_134;
            *(iStack_130 + 0xf8) = &stack0xfffffffffffffec0;
            *(iStack_130 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x800afd8;
            *(iStack_130 + 0x108) = 5;
            *(iVar4 + 8) = auVar13._8_8_;
            uVar7 = uVar8;
            perf_trace_run_bpf_submit(iVar4,0x14,arg3,uVar8,1,iStack_130,piVar1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_128) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar5 = auVar12._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_01 = 0x800b0e8;
    uStack_168 = 0x800b0e8;
    pcStack_160 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar4 = sp_el0;
    iStack_178 = *(iVar4 + 0x5e0);
    uVar9 = auVar12._8_8_ & 0xffffffff;
    uVar11 = *(iVar5 + 0x48);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uVar10 = uVar11;
    puStack_170 = &stack0xfffffffffffffee0;
    piStack_158 = piVar1;
    if ((uVar10 >> 8 & 1) == 0) {
        puVar6 = arg3;
        if ((uVar10 >> 7 & 1) != 0) {
            puVar6 = NULL;
            uVar7 = 0;
            uStack_150 = auVar13._8_8_;
            uStack_148 = uVar8;
            event_triggers_call(iVar5,0,0,0);
            auVar13._8_8_ = uStack_150;
            auVar13._0_8_ = uStack_148;
        }
        uStack_150 = auVar13._8_8_;
        uStack_148 = auVar13._0_8_;
        if (((uVar10 >> 6 & 1) != 0) ||
           (((uVar10 >> 9 & 1) != 0 &&
            (uVar8 = trace_event_ignore_this_pid(iVar5), auVar13._8_8_ = uStack_150, auVar13._0_8_ = uStack_148,
            (uVar8 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_150 = auVar13._8_8_;
    uStack_148 = auVar13._0_8_;
    puVar6 = 0x10;
    iVar4 = trace_event_buffer_reserve(&stack0xfffffffffffffe58,iVar5);
    auVar13._8_8_ = uStack_150;
    auVar13._0_8_ = uStack_148;
    if (iVar4 != 0) {
        *(iVar4 + 8) = auVar12._8_2_;
        *(iVar4 + 0xc) = arg3;
        trace_event_buffer_commit(&stack0xfffffffffffffe58);
        auVar13._8_8_ = uStack_150;
        auVar13._0_8_ = uStack_148;
    }
code_r0x0800b18c:
    uStack_150 = auVar13._8_8_;
    uStack_148 = auVar13._0_8_;
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_178) {
        return;
    }
    Var14 = __stack_chk_fail();
    uVar8 = Var14;
    *extraout_x18_02 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_1e8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar4 = sp_el0;
    iStack_1f8 = *(iVar4 + 0x5e0);
    uVar2 = SUB84(puVar6,0);
    iStack_200 = 0;
    uStack_204 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar8 + 0x78);
    puStack_1f0 = &stack0xfffffffffffffe90;
    uStack_1e0 = arg4 & 0xffffffff;
    uStack_1d0 = uVar11;
    iStack_1c8 = iVar5;
    uStack_1c0 = uVar9;
    uStack_1b8 = arg3 & 0xffffffff;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar6 = &stack0xfffffffffffffdfc;
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffe00,puVar6);
        uVar9 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_200 + 0xe8) = &stack0xfffffffffffffe10;
            puVar6 = uStack_204;
            *(iStack_200 + 0xf8) = &stack0xfffffffffffffdf0;
            *(iStack_200 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x800b1c0;
            *(iStack_200 + 0x108) = 5;
            *(iVar4 + 8) = Var14 >> 0x40;
            *(iVar4 + 0xc) = uVar2;
            perf_trace_run_bpf_submit(iVar4,0x14,puVar6,uVar8,1,iStack_200,piVar1,0);
            uVar7 = uVar8;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_1f8) {
        auVar12 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_03 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar6 & 0xffff,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_susp_res_irq_handler @ 0x0800af14 (size 196) =====

//WARNING: Removing unreachable block (ram,0x0800b098)
//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_susp_res_irq_handler(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *in_x2;
    uint32_t *puVar8;
    uint64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    unkbyte10 Var11;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    code *pcStack_e0;
    int64_t *piStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c8;
    uchar auStack_c0 [12];
    uint32_t uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = *(arg1 + 0x48);
    if ((uVar9 >> 8 & 1) == 0) {
        if ((uVar9 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar9 >> 6 & 1) == 0) &&
           (((uVar9 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x0800af84;
    }
    else {
code_r0x0800af84:
        in_x2 = 0x10;
        iVar6 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = arg2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar5 = auVar10._0_8_;
    *extraout_x18 = sym.perf_trace_gh_susp_res_irq_handler;
    pcStack_98 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_b4;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_b0);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            in_x2 = uStack_b4;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800afd8;
            *(iStack_b0 + 0x108) = 5;
            *(iVar6 + 8) = auVar10._8_8_;
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar6,0x14,in_x2,uVar5,1,iStack_b0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return;
    }
    Var11 = __stack_chk_fail();
    iVar7 = Var11;
    uVar2 = tpidr_el2;
    *extraout_x18_00 = 0x800b0e8;
    uStack_e8 = 0x800b0e8;
    pcStack_e0 = sym.perf_trace_gh_susp_res_irq_handler;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar9 = *(iVar7 + 0x48);
    ppuStack_f0 = &puStack_a0;
    piStack_d8 = piVar1;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar8 = in_x2;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar8 = NULL;
            in_x3 = 0;
            uStack_d0 = auVar10._8_8_;
            uStack_c8 = uVar5;
            event_triggers_call(iVar7,0,0,0);
            auVar10._8_8_ = uStack_d0;
            auVar10._0_8_ = uStack_c8;
        }
        uStack_d0 = auVar10._8_8_;
        uStack_c8 = auVar10._0_8_;
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 &&
            (uVar5 = trace_event_ignore_this_pid(iVar7), auVar10._8_8_ = uStack_d0, auVar10._0_8_ = uStack_c8,
            (uVar5 & 1) != 0)))) goto code_r0x0800b18c;
    }
    uStack_d0 = auVar10._8_8_;
    uStack_c8 = auVar10._0_8_;
    puVar8 = 0x10;
    iVar6 = trace_event_buffer_reserve(&uStack_128,iVar7);
    auVar10._8_8_ = uStack_d0;
    auVar10._0_8_ = uStack_c8;
    if (iVar6 != 0) {
        *(iVar6 + 8) = Var11 >> 0x40;
        *(iVar6 + 0xc) = in_x2;
        trace_event_buffer_commit(&uStack_128);
        auVar10._8_8_ = uStack_d0;
        auVar10._0_8_ = uStack_c8;
    }
code_r0x0800b18c:
    uStack_d0 = auVar10._8_8_;
    uStack_c8 = auVar10._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    Var11 = __stack_chk_fail();
    uVar5 = Var11;
    *extraout_x18_01 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_168 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar6 = sp_el0;
    iStack_178 = *(iVar6 + 0x5e0);
    uVar3 = SUB84(puVar8,0);
    iStack_180 = 0;
    uStack_184 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    ppuStack_170 = &ppuStack_f0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_184;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_180,puVar8);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            puVar8 = uStack_184;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800b1c0;
            *(iStack_180 + 0x108) = 5;
            *(iVar6 + 8) = Var11 >> 0x40;
            *(iVar6 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar8,uVar5,1,iStack_180,piVar1,0);
            in_x3 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_178) {
        auVar10 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_02 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar8 & 0xffff,in_x3 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_susp_res_irq_handler @ 0x0800afd8 (size 284) =====

//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.perf_trace_gh_susp_res_irq_handler(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar *in_x2;
    uchar *puVar7;
    uint64_t in_x3;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar9;
    uint64_t unaff_x30;
    unkbyte10 Var10;
    uchar auVar11 [16];
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar auStack_50 [12];
    uint32_t uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffffbc;
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffc0);
        uVar6 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            in_x2 = uStack_44;
            uVar8 = -1L << (uVar6 & 0x3f);
            uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar8 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
            *(iStack_40 + 0x100) = uVar6;
            *(iStack_40 + 0x108) = 5;
            *(iVar4 + 8) = arg2;
            perf_trace_run_bpf_submit(iVar4,0x14,in_x2,arg1,1,iStack_40,piVar1,0);
            in_x3 = arg1;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    Var10 = __stack_chk_fail();
    iVar5 = Var10;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x800b0e8;
    uStack_78 = 0x800b0e8;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar9 = *(iVar5 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    if ((uVar9 >> 8 & 1) == 0) {
        puVar7 = in_x2;
        if ((uVar9 >> 7 & 1) != 0) {
            puVar7 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar5,0,0,0);
        }
        if (((uVar9 >> 6 & 1) != 0) ||
           (((uVar9 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(iVar5), (uVar6 & 1) != 0))))
        goto code_r0x0800b18c;
    }
    puVar7 = 0x10;
    iVar4 = trace_event_buffer_reserve(&stack0xffffffffffffff48,iVar5);
    if (iVar4 != 0) {
        *(iVar4 + 8) = Var10 >> 0x40;
        *(iVar4 + 0xc) = in_x2;
        trace_event_buffer_commit(&stack0xffffffffffffff48);
    }
code_r0x0800b18c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return;
    }
    Var10 = __stack_chk_fail();
    uVar6 = Var10;
    *extraout_x18_00 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_f8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar4 = sp_el0;
    iStack_108 = *(iVar4 + 0x5e0);
    uVar3 = SUB84(puVar7,0);
    iStack_110 = 0;
    uStack_114 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(uVar6 + 0x78);
    puStack_100 = &stack0xffffffffffffff80;
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &stack0xfffffffffffffeec;
        iVar4 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffef0,puVar7);
        uVar8 = _noop_llseek;
        if (iVar4 != 0) {
            *(iStack_110 + 0xe8) = &stack0xffffffffffffff00;
            puVar7 = uStack_114;
            *(iStack_110 + 0xf8) = &stack0xfffffffffffffee0;
            *(iStack_110 + 0x100) = ~(-1L << (uVar8 & 0x3f)) & 0x800b1c0;
            *(iStack_110 + 0x108) = 5;
            *(iVar4 + 8) = Var10 >> 0x40;
            *(iVar4 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar4,0x14,puVar7,uVar6,1,iStack_110,piVar1,0);
            in_x3 = uVar6;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_108) {
        auVar11 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar7 & 0xffff,in_x3 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_gh_vcpu_irq_handler @ 0x0800b0f4 (size 204) =====

//WARNING: Removing unreachable block (ram,0x0800b288)

void sym.trace_event_raw_event_gh_vcpu_irq_handler(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar8;
    ulong unaff_x30;
    unkbyte10 Var9;
    uchar auVar10 [16];
    uchar auStack_d0 [12];
    uint32_t uStack_c4;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar8 = *(arg1 + 0x48);
    if ((uVar8 >> 8 & 1) == 0) {
        puVar7 = arg3;
        if ((uVar8 >> 7 & 1) != 0) {
            puVar7 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar8 >> 6 & 1) != 0) ||
           (((uVar8 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) != 0))))
        goto code_r0x0800b18c;
    }
    puVar7 = 0x10;
    iVar6 = trace_event_buffer_reserve(&uStack_68,arg1);
    if (iVar6 != 0) {
        *(iVar6 + 8) = arg2;
        *(iVar6 + 0xc) = arg3;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x0800b18c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    Var9 = __stack_chk_fail();
    uVar5 = Var9;
    *extraout_x18 = sym.perf_trace_gh_vcpu_irq_handler;
    pcStack_a8 = sym.perf_trace_gh_vcpu_irq_handler;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    uVar3 = SUB84(puVar7,0);
    iStack_c0 = 0;
    uStack_c4 = 0;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_b0 = &stack0xffffffffffffffd0;
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_c4;
        iVar6 = perf_trace_buf_alloc(0x14,&iStack_c0,puVar7);
        uVar4 = _noop_llseek;
        if (iVar6 != 0) {
            *(iStack_c0 + 0xe8) = &puStack_b0;
            puVar7 = uStack_c4;
            *(iStack_c0 + 0xf8) = auStack_d0;
            *(iStack_c0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x800b1c0;
            *(iStack_c0 + 0x108) = 5;
            *(iVar6 + 8) = Var9 >> 0x40;
            *(iVar6 + 0xc) = uVar3;
            perf_trace_run_bpf_submit(iVar6,0x14,puVar7,uVar5,1,iStack_c0,piVar1,0);
            in_x3 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_b8) {
        auVar10 = __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x800b2e0;
        bpf_trace_run6(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar7 & 0xffff,in_x3 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_gh_vcpu_irq_handler @ 0x0800b1c0 (size 300) =====

void sym.perf_trace_gh_vcpu_irq_handler(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint64_t in_x3;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar4 = arg3;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffffac;
        iVar5 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0,arg3);
        uVar2 = _noop_llseek;
        if (iVar5 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            arg3 = uStack_54;
            uVar6 = -1L << (uVar2 & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar2;
            *(iStack_50 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0xc) = uVar4;
            perf_trace_run_bpf_submit(iVar5,0x14,arg3,arg1,1,iStack_50,piVar1,0);
            in_x3 = arg1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800b2e0;
    bpf_trace_run6(in_tmp_ldXn,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,arg3 & 0xffff,in_x3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_hcall_vcpu_run @ 0x0800b2ec (size 48) =====

void sym.__bpf_trace_gh_hcall_vcpu_run(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run6(in_x0,arg1 & 0xffffffff,arg2 & 0xffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_gh_susp_res_irq_handler @ 0x0800b31c (size 36) =====

void sym.__bpf_trace_gh_susp_res_irq_handler(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_gh_vcpu_irq_handler @ 0x0800b340 (size 44) =====

void sym.__bpf_trace_gh_vcpu_irq_handler(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,arg1 & 0xffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.gh_get_nr_vcpus @ 0x0800b36c (size 160) =====

uint sym.gh_get_nr_vcpus(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t *puVar2;
    
    uVar1 = arg1 & 0xffff;
    puVar2 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        if (_segment.ehdr[0x234] == uVar1 || _segment.ehdr[0x234] == 0xffff) {
            puVar2 = _segment.ehdr + 0x234;
        }
        else {
            puVar2 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar2 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar2 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((puVar2 != NULL) && (puVar2[0x224] != '\0')) {
        return *(puVar2 + 2);
    }
    return 0;
}


// ===== sym.gh_wakeup_all_vcpus @ 0x0800b40c (size 536) =====

void sym.gh_wakeup_all_vcpus(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    uint16_t *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xffff;
    puVar3 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        if (_segment.ehdr[0x234] == uVar1 || _segment.ehdr[0x234] == 0xffff) {
            puVar3 = _segment.ehdr + 0x234;
        }
        else {
            puVar3 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar3 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar3 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if (((puVar3 != NULL) && (*(puVar3 + 0x449) != '\0')) && (*(puVar3 + 0x449) = 0, 0 < *(puVar3 + 2))) {
        *(puVar3 + 0xe) = 1;
        __wake_up(puVar3 + 0x38,3,1,0);
        if (1 < *(puVar3 + 2)) {
            *(puVar3 + 0x52) = 1;
            __wake_up(puVar3 + 0x7c,3,1,0);
            if (2 < *(puVar3 + 2)) {
                *(puVar3 + 0x96) = 1;
                __wake_up(puVar3 + 0xc0,3,1,0);
                if (3 < *(puVar3 + 2)) {
                    *(puVar3 + 0xda) = 1;
                    __wake_up(puVar3 + 0x104,3,1,0);
                    if (4 < *(puVar3 + 2)) {
                        *(puVar3 + 0x11e) = 1;
                        __wake_up(puVar3 + 0x148,3,1,0);
                        if (5 < *(puVar3 + 2)) {
                            *(puVar3 + 0x162) = 1;
                            __wake_up(puVar3 + 0x18c,3,1,0);
                            if (6 < *(puVar3 + 2)) {
                                *(puVar3 + 0x1a6) = 1;
                                __wake_up(puVar3 + 0x1d0,3,1,0);
                                if (7 < *(puVar3 + 2)) {
                                    *(puVar3 + 0x1ea) = 1;
                                    __wake_up(puVar3 + 0x214,3,1,0);
                                    if (8 < *(puVar3 + 2)) {
                                        *(puVar3 + 0x22e) = 1;
                                        __wake_up(puVar3 + 600,3,1,0);
                                        if (9 < *(puVar3 + 2)) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x800b624);
                                            (*pcVar2)();
                                        }
                                    }
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


// ===== sym.gh_vm_supports_proxy_sched @ 0x0800b624 (size 168) =====

ulong sym.gh_vm_supports_proxy_sched(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t *puVar2;
    
    uVar1 = arg1 & 0xffff;
    puVar2 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        if (_segment.ehdr[0x234] == uVar1 || _segment.ehdr[0x234] == 0xffff) {
            puVar2 = _segment.ehdr + 0x234;
        }
        else {
            puVar2 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar2 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar2 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if (((puVar2 != NULL) && (puVar2[0x224] != '\0')) && (*(puVar2 + 2) != 0)) {
        return 1;
    }
    return 0;
}


// ===== sym.gh_vcpu_run @ 0x0800b6cc (size 1296) =====

uint64_t sym.gh_vcpu_run(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    char *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uchar auVar6 [16];
    uchar auVar7 [16];
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong in_x4;
    int *in_x5;
    ulong *in_x18;
    uint64_t uVar14;
    int iVar15;
    uint16_t *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    auVar7._8_8_ = arg2;
    auVar7._0_8_ = arg1;
    auVar6._8_8_ = arg2;
    auVar6._0_8_ = arg1;
    auVar17._8_8_ = arg2;
    auVar17._0_8_ = arg1;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar14 = arg2 & 0xffffffff;
    uVar3 = arg1 & 0xffff;
    puVar16 = _segment.ehdr;
    if (*_segment.ehdr != uVar3 && *_segment.ehdr != 0xffff) {
        puVar16 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != uVar3) && (_segment.ehdr[0x234] != 0xffff)) {
            puVar16 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar3) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar16 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar3) {
                    puVar16 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((puVar16 != NULL) && (auVar17 = auVar6, *(puVar16 + 0x449) != '\0')) {
        if (7 < arg2) goto code_r0x0800bbd8;
        auVar17 = auVar7;
        if (*(puVar16 + (arg2 & 0xffffffffU) * 0x44 + 8) != 0xffffffffffffffff) {
            puVar5 = sp_el0;
            puVar1 = puVar16 + uVar14 * 0x44 + 0xe;
            pcVar2 = puVar16 + uVar14 * 0x88 + 0x1d;
code_r0x0800b78c:
            *puVar1 = '\0';
            __pm_stay_awake(*(puVar16 + uVar14 * 0x44 + 0x44));
            ktime_get();
            *(puVar5 + 2) = puVar5[2] + 1;
            if (*pcVar2 != '\0') {
                CallHyperVisor(0x6063);
                *pcVar2 = '\0';
            }
            uVar9 = *(puVar16 + (arg2 & 0xffffffffU) * 0x44 + 8);
            CallHyperVisor(0x6065);
            *(in_x5 + 2) = arg3;
            *(in_x5 + 4) = arg4;
            *(in_x5 + 6) = in_x4;
            in_x5[8] = 0;
            in_x5[9] = 0;
            iVar15 = uVar9;
            *in_x5 = iVar15;
            in_x5[10] = 0;
            in_x5[0xb] = 0;
            uVar10 = uVar9;
            iVar11 = arg3;
            iVar12 = arg4;
            uVar13 = in_x4;
            if (((iVar15 == 0) && (arg3 == 0)) && ((*puVar5 >> 1 & 1) != 0)) {
                uVar10 = *(puVar16 + 0x228);
                iVar11 = 0;
                iVar12 = 0;
                uVar13 = 0;
                CallHyperVisor(0x6063);
                *pcVar2 = '\x01';
            }
            uStack_90 = 0;
            iVar4 = puVar5[2] - 1;
            *(puVar5 + 2) = iVar4;
            if ((iVar4 == 0) || (puVar5[2] == 0)) {
                preempt_schedule(uVar10,iVar11,iVar12,uVar13,0,0,0,0);
            }
            auVar17 = ktime_get();
            uVar10 = auVar17._0_8_;
            if (iVar15 == 0) {
                iVar11 = *(in_x5 + 2);
                if (1 < iVar11 - 1U) {
                    if (iVar11 != 3) {
                        if (iVar11 == 0) {
                            auVar17._8_8_ = 0;
                            auVar17._0_8_ = uVar10;
                            if ((*puVar5 >> 1 & 1) == 0) goto code_r0x0800b96c;
                        }
                        else {
                            _printk(0x8002bd8,iVar11,arg2 & 0xffffffff,**(puVar16 + uVar14 * 0x44 + 4),*(in_x5 + 6)
                                    ,*(in_x5 + 8),*(in_x5 + 10));
                        }
                    }
                    goto code_r0x0800b8f8;
                }
                auVar17 = __pm_relax(*(puVar16 + uVar14 * 0x44 + 0x44));
                if (((*puVar1 == '\0') && ((*puVar5 >> 6 & 1) == 0)) && ((*puVar5 & 1) == 0)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while( true ) {
                        auVar17 = prepare_to_wait_event(puVar16 + uVar14 * 0x44 + 0x38,&uStack_90,1);
                        if (*puVar1 != '\0') break;
                        if (auVar17._0_8_ != 0) goto code_r0x0800b96c;
                        schedule();
                    }
                    auVar17 = finish_wait(puVar16 + uVar14 * 0x44 + 0x38,&uStack_90);
                }
            }
            else if (iVar15 == -2) {
code_r0x0800b8f8:
                auVar17 = schedule();
            }
code_r0x0800b96c:
            if (((*puVar5 >> 6 & 1) == 0) && ((*puVar5 & 1) == 0)) {
    //switch table (64 cases) at 0x8003908
                switch(iVar15) {
                case 10:
                    uVar9 = 0xfffffff4;
                    goto code_r0x0800baa4;
                case 0x1e:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                    uVar9 = 0xfffffff3;
                    goto code_r0x0800baa4;
                case 0x1f:
                case 0x20:
                    uVar9 = 0xfffffff0;
                    goto code_r0x0800baa4;
                case 0x28:
                case 0x29:
                case 0x3c:
                case 0x3d:
                    goto code_r0x0800baa0;
                case -2:
                case 0:
                    goto code_r0x0800b9a4;
                case -1:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x2f:
                case 0x30:
                case 0x31:
                case 0x37:
                case 0x38:
                case 0x39:
                case 0x3a:
                case 0x3b:
                    goto code_r0x0800bb78;
                default:
                    if (iVar15 == -0x200) goto code_r0x0800baa4;
                    goto code_r0x0800bb78;
                }
            }
            if (*pcVar2 == '\0') {
                auVar17._8_8_ = 0;
                auVar17._0_8_ = *(puVar16 + 0x228);
                CallHyperVisor(0x6063);
                uStack_90 = 0;
                uVar9 = 0xfffffe00;
                *pcVar2 = '\x01';
            }
            else {
                uVar9 = 0xfffffe00;
            }
            goto code_r0x0800baa4;
        }
    }
code_r0x0800baa0:
    uVar9 = 0xffffffff;
    goto code_r0x0800baa4;
code_r0x0800b9a4:
    if (*(puVar16 + 0x449) == '\0') goto code_r0x0800bb64;
    goto code_r0x0800b78c;
code_r0x0800bb64:
    if (iVar15 != 0) {
code_r0x0800bb78:
        uVar9 = 0xffffffea;
    }
code_r0x0800baa4:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail(auVar17._0_8_,auVar17._8_8_);
code_r0x0800bbd8:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800bbdc);
    (*pcVar8)();
}


// ===== sym.gh_proxy_sched_init @ 0x0800bc00 (size 564) =====

int sym.gh_proxy_sched_init(void)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    ushort *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x1608);
    if (_segment.ehdr == 0) {
        iVar4 = -0xc;
    }
    else {
        iVar4 = gh_rm_set_wdog_manage_cb(sym.gh_wdog_manage.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
        if (iVar4 == 0) {
            iVar4 = gh_rm_set_vcpu_affinity_cb(sym.gh_populate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
            if (iVar4 == 0) {
                iVar4 = gh_rm_reset_vcpu_affinity_cb
                                  (sym.gh_unpopulate_vm_vcpu_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
                if (iVar4 == 0) {
                    iVar4 = gh_rm_set_vpm_grp_cb
                                      (sym.gh_populate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
                    if (iVar4 == 0) {
                        iVar4 = gh_rm_reset_vpm_grp_cb
                                          (sym.gh_unpopulate_vm_vpm_grp_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
                        if (iVar4 == 0) {
                            iVar4 = gh_rm_all_res_populated_cb
                                              (sym.gh_populate_all_res_info.53362a27af7365b2e8d0dde4293a1b94.cfi_jt);
                            if (iVar4 == 0) {
                                iVar7 = 0;
                                do {
                                    iVar2 = _segment.ehdr;
                                    iVar4 = iVar7;
                                    iVar10 = 0;
                                    puVar6 = _segment.ehdr + iVar4 * 0x468;
                                    iVar8 = _segment.ehdr + iVar7 * 0x468;
                                    *puVar6 = 0xffff;
                                    puVar6[0x224] = 0;
                                    *(puVar6 + 0x230) = 0xffffffff;
                                    *(puVar6 + 0x232) = 0;
                                    *(puVar6 + 0x22c) = 0xffffffffffffffff;
                                    puVar9 = puVar6 + 2;
                                    *puVar9 = 0;
                                    do {
                                        iVar1 = iVar8 + iVar10;
                                        *(iVar1 + 0x28) = 0xffffffff;
                                        *(iVar1 + 0x18) = 0xffffffff;
                                        *(iVar1 + 8) = 0;
                                        *(iVar1 + 0x10) = 0xffffffffffffffff;
                                        *(iVar1 + 0x1c) = 0;
                                        *(iVar1 + 0x88) = 0;
                                        if (7 < *puVar9) {
code_r0x0800be30:
    //WARNING: Does not return
                                            pcVar3 = SoftwareBreakpoint(0x5512,0x800be34);
                                            (*pcVar3)();
                                        }
                                        strscpy(iVar2 + iVar4 * 0x468 + *puVar9 * 0x88 + 0x2c,0x8003090,0x20);
                                        if (7 < *puVar9) goto code_r0x0800be30;
                                        strscpy(iVar2 + iVar4 * 0x468 + *puVar9 * 0x88 + 0x4c,0x8003090,0x20);
                                        iVar10 = iVar10 + 0x88;
                                    } while (iVar10 != 0x440);
                                    iVar7 = iVar7 + 1;
                                    if (iVar7 == 5) {
                                        obj.init_done = 0x1;
                                        return 0;
                                    }
                                } while( true );
                            }
                            uVar5 = 0x800315f;
                        }
                        else {
                            uVar5 = 0x8002691;
                        }
                    }
                    else {
                        uVar5 = 0x8001e82;
                    }
                }
                else {
                    uVar5 = 0x8002cff;
                }
            }
            else {
                uVar5 = 0x8002654;
            }
        }
        else {
            uVar5 = 0x8002589;
        }
        _printk(uVar5);
        kfree(_segment.ehdr);
    }
    return iVar4;
}


// ===== sym.gh_proxy_sched_exit @ 0x0800be34 (size 44) =====

void sym.gh_proxy_sched_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    return;
}


// ===== sym.trace_raw_output_gh_hcall_vcpu_run @ 0x0800be60 (size 124) =====

void sym.trace_raw_output_gh_hcall_vcpu_run(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"ret=%d vm=%u vcpu=%u yield_time=%llu vcpu_state=%llu vcpu_suspend_state=%llu\n",1,
                           *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_susp_res_irq_handler @ 0x0800bedc (size 108) =====

void sym.trace_raw_output_gh_susp_res_irq_handler(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"vpmg_state=%llu\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_gh_vcpu_irq_handler @ 0x0800bf48 (size 112) =====

void sym.trace_raw_output_gh_vcpu_irq_handler(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"vm=%u vcpu=%u\n",*(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.gh_wdog_manage @ 0x0800bfb8 (size 500) =====

uint sym.gh_wdog_manage(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return 0xfffffffa;
    }
    uVar1 = arg1 & 0xffff;
    mutex_lock(obj.gh_vm_mutex);
    puVar3 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        puVar3 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
            puVar3 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar3 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar3 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((puVar3 == NULL) || (*puVar3 == 0xffff)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar2 = *(puVar3 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar2) {
            mutex_lock(obj.gh_vm_mutex);
            puVar3 = _segment.ehdr;
            if ((*_segment.ehdr != uVar1) && (*_segment.ehdr != 0xffff)) {
                puVar3 = _segment.ehdr + 0x234;
                if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
                    puVar3 = _segment.ehdr + 0x468;
                    if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                        puVar3 = _segment.ehdr + 0x69c;
                        if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                            puVar3 = _segment.ehdr + 0x8d0;
                        }
                    }
                }
            }
            if (puVar3 == NULL) {
                uVar4 = 0xffffffed;
            }
            else {
                if ((arg3 & 1U) == 0) {
                    arg2 = -1;
                }
                uVar4 = 0;
                *(puVar3 + 0x228) = arg2;
            }
            mutex_unlock(obj.gh_vm_mutex);
            return uVar4;
        }
    }
    _printk(0x8002b62,arg1 & 0xffff);
    return 0xffffffea;
}


// ===== sym.gh_populate_vm_vcpu_info @ 0x0800c1ac (size 1040) =====

int sym.gh_populate_vm_vcpu_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    int16_t *piVar4;
    code *pcVar5;
    int16_t iVar6;
    int iVar7;
    ulong uVar8;
    uint *puVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    ulong unaff_x30;
    uint16_t auStack_5c [2];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    auStack_5c[0] = 0;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        iVar7 = -6;
    }
    else {
        uVar13 = arg2 & 0xffffffff;
        uVar2 = arg1;
        uVar1 = uVar2 & 0xffff;
        uVar14 = arg3;
        puVar9 = arg4;
        iVar7 = gh_rm_get_vmid(2,auStack_5c);
        if ((((iVar7 == 0) && (auStack_5c[0] != uVar1)) && (iVar7 = gh_rm_get_vmid(4,auStack_5c), iVar7 == 0)) &&
           (auStack_5c[0] != uVar1)) {
            _printk(0x8002b62,uVar2 & 0xffff);
            iVar7 = 0;
            arg3 = uVar14;
            arg4 = puVar9;
        }
        else if (_segment.ehdr < 0x28) {
            if (arg4 + 1U < 2) {
                _printk(0x80022f3);
                iVar7 = 0;
                arg3 = uVar14;
                arg4 = puVar9;
            }
            else {
                mutex_lock(obj.gh_vm_mutex);
                puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                puVar15 = puVar3;
                if (*puVar3 == uVar1) {
code_r0x0800c2e0:
                    if (puVar15 == NULL) goto code_r0x0800c2ec;
code_r0x0800c2e4:
                    if (puVar15[0x224] != '\0') goto code_r0x0800c2ec;
                    uVar1 = *(puVar15 + 2);
                    if (uVar1 < 8) {
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        strscpy(puVar15 + uVar1 * 0x44 + 0x16,"gh_vcpu_irq",0x20);
                        uVar1 = *(puVar15 + 2);
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        uVar14 = uVar2 & 0xffff;
                        sym.gh_get_vcpu_prop_name(uVar14,uVar1,puVar15 + uVar1 * 0x44 + 0x16);
                        uVar1 = *(puVar15 + 2);
                        if (7 < uVar1) goto code_r0x0800c5b4;
                        puVar9 = NULL;
                        iVar7 = request_threaded_irq
                                          (arg4 & 0xffffffff,
                                           sym.gh_vcpu_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt,0,0,
                                           puVar15 + uVar1 * 0x44 + 0x16,puVar15 + uVar1 * 0x44 + 4);
                        if (iVar7 < 0) {
                            _printk(0x8002fdd,"gh_populate_vm_vcpu_info",iVar7);
                        }
                        else {
                            if (7 < *(puVar15 + 2)) goto code_r0x0800c5b4;
                            strscpy(puVar15 + *(puVar15 + 2) * 0x44 + 0x26,"gh_vcpu_ws",0x20);
                            uVar1 = *(puVar15 + 2);
                            if (7 < uVar1) goto code_r0x0800c5b4;
                            sym.gh_get_vcpu_prop_name(uVar14,uVar1,puVar15 + uVar1 * 0x44 + 0x26);
                            if (7 < *(puVar15 + 2)) goto code_r0x0800c5b4;
                            iVar12 = wakeup_source_register(0,puVar15 + *(puVar15 + 2) * 0x44 + 0x26);
                            uVar1 = *(puVar15 + 2);
                            uVar10 = uVar1;
                            if (7 < uVar1) goto code_r0x0800c5b4;
                            *(puVar15 + uVar10 * 0x44 + 0x44) = iVar12;
                            if (iVar12 != 0) {
                                *puVar15 = arg1;
                                *(puVar15 + 2) = uVar1 + 1;
                                *(puVar15 + uVar10 * 0x44 + 0x14) = arg4;
                                *(puVar15 + uVar10 * 0x44 + 0xc) = arg2;
                                *(puVar15 + uVar10 * 0x44 + 4) = puVar15;
                                *(puVar15 + uVar10 * 0x44 + 8) = arg3;
                                _segment.ehdr = _segment.ehdr + 1;
                                _printk(0x8002a9c,uVar14,uVar13,arg3,arg4 & 0xffffffffU,
                                        puVar15 + uVar10 * 0x44 + 0x16);
                                puVar9 = arg3;
                                goto code_r0x0800c2f0;
                            }
                            _printk(0x8002e4c,"gh_populate_vm_vcpu_info");
                            if (7 < *(puVar15 + 2)) goto code_r0x0800c5b4;
                            strscpy(puVar15 + *(puVar15 + 2) * 0x44 + 0x26,0x8003090,0x20);
                            if (8 < *(puVar15 + 2)) goto code_r0x0800c5b4;
                            free_irq(arg4 & 0xffffffffU,puVar15 + *(puVar15 + 2) * 0x44 + 4);
                        }
                        if (7 < *(puVar15 + 2)) {
code_r0x0800c5b4:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x800c5b8);
                            (*pcVar5)();
                        }
                        uVar13 = 0x20;
                        strscpy(puVar15 + *(puVar15 + 2) * 0x44 + 0x16,0x8003090);
                    }
                    else {
                        _printk(0x80031d3);
                        iVar7 = -6;
                        uVar13 = uVar14;
                    }
                }
                else {
                    if (*puVar3 != 0xffff) {
                        puVar15 = puVar3 + 0x234;
                        if ((puVar3[0x234] != uVar1) && (puVar3[0x234] != 0xffff)) {
                            puVar15 = puVar3 + 0x468;
                            if ((puVar3[0x468] != uVar1) && (puVar3[0x468] != 0xffff)) {
                                puVar15 = puVar3 + 0x69c;
                                if (puVar3[0x69c] != 0xffff && puVar3[0x69c] != uVar1) {
                                    puVar15 = puVar3 + 0x8d0;
                                }
                                goto joined_r0x0800c2d4;
                            }
                        }
                        goto code_r0x0800c2e0;
                    }
joined_r0x0800c2d4:
                    if (puVar15 != NULL) goto code_r0x0800c2e4;
code_r0x0800c2ec:
                    iVar7 = 0;
                    uVar13 = uVar14;
                }
code_r0x0800c2f0:
                mutex_unlock(obj.gh_vm_mutex);
                arg3 = uVar13;
                arg4 = puVar9;
            }
        }
        else {
            _printk(0x800319c);
            iVar7 = -6;
            arg3 = uVar14;
            arg4 = puVar9;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return iVar7;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.gh_unpopulate_vm_vcpu_info;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return -6;
    }
    mutex_lock(obj.gh_vm_mutex);
    piVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar11 = piVar4;
    if (*piVar4 != iVar6 && *piVar4 != -1) {
        piVar11 = piVar4 + 0x234;
        if ((piVar4[0x234] != iVar6) && (piVar4[0x234] != -1)) {
            piVar11 = piVar4 + 0x468;
            if ((piVar4[0x468] != iVar6) && (piVar4[0x468] != -1)) {
                piVar11 = piVar4 + 0x69c;
                if (piVar4[0x69c] != -1 && piVar4[0x69c] != iVar6) {
                    piVar11 = piVar4 + 0x8d0;
                }
            }
        }
    }
    if ((piVar11 == NULL) || (*piVar11 == -1)) {
        mutex_unlock(obj.gh_vm_mutex);
code_r0x0800c7b8:
        _printk(0x8002980,iVar6);
        return 0;
    }
    iVar7 = *(piVar11 + 2);
    mutex_unlock(obj.gh_vm_mutex);
    if (iVar7 < 1) goto code_r0x0800c7b8;
    mutex_lock(obj.gh_vm_mutex);
    piVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    piVar11 = piVar4;
    if ((*piVar4 != iVar6) && (*piVar4 != -1)) {
        piVar11 = piVar4 + 0x234;
        if ((piVar4[0x234] != iVar6) && (piVar4[0x234] != -1)) {
            piVar11 = piVar4 + 0x468;
            if ((piVar4[0x468] != iVar6) && (piVar4[0x468] != -1)) {
                piVar11 = piVar4 + 0x69c;
                if (piVar4[0x69c] != -1 && piVar4[0x69c] != iVar6) {
                    piVar11 = piVar4 + 0x8d0;
                }
            }
        }
    }
    if (((piVar11 == NULL) || (piVar11[0x224] == '\0')) || (iVar7 = *(piVar11 + 2), iVar7 < 1)) goto code_r0x0800c7d4;
    if (*(piVar11 + 8) == arg3) {
        iVar12 = 0;
    }
    else {
        if (iVar7 == 1) goto code_r0x0800c7d4;
        if (*(piVar11 + 0x4c) == arg3) {
            iVar12 = 1;
        }
        else {
            if (iVar7 == 2) goto code_r0x0800c7d4;
            if (*(piVar11 + 0x90) == arg3) {
                iVar12 = 2;
            }
            else {
                if (iVar7 == 3) goto code_r0x0800c7d4;
                if (*(piVar11 + 0xd4) == arg3) {
                    iVar12 = 3;
                }
                else {
                    if (iVar7 == 4) goto code_r0x0800c7d4;
                    if (*(piVar11 + 0x118) == arg3) {
                        iVar12 = 4;
                    }
                    else {
                        if (iVar7 == 5) goto code_r0x0800c7d4;
                        if (*(piVar11 + 0x15c) == arg3) {
                            iVar12 = 5;
                        }
                        else {
                            if (iVar7 == 6) goto code_r0x0800c7d4;
                            if (*(piVar11 + 0x1a0) == arg3) {
                                iVar12 = 6;
                            }
                            else {
                                if (iVar7 == 7) goto code_r0x0800c7d4;
                                if (*(piVar11 + 0x1e4) != arg3) {
                                    if (iVar7 != 8) {
    //WARNING: Does not return
                                        pcVar5 = SoftwareBreakpoint(0x5512,0x800c8dc);
                                        (*pcVar5)();
                                    }
                                    goto code_r0x0800c7d4;
                                }
                                iVar12 = 7;
                            }
                        }
                    }
                }
            }
        }
    }
    if (piVar11 + iVar12 * 0x44 + 4 != NULL) {
        *arg4 = *(piVar11 + iVar12 * 0x44 + 0x14);
        free_irq(*(piVar11 + iVar12 * 0x44 + 0x14),piVar11 + iVar12 * 0x44 + 4);
        uVar8 = *(piVar11 + iVar12 * 0x44 + 0x44);
        (piVar11 + iVar12 * 0x44 + 0x14)[0] = -1;
        (piVar11 + iVar12 * 0x44 + 0x14)[1] = -1;
        wakeup_source_unregister(uVar8);
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
code_r0x0800c7d4:
    mutex_unlock(obj.gh_vm_mutex);
    return 0;
}


// ===== sym.gh_unpopulate_vm_vcpu_info @ 0x0800c5bc (size 800) =====

ulong sym.gh_unpopulate_vm_vcpu_info(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    code *pcVar4;
    ulong uVar5;
    uint16_t *puVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x800305e);
        return 0xfffffffa;
    }
    uVar1 = arg1 & 0xffff;
    mutex_lock(obj.gh_vm_mutex);
    puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    puVar6 = puVar3;
    if (*puVar3 != uVar1 && *puVar3 != 0xffff) {
        puVar6 = puVar3 + 0x234;
        if ((puVar3[0x234] != uVar1) && (puVar3[0x234] != 0xffff)) {
            puVar6 = puVar3 + 0x468;
            if ((puVar3[0x468] != uVar1) && (puVar3[0x468] != 0xffff)) {
                puVar6 = puVar3 + 0x69c;
                if (puVar3[0x69c] != 0xffff && puVar3[0x69c] != uVar1) {
                    puVar6 = puVar3 + 0x8d0;
                }
            }
        }
    }
    if ((puVar6 == NULL) || (*puVar6 == 0xffff)) {
        mutex_unlock(obj.gh_vm_mutex);
code_r0x0800c7b8:
        _printk(0x8002980,arg1 & 0xffff);
        return 0;
    }
    iVar2 = *(puVar6 + 2);
    mutex_unlock(obj.gh_vm_mutex);
    if (iVar2 < 1) goto code_r0x0800c7b8;
    mutex_lock(obj.gh_vm_mutex);
    puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    puVar6 = puVar3;
    if ((*puVar3 != uVar1) && (*puVar3 != 0xffff)) {
        puVar6 = puVar3 + 0x234;
        if ((puVar3[0x234] != uVar1) && (puVar3[0x234] != 0xffff)) {
            puVar6 = puVar3 + 0x468;
            if ((puVar3[0x468] != uVar1) && (puVar3[0x468] != 0xffff)) {
                puVar6 = puVar3 + 0x69c;
                if (puVar3[0x69c] != 0xffff && puVar3[0x69c] != uVar1) {
                    puVar6 = puVar3 + 0x8d0;
                }
            }
        }
    }
    if (((puVar6 == NULL) || (puVar6[0x224] == '\0')) || (iVar2 = *(puVar6 + 2), iVar2 < 1)) goto code_r0x0800c7d4;
    if (*(puVar6 + 8) == arg2) {
        iVar7 = 0;
    }
    else {
        if (iVar2 == 1) goto code_r0x0800c7d4;
        if (*(puVar6 + 0x4c) == arg2) {
            iVar7 = 1;
        }
        else {
            if (iVar2 == 2) goto code_r0x0800c7d4;
            if (*(puVar6 + 0x90) == arg2) {
                iVar7 = 2;
            }
            else {
                if (iVar2 == 3) goto code_r0x0800c7d4;
                if (*(puVar6 + 0xd4) == arg2) {
                    iVar7 = 3;
                }
                else {
                    if (iVar2 == 4) goto code_r0x0800c7d4;
                    if (*(puVar6 + 0x118) == arg2) {
                        iVar7 = 4;
                    }
                    else {
                        if (iVar2 == 5) goto code_r0x0800c7d4;
                        if (*(puVar6 + 0x15c) == arg2) {
                            iVar7 = 5;
                        }
                        else {
                            if (iVar2 == 6) goto code_r0x0800c7d4;
                            if (*(puVar6 + 0x1a0) == arg2) {
                                iVar7 = 6;
                            }
                            else {
                                if (iVar2 == 7) goto code_r0x0800c7d4;
                                if (*(puVar6 + 0x1e4) != arg2) {
                                    if (iVar2 != 8) {
    //WARNING: Does not return
                                        pcVar4 = SoftwareBreakpoint(0x5512,0x800c8dc);
                                        (*pcVar4)();
                                    }
                                    goto code_r0x0800c7d4;
                                }
                                iVar7 = 7;
                            }
                        }
                    }
                }
            }
        }
    }
    if (puVar6 + iVar7 * 0x44 + 4 != NULL) {
        *arg3 = *(puVar6 + iVar7 * 0x44 + 0x14);
        free_irq(*(puVar6 + iVar7 * 0x44 + 0x14),puVar6 + iVar7 * 0x44 + 4);
        uVar5 = *(puVar6 + iVar7 * 0x44 + 0x44);
        (puVar6 + iVar7 * 0x44 + 0x14)[0] = 0xffff;
        (puVar6 + iVar7 * 0x44 + 0x14)[1] = 0xffff;
        wakeup_source_unregister(uVar5);
        if (_segment.ehdr != 0) {
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
code_r0x0800c7d4:
    mutex_unlock(obj.gh_vm_mutex);
    return 0;
}


// ===== sym.gh_populate_vm_vpm_grp_info @ 0x0800c8dc (size 624) =====

int sym.gh_populate_vm_vpm_grp_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_populate_vm_vpm_grp_info");
        return -6;
    }
    uVar1 = arg1 & 0xffff;
    mutex_lock(obj.gh_vm_mutex);
    puVar3 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        puVar3 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
            puVar3 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar3 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar3 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((puVar3 == NULL) || (*puVar3 == 0xffff)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar2 = *(puVar3 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar2) {
            if (-1 < arg3) {
                mutex_lock(obj.gh_vm_mutex);
                puVar3 = _segment.ehdr;
                if ((*_segment.ehdr != uVar1) && (*_segment.ehdr != 0xffff)) {
                    puVar3 = _segment.ehdr + 0x234;
                    if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
                        puVar3 = _segment.ehdr + 0x468;
                        if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                            puVar3 = _segment.ehdr + 0x69c;
                            if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                                puVar3 = _segment.ehdr + 0x8d0;
                            }
                        }
                    }
                }
                if ((puVar3 == NULL) || (puVar3[0x232] != '\0')) {
                    iVar2 = 0;
                }
                else {
                    iVar2 = request_threaded_irq
                                      (arg3 & 0xffffffff,
                                       sym.gh_susp_res_irq_handler.53362a27af7365b2e8d0dde4293a1b94.cfi_jt,0,0,
                                       "gh_susp_res_irq",0);
                    if (iVar2 < 0) {
                        _printk(0x8002fdd,"gh_populate_vm_vpm_grp_info",iVar2);
                    }
                    else {
                        *(puVar3 + 0x22c) = arg2;
                        *(puVar3 + 0x230) = arg3;
                        *(puVar3 + 0x232) = 1;
                    }
                }
                mutex_unlock(obj.gh_vm_mutex);
                return iVar2;
            }
            _printk(0x800323d,"gh_populate_vm_vpm_grp_info");
            return -0x16;
        }
    }
    _printk(0x8003203,arg1 & 0xffff);
    return 0;
}


// ===== sym.gh_unpopulate_vm_vpm_grp_info @ 0x0800cb4c (size 520) =====

ulong sym.gh_unpopulate_vm_vpm_grp_info(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_unpopulate_vm_vpm_grp_info");
        return 0xfffffffa;
    }
    uVar1 = arg1 & 0xffff;
    mutex_lock(obj.gh_vm_mutex);
    puVar3 = _segment.ehdr;
    if (*_segment.ehdr != uVar1 && *_segment.ehdr != 0xffff) {
        puVar3 = _segment.ehdr + 0x234;
        if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
            puVar3 = _segment.ehdr + 0x468;
            if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                puVar3 = _segment.ehdr + 0x69c;
                if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                    puVar3 = _segment.ehdr + 0x8d0;
                }
            }
        }
    }
    if ((puVar3 == NULL) || (*puVar3 == 0xffff)) {
        mutex_unlock(obj.gh_vm_mutex);
    }
    else {
        iVar2 = *(puVar3 + 2);
        mutex_unlock(obj.gh_vm_mutex);
        if (0 < iVar2) {
            mutex_lock(obj.gh_vm_mutex);
            puVar3 = _segment.ehdr;
            if ((*_segment.ehdr != uVar1) && (*_segment.ehdr != 0xffff)) {
                puVar3 = _segment.ehdr + 0x234;
                if ((_segment.ehdr[0x234] != uVar1) && (_segment.ehdr[0x234] != 0xffff)) {
                    puVar3 = _segment.ehdr + 0x468;
                    if ((_segment.ehdr[0x468] != uVar1) && (_segment.ehdr[0x468] != 0xffff)) {
                        puVar3 = _segment.ehdr + 0x69c;
                        if (_segment.ehdr[0x69c] != 0xffff && _segment.ehdr[0x69c] != uVar1) {
                            puVar3 = _segment.ehdr + 0x8d0;
                        }
                    }
                }
            }
            if ((puVar3 != NULL) && (puVar3[0x232] != '\0')) {
                *arg2 = *(puVar3 + 0x230);
                free_irq(*(puVar3 + 0x230),0);
                *(puVar3 + 0x232) = 0;
                puVar3[0x230] = 0xffff;
                puVar3[0x231] = 0xffff;
            }
            mutex_unlock(obj.gh_vm_mutex);
            return 0;
        }
    }
    _printk(0x8001efa,arg1 & 0xffff);
    return 0;
}


// ===== sym.gh_populate_all_res_info @ 0x0800cd54 (size 1020) =====

void sym.gh_populate_all_res_info(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t *puVar3;
    code *pcVar4;
    uint16_t *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.init_done & 1) == 0) {
        _printk(0x8002af9,"gh_populate_all_res_info");
    }
    else {
        uVar1 = arg1 & 0xffff;
        mutex_lock(obj.gh_vm_mutex);
        puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
        puVar5 = puVar3;
        if (*puVar3 != uVar1 && *puVar3 != 0xffff) {
            puVar5 = puVar3 + 0x234;
            if ((puVar3[0x234] != uVar1) && (puVar3[0x234] != 0xffff)) {
                puVar5 = puVar3 + 0x468;
                if ((puVar3[0x468] != uVar1) && (puVar3[0x468] != 0xffff)) {
                    puVar5 = puVar3 + 0x69c;
                    if (puVar3[0x69c] != 0xffff && puVar3[0x69c] != uVar1) {
                        puVar5 = puVar3 + 0x8d0;
                    }
                }
            }
        }
        if ((puVar5 == NULL) || (*puVar5 == 0xffff)) {
            mutex_unlock(obj.gh_vm_mutex);
        }
        else {
            iVar2 = *(puVar5 + 2);
            mutex_unlock(obj.gh_vm_mutex);
            if (0 < iVar2) {
                if (4 < _segment.ehdr) {
                    _printk(0x80021b7);
                    return;
                }
                mutex_lock(obj.gh_vm_mutex);
                puVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                puVar5 = puVar3;
                if ((*puVar3 != uVar1) && (*puVar3 != 0xffff)) {
                    puVar5 = puVar3 + 0x234;
                    if ((puVar3[0x234] != uVar1) && (puVar3[0x234] != 0xffff)) {
                        puVar5 = puVar3 + 0x468;
                        if ((puVar3[0x468] != uVar1) && (puVar3[0x468] != 0xffff)) {
                            puVar5 = puVar3 + 0x69c;
                            if (puVar3[0x69c] != 0xffff && puVar3[0x69c] != uVar1) {
                                puVar5 = puVar3 + 0x8d0;
                            }
                        }
                    }
                }
                if (puVar5 != NULL) {
                    if ((arg2 & 1U) == 0) {
                        if (puVar5[0x224] != '\0') {
                            iVar6 = 0;
                            puVar5[2] = 0;
                            puVar5[3] = 0;
                            puVar5[0x224] = 0;
                            *puVar5 = 0xffff;
                            puVar5[0x230] = 0xffff;
                            puVar5[0x231] = 0xffff;
                            *(puVar5 + 0x232) = 0;
                            puVar5[0x22c] = 0xffff;
                            puVar5[0x22d] = 0xffff;
                            puVar5[0x22e] = 0xffff;
                            puVar5[0x22f] = 0xffff;
                            do {
                                uVar1 = *(puVar5 + 2);
                                *(puVar5 + iVar6 + 0x28) = 0xffffffff;
                                *(puVar5 + iVar6 + 0x18) = 0xffffffff;
                                *(puVar5 + iVar6 + 8) = 0;
                                *(puVar5 + iVar6 + 0x10) = 0xffffffffffffffff;
                                *(puVar5 + iVar6 + 0x1c) = 0;
                                *(puVar5 + iVar6 + 0x88) = 0;
                                if (7 < uVar1) goto code_r0x0800d14c;
                                strscpy(puVar5 + uVar1 * 0x44 + 0x16,0x8003090,0x20);
                                if (7 < *(puVar5 + 2)) goto code_r0x0800d14c;
                                strscpy(puVar5 + *(puVar5 + 2) * 0x44 + 0x26,0x8003090,0x20);
                                iVar6 = iVar6 + 0x88;
                            } while (iVar6 != 0x440);
                            if (_segment.ehdr != 0) {
                                _segment.ehdr = _segment.ehdr + -1;
                            }
                        }
                    }
                    else if (puVar5[0x224] == '\0') {
                        if ((((((*(puVar5 + 2) != 0) &&
                               (__init_waitqueue_head
                                          (puVar5 + 0x38,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                               1 < *(puVar5 + 2))) &&
                              (__init_waitqueue_head
                                         (puVar5 + 0x7c,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              2 < *(puVar5 + 2))) &&
                             ((__init_waitqueue_head
                                         (puVar5 + 0xc0,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              3 < *(puVar5 + 2) &&
                              (__init_waitqueue_head
                                         (puVar5 + 0x104,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              4 < *(puVar5 + 2))))) &&
                            ((__init_waitqueue_head
                                        (puVar5 + 0x148,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                             5 < *(puVar5 + 2) &&
                             ((__init_waitqueue_head
                                         (puVar5 + 0x18c,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              6 < *(puVar5 + 2) &&
                              (__init_waitqueue_head
                                         (puVar5 + 0x1d0,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                              7 < *(puVar5 + 2))))))) &&
                           (__init_waitqueue_head
                                      (puVar5 + 0x214,"&vm->vcpu[j].wait_queue",obj.gh_init_wait_queues.__key),
                           8 < *(puVar5 + 2))) {
code_r0x0800d14c:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x800d150);
                            (*pcVar4)();
                        }
                        _segment.ehdr = _segment.ehdr + 1;
                        puVar5[0x224] = 0x101;
                    }
                }
                mutex_unlock(obj.gh_vm_mutex);
                return;
            }
        }
        _printk(0x8002b24,arg1 & 0xffff);
    }
    return;
}


// ===== sym.gh_get_vcpu_prop_name @ 0x0800d150 (size 140) =====

ulong sym.gh_get_vcpu_prop_name(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = 0;
    scnprintf(&uStack_38,0xc,"_%d_%d",arg1 & 0xffffffff,arg2 & 0xffffffff);
    uVar2 = strlcat(arg3,&uStack_38,0x20);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gh_vcpu_irq_handler;
    _raw_spin_lock(obj.gh_vm_lock);
    if (((extraout_x1 != NULL) && (*extraout_x1 != 0)) && (*(*extraout_x1 + 0x448) != '\0')) {
        *(extraout_x1 + 0x14) = 1;
        __wake_up(extraout_x1 + 0xd,3,1,0);
    }
    _raw_spin_unlock(obj.gh_vm_lock);
    return 1;
}


// ===== sym.gh_vcpu_irq_handler @ 0x0800d1dc (size 148) =====

ulong sym.gh_vcpu_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.gh_vm_lock);
    if (((arg1 != 0) && (*arg1 != 0)) && (*(*arg1 + 0x448) != '\0')) {
        *(arg1 + 0x14) = 1;
        __wake_up(arg1 + 0x68,3,1,0);
    }
    _raw_spin_unlock(obj.gh_vm_lock);
    return 1;
}


// ===== sym.gh_susp_res_irq_handler @ 0x0800d324 (size 456) =====

ulong sym.gh_susp_res_irq_handler(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *puVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar5 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(_segment.ehdr + 0x460) == arg1) {
        uVar3 = *(_segment.ehdr + 0x458);
    }
    else {
        uVar3 = 0;
    }
    if (*(_segment.ehdr + 0x8c8) == arg1) {
        uVar3 = *(_segment.ehdr + 0x8c0);
    }
    if (*(_segment.ehdr + 0xd30) == arg1) {
        uVar3 = *(_segment.ehdr + 0xd28);
    }
    if (*(_segment.ehdr + 0x1198) == arg1) {
        uVar3 = *(_segment.ehdr + 0x1190);
    }
    if (*(_segment.ehdr + 0x1600) == arg1) {
        uVar3 = *(_segment.ehdr + 0x15f8);
    }
    CallHyperVisor(0x6045);
    uStack_40 = 0;
    if (uVar3 == 0) {
        puVar5 = NULL;
        _printk(0x8001ec2,0,uVar3,0,0,0,0,0);
    }
    else {
        _printk(0x80029c2,uVar3,uVar3,0,0,0,0,0);
    }
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar6 = *0x800db70;
            piVar4 = *0x800db70;
            while (piVar4 != NULL) {
                (**piVar6)(piVar6[1],puVar5);
                piVar6 = piVar6 + 3;
                piVar4 = *piVar6;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return 1;
}


// ===== sym.init_module @ 0x0800d548 (size 220) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80027df,iVar1);
    }
    iVar1 = sym.gh_proxy_sched_init();
    if (iVar1 != 0) {
        _printk(0x8001fee,iVar1);
    }
    iVar1 = misc_register(obj.gh_dev);
    if (iVar1 == 0) {
        iVar1 = gh_rm_set_virtio_mmio_cb(sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt);
        if (iVar1 != 0) {
            _printk(0x80032b5,iVar1);
        }
    }
    else {
        _printk(0x8002887,iVar1);
        kfree(_segment.ehdr);
        platform_driver_unregister(reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt);
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.gh_virtio_backend_init @ 0x0800d624 (size 44) =====

void sym.gh_virtio_backend_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_set_virtio_mmio_cb(sym.gh_virtio_mmio_init.1016b347f3458ea20e90756fd466f079.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x0800d650 (size 72) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.gh_dev);
    kfree(_segment.ehdr);
    platform_driver_unregister(reloc.gh_secure_vm_loader_probe.3ff479e546a49f25d5327676542516bb.cfi_jt);
    gh_rm_unset_virtio_mmio_cb();
    return;
}


// ===== sym.gh_virtio_backend_exit @ 0x0800d698 (size 36) =====

void sym.gh_virtio_backend_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unset_virtio_mmio_cb();
    return;
}

