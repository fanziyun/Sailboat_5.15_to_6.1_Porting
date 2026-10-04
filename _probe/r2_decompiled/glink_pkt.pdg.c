// decompiled from glink_pkt by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 800) =====

//WARNING: Switch with 1 destination removed at 0x08004ec8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x19ad56ffbc919b67) {
            if (arg1 < -0x61278529fef85643) {
                if (arg1 != -0x7bcbda558eb245e5) {
                    if (arg1 != -0x66d421a09845f9f8) goto code_r0x08004e88;
                    pcVar2 = sym.name_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08002144:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08004e88;
                }
                pcVar2 = sym.glink_pkt_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 == -0x61278529fef85643) {
                    if ((pcVar1 + -0x80023a8 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08004e88;
                }
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08004e88;
                pcVar2 = sym.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < -0x890743871a4a53) {
            if (arg1 != -0x19ad56ffbc919b67) {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08004e88;
                pcVar2 = sym.glink_pkt_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08002144;
            }
            pcVar2 = sym.glink_pkt_rpdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.glink_pkt_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004e88;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x379d36f049eb9a81) {
        if (arg1 < 0x1e3d0ffe3d0499e9) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.glink_pkt_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08004e88;
                pcVar2 = sym.glink_pkt_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.open_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2ce63a3287021e91) goto code_r0x08004e88;
            pcVar2 = sym.glink_pkt_rpdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == 0x379d36f049eb9a81) {
            pcVar2 = sym.glink_pkt_mmap.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x3d67368aab6f96b2) goto code_r0x08004e88;
            pcVar2 = sym.glink_pkt_rpdev_sigs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        pcVar2 = sym.glink_pkt_release_device.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004e88;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004e88:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004edc);
    (*pcVar1)();
}


// ===== sym.glink_pkt_mmap.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002328 (size 8) =====

ulong sym.glink_pkt_mmap.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    if ((*(param_2 + 0x50) & 6) != 0) {
        return 0xffffffff;
    }
    *(param_2 + 0x50) = *(param_2 + 0x50) & 0xffffffffffffff9f | 0x10000000;
    *(param_2 + 0x90) = obj.glink_pkt_vm_ops;
    return 0;
}


// ===== sym.glink_pkt_rpdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002330 (size 8) =====

void sym.glink_pkt_rpdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x88);
    mutex_lock(iVar1 + 0xd8);
    *(iVar1 + 0x130) = 0;
    mutex_unlock(iVar1 + 0xd8);
    *(param_1 + 0x98) = 0;
    *(iVar1 + 0x108) = 0;
    __wake_up(iVar1 + 0x170,1,1,0);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002338 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr >> 0x14,_segment.ehdr);
    platform_driver_unregister(reloc.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002340 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module)
    ;
    if (iVar1 == 0) {
        _segment.ehdr = ipc_log_context_create(2,"glink_pkt",0);
    }
    else {
        iVar2 = ___ratelimit(obj.glink_pkt_init._rs,"glink_pkt_init");
        if (iVar2 != 0) {
            _printk("%s[%s]: %s: glink_pkt register failed %d\n",0x8000da1,"glink_pkt_init","glink_pkt_init",iVar1);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: %s: glink_pkt register failed %d\n",0x8000e4c,"glink_pkt_init",
                       "glink_pkt_init",iVar1);
    }
    return iVar1;
}


// ===== sym.glink_pkt_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002348 (size 8) =====

uint32_t sym.glink_pkt_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0xd8);
    if ((iVar8 == 0) || (*(iVar8 + 0x540) == 1)) {
        iVar2 = ___ratelimit(obj.glink_pkt_poll._rs,"glink_pkt_poll");
        if (iVar2 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_poll");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_poll");
        uVar3 = 8;
    }
    else {
        uVar4 = completion_done(iVar8 + 0x520);
        if ((uVar4 & 1) == 0) {
            iVar2 = ___ratelimit(obj.glink_pkt_poll._rs.39,"glink_pkt_poll");
            if (iVar2 != 0) {
                _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_poll",*(iVar8 + 0x5b8));
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_poll",*(iVar8 + 0x5b8)
                          );
            uVar3 = 0x12;
        }
        else {
            if (((param_2 != NULL) && (iVar8 + 0x588 != 0)) && (pcVar7 = *param_2, pcVar7 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar7,0x8000960);
                (*pcVar7)(param_1,iVar8 + 0x588,param_2);
            }
            iVar1 = iVar8 + 0x4f0;
            mutex_lock(iVar1);
            uVar4 = completion_done(iVar8 + 0x520);
            if (((uVar4 & 1) == 0) || (*(iVar8 + 0x548) == 0)) {
                iVar2 = ___ratelimit(obj.glink_pkt_poll._rs.40,"glink_pkt_poll");
                if (iVar2 != 0) {
                    _printk("%s[%s]: %s channel reset after wait\n",0x8000da1,"glink_pkt_poll",*(iVar8 + 0x5b8));
                }
                ipc_log_string(_segment.ehdr,"%s[%s]: %s channel reset after wait\n",0x8000e4c,"glink_pkt_poll",
                               *(iVar8 + 0x5b8));
                mutex_unlock(iVar1);
                uVar3 = 0x10;
            }
            else {
                uVar5 = _raw_spin_lock_irqsave(iVar8 + 0x550);
                if ((*(iVar8 + 0x558) != iVar8 + 0x558) || (uVar6 = 0, *(iVar8 + 0x5d0) != 0)) {
                    uVar6 = 0x41;
                }
                if (*(iVar8 + 0x5a0) != 0) {
                    uVar6 = uVar6 | 2;
                }
                _raw_spin_unlock_irqrestore(iVar8 + 0x550,uVar5);
                uVar3 = rpmsg_poll(*(*(iVar8 + 0x548) + 0x3c8),param_1,param_2);
                uVar3 = uVar3 | uVar6;
                mutex_unlock(iVar1);
            }
        }
    }
    return uVar3;
}


// ===== sym.glink_pkt_rpdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002350 (size 8) =====

ulong sym.glink_pkt_rpdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x88);
    mutex_lock(iVar1 + 0xd8);
    *(iVar1 + 0x130) = param_1;
    mutex_unlock(iVar1 + 0xd8);
    *(param_1 + 0x98) = iVar1 + -0x418;
    complete_all(iVar1 + 0x108);
    return 0;
}


// ===== sym.open_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002358 (size 8) =====

ulong sym.open_timeout_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar2 = param_1 + 0x4f0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    mutex_lock(iVar2);
    iVar1 = kstrtoll(param_3,0,&uStack_40);
    if (iVar1 == 0) {
        *(param_1 + 0x5c8) = uStack_40;
        mutex_unlock(iVar2);
    }
    else {
        mutex_unlock(iVar2);
        iVar1 = ___ratelimit(obj.open_timeout_store._rs,"open_timeout_store");
        if (iVar1 != 0) {
            _printk("%s[%s]: unable to convert string to int for /dev/%s\n",0x8000da1,"open_timeout_store",
                    *(param_1 + 0x5b0));
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: unable to convert string to int for /dev/%s\n",0x8000e4c,
                       "open_timeout_store",*(param_1 + 0x5b0));
        param_4 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.glink_pkt_rpdev_probe;
    iVar3 = *(iVar2 + 0x88);
    mutex_lock(iVar3 + 0xd8);
    *(iVar3 + 0x130) = iVar2;
    mutex_unlock(iVar3 + 0xd8);
    *(iVar2 + 0x98) = iVar3 + -0x418;
    complete_all(iVar3 + 0x108);
    return 0;
}


// ===== sym.glink_pkt_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002360 (size 8) =====

ulong sym.glink_pkt_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int *piVar1;
    ulong *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x2b0);
    piVar1 = iVar10 + 0x1b0;
    iVar7 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: for %s by %s:%d ref_cnt[%d]\n","glink_pkt_release",*(iVar10 + 0x228),
                   iVar7 + 0x7a8,*(iVar7 + 0x5d8),*piVar1);
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 < 2) {
        refcount_warn_saturate(piVar1,4);
    }
    if (*piVar1 == 1) {
        uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x1c0);
        if (*(iVar10 + 0x240) != 0) {
            kfree_skb(*(iVar10 + 0x240));
            *(iVar10 + 0x248) = 0;
            *(iVar10 + 0x250) = 0;
            *(iVar10 + 0x240) = 0;
        }
        puVar2 = iVar10 + 0x1c8;
        puVar8 = *(iVar10 + 0x1c8);
        while (puVar8 != puVar2) {
            iVar7 = skb_dequeue(puVar2);
            iVar9 = *(*(iVar10 + 0x1b8) + 0x3c8);
            if (*(iVar9 + 0x50) != '\0') {
                rpmsg_rx_done(iVar9,*(iVar7 + 0xd8));
                *(iVar7 + 0xd0) = 0;
                *(iVar7 + 0xd8) = 0;
            }
            kfree_skb(iVar7);
            puVar8 = *puVar2;
        }
        __wake_up(iVar10 + 0x1f8,1,1,0);
        *(iVar10 + 0x210) = 0;
        _raw_spin_unlock_irqrestore(iVar10 + 0x1c0,uVar6);
    }
    if ((*(iVar10 + 0x218) != 0) && (*(iVar10 + 0x215) != '\0')) {
        unregister_rpmsg_driver(iVar10 + 0x88);
        *(iVar10 + 0x218) = 0;
    }
    put_device(iVar10 + -0x390);
    return 0;
}


// ===== sym.glink_pkt_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002368 (size 8) =====

ulong sym.glink_pkt_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x2b0);
    iVar7 = __msecs_to_jiffies(*(iVar10 + 0x238) * 1000);
    puVar1 = iVar10 + 0x1b0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    iVar9 = iVar10 + -0x390;
    if (uVar3 == 0) {
        uVar8 = 2;
    }
    else {
        if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800391c;
        uVar8 = 1;
    }
    refcount_warn_saturate(puVar1,uVar8);
