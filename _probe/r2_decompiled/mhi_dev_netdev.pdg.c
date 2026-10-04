// decompiled from mhi_dev_netdev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1016) =====

//WARNING: Switch with 1 destination removed at 0x080047a8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 < -0x2648401b1c1d210c) {
                if (arg1 == -0x66d421a09845f9f8) {
                    pcVar2 = sym.log_level_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
                }
                else {
                    if (arg1 != -0x595b1a7338843e49) goto code_r0x08004768;
                    pcVar2 = sym.mhi_netdev_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
                }
            }
            else if (arg1 == -0x2648401b1c1d210c) {
                pcVar2 = sym.mhi_netdev_probe.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
            else {
                if (arg1 != -0x1b5e9161dc0ce497) {
                    if (arg1 != -0xd7b8dfc0789efa7) goto code_r0x08004768;
                    pcVar2 = sym.__typeid__ZTSFvP6deviceym18dma_data_directionE_global_addr;
                    goto code_r0x080023c0;
                }
                pcVar2 = sym.mhi_netdev_ioctl.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
        }
        else if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8002488 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08004768;
            }
            if (arg1 == -0x4a8a706f20e1a6e) {
                pcVar2 = sym.mhi_netdev_xmit.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08004768;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.debugfs_attr_read.cfi_jt;
code_r0x080023c0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08004768;
            }
            if (arg1 == 0x18578bb917b39787) {
                pcVar2 = sym.mhi_netdev_setup.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08004768;
                pcVar2 = sym.debugfs_attr_write.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 < 0x2be902bf267845e7) {
            if (arg1 == 0x1e3d0ffe3d0499e9) {
                pcVar2 = sym.log_level_store.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
            else {
                if (arg1 != 0x290ee85c03586362) goto code_r0x08004768;
                pcVar2 = sym.mhi_netdev_poll.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            }
        }
        else if (arg1 == 0x2be902bf267845e7) {
            pcVar2 = sym.mhi_netdev_change_mtu.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else {
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x08004768;
            pcVar2 = sym.mhi_netdev_debugfs_stats_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        }
    }
    else if (arg1 < 0x6e9fb1c868c44dc4) {
        if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.mhi_netdev_alloc_thread.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        }
        else if (arg1 == 0x67f3a51ad5c16f72) {
            pcVar2 = sym.mhi_netdev_status_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        }
        else {
            if (arg1 != 0x6b141b54612cf75f) goto code_r0x08004768;
            pcVar2 = sym.mhi_netdev_debugfs_chain.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        }
    }
    else if (arg1 == 0x6e9fb1c868c44dc4) {
        pcVar2 = sym.mhi_netdev_remove.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
    }
    else {
        if (arg1 == 0x791a5468d96d0f95) {
            pcVar2 = sym.mhi_netdev_xfer_ul_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            goto code_r0x080023c0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004768;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004768:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80047bc);
    (*pcVar1)();
}


// ===== sym.mhi_netdev_status_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002400 (size 8) =====

void sym.mhi_netdev_status_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,int param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (param_2 == 1) {
        *in_x18 = unaff_x30;
        iVar3 = *(param_1 + 0xc0);
        uVar2 = *(iVar3 + 0x30);
        uVar1 = napi_schedule_prep(uVar2);
        if ((uVar1 & 1) != 0) {
            __napi_schedule(uVar2);
        }
        *(iVar3 + 0xb4) = 1;
    }
    return;
}


// ===== sym.mhi_netdev_debugfs_chain.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002408 (size 8) =====

ulong sym.mhi_netdev_debugfs_chain.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    *(param_1 + 0x50) = 0;
    if (*(param_1 + 8) != 0) {
        *(*(param_1 + 8) + 0x50) = 0;
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002410 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    mhi_driver_unregister(obj.mhi_netdev_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002418 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("mhi_netdev",0);
    __mhi_driver_register(obj.mhi_netdev_driver,obj.__this_module);
    return;
}


// ===== sym.log_level_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.log_level_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

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
        uVar1 = *(*(param_1 + 0x98) + 0x98);
        if (uVar1 < 5) {
            pcVar4 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar4 = "Mask all";
        }
        iVar2 = scnprintf(param_3,0x1000,"MHI network device IPC log level begins from: %s\n",pcVar4);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.mhi_netdev_change_mtu.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002428 (size 8) =====

ulong sym.mhi_netdev_change_mtu.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    if (param_2 >> 0x10 != 0) {
        return 0xffffffea;
    }
    *(param_1 + 0xd8) = param_2;
    return 0;
}


// ===== sym.__typeid__ZTSFvP6deviceym18dma_data_directionE_global_addr @ 0x08002430 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP6deviceym18dma_data_directionE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_netdev_unmap_page.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002438 (size 8) =====

void sym.mhi_netdev_unmap_page.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_unmap_page_attrs();
    return;
}


// ===== sym.mhi_netdev_xmit.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002440 (size 8) =====

uint sym.mhi_netdev_xmit.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    ulong uVar7;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(param_2 + 0xa00);
    uVar7 = *puVar8;
    if ((puVar8[0x14] != 0) && (*(puVar8 + 0x13) == 0)) {
        ipc_log_string(puVar8[0x14],"%s[D][%s] Entered\n",0x8000915,"mhi_netdev_xmit");
    }
    iVar4 = mhi_queue_skb(uVar7,1,param_1,*(param_1 + 0x70),2);
    if (iVar4 == 0) {
        uVar6 = 0;
        iVar5 = puVar8[0x14];
    }
    else {
        if ((puVar8[0x14] != 0) && (*(puVar8 + 0x13) == 0)) {
            ipc_log_string(puVar8[0x14],"%s[D][%s] Failed to queue with reason: %d\n",0x8000915,"mhi_netdev_xmit",0)
            ;
        }
        puVar1 = *(param_2 + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        uVar6 = 0x10;
        iVar5 = puVar8[0x14];
    }
    if ((iVar5 != 0) && (*(puVar8 + 0x13) == 0)) {
        ipc_log_string(iVar5,"%s[D][%s] Exited\n",0x8000915,"mhi_netdev_xmit");
    }
    return uVar6;
}


// ===== sym.mhi_netdev_xfer_ul_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002448 (size 8) =====

void sym.mhi_netdev_xfer_ul_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *param_2;
    iVar2 = *(*(param_1 + 0xc0) + 0x38);
    *(iVar2 + 0x130) = *(iVar2 + 0x130) + 1;
    *(iVar2 + 0x140) = *(iVar2 + 0x140) + *(iVar1 + 0x70);
    consume_skb();
    if ((*(*(iVar2 + 0x3c0) + 0xd0) & 1) != 0) {
        netif_tx_wake_queue();
    }
    return;
}


// ===== sym.mhi_netdev_xfer_dl_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002450 (size 8) =====

void sym.mhi_netdev_xfer_dl_cb.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ushort uVar6;
    ulong *in_x18;
    ulong *arg2;
    int64_t arg1;
    code *pcVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *param_2;
    arg1 = *(param_1 + 0xc0);
    pcVar7 = arg2[8];
    iVar11 = *(arg1 + 0x38);
    uVar4 = *(*(param_1 + 0x88) + 0x60);
    piVar10 = *(arg1 + 0x50);
    if (1 < (pcVar7 + -0x8002430 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0xf2847203f8761059,pcVar7,0x8000470);
    }
    (*pcVar7)(uVar4,arg2[2],arg2[3],2);
    if (*(arg2 + 4) != '\0') {
        iVar9 = *(arg1 + 0x40);
        puVar1 = arg2 + 6;
        piVar8 = *(iVar9 + 8);
        uVar5 = __list_add_valid(puVar1,piVar8,iVar9);
        if ((uVar5 & 1) != 0) {
            *(iVar9 + 8) = puVar1;
            arg2[6] = iVar9;
            arg2[7] = piVar8;
            *piVar8 = puVar1;
        }
    }
    if (*(param_2 + 0x14) == -0x6b) {
        uVar4 = arg2[5];
        uVar3 = *(arg1 + 0x24);
    }
    else {
        *(iVar11 + 0x128) = *(iVar11 + 0x128) + 1;
        *(iVar11 + 0x138) = *(iVar11 + 0x138) + param_2[1];
        if (piVar10 == NULL) {
            sym.mhi_netdev_push_skb(arg1,arg2,param_2);
            return;
        }
        iVar9 = __alloc_skb(0,0xa20,0,0xffffffff);
        uVar4 = arg2[5];
        if (iVar9 != 0) {
            skb_add_rx_frag(iVar9,0,uVar4,0,*(param_2 + 1),*(arg1 + 0x20));
            if (*piVar10 == 0) {
                *(iVar9 + 0x10) = iVar11;
                uVar2 = **arg2 & 0xf0;
                if (uVar2 == 0x60) {
                    uVar6 = 0xdd86;
                }
                else if (uVar2 == 0x40) {
                    uVar6 = 8;
                    if ((**arg2 & 0xf) < 5) {
                        uVar6 = 0xf900;
                    }
                }
                else {
                    uVar6 = 0xf900;
                }
                *(iVar9 + 0xb0) = uVar6;
                piVar8 = piVar10;
            }
            else {
                piVar8 = *(piVar10[1] + 0xd0) + *(piVar10[1] + 0xcc) + 8;
            }
            *piVar8 = iVar9;
            piVar10[1] = iVar9;
            return;
        }
        uVar3 = *(arg1 + 0x24);
    }
    __free_pages(uVar4,uVar3);
    return;
}


// ===== sym.mhi_netdev_remove.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002458 (size 8) =====

