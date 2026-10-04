// decompiled from miwill by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1620) =====

//WARNING: Switch with 1 destination removed at 0x080073d4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 < -0x5ef536256f1f28fa) {
                if (arg1 < -0x6cb83ea881bc7ad3) {
                    if (arg1 != -0x752686ebf790f0c8) {
                        if (arg1 != -0x73fe26196dddb6ca) goto code_r0x08007394;
                        pcVar2 = sym.hook4.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt;
                        goto code_r0x080035f4;
                    }
                    pcVar2 = sym.miwill_change_mode.cfi_jt;
                }
                else if (arg1 == -0x6cb83ea881bc7ad3) {
                    pcVar2 = sym.miwill_change_carrier.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
                }
                else {
                    if (arg1 != -0x5fadca31001dfa5d) goto code_r0x08007394;
                    pcVar2 = sym.eth_mac_addr.cfi_jt;
                }
            }
            else if (arg1 < -0x4d7e2f04b135d45c) {
                if (arg1 != -0x5ef536256f1f28fa) {
                    if (arg1 != -0x595b1a7338843e49) goto code_r0x08007394;
                    pcVar2 = sym.miwill_dev_init.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
code_r0x08003610:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08007394;
                }
                pcVar2 = sym.miwill_validate.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
            }
            else {
                if (arg1 == -0x4d7e2f04b135d45c) {
                    pcVar2 = sym.miwill_nl_cmd_options_get.44ed8c92635a217098b932cc522a04f9.cfi_jt;
                    goto code_r0x08003610;
                }
                if (arg1 != -0x3d8a986974e2b9b8) goto code_r0x08007394;
                pcVar2 = sym.miwill_mode_unregister.cfi_jt;
            }
        }
        else if (arg1 < -0x9ddffa5272df45a) {
            if (arg1 < -0x2104199c533fc3ef) {
                if (arg1 == -0x2ee0710dce68437c) {
                    pcVar2 = sym.timer_callback.cfi_jt;
code_r0x080035f4:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08007394;
                }
                if (arg1 != -0x2d8de827c539d4e0) goto code_r0x08007394;
                pcVar2 = sym.miwill_options_register.cfi_jt;
            }
            else {
                if (arg1 != -0x2104199c533fc3ef) {
                    if (arg1 != -0x14a9062d2045c88d) goto code_r0x08007394;
                    pcVar2 = sym.__typeid__ZTSF17rx_handler_resultP6miwillP11miwill_portP7sk_buffE_global_addr;
                    goto code_r0x080035f4;
                }
                pcVar2 = sym.miwill_change_rx_flags.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
            }
        }
        else if (arg1 < -0x4a8a706f20e1a6e) {
            if (arg1 == -0x9ddffa5272df45a) {
                pcVar2 = sym.miwill_fix_features.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
            }
            else {
                if (arg1 != -0x4ce9c6b75d9cb3f) goto code_r0x08007394;
                pcVar2 = sym.miwill_get_stats64.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x4a8a706f20e1a6e) {
                if ((arg1 == -0x1cc419e3c59727d) && ((pcVar1 + -0x80037b0 >> 3 | pcVar1 << 0x3d) < 10)) {
                    return;
                }
                goto code_r0x08007394;
            }
            pcVar2 = sym.miwill_xmit.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
        }
    }
    else if (arg1 < 0x5af8fd12f777bf28) {
        if (arg1 < 0x2be902bf267845e7) {
            if (arg1 < 0x18578bb917b39787) {
                if (arg1 == 0x2b3a43e29242445) {
                    pcVar2 = sym.init_module.cfi_jt;
                }
                else {
                    if (arg1 != 0xb3ec22f4aad713e) goto code_r0x08007394;
                    pcVar2 = sym.miwill_options_unregister.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x18578bb917b39787) {
                    pcVar2 = sym.miwill_setup.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
                    goto code_r0x08003610;
                }
                if (arg1 != 0x2549229611eaba59) goto code_r0x08007394;
                pcVar2 = sym.passthru_features_check.cfi_jt;
            }
        }
        else if (arg1 < 0x4a0345b55ea58b8b) {
            if (arg1 == 0x2be902bf267845e7) {
                pcVar2 = sym.miwill_change_mtu.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
            }
            else {
                if (arg1 != 0x371f10f79906e857) goto code_r0x08007394;
                pcVar2 = sym.__typeid__ZTSFvP6miwillE_global_addr;
            }
        }
        else if (arg1 == 0x4a0345b55ea58b8b) {
            pcVar2 = sym.__typeid__ZTSFiP6miwillP11miwill_portE_global_addr;
        }
        else {
            if (arg1 != 0x57065a75b1881cde) goto code_r0x08007394;
            pcVar2 = sym.miwill_handle_frame.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
        }
    }
    else if (arg1 < 0x7983d682536e7103) {
        if (arg1 < 0x6e21bcbc700b56cd) {
            if (arg1 == 0x5af8fd12f777bf28) {
                pcVar2 = sym.__typeid__ZTSFiP6miwillE_global_addr;
            }
            else {
                if (arg1 != 0x641d19c7be126e92) goto code_r0x08007394;
                pcVar2 = sym.minet_thread.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x6e21bcbc700b56cd) {
                pcVar2 = sym.__typeid__ZTSFbP6miwillP7sk_buffE_global_addr;
                goto code_r0x080035f4;
            }
            if (arg1 != 0x7719468768ec57f8) goto code_r0x08007394;
            pcVar2 = sym.miwill_select_queue.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
        }
    }
    else if (arg1 < 0x7be209b3f5c4d9be) {
        if (arg1 == 0x7983d682536e7103) {
            pcVar2 = sym.miwill_get_drvinfo.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
        }
        else {
            if (arg1 != 0x79aa6780370e35f7) goto code_r0x08007394;
            pcVar2 = sym.ethtool_op_get_ts_info.cfi_jt;
        }
    }
    else if (arg1 == 0x7be209b3f5c4d9be) {
        pcVar2 = sym.miwill_mode_register.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08007394;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007394:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80073e8);
    (*pcVar1)();
}


// ===== sym.miwill_get_stats64.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003660 (size 8) =====

void sym.miwill_get_stats64.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint64_t uVar6;
    uint32_t *in_x6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x6 = extraout_w8;
    if (uVar6 < extraout_w8) {
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        do {
            if (0x1f < uVar6) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8005fa0);
                (*pcVar5)();
            }
            piVar1 = *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + *(param_1 + 0xa08);
            iVar3 = piVar1[3];
            iVar2 = *piVar1;
            iVar4 = piVar1[1];
            iVar7 = piVar1[4];
            param_2[8] = param_2[8] + piVar1[2];
            *param_2 = *param_2 + iVar2;
            param_2[1] = param_2[1] + iVar3;
            param_2[2] = param_2[2] + iVar4;
            param_2[3] = param_2[3] + iVar7;
            uVar10 = piVar1[5] + uVar10;
            uVar9 = *(piVar1 + 0x2c) + uVar9;
            uVar8 = piVar1[6] + uVar8;
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            *in_x6 = extraout_w8_00;
        } while (uVar6 < extraout_w8_00);
    }
    else {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
    }
    param_2[6] = uVar10;
    param_2[7] = uVar9;
    param_2[0x17] = uVar8;
    return;
}


// ===== sym.miwill_get_drvinfo.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003668 (size 8) =====

void sym.miwill_get_drvinfo.1602faf915cac25c49163d565a1fdcd8.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    strscpy(param_2 + 4,"miwill",0x20);
    strscpy(param_2 + 0x24,0x800100b,0x20);
    return;
}


// ===== sym.minet_thread.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt @ 0x08003670 (size 8) =====

ulong sym.minet_thread.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt(void)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000fe4,"minet_thread");
    uVar1 = kthread_should_stop();
    while ((uVar1 & 1) == 0) {
        schedule_timeout_interruptible(0x1d4c);
        arg1 = sym.merge_app_flow();
        sym.minet_notify_app_flow(arg1);
        uVar1 = kthread_should_stop();
    }
    return 0;
}


// ===== sym.miwill_change_mode.cfi_jt @ 0x08003678 (size 8) =====

int sym.miwill_change_mode.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(param_1 + 0x68);
    if (((pcVar4 == NULL) || (pcVar4 == obj.dummy_mode)) || (iVar1 = strcmp(*pcVar4,param_2), iVar1 != 0)) {
        uVar2 = try_module_get(obj.__this_module);
        if ((uVar2 & 1) != 0) {
            _raw_spin_lock(obj.mode_list_lock);
            for (pcVar4 = _obj.mode_list_lock; pcVar4 != obj.mode_list_lock; pcVar4 = *pcVar4) {
                puVar6 = *(pcVar4 + 0x10);
                iVar1 = strcmp(*puVar6,param_2);
                if (iVar1 == 0) {
                    puVar5 = NULL;
                    if (pcVar4 != NULL) {
                        puVar5 = puVar6;
                    }
                    goto code_r0x08003ee4;
                }
            }
            puVar5 = NULL;
code_r0x08003ee4:
            _raw_spin_unlock(obj.mode_list_lock);
            module_put(obj.__this_module);
            if (puVar5 != NULL) {
                _printk(0x8000b9c,"miwill_set_no_mode");
                pcVar4 = *(param_1 + 0x68);
                if (((pcVar4 != NULL) && (pcVar4 != obj.dummy_mode)) &&
                   (pcVar4 = *(*(pcVar4 + 0x20) + 8), pcVar4 != NULL)) {
                    if (pcVar4 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x371f10f79906e857,pcVar4,0x8000790);
                    }
                    (*pcVar4)(param_1);
                }
                *(param_1 + 0x68) = obj.dummy_mode;
                pcVar4 = *puVar5[4];
                if (pcVar4 != NULL) {
                    if (pcVar4 != sym.__typeid__ZTSFiP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x5af8fd12f777bf28,pcVar4,0x8000770);
                    }
                    iVar1 = (*pcVar4)(param_1);
                    if (iVar1 != 0) {
                        uVar3 = 0x8000d22;
                        goto code_r0x08003fac;
                    }
                }
                iVar1 = 0;
                uVar3 = 0x8000f88;
                *(param_1 + 0x68) = puVar5;
                goto code_r0x08003fac;
            }
        }
        iVar1 = -0x16;
        uVar3 = 0x800125f;
    }
    else {
        iVar1 = -0x16;
        uVar3 = 0x800177c;
    }
code_r0x08003fac:
    _printk(uVar3,"miwill_change_mode",param_2);
    return iVar1;
}


// ===== sym.init_module.cfi_jt @ 0x08003680 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    iVar2 = rtnl_link_register(obj.miwill_link_ops);
    if (iVar2 < 0) goto code_r0x0800984c;
    if ((_segment.ehdr < 1) || (iVar2 != 0)) {
code_r0x08009814:
        iVar2 = sym.miwill_nl_init();
        if (((iVar2 == 0) && (iVar2 = sym.minet_init(), iVar2 == 0)) &&
           (iVar2 = sym.miwill_mode_register(0x8001920), iVar2 == 0)) {
            _printk(0x800179a,"miwill_init_module");
            return 0;
        }
    }
    else {
        iVar3 = 1;
        do {
            iVar2 = sym.miwill_init_one();
            bVar1 = iVar3 < _segment.ehdr;
            iVar3 = iVar3 + 1;
        } while (bVar1 && iVar2 == 0);
        if (-1 < iVar2) goto code_r0x08009814;
    }
    rtnl_link_unregister(obj.miwill_link_ops);
code_r0x0800984c:
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    return iVar2;
}


// ===== sym.miwill_options_register.cfi_jt @ 0x08003688 (size 8) =====

int sym.miwill_options_register.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong *puVar8;
    ulong uVar9;
    int iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 >> 0x3d == 0) && (iVar5 = __kmalloc(param_3 << 3,0xdc0), iVar5 != 0)) {
        if (param_3 != 0) {
            uVar11 = 0;
            piVar14 = param_1 + 0x48;
            do {
                piVar13 = *piVar14;
                iVar10 = uVar11;
                if (piVar13 != piVar14) {
                    uVar9 = *(param_2 + 0x10);
                    do {
                        iVar4 = strcmp(piVar13[2],uVar9);
                        if (iVar4 == 0) {
                            if (piVar13 != NULL) {
                                iVar4 = -0x11;
                                goto joined_r0x08003944;
                            }
                            break;
                        }
                        piVar13 = *piVar13;
                    } while (piVar13 != piVar14);
                }
                iVar6 = kmemdup(param_2,0x40,0xcc0);
                *(iVar5 + uVar11 * 8) = iVar6;
                if (iVar6 == 0) {
                    iVar4 = -0xc;
                    goto joined_r0x08003944;
                }
                param_2 = param_2 + 0x40;
                uVar11 = iVar10 + 1;
            } while (uVar11 < param_3);
            uVar11 = 0;
code_r0x080038d0:
            piVar13 = *(iVar5 + uVar11 * 8);
            uVar12 = uVar11;
            if (piVar13[3] != '\0') goto code_r0x080038f4;
            iVar4 = sym.__miwill_option_inst_add(param_1,piVar13,0);
            if (iVar4 == 0) {
                piVar13 = *(iVar5 + uVar11 * 8);
                goto code_r0x080038f4;
            }
            piVar7 = param_1 + 0x58;
            piVar14 = *piVar7;
            while (piVar2 = piVar14, piVar2 != piVar7) {
                piVar14 = *piVar2;
                if (piVar2[2] == piVar13) {
                    uVar11 = __list_del_entry_valid(piVar2);
                    if ((uVar11 & 1) != 0) {
                        iVar6 = *piVar2;
                        piVar3 = piVar2[1];
                        *(iVar6 + 8) = piVar3;
                        *piVar3 = iVar6;
                    }
                    *piVar2 = -0x2152ffffffffff00;
                    piVar2[1] = -0x2152fffffffffede;
                    kfree(piVar2);
                }
            }
            while (uVar12 = uVar12 - 1, -1 < uVar12) {
                if (*piVar7 != piVar7) {
                    iVar6 = *(iVar5 + uVar12 * 8);
                    piVar14 = *piVar7;
                    do {
                        piVar13 = *piVar14;
                        if (piVar14[2] == iVar6) {
                            uVar11 = __list_del_entry_valid(piVar14);
                            if ((uVar11 & 1) != 0) {
                                iVar1 = *piVar14;
                                piVar2 = piVar14[1];
                                *(iVar1 + 8) = piVar2;
                                *piVar2 = iVar1;
                            }
                            *piVar14 = -0x2152ffffffffff00;
                            piVar14[1] = -0x2152fffffffffede;
                            kfree(piVar14);
                        }
                        piVar14 = piVar13;
                    } while (piVar13 != piVar7);
                }
            }
            iVar10 = param_3;
joined_r0x08003944:
            if (-1 < iVar10 - 1U) {
                iVar6 = iVar10 - 1U << 3;
                do {
                    kfree(*(iVar5 + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            goto code_r0x08003990;
        }
code_r0x08003924:
        iVar4 = 0;
code_r0x08003990:
        kfree(iVar5);
    }
    else {
        iVar4 = -0xc;
    }
    return iVar4;
code_r0x080038f4:
    puVar8 = *(param_1 + 0x50);
    uVar11 = __list_add_valid(piVar13,puVar8,piVar14);
    if ((uVar11 & 1) != 0) {
        *(param_1 + 0x50) = piVar13;
        *piVar13 = piVar14;
        piVar13[1] = puVar8;
        *puVar8 = piVar13;
    }
    uVar11 = uVar12 + 1;
    if (param_3 <= uVar11) goto code_r0x08003924;
    goto code_r0x080038d0;
}


// ===== sym.miwill_change_carrier.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003690 (size 8) =====

ulong sym.miwill_change_carrier.1602faf915cac25c49163d565a1fdcd8.cfi_jt(ulong param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800131a,"miwill_change_carrier",param_1,param_2 & 1);
    if ((param_2 & 1) == 0) {
        netif_carrier_off(param_1);
    }
    else {
        netif_carrier_on();
    }
    return 0;
}


// ===== sym.miwill_select_queue.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003698 (size 8) =====

void sym.miwill_select_queue.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    
    uVar2 = *(param_2 + 0x7c);
    *(param_2 + 0x2c) = uVar2;
    uVar1 = *(param_1 + 0x3cc);
    uVar3 = 0;
    if (uVar2 != 0) {
        uVar3 = uVar2 - 1;
    }
    if (uVar1 <= (uVar3 & 0xffff)) {
        do {
            uVar3 = uVar3 - uVar1;
        } while ((uVar1 & 0xffff) <= (uVar3 & 0xffff));
    }
    return;
}


// ===== sym.miwill_mode_register.cfi_jt @ 0x080036a0 (size 8) =====

ulong sym.miwill_mode_register.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong *puVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *param_1;
    uVar2 = *puVar7;
    while (uVar2 != 0) {
        puVar7 = puVar7 + 1;
        if ((((_ctype[uVar2] & 3) == 0) && (9 < uVar2 - 0x30)) && (uVar2 != 0x5f)) {
            return 0xffffffea;
        }
        uVar2 = *puVar7;
    }
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x18);
    if (puVar5 == NULL) {
        uVar8 = 0xfffffff4;
    }
    else {
        _raw_spin_lock(obj.mode_list_lock);
        if (_obj.mode_list_lock != obj.mode_list_lock) {
            uVar8 = *param_1;
            pcVar9 = _obj.mode_list_lock;
            do {
                iVar4 = strcmp(**(pcVar9 + 0x10),uVar8);
                if (iVar4 == 0) {
                    if (pcVar9 != NULL) {
                        kfree(puVar5);
                        _raw_spin_unlock(obj.mode_list_lock);
                        return 0xffffffef;
                    }
                    break;
                }
                pcVar9 = *pcVar9;
            } while (pcVar9 != obj.mode_list_lock);
        }
        puVar3 = _obj.dupi_bitmap1;
        puVar5[2] = param_1;
        uVar6 = __list_add_valid(puVar5,puVar3,obj.mode_list_lock);
        if ((uVar6 & 1) != 0) {
            _obj.dupi_bitmap1 = puVar5;
            *puVar5 = obj.mode_list_lock;
            puVar5[1] = puVar3;
            *puVar3 = puVar5;
        }
        _raw_spin_unlock(obj.mode_list_lock);
        _printk(0x800089c,*param_1);
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.miwill_validate.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036a8 (size 8) =====

ulong sym.miwill_validate.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    int16_t *piVar1;
    
    piVar1 = *(param_1 + 8);
    if (piVar1 != NULL) {
        if (*piVar1 != 10) {
            return 0xffffffea;
        }
        if (((*(piVar1 + 2) & 1) != 0) || (*(piVar1 + 2) == 0 && piVar1[4] == 0)) {
            return 0xffffff9d;
        }
    }
    return 0;
}


// ===== sym.miwill_fix_features.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036b0 (size 8) =====

void sym.miwill_fix_features.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,uint64_t param_2)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_2 & 0xfffffdf9bfc0fb9e | 0x20000200000;
    __rcu_read_lock();
    for (piVar2 = *(param_1 + 0xa38); param_1 + 0xa38 != piVar2; piVar2 = *piVar2) {
        uVar1 = netdev_increment_features(uVar1,*(piVar2[-3] + 0xe0),param_2);
    }
    __rcu_read_unlock();
    netdev_increment_features(uVar1,0x1d0000,param_2);
    return;
}


// ===== sym.__typeid__ZTSFiP6miwillE_global_addr @ 0x080036b8 (size 8) =====

ulong sym.__typeid__ZTSFiP6miwillE_global_addr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8008518 = 0;
    *0x8008520 = obj.dupi_bitmap1;
    *0x8008528 = obj.dupi_bitmap2;
    *0x8008530 = 0x8004518;
    *0x8008538 = 0x8006518;
    memset(obj.dupi_bitmap1,0,0x2000);
    memset(obj.dupi_bitmap2,0,0x2000);
    memset(0x8004518,0,0x2000);
    memset(0x8006518,0,0x2000);
    init_timer_key(0x8008548,sym.timer_callback.cfi_jt,0,0,0);
    *0x8008558 = _ethtool_op_get_ts_info + 0x3e;
    add_timer(0x8008548);
    *0x8008540 = 0;
    _printk(0x8000b9c,"red_init");
    return 0;
}


// ===== sym.__typeid__ZTSFvP6miwillE_global_addr @ 0x080036c0 (size 8) =====

void sym.__typeid__ZTSFvP6miwillE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x68) + 0x28);
    memset(*(iVar1 + 8),0,0x2000);
    memset(*(iVar1 + 0x10),0,0x2000);
    memset(*(iVar1 + 0x18),0,0x2000);
    memset(*(iVar1 + 0x20),0,0x2000);
    del_timer(*(*(param_1 + 0x68) + 0x28) + 0x30);
    _printk(0x8000b9c,"red_exit");
    return;
}


// ===== sym.miwill_xmit.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036c8 (size 8) =====

ulong sym.miwill_xmit.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint *puVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = *(param_2 + 0xa08);
    iVar2 = tpidr_el1;
    uVar3 = *(param_1 + 0x70);
    if ((*(param_1 + 0xa4) & 0xce00000) == 0x8000000) {
        if ((*(param_1 + 0x7e) & 1) == 0) {
            bVar6 = false;
        }
        else {
            uVar9 = *(*(param_1 + 0xd0) + *(param_1 + 0xcc) + 0x20);
            bVar6 = (uVar9 & 0xffff) - (uVar9 >> 0x10) != 1;
        }
        uVar9 = *(param_1 + 0xd8) - *(param_1 + 0xd0);
        iVar7 = 0;
        if (uVar9 < 9) {
            iVar7 = 8 - uVar9;
        }
        if ((iVar7 == 0 && !bVar6) || (iVar7 = pskb_expand_head(param_1,iVar7 + 0x3fU & 0x40,0,0xa20), iVar7 == 0))
        {
            skb_push(param_1,8);
            puVar10 = *(param_1 + 0xd8);
            *(param_1 + 0xb6) = puVar10 - *(param_1 + 0xd0);
            *(param_1 + 0xb4) = *(param_1 + 0xb4) + -8;
            *(puVar10 + 0xc) = 0xe1ee;
            *puVar10 = puVar10[1];
            *(puVar10 + 1) = *(puVar10 + 2);
            *(puVar10 + 0xe) = *(puVar10 + 0xe) & 0xf | 0x10;
            *(param_1 + 0xb0) = 0xe1ee;
            *(param_1 + 0x8c) = 7;
            if (param_1 != 0) {
                iVar11 = *(param_1 + 0xd8);
                *(iVar11 + 0xf) = 0;
                *(iVar11 + 0x11) = 0;
                *(iVar11 + 0xe) = *(iVar11 + 0xe) & 0xf0 | 0xe;
                for (piVar12 = *(param_2 + 0xa38);
                    (param_2 + 0xa38 != piVar12 && (piVar16 = piVar12 + -3, piVar16 != NULL)); piVar12 = *piVar12) {
                    if ((*(piVar12 + 4) != '\0') && (*(piVar12 + 3) != -1)) {
                        if (*piVar16 == 0) {
                            _printk(0x8000db1,"miwill_dev_queue_xmit");
                            consume_skb(param_1);
                            iVar7 = -1;
                        }
                        else {
                            *(param_1 + 0x10) = *piVar16;
                            puVar13 = *(param_1 + 0xd8);
                            uVar4 = *(param_2 + 0xa80);
                            *(puVar13 + 1) = *(param_2 + 0xa84);
                            *puVar13 = uVar4;
                            uVar4 = **(*piVar16 + 0x308);
                            *(puVar13 + 10) = *(*(*piVar16 + 0x308) + 1);
                            *(puVar13 + 6) = uVar4;
                            *(puVar13 + 0x12) = *(*(*(param_2 + 0xa00) + 0x308) + 4);
                            iVar7 = dev_queue_xmit(param_1);
                            if (iVar7 == 0) goto code_r0x08005980;
                        }
                        _printk(0x80010d8,"miwill_pass_transmit",*piVar16,iVar7);
                        goto code_r0x08005ab8;
                    }
                }
                __dev_kfree_skb_any(param_1,1);
                goto code_r0x08005ab8;
            }
        }
        else {
            consume_skb(param_1);
        }
        _printk(0x8001371,"miwill_pass_transmit");
    }
    else {
        pcVar15 = *(*(*(param_2 + 0xa68) + 0x20) + 0x18);
        if (1 < (pcVar15 + -0x80036d8 >> 3 | pcVar15 << 0x3d)) {
            __cfi_slowpath_diag(0x6e21bcbc700b56cd,pcVar15,0x8000850);
        }
        uVar8 = (*pcVar15)(param_2 + 0xa00,param_1);
        if ((uVar8 & 1) != 0) {
code_r0x08005980:
            iVar2 = iVar2 + iVar14;
            *(iVar2 + 0x18) = *(iVar2 + 0x18) + 1;
            *(iVar2 + 0x20) = *(iVar2 + 0x20) + uVar3;
            return 0;
        }
    }