code_r0x0800391c:
    get_device(iVar9);
    iVar6 = sp_el0;
    iVar2 = iVar6 + 0x7a8;
    ipc_log_string(_segment.ehdr,"[%s]: begin for %s by %s:%d ref_cnt[%d]\n","glink_pkt_open",*(iVar10 + 0x228),
                   iVar2,*(iVar6 + 0x5d8),*(iVar10 + 0x1b0));
    if ((*(iVar10 + 0x218) == 0) && (*(iVar10 + 0x215) != '\0')) {
        __register_rpmsg_driver(iVar10 + 0x88,obj.__this_module);
        *(iVar10 + 0x218) = 1;
    }
    iVar7 = wait_for_completion_interruptible_timeout(iVar10 + 400,iVar7);
    if (iVar7 < 1) {
        if ((*(iVar10 + 0x218) != 0) && (*(iVar10 + 0x215) != '\0')) {
            unregister_rpmsg_driver(iVar10 + 0x88);
            *(iVar10 + 0x218) = 0;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar3 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 < 2) {
            refcount_warn_saturate(puVar1,4);
        }
        put_device(iVar9);
        ipc_log_string(_segment.ehdr,"[%s]: timeout for %s by %s:%d\n","glink_pkt_open",*(iVar10 + 0x228),iVar2,
                       *(iVar6 + 0x5d8));
        uVar8 = 0xffffff92;
    }
    else {
        *(param_2 + 0xd8) = iVar9;
        ipc_log_string(_segment.ehdr,"[%s]: end for %s by %s:%d ref_cnt[%d]\n","glink_pkt_open",*(iVar10 + 0x228),
                       iVar2,*(iVar6 + 0x5d8),*(iVar10 + 0x1b0));
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.glink_pkt_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002370 (size 8) =====

char * sym.glink_pkt_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    char *pcVar12;
    int64_t *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    iVar15 = *(param_1 + 0xd8);
    if ((iVar15 == 0) || (*(iVar15 + 0x540) == 1)) {
        iVar4 = ___ratelimit(obj.glink_pkt_read._rs,"glink_pkt_read");
        if (iVar4 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_read");
        }
        pcVar12 = 0x8000e4c;
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_read");
        pcVar5 = 0xffffffffffffffea;
    }
    else {
        iVar7 = iVar15 + 0x520;
        uVar11 = completion_done(iVar7);
        if ((uVar11 & 1) == 0) {
            iVar4 = ___ratelimit(obj.glink_pkt_read._rs.30,"glink_pkt_read");
            if (iVar4 != 0) {
                _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_read",*(iVar15 + 0x5b8));
            }
            pcVar12 = 0x8000e4c;
            ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_read",
                           *(iVar15 + 0x5b8));
            pcVar5 = 0xffffffffffffff9a;
        }
        else {
            iVar2 = sp_el0;
            pcVar12 = "glink_pkt_read";
            ipc_log_string(_segment.ehdr,"[%s]: begin for %s by %s:%d ref_cnt[%d], remaining[%d], count[%d]\n",
                           "glink_pkt_read",*(iVar15 + 0x5b8),iVar2 + 0x7a8,*(iVar2 + 0x5d8),*(iVar15 + 0x540),
                           *(iVar15 + 0x5e0),param_3);
            iVar9 = iVar15 + 0x550;
            uVar6 = _raw_spin_lock_irqsave(iVar9);
            piVar14 = *(iVar15 + 0x558);
            piVar1 = iVar15 + 0x558;
            if ((piVar14 == piVar1) && (*(iVar15 + 0x5d0) == 0)) {
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
                if ((*(param_1 + 0x41) >> 3 & 1) != 0) {
                    pcVar5 = 0xfffffffffffffff5;
                    goto code_r0x08002d04;
                }
                if ((*piVar1 == piVar14) && (uVar11 = completion_done(iVar7), (uVar11 & 1) != 0)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    iVar8 = iVar15 + 0x588;
                    pcVar12 = 0x1;
                    iVar10 = prepare_to_wait_event(iVar8,&uStack_90,1);
                    piVar13 = *(iVar15 + 0x558);
                    while ((piVar13 == piVar14 && (uVar11 = completion_done(iVar7), (uVar11 & 1) != 0))) {
                        if (iVar10 != 0) {
                            if (iVar10 == 0) goto code_r0x08002fd0;
                            pcVar5 = 0xfffffffffffffe00;
                            goto code_r0x08002d04;
                        }
                        schedule();
                        pcVar12 = 0x1;
                        iVar10 = prepare_to_wait_event(iVar8,&uStack_90,1);
                        piVar13 = *piVar1;
                    }
                    finish_wait(iVar8,&uStack_90);
                }
code_r0x08002fd0:
                uVar11 = completion_done(iVar7);
                if ((uVar11 & 1) == 0) {
                    pcVar5 = 0xffffffffffffff9a;
                    goto code_r0x08002d04;
                }
                uVar6 = _raw_spin_lock_irqsave(iVar9);
            }
            piVar14 = iVar15 + 0x5d0;
            if (*(iVar15 + 0x5d0) == 0) {
                iVar7 = skb_dequeue(piVar1);
                *piVar14 = iVar7;
                if (iVar7 == 0) {
                    _raw_spin_unlock_irqrestore(iVar9,uVar6);
                    pcVar5 = 0xfffffffffffffff2;
                    goto code_r0x08002d04;
                }
                *(iVar15 + 0x5d8) = *(iVar7 + 0xd8);
                *(iVar15 + 0x5e0) = *(iVar7 + 0x70);
            }
            _raw_spin_unlock_irqrestore(iVar9,uVar6);
            if (*(iVar15 + 0x5e0) <= param_3) {
                param_3 = *(iVar15 + 0x5e0);
            }
            iVar4 = param_3;
            iVar7 = iVar4;
            if (0x7fffffff00000000 < param_3 << 0x20) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8003084);
                (*pcVar3)();
            }
            auVar16 = __check_object_size(*(iVar15 + 0x5d8),iVar7,1);
            iVar8 = sym._copy_to_user(param_2,auVar16,iVar7);
            if (iVar8 != 0) {
                iVar4 = -0xe;
            }
            uVar6 = _raw_spin_lock_irqsave(iVar9);
            iVar8 = *(iVar15 + 0x5e0) - iVar7;
            *(iVar15 + 0x5d8) = *(iVar15 + 0x5d8) + iVar7;
            *(iVar15 + 0x5e0) = iVar8;
            if ((*(iVar15 + 0x5a4) == '\0') || (iVar8 == 0)) {
                iVar7 = *piVar14;
                *(iVar15 + 0x5d8) = 0;
                *(iVar15 + 0x5e0) = 0;
                *piVar14 = 0;
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
                if (iVar7 != 0) {
                    iVar9 = *(*(iVar15 + 0x548) + 0x3c8);
                    if (*(iVar9 + 0x50) != '\0') {
                        rpmsg_rx_done(iVar9,*(iVar7 + 0xd8));
                        *(iVar7 + 0xd0) = 0;
                        *(iVar7 + 0xd8) = 0;
                    }
                    kfree_skb(iVar7);
                }
            }
            else {
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
            }
            pcVar12 = "glink_pkt_read";
            ipc_log_string(_segment.ehdr,"[%s]: end for %s by %s:%d ret[%d], remaining[%d]\n","glink_pkt_read",
                           *(iVar15 + 0x5b8),iVar2 + 0x7a8,*(iVar2 + 0x5d8),iVar4,*(iVar15 + 0x5e0));
            pcVar5 = iVar4;
        }
    }
code_r0x08002d04:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_68) {
        auVar16 = __stack_chk_fail(pcVar5);
        *extraout_x18 = 0x800308c;
        iVar15 = *(auVar16._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*(iVar15 + 0x540) == 1)) {
            iVar4 = ___ratelimit(obj.glink_pkt_write._rs,"glink_pkt_write");
            if (iVar4 != 0) {
                _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_write");
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_write");
            pcVar5 = 0xffffffffffffffea;
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: begin to %s buffer_size %zu\n","glink_pkt_write",*(iVar15 + 0x5b8),
                           pcVar12);
            pcVar5 = vmemdup_user(auVar16._8_8_,pcVar12);
            if (pcVar5 < 0xfffffffffffff001) {
                iVar4 = mutex_lock_interruptible(iVar15 + 0x4f0);
                if (iVar4 == 0) {
                    uVar11 = completion_done(iVar15 + 0x520);
                    if (((uVar11 & 1) == 0) || (*(iVar15 + 0x548) == 0)) {
                        iVar4 = ___ratelimit(obj.glink_pkt_write._rs.37,"glink_pkt_write");
                        if (iVar4 != 0) {
                            _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_write",*(iVar15 + 0x5b8));
                        }
                        ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_write",
                                       *(iVar15 + 0x5b8));
                        iVar4 = -0x66;
                    }
                    else if ((*(auVar16._0_8_ + 0x41) >> 3 & 1) == 0) {
                        iVar4 = rpmsg_send();
                    }
                    else {
                        iVar4 = rpmsg_trysend(*(*(iVar15 + 0x548) + 0x3c8),pcVar5,pcVar12 & 0xffffffff);
                    }
                    mutex_unlock(iVar15 + 0x4f0);
                }
                else {
                    iVar4 = -0x200;
                }
                kvfree(pcVar5);
                ipc_log_string(_segment.ehdr,"[%s]: finish to %s ret %d\n","glink_pkt_write",*(iVar15 + 0x5b8),iVar4
                              );
                pcVar5 = iVar4;
                if (-1 < iVar4) {
                    pcVar5 = pcVar12;
                }
            }
        }
        return pcVar5;
    }
    return pcVar5;
}


// ===== sym.glink_pkt_release_device.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002378 (size 8) =====

void sym.glink_pkt_release_device.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: for %s by %s:%d ref_cnt[%d]\n","glink_pkt_release_device",*(param_1 + 0x5b8)
                   ,iVar1 + 0x7a8,*(iVar1 + 0x5d8),*(param_1 + 0x540));
    ida_free(obj.glink_pkt_minor_ida,*(param_1 + 0x300) & 0xfffff);
    cdev_del(param_1 + 0x390);
    kfree(param_1);
    return;
}


// ===== sym.glink_pkt_rpdev_sigs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002380 (size 8) =====

ulong sym.glink_pkt_rpdev_sigs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x88);
    uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x138);
    *(iVar2 + 0x188) = 1;
    _raw_spin_unlock_irqrestore(iVar2 + 0x138,uVar1);
    __wake_up(iVar2 + 0x170,1,1,0);
    return 0;
}


// ===== sym.glink_pkt_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002388 (size 8) =====

int64_t sym.glink_pkt_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2,int *param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *puVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    int *piVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0xd8);
    uStack_48 = 0;
    uStack_40 = 0;
    if ((iVar10 == 0) || (*(iVar10 + 0x540) == 1)) {
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_ioctl");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_ioctl");
        iVar10 = -0x16;
        goto code_r0x0800381c;
    }
    iVar1 = iVar10 + 0x4f0;
    iVar5 = mutex_lock_interruptible(iVar1);
    if (iVar5 != 0) {
        iVar10 = -0x200;
        goto code_r0x0800381c;
    }
    uVar6 = completion_done(iVar10 + 0x520);
    if ((uVar6 & 1) == 0) {
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs.43,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_ioctl",*(iVar10 + 0x5b8));
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_ioctl",*(iVar10 + 0x5b8));
        mutex_unlock(iVar1);
        iVar10 = -0x66;
        goto code_r0x0800381c;
    }
    if (param_2 < 0x5416) {
        if (param_2 == 0xc010c301) {
            iVar8 = sym._copy_from_user(&uStack_48,param_3);
            iVar5 = -0xe;
            if (iVar8 == 0) {
                iVar5 = sym.glink_pkt_zerocopy_receive(iVar10,&uStack_48);
                iVar10 = sym._copy_to_user(param_3,noname_1,0x10);
                if (iVar10 != 0) {
                    iVar5 = -0xe;
                }
            }
        }
        else if (param_2 == 0xc010c302) {
            iVar8 = sym._copy_from_user(&uStack_48,param_3);
            if (iVar8 == 0) {
                iVar5 = sym.glink_pkt_zerocopy_done(iVar10,&uStack_48);
            }
            else {
code_r0x080037d4:
                iVar5 = -0xe;
            }
        }
        else {
            if (param_2 != 0x5415) goto code_r0x0800377c;
            uVar7 = _raw_spin_lock_irqsave(iVar10 + 0x550);
            *(iVar10 + 0x5a0) = 0;
            _raw_spin_unlock_irqrestore(iVar10 + 0x550,uVar7);
            iVar5 = rpmsg_get_signals(*(*(iVar10 + 0x548) + 0x3c8));
            if (-1 < iVar5) {
                puVar3 = sp_el0;
                uVar6 = (param_3 << 8) >> 8;
                if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (piVar9 = param_3, (*puVar3 >> 0x1a & 1) != 0)) {
                    piVar9 = param_3 & uVar6;
                }
                bVar4 = 0xfffffffffffffffb < piVar9;
                piVar9 = piVar9 + 1;
                uVar2 = 0;
                if (!bVar4 || piVar9 == NULL) {
                    uVar2 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar9 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar9,~uVar2) || CARRY8(piVar9 + ~uVar2,bVar4)) && piVar9 != uVar2 + !bVar4)
                goto code_r0x080037d4;
                if ((param_3 & uVar6 & 0xffffff8000000000) != 0) {
                    param_3 = NULL;
                }
                sym.uaccess_ttbr0_enable();
                *param_3 = iVar5;
                sym.uaccess_ttbr0_disable();
                iVar5 = 0;
            }
        }
    }
    else if (param_2 - 0x5416 < 3) {
        iVar5 = sym.glink_pkt_tiocmset(iVar10,param_2,param_3);
    }
    else if (param_2 == 0x4004c300) {
        iVar5 = 0;
    }
    else {
code_r0x0800377c:
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs.44,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: unrecognized ioctl command 0x%x\n",0x8000da1,"glink_pkt_ioctl",param_2);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: unrecognized ioctl command 0x%x\n",0x8000e4c,"glink_pkt_ioctl",param_2
                      );
        iVar5 = -0x203;
    }
    mutex_unlock(iVar1);
    iVar10 = iVar5;
