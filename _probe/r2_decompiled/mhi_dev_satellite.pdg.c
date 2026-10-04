// decompiled from mhi_dev_satellite by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 440) =====

//WARNING: Switch with 1 destination removed at 0x08003078

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x2648401b1c1d210c) {
            if (arg1 != -0x61278529fef85643) {
                if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x8001200 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08003038;
            }
            pcVar2 = sym.mhi_sat_rpmsg_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
        }
        else if (arg1 == -0x2648401b1c1d210c) {
            pcVar2 = sym.mhi_sat_dev_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
        }
        else {
            if (arg1 != -0x19ad56ffbc919b67) goto code_r0x08003038;
            pcVar2 = sym.mhi_sat_rpmsg_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
        }
    }
    else if (arg1 < 0x67f3a51ad5c16f72) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x2ce63a3287021e91) goto code_r0x08003038;
            pcVar2 = sym.mhi_sat_rpmsg_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
        }
    }
    else if (arg1 == 0x67f3a51ad5c16f72) {
        pcVar2 = sym.mhi_sat_dev_status_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
    }
    else if (arg1 == 0x6e9fb1c868c44dc4) {
        pcVar2 = sym.mhi_sat_dev_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
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


// ===== sym.mhi_sat_dev_status_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011c0 (size 8) =====

void sym.mhi_sat_dev_status_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_2 == 7) {
        *in_x18 = unaff_x30;
        iVar2 = *(*(param_1 + 0xc0) + 0x18);
        if (*(iVar2 + 0x18) != 0 && iVar2 != 0) {
            ipc_log_string(*(*(iVar2 + 0x18) + 0x58),"%s[I][%s][%x] Device fatal error detected\n",0x80009aa,
                           "mhi_sat_dev_status_cb",*(iVar2 + 0x118));
        }
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x138);
        if (*(iVar2 + 0x134) == 1) {
            queue_work_on(0x20,___mutex_init,iVar2 + 0xe8);
            *(iVar2 + 0x134) = 3;
        }
        _raw_spin_unlock_irqrestore(iVar2 + 0x138,uVar1);
    }
    return;
}