code_r0x08005ab8:
    iVar2 = sp_el0;
    piVar12 = iVar2 + 0x10;
    *(iVar2 + 0x10) = *piVar12 + 1;
    iVar14 = tpidr_el1;
    piVar1 = *(param_2 + 0xa08) + iVar14 + 0x2c;
    do {
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    iVar14 = *piVar12;
    *(iVar2 + 0x10) = iVar14 + -1;
    if ((iVar14 + -1 == 0) || (*piVar12 == 0)) {
        preempt_schedule_notrace();
    }
    return 0;
}


// ===== sym.miwill_mode_unregister.cfi_jt @ 0x080036d0 (size 8) =====

void sym.miwill_mode_unregister.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.mode_list_lock);
    if (_obj.mode_list_lock != obj.mode_list_lock) {
        uVar6 = *param_1;
        pcVar5 = _obj.mode_list_lock;
        do {
            iVar3 = strcmp(**(pcVar5 + 0x10),uVar6);
            if (iVar3 == 0) {
                if (pcVar5 != NULL) {
                    uVar4 = __list_del_entry_valid(pcVar5);
                    if ((uVar4 & 1) != 0) {
                        iVar1 = *pcVar5;
                        piVar2 = *(pcVar5 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *pcVar5 = pcVar5;
                    *(pcVar5 + 8) = pcVar5;
                    kfree(pcVar5);
                }
                break;
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.mode_list_lock);
    }
    _raw_spin_unlock(obj.mode_list_lock);
    _printk(0x80009b7,*param_1);
    return;
}


// ===== sym.__typeid__ZTSFbP6miwillP7sk_buffE_global_addr @ 0x080036d8 (size 8) =====

ulong sym.__typeid__ZTSFbP6miwillP7sk_buffE_global_addr(int64_t *param_1,int64_t param_2)

{
    int64_t *piVar1;
    char *pcVar2;
    uint uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint *puVar11;
    ulong *in_x18;
    int64_t *piVar12;
    uint16_t *puVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar13 = *(param_1[0xd] + 0x28);
    if ((*(param_2 + 0x7e) & 1) == 0) {
        bVar6 = false;
    }
    else {
        uVar8 = *(*(param_2 + 0xd0) + *(param_2 + 0xcc) + 0x20);
        bVar6 = (uVar8 & 0xffff) - (uVar8 >> 0x10) != 1;
    }
    uVar8 = *(param_2 + 0xd8) - *(param_2 + 0xd0);
    iVar7 = 0;
    if (uVar8 < 9) {
        iVar7 = 8 - uVar8;
    }
    if ((iVar7 == 0 && !bVar6) || (iVar7 = pskb_expand_head(param_2,iVar7 + 0x3fU & 0x40,0,0xa20), iVar7 == 0)) {
        skb_push(param_2,8);
        puVar9 = *(param_2 + 0xd8);
        *(param_2 + 0xb6) = puVar9 - *(param_2 + 0xd0);
        *(param_2 + 0xb4) = *(param_2 + 0xb4) + -8;
        *(puVar9 + 0xc) = 0xe1ee;
        *puVar9 = puVar9[1];
        *(puVar9 + 1) = *(puVar9 + 2);
        *(puVar9 + 0xe) = *(puVar9 + 0xe) & 0xf | 0x10;
        *(param_2 + 0xb0) = 0xe1ee;
        *(param_2 + 0x8c) = 7;
        if (param_2 != 0) {
            iVar10 = *(param_2 + 0xd8);
            piVar1 = param_1 + 2;
            *(iVar10 + 0xf) = 0;
            *(iVar10 + 0xe) = *(iVar10 + 0xe) & 0xf0 | 1;
            *(iVar10 + 0x10) = *puVar13 >> 8 | *puVar13 << 8;
            _raw_spin_lock_bh(piVar1);
            piVar14 = param_1 + 7;
            piVar12 = *piVar14;
            if (piVar14 != piVar12) {
                do {
                    piVar4 = piVar12 + -3;
                    if (piVar4 == NULL) {
                        _raw_spin_unlock_bh(piVar1);
                        __dev_kfree_skb_any(param_2,1);
                        return 0;
                    }
                    if (((piVar12[4] != '\0') && (piVar12[3] != -1)) &&
                       (iVar10 = skb_copy(param_2,0xa20), iVar10 != 0)) {
                        if (*piVar4 == 0) {
                            _printk(0x8000db1,"miwill_dev_queue_xmit");
                            consume_skb(iVar10);
                            iVar7 = -1;
                        }
                        else {
                            *(iVar10 + 0x10) = *piVar4;
                            puVar11 = *(iVar10 + 0xd8);
                            iVar5 = param_1[0x10];
                            *(puVar11 + 1) = *(param_1 + 0x84);
                            *puVar11 = iVar5;
                            uVar3 = **(*piVar4 + 0x308);
                            *(puVar11 + 10) = *(*(*piVar4 + 0x308) + 1);
                            *(puVar11 + 6) = uVar3;
                            *(puVar11 + 0x12) = *(*(*param_1 + 0x308) + 4);
                            iVar7 = dev_queue_xmit(iVar10);
                            if (iVar7 == 0) goto code_r0x08004a90;
                        }
                        pcVar2 = "port->dev is NULL";
                        if (*piVar4 != NULL) {
                            pcVar2 = *piVar4;
                        }
                        _printk(0x800161b,"red_transmit",pcVar2,iVar7);
                    }
code_r0x08004a90:
                    piVar12 = *piVar12;
                } while (piVar14 != piVar12);
            }
            _raw_spin_unlock_bh(piVar1);
            *puVar13 = *puVar13 + 1;
            consume_skb(param_2);
            return 1;
        }
    }
    else {
        consume_skb(param_2);
    }
    _printk(0x8001371,"red_transmit");
    return 0;
}


// ===== sym.miwill_dummy_transmit.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036e0 (size 8) =====

ulong sym.miwill_dummy_transmit.1602faf915cac25c49163d565a1fdcd8.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __dev_kfree_skb_any(param_2,1);
    return 0;
}


// ===== sym.timer_callback.cfi_jt @ 0x080036e8 (size 8) =====

void sym.timer_callback.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.bitmap_lock);
    memset(*(param_1 + (~*(param_1 + -8) & 3) * 8 + -0x28),0,0x2000);
    *(param_1 + -8) = *(param_1 + -8) + 1;
    _raw_spin_unlock(obj.bitmap_lock);
    mod_timer(param_1,_ethtool_op_get_ts_info + 0x3e);
    return;
}


// ===== sym.miwill_timer.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036f0 (size 8) =====

void sym.miwill_timer.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -2) + 1;
    *(param_1 + -2) = uVar1;
    if (3 < uVar1) {
        sym.miwill_nl_notify_reset(1);
    }
    sym.miwill_mframe(param_1 + -0x98,1);
    mod_timer(param_1,_ethtool_op_get_ts_info + 0x9c4);
    return;
}


// ===== sym.miwill_handle_frame.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080036f8 (size 8) =====

uint64_t sym.miwill_handle_frame.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t *param_1)

{
    int16_t iVar1;
    int16_t iVar2;
    int64_t *piVar3;
    int *piVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    code *pcVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *param_1;
    if (*(iVar15 + 0xe4) == 1) {
        iVar12 = iVar15;
        if (iVar15 == 0) {
            return 0;
        }
    }
    else {
        iVar12 = skb_clone(iVar15,0xa20);
        if (iVar12 == 0) {
            kfree_skb(iVar15);
            return 0;
        }
        consume_skb(iVar15);
    }
    *param_1 = iVar12;
    puVar10 = *(*(iVar12 + 0x10) + 0x340);
    puVar13 = puVar10[5];
    if (*(puVar10 + 6) == -1) {
        _printk(0x800087b,"miwill_handle_frame",*puVar10);
code_r0x08006eb8:
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x30;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar3 == 0)) {
            preempt_schedule_notrace();
        }
        return 2;
    }
    puVar11 = *(iVar12 + 0xd8);
    if (*(puVar11 + -2) == -0x1e12) {
        if ((*puVar11 & 0xf) == 0xe) {
            *(iVar12 + 0xb0) = *(puVar11 + 6);
            uVar5 = *(puVar11 + -6);
            *(puVar11 + -6) = *(puVar11 + -0xe);
            *(puVar11 + 2) = uVar5;
            skb_pull(iVar12,8);
            iVar1 = *(iVar12 + 0xb6) + 8;
            iVar2 = *(iVar12 + 0xb4) + 8;
            *(iVar12 + 0xb6) = iVar1;
            *(iVar12 + 0xb4) = iVar2;
            *(iVar12 + 0xb2) = *(iVar12 + 0xb2) + 8;
            *(iVar12 + 0x78) = iVar2 - iVar1;
code_r0x08006e44:
            iVar15 = tpidr_el1;
            piVar3 = iVar15 + puVar13[1];
            *piVar3 = *piVar3 + 1;
            piVar3[1] = piVar3[1] + *(iVar12 + 0x70);
            if ((*(iVar12 + 0x80) & 7) == 2) {
                piVar3[2] = piVar3[2] + 1;
            }
            *(iVar12 + 0x10) = *puVar13;
            *(iVar12 + 0xa4) = *(iVar12 + 0xa4) | 0x1000000;
            return 1;
        }
        if ((*puVar11 & 0xf) == 0xf) {
            iVar15 = *(iVar12 + 0xd8);
            if (*(iVar15 + 1) == '\x03') {
                _printk(0x800186d,"miwill_mframe_handler",3,*(iVar15 + 8),*(iVar15 + 9),*(iVar15 + 10),
                        *(iVar15 + 0xb));
                sym.miwill_nl_notify_reset(2);
            }
            else if (*(iVar15 + 1) == '\x02') {
                iVar17 = *(*(*(iVar12 + 0x10) + 0x340) + 0x28);
                _printk(0x800186d,"miwill_mframe_handler",2,*(iVar15 + 8),*(iVar15 + 9),*(iVar15 + 10),
                        *(iVar15 + 0xb));
                *(iVar17 + 0x96) = 0;
                *(iVar17 + 0x92) = *(iVar15 + 8);
                sym.miwill_nl_notify_ip(*(iVar15 + 8));
            }
            else {
                _printk(0x8000a51,"miwill_mframe_handler");
            }
            kfree_skb(iVar12);
            uVar9 = 0;
        }
        else {
            pcVar16 = *(*(puVar13[0xd] + 0x20) + 0x10);
            if (1 < (pcVar16 + -0x8003740 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0xeb56f9d2dfba3773,pcVar16,0x8000810);
            }
            uVar9 = (*pcVar16)(puVar13,puVar10,iVar12);
            iVar8 = uVar9;
            if (iVar8 == 3) goto code_r0x08006d9c;
            if (iVar8 == 2) goto code_r0x08006eb8;
            if (iVar8 == 1) goto code_r0x08006e44;
        }
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x28;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (uVar14 = uVar9, *piVar3 == 0)) {
            uVar14 = uVar9 & 0xffffffff;
            preempt_schedule_notrace(uVar9);
        }
    }
    else {
code_r0x08006d9c:
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x30;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar3 == 0)) {
            preempt_schedule_notrace();
        }
        uVar14 = 3;
    }
    return uVar14;
}


// ===== sym.ethtool_op_get_ts_info.cfi_jt @ 0x08003700 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.ethtool_op_get_ts_info.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.miwill_change_mtu.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003708 (size 8) =====

int sym.miwill_change_mtu.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,uint param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0xa10;
    _raw_spin_lock_bh(iVar1);
    piVar2 = param_1 + 0xa38;
    piVar4 = piVar2;
    do {
        piVar4 = *piVar4;
        if (piVar4 == piVar2) {
            _raw_spin_unlock_bh(iVar1);
            *(param_1 + 0xd8) = param_2;
            return 0;
        }
        iVar3 = dev_set_mtu(piVar4[-3],param_2);
    } while (iVar3 == 0);
    _printk(0x8001352,"miwill_change_mtu",piVar4[-3]);
    for (piVar4 = piVar4[1]; piVar4 != piVar2; piVar4 = piVar4[1]) {
        dev_set_mtu(piVar4[-3],*(param_1 + 0xd8));
    }
    _raw_spin_unlock_bh(iVar1);
    return iVar3;
}


// ===== sym.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003710 (size 8) =====

ulong sym.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt(ulong param_1,ulong param_2,int64_t *param_3)

{
    uint32_t uVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t arg1;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *param_3;
    if (((*(arg2 + 0xc5) >> 5 & 1) != 0) && (arg1 = *(arg2 + 0x340), arg1 != 0)) {
        uVar1 = param_2 - 1;
        if (uVar1 < 0x22) {
            pcVar2 = *(uVar1 * 8 + 0x8002270);
        }
        else {
            pcVar2 = "UNKNOWN_NETDEV_EVENT";
        }
        _printk(0x80014a3,"miwill_device_event",pcVar2);
        _printk(0x80014b5,"miwill_device_event",*(arg2 + 0x228));
        switch(param_2) {
        case 1:
        case 4:
            if ((*(arg2 + 0x228) == '\x06') || (*(arg2 + 0x228) == '\0')) {
                sym.miwill_port_change(arg1,1);
            }
            break;
        case 2:
            sym.miwill_port_change(arg1,0);
            break;
        case 6:
            sym.miwill_port_change(arg1,0);
            sym.miwill_port_del(**(arg1 + 0x28),arg2);
        }
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003718 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.minet_cleanup();
    sym.miwill_nl_finit();
    rtnl_link_unregister(obj.miwill_link_ops);
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    sym.miwill_mode_unregister(0x8001920);
    _printk(0x800179a,"miwill_cleanup_module");
    return;
}


// ===== sym.__typeid__ZTSFiP6miwillP11miwill_portE_global_addr @ 0x08003720 (size 8) =====

ulong sym.__typeid__ZTSFiP6miwillP11miwill_portE_global_addr(int64_t *param_1,ulong *param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*param_1 == 0) || (iVar2 = *(*param_1 + 0x308), iVar2 == 0)) {
        _printk(0x8001026,*param_2);
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        *(param_2 + 0x34) = *(iVar2 + 4);
    }
    return uVar1;
}


// ===== sym.hook4.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt @ 0x08003728 (size 8) =====

ulong sym.hook4.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt(ulong param_1,int64_t param_2,char *param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
    if (iVar4 == 0) {
        return 1;
    }
    cVar3 = *param_3;
    if ((cVar3 == '\x01') && (*(iVar4 + 9) == '\x11')) {
        if ((*(param_2 + 0xa7) & 1) == 0) {
            return 1;
        }
        uVar2 = *(iVar4 + 0xc);
        if ((uVar2 & 0xf0ff) == 0x10ac) {
            return 1;
        }
        if ((uVar2 & 0xff) == 10) {
            return 1;
        }
        if (uVar2 == 0xffffffff) {
            return 1;
        }
        if ((uVar2 & 0xffffff) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xff) == 0x7f) {
            return 1;
        }
        if ((uVar2 & 0xf0) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xa8c0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xfea9) {
            return 1;
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar6 = tpidr_el1;
        if (*(cpu_number + iVar6) < 0x20) {
            iVar7 = *0x8008000 + *(cpu_number + iVar6) * 0x18;
            iVar6 = iVar7 + 0x14;
            _raw_spin_lock_bh(iVar6);
            piVar1 = iVar7 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,param_2,param_3);
            }
            _raw_spin_unlock_bh(iVar6);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    else {
        iVar6 = *(param_2 + 0x18);
        if (iVar6 == 0) {
            return 1;
        }
        if ((*(iVar6 + 0x12) == '\f') && (iVar6 = *(iVar6 + 0x60), iVar6 == 0)) {
            return 1;
        }
        if ((*(iVar4 + 9) != '\x11') && (*(iVar4 + 9) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar6 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar6 + 0x22a) - 1) {
            return 1;
        }
        if (cVar3 == '\x03') {
            uVar2 = *(iVar4 + 0x10);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        if (cVar3 == '\x01') {
            uVar2 = *(iVar4 + 0xc);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar7 = tpidr_el1;
        if (*(cpu_number + iVar7) < 0x20) {
            iVar8 = *0x8008000 + *(cpu_number + iVar7) * 0x18;
            iVar7 = iVar8 + 0x14;
            _raw_spin_lock_bh(iVar7);
            piVar1 = iVar8 + 0x18;
            piVar5 = piVar1;
            do {
                piVar5 = *piVar5;
                if (piVar5 == piVar1) goto code_r0x080090e8;
            } while (*(piVar5 + -0x1c) != *(iVar6 + 600));
            if (piVar5 + -4 != NULL) {
                sym.app_flow_stat(piVar5 + -4,param_2,param_3);
            }
code_r0x080090e8:
            _raw_spin_unlock_bh(iVar7);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    if (iVar4 != 0) {
        return 1;
    }
code_r0x08009130:
    preempt_schedule();
    return 1;
}


// ===== sym.hook6.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt @ 0x08003730 (size 8) =====

ulong sym.hook6.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt(ulong param_1,int64_t param_2,char *param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
    if (iVar2 == 0) {
        return 1;
    }
    if ((*param_3 == '\x01') && (*(iVar2 + 6) == '\x11')) {
        if ((*(param_2 + 0xa7) & 1) == 0) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar4 = tpidr_el1;
        if (*(cpu_number + iVar4) < 0x20) {
            iVar5 = *0x8008000 + *(cpu_number + iVar4) * 0x18;
            iVar4 = iVar5 + 0x14;
            _raw_spin_lock_bh(iVar4);
            piVar1 = iVar5 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,param_2,param_3);
            }
            _raw_spin_unlock_bh(iVar4);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    else {
        iVar4 = *(param_2 + 0x18);
        if (iVar4 == 0) {
            return 1;
        }
        if ((*(iVar4 + 0x12) == '\f') && (iVar4 = *(iVar4 + 0x60), iVar4 == 0)) {
            return 1;
        }
        if ((*(iVar2 + 6) != '\x11') && (*(iVar2 + 6) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar4 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar4 + 0x22a) - 1) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar5 = tpidr_el1;
        if (*(cpu_number + iVar5) < 0x20) {
            iVar6 = *0x8008000 + *(cpu_number + iVar5) * 0x18;
            iVar5 = iVar6 + 0x14;
            _raw_spin_lock_bh(iVar5);
            piVar1 = iVar6 + 0x18;
            piVar3 = piVar1;
            do {
                piVar3 = *piVar3;
                if (piVar3 == piVar1) goto code_r0x08009320;
            } while (*(piVar3 + -0x1c) != *(iVar4 + 600));
            if (piVar3 + -4 != NULL) {
                sym.app_flow_stat(piVar3 + -4,param_2,param_3);
            }
code_r0x08009320:
            _raw_spin_unlock_bh(iVar5);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    if (iVar2 != 0) {
        return 1;
    }
code_r0x08009368:
    preempt_schedule();
    return 1;
}


// ===== sym.miwill_change_rx_flags.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003738 (size 8) =====

void sym.miwill_change_rx_flags.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (piVar1 = *(param_1 + 0xa38); param_1 + 0xa38 != piVar1; piVar1 = *piVar1) {
        if ((param_2 >> 8 & 1) != 0) {
            _printk(0x80018ab,"miwill_change_rx_flags",param_1);
        }
        if ((param_2 >> 9 & 1) != 0) {
            _printk(0x8001714,"miwill_change_rx_flags",param_1);
        }
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.__typeid__ZTSF17rx_handler_resultP6miwillP11miwill_portP7sk_buffE_global_addr @ 0x08003740 (size 8) =====

bool sym.__typeid__ZTSF17rx_handler_resultP6miwillP11miwill_portP7sk_buffE_global_addr
               (int64_t param_1,ulong param_2,int64_t param_3)

{
    int16_t iVar1;
    int16_t iVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_3 + 0xd8);
    uVar4 = sym.is_duplicate(param_1,*(iVar7 + 2) >> 8 | (*(iVar7 + 2) & 0xff00ff) << 8);
    bVar3 = (uVar4 & 1) == 0;
    if (bVar3) {
        iVar5 = *(param_3 + 0xd8);
        *(param_3 + 0xb0) = *(iVar7 + 6);
        uVar6 = *(iVar7 + -0xe);
        *(iVar5 + 2) = *(iVar7 + -6);
        *(iVar5 + -6) = uVar6;
        skb_pull(param_3,8);
        iVar1 = *(param_3 + 0xb6) + 8;
        iVar2 = *(param_3 + 0xb4) + 8;
        *(param_3 + 0xb6) = iVar1;
        *(param_3 + 0xb4) = iVar2;
        *(param_3 + 0xb2) = *(param_3 + 0xb2) + 8;
        *(param_3 + 0x78) = iVar2 - iVar1;
    }
    else {
        consume_skb(param_3);
    }
    return bVar3;
}


// ===== sym.miwill_dummy_receive.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003748 (size 8) =====

ulong sym.miwill_dummy_receive.1602faf915cac25c49163d565a1fdcd8.cfi_jt(void)

{
    return 1;
}


// ===== sym.passthru_features_check.cfi_jt @ 0x08003750 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.passthru_features_check.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.miwill_dev_init.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003758 (size 8) =====

int sym.miwill_dev_init.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    int64_t *arg1;
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *in_x6;
    code *pcVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint32_t unaff_w23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0xa00;
    *(param_1 + 0xa00) = param_1;
    *(param_1 + 0xa10) = 0;
    _printk(0x8000b9c,"miwill_set_no_mode");
    pcVar5 = *(param_1 + 0xa68);
    if (((pcVar5 != NULL) && (pcVar5 != obj.dummy_mode)) && (pcVar5 = *(*(pcVar5 + 0x20) + 8), pcVar5 != NULL)) {
        if (pcVar5 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
            __cfi_slowpath_diag(0x371f10f79906e857,pcVar5,0x8000790);
        }
        (*pcVar5)(arg1);
    }
    *(param_1 + 0xa68) = obj.dummy_mode;
    *(param_1 + 0xa38) = param_1 + 0xa38;
    *(param_1 + 0xa40) = param_1 + 0xa38;
    *(param_1 + 0xa48) = param_1 + 0xa48;
    *(param_1 + 0xa50) = param_1 + 0xa48;
    *(param_1 + 0xa58) = param_1 + 0xa58;
    *(param_1 + 0xa60) = param_1 + 0xa58;
    iVar3 = __alloc_percpu_gfp(0x38,8,0xcc0);
    if (iVar3 != 0) {
        uVar4 = 0xffffffff;
        *in_x6 = unaff_w23;
        while( true ) {
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            if (unaff_w23 <= uVar4) break;
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8005628);
                (*pcVar5)();
            }
        }
    }
    *(param_1 + 0xa08) = iVar3;
    iVar2 = sym.miwill_options_register(arg1,0x8001ed0,5);
    if (iVar2 == 0) {
        if (*(param_1 + 0xa08) == 0) {
            iVar2 = -0xc;
        }
        else {
            uVar1 = *(*arg1 + 0x3c8) - 1;
            uVar6 = uVar1;
            if ((uVar1 != 0) && (iVar3 = __kmalloc(uVar6 << 4,0xcc0), iVar3 != 0)) {
                *(param_1 + 0xa78) = iVar3;
                do {
                    *iVar3 = iVar3;
                    uVar1 = uVar6 - 1;
                    uVar6 = uVar1;
                    *(iVar3 + 8) = iVar3;
                    iVar3 = iVar3 + 0x10;
                } while (uVar1 != 0);
            }
            init_timer_key(param_1 + 0xa98,sym.miwill_timer.1602faf915cac25c49163d565a1fdcd8.cfi_jt,0,0,0);
            iVar2 = 0;
        }
    }
    else {
        _printk(0x80014f4,"miwill_dev_init",iVar2);
    }
    return iVar2;
}


// ===== sym.miwill_open.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003760 (size 8) =====

ulong sym.miwill_open.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000b9c,"miwill_open");
    netif_carrier_on(param_1);
    if (*(param_1 + 0xaa0) == 0) {
        *(param_1 + 0xaa8) = _ethtool_op_get_ts_info + 500;
        add_timer(param_1 + 0xa98);
        *(param_1 + 0xa96) = 0;
    }
    return 0;
}


// ===== sym.miwill_stop.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003768 (size 8) =====

ulong sym.miwill_stop.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *arg1;
    int64_t *piVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0xa00;
    _printk(0x8000b9c,"miwill_stop");
    sym.miwill_mframe(arg1,3);
    netif_carrier_off(param_1);
    piVar2 = *(param_1 + 0xa38);
    while (piVar2 != param_1 + 0xa38) {
        piVar1 = piVar2 + -3;
        piVar2 = *piVar2;
        sym.miwill_port_del(*arg1,*piVar1);
    }
    _printk(0x8000b9c,"miwill_set_no_mode");
    pcVar3 = *(param_1 + 0xa68);
    if (((pcVar3 != NULL) && (pcVar3 != obj.dummy_mode)) && (pcVar3 = *(*(pcVar3 + 0x20) + 8), pcVar3 != NULL)) {
        if (pcVar3 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
            __cfi_slowpath_diag(0x371f10f79906e857,pcVar3,0x8000790);
        }
        (*pcVar3)(arg1);
    }
    *(param_1 + 0xa68) = obj.dummy_mode;
    del_timer_sync(param_1 + 0xa98);
    return 0;
}