code_r0x0800381c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar10;
    }
    __stack_chk_fail(iVar10);
    if ((*(extraout_x1 + 0x50) & 6) == 0) {
        *(extraout_x1 + 0x50) = *(extraout_x1 + 0x50) & 0xffffffffffffff9f | 0x10000000;
        *(extraout_x1 + 0x90) = obj.glink_pkt_vm_ops;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.glink_pkt_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002390 (size 8) =====

uint64_t sym.glink_pkt_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xd8);
    if ((iVar4 == 0) || (*(iVar4 + 0x540) == 1)) {
        iVar1 = ___ratelimit(obj.glink_pkt_write._rs,"glink_pkt_write");
        if (iVar1 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_write");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_write");
        uVar2 = 0xffffffffffffffea;
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: begin to %s buffer_size %zu\n","glink_pkt_write",*(iVar4 + 0x5b8),
                       param_3);
        uVar2 = vmemdup_user(param_2,param_3);
        if (uVar2 < 0xfffffffffffff001) {
            iVar1 = mutex_lock_interruptible(iVar4 + 0x4f0);
            if (iVar1 == 0) {
                uVar3 = completion_done(iVar4 + 0x520);
                if (((uVar3 & 1) == 0) || (*(iVar4 + 0x548) == 0)) {
                    iVar1 = ___ratelimit(obj.glink_pkt_write._rs.37,"glink_pkt_write");
                    if (iVar1 != 0) {
                        _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_write",*(iVar4 + 0x5b8));
                    }
                    ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_write",
                                   *(iVar4 + 0x5b8));
                    iVar1 = -0x66;
                }
                else if ((*(param_1 + 0x41) >> 3 & 1) == 0) {
                    iVar1 = rpmsg_send();
                }
                else {
                    iVar1 = rpmsg_trysend(*(*(iVar4 + 0x548) + 0x3c8),uVar2,param_3 & 0xffffffff);
                }
                mutex_unlock(iVar4 + 0x4f0);
            }
            else {
                iVar1 = -0x200;
            }
            kvfree(uVar2);
            ipc_log_string(_segment.ehdr,"[%s]: finish to %s ret %d\n","glink_pkt_write",*(iVar4 + 0x5b8),iVar1);
            uVar2 = iVar1;
            if (-1 < iVar1) {
                uVar2 = param_3;
            }
        }
    }
    return uVar2;
}


// ===== sym.name_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002398 (size 8) =====

int64_t sym.name_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x20,0x8000f72,*(param_1 + 0x5b8));
    return iVar1;
}


// ===== sym.open_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a0 (size 8) =====

int64_t sym.open_timeout_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x4f0);
    iVar1 = scnprintf(param_3,0x1000,0x8000c99,*(param_1 + 0x5c8));
    mutex_unlock(param_1 + 0x4f0);
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr @ 0x080023a8 (size 8) =====

ulong sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr(int64_t param_1,ulong param_2,uint param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x98);
    if (iVar4 == 0) {
        iVar1 = ___ratelimit(obj.glink_pkt_rpdev_copy_cb._rs,"glink_pkt_rpdev_copy_cb");
        if (iVar1 != 0) {
            _printk("%s[%s]: channel is in reset\n",0x8000da1,"glink_pkt_rpdev_copy_cb");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: channel is in reset\n",0x8000e4c,"glink_pkt_rpdev_copy_cb");
        uVar3 = 0xffffff9a;
    }
    else {
        iVar2 = __alloc_skb(param_3,0xa20,0,0xffffffff);
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            uVar3 = skb_put(iVar2,param_3);
            memcpy(uVar3,param_2,param_3);
            uVar3 = _raw_spin_lock_irqsave(iVar4 + 0x550);
            skb_queue_tail(iVar4 + 0x558,iVar2);
            _raw_spin_unlock_irqrestore(iVar4 + 0x550,uVar3);
            __wake_up(iVar4 + 0x588,1,1,0);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.glink_pkt_rpdev_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b0 (size 8) =====

void sym.glink_pkt_rpdev_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr;
    if (*(*(param_1 + 0x3c8) + 0x50) != '\0') {
        pcVar1 = sym.glink_pkt_rpdev_no_copy_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    (*pcVar1)();
    return;
}


// ===== sym.glink_pkt_rpdev_no_copy_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b8 (size 8) =====

ulong sym.glink_pkt_rpdev_no_copy_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,uint param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar1 = __alloc_skb(0,0xa20,0,0xffffffff);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 0xd0) = param_2;
        *(iVar1 + 0xd8) = param_2;
        *(iVar1 + 200) = 0;
        *(iVar1 + 0xcc) = param_3;
        skb_put(iVar1,param_3);
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x550);
        skb_queue_tail(iVar3 + 0x558,iVar1);
        _raw_spin_unlock_irqrestore(iVar3 + 0x550,uVar2);
        uVar2 = 1;
        __wake_up(iVar3 + 0x588,1,1,0);
    }
    return uVar2;
}


// ===== sym.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c0 (size 8) =====

uint64_t sym.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    char *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = *(param_1 + 0x300);
    iVar6 = of_get_next_child(uVar11,0);
    if (iVar6 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        do {
            iVar4 = iVar4 + 1;
            iVar6 = of_get_next_child(uVar11,iVar6);
        } while (iVar6 != 0);
    }
    _segment.ehdr = CONCAT44(*0x8000004,iVar4);
    uVar3 = alloc_chrdev_region(obj.glink_pkt_major,0,iVar4,"glinkpkt");
    if (uVar3 < 0) {
        uVar7 = uVar3;
        iVar4 = ___ratelimit(obj.glink_pkt_probe._rs,"glink_pkt_probe");
        if (iVar4 != 0) {
            _printk("%s[%s]: alloc_chrdev_region failed ret:%d\n",0x8000da1,"glink_pkt_probe",uVar7);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: alloc_chrdev_region failed ret:%d\n",0x8000e4c,"glink_pkt_probe",uVar7
                      );
    }
    else {
        uVar7 = __class_create(obj.__this_module,"glinkpkt",obj.glink_pkt_class);
        _segment.ehdr = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            iVar6 = of_get_next_child(*(param_1 + 0x300),0);
            if (iVar6 != 0) {
                do {
                    iVar8 = kmem_cache_alloc_trace(_of_get_next_child,0xdc0,0x5e8);
                    if (iVar8 != 0) {
                        uVar3 = ida_alloc_range(obj.glink_pkt_minor_ida,0,_segment.ehdr + -1,0xcc0);
                        if (uVar3 < 0) {
                            kfree(iVar8);
                        }
                        else {
                            iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-edge",iVar8 + 0x5c0);
                            pcVar12 = "qcom,glinkpkt-edge";
                            if (-1 < iVar4) {
                                iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-ch-name",iVar8 + 0x5b8);
                                pcVar12 = "qcom,glinkpkt-ch-name";
                                if (-1 < iVar4) {
                                    puVar1 = iVar8 + 0x5b0;
                                    iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-dev-name");
                                    pcVar12 = "qcom,glinkpkt-dev-name";
                                    if (-1 < iVar4) {
                                        iVar9 = of_find_property(iVar6,"qcom,glinkpkt-enable-ch-close",0);
                                        *(iVar8 + 0x5a5) = iVar9 != 0;
                                        iVar9 = of_find_property(iVar6,"qcom,glinkpkt-fragmented-read",0);
                                        uVar7 = _segment.ehdr;
                                        *(iVar8 + 0x5a4) = iVar9 != 0;
                                        ipc_log_string(uVar7,
                                                       "[%s]: Parsed %s:%s /dev/%s enable channel close:%d fragmented-read:%d\n"
                                                       ,"glink_pkt_parse_devicetree",*(iVar8 + 0x5c0),
                                                       *(iVar8 + 0x5b8),*(iVar8 + 0x5b0),*(iVar8 + 0x5a5));
                                        __mutex_init(iVar8 + 0x4f0,"&gpdev->lock",obj.glink_pkt_create_device.__key);
                                        *(iVar8 + 0x540) = 1;
                                        *(iVar8 + 0x520) = 0;
                                        __init_swait_queue_head
                                                  (iVar8 + 0x528,"&x->wait",obj.glink_pkt_create_device.__key);
                                        *(iVar8 + 0x5c8) = 0x78;
                                        *(iVar8 + 0x5a0) = 0;
                                        *(iVar8 + 0x550) = 0;
                                        *(iVar8 + 0x558) = iVar8 + 0x558;
                                        *(iVar8 + 0x560) = iVar8 + 0x558;
                                        *(iVar8 + 0x5d0) = 0;
                                        *(iVar8 + 0x5d8) = 0;
                                        *(iVar8 + 0x5e0) = 0;
                                        *(iVar8 + 0x570) = iVar8 + 0x570;
                                        *(iVar8 + 0x578) = iVar8 + 0x570;
                                        *(iVar8 + 0x568) = 0;
                                        *(iVar8 + 0x580) = 0;
                                        __init_waitqueue_head
                                                  (iVar8 + 0x588,"&gpdev->readq",obj.glink_pkt_create_device.__key);
                                        device_initialize(iVar8);
                                        *(iVar8 + 0x60) = param_1 + 0x10;
                                        uVar7 = _segment.ehdr;
                                        *(iVar8 + 0x98) = iVar8;
                                        *(iVar8 + 0x328) = obj.glink_pkt_device_groups;
                                        *(iVar8 + 800) = uVar7;
                                        cdev_init(iVar8 + 0x390,obj.glink_pkt_fops);
                                        uVar2 = _segment.ehdr;
                                        *(iVar8 + 0x3f0) = obj.__this_module;
                                        *(iVar8 + 0x300) = uVar2 & 0xfff00000 | uVar3;
                                        dev_set_name(iVar8,*(iVar8 + 0x5b0),uVar3);
                                        iVar4 = cdev_add(iVar8 + 0x390,*(iVar8 + 0x300),1);
                                        if (iVar4 == 0) {
                                            *(iVar8 + 0x330) =
                                                 sym.glink_pkt_release_device.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                            iVar4 = device_add(iVar8);
                                            if (iVar4 == 0) {
                                                iVar4 = device_create_file(iVar8,obj.dev_attr_open_timeout);
                                                if (iVar4 != 0) {
                                                    iVar4 = ___ratelimit(obj.glink_pkt_create_device._rs.17,
                                                                         "glink_pkt_create_device");
                                                    if (iVar4 != 0) {
                                                        _printk("%s[%s]: device_create_file failed for %s\n",0x8000da1
                                                                ,"glink_pkt_create_device",*puVar1);
                                                    }
                                                    ipc_log_string(_segment.ehdr,
                                                                   "%s[%s]: device_create_file failed for %s\n",
                                                                   0x8000e4c,"glink_pkt_create_device",*puVar1);
                                                }
                                                iVar9 = devm_kmalloc(iVar8,0x50,0xdc0);
                                                if (iVar9 != 0) {
                                                    strscpy(iVar9,*(iVar8 + 0x5b8),0x20);
                                                    iVar10 = devm_kasprintf(iVar8,0xcc0,"%s_%s","glink_pkt",
                                                                            *(iVar8 + 0x5b0));
                                                    if (iVar10 != 0) {
                                                        *(iVar8 + 0x418) = iVar10;
                                                        *(iVar8 + 0x4c8) = iVar9;
                                                        *(iVar8 + 0x4d0) =
                                                             
                                                            sym.glink_pkt_rpdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4e8) =
                                                             
                                                            sym.glink_pkt_rpdev_sigs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4d8) =
                                                             
                                                            sym.glink_pkt_rpdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4e0) =
                                                             
                                                            sym.glink_pkt_rpdev_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        __register_rpmsg_driver(iVar8 + 0x418,obj.__this_module);
                                                        goto code_r0x0800258c;
                                                    }
                                                }
                                                *(iVar8 + 0x5a8) = 1;
                                            }
                                            else {
                                                iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs.15,
                                                                     "glink_pkt_create_device");
                                                if (iVar5 != 0) {
                                                    _printk("%s[%s]: device_create failed for %s ret:%d\n",0x8000da1,
                                                            "glink_pkt_create_device",*puVar1,iVar4);
                                                }
                                                ipc_log_string(_segment.ehdr,
                                                               "%s[%s]: device_create failed for %s ret:%d\n",0x8000e4c
                                                               ,"glink_pkt_create_device",*puVar1,iVar4);
                                            }
                                            put_device(iVar8);
                                        }
                                        else {
                                            iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs.13,
                                                                 "glink_pkt_create_device");
                                            if (iVar5 != 0) {
                                                _printk("%s[%s]: cdev_add failed for %s ret:%d\n",0x8000da1,
                                                        "glink_pkt_create_device",*puVar1,iVar4);
                                            }
                                            ipc_log_string(_segment.ehdr,"%s[%s]: cdev_add failed for %s ret:%d\n",
                                                           0x8000e4c,"glink_pkt_create_device",*(iVar8 + 0x5b0),iVar4
                                                          );
                                            ida_free(obj.glink_pkt_minor_ida,*(iVar8 + 0x300) & 0xfffff);
                                            kfree(iVar8);
                                        }
                                        goto code_r0x0800258c;
                                    }
                                }
                            }
                            iVar5 = ___ratelimit(obj.glink_pkt_parse_devicetree._rs,"glink_pkt_parse_devicetree");
                            if (iVar5 != 0) {
                                _printk("%s[%s]: %s: missing key: %s\n",0x8000da1,"glink_pkt_parse_devicetree",
                                        "glink_pkt_parse_devicetree",pcVar12);
                            }
                            ipc_log_string(_segment.ehdr,"%s[%s]: %s: missing key: %s\n",0x8000e4c,
                                           "glink_pkt_parse_devicetree","glink_pkt_parse_devicetree",pcVar12);
                            iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs,"glink_pkt_create_device");
                            if (iVar5 != 0) {
                                _printk("%s[%s]: failed to parse dt ret:%d\n",0x8000da1,"glink_pkt_create_device",
                                        iVar4);
                            }
                            ipc_log_string(_segment.ehdr,"%s[%s]: failed to parse dt ret:%d\n",0x8000e4c,
                                           "glink_pkt_create_device",iVar4);
                            ida_free(obj.glink_pkt_minor_ida,*(iVar8 + 0x300) & 0xfffff);
                            kfree(iVar8);
                        }
                    }