// ===== sym.mhi_sat_dev_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.mhi_sat_dev_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar12 = *(param_2 + 0x20);
    iVar3 = mhi_controller_get_numeric_id(*(param_1 + 0x10));
    if (iVar3 == 0) {
        _printk(0x800075f);
        uVar4 = 0xffffffea;
    }
    else {
        iVar7 = iVar2 + iVar12 * 0x60;
        iVar13 = iVar2 + iVar12 * 0x60;
        iVar10 = iVar7 + 0x50;
        uVar4 = _raw_spin_lock_irqsave(iVar10);
        piVar8 = iVar7 + 0x10;
        for (piVar6 = *piVar8; piVar6 != piVar8; piVar6 = *piVar6) {
            if (*(piVar6 + 0x23) == iVar3) {
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
                if (piVar6 != NULL) goto code_r0x08001c50;
                goto code_r0x08001aac;
            }
        }
        _raw_spin_unlock_irqrestore(iVar10,uVar4);
code_r0x08001aac:
        piVar6 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x198);
        if (piVar6 != NULL) {
            uVar1 = *(param_1 + 0x3c8);
            *(piVar6 + 0x23) = iVar3;
            iVar7 = *(param_1 + 0x10);
            *(piVar6 + 300) = 0xffffffff;
            *(piVar6 + 0x11c) = uVar1;
            *(piVar6 + 0x13c) = 0xffff;
            piVar6[2] = iVar7;
            piVar6[3] = iVar13;
            *(piVar6 + 0x29) = 0;
            __init_swait_queue_head(piVar6 + 0x2a,"&x->wait",obj.mhi_sat_init.__key);
            __mutex_init(piVar6 + 8,"&sat_cntrl->list_mutex",obj.mhi_sat_init.__key);
            __mutex_init(piVar6 + 0x2d,"&sat_cntrl->cmd_wait_mutex",obj.mhi_sat_init.__key);
            *(piVar6 + 0x10) = 0;
            *(piVar6 + 0x27) = 0;
            piVar6[0x11] = 0xfffffffe0;
            piVar6[0x12] = piVar6 + 0x12;
            piVar6[0x13] = piVar6 + 0x12;
            piVar6[0x14] = sym.mhi_sat_connect_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[0x17] = 0xfffffffe0;
            piVar6[0x18] = piVar6 + 0x18;
            piVar6[0x19] = piVar6 + 0x18;
            piVar6[0x1a] = sym.mhi_sat_process_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[0x1d] = 0xfffffffe0;
            piVar6[0x1e] = piVar6 + 0x1e;
            piVar6[0x1f] = piVar6 + 0x1e;
            iVar7 = iVar2 + iVar12 * 0x60 + 0x20;
            piVar6[0x20] = sym.mhi_sat_error_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[4] = piVar6 + 4;
            piVar6[5] = piVar6 + 4;
            piVar6[6] = piVar6 + 6;
            piVar6[7] = piVar6 + 6;
            piVar6[0xe] = piVar6 + 0xe;
            piVar6[0xf] = piVar6 + 0xe;
            mutex_lock(iVar7);
            _raw_spin_lock_irq(iVar10);
            iVar11 = *piVar8;
            uVar5 = __list_add_valid(piVar6,piVar8,iVar11);
            if ((uVar5 & 1) != 0) {
                *(iVar11 + 8) = piVar6;
                *piVar6 = iVar11;
                piVar6[1] = piVar8;
                *piVar8 = piVar6;
            }
            _raw_spin_unlock_irq(iVar10);
            mutex_unlock(iVar7);
            if (iVar13 != 0) {
                ipc_log_string(*(iVar2 + iVar12 * 0x60 + 0x58),"%s[I][%s][%x] Controller allocated for 0x%x\n",
                               0x80009aa,"mhi_sat_dev_probe",piVar6[0x23],iVar3);
            }
code_r0x08001c50:
            *(piVar6 + 300) = 4;
            iVar3 = *(piVar6 + 0x11c);
            if (*(param_1 + 0x3c8) <= *(piVar6 + 0x11c)) {
                iVar3 = *(param_1 + 0x3c8);
            }
            *(piVar6 + 0x11c) = iVar3;
            if (iVar3 <= *(param_1 + 0x3c8)) {
                iVar3 = *(param_1 + 0x3c8);
            }
            *(piVar6 + 0x24) = iVar3;
            piVar8 = devm_kmalloc(param_1 + 0x28,0x28,0xdc0);
            if (piVar8 != NULL) {
                piVar8[2] = param_1;
                piVar8[3] = piVar6;
                mutex_lock(piVar6 + 8);
                piVar9 = piVar6 + 4;
                iVar10 = *piVar9;
                uVar5 = __list_add_valid(piVar8,piVar9,iVar10);
                if ((uVar5 & 1) != 0) {
                    *(iVar10 + 8) = piVar8;
                    *piVar8 = iVar10;
                    piVar8[1] = piVar9;
                    *piVar9 = piVar8;
                }
                mutex_unlock(piVar6 + 8);
                *(param_1 + 0xc0) = piVar8;
                iVar3 = piVar6[0x25] + 1;
                *(piVar6 + 0x25) = iVar3;
                if (iVar3 == *(piVar6 + 300)) {
                    *(piVar6 + 0x124) = (piVar6[0x24] - *(piVar6 + 0x11c)) + 1;
                    if ((iVar13 != 0) && (piVar6 != NULL)) {
                        ipc_log_string(*(iVar2 + iVar12 * 0x60 + 0x58),"%s[I][%s][%x] All satellite channels probed!\n"
                                       ,0x80009aa,"mhi_sat_dev_probe",piVar6[0x23]);
                    }
                    queue_work_on(0x20,___mutex_init,piVar6 + 0x11);
                }
                return 0;
            }
        }
        uVar4 = 0xfffffff4;
    }
    return uVar4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    uint32_t uVar1;
    ulong *puVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.mhi_sat_driver.1);
    if (obj.mhi_sat_driver.2 == 0x1) {
        uVar1 = 0;
        puVar2 = _segment.ehdr + 0x58;
        do {
            ipc_log_context_destroy(*puVar2);
            uVar1 = uVar1 + 1;
            uVar3 = 3;
            if (obj.mhi_sat_driver.2 == 0x0) {
                uVar3 = 0;
            }
            puVar2 = puVar2 + 0xc;
        } while (uVar1 < uVar3);
    }
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code cVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *puVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x120);
    if (puVar6 == NULL) {
        uVar10 = 0xfffffff4;
    }
    else {
        obj.mhi_sat_driver.2 = 0x1;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        _segment.ehdr = puVar6;
        *puVar6 = "adsp";
        __mutex_init(puVar6 + 4,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
        *(puVar6 + 10) = 0;
        puVar6[2] = puVar6 + 2;
        puVar6[3] = puVar6 + 2;
        scnprintf(&uStack_58,0x20,"mhi_sat_%s",*puVar6);
        uVar7 = ipc_log_context_create(10,&uStack_58,0);
        cVar3 = obj.mhi_sat_driver.2;
        puVar6[0xb] = uVar7;
        if (cVar3 == 0x1) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            puVar6[0xc] = "cdsp";
            __mutex_init(puVar6 + 0x10,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
            *(puVar6 + 0x16) = 0;
            puVar6[0xe] = puVar6 + 0xe;
            puVar6[0xf] = puVar6 + 0xe;
            scnprintf(&uStack_58,0x20,"mhi_sat_%s",puVar6[0xc]);
            uVar7 = ipc_log_context_create(10,&uStack_58,0);
            cVar3 = obj.mhi_sat_driver.2;
            puVar6[0x17] = uVar7;
            if (cVar3 == 0x1) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                puVar6[0x18] = "slpi";
                __mutex_init(puVar6 + 0x1c,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
                *(puVar6 + 0x22) = 0;
                puVar6[0x1a] = puVar6 + 0x1a;
                puVar6[0x1b] = puVar6 + 0x1a;
                scnprintf(&uStack_58,0x20,"mhi_sat_%s",puVar6[0x18]);
                uVar7 = ipc_log_context_create(10,&uStack_58,0);
                puVar6[0x23] = uVar7;
            }
        }
        uVar4 = __register_rpmsg_driver(obj.mhi_sat_driver.1,obj.__this_module);
        uVar10 = uVar4;
        if (uVar4 == 0) {
            uVar4 = __mhi_driver_register(obj.mhi_sat_dev_driver,obj.__this_module);
            uVar10 = uVar4;
            if (uVar4 == 0) goto code_r0x0800145c;
            unregister_rpmsg_driver(obj.mhi_sat_driver.1);
        }
        puVar6 = _segment.ehdr;
        if (((obj.mhi_sat_driver.2 == 0x1) &&
            (ipc_log_context_destroy(_segment.ehdr[0xb]), obj.mhi_sat_driver.2 == 0x1)) &&
           (ipc_log_context_destroy(puVar6[0x17]), obj.mhi_sat_driver.2 == 0x1)) {
            ipc_log_context_destroy(puVar6[0x23]);
        }
        kfree(_segment.ehdr);
        _segment.ehdr = NULL;
    }
code_r0x0800145c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_sat_rpmsg_probe;
    pcStack_98 = sym.mhi_sat_rpmsg_probe;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uVar10 = of_property_read_string(*(*(iVar8 + 0x60) + 0x2f0),"label",&uStack_b0);
    uVar7 = uStack_b0;
    puVar6 = _segment.ehdr;
    if (uVar10 != 0) goto code_r0x080015c8;
    if (obj.mhi_sat_driver.2 == 0x1) {
        iVar5 = strcmp(uStack_b0,*_segment.ehdr);
        puVar12 = puVar6;
        if (iVar5 != 0) {
            puVar12 = puVar6 + 0xc;
            iVar5 = strcmp(uVar7,*puVar12);
            if (iVar5 != 0) {
                puVar12 = puVar6 + 0x18;
                iVar5 = strcmp(uVar7,*puVar12);
                if (iVar5 != 0) goto code_r0x080015c4;
            }
        }
        if (puVar12 != NULL) {
            mutex_lock(puVar12 + 4);
            ipc_log_string(puVar12[0xb],"%s[I][%s] Received RPMSG probe\n",0x80009aa,"mhi_sat_rpmsg_probe");
            *(iVar8 + 0x98) = puVar12;
            puVar12[1] = iVar8;
            _raw_spin_lock_irq(puVar12 + 10);
            for (puVar6 = puVar12[2]; puVar6 != puVar12 + 2; puVar6 = *puVar6) {
                queue_work_on(0x20,___mutex_init,puVar6 + 0x11);
            }
            _raw_spin_unlock_irq(puVar12 + 10);
            mutex_unlock(puVar12 + 4);
            uVar10 = 0;
            goto code_r0x080015c8;
        }
    }
code_r0x080015c4:
    uVar10 = 0xffffffea;
code_r0x080015c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_a8) {
        iVar9 = __stack_chk_fail(uVar10);
        *extraout_x18_00 = sym.mhi_sat_rpmsg_remove;
        iVar9 = *(iVar9 + 0x98);
        if (iVar9 != 0) {
            ipc_log_string(*(iVar9 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
        }
        mutex_lock();
        for (piVar11 = *(iVar9 + 0x10); piVar11 != iVar9 + 0x10; piVar11 = *piVar11) {
            flush_work(piVar11 + 0x1d);
            iVar8 = piVar11 + 0x27;
            _raw_spin_lock_irq(iVar8);
            if (*(piVar11 + 0x134) < 3) {
                *(piVar11 + 0x134) = 2;
                _raw_spin_unlock_irq(iVar8);
                flush_work(piVar11 + 0x11);
                flush_work(piVar11 + 0x17);
                mutex_lock(piVar11 + 8);
                for (puVar6 = piVar11[4]; puVar6 != piVar11 + 4; puVar6 = *puVar6) {
                    if (*(puVar6 + 4) != '\0') {
                        mhi_unprepare_from_transfer(puVar6[2]);
                        *(puVar6 + 4) = 0;
                    }
                }
                piVar2 = piVar11[6];
                while (piVar2 != piVar11 + 6) {
                    piVar13 = *piVar2;
                    if (piVar2[7] == '\0') {
                        dma_unmap_page_attrs(*(*(piVar11[2] + 8) + 0x88),piVar2[4],piVar2[6],0,0x20);
                    }
                    else {
                        dma_unmap_resource();
                    }
                    uVar10 = __list_del_entry_valid(piVar2);
                    if ((uVar10 & 1) != 0) {
                        iVar8 = *piVar2;
                        piVar1 = piVar2[1];
                        *(iVar8 + 8) = piVar1;
                        *piVar1 = iVar8;
                    }
                    *piVar2 = -0x2152ffffffffff00;
                    piVar2[1] = -0x2152fffffffffede;
                    kfree(piVar2);
                    piVar2 = piVar13;
                }
                mutex_unlock(piVar11 + 8);
                if ((iVar9 != 0) && (piVar11 != NULL)) {
                    ipc_log_string(*(iVar9 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,
                                   "mhi_sat_rpmsg_remove",*(piVar11 + 0x23));
                }
            }
            else {
                *(piVar11 + 0x134) = 5;
                _raw_spin_unlock_irq(iVar8);
            }
        }
        *(iVar9 + 8) = 0;
        uVar10 = mutex_unlock(iVar9 + 0x20);
        return uVar10;
    }
    return uVar10;
}


// ===== sym.mhi_sat_rpmsg_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011e0 (size 8) =====

void sym.mhi_sat_rpmsg_probe.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar9;
    ulong *puVar10;
    int64_t *piVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_50 = 0;
    uVar6 = of_property_read_string(*(*(param_1 + 0x60) + 0x2f0),"label",&uStack_50);
    uVar4 = uStack_50;
    puVar12 = _segment.ehdr;
    if (uVar6 != 0) goto code_r0x080015c8;
    if (obj.mhi_sat_driver.2 == 0x1) {
        iVar5 = strcmp(uStack_50,*_segment.ehdr);
        puVar10 = puVar12;
        if (iVar5 != 0) {
            puVar10 = puVar12 + 0xc;
            iVar5 = strcmp(uVar4,*puVar10);
            if (iVar5 != 0) {
                puVar10 = puVar12 + 0x18;
                iVar5 = strcmp(uVar4,*puVar10);
                if (iVar5 != 0) goto code_r0x080015c4;
            }
        }
        if (puVar10 != NULL) {
            mutex_lock(puVar10 + 4);
            ipc_log_string(puVar10[0xb],"%s[I][%s] Received RPMSG probe\n",0x80009aa,"mhi_sat_rpmsg_probe");
            *(param_1 + 0x98) = puVar10;
            puVar10[1] = param_1;
            _raw_spin_lock_irq(puVar10 + 10);
            for (piVar9 = puVar10[2]; piVar9 != puVar10 + 2; piVar9 = *piVar9) {
                queue_work_on(0x20,___mutex_init,piVar9 + 0x11);
            }
            _raw_spin_unlock_irq(puVar10 + 10);
            mutex_unlock(puVar10 + 4);
            uVar6 = 0;
            goto code_r0x080015c8;
        }
    }
code_r0x080015c4:
    uVar6 = 0xffffffea;
code_r0x080015c8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.mhi_sat_rpmsg_remove;
        iVar7 = *(iVar7 + 0x98);
        if (iVar7 != 0) {
            ipc_log_string(*(iVar7 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
        }
        mutex_lock();
        for (piVar9 = *(iVar7 + 0x10); piVar9 != iVar7 + 0x10; piVar9 = *piVar9) {
            flush_work(piVar9 + 0x1d);
            iVar1 = piVar9 + 0x27;
            _raw_spin_lock_irq(iVar1);
            if (*(piVar9 + 0x134) < 3) {
                *(piVar9 + 0x134) = 2;
                _raw_spin_unlock_irq(iVar1);
                flush_work(piVar9 + 0x11);
                flush_work(piVar9 + 0x17);
                mutex_lock(piVar9 + 8);
                for (puVar12 = piVar9[4]; puVar12 != piVar9 + 4; puVar12 = *puVar12) {
                    if (*(puVar12 + 4) != '\0') {
                        mhi_unprepare_from_transfer(puVar12[2]);
                        *(puVar12 + 4) = 0;
                    }
                }
                piVar3 = piVar9[6];
                while (piVar3 != piVar9 + 6) {
                    piVar11 = *piVar3;
                    if (piVar3[7] == '\0') {
                        dma_unmap_page_attrs(*(*(piVar9[2] + 8) + 0x88),piVar3[4],piVar3[6],0,0x20);
                    }
                    else {
                        dma_unmap_resource();
                    }
                    uVar8 = __list_del_entry_valid(piVar3);
                    if ((uVar8 & 1) != 0) {
                        iVar1 = *piVar3;
                        piVar2 = piVar3[1];
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *piVar3 = -0x2152ffffffffff00;
                    piVar3[1] = -0x2152fffffffffede;
                    kfree(piVar3);
                    piVar3 = piVar11;
                }
                mutex_unlock(piVar9 + 8);
                if ((iVar7 != 0) && (piVar9 != NULL)) {
                    ipc_log_string(*(iVar7 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,
                                   "mhi_sat_rpmsg_remove",*(piVar9 + 0x23));
                }
            }
            else {
                *(piVar9 + 0x134) = 5;
                _raw_spin_unlock_irq(iVar1);
            }
        }
        *(iVar7 + 8) = 0;
        mutex_unlock(iVar7 + 0x20);
        return;
    }
    return;
}


// ===== sym.mhi_sat_rpmsg_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.mhi_sat_rpmsg_cb.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1,int16_t *param_2,uint32_t param_3)

{
    ulong *puVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    ulong *puVar8;
    int16_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(param_1 + 0x98);
    if ((((0x17 < param_3) && (param_2[5] + 0x18 != param_3)) || (*param_2 != 1)) ||
       ((param_2[1] != 0 || ((param_2[2] & 0xfffdU) != 0xc)))) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80019d0);
        (*pcVar3)();
    }
    puVar1 = puVar8 + 10;
    iVar2 = *(param_2 + 6);
    uVar4 = _raw_spin_lock_irqsave(puVar1);
    piVar10 = puVar8[2];
    while( true ) {
        if (piVar10 == puVar8 + 2) {
            _raw_spin_unlock_irqrestore(puVar1,uVar4);
            return 0;
        }
        if (*(piVar10 + 0x23) == iVar2) break;
        piVar10 = *piVar10;
    }
    _raw_spin_unlock_irqrestore(puVar1,uVar4);
    if (piVar10 == NULL) {
        return 0;
    }
    if (param_2[2] == 0xe) {
        if (param_2[5] < 0x10) {
            return 0;
        }
        uVar7 = param_2[5] >> 4;
        piVar9 = param_2 + 0x12;
        do {
            if ((piVar9[1] == '!') && (param_2[4] == *(piVar10 + 0x13c))) {
                *(piVar10 + 0x28) = *(piVar9 + -1);
                complete(piVar10 + 0x29);
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 8;
        } while (uVar7 != 0);
        return 0;
    }
    if (*(piVar10 + 0x134) != 1) {
        if (puVar8 == NULL) {
            return 0;
        }
        _printk(0x8000599,"mhi_sat_rpmsg_cb",*puVar8,*(piVar10 + 0x23));
        ipc_log_string(puVar8[0xb],"%s[E][%s][%x] Message for inactive controller!\n",0x80009aa,"mhi_sat_rpmsg_cb",
                       *(piVar10 + 0x23));
        return 0;
    }
    piVar5 = __kmalloc(param_3 + 0x20,0xa20);
    if (piVar5 == NULL) {
        return 0;
    }
    piVar5[2] = piVar10;
    piVar5[3] = piVar5 + 4;
    memcpy(piVar5 + 4,param_2,param_3);
    uVar4 = _raw_spin_lock_irqsave(piVar10 + 0x10);
    puVar8 = piVar10[0xf];
    uVar6 = __list_add_valid(piVar5,puVar8,piVar10 + 0xe);
    if ((uVar6 & 1) != 0) {
        piVar10[0xf] = piVar5;
        *piVar5 = piVar10 + 0xe;
        piVar5[1] = puVar8;
        *puVar8 = piVar5;
    }
    _raw_spin_unlock_irqrestore(piVar10 + 0x10,uVar4);
    queue_work_on(0x20,___mutex_init,piVar10 + 0x17);
    return 0;
}


// ===== sym.mhi_sat_rpmsg_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011f0 (size 8) =====

void sym.mhi_sat_rpmsg_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x98);
    if (iVar8 != 0) {
        ipc_log_string(*(iVar8 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
    }
    mutex_lock();
    for (piVar5 = *(iVar8 + 0x10); piVar5 != iVar8 + 0x10; piVar5 = *piVar5) {
        flush_work(piVar5 + 0x1d);
        iVar1 = piVar5 + 0x27;
        _raw_spin_lock_irq(iVar1);
        if (*(piVar5 + 0x134) < 3) {
            *(piVar5 + 0x134) = 2;
            _raw_spin_unlock_irq(iVar1);
            flush_work(piVar5 + 0x11);
            flush_work(piVar5 + 0x17);
            mutex_lock(piVar5 + 8);
            for (puVar7 = piVar5[4]; puVar7 != piVar5 + 4; puVar7 = *puVar7) {
                if (*(puVar7 + 4) != '\0') {
                    mhi_unprepare_from_transfer(puVar7[2]);
                    *(puVar7 + 4) = 0;
                }
            }
            piVar3 = piVar5[6];
            while (piVar3 != piVar5 + 6) {
                piVar6 = *piVar3;
                if (piVar3[7] == '\0') {
                    dma_unmap_page_attrs(*(*(piVar5[2] + 8) + 0x88),piVar3[4],piVar3[6],0,0x20);
                }
                else {
                    dma_unmap_resource();
                }
                uVar4 = __list_del_entry_valid(piVar3);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *piVar3;
                    piVar2 = piVar3[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar3 = -0x2152ffffffffff00;
                piVar3[1] = -0x2152fffffffffede;
                kfree(piVar3);
                piVar3 = piVar6;
            }
            mutex_unlock(piVar5 + 8);
            if ((iVar8 != 0) && (piVar5 != NULL)) {
                ipc_log_string(*(iVar8 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,"mhi_sat_rpmsg_remove"
                               ,*(piVar5 + 0x23));
            }
        }
        else {
            *(piVar5 + 0x134) = 5;
            _raw_spin_unlock_irq(iVar1);
        }
    }
    *(iVar8 + 8) = 0;
    mutex_unlock(iVar8 + 0x20);
    return;
}


// ===== sym.mhi_sat_dev_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x080011f8 (size 8) =====

void sym.mhi_sat_dev_remove.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    int16_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    bool bVar4;
    bool bVar5;
    int iVar6;
    uint64_t uVar7;
    uint *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(param_1 + 0xc0);
    piVar10 = piVar11[3];
    piVar2 = piVar10 + 8;
    iVar13 = piVar10[3];
    mutex_lock(piVar2);
    uVar7 = __list_del_entry_valid(piVar11);
    if ((uVar7 & 1) != 0) {
        iVar9 = *piVar11;
        piVar15 = piVar11[1];
        *(iVar9 + 8) = piVar15;
        *piVar15 = iVar9;
    }
    *piVar11 = -0x2152ffffffffff00;
    piVar11[1] = -0x2152fffffffffede;
    mutex_unlock(piVar2);
    *(piVar10 + 0x25) = piVar10[0x25] + -1;
    mutex_lock(iVar13 + 0x20);
    cancel_work_sync(piVar10 + 0x1d);
    piVar11 = piVar10 + 0x27;
    _raw_spin_lock_irq(piVar11);
    if ((*(piVar10 + 0x134) | 2) == 3) {
        *(piVar10 + 0x134) = 4;
        _raw_spin_unlock_irq(piVar11);
        puVar14 = piVar10[3];
        flush_work(piVar10 + 0x11);
        flush_work(piVar10 + 0x17);
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x28);
        if (puVar8 == NULL) {
            if ((piVar10 != NULL) && (puVar14 != NULL)) {
                _printk(0x800084d,"mhi_sat_send_sys_err",*puVar14,piVar10[0x23]);
                ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_send_sys_err",piVar10[0x23]);
            }
        }
        else {
            *(puVar8 + 6) = 0;
            *(puVar8 + 8) = 0xff000000000000;
            mutex_lock(piVar10 + 0x2d);
            iVar9 = piVar10[3];
            iVar1 = 0;
            if (piVar10[0x26] != -2) {
                iVar1 = piVar10[0x26] + 1;
            }
            *(piVar10 + 0x26) = iVar1;
            *puVar8 = 1;
            *(puVar8 + 1) = 0xc;
            *(puVar8 + 6) = iVar1;
            puVar8[2] = 0x10ffff;
            puVar8[3] = piVar10[0x23];
            *(piVar10 + 0x13c) = iVar1;
            iVar6 = rpmsg_send(*(*(iVar9 + 8) + 0x3c8),puVar8,0x28);
            kfree(puVar8);
            if (iVar6 == 0) {
                if (piVar10 != NULL && puVar14 != NULL) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] SYS_ERR command sent\n",0x80009aa,
                                   "mhi_sat_send_sys_err",piVar10[0x23]);
                }
                puVar14 = piVar10[3];
                bVar4 = piVar10 != NULL;
                *(piVar10 + 0x29) = 0;
                bVar5 = puVar14 != NULL;
                if (bVar4 && bVar5) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] Wait for command completion\n",0x80009aa,
                                   "mhi_sat_wait_cmd_completion",piVar10[0x23]);
                }
                uVar12 = __msecs_to_jiffies(*(piVar10[2] + 0x178));
                iVar6 = wait_for_completion_timeout(piVar10 + 0x29,uVar12);
                if ((iVar6 == 0) || (piVar10[0x28] != 1)) {
                    if (bVar4 && bVar5) {
                        _printk(0x8000338,"mhi_sat_wait_cmd_completion",*puVar14,piVar10[0x23],*(piVar10 + 0x13c),
                                iVar6,piVar10[0x28]);
                        ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Command completion failure:seq:%u:ret:%d:ccs:%d\n",
                                       0x80009aa,"mhi_sat_wait_cmd_completion",piVar10[0x23],*(piVar10 + 0x13c),
                                       iVar6,piVar10[0x28]);
                    }
                }
                else if (bVar4 && bVar5) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] Command completion successful for seq:%u\n",0x80009aa,
                                   "mhi_sat_wait_cmd_completion",piVar10[0x23],*(piVar10 + 0x13c));
                }
            }
            else if (piVar10 != NULL && puVar14 != NULL) {
                _printk(0x80005e3,"mhi_sat_send_sys_err",*puVar14,piVar10[0x23]);
                ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Failed to notify SYS_ERR cmd\n",0x80009aa,
                               "mhi_sat_send_sys_err",piVar10[0x23]);
            }
            mutex_unlock(piVar10 + 0x2d);
        }
    }
    else {
        *(piVar10 + 0x134) = 4;
        _raw_spin_unlock_irq(piVar11);
    }
    if (piVar10[0x25] == 0) {
        cancel_work_sync(piVar10 + 0x11);
        cancel_work_sync(piVar10 + 0x17);
        mutex_lock(piVar2);
        piVar11 = piVar10[6];
        while (piVar11 != piVar10 + 6) {
            piVar15 = *piVar11;
            uVar12 = *(*(piVar10[2] + 8) + 0x88);
            if (piVar11[7] == '\0') {
                dma_unmap_page_attrs(uVar12,piVar11[4],piVar11[6],0,0x20);
            }
            else {
                dma_unmap_resource();
            }
            dma_unmap_page_attrs(uVar12,piVar11[4],piVar11[6],0,0x20);
            uVar7 = __list_del_entry_valid(piVar11);
            if ((uVar7 & 1) != 0) {
                iVar9 = *piVar11;
                piVar3 = piVar11[1];
                *(iVar9 + 8) = piVar3;
                *piVar3 = iVar9;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            kfree(piVar11);
            piVar11 = piVar15;
        }
        mutex_unlock(piVar2);
        _raw_spin_lock_irq(iVar13 + 0x50);
        uVar7 = __list_del_entry_valid(piVar10);
        if ((uVar7 & 1) != 0) {
            iVar9 = *piVar10;
            piVar2 = piVar10[1];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        *piVar10 = -0x2152ffffffffff00;
        piVar10[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irq(iVar13 + 0x50);
        if ((iVar13 != 0) && (piVar10 != NULL)) {
            ipc_log_string(*(iVar13 + 0x58),"%s[I][%s][%x] Satellite controller node removed\n",0x80009aa,
                           "mhi_sat_dev_remove",piVar10[0x23]);
        }
        kfree(piVar10);
    }
    mutex_unlock(iVar13 + 0x20);
    return;
}


// ===== sym.mhi_sat_connect_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x08001200 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.mhi_sat_connect_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    char *pcVar3;
    int16_t iVar4;
    int64_t ******ppppppiVar5;
    uint32_t uVar6;
    ushort uVar7;
    ushort uVar8;
    uint16_t uVar9;
    int16_t iVar10;
    uint32_t uVar11;
    code *pcVar12;
    bool bVar13;
    bool bVar14;
    int iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint *puVar20;
    int64_t ******ppppppiVar21;
    int64_t *****pppppiVar22;
    int64_t iVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar24;
    int64_t *******pppppppiVar25;
    uint32_t uVar26;
    int64_t *******pppppppiVar27;
    int64_t ******ppppppiVar28;
    int64_t *piVar29;
    uint64_t uVar30;
    uint uVar31;
    ulong *puVar32;
    int64_t *piVar33;
    ulong *puVar34;
    ulong unaff_x30;
    int64_t *******pppppppiStack_130;
    int64_t *******pppppppiStack_128;
    ulong *puStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    uint uStack_f8;
    uint uStack_f4;
    uint uStack_f0;
    uint uStack_ec;
    uint uStack_e8;
    uint uStack_e4;
    ulong uStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iVar24 = param_1 + 0xb0;
    iStack_58 = *(iVar16 + 0x5e0);
    puVar32 = *(param_1 + -0x70);
    uStack_60 = 0;
    _raw_spin_lock_irq(iVar24);
    if (((puVar32[1] != 0) && (*(param_1 + 0xa4) == *(param_1 + 0xa0))) &&
       (uVar26 = *(param_1 + 0xac), (uVar26 | 2) == 2)) {
        *(param_1 + 0xac) = 1;
        _raw_spin_unlock_irq(iVar24);
        bVar13 = param_1 != 0x88 && puVar32 != NULL;
        if (param_1 != 0x88 && puVar32 != NULL) {
            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_connect_worker",
                           *(param_1 + 0x90));
            iVar15 = mhi_controller_get_base(*(param_1 + -0x78),&uStack_60);
            if (iVar15 == 0) {
code_r0x08002444:
                puVar20 = kmem_cache_alloc_trace(_kmalloc_caches,0xa20,0x48);
                if (puVar20 != NULL) {
                    iVar15 = *(param_1 + 0x94);
                    uVar9 = *(param_1 + 0x9c);
                    iVar10 = *(param_1 + 0xa8);
                    *(puVar20 + 6) = uStack_60;
                    *(puVar20 + 10) = 0;
                    *(puVar20 + 0xc) = 0x20000002000000;
                    puVar20[8] = uVar9 | iVar15 << 0x10;
                    puVar20[9] = 0x6e0000;
                    iVar4 = 0;
                    if (iVar10 != -2) {
                        iVar4 = iVar10 + 1;
                    }
                    iVar16 = *(param_1 + -0x70);
                    *(puVar20 + 0xe) = 0;
                    *(puVar20 + 0x10) = 0x40000002000000;
                    *puVar20 = 1;
                    *(param_1 + 0xa8) = iVar4;
                    *(puVar20 + 1) = 0xe;
                    uVar31 = *(param_1 + 0x90);
                    *(puVar20 + 6) = iVar4;
                    puVar20[2] = 0x30ffff;
                    puVar20[3] = uVar31;
                    iVar15 = rpmsg_send(*(*(iVar16 + 8) + 0x3c8),puVar20,0x48);
                    kfree(puVar20);
                    if (iVar15 == 0) {
                        if (bVar13) {
                            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Device 0x%x sent hello packet\n",0x80009aa,
                                           "mhi_sat_connect_worker",*(param_1 + 0x90),*(param_1 + 0x90));
                        }
                        goto code_r0x08002518;
                    }
                    if (bVar13) {
                        _printk(0x80002e6,"mhi_sat_connect_worker",*puVar32,*(param_1 + 0x90),iVar15);
                        ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Failed to send hello packet:%d\n",0x80009aa,
                                       "mhi_sat_connect_worker",*(param_1 + 0x90),iVar15);
                    }
                }
            }
            else {
                _printk(0x800065f,"mhi_sat_connect_worker",*puVar32,*(param_1 + 0x90));
                ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Could not get controller base address\n",0x80009aa,
                               "mhi_sat_connect_worker",*(param_1 + 0x90));
            }
        }
        else {
            iVar15 = mhi_controller_get_base(*(param_1 + -0x78),&uStack_60);
            if (iVar15 == 0) goto code_r0x08002444;
        }
        _raw_spin_lock_irq(iVar24);
        if (*(param_1 + 0xac) == 1) {
            *(param_1 + 0xac) = uVar26;
        }
    }
    _raw_spin_unlock_irq(iVar24);