// ===== sym.eth_mac_addr.cfi_jt @ 0x08003770 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.eth_mac_addr.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.miwill_setup.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003778 (size 8) =====

void sym.miwill_setup.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint8_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0x308);
    *(param_1 + 0x24c) = 1;
    get_random_bytes(puVar2,6);
    *puVar2 = *puVar2 & 0xfc | 2;
    ether_setup(param_1);
    *(param_1 + 0x11c) = 0xffff;
    *(param_1 + 200) = reloc.miwill_dev_init.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
    *(param_1 + 0x4ec) = 1;
    *(param_1 + 0x210) = obj.miwill_ethtool_ops;
    *(param_1 + 0x8d0) = obj.miwill_link_ops;
    uVar1 = *(param_1 + 0xe8) | 0x20fc00000;
    *(param_1 + 0xc0) = *(param_1 + 0xc0) & 0xffffef7d | 0x80;
    *(param_1 + 0xc4) = *(param_1 + 0xc4) & 0xffb767df | 0x489000;
    *(param_1 + 0xe0) = *(param_1 + 0xe0) | uVar1 | 0x4000;
    *(param_1 + 0xe8) = uVar1;
    return;
}


// ===== sym.miwill_set_rx_mode.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003780 (size 8) =====

void sym.miwill_set_rx_mode.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (piVar1 = *(param_1 + 0xa38); param_1 + 0xa38 != piVar1; piVar1 = *piVar1) {
        dev_uc_sync_multiple(piVar1[-3],param_1);
        dev_mc_sync_multiple(piVar1[-3],param_1);
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.miwill_dev_uninit.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x08003788 (size 8) =====

void sym.miwill_dev_uninit.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.miwill_options_unregister(param_1 + 0xa00,0x8001ed0,5);
    free_percpu(*(param_1 + 0x510));
    return;
}


// ===== sym.miwill_options_unregister.cfi_jt @ 0x08003790 (size 8) =====

void sym.miwill_options_unregister.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong uVar8;
    int iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 != 0) {
        iVar9 = 0;
        piVar1 = param_1 + 0x48;
        do {
            piVar7 = *piVar1;
            if (piVar7 != piVar1) {
                uVar8 = *(param_2 + 0x10);
                do {
                    iVar5 = strcmp(piVar7[2],uVar8);
                    if (iVar5 == 0) {
                        if (piVar7 != NULL) {
                            piVar10 = *(param_1 + 0x58);
                            while (piVar4 = piVar10, piVar4 != param_1 + 0x58) {
                                piVar10 = *piVar4;
                                if (piVar4[2] == piVar7) {
                                    uVar6 = __list_del_entry_valid(piVar4);
                                    if ((uVar6 & 1) != 0) {
                                        iVar2 = *piVar4;
                                        piVar3 = piVar4[1];
                                        *(iVar2 + 8) = piVar3;
                                        *piVar3 = iVar2;
                                    }
                                    *piVar4 = -0x2152ffffffffff00;
                                    piVar4[1] = -0x2152fffffffffede;
                                    kfree(piVar4);
                                }
                            }
                            uVar6 = __list_del_entry_valid(piVar7);
                            if ((uVar6 & 1) != 0) {
                                iVar2 = *piVar7;
                                piVar10 = piVar7[1];
                                *(iVar2 + 8) = piVar10;
                                *piVar10 = iVar2;
                            }
                            *piVar7 = -0x2152ffffffffff00;
                            piVar7[1] = -0x2152fffffffffede;
                            kfree(piVar7);
                        }
                        break;
                    }
                    piVar7 = *piVar7;
                } while (piVar7 != piVar1);
            }
            iVar9 = iVar9 + 1;
            param_2 = param_2 + 0x40;
        } while (iVar9 < param_3);
    }
    return;
}


// ===== sym.miwill_nl_cmd_options_get.44ed8c92635a217098b932cc522a04f9.cfi_jt @ 0x08003798 (size 8) =====

ulong sym.miwill_nl_cmd_options_get.44ed8c92635a217098b932cc522a04f9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80013ba,"miwill_nl_cmd_options_get",*(param_1 + 0xd8) + 0x18);
    return 0;
}


// ===== sym.miwill_nl_cmd_options_set.44ed8c92635a217098b932cc522a04f9.cfi_jt @ 0x080037a0 (size 8) =====

ulong sym.miwill_nl_cmd_options_set.44ed8c92635a217098b932cc522a04f9.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t arg2;
    int64_t arg3;
    uchar *arg4;
    ulong unaff_x30;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uchar *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    puStack_78 = NULL;
    iStack_70 = 0;
    iStack_88 = 0;
    iStack_80 = 0;
    uStack_98 = 0;
    iStack_90 = 0;
    uVar1 = __nla_parse(&uStack_98,9,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.miwill_genl_policy,0,
                        *(param_2 + 0x40));
    if (uVar1 != 0) goto code_r0x08007774;
    if (iStack_90 == 0) {
        _printk(0x8000d76,"miwill_nl_cmd_options_set");
        uVar1 = 0xffffffff;
        goto code_r0x08007774;
    }
    iVar2 = iStack_90 + 4;
    _printk(0x8000d5c,"miwill_nl_cmd_options_set",iVar2);
    iVar2 = sym.miwill_name_to_dev(iVar2);
    if (iVar2 == 0) {
        uVar1 = 0xffffffff;
        goto code_r0x08007774;
    }
    sym.dev_put(iVar2);
    if (iStack_88 == 0) {
        arg2 = 0xff;
        if (iStack_80 == 0) goto code_r0x08007810;
code_r0x08007884:
        arg3 = iStack_80 + 4;
        _printk(0x800139f,"miwill_nl_cmd_options_set",arg3);
    }
    else {
        arg2 = *(iStack_88 + 4);
        _printk(0x80011b9,"miwill_nl_cmd_options_set",arg2);
        if (iStack_80 != 0) goto code_r0x08007884;
code_r0x08007810:
        arg3 = 0;
    }
    arg4 = puStack_78;
    if (puStack_78 != NULL) {
        arg4 = puStack_78 + 4;
        _printk(0x80011d6,"miwill_nl_cmd_options_set",*arg4,puStack_78[5],puStack_78[6],puStack_78[7],
                puStack_78[8],puStack_78[9]);
    }
    if (iStack_70 != 0) {
        _printk(0x8000b69,"miwill_nl_cmd_options_set",iStack_70 + 4);
    }
    if (iStack_68 != 0) {
        _printk(0x8000d92,"miwill_nl_cmd_options_set",iStack_68 + 4);
    }
    uVar1 = sym.miwill_options_set(iVar2 + 0xa00,arg2,arg3,arg4);
code_r0x08007774:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.miwill_nl_cmd_options_get;
    _printk(0x80013ba,"miwill_nl_cmd_options_get",*(iVar2 + 0xd8) + 0x18);
    return 0;
}


// ===== sym.minet_nl_cmd_set.44ed8c92635a217098b932cc522a04f9.cfi_jt @ 0x080037a8 (size 8) =====

void sym.minet_nl_cmd_set.44ed8c92635a217098b932cc522a04f9.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_18 = *(iVar8 + 0x5e0);
    uStack_28 = 0;
    iStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar7 = __nla_parse(&uStack_68,9,*(param_1 + 0xd8) + 5,**(param_1 + 0xd8) + -0x14,obj.miwill_genl_policy,0,
                        *(param_2 + 0x40));
    if (uVar7 == 0) {
        if (iStack_20 == 0) {
            uVar7 = 0;
        }
        else {
            uVar7 = sym.minet_set_app(iStack_20 + 4);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_18) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.dev_put;
    if (iVar8 != 0) {
        iVar5 = sp_el0;
        piVar1 = iVar5 + 0x10;
        *(iVar5 + 0x10) = *piVar1 + 1;
        iVar6 = tpidr_el1;
        piVar2 = iVar6 + *(iVar8 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar8 = *piVar1;
        *(iVar5 + 0x10) = iVar8 + -1;
        if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFiP6miwillP18miwill_gsetter_ctxE_global_addr @ 0x080037b0 (size 8) =====

void sym.__typeid__ZTSFiP6miwillP18miwill_gsetter_ctxE_global_addr(int64_t param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_mode_set",*param_2);
    sym.miwill_change_mode(param_1,*param_2);
    return;
}


// ===== sym.miwill_option_port_5g_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037b8 (size 8) =====

void sym.miwill_option_port_5g_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_port_5g_set",*param_2);
    sym.miwill_port_add_by_name(param_1,*param_2,1);
    return;
}


// ===== sym.miwill_option_port_24g_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037c0 (size 8) =====

ulong sym.miwill_option_port_24g_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt(void)

{
    return 0;
}


// ===== sym.miwill_option_gw_addr_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037c8 (size 8) =====

ulong sym.miwill_option_gw_addr_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,ulong *param_2)

{
    ushort uVar1;
    uchar *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *param_2;
    _printk(0x8000abc,"miwill_option_gw_addr_set",*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5]);
    uVar1 = *(*param_2 + 1);
    *(param_1 + 0x80) = **param_2;
    *(param_1 + 0x84) = uVar1;
    return 0;
}


// ===== sym.miwill_option_mode_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037d0 (size 8) =====

ulong sym.miwill_option_mode_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,ulong *param_2)

{
    *param_2 = **(param_1 + 0x68);
    return 0;
}


// ===== sym.miwill_option_port_5g_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037d8 (size 8) =====

ulong sym.miwill_option_port_5g_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt(void)

{
    return 0;
}


// ===== sym.miwill_option_gw_addr_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037e0 (size 8) =====

ulong sym.miwill_option_gw_addr_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt(void)

{
    return 0;
}


// ===== sym.miwill_option_enable_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037e8 (size 8) =====

ulong sym.miwill_option_enable_get.1602faf915cac25c49163d565a1fdcd8.cfi_jt(void)

{
    return 0;
}


// ===== sym.miwill_option_enable_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037f0 (size 8) =====

uint sym.miwill_option_enable_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t *param_1,char *param_2)

{
    char cVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000a01,"miwill_option_enable_set",*param_2);
    cVar1 = *param_2;
    rtnl_lock();
    if (cVar1 == '\0') {
        sym.miwill_stop(*param_1);
        rtnl_unlock();
        uVar2 = 0;
        *(*param_1 + 0xc0) = *(*param_1 + 0xc0) & 0xfffffffe;
    }
    else {
        uVar2 = dev_open(*param_1,0);
        rtnl_unlock();
    }
    return uVar2;
}


// ===== sym.miwill_option_port_24g_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt @ 0x080037f8 (size 8) =====

void sym.miwill_option_port_24g_set.1602faf915cac25c49163d565a1fdcd8.cfi_jt(int64_t param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_port_24g_set",*param_2);
    sym.miwill_port_add_by_name(param_1,*param_2,2);
    return;
}


// ===== sym.miwill_options_register @ 0x08003800 (size 620) =====

int sym.miwill_options_register(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = __kmalloc(uVar7 << 3,0xdc0);
    if (iVar5 == 0) {
        iVar4 = -0xc;
    }
    else {
        if (uVar7 != 0) {
            uVar11 = 0;
            piVar14 = arg1 + 0x48;
            do {
                piVar13 = *piVar14;
                if (piVar13 != piVar14) {
                    uVar10 = *(arg2 + 0x10);
                    do {
                        iVar4 = strcmp(piVar13[2],uVar10);
                        if (iVar4 == 0) {
                            if (piVar13 != NULL) {
                                iVar4 = -0x11;
                                goto joined_r0x08003944;
                            }
                            break;
                        }
                        piVar13 = *piVar13;
                    } while (piVar13 != piVar14);
                }
                iVar6 = kmemdup(arg2,0x40,0xcc0);
                *(iVar5 + uVar11 * 8) = iVar6;
                if (iVar6 == 0) {
                    iVar4 = -0xc;
joined_r0x08003944:
                    arg3 = uVar11 - 1;
                    goto joined_r0x08003944;
                }
                arg2 = arg2 + 0x40;
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar7);
            uVar11 = 0;
code_r0x080038d0:
            piVar13 = *(iVar5 + uVar11 * 8);
            uVar12 = uVar11;
            if (piVar13[3] != '\0') goto code_r0x080038f4;
            iVar4 = sym.__miwill_option_inst_add(arg1,piVar13,0);
            if (iVar4 == 0) {
                piVar13 = *(iVar5 + uVar11 * 8);
                goto code_r0x080038f4;
            }
            piVar8 = arg1 + 0x58;
            piVar14 = *piVar8;
            while (piVar2 = piVar14, piVar2 != piVar8) {
                piVar14 = *piVar2;
                if (piVar2[2] == piVar13) {
                    uVar7 = __list_del_entry_valid(piVar2);
                    if ((uVar7 & 1) != 0) {
                        iVar6 = *piVar2;
                        piVar3 = piVar2[1];
                        *(iVar6 + 8) = piVar3;
                        *piVar3 = iVar6;
                    }
                    *piVar2 = -0x2152ffffffffff00;
                    piVar2[1] = -0x2152fffffffffede;
                    kfree(piVar2);
                }
            }
            while (uVar12 = uVar12 - 1, -1 < uVar12) {
                if (*piVar8 != piVar8) {
                    iVar6 = *(iVar5 + uVar12 * 8);
                    piVar14 = *piVar8;
                    do {
                        piVar13 = *piVar14;
                        if (piVar14[2] == iVar6) {
                            uVar7 = __list_del_entry_valid(piVar14);
                            if ((uVar7 & 1) != 0) {
                                iVar1 = *piVar14;
                                piVar2 = piVar14[1];
                                *(iVar1 + 8) = piVar2;
                                *piVar2 = iVar1;
                            }
                            *piVar14 = -0x2152ffffffffff00;
                            piVar14[1] = -0x2152fffffffffede;
                            kfree(piVar14);
                        }
                        piVar14 = piVar13;
                    } while (piVar13 != piVar8);
                }
            }
            arg3 = arg3 - 1;
joined_r0x08003944:
            if (-1 < arg3) {
                iVar6 = arg3 << 3;
                do {
                    kfree(*(iVar5 + iVar6));
                    iVar6 = iVar6 + -8;
                } while (iVar6 != -8);
            }
            goto code_r0x08003990;
        }
code_r0x08003924:
        iVar4 = 0;
code_r0x08003990:
        kfree(iVar5);
    }
    return iVar4;
code_r0x080038f4:
    puVar9 = *(arg1 + 0x50);
    uVar11 = __list_add_valid(piVar13,puVar9,piVar14);
    if ((uVar11 & 1) != 0) {
        *(arg1 + 0x50) = piVar13;
        *piVar13 = piVar14;
        piVar13[1] = puVar9;
        *puVar9 = piVar13;
    }
    uVar11 = uVar12 + 1;
    if (uVar7 <= uVar11) goto code_r0x08003924;
    goto code_r0x080038d0;
}


// ===== sym.miwill_options_unregister @ 0x08003a6c (size 308) =====

void sym.miwill_options_unregister(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong uVar8;
    int iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        iVar9 = 0;
        piVar1 = arg1 + 0x48;
        do {
            piVar7 = *piVar1;
            if (piVar7 != piVar1) {
                uVar8 = *(arg2 + 0x10);
                do {
                    iVar5 = strcmp(piVar7[2],uVar8);
                    if (iVar5 == 0) {
                        if (piVar7 != NULL) {
                            piVar10 = *(arg1 + 0x58);
                            while (piVar4 = piVar10, piVar4 != arg1 + 0x58) {
                                piVar10 = *piVar4;
                                if (piVar4[2] == piVar7) {
                                    uVar6 = __list_del_entry_valid(piVar4);
                                    if ((uVar6 & 1) != 0) {
                                        iVar2 = *piVar4;
                                        piVar3 = piVar4[1];
                                        *(iVar2 + 8) = piVar3;
                                        *piVar3 = iVar2;
                                    }
                                    *piVar4 = -0x2152ffffffffff00;
                                    piVar4[1] = -0x2152fffffffffede;
                                    kfree(piVar4);
                                }
                            }
                            uVar6 = __list_del_entry_valid(piVar7);
                            if ((uVar6 & 1) != 0) {
                                iVar2 = *piVar7;
                                piVar10 = piVar7[1];
                                *(iVar2 + 8) = piVar10;
                                *piVar10 = iVar2;
                            }
                            *piVar7 = -0x2152ffffffffff00;
                            piVar7[1] = -0x2152fffffffffede;
                            kfree(piVar7);
                        }
                        break;
                    }
                    piVar7 = *piVar7;
                } while (piVar7 != piVar1);
            }
            iVar9 = iVar9 + 1;
            arg2 = arg2 + 0x40;
        } while (iVar9 < arg3);
    }
    return;
}


// ===== sym.miwill_options_set @ 0x08003ba0 (size 648) =====

int sym.miwill_options_set(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t in_x4;
    int64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong *puVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    iStack_80 = 0;
    if ((~arg2 & 0xff) == 0) {
        iVar2 = 0;
code_r0x08003cc0:
        for (piVar7 = *(arg1 + 0x58); piVar7 != arg1 + 0x58; piVar7 = *piVar7) {
            iVar9 = piVar7[2];
            if ((arg3 == 0) || (iVar1 = strcmp(*(iVar9 + 0x10),"mode"), iVar1 != 0)) {
                if (in_x4 != 0) {
                    uVar5 = *(iVar9 + 0x10);
                    iVar1 = strcmp(uVar5,"gw_addr");
                    if (iVar1 == 0) {
                        pcVar10 = *(iVar9 + 0x38);
                        uStack_78 = CONCAT44(uStack_78._4_4_,6);
                        iStack_80 = arg4;
                    }
                    else {
                        iVar1 = strcmp(uVar5,"port_5g");
                        if (iVar1 != 0) goto code_r0x08003d34;
                        pcVar10 = *(iVar9 + 0x38);
                        iStack_80 = in_x4;
                    }
                    goto joined_r0x08003d54;
                }
code_r0x08003d34:
                if ((in_x5 != 0) && (iVar1 = strcmp(*(iVar9 + 0x10),"port_24g"), iVar1 == 0)) {
                    pcVar10 = *(iVar9 + 0x38);
                    iStack_80 = in_x5;
                    goto joined_r0x08003d54;
                }
            }
            else {
                pcVar10 = *(iVar9 + 0x38);
                iStack_80 = arg3;
joined_r0x08003d54:
                if (pcVar10 == NULL) {
                    iVar2 = -0x5f;
                }
                else {
                    if (9 < (pcVar10 + -0x80037b0 >> 3 | pcVar10 << 0x3d)) {
                        __cfi_slowpath_diag(0xfe33be61c3a68d83,pcVar10,0x8000750);
                    }
                    iVar2 = (*pcVar10)(arg1,&iStack_80);
                }
            }
        }
    }
    else {
        piVar7 = arg1 + 0x58;
        piVar11 = *piVar7;
        if (piVar11 == piVar7) {
            iVar2 = 0;
        }
        else {
            iVar2 = 0;
            do {
                iVar9 = piVar11[2];
                iVar1 = strcmp(*(iVar9 + 0x10),"enable");
                if (iVar1 == 0) {
                    pcVar10 = *(iVar9 + 0x38);
                    iStack_80 = CONCAT71(iStack_80._1_7_,(arg2 & 0xff) != 0);
                    if (pcVar10 == NULL) {
                        iVar2 = -0x5f;
                    }
                    else {
                        if (9 < (pcVar10 + -0x80037b0 >> 3 | pcVar10 << 0x3d)) {
                            __cfi_slowpath_diag(0xfe33be61c3a68d83,pcVar10,0x8000750);
                        }
                        iVar2 = (*pcVar10)(arg1,&iStack_80);
                    }
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar7);
        }
        if ((arg2 & 0xff) != 0) goto code_r0x08003cc0;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return iVar2;
    }
    auVar12 = __stack_chk_fail();
    uVar5 = auVar12._8_8_;
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.miwill_change_mode;
    pcVar10 = *(iVar9 + 0x68);
    if (((pcVar10 == NULL) || (pcVar10 == obj.dummy_mode)) || (iVar2 = strcmp(*pcVar10,uVar5), iVar2 != 0)) {
        uVar3 = try_module_get(obj.__this_module);
        if ((uVar3 & 1) != 0) {
            _raw_spin_lock(obj.mode_list_lock);
            for (pcVar10 = _obj.mode_list_lock; pcVar10 != obj.mode_list_lock; pcVar10 = *pcVar10) {
                puVar8 = *(pcVar10 + 0x10);
                iVar2 = strcmp(*puVar8,uVar5);
                if (iVar2 == 0) {
                    puVar6 = NULL;
                    if (pcVar10 != NULL) {
                        puVar6 = puVar8;
                    }
                    goto code_r0x08003ee4;
                }
            }
            puVar6 = NULL;
code_r0x08003ee4:
            _raw_spin_unlock(obj.mode_list_lock);
            module_put(obj.__this_module);
            if (puVar6 != NULL) {
                _printk(0x8000b9c,"miwill_set_no_mode");
                pcVar10 = *(iVar9 + 0x68);
                if (((pcVar10 != NULL) && (pcVar10 != obj.dummy_mode)) &&
                   (pcVar10 = *(*(pcVar10 + 0x20) + 8), pcVar10 != NULL)) {
                    if (pcVar10 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x371f10f79906e857,pcVar10,0x8000790);
                    }
                    (*pcVar10)(iVar9);
                }
                *(iVar9 + 0x68) = obj.dummy_mode;
                pcVar10 = *puVar6[4];
                if (pcVar10 != NULL) {
                    if (pcVar10 != sym.__typeid__ZTSFiP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x5af8fd12f777bf28,pcVar10,0x8000770);
                    }
                    iVar2 = (*pcVar10)(iVar9);
                    if (iVar2 != 0) {
                        uVar4 = 0x8000d22;
                        goto code_r0x08003fac;
                    }
                }
                iVar2 = 0;
                uVar4 = 0x8000f88;
                *(iVar9 + 0x68) = puVar6;
                goto code_r0x08003fac;
            }
        }
        iVar2 = -0x16;
        uVar4 = 0x800125f;
    }
    else {
        iVar2 = -0x16;
        uVar4 = 0x800177c;
    }
code_r0x08003fac:
    _printk(uVar4,"miwill_change_mode",uVar5);
    return iVar2;
}


// ===== sym.miwill_change_mode @ 0x08003e28 (size 508) =====