code_r0x0800258c:
                    iVar6 = of_get_next_child(*(param_1 + 0x300),iVar6);
                } while (iVar6 != 0);
            }
            ipc_log_string(_segment.ehdr,"[%s]: G-Link Packet Port Driver Initialized\n","glink_pkt_probe");
            uVar7 = 0;
        }
        else {
            iVar4 = ___ratelimit(obj.glink_pkt_probe._rs.6,"glink_pkt_probe");
            if (iVar4 != 0) {
                _printk("%s[%s]: class_create failed ret:%d\n",0x8000da1,"glink_pkt_probe",uVar7 & 0xffffffff);
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: class_create failed ret:%d\n",0x8000e4c,"glink_pkt_probe",
                           uVar7 & 0xffffffff);
            class_destroy(_segment.ehdr);
            unregister_chrdev_region(_segment.ehdr >> 0x14,_segment.ehdr & 0xffffffff);
        }
    }
    return uVar7 & 0xffffffff;
}


// ===== sym.glink_pkt_probe @ 0x080023c8 (size 2020) =====

uint64_t sym.glink_pkt_probe(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong uVar11;
    char *pcVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = *(arg1 + 0x300);
    iVar6 = of_get_next_child(uVar11,0);
    if (iVar6 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 0;
        do {
            iVar4 = iVar4 + 1;
            iVar6 = of_get_next_child(uVar11,iVar6);
        } while (iVar6 != 0);
    }
    _segment.ehdr = CONCAT44(*0x8000004,iVar4);
    uVar3 = alloc_chrdev_region(obj.glink_pkt_major,0,iVar4,"glinkpkt");
    if (uVar3 < 0) {
        uVar7 = uVar3;
        iVar4 = ___ratelimit(obj.glink_pkt_probe._rs,"glink_pkt_probe");
        if (iVar4 != 0) {
            _printk("%s[%s]: alloc_chrdev_region failed ret:%d\n",0x8000da1,"glink_pkt_probe",uVar7);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: alloc_chrdev_region failed ret:%d\n",0x8000e4c,"glink_pkt_probe",uVar7
                      );
    }
    else {
        uVar7 = __class_create(obj.__this_module,"glinkpkt",obj.glink_pkt_class);
        _segment.ehdr = uVar7;
        if (uVar7 < 0xfffffffffffff001) {
            iVar6 = of_get_next_child(*(arg1 + 0x300),0);
            if (iVar6 != 0) {
                do {
                    iVar8 = kmem_cache_alloc_trace(_of_get_next_child,0xdc0,0x5e8);
                    if (iVar8 != 0) {
                        uVar3 = ida_alloc_range(obj.glink_pkt_minor_ida,0,_segment.ehdr + -1,0xcc0);
                        if (uVar3 < 0) {
                            kfree(iVar8);
                        }
                        else {
                            iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-edge",iVar8 + 0x5c0);
                            pcVar12 = "qcom,glinkpkt-edge";
                            if (-1 < iVar4) {
                                iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-ch-name",iVar8 + 0x5b8);
                                pcVar12 = "qcom,glinkpkt-ch-name";
                                if (-1 < iVar4) {
                                    puVar1 = iVar8 + 0x5b0;
                                    iVar4 = of_property_read_string(iVar6,"qcom,glinkpkt-dev-name");
                                    pcVar12 = "qcom,glinkpkt-dev-name";
                                    if (-1 < iVar4) {
                                        iVar9 = of_find_property(iVar6,"qcom,glinkpkt-enable-ch-close",0);
                                        *(iVar8 + 0x5a5) = iVar9 != 0;
                                        iVar9 = of_find_property(iVar6,"qcom,glinkpkt-fragmented-read",0);
                                        uVar7 = _segment.ehdr;
                                        *(iVar8 + 0x5a4) = iVar9 != 0;
                                        ipc_log_string(uVar7,
                                                       "[%s]: Parsed %s:%s /dev/%s enable channel close:%d fragmented-read:%d\n"
                                                       ,"glink_pkt_parse_devicetree",*(iVar8 + 0x5c0),
                                                       *(iVar8 + 0x5b8),*(iVar8 + 0x5b0),*(iVar8 + 0x5a5));
                                        __mutex_init(iVar8 + 0x4f0,"&gpdev->lock",obj.glink_pkt_create_device.__key);
                                        *(iVar8 + 0x540) = 1;
                                        *(iVar8 + 0x520) = 0;
                                        __init_swait_queue_head
                                                  (iVar8 + 0x528,"&x->wait",obj.glink_pkt_create_device.__key);
                                        *(iVar8 + 0x5c8) = 0x78;
                                        *(iVar8 + 0x5a0) = 0;
                                        *(iVar8 + 0x550) = 0;
                                        *(iVar8 + 0x558) = iVar8 + 0x558;
                                        *(iVar8 + 0x560) = iVar8 + 0x558;
                                        *(iVar8 + 0x5d0) = 0;
                                        *(iVar8 + 0x5d8) = 0;
                                        *(iVar8 + 0x5e0) = 0;
                                        *(iVar8 + 0x570) = iVar8 + 0x570;
                                        *(iVar8 + 0x578) = iVar8 + 0x570;
                                        *(iVar8 + 0x568) = 0;
                                        *(iVar8 + 0x580) = 0;
                                        __init_waitqueue_head
                                                  (iVar8 + 0x588,"&gpdev->readq",obj.glink_pkt_create_device.__key);
                                        device_initialize(iVar8);
                                        *(iVar8 + 0x60) = arg1 + 0x10;
                                        uVar7 = _segment.ehdr;
                                        *(iVar8 + 0x98) = iVar8;
                                        *(iVar8 + 0x328) = obj.glink_pkt_device_groups;
                                        *(iVar8 + 800) = uVar7;
                                        cdev_init(iVar8 + 0x390,obj.glink_pkt_fops);
                                        uVar2 = _segment.ehdr;
                                        *(iVar8 + 0x3f0) = obj.__this_module;
                                        *(iVar8 + 0x300) = uVar2 & 0xfff00000 | uVar3;
                                        dev_set_name(iVar8,*(iVar8 + 0x5b0),uVar3);
                                        iVar4 = cdev_add(iVar8 + 0x390,*(iVar8 + 0x300),1);
                                        if (iVar4 == 0) {
                                            *(iVar8 + 0x330) =
                                                 sym.glink_pkt_release_device.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                            iVar4 = device_add(iVar8);
                                            if (iVar4 == 0) {
                                                iVar4 = device_create_file(iVar8,obj.dev_attr_open_timeout);
                                                if (iVar4 != 0) {
                                                    iVar4 = ___ratelimit(obj.glink_pkt_create_device._rs.17,
                                                                         "glink_pkt_create_device");
                                                    if (iVar4 != 0) {
                                                        _printk("%s[%s]: device_create_file failed for %s\n",0x8000da1
                                                                ,"glink_pkt_create_device",*puVar1);
                                                    }
                                                    ipc_log_string(_segment.ehdr,
                                                                   "%s[%s]: device_create_file failed for %s\n",
                                                                   0x8000e4c,"glink_pkt_create_device",*puVar1);
                                                }
                                                iVar9 = devm_kmalloc(iVar8,0x50,0xdc0);
                                                if (iVar9 != 0) {
                                                    strscpy(iVar9,*(iVar8 + 0x5b8),0x20);
                                                    iVar10 = devm_kasprintf(iVar8,0xcc0,"%s_%s","glink_pkt",
                                                                            *(iVar8 + 0x5b0));
                                                    if (iVar10 != 0) {
                                                        *(iVar8 + 0x418) = iVar10;
                                                        *(iVar8 + 0x4c8) = iVar9;
                                                        *(iVar8 + 0x4d0) =
                                                             
                                                            sym.glink_pkt_rpdev_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4e8) =
                                                             
                                                            sym.glink_pkt_rpdev_sigs.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4d8) =
                                                             
                                                            sym.glink_pkt_rpdev_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        *(iVar8 + 0x4e0) =
                                                             
                                                            sym.glink_pkt_rpdev_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                                        ;
                                                        __register_rpmsg_driver(iVar8 + 0x418,obj.__this_module);
                                                        goto code_r0x0800258c;
                                                    }
                                                }
                                                *(iVar8 + 0x5a8) = 1;
                                            }
                                            else {
                                                iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs.15,
                                                                     "glink_pkt_create_device");
                                                if (iVar5 != 0) {
                                                    _printk("%s[%s]: device_create failed for %s ret:%d\n",0x8000da1,
                                                            "glink_pkt_create_device",*puVar1,iVar4);
                                                }
                                                ipc_log_string(_segment.ehdr,
                                                               "%s[%s]: device_create failed for %s ret:%d\n",0x8000e4c
                                                               ,"glink_pkt_create_device",*puVar1,iVar4);
                                            }
                                            put_device(iVar8);
                                        }
                                        else {
                                            iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs.13,
                                                                 "glink_pkt_create_device");
                                            if (iVar5 != 0) {
                                                _printk("%s[%s]: cdev_add failed for %s ret:%d\n",0x8000da1,
                                                        "glink_pkt_create_device",*puVar1,iVar4);
                                            }
                                            ipc_log_string(_segment.ehdr,"%s[%s]: cdev_add failed for %s ret:%d\n",
                                                           0x8000e4c,"glink_pkt_create_device",*(iVar8 + 0x5b0),iVar4
                                                          );
                                            ida_free(obj.glink_pkt_minor_ida,*(iVar8 + 0x300) & 0xfffff);
                                            kfree(iVar8);
                                        }
                                        goto code_r0x0800258c;
                                    }
                                }
                            }
                            iVar5 = ___ratelimit(obj.glink_pkt_parse_devicetree._rs,"glink_pkt_parse_devicetree");
                            if (iVar5 != 0) {
                                _printk("%s[%s]: %s: missing key: %s\n",0x8000da1,"glink_pkt_parse_devicetree",
                                        "glink_pkt_parse_devicetree",pcVar12);
                            }
                            ipc_log_string(_segment.ehdr,"%s[%s]: %s: missing key: %s\n",0x8000e4c,
                                           "glink_pkt_parse_devicetree","glink_pkt_parse_devicetree",pcVar12);
                            iVar5 = ___ratelimit(obj.glink_pkt_create_device._rs,"glink_pkt_create_device");
                            if (iVar5 != 0) {
                                _printk("%s[%s]: failed to parse dt ret:%d\n",0x8000da1,"glink_pkt_create_device",
                                        iVar4);
                            }
                            ipc_log_string(_segment.ehdr,"%s[%s]: failed to parse dt ret:%d\n",0x8000e4c,
                                           "glink_pkt_create_device",iVar4);
                            ida_free(obj.glink_pkt_minor_ida,*(iVar8 + 0x300) & 0xfffff);
                            kfree(iVar8);
                        }
                    }
code_r0x0800258c:
                    iVar6 = of_get_next_child(*(arg1 + 0x300),iVar6);
                } while (iVar6 != 0);
            }
            ipc_log_string(_segment.ehdr,"[%s]: G-Link Packet Port Driver Initialized\n","glink_pkt_probe");
            uVar7 = 0;
        }
        else {
            iVar4 = ___ratelimit(obj.glink_pkt_probe._rs.6,"glink_pkt_probe");
            if (iVar4 != 0) {
                _printk("%s[%s]: class_create failed ret:%d\n",0x8000da1,"glink_pkt_probe",uVar7 & 0xffffffff);
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: class_create failed ret:%d\n",0x8000e4c,"glink_pkt_probe",
                           uVar7 & 0xffffffff);
            class_destroy(_segment.ehdr);
            unregister_chrdev_region(_segment.ehdr >> 0x14,_segment.ehdr & 0xffffffff);
        }
    }
    return uVar7 & 0xffffffff;
}