code_r0x08002518:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_58) {
        return;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_sat_process_worker;
    pcStack_b8 = sym.mhi_sat_process_worker;
    iVar24 = sp_el0;
    iStack_d0 = *(iVar24 + 0x5e0);
    pppppppiStack_130 = &pppppppiStack_130;
    iVar24 = *(iVar16 + -0xa0);
    bVar13 = iVar16 != 0xb8 && iVar24 != 0;
    pppppppiStack_128 = pppppppiStack_130;
    puStack_c0 = &stack0xffffffffffffffb0;
    if (bVar13) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_process_worker",
                       *(iVar16 + 0x60));
    }
    _raw_spin_lock_irq(iVar16 + -0x38);
    piVar1 = iVar16 + -0x48;
    if (piVar1 != *piVar1) {
        ppppppiVar28 = *(iVar16 + -0x48);
        pppppppiVar25 = *(iVar16 + -0x40);
        ppppppiVar28[1] = pppppppiStack_128;
        *pppppppiStack_128 = ppppppiVar28;
        *pppppppiVar25 = &pppppppiStack_130;
        *(iVar16 + -0x48) = piVar1;
        *(iVar16 + -0x40) = piVar1;
        pppppppiStack_128 = pppppppiVar25;
    }
    _raw_spin_unlock_irq(iVar16 + -0x38);
    if (pppppppiStack_130 != &pppppppiStack_130) {
        iVar2 = iVar16 + -0x78;
        piVar1 = iVar16 + -0x98;
        pppppppiVar25 = pppppppiStack_130;
        do {
            pppppppiVar27 = *pppppppiVar25;
            ppppppiVar28 = pppppppiVar25[3];
            uVar17 = __list_del_entry_valid(pppppppiVar25);
            if ((uVar17 & 1) != 0) {
                ppppppiVar21 = *pppppppiVar25;
                ppppppiVar5 = pppppppiVar25[1];
                ppppppiVar21[1] = ppppppiVar5;
                *ppppppiVar5 = ppppppiVar21;
            }
            *pppppppiVar25 = 0xdead000000000100;
            pppppppiVar25[1] = 0xdead000000000122;
            if (*(iVar16 + 0x7c) == 1) {
                puVar32 = *(iVar16 + -0xa0);
                uVar9 = *(ppppppiVar28 + 10);
                if (0xf < uVar9) {
                    uVar26 = 0;
                    bVar14 = iVar16 != 0xb8 && puVar32 != NULL;
                    ppppppiVar21 = ppppppiVar28 + 3;
                    do {
                        uVar6 = *(ppppppiVar21 + 0xc);
                        uVar11 = uVar6 >> 0x10 & 0xff;
                        if (uVar11 < 100) {
                            if (uVar11 == 0x10) {
                                uVar6 = uVar6 >> 0x18;
                                mutex_lock(iVar2);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar2);
                                        goto code_r0x08002d34;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar6) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar2);
                                if (piVar29 == NULL) {
code_r0x08002d34:
                                    if (bVar14) {
                                        ipc_log_string(puVar32[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                    }
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x80026d8);
                                    (*pcVar12)();
                                }
                                if (*(piVar29 + 4) == '\0') {
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002c7c);
                                    (*pcVar12)();
                                }
                                mhi_unprepare_from_transfer(piVar29[2]);
                                *(piVar29 + 4) = 0;
                                if (bVar14) {
                                    ipc_log_string(puVar32[0xb],"%s[I][%s][%x] RESET CHANNEL %d CMD successful\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                }
                                *ppppppiVar21 = NULL;
                                ppppppiVar21[1] = 0x21000001000000;
                            }
                            else if (uVar11 == 0x12) {
                                uVar6 = uVar6 >> 0x18;
                                mutex_lock(iVar2);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar2);
                                        goto code_r0x08002dc8;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar6) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar2);
                                if (piVar29 == NULL) {
code_r0x08002dc8:
                                    if (bVar14) {
                                        ipc_log_string(puVar32[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                    }
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002e00);
                                    (*pcVar12)();
                                }
                                if (piVar29[4] != '\0') {
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002c74);
                                    (*pcVar12)();
                                }
                                iVar15 = mhi_prepare_for_transfer(piVar29[2],0);
                                uVar31 = 0;
                                if (iVar15 == 0) {
                                    uVar31 = 0x1000000;
                                    *(piVar29 + 4) = 1;
                                }
                                if (bVar14) {
                                    pcVar3 = "successful";
                                    if (iVar15 != 0) {
                                        pcVar3 = "failure";
                                    }
                                    ipc_log_string(puVar32[0xb],"%s[I][%s][%x] START CHANNEL %d CMD %s\n",0x80009aa,
                                                   "mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6,pcVar3);
                                }
                                *ppppppiVar21 = NULL;
                                *(ppppppiVar21 + 1) = uVar31;
                                *(ppppppiVar21 + 0xc) = 0x210000;
                            }
                            else {
code_r0x080027d8:
                                if (bVar14) {
                                    _printk(0x8000698,"mhi_sat_process_cmds",*puVar32,*(iVar16 + 0x60));
                                    ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Unhandled MHI satellite command!",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60));
                                }
                            }
                        }
                        else if (uVar11 == 100) {
                            uVar11 = uVar6 >> 0x18;
                            pppppiVar22 = *ppppppiVar21;
                            uStack_100 = 0;
                            uVar31 = *(ppppppiVar21 + 1);
                            uStack_d8 = 0;
                            uStack_e8 = 0;
                            uStack_e4 = 0;
                            uStack_e0 = 0;
                            uStack_f8 = 0;
                            uStack_f4 = 0;
                            uStack_f0 = 0;
                            uStack_ec = 0;
                            uStack_110 = 0;
                            uStack_108 = 0;
                            puStack_120 = NULL;
                            uStack_118 = 0;
                            mutex_lock(iVar2);
                            piVar29 = *piVar1;
                            if (piVar29 == piVar1) {
code_r0x08002d6c:
                                mutex_unlock(iVar2);
code_r0x08002d74:
                                if (bVar14) {
                                    ipc_log_string(puVar32[0xb],
                                                   "%s[I][%s][%x] Failed to find the satellite device with id : %d\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar11);
                                }
    //WARNING: Does not return
                                pcVar12 = SoftwareBreakpoint(0x800,0x8002dac);
                                (*pcVar12)();
                            }
                            while( true ) {
                                iVar23 = 0x3c4;
                                if ((uVar6 & 1) != 0) {
                                    iVar23 = 0x3c8;
                                }
                                if (*(piVar29[2] + iVar23) == uVar11) break;
                                piVar29 = *piVar29;
                                if (piVar29 == piVar1) goto code_r0x08002d6c;
                            }
                            mutex_unlock(iVar2);
                            if (piVar29 == NULL) goto code_r0x08002d74;
                            uStack_f8 = 0;
                            uStack_e4 = 0;
                            uStack_110 = 0;
                            uStack_108 = 0x2c;
                            uStack_d8 = 0;
                            uStack_118 = *(obj.sat_ctxt_str + (uVar6 & 1) * 8);
                            uStack_e0 = 0;
                            uStack_f4 = SUB84(pppppiVar22,0);
                            uStack_f0 = pppppiVar22 >> 0x20;
                            uStack_e8 = 0;
                            uStack_100 = 0xa00000000;
                            puStack_120 = &uStack_100;
                            uStack_ec = uVar31;
                            iVar15 = mhi_device_configure(piVar29[2],0,&puStack_120,1);
                            if (bVar14) {
                                pcVar3 = "successful";
                                if (iVar15 != 0) {
                                    pcVar3 = "failed";
                                }
                                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] CTXT UPDATE CMD %s:%d %s\n",0x80009aa,
                                               "mhi_sat_process_cmds",*(iVar16 + 0x60),uStack_118,uVar11,pcVar3);
                            }
                            *ppppppiVar21 = NULL;
                            *(ppppppiVar21 + 1) = (iVar15 == 0) << 0x18;
                            *(ppppppiVar21 + 0xc) = 0x210000;
                        }
                        else {
                            if (uVar11 != 0x65) goto code_r0x080027d8;
                            iVar23 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar23 = 0x30;
                            }
                            piVar33 = *(*(*(iVar16 + -0xa8) + 8) + 0x88);
                            piVar29 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar23),0xa20,0x40);
                            if (piVar29 == NULL) {
                                pppppiVar22 = 0xffffffffffffffff;
                                pcVar3 = "failed";
                                uVar31 = 0;
                            }
                            else {
                                pppppiVar22 = *ppppppiVar21;
                                piVar29[5] = pppppiVar22;
                                uVar17 = *(ppppppiVar21 + 1);
                                piVar29[6] = uVar17;
                                uVar6 = *(ppppppiVar21 + 0xc);
                                *(piVar29 + 7) = uVar6 & 1;
                                if ((uVar6 & 1) == 0) {
                                    uVar30 = pppppiVar22 - _ipc_log_context_create;
                                    uVar18 = is_vmalloc_addr(uVar30 | 0xffffff8000000000);
                                    if (((uVar18 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                        obj.dma_map_single_attrs.__already_done = 0x1;
                                        uVar19 = dev_driver_string(piVar33);
                                        iVar24 = piVar33[0xe];
                                        if (iVar24 == 0) {
                                            iVar24 = *piVar33;
                                        }
                                        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar19,iVar24);
    //WARNING: Does not return
                                        pcVar12 = SoftwareBreakpoint(0x800,0x8002cb4);
                                        (*pcVar12)();
                                    }
                                    if ((uVar18 & 1) == 0) {
                                        pppppiVar22 = dma_map_page_attrs(piVar33,uVar30 >> 6 & 0x1ffffffc0 |
                                                                                  0xfffffffe00000000,uVar30 & 0xfff,
                                                                         uVar17,0,0x20);
                                        goto code_r0x08002bb4;
                                    }
                                }
                                else {
                                    pppppiVar22 = dma_map_resource(piVar33,pppppiVar22,uVar17,0,0);
code_r0x08002bb4:
                                    if (pppppiVar22 != 0xffffffffffffffff) {
                                        piVar29[4] = pppppiVar22;
                                        mutex_lock(iVar2);
                                        puVar34 = *(iVar16 + -0x80);
                                        uVar17 = __list_add_valid(piVar29,puVar34,iVar16 + -0x88);
                                        if ((uVar17 & 1) != 0) {
                                            *(iVar16 + -0x80) = piVar29;
                                            *piVar29 = iVar16 + -0x88;
                                            piVar29[1] = puVar34;
                                            *puVar34 = piVar29;
                                        }
                                        mutex_unlock(iVar2);
                                        uVar31 = 0x1000000;
                                        pcVar3 = "successful";
                                        goto joined_r0x08002b98;
                                    }
                                }
                                kfree(piVar29);
                                uVar31 = 0;
                                pppppiVar22 = 0xffffffffffffffff;
                                pcVar3 = "failed";
                            }
joined_r0x08002b98:
                            if (bVar14) {
                                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] IOMMU MAP 0x%llx len:%d CMD %s:%llx\n",
                                               0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),*ppppppiVar21,
                                               *(ppppppiVar21 + 1),pcVar3,pppppiVar22);
                            }
                            *ppppppiVar21 = pppppiVar22;
                            *(ppppppiVar21 + 1) = uVar31;
                            *(ppppppiVar21 + 0xc) = 0x210000;
                        }
                        uVar26 = uVar26 + 1;
                        ppppppiVar21 = ppppppiVar21 + 2;
                    } while (uVar26 != uVar9 >> 4);
                }
                ppppppiVar21 = pppppppiVar25[3];
                uVar7 = *(ppppppiVar28 + 6);
                iVar4 = 0;
                if (*(iVar16 + 0x78) != -2) {
                    iVar4 = *(iVar16 + 0x78) + 1;
                }
                uVar9 = *(ppppppiVar28 + 10);
                *(iVar16 + 0x78) = iVar4;
                iVar23 = *(iVar16 + -0xa0);
                *ppppppiVar21 = 1;
                uVar9 = uVar9 & 0xfff0;
                *(ppppppiVar21 + 4) = 0xe;
                uVar8 = *(iVar16 + 0x78);
                *(ppppppiVar21 + 1) = uVar7;
                *(ppppppiVar21 + 10) = uVar9;
                *(ppppppiVar21 + 6) = uVar8;
                *(ppppppiVar21 + 0xc) = *(iVar16 + 0x60);
                rpmsg_send(*(*(iVar23 + 8) + 0x3c8),ppppppiVar21,uVar9 + 0x18);
            }
            kfree(pppppppiVar25);
            pppppppiVar25 = pppppppiVar27;
        } while (pppppppiVar27 != &pppppppiStack_130);
    }
    if (bVar13) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Exited\n",0x80009aa,"mhi_sat_process_worker",*(iVar16 + 0x60)
                      );
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) != iStack_d0) {
        iVar24 = __stack_chk_fail();
        *extraout_x18_00 = 0x8002e74;
        puVar32 = *(iVar24 + -0xd0);
        bVar13 = puVar32 != NULL;
        bVar14 = iVar24 != 0xe8;
        if (bVar14 && bVar13) {
            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(iVar24 + 0x30))
            ;
        }
        flush_work(iVar24 + -0x60);
        flush_work(iVar24 + -0x30);
        iVar16 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar16 = 0x30;
        }
        puVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xcc0,0x28);
        if (puVar20 == NULL) {
            if (bVar14 && bVar13) {
                _printk(0x800084d,"mhi_sat_error_worker",*puVar32,*(iVar24 + 0x30));
                ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30));
            }
        }
        else {
            iVar10 = *(iVar24 + 0x48);
            *(puVar20 + 6) = 0;
            *(puVar20 + 8) = 0x200000ff000000;
            iVar4 = 0;
            if (iVar10 != -2) {
                iVar4 = iVar10 + 1;
            }
            *puVar20 = 1;
            uVar31 = *(iVar24 + 0x30);
            *(puVar20 + 1) = 0xe;
            iVar16 = *(iVar24 + -0xd0);
            *(iVar24 + 0x48) = iVar4;
            *(puVar20 + 6) = iVar4;
            puVar20[2] = 0x10ffff;
            puVar20[3] = uVar31;
            iVar15 = rpmsg_send(*(*(iVar16 + 8) + 0x3c8),puVar20,0x28);
            kfree(puVar20);
            if (bVar14 && bVar13) {
                pcVar3 = "success";
                if (iVar15 != 0) {
                    pcVar3 = "failure";
                }
                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30),pcVar3);
            }
        }
        return;
    }
    return;
}