int sym.miwill_change_mode(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(arg1 + 0x68);
    if (((pcVar4 == NULL) || (pcVar4 == obj.dummy_mode)) || (iVar1 = strcmp(*pcVar4,arg2), iVar1 != 0)) {
        uVar2 = try_module_get(obj.__this_module);
        if ((uVar2 & 1) != 0) {
            _raw_spin_lock(obj.mode_list_lock);
            for (pcVar4 = _obj.mode_list_lock; pcVar4 != obj.mode_list_lock; pcVar4 = *pcVar4) {
                puVar6 = *(pcVar4 + 0x10);
                iVar1 = strcmp(*puVar6,arg2);
                if (iVar1 == 0) {
                    puVar5 = NULL;
                    if (pcVar4 != NULL) {
                        puVar5 = puVar6;
                    }
                    goto code_r0x08003ee4;
                }
            }
            puVar5 = NULL;
code_r0x08003ee4:
            _raw_spin_unlock(obj.mode_list_lock);
            module_put(obj.__this_module);
            if (puVar5 != NULL) {
                _printk(0x8000b9c,"miwill_set_no_mode");
                pcVar4 = *(arg1 + 0x68);
                if (((pcVar4 != NULL) && (pcVar4 != obj.dummy_mode)) &&
                   (pcVar4 = *(*(pcVar4 + 0x20) + 8), pcVar4 != NULL)) {
                    if (pcVar4 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x371f10f79906e857,pcVar4,0x8000790);
                    }
                    (*pcVar4)(arg1);
                }
                *(arg1 + 0x68) = obj.dummy_mode;
                pcVar4 = *puVar5[4];
                if (pcVar4 != NULL) {
                    if (pcVar4 != sym.__typeid__ZTSFiP6miwillE_global_addr) {
                        __cfi_slowpath_diag(0x5af8fd12f777bf28,pcVar4,0x8000770);
                    }
                    iVar1 = (*pcVar4)(arg1);
                    if (iVar1 != 0) {
                        uVar3 = 0x8000d22;
                        goto code_r0x08003fac;
                    }
                }
                iVar1 = 0;
                uVar3 = 0x8000f88;
                *(arg1 + 0x68) = puVar5;
                goto code_r0x08003fac;
            }
        }
        iVar1 = -0x16;
        uVar3 = 0x800125f;
    }
    else {
        iVar1 = -0x16;
        uVar3 = 0x800177c;
    }
code_r0x08003fac:
    _printk(uVar3,"miwill_change_mode",arg2);
    return iVar1;
}


// ===== sym.miwill_mode_register @ 0x08004024 (size 380) =====

ulong sym.miwill_mode_register(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong *puVar3;
    int iVar4;
    ulong *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar7 = *arg1;
    uVar2 = *puVar7;
    while (uVar2 != 0) {
        puVar7 = puVar7 + 1;
        if ((((_ctype[uVar2] & 3) == 0) && (9 < uVar2 - 0x30)) && (uVar2 != 0x5f)) {
            return 0xffffffea;
        }
        uVar2 = *puVar7;
    }
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x18);
    if (puVar5 == NULL) {
        uVar8 = 0xfffffff4;
    }
    else {
        _raw_spin_lock(obj.mode_list_lock);
        if (_obj.mode_list_lock != obj.mode_list_lock) {
            uVar8 = *arg1;
            pcVar9 = _obj.mode_list_lock;
            do {
                iVar4 = strcmp(**(pcVar9 + 0x10),uVar8);
                if (iVar4 == 0) {
                    if (pcVar9 != NULL) {
                        kfree(puVar5);
                        _raw_spin_unlock(obj.mode_list_lock);
                        return 0xffffffef;
                    }
                    break;
                }
                pcVar9 = *pcVar9;
            } while (pcVar9 != obj.mode_list_lock);
        }
        puVar3 = _obj.dupi_bitmap1;
        puVar5[2] = arg1;
        uVar6 = __list_add_valid(puVar5,puVar3,obj.mode_list_lock);
        if ((uVar6 & 1) != 0) {
            _obj.dupi_bitmap1 = puVar5;
            *puVar5 = obj.mode_list_lock;
            puVar5[1] = puVar3;
            *puVar3 = puVar5;
        }
        _raw_spin_unlock(obj.mode_list_lock);
        _printk(0x800089c,*arg1);
        uVar8 = 0;
    }
    return uVar8;
}


// ===== sym.miwill_mode_unregister @ 0x080041a0 (size 196) =====

void sym.miwill_mode_unregister(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.mode_list_lock);
    if (_obj.mode_list_lock != obj.mode_list_lock) {
        uVar6 = *arg1;
        pcVar5 = _obj.mode_list_lock;
        do {
            iVar3 = strcmp(**(pcVar5 + 0x10),uVar6);
            if (iVar3 == 0) {
                if (pcVar5 != NULL) {
                    uVar4 = __list_del_entry_valid(pcVar5);
                    if ((uVar4 & 1) != 0) {
                        iVar1 = *pcVar5;
                        piVar2 = *(pcVar5 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *pcVar5 = pcVar5;
                    *(pcVar5 + 8) = pcVar5;
                    kfree(pcVar5);
                }
                break;
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.mode_list_lock);
    }
    _raw_spin_unlock(obj.mode_list_lock);
    _printk(0x80009b7,*arg1);
    return;
}


// ===== sym.miwill_modeop_port_enter @ 0x08004264 (size 84) =====

ulong sym.miwill_modeop_port_enter(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*arg1 == 0) || (iVar2 = *(*arg1 + 0x308), iVar2 == 0)) {
        _printk(0x8001026,*arg2);
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        *(arg2 + 0x34) = *(iVar2 + 4);
    }
    return uVar1;
}


// ===== sym.miwill_name_to_dev @ 0x080042b8 (size 92) =====

int64_t sym.miwill_name_to_dev(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = dev_get_by_name(init_net,arg1);
    if (iVar1 == 0) {
        _printk(0x8001567,arg1);
    }
    return iVar1;
}


// ===== sym.is_duplicate @ 0x08004314 (size 252) =====

uint sym.is_duplicate(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    
    iVar7 = 0;
    bVar3 = false;
    iVar5 = *(*(arg1 + 0x68) + 0x28);
    uVar4 = 1L << (arg2 & 0x3fU);
    uVar6 = arg2 >> 6 & 0x3ffffff;
    do {
        while (bVar3) {
            iVar7 = iVar7 + 1;
            bVar3 = true;
            if (iVar7 == 4) {
                return 1;
            }
        }
        puVar1 = *(iVar5 + iVar7 * 8 + 8) + uVar6 * 8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 & (uVar4 ^ 0xffffffffffffffff);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        uVar8 = uVar8 & uVar4;
        bVar3 = uVar8 != 0;
        iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    if (uVar8 == 0) {
        puVar1 = *(iVar5 + (-*(iVar5 + 0x28) & 3) * 8 + 8) + uVar6 * 8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 | uVar4;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        return 0;
    }
    return 1;
}


// ===== sym.red_receive @ 0x08004410 (size 172) =====

bool sym.red_receive(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg2 + 0xd8);
    uVar4 = sym.is_duplicate(arg1,*(iVar7 + 2) >> 8 | (*(iVar7 + 2) & 0xff00ff) << 8);
    bVar3 = (uVar4 & 1) == 0;
    if (bVar3) {
        iVar5 = *(arg2 + 0xd8);
        *(arg2 + 0xb0) = *(iVar7 + 6);
        uVar6 = *(iVar7 + -0xe);
        *(iVar5 + 2) = *(iVar7 + -6);
        *(iVar5 + -6) = uVar6;
        skb_pull(arg2,8);
        iVar1 = *(arg2 + 0xb6) + 8;
        iVar2 = *(arg2 + 0xb4) + 8;
        *(arg2 + 0xb6) = iVar1;
        *(arg2 + 0xb4) = iVar2;
        *(arg2 + 0xb2) = *(arg2 + 0xb2) + 8;
        *(arg2 + 0x78) = iVar2 - iVar1;
    }
    else {
        consume_skb(arg2);
    }
    return bVar3;
}


// ===== sym.timer_callback @ 0x080044bc (size 132) =====

void sym.timer_callback(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.bitmap_lock);
    memset(*(arg1 + (~*(arg1 + -8) & 3) * 8 + -0x28),0,0x2000);
    *(arg1 + -8) = *(arg1 + -8) + 1;
    _raw_spin_unlock(obj.bitmap_lock);
    return;
}


// ===== sym.timer_exit @ 0x08004540 (size 48) =====

void sym.timer_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    del_timer(*(*(arg1 + 0x68) + 0x28) + 0x30);
    return;
}


// ===== sym.timer_init @ 0x08004570 (size 108) =====

void sym.timer_init(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    init_timer_key(0x8008548,sym.timer_callback.cfi_jt,0,0,0);
    *0x8008558 = _ethtool_op_get_ts_info + 0x3e;
    add_timer(0x8008548);
    *0x8008540 = 0;
    return;
}


// ===== sym.__miwill_option_inst_add @ 0x080045dc (size 296) =====

ulong sym.__miwill_option_inst_add(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong *puVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg2 + 0x1c);
    iVar8 = 0;
    if (iVar2 == 0) {
        iVar2 = 1;
    }
    do {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x28);
        if (piVar3 == NULL) {
            return 0xfffffff4;
        }
        puVar7 = *(arg1 + 0x60);
        piVar3[2] = arg2;
        piVar3[4] = arg3;
        *(piVar3 + 3) = iVar8;
        uVar4 = __list_add_valid(piVar3,puVar7,arg1 + 0x58);
        if ((uVar4 & 1) != 0) {
            *(arg1 + 0x60) = piVar3;
            *piVar3 = arg1 + 0x58;
            piVar3[1] = puVar7;
            *puVar7 = piVar3;
        }
        pcVar6 = *(arg2 + 0x28);
        if (pcVar6 != NULL) {
            __cfi_slowpath_diag(0xefbfeb60ece89003,pcVar6,0x8000730);
            uVar5 = (*pcVar6)(arg1,piVar3 + 3);
            if (uVar5 != 0) {
                return uVar5;
            }
        }
        iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    return 0;
}


// ===== sym.miwill_dummy_receive @ 0x08004704 (size 16) =====

ulong sym.miwill_dummy_receive(void)

{
    return 1;
}


// ===== sym.miwill_dummy_transmit @ 0x08004714 (size 48) =====

ulong sym.miwill_dummy_transmit(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __dev_kfree_skb_any(arg1,1);
    return 0;
}


// ===== sym.red_init @ 0x08004744 (size 244) =====

ulong sym.red_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8008518 = 0;
    *0x8008520 = obj.dupi_bitmap1;
    *0x8008528 = obj.dupi_bitmap2;
    *0x8008530 = 0x8004518;
    *0x8008538 = 0x8006518;
    memset(obj.dupi_bitmap1,0,0x2000);
    memset(obj.dupi_bitmap2,0,0x2000);
    memset(0x8004518,0,0x2000);
    memset(0x8006518,0,0x2000);
    init_timer_key(0x8008548,sym.timer_callback.cfi_jt,0,0,0);
    *0x8008558 = _ethtool_op_get_ts_info + 0x3e;
    add_timer(0x8008548);
    *0x8008540 = 0;
    _printk(0x8000b9c,"red_init");
    return 0;
}


// ===== sym.red_exit @ 0x08004838 (size 152) =====

void sym.red_exit(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x68) + 0x28);
    memset(*(iVar1 + 8),0,0x2000);
    memset(*(iVar1 + 0x10),0,0x2000);
    memset(*(iVar1 + 0x18),0,0x2000);
    memset(*(iVar1 + 0x20),0,0x2000);
    del_timer(*(*(arg1 + 0x68) + 0x28) + 0x30);
    _printk(0x8000b9c,"red_exit");
    return;
}


// ===== sym.red_transmit @ 0x080048d0 (size 692) =====

ulong sym.red_transmit(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *pcVar2;
    uint uVar3;
    int64_t *piVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint *puVar10;
    ulong *in_x18;
    int64_t *piVar11;
    uint16_t *puVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar12 = *(*(arg1 + 0x68) + 0x28);
    if ((*(arg2 + 0x7e) & 1) == 0) {
        bVar5 = false;
    }
    else {
        uVar7 = *(*(arg2 + 0xd0) + *(arg2 + 0xcc) + 0x20);
        bVar5 = (uVar7 & 0xffff) - (uVar7 >> 0x10) != 1;
    }
    uVar7 = *(arg2 + 0xd8) - *(arg2 + 0xd0);
    iVar6 = 0;
    if (uVar7 < 9) {
        iVar6 = 8 - uVar7;
    }
    if ((iVar6 == 0 && !bVar5) || (iVar6 = pskb_expand_head(arg2,iVar6 + 0x3fU & 0x40,0,0xa20), iVar6 == 0)) {
        skb_push(arg2,8);
        puVar8 = *(arg2 + 0xd8);
        *(arg2 + 0xb6) = puVar8 - *(arg2 + 0xd0);
        *(arg2 + 0xb4) = *(arg2 + 0xb4) + -8;
        *(puVar8 + 0xc) = 0xe1ee;
        *puVar8 = puVar8[1];
        *(puVar8 + 1) = *(puVar8 + 2);
        *(puVar8 + 0xe) = *(puVar8 + 0xe) & 0xf | 0x10;
        *(arg2 + 0xb0) = 0xe1ee;
        *(arg2 + 0x8c) = 7;
        if (arg2 != 0) {
            iVar9 = *(arg2 + 0xd8);
            iVar1 = arg1 + 0x10;
            *(iVar9 + 0xf) = 0;
            *(iVar9 + 0xe) = *(iVar9 + 0xe) & 0xf0 | 1;
            *(iVar9 + 0x10) = *puVar12 >> 8 | *puVar12 << 8;
            _raw_spin_lock_bh(iVar1);
            piVar13 = arg1 + 0x38;
            piVar11 = *piVar13;
            if (piVar13 != piVar11) {
                do {
                    piVar4 = piVar11 + -3;
                    if (piVar4 == NULL) {
                        _raw_spin_unlock_bh(iVar1);
                        __dev_kfree_skb_any(arg2,1);
                        return 0;
                    }
                    if (((piVar11[4] != '\0') && (piVar11[3] != -1)) && (iVar9 = skb_copy(arg2,0xa20), iVar9 != 0)) {
                        if (*piVar4 == 0) {
                            _printk(0x8000db1,"miwill_dev_queue_xmit");
                            consume_skb(iVar9);
                            iVar6 = -1;
                        }
                        else {
                            *(iVar9 + 0x10) = *piVar4;
                            puVar10 = *(iVar9 + 0xd8);
                            uVar3 = *(arg1 + 0x80);
                            *(puVar10 + 1) = *(arg1 + 0x84);
                            *puVar10 = uVar3;
                            uVar3 = **(*piVar4 + 0x308);
                            *(puVar10 + 10) = *(*(*piVar4 + 0x308) + 1);
                            *(puVar10 + 6) = uVar3;
                            *(puVar10 + 0x12) = *(*(*arg1 + 0x308) + 4);
                            iVar6 = dev_queue_xmit(iVar9);
                            if (iVar6 == 0) goto code_r0x08004a90;
                        }
                        pcVar2 = "port->dev is NULL";
                        if (*piVar4 != NULL) {
                            pcVar2 = *piVar4;
                        }
                        _printk(0x800161b,"red_transmit",pcVar2,iVar6);
                    }
code_r0x08004a90:
                    piVar11 = *piVar11;
                } while (piVar13 != piVar11);
            }
            _raw_spin_unlock_bh(iVar1);
            *puVar12 = *puVar12 + 1;
            consume_skb(arg2);
            return 1;
        }
    }
    else {
        consume_skb(arg2);
    }
    _printk(0x8001371,"red_transmit");
    return 0;
}


// ===== sym.miwill_device_event @ 0x08004b88 (size 288) =====

ulong sym.miwill_device_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *arg3;
    if (((*(arg3 + 0xc5) >> 5 & 1) != 0) && (arg1_00 = *(arg3 + 0x340), arg1_00 != 0)) {
        uVar1 = arg2 - 1;
        if (uVar1 < 0x22) {
            pcVar2 = *(uVar1 * 8 + 0x8002270);
        }
        else {
            pcVar2 = "UNKNOWN_NETDEV_EVENT";
        }
        _printk(0x80014a3,"miwill_device_event",pcVar2);
        _printk(0x80014b5,"miwill_device_event",*(arg3 + 0x228));
        if (arg2 - 1U < 6) {
    //switch table (5 cases) at 0x8000870
            switch(*(arg2 + 0x800086f) * 4 + 0x8004bb4) {
            case 0x8004bb8:
                break;
            default:
                if ((*(arg3 + 0x228) == '\x06') || (*(arg3 + 0x228) == '\0')) {
                    sym.miwill_port_change(arg1_00,1);
                }
                break;
            case 0x8004c74:
                sym.miwill_port_change(arg1_00,0);
                sym.miwill_port_del(**(arg1_00 + 0x28),arg3);
                break;
            case 0x8004c98:
                sym.miwill_port_change(arg1_00,0);
            }
        }
    }
    return 0;
}


// ===== sym.miwill_port_change @ 0x08004ca8 (size 92) =====

void sym.miwill_port_change(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x28) + 0x10;
    _raw_spin_lock_bh(iVar1);
    sym.__miwill_port_change(arg1,arg2 & 0xffffffff);
    _raw_spin_unlock_bh(iVar1);
    return;
}


// ===== sym.miwill_port_del @ 0x08004d04 (size 1200) =====

void sym.miwill_port_del(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int64_t *piVar2;
    int *piVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    uint8_t uVar6;
    char cVar7;
    uint32_t uVar8;
    bool bVar9;
    int iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t *piVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar18;
    int64_t unaff_x20;
    int64_t *unaff_x21;
    code *pcVar19;
    uint16_t uVar20;
    int64_t *piVar21;
    ulong uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
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
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_78;
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    if (((*(arg2 + 0xc5) >> 5 & 1) != 0) && (piVar21 = *(arg2 + 0x340), piVar21 != NULL)) {
        piVar13 = *(arg1 + 0xa38);
        piVar2 = arg1 + 0xa38;
        bVar9 = piVar2 == piVar13;
        if ((!bVar9) && (piVar21 != piVar13 + -3)) {
            do {
                piVar13 = *piVar13;
                bVar9 = piVar2 == piVar13;
            } while (!bVar9 && piVar21 != piVar13 + -3);
        }
        unaff_x20 = arg1;
        if (!bVar9) {
            iVar16 = arg1 + 0xa10;
            uVar22 = *(arg1 + 0xa00);
            unaff_x21 = arg1 + 0xa00;
            _raw_spin_lock_bh(iVar16);
            if (piVar21[6] != -1) {
                if ((*(arg1 + 0xa68) != 0) && (pcVar19 = *(*(*(arg1 + 0xa68) + 0x20) + 0x38), pcVar19 != NULL)) {
                    __cfi_slowpath_diag(0xb074d8048b29f05c,pcVar19,0x80007b0);
                    (*pcVar19)(unaff_x21,piVar21);
                }
                iVar14 = piVar21[1];
                piVar13 = piVar21[2];
                *piVar13 = iVar14;
                if (iVar14 != 0) {
                    *(iVar14 + 8) = piVar13;
                }
                piVar21[2] = -0x2152fffffffffede;
                uVar12 = *(piVar21 + 6);
                while (uVar12 = uVar12 + 1, uVar12 < *(arg1 + 0xa14)) {
                    iVar14 = unaff_x21[(uVar12 & 3) + 3] + -8;
                    if (unaff_x21[(uVar12 & 3) + 3] == 0 || iVar14 == 0) {
                        iVar14 = 0;
                    }
                    else {
                        do {
                            if (*(iVar14 + 0x30) == uVar12) break;
                            piVar13 = iVar14 + 8;
                            iVar14 = 0;
                            if (*piVar13 != 0) {
                                iVar14 = *piVar13 + -8;
                            }
                        } while (iVar14 != 0);
                    }
                    piVar15 = iVar14 + 8;
                    iVar17 = *piVar15;
                    piVar13 = *(iVar14 + 0x10);
                    *piVar13 = iVar17;
                    if (iVar17 != 0) {
                        *(iVar17 + 8) = piVar13;
                    }
                    *(iVar14 + 0x10) = 0xdead000000000122;
                    uVar8 = *(iVar14 + 0x30) - 1;
                    *(iVar14 + 0x30) = uVar8;
                    piVar13 = unaff_x21 + (uVar8 & 3) + 3;
                    iVar17 = *piVar13;
                    *(iVar14 + 8) = iVar17;
                    *(iVar14 + 0x10) = piVar13;
                    *piVar13 = piVar15;
                    if (iVar17 != 0) {
                        *(iVar17 + 8) = piVar15;
                    }
                }
                *(piVar21 + 6) = 0xffffffff;
                *(arg1 + 0xa14) = *(arg1 + 0xa14) + -1;
                if (*(piVar21 + 0x4c) != 0) {
                    uVar11 = __list_del_entry_valid(piVar21 + 10);
                    if ((uVar11 & 1) != 0) {
                        iVar14 = piVar21[10];
                        piVar13 = piVar21[0xb];
                        *(iVar14 + 8) = piVar13;
                        *piVar13 = iVar14;
                    }
                    piVar21[0xb] = -0x2152fffffffffede;
                }
                piVar13 = *piVar2;
                if (piVar2 == piVar13) {
                    bVar9 = false;
                }
                else {
                    do {
                        piVar1 = piVar13 + 0x34;
                        if (*piVar1 != 0) break;
                        piVar13 = *piVar13;
                    } while (piVar2 != piVar13);
                    bVar9 = *piVar1 != 0;
                }
                if (*(arg1 + 0xa70) != bVar9) {
                    *(arg1 + 0xa70) = bVar9;
                }
                iVar14 = piVar21[5];
                auStack_6c[0] = *(piVar21 + 7) | (piVar21[6] != -1) << 1;
                _raw_spin_unlock_bh(iVar14 + 0x10);
                netdev_lower_state_changed(*piVar21,&stack0xffffffffffffff94);
                _raw_spin_lock_bh(iVar14 + 0x10);
            }
            uVar11 = __list_del_entry_valid(piVar21 + 3);
            if ((uVar11 & 1) != 0) {
                iVar14 = piVar21[3];
                piVar13 = piVar21[4];
                *(iVar14 + 8) = piVar13;
                *piVar13 = iVar14;
            }
            piVar21[4] = -0x2152fffffffffede;
            iStack_78 = iVar16;
            _raw_spin_unlock_bh(iVar16);
            *(arg2 + 0xc4) = *(arg2 + 0xc4) & 0xffffdfff;
            netdev_rx_handler_unregister(arg2);
            dev_uc_unsync(arg2,uVar22);
            dev_mc_unsync(arg2,uVar22);
            sym.miwill_port_leave(unaff_x21,piVar21);
            piVar13 = *(arg1 + 0xa58);
            iVar16 = iStack_78;
            while (piVar15 = piVar13, iStack_78 = iVar16, piVar15 != arg1 + 0xa58) {
                piVar13 = *piVar15;
                if ((*(piVar15[2] + 0x18) != '\0') && (piVar15[4] == piVar21)) {
                    uVar11 = __list_del_entry_valid(piVar15);
                    if ((uVar11 & 1) != 0) {
                        iVar16 = *piVar15;
                        piVar4 = piVar15[1];
                        *(iVar16 + 8) = piVar4;
                        *piVar4 = iVar16;
                    }
                    *piVar15 = -0x2152ffffffffff00;
                    piVar15[1] = -0x2152fffffffffede;
                    kfree(piVar15);
                    iVar16 = iStack_78;
                }
            }
            _raw_spin_lock_bh(iVar16);
            sym.__miwill_port_change(piVar21,0);
            _raw_spin_unlock_bh(iVar16);
            dev_set_mtu(arg2,*(piVar21 + 0x44));
            kvfree_call_rcu(piVar21 + 0xc,0x60);
            piVar21 = *piVar2;
            if (piVar2 == piVar21) {
                uVar20 = 0xe;
                bVar9 = true;
                uVar11 = 0x21020fdd0089;
            }
            else {
                uVar11 = 0x100001d0009;
                uVar20 = 0xe;
                uVar12 = 0x20020;
                do {
                    uVar11 = netdev_increment_features(uVar11,*(piVar21[-3] + 0x100),0x100001d0009);
                    piVar13 = piVar21 + -3;
                    piVar21 = *piVar21;
                    uVar5 = *(*piVar13 + 0xd6);
                    uVar12 = *(*piVar13 + 0xc4) & uVar12;
                    if (uVar5 <= uVar20) {
                        uVar5 = uVar20;
                    }
                    uVar20 = uVar5;
                } while (piVar2 != piVar21);
                bVar9 = uVar12 == 0x20020;
                uVar11 = uVar11 | 0x20020fc00080;
            }
            *(*unaff_x21 + 0x100) = uVar11;
            *(*unaff_x21 + 0xd6) = uVar20;
            *(*unaff_x21 + 0xc4) = *(*unaff_x21 + 0xc4) & 0xffffffdf;
            if (bVar9) {
                *(*unaff_x21 + 0xc4) = *(*unaff_x21 + 0xc4) | 0x20;
            }
            _printk(0x8000f9e,"__miwill_port_del",arg2);
            netdev_change_features(arg1);
            goto code_r0x0800516c;
        }
    }
    _printk(0x8001446,"__miwill_port_del",arg2);
    arg1 = unaff_x20;
code_r0x0800516c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return;
    }
    auVar23 = __stack_chk_fail();
    puVar18 = auVar23._0_8_;
    *extraout_x18 = 0x80051ac;
    uStack_a8 = 0x80051ac;
    iVar16 = sp_el0;
    iStack_b8 = *(iVar16 + 0x5e0);
    uVar12 = auVar23._8_4_ & 1;
    puStack_b0 = &stack0xffffffffffffffa0;
    piStack_a0 = unaff_x21;
    iStack_90 = arg1;
    iStack_88 = arg2;
    if (*(puVar18 + 7) != uVar12) {
        uVar6 = uVar12;
        *(puVar18 + 7) = uVar6;
        iVar16 = puVar18[5];
        uStack_120 = CONCAT71(uStack_120._1_7_,uVar6 | (*(puVar18 + 6) != -1) << 1);
        _raw_spin_unlock_bh(iVar16 + 0x10);
        netdev_lower_state_changed(*puVar18,&stack0xfffffffffffffee0);
        _raw_spin_lock_bh(iVar16 + 0x10);
    }
    if ((auVar23._8_8_ & 1) == 0) {
        *(puVar18 + 0x3c) = 0;
        *(puVar18 + 8) = 0;
    }
    else {
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        iVar10 = __ethtool_get_link_ksettings(*puVar18,&stack0xfffffffffffffee0);
        if (iVar10 == 0) {
            *(puVar18 + 0x3c) = uStack_120._4_4_;
            *(puVar18 + 8) = uStack_118;
        }
    }
    puVar18 = puVar18[5];
    piVar21 = puVar18[7];
    do {
        if (puVar18 + 7 == piVar21) {
            _printk(0x8000a01,"__miwill_carrier_check",0);
            netif_carrier_off(*puVar18);
code_r0x080052e8:
            iVar16 = sp_el0;
            if (*(iVar16 + 0x5e0) == iStack_b8) {
                return;
            }
            auVar23 = __stack_chk_fail();
            piVar21 = auVar23._0_8_;
            *extraout_x18_00 = sym.miwill_port_leave;
            if ((piVar21[0xd] != 0) && (pcVar19 = *(*(piVar21[0xd] + 0x20) + 0x28), pcVar19 != NULL)) {
                __cfi_slowpath_diag(0xb074d8048b29f05c,pcVar19,0x80007d0);
                (*pcVar19)(piVar21,auVar23._8_8_);
            }
            iVar16 = *piVar21;
            if (iVar16 != 0) {
                iVar14 = sp_el0;
                piVar21 = iVar14 + 0x10;
                *(iVar14 + 0x10) = *piVar21 + 1;
                iVar17 = tpidr_el1;
                piVar3 = iVar17 + *(iVar16 + 0x4d0);
                do {
                    cVar7 = '\x01';
                    bVar9 = ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar9) {
                        *piVar3 = *piVar3 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                    }
                } while (cVar7 != '\0');
                iVar16 = *piVar21;
                *(iVar14 + 0x10) = iVar16 + -1;
                if ((iVar16 + -1 == 0) || (*piVar21 == 0)) {
                    preempt_schedule_notrace();
                }
            }
            return;
        }
        if (*(piVar21 + 4) != '\0') {
            _printk(0x8000a01,"__miwill_carrier_check",1);
            netif_carrier_on(*puVar18);
            goto code_r0x080052e8;
        }
        piVar21 = *piVar21;
    } while( true );
}