void sym.mhi_netdev_remove.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(param_1 + 0xc0);
    if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 2)) {
        ipc_log_string(piVar10[0x14],"%s[I][%s] Remove notification received\n",0x8000915,"mhi_netdev_remove");
    }
    if (piVar10[3] == '\0') {
        sysfs_remove_group(param_1 + 0x28,obj.mhi_netdev_group);
        kthread_stop(piVar10[0xb]);
        puVar1 = *(piVar10[7] + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        napi_disable(piVar10[6]);
        unregister_netdev(piVar10[7]);
        __netif_napi_del(piVar10[6]);
        synchronize_net();
        free_netdev(piVar10[7]);
        piVar10[7] = 0;
        if ((piVar10[0x12] != 0) && (piVar10[0x12] < 0xfffffffffffff001)) {
            debugfs_remove();
        }
        if (piVar10[2] != 0) {
            return;
        }
    }
    piVar7 = piVar10[8];
    if (piVar7 != *piVar7) {
        uVar9 = *(*(*piVar10 + 0x88) + 0x60);
        piVar8 = *piVar7;
        do {
            piVar7 = *piVar8;
            uVar6 = __list_del_entry_valid(piVar8);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar8;
                piVar3 = piVar8[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar8 = -0x2152ffffffffff00;
            piVar8[1] = -0x2152fffffffffede;
            dma_unmap_page_attrs(uVar9,piVar8[-4],piVar8[-3],2,0);
            __free_pages(piVar8[-1],*(piVar10 + 0x24));
            piVar8 = piVar7;
        } while (piVar10[8] != piVar7);
    }
    kfree(piVar7);
    piVar8 = piVar10[0x10];
    piVar7 = *piVar8;
    if (piVar8 != *piVar8) {
        do {
            piVar8 = *piVar7;
            uVar6 = __list_del_entry_valid(piVar7);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            __free_pages(piVar7[-1],*(piVar10 + 0x24));
            *(piVar10 + 0x7c) = *(piVar10 + 0x7c) + -1;
            piVar7 = piVar8;
        } while (piVar10[0x10] != piVar8);
    }
    kfree(piVar8);
    return;
}


// ===== sym.log_level_store.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.log_level_store.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,0,&uStack_2c);
    if (iVar1 < 0) {
        param_4 = 0xffffffffffffffea;
        goto code_r0x080034dc;
    }
    if (iVar5 == 0) {
        param_4 = 0xfffffffffffffffb;
        goto code_r0x080034dc;
    }
    *(iVar5 + 0x98) = uStack_2c;
    if (*(iVar5 + 0x18) == '\0') {
        iVar4 = *(iVar5 + 8);
        if (iVar4 != 0) goto code_r0x08003488;
    }
    else {
        iVar4 = *(iVar5 + 0x10);
code_r0x08003488:
        *(iVar4 + 0x98) = uStack_2c;
    }
    if ((*(iVar5 + 0xa0) != 0) && (*(iVar5 + 0x98) < 2)) {
        if (uStack_2c < 5) {
            pcVar3 = *(obj.mhi_log_level_str + uStack_2c * 8);
        }
        else {
            pcVar3 = "Mask all";
        }
        ipc_log_string(*(iVar5 + 0xa0),"%s[I][%s] MHI Network device IPC log level changed to: %s\n",0x8000915,
                       "log_level_store",pcVar3);
    }
code_r0x080034dc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_netdev_setup;
    *(iVar5 + 200) = obj.mhi_netdev_ops_ip;
    uVar2 = ether_setup();
    *(iVar5 + 0x220) = 0;
    *(iVar5 + 0xd6) = 0;
    *(iVar5 + 0x24d) = 0;
    *(iVar5 + 0x120) = 0x207;
    *(iVar5 + 0xc0) = *(iVar5 + 0xc0) & 0xffffeffd;
    *(iVar5 + 0x4b8) = 0x1d4c;
    return uVar2;
}


// ===== sym.mhi_netdev_alloc_thread.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002468 (size 8) =====

char * sym.mhi_netdev_alloc_thread.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t ***pppiVar9;
    int64_t ***pppiVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar11;
    int64_t ****ppppiVar12;
    int64_t ****ppppiVar13;
    ulong uVar14;
    int iVar15;
    ulong unaff_x30;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uVar11 = *(param_1 + 0x24);
    pppiStack_78 = &pppiStack_78;
    pppiStack_70 = &pppiStack_78;
    uVar3 = kthread_should_stop();
    if ((uVar3 & 1) == 0) {
        do {
            if (*(param_1 + 0x7c) <= *(param_1 + 0x78)) {
                iVar2 = 0;
                iVar15 = 0;
                do {
                    do {
                        uVar3 = kthread_should_stop();
                        if ((uVar3 & 1) != 0) goto code_r0x08003038;
                        uVar14 = tpidr_el1;
                        uVar3 = __alloc_pages(uVar14,0xe0cc0,uVar11,0,0);
                        pppiVar9 = pppiStack_78;
                        if (uVar3 != 0) {
                            uVar8 = (uVar3 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                            iVar7 = uVar8 + (0x1000L << (uVar11 & 0x3f));
                            *(iVar7 + -0x48) = uVar8;
                            *(iVar7 + -0x28) = 0;
                            *(iVar7 + -0x20) = uVar3;
                            ppppiVar12 = iVar7 + -0x18;
                            *(iVar7 + -0x30) = (iVar7 + -0x48) - uVar8;
                            uVar3 = __list_add_valid(ppppiVar12,&pppiStack_78,pppiStack_78);
                            if ((uVar3 & 1) != 0) {
                                pppiVar9[1] = ppppiVar12;
                                *ppppiVar12 = pppiVar9;
                                *(iVar7 + -0x10) = &pppiStack_78;
                                pppiStack_78 = ppppiVar12;
                            }
                            iVar2 = iVar2 + 1;
                        }
                        iVar15 = iVar15 + 1;
                    } while (iVar15 != 0x40);
                    _raw_spin_lock_bh(param_1 + 0x88);
                    pppiVar9 = *(param_1 + 0x80);
                    if (&pppiStack_78 != pppiStack_78) {
                        pppiVar10 = *pppiVar9;
                        pppiStack_78[1] = pppiVar9;
                        *pppiVar9 = pppiStack_78;
                        *pppiStack_70 = pppiVar10;
                        pppiVar10[1] = pppiStack_70;
                        pppiStack_78 = &pppiStack_78;
                        pppiStack_70 = &pppiStack_78;
                    }
                    *(param_1 + 0x7c) = *(param_1 + 0x7c) + iVar2;
                    _raw_spin_unlock_bh(param_1 + 0x88);
                    iVar2 = 0;
                    iVar15 = 0;
                } while (*(param_1 + 0x7c) <= *(param_1 + 0x78));
            }
            uVar14 = *(param_1 + 0x30);
            uVar3 = napi_schedule_prep(uVar14);
            if ((uVar3 & 1) != 0) {
                __napi_schedule(uVar14);
            }
            *(param_1 + 0xb4) = 1;
            uVar3 = kthread_should_stop();
            if (((uVar3 & 1) == 0) && (*(param_1 + 0x78) < *(param_1 + 0x7c))) {
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                init_wait_entry(&uStack_a0,0);
                while( true ) {
                    iVar7 = prepare_to_wait_event(param_1 + 0x60,&uStack_a0,1);
                    uVar3 = kthread_should_stop();
                    if (((uVar3 & 1) != 0) || (*(param_1 + 0x7c) <= *(param_1 + 0x78))) break;
                    if (iVar7 != 0) goto code_r0x080030f4;
                    schedule();
                }
                finish_wait(param_1 + 0x60,&uStack_a0);
            }
code_r0x080030f4:
            uVar3 = kthread_should_stop();
        } while ((uVar3 & 1) == 0);
    }
code_r0x08003038:
    if (&pppiStack_78 != pppiStack_78) {
        ppppiVar12 = pppiStack_78;
        do {
            ppppiVar13 = *ppppiVar12;
            uVar3 = __list_del_entry_valid(ppppiVar12);
            if ((uVar3 & 1) != 0) {
                pppiVar9 = *ppppiVar12;
                pppiVar10 = ppppiVar12[1];
                pppiVar9[1] = pppiVar10;
                *pppiVar10 = pppiVar9;
            }
            *ppppiVar12 = 0xdead000000000100;
            ppppiVar12[1] = 0xdead000000000122;
            __free_pages(ppppiVar12[-1],uVar11);
            ppppiVar12 = ppppiVar13;
        } while (&pppiStack_78 != ppppiVar13);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return NULL;
    }
    piVar4 = __stack_chk_fail();
    uVar14 = tpidr_el2;
    *extraout_x18 = 0x800329c;
    uStack_b8 = 0x800329c;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    iVar7 = *(*piVar4 + 0x98);
    if (iVar7 == 0) {
        iVar7 = *(*piVar4 + 0x28);
    }
    pcVar6 = "%s_%s";
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = uVar11;
    pcVar5 = snprintf(&uStack_f0,0x28,"%s_%s",iVar7,piVar4[5]);
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        pcVar5 = debugfs_create_dir(&uStack_f0);
        piVar4[0x12] = pcVar5;
        if ((pcVar5 != NULL) && (pcVar6 = pcVar5, pcVar5 < 0xfffffffffffff001)) {
            debugfs_create_file_unsafe("stats",0x124,pcVar5,piVar4,obj.debugfs_stats);
            pcVar6 = piVar4[0x12];
            pcVar5 = debugfs_create_file_unsafe("chain",0x124,pcVar6,piVar4,obj.debugfs_chain);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return pcVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.log_level_show;
    if (*(iVar7 + 0x98) == 0) {
        pcVar6 = 0xfffffffffffffffb;
    }
    else {
        uVar1 = *(*(iVar7 + 0x98) + 0x98);
        if (uVar1 < 5) {
            pcVar5 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar5 = "Mask all";
        }
        iVar2 = scnprintf(pcVar6,0x1000,"MHI network device IPC log level begins from: %s\n",pcVar5);
        pcVar6 = iVar2;
    }
    return pcVar6;
}


// ===== sym.mhi_netdev_debugfs_stats_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.mhi_netdev_debugfs_stats_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x80);
    seq_printf(param_1,"mru:%u order:%u pool_size:%d, bg_pool_size:%d bg_pool_limit:%d abuf:%u kbuf:%u rbuf:%u\n",
               *(iVar2 + 0x20),*(iVar2 + 0x24),*(iVar2 + 0x48),*(iVar2 + 0x7c),*(iVar2 + 0x78),*(iVar2 + 0xa8),
               *(iVar2 + 0xac),*(iVar2 + 0xb0));
    pcVar1 = "disabled";
    if (*(iVar2 + 0x50) != 0) {
        pcVar1 = "enabled";
    }
    seq_printf(param_1,"chaining SKBs:%s\n",pcVar1);
    return 0;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08002478 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x08002480 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debugfs_chain_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x08002488 (size 8) =====

void sym.debugfs_chain_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_netdev_debugfs_chain.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,"%llu\n"
                    );
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08002490 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08002498 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_netdev_debugfs_stats_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024a0 (size 8) =====

void sym.mhi_netdev_debugfs_stats_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mhi_netdev_debugfs_stats_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.mhi_netdev_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024a8 (size 8) =====

ulong sym.mhi_netdev_open.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + 0xa00);
    iVar5 = *piVar4;
    if ((piVar4[0x14] != 0) && (*(piVar4 + 0x13) < 2)) {
        ipc_log_string(piVar4[0x14],"%s[I][%s] Opened netdev interface\n",0x8000915,"mhi_netdev_open");
    }
    puVar1 = *(param_1 + 0x3c0) + 0xd0;
    if (*(iVar5 + 0x18) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return 0;
}


// ===== sym.mhi_netdev_probe.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024b0 (size 8) =====