// ===== sym.mhi_sat_process_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x08001208 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.mhi_sat_process_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    char *pcVar2;
    int16_t iVar3;
    int64_t ******ppppppiVar4;
    uint32_t uVar5;
    ushort uVar6;
    ushort uVar7;
    uint16_t uVar8;
    int16_t iVar9;
    uint32_t uVar10;
    code *pcVar11;
    bool bVar12;
    bool bVar13;
    int iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong uVar17;
    uint *puVar18;
    int64_t ******ppppppiVar19;
    int64_t *****pppppiVar20;
    int64_t iVar21;
    ulong *puVar22;
    int64_t iVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar24;
    int64_t *******pppppppiVar25;
    uint32_t uVar26;
    int64_t *******pppppppiVar27;
    int64_t ******ppppppiVar28;
    int64_t *piVar29;
    uint64_t uVar30;
    uint uVar31;
    int64_t *piVar32;
    ulong *puVar33;
    ulong unaff_x30;
    int64_t *******pppppppiStack_d0;
    int64_t *******pppppppiStack_c8;
    ulong *puStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    uint uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    iStack_70 = *(iVar24 + 0x5e0);
    pppppppiStack_d0 = &pppppppiStack_d0;
    iVar24 = *(param_1 + -0xa0);
    bVar12 = param_1 != 0xb8 && iVar24 != 0;
    pppppppiStack_c8 = pppppppiStack_d0;
    if (bVar12) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_process_worker",
                       *(param_1 + 0x60));
    }
    _raw_spin_lock_irq(param_1 + -0x38);
    piVar1 = param_1 + -0x48;
    if (piVar1 != *piVar1) {
        ppppppiVar28 = *(param_1 + -0x48);
        pppppppiVar25 = *(param_1 + -0x40);
        ppppppiVar28[1] = pppppppiStack_c8;
        *pppppppiStack_c8 = ppppppiVar28;
        *pppppppiVar25 = &pppppppiStack_d0;
        *(param_1 + -0x48) = piVar1;
        *(param_1 + -0x40) = piVar1;
        pppppppiStack_c8 = pppppppiVar25;
    }
    _raw_spin_unlock_irq(param_1 + -0x38);
    if (pppppppiStack_d0 != &pppppppiStack_d0) {
        iVar23 = param_1 + -0x78;
        piVar1 = param_1 + -0x98;
        pppppppiVar25 = pppppppiStack_d0;
        do {
            pppppppiVar27 = *pppppppiVar25;
            ppppppiVar28 = pppppppiVar25[3];
            uVar15 = __list_del_entry_valid(pppppppiVar25);
            if ((uVar15 & 1) != 0) {
                ppppppiVar19 = *pppppppiVar25;
                ppppppiVar4 = pppppppiVar25[1];
                ppppppiVar19[1] = ppppppiVar4;
                *ppppppiVar4 = ppppppiVar19;
            }
            *pppppppiVar25 = 0xdead000000000100;
            pppppppiVar25[1] = 0xdead000000000122;
            if (*(param_1 + 0x7c) == 1) {
                puVar22 = *(param_1 + -0xa0);
                uVar8 = *(ppppppiVar28 + 10);
                if (0xf < uVar8) {
                    uVar26 = 0;
                    bVar13 = param_1 != 0xb8 && puVar22 != NULL;
                    ppppppiVar19 = ppppppiVar28 + 3;
                    do {
                        uVar5 = *(ppppppiVar19 + 0xc);
                        uVar10 = uVar5 >> 0x10 & 0xff;
                        if (uVar10 < 100) {
                            if (uVar10 == 0x10) {
                                uVar5 = uVar5 >> 0x18;
                                mutex_lock(iVar23);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar23);
                                        goto code_r0x08002d34;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar5) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar23);
                                if (piVar29 == NULL) {
code_r0x08002d34:
                                    if (bVar13) {
                                        ipc_log_string(puVar22[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60),uVar5);
                                    }
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x80026d8);
                                    (*pcVar11)();
                                }
                                if (*(piVar29 + 4) == '\0') {
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002c7c);
                                    (*pcVar11)();
                                }
                                mhi_unprepare_from_transfer(piVar29[2]);
                                *(piVar29 + 4) = 0;
                                if (bVar13) {
                                    ipc_log_string(puVar22[0xb],"%s[I][%s][%x] RESET CHANNEL %d CMD successful\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60),uVar5);
                                }
                                *ppppppiVar19 = NULL;
                                ppppppiVar19[1] = 0x21000001000000;
                            }
                            else if (uVar10 == 0x12) {
                                uVar5 = uVar5 >> 0x18;
                                mutex_lock(iVar23);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar23);
                                        goto code_r0x08002dc8;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar5) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar23);
                                if (piVar29 == NULL) {
code_r0x08002dc8:
                                    if (bVar13) {
                                        ipc_log_string(puVar22[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60),uVar5);
                                    }
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002e00);
                                    (*pcVar11)();
                                }
                                if (piVar29[4] != '\0') {
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002c74);
                                    (*pcVar11)();
                                }
                                iVar14 = mhi_prepare_for_transfer(piVar29[2],0);
                                uVar31 = 0;
                                if (iVar14 == 0) {
                                    uVar31 = 0x1000000;
                                    *(piVar29 + 4) = 1;
                                }
                                if (bVar13) {
                                    pcVar2 = "successful";
                                    if (iVar14 != 0) {
                                        pcVar2 = "failure";
                                    }
                                    ipc_log_string(puVar22[0xb],"%s[I][%s][%x] START CHANNEL %d CMD %s\n",0x80009aa,
                                                   "mhi_sat_process_cmds",*(param_1 + 0x60),uVar5,pcVar2);
                                }
                                *ppppppiVar19 = NULL;
                                *(ppppppiVar19 + 1) = uVar31;
                                *(ppppppiVar19 + 0xc) = 0x210000;
                            }
                            else {
code_r0x080027d8:
                                if (bVar13) {
                                    _printk(0x8000698,"mhi_sat_process_cmds",*puVar22,*(param_1 + 0x60));
                                    ipc_log_string(puVar22[0xb],"%s[E][%s][%x] Unhandled MHI satellite command!",
                                                   0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60));
                                }
                            }
                        }
                        else if (uVar10 == 100) {
                            uVar10 = uVar5 >> 0x18;
                            pppppiVar20 = *ppppppiVar19;
                            uStack_a0 = 0;
                            uVar31 = *(ppppppiVar19 + 1);
                            uStack_78 = 0;
                            uStack_88 = 0;
                            uStack_84 = 0;
                            uStack_80 = 0;
                            uStack_98 = 0;
                            uStack_94 = 0;
                            uStack_90 = 0;
                            uStack_8c = 0;
                            uStack_b0 = 0;
                            uStack_a8 = 0;
                            puStack_c0 = NULL;
                            uStack_b8 = 0;
                            mutex_lock(iVar23);
                            piVar29 = *piVar1;
                            if (piVar29 == piVar1) {
code_r0x08002d6c:
                                mutex_unlock(iVar23);
code_r0x08002d74:
                                if (bVar13) {
                                    ipc_log_string(puVar22[0xb],
                                                   "%s[I][%s][%x] Failed to find the satellite device with id : %d\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60),uVar10);
                                }
    //WARNING: Does not return
                                pcVar11 = SoftwareBreakpoint(0x800,0x8002dac);
                                (*pcVar11)();
                            }
                            while( true ) {
                                iVar21 = 0x3c4;
                                if ((uVar5 & 1) != 0) {
                                    iVar21 = 0x3c8;
                                }
                                if (*(piVar29[2] + iVar21) == uVar10) break;
                                piVar29 = *piVar29;
                                if (piVar29 == piVar1) goto code_r0x08002d6c;
                            }
                            mutex_unlock(iVar23);
                            if (piVar29 == NULL) goto code_r0x08002d74;
                            uStack_98 = 0;
                            uStack_84 = 0;
                            uStack_b0 = 0;
                            uStack_a8 = 0x2c;
                            uStack_78 = 0;
                            uStack_b8 = *(obj.sat_ctxt_str + (uVar5 & 1) * 8);
                            uStack_80 = 0;
                            uStack_94 = SUB84(pppppiVar20,0);
                            uStack_90 = pppppiVar20 >> 0x20;
                            uStack_88 = 0;
                            uStack_a0 = 0xa00000000;
                            puStack_c0 = &uStack_a0;
                            uStack_8c = uVar31;
                            iVar14 = mhi_device_configure(piVar29[2],0,&puStack_c0,1);
                            if (bVar13) {
                                pcVar2 = "successful";
                                if (iVar14 != 0) {
                                    pcVar2 = "failed";
                                }
                                ipc_log_string(puVar22[0xb],"%s[I][%s][%x] CTXT UPDATE CMD %s:%d %s\n",0x80009aa,
                                               "mhi_sat_process_cmds",*(param_1 + 0x60),uStack_b8,uVar10,pcVar2);
                            }
                            *ppppppiVar19 = NULL;
                            *(ppppppiVar19 + 1) = (iVar14 == 0) << 0x18;
                            *(ppppppiVar19 + 0xc) = 0x210000;
                        }
                        else {
                            if (uVar10 != 0x65) goto code_r0x080027d8;
                            iVar21 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar21 = 0x30;
                            }
                            piVar32 = *(*(*(param_1 + -0xa8) + 8) + 0x88);
                            piVar29 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar21),0xa20,0x40);
                            if (piVar29 == NULL) {
                                pppppiVar20 = 0xffffffffffffffff;
                                pcVar2 = "failed";
                                uVar31 = 0;
                            }
                            else {
                                pppppiVar20 = *ppppppiVar19;
                                piVar29[5] = pppppiVar20;
                                uVar15 = *(ppppppiVar19 + 1);
                                piVar29[6] = uVar15;
                                uVar5 = *(ppppppiVar19 + 0xc);
                                *(piVar29 + 7) = uVar5 & 1;
                                if ((uVar5 & 1) == 0) {
                                    uVar30 = pppppiVar20 - _ipc_log_context_create;
                                    uVar16 = is_vmalloc_addr(uVar30 | 0xffffff8000000000);
                                    if (((uVar16 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                        obj.dma_map_single_attrs.__already_done = 0x1;
                                        uVar17 = dev_driver_string(piVar32);
                                        iVar24 = piVar32[0xe];
                                        if (iVar24 == 0) {
                                            iVar24 = *piVar32;
                                        }
                                        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar24);
    //WARNING: Does not return
                                        pcVar11 = SoftwareBreakpoint(0x800,0x8002cb4);
                                        (*pcVar11)();
                                    }
                                    if ((uVar16 & 1) == 0) {
                                        pppppiVar20 = dma_map_page_attrs(piVar32,uVar30 >> 6 & 0x1ffffffc0 |
                                                                                  0xfffffffe00000000,uVar30 & 0xfff,
                                                                         uVar15,0,0x20);
                                        goto code_r0x08002bb4;
                                    }
                                }
                                else {
                                    pppppiVar20 = dma_map_resource(piVar32,pppppiVar20,uVar15,0,0);
code_r0x08002bb4:
                                    if (pppppiVar20 != 0xffffffffffffffff) {
                                        piVar29[4] = pppppiVar20;
                                        mutex_lock(iVar23);
                                        puVar33 = *(param_1 + -0x80);
                                        uVar15 = __list_add_valid(piVar29,puVar33,param_1 + -0x88);
                                        if ((uVar15 & 1) != 0) {
                                            *(param_1 + -0x80) = piVar29;
                                            *piVar29 = param_1 + -0x88;
                                            piVar29[1] = puVar33;
                                            *puVar33 = piVar29;
                                        }
                                        mutex_unlock(iVar23);
                                        uVar31 = 0x1000000;
                                        pcVar2 = "successful";
                                        goto joined_r0x08002b98;
                                    }
                                }
                                kfree(piVar29);
                                uVar31 = 0;
                                pppppiVar20 = 0xffffffffffffffff;
                                pcVar2 = "failed";
                            }
joined_r0x08002b98:
                            if (bVar13) {
                                ipc_log_string(puVar22[0xb],"%s[I][%s][%x] IOMMU MAP 0x%llx len:%d CMD %s:%llx\n",
                                               0x80009aa,"mhi_sat_process_cmds",*(param_1 + 0x60),*ppppppiVar19,
                                               *(ppppppiVar19 + 1),pcVar2,pppppiVar20);
                            }
                            *ppppppiVar19 = pppppiVar20;
                            *(ppppppiVar19 + 1) = uVar31;
                            *(ppppppiVar19 + 0xc) = 0x210000;
                        }
                        uVar26 = uVar26 + 1;
                        ppppppiVar19 = ppppppiVar19 + 2;
                    } while (uVar26 != uVar8 >> 4);
                }
                ppppppiVar19 = pppppppiVar25[3];
                uVar6 = *(ppppppiVar28 + 6);
                iVar3 = 0;
                if (*(param_1 + 0x78) != -2) {
                    iVar3 = *(param_1 + 0x78) + 1;
                }
                uVar8 = *(ppppppiVar28 + 10);
                *(param_1 + 0x78) = iVar3;
                iVar21 = *(param_1 + -0xa0);
                *ppppppiVar19 = 1;
                uVar8 = uVar8 & 0xfff0;
                *(ppppppiVar19 + 4) = 0xe;
                uVar7 = *(param_1 + 0x78);
                *(ppppppiVar19 + 1) = uVar6;
                *(ppppppiVar19 + 10) = uVar8;
                *(ppppppiVar19 + 6) = uVar7;
                *(ppppppiVar19 + 0xc) = *(param_1 + 0x60);
                rpmsg_send(*(*(iVar21 + 8) + 0x3c8),ppppppiVar19,uVar8 + 0x18);
            }
            kfree(pppppppiVar25);
            pppppppiVar25 = pppppppiVar27;
        } while (pppppppiVar27 != &pppppppiStack_d0);
    }
    if (bVar12) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Exited\n",0x80009aa,"mhi_sat_process_worker",
                       *(param_1 + 0x60));
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) != iStack_70) {
        iVar24 = __stack_chk_fail();
        *extraout_x18 = 0x8002e74;
        puVar22 = *(iVar24 + -0xd0);
        bVar12 = puVar22 != NULL;
        bVar13 = iVar24 != 0xe8;
        if (bVar13 && bVar12) {
            ipc_log_string(puVar22[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(iVar24 + 0x30))
            ;
        }
        flush_work(iVar24 + -0x60);
        flush_work(iVar24 + -0x30);
        iVar23 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar23 = 0x30;
        }
        puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar23),0xcc0,0x28);
        if (puVar18 == NULL) {
            if (bVar13 && bVar12) {
                _printk(0x800084d,"mhi_sat_error_worker",*puVar22,*(iVar24 + 0x30));
                ipc_log_string(puVar22[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30));
            }
        }
        else {
            iVar9 = *(iVar24 + 0x48);
            *(puVar18 + 6) = 0;
            *(puVar18 + 8) = 0x200000ff000000;
            iVar3 = 0;
            if (iVar9 != -2) {
                iVar3 = iVar9 + 1;
            }
            *puVar18 = 1;
            uVar31 = *(iVar24 + 0x30);
            *(puVar18 + 1) = 0xe;
            iVar23 = *(iVar24 + -0xd0);
            *(iVar24 + 0x48) = iVar3;
            *(puVar18 + 6) = iVar3;
            puVar18[2] = 0x10ffff;
            puVar18[3] = uVar31;
            iVar14 = rpmsg_send(*(*(iVar23 + 8) + 0x3c8),puVar18,0x28);
            kfree(puVar18);
            if (bVar13 && bVar12) {
                pcVar2 = "success";
                if (iVar14 != 0) {
                    pcVar2 = "failure";
                }
                ipc_log_string(puVar22[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30),pcVar2);
            }
        }
        return;
    }
    return;
}


// ===== sym.mhi_sat_error_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt @ 0x08001210 (size 8) =====