// ===== sym.__miwill_port_change @ 0x080051b4 (size 360) =====

void sym.__miwill_port_change(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
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
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uVar2 = arg2 & 1;
    if (*(arg1 + 0x38) != uVar2) {
        uVar3 = uVar2;
        *(arg1 + 0x38) = uVar3;
        iVar10 = *(arg1 + 0x28) + 0x10;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,uVar3 | (*(arg1 + 0x30) != -1) << 1);
        _raw_spin_unlock_bh(iVar10);
        netdev_lower_state_changed(*arg1,&uStack_a0);
        _raw_spin_lock_bh(iVar10);
    }
    if ((arg2 & 1U) == 0) {
        *(arg1 + 0x3c) = 0;
        *(arg1 + 0x40) = 0;
    }
    else {
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
        uStack_a0 = 0;
        iVar8 = __ethtool_get_link_ksettings(*arg1,&uStack_a0);
        if (iVar8 == 0) {
            *(arg1 + 0x3c) = uStack_a0._4_4_;
            *(arg1 + 0x40) = uStack_98;
        }
    }
    puVar11 = *(arg1 + 0x28);
    piVar9 = puVar11[7];
    do {
        if (puVar11 + 7 == piVar9) {
            _printk(0x8000a01,"__miwill_carrier_check",0);
            netif_carrier_off(*puVar11);
code_r0x080052e8:
            iVar10 = sp_el0;
            if (*(iVar10 + 0x5e0) != iStack_38) {
                auVar13 = __stack_chk_fail();
                piVar9 = auVar13._0_8_;
                *extraout_x18 = sym.miwill_port_leave;
                if ((piVar9[0xd] != 0) && (pcVar12 = *(*(piVar9[0xd] + 0x20) + 0x28), pcVar12 != NULL)) {
                    __cfi_slowpath_diag(0xb074d8048b29f05c,pcVar12,0x80007d0);
                    (*pcVar12)(piVar9,auVar13._8_8_);
                }
                iVar10 = *piVar9;
                if (iVar10 != 0) {
                    iVar6 = sp_el0;
                    piVar9 = iVar6 + 0x10;
                    *(iVar6 + 0x10) = *piVar9 + 1;
                    iVar7 = tpidr_el1;
                    piVar1 = iVar7 + *(iVar10 + 0x4d0);
                    do {
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar5) {
                            *piVar1 = *piVar1 + -1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    iVar10 = *piVar9;
                    *(iVar6 + 0x10) = iVar10 + -1;
                    if ((iVar10 + -1 == 0) || (*piVar9 == 0)) {
                        preempt_schedule_notrace();
                    }
                }
                return;
            }
            return;
        }
        if (*(piVar9 + 4) != '\0') {
            _printk(0x8000a01,"__miwill_carrier_check",1);
            netif_carrier_on(*puVar11);
            goto code_r0x080052e8;
        }
        piVar9 = *piVar9;
    } while( true );
}


// ===== sym.miwill_port_leave @ 0x0800531c (size 212) =====

void sym.miwill_port_leave(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x68) != 0) {
        pcVar7 = *(*(*(arg1 + 0x68) + 0x20) + 0x28);
        if (pcVar7 != NULL) {
            __cfi_slowpath_diag(0xb074d8048b29f05c,pcVar7,0x80007d0);
            (*pcVar7)(arg1,arg2);
        }
    }
    arg1 = *arg1;
    if (arg1 != 0) {
        iVar5 = sp_el0;
        piVar1 = iVar5 + 0x10;
        *(iVar5 + 0x10) = *piVar1 + 1;
        iVar6 = tpidr_el1;
        piVar2 = iVar6 + *(arg1 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar6 = *piVar1;
        *(iVar5 + 0x10) = iVar6 + -1;
        if ((iVar6 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.miwill_setup @ 0x08005410 (size 220) =====

void sym.miwill_setup(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint8_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + 0x308);
    *(arg1 + 0x24c) = 1;
    get_random_bytes(puVar2,6);
    *puVar2 = *puVar2 & 0xfc | 2;
    ether_setup(arg1);
    *(arg1 + 0x11c) = 0xffff;
    *(arg1 + 200) = reloc.miwill_dev_init.1602faf915cac25c49163d565a1fdcd8.cfi_jt;
    *(arg1 + 0x4ec) = 1;
    *(arg1 + 0x210) = obj.miwill_ethtool_ops;
    *(arg1 + 0x8d0) = obj.miwill_link_ops;
    uVar1 = *(arg1 + 0xe8) | 0x20fc00000;
    *(arg1 + 0xc0) = *(arg1 + 0xc0) & 0xffffef7d | 0x80;
    *(arg1 + 0xc4) = *(arg1 + 0xc4) & 0xffb767df | 0x489000;
    *(arg1 + 0xe0) = *(arg1 + 0xe0) | uVar1 | 0x4000;
    *(arg1 + 0xe8) = uVar1;
    return;
}


// ===== sym.miwill_validate @ 0x080054ec (size 80) =====

ulong sym.miwill_validate(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = *(arg1 + 8);
    if (piVar1 != NULL) {
        if (*piVar1 != 10) {
            return 0xffffffea;
        }
        if (((*(piVar1 + 2) & 1) != 0) || (*(piVar1 + 2) == 0 && piVar1[4] == 0)) {
            return 0xffffff9d;
        }
    }
    return 0;
}


// ===== sym.miwill_dev_init @ 0x0800553c (size 468) =====

int sym.miwill_dev_init(int64_t arg1)

{
    int64_t *arg1_00;
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *in_x6;
    code *pcVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint32_t unaff_w23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0xa00;
    *(arg1 + 0xa00) = arg1;
    *(arg1 + 0xa10) = 0;
    _printk(0x8000b9c,"miwill_set_no_mode");
    pcVar5 = *(arg1 + 0xa68);
    if (((pcVar5 != NULL) && (pcVar5 != obj.dummy_mode)) && (pcVar5 = *(*(pcVar5 + 0x20) + 8), pcVar5 != NULL)) {
        if (pcVar5 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
            __cfi_slowpath_diag(0x371f10f79906e857,pcVar5,0x8000790);
        }
        (*pcVar5)(arg1_00);
    }
    *(arg1 + 0xa68) = obj.dummy_mode;
    *(arg1 + 0xa38) = arg1 + 0xa38;
    *(arg1 + 0xa40) = arg1 + 0xa38;
    *(arg1 + 0xa48) = arg1 + 0xa48;
    *(arg1 + 0xa50) = arg1 + 0xa48;
    *(arg1 + 0xa58) = arg1 + 0xa58;
    *(arg1 + 0xa60) = arg1 + 0xa58;
    iVar3 = __alloc_percpu_gfp(0x38,8,0xcc0);
    if (iVar3 != 0) {
        uVar4 = 0xffffffff;
        *in_x6 = unaff_w23;
        while( true ) {
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            if (unaff_w23 <= uVar4) break;
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8005628);
                (*pcVar5)();
            }
        }
    }
    *(arg1 + 0xa08) = iVar3;
    iVar2 = sym.miwill_options_register(arg1_00,0x8001ed0,5);
    if (iVar2 == 0) {
        if (*(arg1 + 0xa08) == 0) {
            iVar2 = -0xc;
        }
        else {
            uVar1 = *(*arg1_00 + 0x3c8) - 1;
            uVar6 = uVar1;
            if ((uVar1 != 0) && (iVar3 = __kmalloc(uVar6 << 4,0xcc0), iVar3 != 0)) {
                *(arg1 + 0xa78) = iVar3;
                do {
                    *iVar3 = iVar3;
                    uVar1 = uVar6 - 1;
                    uVar6 = uVar1;
                    *(iVar3 + 8) = iVar3;
                    iVar3 = iVar3 + 0x10;
                } while (uVar1 != 0);
            }
            init_timer_key(arg1 + 0xa98,sym.miwill_timer.1602faf915cac25c49163d565a1fdcd8.cfi_jt,0,0,0);
            iVar2 = 0;
        }
    }
    else {
        _printk(0x80014f4,"miwill_dev_init",iVar2);
    }
    return iVar2;
}


// ===== sym.miwill_dev_uninit @ 0x08005710 (size 72) =====

void sym.miwill_dev_uninit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.miwill_options_unregister(arg1 + 0xa00,0x8001ed0,5);
    free_percpu(*(arg1 + 0x510));
    return;
}


// ===== sym.miwill_open @ 0x08005758 (size 116) =====

ulong sym.miwill_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000b9c,"miwill_open");
    netif_carrier_on(arg1);
    if (*(arg1 + 0xaa0) == 0) {
        *(arg1 + 0xaa8) = _ethtool_op_get_ts_info + 500;
        add_timer(arg1 + 0xa98);
        *(arg1 + 0xa96) = 0;
    }
    return 0;
}


// ===== sym.miwill_stop @ 0x080057d0 (size 288) =====

ulong sym.miwill_stop(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *arg1_00;
    int64_t *piVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0xa00;
    _printk(0x8000b9c,"miwill_stop");
    sym.miwill_mframe(arg1_00,3);
    netif_carrier_off(arg1);
    piVar2 = *(arg1 + 0xa38);
    while (piVar2 != arg1 + 0xa38) {
        piVar1 = piVar2 + -3;
        piVar2 = *piVar2;
        sym.miwill_port_del(*arg1_00,*piVar1);
    }
    _printk(0x8000b9c,"miwill_set_no_mode");
    pcVar3 = *(arg1 + 0xa68);
    if (((pcVar3 != NULL) && (pcVar3 != obj.dummy_mode)) && (pcVar3 = *(*(pcVar3 + 0x20) + 8), pcVar3 != NULL)) {
        if (pcVar3 != sym.__typeid__ZTSFvP6miwillE_global_addr) {
            __cfi_slowpath_diag(0x371f10f79906e857,pcVar3,0x8000790);
        }
        (*pcVar3)(arg1_00);
    }
    *(arg1 + 0xa68) = obj.dummy_mode;
    del_timer_sync(arg1 + 0xa98);
    return 0;
}


// ===== sym.miwill_xmit @ 0x080058f0 (size 808) =====

ulong sym.miwill_xmit(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint *puVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar14 = *(arg2 + 0xa08);
    iVar2 = tpidr_el1;
    uVar3 = *(arg1 + 0x70);
    if ((*(arg1 + 0xa4) & 0xce00000) == 0x8000000) {
        if ((*(arg1 + 0x7e) & 1) == 0) {
            bVar6 = false;
        }
        else {
            uVar9 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 0x20);
            bVar6 = (uVar9 & 0xffff) - (uVar9 >> 0x10) != 1;
        }
        uVar9 = *(arg1 + 0xd8) - *(arg1 + 0xd0);
        iVar7 = 0;
        if (uVar9 < 9) {
            iVar7 = 8 - uVar9;
        }
        if ((iVar7 == 0 && !bVar6) || (iVar7 = pskb_expand_head(arg1,iVar7 + 0x3fU & 0x40,0,0xa20), iVar7 == 0)) {
            skb_push(arg1,8);
            puVar10 = *(arg1 + 0xd8);
            *(arg1 + 0xb6) = puVar10 - *(arg1 + 0xd0);
            *(arg1 + 0xb4) = *(arg1 + 0xb4) + -8;
            *(puVar10 + 0xc) = 0xe1ee;
            *puVar10 = puVar10[1];
            *(puVar10 + 1) = *(puVar10 + 2);
            *(puVar10 + 0xe) = *(puVar10 + 0xe) & 0xf | 0x10;
            *(arg1 + 0xb0) = 0xe1ee;
            *(arg1 + 0x8c) = 7;
            if (arg1 != 0) {
                iVar11 = *(arg1 + 0xd8);
                *(iVar11 + 0xf) = 0;
                *(iVar11 + 0x11) = 0;
                *(iVar11 + 0xe) = *(iVar11 + 0xe) & 0xf0 | 0xe;
                for (piVar12 = *(arg2 + 0xa38); (arg2 + 0xa38 != piVar12 && (piVar16 = piVar12 + -3, piVar16 != NULL));
                    piVar12 = *piVar12) {
                    if ((*(piVar12 + 4) != '\0') && (*(piVar12 + 3) != -1)) {
                        if (*piVar16 == 0) {
                            _printk(0x8000db1,"miwill_dev_queue_xmit");
                            consume_skb(arg1);
                            iVar7 = -1;
                        }
                        else {
                            *(arg1 + 0x10) = *piVar16;
                            puVar13 = *(arg1 + 0xd8);
                            uVar4 = *(arg2 + 0xa80);
                            *(puVar13 + 1) = *(arg2 + 0xa84);
                            *puVar13 = uVar4;
                            uVar4 = **(*piVar16 + 0x308);
                            *(puVar13 + 10) = *(*(*piVar16 + 0x308) + 1);
                            *(puVar13 + 6) = uVar4;
                            *(puVar13 + 0x12) = *(*(*(arg2 + 0xa00) + 0x308) + 4);
                            iVar7 = dev_queue_xmit(arg1);
                            if (iVar7 == 0) goto code_r0x08005980;
                        }
                        _printk(0x80010d8,"miwill_pass_transmit",*piVar16,iVar7);
                        goto code_r0x08005ab8;
                    }
                }
                __dev_kfree_skb_any(arg1,1);
                goto code_r0x08005ab8;
            }
        }
        else {
            consume_skb(arg1);
        }
        _printk(0x8001371,"miwill_pass_transmit");
    }
    else {
        pcVar15 = *(*(*(arg2 + 0xa68) + 0x20) + 0x18);
        if (1 < (pcVar15 + -0x80036d8 >> 3 | pcVar15 << 0x3d)) {
            __cfi_slowpath_diag(0x6e21bcbc700b56cd,pcVar15,0x8000850);
        }
        uVar8 = (*pcVar15)(arg2 + 0xa00,arg1);
        if ((uVar8 & 1) != 0) {
code_r0x08005980:
            iVar2 = iVar2 + iVar14;
            *(iVar2 + 0x18) = *(iVar2 + 0x18) + 1;
            *(iVar2 + 0x20) = *(iVar2 + 0x20) + uVar3;
            return 0;
        }
    }
code_r0x08005ab8:
    iVar2 = sp_el0;
    piVar12 = iVar2 + 0x10;
    *(iVar2 + 0x10) = *piVar12 + 1;
    iVar14 = tpidr_el1;
    piVar1 = *(arg2 + 0xa08) + iVar14 + 0x2c;
    do {
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    iVar14 = *piVar12;
    *(iVar2 + 0x10) = iVar14 + -1;
    if ((iVar14 + -1 == 0) || (*piVar12 == 0)) {
        preempt_schedule_notrace();
    }
    return 0;
}


// ===== sym.miwill_select_queue @ 0x08005c40 (size 64) =====

void sym.miwill_select_queue(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    
    uVar2 = *(arg2 + 0x7c);
    *(arg2 + 0x2c) = uVar2;
    uVar1 = *(arg1 + 0x3cc);
    uVar3 = 0;
    if (uVar2 != 0) {
        uVar3 = uVar2 - 1;
    }
    if (uVar1 <= (uVar3 & 0xffff)) {
        do {
            uVar3 = uVar3 - uVar1;
        } while ((uVar1 & 0xffff) <= (uVar3 & 0xffff));
    }
    return;
}


// ===== sym.miwill_change_rx_flags @ 0x08005c80 (size 188) =====

void sym.miwill_change_rx_flags(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (piVar1 = *(arg1 + 0xa38); arg1 + 0xa38 != piVar1; piVar1 = *piVar1) {
        if ((arg2 >> 8 & 1) != 0) {
            _printk(0x80018ab,"miwill_change_rx_flags",arg1);
        }
        if ((arg2 >> 9 & 1) != 0) {
            _printk(0x8001714,"miwill_change_rx_flags",arg1);
        }
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.miwill_set_rx_mode @ 0x08005d44 (size 112) =====

void sym.miwill_set_rx_mode(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (piVar1 = *(arg1 + 0xa38); arg1 + 0xa38 != piVar1; piVar1 = *piVar1) {
        dev_uc_sync_multiple(piVar1[-3],arg1);
        dev_mc_sync_multiple(piVar1[-3],arg1);
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.miwill_change_mtu @ 0x08005dbc (size 208) =====

int sym.miwill_change_mtu(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0xa10;
    _raw_spin_lock_bh(iVar1);
    piVar2 = arg1 + 0xa38;
    piVar4 = piVar2;
    do {
        piVar4 = *piVar4;
        if (piVar4 == piVar2) {
            _raw_spin_unlock_bh(iVar1);
            *(arg1 + 0xd8) = arg2;
            return 0;
        }
        iVar3 = dev_set_mtu(piVar4[-3],arg2 & 0xffffffff);
    } while (iVar3 == 0);
    _printk(0x8001352,"miwill_change_mtu",piVar4[-3]);
    for (piVar4 = piVar4[1]; piVar4 != piVar2; piVar4 = piVar4[1]) {
        dev_set_mtu(piVar4[-3],*(arg1 + 0xd8));
    }
    _raw_spin_unlock_bh(iVar1);
    return iVar3;
}


// ===== sym.miwill_get_stats64 @ 0x08005e8c (size 276) =====

void sym.miwill_get_stats64(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint64_t uVar6;
    uint32_t *in_x6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x6 = extraout_w8;
    if (uVar6 < extraout_w8) {
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        do {
            if (0x1f < uVar6) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x8005fa0);
                (*pcVar5)();
            }
            piVar1 = *(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + *(arg1 + 0xa08);
            iVar3 = piVar1[3];
            iVar2 = *piVar1;
            iVar4 = piVar1[1];
            iVar7 = piVar1[4];
            *(arg2 + 0x40) = *(arg2 + 0x40) + piVar1[2];
            *arg2 = *arg2 + iVar2;
            *(arg2 + 8) = *(arg2 + 8) + iVar3;
            *(arg2 + 0x10) = *(arg2 + 0x10) + iVar4;
            *(arg2 + 0x18) = *(arg2 + 0x18) + iVar7;
            uVar10 = piVar1[5] + uVar10;
            uVar9 = *(piVar1 + 0x2c) + uVar9;
            uVar8 = piVar1[6] + uVar8;
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            *in_x6 = extraout_w8_00;
        } while (uVar6 < extraout_w8_00);
    }
    else {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
    }
    *(arg2 + 0x30) = uVar10;
    *(arg2 + 0x38) = uVar9;
    *(arg2 + 0xb8) = uVar8;
    return;
}


// ===== sym.miwill_fix_features @ 0x08005fa0 (size 160) =====

void sym.miwill_fix_features(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xfffffdf9bfc0fb9eU | 0x20000200000;
    __rcu_read_lock();
    for (piVar2 = *(arg1 + 0xa38); arg1 + 0xa38 != piVar2; piVar2 = *piVar2) {
        uVar1 = netdev_increment_features(uVar1,*(piVar2[-3] + 0xe0),arg2);
    }
    __rcu_read_unlock();
    netdev_increment_features(uVar1,0x1d0000,arg2);
    return;
}


// ===== sym.miwill_change_carrier @ 0x08006048 (size 100) =====

ulong sym.miwill_change_carrier(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800131a,"miwill_change_carrier",arg1,arg2 & 1);
    if ((arg2 & 1U) == 0) {
        netif_carrier_off(arg1);
    }
    else {
        netif_carrier_on();
    }
    return 0;
}


// ===== sym.miwill_option_enable_get @ 0x080060ac (size 16) =====

ulong sym.miwill_option_enable_get(int64_t arg1)

{
    return 0;
}


// ===== sym.miwill_option_enable_set @ 0x080060bc (size 140) =====

uint sym.miwill_option_enable_set(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000a01,"miwill_option_enable_set",*arg2);
    cVar1 = *arg2;
    rtnl_lock();
    if (cVar1 == '\0') {
        sym.miwill_stop(*arg1);
        rtnl_unlock();
        uVar2 = 0;
        *(*arg1 + 0xc0) = *(*arg1 + 0xc0) & 0xfffffffe;
    }
    else {
        uVar2 = dev_open(*arg1,0);
        rtnl_unlock();
    }
    return uVar2;
}


// ===== sym.miwill_option_mode_get @ 0x08006148 (size 28) =====

ulong sym.miwill_option_mode_get(int64_t arg1,int64_t arg2)

{
    *arg2 = **(arg1 + 0x68);
    return 0;
}


// ===== sym.miwill_option_mode_set @ 0x08006164 (size 84) =====

void sym.miwill_option_mode_set(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_mode_set",*arg2);
    sym.miwill_change_mode(arg1,*arg2);
    return;
}


// ===== sym.miwill_option_gw_addr_get @ 0x080061b8 (size 16) =====

ulong sym.miwill_option_gw_addr_get(int64_t arg1)

{
    return 0;
}


// ===== sym.miwill_option_gw_addr_set @ 0x080061c8 (size 120) =====

ulong sym.miwill_option_gw_addr_set(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uchar *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *arg2;
    _printk(0x8000abc,"miwill_option_gw_addr_set",*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5]);
    uVar1 = *(*arg2 + 1);
    *(arg1 + 0x80) = **arg2;
    *(arg1 + 0x84) = uVar1;
    return 0;
}