uint64_t sym.mhi_netdev_probe.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    ulong uVar15;
    int64_t *piVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    piVar16 = param_1 + 0x28;
    iStack_68 = *(iVar12 + 0x5e0);
    puVar17 = *(param_2 + 0x20);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    piVar10 = devm_kmalloc(piVar16,0xb8,0xdc0);
    if (piVar10 == NULL) goto code_r0x080028c8;
    uVar11 = mhi_prepare_for_transfer(param_1,0);
    if (uVar11 != 0) {
        uVar11 = uVar11 & 0xffffffff;
        _printk(0x8000a8e,"mhi_netdev_probe",uVar11);
        if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
            ipc_log_string(piVar10[0x14],"%s[E][%s] Failed to start channels, ret: %d\n",0x8000915,"mhi_netdev_probe"
                           ,uVar11);
        }
        goto code_r0x080028cc;
    }
    *piVar10 = param_1;
    *(param_1 + 0xc0) = piVar10;
    uVar9 = *puVar17;
    *(piVar10 + 4) = uVar9;
    piVar14 = NULL;
    if (*(puVar17 + 6) != '\0') {
        piVar14 = piVar10;
    }
    piVar10[2] = piVar14;
    piVar14 = NULL;
    if (*(puVar17 + 5) != '\0') {
        piVar14 = piVar10;
    }
    uVar7 = 0x1f - LZCOUNT(uVar9 >> 0xc);
    if (uVar9 < 0x1000) {
        uVar7 = 0xffffffff;
    }
    piVar10[1] = piVar14;
    *(piVar10 + 0x24) = uVar7;
    piVar14 = _segment.ehdr;
    if (0x1000L << (uVar7 & 0x3f) < uVar9) {
        uVar11 = 0xffffffea;
        goto code_r0x080028cc;
    }
    if (*(puVar17 + 5) != '\0') {
        if ((_segment.ehdr == NULL) || (piVar16 = _segment.ehdr + 7, *piVar16 == 0)) {
            uVar11 = 0xffffffed;
            goto code_r0x080028cc;
        }
        _segment.ehdr[1] = piVar10;
        piVar10[7] = *piVar16;
        iVar12 = piVar14[6];
        piVar10[6] = iVar12;
        piVar10[0x14] = piVar14[0x14];
        iVar13 = piVar14[0x13];
        *(piVar10 + 3) = 1;
        *(piVar10 + 0x13) = iVar13;
        iVar13 = piVar14[10];
        piVar10[2] = piVar14;
        piVar10[10] = iVar13;
        piVar10[8] = piVar14[8];
        piVar10[0x10] = piVar14[0x10];
code_r0x08002618:
        uVar11 = napi_schedule_prep(iVar12);
        if ((uVar11 & 1) != 0) {
            __napi_schedule(iVar12);
        }
        uVar11 = 0;
        *(piVar10 + 0xb4) = 1;
        goto code_r0x080028cc;
    }
    *(piVar10 + 0x13) = 2;
    iVar8 = sysfs_create_group(piVar16,obj.mhi_netdev_group);
    if (iVar8 != 0) {
        _printk(0x8000758,"mhi_netdev_probe");
        if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
            ipc_log_string(piVar10[0x14],"%s[E][%s] Failed to create MHI netdev sysfs group\n",0x8000915,
                           "mhi_netdev_probe");
        }
    }
    if (puVar17[1] != '\0') {
        iVar12 = devm_kmalloc(piVar16,0x10,0xdc0);
        piVar10[10] = iVar12;
        if (iVar12 == 0) goto code_r0x080028c8;
    }
    iVar13 = *piVar10;
    piVar10[5] = *(puVar17 + 2);
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x10,"%s%%d");
    rtnl_lock();
    iVar12 = alloc_netdev_mqs(8,&uStack_78,2,sym.mhi_netdev_setup.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,1,1);
    piVar10[7] = iVar12;
    if (iVar12 == 0) {
        rtnl_unlock();
code_r0x080028c8:
        uVar11 = 0xfffffff4;
    }
    else {
        iVar1 = iVar13 + 0x28;
        *(iVar12 + 0xd8) = *(*(iVar13 + 0x10) + 0x280);
        *(piVar10[7] + 0x578) = iVar1;
        *(piVar10[7] + 0xa00) = piVar10;
        rtnl_unlock();
        iVar12 = devm_kmalloc(iVar1,0x1b0,0xdc0);
        piVar10[6] = iVar12;
        if (iVar12 == 0) {
            uVar11 = 0xfffffff4;
        }
        else {
            netif_napi_add(piVar10[7],iVar12,sym.mhi_netdev_poll.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,0x40);
            uVar9 = register_netdev(piVar10[7]);
            if (uVar9 == 0) {
                napi_enable(piVar10[6]);
                if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 2)) {
                    ipc_log_string(piVar10[0x14],"%s[I][%s] Exited\n",0x8000915,"mhi_netdev_enable_iface");
                }
                iVar8 = mhi_get_free_desc_count(param_1,2);
                uVar9 = 0x80000000 >> (LZCOUNT(iVar8) & 0x1f);
                iVar8 = uVar9 << (uVar9 < iVar8);
                *(piVar10 + 9) = iVar8 << 1;
                if (*(puVar17 + 6) != '\0') {
                    *(piVar10 + 9) = iVar8 << 2;
                }
                uVar9 = *(piVar10 + 0x24);
                iVar12 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar12 = 0x30;
                }
                iVar13 = *(*(*piVar10 + 0x88) + 0x60);
                piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xcc0,0x10);
                if (piVar14 != NULL) {
                    *piVar14 = piVar14;
                    piVar14[1] = piVar14;
                    if (0 < piVar10[9]) {
                        iVar8 = 0;
code_r0x08002818:
                        iVar12 = sym.mhi_netdev_alloc(iVar13,0xcc0,uVar9);
                        if (iVar12 != 0) goto code_r0x0800282c;
                        piVar16 = *piVar14;
                        while (piVar16 != piVar14) {
                            piVar10 = *piVar16;
                            uVar11 = __list_del_entry_valid(piVar16);
                            if ((uVar11 & 1) != 0) {
                                iVar12 = *piVar16;
                                piVar3 = piVar16[1];
                                *(iVar12 + 8) = piVar3;
                                *piVar3 = iVar12;
                            }
                            *piVar16 = -0x2152ffffffffff00;
                            piVar16[1] = -0x2152fffffffffede;
                            dma_unmap_page_attrs(iVar13,piVar16[-4],piVar16[-3],2,0);
                            __free_pages(piVar16[-1],uVar9);
                            piVar16 = piVar10;
                        }
                        kfree(piVar14);
                        goto code_r0x080028c8;
                    }
code_r0x08002920:
                    piVar10[8] = piVar14;
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    iVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xcc0,0x10);
                    piVar10[0x10] = iVar12;
                    if (iVar12 != 0) {
                        __init_waitqueue_head
                                  (piVar10 + 0xc,"&mhi_netdev->alloc_event",
                                   reloc.mhi_netdev_remove.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt);
                        iVar12 = piVar10[0x10];
                        *iVar12 = iVar12;
                        *(iVar12 + 8) = iVar12;
                        iVar4 = piVar10[9];
                        *(piVar10 + 0x11) = 0;
                        iVar8 = iVar4 + 3;
                        if (-1 < iVar4) {
                            iVar8 = iVar4;
                        }
                        *(piVar10 + 0xf) = iVar8 >> 2;
                        uVar11 = kthread_create_on_node
                                           (sym.mhi_netdev_alloc_thread.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,piVar10
                                            ,0xffffffff,piVar10[7]);
                        if (0xfffffffffffff000 < uVar11) {
                            piVar10[0xb] = uVar11;
                            goto code_r0x080028cc;
                        }
                        wake_up_process(uVar11);
                        iVar12 = *(param_1 + 0x98);
                        piVar10[0xb] = uVar11;
                        if (iVar12 == 0) {
                            iVar12 = *piVar16;
                        }
                        _segment.ehdr = piVar10;
                        snprintf(&uStack_a0,0x28,"%s_%s",iVar12,piVar10[5]);
                        iVar12 = ipc_log_context_create(100,&uStack_a0,0);
                        piVar10[0x14] = iVar12;
                        sym.mhi_netdev_create_debugfs(piVar10);
                        iVar12 = piVar10[6];
                        goto code_r0x08002618;
                    }
                }
                goto code_r0x080028c8;
            }
            uVar11 = uVar9;
            _printk(0x800099a,"mhi_netdev_enable_iface");
            if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
                ipc_log_string(piVar10[0x14],"%s[E][%s] Network device registration failed\n",0x8000915,
                               "mhi_netdev_enable_iface");
            }
            __netif_napi_del(piVar10[6]);
            synchronize_net();
        }
        free_netdev(piVar10[7]);
        piVar10[7] = 0;
    }
code_r0x080028cc:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar11 & 0xffffffff;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_netdev_remove;
    piVar16 = *(iVar12 + 0xc0);
    if ((piVar16[0x14] != 0) && (*(piVar16 + 0x13) < 2)) {
        ipc_log_string(piVar16[0x14],"%s[I][%s] Remove notification received\n",0x8000915,"mhi_netdev_remove");
    }
    if (piVar16[3] == '\0') {
        sysfs_remove_group(iVar12 + 0x28,obj.mhi_netdev_group);
        kthread_stop(piVar16[0xb]);
        puVar2 = *(piVar16[7] + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
                *puVar2 = *puVar2 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        napi_disable(piVar16[6]);
        unregister_netdev(piVar16[7]);
        __netif_napi_del(piVar16[6]);
        synchronize_net();
        free_netdev(piVar16[7]);
        uVar11 = piVar16[0x12];
        piVar16[7] = 0;
        if ((uVar11 != 0) && (uVar11 < 0xfffffffffffff001)) {
            uVar11 = debugfs_remove();
        }
        if (piVar16[2] != 0) {
            return uVar11;
        }
    }
    piVar10 = piVar16[8];
    if (piVar10 != *piVar10) {
        uVar15 = *(*(*piVar16 + 0x88) + 0x60);
        piVar14 = *piVar10;
        do {
            piVar10 = *piVar14;
            uVar11 = __list_del_entry_valid(piVar14);
            if ((uVar11 & 1) != 0) {
                iVar12 = *piVar14;
                piVar3 = piVar14[1];
                *(iVar12 + 8) = piVar3;
                *piVar3 = iVar12;
            }
            *piVar14 = -0x2152ffffffffff00;
            piVar14[1] = -0x2152fffffffffede;
            dma_unmap_page_attrs(uVar15,piVar14[-4],piVar14[-3],2,0);
            __free_pages(piVar14[-1],*(piVar16 + 0x24));
            piVar14 = piVar10;
        } while (piVar16[8] != piVar10);
    }
    kfree(piVar10);
    piVar14 = piVar16[0x10];
    piVar10 = *piVar14;
    if (piVar14 != *piVar14) {
        do {
            piVar14 = *piVar10;
            uVar11 = __list_del_entry_valid(piVar10);
            if ((uVar11 & 1) != 0) {
                iVar12 = *piVar10;
                piVar3 = piVar10[1];
                *(iVar12 + 8) = piVar3;
                *piVar3 = iVar12;
            }
            *piVar10 = -0x2152ffffffffff00;
            piVar10[1] = -0x2152fffffffffede;
            __free_pages(piVar10[-1],*(piVar16 + 0x24));
            *(piVar16 + 0x7c) = *(piVar16 + 0x7c) + -1;
            piVar10 = piVar14;
        } while (piVar16[0x10] != piVar14);
    }
    uVar11 = kfree(piVar14);
    return uVar11;
code_r0x0800282c:
    iVar1 = iVar12 + 0x30;
    *(iVar12 + 0x40) = sym.__typeid__ZTSFvP6deviceym18dma_data_directionE_global_addr;
    *(iVar12 + 0x20) = 1;
    iVar18 = *piVar14;
    uVar11 = __list_add_valid(iVar1,piVar14,iVar18);
    if ((uVar11 & 1) != 0) {
        *(iVar18 + 8) = iVar1;
        *(iVar12 + 0x30) = iVar18;
        *(iVar12 + 0x38) = piVar14;
        *piVar14 = iVar1;
    }
    iVar8 = iVar8 + 1;
    if (piVar10[9] <= iVar8) goto code_r0x08002920;
    goto code_r0x08002818;
}