void sym.mhi_sat_error_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    int16_t iVar2;
    uint uVar3;
    int16_t iVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    uint *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(param_1 + -0xd0);
    bVar5 = puVar10 != NULL;
    bVar6 = param_1 != 0xe8;
    if (bVar6 && bVar5) {
        ipc_log_string(puVar10[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(param_1 + 0x30));
    }
    flush_work(param_1 + -0x60);
    flush_work(param_1 + -0x30);
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x28);
    if (puVar8 == NULL) {
        if (bVar6 && bVar5) {
            _printk(0x800084d,"mhi_sat_error_worker",*puVar10,*(param_1 + 0x30));
            ipc_log_string(puVar10[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                           "mhi_sat_error_worker",*(param_1 + 0x30));
        }
    }
    else {
        iVar4 = *(param_1 + 0x48);
        *(puVar8 + 6) = 0;
        *(puVar8 + 8) = 0x200000ff000000;
        iVar2 = 0;
        if (iVar4 != -2) {
            iVar2 = iVar4 + 1;
        }
        *puVar8 = 1;
        uVar3 = *(param_1 + 0x30);
        *(puVar8 + 1) = 0xe;
        iVar9 = *(param_1 + -0xd0);
        *(param_1 + 0x48) = iVar2;
        *(puVar8 + 6) = iVar2;
        puVar8[2] = 0x10ffff;
        puVar8[3] = uVar3;
        iVar7 = rpmsg_send(*(*(iVar9 + 8) + 0x3c8),puVar8,0x28);
        kfree(puVar8);
        if (bVar6 && bVar5) {
            pcVar1 = "success";
            if (iVar7 != 0) {
                pcVar1 = "failure";
            }
            ipc_log_string(puVar10[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                           "mhi_sat_error_worker",*(param_1 + 0x30),pcVar1);
        }
    }
    return;
}


// ===== sym.init_module @ 0x08001218 (size 636) =====

uint64_t sym.init_module(void)

{
    int64_t *piVar1;
    int64_t *piVar2;
    code cVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong *puVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar6 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x120);
    if (puVar6 == NULL) {
        uVar10 = 0xfffffff4;
    }
    else {
        obj.mhi_sat_driver.2 = 0x1;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        _segment.ehdr = puVar6;
        *puVar6 = "adsp";
        __mutex_init(puVar6 + 4,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
        *(puVar6 + 10) = 0;
        puVar6[2] = puVar6 + 2;
        puVar6[3] = puVar6 + 2;
        scnprintf(&uStack_58,0x20,"mhi_sat_%s",*puVar6);
        uVar7 = ipc_log_context_create(10,&uStack_58,0);
        cVar3 = obj.mhi_sat_driver.2;
        puVar6[0xb] = uVar7;
        if (cVar3 == 0x1) {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            puVar6[0xc] = "cdsp";
            __mutex_init(puVar6 + 0x10,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
            *(puVar6 + 0x16) = 0;
            puVar6[0xe] = puVar6 + 0xe;
            puVar6[0xf] = puVar6 + 0xe;
            scnprintf(&uStack_58,0x20,"mhi_sat_%s",puVar6[0xc]);
            uVar7 = ipc_log_context_create(10,&uStack_58,0);
            cVar3 = obj.mhi_sat_driver.2;
            puVar6[0x17] = uVar7;
            if (cVar3 == 0x1) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                puVar6[0x18] = "slpi";
                __mutex_init(puVar6 + 0x1c,"&subsys->cntrl_mutex",obj.mhi_sat_init.__key);
                *(puVar6 + 0x22) = 0;
                puVar6[0x1a] = puVar6 + 0x1a;
                puVar6[0x1b] = puVar6 + 0x1a;
                scnprintf(&uStack_58,0x20,"mhi_sat_%s",puVar6[0x18]);
                uVar7 = ipc_log_context_create(10,&uStack_58,0);
                puVar6[0x23] = uVar7;
            }
        }
        uVar4 = __register_rpmsg_driver(obj.mhi_sat_driver.1,obj.__this_module);
        uVar10 = uVar4;
        if (uVar4 == 0) {
            uVar4 = __mhi_driver_register(obj.mhi_sat_dev_driver,obj.__this_module);
            uVar10 = uVar4;
            if (uVar4 == 0) goto code_r0x0800145c;
            unregister_rpmsg_driver(obj.mhi_sat_driver.1);
        }
        puVar6 = _segment.ehdr;
        if (((obj.mhi_sat_driver.2 == 0x1) &&
            (ipc_log_context_destroy(_segment.ehdr[0xb]), obj.mhi_sat_driver.2 == 0x1)) &&
           (ipc_log_context_destroy(puVar6[0x17]), obj.mhi_sat_driver.2 == 0x1)) {
            ipc_log_context_destroy(puVar6[0x23]);
        }
        kfree(_segment.ehdr);
        _segment.ehdr = NULL;
    }
code_r0x0800145c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_sat_rpmsg_probe;
    pcStack_98 = sym.mhi_sat_rpmsg_probe;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uVar10 = of_property_read_string(*(*(iVar8 + 0x60) + 0x2f0),"label",&uStack_b0);
    uVar7 = uStack_b0;
    puVar6 = _segment.ehdr;
    if (uVar10 != 0) goto code_r0x080015c8;
    if (obj.mhi_sat_driver.2 == 0x1) {
        iVar5 = strcmp(uStack_b0,*_segment.ehdr);
        puVar12 = puVar6;
        if (iVar5 != 0) {
            puVar12 = puVar6 + 0xc;
            iVar5 = strcmp(uVar7,*puVar12);
            if (iVar5 != 0) {
                puVar12 = puVar6 + 0x18;
                iVar5 = strcmp(uVar7,*puVar12);
                if (iVar5 != 0) goto code_r0x080015c4;
            }
        }
        if (puVar12 != NULL) {
            mutex_lock(puVar12 + 4);
            ipc_log_string(puVar12[0xb],"%s[I][%s] Received RPMSG probe\n",0x80009aa,"mhi_sat_rpmsg_probe");
            *(iVar8 + 0x98) = puVar12;
            puVar12[1] = iVar8;
            _raw_spin_lock_irq(puVar12 + 10);
            for (puVar6 = puVar12[2]; puVar6 != puVar12 + 2; puVar6 = *puVar6) {
                queue_work_on(0x20,___mutex_init,puVar6 + 0x11);
            }
            _raw_spin_unlock_irq(puVar12 + 10);
            mutex_unlock(puVar12 + 4);
            uVar10 = 0;
            goto code_r0x080015c8;
        }
    }
code_r0x080015c4:
    uVar10 = 0xffffffea;
code_r0x080015c8:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_a8) {
        iVar9 = __stack_chk_fail(uVar10);
        *extraout_x18_00 = sym.mhi_sat_rpmsg_remove;
        iVar9 = *(iVar9 + 0x98);
        if (iVar9 != 0) {
            ipc_log_string(*(iVar9 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
        }
        mutex_lock();
        for (piVar11 = *(iVar9 + 0x10); piVar11 != iVar9 + 0x10; piVar11 = *piVar11) {
            flush_work(piVar11 + 0x1d);
            iVar8 = piVar11 + 0x27;
            _raw_spin_lock_irq(iVar8);
            if (*(piVar11 + 0x134) < 3) {
                *(piVar11 + 0x134) = 2;
                _raw_spin_unlock_irq(iVar8);
                flush_work(piVar11 + 0x11);
                flush_work(piVar11 + 0x17);
                mutex_lock(piVar11 + 8);
                for (puVar6 = piVar11[4]; puVar6 != piVar11 + 4; puVar6 = *puVar6) {
                    if (*(puVar6 + 4) != '\0') {
                        mhi_unprepare_from_transfer(puVar6[2]);
                        *(puVar6 + 4) = 0;
                    }
                }
                piVar2 = piVar11[6];
                while (piVar2 != piVar11 + 6) {
                    piVar13 = *piVar2;
                    if (piVar2[7] == '\0') {
                        dma_unmap_page_attrs(*(*(piVar11[2] + 8) + 0x88),piVar2[4],piVar2[6],0,0x20);
                    }
                    else {
                        dma_unmap_resource();
                    }
                    uVar10 = __list_del_entry_valid(piVar2);
                    if ((uVar10 & 1) != 0) {
                        iVar8 = *piVar2;
                        piVar1 = piVar2[1];
                        *(iVar8 + 8) = piVar1;
                        *piVar1 = iVar8;
                    }
                    *piVar2 = -0x2152ffffffffff00;
                    piVar2[1] = -0x2152fffffffffede;
                    kfree(piVar2);
                    piVar2 = piVar13;
                }
                mutex_unlock(piVar11 + 8);
                if ((iVar9 != 0) && (piVar11 != NULL)) {
                    ipc_log_string(*(iVar9 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,
                                   "mhi_sat_rpmsg_remove",*(piVar11 + 0x23));
                }
            }
            else {
                *(piVar11 + 0x134) = 5;
                _raw_spin_unlock_irq(iVar8);
            }
        }
        *(iVar9 + 8) = 0;
        uVar10 = mutex_unlock(iVar9 + 0x20);
        return uVar10;
    }
    return uVar10;
}


// ===== sym.mhi_sat_rpmsg_probe @ 0x08001494 (size 364) =====

void sym.mhi_sat_rpmsg_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar9;
    ulong *puVar10;
    int64_t *piVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_50 = 0;
    uVar6 = of_property_read_string(*(*(arg1 + 0x60) + 0x2f0),"label",&uStack_50);
    uVar4 = uStack_50;
    puVar12 = _segment.ehdr;
    if (uVar6 != 0) goto code_r0x080015c8;
    if (obj.mhi_sat_driver.2 == 0x1) {
        iVar5 = strcmp(uStack_50,*_segment.ehdr);
        puVar10 = puVar12;
        if (iVar5 != 0) {
            puVar10 = puVar12 + 0xc;
            iVar5 = strcmp(uVar4,*puVar10);
            if (iVar5 != 0) {
                puVar10 = puVar12 + 0x18;
                iVar5 = strcmp(uVar4,*puVar10);
                if (iVar5 != 0) goto code_r0x080015c4;
            }
        }
        if (puVar10 != NULL) {
            mutex_lock(puVar10 + 4);
            ipc_log_string(puVar10[0xb],"%s[I][%s] Received RPMSG probe\n",0x80009aa,"mhi_sat_rpmsg_probe");
            *(arg1 + 0x98) = puVar10;
            puVar10[1] = arg1;
            _raw_spin_lock_irq(puVar10 + 10);
            for (piVar9 = puVar10[2]; piVar9 != puVar10 + 2; piVar9 = *piVar9) {
                queue_work_on(0x20,___mutex_init,piVar9 + 0x11);
            }
            _raw_spin_unlock_irq(puVar10 + 10);
            mutex_unlock(puVar10 + 4);
            uVar6 = 0;
            goto code_r0x080015c8;
        }
    }
code_r0x080015c4:
    uVar6 = 0xffffffea;
code_r0x080015c8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        iVar7 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.mhi_sat_rpmsg_remove;
        iVar7 = *(iVar7 + 0x98);
        if (iVar7 != 0) {
            ipc_log_string(*(iVar7 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
        }
        mutex_lock();
        for (piVar9 = *(iVar7 + 0x10); piVar9 != iVar7 + 0x10; piVar9 = *piVar9) {
            flush_work(piVar9 + 0x1d);
            iVar1 = piVar9 + 0x27;
            _raw_spin_lock_irq(iVar1);
            if (*(piVar9 + 0x134) < 3) {
                *(piVar9 + 0x134) = 2;
                _raw_spin_unlock_irq(iVar1);
                flush_work(piVar9 + 0x11);
                flush_work(piVar9 + 0x17);
                mutex_lock(piVar9 + 8);
                for (puVar12 = piVar9[4]; puVar12 != piVar9 + 4; puVar12 = *puVar12) {
                    if (*(puVar12 + 4) != '\0') {
                        mhi_unprepare_from_transfer(puVar12[2]);
                        *(puVar12 + 4) = 0;
                    }
                }
                piVar3 = piVar9[6];
                while (piVar3 != piVar9 + 6) {
                    piVar11 = *piVar3;
                    if (piVar3[7] == '\0') {
                        dma_unmap_page_attrs(*(*(piVar9[2] + 8) + 0x88),piVar3[4],piVar3[6],0,0x20);
                    }
                    else {
                        dma_unmap_resource();
                    }
                    uVar8 = __list_del_entry_valid(piVar3);
                    if ((uVar8 & 1) != 0) {
                        iVar1 = *piVar3;
                        piVar2 = piVar3[1];
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *piVar3 = -0x2152ffffffffff00;
                    piVar3[1] = -0x2152fffffffffede;
                    kfree(piVar3);
                    piVar3 = piVar11;
                }
                mutex_unlock(piVar9 + 8);
                if ((iVar7 != 0) && (piVar9 != NULL)) {
                    ipc_log_string(*(iVar7 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,
                                   "mhi_sat_rpmsg_remove",*(piVar9 + 0x23));
                }
            }
            else {
                *(piVar9 + 0x134) = 5;
                _raw_spin_unlock_irq(iVar1);
            }
        }
        *(iVar7 + 8) = 0;
        mutex_unlock(iVar7 + 0x20);
        return;
    }
    return;
}


// ===== sym.mhi_sat_rpmsg_remove @ 0x08001600 (size 508) =====

void sym.mhi_sat_rpmsg_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x98);
    if (iVar8 != 0) {
        ipc_log_string(*(iVar8 + 0x58),"%s[I][%s] Enter\n",0x80009aa,"mhi_sat_rpmsg_remove");
    }
    mutex_lock();
    for (piVar5 = *(iVar8 + 0x10); piVar5 != iVar8 + 0x10; piVar5 = *piVar5) {
        flush_work(piVar5 + 0x1d);
        iVar1 = piVar5 + 0x27;
        _raw_spin_lock_irq(iVar1);
        if (*(piVar5 + 0x134) < 3) {
            *(piVar5 + 0x134) = 2;
            _raw_spin_unlock_irq(iVar1);
            flush_work(piVar5 + 0x11);
            flush_work(piVar5 + 0x17);
            mutex_lock(piVar5 + 8);
            for (puVar7 = piVar5[4]; puVar7 != piVar5 + 4; puVar7 = *puVar7) {
                if (*(puVar7 + 4) != '\0') {
                    mhi_unprepare_from_transfer(puVar7[2]);
                    *(puVar7 + 4) = 0;
                }
            }
            piVar3 = piVar5[6];
            while (piVar3 != piVar5 + 6) {
                piVar6 = *piVar3;
                if (piVar3[7] == '\0') {
                    dma_unmap_page_attrs(*(*(piVar5[2] + 8) + 0x88),piVar3[4],piVar3[6],0,0x20);
                }
                else {
                    dma_unmap_resource();
                }
                uVar4 = __list_del_entry_valid(piVar3);
                if ((uVar4 & 1) != 0) {
                    iVar1 = *piVar3;
                    piVar2 = piVar3[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar3 = -0x2152ffffffffff00;
                piVar3[1] = -0x2152fffffffffede;
                kfree(piVar3);
                piVar3 = piVar6;
            }
            mutex_unlock(piVar5 + 8);
            if ((iVar8 != 0) && (piVar5 != NULL)) {
                ipc_log_string(*(iVar8 + 0x58),"%s[I][%s][%x] Removed RPMSG link\n",0x80009aa,"mhi_sat_rpmsg_remove"
                               ,*(piVar5 + 0x23));
            }
        }
        else {
            *(piVar5 + 0x134) = 5;
            _raw_spin_unlock_irq(iVar1);
        }
    }
    *(iVar8 + 8) = 0;
    mutex_unlock(iVar8 + 0x20);
    return;
}


// ===== sym.mhi_sat_rpmsg_cb @ 0x080017fc (size 544) =====

ulong sym.mhi_sat_rpmsg_cb(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(arg1 + 0x98);
    if ((((0x17 < arg3) && (*(arg2 + 10) + 0x18 != arg3)) || (*arg2 != 1)) ||
       ((*(arg2 + 2) != 0 || ((*(arg2 + 4) & 0xfffd) != 0xc)))) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80019d0);
        (*pcVar3)();
    }
    puVar1 = puVar8 + 10;
    iVar2 = *(arg2 + 0xc);
    uVar4 = _raw_spin_lock_irqsave(puVar1);
    piVar10 = puVar8[2];
    while( true ) {
        if (piVar10 == puVar8 + 2) {
            _raw_spin_unlock_irqrestore(puVar1,uVar4);
            return 0;
        }
        if (*(piVar10 + 0x23) == iVar2) break;
        piVar10 = *piVar10;
    }
    _raw_spin_unlock_irqrestore(puVar1,uVar4);
    if (piVar10 == NULL) {
        return 0;
    }
    if (*(arg2 + 4) == 0xe) {
        if (*(arg2 + 10) < 0x10) {
            return 0;
        }
        uVar7 = *(arg2 + 10) >> 4;
        iVar9 = arg2 + 0x24;
        do {
            if ((*(iVar9 + 2) == '!') && (*(arg2 + 8) == *(piVar10 + 0x13c))) {
                *(piVar10 + 0x28) = *(iVar9 + -1);
                complete(piVar10 + 0x29);
            }
            uVar7 = uVar7 - 1;
            iVar9 = iVar9 + 0x10;
        } while (uVar7 != 0);
        return 0;
    }
    if (*(piVar10 + 0x134) != 1) {
        if (puVar8 == NULL) {
            return 0;
        }
        _printk(0x8000599,"mhi_sat_rpmsg_cb",*puVar8,*(piVar10 + 0x23));
        ipc_log_string(puVar8[0xb],"%s[E][%s][%x] Message for inactive controller!\n",0x80009aa,"mhi_sat_rpmsg_cb",
                       *(piVar10 + 0x23));
        return 0;
    }
    piVar5 = __kmalloc(arg3 + 0x20,0xa20);
    if (piVar5 == NULL) {
        return 0;
    }
    piVar5[2] = piVar10;
    piVar5[3] = piVar5 + 4;
    memcpy(piVar5 + 4,arg2,arg3);
    uVar4 = _raw_spin_lock_irqsave(piVar10 + 0x10);
    puVar8 = piVar10[0xf];
    uVar6 = __list_add_valid(piVar5,puVar8,piVar10 + 0xe);
    if ((uVar6 & 1) != 0) {
        piVar10[0xf] = piVar5;
        *piVar5 = piVar10 + 0xe;
        piVar5[1] = puVar8;
        *puVar8 = piVar5;
    }
    _raw_spin_unlock_irqrestore(piVar10 + 0x10,uVar4);
    queue_work_on(0x20,___mutex_init,piVar10 + 0x17);
    return 0;
}


// ===== sym.mhi_sat_dev_probe @ 0x08001a1c (size 884) =====

ulong sym.mhi_sat_dev_probe(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar12 = *(arg2 + 0x20);
    iVar3 = mhi_controller_get_numeric_id(*(arg1 + 0x10));
    if (iVar3 == 0) {
        _printk(0x800075f);
        uVar4 = 0xffffffea;
    }
    else {
        iVar7 = iVar2 + iVar12 * 0x60;
        iVar13 = iVar2 + iVar12 * 0x60;
        iVar10 = iVar7 + 0x50;
        uVar4 = _raw_spin_lock_irqsave(iVar10);
        piVar8 = iVar7 + 0x10;
        for (piVar6 = *piVar8; piVar6 != piVar8; piVar6 = *piVar6) {
            if (*(piVar6 + 0x23) == iVar3) {
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
                if (piVar6 != NULL) goto code_r0x08001c50;
                goto code_r0x08001aac;
            }
        }
        _raw_spin_unlock_irqrestore(iVar10,uVar4);
code_r0x08001aac:
        piVar6 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x198);
        if (piVar6 != NULL) {
            uVar1 = *(arg1 + 0x3c8);
            *(piVar6 + 0x23) = iVar3;
            iVar7 = *(arg1 + 0x10);
            *(piVar6 + 300) = 0xffffffff;
            *(piVar6 + 0x11c) = uVar1;
            *(piVar6 + 0x13c) = 0xffff;
            piVar6[2] = iVar7;
            piVar6[3] = iVar13;
            *(piVar6 + 0x29) = 0;
            __init_swait_queue_head(piVar6 + 0x2a,"&x->wait",obj.mhi_sat_init.__key);
            __mutex_init(piVar6 + 8,"&sat_cntrl->list_mutex",obj.mhi_sat_init.__key);
            __mutex_init(piVar6 + 0x2d,"&sat_cntrl->cmd_wait_mutex",obj.mhi_sat_init.__key);
            *(piVar6 + 0x10) = 0;
            *(piVar6 + 0x27) = 0;
            piVar6[0x11] = 0xfffffffe0;
            piVar6[0x12] = piVar6 + 0x12;
            piVar6[0x13] = piVar6 + 0x12;
            piVar6[0x14] = sym.mhi_sat_connect_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[0x17] = 0xfffffffe0;
            piVar6[0x18] = piVar6 + 0x18;
            piVar6[0x19] = piVar6 + 0x18;
            piVar6[0x1a] = sym.mhi_sat_process_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[0x1d] = 0xfffffffe0;
            piVar6[0x1e] = piVar6 + 0x1e;
            piVar6[0x1f] = piVar6 + 0x1e;
            iVar7 = iVar2 + iVar12 * 0x60 + 0x20;
            piVar6[0x20] = sym.mhi_sat_error_worker.b315f61b0d02e73043df1ee743515ae5.cfi_jt;
            piVar6[4] = piVar6 + 4;
            piVar6[5] = piVar6 + 4;
            piVar6[6] = piVar6 + 6;
            piVar6[7] = piVar6 + 6;
            piVar6[0xe] = piVar6 + 0xe;
            piVar6[0xf] = piVar6 + 0xe;
            mutex_lock(iVar7);
            _raw_spin_lock_irq(iVar10);
            iVar11 = *piVar8;
            uVar5 = __list_add_valid(piVar6,piVar8,iVar11);
            if ((uVar5 & 1) != 0) {
                *(iVar11 + 8) = piVar6;
                *piVar6 = iVar11;
                piVar6[1] = piVar8;
                *piVar8 = piVar6;
            }
            _raw_spin_unlock_irq(iVar10);
            mutex_unlock(iVar7);
            if (iVar13 != 0) {
                ipc_log_string(*(iVar2 + iVar12 * 0x60 + 0x58),"%s[I][%s][%x] Controller allocated for 0x%x\n",
                               0x80009aa,"mhi_sat_dev_probe",piVar6[0x23],iVar3);
            }
code_r0x08001c50:
            *(piVar6 + 300) = 4;
            iVar3 = *(piVar6 + 0x11c);
            if (*(arg1 + 0x3c8) <= *(piVar6 + 0x11c)) {
                iVar3 = *(arg1 + 0x3c8);
            }
            *(piVar6 + 0x11c) = iVar3;
            if (iVar3 <= *(arg1 + 0x3c8)) {
                iVar3 = *(arg1 + 0x3c8);
            }
            *(piVar6 + 0x24) = iVar3;
            piVar8 = devm_kmalloc(arg1 + 0x28,0x28,0xdc0);
            if (piVar8 != NULL) {
                piVar8[2] = arg1;
                piVar8[3] = piVar6;
                mutex_lock(piVar6 + 8);
                piVar9 = piVar6 + 4;
                iVar10 = *piVar9;
                uVar5 = __list_add_valid(piVar8,piVar9,iVar10);
                if ((uVar5 & 1) != 0) {
                    *(iVar10 + 8) = piVar8;
                    *piVar8 = iVar10;
                    piVar8[1] = piVar9;
                    *piVar9 = piVar8;
                }
                mutex_unlock(piVar6 + 8);
                *(arg1 + 0xc0) = piVar8;
                iVar3 = piVar6[0x25] + 1;
                *(piVar6 + 0x25) = iVar3;
                if (iVar3 == *(piVar6 + 300)) {
                    *(piVar6 + 0x124) = (piVar6[0x24] - *(piVar6 + 0x11c)) + 1;
                    if ((iVar13 != 0) && (piVar6 != NULL)) {
                        ipc_log_string(*(iVar2 + iVar12 * 0x60 + 0x58),"%s[I][%s][%x] All satellite channels probed!\n"
                                       ,0x80009aa,"mhi_sat_dev_probe",piVar6[0x23]);
                    }
                    queue_work_on(0x20,___mutex_init,piVar6 + 0x11);
                }
                return 0;
            }
        }
        uVar4 = 0xfffffff4;
    }
    return uVar4;
}


// ===== sym.mhi_sat_dev_remove @ 0x08001d90 (size 1232) =====

void sym.mhi_sat_dev_remove(int64_t arg1)

{
    int16_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    bool bVar4;
    bool bVar5;
    int iVar6;
    uint64_t uVar7;
    uint *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = *(arg1 + 0xc0);
    piVar10 = piVar11[3];
    piVar2 = piVar10 + 8;
    iVar13 = piVar10[3];
    mutex_lock(piVar2);
    uVar7 = __list_del_entry_valid(piVar11);
    if ((uVar7 & 1) != 0) {
        iVar9 = *piVar11;
        piVar15 = piVar11[1];
        *(iVar9 + 8) = piVar15;
        *piVar15 = iVar9;
    }
    *piVar11 = -0x2152ffffffffff00;
    piVar11[1] = -0x2152fffffffffede;
    mutex_unlock(piVar2);
    *(piVar10 + 0x25) = piVar10[0x25] + -1;
    mutex_lock(iVar13 + 0x20);
    cancel_work_sync(piVar10 + 0x1d);
    piVar11 = piVar10 + 0x27;
    _raw_spin_lock_irq(piVar11);
    if ((*(piVar10 + 0x134) | 2) == 3) {
        *(piVar10 + 0x134) = 4;
        _raw_spin_unlock_irq(piVar11);
        puVar14 = piVar10[3];
        flush_work(piVar10 + 0x11);
        flush_work(piVar10 + 0x17);
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x28);
        if (puVar8 == NULL) {
            if ((piVar10 != NULL) && (puVar14 != NULL)) {
                _printk(0x800084d,"mhi_sat_send_sys_err",*puVar14,piVar10[0x23]);
                ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_send_sys_err",piVar10[0x23]);
            }
        }
        else {
            *(puVar8 + 6) = 0;
            *(puVar8 + 8) = 0xff000000000000;
            mutex_lock(piVar10 + 0x2d);
            iVar9 = piVar10[3];
            iVar1 = 0;
            if (piVar10[0x26] != -2) {
                iVar1 = piVar10[0x26] + 1;
            }
            *(piVar10 + 0x26) = iVar1;
            *puVar8 = 1;
            *(puVar8 + 1) = 0xc;
            *(puVar8 + 6) = iVar1;
            puVar8[2] = 0x10ffff;
            puVar8[3] = piVar10[0x23];
            *(piVar10 + 0x13c) = iVar1;
            iVar6 = rpmsg_send(*(*(iVar9 + 8) + 0x3c8),puVar8,0x28);
            kfree(puVar8);
            if (iVar6 == 0) {
                if (piVar10 != NULL && puVar14 != NULL) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] SYS_ERR command sent\n",0x80009aa,
                                   "mhi_sat_send_sys_err",piVar10[0x23]);
                }
                puVar14 = piVar10[3];
                bVar4 = piVar10 != NULL;
                *(piVar10 + 0x29) = 0;
                bVar5 = puVar14 != NULL;
                if (bVar4 && bVar5) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] Wait for command completion\n",0x80009aa,
                                   "mhi_sat_wait_cmd_completion",piVar10[0x23]);
                }
                uVar12 = __msecs_to_jiffies(*(piVar10[2] + 0x178));
                iVar6 = wait_for_completion_timeout(piVar10 + 0x29,uVar12);
                if ((iVar6 == 0) || (piVar10[0x28] != 1)) {
                    if (bVar4 && bVar5) {
                        _printk(0x8000338,"mhi_sat_wait_cmd_completion",*puVar14,piVar10[0x23],*(piVar10 + 0x13c),
                                iVar6,piVar10[0x28]);
                        ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Command completion failure:seq:%u:ret:%d:ccs:%d\n",
                                       0x80009aa,"mhi_sat_wait_cmd_completion",piVar10[0x23],*(piVar10 + 0x13c),
                                       iVar6,piVar10[0x28]);
                    }
                }
                else if (bVar4 && bVar5) {
                    ipc_log_string(puVar14[0xb],"%s[I][%s][%x] Command completion successful for seq:%u\n",0x80009aa,
                                   "mhi_sat_wait_cmd_completion",piVar10[0x23],*(piVar10 + 0x13c));
                }
            }
            else if (piVar10 != NULL && puVar14 != NULL) {
                _printk(0x80005e3,"mhi_sat_send_sys_err",*puVar14,piVar10[0x23]);
                ipc_log_string(puVar14[0xb],"%s[E][%s][%x] Failed to notify SYS_ERR cmd\n",0x80009aa,
                               "mhi_sat_send_sys_err",piVar10[0x23]);
            }
            mutex_unlock(piVar10 + 0x2d);
        }
    }
    else {
        *(piVar10 + 0x134) = 4;
        _raw_spin_unlock_irq(piVar11);
    }
    if (piVar10[0x25] == 0) {
        cancel_work_sync(piVar10 + 0x11);
        cancel_work_sync(piVar10 + 0x17);
        mutex_lock(piVar2);
        piVar11 = piVar10[6];
        while (piVar11 != piVar10 + 6) {
            piVar15 = *piVar11;
            uVar12 = *(*(piVar10[2] + 8) + 0x88);
            if (piVar11[7] == '\0') {
                dma_unmap_page_attrs(uVar12,piVar11[4],piVar11[6],0,0x20);
            }
            else {
                dma_unmap_resource();
            }
            dma_unmap_page_attrs(uVar12,piVar11[4],piVar11[6],0,0x20);
            uVar7 = __list_del_entry_valid(piVar11);
            if ((uVar7 & 1) != 0) {
                iVar9 = *piVar11;
                piVar3 = piVar11[1];
                *(iVar9 + 8) = piVar3;
                *piVar3 = iVar9;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            kfree(piVar11);
            piVar11 = piVar15;
        }
        mutex_unlock(piVar2);
        _raw_spin_lock_irq(iVar13 + 0x50);
        uVar7 = __list_del_entry_valid(piVar10);
        if ((uVar7 & 1) != 0) {
            iVar9 = *piVar10;
            piVar2 = piVar10[1];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        *piVar10 = -0x2152ffffffffff00;
        piVar10[1] = -0x2152fffffffffede;
        _raw_spin_unlock_irq(iVar13 + 0x50);
        if ((iVar13 != 0) && (piVar10 != NULL)) {
            ipc_log_string(*(iVar13 + 0x58),"%s[I][%s][%x] Satellite controller node removed\n",0x80009aa,
                           "mhi_sat_dev_remove",piVar10[0x23]);
        }
        kfree(piVar10);
    }
    mutex_unlock(iVar13 + 0x20);
    return;
}


// ===== sym.mhi_sat_dev_status_cb @ 0x08002260 (size 188) =====

void sym.mhi_sat_dev_status_cb(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg2 == 7) {
        *in_x18 = unaff_x30;
        iVar2 = *(*(arg1 + 0xc0) + 0x18);
        if (*(iVar2 + 0x18) != 0 && iVar2 != 0) {
            ipc_log_string(*(*(iVar2 + 0x18) + 0x58),"%s[I][%s][%x] Device fatal error detected\n",0x80009aa,
                           "mhi_sat_dev_status_cb",*(iVar2 + 0x118));
        }
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x138);
        if (*(iVar2 + 0x134) == 1) {
            queue_work_on(0x20,___mutex_init,iVar2 + 0xe8);
            *(iVar2 + 0x134) = 3;
        }
        _raw_spin_unlock_irqrestore(iVar2 + 0x138,uVar1);
    }
    return;
}