// ===== sym.glink_pkt_release_device @ 0x08002bac (size 136) =====

void sym.glink_pkt_release_device(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: for %s by %s:%d ref_cnt[%d]\n","glink_pkt_release_device",*(arg1 + 0x5b8),
                   iVar1 + 0x7a8,*(iVar1 + 0x5d8),*(arg1 + 0x540));
    ida_free(obj.glink_pkt_minor_ida,*(arg1 + 0x300) & 0xfffff);
    cdev_del(arg1 + 0x390);
    kfree(arg1);
    return;
}


// ===== sym.name_show @ 0x08002c38 (size 64) =====

int64_t sym.name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x20,0x8000f72,*(arg1 + 0x5b8));
    return iVar1;
}


// ===== sym.glink_pkt_read @ 0x08002c78 (size 1052) =====

char * sym.glink_pkt_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    char *pcVar12;
    int64_t *piVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    iVar15 = *(arg1 + 0xd8);
    if ((iVar15 == 0) || (*(iVar15 + 0x540) == 1)) {
        iVar4 = ___ratelimit(obj.glink_pkt_read._rs,"glink_pkt_read");
        if (iVar4 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_read");
        }
        pcVar12 = 0x8000e4c;
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_read");
        pcVar5 = 0xffffffffffffffea;
    }
    else {
        iVar7 = iVar15 + 0x520;
        uVar11 = completion_done(iVar7);
        if ((uVar11 & 1) == 0) {
            iVar4 = ___ratelimit(obj.glink_pkt_read._rs.30,"glink_pkt_read");
            if (iVar4 != 0) {
                _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_read",*(iVar15 + 0x5b8));
            }
            pcVar12 = 0x8000e4c;
            ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_read",
                           *(iVar15 + 0x5b8));
            pcVar5 = 0xffffffffffffff9a;
        }
        else {
            iVar2 = sp_el0;
            pcVar12 = "glink_pkt_read";
            ipc_log_string(_segment.ehdr,"[%s]: begin for %s by %s:%d ref_cnt[%d], remaining[%d], count[%d]\n",
                           "glink_pkt_read",*(iVar15 + 0x5b8),iVar2 + 0x7a8,*(iVar2 + 0x5d8),*(iVar15 + 0x540),
                           *(iVar15 + 0x5e0),arg3);
            iVar9 = iVar15 + 0x550;
            uVar6 = _raw_spin_lock_irqsave(iVar9);
            piVar14 = *(iVar15 + 0x558);
            piVar1 = iVar15 + 0x558;
            if ((piVar14 == piVar1) && (*(iVar15 + 0x5d0) == 0)) {
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
                if ((*(arg1 + 0x41) >> 3 & 1) != 0) {
                    pcVar5 = 0xfffffffffffffff5;
                    goto code_r0x08002d04;
                }
                if ((*piVar1 == piVar14) && (uVar11 = completion_done(iVar7), (uVar11 & 1) != 0)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    iVar8 = iVar15 + 0x588;
                    pcVar12 = 0x1;
                    iVar10 = prepare_to_wait_event(iVar8,&stack0xffffffffffffff70,1);
                    piVar13 = *(iVar15 + 0x558);
                    while ((piVar13 == piVar14 && (uVar11 = completion_done(iVar7), (uVar11 & 1) != 0))) {
                        if (iVar10 != 0) {
                            if (iVar10 == 0) goto code_r0x08002fd0;
                            pcVar5 = 0xfffffffffffffe00;
                            goto code_r0x08002d04;
                        }
                        schedule();
                        pcVar12 = 0x1;
                        iVar10 = prepare_to_wait_event(iVar8,&stack0xffffffffffffff70,1);
                        piVar13 = *piVar1;
                    }
                    finish_wait(iVar8,&stack0xffffffffffffff70);
                }
code_r0x08002fd0:
                uVar11 = completion_done(iVar7);
                if ((uVar11 & 1) == 0) {
                    pcVar5 = 0xffffffffffffff9a;
                    goto code_r0x08002d04;
                }
                uVar6 = _raw_spin_lock_irqsave(iVar9);
            }
            piVar14 = iVar15 + 0x5d0;
            if (*(iVar15 + 0x5d0) == 0) {
                iVar7 = skb_dequeue(piVar1);
                *piVar14 = iVar7;
                if (iVar7 == 0) {
                    _raw_spin_unlock_irqrestore(iVar9,uVar6);
                    pcVar5 = 0xfffffffffffffff2;
                    goto code_r0x08002d04;
                }
                *(iVar15 + 0x5d8) = *(iVar7 + 0xd8);
                *(iVar15 + 0x5e0) = *(iVar7 + 0x70);
            }
            _raw_spin_unlock_irqrestore(iVar9,uVar6);
            if (*(iVar15 + 0x5e0) <= arg3) {
                arg3 = *(iVar15 + 0x5e0);
            }
            iVar4 = arg3;
            iVar7 = iVar4;
            if (0x7fffffff00000000 < arg3 << 0x20) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8003084);
                (*pcVar3)();
            }
            auVar16 = __check_object_size(*(iVar15 + 0x5d8),iVar7,1);
            iVar8 = sym._copy_to_user(arg2,auVar16,iVar7);
            if (iVar8 != 0) {
                iVar4 = -0xe;
            }
            uVar6 = _raw_spin_lock_irqsave(iVar9);
            iVar8 = *(iVar15 + 0x5e0) - iVar7;
            *(iVar15 + 0x5d8) = *(iVar15 + 0x5d8) + iVar7;
            *(iVar15 + 0x5e0) = iVar8;
            if ((*(iVar15 + 0x5a4) == '\0') || (iVar8 == 0)) {
                iVar7 = *piVar14;
                *(iVar15 + 0x5d8) = 0;
                *(iVar15 + 0x5e0) = 0;
                *piVar14 = 0;
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
                if (iVar7 != 0) {
                    iVar9 = *(*(iVar15 + 0x548) + 0x3c8);
                    if (*(iVar9 + 0x50) != '\0') {
                        rpmsg_rx_done(iVar9,*(iVar7 + 0xd8));
                        *(iVar7 + 0xd0) = 0;
                        *(iVar7 + 0xd8) = 0;
                    }
                    kfree_skb(iVar7);
                }
            }
            else {
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
            }
            pcVar12 = "glink_pkt_read";
            ipc_log_string(_segment.ehdr,"[%s]: end for %s by %s:%d ret[%d], remaining[%d]\n","glink_pkt_read",
                           *(iVar15 + 0x5b8),iVar2 + 0x7a8,*(iVar2 + 0x5d8),iVar4,*(iVar15 + 0x5e0));
            pcVar5 = iVar4;
        }
    }