// ===== sym.miwill_option_port_5g_get @ 0x08006240 (size 16) =====

ulong sym.miwill_option_port_5g_get(int64_t arg1)

{
    return 0;
}


// ===== sym.miwill_option_port_5g_set @ 0x08006250 (size 88) =====

void sym.miwill_option_port_5g_set(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_port_5g_set",*arg2);
    sym.miwill_port_add_by_name(arg1,*arg2,1);
    return;
}


// ===== sym.miwill_option_port_24g_get @ 0x080062a8 (size 16) =====

ulong sym.miwill_option_port_24g_get(int64_t arg1)

{
    return 0;
}


// ===== sym.miwill_option_port_24g_set @ 0x080062b8 (size 88) =====

void sym.miwill_option_port_24g_set(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80014a3,"miwill_option_port_24g_set",*arg2);
    sym.miwill_port_add_by_name(arg1,*arg2,2);
    return;
}


// ===== sym.miwill_port_add_by_name @ 0x08006310 (size 2256) =====

code * sym.miwill_port_add_by_name(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    ulong *puVar2;
    int *piVar3;
    uint uVar4;
    int iVar5;
    char cVar6;
    int64_t iVar7;
    bool bVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    ulong *arg1_00;
    ulong uVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint *puVar15;
    uchar *puVar16;
    uint *puVar17;
    int64_t iVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    int64_t iVar21;
    ulong *in_x18;
    int64_t *unaff_x19;
    ulong *unaff_x20;
    int64_t *piVar22;
    int64_t *unaff_x22;
    int64_t *unaff_x25;
    code *pcVar23;
    ulong *puVar24;
    int64_t *unaff_x27;
    int64_t *piVar25;
    int64_t *piVar26;
    ulong unaff_x30;
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    piVar22 = arg3 & 0xffffffff;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    _printk(0x800131a,"miwill_port_add_by_name",arg2,piVar22);
    piVar11 = dev_get_by_name(init_net,arg2);
    if (piVar11 == NULL) {
        _printk(0x8001567,arg2);
        pcVar23 = 0xfffffffa;
        piVar11 = unaff_x19;
        arg1_00 = unaff_x20;
        goto code_r0x080064c4;
    }
    rtnl_lock();
    if ((*(piVar11 + 0x18) >> 3 & 1) == 0) {
        if ((*(piVar11 + 0xc5) >> 5 & 1) != 0) {
            do_trace_netlink_extack("Device is already a port of a miwill device");
            uVar12 = 0x8000a13;
            pcVar14 = "__miwill_port_add";
code_r0x08006708:
            _printk(uVar12,pcVar14,piVar11);
            pcVar23 = 0xfffffff0;
            goto code_r0x08006474;
        }
        unaff_x22 = *arg1;
        unaff_x27 = unaff_x22[0x140];
        if (unaff_x27 != piVar11) {
            if (unaff_x27[0x24] != piVar11[0x24]) {
                if (unaff_x27[0x147] != unaff_x27 + 0x147) {
                    uVar12 = 0x8000ae9;
                    pcVar14 = "miwill_dev_type_check_change";
                    goto code_r0x08006708;
                }
                uVar9 = call_netdevice_notifiers(0xf,unaff_x27);
                uVar10 = 1 - (uVar9 & 0xffff7fff);
                if ((uVar9 & 0xffff7fff) < 2) {
                    uVar10 = 0;
                }
                pcVar23 = uVar10;
                if (uVar10 != 0) {
                    _printk(0x8000e58,"miwill_dev_type_check_change",piVar11);
                    goto code_r0x08006474;
                }
                unaff_x27[0x44] = piVar11[0x44];
                *(unaff_x27 + 0x24) = piVar11[0x24];
                *(unaff_x27 + 0xd6) = *(piVar11 + 0xd6);
                *(unaff_x27 + 0xdc) = *(piVar11 + 0xdc);
                *(unaff_x27 + 0x24d) = *(piVar11 + 0x24d);
                *(unaff_x27 + 0x1b) = piVar11[0x1b];
                memcpy(unaff_x27 + 0x6c,piVar11 + 0x6c,*(piVar11 + 0x24d));
                puVar17 = unaff_x27[0x61];
                *(unaff_x27 + 0x24c) = *(piVar11 + 0x24c);
                puVar15 = piVar11[0x61];
                *puVar17 = *puVar15;
                *(puVar17 + 1) = *(puVar15 + 1);
                call_netdevice_notifiers(0x10,unaff_x27);
            }
            arg1_00 = __kmalloc(*(unaff_x22[0x14d] + 0x18) + 0x78,0xdc0);
            if (arg1_00 == NULL) {
                pcVar23 = 0xfffffff4;
                goto code_r0x08006474;
            }
            unaff_x25 = unaff_x22 + 0x140;
            *arg1_00 = piVar11;
            *(arg1_00 + 0xe) = arg3;
            arg1_00[5] = unaff_x25;
            arg1_00[10] = arg1_00 + 10;
            arg1_00[0xb] = arg1_00 + 10;
            *(arg1_00 + 0x44) = piVar11[0x1b];
            uVar10 = dev_set_mtu(piVar11,unaff_x27[0x1b]);
            if (uVar10 != 0) {
                _printk(0x8001352,"__miwill_port_add",piVar11);
                goto code_r0x08006794;
            }
            iVar18 = *unaff_x25;
            if (iVar18 != 0) {
                iVar21 = sp_el0;
                piVar25 = iVar21 + 0x10;
                *(iVar21 + 0x10) = *piVar25 + 1;
                iVar7 = tpidr_el1;
                piVar3 = iVar7 + *(iVar18 + 0x4d0);
                do {
                    cVar6 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar8) {
                        *piVar3 = *piVar3 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar18 = *piVar25;
                *(iVar21 + 0x10) = iVar18 + -1;
                if ((iVar18 + -1 == 0) || (*piVar25 == 0)) {
                    preempt_schedule_notrace();
                    iVar18 = unaff_x22[0x14d];
                    goto joined_r0x08006ba8;
                }
            }
            iVar18 = unaff_x22[0x14d];
joined_r0x08006ba8:
            if (iVar18 == 0) goto code_r0x08006640;
            pcVar23 = *(*(iVar18 + 0x20) + 0x20);
            if (pcVar23 == NULL) goto code_r0x08006640;
            if (pcVar23 != sym.__typeid__ZTSFiP6miwillP11miwill_portE_global_addr) goto code_r0x08006bbc;
            goto code_r0x08006630;
        }
        do_trace_netlink_extack("cannot enslave miwill device to itself");
        uVar12 = 0x80017ac;
    }
    else {
        do_trace_netlink_extack("Loopback device can\'t be added as a miwill port");
        uVar12 = 0x800132f;
    }
    _printk(uVar12,"__miwill_port_add",piVar11);
    pcVar23 = 0xffffffea;
code_r0x08006474:
    do {
        rtnl_unlock();
        arg1_00 = unaff_x20;
code_r0x08006478:
        iVar18 = sp_el0;
        piVar25 = iVar18 + 0x10;
        *(iVar18 + 0x10) = *piVar25 + 1;
        iVar21 = tpidr_el1;
        piVar3 = iVar21 + piVar11[0x9a];
        do {
            cVar6 = '\x01';
            bVar8 = ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
                *piVar3 = *piVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar21 = *piVar25;
        *(iVar18 + 0x10) = iVar21 + -1;
        if ((iVar21 + -1 == 0) || (*piVar25 == 0)) {
            preempt_schedule_notrace();
        }
code_r0x080064c4:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_68) {
            return pcVar23;
        }
        __stack_chk_fail();
code_r0x08006bbc:
        __cfi_slowpath_diag(0x4a0345b55ea58b8b,pcVar23,0x80007f0);
code_r0x08006630:
        uVar10 = (*pcVar23)(unaff_x25,arg1_00);
        if (uVar10 == 0) {
code_r0x08006640:
            if (-1 < *(unaff_x27 + 0xe1)) {
                _printk(0x8000d39,"__miwill_port_add");
            }
            *(piVar11 + 0xc4) = *(piVar11 + 0xc4) | 0x2000;
            uVar10 = netdev_rx_handler_register
                               (piVar11,sym.miwill_handle_frame.1602faf915cac25c49163d565a1fdcd8.cfi_jt,arg1_00);
            if (uVar10 == 0) break;
            _printk(0x800183f,"__miwill_port_add",piVar11);
code_r0x08006770:
            *(piVar11 + 0xc4) = *(piVar11 + 0xc4) & 0xffffdfff;
            sym.miwill_port_leave(unaff_x25,arg1_00);
        }
        else {
            _printk(0x800154c,"miwill_port_enter",*arg1_00);
            iVar18 = *unaff_x25;
            if (iVar18 != 0) {
                iVar21 = sp_el0;
                piVar25 = iVar21 + 0x10;
                *(iVar21 + 0x10) = *piVar25 + 1;
                iVar7 = tpidr_el1;
                piVar3 = iVar7 + *(iVar18 + 0x4d0);
                do {
                    cVar6 = '\x01';
                    bVar8 = ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar8) {
                        *piVar3 = *piVar3 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                iVar18 = *piVar25;
                *(iVar21 + 0x10) = iVar18 + -1;
                if ((iVar18 + -1 == 0) || (*piVar25 == 0)) {
                    preempt_schedule_notrace();
                }
            }
            _printk(0x8000bf6,"__miwill_port_add",piVar11);
        }
        dev_set_mtu(piVar11,*(arg1_00 + 0x44));
code_r0x08006794:
        pcVar23 = uVar10;
        kfree(arg1_00);
        unaff_x20 = arg1_00;
    } while( true );
    piVar25 = unaff_x22[0x149];
code_r0x08006698:
    if (piVar25 != unaff_x22 + 0x149) {
        if ((piVar25[3] == '\0') || (uVar10 = sym.__miwill_option_inst_add(unaff_x25,piVar25,arg1_00), uVar10 == 0))
        goto code_r0x08006694;
        piVar22 = unaff_x22[0x14b];
        unaff_x22 = unaff_x22 + 0x14b;
        arg1 = unaff_x25;
        if (piVar22 != unaff_x22) {
            arg2 = -0x2152ffffffffff00;
            piVar25 = piVar22;
            do {
                piVar22 = *piVar25;
                if ((*(piVar25[2] + 0x18) != '\0') && (piVar25[4] == arg1_00)) {
                    uVar13 = __list_del_entry_valid(piVar25);
                    if ((uVar13 & 1) != 0) {
                        iVar18 = *piVar25;
                        piVar26 = piVar25[1];
                        *(iVar18 + 8) = piVar26;
                        *piVar26 = iVar18;
                    }
                    *piVar25 = -0x2152ffffffffff00;
                    piVar25[1] = -0x2152fffffffffede;
                    kfree(piVar25);
                }
                piVar25 = piVar22;
                arg1 = piVar22;
            } while (piVar22 != unaff_x22);
        }
        _printk(0x8000e27,"__miwill_port_add",piVar11);
        netdev_rx_handler_unregister(piVar11);
        goto code_r0x08006770;
    }
    if ((*(unaff_x27 + 0xc1) >> 1 & 1) != 0) {
        _printk(0x8001522,"__miwill_port_add");
    }
    iVar18 = sp_el0;
    *(iVar18 + 0x10) = *(iVar18 + 0x10) + 0x200;
    _raw_spin_lock(unaff_x27 + 0x4b);
    dev_uc_sync_multiple(piVar11,unaff_x27);
    dev_mc_sync_multiple(piVar11,unaff_x27);
    _raw_spin_unlock_bh(unaff_x27 + 0x4b);
    *(arg1_00 + 6) = 0xffffffff;
    _raw_spin_lock_bh();
    puVar24 = unaff_x22[0x148];
    puVar2 = arg1_00 + 3;
    unaff_x27 = unaff_x22 + 0x147;
    uVar13 = __list_add_valid(puVar2,puVar24,unaff_x27);
    if ((uVar13 & 1) != 0) {
        arg1_00[3] = unaff_x27;
        arg1_00[4] = puVar24;
        *puVar24 = puVar2;
        unaff_x22[0x148] = puVar2;
    }
    if (*(arg1_00 + 6) == -1) {
        uVar10 = *(unaff_x22 + 0xa14);
        *(unaff_x22 + 0xa14) = uVar10 + 1;
        *(arg1_00 + 6) = uVar10;
        piVar26 = unaff_x25 + (uVar10 & 3) + 3;
        iVar18 = *piVar26;
        piVar25 = arg1_00 + 1;
        *piVar25 = iVar18;
        arg1_00[2] = piVar26;
        *piVar26 = piVar25;
        if (iVar18 != 0) {
            *(iVar18 + 8) = piVar25;
        }
        if (*(arg1_00 + 0x4c) != 0) {
            piVar25 = unaff_x22[0x14f] + (*(arg1_00 + 0x4c) - 1) * 0x10;
            piVar19 = *piVar25;
            piVar26 = piVar25;
            if (piVar25 != piVar19) {
                iVar5 = *(piVar19 + -1);
                while ((iVar5 <= *(arg1_00 + 9) &&
                       (((iVar5 < *(arg1_00 + 9) || (piVar19[-4] <= *(arg1_00 + 6))) &&
                        (piVar20 = *piVar19, piVar26 = piVar19, piVar25 != piVar20))))) {
                    iVar5 = piVar20[-1];
                    piVar19 = piVar20;
                }
            }
            puVar24 = piVar26[1];
            puVar2 = arg1_00 + 10;
            uVar13 = __list_add_valid(puVar2,puVar24,piVar26);
            if ((uVar13 & 1) != 0) {
                arg1_00[10] = piVar26;
                arg1_00[0xb] = puVar24;
                *puVar24 = puVar2;
                piVar26[1] = puVar2;
            }
        }
        piVar25 = *unaff_x27;
        if (unaff_x27 == piVar25) {
            bVar8 = false;
        }
        else {
            do {
                piVar1 = piVar25 + 0x34;
                if (*piVar1 != 0) break;
                piVar25 = *piVar25;
            } while (unaff_x27 != piVar25);
            bVar8 = *piVar1 != 0;
        }
        if (unaff_x22[0x14e] != bVar8) {
            *(unaff_x22 + 0x14e) = bVar8;
        }
        if ((unaff_x22[0x14d] != 0) && (pcVar23 = *(*(unaff_x22[0x14d] + 0x20) + 0x30), pcVar23 != NULL)) {
            __cfi_slowpath_diag(0xb074d8048b29f05c,pcVar23,0x8000830);
            (*pcVar23)(unaff_x25,arg1_00);
        }
        unaff_x25 = arg1_00[5] + 0x10;
        auStack_6c[0] = *(arg1_00 + 7) | (*(arg1_00 + 6) != -1) << 1;
        _raw_spin_unlock_bh(unaff_x25);
        netdev_lower_state_changed(*arg1_00,auStack_6c);
        _raw_spin_lock_bh(unaff_x25);
    }
    sym.__miwill_port_change(arg1_00,piVar11[0x45] == '\x06' || piVar11[0x45] == '\0');
    _raw_spin_unlock_bh(unaff_x22 + 0x142);
    _printk(0x8000f9e,"__miwill_port_add",piVar11);
    netdev_change_features(unaff_x22);
    rtnl_unlock();
    puVar16 = piVar11[0x61];
    if (puVar16 == NULL) {
        pcVar23 = NULL;
    }
    else {
        _printk(0x80012b5,arg2,*puVar16,puVar16[1],puVar16[2],puVar16[3],puVar16[4],puVar16[5]);
        if (piVar22 == 1) {
            pcVar23 = NULL;
            uVar4 = *piVar11[0x61];
            *(arg1 + 0x8a) = *(piVar11[0x61] + 1);
            *(arg1 + 0x86) = uVar4;
        }
        else {
            pcVar23 = NULL;
            uVar4 = *piVar11[0x61];
            *(arg1 + 0x90) = *(piVar11[0x61] + 1);
            *(arg1 + 0x8c) = uVar4;
        }
    }
    goto code_r0x08006478;
code_r0x08006694:
    piVar25 = *piVar25;
    goto code_r0x08006698;
}


// ===== sym.miwill_handle_frame @ 0x08006c48 (size 996) =====

uint64_t sym.miwill_handle_frame(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    int64_t *piVar3;
    int *piVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    code *pcVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *arg1;
    if (*(iVar15 + 0xe4) == 1) {
        iVar12 = iVar15;
        if (iVar15 == 0) {
            return 0;
        }
    }
    else {
        iVar12 = skb_clone(iVar15,0xa20);
        if (iVar12 == 0) {
            kfree_skb(iVar15);
            return 0;
        }
        consume_skb(iVar15);
    }
    *arg1 = iVar12;
    puVar10 = *(*(iVar12 + 0x10) + 0x340);
    puVar13 = puVar10[5];
    if (*(puVar10 + 6) == -1) {
        _printk(0x800087b,"miwill_handle_frame",*puVar10);
code_r0x08006eb8:
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x30;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar3 == 0)) {
            preempt_schedule_notrace();
        }
        return 2;
    }
    puVar11 = *(iVar12 + 0xd8);
    if (*(puVar11 + -2) == -0x1e12) {
        if ((*puVar11 & 0xf) == 0xe) {
            *(iVar12 + 0xb0) = *(puVar11 + 6);
            uVar5 = *(puVar11 + -6);
            *(puVar11 + -6) = *(puVar11 + -0xe);
            *(puVar11 + 2) = uVar5;
            skb_pull(iVar12,8);
            iVar1 = *(iVar12 + 0xb6) + 8;
            iVar2 = *(iVar12 + 0xb4) + 8;
            *(iVar12 + 0xb6) = iVar1;
            *(iVar12 + 0xb4) = iVar2;
            *(iVar12 + 0xb2) = *(iVar12 + 0xb2) + 8;
            *(iVar12 + 0x78) = iVar2 - iVar1;
code_r0x08006e44:
            iVar15 = tpidr_el1;
            piVar3 = iVar15 + puVar13[1];
            *piVar3 = *piVar3 + 1;
            piVar3[1] = piVar3[1] + *(iVar12 + 0x70);
            if ((*(iVar12 + 0x80) & 7) == 2) {
                piVar3[2] = piVar3[2] + 1;
            }
            *(iVar12 + 0x10) = *puVar13;
            *(iVar12 + 0xa4) = *(iVar12 + 0xa4) | 0x1000000;
            return 1;
        }
        if ((*puVar11 & 0xf) == 0xf) {
            iVar15 = *(iVar12 + 0xd8);
            if (*(iVar15 + 1) == '\x03') {
                _printk(0x800186d,"miwill_mframe_handler",3,*(iVar15 + 8),*(iVar15 + 9),*(iVar15 + 10),
                        *(iVar15 + 0xb));
                sym.miwill_nl_notify_reset(2);
            }
            else if (*(iVar15 + 1) == '\x02') {
                iVar17 = *(*(*(iVar12 + 0x10) + 0x340) + 0x28);
                _printk(0x800186d,"miwill_mframe_handler",2,*(iVar15 + 8),*(iVar15 + 9),*(iVar15 + 10),
                        *(iVar15 + 0xb));
                *(iVar17 + 0x96) = 0;
                *(iVar17 + 0x92) = *(iVar15 + 8);
                sym.miwill_nl_notify_ip(*(iVar15 + 8));
            }
            else {
                _printk(0x8000a51,"miwill_mframe_handler");
            }
            kfree_skb(iVar12);
            uVar9 = 0;
        }
        else {
            pcVar16 = *(*(puVar13[0xd] + 0x20) + 0x10);
            if (1 < (pcVar16 + -0x8003740 >> 3 | pcVar16 << 0x3d)) {
                __cfi_slowpath_diag(0xeb56f9d2dfba3773,pcVar16,0x8000810);
            }
            uVar9 = (*pcVar16)(puVar13,puVar10,iVar12);
            iVar8 = uVar9;
            if (iVar8 == 3) goto code_r0x08006d9c;
            if (iVar8 == 2) goto code_r0x08006eb8;
            if (iVar8 == 1) goto code_r0x08006e44;
        }
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x28;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (uVar14 = uVar9, *piVar3 == 0)) {
            uVar14 = uVar9 & 0xffffffff;
            preempt_schedule_notrace(uVar9);
        }
    }
    else {
code_r0x08006d9c:
        iVar15 = sp_el0;
        piVar3 = iVar15 + 0x10;
        *(iVar15 + 0x10) = *piVar3 + 1;
        iVar12 = tpidr_el1;
        piVar4 = puVar13[1] + iVar12 + 0x30;
        do {
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
                *piVar4 = *piVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar12 = *piVar3;
        *(iVar15 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar3 == 0)) {
            preempt_schedule_notrace();
        }
        uVar14 = 3;
    }
    return uVar14;
}


// ===== sym.miwill_timer @ 0x0800709c (size 108) =====

void sym.miwill_timer(int64_t arg1)

{
    uint8_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -2) + 1;
    *(arg1 + -2) = uVar1;
    if (3 < uVar1) {
        sym.miwill_nl_notify_reset(1);
    }
    sym.miwill_mframe(arg1 + -0x98,1);
    mod_timer(arg1,_ethtool_op_get_ts_info + 0x9c4);
    return;
}


// ===== sym.miwill_mframe @ 0x08007108 (size 564) =====

void sym.miwill_mframe(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ushort uVar2;
    int16_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000a01,"miwill_mframe",arg2 & 0xffffffff);
    if (arg2 == 3) {
        iVar4 = __netdev_alloc_skb(*arg1,0x1a,0xa20);
        *(iVar4 + 0xd8) = *(iVar4 + 0xd8) + 0x1a;
        *(iVar4 + 200) = *(iVar4 + 200) + 0x1a;
        skb_push(iVar4,4);
        **(iVar4 + 0xd8) = *(arg1 + 0x92);
code_r0x080071ec:
        iVar3 = *(iVar4 + 0xd8) - *(iVar4 + 0xd0);
        *(iVar4 + 0xb4) = iVar3;
        *(iVar4 + 0xb2) = iVar3;
        skb_push(iVar4,0x16);
        iVar6 = *(iVar4 + 0xd8);
        *(iVar6 + 0xf) = arg2;
        *(iVar6 + 0xe) = 0x1f;
        *(iVar6 + 0xc) = 0xe1ee;
        *(iVar6 + 0x14) = 0xe1ee;
        *(iVar6 + 0x10) = _segment.ehdr >> 8 & 0xff | (_segment.ehdr & 0xff00ff) << 8;
        _segment.ehdr = _segment.ehdr + 1;
        *(iVar4 + 0xb0) = 0xe1ee;
        *(iVar4 + 0x10) = *arg1;
        if (iVar4 != 0) goto code_r0x08007254;
    }
    else if (arg2 == 1) {
        iVar4 = __netdev_alloc_skb(*arg1,0x22,0xa20);
        *(iVar4 + 0xd8) = *(iVar4 + 0xd8) + 0x22;
        *(iVar4 + 200) = *(iVar4 + 200) + 0x22;
        skb_push(iVar4,0xc);
        puVar5 = *(iVar4 + 0xd8);
        uVar2 = *(arg1 + 0x8a);
        *puVar5 = *(arg1 + 0x86);
        *(puVar5 + 1) = uVar2;
        uVar1 = *(arg1 + 0x8c);
        *(puVar5 + 10) = *(arg1 + 0x90);
        *(puVar5 + 6) = uVar1;
        goto code_r0x080071ec;
    }
    _printk(0x8001660,arg2 & 0xffffffff);
    iVar4 = 0;