// ===== sym.mhi_sat_connect_worker @ 0x0800231c (size 692) =====

//WARNING: Type propagation algorithm not settling

void sym.mhi_sat_connect_worker(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    char *pcVar3;
    int16_t iVar4;
    int64_t ******ppppppiVar5;
    uint32_t uVar6;
    ushort uVar7;
    ushort uVar8;
    uint16_t uVar9;
    int16_t iVar10;
    uint32_t uVar11;
    code *pcVar12;
    bool bVar13;
    bool bVar14;
    int iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint *puVar20;
    int64_t ******ppppppiVar21;
    int64_t *****pppppiVar22;
    int64_t iVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar24;
    int64_t *******pppppppiVar25;
    uint32_t uVar26;
    int64_t *******pppppppiVar27;
    int64_t ******ppppppiVar28;
    int64_t *piVar29;
    uint64_t uVar30;
    uint uVar31;
    ulong *puVar32;
    int64_t *piVar33;
    ulong *puVar34;
    ulong unaff_x30;
    int64_t *******pppppppiStack_130;
    int64_t *******pppppppiStack_128;
    ulong *puStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    uint uStack_f8;
    uint uStack_f4;
    uint uStack_f0;
    uint uStack_ec;
    uint uStack_e8;
    uint uStack_e4;
    ulong uStack_e0;
    uint uStack_d8;
    int64_t iStack_d0;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iVar24 = arg1 + 0xb0;
    iStack_58 = *(iVar16 + 0x5e0);
    puVar32 = *(arg1 + -0x70);
    uStack_60 = 0;
    _raw_spin_lock_irq(iVar24);
    if (((puVar32[1] != 0) && (*(arg1 + 0xa4) == *(arg1 + 0xa0))) && (uVar26 = *(arg1 + 0xac), (uVar26 | 2) == 2)) {
        *(arg1 + 0xac) = 1;
        _raw_spin_unlock_irq(iVar24);
        bVar13 = arg1 != 0x88 && puVar32 != NULL;
        if (arg1 != 0x88 && puVar32 != NULL) {
            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_connect_worker",*(arg1 + 0x90))
            ;
            iVar15 = mhi_controller_get_base(*(arg1 + -0x78),&uStack_60);
            if (iVar15 == 0) {
code_r0x08002444:
                puVar20 = kmem_cache_alloc_trace(_kmalloc_caches,0xa20,0x48);
                if (puVar20 != NULL) {
                    iVar15 = *(arg1 + 0x94);
                    uVar9 = *(arg1 + 0x9c);
                    iVar10 = *(arg1 + 0xa8);
                    *(puVar20 + 6) = uStack_60;
                    *(puVar20 + 10) = 0;
                    *(puVar20 + 0xc) = 0x20000002000000;
                    puVar20[8] = uVar9 | iVar15 << 0x10;
                    puVar20[9] = 0x6e0000;
                    iVar4 = 0;
                    if (iVar10 != -2) {
                        iVar4 = iVar10 + 1;
                    }
                    iVar16 = *(arg1 + -0x70);
                    *(puVar20 + 0xe) = 0;
                    *(puVar20 + 0x10) = 0x40000002000000;
                    *puVar20 = 1;
                    *(arg1 + 0xa8) = iVar4;
                    *(puVar20 + 1) = 0xe;
                    uVar31 = *(arg1 + 0x90);
                    *(puVar20 + 6) = iVar4;
                    puVar20[2] = 0x30ffff;
                    puVar20[3] = uVar31;
                    iVar15 = rpmsg_send(*(*(iVar16 + 8) + 0x3c8),puVar20,0x48);
                    kfree(puVar20);
                    if (iVar15 == 0) {
                        if (bVar13) {
                            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Device 0x%x sent hello packet\n",0x80009aa,
                                           "mhi_sat_connect_worker",*(arg1 + 0x90),*(arg1 + 0x90));
                        }
                        goto code_r0x08002518;
                    }
                    if (bVar13) {
                        _printk(0x80002e6,"mhi_sat_connect_worker",*puVar32,*(arg1 + 0x90),iVar15);
                        ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Failed to send hello packet:%d\n",0x80009aa,
                                       "mhi_sat_connect_worker",*(arg1 + 0x90),iVar15);
                    }
                }
            }
            else {
                _printk(0x800065f,"mhi_sat_connect_worker",*puVar32,*(arg1 + 0x90));
                ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Could not get controller base address\n",0x80009aa,
                               "mhi_sat_connect_worker",*(arg1 + 0x90));
            }
        }
        else {
            iVar15 = mhi_controller_get_base(*(arg1 + -0x78),&uStack_60);
            if (iVar15 == 0) goto code_r0x08002444;
        }
        _raw_spin_lock_irq(iVar24);
        if (*(arg1 + 0xac) == 1) {
            *(arg1 + 0xac) = uVar26;
        }
    }
    _raw_spin_unlock_irq(iVar24);