code_r0x08002d04:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_68) {
        auVar16 = __stack_chk_fail(pcVar5);
        *extraout_x18 = 0x800308c;
        iVar15 = *(auVar16._0_8_ + 0xd8);
        if ((iVar15 == 0) || (*(iVar15 + 0x540) == 1)) {
            iVar4 = ___ratelimit(obj.glink_pkt_write._rs,"glink_pkt_write");
            if (iVar4 != 0) {
                _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_write");
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_write");
            pcVar5 = 0xffffffffffffffea;
        }
        else {
            ipc_log_string(_segment.ehdr,"[%s]: begin to %s buffer_size %zu\n","glink_pkt_write",*(iVar15 + 0x5b8),
                           pcVar12);
            pcVar5 = vmemdup_user(auVar16._8_8_,pcVar12);
            if (pcVar5 < 0xfffffffffffff001) {
                iVar4 = mutex_lock_interruptible(iVar15 + 0x4f0);
                if (iVar4 == 0) {
                    uVar11 = completion_done(iVar15 + 0x520);
                    if (((uVar11 & 1) == 0) || (*(iVar15 + 0x548) == 0)) {
                        iVar4 = ___ratelimit(obj.glink_pkt_write._rs.37,"glink_pkt_write");
                        if (iVar4 != 0) {
                            _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_write",*(iVar15 + 0x5b8));
                        }
                        ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_write",
                                       *(iVar15 + 0x5b8));
                        iVar4 = -0x66;
                    }
                    else if ((*(auVar16._0_8_ + 0x41) >> 3 & 1) == 0) {
                        iVar4 = rpmsg_send();
                    }
                    else {
                        iVar4 = rpmsg_trysend(*(*(iVar15 + 0x548) + 0x3c8),pcVar5,pcVar12 & 0xffffffff);
                    }
                    mutex_unlock(iVar15 + 0x4f0);
                }
                else {
                    iVar4 = -0x200;
                }
                kvfree(pcVar5);
                ipc_log_string(_segment.ehdr,"[%s]: finish to %s ret %d\n","glink_pkt_write",*(iVar15 + 0x5b8),iVar4
                              );
                pcVar5 = iVar4;
                if (-1 < iVar4) {
                    pcVar5 = pcVar12;
                }
            }
        }
        return pcVar5;
    }
    return pcVar5;
}


// ===== sym.glink_pkt_write @ 0x08003094 (size 500) =====

uint64_t sym.glink_pkt_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd8);
    if ((iVar4 == 0) || (*(iVar4 + 0x540) == 1)) {
        iVar1 = ___ratelimit(obj.glink_pkt_write._rs,"glink_pkt_write");
        if (iVar1 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_write");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_write");
        uVar2 = 0xffffffffffffffea;
    }
    else {
        ipc_log_string(_segment.ehdr,"[%s]: begin to %s buffer_size %zu\n","glink_pkt_write",*(iVar4 + 0x5b8),arg3);
        uVar2 = vmemdup_user(arg2,arg3);
        if (uVar2 < 0xfffffffffffff001) {
            iVar1 = mutex_lock_interruptible(iVar4 + 0x4f0);
            if (iVar1 == 0) {
                uVar3 = completion_done(iVar4 + 0x520);
                if (((uVar3 & 1) == 0) || (*(iVar4 + 0x548) == 0)) {
                    iVar1 = ___ratelimit(obj.glink_pkt_write._rs.37,"glink_pkt_write");
                    if (iVar1 != 0) {
                        _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_write",*(iVar4 + 0x5b8));
                    }
                    ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_write",
                                   *(iVar4 + 0x5b8));
                    iVar1 = -0x66;
                }
                else if ((*(arg1 + 0x41) >> 3 & 1) == 0) {
                    iVar1 = rpmsg_send();
                }
                else {
                    iVar1 = rpmsg_trysend(*(*(iVar4 + 0x548) + 0x3c8),uVar2,arg3 & 0xffffffff);
                }
                mutex_unlock(iVar4 + 0x4f0);
            }
            else {
                iVar1 = -0x200;
            }
            kvfree(uVar2);
            ipc_log_string(_segment.ehdr,"[%s]: finish to %s ret %d\n","glink_pkt_write",*(iVar4 + 0x5b8),iVar1);
            uVar2 = iVar1;
            if (-1 < iVar1) {
                uVar2 = arg3;
            }
        }
    }
    return uVar2;
}


// ===== sym.glink_pkt_poll @ 0x0800328c (size 632) =====

uint32_t sym.glink_pkt_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xd8);
    if ((iVar8 == 0) || (*(iVar8 + 0x540) == 1)) {
        iVar2 = ___ratelimit(obj.glink_pkt_poll._rs,"glink_pkt_poll");
        if (iVar2 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_poll");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_poll");
        uVar3 = 8;
    }
    else {
        uVar4 = completion_done(iVar8 + 0x520);
        if ((uVar4 & 1) == 0) {
            iVar2 = ___ratelimit(obj.glink_pkt_poll._rs.39,"glink_pkt_poll");
            if (iVar2 != 0) {
                _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_poll",*(iVar8 + 0x5b8));
            }
            ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_poll",*(iVar8 + 0x5b8)
                          );
            uVar3 = 0x12;
        }
        else {
            if (((arg2 != 0) && (iVar8 + 0x588 != 0)) && (pcVar7 = *arg2, pcVar7 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar7,0x8000960);
                (*pcVar7)(arg1,iVar8 + 0x588,arg2);
            }
            iVar1 = iVar8 + 0x4f0;
            mutex_lock(iVar1);
            uVar4 = completion_done(iVar8 + 0x520);
            if (((uVar4 & 1) == 0) || (*(iVar8 + 0x548) == 0)) {
                iVar2 = ___ratelimit(obj.glink_pkt_poll._rs.40,"glink_pkt_poll");
                if (iVar2 != 0) {
                    _printk("%s[%s]: %s channel reset after wait\n",0x8000da1,"glink_pkt_poll",*(iVar8 + 0x5b8));
                }
                ipc_log_string(_segment.ehdr,"%s[%s]: %s channel reset after wait\n",0x8000e4c,"glink_pkt_poll",
                               *(iVar8 + 0x5b8));
                mutex_unlock(iVar1);
                uVar3 = 0x10;
            }
            else {
                uVar5 = _raw_spin_lock_irqsave(iVar8 + 0x550);
                if ((*(iVar8 + 0x558) != iVar8 + 0x558) || (uVar6 = 0, *(iVar8 + 0x5d0) != 0)) {
                    uVar6 = 0x41;
                }
                if (*(iVar8 + 0x5a0) != 0) {
                    uVar6 = uVar6 | 2;
                }
                _raw_spin_unlock_irqrestore(iVar8 + 0x550,uVar5);
                uVar3 = rpmsg_poll(*(*(iVar8 + 0x548) + 0x3c8),arg1,arg2);
                uVar3 = uVar3 | uVar6;
                mutex_unlock(iVar1);
            }
        }
    }
    return uVar3;
}


// ===== sym.glink_pkt_ioctl @ 0x08003508 (size 880) =====

int64_t sym.glink_pkt_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint32_t arg2_00;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t extraout_x1;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0xd8);
    uStack_48 = 0;
    uStack_40 = 0;
    if ((iVar10 == 0) || (*(iVar10 + 0x540) == 1)) {
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: invalid device handle\n",0x8000da1,"glink_pkt_ioctl");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: invalid device handle\n",0x8000e4c,"glink_pkt_ioctl");
        iVar10 = -0x16;
        goto code_r0x0800381c;
    }
    iVar1 = iVar10 + 0x4f0;
    arg2_00 = arg2;
    iVar5 = mutex_lock_interruptible(iVar1);
    if (iVar5 != 0) {
        iVar10 = -0x200;
        goto code_r0x0800381c;
    }
    uVar6 = completion_done(iVar10 + 0x520);
    if ((uVar6 & 1) == 0) {
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs.43,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: %s channel in reset\n",0x8000da1,"glink_pkt_ioctl",*(iVar10 + 0x5b8));
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: %s channel in reset\n",0x8000e4c,"glink_pkt_ioctl",*(iVar10 + 0x5b8));
        mutex_unlock(iVar1);
        iVar10 = -0x66;
        goto code_r0x0800381c;
    }
    if (arg2_00 < 0x5416) {
        if (arg2_00 == 0xc010c301) {
            iVar8 = sym._copy_from_user(&uStack_48,arg3);
            iVar5 = -0xe;
            if (iVar8 == 0) {
                iVar5 = sym.glink_pkt_zerocopy_receive(iVar10,&uStack_48);
                iVar10 = sym._copy_to_user(arg3,noname_1,0x10);
                if (iVar10 != 0) {
                    iVar5 = -0xe;
                }
            }
        }
        else if (arg2_00 == 0xc010c302) {
            iVar8 = sym._copy_from_user(&uStack_48,arg3);
            if (iVar8 == 0) {
                iVar5 = sym.glink_pkt_zerocopy_done(iVar10,&uStack_48);
            }
            else {
code_r0x080037d4:
                iVar5 = -0xe;
            }
        }
        else {
            if (arg2_00 != 0x5415) goto code_r0x0800377c;
            uVar7 = _raw_spin_lock_irqsave(iVar10 + 0x550);
            *(iVar10 + 0x5a0) = 0;
            _raw_spin_unlock_irqrestore(iVar10 + 0x550,uVar7);
            iVar5 = rpmsg_get_signals(*(*(iVar10 + 0x548) + 0x3c8));
            if (-1 < iVar5) {
                puVar3 = sp_el0;
                uVar6 = (arg3 << 8) >> 8;
                if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar3 >> 0x1a & 1) != 0)) {
                    uVar9 = arg3 & uVar6;
                }
                bVar4 = 0xfffffffffffffffb < uVar9;
                uVar9 = uVar9 + 4;
                uVar2 = 0;
                if (!bVar4 || uVar9 == 0) {
                    uVar2 = 0x7fffffffff;
                }
                if (bVar4) {
                    uVar9 = 0xffffffffffffffff;
                }
                if ((CARRY8(uVar9,~uVar2) || CARRY8(uVar9 + ~uVar2,bVar4)) && uVar9 != uVar2 + !bVar4)
                goto code_r0x080037d4;
                if ((arg3 & uVar6 & 0xffffff8000000000) != 0) {
                    arg3 = 0;
                }
                sym.uaccess_ttbr0_enable();
                *arg3 = iVar5;
                sym.uaccess_ttbr0_disable();
                iVar5 = 0;
            }
        }
    }
    else if (arg2_00 - 0x5416 < 3) {
        iVar5 = sym.glink_pkt_tiocmset(iVar10,arg2_00,arg3);
    }
    else if (arg2_00 == 0x4004c300) {
        iVar5 = 0;
    }
    else {
code_r0x0800377c:
        iVar5 = ___ratelimit(obj.glink_pkt_ioctl._rs.44,"glink_pkt_ioctl");
        if (iVar5 != 0) {
            _printk("%s[%s]: unrecognized ioctl command 0x%x\n",0x8000da1,"glink_pkt_ioctl",arg2 & 0xffffffff);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: unrecognized ioctl command 0x%x\n",0x8000e4c,"glink_pkt_ioctl",
                       arg2 & 0xffffffff);
        iVar5 = -0x203;
    }
    mutex_unlock(iVar1);
    iVar10 = iVar5;