// ===== sym.mhi_netdev_poll.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024b8 (size 8) =====

int sym.mhi_netdev_poll.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1,int param_2)

{
    int64_t arg2;
    int64_t *piVar1;
    int iVar2;
    ulong *in_x18;
    int64_t *arg1;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x30) + 0xa00);
    arg2 = *arg1;
    piVar1 = arg1[1];
    piVar3 = arg1[10];
    if ((arg1[0x14] != 0) && (arg1[0x13] == 0)) {
        ipc_log_string(arg1[0x14],"%s[D][%s] Enter: %d\n",0x8000915,"mhi_netdev_poll",param_2);
    }
    iVar2 = mhi_poll(arg2,param_2);
    if ((piVar3 != NULL) && (*piVar3 != 0)) {
        netif_receive_skb();
        *piVar3 = 0;
    }
    if (iVar2 < 0) {
        _printk(0x800059c,"mhi_netdev_poll",iVar2);
        if ((arg1[0x14] != 0) && (*(arg1 + 0x13) < 3)) {
            ipc_log_string(arg1[0x14],"%s[E][%s] Error polling ret: %d\n",0x8000915,"mhi_netdev_poll",iVar2);
        }
        napi_complete_done(param_1,0);
        iVar2 = 0;
        *(arg1 + 0xb4) = 0;
    }
    else {
        sym.mhi_netdev_queue(arg1,arg2);
        if (piVar1 != NULL) {
            sym.mhi_netdev_queue(arg1,*piVar1);
        }
        if (iVar2 < param_2) {
            napi_complete_done(param_1,0);
            *(arg1 + 0xb4) = 0;
        }
        if ((arg1[0x14] != 0) && (arg1[0x13] == 0)) {
            ipc_log_string(arg1[0x14],"%s[D][%s] Polled: %d\n",0x8000915,"mhi_netdev_poll",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.mhi_netdev_setup.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024c0 (size 8) =====

void sym.mhi_netdev_setup.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 200) = obj.mhi_netdev_ops_ip;
    ether_setup();
    *(param_1 + 0x220) = 0;
    *(param_1 + 0xd6) = 0;
    *(param_1 + 0x24d) = 0;
    *(param_1 + 0x120) = 0x207;
    *(param_1 + 0xc0) = *(param_1 + 0xc0) & 0xffffeffd;
    *(param_1 + 0x4b8) = 0x1d4c;
    return;
}


// ===== sym.no_llseek.cfi_jt @ 0x080024c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_netdev_ioctl.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt @ 0x080024d0 (size 8) =====

uint64_t sym.mhi_netdev_ioctl.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt
                   (uchar param_1 [16],int64_t param_2,int64_t param_3,ulong param_4,uint param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar7 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar1 = 0;
    iStack_38 = *(iVar2 + 0x5e0);
    switch(param_5) {
    case 0x89f3:
    case 0x89f7:
        iVar2 = sym._copy_to_user(*(param_3 + 0x10),param_1,4);
        uVar3 = 0;
        if (iVar2 != 0) {
            uVar3 = 0xfffffff2;
        }
        uVar1 = uVar3;
        break;
    case 0x89f4:
        uVar1 = 0xffffffea;
        break;
    case 0x89fd:
        puVar6 = *(param_2 + 0xa00);
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uVar5 = *puVar6;
        uVar1 = sym._copy_from_user(&uStack_50,*(param_3 + 0x10));
        if (uVar1 == 0) {
            auVar7 = extraout_q0;
            if (uStack_50 == 0x14) {
                iVar4 = *(puVar6 + 0x1c);
                if (uStack_50._4_4_ == 0) {
                    if (iVar4 == 0) {
                        if ((puVar6[0x14] == 0) || (*(puVar6 + 0x13) != 0)) {
                            iVar4 = 1;
                        }
                        else {
                            ipc_log_string(puVar6[0x14],"%s[D][%s] Disable MHI LPM\n",0x8000915,
                                           "mhi_netdev_ioctl_extended");
                            iVar4 = *(puVar6 + 0x1c) + 1;
                        }
                        *(puVar6 + 0x1c) = iVar4;
                        auVar7 = mhi_device_get(uVar5);
                    }
                }
                else if (iVar4 != 0) {
                    if ((puVar6[0x14] != 0) && (*(puVar6 + 0x13) == 0)) {
                        ipc_log_string(puVar6[0x14],"%s[D][%s] Enable MHI LPM\n",0x8000915,
                                       "mhi_netdev_ioctl_extended");
                        iVar4 = *(puVar6 + 0x1c);
                    }
                    *(puVar6 + 0x1c) = iVar4 + -1;
                    auVar7 = mhi_device_put(uVar5);
                }
            }
            else if (uStack_50 == 4) {
                auVar7 = strscpy(&uStack_50 | 4,puVar6[5],0x10);
            }
            else if (uStack_50 == 0) {
                uStack_50 = uStack_50 & 0xffffffff;
            }
            uVar1 = sym._copy_to_user(*(param_3 + 0x10),auVar7,0x18);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar7 = __stack_chk_fail(uVar1);
    if ((auVar7._8_8_ & 0xffff0000) != 0) {
        return 0xffffffea;
    }
    *(auVar7._0_8_ + 0xd8) = auVar7._8_4_;
    return 0;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x080024d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mhi_netdev_probe @ 0x080024e0 (size 1632) =====

uint64_t sym.mhi_netdev_probe(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    ulong uVar15;
    int64_t *piVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    piVar16 = arg1 + 0x28;
    iStack_68 = *(iVar12 + 0x5e0);
    puVar17 = *(arg2 + 0x20);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    piVar10 = devm_kmalloc(piVar16,0xb8,0xdc0);
    if (piVar10 == NULL) goto code_r0x080028c8;
    uVar11 = mhi_prepare_for_transfer(arg1,0);
    if (uVar11 != 0) {
        uVar11 = uVar11 & 0xffffffff;
        _printk(0x8000a8e,"mhi_netdev_probe",uVar11);
        if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
            ipc_log_string(piVar10[0x14],"%s[E][%s] Failed to start channels, ret: %d\n",0x8000915,"mhi_netdev_probe"
                           ,uVar11);
        }
        goto code_r0x080028cc;
    }
    *piVar10 = arg1;
    *(arg1 + 0xc0) = piVar10;
    uVar9 = *puVar17;
    *(piVar10 + 4) = uVar9;
    piVar14 = NULL;
    if (*(puVar17 + 6) != '\0') {
        piVar14 = piVar10;
    }
    piVar10[2] = piVar14;
    piVar14 = NULL;
    if (*(puVar17 + 5) != '\0') {
        piVar14 = piVar10;
    }
    uVar7 = 0x1f - LZCOUNT(uVar9 >> 0xc);
    if (uVar9 < 0x1000) {
        uVar7 = 0xffffffff;
    }
    piVar10[1] = piVar14;
    *(piVar10 + 0x24) = uVar7;
    piVar14 = _segment.ehdr;
    if (0x1000L << (uVar7 & 0x3f) < uVar9) {
        uVar11 = 0xffffffea;
        goto code_r0x080028cc;
    }
    if (*(puVar17 + 5) != '\0') {
        if ((_segment.ehdr == NULL) || (piVar16 = _segment.ehdr + 7, *piVar16 == 0)) {
            uVar11 = 0xffffffed;
            goto code_r0x080028cc;
        }
        _segment.ehdr[1] = piVar10;
        piVar10[7] = *piVar16;
        iVar12 = piVar14[6];
        piVar10[6] = iVar12;
        piVar10[0x14] = piVar14[0x14];
        iVar13 = piVar14[0x13];
        *(piVar10 + 3) = 1;
        *(piVar10 + 0x13) = iVar13;
        iVar13 = piVar14[10];
        piVar10[2] = piVar14;
        piVar10[10] = iVar13;
        piVar10[8] = piVar14[8];
        piVar10[0x10] = piVar14[0x10];
code_r0x08002618:
        uVar11 = napi_schedule_prep(iVar12);
        if ((uVar11 & 1) != 0) {
            __napi_schedule(iVar12);
        }
        uVar11 = 0;
        *(piVar10 + 0xb4) = 1;
        goto code_r0x080028cc;
    }
    *(piVar10 + 0x13) = 2;
    iVar8 = sysfs_create_group(piVar16,obj.mhi_netdev_group);
    if (iVar8 != 0) {
        _printk(0x8000758,"mhi_netdev_probe");
        if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
            ipc_log_string(piVar10[0x14],"%s[E][%s] Failed to create MHI netdev sysfs group\n",0x8000915,
                           "mhi_netdev_probe");
        }
    }
    if (puVar17[1] != '\0') {
        iVar12 = devm_kmalloc(piVar16,0x10,0xdc0);
        piVar10[10] = iVar12;
        if (iVar12 == 0) goto code_r0x080028c8;
    }
    iVar13 = *piVar10;
    piVar10[5] = *(puVar17 + 2);
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x10,"%s%%d");
    rtnl_lock();
    iVar12 = alloc_netdev_mqs(8,&uStack_78,2,sym.mhi_netdev_setup.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,1,1);
    piVar10[7] = iVar12;
    if (iVar12 == 0) {
        rtnl_unlock();
code_r0x080028c8:
        uVar11 = 0xfffffff4;
    }
    else {
        iVar1 = iVar13 + 0x28;
        *(iVar12 + 0xd8) = *(*(iVar13 + 0x10) + 0x280);
        *(piVar10[7] + 0x578) = iVar1;
        *(piVar10[7] + 0xa00) = piVar10;
        rtnl_unlock();
        iVar12 = devm_kmalloc(iVar1,0x1b0,0xdc0);
        piVar10[6] = iVar12;
        if (iVar12 == 0) {
            uVar11 = 0xfffffff4;
        }
        else {
            netif_napi_add(piVar10[7],iVar12,sym.mhi_netdev_poll.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,0x40);
            uVar9 = register_netdev(piVar10[7]);
            if (uVar9 == 0) {
                napi_enable(piVar10[6]);
                if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 2)) {
                    ipc_log_string(piVar10[0x14],"%s[I][%s] Exited\n",0x8000915,"mhi_netdev_enable_iface");
                }
                iVar8 = mhi_get_free_desc_count(arg1,2);
                uVar9 = 0x80000000 >> (LZCOUNT(iVar8) & 0x1f);
                iVar8 = uVar9 << (uVar9 < iVar8);
                *(piVar10 + 9) = iVar8 << 1;
                if (*(puVar17 + 6) != '\0') {
                    *(piVar10 + 9) = iVar8 << 2;
                }
                uVar9 = *(piVar10 + 0x24);
                iVar12 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar12 = 0x30;
                }
                iVar13 = *(*(*piVar10 + 0x88) + 0x60);
                piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xcc0,0x10);
                if (piVar14 != NULL) {
                    *piVar14 = piVar14;
                    piVar14[1] = piVar14;
                    if (0 < piVar10[9]) {
                        iVar8 = 0;
code_r0x08002818:
                        iVar12 = sym.mhi_netdev_alloc(iVar13,0xcc0,uVar9);
                        if (iVar12 != 0) goto code_r0x0800282c;
                        piVar16 = *piVar14;
                        while (piVar16 != piVar14) {
                            piVar10 = *piVar16;
                            uVar11 = __list_del_entry_valid(piVar16);
                            if ((uVar11 & 1) != 0) {
                                iVar12 = *piVar16;
                                piVar3 = piVar16[1];
                                *(iVar12 + 8) = piVar3;
                                *piVar3 = iVar12;
                            }
                            *piVar16 = -0x2152ffffffffff00;
                            piVar16[1] = -0x2152fffffffffede;
                            dma_unmap_page_attrs(iVar13,piVar16[-4],piVar16[-3],2,0);
                            __free_pages(piVar16[-1],uVar9);
                            piVar16 = piVar10;
                        }
                        kfree(piVar14);
                        goto code_r0x080028c8;
                    }
code_r0x08002920:
                    piVar10[8] = piVar14;
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    iVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xcc0,0x10);
                    piVar10[0x10] = iVar12;
                    if (iVar12 != 0) {
                        __init_waitqueue_head
                                  (piVar10 + 0xc,"&mhi_netdev->alloc_event",
                                   reloc.mhi_netdev_remove.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt);
                        iVar12 = piVar10[0x10];
                        *iVar12 = iVar12;
                        *(iVar12 + 8) = iVar12;
                        iVar4 = piVar10[9];
                        *(piVar10 + 0x11) = 0;
                        iVar8 = iVar4 + 3;
                        if (-1 < iVar4) {
                            iVar8 = iVar4;
                        }
                        *(piVar10 + 0xf) = iVar8 >> 2;
                        uVar11 = kthread_create_on_node
                                           (sym.mhi_netdev_alloc_thread.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,piVar10
                                            ,0xffffffff,piVar10[7]);
                        if (0xfffffffffffff000 < uVar11) {
                            piVar10[0xb] = uVar11;
                            goto code_r0x080028cc;
                        }
                        wake_up_process(uVar11);
                        iVar12 = *(arg1 + 0x98);
                        piVar10[0xb] = uVar11;
                        if (iVar12 == 0) {
                            iVar12 = *piVar16;
                        }
                        _segment.ehdr = piVar10;
                        snprintf(&uStack_a0,0x28,"%s_%s",iVar12,piVar10[5]);
                        iVar12 = ipc_log_context_create(100,&uStack_a0,0);
                        piVar10[0x14] = iVar12;
                        sym.mhi_netdev_create_debugfs(piVar10);
                        iVar12 = piVar10[6];
                        goto code_r0x08002618;
                    }
                }
                goto code_r0x080028c8;
            }
            uVar11 = uVar9;
            _printk(0x800099a,"mhi_netdev_enable_iface");
            if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 3)) {
                ipc_log_string(piVar10[0x14],"%s[E][%s] Network device registration failed\n",0x8000915,
                               "mhi_netdev_enable_iface");
            }
            __netif_napi_del(piVar10[6]);
            synchronize_net();
        }
        free_netdev(piVar10[7]);
        piVar10[7] = 0;
    }