code_r0x08002518:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_58) {
        return;
    }
    iVar16 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_sat_process_worker;
    pcStack_b8 = sym.mhi_sat_process_worker;
    iVar24 = sp_el0;
    iStack_d0 = *(iVar24 + 0x5e0);
    pppppppiStack_130 = &pppppppiStack_130;
    iVar24 = *(iVar16 + -0xa0);
    bVar13 = iVar16 != 0xb8 && iVar24 != 0;
    pppppppiStack_128 = pppppppiStack_130;
    puStack_c0 = &stack0xffffffffffffffb0;
    if (bVar13) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_process_worker",
                       *(iVar16 + 0x60));
    }
    _raw_spin_lock_irq(iVar16 + -0x38);
    piVar1 = iVar16 + -0x48;
    if (piVar1 != *piVar1) {
        ppppppiVar28 = *(iVar16 + -0x48);
        pppppppiVar25 = *(iVar16 + -0x40);
        ppppppiVar28[1] = pppppppiStack_128;
        *pppppppiStack_128 = ppppppiVar28;
        *pppppppiVar25 = &pppppppiStack_130;
        *(iVar16 + -0x48) = piVar1;
        *(iVar16 + -0x40) = piVar1;
        pppppppiStack_128 = pppppppiVar25;
    }
    _raw_spin_unlock_irq(iVar16 + -0x38);
    if (pppppppiStack_130 != &pppppppiStack_130) {
        iVar2 = iVar16 + -0x78;
        piVar1 = iVar16 + -0x98;
        pppppppiVar25 = pppppppiStack_130;
        do {
            pppppppiVar27 = *pppppppiVar25;
            ppppppiVar28 = pppppppiVar25[3];
            uVar17 = __list_del_entry_valid(pppppppiVar25);
            if ((uVar17 & 1) != 0) {
                ppppppiVar21 = *pppppppiVar25;
                ppppppiVar5 = pppppppiVar25[1];
                ppppppiVar21[1] = ppppppiVar5;
                *ppppppiVar5 = ppppppiVar21;
            }
            *pppppppiVar25 = 0xdead000000000100;
            pppppppiVar25[1] = 0xdead000000000122;
            if (*(iVar16 + 0x7c) == 1) {
                puVar32 = *(iVar16 + -0xa0);
                uVar9 = *(ppppppiVar28 + 10);
                if (0xf < uVar9) {
                    uVar26 = 0;
                    bVar14 = iVar16 != 0xb8 && puVar32 != NULL;
                    ppppppiVar21 = ppppppiVar28 + 3;
                    do {
                        uVar6 = *(ppppppiVar21 + 0xc);
                        uVar11 = uVar6 >> 0x10 & 0xff;
                        if (uVar11 < 100) {
                            if (uVar11 == 0x10) {
                                uVar6 = uVar6 >> 0x18;
                                mutex_lock(iVar2);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar2);
                                        goto code_r0x08002d34;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar6) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar2);
                                if (piVar29 == NULL) {
code_r0x08002d34:
                                    if (bVar14) {
                                        ipc_log_string(puVar32[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                    }
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x80026d8);
                                    (*pcVar12)();
                                }
                                if (*(piVar29 + 4) == '\0') {
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002c7c);
                                    (*pcVar12)();
                                }
                                mhi_unprepare_from_transfer(piVar29[2]);
                                *(piVar29 + 4) = 0;
                                if (bVar14) {
                                    ipc_log_string(puVar32[0xb],"%s[I][%s][%x] RESET CHANNEL %d CMD successful\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                }
                                *ppppppiVar21 = NULL;
                                ppppppiVar21[1] = 0x21000001000000;
                            }
                            else if (uVar11 == 0x12) {
                                uVar6 = uVar6 >> 0x18;
                                mutex_lock(iVar2);
                                piVar29 = *piVar1;
                                while( true ) {
                                    if (piVar29 == piVar1) {
                                        mutex_unlock(iVar2);
                                        goto code_r0x08002dc8;
                                    }
                                    if (*(piVar29[2] + 0x3c4) == uVar6) break;
                                    piVar29 = *piVar29;
                                }
                                mutex_unlock(iVar2);
                                if (piVar29 == NULL) {
code_r0x08002dc8:
                                    if (bVar14) {
                                        ipc_log_string(puVar32[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6);
                                    }
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002e00);
                                    (*pcVar12)();
                                }
                                if (piVar29[4] != '\0') {
    //WARNING: Does not return
                                    pcVar12 = SoftwareBreakpoint(0x800,0x8002c74);
                                    (*pcVar12)();
                                }
                                iVar15 = mhi_prepare_for_transfer(piVar29[2],0);
                                uVar31 = 0;
                                if (iVar15 == 0) {
                                    uVar31 = 0x1000000;
                                    *(piVar29 + 4) = 1;
                                }
                                if (bVar14) {
                                    pcVar3 = "successful";
                                    if (iVar15 != 0) {
                                        pcVar3 = "failure";
                                    }
                                    ipc_log_string(puVar32[0xb],"%s[I][%s][%x] START CHANNEL %d CMD %s\n",0x80009aa,
                                                   "mhi_sat_process_cmds",*(iVar16 + 0x60),uVar6,pcVar3);
                                }
                                *ppppppiVar21 = NULL;
                                *(ppppppiVar21 + 1) = uVar31;
                                *(ppppppiVar21 + 0xc) = 0x210000;
                            }
                            else {
code_r0x080027d8:
                                if (bVar14) {
                                    _printk(0x8000698,"mhi_sat_process_cmds",*puVar32,*(iVar16 + 0x60));
                                    ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Unhandled MHI satellite command!",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60));
                                }
                            }
                        }
                        else if (uVar11 == 100) {
                            uVar11 = uVar6 >> 0x18;
                            pppppiVar22 = *ppppppiVar21;
                            uStack_100 = 0;
                            uVar31 = *(ppppppiVar21 + 1);
                            uStack_d8 = 0;
                            uStack_e8 = 0;
                            uStack_e4 = 0;
                            uStack_e0 = 0;
                            uStack_f8 = 0;
                            uStack_f4 = 0;
                            uStack_f0 = 0;
                            uStack_ec = 0;
                            uStack_110 = 0;
                            uStack_108 = 0;
                            puStack_120 = NULL;
                            uStack_118 = 0;
                            mutex_lock(iVar2);
                            piVar29 = *piVar1;
                            if (piVar29 == piVar1) {
code_r0x08002d6c:
                                mutex_unlock(iVar2);
code_r0x08002d74:
                                if (bVar14) {
                                    ipc_log_string(puVar32[0xb],
                                                   "%s[I][%s][%x] Failed to find the satellite device with id : %d\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),uVar11);
                                }
    //WARNING: Does not return
                                pcVar12 = SoftwareBreakpoint(0x800,0x8002dac);
                                (*pcVar12)();
                            }
                            while( true ) {
                                iVar23 = 0x3c4;
                                if ((uVar6 & 1) != 0) {
                                    iVar23 = 0x3c8;
                                }
                                if (*(piVar29[2] + iVar23) == uVar11) break;
                                piVar29 = *piVar29;
                                if (piVar29 == piVar1) goto code_r0x08002d6c;
                            }
                            mutex_unlock(iVar2);
                            if (piVar29 == NULL) goto code_r0x08002d74;
                            uStack_f8 = 0;
                            uStack_e4 = 0;
                            uStack_110 = 0;
                            uStack_108 = 0x2c;
                            uStack_d8 = 0;
                            uStack_118 = *(obj.sat_ctxt_str + (uVar6 & 1) * 8);
                            uStack_e0 = 0;
                            uStack_f4 = SUB84(pppppiVar22,0);
                            uStack_f0 = pppppiVar22 >> 0x20;
                            uStack_e8 = 0;
                            uStack_100 = 0xa00000000;
                            puStack_120 = &uStack_100;
                            uStack_ec = uVar31;
                            iVar15 = mhi_device_configure(piVar29[2],0,&puStack_120,1);
                            if (bVar14) {
                                pcVar3 = "successful";
                                if (iVar15 != 0) {
                                    pcVar3 = "failed";
                                }
                                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] CTXT UPDATE CMD %s:%d %s\n",0x80009aa,
                                               "mhi_sat_process_cmds",*(iVar16 + 0x60),uStack_118,uVar11,pcVar3);
                            }
                            *ppppppiVar21 = NULL;
                            *(ppppppiVar21 + 1) = (iVar15 == 0) << 0x18;
                            *(ppppppiVar21 + 0xc) = 0x210000;
                        }
                        else {
                            if (uVar11 != 0x65) goto code_r0x080027d8;
                            iVar23 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar23 = 0x30;
                            }
                            piVar33 = *(*(*(iVar16 + -0xa8) + 8) + 0x88);
                            piVar29 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar23),0xa20,0x40);
                            if (piVar29 == NULL) {
                                pppppiVar22 = 0xffffffffffffffff;
                                pcVar3 = "failed";
                                uVar31 = 0;
                            }
                            else {
                                pppppiVar22 = *ppppppiVar21;
                                piVar29[5] = pppppiVar22;
                                uVar17 = *(ppppppiVar21 + 1);
                                piVar29[6] = uVar17;
                                uVar6 = *(ppppppiVar21 + 0xc);
                                *(piVar29 + 7) = uVar6 & 1;
                                if ((uVar6 & 1) == 0) {
                                    uVar30 = pppppiVar22 - _ipc_log_context_create;
                                    uVar18 = is_vmalloc_addr(uVar30 | 0xffffff8000000000);
                                    if (((uVar18 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                        obj.dma_map_single_attrs.__already_done = 0x1;
                                        uVar19 = dev_driver_string(piVar33);
                                        iVar24 = piVar33[0xe];
                                        if (iVar24 == 0) {
                                            iVar24 = *piVar33;
                                        }
                                        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar19,iVar24);
    //WARNING: Does not return
                                        pcVar12 = SoftwareBreakpoint(0x800,0x8002cb4);
                                        (*pcVar12)();
                                    }
                                    if ((uVar18 & 1) == 0) {
                                        pppppiVar22 = dma_map_page_attrs(piVar33,uVar30 >> 6 & 0x1ffffffc0 |
                                                                                  0xfffffffe00000000,uVar30 & 0xfff,
                                                                         uVar17,0,0x20);
                                        goto code_r0x08002bb4;
                                    }
                                }
                                else {
                                    pppppiVar22 = dma_map_resource(piVar33,pppppiVar22,uVar17,0,0);
code_r0x08002bb4:
                                    if (pppppiVar22 != 0xffffffffffffffff) {
                                        piVar29[4] = pppppiVar22;
                                        mutex_lock(iVar2);
                                        puVar34 = *(iVar16 + -0x80);
                                        uVar17 = __list_add_valid(piVar29,puVar34,iVar16 + -0x88);
                                        if ((uVar17 & 1) != 0) {
                                            *(iVar16 + -0x80) = piVar29;
                                            *piVar29 = iVar16 + -0x88;
                                            piVar29[1] = puVar34;
                                            *puVar34 = piVar29;
                                        }
                                        mutex_unlock(iVar2);
                                        uVar31 = 0x1000000;
                                        pcVar3 = "successful";
                                        goto joined_r0x08002b98;
                                    }
                                }
                                kfree(piVar29);
                                uVar31 = 0;
                                pppppiVar22 = 0xffffffffffffffff;
                                pcVar3 = "failed";
                            }
joined_r0x08002b98:
                            if (bVar14) {
                                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] IOMMU MAP 0x%llx len:%d CMD %s:%llx\n",
                                               0x80009aa,"mhi_sat_process_cmds",*(iVar16 + 0x60),*ppppppiVar21,
                                               *(ppppppiVar21 + 1),pcVar3,pppppiVar22);
                            }
                            *ppppppiVar21 = pppppiVar22;
                            *(ppppppiVar21 + 1) = uVar31;
                            *(ppppppiVar21 + 0xc) = 0x210000;
                        }
                        uVar26 = uVar26 + 1;
                        ppppppiVar21 = ppppppiVar21 + 2;
                    } while (uVar26 != uVar9 >> 4);
                }
                ppppppiVar21 = pppppppiVar25[3];
                uVar7 = *(ppppppiVar28 + 6);
                iVar4 = 0;
                if (*(iVar16 + 0x78) != -2) {
                    iVar4 = *(iVar16 + 0x78) + 1;
                }
                uVar9 = *(ppppppiVar28 + 10);
                *(iVar16 + 0x78) = iVar4;
                iVar23 = *(iVar16 + -0xa0);
                *ppppppiVar21 = 1;
                uVar9 = uVar9 & 0xfff0;
                *(ppppppiVar21 + 4) = 0xe;
                uVar8 = *(iVar16 + 0x78);
                *(ppppppiVar21 + 1) = uVar7;
                *(ppppppiVar21 + 10) = uVar9;
                *(ppppppiVar21 + 6) = uVar8;
                *(ppppppiVar21 + 0xc) = *(iVar16 + 0x60);
                rpmsg_send(*(*(iVar23 + 8) + 0x3c8),ppppppiVar21,uVar9 + 0x18);
            }
            kfree(pppppppiVar25);
            pppppppiVar25 = pppppppiVar27;
        } while (pppppppiVar27 != &pppppppiStack_130);
    }
    if (bVar13) {
        ipc_log_string(*(iVar24 + 0x58),"%s[I][%s][%x] Exited\n",0x80009aa,"mhi_sat_process_worker",*(iVar16 + 0x60)
                      );
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) != iStack_d0) {
        iVar24 = __stack_chk_fail();
        *extraout_x18_00 = 0x8002e74;
        puVar32 = *(iVar24 + -0xd0);
        bVar13 = puVar32 != NULL;
        bVar14 = iVar24 != 0xe8;
        if (bVar14 && bVar13) {
            ipc_log_string(puVar32[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(iVar24 + 0x30))
            ;
        }
        flush_work(iVar24 + -0x60);
        flush_work(iVar24 + -0x30);
        iVar16 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar16 = 0x30;
        }
        puVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xcc0,0x28);
        if (puVar20 == NULL) {
            if (bVar14 && bVar13) {
                _printk(0x800084d,"mhi_sat_error_worker",*puVar32,*(iVar24 + 0x30));
                ipc_log_string(puVar32[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30));
            }
        }
        else {
            iVar10 = *(iVar24 + 0x48);
            *(puVar20 + 6) = 0;
            *(puVar20 + 8) = 0x200000ff000000;
            iVar4 = 0;
            if (iVar10 != -2) {
                iVar4 = iVar10 + 1;
            }
            *puVar20 = 1;
            uVar31 = *(iVar24 + 0x30);
            *(puVar20 + 1) = 0xe;
            iVar16 = *(iVar24 + -0xd0);
            *(iVar24 + 0x48) = iVar4;
            *(puVar20 + 6) = iVar4;
            puVar20[2] = 0x10ffff;
            puVar20[3] = uVar31;
            iVar15 = rpmsg_send(*(*(iVar16 + 8) + 0x3c8),puVar20,0x28);
            kfree(puVar20);
            if (bVar14 && bVar13) {
                pcVar3 = "success";
                if (iVar15 != 0) {
                    pcVar3 = "failure";
                }
                ipc_log_string(puVar32[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar24 + 0x30),pcVar3);
            }
        }
        return;
    }
    return;
}


// ===== sym.mhi_sat_process_worker @ 0x080025d0 (size 2216) =====