code_r0x0800381c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar10;
    }
    __stack_chk_fail(iVar10);
    if ((*(extraout_x1 + 0x50) & 6) == 0) {
        *(extraout_x1 + 0x50) = *(extraout_x1 + 0x50) & 0xffffffffffffff9f | 0x10000000;
        *(extraout_x1 + 0x90) = obj.glink_pkt_vm_ops;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.glink_pkt_mmap @ 0x08003878 (size 64) =====

ulong sym.glink_pkt_mmap(int64_t arg1,int64_t arg2)

{
    if ((*(arg2 + 0x50) & 6) != 0) {
        return 0xffffffff;
    }
    *(arg2 + 0x50) = *(arg2 + 0x50) & 0xffffffffffffff9f | 0x10000000;
    *(arg2 + 0x90) = obj.glink_pkt_vm_ops;
    return 0;
}


// ===== sym.glink_pkt_open @ 0x080038b8 (size 548) =====

ulong sym.glink_pkt_open(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x2b0);
    iVar7 = __msecs_to_jiffies(*(iVar10 + 0x238) * 1000);
    puVar1 = iVar10 + 0x1b0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    iVar9 = iVar10 + -0x390;
    if (uVar3 == 0) {
        uVar8 = 2;
    }
    else {
        if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800391c;
        uVar8 = 1;
    }
    refcount_warn_saturate(puVar1,uVar8);
code_r0x0800391c:
    get_device(iVar9);
    iVar6 = sp_el0;
    iVar2 = iVar6 + 0x7a8;
    ipc_log_string(_segment.ehdr,"[%s]: begin for %s by %s:%d ref_cnt[%d]\n","glink_pkt_open",*(iVar10 + 0x228),
                   iVar2,*(iVar6 + 0x5d8),*(iVar10 + 0x1b0));
    if ((*(iVar10 + 0x218) == 0) && (*(iVar10 + 0x215) != '\0')) {
        __register_rpmsg_driver(iVar10 + 0x88,obj.__this_module);
        *(iVar10 + 0x218) = 1;
    }
    iVar7 = wait_for_completion_interruptible_timeout(iVar10 + 400,iVar7);
    if (iVar7 < 1) {
        if ((*(iVar10 + 0x218) != 0) && (*(iVar10 + 0x215) != '\0')) {
            unregister_rpmsg_driver(iVar10 + 0x88);
            *(iVar10 + 0x218) = 0;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar3 - 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 < 2) {
            refcount_warn_saturate(puVar1,4);
        }
        put_device(iVar9);
        ipc_log_string(_segment.ehdr,"[%s]: timeout for %s by %s:%d\n","glink_pkt_open",*(iVar10 + 0x228),iVar2,
                       *(iVar6 + 0x5d8));
        uVar8 = 0xffffff92;
    }
    else {
        *(arg2 + 0xd8) = iVar9;
        ipc_log_string(_segment.ehdr,"[%s]: end for %s by %s:%d ref_cnt[%d]\n","glink_pkt_open",*(iVar10 + 0x228),
                       iVar2,*(iVar6 + 0x5d8),*(iVar10 + 0x1b0));
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.glink_pkt_release @ 0x08003adc (size 420) =====

ulong sym.glink_pkt_release(int64_t arg1)

{
    int *piVar1;
    ulong *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x2b0);
    piVar1 = iVar10 + 0x1b0;
    iVar7 = sp_el0;
    ipc_log_string(_segment.ehdr,"[%s]: for %s by %s:%d ref_cnt[%d]\n","glink_pkt_release",*(iVar10 + 0x228),
                   iVar7 + 0x7a8,*(iVar7 + 0x5d8),*piVar1);
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 < 2) {
        refcount_warn_saturate(piVar1,4);
    }
    if (*piVar1 == 1) {
        uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x1c0);
        if (*(iVar10 + 0x240) != 0) {
            kfree_skb(*(iVar10 + 0x240));
            *(iVar10 + 0x248) = 0;
            *(iVar10 + 0x250) = 0;
            *(iVar10 + 0x240) = 0;
        }
        puVar2 = iVar10 + 0x1c8;
        puVar8 = *(iVar10 + 0x1c8);
        while (puVar8 != puVar2) {
            iVar7 = skb_dequeue(puVar2);
            iVar9 = *(*(iVar10 + 0x1b8) + 0x3c8);
            if (*(iVar9 + 0x50) != '\0') {
                rpmsg_rx_done(iVar9,*(iVar7 + 0xd8));
                *(iVar7 + 0xd0) = 0;
                *(iVar7 + 0xd8) = 0;
            }
            kfree_skb(iVar7);
            puVar8 = *puVar2;
        }
        __wake_up(iVar10 + 0x1f8,1,1,0);
        *(iVar10 + 0x210) = 0;
        _raw_spin_unlock_irqrestore(iVar10 + 0x1c0,uVar6);
    }
    if ((*(iVar10 + 0x218) != 0) && (*(iVar10 + 0x215) != '\0')) {
        unregister_rpmsg_driver(iVar10 + 0x88);
        *(iVar10 + 0x218) = 0;
    }
    put_device(iVar10 + -0x390);
    return 0;
}