code_r0x080028cc:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar11 & 0xffffffff;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_netdev_remove;
    piVar16 = *(iVar12 + 0xc0);
    if ((piVar16[0x14] != 0) && (*(piVar16 + 0x13) < 2)) {
        ipc_log_string(piVar16[0x14],"%s[I][%s] Remove notification received\n",0x8000915,"mhi_netdev_remove");
    }
    if (piVar16[3] == '\0') {
        sysfs_remove_group(iVar12 + 0x28,obj.mhi_netdev_group);
        kthread_stop(piVar16[0xb]);
        puVar2 = *(piVar16[7] + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
                *puVar2 = *puVar2 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        napi_disable(piVar16[6]);
        unregister_netdev(piVar16[7]);
        __netif_napi_del(piVar16[6]);
        synchronize_net();
        free_netdev(piVar16[7]);
        uVar11 = piVar16[0x12];
        piVar16[7] = 0;
        if ((uVar11 != 0) && (uVar11 < 0xfffffffffffff001)) {
            uVar11 = debugfs_remove();
        }
        if (piVar16[2] != 0) {
            return uVar11;
        }
    }
    piVar10 = piVar16[8];
    if (piVar10 != *piVar10) {
        uVar15 = *(*(*piVar16 + 0x88) + 0x60);
        piVar14 = *piVar10;
        do {
            piVar10 = *piVar14;
            uVar11 = __list_del_entry_valid(piVar14);
            if ((uVar11 & 1) != 0) {
                iVar12 = *piVar14;
                piVar3 = piVar14[1];
                *(iVar12 + 8) = piVar3;
                *piVar3 = iVar12;
            }
            *piVar14 = -0x2152ffffffffff00;
            piVar14[1] = -0x2152fffffffffede;
            dma_unmap_page_attrs(uVar15,piVar14[-4],piVar14[-3],2,0);
            __free_pages(piVar14[-1],*(piVar16 + 0x24));
            piVar14 = piVar10;
        } while (piVar16[8] != piVar10);
    }
    kfree(piVar10);
    piVar14 = piVar16[0x10];
    piVar10 = *piVar14;
    if (piVar14 != *piVar14) {
        do {
            piVar14 = *piVar10;
            uVar11 = __list_del_entry_valid(piVar10);
            if ((uVar11 & 1) != 0) {
                iVar12 = *piVar10;
                piVar3 = piVar10[1];
                *(iVar12 + 8) = piVar3;
                *piVar3 = iVar12;
            }
            *piVar10 = -0x2152ffffffffff00;
            piVar10[1] = -0x2152fffffffffede;
            __free_pages(piVar10[-1],*(piVar16 + 0x24));
            *(piVar16 + 0x7c) = *(piVar16 + 0x7c) + -1;
            piVar10 = piVar14;
        } while (piVar16[0x10] != piVar14);
    }
    uVar11 = kfree(piVar14);
    return uVar11;
code_r0x0800282c:
    iVar1 = iVar12 + 0x30;
    *(iVar12 + 0x40) = sym.__typeid__ZTSFvP6deviceym18dma_data_directionE_global_addr;
    *(iVar12 + 0x20) = 1;
    iVar18 = *piVar14;
    uVar11 = __list_add_valid(iVar1,piVar14,iVar18);
    if ((uVar11 & 1) != 0) {
        *(iVar18 + 8) = iVar1;
        *(iVar12 + 0x30) = iVar18;
        *(iVar12 + 0x38) = piVar14;
        *piVar14 = iVar1;
    }
    iVar8 = iVar8 + 1;
    if (piVar10[9] <= iVar8) goto code_r0x08002920;
    goto code_r0x08002818;
}


// ===== sym.mhi_netdev_remove @ 0x08002b40 (size 520) =====