void sym.mhi_sat_process_worker(int64_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint32_t uVar5;
    ushort uVar6;
    ushort uVar7;
    uint16_t uVar8;
    int16_t iVar9;
    uint32_t uVar10;
    code *pcVar11;
    bool bVar12;
    bool bVar13;
    int iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong uVar17;
    uint *puVar18;
    int64_t iVar19;
    ulong *puVar20;
    int64_t iVar21;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar22;
    int64_t *piVar23;
    uint32_t uVar24;
    int64_t *piVar25;
    int64_t iVar26;
    int64_t *piVar27;
    uint64_t uVar28;
    uint uVar29;
    int64_t *piVar30;
    int64_t iVar31;
    ulong *puVar32;
    int64_t *piVar33;
    ulong unaff_x30;
    int64_t *piStack_d0;
    int64_t *piStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    ulong uStack_80;
    uint uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_70 = *(iVar22 + 0x5e0);
    piStack_d0 = &stack0xffffffffffffff30;
    iVar22 = *(arg1 + -0xa0);
    bVar12 = arg1 != 0xb8 && iVar22 != 0;
    piStack_c8 = piStack_d0;
    if (bVar12) {
        ipc_log_string(*(iVar22 + 0x58),"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_process_worker",*(arg1 + 0x60))
        ;
    }
    _raw_spin_lock_irq(arg1 + -0x38);
    piVar1 = arg1 + -0x48;
    if (piVar1 != *piVar1) {
        iVar21 = *(arg1 + -0x48);
        piVar23 = *(arg1 + -0x40);
        *(iVar21 + 8) = piStack_c8;
        *piStack_c8 = iVar21;
        *piVar23 = &stack0xffffffffffffff30;
        *(arg1 + -0x48) = piVar1;
        *(arg1 + -0x40) = piVar1;
        piStack_c8 = piVar23;
    }
    _raw_spin_unlock_irq(arg1 + -0x38);
    if (piStack_d0 != &stack0xffffffffffffff30) {
        iVar21 = arg1 + -0x78;
        piVar1 = arg1 + -0x98;
        piVar23 = piStack_d0;
        do {
            piVar25 = *piVar23;
            iVar26 = piVar23[3];
            uVar15 = __list_del_entry_valid(piVar23);
            if ((uVar15 & 1) != 0) {
                iVar19 = *piVar23;
                piVar33 = piVar23[1];
                *(iVar19 + 8) = piVar33;
                *piVar33 = iVar19;
            }
            *piVar23 = -0x2152ffffffffff00;
            piVar23[1] = -0x2152fffffffffede;
            if (*(arg1 + 0x7c) == 1) {
                puVar20 = *(arg1 + -0xa0);
                uVar8 = *(iVar26 + 10);
                if (0xf < uVar8) {
                    uVar24 = 0;
                    bVar13 = arg1 != 0xb8 && puVar20 != NULL;
                    piVar33 = iVar26 + 0x18;
                    do {
                        uVar5 = *(piVar33 + 0xc);
                        uVar10 = uVar5 >> 0x10 & 0xff;
                        if (uVar10 < 100) {
                            if (uVar10 == 0x10) {
                                uVar5 = uVar5 >> 0x18;
                                mutex_lock(iVar21);
                                piVar27 = *piVar1;
                                while( true ) {
                                    if (piVar27 == piVar1) {
                                        mutex_unlock(iVar21);
                                        goto code_r0x08002d34;
                                    }
                                    if (*(piVar27[2] + 0x3c4) == uVar5) break;
                                    piVar27 = *piVar27;
                                }
                                mutex_unlock(iVar21);
                                if (piVar27 == NULL) {
code_r0x08002d34:
                                    if (bVar13) {
                                        ipc_log_string(puVar20[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60),uVar5);
                                    }
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x80026d8);
                                    (*pcVar11)();
                                }
                                if (*(piVar27 + 4) == '\0') {
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002c7c);
                                    (*pcVar11)();
                                }
                                mhi_unprepare_from_transfer(piVar27[2]);
                                *(piVar27 + 4) = 0;
                                if (bVar13) {
                                    ipc_log_string(puVar20[0xb],"%s[I][%s][%x] RESET CHANNEL %d CMD successful\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60),uVar5);
                                }
                                *piVar33 = 0;
                                piVar33[1] = 0x21000001000000;
                            }
                            else if (uVar10 == 0x12) {
                                uVar5 = uVar5 >> 0x18;
                                mutex_lock(iVar21);
                                piVar27 = *piVar1;
                                while( true ) {
                                    if (piVar27 == piVar1) {
                                        mutex_unlock(iVar21);
                                        goto code_r0x08002dc8;
                                    }
                                    if (*(piVar27[2] + 0x3c4) == uVar5) break;
                                    piVar27 = *piVar27;
                                }
                                mutex_unlock(iVar21);
                                if (piVar27 == NULL) {
code_r0x08002dc8:
                                    if (bVar13) {
                                        ipc_log_string(puVar20[0xb],
                                                       "%s[I][%s][%x] Failed to find the satellite device with id : %d\n"
                                                       ,0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60),uVar5);
                                    }
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002e00);
                                    (*pcVar11)();
                                }
                                if (piVar27[4] != '\0') {
    //WARNING: Does not return
                                    pcVar11 = SoftwareBreakpoint(0x800,0x8002c74);
                                    (*pcVar11)();
                                }
                                iVar14 = mhi_prepare_for_transfer(piVar27[2],0);
                                uVar29 = 0;
                                if (iVar14 == 0) {
                                    uVar29 = 0x1000000;
                                    *(piVar27 + 4) = 1;
                                }
                                if (bVar13) {
                                    pcVar2 = "successful";
                                    if (iVar14 != 0) {
                                        pcVar2 = "failure";
                                    }
                                    ipc_log_string(puVar20[0xb],"%s[I][%s][%x] START CHANNEL %d CMD %s\n",0x80009aa,
                                                   "mhi_sat_process_cmds",*(arg1 + 0x60),uVar5,pcVar2);
                                }
                                *piVar33 = 0;
                                *(piVar33 + 1) = uVar29;
                                *(piVar33 + 0xc) = 0x210000;
                            }
                            else {
code_r0x080027d8:
                                if (bVar13) {
                                    _printk(0x8000698,"mhi_sat_process_cmds",*puVar20,*(arg1 + 0x60));
                                    ipc_log_string(puVar20[0xb],"%s[E][%s][%x] Unhandled MHI satellite command!",
                                                   0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60));
                                }
                            }
                        }
                        else if (uVar10 == 100) {
                            uVar10 = uVar5 >> 0x18;
                            iVar31 = *piVar33;
                            uStack_a0 = 0;
                            iVar19 = piVar33[1];
                            uStack_78 = 0;
                            uStack_88 = 0;
                            uStack_84 = 0;
                            uStack_80 = 0;
                            uStack_98 = 0;
                            uStack_94 = 0;
                            uStack_90 = 0;
                            uStack_8c = 0;
                            uStack_b0 = 0;
                            uStack_a8 = 0;
                            puStack_c0 = NULL;
                            uStack_b8 = 0;
                            mutex_lock(iVar21);
                            piVar27 = *piVar1;
                            if (piVar27 == piVar1) {
code_r0x08002d6c:
                                mutex_unlock(iVar21);
code_r0x08002d74:
                                if (bVar13) {
                                    ipc_log_string(puVar20[0xb],
                                                   "%s[I][%s][%x] Failed to find the satellite device with id : %d\n",
                                                   0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60),uVar10);
                                }
    //WARNING: Does not return
                                pcVar11 = SoftwareBreakpoint(0x800,0x8002dac);
                                (*pcVar11)();
                            }
                            while( true ) {
                                iVar3 = 0x3c4;
                                if ((uVar5 & 1) != 0) {
                                    iVar3 = 0x3c8;
                                }
                                if (*(piVar27[2] + iVar3) == uVar10) break;
                                piVar27 = *piVar27;
                                if (piVar27 == piVar1) goto code_r0x08002d6c;
                            }
                            mutex_unlock(iVar21);
                            if (piVar27 == NULL) goto code_r0x08002d74;
                            uStack_98 = 0;
                            uStack_84 = 0;
                            uStack_b0 = 0;
                            uStack_a8 = 0x2c;
                            uStack_78 = 0;
                            uStack_b8 = *(obj.sat_ctxt_str + (uVar5 & 1) * 8);
                            uStack_80 = 0;
                            uStack_94 = iVar31;
                            uStack_90 = iVar31 >> 0x20;
                            uStack_88 = 0;
                            uStack_a0 = 0xa00000000;
                            puStack_c0 = &stack0xffffffffffffff60;
                            uStack_8c = iVar19;
                            iVar14 = mhi_device_configure(piVar27[2],0,&stack0xffffffffffffff40,1);
                            if (bVar13) {
                                pcVar2 = "successful";
                                if (iVar14 != 0) {
                                    pcVar2 = "failed";
                                }
                                ipc_log_string(puVar20[0xb],"%s[I][%s][%x] CTXT UPDATE CMD %s:%d %s\n",0x80009aa,
                                               "mhi_sat_process_cmds",*(arg1 + 0x60),uStack_b8,uVar10,pcVar2);
                            }
                            *piVar33 = 0;
                            *(piVar33 + 1) = (iVar14 == 0) << 0x18;
                            *(piVar33 + 0xc) = 0x210000;
                        }
                        else {
                            if (uVar10 != 0x65) goto code_r0x080027d8;
                            iVar19 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar19 = 0x30;
                            }
                            piVar30 = *(*(*(arg1 + -0xa8) + 8) + 0x88);
                            piVar27 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xa20,0x40);
                            if (piVar27 == NULL) {
                                iVar19 = -1;
                                pcVar2 = "failed";
                                uVar29 = 0;
                            }
                            else {
                                iVar19 = *piVar33;
                                piVar27[5] = iVar19;
                                uVar15 = *(piVar33 + 1);
                                piVar27[6] = uVar15;
                                uVar5 = *(piVar33 + 0xc);
                                *(piVar27 + 7) = uVar5 & 1;
                                if ((uVar5 & 1) == 0) {
                                    uVar28 = iVar19 - _ipc_log_context_create;
                                    uVar16 = is_vmalloc_addr(uVar28 | 0xffffff8000000000);
                                    if (((uVar16 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                                        obj.dma_map_single_attrs.__already_done = 0x1;
                                        uVar17 = dev_driver_string(piVar30);
                                        iVar22 = piVar30[0xe];
                                        if (iVar22 == 0) {
                                            iVar22 = *piVar30;
                                        }
                                        __warn_printk("%s %s: rejecting DMA map of vmalloc memory\n",uVar17,iVar22);
    //WARNING: Does not return
                                        pcVar11 = SoftwareBreakpoint(0x800,0x8002cb4);
                                        (*pcVar11)();
                                    }
                                    if ((uVar16 & 1) == 0) {
                                        iVar19 = dma_map_page_attrs(piVar30,uVar28 >> 6 & 0x1ffffffc0 |
                                                                             0xfffffffe00000000,uVar28 & 0xfff,uVar15
                                                                    ,0,0x20);
                                        goto code_r0x08002bb4;
                                    }
                                }
                                else {
                                    iVar19 = dma_map_resource(piVar30,iVar19,uVar15,0,0);
code_r0x08002bb4:
                                    if (iVar19 != -1) {
                                        piVar27[4] = iVar19;
                                        mutex_lock(iVar21);
                                        puVar32 = *(arg1 + -0x80);
                                        uVar15 = __list_add_valid(piVar27,puVar32,arg1 + -0x88);
                                        if ((uVar15 & 1) != 0) {
                                            *(arg1 + -0x80) = piVar27;
                                            *piVar27 = arg1 + -0x88;
                                            piVar27[1] = puVar32;
                                            *puVar32 = piVar27;
                                        }
                                        mutex_unlock(iVar21);
                                        uVar29 = 0x1000000;
                                        pcVar2 = "successful";
                                        goto joined_r0x08002b98;
                                    }
                                }
                                kfree(piVar27);
                                uVar29 = 0;
                                iVar19 = -1;
                                pcVar2 = "failed";
                            }
joined_r0x08002b98:
                            if (bVar13) {
                                ipc_log_string(puVar20[0xb],"%s[I][%s][%x] IOMMU MAP 0x%llx len:%d CMD %s:%llx\n",
                                               0x80009aa,"mhi_sat_process_cmds",*(arg1 + 0x60),*piVar33,piVar33[1],
                                               pcVar2,iVar19);
                            }
                            *piVar33 = iVar19;
                            *(piVar33 + 1) = uVar29;
                            *(piVar33 + 0xc) = 0x210000;
                        }
                        uVar24 = uVar24 + 1;
                        piVar33 = piVar33 + 2;
                    } while (uVar24 != uVar8 >> 4);
                }
                puVar18 = piVar23[3];
                uVar6 = *(iVar26 + 6);
                iVar4 = 0;
                if (*(arg1 + 0x78) != -2) {
                    iVar4 = *(arg1 + 0x78) + 1;
                }
                uVar8 = *(iVar26 + 10);
                *(arg1 + 0x78) = iVar4;
                iVar26 = *(arg1 + -0xa0);
                *puVar18 = 1;
                uVar8 = uVar8 & 0xfff0;
                *(puVar18 + 1) = 0xe;
                uVar7 = *(arg1 + 0x78);
                *(puVar18 + 2) = uVar6;
                *(puVar18 + 10) = uVar8;
                *(puVar18 + 6) = uVar7;
                puVar18[3] = *(arg1 + 0x60);
                rpmsg_send(*(*(iVar26 + 8) + 0x3c8),puVar18,uVar8 + 0x18);
            }
            kfree(piVar23);
            piVar23 = piVar25;
        } while (piVar25 != &stack0xffffffffffffff30);
    }
    if (bVar12) {
        ipc_log_string(*(iVar22 + 0x58),"%s[I][%s][%x] Exited\n",0x80009aa,"mhi_sat_process_worker",*(arg1 + 0x60));
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) != iStack_70) {
        iVar22 = __stack_chk_fail();
        *extraout_x18 = 0x8002e74;
        puVar20 = *(iVar22 + -0xd0);
        bVar12 = puVar20 != NULL;
        bVar13 = iVar22 != 0xe8;
        if (bVar13 && bVar12) {
            ipc_log_string(puVar20[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(iVar22 + 0x30))
            ;
        }
        flush_work(iVar22 + -0x60);
        flush_work(iVar22 + -0x30);
        iVar21 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar21 = 0x30;
        }
        puVar18 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar21),0xcc0,0x28);
        if (puVar18 == NULL) {
            if (bVar13 && bVar12) {
                _printk(0x800084d,"mhi_sat_error_worker",*puVar20,*(iVar22 + 0x30));
                ipc_log_string(puVar20[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar22 + 0x30));
            }
        }
        else {
            iVar9 = *(iVar22 + 0x48);
            *(puVar18 + 6) = 0;
            *(puVar18 + 8) = 0x200000ff000000;
            iVar4 = 0;
            if (iVar9 != -2) {
                iVar4 = iVar9 + 1;
            }
            *puVar18 = 1;
            uVar29 = *(iVar22 + 0x30);
            *(puVar18 + 1) = 0xe;
            iVar21 = *(iVar22 + -0xd0);
            *(iVar22 + 0x48) = iVar4;
            *(puVar18 + 6) = iVar4;
            puVar18[2] = 0x10ffff;
            puVar18[3] = uVar29;
            iVar14 = rpmsg_send(*(*(iVar21 + 8) + 0x3c8),puVar18,0x28);
            kfree(puVar18);
            if (bVar13 && bVar12) {
                pcVar2 = "success";
                if (iVar14 != 0) {
                    pcVar2 = "failure";
                }
                ipc_log_string(puVar20[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                               "mhi_sat_error_worker",*(iVar22 + 0x30),pcVar2);
            }
        }
        return;
    }
    return;
}


// ===== sym.mhi_sat_error_worker @ 0x08002e78 (size 444) =====

void sym.mhi_sat_error_worker(int64_t arg1)

{
    char *pcVar1;
    int16_t iVar2;
    uint uVar3;
    int16_t iVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    uint *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(arg1 + -0xd0);
    bVar5 = puVar10 != NULL;
    bVar6 = arg1 != 0xe8;
    if (bVar6 && bVar5) {
        ipc_log_string(puVar10[0xb],"%s[I][%s][%x] Entered\n",0x80009aa,"mhi_sat_error_worker",*(arg1 + 0x30));
    }
    flush_work(arg1 + -0x60);
    flush_work(arg1 + -0x30);
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x28);
    if (puVar8 == NULL) {
        if (bVar6 && bVar5) {
            _printk(0x800084d,"mhi_sat_error_worker",*puVar10,*(arg1 + 0x30));
            ipc_log_string(puVar10[0xb],"%s[E][%s][%x] Unable to malloc for SYS_ERR message!\n",0x80009aa,
                           "mhi_sat_error_worker",*(arg1 + 0x30));
        }
    }
    else {
        iVar4 = *(arg1 + 0x48);
        *(puVar8 + 6) = 0;
        *(puVar8 + 8) = 0x200000ff000000;
        iVar2 = 0;
        if (iVar4 != -2) {
            iVar2 = iVar4 + 1;
        }
        *puVar8 = 1;
        uVar3 = *(arg1 + 0x30);
        *(puVar8 + 1) = 0xe;
        iVar9 = *(arg1 + -0xd0);
        *(arg1 + 0x48) = iVar2;
        *(puVar8 + 6) = iVar2;
        puVar8[2] = 0x10ffff;
        puVar8[3] = uVar3;
        iVar7 = rpmsg_send(*(*(iVar9 + 8) + 0x3c8),puVar8,0x28);
        kfree(puVar8);
        if (bVar6 && bVar5) {
            pcVar1 = "success";
            if (iVar7 != 0) {
                pcVar1 = "failure";
            }
            ipc_log_string(puVar10[0xb],"%s[I][%s][%x] SYS_ERROR state change event send %s!\n",0x80009aa,
                           "mhi_sat_error_worker",*(arg1 + 0x30),pcVar1);
        }
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
    //switch table (4 cases) at 0x8000b21
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800308c);
    (*pcVar1)();
}


// ===== sym.cleanup_module @ 0x08003094 (size 148) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    uint32_t uVar1;
    ulong *puVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.mhi_sat_driver.1);
    if (obj.mhi_sat_driver.2 == 0x1) {
        uVar1 = 0;
        puVar2 = _segment.ehdr + 0x58;
        do {
            ipc_log_context_destroy(*puVar2);
            uVar1 = uVar1 + 1;
            uVar3 = 3;
            if (obj.mhi_sat_driver.2 == 0x0) {
                uVar3 = 0;
            }
            puVar2 = puVar2 + 0xc;
        } while (uVar1 < uVar3);
    }
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}