code_r0x08007254:
    arg1 = *arg1;
    piVar8 = *(arg1 + 0xa38);
    while( true ) {
        if ((piVar8 == arg1 + 0xa38) || (piVar7 = piVar8 + -3, piVar7 == NULL)) {
            kfree_skb(iVar4);
            return;
        }
        if ((*(piVar8 + 4) != '\0') && (*(piVar8 + 3) != -1)) break;
        piVar8 = *piVar8;
    }
    if (*piVar7 == 0) {
        _printk(0x8000db1,"miwill_dev_queue_xmit");
        consume_skb(iVar4);
        return;
    }
    *(iVar4 + 0x10) = *piVar7;
    puVar5 = *(iVar4 + 0xd8);
    uVar1 = *(arg1 + 0xa80);
    *(puVar5 + 1) = *(arg1 + 0xa84);
    *puVar5 = uVar1;
    uVar1 = **(*piVar7 + 0x308);
    *(puVar5 + 10) = *(*(*piVar7 + 0x308) + 1);
    *(puVar5 + 6) = uVar1;
    *(puVar5 + 0x12) = *(*(*(arg1 + 0xa00) + 0x308) + 4);
    dev_queue_xmit(iVar4);
    return;
}


// ===== sym.miwill_get_drvinfo @ 0x0800733c (size 84) =====

void sym.miwill_get_drvinfo(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    strscpy(arg1 + 4,"miwill",0x20);
    strscpy(arg1 + 0x24,0x800100b,0x20);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08007390 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080073d4

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
    //switch table (4 cases) at 0x8000876
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80073e8);
    (*pcVar1)();
}


// ===== sym.miwill_nl_msg @ 0x080073e8 (size 368) =====

uint32_t sym.miwill_nl_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uchar in_w4;
    int *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = __alloc_skb((arg2 + 7U & 0xfffffffc) + 0x14,0xa20,0,0xffffffff);
    if (iVar6 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iVar7 = genlmsg_put(iVar6,arg3 & 0xffffffff,0,obj.miwill_nl_family,0,arg4 & 0xffffffff);
        if (iVar7 != 0) {
            iVar4 = nla_put(iVar6,in_w4,arg2 & 0xffffffff,arg1);
            piVar8 = iVar7 + -0x14;
            if (iVar4 == 0) {
                *piVar8 = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - piVar8;
                uVar2 = _strcmp;
                uVar1 = *0x8009000;
                if (arg3 != 0) {
                    uVar5 = netlink_unicast(_strcmp,iVar6,arg3 & 0xffffffff,0x40);
                    return uVar5 & uVar5 >> 0x1f;
                }
                if (*0x8009c87 != '\0') {
                    *(iVar6 + 0x38) = *0x8009000;
                    uVar5 = netlink_broadcast(uVar2,iVar6,0,uVar1,0xa20);
                    return uVar5 & uVar5 >> 0x1f;
                }
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8007558);
                (*pcVar3)();
            }
            if (piVar8 != NULL) {
                if (piVar8 < *(iVar6 + 0xd8)) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x8007548);
                    (*pcVar3)();
                }
                skb_trim(iVar6,piVar8 - *(iVar6 + 0xd8));
            }
        }
        kfree_skb(iVar6);
        uVar5 = 0xffffffa6;
    }
    return uVar5;
}


// ===== sym.miwill_nl_notify_ip @ 0x0800755c (size 140) =====

void sym.miwill_nl_notify_ip(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t arg2;
    ulong unaff_x30;
    uchar auVar2 [16];
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    uchar *puStack_30;
    code *pcStack_28;
    uint32_t uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uStack_1c = arg1;
    iStack_18 = *(iVar1 + 0x5e0);
    _printk(0x8000b35,"miwill_nl_notify_ip",uStack_1c & 0xff,uStack_1c >> 8 & 0xff,uStack_1c >> 0x10 & 0xff,
            uStack_1c >> 0x18);
    sym.miwill_nl_msg(&uStack_1c,4,0,3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    auStack_3c[0] = __stack_chk_fail();
    *extraout_x18 = sym.miwill_nl_notify_reset;
    pcStack_28 = sym.miwill_nl_notify_reset;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_30 = &stack0xfffffffffffffff0;
    _printk(obj..str.1.llvm.11161178473568554932,"miwill_nl_notify_reset",auStack_3c[0]);
    sym.miwill_nl_msg(auStack_3c,1,0,3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.minet_nl_notify;
    arg2 = auVar2._8_8_ & 0xffffffff;
    _printk(obj..str.1.llvm.11161178473568554932,"minet_nl_notify",arg2);
    sym.miwill_nl_msg(auVar2._0_8_,arg2,0,3);
    return;
}


// ===== sym.miwill_nl_notify_reset @ 0x080075e8 (size 128) =====

void sym.miwill_nl_notify_reset(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg2;
    ulong unaff_x30;
    uchar auVar2 [16];
    uchar auStack_1c [4];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    auStack_1c[0] = arg1;
    _printk(obj..str.1.llvm.11161178473568554932,"miwill_nl_notify_reset",arg1 & 0xff);
    sym.miwill_nl_msg(auStack_1c,1,0,3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    auVar2 = __stack_chk_fail();
    *extraout_x18 = sym.minet_nl_notify;
    arg2 = auVar2._8_8_ & 0xffffffff;
    _printk(obj..str.1.llvm.11161178473568554932,"minet_nl_notify",arg2);
    sym.miwill_nl_msg(auVar2._0_8_,arg2,0,3);
    return;
}


// ===== sym.minet_nl_notify @ 0x08007668 (size 96) =====

void sym.minet_nl_notify(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(obj..str.1.llvm.11161178473568554932,"minet_nl_notify",arg2 & 0xffffffffU);
    sym.miwill_nl_msg(arg1,arg2 & 0xffffffffU,0,3);
    return;
}


// ===== sym.miwill_nl_finit @ 0x080076c8 (size 64) =====

void sym.miwill_nl_finit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001245,"miwill_nl_finit");
    genl_unregister_family(obj.miwill_nl_family);
    return;
}


// ===== sym.miwill_nl_cmd_options_set @ 0x08007708 (size 536) =====

ulong sym.miwill_nl_cmd_options_set(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t arg2_00;
    int64_t arg3;
    uchar *arg4;
    ulong unaff_x30;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uchar *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    puStack_78 = NULL;
    iStack_70 = 0;
    iStack_88 = 0;
    iStack_80 = 0;
    uStack_98 = 0;
    iStack_90 = 0;
    uVar1 = __nla_parse(&uStack_98,9,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.miwill_genl_policy,0,
                        *(arg2 + 0x40));
    if (uVar1 != 0) goto code_r0x08007774;
    if (iStack_90 == 0) {
        _printk(0x8000d76,"miwill_nl_cmd_options_set");
        uVar1 = 0xffffffff;
        goto code_r0x08007774;
    }
    iVar2 = iStack_90 + 4;
    _printk(0x8000d5c,"miwill_nl_cmd_options_set",iVar2);
    iVar2 = sym.miwill_name_to_dev(iVar2);
    if (iVar2 == 0) {
        uVar1 = 0xffffffff;
        goto code_r0x08007774;
    }
    sym.dev_put(iVar2);
    if (iStack_88 == 0) {
        arg2_00 = 0xff;
        if (iStack_80 == 0) goto code_r0x08007810;
code_r0x08007884:
        arg3 = iStack_80 + 4;
        _printk(0x800139f,"miwill_nl_cmd_options_set",arg3);
    }
    else {
        arg2_00 = *(iStack_88 + 4);
        _printk(0x80011b9,"miwill_nl_cmd_options_set",arg2_00);
        if (iStack_80 != 0) goto code_r0x08007884;
code_r0x08007810:
        arg3 = 0;
    }
    arg4 = puStack_78;
    if (puStack_78 != NULL) {
        arg4 = puStack_78 + 4;
        _printk(0x80011d6,"miwill_nl_cmd_options_set",*arg4,puStack_78[5],puStack_78[6],puStack_78[7],
                puStack_78[8],puStack_78[9]);
    }
    if (iStack_70 != 0) {
        _printk(0x8000b69,"miwill_nl_cmd_options_set",iStack_70 + 4);
    }
    if (iStack_68 != 0) {
        _printk(0x8000d92,"miwill_nl_cmd_options_set",iStack_68 + 4);
    }
    uVar1 = sym.miwill_options_set(iVar2 + 0xa00,arg2_00,arg3,arg4);
code_r0x08007774:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.miwill_nl_cmd_options_get;
    _printk(0x80013ba,"miwill_nl_cmd_options_get",*(iVar2 + 0xd8) + 0x18);
    return 0;
}


// ===== sym.miwill_nl_cmd_options_get @ 0x08007920 (size 64) =====

ulong sym.miwill_nl_cmd_options_get(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80013ba,"miwill_nl_cmd_options_get",*(arg1 + 0xd8) + 0x18);
    return 0;
}


// ===== sym.minet_nl_cmd_set @ 0x08007960 (size 164) =====

void sym.minet_nl_cmd_set(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_18 = *(iVar8 + 0x5e0);
    uStack_28 = 0;
    iStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar7 = __nla_parse(&uStack_68,9,*(arg1 + 0xd8) + 5,**(arg1 + 0xd8) + -0x14,obj.miwill_genl_policy,0,
                        *(arg2 + 0x40));
    if (uVar7 == 0) {
        if (iStack_20 == 0) {
            uVar7 = 0;
        }
        else {
            uVar7 = sym.minet_set_app(iStack_20 + 4);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_18) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.dev_put;
    if (iVar8 != 0) {
        iVar5 = sp_el0;
        piVar1 = iVar5 + 0x10;
        *(iVar5 + 0x10) = *piVar1 + 1;
        iVar6 = tpidr_el1;
        piVar2 = iVar6 + *(iVar8 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar8 = *piVar1;
        *(iVar5 + 0x10) = iVar8 + -1;
        if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.dev_put @ 0x08007a04 (size 120) =====

void sym.dev_put(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar5 = sp_el0;
        piVar1 = iVar5 + 0x10;
        *(iVar5 + 0x10) = *piVar1 + 1;
        iVar6 = tpidr_el1;
        piVar2 = iVar6 + *(arg1 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar6 = *piVar1;
        *(iVar5 + 0x10) = iVar6 + -1;
        if ((iVar6 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.add_new_flow @ 0x08007a9c (size 204) =====

ulong * sym.add_new_flow(int64_t arg1)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80013d1,"add_new_flow");
        puVar1 = NULL;
    }
    else {
        puVar1 = kmem_cache_alloc_trace(___list_add_valid,0xa20,0x48);
        if (puVar1 != NULL) {
            puVar4 = *(arg1 + 0x10);
            puVar1[8] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar3 = puVar1 + 7;
            *puVar3 = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            uVar2 = __list_add_valid(puVar3,puVar4,arg1 + 8);
            if ((uVar2 & 1) != 0) {
                *(arg1 + 0x10) = puVar3;
                puVar1[7] = arg1 + 8;
                puVar1[8] = puVar4;
                *puVar4 = puVar3;
            }
            *arg1 = *arg1 + 1;
        }
    }
    return puVar1;
}


// ===== sym.match_flow @ 0x08007b68 (size 160) =====

int64_t * sym.match_flow(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar1 = arg1 + 8;
    if (*piVar1 != piVar1) {
        piVar2 = *piVar1;
        do {
            piVar4 = *piVar2;
            if (((*(piVar2 + -0x36) == *(arg2 + 2)) && (piVar3 = piVar2 + -7, *piVar3 == *arg2)) &&
               (*(piVar2 + -0x34) == *(arg2 + 4))) {
                if (*(arg2 + 2) == 2) {
                    if (piVar2[-6] == *(arg2 + 8)) {
                        return piVar3;
                    }
                }
                else if ((piVar2[-6] == *(arg2 + 8)) && (piVar2[-5] == *(arg2 + 0x10))) {
                    return piVar3;
                }
            }
            piVar2 = piVar4;
        } while (piVar4 != piVar1);
    }
    return NULL;
}


// ===== sym.add_new_app @ 0x08007c08 (size 240) =====

ulong * sym.add_new_app(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80013d1,"add_new_app");
        puVar2 = NULL;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x30);
        if (puVar2 != NULL) {
            puVar2[3] = 0;
            puVar2[5] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar4 = puVar2 + 4;
            *puVar4 = 0;
            puVar5 = puVar2 + 2;
            *puVar5 = 0;
            *puVar5 = puVar5;
            puVar2[3] = puVar5;
            puVar5 = *(arg1 + 0x10);
            uVar3 = __list_add_valid(puVar4,puVar5,arg1 + 8);
            if ((uVar3 & 1) != 0) {
                *(arg1 + 0x10) = puVar4;
                puVar2[4] = arg1 + 8;
                puVar2[5] = puVar5;
                *puVar5 = puVar4;
            }
            *arg1 = *arg1 + 1;
        }
    }
    return puVar2;
}


// ===== sym.match_app @ 0x08007cf8 (size 60) =====

int64_t sym.match_app(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    do {
        piVar1 = *piVar1;
        if (piVar1 == arg1 + 8) {
            return 0;
        }
    } while (*(piVar1 + -0x1c) != arg2);
    return piVar1 + -4;
}


// ===== sym.merge_one_app_flow @ 0x08007d34 (size 728) =====

ulong sym.merge_one_app_flow(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int *piVar10;
    ulong uVar11;
    int *piVar12;
    ulong *in_x18;
    int *piVar13;
    ulong *puVar14;
    int *piVar15;
    ulong *puVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg4 + 4);
    piVar1 = arg4 + 8;
    piVar9 = piVar1;
    do {
        piVar9 = *piVar9;
        if (piVar9 == piVar1) goto code_r0x08007d9c;
    } while (*(piVar9 + -0x1c) != arg1);
    piVar15 = piVar9 + -3;
    if (piVar15 == NULL) {
code_r0x08007d9c:
        if (arg4 == 0) {
            _printk(0x80013d1,"add_new_app");
            puVar7 = NULL;
        }
        else {
            iVar2 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar2 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xa20,0x30);
            if (puVar7 != NULL) {
                puVar7[3] = 0;
                puVar7[5] = 0;
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar14 = puVar7 + 4;
                *puVar14 = 0;
                puVar16 = puVar7 + 2;
                *puVar16 = 0;
                *puVar16 = puVar16;
                puVar7[3] = puVar16;
                puVar16 = *(arg4 + 0x10);
                uVar8 = __list_add_valid(puVar14,puVar16,piVar1);
                if ((uVar8 & 1) != 0) {
                    *(arg4 + 0x10) = puVar14;
                    puVar7[4] = piVar1;
                    puVar7[5] = puVar16;
                    *puVar16 = puVar14;
                }
                iVar6 = *arg4;
                *(puVar7 + 4) = arg1;
                *arg4 = iVar6 + 2;
            }
        }
        piVar15 = puVar7 + 1;
    }
    _raw_spin_unlock_bh(arg4 + 4);
    _raw_spin_lock_bh(piVar15 + 1);
    piVar13 = piVar15 + 2;
    if (*piVar13 != piVar13) {
        piVar10 = *piVar13;
        do {
            piVar12 = *piVar10;
            if (((*(piVar10 + -0x36) == *(arg2 + 2)) && (piVar10[-0xe] == *arg2)) && (piVar10[-0xd] == *(arg2 + 4))) {
                if (*(arg2 + 2) == 2) {
                    if (piVar10[-0xc] != *(arg2 + 8)) goto code_r0x08007e70;
                }
                else if ((*(piVar10 + -0xc) != *(arg2 + 8)) || (*(piVar10 + -10) != *(arg2 + 0x10)))
                goto code_r0x08007e70;
                piVar10[-4] = piVar10[-4] + *arg3;
                piVar10[-3] = piVar10[-3] + *(arg3 + 4);
                piVar10[-2] = piVar10[-2] + *(arg3 + 8);
                piVar10[-1] = piVar10[-1] + *(arg3 + 0xc);
                if (piVar10 + -0xe != NULL) goto code_r0x08007fa8;
                break;
            }
code_r0x08007e70:
            piVar10 = piVar12;
        } while (piVar12 != piVar13);
    }
    if (piVar15 == NULL) {
        _printk(0x80013d1,"add_new_flow");
    }
    else {
        puVar7 = kmem_cache_alloc_trace(___list_add_valid,0xa20,0x48);
        if (puVar7 != NULL) {
            puVar7[8] = 0;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            puVar16 = puVar7 + 7;
            *puVar16 = 0;
            puVar14 = *(piVar15 + 4);
            uVar8 = __list_add_valid(puVar16,puVar14,piVar13);
            if ((uVar8 & 1) != 0) {
                *(piVar15 + 4) = puVar16;
                puVar7[7] = piVar13;
                puVar7[8] = puVar14;
                *puVar14 = puVar16;
            }
            *piVar15 = *piVar15 + 1;
            uVar4 = *(arg2 + 0x18);
            uVar3 = *arg2;
            uVar5 = *(arg2 + 8);
            puVar7[2] = *(arg2 + 0x10);
            puVar7[3] = uVar4;
            uVar11 = *(arg2 + 0x20);
            *puVar7 = uVar3;
            puVar7[1] = uVar5;
            uVar3 = *arg3;
            uVar4 = *(arg3 + 8);
            puVar7[4] = uVar11;
            puVar7[5] = uVar3;
            puVar7[6] = uVar4;
            *piVar15 = *piVar15 + 1;
        }
    }
code_r0x08007fa8:
    _raw_spin_unlock_bh(piVar15 + 1);
    return 0;
}


// ===== sym.merge_app_flow @ 0x0800800c (size 436) =====

ulong * sym.merge_app_flow(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *arg4;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    arg4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xcc0,0x18);
    if (arg4 == NULL) {
        _printk(0x8000cb7,"merge_app_flow");
    }
    else {
        iVar9 = 0;
        *arg4 = 0;
        arg4[1] = arg4 + 1;
        arg4[2] = arg4 + 1;
        do {
            piVar1 = *0x8008000 + iVar9 * 0x18 + 0x18;
            if (piVar1 != *piVar1) {
                iVar7 = *0x8008000 + iVar9 * 0x18;
                _raw_spin_lock_bh();
                piVar10 = *piVar1;
                while (piVar4 = piVar10, piVar4 != piVar1) {
                    piVar11 = piVar4 + -2;
                    piVar10 = *piVar4;
                    if (*piVar11 != piVar11) {
                        _raw_spin_lock_bh(piVar4 + -0x14);
                        piVar5 = piVar4[-2];
                        while (piVar5 != piVar11) {
                            piVar8 = *piVar5;
                            uVar6 = __list_del_entry_valid(piVar5);
                            if ((uVar6 & 1) != 0) {
                                iVar2 = *piVar5;
                                piVar3 = piVar5[1];
                                *(iVar2 + 8) = piVar3;
                                *piVar3 = iVar2;
                            }
                            *piVar5 = piVar5;
                            piVar5[1] = piVar5;
                            *(piVar4 + -3) = *(piVar4 + -3) + -1;
                            sym.merge_one_app_flow(*(piVar4 + -0x1c),piVar5 + -7,piVar5 + -2,arg4);
                            kfree(piVar5 + -7);
                            piVar5 = piVar8;
                        }
                        _raw_spin_unlock_bh(piVar4 + -0x14);
                    }
                }
                _raw_spin_unlock_bh(iVar7 + 0x14);
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x20);
    }
    return arg4;
}


// ===== sym.minet_notify_app_flow @ 0x080081c8 (size 948) =====

ulong sym.minet_notify_app_flow(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    uchar uVar6;
    uint32_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    uint64_t uVar10;
    ushort *arg1_00;
    uint16_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint16_t uVar14;
    uint16_t uVar15;
    uint16_t uVar16;
    uint16_t uVar17;
    int64_t *piVar18;
    uint16_t uVar19;
    uint16_t uVar20;
    ulong *in_x18;
    int64_t *piVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uint16_t uVar24;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80013d1,"minet_notify_app_flow");
        uVar9 = 0xffffffff;
    }
    else {
        _raw_spin_lock_bh();
        piVar8 = *(arg1 + 8);
        while (piVar8 != arg1 + 8) {
            piVar22 = *piVar8;
            uVar10 = __list_del_entry_valid(piVar8);
            if ((uVar10 & 1) != 0) {
                iVar1 = *piVar8;
                piVar2 = piVar8[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar8 = piVar8;
            piVar8[1] = piVar8;
            arg1_00 = __kmalloc(*(piVar8 + -3) * 0x38 + 0xc,0xa20);
            if (arg1_00 == NULL) {
                _printk(0x800168e,"minet_notify_app_flow");
            }
            else {
                *arg1_00 = 1;
                uVar5 = *(piVar8 + -0x1c);
                arg1_00[4] = 0;
                *(arg1_00 + 2) = uVar5;
            }
            _raw_spin_lock_bh(piVar8 + -0x14);
            piVar2 = piVar8[-2];
            while (piVar2 != piVar8 + -2) {
                piVar21 = piVar2 + -7;
                piVar23 = *piVar2;
                uVar10 = __list_del_entry_valid(piVar2);
                if ((uVar10 & 1) != 0) {
                    iVar1 = *piVar2;
                    piVar18 = piVar2[1];
                    *(iVar1 + 8) = piVar18;
                    *piVar18 = iVar1;
                }
                *piVar2 = piVar2;
                piVar2[1] = piVar2;
                if (arg1_00 != NULL) {
                    piVar18 = arg1_00 + arg1_00[4] * 0x1c + 6;
                    *piVar18 = *piVar21;
                    iVar3 = piVar2[-3];
                    iVar1 = piVar2[-6];
                    iVar4 = piVar2[-5];
                    piVar18[3] = piVar2[-4];
                    piVar18[4] = iVar3;
                    piVar18[1] = iVar1;
                    piVar18[2] = iVar4;
                    iVar1 = piVar2[-1];
                    piVar18[5] = piVar2[-2];
                    piVar18[6] = iVar1;
                    if (*(piVar2 + -0x36) == 10) {
                        uVar12 = *(piVar2 + -0x1e) >> 8 | *(piVar2 + -0x1e) << 8;
                        uVar14 = *(piVar2 + -0x1a) >> 8 | *(piVar2 + -0x1a) << 8;
                        uVar11 = *(piVar2 + -4) >> 8 | *(piVar2 + -4) << 8;
                        uVar13 = *(piVar2 + -0x1c) >> 8 | *(piVar2 + -0x1c) << 8;
                        uVar16 = *(piVar2 + -0x16) >> 8 | *(piVar2 + -0x16) << 8;
                        uVar15 = *(piVar2 + -3) >> 8 | *(piVar2 + -3) << 8;
                        uVar17 = *(piVar2 + -0x14) >> 8 | *(piVar2 + -0x14) << 8;
                        uVar19 = *(piVar2 + -0x12) >> 8 | *(piVar2 + -0x12) << 8;
                        uVar24 = *(piVar2 + -6) >> 8 | *(piVar2 + -6) << 8;
                        uVar6 = *piVar21;
                        uVar20 = *(piVar2 + -0x32);
                        uVar9 = 0x8000e7e;
code_r0x080084b4:
                        _printk(uVar9,uVar6,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19,uVar20,
                                uVar24);
                    }
                    else if (*(piVar2 + -0x36) == 2) {
                        uVar9 = 0x80013eb;
                        uVar24 = *(piVar2 + -0x34);
                        uVar6 = *piVar21;
                        uVar11 = *(piVar2 + -4);
                        uVar12 = *(piVar2 + -0x1f);
                        uVar13 = *(piVar2 + -0x1e);
                        uVar14 = *(piVar2 + -0x1d);
                        uVar15 = *(piVar2 + -0x32);
                        uVar16 = *(piVar2 + -6);
                        uVar17 = *(piVar2 + -0x2f);
                        uVar20 = *(piVar2 + -0x2d);
                        uVar19 = *(piVar2 + -0x2e);
                        goto code_r0x080084b4;
                    }
                    _printk(0x800092f,piVar2[-2],*(piVar2 + -0xc),piVar2[-1],*(piVar2 + -4));
                    arg1_00[4] = arg1_00[4] + 1;
                }
                kfree(piVar21);
                piVar2 = piVar23;
            }
            _raw_spin_unlock_bh(piVar8 + -0x14);
            kfree(piVar8 + -4);
            piVar8 = piVar22;
            if (arg1_00 != NULL) {
                _printk(0x8000ef6,"minet_notify_app_flow",*(arg1_00 + 2),arg1_00[4]);
                uVar7 = arg1_00[4] * 0x38 + 0xc;
                _printk(obj..str.1.llvm.11161178473568554932,"minet_nl_notify",uVar7);
                sym.miwill_nl_msg(arg1_00,uVar7,0,3);
                kfree(arg1_00);
            }
        }
        _raw_spin_unlock_bh(arg1 + 4);
        kfree(arg1);
        uVar9 = 0;
    }
    return uVar9;
}


// ===== sym.get_sock_uid @ 0x0800857c (size 16) =====

uint sym.get_sock_uid(int64_t arg1)

{
    return *(arg1 + 600);
}


// ===== sym.add_app @ 0x0800858c (size 320) =====

ulong sym.add_app(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    do {
        iVar3 = *0x8008000;
        iVar2 = *0x8008000 + iVar8;
        iVar1 = iVar2 + 0x14;
        _raw_spin_lock_bh(iVar1);
        if (iVar2 == -0x10) {
            _printk(0x80013d1,"add_new_app");
        }
        else {
            iVar2 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar2 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xa20,0x30);
            if (puVar4 != NULL) {
                iVar3 = iVar3 + iVar8;
                puVar4[3] = 0;
                puVar4[5] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar6 = puVar4 + 4;
                *puVar6 = 0;
                puVar7 = puVar4 + 2;
                *puVar7 = 0;
                *puVar7 = puVar7;
                puVar4[3] = puVar7;
                puVar7 = *(iVar3 + 0x20);
                uVar5 = __list_add_valid(puVar6,puVar7,iVar3 + 0x18);
                if ((uVar5 & 1) != 0) {
                    *(iVar3 + 0x20) = puVar6;
                    puVar4[4] = iVar3 + 0x18;
                    puVar4[5] = puVar7;
                    *puVar7 = puVar6;
                }
                *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
                *(puVar4 + 4) = arg1;
            }
        }
        _raw_spin_unlock_bh(iVar1);
        iVar8 = iVar8 + 0x18;
    } while (iVar8 != 0x300);
    return 0;
}