void sym.mhi_netdev_remove(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(arg1 + 0xc0);
    if ((piVar10[0x14] != 0) && (*(piVar10 + 0x13) < 2)) {
        ipc_log_string(piVar10[0x14],"%s[I][%s] Remove notification received\n",0x8000915,"mhi_netdev_remove");
    }
    if (piVar10[3] == '\0') {
        sysfs_remove_group(arg1 + 0x28,obj.mhi_netdev_group);
        kthread_stop(piVar10[0xb]);
        puVar1 = *(piVar10[7] + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = *puVar1 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        napi_disable(piVar10[6]);
        unregister_netdev(piVar10[7]);
        __netif_napi_del(piVar10[6]);
        synchronize_net();
        free_netdev(piVar10[7]);
        piVar10[7] = 0;
        if ((piVar10[0x12] != 0) && (piVar10[0x12] < 0xfffffffffffff001)) {
            debugfs_remove();
        }
        if (piVar10[2] != 0) {
            return;
        }
    }
    piVar7 = piVar10[8];
    if (piVar7 != *piVar7) {
        uVar9 = *(*(*piVar10 + 0x88) + 0x60);
        piVar8 = *piVar7;
        do {
            piVar7 = *piVar8;
            uVar6 = __list_del_entry_valid(piVar8);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar8;
                piVar3 = piVar8[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar8 = -0x2152ffffffffff00;
            piVar8[1] = -0x2152fffffffffede;
            dma_unmap_page_attrs(uVar9,piVar8[-4],piVar8[-3],2,0);
            __free_pages(piVar8[-1],*(piVar10 + 0x24));
            piVar8 = piVar7;
        } while (piVar10[8] != piVar7);
    }
    kfree(piVar7);
    piVar8 = piVar10[0x10];
    piVar7 = *piVar8;
    if (piVar8 != *piVar8) {
        do {
            piVar8 = *piVar7;
            uVar6 = __list_del_entry_valid(piVar7);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            __free_pages(piVar7[-1],*(piVar10 + 0x24));
            *(piVar10 + 0x7c) = *(piVar10 + 0x7c) + -1;
            piVar7 = piVar8;
        } while (piVar10[0x10] != piVar8);
    }
    kfree(piVar8);
    return;
}


// ===== sym.mhi_netdev_xfer_ul_cb @ 0x08002d48 (size 100) =====

void sym.mhi_netdev_xfer_ul_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    iVar1 = *(*(arg1 + 0xc0) + 0x38);
    *(iVar1 + 0x130) = *(iVar1 + 0x130) + 1;
    *(iVar1 + 0x140) = *(iVar1 + 0x140) + *(arg2 + 0x70);
    consume_skb();
    if ((*(*(iVar1 + 0x3c0) + 0xd0) & 1) != 0) {
        netif_tx_wake_queue();
    }
    return;
}


// ===== sym.mhi_netdev_xfer_dl_cb @ 0x08002dac (size 488) =====

void sym.mhi_netdev_xfer_dl_cb(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ushort uVar6;
    ulong *in_x18;
    ulong *arg2_00;
    int64_t arg1_00;
    code *pcVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *arg2;
    arg1_00 = *(arg1 + 0xc0);
    pcVar7 = arg2_00[8];
    iVar11 = *(arg1_00 + 0x38);
    uVar4 = *(*(arg1 + 0x88) + 0x60);
    piVar10 = *(arg1_00 + 0x50);
    if (1 < (pcVar7 + -0x8002430 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0xf2847203f8761059,pcVar7,0x8000470);
    }
    (*pcVar7)(uVar4,arg2_00[2],arg2_00[3],2);
    if (*(arg2_00 + 4) != '\0') {
        iVar9 = *(arg1_00 + 0x40);
        puVar1 = arg2_00 + 6;
        piVar8 = *(iVar9 + 8);
        uVar5 = __list_add_valid(puVar1,piVar8,iVar9);
        if ((uVar5 & 1) != 0) {
            *(iVar9 + 8) = puVar1;
            arg2_00[6] = iVar9;
            arg2_00[7] = piVar8;
            *piVar8 = puVar1;
        }
    }
    if (*(arg2 + 0x14) == -0x6b) {
        uVar4 = arg2_00[5];
        uVar3 = *(arg1_00 + 0x24);
    }
    else {
        *(iVar11 + 0x128) = *(iVar11 + 0x128) + 1;
        *(iVar11 + 0x138) = *(iVar11 + 0x138) + *(arg2 + 8);
        if (piVar10 == NULL) {
            sym.mhi_netdev_push_skb(arg1_00,arg2_00,arg2);
            return;
        }
        iVar9 = __alloc_skb(0,0xa20,0,0xffffffff);
        uVar4 = arg2_00[5];
        if (iVar9 != 0) {
            skb_add_rx_frag(iVar9,0,uVar4,0,*(arg2 + 8),*(arg1_00 + 0x20));
            if (*piVar10 == 0) {
                *(iVar9 + 0x10) = iVar11;
                uVar2 = **arg2_00 & 0xf0;
                if (uVar2 == 0x60) {
                    uVar6 = 0xdd86;
                }
                else if (uVar2 == 0x40) {
                    uVar6 = 8;
                    if ((**arg2_00 & 0xf) < 5) {
                        uVar6 = 0xf900;
                    }
                }
                else {
                    uVar6 = 0xf900;
                }
                *(iVar9 + 0xb0) = uVar6;
                piVar8 = piVar10;
            }
            else {
                piVar8 = *(piVar10[1] + 0xd0) + *(piVar10[1] + 0xcc) + 8;
            }
            *piVar8 = iVar9;
            piVar10[1] = iVar9;
            return;
        }
        uVar3 = *(arg1_00 + 0x24);
    }
    __free_pages(uVar4,uVar3);
    return;
}


// ===== sym.mhi_netdev_status_cb @ 0x08002f94 (size 88) =====

void sym.mhi_netdev_status_cb(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (arg2 == 1) {
        *in_x18 = unaff_x30;
        iVar3 = *(arg1 + 0xc0);
        uVar2 = *(iVar3 + 0x30);
        uVar1 = napi_schedule_prep(uVar2);
        if ((uVar1 & 1) != 0) {
            __napi_schedule(uVar2);
        }
        *(iVar3 + 0xb4) = 1;
    }
    return;
}


// ===== sym.mhi_netdev_alloc_thread @ 0x08002fec (size 696) =====

char * sym.mhi_netdev_alloc_thread(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char *pcVar6;
    char *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong uVar12;
    int iVar13;
    ulong unaff_x30;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    uint64_t uStack_b0;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar10 = *(arg1 + 0x24);
    piStack_78 = &stack0xffffffffffffff88;
    piStack_70 = &stack0xffffffffffffff88;
    uVar4 = kthread_should_stop();
    if ((uVar4 & 1) == 0) {
        do {
            if (*(arg1 + 0x7c) <= *(arg1 + 0x78)) {
                iVar3 = 0;
                iVar13 = 0;
                do {
                    do {
                        uVar4 = kthread_should_stop();
                        if ((uVar4 & 1) != 0) goto code_r0x08003038;
                        uVar12 = tpidr_el1;
                        uVar4 = __alloc_pages(uVar12,0xe0cc0,uVar10,0,0);
                        piVar5 = piStack_78;
                        if (uVar4 != 0) {
                            uVar9 = (uVar4 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
                            iVar8 = uVar9 + (0x1000L << (uVar10 & 0x3f));
                            *(iVar8 + -0x48) = uVar9;
                            *(iVar8 + -0x28) = 0;
                            *(iVar8 + -0x20) = uVar4;
                            piVar11 = iVar8 + -0x18;
                            *(iVar8 + -0x30) = (iVar8 + -0x48) - uVar9;
                            uVar4 = __list_add_valid(piVar11,&stack0xffffffffffffff88,piStack_78);
                            if ((uVar4 & 1) != 0) {
                                piVar5[1] = piVar11;
                                *piVar11 = piVar5;
                                *(iVar8 + -0x10) = &stack0xffffffffffffff88;
                                piStack_78 = piVar11;
                            }
                            iVar3 = iVar3 + 1;
                        }
                        iVar13 = iVar13 + 1;
                    } while (iVar13 != 0x40);
                    _raw_spin_lock_bh(arg1 + 0x88);
                    piVar5 = *(arg1 + 0x80);
                    if (&stack0xffffffffffffff88 != piStack_78) {
                        iVar8 = *piVar5;
                        piStack_78[1] = piVar5;
                        *piVar5 = piStack_78;
                        *piStack_70 = iVar8;
                        *(iVar8 + 8) = piStack_70;
                        piStack_78 = &stack0xffffffffffffff88;
                        piStack_70 = &stack0xffffffffffffff88;
                    }
                    *(arg1 + 0x7c) = *(arg1 + 0x7c) + iVar3;
                    _raw_spin_unlock_bh(arg1 + 0x88);
                    iVar3 = 0;
                    iVar13 = 0;
                } while (*(arg1 + 0x7c) <= *(arg1 + 0x78));
            }
            uVar12 = *(arg1 + 0x30);
            uVar4 = napi_schedule_prep(uVar12);
            if ((uVar4 & 1) != 0) {
                __napi_schedule(uVar12);
            }
            *(arg1 + 0xb4) = 1;
            uVar4 = kthread_should_stop();
            if (((uVar4 & 1) == 0) && (*(arg1 + 0x78) < *(arg1 + 0x7c))) {
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                init_wait_entry(&stack0xffffffffffffff60,0);
                while( true ) {
                    iVar8 = prepare_to_wait_event(arg1 + 0x60,&stack0xffffffffffffff60,1);
                    uVar4 = kthread_should_stop();
                    if (((uVar4 & 1) != 0) || (*(arg1 + 0x7c) <= *(arg1 + 0x78))) break;
                    if (iVar8 != 0) goto code_r0x080030f4;
                    schedule();
                }
                finish_wait(arg1 + 0x60,&stack0xffffffffffffff60);
            }
code_r0x080030f4:
            uVar4 = kthread_should_stop();
        } while ((uVar4 & 1) == 0);
    }
code_r0x08003038:
    if (&stack0xffffffffffffff88 != piStack_78) {
        piVar5 = piStack_78;
        do {
            piVar11 = *piVar5;
            uVar4 = __list_del_entry_valid(piVar5);
            if ((uVar4 & 1) != 0) {
                iVar8 = *piVar5;
                piVar1 = piVar5[1];
                *(iVar8 + 8) = piVar1;
                *piVar1 = iVar8;
            }
            *piVar5 = -0x2152ffffffffff00;
            piVar5[1] = -0x2152fffffffffede;
            __free_pages(piVar5[-1],uVar10);
            piVar5 = piVar11;
        } while (&stack0xffffffffffffff88 != piVar11);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return NULL;
    }
    piVar5 = __stack_chk_fail();
    uVar12 = tpidr_el2;
    *extraout_x18 = 0x800329c;
    uStack_b8 = 0x800329c;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    iVar8 = *(*piVar5 + 0x98);
    if (iVar8 == 0) {
        iVar8 = *(*piVar5 + 0x28);
    }
    pcVar7 = "%s_%s";
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = uVar10;
    pcVar6 = snprintf(&stack0xffffffffffffff10,0x28,"%s_%s",iVar8,piVar5[5]);
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        pcVar6 = debugfs_create_dir(&stack0xffffffffffffff10);
        piVar5[0x12] = pcVar6;
        if ((pcVar6 != NULL) && (pcVar7 = pcVar6, pcVar6 < 0xfffffffffffff001)) {
            debugfs_create_file_unsafe("stats",0x124,pcVar6,piVar5,obj.debugfs_stats);
            pcVar7 = piVar5[0x12];
            pcVar6 = debugfs_create_file_unsafe("chain",0x124,pcVar7,piVar5,obj.debugfs_chain);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return pcVar6;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.log_level_show;
    if (*(iVar8 + 0x98) == 0) {
        pcVar7 = 0xfffffffffffffffb;
    }
    else {
        uVar2 = *(*(iVar8 + 0x98) + 0x98);
        if (uVar2 < 5) {
            pcVar6 = *(obj.mhi_log_level_str + uVar2 * 8);
        }
        else {
            pcVar6 = "Mask all";
        }
        iVar3 = scnprintf(pcVar7,0x1000,"MHI network device IPC log level begins from: %s\n",pcVar6);
        pcVar7 = iVar3;
    }
    return pcVar7;
}


// ===== sym.mhi_netdev_create_debugfs @ 0x080032a4 (size 248) =====

char * sym.mhi_netdev_create_debugfs(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    uStack_50 = 0;
    iVar5 = *(*arg1 + 0x98);
    if (iVar5 == 0) {
        iVar5 = *(*arg1 + 0x28);
    }
    pcVar4 = "%s_%s";
    pcVar3 = snprintf(&uStack_50,0x28,"%s_%s",iVar5,*(arg1 + 0x28));
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        pcVar3 = debugfs_create_dir(&uStack_50);
        *(arg1 + 0x90) = pcVar3;
        if ((pcVar3 != NULL) && (pcVar4 = pcVar3, pcVar3 < 0xfffffffffffff001)) {
            debugfs_create_file_unsafe("stats",0x124,pcVar3,arg1,obj.debugfs_stats);
            pcVar4 = *(arg1 + 0x90);
            pcVar3 = debugfs_create_file_unsafe("chain",0x124,pcVar4,arg1,obj.debugfs_chain);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return pcVar3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.log_level_show;
    if (*(iVar5 + 0x98) == 0) {
        pcVar4 = 0xfffffffffffffffb;
    }
    else {
        uVar1 = *(*(iVar5 + 0x98) + 0x98);
        if (uVar1 < 5) {
            pcVar3 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar3 = "Mask all";
        }
        iVar2 = scnprintf(pcVar4,0x1000,"MHI network device IPC log level begins from: %s\n",pcVar3);
        pcVar4 = iVar2;
    }
    return pcVar4;
}


// ===== sym.log_level_show @ 0x0800339c (size 112) =====

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
        uVar1 = *(*(arg1 + 0x98) + 0x98);
        if (uVar1 < 5) {
            pcVar4 = *(obj.mhi_log_level_str + uVar1 * 8);
        }
        else {
            pcVar4 = "Mask all";
        }
        iVar2 = scnprintf(arg2,0x1000,"MHI network device IPC log level begins from: %s\n",pcVar4);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.log_level_store @ 0x0800340c (size 260) =====

int64_t sym.log_level_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,0,&uStack_2c);
    if (iVar1 < 0) {
        arg3 = -0x16;
        goto code_r0x080034dc;
    }
    if (iVar4 == 0) {
        arg3 = -5;
        goto code_r0x080034dc;
    }
    *(iVar4 + 0x98) = uStack_2c;
    if (*(iVar4 + 0x18) == '\0') {
        iVar3 = *(iVar4 + 8);
        if (iVar3 != 0) goto code_r0x08003488;
    }
    else {
        iVar3 = *(iVar4 + 0x10);
code_r0x08003488:
        *(iVar3 + 0x98) = uStack_2c;
    }
    if ((*(iVar4 + 0xa0) != 0) && (*(iVar4 + 0x98) < 2)) {
        if (uStack_2c < 5) {
            pcVar2 = *(obj.mhi_log_level_str + uStack_2c * 8);
        }
        else {
            pcVar2 = "Mask all";
        }
        ipc_log_string(*(iVar4 + 0xa0),"%s[I][%s] MHI Network device IPC log level changed to: %s\n",0x8000915,
                       "log_level_store",pcVar2);
    }
code_r0x080034dc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mhi_netdev_setup;
    *(iVar4 + 200) = obj.mhi_netdev_ops_ip;
    iVar3 = ether_setup();
    *(iVar4 + 0x220) = 0;
    *(iVar4 + 0xd6) = 0;
    *(iVar4 + 0x24d) = 0;
    *(iVar4 + 0x120) = 0x207;
    *(iVar4 + 0xc0) = *(iVar4 + 0xc0) & 0xffffeffd;
    *(iVar4 + 0x4b8) = 0x1d4c;
    return iVar3;
}


// ===== sym.mhi_netdev_setup @ 0x08003510 (size 104) =====

void sym.mhi_netdev_setup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 200) = obj.mhi_netdev_ops_ip;
    ether_setup();
    *(arg1 + 0x220) = 0;
    *(arg1 + 0xd6) = 0;
    *(arg1 + 0x24d) = 0;
    *(arg1 + 0x120) = 0x207;
    *(arg1 + 0xc0) = *(arg1 + 0xc0) & 0xffffeffd;
    *(arg1 + 0x4b8) = 0x1d4c;
    return;
}