// ===== sym._copy_to_user @ 0x08003c80 (size 312) =====

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
        if ((___class_create >> 0x18 & 1) == 0) {
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
        if ((___class_create >> 0x18 & 1) == 0) {
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


// ===== sym.uaccess_ttbr0_enable @ 0x08003df4 (size 112) =====

void sym.uaccess_ttbr0_enable(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((___class_create >> 0x18 & 1) == 0) {
        uVar2 = daif;
        if ((uVar2 & 0x80) == 0) {
            uVar3 = daif;
            daif = uVar3 | 0xc0;
        }
        iVar1 = sp_el0;
        uVar3 = ttbr1_el1;
        ttbr1_el1 = *(iVar1 + 8) & 0xffff000000000000 | uVar3 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar1 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar2;
    }
    return;
}


// ===== sym.uaccess_ttbr0_disable @ 0x08003e84 (size 100) =====

void sym.uaccess_ttbr0_disable(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((___class_create >> 0x18 & 1) == 0) {
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
    return;
}


// ===== sym.glink_pkt_tiocmset @ 0x08003f04 (size 472) =====

ulong sym.glink_pkt_tiocmset(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg3 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar8 = arg3, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar8 = arg3 & uVar3;
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
        return 0xfffffff2;
    }
    if ((arg3 & uVar3 & 0xffffff8000000000) != 0) {
        arg3 = 0;
    }
    if ((___class_create >> 0x18 & 1) == 0) {
        uVar3 = daif;
        if ((uVar3 & 0x80) == 0) {
            uVar8 = daif;
            daif = uVar8 | 0xc0;
        }
        uVar8 = ttbr1_el1;
        ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar8 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = puVar2[1];
        InstructionSynchronizationBarrier();
        daif = uVar3;
    }
    uVar6 = *arg3;
    if ((___class_create >> 0x18 & 1) == 0) {
        uVar3 = daif;
        if ((uVar3 & 0x80) == 0) {
            uVar8 = daif;
            daif = uVar8 | 0xc0;
        }
        uVar8 = ttbr1_el1;
        ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar8 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar3;
    }
    if (arg2 == 0x5418) {
        uVar7 = ~uVar6;
    }
    else {
        uVar7 = uVar6;
        if (arg2 != 0x5417) {
            if (arg2 == 0x5416) {
                uVar7 = 0;
                goto code_r0x08004058;
            }
            uVar7 = 0;
        }
        uVar6 = 0;
    }
code_r0x08004058:
    ipc_log_string(_segment.ehdr,"[%s]: set[0x%x] clear[0x%x]\n","glink_pkt_tiocmset",uVar6 & 0xc6,uVar7 & 0xc6);
    uVar5 = rpmsg_set_signals(*(*(arg1 + 0x548) + 0x3c8),uVar6 & 0xc6,uVar7 & 0xc6);
    return uVar5;
}


// ===== sym.glink_pkt_zerocopy_receive @ 0x08004118 (size 1024) =====

int sym.glink_pkt_zerocopy_receive(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int iVar8;
    ulong uVar9;
    uint64_t *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    ulong *in_x18;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar15 = *arg2;
    if (((uVar15 & 0xfff) != 0) || (*(*(*(arg1 + 0x548) + 0x3c8) + 0x50) == '\0')) {
        return -0x16;
    }
    iVar1 = arg1 + 0x550;
    *(arg2 + 8) = 0;
    uVar9 = _raw_spin_lock_irqsave(iVar1);
    piVar2 = arg1 + 0x570;
    piVar7 = *(arg1 + 0x570);
    if (*(arg1 + 0x570) != piVar2) {
        while (piVar7 != NULL) {
            if ((piVar7[7] <= uVar15) && (uVar15 <= piVar7[8] + piVar7[7])) {
                _raw_spin_unlock_irqrestore(iVar1,uVar9);
                return -0x16;
            }
            piVar13 = *piVar7;
            piVar7 = NULL;
            if (piVar13 != piVar2) {
                piVar7 = piVar13;
            }
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar9);
    iVar6 = sp_el0;
    down_read(*(iVar6 + 0x520) + 0x68);
    puVar10 = __find_vma(*(iVar6 + 0x520),uVar15);
    if (((puVar10 == NULL) || (uVar15 < *puVar10)) || (puVar10[0x12] != obj.glink_pkt_vm_ops)) {
        iVar8 = -0x16;
        goto code_r0x08004214;
    }
    uVar16 = puVar10[1];
    uVar9 = _raw_spin_lock_irqsave(iVar1);
    iVar11 = skb_dequeue(arg1 + 0x558);
    _raw_spin_unlock_irqrestore(iVar1,uVar9);
    if (iVar11 == 0) {
        iVar8 = -5;
        goto code_r0x08004214;
    }
    uVar17 = *(iVar11 + 0xd8);
    uVar5 = *(iVar11 + 0x70);
    if ((uVar17 & 0xfff) == 0) {
        iStack_68 = 0;
        uVar14 = uVar5;
code_r0x080042fc:
        uVar3 = uVar5 + uVar17;
        if ((uVar3 & 0xfff) == 0) {
            iVar12 = 0;
code_r0x08004344:
            if (uVar16 - uVar15 < uVar14) {
                iVar8 = -0x1c;
            }
            else {
                uVar16 = uVar14;
                if ((uVar14 & 0xfff) == 0) {
                    zap_vma_ptes(puVar10,uVar15,uVar16);
                    if (iStack_68 == 0) {
code_r0x080043d8:
                        if (0xfff < uVar14) {
                            uVar14 = uVar14 >> 0xc;
                            uVar17 = uVar17 + 0xfff & 0xfffffffffffff000;
                            do {
                                uVar9 = sym.glink_pkt_vaddr_to_page(uVar17);
                                Hint_Prefetch(uVar9,2,0,0);
                                iVar8 = vm_insert_page(puVar10,uVar15,uVar9);
                                if (iVar8 != 0) goto code_r0x080044bc;
                                uVar15 = uVar15 + 0x1000;
                                uVar17 = uVar17 + 0x1000;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                        if ((iVar12 == 0) ||
                           (iVar8 = vm_insert_page(puVar10,uVar15,
                                                   (((iVar12 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                                   0x200000000), iVar8 == 0)) {
                            *(arg2 + 8) = uVar5;
                            uVar9 = _raw_spin_lock_irqsave(iVar1);
                            *(iVar11 + 0x28) = iStack_68;
                            *(iVar11 + 0x30) = iVar12;
                            *(iVar11 + 0x38) = *arg2;
                            *(iVar11 + 0x40) = uVar16;
                            skb_queue_tail(piVar2,iVar11);
                            _raw_spin_unlock_irqrestore(iVar1,uVar9);
                            sym.mmap_read_unlock(*(iVar6 + 0x520));
                            return 0;
                        }
                    }
                    else {
                        iVar8 = vm_insert_page(puVar10,uVar15,
                                               (((iStack_68 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                               0x200000000);
                        if (iVar8 == 0) {
                            uVar15 = uVar15 + 0x1000;
                            goto code_r0x080043d8;
                        }
                    }
code_r0x080044bc:
                    zap_vma_ptes(puVar10,*arg2,uVar16);
                }
                else {
                    iVar8 = -0x16;
                }
            }
            if (iVar12 != 0) {
                free_pages(iVar12,0);
            }
        }
        else {
            iVar12 = get_zeroed_page(0xcc0);
            if (iVar12 != 0) {
                uVar4 = uVar3 & 0xfff;
                memcpy(iVar12,uVar3 & 0xfffffffffffff000,uVar4);
                uVar14 = (uVar14 - uVar4) + 0x1000;
                goto code_r0x08004344;
            }
            iVar8 = -0xc;
        }
        if (iStack_68 != 0) {
            free_pages(iStack_68,0);
        }
    }
    else {
        iStack_68 = get_zeroed_page(0xcc0);
        if (iStack_68 != 0) {
            uVar14 = uVar17 & 0xfff;
            memcpy(iStack_68 + uVar14,uVar17,0x1000 - uVar14);
            *(arg2 + 0xc) = uVar14;
            uVar14 = uVar5 + (uVar17 | 0xfffff000) + 0x1000;
            goto code_r0x080042fc;
        }
        iVar8 = -0xc;
    }
    uVar9 = _raw_spin_lock_irqsave(iVar1);
    skb_queue_head(arg1 + 0x558,iVar11);
    _raw_spin_unlock_irqrestore(iVar1,uVar9);
code_r0x08004214:
    up_read(*(iVar6 + 0x520) + 0x68);
    return iVar8;
}


// ===== sym.glink_pkt_zerocopy_done @ 0x08004558 (size 448) =====

ulong sym.glink_pkt_zerocopy_done(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *arg2;
    if (((uVar7 & 0xfff) == 0) && (*(*(*(arg1 + 0x548) + 0x3c8) + 0x50) != '\0')) {
        iVar2 = sp_el0;
        down_read(*(iVar2 + 0x520) + 0x68);
        puVar3 = __find_vma(*(iVar2 + 0x520),uVar7);
        if ((puVar3 == NULL) || ((uVar7 < *puVar3 || (puVar3[0x12] != obj.glink_pkt_vm_ops)))) {
            up_read(*(iVar2 + 0x520) + 0x68);
        }
        else {
            iVar1 = arg1 + 0x550;
            uVar4 = _raw_spin_lock_irqsave(iVar1);
            piVar5 = *(arg1 + 0x570);
            if ((piVar5 == arg1 + 0x570) || (piVar5 == NULL)) {
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                piVar8 = NULL;
                piVar5 = NULL;
            }
            else {
                do {
                    piVar6 = piVar5;
                    if (uVar7 == piVar6[7]) {
                        skb_unlink(piVar6);
                        piVar8 = piVar6;
                        goto code_r0x08004690;
                    }
                    piVar5 = NULL;
                    if (*piVar6 != arg1 + 0x570) {
                        piVar5 = *piVar6;
                    }
                } while (piVar5 != NULL);
                piVar8 = NULL;
code_r0x08004690:
                piVar5 = piVar6 + 5;
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                if ((piVar5 != NULL) && (piVar6[7] == uVar7)) {
                    zap_vma_ptes(puVar3,uVar7,piVar6[8]);
                }
            }
            up_read(*(iVar2 + 0x520) + 0x68);
            if (piVar8 != NULL) {
                rpmsg_rx_done(*(*(arg1 + 0x548) + 0x3c8),piVar8[0x1b]);
                if (piVar5[1] != 0) {
                    free_pages(piVar5[1],0);
                }
                if (*piVar5 != 0) {
                    free_pages(*piVar5,0);
                }
                piVar8[0x1a] = 0;
                piVar8[0x1b] = 0;
                kfree_skb(piVar8);
                return 0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym._copy_from_user @ 0x0800476c (size 364) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2)

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
        if ((___class_create >> 0x18 & 1) == 0) {
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
        if ((___class_create >> 0x18 & 1) == 0) {
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


// ===== sym.glink_pkt_vaddr_to_page @ 0x08004914 (size 92) =====

int64_t sym.glink_pkt_vaddr_to_page(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = is_vmalloc_addr();
    if ((uVar1 & 1) == 0) {
        iVar2 = (((arg1 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
    }
    else {
        iVar2 = vmalloc_to_page(arg1);
    }
    return iVar2;
}


// ===== sym.mmap_read_unlock @ 0x08004970 (size 52) =====

void sym.mmap_read_unlock(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    up_read(arg1 + 0x68);
    return;
}


// ===== sym.open_timeout_show @ 0x080049bc (size 108) =====

int64_t sym.open_timeout_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x4f0);
    iVar1 = scnprintf(arg2,0x1000,0x8000c99,*(arg1 + 0x5c8));
    mutex_unlock(arg1 + 0x4f0);
    return iVar1;
}


// ===== sym.open_timeout_store @ 0x08004a28 (size 276) =====

int64_t sym.open_timeout_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar2 = arg1 + 0x4f0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    mutex_lock(iVar2);
    iVar1 = kstrtoll(arg2,0,&uStack_40);
    if (iVar1 == 0) {
        *(arg1 + 0x5c8) = uStack_40;
        mutex_unlock(iVar2);
    }
    else {
        mutex_unlock(iVar2);
        iVar1 = ___ratelimit(obj.open_timeout_store._rs,"open_timeout_store");
        if (iVar1 != 0) {
            _printk("%s[%s]: unable to convert string to int for /dev/%s\n",0x8000da1,"open_timeout_store",
                    *(arg1 + 0x5b0));
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: unable to convert string to int for /dev/%s\n",0x8000e4c,
                       "open_timeout_store",*(arg1 + 0x5b0));
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.glink_pkt_rpdev_probe;
    iVar3 = *(iVar2 + 0x88);
    mutex_lock(iVar3 + 0xd8);
    *(iVar3 + 0x130) = iVar2;
    mutex_unlock(iVar3 + 0xd8);
    *(iVar2 + 0x98) = iVar3 + -0x418;
    complete_all(iVar3 + 0x108);
    return 0;
}


// ===== sym.glink_pkt_rpdev_probe @ 0x08004b3c (size 100) =====

ulong sym.glink_pkt_rpdev_probe(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x88);
    mutex_lock(iVar1 + 0xd8);
    *(iVar1 + 0x130) = arg1;
    mutex_unlock(iVar1 + 0xd8);
    *(arg1 + 0x98) = iVar1 + -0x418;
    complete_all(iVar1 + 0x108);
    return 0;
}


// ===== sym.glink_pkt_rpdev_remove @ 0x08004ba0 (size 108) =====

void sym.glink_pkt_rpdev_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x88);
    mutex_lock(iVar1 + 0xd8);
    *(iVar1 + 0x130) = 0;
    mutex_unlock(iVar1 + 0xd8);
    *(arg1 + 0x98) = 0;
    *(iVar1 + 0x108) = 0;
    __wake_up(iVar1 + 0x170,1,1,0);
    return;
}


// ===== sym.glink_pkt_rpdev_cb @ 0x08004c0c (size 68) =====

void sym.glink_pkt_rpdev_cb(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr;
    if (*(*(arg1 + 0x3c8) + 0x50) != '\0') {
        pcVar1 = sym.glink_pkt_rpdev_no_copy_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    (*pcVar1)();
    return;
}


// ===== sym.glink_pkt_rpdev_sigs @ 0x08004c50 (size 100) =====

ulong sym.glink_pkt_rpdev_sigs(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x88);
    uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x138);
    *(iVar2 + 0x188) = 1;
    _raw_spin_unlock_irqrestore(iVar2 + 0x138,uVar1);
    __wake_up(iVar2 + 0x170,1,1,0);
    return 0;
}


// ===== sym.glink_pkt_rpdev_no_copy_cb @ 0x08004cb4 (size 180) =====

ulong sym.glink_pkt_rpdev_no_copy_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar1 = __alloc_skb(0,0xa20,0,0xffffffff);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 0xd0) = arg2;
        *(iVar1 + 0xd8) = arg2;
        *(iVar1 + 200) = 0;
        *(iVar1 + 0xcc) = arg3;
        skb_put(iVar1,arg3 & 0xffffffff);
        uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x550);
        skb_queue_tail(iVar3 + 0x558,iVar1);
        _raw_spin_unlock_irqrestore(iVar3 + 0x550,uVar2);
        uVar2 = 1;
        __wake_up(iVar3 + 0x588,1,1,0);
    }
    return uVar2;
}


// ===== sym.glink_pkt_rpdev_copy_cb @ 0x08004d68 (size 284) =====

ulong sym.glink_pkt_rpdev_copy_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x98);
    if (iVar4 == 0) {
        iVar1 = ___ratelimit(obj.glink_pkt_rpdev_copy_cb._rs,"glink_pkt_rpdev_copy_cb");
        if (iVar1 != 0) {
            _printk("%s[%s]: channel is in reset\n",0x8000da1,"glink_pkt_rpdev_copy_cb");
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: channel is in reset\n",0x8000e4c,"glink_pkt_rpdev_copy_cb");
        uVar3 = 0xffffff9a;
    }
    else {
        iVar2 = __alloc_skb(arg3 & 0xffffffff,0xa20,0,0xffffffff);
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            uVar3 = skb_put(iVar2,arg3 & 0xffffffffU);
            memcpy(uVar3,arg2,arg3 & 0xffffffffU);
            uVar3 = _raw_spin_lock_irqsave(iVar4 + 0x550);
            skb_queue_tail(iVar4 + 0x558,iVar2);
            _raw_spin_unlock_irqrestore(iVar4 + 0x550,uVar3);
            __wake_up(iVar4 + 0x588,1,1,0);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x08004e84 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004ec8

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
    //switch table (4 cases) at 0x8000fc8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004edc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004ee4 (size 212) =====

int sym.init_module(void)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module)
    ;
    if (iVar1 == 0) {
        _segment.ehdr = ipc_log_context_create(2,"glink_pkt",0);
    }
    else {
        iVar2 = ___ratelimit(obj.glink_pkt_init._rs,"glink_pkt_init");
        if (iVar2 != 0) {
            _printk("%s[%s]: %s: glink_pkt register failed %d\n",0x8000da1,"glink_pkt_init","glink_pkt_init",iVar1);
        }
        ipc_log_string(_segment.ehdr,"%s[%s]: %s: glink_pkt register failed %d\n",0x8000e4c,"glink_pkt_init",
                       "glink_pkt_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08004fb8 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr >> 0x14,_segment.ehdr);
    platform_driver_unregister(reloc.glink_pkt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