// ===== sym.del_app @ 0x080086cc (size 416) =====

ulong sym.del_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = *0x8008000 + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = *0x8008000 + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar11 = *piVar1;
                do {
                    piVar12 = *piVar11;
                    if (*(piVar11 + -0x1c) == arg1) {
                        uVar6 = __list_del_entry_valid(piVar11);
                        if ((uVar6 & 1) != 0) {
                            iVar3 = *piVar11;
                            piVar10 = piVar11[1];
                            *(iVar3 + 8) = piVar10;
                            *piVar10 = iVar3;
                        }
                        *piVar11 = piVar11;
                        piVar10 = piVar11 + -2;
                        piVar11[1] = piVar11;
                        *piVar2 = *piVar2 + -1;
                        if (*piVar10 != piVar10) {
                            _raw_spin_lock_bh(piVar11 + -0x14);
                            piVar5 = piVar11[-2];
                            while (piVar5 != piVar10) {
                                piVar9 = *piVar5;
                                uVar6 = __list_del_entry_valid(piVar5);
                                if ((uVar6 & 1) != 0) {
                                    iVar3 = *piVar5;
                                    piVar4 = piVar5[1];
                                    *(iVar3 + 8) = piVar4;
                                    *piVar4 = iVar3;
                                }
                                *piVar5 = piVar5;
                                piVar5[1] = piVar5;
                                *(piVar11 + -3) = piVar11[-3] + -1;
                                kfree(piVar5 + -7);
                                piVar5 = piVar9;
                            }
                            _raw_spin_unlock_bh(piVar11 + -0x14);
                            kfree(piVar11 + -4);
                        }
                    }
                    piVar11 = piVar12;
                } while (piVar12 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.clear_app @ 0x08008874 (size 392) =====

ulong sym.clear_app(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        piVar1 = *0x8008000 + iVar7 * 0x18 + 0x18;
        if (piVar1 != *piVar1) {
            iVar8 = *0x8008000 + iVar7 * 0x18;
            _raw_spin_lock_bh();
            if (*piVar1 != piVar1) {
                piVar2 = iVar8 + 0x10;
                piVar9 = *piVar1;
                do {
                    piVar11 = *piVar9;
                    uVar6 = __list_del_entry_valid(piVar9);
                    if ((uVar6 & 1) != 0) {
                        iVar3 = *piVar9;
                        piVar12 = piVar9[1];
                        *(iVar3 + 8) = piVar12;
                        *piVar12 = iVar3;
                    }
                    *piVar9 = piVar9;
                    piVar12 = piVar9 + -2;
                    piVar9[1] = piVar9;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar12 != piVar12) {
                        _raw_spin_lock_bh(piVar9 + -0x14);
                        piVar5 = piVar9[-2];
                        while (piVar5 != piVar12) {
                            piVar10 = *piVar5;
                            uVar6 = __list_del_entry_valid(piVar5);
                            if ((uVar6 & 1) != 0) {
                                iVar3 = *piVar5;
                                piVar4 = piVar5[1];
                                *(iVar3 + 8) = piVar4;
                                *piVar4 = iVar3;
                            }
                            *piVar5 = piVar5;
                            piVar5[1] = piVar5;
                            *(piVar9 + -3) = piVar9[-3] + -1;
                            kfree(piVar5 + -7);
                            piVar5 = piVar10;
                        }
                        _raw_spin_unlock_bh(piVar9 + -0x14);
                        kfree(piVar9 + -4);
                    }
                    piVar9 = piVar11;
                } while (piVar11 != piVar1);
            }
            _raw_spin_unlock_bh(iVar8 + 0x14);
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x20);
    return 0;
}


// ===== sym.minet_set_app @ 0x08008a04 (size 360) =====

ulong sym.minet_set_app(int64_t arg1)

{
    uint32_t uVar1;
    int16_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80013d1,"minet_set_app");
        uVar3 = 0xffffffff;
    }
    else if (*arg1 == 1) {
        iVar2 = *(arg1 + 2);
        if (iVar2 == 1) {
            if (*(arg1 + 4) != 0) {
                uVar4 = 0;
                do {
                    uVar5 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
                    sym.add_app(*(arg1 + 8 + uVar5));
                    _printk(0x800111f,"minet_set_app",*(arg1 + 8 + uVar5));
                    uVar1 = uVar4 + 1;
                    uVar4 = uVar1;
                } while (uVar1 < *(arg1 + 4));
                return 0;
            }
        }
        else if (iVar2 == 2) {
            if (*(arg1 + 4) != 0) {
                uVar4 = 0;
                do {
                    uVar5 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
                    sym.del_app(*(arg1 + 8 + uVar5));
                    _printk(0x8001487,"minet_set_app",*(arg1 + 8 + uVar5));
                    uVar1 = uVar4 + 1;
                    uVar4 = uVar1;
                } while (uVar1 < *(arg1 + 4));
                return 0;
            }
        }
        else if (iVar2 == 3) {
            sym.clear_app(arg1);
            _printk(0x8000cd1,"minet_set_app");
        }
        uVar3 = 0;
    }
    else {
        _printk(0x80008c9,"minet_set_app");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}


// ===== sym.minet_init @ 0x08008b6c (size 384) =====

ulong sym.minet_init(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(___list_add_valid,0xcc0,0x310);
    if (iVar2 != 0) {
        *0x8008000 = iVar2;
        memset(iVar2,0,0x310);
        iVar4 = 0;
        *(iVar2 + 0x18) = iVar2 + 0x18;
        *(iVar2 + 0x20) = iVar2 + 0x18;
        *(iVar2 + 0x2c) = 0;
        *(iVar2 + 0x30) = iVar2 + 0x30;
        *(iVar2 + 0x38) = iVar2 + 0x30;
        *(iVar2 + 0x44) = 0;
        *(iVar2 + 0x48) = iVar2 + 0x48;
        *(iVar2 + 0x50) = iVar2 + 0x48;
        do {
            iVar2 = *0x8008000 + iVar4;
            iVar4 = iVar4 + 0x18;
            *(iVar2 + 0x5c) = 0;
            *(iVar2 + 0x60) = iVar2 + 0x60;
            *(iVar2 + 0x68) = iVar2 + 0x60;
        } while (iVar4 != 0x2b8);
        iVar1 = nf_register_net_hooks(init_net,obj.minet_hooks,4);
        if (iVar1 == 0) {
            uVar3 = kthread_create_on_node
                              (sym.minet_thread.0de74588d94f2b53e0e32bf50c4eb975.cfi_jt,*0x8008000,0xffffffff,
                               "minet_thread");
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                *(*0x8008000 + 8) = uVar3;
                if (uVar3 != 0) {
                    _printk(0x8000fcc,"minet_init_module");
                    return 0;
                }
            }
            else {
                *(*0x8008000 + 8) = uVar3;
            }
            _printk(0x80018ee,"minet_init_module");
        }
        else {
            _printk(0x800095c,"minet_init_module",iVar1);
        }
        if (*0x8008000 != 0) {
            kfree();
        }
    }
    *0x8008000 = 0;
    return 0xffffffff;
}


// ===== sym.minet_cleanup @ 0x08008cec (size 152) =====

void sym.minet_cleanup(void)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000fe4,"minet_cleanup_module");
    nf_unregister_net_hooks(init_net,obj.minet_hooks,4);
    arg1 = 0;
    if (*(*0x8008000 + 8) != 0) {
        arg1 = kthread_stop();
        *(*0x8008000 + 8) = 0;
    }
    sym.clear_app(arg1);
    if (*0x8008000 != 0) {
        kfree();
        *0x8008000 = 0;
    }
    _printk(0x8000fcc,"minet_cleanup_module");
    return;
}


// ===== sym.minet_thread @ 0x08008d84 (size 88) =====

ulong sym.minet_thread(void)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000fe4,"minet_thread");
    uVar1 = kthread_should_stop();
    while ((uVar1 & 1) == 0) {
        schedule_timeout_interruptible(0x1d4c);
        arg1 = sym.merge_app_flow();
        sym.minet_notify_app_flow(arg1);
        uVar1 = kthread_should_stop();
    }
    return 0;
}


// ===== sym.hook4 @ 0x08008ddc (size 860) =====

ulong sym.hook4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar4 == 0) {
        return 1;
    }
    cVar3 = *arg2;
    if ((cVar3 == '\x01') && (*(iVar4 + 9) == '\x11')) {
        if ((*(arg1 + 0xa7) & 1) == 0) {
            return 1;
        }
        uVar2 = *(iVar4 + 0xc);
        if ((uVar2 & 0xf0ff) == 0x10ac) {
            return 1;
        }
        if ((uVar2 & 0xff) == 10) {
            return 1;
        }
        if (uVar2 == 0xffffffff) {
            return 1;
        }
        if ((uVar2 & 0xffffff) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xff) == 0x7f) {
            return 1;
        }
        if ((uVar2 & 0xf0) == 0xe0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xa8c0) {
            return 1;
        }
        if ((uVar2 & 0xffff) == 0xfea9) {
            return 1;
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar6 = tpidr_el1;
        if (*(cpu_number + iVar6) < 0x20) {
            iVar7 = *0x8008000 + *(cpu_number + iVar6) * 0x18;
            iVar6 = iVar7 + 0x14;
            _raw_spin_lock_bh(iVar6);
            piVar1 = iVar7 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,arg1,arg2);
            }
            _raw_spin_unlock_bh(iVar6);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    else {
        iVar6 = *(arg1 + 0x18);
        if (iVar6 == 0) {
            return 1;
        }
        if ((*(iVar6 + 0x12) == '\f') && (iVar6 = *(iVar6 + 0x60), iVar6 == 0)) {
            return 1;
        }
        if ((*(iVar4 + 9) != '\x11') && (*(iVar4 + 9) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar6 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar6 + 0x22a) - 1) {
            return 1;
        }
        if (cVar3 == '\x03') {
            uVar2 = *(iVar4 + 0x10);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        if (cVar3 == '\x01') {
            uVar2 = *(iVar4 + 0xc);
            if ((uVar2 & 0xf0ff) == 0x10ac) {
                return 1;
            }
            if ((uVar2 & 0xff) == 10) {
                return 1;
            }
            if (uVar2 == 0xffffffff) {
                return 1;
            }
            if ((uVar2 & 0xffffff) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xff) == 0x7f) {
                return 1;
            }
            if ((uVar2 & 0xf0) == 0xe0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xa8c0) {
                return 1;
            }
            if ((uVar2 & 0xffff) == 0xfea9) {
                return 1;
            }
        }
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        iVar7 = tpidr_el1;
        if (*(cpu_number + iVar7) < 0x20) {
            iVar8 = *0x8008000 + *(cpu_number + iVar7) * 0x18;
            iVar7 = iVar8 + 0x14;
            _raw_spin_lock_bh(iVar7);
            piVar1 = iVar8 + 0x18;
            piVar5 = piVar1;
            do {
                piVar5 = *piVar5;
                if (piVar5 == piVar1) goto code_r0x080090e8;
            } while (*(piVar5 + -0x1c) != *(iVar6 + 600));
            if (piVar5 + -4 != NULL) {
                sym.app_flow_stat(piVar5 + -4,arg1,arg2);
            }
code_r0x080090e8:
            _raw_spin_unlock_bh(iVar7);
        }
        iVar6 = *(iVar4 + 0x10) + -1;
        *(iVar4 + 0x10) = iVar6;
        if (iVar6 == 0) goto code_r0x08009130;
        iVar4 = *(iVar4 + 0x10);
    }
    if (iVar4 != 0) {
        return 1;
    }
code_r0x08009130:
    preempt_schedule();
    return 1;
}


// ===== sym.hook6 @ 0x0800915c (size 532) =====

ulong sym.hook6(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (iVar2 == 0) {
        return 1;
    }
    if ((*arg2 == '\x01') && (*(iVar2 + 6) == '\x11')) {
        if ((*(arg1 + 0xa7) & 1) == 0) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar4 = tpidr_el1;
        if (*(cpu_number + iVar4) < 0x20) {
            iVar5 = *0x8008000 + *(cpu_number + iVar4) * 0x18;
            iVar4 = iVar5 + 0x14;
            _raw_spin_lock_bh(iVar4);
            piVar1 = iVar5 + 0x18;
            if (piVar1 != *piVar1) {
                sym.app_flow_stat(*piVar1 + -0x20,arg1,arg2);
            }
            _raw_spin_unlock_bh(iVar4);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    else {
        iVar4 = *(arg1 + 0x18);
        if (iVar4 == 0) {
            return 1;
        }
        if ((*(iVar4 + 0x12) == '\f') && (iVar4 = *(iVar4 + 0x60), iVar4 == 0)) {
            return 1;
        }
        if ((*(iVar2 + 6) != '\x11') && (*(iVar2 + 6) != '\x06')) {
            return 1;
        }
        if ((1 << (*(iVar4 + 0x12) & 0x1f) & 0xffffefbfU) == 0) {
            return 1;
        }
        if (1 < *(iVar4 + 0x22a) - 1) {
            return 1;
        }
        iVar2 = sp_el0;
        *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
        iVar5 = tpidr_el1;
        if (*(cpu_number + iVar5) < 0x20) {
            iVar6 = *0x8008000 + *(cpu_number + iVar5) * 0x18;
            iVar5 = iVar6 + 0x14;
            _raw_spin_lock_bh(iVar5);
            piVar1 = iVar6 + 0x18;
            piVar3 = piVar1;
            do {
                piVar3 = *piVar3;
                if (piVar3 == piVar1) goto code_r0x08009320;
            } while (*(piVar3 + -0x1c) != *(iVar4 + 600));
            if (piVar3 + -4 != NULL) {
                sym.app_flow_stat(piVar3 + -4,arg1,arg2);
            }
code_r0x08009320:
            _raw_spin_unlock_bh(iVar5);
        }
        iVar4 = *(iVar2 + 0x10) + -1;
        *(iVar2 + 0x10) = iVar4;
        if (iVar4 == 0) goto code_r0x08009368;
        iVar2 = *(iVar2 + 0x10);
    }
    if (iVar2 != 0) {
        return 1;
    }
code_r0x08009368:
    preempt_schedule();
    return 1;
}


// ===== sym.app_flow_stat @ 0x08009394 (size 888) =====

//WARNING: Control flow encountered bad instruction data

void sym.app_flow_stat(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint16_t *puVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint16_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong *puVar17;
    char cVar18;
    ulong unaff_x30;
    uint uStack_90;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint uStack_70;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    uVar5 = *(arg3 + 1);
    uStack_70 = 0;
    uStack_78 = 0;
    if (uVar5 == 10) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar10 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar10 != NULL)) {
            cVar18 = *(iVar2 + 6);
            if (*arg3 == '\x01') {
                uStack_7c = *(iVar2 + 8);
                uVar3 = *(iVar2 + 0xc);
                iVar15 = *(iVar2 + 0x10);
                uStack_78 = *(iVar2 + 0x1c);
                uStack_70 = *(iVar2 + 0x24);
                uStack_90 = *(iVar2 + 0x18);
                uVar14 = *puVar10 >> 8 | *puVar10 << 8;
                puVar10 = puVar10 + 1;
            }
            else {
                uStack_7c = *(iVar2 + 0x18);
                uVar3 = *(iVar2 + 0x1c);
                iVar15 = *(iVar2 + 0x20);
                uStack_78 = *(iVar2 + 0xc);
                uVar14 = puVar10[1] >> 8 | puVar10[1] << 8;
                uStack_70 = *(iVar2 + 0x14);
                uStack_90 = *(iVar2 + 8);
            }
            uVar13 = uVar3;
code_r0x080094ec:
            uVar6 = *puVar10 >> 8 | *puVar10 << 8;
            goto code_r0x080094fc;
        }
    }
    else if (uVar5 == 2) {
        iVar2 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
        if ((iVar2 != 0) && (puVar10 = *(arg2 + 0xd0) + *(arg2 + 0xb2), puVar10 != NULL)) {
            cVar18 = *(iVar2 + 9);
            if (*arg3 == '\x01') {
                uVar14 = *puVar10;
                uStack_7c = *(iVar2 + 0xc);
                uStack_90 = *(iVar2 + 0x10);
                puVar10 = puVar10 + 1;
            }
            else {
                uStack_90 = *(iVar2 + 0xc);
                uStack_7c = *(iVar2 + 0x10);
                uVar14 = puVar10[1];
            }
            uVar13 = 0;
            iVar15 = 0;
            uVar14 = uVar14 >> 8 | uVar14 << 8;
            goto code_r0x080094ec;
        }
    }
    cVar18 = '\0';
    uVar14 = 0;
    uVar6 = 0;
    uVar13 = 0;
    uStack_7c = 0;
    iVar15 = 0;
    uStack_90 = 0;
code_r0x080094fc:
    _raw_spin_lock_bh();
    piVar16 = arg1 + 0x10;
    if (*piVar16 != piVar16) {
        piVar12 = *piVar16;
        do {
            piVar11 = *piVar12;
            if (((*(piVar12 + -0x36) == uVar5) && (piVar7 = piVar12 + -7, *piVar7 == cVar18)) &&
               (*(piVar12 + -0x34) == uVar14)) {
                if (uVar5 == 2) {
                    if (*(piVar12 + -6) != uStack_7c) goto code_r0x0800953c;
                }
                else if ((piVar12[-6] != (uStack_7c | uVar13 << 0x20)) || (piVar12[-5] != iVar15))
                goto code_r0x0800953c;
                if (piVar7 != NULL) goto code_r0x08009664;
                break;
            }
code_r0x0800953c:
            piVar12 = piVar11;
        } while (piVar11 != piVar16);
    }
    piVar1 = arg1 + 8;
    if (piVar1 == NULL) {
        _printk(0x80013d1,"add_new_flow");
    }
    else {
        piVar7 = kmem_cache_alloc_trace(___list_add_valid,0xa20,0x48);
        if (piVar7 != NULL) {
            puVar17 = *(arg1 + 0x18);
            piVar7[8] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            *piVar7 = 0;
            piVar12 = piVar7 + 7;
            *piVar12 = 0;
            uVar8 = __list_add_valid(piVar12,puVar17,piVar16);
            if ((uVar8 & 1) != 0) {
                *(arg1 + 0x18) = piVar12;
                piVar7[7] = piVar16;
                piVar7[8] = puVar17;
                *puVar17 = piVar12;
            }
            *piVar7 = cVar18;
            iVar4 = *piVar1;
            *(piVar7 + 1) = '\0';
            *(piVar7 + 2) = uVar5;
            *(piVar7 + 6) = uVar6;
            *(piVar7 + 4) = uVar14;
            piVar7[1] = uStack_7c | uVar13 << 0x20;
            *piVar1 = iVar4 + 1;
            *(piVar7 + 3) = uStack_90;
            piVar7[2] = iVar15;
            *(piVar7 + 0x1c) = uStack_78;
            *(piVar7 + 0x24) = uStack_70;
code_r0x08009664:
            if (*arg3 == '\x03') {
                *(piVar7 + 6) = piVar7[6] + 1;
                *(piVar7 + 0x34) = *(piVar7 + 0x34) + *(arg2 + 0x70);
            }
            else if (*arg3 == '\x01') {
                *(piVar7 + 5) = piVar7[5] + 1;
                *(piVar7 + 0x2c) = *(piVar7 + 0x2c) + *(arg2 + 0x70);
            }
        }
    }
    _raw_spin_unlock_bh(arg1 + 0xc);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar9) {
        return;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x080097a0 (size 236) =====

int sym.init_module(void)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    iVar2 = rtnl_link_register(obj.miwill_link_ops);
    if (iVar2 < 0) goto code_r0x0800984c;
    if ((_segment.ehdr < 1) || (iVar2 != 0)) {
code_r0x08009814:
        iVar2 = sym.miwill_nl_init();
        if (((iVar2 == 0) && (iVar2 = sym.minet_init(), iVar2 == 0)) &&
           (iVar2 = sym.miwill_mode_register(0x8001920), iVar2 == 0)) {
            _printk(0x800179a,"miwill_init_module");
            return 0;
        }
    }
    else {
        iVar3 = 1;
        do {
            iVar2 = sym.miwill_init_one();
            bVar1 = iVar3 < _segment.ehdr;
            iVar3 = iVar3 + 1;
        } while (bVar1 && iVar2 == 0);
        if (-1 < iVar2) goto code_r0x08009814;
    }
    rtnl_link_unregister(obj.miwill_link_ops);
code_r0x0800984c:
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    return iVar2;
}


// ===== sym.miwill_init_one @ 0x0800988c (size 136) =====

int sym.miwill_init_one(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = alloc_netdev_mqs(0xd0,"miw_oem%d",1,sym.miwill_setup.1602faf915cac25c49163d565a1fdcd8.cfi_jt,0x10,0x10)
    ;
    if (iVar2 == 0) {
        iVar1 = -0xc;
    }
    else {
        rtnl_lock();
        iVar1 = register_netdevice(iVar2);
        rtnl_unlock();
        if (iVar1 < 0) {
            free_netdev(iVar2);
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


// ===== sym.miwill_nl_init @ 0x08009914 (size 112) =====

int sym.miwill_nl_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.miwill_nl_family);
    if (iVar1 == 0) {
        _printk(0x8000dfc,"miwill_nl_init");
    }
    else {
        _printk(0x8001742,"miwill_nl_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08009984 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.minet_cleanup();
    sym.miwill_nl_finit();
    rtnl_link_unregister(obj.miwill_link_ops);
    unregister_netdevice_notifier(reloc.miwill_device_event.1602faf915cac25c49163d565a1fdcd8.cfi_jt);
    sym.miwill_mode_unregister(0x8001920);
    _printk(0x800179a,"miwill_cleanup_module");
    return;
}