// ===== sym.mhi_netdev_poll @ 0x08003578 (size 380) =====

int sym.mhi_netdev_poll(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t *piVar1;
    int iVar2;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x30) + 0xa00);
    arg2_00 = *arg1_00;
    piVar1 = arg1_00[1];
    piVar3 = arg1_00[10];
    if ((arg1_00[0x14] != 0) && (arg1_00[0x13] == 0)) {
        ipc_log_string(arg1_00[0x14],"%s[D][%s] Enter: %d\n",0x8000915,"mhi_netdev_poll",arg2 & 0xffffffffU);
    }
    iVar2 = mhi_poll(arg2_00,arg2 & 0xffffffffU);
    if ((piVar3 != NULL) && (*piVar3 != 0)) {
        netif_receive_skb();
        *piVar3 = 0;
    }
    if (iVar2 < 0) {
        _printk(0x800059c,"mhi_netdev_poll",iVar2);
        if ((arg1_00[0x14] != 0) && (*(arg1_00 + 0x13) < 3)) {
            ipc_log_string(arg1_00[0x14],"%s[E][%s] Error polling ret: %d\n",0x8000915,"mhi_netdev_poll",iVar2);
        }
        napi_complete_done(arg1,0);
        iVar2 = 0;
        *(arg1_00 + 0xb4) = 0;
    }
    else {
        sym.mhi_netdev_queue(arg1_00,arg2_00);
        if (piVar1 != NULL) {
            sym.mhi_netdev_queue(arg1_00,*piVar1);
        }
        if (iVar2 < arg2) {
            napi_complete_done(arg1,0);
            *(arg1_00 + 0xb4) = 0;
        }
        if ((arg1_00[0x14] != 0) && (arg1_00[0x13] == 0)) {
            ipc_log_string(arg1_00[0x14],"%s[D][%s] Polled: %d\n",0x8000915,"mhi_netdev_poll",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.mhi_netdev_open @ 0x080036f4 (size 232) =====

ulong sym.mhi_netdev_open(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0xa00);
    iVar5 = *piVar4;
    if ((piVar4[0x14] != 0) && (*(piVar4 + 0x13) < 2)) {
        ipc_log_string(piVar4[0x14],"%s[I][%s] Opened netdev interface\n",0x8000915,"mhi_netdev_open");
    }
    puVar1 = *(arg1 + 0x3c0) + 0xd0;
    if (*(iVar5 + 0x18) == 0) {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return 0;
}


// ===== sym.mhi_netdev_xmit @ 0x080037dc (size 312) =====

uint sym.mhi_netdev_xmit(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    ulong uVar7;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = *(arg2 + 0xa00);
    uVar7 = *puVar8;
    if ((puVar8[0x14] != 0) && (*(puVar8 + 0x13) == 0)) {
        ipc_log_string(puVar8[0x14],"%s[D][%s] Entered\n",0x8000915,"mhi_netdev_xmit");
    }
    iVar4 = mhi_queue_skb(uVar7,1,arg1,*(arg1 + 0x70),2);
    if (iVar4 == 0) {
        uVar6 = 0;
        iVar5 = puVar8[0x14];
    }
    else {
        if ((puVar8[0x14] != 0) && (*(puVar8 + 0x13) == 0)) {
            ipc_log_string(puVar8[0x14],"%s[D][%s] Failed to queue with reason: %d\n",0x8000915,"mhi_netdev_xmit",0)
            ;
        }
        puVar1 = *(arg2 + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        uVar6 = 0x10;
        iVar5 = puVar8[0x14];
    }
    if ((iVar5 != 0) && (*(puVar8 + 0x13) == 0)) {
        ipc_log_string(iVar5,"%s[D][%s] Exited\n",0x8000915,"mhi_netdev_xmit");
    }
    return uVar6;
}


// ===== sym.mhi_netdev_ioctl @ 0x08003914 (size 476) =====

uint64_t sym.mhi_netdev_ioctl(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    uchar auVar7 [16];
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar1 = 0;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar3 = arg3 - 0x89f3;
    if (uVar3 < 0xb) {
    //switch table (11 cases) at 0x8000490
        switch(*(uVar3 + 0x8000490) * 4 + 0x8003974) {
        case 0x8003978:
            iVar2 = sym._copy_to_user(*(arg2 + 0x10),in_q0,4);
            uVar3 = 0;
            if (iVar2 != 0) {
                uVar3 = 0xfffffff2;
            }
            uVar1 = uVar3;
            break;
        case 0x80039a4:
            uVar1 = 0xffffffea;
            break;
        case 0x80039b0:
            puVar6 = *(arg1 + 0xa00);
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_50 = 0;
            uVar5 = *puVar6;
            uVar1 = sym._copy_from_user(&stack0xffffffffffffffb0,*(arg2 + 0x10));
            if (uVar1 == 0) {
                auVar7 = extraout_q0;
                if (uStack_50 == 0x14) {
                    iVar4 = *(puVar6 + 0x1c);
                    if (uStack_50._4_4_ == 0) {
                        if (iVar4 == 0) {
                            if ((puVar6[0x14] == 0) || (*(puVar6 + 0x13) != 0)) {
                                iVar4 = 1;
                            }
                            else {
                                ipc_log_string(puVar6[0x14],"%s[D][%s] Disable MHI LPM\n",0x8000915,
                                               "mhi_netdev_ioctl_extended");
                                iVar4 = *(puVar6 + 0x1c) + 1;
                            }
                            *(puVar6 + 0x1c) = iVar4;
                            auVar7 = mhi_device_get(uVar5);
                        }
                    }
                    else if (iVar4 != 0) {
                        if ((puVar6[0x14] != 0) && (*(puVar6 + 0x13) == 0)) {
                            ipc_log_string(puVar6[0x14],"%s[D][%s] Enable MHI LPM\n",0x8000915,
                                           "mhi_netdev_ioctl_extended");
                            iVar4 = *(puVar6 + 0x1c);
                        }
                        *(puVar6 + 0x1c) = iVar4 + -1;
                        auVar7 = mhi_device_put(uVar5);
                    }
                }
                else if (uStack_50 == 4) {
                    auVar7 = strscpy(&stack0xffffffffffffffb0 | 4,puVar6[5],0x10);
                }
                else if (uStack_50 == 0) {
                    uStack_50 = uStack_50 & 0xffffffff;
                }
                uVar1 = sym._copy_to_user(*(arg2 + 0x10),auVar7,0x18);
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar7 = __stack_chk_fail(uVar1);
    if ((auVar7._8_8_ & 0xffff0000) != 0) {
        return 0xffffffea;
    }
    *(auVar7._0_8_ + 0xd8) = auVar7._8_4_;
    return 0;
}


// ===== sym.mhi_netdev_change_mtu @ 0x08003af0 (size 44) =====

ulong sym.mhi_netdev_change_mtu(int64_t arg1,int64_t arg2)

{
    if (arg2 >> 0x10 != 0) {
        return 0xffffffea;
    }
    *(arg1 + 0xd8) = arg2;
    return 0;
}


// ===== sym._copy_to_user @ 0x08003b1c (size 312) =====

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
        if ((_dma_sync_single_for_cpu >> 0x18 & 1) == 0) {
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
        if ((_dma_sync_single_for_cpu >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x08003c90 (size 364) =====

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
    bVar4 = 0xffffffffffffffe7 < uVar6;
    uVar6 = uVar6 + 0x18;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x18;
    }
    else {
        if ((_dma_sync_single_for_cpu >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x18);
        if ((_dma_sync_single_for_cpu >> 0x18 & 1) == 0) {
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
    memset((arg1 - iVar5) + 0x18,0,iVar5);
    return iVar5;
}


// ===== sym.mhi_netdev_queue @ 0x08003e38 (size 1588) =====

void sym.mhi_netdev_queue(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t ***pppiVar10;
    int64_t ****ppppiVar11;
    ulong uVar12;
    int64_t *piVar13;
    int64_t ***pppiVar14;
    int64_t ***pppiVar15;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t ****ppppiVar16;
    int64_t *unaff_x24;
    int iVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    int64_t ***pppiStack_78;
    int64_t ***pppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    arg1_00 = *(arg1 + 0x40);
    ppppiVar16 = *(*(arg2 + 0x88) + 0x60);
    iVar6 = mhi_get_free_desc_count(arg2,2);
    if ((*(arg1 + 0xa0) != 0) && (*(arg1 + 0x98) == 0)) {
        ipc_log_string(*(arg1 + 0xa0),"%s[D][%s] Enter free descriptors: %d\n",0x8000915,"mhi_netdev_queue",iVar6);
    }
    if ((iVar6 != 0) && (0 < iVar6)) {
        iVar17 = 0;
        do {
            unaff_x24 = *arg1_00;
            if ((arg1_00 == unaff_x24) ||
               (((*(unaff_x24[-1] + 0x34) != 1 &&
                 ((unaff_x24 = *unaff_x24, arg1_00 == unaff_x24 ||
                  ((*(unaff_x24[-1] + 0x34) != 1 &&
                   ((unaff_x24 = *unaff_x24, arg1_00 == unaff_x24 ||
                    ((*(unaff_x24[-1] + 0x34) != 1 &&
                     ((unaff_x24 = *unaff_x24, arg1_00 == unaff_x24 ||
                      ((*(unaff_x24[-1] + 0x34) != 1 &&
                       ((unaff_x24 = *unaff_x24, arg1_00 == unaff_x24 || (*(unaff_x24[-1] + 0x34) != 1))))))))))))))))
                || (unaff_x24 + -6 == NULL)))) {
                unaff_x24 = arg1 + 0x88;
                uVar5 = iVar6 - iVar17;
                arg1_00 = uVar5;
                uVar12 = *(*(arg2 + 0x88) + 0x60);
                pppiStack_78 = &pppiStack_78;
                pppiStack_70 = &pppiStack_78;
                _raw_spin_lock_bh(unaff_x24);
                piVar13 = *(arg1 + 0x80);
                if (piVar13 != *piVar13) {
                    ppppiVar11 = *piVar13;
                    pppiVar10 = piVar13[1];
                    ppppiVar11[1] = &pppiStack_78;
                    *pppiVar10 = pppiStack_78;
                    ppppiVar16 = pppiStack_78 + 1;
                    pppiStack_78 = ppppiVar11;
                    *ppppiVar16 = pppiVar10;
                    *piVar13 = piVar13;
                    piVar13[1] = piVar13;
                }
                _raw_spin_unlock_bh(unaff_x24);
                if (uVar5 < 1) {
                    uVar18 = 0;
                    goto code_r0x08004134;
                }
                uVar8 = 0;
                goto code_r0x080040a4;
            }
            piVar1 = unaff_x24[-1] + 0x34;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            uVar9 = __list_del_entry_valid(unaff_x24);
            if ((uVar9 & 1) != 0) {
                iVar2 = *unaff_x24;
                piVar13 = unaff_x24[1];
                *(iVar2 + 8) = piVar13;
                *piVar13 = iVar2;
            }
            *unaff_x24 = -0x2152ffffffffff00;
            unaff_x24[1] = -0x2152fffffffffede;
            dma_sync_single_for_device(ppppiVar16,unaff_x24[-4],unaff_x24[-3],2);
            iVar7 = mhi_queue_dma(arg2,2,unaff_x24 + -6,unaff_x24[-3],2);
            if (iVar7 != 0) {
                _printk(0x8000a5a,"mhi_netdev_queue",iVar7);
                if ((*(arg1 + 0xa0) != 0) && (*(arg1 + 0x98) < 3)) {
                    ipc_log_string(*(arg1 + 0xa0),"%s[E][%s] Failed to queue buffer, ret: %d\n",0x8000915,
                                   "mhi_netdev_queue",iVar7);
                }
                arg1 = unaff_x24[2];
                if (1 < (arg1 + -0x8002430 >> 3 | arg1 << 0x3d)) goto code_r0x080043e8;
                goto code_r0x080042b4;
            }
            iVar17 = iVar17 + 1;
            *(arg1 + 0xb0) = *(arg1 + 0xb0) + 1;
        } while (iVar6 != iVar17);
    }
    goto code_r0x0800420c;
    while( true ) {
        uVar9 = __list_del_entry_valid(ppppiVar16 + 6);
        if ((uVar9 & 1) != 0) {
            pppiVar10 = ppppiVar16[6];
            pppiVar14 = ppppiVar16[7];
            pppiVar10[1] = pppiVar14;
            *pppiVar14 = pppiVar10;
        }
        uVar8 = uVar8 + 1;
        ppppiVar16[6] = 0xdead000000000100;
        ppppiVar16[7] = 0xdead000000000122;
        *(arg1 + 0xac) = *(arg1 + 0xac) + 1;
        uVar18 = uVar5;
        if (uVar5 == uVar8) break;
code_r0x080040a4:
        ppppiVar16 = NULL;
        if (&pppiStack_78 != pppiStack_78) {
            ppppiVar16 = pppiStack_78 + -6;
        }
        uVar18 = uVar8;
        if (ppppiVar16 == NULL) break;
        pppiVar10 = dma_map_page_attrs(uVar12,ppppiVar16[5],0,ppppiVar16[3],2,0);
        ppppiVar16[2] = pppiVar10;
        if (pppiVar10 == 0xffffffffffffffff) break;
        ppppiVar16[8] = sym.mhi_netdev_unmap_page.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
        iVar7 = mhi_queue_dma(arg2,2,ppppiVar16,ppppiVar16[3],2);
        if (iVar7 != 0) {
            _printk(0x80009c8,"mhi_netdev_queue_bg_pool",iVar7);
            if ((*(arg1 + 0xa0) != 0) && (*(arg1 + 0x98) < 3)) {
                ipc_log_string(*(arg1 + 0xa0),"%s[E][%s] Failed to queue transfer, ret: %d\n",0x8000915,
                               "mhi_netdev_queue_bg_pool",iVar7);
            }
            dma_unmap_page_attrs(uVar12,ppppiVar16[2],ppppiVar16[3],2,0);
            break;
        }
    }
code_r0x08004134:
    _raw_spin_lock_bh(unaff_x24);
    pppiVar10 = pppiStack_70;
    pppiVar14 = *(arg1 + 0x80);
    if (&pppiStack_78 != pppiStack_78) {
        pppiVar15 = *pppiVar14;
        pppiStack_78[1] = pppiVar14;
        *pppiVar14 = pppiStack_78;
        *pppiVar10 = pppiVar15;
        pppiVar15[1] = pppiVar10;
    }
    *(arg1 + 0x7c) = *(arg1 + 0x7c) - uVar18;
    _raw_spin_unlock_bh(unaff_x24);
    __wake_up(arg1 + 0x60,1,1,0);
    ppppiVar16 = &pppiStack_78;
    if ((uVar18 + iVar17 < iVar6) && (iVar17 = (iVar6 - uVar18) - iVar17, 0 < iVar17)) {
        uVar5 = *(arg1 + 0x24);
        arg1_00 = *(*(arg2 + 0x88) + 0x60);
        do {
            ppppiVar11 = sym.mhi_netdev_alloc(arg1_00,0xa20,uVar5);
            if (ppppiVar11 == NULL) break;
            ppppiVar11[8] = sym.mhi_netdev_unmap_page.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt;
            uVar8 = mhi_queue_dma(arg2,2,ppppiVar11,ppppiVar11[3],2);
            ppppiVar16 = ppppiVar11;
            if (uVar8 != 0) {
                unaff_x24 = uVar8;
                _printk(0x80004cd,"mhi_netdev_tmp_alloc",unaff_x24);
                if ((*(arg1 + 0xa0) != 0) && (*(arg1 + 0x98) < 3)) {
                    ipc_log_string(*(arg1 + 0xa0),"%s[E][%s] Failed to queue transfer, ret:%d\n",0x8000915,
                                   "mhi_netdev_tmp_alloc",unaff_x24);
                }
                dma_unmap_page_attrs(arg1_00,ppppiVar11[2],ppppiVar11[3],2,0);
                __free_pages(ppppiVar11[5],uVar5);
                break;
            }
            iVar17 = iVar17 + -1;
            *(arg1 + 0xa8) = *(arg1 + 0xa8) + 1;
        } while (iVar17 != 0);
    }
code_r0x0800420c:
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x080043e8:
        __cfi_slowpath_diag(0xf2847203f8761059,arg1,0x8000450);
code_r0x080042b4:
        (*arg1)(ppppiVar16,unaff_x24[-4],unaff_x24[-3],2);
        piVar1 = unaff_x24[-1] + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        arg1 = *arg1_00;
        uVar9 = __list_add_valid(unaff_x24,arg1_00,arg1);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 8) = unaff_x24;
            *unaff_x24 = arg1;
            unaff_x24[1] = arg1_00;
            *arg1_00 = unaff_x24;
        }
    }
    return;
}


// ===== sym.mhi_netdev_unmap_page @ 0x0800446c (size 40) =====

void sym.mhi_netdev_unmap_page(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_unmap_page_attrs();
    return;
}


// ===== sym.mhi_netdev_alloc @ 0x08004494 (size 216) =====

uint64_t * sym.mhi_netdev_alloc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint64_t *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = tpidr_el1;
    uVar3 = __alloc_pages(uVar2,arg2 | 0xe0000,arg3 & 0xffffffff,0,0);
    if (uVar3 != 0) {
        uVar5 = (uVar3 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        iVar1 = uVar5 + (0x1000L << (arg3 & 0x3fU));
        puVar6 = iVar1 + -0x48;
        *puVar6 = uVar5;
        *(iVar1 + -0x28) = 0;
        *(iVar1 + -0x20) = uVar3;
        *(iVar1 + -0x30) = puVar6 - uVar5;
        if (arg1 == 0) {
            return puVar6;
        }
        iVar4 = dma_map_page_attrs(arg1,uVar3,0,puVar6 - uVar5,2,0);
        *(iVar1 + -0x38) = iVar4;
        if (iVar4 != -1) {
            return puVar6;
        }
        __free_pages(*(iVar1 + -0x20),arg3 & 0xffffffff);
    }
    return NULL;
}


// ===== sym.mhi_netdev_debugfs_stats_open @ 0x08004570 (size 56) =====

void sym.mhi_netdev_debugfs_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.mhi_netdev_debugfs_stats_show.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.mhi_netdev_debugfs_stats_show @ 0x080045a8 (size 144) =====

ulong sym.mhi_netdev_debugfs_stats_show(int64_t arg1)

{
    char *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x80);
    seq_printf(arg1,"mru:%u order:%u pool_size:%d, bg_pool_size:%d bg_pool_limit:%d abuf:%u kbuf:%u rbuf:%u\n",
               *(iVar2 + 0x20),*(iVar2 + 0x24),*(iVar2 + 0x48),*(iVar2 + 0x7c),*(iVar2 + 0x78),*(iVar2 + 0xa8),
               *(iVar2 + 0xac),*(iVar2 + 0xb0));
    pcVar1 = "disabled";
    if (*(iVar2 + 0x50) != 0) {
        pcVar1 = "enabled";
    }
    seq_printf(arg1,"chaining SKBs:%s\n",pcVar1);
    return 0;
}


// ===== sym.debugfs_chain_open @ 0x08004638 (size 56) =====

void sym.debugfs_chain_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,0,sym.mhi_netdev_debugfs_chain.8c1b39a14705c1362dc6cdd1d2821d6c.cfi_jt,"%llu\n"
                    );
    return;
}


// ===== sym.mhi_netdev_debugfs_chain @ 0x08004670 (size 32) =====

ulong sym.mhi_netdev_debugfs_chain(int64_t arg1)

{
    *(arg1 + 0x50) = 0;
    if (*(arg1 + 8) != 0) {
        *(*(arg1 + 8) + 0x50) = 0;
    }
    return 0;
}


// ===== sym.mhi_netdev_push_skb @ 0x08004690 (size 212) =====

void sym.mhi_netdev_push_skb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ushort uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = __alloc_skb(0,0xa20,0,0xffffffff);
    if (iVar2 == 0) {
        __free_pages(*(arg2 + 0x28),*(arg1 + 0x24));
    }
    else {
        skb_add_rx_frag(iVar2,0,*(arg2 + 0x28),0,*(arg3 + 8),*(arg1 + 0x20));
        *(iVar2 + 0x10) = *(arg1 + 0x38);
        uVar1 = **arg2 & 0xf0;
        if (uVar1 == 0x60) {
            uVar3 = 0xdd86;
        }
        else if (uVar1 == 0x40) {
            uVar3 = 8;
            if ((**arg2 & 0xf) < 5) {
                uVar3 = 0xf900;
            }
        }
        else {
            uVar3 = 0xf900;
        }
        *(iVar2 + 0xb0) = uVar3;
        netif_receive_skb(iVar2);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004764 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080047a8

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
    //switch table (4 cases) at 0x800049b
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80047bc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080047c4 (size 76) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("mhi_netdev",0);
    __mhi_driver_register(obj.mhi_netdev_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004810 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    mhi_driver_unregister(obj.mhi_netdev_driver);
    return;
}

