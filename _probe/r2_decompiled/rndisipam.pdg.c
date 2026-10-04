// decompiled from rndisipam by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1164) =====

//WARNING: Switch with 1 destination removed at 0x0800940c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xdc7befd86dc706e) {
        if (arg1 < -0x339c2e8918efa2d1) {
            if (arg1 < -0x595b1a7338843e49) {
                if (arg1 == -0x6dbab7ef8fec0dec) {
                    pcVar2 = sym.rndis_ipa_pm_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                }
                else if (arg1 == -0x5fadca31001dfa5d) {
                    pcVar2 = sym.eth_mac_addr.cfi_jt;
                }
                else {
                    if (arg1 != -0x5c4dd0609cf5add4) goto code_r0x080093cc;
                    pcVar2 = sym.rndis_ipa_tx_timeout.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x595b1a7338843e49) {
                    pcVar2 = sym.rndis_ipa_stop.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                    goto code_r0x0800444c;
                }
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.rndis_ipa_xmit_error_aftercare_wq.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                }
                else {
                    if (arg1 != -0x34daeb8bc81b354f) goto code_r0x080093cc;
                    pcVar2 = sym.rndis_ipa_pipe_connect_notify.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x269f0ca40a294141) {
            if (arg1 == -0x339c2e8918efa2d1) {
                pcVar2 = sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
            }
            else {
                if (arg1 != -0x2ee0710dce68437c) {
                    if (arg1 != -0x2bc70d449749a237) goto code_r0x080093cc;
                    pcVar2 = sym.__traceiter_rndis_netif_ni.cfi_jt;
                    goto code_r0x0800424c;
                }
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x269f0ca40a294141) {
                pcVar2 = sym.__typeid__ZTSFiP7sk_buffE_global_addr;
                goto code_r0x0800444c;
            }
            if (arg1 != -0x218c0108fde83420) {
                if ((arg1 == -0x165db42fdf19d24b) && ((pcVar1 + -0x8004550 >> 3 | pcVar1 << 0x3d) < 9)) {
                    return;
                }
                goto code_r0x080093cc;
            }
            pcVar2 = sym.trace_event_raw_init.cfi_jt;
        }
    }
    else if (arg1 < 0x1c2b0952efa24c7a) {
        if (arg1 < -0x2cbe215a4870f43) {
            if (arg1 == -0xdc7befd86dc706e) {
                pcVar2 = sym.rndis_ipa_get_stats.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
            }
            else {
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.rndis_ipa_debugfs_aggr_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                    goto code_r0x0800444c;
                }
                if (arg1 != -0x4a8a706f20e1a6e) goto code_r0x080093cc;
                pcVar2 = sym.rndis_ipa_start_xmit.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x2cbe215a4870f43) {
                pcVar2 = sym.rndis_ipa_packet_receive_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
code_r0x0800444c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080093cc;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080093cc;
                pcVar2 = sym.rndis_ipa_debugfs_atomic_read.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 == 0x1c2b0952efa24c7a) {
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) {
                if (arg1 != 0x3dd1a39e589289fe) goto code_r0x080093cc;
                pcVar2 = sym.trace_raw_output_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
code_r0x0800424c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080093cc;
            }
            pcVar2 = sym.rndis_ipa_debugfs_aggr_write.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
        }
    }
    else if (arg1 < 0x69376121afc51f9b) {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.rndis_ipa_cleanup.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x080093cc;
            pcVar2 = sym.rndis_ipa_pipe_disconnect_notify.cfi_jt;
        }
    }
    else if (arg1 == 0x69376121afc51f9b) {
        pcVar2 = sym.rndis_ipa_init.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080093cc;
        pcVar2 = sym.__typeid__ZTSFvvE_global_addr;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080093cc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009420);
    (*pcVar1)();
}


// ===== sym.rndis_ipa_pm_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004498 (size 8) =====

void sym.rndis_ipa_pm_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t *param_1,int param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pm_cb",0x7ad);
    }
    if (param_2 == 0) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Resource Granted\n","rndis_ipa_pm_cb",0x7b4);
        }
        iVar6 = *(*param_1 + 0x3c0);
        if ((*(iVar6 + 0xd0) & 1) == 0) {
            if (_segment.ehdr == 0) {
                return;
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue already awake\n","rndis_ipa_pm_cb",0x7ba);
        }
        else {
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d starting queue\n","rndis_ipa_pm_cb",0x7b7);
                iVar6 = *(*param_1 + 0x3c0);
            }
            puVar1 = iVar6 + 0xd0;
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
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pm_cb",0x7bd);
        }
        return;
    }
    iVar5 = ___ratelimit(obj.rndis_ipa_pm_cb._rs,"rndis_ipa_pm_cb");
    if (iVar5 != 0) {
        iVar6 = sp_el0;
        _printk(0x8001ce4,"rndis_ipa_pm_cb",0x7b0,iVar6 + 0x7a8,param_2);
    }
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d unexpected event %d\n","rndis_ipa_pm_cb",0x7b0,param_2);
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8009074);
    (*pcVar4)();
}


// ===== sym.rndis_ipa_init.cfi_jt @ 0x080044a0 (size 8) =====

int sym.rndis_ipa_init.cfi_jt(int64_t *param_1)

{
    int64_t *arg1;
    uint32_t *puVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    ushort uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    uint uVar9;
    uint8_t uVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ushort *puVar14;
    uint64_t uVar15;
    char *pcVar16;
    ulong uVar17;
    ushort uVar18;
    ushort uVar19;
    int64_t iVar20;
    uint32_t *puVar21;
    char cVar22;
    uint uVar23;
    uint32_t *puVar24;
    int64_t *piVar25;
    ulong *in_x18;
    int *piVar26;
    uint uVar27;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != NULL) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_init",0x238), _segment.ehdr != NULL)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d %s initializing\n","rndis_ipa_init",0x239,"RNDIS_IPA");
    }
    if (param_1 == NULL) {
        iVar12 = sp_el0;
        _printk(0x800272c,"rndis_ipa_init",0x23b,iVar12 + 0x7a8);
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_init",0x23b);
            return -0x16;
        }
        return -0x16;
    }
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d host_ethaddr=%pM, device_ethaddr=%pM\n","rndis_ipa_init",0x242
                       ,param_1 + 3,param_1 + 0x1e);
    }
    iVar12 = alloc_etherdev_mqs(0x108,1,1);
    if (iVar12 == 0) {
        iVar12 = sp_el0;
        _printk(0x8003090,"rndis_ipa_init",0x247,iVar12 + 0x7a8);
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to allocate Ethernet device\n","rndis_ipa_init",0x247)
            ;
            return -0xc;
        }
        return -0xc;
    }
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d network device was successfully allocated\n","rndis_ipa_init",
                       0x24a);
    }
    arg1 = iVar12 + 0xa00;
    if (arg1 == NULL) {
        iVar20 = sp_el0;
        _printk(0x80024be,"rndis_ipa_init",0x24f,iVar20 + 0x7a8);
        if (_segment.ehdr == NULL) {
            iVar11 = -0xc;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to extract netdev priv\n","rndis_ipa_init",0x24f);
            iVar11 = -0xc;
        }
        goto code_r0x08005530;
    }
    memset(arg1,0,0x108);
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d rndis_ipa_ctx (private)=%pK\n","rndis_ipa_init",0x253,arg1);
    }
    *(iVar12 + 0xae8) = 0;
    *(iVar12 + 0xa00) = iVar12;
    puVar1 = iVar12 + 0xa52;
    *(iVar12 + 0xa08) = 0;
    *(iVar12 + 0xa0c) = 0;
    *(iVar12 + 0xa14) = 0;
    *(iVar12 + 0xa10) = 0;
    *(iVar12 + 0xa18) = 0x100;
    *(iVar12 + 0xa1a) = 0;
    *(iVar12 + 0xa3c) = 0x2000000040;
    *(iVar12 + 0xa38) = 0;
    puVar24 = param_1 + 0x1e;
    uVar3 = *puVar24;
    *(iVar12 + 0xa56) = *(param_1 + 0x22);
    *puVar1 = uVar3;
    piVar25 = param_1 + 3;
    uVar18 = *(param_1 + 0x1c);
    *(iVar12 + 0xa4c) = *piVar25;
    *(iVar12 + 0xa50) = uVar18;
    *(iVar12 + 0xa60) = 0xfffffffe0;
    *(iVar12 + 0xa68) = iVar12 + 0xa68;
    *(iVar12 + 0xa70) = iVar12 + 0xa68;
    *(iVar12 + 0xa78) = sym.rndis_ipa_xmit_error_aftercare_wq.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
    init_timer_key(iVar12 + 0xa90,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar12 + 0xa44) = 500;
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d internal data structures were set\n","rndis_ipa_init",0x26e);
    }
    iVar20 = *param_1;
    if (iVar20 == 0) {
        if (_segment.ehdr == NULL) {
            iVar20 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d device_ready_notify() was not supplied\n","rndis_ipa_init",
                           0x271);
            iVar20 = *param_1;
        }
    }
    *(iVar12 + 0xa58) = iVar20;
    snprintf(iVar12,0x10,"%s%%d","rndis");
    if (_segment.ehdr == NULL) {
        *(iVar12 + 0x4b8) = 0x4e2;
        *(iVar12 + 200) = obj.rndis_ipa_netdev_ops;
        *(iVar12 + 0xdc) = 0x2c;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Setting network interface driver name to: %s\n","rndis_ipa_init"
                       ,0x277,iVar12);
        iVar20 = _segment.ehdr;
        *(iVar12 + 0x4b8) = 0x4e2;
        *(iVar12 + 200) = obj.rndis_ipa_netdev_ops;
        *(iVar12 + 0xdc) = 0x2c;
        if ((iVar20 != 0) &&
           (ipc_log_string(iVar20,"RNDIS_IPA %s:%d Needed headroom for RNDIS header set to %d\n","rndis_ipa_init",
                           0x27f,0x2c), _segment.ehdr != NULL)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_init",0x92d);
        }
    }
    iVar20 = debugfs_create_dir("rndis_ipa",0);
    *(iVar12 + 0xa20) = iVar20;
    if (iVar20 == 0) {
        iVar20 = sp_el0;
        _printk(0x80034df,"rndis_ipa_debugfs_init",0x934,iVar20 + 0x7a8);
        if (_segment.ehdr != NULL) {
            pcVar16 = "RNDIS_IPA %s:%d could not create debugfs directory entry\n";
            uVar17 = 0x934;
            goto code_r0x080052a4;
        }
    }
    else {
        debugfs_create_bool("tx_filter",0x1b6,iVar20,iVar12 + 0xa08);
        debugfs_create_bool("rx_filter",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa11);
        debugfs_create_bool("icmp_filter",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa19);
        debugfs_create_u32("outstanding_high",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa3c);
        debugfs_create_u32("outstanding_low",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa40);
        iVar20 = debugfs_create_file("outstanding",0x124,*(iVar12 + 0xa20),arg1,obj.rndis_ipa_debugfs_atomic_ops);
        if (iVar20 == 0) {
            iVar20 = sp_el0;
            _printk(0x8002aab,"rndis_ipa_debugfs_init",0x953,iVar20 + 0x7a8);
            if (_segment.ehdr != NULL) {
                pcVar16 = "RNDIS_IPA %s:%d could not create outstanding file\n";
                uVar17 = 0x953;
code_r0x08005480:
                ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_debugfs_init",uVar17);
            }
code_r0x08005484:
            debugfs_remove(*(iVar12 + 0xa20));
        }
        else {
            debugfs_create_u8("state",0x124,*(iVar12 + 0xa20),iVar12 + 0xa48);
            debugfs_create_u32("tx_dropped",0x124,*(iVar12 + 0xa20),iVar12 + 0xa0c);
            debugfs_create_u32("rx_dropped",0x124,*(iVar12 + 0xa20),iVar12 + 0xa14);
            iVar20 = debugfs_create_dir("rndis_ipa_aggregation",*(iVar12 + 0xa20));
            if (iVar20 == 0) {
                iVar20 = sp_el0;
                _printk(0x800182e,"rndis_ipa_debugfs_init",0x967,iVar20 + 0x7a8);
                if (_segment.ehdr != NULL) {
                    pcVar16 = "RNDIS_IPA %s:%d could not create debugfs aggr entry\n";
                    uVar17 = 0x967;
code_r0x080052a4:
                    ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_debugfs_init",uVar17);
                }
            }
            else {
                iVar13 = debugfs_create_file("aggr_value_set",0x92,iVar20,arg1,obj.rndis_ipa_aggr_ops);
                if (iVar13 == 0) {
                    iVar20 = sp_el0;
                    _printk(0x800209f,"rndis_ipa_debugfs_init",0x970,iVar20 + 0x7a8);
                    if (_segment.ehdr != NULL) {
                        pcVar16 = "RNDIS_IPA %s:%d could not create aggr_value_set file\n";
                        uVar17 = 0x970;
                        goto code_r0x08005480;
                    }
                    goto code_r0x08005484;
                }
                debugfs_create_u8("aggr_enable",0x1b6,iVar20,0x8000c18);
                debugfs_create_u8("aggr_type",0x1b6,iVar20,0x8000c1c);
                debugfs_create_u32("aggr_byte_limit",0x1b6,iVar20,0x8000c20);
                debugfs_create_u32("aggr_time_limit",0x1b6,iVar20,0x8000c24);
                debugfs_create_u32("aggr_pkt_limit",0x1b6,iVar20,0x8000c28);
                debugfs_create_bool("tx_dump_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa10);
                debugfs_create_bool("rx_dump_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa18);
                debugfs_create_bool("deaggregation_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa1a);
                debugfs_create_u32("error_msec_sleep_time",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa44);
                debugfs_create_bool("during_xmit_error",0x124,*(iVar12 + 0xa20),iVar12 + 0xa1b);
                debugfs_create_bool("is_vlan_mode",0x124,*(iVar12 + 0xa20),iVar12 + 0xaf0);
                if ((_segment.ehdr != NULL) &&
                   (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d debugfs entries were created\n",
                                   "rndis_ipa_debugfs_init",0x9a8), _segment.ehdr != NULL)) {
                    pcVar16 = "RNDIS_IPA %s:%d end\n";
                    uVar17 = 0x9a9;
                    goto code_r0x080052a4;
                }
            }
        }
    }
    if (((*puVar1 & 1) == 0) && (*puVar1 != 0 || *(iVar12 + 0xa56) != 0)) {
        puVar21 = *(iVar12 + 0x308);
        uVar3 = *puVar1;
        *(puVar21 + 1) = *(iVar12 + 0xa56);
        *puVar21 = uVar3;
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Device Ethernet address set %pM\n","rndis_ipa_init",0x289,
                           *(iVar12 + 0x308));
        }
        puVar2 = iVar12 + 0xaf0;
        iVar11 = ipa_is_vlan_mode(3,puVar2);
        if (iVar11 == 0) {
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d is_vlan_mode %d\n","rndis_ipa_init",0x290,*puVar2);
            }
            uVar10 = ipa3_is_ulso_supported();
            *(iVar12 + 0xb00) = uVar10 & 1;
            if ((_segment.ehdr != NULL) &&
               (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d is_ulso_mode=%d\n","rndis_ipa_init",0x293),
               _segment.ehdr != NULL)) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_hdrs_cfg",0x6e9);
            }
            puVar14 = kmem_cache_alloc_trace(_netif_rx_ni,0xdc0,0x26c);
            if (puVar14 == NULL) {
                iVar11 = -0xc;
            }
            else {
                uVar10 = *puVar2;
                *(puVar14 + 0x123) = 0x2c;
                *(puVar14 + 0x94) = 0;
                strlcpy(puVar14 + 2,"rndis_eth_ipv4",0x20);
                uVar27 = 1;
                puVar14[0x9b] = 0x2c;
                *(puVar14 + 0x9a) = 1;
                uVar9 = *0x80039e0;
                uVar8 = *0x80039d8;
                uVar7 = *0x80039d0;
                uVar6 = *0x80039c8;
                *(puVar14 + 0x1a) = *0x80039c8;
                *(puVar14 + 0x1e) = uVar7;
                *(puVar14 + 0x22) = uVar8;
                uVar5 = *0x80039c0;
                uVar17 = _obj.rndis_template_hdr;
                iVar20 = *piVar25;
                uVar18 = *(param_1 + 0x22);
                *(puVar14 + 0x26) = uVar9;
                *(puVar14 + 0x28) = iVar20;
                uVar4 = *(param_1 + 0x1c);
                uVar3 = *puVar24;
                *(puVar14 + 0x12) = uVar17;
                puVar14[0x2d] = uVar18;
                uVar18 = 8;
                puVar14[0x2a] = uVar4;
                *(puVar14 + 0x2b) = uVar3;
                *(puVar14 + 0x16) = uVar5;
                if (uVar10 == 0) {
                    cVar22 = '\x0e';
                    uVar23 = 1;
                }
                else {
                    puVar14[0x30] = 8;
                    uVar23 = 3;
                    cVar22 = '\x12';
                    uVar18 = 0x81;
                }
                puVar14[0x2e] = uVar18;
                *(puVar14 + 0x92) = uVar23;
                *(puVar14 + 0x123) = *(puVar14 + 0x123) + cVar22;
                uVar10 = *puVar2;
                *(puVar14 + 599) = 0x2c;
                *(puVar14 + 0x12e) = 0;
                strlcpy(puVar14 + 0x9c,"rndis_eth_ipv6",0x20);
                *(puVar14 + 0xc0) = uVar9;
                *(puVar14 + 0xac) = uVar17;
                *(puVar14 + 0xb0) = uVar5;
                *(puVar14 + 0x134) = 1;
                *(puVar14 + 0xb4) = uVar6;
                *(puVar14 + 0xb8) = uVar7;
                puVar14[0x135] = 0x2c;
                *(puVar14 + 0xbc) = uVar8;
                uVar18 = *(param_1 + 0x1c);
                uVar3 = *puVar24;
                *(puVar14 + 0xc2) = *piVar25;
                uVar4 = *(param_1 + 0x22);
                uVar19 = 0xdd86;
                puVar14[0xc4] = uVar18;
                *(puVar14 + 0xc5) = uVar3;
                puVar14[199] = uVar4;
                if (uVar10 == 0) {
                    cVar22 = '\x0e';
                }
                else {
                    puVar14[0xca] = 0xdd86;
                    uVar27 = 3;
                    cVar22 = '\x12';
                    uVar19 = 0x81;
                }
                puVar14[200] = uVar19;
                *(puVar14 + 300) = uVar27;
                *puVar14 = 0x201;
                *(puVar14 + 599) = *(puVar14 + 599) + cVar22;
                iVar11 = ipa3_add_hdr(puVar14);
                if (iVar11 == 0) {
                    if (*(puVar14 + 0x98) == 0) {
                        if (*(puVar14 + 0x132) != 0) {
                            iVar20 = sp_el0;
                            piVar26 = puVar14 + 0x132;
                            _printk(0x80025cb,"rndis_ipa_hdrs_cfg",0x708,iVar20 + 0x7a8);
                            if (_segment.ehdr != NULL) {
                                iVar11 = *piVar26;
                                pcVar16 = "RNDIS_IPA %s:%d Fail on Header-Insertion ipv6(%d)\n";
                                uVar17 = 0x708;
                                goto code_r0x08005944;
                            }
                            goto code_r0x08005948;
                        }
                        *(iVar12 + 0xa28) = *(puVar14 + 0x96);
                        *(iVar12 + 0xa2c) = *(puVar14 + 0x130);
                        if (_segment.ehdr != NULL) {
                            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_hdrs_cfg",0x70f);
                        }
                        kfree(puVar14);
                    }
                    else {
                        iVar20 = sp_el0;
                        piVar26 = puVar14 + 0x98;
                        _printk(0x8001074,"rndis_ipa_hdrs_cfg",0x702,iVar20 + 0x7a8);
                        if (_segment.ehdr != NULL) {
                            iVar11 = *piVar26;
                            pcVar16 = "RNDIS_IPA %s:%d Fail on Header-Insertion ipv4(%d)\n";
                            uVar17 = 0x702;
code_r0x08005944:
                            ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_hdrs_cfg",uVar17,iVar11);
                        }
code_r0x08005948:
                        iVar11 = *piVar26;
                        kfree(puVar14);
                        if (iVar11 != 0) goto code_r0x08005adc;
                    }
                    if (_segment.ehdr != NULL) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d IPA header-insertion configured for Ethernet\n",
                                       "rndis_ipa_init",0x29b);
                    }
                    if (*(iVar12 + 0xb00) == '\0') {
code_r0x08005a20:
                        iVar11 = sym.rndis_ipa_register_properties(*puVar2);
                        if (iVar11 == 0) {
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d 2 TX and 2 RX properties were registered\n",
                                               "rndis_ipa_init",0x2b5);
                            }
                            netif_carrier_off(iVar12);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d set carrier off until pipes are connected\n",
                                               "rndis_ipa_init",0x2b8);
                            }
                            iVar11 = register_netdev(iVar12);
                            if (iVar11 == 0) {
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,
                                                   "RNDIS_IPA %s:%d netdev:%s registration succeeded, index=%d\n",
                                                   "rndis_ipa_init",0x2c1,iVar12,*(iVar12 + 0xd0));
                                }
                                uVar15 = ipa_get_lan_rx_napi();
                                if ((uVar15 & 1) == 0) {
                                    *(iVar12 + 0xaf8) = sym.__typeid__ZTSFiP7sk_buffE_global_addr;
                                    if (_segment.ehdr == NULL) goto code_r0x08005c4c;
                                    pcVar16 = "RNDIS_IPA %s:%d LAN RX NAPI enabled = False";
                                    uVar17 = 0x2c8;
                                }
                                else {
                                    *(iVar12 + 0xaf8) = sym.netif_receive_skb.cfi_jt;
                                    if (_segment.ehdr == NULL) goto code_r0x08005c4c;
                                    pcVar16 = "RNDIS_IPA %s:%d LAN RX NAPI enabled = True";
                                    uVar17 = 0x2c5;
                                }
                                ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_init",uVar17);
code_r0x08005c4c:
                                param_1[5] = arg1;
                                _segment.ehdr = arg1;
                                *(param_1 + 6) = 0;
                                param_1[1] = sym.rndis_ipa_packet_receive_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
                                ;
                                param_1[2] = sym.rndis_ipa_tx_complete_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                                *(iVar12 + 0xa48) = 1;
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_init"
                                                   ,0x2d5,"RNDIS_IPA_INITIALIZED");
                                }
                                _printk(0x8001d66);
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_init",0x2d8);
                                }
                                return 0;
                            }
                            iVar20 = sp_el0;
                            _printk(0x8002636,"rndis_ipa_init",700,iVar20 + 0x7a8,iVar11);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d register_netdev failed: %d\n",
                                               "rndis_ipa_init",700,iVar11);
                            }
                            sym.rndis_ipa_deregister_properties(iVar12);
                        }
                        else {
                            iVar20 = sp_el0;
                            _printk(0x800234b,"rndis_ipa_init",0x2b2,iVar20 + 0x7a8);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on properties set\n",
                                               "rndis_ipa_init",0x2b2);
                            }
                        }
                        if (*(iVar12 + 0xb00) != '\0') {
                            ipa_hdrs_hpc_destroy(*(iVar12 + 0xb04));
                        }
                    }
                    else {
                        iVar11 = sym.rndis_ipa_hdrs_hpc_cfg(arg1);
                        if (iVar11 == 0) {
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d IPA header-insertion configured for RNDIS\n",
                                               "rndis_ipa_init",0x2a3);
                            }
                            *(*arg1 + 0xe8) = 0x10000000000;
                            *(*arg1 + 0xe8) = *(*arg1 + 0xe8) | 0x12;
                            *(*arg1 + 0xe8) = *(*arg1 + 0xe8) | 1;
                            *(*arg1 + 0xe8) = *(*arg1 + 0xe8) | 0x80000000000000;
                            *(*arg1 + 0xe8) = *(*arg1 + 0xe8) | 0x200000000;
                            *(*arg1 + 0xe8) = *(*arg1 + 0xe8) | 0x1d0000;
                            *(*arg1 + 0x8d8) = 64000;
                            goto code_r0x08005a20;
                        }
                        iVar20 = sp_el0;
                        _printk(0x8001510,"rndis_ipa_init",0x2a0,iVar20 + 0x7a8);
                        if (_segment.ehdr != NULL) {
                            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ipa hdrs hpc set\n","rndis_ipa_init"
                                           ,0x2a0);
                        }
                    }
                    sym.rndis_ipa_hdrs_destroy(arg1);
                    goto code_r0x08005528;
                }
                iVar20 = sp_el0;
                _printk(0x8002299,"rndis_ipa_hdrs_cfg",0x6fd,iVar20 + 0x7a8,iVar11);
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Header-Insertion(%d)\n","rndis_ipa_hdrs_cfg"
                                   ,0x6fd,iVar11);
                }
                kfree(puVar14);
            }
code_r0x08005adc:
            iVar20 = sp_el0;
            _printk(0x8001225,"rndis_ipa_init",0x298,iVar20 + 0x7a8);
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ipa hdrs set\n","rndis_ipa_init",0x298);
            }
        }
        else {
            iVar11 = ___ratelimit(obj.rndis_ipa_init._rs,"rndis_ipa_init");
            if (iVar11 != 0) {
                iVar20 = sp_el0;
                _printk(0x800360e,"rndis_ipa_init",0x28d,iVar20 + 0x7a8);
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d couldn\'t acquire vlan mode, is ipa ready?\n",
                               "rndis_ipa_init",0x28d);
            }
            iVar11 = 0;
        }
    }
    else {
        iVar20 = sp_el0;
        _printk(0x8001f58,"rndis_ipa_init",0x286,iVar20 + 0x7a8);
        if (_segment.ehdr == NULL) {
            iVar11 = -0x16;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d set device MAC failed\n","rndis_ipa_init",0x286);
            iVar11 = -0x16;
        }
    }
code_r0x08005528:
    debugfs_remove(*(iVar12 + 0xa20));
code_r0x08005530:
    free_netdev(iVar12);
    return iVar11;
}


// ===== sym.rndis_ipa_pipe_connect_notify.cfi_jt @ 0x080044a8 (size 8) =====

int sym.rndis_ipa_pipe_connect_notify.cfi_jt
              (uint32_t param_1,uint32_t param_2,uint param_3,uint32_t param_4,int param_5,int64_t *param_6)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint64_t *extraout_x8;
    uint64_t *puVar11;
    ulong *in_x18;
    int64_t *unaff_x21;
    code *pcVar12;
    ulong unaff_x30;
    int64_t *piStack_98;
    uint uStack_8c;
    int64_t iStack_88;
    code *pcStack_80;
    int64_t *piStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pipe_connect_notify",0x319);
    }
    if (param_6 == NULL) {
        iVar8 = sp_el0;
        _printk(0x800272c,"rndis_ipa_pipe_connect_notify",0x31c,iVar8 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_pipe_connect_notify",0x31c)
            ;
            iVar5 = -0x16;
            goto code_r0x080072d0;
        }
code_r0x080070d8:
        iVar5 = -0x16;
    }
    else {
        if (((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d usb_to_ipa_hdl=%d, ipa_to_usb_hdl=%d, private=0x%pK\n",
                            "rndis_ipa_pipe_connect_notify",0x323,param_1,param_2,param_6), _segment.ehdr != 0)) &&
           (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d max_xfer_sz_to_dev=%d, max_pkt_num_to_dev=%d\n",
                           "rndis_ipa_pipe_connect_notify",0x327,param_3,param_4), _segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d max_xfer_sz_to_host=%d\n","rndis_ipa_pipe_connect_notify",
                           0x32a,param_5);
        }
        unaff_x21 = param_6 + 0x1d;
        uVar6 = _raw_spin_lock_irqsave(unaff_x21);
        iVar5 = sym.rndis_ipa_next_state(*(param_6 + 9),1);
        _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
        if (iVar5 == 5) {
            iVar8 = sp_el0;
            _printk(0x8002eca,"rndis_ipa_pipe_connect_notify",0x332,iVar8 + 0x7a8);
            if (_segment.ehdr == 0) goto code_r0x080072cc;
            uVar6 = 0x332;
            goto code_r0x08007068;
        }
        if (param_1 < 0x86) {
            if (param_2 < 0x86) {
                piStack_98 = param_6 + 0xec;
                iStack_88 = *param_6;
                uStack_70 = 1;
                pcStack_80 = sym.rndis_ipa_pm_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                piStack_78 = param_6;
                iVar5 = ipa_pm_register(&iStack_88);
                if (iVar5 == 0) {
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d PM client was registered\n",
                                       "rndis_ipa_pipe_connect_notify",0x349);
                    }
                    uVar7 = _segment.ehdr;
                    *(param_6 + 6) = param_1;
                    *(param_6 + 0x34) = param_2;
                    iVar8 = param_6[0x1e];
                    *(param_6 + 0x1a) = 1 < param_4;
                    iVar1 = *(*param_6 + 0xd8);
                    if (param_4 < 2) {
                        if (uVar7 != 0) {
                            ipc_log_string(uVar7,"RNDIS_IPA %s:%d deaggregation disabled\n",
                                           "rndis_ipa_ep_registers_cfg",0x85e);
                        }
                        uVar10 = 0x2c;
                        pcVar12 = obj.usb_to_ipa_ep_cfg_deaggr_dis;
                    }
                    else {
                        if (uVar7 != 0) {
                            ipc_log_string(uVar7,"RNDIS_IPA %s:%d deaggregation enabled\n",
                                           "rndis_ipa_ep_registers_cfg",0x85b);
                        }
                        uVar10 = 0;
                        pcVar12 = obj.usb_to_ipa_ep_cfg_deaggr_en;
                    }
                    if (iVar8 == '\0') {
                        *(pcVar12 + 0xc) = uVar10 + 0xe;
                        *0x8000bc4 = 0x3a;
                        *0x8000bd0 = 0xe;
                    }
                    else {
                        *0x8000bd0 = 0x12;
                        *(pcVar12 + 0xc) = uVar10 | 0x12;
                        *0x8000bc4 = 0x3e;
                        _segment.ehdr = _segment.ehdr & 0xffffe0ffffffffff | 0x40000000000;
                    }
                    *(pcVar12 + 0x8c) = param_3;
                    iVar5 = ipa3_cfg_ep(param_1,pcVar12);
                    if (iVar5 == 0) {
                        if (_segment.ehdr != 0) {
                            ipc_log_string(_segment.ehdr,0x8001b33,"rndis_ipa_ep_registers_cfg",0x877);
                        }
                        uVar10 = param_5 - iVar1;
                        *0x8000c20 = uVar10 >> 10;
                        *0x8000c24 = 0;
                        if (uVar10 >= 0x400) {
                            *0x8000c24 = 1000;
                        }
                        *0x8000c28 = uVar10 < 0x400;
                        if (_segment.ehdr != 0) {
                            ipc_log_string(_segment.ehdr,
                                           "RNDIS_IPA %s:%d RNDIS aggregation param: en=%d byte_limit=%d time_limit=%d pkt_limit=%d\n"
                                           ,"rndis_ipa_ep_registers_cfg",0x88a,_segment.ehdr & 0xffffffff);
                        }
                        *(pcVar12 + 0x2c) = 1;
                        uVar7 = ipa3_is_ulso_supported();
                        if ((uVar7 & 1) != 0) {
                            *0x8000c6c = 1;
                        }
                        if (iVar8 != '\0') {
                            *(pcVar12 + 0x2c) = 0;
                            *(pcVar12 + 0x10) = 0x3a00000001;
                        }
                        iVar5 = ipa3_cfg_ep(param_2,obj.ipa_to_usb_ep_cfg);
                        if (iVar5 == 0) {
                            if ((_segment.ehdr != 0) &&
                               (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d IPA->USB end-point configured\n",
                                               "rndis_ipa_ep_registers_cfg",0x89f), _segment.ehdr != 0)) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end-points configured\n",
                                               "rndis_ipa_pipe_connect_notify",0x35d);
                            }
                            puVar11 = *(*param_6 + 0x3c0) + 0xd0;
                            goto code_r0x080073a0;
                        }
                        uVar6 = 0x8001802;
                    }
                    else {
                        uVar6 = 0x80012e1;
                    }
                    _printk(uVar6);
                    iVar8 = sp_el0;
                    _printk(0x8001009,"rndis_ipa_pipe_connect_notify",0x35a,iVar8 + 0x7a8);
                    if (_segment.ehdr == 0) goto code_r0x080071d0;
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ep cfg\n","rndis_ipa_pipe_connect_notify",
                                   0x35a);
                    goto code_r0x080071d0;
                }
                iVar8 = sp_el0;
                param_6 = iVar8 + 0x7a8;
                _printk(0x80033f0,"rndis_ipa_register_pm_client",0x7cd,param_6,iVar5);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d failed to create IPA PM client %d\n",
                                   "rndis_ipa_register_pm_client",0x7cd,iVar5);
                }
                _printk(0x8001e91,"rndis_ipa_pipe_connect_notify",0x346,param_6);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on PM register\n",
                                   "rndis_ipa_pipe_connect_notify",0x346);
                }
                goto code_r0x080072d0;
            }
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.53,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar8 = sp_el0;
                _printk(0x8000e3a,"rndis_ipa_pipe_connect_notify",0x340,iVar8 + 0x7a8,param_2);
            }
            if (_segment.ehdr == 0) goto code_r0x080070d8;
            pcVar9 = "RNDIS_IPA %s:%d ipa_to_usb_hdl(%d) - not valid ipa handle\n";
            uVar6 = 0x340;
        }
        else {
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar8 = sp_el0;
                _printk(0x8002954,"rndis_ipa_pipe_connect_notify",0x33a,iVar8 + 0x7a8,param_1);
            }
            if (_segment.ehdr == 0) goto code_r0x080070d8;
            pcVar9 = "RNDIS_IPA %s:%d usb_to_ipa_hdl(%d) - not valid ipa handle\n";
            uVar6 = 0x33a;
            param_2 = param_1;
        }
        ipc_log_string(_segment.ehdr,pcVar9,"rndis_ipa_pipe_connect_notify",uVar6,param_2);
        iVar5 = -0x16;
    }
code_r0x080072d0:
    do {
        while( true ) {
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_68) {
                return iVar5;
            }
            __stack_chk_fail();
            puVar11 = extraout_x8;
code_r0x080073a0:
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar3) {
                    *puVar11 = *puVar11 | 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_stop_queue() was called\n",
                               "rndis_ipa_pipe_connect_notify",0x360);
            }
            netif_carrier_on(*param_6);
            if ((*(*param_6 + 0x38) >> 2 & 1) == 0) break;
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.63,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar8 = sp_el0;
                _printk(0x8002999,"rndis_ipa_pipe_connect_notify",0x364,iVar8 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_carrier_ok error\n",
                               "rndis_ipa_pipe_connect_notify",0x364);
            }
            iVar5 = -0x10;
code_r0x080071d0:
            ipa_pm_deactivate_sync(*piStack_98);
            ipa_pm_deregister(*piStack_98);
            *piStack_98 = 0xffffffff;
            param_6 = piStack_98;
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_carrier_on() was called\n",
                           "rndis_ipa_pipe_connect_notify",0x368);
        }
        iVar8 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar8 = 0x30;
        }
        iVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x24);
        if (iVar8 == 0) {
            iVar5 = -0xc;
            goto code_r0x080071d0;
        }
        uStack_8c = 0x240013;
        strlcpy(iVar8,*param_6,0x20);
        *(iVar8 + 0x20) = *(*param_6 + 0xd0);
        iVar5 = ipa_send_msg(&uStack_8c,iVar8,sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt);
        if (iVar5 != 0) {
            iVar4 = sp_el0;
            _printk(0x8002826,"rndis_ipa_pipe_connect_notify",0x379,iVar4 + 0x7a8);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to send ECM_CONNECT for rndis\n",
                               "rndis_ipa_pipe_connect_notify",0x379);
            }
            kfree(iVar8);
            goto code_r0x080071d0;
        }
        uVar6 = _raw_spin_lock_irqsave(unaff_x21);
        iVar5 = sym.rndis_ipa_next_state(*(param_6 + 9),1);
        if (iVar5 == 5) {
            _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.69,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar8 = sp_el0;
                _printk(0x8002eca,"rndis_ipa_pipe_connect_notify",899,iVar8 + 0x7a8);
            }
            if (_segment.ehdr == 0) {
code_r0x080072cc:
                iVar5 = -1;
            }
            else {
                uVar6 = 899;
code_r0x08007068:
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use init()/disconnect() before connect()\n",
                               "rndis_ipa_pipe_connect_notify",uVar6);
                iVar5 = -1;
            }
        }
        else {
            *(param_6 + 9) = iVar5;
            _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
            if (_segment.ehdr != 0) {
                if (*(param_6 + 9) < 5) {
                    pcVar9 = *(*(param_6 + 9) * 8 + 0x8003d00);
                }
                else {
                    pcVar9 = "Not supported";
                }
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_pipe_connect_notify",
                               0x389,pcVar9);
            }
            if (iVar5 == 4) {
                sym.rndis_ipa_enable_data_path(param_6);
            }
            else if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue shall be started after open()\n",
                               "rndis_ipa_pipe_connect_notify",0x38e);
            }
            _printk(0x8002df6);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pipe_connect_notify",0x392);
            }
            iVar5 = 0;
        }
    } while( true );
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080044b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080044b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFvvE_global_addr @ 0x080044c0 (size 8) =====

void sym.__typeid__ZTSFvvE_global_addr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
    }
    _segment.ehdr = 0;
    _printk(0x8001e70);
    return;
}


// ===== sym.__typeid__ZTSFiP7sk_buffE_global_addr @ 0x080044c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP7sk_buffE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.netif_receive_skb.cfi_jt @ 0x080044d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.netif_receive_skb.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080044d8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(0x32,"ipa_rndis",0x10000);
    if (_segment.ehdr == 0) {
        iVar1 = sp_el0;
        _printk(0x8002d4a,"rndis_ipa_init_module",0xa03,iVar1 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d failed to create IPC log, continue...\n",
                           "rndis_ipa_init_module",0xa03);
        }
    }
    _printk(0x80020df);
    return 0;
}


// ===== sym.rndis_ipa_pipe_disconnect_notify.cfi_jt @ 0x080044e0 (size 8) =====

void sym.rndis_ipa_pipe_disconnect_notify.cfi_jt(int64_t *param_1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t *extraout_x8;
    uint64_t *puVar8;
    ulong *in_x18;
    int64_t *unaff_x20;
    uint64_t uVar9;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pipe_disconnect_notify",0x556);
    }
    if (param_1 == NULL) {
        iVar6 = sp_el0;
        _printk(0x800272c,"rndis_ipa_pipe_disconnect_notify",0x559,iVar6 + 0x7a8);
        if (_segment.ehdr == 0) {
            uVar5 = 0xffffffea;
            goto code_r0x080079e8;
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_pipe_disconnect_notify",0x559);
        uVar5 = 0xffffffea;
        goto code_r0x080079e8;
    }
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d private=0x%pK\n","rndis_ipa_pipe_disconnect_notify",0x55c,
                       param_1);
    }
    unaff_x20 = param_1 + 0x1d;
    uVar5 = _raw_spin_lock_irqsave(unaff_x20);
    iVar4 = sym.rndis_ipa_next_state(*(param_1 + 9),4);
    _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
    if (iVar4 != 5) {
        if (*(param_1 + 0x1b) != '\0') {
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d canceling xmit-error delayed work\n",
                               "rndis_ipa_pipe_disconnect_notify",0x56b);
            }
            cancel_delayed_work_sync(param_1 + 0xc);
            *(param_1 + 0x1b) = 0;
        }
        netif_carrier_off(*param_1);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d carrier_off notification was sent\n",
                           "rndis_ipa_pipe_disconnect_notify",0x572);
        }
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x24);
        if (iVar6 == 0) {
            uVar5 = 0xfffffff4;
            goto code_r0x080079e8;
        }
        uStack_4c = 0x240014;
        strlcpy(iVar6,*param_1,0x20);
        *(iVar6 + 0x20) = *(*param_1 + 0xd0);
        iVar4 = ipa_send_msg(&uStack_4c,iVar6,sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt);
        if (iVar4 != 0) {
            iVar3 = sp_el0;
            _printk(0x8001918,"rndis_ipa_pipe_disconnect_notify",0x581,iVar3 + 0x7a8);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to send ECM_DISCONNECT for rndis\n",
                               "rndis_ipa_pipe_disconnect_notify",0x581);
            }
            kfree(iVar6);
            goto code_r0x080079e4;
        }
        puVar8 = *(*param_1 + 0x3c0) + 0xd0;
        goto code_r0x08007bac;
    }
    iVar4 = ___ratelimit(obj.rndis_ipa_pipe_disconnect_notify._rs,"rndis_ipa_pipe_disconnect_notify");
    if (iVar4 != 0) {
        iVar6 = sp_el0;
        _printk(0x8000e7f,"rndis_ipa_pipe_disconnect_notify",0x565,iVar6 + 0x7a8);
    }
    if (_segment.ehdr == 0) goto code_r0x080079e4;
    uVar5 = 0x565;
    do {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t disconnect before connect\n",
                       "rndis_ipa_pipe_disconnect_notify",uVar5);
code_r0x080079e4:
        do {
            while( true ) {
                uVar5 = 0xffffffff;
code_r0x080079e8:
                while( true ) {
                    iVar6 = sp_el0;
                    if (*(iVar6 + 0x5e0) == iStack_48) {
                        return;
                    }
                    __stack_chk_fail(uVar5);
                    puVar8 = extraout_x8;
code_r0x08007bac:
                    Hint_Prefetch(puVar8,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar8,0x10);
                        if (bVar2) {
                            *puVar8 = *puVar8 | 1;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue stopped\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x587);
                    }
                    uVar9 = param_1[7];
                    *(*param_1 + 0x160) = *(*param_1 + 0x160) + uVar9;
                    *(param_1 + 7) = 0;
                    ipa_pm_deactivate_sync(*(param_1 + 0xec));
                    ipa_pm_deregister(*(param_1 + 0xec));
                    iVar6 = _segment.ehdr;
                    *(param_1 + 0xec) = 0xffffffff;
                    if (iVar6 != 0) {
                        ipc_log_string(iVar6,"RNDIS_IPA %s:%d PM was successfully deregistered\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x594);
                    }
                    uVar5 = _raw_spin_lock_irqsave(unaff_x20);
                    iVar4 = sym.rndis_ipa_next_state(*(param_1 + 9),4);
                    if (iVar4 == 5) break;
                    *(param_1 + 9) = iVar4;
                    _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
                    if (_segment.ehdr != 0) {
                        if (*(param_1 + 9) < 5) {
                            pcVar7 = *(*(param_1 + 9) * 8 + 0x8003d00);
                        }
                        else {
                            pcVar7 = "Not supported";
                        }
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x5a1,pcVar7);
                    }
                    _printk(0x80029cb,uVar9 & 0xffffffff);
                    uVar5 = 0;
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pipe_disconnect_notify",0x5a6
                                      );
                        uVar5 = 0;
                    }
                }
                _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
                iVar4 = ___ratelimit(obj.rndis_ipa_pipe_disconnect_notify._rs.83,"rndis_ipa_pipe_disconnect_notify");
                if (iVar4 == 0) break;
                iVar6 = sp_el0;
                _printk(0x8000e7f,"rndis_ipa_pipe_disconnect_notify",0x59b,iVar6 + 0x7a8);
                if (_segment.ehdr != 0) goto code_r0x080079cc;
            }
        } while (_segment.ehdr == 0);
code_r0x080079cc:
        uVar5 = 0x59b;
    } while( true );
}


// ===== sym.rndis_ipa_packet_receive_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080044e8 (size 8) =====

void sym.rndis_ipa_packet_receive_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
               (int64_t *param_1,int param_2,int64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort uVar3;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_3 + 0x70);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Rx, len=%d\n","rndis_ipa_packet_receive_notify",0x4e4,
                       uVar1);
    }
    if (param_1 == NULL) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Private context is NULL. Drop SKB.\n",
                           "rndis_ipa_packet_receive_notify",0x4e7);
        }
        goto code_r0x08006388;
    }
    if (param_1[3] != '\0') {
        sym.rndis_ipa_dump_skb(param_3);
    }
    if (param_1[9] == 4) {
        if (param_2 == 0) {
            if (*(param_1 + 0x1a) == '\0') {
                skb_pull(param_3,0x2c);
            }
            *(param_3 + 0x10) = *param_1;
            uVar3 = eth_type_trans(param_3,*param_1);
            *(param_3 + 0xb0) = uVar3;
            if (*(*(param_3 + 0x10) + 0xa11) == '\0') {
                pcVar7 = param_1[0x1f];
                if (1 < (pcVar7 + -0x80044c8 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar7,0x8000ca0);
                }
                (*pcVar7)(param_3);
                *(*param_1 + 0x128) = *(*param_1 + 0x128) + 1;
                *(*param_1 + 0x138) = *(*param_1 + 0x138) + uVar1;
                return;
            }
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d packet got filtered out on RX path\n";
                uVar6 = 0x506;
                goto code_r0x08006378;
            }
        }
        else {
            iVar4 = ___ratelimit(obj.rndis_ipa_packet_receive_notify._rs,"rndis_ipa_packet_receive_notify");
            if (iVar4 != 0) {
                iVar2 = sp_el0;
                _printk(0x8001033,"rndis_ipa_packet_receive_notify",0x4f9,iVar2 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d a none IPA_RECEIVE event in driver RX\n";
                uVar6 = 0x4f9;
code_r0x08006378:
                ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_packet_receive_notify",uVar6);
            }
        }
    }
    else if ((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use connect()/up() before receive()\n",
                            "rndis_ipa_packet_receive_notify",0x4f0), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dropped (length=%d)\n","rndis_ipa_packet_receive_notify"
                       ,0x4f2,*(param_3 + 0x70));
    }
    *(param_1 + 0x14) = *(param_1 + 0x14) + 1;
code_r0x08006388:
    __dev_kfree_skb_any(param_3,1);
    return;
}


// ===== sym.rndis_ipa_tx_complete_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080044f0 (size 8) =====

void sym.rndis_ipa_tx_complete_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
               (int64_t *param_1,int param_2,int64_t param_3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar4 = sp_el0;
        _printk(0x800272c,"rndis_ipa_tx_complete_notify",0x475,iVar4 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_tx_complete_notify",0x475);
        }
    }
    else {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Tx-complete, len=%d, skb->prot=%d, outstanding=%d\n",
                           "rndis_ipa_tx_complete_notify",0x47e,*(param_3 + 0x70),*(param_3 + 0xb0),param_1[7]);
        }
        if (param_2 == 1) {
            uVar1 = *(param_1 + 9);
            if (uVar1 == 4) {
                *(*param_1 + 0x130) = *(*param_1 + 0x130) + 1;
                piVar7 = param_1 + 7;
                *(*param_1 + 0x140) = *(*param_1 + 0x140) + *(param_3 + 0x70);
                if (0 < *piVar7) {
                    Hint_Prefetch(piVar7,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
                        if (bVar3) {
                            *piVar7 = *piVar7 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                if ((((*(*(*param_1 + 0x3c0) + 0xd0) & 1) != 0) && ((*(*param_1 + 0x38) >> 2 & 1) == 0)) &&
                   (param_1[7] < *(param_1 + 8))) {
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d outstanding low boundary reached (%d)n",
                                       "rndis_ipa_tx_complete_notify",0x498);
                    }
                    netif_tx_wake_queue(*(*param_1 + 0x3c0));
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d send queue was awaken\n",
                                       "rndis_ipa_tx_complete_notify",0x49a);
                    }
                }
                if (*piVar7 == 0) {
                    ipa_pm_deferred_deactivate(*(param_1 + 0xec));
                }
            }
            else if (_segment.ehdr != 0) {
                if (uVar1 < 4) {
                    pcVar6 = *(uVar1 * 8 + 0x8003c90);
                }
                else {
                    pcVar6 = "Not supported";
                }
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d dropping Tx-complete pkt, state=%s\n",
                               "rndis_ipa_tx_complete_notify",0x488,pcVar6);
            }
            __dev_kfree_skb_any(param_3,1);
        }
        else {
            iVar5 = ___ratelimit(obj.rndis_ipa_tx_complete_notify._rs,"rndis_ipa_tx_complete_notify");
            if (iVar5 != 0) {
                iVar4 = sp_el0;
                _printk(0x800332b,"rndis_ipa_tx_complete_notify",0x481,iVar4 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d unsupported event on TX call-back\n",
                               "rndis_ipa_tx_complete_notify",0x481);
            }
        }
    }
    return;
}


// ===== sym.rndis_ipa_debugfs_atomic_read.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080044f8 (size 8) =====

ulong sym.rndis_ipa_debugfs_atomic_read.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    puVar5 = *(param_1 + 0xd8);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_read",0x9f3);
    }
    iVar2 = scnprintf(&uStack_4c,4,0x80024ba,*puVar5);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_read",0x9f9);
    }
    uVar3 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_4c,iVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = 0x800929c;
    iVar4 = *(auVar6._0_8_ + 0x2d8);
    if (_segment.ehdr == 0) {
        *(auVar6._8_8_ + 0xd8) = iVar4 + 0x38;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_open",0x9e3);
        iVar1 = _segment.ehdr;
        *(auVar6._8_8_ + 0xd8) = iVar4 + 0x38;
        if (iVar1 != 0) {
            ipc_log_string(iVar1,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_open",0x9e7);
        }
    }
    return 0;
}


// ===== sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004500 (size 8) =====

void sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.trace_raw_output_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004508 (size 8) =====

void sym.trace_raw_output_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
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
        trace_event_printf(param_1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004510 (size 8) =====

void sym.trace_raw_output_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
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
        trace_event_printf(param_1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004518 (size 8) =====

void sym.trace_raw_output_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
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
        trace_event_printf(param_1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.rndis_ipa_tx_timeout.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004520 (size 8) =====

void sym.rndis_ipa_tx_timeout.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar2 = *(param_1 + 0xa38);
    _printk(0x8002f4e,"rndis_ipa_tx_timeout",0x4b1,iVar1 + 0x7a8,uVar2 & 0xffffffff);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d possible IPA stall was detected, %d outstanding\n",
                       "rndis_ipa_tx_timeout",0x4b1,uVar2 & 0xffffffff);
    }
    *(param_1 + 0x150) = *(param_1 + 0x150) + 1;
    return;
}


// ===== sym.rndis_ipa_cleanup.cfi_jt @ 0x08004528 (size 8) =====

void sym.rndis_ipa_cleanup.cfi_jt(ulong *param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_cleanup",0x5c9), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d private=0x%pK\n","rndis_ipa_cleanup",0x5cb,param_1);
    }
    if (param_1 == NULL) {
        iVar2 = sp_el0;
        _printk(0x800272c,"rndis_ipa_cleanup",0x5ce,iVar2 + 0x7a8);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d null pointer #ptr\n";
        uVar4 = 0x5ce;
        goto code_r0x08007e84;
    }
    puVar1 = param_1 + 0x1d;
    uVar4 = _raw_spin_lock_irqsave(puVar1);
    iVar3 = sym.rndis_ipa_next_state(*(param_1 + 9),5);
    _raw_spin_unlock_irqrestore(puVar1,uVar4);
    if (iVar3 == 5) {
        iVar3 = ___ratelimit(obj.rndis_ipa_cleanup._rs,"rndis_ipa_cleanup");
        if (iVar3 != 0) {
            iVar2 = sp_el0;
            _printk(0x8001fb1,"rndis_ipa_cleanup",0x5d8,iVar2 + 0x7a8);
        }
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d use disconnect()before clean()\n";
        uVar4 = 0x5d8;
        goto code_r0x08007e84;
    }
    if (_segment.ehdr == 0) {
        uVar4 = *param_1;
    }
    else {
        if (*(param_1 + 9) < 5) {
            pcVar5 = *(*(param_1 + 9) * 8 + 0x8003d00);
        }
        else {
            pcVar5 = "Not supported";
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_cleanup",0x5dd,pcVar5);
        uVar4 = *param_1;
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_deregister_properties",0x79d);
        }
    }
    iVar3 = ipa3_deregister_intf(uVar4);
    if (iVar3 != 0) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Tx prop deregister\n",
                           "rndis_ipa_deregister_properties",0x7a1);
        }
        iVar2 = sp_el0;
        _printk(0x80026a0,"rndis_ipa_cleanup",0x5e1,iVar2 + 0x7a8);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d Fail to deregister Tx/Rx properties\n";
        uVar4 = 0x5e1;
        goto code_r0x08007e84;
    }
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_deregister_properties",0x7a4),
       _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d deregister Tx/Rx properties was successful\n",
                       "rndis_ipa_cleanup",0x5e4);
    }
    if (*(param_1 + 0x20) != '\0') {
        iVar3 = ipa_hdrs_hpc_destroy(*(param_1 + 0x104));
        if (iVar3 == 0) {
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d ipa_hdrs_hpc_destroy success\n";
                uVar4 = 0x5eb;
code_r0x08007da4:
                ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
            }
        }
        else {
            iVar2 = sp_el0;
            _printk(0x800343f,"rndis_ipa_cleanup",0x5e9,iVar2 + 0x7a8);
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d ipa_hdrs_hpc_destroy failed\n";
                uVar4 = 0x5e9;
                goto code_r0x08007da4;
            }
        }
    }
    iVar3 = sym.rndis_ipa_hdrs_destroy(param_1);
    if (iVar3 == 0) {
        if (_segment.ehdr != 0) {
            pcVar5 = "RNDIS_IPA %s:%d RNDIS headers were removed from IPA core\n";
            uVar4 = 0x5f3;
code_r0x08007dd0:
            ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
        }
    }
    else {
        iVar2 = sp_el0;
        _printk(0x8002530,"rndis_ipa_cleanup",0x5f1,iVar2 + 0x7a8);
        if (_segment.ehdr != 0) {
            pcVar5 = "RNDIS_IPA %s:%d Failed removing RNDIS headers from IPA core. Continue anyway\n";
            uVar4 = 0x5f1;
            goto code_r0x08007dd0;
        }
    }
    debugfs_remove(param_1[4]);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d debugfs remove was done\n","rndis_ipa_cleanup",0x5f6);
    }
    unregister_netdev(*param_1);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netdev unregistered\n","rndis_ipa_cleanup",0x5f9);
    }
    uVar4 = _raw_spin_lock_irqsave(puVar1);
    iVar3 = sym.rndis_ipa_next_state(*(param_1 + 9),5);
    if (iVar3 == 5) {
        _raw_spin_unlock_irqrestore(puVar1,uVar4);
        iVar3 = ___ratelimit(obj.rndis_ipa_cleanup._rs.98,"rndis_ipa_cleanup");
        if (iVar3 != 0) {
            iVar2 = sp_el0;
            _printk(0x8001fb1,"rndis_ipa_cleanup",0x600,iVar2 + 0x7a8);
        }
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d use disconnect()before clean()\n";
        uVar4 = 0x600;
    }
    else {
        *(param_1 + 9) = iVar3;
        _raw_spin_unlock_irqrestore(puVar1,uVar4);
        free_netdev(*param_1);
        _printk(0x8003160);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d end\n";
        uVar4 = 0x608;
    }
code_r0x08007e84:
    ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
    return;
}


// ===== sym.rndis_ipa_xmit_error_aftercare_wq.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004530 (size 8) =====

void sym.rndis_ipa_xmit_error_aftercare_wq.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_xmit_error_aftercare_wq",0x645),
       _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Starting queue after xmit error\n",
                       "rndis_ipa_xmit_error_aftercare_wq",0x647);
    }
    if (*(param_1 + -0x18) == 4) {
        *(param_1 + -0x45) = 0;
        puVar1 = *(*(param_1 + -0x60) + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((_segment.ehdr != 0) &&
           (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_start_queue() was called\n",
                           "rndis_ipa_xmit_error_aftercare_wq",0x658), _segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_xmit_error_aftercare_wq",0x65a);
        }
    }
    else {
        iVar5 = ___ratelimit(obj.rndis_ipa_xmit_error_aftercare_wq._rs,"rndis_ipa_xmit_error_aftercare_wq");
        if (iVar5 != 0) {
            iVar4 = sp_el0;
            _printk(0x8002cd1,"rndis_ipa_xmit_error_aftercare_wq",0x651,iVar4 + 0x7a8,*(param_1 + -0x18));
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d error aftercare handling in bad state (%d)",
                           "rndis_ipa_xmit_error_aftercare_wq",0x651,*(param_1 + -0x18));
        }
    }
    return;
}


// ===== sym.eth_mac_addr.cfi_jt @ 0x08004538 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.eth_mac_addr.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08004540 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rndis_ipa_debugfs_aggr_write.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004548 (size 8) =====

int64_t sym.rndis_ipa_debugfs_aggr_write.bc8e7500e16eda9aa8de33601c3df750.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        param_3 = -0xe;
    }
    else {
        iVar1 = ipa3_cfg_ep(*(*(param_1 + 0xd8) + 0x30),obj.ipa_to_usb_ep_cfg);
        if (iVar1 == 0) {
            _printk(0x8001b9f);
        }
        else {
            _printk(0x8001b74);
            param_3 = iVar1;
        }
    }
    return param_3;
}


// ===== sym.__bpf_trace_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004550 (size 8) =====

void sym.__bpf_trace_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004558 (size 8) =====

void sym.__bpf_trace_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.perf_trace_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004560 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.perf_trace_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auStack_1d0 [12];
    uint uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    ulong uStack_198;
    uchar auStack_190 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    ulong **ppuStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uchar auStack_110 [12];
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    ulong uStack_60;
    int64_t iStack_58;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iVar3;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&iStack_40,&uStack_44), uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar6 = -1L << (uVar4 & 0x3f);
        uVar4 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar4 = uVar6 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = auStack_50;
        *(iStack_40 + 0x100) = uVar4;
        *(iStack_40 + 0x108) = 5;
        *(iVar2 + 8) = param_2;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_44,param_1,1,iStack_40,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18 = 0x80048d4;
    uStack_78 = 0x80048d4;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar7 = *(iVar3 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    piStack_70 = piVar1;
    uStack_60 = param_2;
    iStack_58 = param_1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            event_triggers_call(iVar3,0,0,0);
        }
        if (((uVar7 >> 6 & 1) == 0) &&
           (((uVar7 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(iVar3), (uVar4 & 1) == 0))))
        goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        iVar2 = trace_event_buffer_reserve(&uStack_b8,iVar3,0x10);
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar9._8_8_;
            trace_event_buffer_commit(&uStack_b8);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_00 = sym.perf_trace_rndis_tx_dp;
    pcStack_e8 = sym.perf_trace_rndis_tx_dp;
    iVar2 = sp_el0;
    iStack_f8 = *(iVar2 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    ppuStack_f0 = &puStack_80;
    if (((*(iVar3 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&iStack_100,&uStack_104), uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_100 + 0xe8) = &ppuStack_f0;
        *(iStack_100 + 0xf8) = auStack_110;
        *(iStack_100 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80049a4;
        *(iStack_100 + 0x108) = 5;
        *(iVar2 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_104,iVar3,1,iStack_100,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_01 = 0x8004ab4;
    uStack_138 = 0x8004ab4;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar8 = *(iVar5 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar7 = uVar8;
    ppuStack_140 = &ppuStack_f0;
    piStack_130 = piVar1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            uStack_120 = auVar9._8_8_;
            iStack_118 = iVar3;
            event_triggers_call(iVar5,0,0,0);
            auVar9._8_8_ = uStack_120;
            auVar9._0_8_ = iStack_118;
        }
        uStack_120 = auVar9._8_8_;
        iStack_118 = auVar9._0_8_;
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 &&
            (uVar4 = trace_event_ignore_this_pid(iVar5), auVar9._8_8_ = uStack_120, auVar9._0_8_ = iStack_118,
            (uVar4 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_120 = auVar9._8_8_;
    iStack_118 = auVar9._0_8_;
    iVar2 = trace_event_buffer_reserve(&uStack_178,iVar5,0x10);
    auVar9._8_8_ = uStack_120;
    auVar9._0_8_ = iStack_118;
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar10._8_8_;
        trace_event_buffer_commit(&uStack_178);
        auVar9._8_8_ = uStack_120;
        auVar9._0_8_ = iStack_118;
    }
code_r0x08004b50:
    uStack_120 = auVar9._8_8_;
    iStack_118 = auVar9._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_148) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_02 = sym.perf_trace_rndis_status_rcvd;
    pcStack_1a8 = sym.perf_trace_rndis_status_rcvd;
    pcStack_1a0 = sym.perf_trace_rndis_tx_dp;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    ppuStack_1b0 = &ppuStack_140;
    uStack_198 = uVar8;
    auStack_190 = auVar10;
    if (((*(iVar3 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&iStack_1c0,&uStack_1c4), uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
        *(iStack_1c0 + 0xf8) = auStack_1d0;
        *(iStack_1c0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8004b84;
        *(iStack_1c0 + 0x108) = 5;
        *(iVar2 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_1c4,iVar3,1,iStack_1c0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1b8) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_03 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004568 (size 8) =====

void sym.__bpf_trace_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.perf_trace_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004570 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.perf_trace_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar7;
    uint64_t unaff_x30;
    uchar auVar8 [16];
    uchar auStack_110 [12];
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    ulong uStack_60;
    int64_t iStack_58;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_40,&uStack_44), uVar5 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar6 = -1L << (uVar5 & 0x3f);
        uVar5 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar5 = uVar6 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = auStack_50;
        *(iStack_40 + 0x100) = uVar5;
        *(iStack_40 + 0x108) = 5;
        *(iVar3 + 8) = param_2;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_44,param_1,1,iStack_40,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8004ab4;
    uStack_78 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar7 = *(iVar4 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    piStack_70 = piVar1;
    uStack_60 = param_2;
    iStack_58 = param_1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            event_triggers_call(iVar4,0,0,0);
        }
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) != 0))))
        goto code_r0x08004b50;
    }
    iVar3 = trace_event_buffer_reserve(&uStack_b8,iVar4,0x10);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar8._8_8_;
        trace_event_buffer_commit(&uStack_b8);
    }
code_r0x08004b50:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_00 = sym.perf_trace_rndis_status_rcvd;
    pcStack_e8 = sym.perf_trace_rndis_status_rcvd;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_f0 = &puStack_80;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_100,&uStack_104), uVar5 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_100 + 0xe8) = &ppuStack_f0;
        *(iStack_100 + 0xf8) = auStack_110;
        *(iStack_100 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8004b84;
        *(iStack_100 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_104,iVar4,1,iStack_100,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004578 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(param_1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(param_1), (uVar3 & 1) != 0))))
        goto code_r0x08004b50;
    }
    iVar4 = trace_event_buffer_reserve(&uStack_68,param_1,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = param_2;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08004b50:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_status_rcvd;
    pcStack_98 = sym.perf_trace_rndis_status_rcvd;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8004b84;
        *(iStack_b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar7._8_8_;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_b4,iVar5,1,iStack_b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004580 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_tx_dp.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(param_1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(param_1), (uVar2 & 1) == 0))))
        goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        iVar3 = trace_event_buffer_reserve(&uStack_68,param_1,0x10);
        if (iVar3 != 0) {
            *(iVar3 + 8) = param_2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_tx_dp;
    pcStack_98 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80049a4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_b4,iVar4,1,iStack_b0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_00 = 0x8004ab4;
    uStack_e8 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar6 = uVar7;
    ppuStack_f0 = &puStack_a0;
    piStack_e0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_d0 = auVar8._8_8_;
            iStack_c8 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 &&
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar8._8_8_ = uStack_d0, auVar8._0_8_ = iStack_c8,
            (uVar2 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = trace_event_buffer_reserve(&uStack_128,iVar5,0x10);
    auVar8._8_8_ = uStack_d0;
    auVar8._0_8_ = iStack_c8;
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar9._8_8_;
        trace_event_buffer_commit(&uStack_128);
        auVar8._8_8_ = uStack_d0;
        auVar8._0_8_ = iStack_c8;
    }
code_r0x08004b50:
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_01 = sym.perf_trace_rndis_status_rcvd;
    pcStack_158 = sym.perf_trace_rndis_status_rcvd;
    pcStack_150 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_168 = *(iVar3 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_160 = &ppuStack_f0;
    uStack_148 = uVar7;
    auStack_140 = auVar9;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_170,&uStack_174), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_170 + 0xe8) = &ppuStack_160;
        *(iStack_170 + 0xf8) = auStack_180;
        *(iStack_170 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8004b84;
        *(iStack_170 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_174,iVar4,1,iStack_170,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_168) {
        __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_02 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004588 (size 8) =====

void sym.perf_trace_rndis_status_rcvd.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(param_1 + 0x78);
    if (((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_40,&uStack_44), uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = auStack_50;
        *(iStack_40 + 0x100) = uVar2;
        *(iStack_40 + 0x108) = 5;
        *(iVar4 + 8) = param_2;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_44,param_1,1,iStack_40,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8004c94;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004590 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004884)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_netif_ni.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auStack_240 [12];
    uint uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    code *pcStack_210;
    ulong uStack_208;
    uchar auStack_200 [16];
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    ulong uStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(param_1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(param_1), (uVar2 & 1) == 0))))
        goto code_r0x08004770;
    }
    else {
code_r0x08004770:
        iVar3 = trace_event_buffer_reserve(&uStack_68,param_1,0x10);
        if (iVar3 != 0) {
            *(iVar3 + 8) = param_2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_netif_ni;
    pcStack_98 = sym.perf_trace_rndis_netif_ni;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80047c4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_b4,iVar4,1,iStack_b0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_00 = 0x80048d4;
    uStack_e8 = 0x80048d4;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar6 = uVar7;
    ppuStack_f0 = &puStack_a0;
    piStack_e0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_d0 = auVar8._8_8_;
            iStack_c8 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 ||
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar8._8_8_ = uStack_d0, auVar8._0_8_ = iStack_c8,
            (uVar2 & 1) == 0)))) goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        iVar3 = trace_event_buffer_reserve(&uStack_128,iVar5,0x10);
        auVar8._8_8_ = uStack_d0;
        auVar8._0_8_ = iStack_c8;
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar9._8_8_;
            trace_event_buffer_commit(&uStack_128);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
    }
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar4 = auVar10._0_8_;
    *extraout_x18_01 = sym.perf_trace_rndis_tx_dp;
    pcStack_158 = sym.perf_trace_rndis_tx_dp;
    pcStack_150 = sym.perf_trace_rndis_netif_ni;
    iVar3 = sp_el0;
    iStack_168 = *(iVar3 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_160 = &ppuStack_f0;
    uStack_148 = uVar7;
    auStack_140 = auVar9;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_170,&uStack_174), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_170 + 0xe8) = &ppuStack_160;
        *(iStack_170 + 0xf8) = auStack_180;
        *(iStack_170 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80049a4;
        *(iStack_170 + 0x108) = 5;
        *(iVar3 + 8) = auVar10._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_174,iVar4,1,iStack_170,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_168) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_02 = 0x8004ab4;
    uStack_1a8 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_1b8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar6 = uVar7;
    ppuStack_1b0 = &ppuStack_160;
    piStack_1a0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_190 = auVar10._8_8_;
            iStack_188 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar10._8_8_ = uStack_190;
            auVar10._0_8_ = iStack_188;
        }
        uStack_190 = auVar10._8_8_;
        iStack_188 = auVar10._0_8_;
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 &&
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar10._8_8_ = uStack_190, auVar10._0_8_ = iStack_188,
            (uVar2 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_190 = auVar10._8_8_;
    iStack_188 = auVar10._0_8_;
    iVar3 = trace_event_buffer_reserve(&uStack_1e8,iVar5,0x10);
    auVar10._8_8_ = uStack_190;
    auVar10._0_8_ = iStack_188;
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar8._8_8_;
        trace_event_buffer_commit(&uStack_1e8);
        auVar10._8_8_ = uStack_190;
        auVar10._0_8_ = iStack_188;
    }
code_r0x08004b50:
    uStack_190 = auVar10._8_8_;
    iStack_188 = auVar10._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar4 = auVar9._0_8_;
    *extraout_x18_03 = sym.perf_trace_rndis_status_rcvd;
    pcStack_218 = sym.perf_trace_rndis_status_rcvd;
    pcStack_210 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_228 = *(iVar3 + 0x5e0);
    iStack_230 = 0;
    uStack_234 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_220 = &ppuStack_1b0;
    uStack_208 = uVar7;
    auStack_200 = auVar8;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_230,&uStack_234), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_230 + 0xe8) = &ppuStack_220;
        *(iStack_230 + 0xf8) = auStack_240;
        *(iStack_230 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8004b84;
        *(iStack_230 + 0x108) = 5;
        *(iVar3 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_234,iVar4,1,iStack_230,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_228) {
        __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_04 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.rndis_ipa_debugfs_aggr_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x08004598 (size 8) =====

ulong sym.rndis_ipa_debugfs_aggr_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2d8);
    return 0;
}


// ===== sym.rndis_ipa_debugfs_atomic_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080045a0 (size 8) =====

ulong sym.rndis_ipa_debugfs_atomic_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x2d8);
    if (_segment.ehdr == 0) {
        *(param_2 + 0xd8) = iVar2 + 0x38;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_open",0x9e3);
        iVar1 = _segment.ehdr;
        *(param_2 + 0xd8) = iVar2 + 0x38;
        if (iVar1 != 0) {
            ipc_log_string(iVar1,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_open",0x9e7);
        }
    }
    return 0;
}


// ===== sym.rndis_ipa_get_stats.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080045a8 (size 8) =====

int64_t sym.rndis_ipa_get_stats.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1)

{
    return param_1 + 0x128;
}


// ===== sym.__traceiter_rndis_netif_ni.cfi_jt @ 0x080045b0 (size 8) =====

ulong sym.__traceiter_rndis_netif_ni.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80095e8;
    piVar1 = *0x80095e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rndis_tx_dp.cfi_jt @ 0x080045b8 (size 8) =====

ulong sym.__traceiter_rndis_tx_dp.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009630;
    piVar1 = *0x8009630;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rndis_status_rcvd.cfi_jt @ 0x080045c0 (size 8) =====

ulong sym.__traceiter_rndis_status_rcvd.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009678;
    piVar1 = *0x8009678;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.rndis_ipa_start_xmit.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080045c8 (size 8) =====

int sym.rndis_ipa_start_xmit.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    char *pcVar8;
    ulong uVar9;
    int16_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(param_2 + 0x3c0);
    iVar7 = *(param_1 + 0x70);
    if (*(iVar11 + 200) != _eth_mac_addr) {
        *(iVar11 + 200) = _eth_mac_addr;
        iVar11 = *(param_2 + 0x3c0);
    }
    if ((*(iVar11 + 0xd0) & 1) == 0) {
        if (*(param_2 + 0xa10) != '\0') {
            sym.rndis_ipa_dump_skb(param_1);
        }
        if (*(param_2 + 0xa48) != 4) {
            iVar7 = ___ratelimit(obj.rndis_ipa_start_xmit._rs.111,"rndis_ipa_start_xmit");
            if (iVar7 != 0) {
                iVar11 = sp_el0;
                _printk(0x8001a80,"rndis_ipa_start_xmit",0x403,iVar11 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Missing pipe connected and/or iface up\n",
                               "rndis_ipa_start_xmit",0x403);
                return 0x10;
            }
            return 0x10;
        }
        if ((*(*(param_1 + 0x10) + 0xa08) == '\0') ||
           (((*(param_1 + 0xb0) == 8 && (*(*(param_1 + 0x10) + 0xa19) == '\0')) &&
            (*(*(param_1 + 0xd0) + *(param_1 + 0xb4) + 9) == '\x01')))) {
            iVar6 = ipa_pm_activate(*(param_2 + 0xaec));
            if (iVar6 != 0) {
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Failed activate PM client\n","rndis_ipa_start_xmit"
                                   ,0x411);
                }
                puVar1 = *(param_2 + 0x3c0) + 0xd0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar7 = 0x10;
                goto joined_r0x08008748;
            }
            piVar2 = param_2 + 0xa38;
            if (*(param_2 + 0xa3c) <= *piVar2) {
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Outstanding high boundary reached (%d)\n",
                                   "rndis_ipa_start_xmit",0x419);
                }
                puVar1 = *(param_2 + 0x3c0) + 0xd0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (_segment.ehdr != 0) {
                    pcVar8 = "RNDIS_IPA %s:%d send  queue was stopped\n";
                    uVar9 = 0x41b;
                    goto code_r0x08008688;
                }
                goto code_r0x0800868c;
            }
            if ((*(param_2 + 0xb00) == '\0') || ((*(param_2 + 0xe0) & 0x2001d0000) == 0)) {
                param_1 = sym.rndis_encapsulate_skb(param_1,param_2 + 0xa00);
            }
            else if (*(param_1 + 0xb0) == -0x227a) {
                cVar4 = *(*(param_1 + 0xd0) + *(param_1 + 0xb4) + 6);
                if ((cVar4 == '\x11') || (cVar4 == '\x06')) {
                    param_1 = qmap_encapsulate_skb(param_1,obj.qmap_template_hdr);
                    iVar11 = *(param_1 + 0xd0);
                    uVar3 = *(param_1 + 0xcc);
                    iVar10 = *(param_2 + 0xd8) + -0x3c;
                    goto code_r0x080086ec;
                }
            }
            else if ((*(param_1 + 0xb0) == 8) &&
                    ((cVar4 = *(*(param_1 + 0xd0) + *(param_1 + 0xb4) + 9), cVar4 == '\x11' || (cVar4 == '\x06')))) {
                param_1 = qmap_encapsulate_skb(param_1,obj.qmap_template_hdr);
                iVar11 = *(param_1 + 0xd0);
                uVar3 = *(param_1 + 0xcc);
                iVar10 = *(param_2 + 0xd8) + -0x28;
code_r0x080086ec:
                *(iVar11 + uVar3 + 4) = iVar10;
            }
            if (iVar7 == *(param_1 + 0x70)) {
                *(*(param_1 + 0xd0) + *(param_1 + 0xcc) + 4) = 0;
                param_1 = sym.rndis_encapsulate_skb(param_1,param_2 + 0xa00);
            }
            iVar7 = ipa_tx_dp(0x13,param_1,0);
            if (iVar7 != 0) {
                iVar11 = sp_el0;
                _printk(0x8002c9d,"rndis_ipa_start_xmit",0x446,iVar11 + 0x7a8,iVar7);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d ipa transmit failed (%d)\n","rndis_ipa_start_xmit",
                                   0x446,iVar7);
                }
                sym.rndis_ipa_xmit_error(param_1);
                goto code_r0x0800868c;
            }
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar7 = 0;
        }
        else {
            __dev_kfree_skb_any(param_1,1);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet got filtered out on Tx path\n",
                               "rndis_ipa_start_xmit",0x409);
            }
            iVar7 = 0;
            *(param_2 + 0xa0c) = *(param_2 + 0xa0c) + 1;
        }
    }
    else {
        iVar7 = ___ratelimit(obj.rndis_ipa_start_xmit._rs,"rndis_ipa_start_xmit");
        if (iVar7 != 0) {
            iVar11 = sp_el0;
            _printk(0x8001198,"rndis_ipa_start_xmit",0x3fb,iVar11 + 0x7a8);
        }
        if (_segment.ehdr != 0) {
            pcVar8 = "RNDIS_IPA %s:%d interface queue is stopped\n";
            uVar9 = 0x3fb;
code_r0x08008688:
            ipc_log_string(_segment.ehdr,pcVar8,"rndis_ipa_start_xmit",uVar9);
        }
code_r0x0800868c:
        iVar7 = 0x10;
    }
    if (*(param_2 + 0xa38) == 0) {
        ipa_pm_deferred_deactivate(*(param_2 + 0xaec));
    }
joined_r0x08008748:
    if (_segment.ehdr != 0) {
        pcVar8 = 0x8002588;
        if (iVar7 != 0) {
            pcVar8 = "FAIL";
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Tx done - %s\n","rndis_ipa_start_xmit",0x458,pcVar8);
    }
    return iVar7;
}


// ===== sym.rndis_ipa_stop.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080045d0 (size 8) =====

ulong sym.rndis_ipa_stop.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_stop",0x523);
    }
    iVar1 = param_1 + 0xae8;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    iVar5 = sym.rndis_ipa_next_state(*(param_1 + 0xa48),3);
    if (iVar5 == 5) {
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t do network interface down without up\n",
                           "rndis_ipa_stop",0x52a);
        }
        uVar6 = 0xffffffff;
    }
    else {
        *(param_1 + 0xa48) = iVar5;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        puVar2 = *(param_1 + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = *puVar2 | 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        _printk(0x8000d44);
        uVar6 = 0;
        if (_segment.ehdr != 0) {
            if (*(param_1 + 0xa48) < 5) {
                pcVar7 = *(*(param_1 + 0xa48) * 8 + 0x8003d00);
            }
            else {
                pcVar7 = "Not supported";
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_stop",0x535,pcVar7);
            uVar6 = 0;
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_stop",0x537);
                uVar6 = 0;
            }
        }
    }
    return uVar6;
}


// ===== sym.rndis_ipa_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt @ 0x080045d8 (size 8) =====

ulong sym.rndis_ipa_open.bc8e7500e16eda9aa8de33601c3df750.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_open",0x3af);
    }
    iVar1 = param_1 + 0xae8;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    iVar2 = sym.rndis_ipa_next_state(*(param_1 + 0xa48),2);
    if (iVar2 == 5) {
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        iVar2 = ___ratelimit(obj.rndis_ipa_open._rs,"rndis_ipa_open");
        if (iVar2 != 0) {
            iVar1 = sp_el0;
            _printk(0x8003180,"rndis_ipa_open",0x3b8,iVar1 + 0x7a8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t bring driver up before initialize\n","rndis_ipa_open"
                           ,0x3b8);
        }
        uVar3 = 0xffffffff;
    }
    else {
        *(param_1 + 0xa48) = iVar2;
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        if (_segment.ehdr != 0) {
            if (*(param_1 + 0xa48) < 5) {
                pcVar4 = *(*(param_1 + 0xa48) * 8 + 0x8003d00);
            }
            else {
                pcVar4 = "Not supported";
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_open",0x3c0,pcVar4);
        }
        if (iVar2 == 4) {
            sym.rndis_ipa_enable_data_path(param_1 + 0xa00);
        }
        else if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue shall be started after connect()\n","rndis_ipa_open",
                           0x3c5);
        }
        _printk(0x8000eba);
        uVar3 = 0;
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_open",0x3c9);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.__traceiter_rndis_netif_ni @ 0x080045e0 (size 88) =====

ulong sym.__traceiter_rndis_netif_ni(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80095e8;
    piVar1 = *0x80095e8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rndis_tx_dp @ 0x08004640 (size 88) =====

ulong sym.__traceiter_rndis_tx_dp(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009630;
    piVar1 = *0x8009630;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rndis_status_rcvd @ 0x080046a0 (size 88) =====

ulong sym.__traceiter_rndis_status_rcvd(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8009678;
    piVar1 = *0x8009678;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_rndis_netif_ni @ 0x08004700 (size 196) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004884)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_netif_ni(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint32_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auStack_240 [12];
    uint uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    code *pcStack_210;
    ulong uStack_208;
    uchar auStack_200 [16];
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    ulong uStack_1a8;
    int64_t *piStack_1a0;
    ulong uStack_190;
    int64_t iStack_188;
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(arg1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(arg1), (uVar2 & 1) == 0))))
        goto code_r0x08004770;
    }
    else {
code_r0x08004770:
        iVar3 = trace_event_buffer_reserve(&uStack_68,arg1,0x10);
        if (iVar3 != 0) {
            *(iVar3 + 8) = arg2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_netif_ni;
    pcStack_98 = sym.perf_trace_rndis_netif_ni;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80047c4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_b4,iVar4,1,iStack_b0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_00 = 0x80048d4;
    uStack_e8 = 0x80048d4;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar6 = uVar7;
    ppuStack_f0 = &puStack_a0;
    piStack_e0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_d0 = auVar8._8_8_;
            iStack_c8 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 ||
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar8._8_8_ = uStack_d0, auVar8._0_8_ = iStack_c8,
            (uVar2 & 1) == 0)))) goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        iVar3 = trace_event_buffer_reserve(&uStack_128,iVar5,0x10);
        auVar8._8_8_ = uStack_d0;
        auVar8._0_8_ = iStack_c8;
        if (iVar3 != 0) {
            *(iVar3 + 8) = auVar9._8_8_;
            trace_event_buffer_commit(&uStack_128);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
    }
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar4 = auVar10._0_8_;
    *extraout_x18_01 = sym.perf_trace_rndis_tx_dp;
    pcStack_158 = sym.perf_trace_rndis_tx_dp;
    pcStack_150 = sym.perf_trace_rndis_netif_ni;
    iVar3 = sp_el0;
    iStack_168 = *(iVar3 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_160 = &ppuStack_f0;
    uStack_148 = uVar7;
    auStack_140 = auVar9;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_170,&uStack_174), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_170 + 0xe8) = &ppuStack_160;
        *(iStack_170 + 0xf8) = auStack_180;
        *(iStack_170 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80049a4;
        *(iStack_170 + 0x108) = 5;
        *(iVar3 + 8) = auVar10._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_174,iVar4,1,iStack_170,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_168) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_02 = 0x8004ab4;
    uStack_1a8 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_1b8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar6 = uVar7;
    ppuStack_1b0 = &ppuStack_160;
    piStack_1a0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_190 = auVar10._8_8_;
            iStack_188 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar10._8_8_ = uStack_190;
            auVar10._0_8_ = iStack_188;
        }
        uStack_190 = auVar10._8_8_;
        iStack_188 = auVar10._0_8_;
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 &&
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar10._8_8_ = uStack_190, auVar10._0_8_ = iStack_188,
            (uVar2 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_190 = auVar10._8_8_;
    iStack_188 = auVar10._0_8_;
    iVar3 = trace_event_buffer_reserve(&uStack_1e8,iVar5,0x10);
    auVar10._8_8_ = uStack_190;
    auVar10._0_8_ = iStack_188;
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar8._8_8_;
        trace_event_buffer_commit(&uStack_1e8);
        auVar10._8_8_ = uStack_190;
        auVar10._0_8_ = iStack_188;
    }
code_r0x08004b50:
    uStack_190 = auVar10._8_8_;
    iStack_188 = auVar10._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar4 = auVar9._0_8_;
    *extraout_x18_03 = sym.perf_trace_rndis_status_rcvd;
    pcStack_218 = sym.perf_trace_rndis_status_rcvd;
    pcStack_210 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_228 = *(iVar3 + 0x5e0);
    iStack_230 = 0;
    uStack_234 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_220 = &ppuStack_1b0;
    uStack_208 = uVar7;
    auStack_200 = auVar8;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_230,&uStack_234), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_230 + 0xe8) = &ppuStack_220;
        *(iStack_230 + 0xf8) = auStack_240;
        *(iStack_230 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8004b84;
        *(iStack_230 + 0x108) = 5;
        *(iVar3 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_234,iVar4,1,iStack_230,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_228) {
        __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_04 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_rndis_netif_ni @ 0x080047c4 (size 284) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.perf_trace_rndis_netif_ni(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    int64_t iVar2;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t unaff_x30;
    uchar auVar9 [16];
    uchar auVar10 [16];
    uchar auStack_1d0 [12];
    uint uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    uchar *puStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    ulong uStack_198;
    uchar auStack_190 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    ulong uStack_138;
    int64_t *piStack_130;
    ulong uStack_120;
    int64_t iStack_118;
    uchar auStack_110 [12];
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iVar3;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffc0,&stack0xffffffffffffffbc),
       uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar6 = -1L << (uVar4 & 0x3f);
        uVar4 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar4 = uVar6 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
        *(iStack_40 + 0x100) = uVar4;
        *(iStack_40 + 0x108) = 5;
        *(iVar2 + 8) = arg2;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_44,arg1,1,iStack_40,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18 = 0x80048d4;
    uStack_78 = 0x80048d4;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar7 = *(iVar3 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    piStack_70 = piVar1;
    iStack_60 = arg2;
    iStack_58 = arg1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            event_triggers_call(iVar3,0,0,0);
        }
        if (((uVar7 >> 6 & 1) == 0) &&
           (((uVar7 >> 9 & 1) == 0 || (uVar4 = trace_event_ignore_this_pid(iVar3), (uVar4 & 1) == 0))))
        goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        iVar2 = trace_event_buffer_reserve(&stack0xffffffffffffff48,iVar3,0x10);
        if (iVar2 != 0) {
            *(iVar2 + 8) = auVar9._8_8_;
            trace_event_buffer_commit(&stack0xffffffffffffff48);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_00 = sym.perf_trace_rndis_tx_dp;
    pcStack_e8 = sym.perf_trace_rndis_tx_dp;
    iVar2 = sp_el0;
    iStack_f8 = *(iVar2 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    puStack_f0 = &stack0xffffffffffffff80;
    if (((*(iVar3 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffff00,&stack0xfffffffffffffefc),
       uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_100 + 0xe8) = &stack0xffffffffffffff10;
        *(iStack_100 + 0xf8) = &stack0xfffffffffffffef0;
        *(iStack_100 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x80049a4;
        *(iStack_100 + 0x108) = 5;
        *(iVar2 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_104,iVar3,1,iStack_100,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar10 = __stack_chk_fail();
    iVar5 = auVar10._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_01 = 0x8004ab4;
    uStack_138 = 0x8004ab4;
    iVar2 = sp_el0;
    iStack_148 = *(iVar2 + 0x5e0);
    uVar8 = *(iVar5 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar7 = uVar8;
    puStack_140 = &stack0xffffffffffffff10;
    piStack_130 = piVar1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            uStack_120 = auVar9._8_8_;
            iStack_118 = iVar3;
            event_triggers_call(iVar5,0,0,0);
            auVar9._8_8_ = uStack_120;
            auVar9._0_8_ = iStack_118;
        }
        uStack_120 = auVar9._8_8_;
        iStack_118 = auVar9._0_8_;
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 &&
            (uVar4 = trace_event_ignore_this_pid(iVar5), auVar9._8_8_ = uStack_120, auVar9._0_8_ = iStack_118,
            (uVar4 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_120 = auVar9._8_8_;
    iStack_118 = auVar9._0_8_;
    iVar2 = trace_event_buffer_reserve(&stack0xfffffffffffffe88,iVar5,0x10);
    auVar9._8_8_ = uStack_120;
    auVar9._0_8_ = iStack_118;
    if (iVar2 != 0) {
        *(iVar2 + 8) = auVar10._8_8_;
        trace_event_buffer_commit(&stack0xfffffffffffffe88);
        auVar9._8_8_ = uStack_120;
        auVar9._0_8_ = iStack_118;
    }
code_r0x08004b50:
    uStack_120 = auVar9._8_8_;
    iStack_118 = auVar9._0_8_;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_148) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar3 = auVar9._0_8_;
    *extraout_x18_02 = sym.perf_trace_rndis_status_rcvd;
    pcStack_1a8 = sym.perf_trace_rndis_status_rcvd;
    pcStack_1a0 = sym.perf_trace_rndis_tx_dp;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar2 = tpidr_el1;
    piVar1 = iVar2 + *(iVar3 + 0x78);
    puStack_1b0 = &stack0xfffffffffffffec0;
    uStack_198 = uVar8;
    auStack_190 = auVar10;
    if (((*(iVar3 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar2 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffe40,&stack0xfffffffffffffe3c),
       uVar4 = _trace_event_raw_init, iVar2 != 0)) {
        *(iStack_1c0 + 0xe8) = &stack0xfffffffffffffe50;
        *(iStack_1c0 + 0xf8) = &stack0xfffffffffffffe30;
        *(iStack_1c0 + 0x100) = ~(-1L << (uVar4 & 0x3f)) & 0x8004b84;
        *(iStack_1c0 + 0x108) = 5;
        *(iVar2 + 8) = auVar9._8_8_;
        perf_trace_run_bpf_submit(iVar2,0x14,uStack_1c4,iVar3,1,iStack_1c0,piVar1,0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_1b8) {
        __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_03 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rndis_tx_dp @ 0x080048e0 (size 196) =====

//WARNING: Removing unreachable block (ram,0x08004a64)
//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_tx_dp(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auVar9 [16];
    uchar auStack_180 [12];
    uint uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    int64_t iVar4;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(arg1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) == 0) &&
           (((uVar6 >> 9 & 1) == 0 || (uVar2 = trace_event_ignore_this_pid(arg1), (uVar2 & 1) == 0))))
        goto code_r0x08004950;
    }
    else {
code_r0x08004950:
        iVar3 = trace_event_buffer_reserve(&uStack_68,arg1,0x10);
        if (iVar3 != 0) {
            *(iVar3 + 8) = arg2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_tx_dp;
    pcStack_98 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_a8 = *(iVar3 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x80049a4;
        *(iStack_b0 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_b4,iVar4,1,iStack_b0,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    uVar7 = tpidr_el2;
    *extraout_x18_00 = 0x8004ab4;
    uStack_e8 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uVar7 = *(iVar5 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar6 = uVar7;
    ppuStack_f0 = &puStack_a0;
    piStack_e0 = piVar1;
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            uStack_d0 = auVar8._8_8_;
            iStack_c8 = iVar4;
            event_triggers_call(iVar5,0,0,0);
            auVar8._8_8_ = uStack_d0;
            auVar8._0_8_ = iStack_c8;
        }
        uStack_d0 = auVar8._8_8_;
        iStack_c8 = auVar8._0_8_;
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 &&
            (uVar2 = trace_event_ignore_this_pid(iVar5), auVar8._8_8_ = uStack_d0, auVar8._0_8_ = iStack_c8,
            (uVar2 & 1) != 0)))) goto code_r0x08004b50;
    }
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = trace_event_buffer_reserve(&uStack_128,iVar5,0x10);
    auVar8._8_8_ = uStack_d0;
    auVar8._0_8_ = iStack_c8;
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar9._8_8_;
        trace_event_buffer_commit(&uStack_128);
        auVar8._8_8_ = uStack_d0;
        auVar8._0_8_ = iStack_c8;
    }
code_r0x08004b50:
    uStack_d0 = auVar8._8_8_;
    iStack_c8 = auVar8._0_8_;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_01 = sym.perf_trace_rndis_status_rcvd;
    pcStack_158 = sym.perf_trace_rndis_status_rcvd;
    pcStack_150 = sym.perf_trace_rndis_tx_dp;
    iVar3 = sp_el0;
    iStack_168 = *(iVar3 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    ppuStack_160 = &ppuStack_f0;
    uStack_148 = uVar7;
    auStack_140 = auVar9;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&iStack_170,&uStack_174), uVar2 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_170 + 0xe8) = &ppuStack_160;
        *(iStack_170 + 0xf8) = auStack_180;
        *(iStack_170 + 0x100) = ~(-1L << (uVar2 & 0x3f)) & 0x8004b84;
        *(iStack_170 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_174,iVar4,1,iStack_170,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_168) {
        __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_02 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_rndis_tx_dp @ 0x080049a4 (size 284) =====

//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.perf_trace_rndis_tx_dp(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar7;
    uint64_t unaff_x30;
    uchar auVar8 [16];
    uchar auStack_110 [12];
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    int64_t *piStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffc0,&stack0xffffffffffffffbc),
       uVar5 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar6 = -1L << (uVar5 & 0x3f);
        uVar5 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar5 = uVar6 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
        *(iStack_40 + 0x100) = uVar5;
        *(iStack_40 + 0x108) = 5;
        *(iVar3 + 8) = arg2;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_44,arg1,1,iStack_40,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8004ab4;
    uStack_78 = 0x8004ab4;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar7 = *(iVar4 + 0x48);
    puStack_80 = &stack0xffffffffffffffd0;
    piStack_70 = piVar1;
    iStack_60 = arg2;
    iStack_58 = arg1;
    if ((uVar7 >> 8 & 1) == 0) {
        if ((uVar7 >> 7 & 1) != 0) {
            event_triggers_call(iVar4,0,0,0);
        }
        if (((uVar7 >> 6 & 1) != 0) ||
           (((uVar7 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(iVar4), (uVar5 & 1) != 0))))
        goto code_r0x08004b50;
    }
    iVar3 = trace_event_buffer_reserve(&stack0xffffffffffffff48,iVar4,0x10);
    if (iVar3 != 0) {
        *(iVar3 + 8) = auVar8._8_8_;
        trace_event_buffer_commit(&stack0xffffffffffffff48);
    }
code_r0x08004b50:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return;
    }
    auVar8 = __stack_chk_fail();
    iVar4 = auVar8._0_8_;
    *extraout_x18_00 = sym.perf_trace_rndis_status_rcvd;
    pcStack_e8 = sym.perf_trace_rndis_status_rcvd;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    iVar3 = tpidr_el1;
    piVar1 = iVar3 + *(iVar4 + 0x78);
    puStack_f0 = &stack0xffffffffffffff80;
    if (((*(iVar4 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar3 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffff00,&stack0xfffffffffffffefc),
       uVar5 = _trace_event_raw_init, iVar3 != 0)) {
        *(iStack_100 + 0xe8) = &stack0xffffffffffffff10;
        *(iStack_100 + 0xf8) = &stack0xfffffffffffffef0;
        *(iStack_100 + 0x100) = ~(-1L << (uVar5 & 0x3f)) & 0x8004b84;
        *(iStack_100 + 0x108) = 5;
        *(iVar3 + 8) = auVar8._8_8_;
        perf_trace_run_bpf_submit(iVar3,0x14,uStack_104,iVar4,1,iStack_100,piVar1,0);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_01 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rndis_status_rcvd @ 0x08004ac0 (size 196) =====

//WARNING: Removing unreachable block (ram,0x08004c44)

void sym.trace_event_raw_event_rndis_status_rcvd(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    ulong in_tmp_ldXn;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_c0 [12];
    uint uStack_b4;
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
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar6 = *(arg1 + 0x48);
    if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 >> 7 & 1) != 0) {
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar6 >> 6 & 1) != 0) ||
           (((uVar6 >> 9 & 1) != 0 && (uVar3 = trace_event_ignore_this_pid(arg1), (uVar3 & 1) != 0))))
        goto code_r0x08004b50;
    }
    iVar4 = trace_event_buffer_reserve(&uStack_68,arg1,0x10);
    if (iVar4 != 0) {
        *(iVar4 + 8) = arg2;
        trace_event_buffer_commit(&uStack_68);
    }
code_r0x08004b50:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._0_8_;
    *extraout_x18 = sym.perf_trace_rndis_status_rcvd;
    pcStack_98 = sym.perf_trace_rndis_status_rcvd;
    iVar4 = sp_el0;
    iStack_a8 = *(iVar4 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(iVar5 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if (((*(iVar5 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&iStack_b0,&uStack_b4), uVar3 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_b0 + 0xe8) = &puStack_a0;
        *(iStack_b0 + 0xf8) = auStack_c0;
        *(iStack_b0 + 0x100) = ~(-1L << (uVar3 & 0x3f)) & 0x8004b84;
        *(iStack_b0 + 0x108) = 5;
        *(iVar4 + 8) = auVar7._8_8_;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_b4,iVar5,1,iStack_b0,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_a8) {
        __stack_chk_fail();
        uVar2 = tpidr_el2;
        *extraout_x18_00 = 0x8004c94;
        bpf_trace_run1(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_rndis_status_rcvd @ 0x08004b84 (size 284) =====

void sym.perf_trace_rndis_status_rcvd(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_50 [12];
    uint uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar4 = tpidr_el1;
    piVar1 = iVar4 + *(arg1 + 0x78);
    if (((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) &&
       (iVar4 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffc0,&stack0xffffffffffffffbc),
       uVar2 = _trace_event_raw_init, iVar4 != 0)) {
        *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
        uVar5 = -1L << (uVar2 & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
        *(iStack_40 + 0x100) = uVar2;
        *(iStack_40 + 0x108) = 5;
        *(iVar4 + 8) = arg2;
        perf_trace_run_bpf_submit(iVar4,0x14,uStack_44,arg1,1,iStack_40,piVar1,0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x8004c94;
    bpf_trace_run1(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_rndis_netif_ni @ 0x08004ca0 (size 36) =====

void sym.__bpf_trace_rndis_netif_ni(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_rndis_tx_dp @ 0x08004cc4 (size 36) =====

void sym.__bpf_trace_rndis_tx_dp(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_rndis_status_rcvd @ 0x08004ce8 (size 36) =====

void sym.__bpf_trace_rndis_status_rcvd(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.rndis_ipa_init @ 0x08004d0c (size 4068) =====

int sym.rndis_ipa_init(int64_t arg1)

{
    int64_t *arg1_00;
    uint32_t *puVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    ushort uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    uint uVar9;
    uint8_t uVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ushort *puVar14;
    uint64_t uVar15;
    char *pcVar16;
    ulong uVar17;
    ushort uVar18;
    ushort uVar19;
    int64_t iVar20;
    uint32_t *puVar21;
    char cVar22;
    uint uVar23;
    uint32_t *puVar24;
    uint *puVar25;
    ulong *in_x18;
    int *piVar26;
    uint uVar27;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != NULL) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_init",0x238), _segment.ehdr != NULL)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d %s initializing\n","rndis_ipa_init",0x239,"RNDIS_IPA");
    }
    if (arg1 == 0) {
        iVar12 = sp_el0;
        _printk(0x800272c,"rndis_ipa_init",0x23b,iVar12 + 0x7a8);
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_init",0x23b);
            return -0x16;
        }
        return -0x16;
    }
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d host_ethaddr=%pM, device_ethaddr=%pM\n","rndis_ipa_init",0x242
                       ,arg1 + 0x18,arg1 + 0x1e);
    }
    iVar12 = alloc_etherdev_mqs(0x108,1,1);
    if (iVar12 == 0) {
        iVar12 = sp_el0;
        _printk(0x8003090,"rndis_ipa_init",0x247,iVar12 + 0x7a8);
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to allocate Ethernet device\n","rndis_ipa_init",0x247)
            ;
            return -0xc;
        }
        return -0xc;
    }
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d network device was successfully allocated\n","rndis_ipa_init",
                       0x24a);
    }
    arg1_00 = iVar12 + 0xa00;
    if (arg1_00 == NULL) {
        iVar20 = sp_el0;
        _printk(0x80024be,"rndis_ipa_init",0x24f,iVar20 + 0x7a8);
        if (_segment.ehdr == NULL) {
            iVar11 = -0xc;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to extract netdev priv\n","rndis_ipa_init",0x24f);
            iVar11 = -0xc;
        }
        goto code_r0x08005530;
    }
    memset(arg1_00,0,0x108);
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d rndis_ipa_ctx (private)=%pK\n","rndis_ipa_init",0x253,arg1_00)
        ;
    }
    *(iVar12 + 0xae8) = 0;
    *(iVar12 + 0xa00) = iVar12;
    puVar1 = iVar12 + 0xa52;
    *(iVar12 + 0xa08) = 0;
    *(iVar12 + 0xa0c) = 0;
    *(iVar12 + 0xa14) = 0;
    *(iVar12 + 0xa10) = 0;
    *(iVar12 + 0xa18) = 0x100;
    *(iVar12 + 0xa1a) = 0;
    *(iVar12 + 0xa3c) = 0x2000000040;
    *(iVar12 + 0xa38) = 0;
    puVar24 = arg1 + 0x1e;
    uVar3 = *puVar24;
    *(iVar12 + 0xa56) = *(arg1 + 0x22);
    *puVar1 = uVar3;
    puVar25 = arg1 + 0x18;
    uVar18 = *(arg1 + 0x1c);
    *(iVar12 + 0xa4c) = *puVar25;
    *(iVar12 + 0xa50) = uVar18;
    *(iVar12 + 0xa60) = 0xfffffffe0;
    *(iVar12 + 0xa68) = iVar12 + 0xa68;
    *(iVar12 + 0xa70) = iVar12 + 0xa68;
    *(iVar12 + 0xa78) = sym.rndis_ipa_xmit_error_aftercare_wq.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
    init_timer_key(iVar12 + 0xa90,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar12 + 0xa44) = 500;
    if (_segment.ehdr != NULL) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d internal data structures were set\n","rndis_ipa_init",0x26e);
    }
    iVar20 = *arg1;
    if (iVar20 == 0) {
        if (_segment.ehdr == NULL) {
            iVar20 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d device_ready_notify() was not supplied\n","rndis_ipa_init",
                           0x271);
            iVar20 = *arg1;
        }
    }
    *(iVar12 + 0xa58) = iVar20;
    snprintf(iVar12,0x10,"%s%%d","rndis");
    if (_segment.ehdr == NULL) {
        *(iVar12 + 0x4b8) = 0x4e2;
        *(iVar12 + 200) = obj.rndis_ipa_netdev_ops;
        *(iVar12 + 0xdc) = 0x2c;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Setting network interface driver name to: %s\n","rndis_ipa_init"
                       ,0x277,iVar12);
        iVar20 = _segment.ehdr;
        *(iVar12 + 0x4b8) = 0x4e2;
        *(iVar12 + 200) = obj.rndis_ipa_netdev_ops;
        *(iVar12 + 0xdc) = 0x2c;
        if ((iVar20 != 0) &&
           (ipc_log_string(iVar20,"RNDIS_IPA %s:%d Needed headroom for RNDIS header set to %d\n","rndis_ipa_init",
                           0x27f,0x2c), _segment.ehdr != NULL)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_init",0x92d);
        }
    }
    iVar20 = debugfs_create_dir("rndis_ipa",0);
    *(iVar12 + 0xa20) = iVar20;
    if (iVar20 == 0) {
        iVar20 = sp_el0;
        _printk(0x80034df,"rndis_ipa_debugfs_init",0x934,iVar20 + 0x7a8);
        if (_segment.ehdr != NULL) {
            pcVar16 = "RNDIS_IPA %s:%d could not create debugfs directory entry\n";
            uVar17 = 0x934;
            goto code_r0x080052a4;
        }
    }
    else {
        debugfs_create_bool("tx_filter",0x1b6,iVar20,iVar12 + 0xa08);
        debugfs_create_bool("rx_filter",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa11);
        debugfs_create_bool("icmp_filter",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa19);
        debugfs_create_u32("outstanding_high",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa3c);
        debugfs_create_u32("outstanding_low",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa40);
        iVar20 = debugfs_create_file("outstanding",0x124,*(iVar12 + 0xa20),arg1_00,obj.rndis_ipa_debugfs_atomic_ops)
        ;
        if (iVar20 == 0) {
            iVar20 = sp_el0;
            _printk(0x8002aab,"rndis_ipa_debugfs_init",0x953,iVar20 + 0x7a8);
            if (_segment.ehdr != NULL) {
                pcVar16 = "RNDIS_IPA %s:%d could not create outstanding file\n";
                uVar17 = 0x953;
code_r0x08005480:
                ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_debugfs_init",uVar17);
            }
code_r0x08005484:
            debugfs_remove(*(iVar12 + 0xa20));
        }
        else {
            debugfs_create_u8("state",0x124,*(iVar12 + 0xa20),iVar12 + 0xa48);
            debugfs_create_u32("tx_dropped",0x124,*(iVar12 + 0xa20),iVar12 + 0xa0c);
            debugfs_create_u32("rx_dropped",0x124,*(iVar12 + 0xa20),iVar12 + 0xa14);
            iVar20 = debugfs_create_dir("rndis_ipa_aggregation",*(iVar12 + 0xa20));
            if (iVar20 == 0) {
                iVar20 = sp_el0;
                _printk(0x800182e,"rndis_ipa_debugfs_init",0x967,iVar20 + 0x7a8);
                if (_segment.ehdr != NULL) {
                    pcVar16 = "RNDIS_IPA %s:%d could not create debugfs aggr entry\n";
                    uVar17 = 0x967;
code_r0x080052a4:
                    ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_debugfs_init",uVar17);
                }
            }
            else {
                iVar13 = debugfs_create_file("aggr_value_set",0x92,iVar20,arg1_00,obj.rndis_ipa_aggr_ops);
                if (iVar13 == 0) {
                    iVar20 = sp_el0;
                    _printk(0x800209f,"rndis_ipa_debugfs_init",0x970,iVar20 + 0x7a8);
                    if (_segment.ehdr != NULL) {
                        pcVar16 = "RNDIS_IPA %s:%d could not create aggr_value_set file\n";
                        uVar17 = 0x970;
                        goto code_r0x08005480;
                    }
                    goto code_r0x08005484;
                }
                debugfs_create_u8("aggr_enable",0x1b6,iVar20,0x8000c18);
                debugfs_create_u8("aggr_type",0x1b6,iVar20,0x8000c1c);
                debugfs_create_u32("aggr_byte_limit",0x1b6,iVar20,0x8000c20);
                debugfs_create_u32("aggr_time_limit",0x1b6,iVar20,0x8000c24);
                debugfs_create_u32("aggr_pkt_limit",0x1b6,iVar20,0x8000c28);
                debugfs_create_bool("tx_dump_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa10);
                debugfs_create_bool("rx_dump_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa18);
                debugfs_create_bool("deaggregation_enable",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa1a);
                debugfs_create_u32("error_msec_sleep_time",0x1b6,*(iVar12 + 0xa20),iVar12 + 0xa44);
                debugfs_create_bool("during_xmit_error",0x124,*(iVar12 + 0xa20),iVar12 + 0xa1b);
                debugfs_create_bool("is_vlan_mode",0x124,*(iVar12 + 0xa20),iVar12 + 0xaf0);
                if ((_segment.ehdr != NULL) &&
                   (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d debugfs entries were created\n",
                                   "rndis_ipa_debugfs_init",0x9a8), _segment.ehdr != NULL)) {
                    pcVar16 = "RNDIS_IPA %s:%d end\n";
                    uVar17 = 0x9a9;
                    goto code_r0x080052a4;
                }
            }
        }
    }
    if (((*puVar1 & 1) == 0) && (*puVar1 != 0 || *(iVar12 + 0xa56) != 0)) {
        puVar21 = *(iVar12 + 0x308);
        uVar3 = *puVar1;
        *(puVar21 + 1) = *(iVar12 + 0xa56);
        *puVar21 = uVar3;
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Device Ethernet address set %pM\n","rndis_ipa_init",0x289,
                           *(iVar12 + 0x308));
        }
        puVar2 = iVar12 + 0xaf0;
        iVar11 = ipa_is_vlan_mode(3,puVar2);
        if (iVar11 == 0) {
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d is_vlan_mode %d\n","rndis_ipa_init",0x290,*puVar2);
            }
            uVar10 = ipa3_is_ulso_supported();
            *(iVar12 + 0xb00) = uVar10 & 1;
            if ((_segment.ehdr != NULL) &&
               (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d is_ulso_mode=%d\n","rndis_ipa_init",0x293),
               _segment.ehdr != NULL)) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_hdrs_cfg",0x6e9);
            }
            puVar14 = kmem_cache_alloc_trace(_netif_rx_ni,0xdc0,0x26c);
            if (puVar14 == NULL) {
                iVar11 = -0xc;
            }
            else {
                uVar10 = *puVar2;
                *(puVar14 + 0x123) = 0x2c;
                *(puVar14 + 0x94) = 0;
                strlcpy(puVar14 + 2,"rndis_eth_ipv4",0x20);
                uVar27 = 1;
                puVar14[0x9b] = 0x2c;
                *(puVar14 + 0x9a) = 1;
                uVar9 = *0x80039e0;
                uVar8 = *0x80039d8;
                uVar7 = *0x80039d0;
                uVar6 = *0x80039c8;
                *(puVar14 + 0x1a) = *0x80039c8;
                *(puVar14 + 0x1e) = uVar7;
                *(puVar14 + 0x22) = uVar8;
                uVar5 = *0x80039c0;
                uVar17 = _obj.rndis_template_hdr;
                uVar23 = *puVar25;
                uVar18 = *(arg1 + 0x22);
                *(puVar14 + 0x26) = uVar9;
                *(puVar14 + 0x28) = uVar23;
                uVar4 = *(arg1 + 0x1c);
                uVar3 = *puVar24;
                *(puVar14 + 0x12) = uVar17;
                puVar14[0x2d] = uVar18;
                uVar18 = 8;
                puVar14[0x2a] = uVar4;
                *(puVar14 + 0x2b) = uVar3;
                *(puVar14 + 0x16) = uVar5;
                if (uVar10 == 0) {
                    cVar22 = '\x0e';
                    uVar23 = 1;
                }
                else {
                    puVar14[0x30] = 8;
                    uVar23 = 3;
                    cVar22 = '\x12';
                    uVar18 = 0x81;
                }
                puVar14[0x2e] = uVar18;
                *(puVar14 + 0x92) = uVar23;
                *(puVar14 + 0x123) = *(puVar14 + 0x123) + cVar22;
                uVar10 = *puVar2;
                *(puVar14 + 599) = 0x2c;
                *(puVar14 + 0x12e) = 0;
                strlcpy(puVar14 + 0x9c,"rndis_eth_ipv6",0x20);
                *(puVar14 + 0xc0) = uVar9;
                *(puVar14 + 0xac) = uVar17;
                *(puVar14 + 0xb0) = uVar5;
                *(puVar14 + 0x134) = 1;
                *(puVar14 + 0xb4) = uVar6;
                *(puVar14 + 0xb8) = uVar7;
                puVar14[0x135] = 0x2c;
                *(puVar14 + 0xbc) = uVar8;
                uVar18 = *(arg1 + 0x1c);
                uVar3 = *puVar24;
                *(puVar14 + 0xc2) = *puVar25;
                uVar4 = *(arg1 + 0x22);
                uVar19 = 0xdd86;
                puVar14[0xc4] = uVar18;
                *(puVar14 + 0xc5) = uVar3;
                puVar14[199] = uVar4;
                if (uVar10 == 0) {
                    cVar22 = '\x0e';
                }
                else {
                    puVar14[0xca] = 0xdd86;
                    uVar27 = 3;
                    cVar22 = '\x12';
                    uVar19 = 0x81;
                }
                puVar14[200] = uVar19;
                *(puVar14 + 300) = uVar27;
                *puVar14 = 0x201;
                *(puVar14 + 599) = *(puVar14 + 599) + cVar22;
                iVar11 = ipa3_add_hdr(puVar14);
                if (iVar11 == 0) {
                    if (*(puVar14 + 0x98) == 0) {
                        if (*(puVar14 + 0x132) != 0) {
                            iVar20 = sp_el0;
                            piVar26 = puVar14 + 0x132;
                            _printk(0x80025cb,"rndis_ipa_hdrs_cfg",0x708,iVar20 + 0x7a8);
                            if (_segment.ehdr != NULL) {
                                iVar11 = *piVar26;
                                pcVar16 = "RNDIS_IPA %s:%d Fail on Header-Insertion ipv6(%d)\n";
                                uVar17 = 0x708;
                                goto code_r0x08005944;
                            }
                            goto code_r0x08005948;
                        }
                        *(iVar12 + 0xa28) = *(puVar14 + 0x96);
                        *(iVar12 + 0xa2c) = *(puVar14 + 0x130);
                        if (_segment.ehdr != NULL) {
                            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_hdrs_cfg",0x70f);
                        }
                        kfree(puVar14);
                    }
                    else {
                        iVar20 = sp_el0;
                        piVar26 = puVar14 + 0x98;
                        _printk(0x8001074,"rndis_ipa_hdrs_cfg",0x702,iVar20 + 0x7a8);
                        if (_segment.ehdr != NULL) {
                            iVar11 = *piVar26;
                            pcVar16 = "RNDIS_IPA %s:%d Fail on Header-Insertion ipv4(%d)\n";
                            uVar17 = 0x702;
code_r0x08005944:
                            ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_hdrs_cfg",uVar17,iVar11);
                        }
code_r0x08005948:
                        iVar11 = *piVar26;
                        kfree(puVar14);
                        if (iVar11 != 0) goto code_r0x08005adc;
                    }
                    if (_segment.ehdr != NULL) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d IPA header-insertion configured for Ethernet\n",
                                       "rndis_ipa_init",0x29b);
                    }
                    if (*(iVar12 + 0xb00) == '\0') {
code_r0x08005a20:
                        iVar11 = sym.rndis_ipa_register_properties(*puVar2);
                        if (iVar11 == 0) {
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d 2 TX and 2 RX properties were registered\n",
                                               "rndis_ipa_init",0x2b5);
                            }
                            netif_carrier_off(iVar12);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d set carrier off until pipes are connected\n",
                                               "rndis_ipa_init",0x2b8);
                            }
                            iVar11 = register_netdev(iVar12);
                            if (iVar11 == 0) {
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,
                                                   "RNDIS_IPA %s:%d netdev:%s registration succeeded, index=%d\n",
                                                   "rndis_ipa_init",0x2c1,iVar12,*(iVar12 + 0xd0));
                                }
                                uVar15 = ipa_get_lan_rx_napi();
                                if ((uVar15 & 1) == 0) {
                                    *(iVar12 + 0xaf8) = sym.__typeid__ZTSFiP7sk_buffE_global_addr;
                                    if (_segment.ehdr == NULL) goto code_r0x08005c4c;
                                    pcVar16 = "RNDIS_IPA %s:%d LAN RX NAPI enabled = False";
                                    uVar17 = 0x2c8;
                                }
                                else {
                                    *(iVar12 + 0xaf8) = sym.netif_receive_skb.cfi_jt;
                                    if (_segment.ehdr == NULL) goto code_r0x08005c4c;
                                    pcVar16 = "RNDIS_IPA %s:%d LAN RX NAPI enabled = True";
                                    uVar17 = 0x2c5;
                                }
                                ipc_log_string(_segment.ehdr,pcVar16,"rndis_ipa_init",uVar17);
code_r0x08005c4c:
                                *(arg1 + 0x28) = arg1_00;
                                _segment.ehdr = arg1_00;
                                *(arg1 + 0x30) = 0;
                                *(arg1 + 8) = 
                                sym.rndis_ipa_packet_receive_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                                *(arg1 + 0x10) =
                                     sym.rndis_ipa_tx_complete_notify.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                                *(iVar12 + 0xa48) = 1;
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_init"
                                                   ,0x2d5,"RNDIS_IPA_INITIALIZED");
                                }
                                _printk(0x8001d66);
                                if (_segment.ehdr != NULL) {
                                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_init",0x2d8);
                                }
                                return 0;
                            }
                            iVar20 = sp_el0;
                            _printk(0x8002636,"rndis_ipa_init",700,iVar20 + 0x7a8,iVar11);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d register_netdev failed: %d\n",
                                               "rndis_ipa_init",700,iVar11);
                            }
                            sym.rndis_ipa_deregister_properties(iVar12);
                        }
                        else {
                            iVar20 = sp_el0;
                            _printk(0x800234b,"rndis_ipa_init",0x2b2,iVar20 + 0x7a8);
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on properties set\n",
                                               "rndis_ipa_init",0x2b2);
                            }
                        }
                        if (*(iVar12 + 0xb00) != '\0') {
                            ipa_hdrs_hpc_destroy(*(iVar12 + 0xb04));
                        }
                    }
                    else {
                        iVar11 = sym.rndis_ipa_hdrs_hpc_cfg(arg1_00);
                        if (iVar11 == 0) {
                            if (_segment.ehdr != NULL) {
                                ipc_log_string(_segment.ehdr,
                                               "RNDIS_IPA %s:%d IPA header-insertion configured for RNDIS\n",
                                               "rndis_ipa_init",0x2a3);
                            }
                            *(*arg1_00 + 0xe8) = 0x10000000000;
                            *(*arg1_00 + 0xe8) = *(*arg1_00 + 0xe8) | 0x12;
                            *(*arg1_00 + 0xe8) = *(*arg1_00 + 0xe8) | 1;
                            *(*arg1_00 + 0xe8) = *(*arg1_00 + 0xe8) | 0x80000000000000;
                            *(*arg1_00 + 0xe8) = *(*arg1_00 + 0xe8) | 0x200000000;
                            *(*arg1_00 + 0xe8) = *(*arg1_00 + 0xe8) | 0x1d0000;
                            *(*arg1_00 + 0x8d8) = 64000;
                            goto code_r0x08005a20;
                        }
                        iVar20 = sp_el0;
                        _printk(0x8001510,"rndis_ipa_init",0x2a0,iVar20 + 0x7a8);
                        if (_segment.ehdr != NULL) {
                            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ipa hdrs hpc set\n","rndis_ipa_init"
                                           ,0x2a0);
                        }
                    }
                    sym.rndis_ipa_hdrs_destroy(arg1_00);
                    goto code_r0x08005528;
                }
                iVar20 = sp_el0;
                _printk(0x8002299,"rndis_ipa_hdrs_cfg",0x6fd,iVar20 + 0x7a8,iVar11);
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Header-Insertion(%d)\n","rndis_ipa_hdrs_cfg"
                                   ,0x6fd,iVar11);
                }
                kfree(puVar14);
            }
code_r0x08005adc:
            iVar20 = sp_el0;
            _printk(0x8001225,"rndis_ipa_init",0x298,iVar20 + 0x7a8);
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ipa hdrs set\n","rndis_ipa_init",0x298);
            }
        }
        else {
            iVar11 = ___ratelimit(obj.rndis_ipa_init._rs,"rndis_ipa_init");
            if (iVar11 != 0) {
                iVar20 = sp_el0;
                _printk(0x800360e,"rndis_ipa_init",0x28d,iVar20 + 0x7a8);
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d couldn\'t acquire vlan mode, is ipa ready?\n",
                               "rndis_ipa_init",0x28d);
            }
            iVar11 = 0;
        }
    }
    else {
        iVar20 = sp_el0;
        _printk(0x8001f58,"rndis_ipa_init",0x286,iVar20 + 0x7a8);
        if (_segment.ehdr == NULL) {
            iVar11 = -0x16;
        }
        else {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d set device MAC failed\n","rndis_ipa_init",0x286);
            iVar11 = -0x16;
        }
    }
code_r0x08005528:
    debugfs_remove(*(iVar12 + 0xa20));
code_r0x08005530:
    free_netdev(iVar12);
    return iVar11;
}


// ===== sym.rndis_ipa_xmit_error_aftercare_wq @ 0x08005cf0 (size 384) =====

void sym.rndis_ipa_xmit_error_aftercare_wq(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_xmit_error_aftercare_wq",0x645),
       _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Starting queue after xmit error\n",
                       "rndis_ipa_xmit_error_aftercare_wq",0x647);
    }
    if (*(arg1 + -0x18) == 4) {
        *(arg1 + -0x45) = 0;
        puVar1 = *(*(arg1 + -0x60) + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = *puVar1 & 0xfffffffffffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if ((_segment.ehdr != 0) &&
           (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_start_queue() was called\n",
                           "rndis_ipa_xmit_error_aftercare_wq",0x658), _segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_xmit_error_aftercare_wq",0x65a);
        }
    }
    else {
        iVar5 = ___ratelimit(obj.rndis_ipa_xmit_error_aftercare_wq._rs,"rndis_ipa_xmit_error_aftercare_wq");
        if (iVar5 != 0) {
            iVar4 = sp_el0;
            _printk(0x8002cd1,"rndis_ipa_xmit_error_aftercare_wq",0x651,iVar4 + 0x7a8,*(arg1 + -0x18));
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d error aftercare handling in bad state (%d)",
                           "rndis_ipa_xmit_error_aftercare_wq",0x651,*(arg1 + -0x18));
        }
    }
    return;
}


// ===== sym.rndis_ipa_hdrs_hpc_cfg @ 0x08005e70 (size 556) =====

uint64_t sym.rndis_ipa_hdrs_hpc_cfg(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ushort uVar5;
    uint32_t uVar6;
    int iVar7;
    ushort *puVar8;
    int64_t *piVar9;
    char *pcVar10;
    char *arg1_00;
    ulong uVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar13;
    code *pcVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    ulong uStack_3b0;
    ulong *puStack_3a8;
    ulong uStack_3a0;
    uint *puStack_398;
    ulong uStack_390;
    uchar auStack_388 [148];
    uint uStack_2f4;
    uint uStack_2f0;
    ulong uStack_2ec;
    uint uStack_250;
    uint uStack_24c;
    uint auStack_248 [39];
    uint uStack_1ac;
    uchar auStack_1a4 [32];
    uint uStack_184;
    uint uStack_180;
    uint uStack_e4;
    uchar auStack_dc [32];
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_hdrs_hpc_cfg",0x6a6);
    }
    puVar8 = kmem_cache_alloc_trace(_netif_rx_ni,0xdc0,0x138);
    if (puVar8 == NULL) {
        uVar13 = 0xfffffff4;
    }
    else {
        strlcpy(puVar8 + 2,"rndis",0x20);
        *(puVar8 + 0x94) = 0;
        uVar3 = *0x80039d0;
        uVar11 = *0x80039c8;
        *(puVar8 + 0x96) = 0xffffffffffffffff;
        uVar12 = *0x80039e0;
        uVar4 = *0x80039d8;
        *(puVar8 + 0x1a) = uVar11;
        uVar2 = *0x80039c0;
        uVar11 = _obj.rndis_template_hdr;
        *(puVar8 + 0x22) = uVar4;
        *(puVar8 + 0x1e) = uVar3;
        *(puVar8 + 0x26) = uVar12;
        *(puVar8 + 0x12) = uVar11;
        *(puVar8 + 0x16) = uVar2;
        *(puVar8 + 0x123) = 0x2c;
        *puVar8 = 0x101;
        uVar6 = ipa3_add_hdr_hpc(puVar8);
        if (uVar6 == 0) {
            if (*(puVar8 + 0x98) == 0) {
                *(arg1 + 0x104) = *(puVar8 + 0x96);
                uStack_40 = 0x13;
                strlcpy(&uStack_60,"rndis",0x20);
                iVar7 = ipa_set_pkt_init_ex_hdr_ofst(&uStack_60,1);
                if ((iVar7 == 0) && (_segment.ehdr != 0)) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_hdrs_hpc_cfg",0x6c9);
                }
                uVar13 = 0;
            }
            else {
                iVar1 = sp_el0;
                _printk(0x8001af5,"rndis_ipa_hdrs_hpc_cfg",0x6be,iVar1 + 0x7a8);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Header-Insertion rndis(%d)\n",
                                   "rndis_ipa_hdrs_hpc_cfg",0x6be,*(puVar8 + 0x98));
                }
                uVar13 = *(puVar8 + 0x98);
            }
        }
        else {
            uVar13 = uVar6;
            iVar1 = sp_el0;
            _printk(0x8002299,"rndis_ipa_hdrs_hpc_cfg",0x6b9,iVar1 + 0x7a8,uVar13);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Header-Insertion(%d)\n","rndis_ipa_hdrs_hpc_cfg"
                               ,0x6b9,uVar13);
            }
        }
        kfree(puVar8);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar13;
    }
    uVar13 = __stack_chk_fail();
    *extraout_x18 = sym.rndis_ipa_register_properties;
    pcStack_a8 = sym.rndis_ipa_register_properties;
    arg1_00 = &uStack_3b0;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uStack_3a0 = 2;
    puStack_b0 = &stack0xffffffffffffffd0;
    memset(auStack_248 | 4,0,0x18c);
    memset(auStack_388,0,0x138);
    uStack_3b0 = 2;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_register_properties",0x765);
    }
    uVar12 = 3;
    if ((uVar13 & 1) == 0) {
        uVar12 = 1;
    }
    auStack_248[0] = 0;
    uStack_1ac = 0x13;
    puStack_398 = auStack_248;
    strlcpy(auStack_1a4,"rndis_eth_ipv4",0x20);
    uStack_180 = 1;
    uStack_e4 = 0x13;
    uStack_184 = uVar12;
    strlcpy(auStack_dc,"rndis_eth_ipv6",0x20);
    uStack_390 = 0;
    uStack_2f4 = 0x12;
    uStack_2ec = 1;
    uStack_250 = 0x12;
    puStack_3a8 = &uStack_390;
    uStack_2f0 = uVar12;
    uStack_24c = uVar12;
    uStack_bc = uVar12;
    uVar6 = ipa3_register_intf("rndis0",&uStack_3a0);
    if (uVar6 == 0) {
        if (_segment.ehdr != 0) {
            pcVar10 = "RNDIS_IPA %s:%d Tx/Rx properties registration done\n";
            uVar11 = 0x78c;
code_r0x080061d4:
            arg1_00 = "rndis_ipa_register_properties";
            ipc_log_string(_segment.ehdr,pcVar10,"rndis_ipa_register_properties",uVar11);
            if (_segment.ehdr != 0) {
                arg1_00 = "rndis_ipa_register_properties";
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_register_properties",0x78e);
            }
        }
    }
    else {
        iVar1 = sp_el0;
        arg1_00 = 0x78a;
        _printk(0x80021d7,"rndis_ipa_register_properties",0x78a,iVar1 + 0x7a8);
        if (_segment.ehdr != 0) {
            pcVar10 = "RNDIS_IPA %s:%d fail on Tx/Rx properties registration\n";
            uVar11 = 0x78a;
            goto code_r0x080061d4;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return uVar6;
    }
    auVar15 = __stack_chk_fail();
    piVar9 = auVar15._0_8_;
    *extraout_x18_00 = sym.rndis_ipa_packet_receive_notify;
    uVar6 = *(arg1_00 + 0x70);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Rx, len=%d\n","rndis_ipa_packet_receive_notify",0x4e4,
                       uVar6);
    }
    if (piVar9 == NULL) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Private context is NULL. Drop SKB.\n",
                           "rndis_ipa_packet_receive_notify",0x4e7);
        }
        goto code_r0x08006388;
    }
    if (piVar9[3] != '\0') {
        sym.rndis_ipa_dump_skb(arg1_00);
    }
    if (piVar9[9] == 4) {
        if (auVar15._8_4_ == 0) {
            if (*(piVar9 + 0x1a) == '\0') {
                skb_pull(arg1_00,0x2c);
            }
            *(arg1_00 + 0x10) = *piVar9;
            uVar5 = eth_type_trans(arg1_00,*piVar9);
            *(arg1_00 + 0xb0) = uVar5;
            if (*(*(arg1_00 + 0x10) + 0xa11) == '\0') {
                pcVar14 = piVar9[0x1f];
                if (1 < (pcVar14 + -0x80044c8 >> 3 | pcVar14 << 0x3d)) {
                    __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar14,0x8000ca0);
                }
                uVar13 = (*pcVar14)(arg1_00);
                *(*piVar9 + 0x128) = *(*piVar9 + 0x128) + 1;
                *(*piVar9 + 0x138) = *(*piVar9 + 0x138) + uVar6;
                return uVar13;
            }
            if (_segment.ehdr != 0) {
                pcVar10 = "RNDIS_IPA %s:%d packet got filtered out on RX path\n";
                uVar11 = 0x506;
                goto code_r0x08006378;
            }
        }
        else {
            iVar7 = ___ratelimit(obj.rndis_ipa_packet_receive_notify._rs,"rndis_ipa_packet_receive_notify");
            if (iVar7 != 0) {
                iVar1 = sp_el0;
                _printk(0x8001033,"rndis_ipa_packet_receive_notify",0x4f9,iVar1 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                pcVar10 = "RNDIS_IPA %s:%d a none IPA_RECEIVE event in driver RX\n";
                uVar11 = 0x4f9;
code_r0x08006378:
                ipc_log_string(_segment.ehdr,pcVar10,"rndis_ipa_packet_receive_notify",uVar11);
            }
        }
    }
    else if ((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use connect()/up() before receive()\n",
                            "rndis_ipa_packet_receive_notify",0x4f0), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dropped (length=%d)\n","rndis_ipa_packet_receive_notify"
                       ,0x4f2,*(arg1_00 + 0x70));
    }
    *(piVar9 + 0x14) = *(piVar9 + 0x14) + 1;
code_r0x08006388:
    uVar13 = __dev_kfree_skb_any(arg1_00,1);
    return uVar13;
}


// ===== sym.rndis_ipa_register_properties @ 0x0800609c (size 476) =====

uint64_t sym.rndis_ipa_register_properties(int64_t arg1)

{
    int64_t iVar1;
    ushort uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *arg1_00;
    ulong uVar8;
    uint uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    ulong uStack_350;
    ulong *puStack_348;
    ulong uStack_340;
    uint *puStack_338;
    ulong uStack_330;
    uchar auStack_328 [148];
    uint uStack_294;
    uint uStack_290;
    ulong uStack_28c;
    uint uStack_1f0;
    uint uStack_1ec;
    uint auStack_1e8 [39];
    uint uStack_14c;
    uchar auStack_144 [32];
    uint uStack_124;
    uint uStack_120;
    uint uStack_84;
    uchar auStack_7c [32];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    arg1_00 = &uStack_350;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_340 = 2;
    memset(auStack_1e8 | 4,0,0x18c);
    memset(auStack_328,0,0x138);
    uStack_350 = 2;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_register_properties",0x765);
    }
    uVar9 = 3;
    if ((arg1 & 1U) == 0) {
        uVar9 = 1;
    }
    auStack_1e8[0] = 0;
    uStack_14c = 0x13;
    puStack_338 = auStack_1e8;
    strlcpy(auStack_144,"rndis_eth_ipv4",0x20);
    uStack_120 = 1;
    uStack_84 = 0x13;
    uStack_124 = uVar9;
    strlcpy(auStack_7c,"rndis_eth_ipv6",0x20);
    uStack_330 = 0;
    uStack_294 = 0x12;
    uStack_28c = 1;
    uStack_1f0 = 0x12;
    puStack_348 = &uStack_330;
    uStack_290 = uVar9;
    uStack_1ec = uVar9;
    uStack_5c = uVar9;
    uVar3 = ipa3_register_intf("rndis0",&uStack_340);
    if (uVar3 == 0) {
        if (_segment.ehdr != 0) {
            pcVar7 = "RNDIS_IPA %s:%d Tx/Rx properties registration done\n";
            uVar8 = 0x78c;
code_r0x080061d4:
            arg1_00 = "rndis_ipa_register_properties";
            ipc_log_string(_segment.ehdr,pcVar7,"rndis_ipa_register_properties",uVar8);
            if (_segment.ehdr != 0) {
                arg1_00 = "rndis_ipa_register_properties";
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_register_properties",0x78e);
            }
        }
    }
    else {
        iVar1 = sp_el0;
        arg1_00 = 0x78a;
        _printk(0x80021d7,"rndis_ipa_register_properties",0x78a,iVar1 + 0x7a8);
        if (_segment.ehdr != 0) {
            pcVar7 = "RNDIS_IPA %s:%d fail on Tx/Rx properties registration\n";
            uVar8 = 0x78a;
            goto code_r0x080061d4;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail();
    piVar5 = auVar11._0_8_;
    *extraout_x18 = sym.rndis_ipa_packet_receive_notify;
    uVar3 = *(arg1_00 + 0x70);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Rx, len=%d\n","rndis_ipa_packet_receive_notify",0x4e4,
                       uVar3);
    }
    if (piVar5 == NULL) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Private context is NULL. Drop SKB.\n",
                           "rndis_ipa_packet_receive_notify",0x4e7);
        }
        goto code_r0x08006388;
    }
    if (piVar5[3] != '\0') {
        sym.rndis_ipa_dump_skb(arg1_00);
    }
    if (piVar5[9] == 4) {
        if (auVar11._8_4_ == 0) {
            if (*(piVar5 + 0x1a) == '\0') {
                skb_pull(arg1_00,0x2c);
            }
            *(arg1_00 + 0x10) = *piVar5;
            uVar2 = eth_type_trans(arg1_00,*piVar5);
            *(arg1_00 + 0xb0) = uVar2;
            if (*(*(arg1_00 + 0x10) + 0xa11) == '\0') {
                pcVar10 = piVar5[0x1f];
                if (1 < (pcVar10 + -0x80044c8 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar10,0x8000ca0);
                }
                uVar6 = (*pcVar10)(arg1_00);
                *(*piVar5 + 0x128) = *(*piVar5 + 0x128) + 1;
                *(*piVar5 + 0x138) = *(*piVar5 + 0x138) + uVar3;
                return uVar6;
            }
            if (_segment.ehdr != 0) {
                pcVar7 = "RNDIS_IPA %s:%d packet got filtered out on RX path\n";
                uVar8 = 0x506;
                goto code_r0x08006378;
            }
        }
        else {
            iVar4 = ___ratelimit(obj.rndis_ipa_packet_receive_notify._rs,"rndis_ipa_packet_receive_notify");
            if (iVar4 != 0) {
                iVar1 = sp_el0;
                _printk(0x8001033,"rndis_ipa_packet_receive_notify",0x4f9,iVar1 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                pcVar7 = "RNDIS_IPA %s:%d a none IPA_RECEIVE event in driver RX\n";
                uVar8 = 0x4f9;
code_r0x08006378:
                ipc_log_string(_segment.ehdr,pcVar7,"rndis_ipa_packet_receive_notify",uVar8);
            }
        }
    }
    else if ((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use connect()/up() before receive()\n",
                            "rndis_ipa_packet_receive_notify",0x4f0), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dropped (length=%d)\n","rndis_ipa_packet_receive_notify"
                       ,0x4f2,*(arg1_00 + 0x70));
    }
    *(piVar5 + 0x14) = *(piVar5 + 0x14) + 1;
code_r0x08006388:
    uVar6 = __dev_kfree_skb_any(arg1_00,1);
    return uVar6;
}


// ===== sym.rndis_ipa_packet_receive_notify @ 0x08006278 (size 596) =====

void sym.rndis_ipa_packet_receive_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort uVar3;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg3 + 0x70);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Rx, len=%d\n","rndis_ipa_packet_receive_notify",0x4e4,
                       uVar1);
    }
    if (arg1 == 0) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Private context is NULL. Drop SKB.\n",
                           "rndis_ipa_packet_receive_notify",0x4e7);
        }
        goto code_r0x08006388;
    }
    if (*(arg1 + 0x18) != '\0') {
        sym.rndis_ipa_dump_skb(arg3);
    }
    if (*(arg1 + 0x48) == 4) {
        if (arg2 == 0) {
            if (*(arg1 + 0x1a) == '\0') {
                skb_pull(arg3,0x2c);
            }
            *(arg3 + 0x10) = *arg1;
            uVar3 = eth_type_trans(arg3,*arg1);
            *(arg3 + 0xb0) = uVar3;
            if (*(*(arg3 + 0x10) + 0xa11) == '\0') {
                pcVar7 = *(arg1 + 0xf8);
                if (1 < (pcVar7 + -0x80044c8 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar7,0x8000ca0);
                }
                (*pcVar7)(arg3);
                *(*arg1 + 0x128) = *(*arg1 + 0x128) + 1;
                *(*arg1 + 0x138) = *(*arg1 + 0x138) + uVar1;
                return;
            }
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d packet got filtered out on RX path\n";
                uVar6 = 0x506;
                goto code_r0x08006378;
            }
        }
        else {
            iVar4 = ___ratelimit(obj.rndis_ipa_packet_receive_notify._rs,"rndis_ipa_packet_receive_notify");
            if (iVar4 != 0) {
                iVar2 = sp_el0;
                _printk(0x8001033,"rndis_ipa_packet_receive_notify",0x4f9,iVar2 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d a none IPA_RECEIVE event in driver RX\n";
                uVar6 = 0x4f9;
code_r0x08006378:
                ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_packet_receive_notify",uVar6);
            }
        }
    }
    else if ((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use connect()/up() before receive()\n",
                            "rndis_ipa_packet_receive_notify",0x4f0), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dropped (length=%d)\n","rndis_ipa_packet_receive_notify"
                       ,0x4f2,*(arg3 + 0x70));
    }
    *(arg1 + 0x14) = *(arg1 + 0x14) + 1;
code_r0x08006388:
    __dev_kfree_skb_any(arg3,1);
    return;
}


// ===== sym.rndis_ipa_tx_complete_notify @ 0x08006574 (size 828) =====

void sym.rndis_ipa_tx_complete_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    char *pcVar6;
    ulong *in_x18;
    int *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar4 = sp_el0;
        _printk(0x800272c,"rndis_ipa_tx_complete_notify",0x475,iVar4 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_tx_complete_notify",0x475);
        }
    }
    else {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Tx-complete, len=%d, skb->prot=%d, outstanding=%d\n",
                           "rndis_ipa_tx_complete_notify",0x47e,*(arg3 + 0x70),*(arg3 + 0xb0),*(arg1 + 0x38));
        }
        if (arg2 == 1) {
            uVar1 = *(arg1 + 0x48);
            if (uVar1 == 4) {
                *(*arg1 + 0x130) = *(*arg1 + 0x130) + 1;
                piVar7 = arg1 + 0x38;
                *(*arg1 + 0x140) = *(*arg1 + 0x140) + *(arg3 + 0x70);
                if (0 < *piVar7) {
                    Hint_Prefetch(piVar7,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
                        if (bVar3) {
                            *piVar7 = *piVar7 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                if ((((*(*(*arg1 + 0x3c0) + 0xd0) & 1) != 0) && ((*(*arg1 + 0x38) >> 2 & 1) == 0)) &&
                   (*(arg1 + 0x38) < *(arg1 + 0x40))) {
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d outstanding low boundary reached (%d)n",
                                       "rndis_ipa_tx_complete_notify",0x498);
                    }
                    netif_tx_wake_queue(*(*arg1 + 0x3c0));
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d send queue was awaken\n",
                                       "rndis_ipa_tx_complete_notify",0x49a);
                    }
                }
                if (*piVar7 == 0) {
                    ipa_pm_deferred_deactivate(*(arg1 + 0xec));
                }
            }
            else if (_segment.ehdr != 0) {
                if (uVar1 < 4) {
                    pcVar6 = *(uVar1 * 8 + 0x8003c90);
                }
                else {
                    pcVar6 = "Not supported";
                }
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d dropping Tx-complete pkt, state=%s\n",
                               "rndis_ipa_tx_complete_notify",0x488,pcVar6);
            }
            __dev_kfree_skb_any(arg3,1);
        }
        else {
            iVar5 = ___ratelimit(obj.rndis_ipa_tx_complete_notify._rs,"rndis_ipa_tx_complete_notify");
            if (iVar5 != 0) {
                iVar4 = sp_el0;
                _printk(0x800332b,"rndis_ipa_tx_complete_notify",0x481,iVar4 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d unsupported event on TX call-back\n",
                               "rndis_ipa_tx_complete_notify",0x481);
            }
        }
    }
    return;
}


// ===== sym.rndis_ipa_deregister_properties @ 0x080068c8 (size 160) =====

void sym.rndis_ipa_deregister_properties(int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_deregister_properties",0x79d);
    }
    iVar1 = ipa3_deregister_intf(arg1);
    if (iVar1 == 0) {
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar2 = "RNDIS_IPA %s:%d end\n";
        uVar3 = 0x7a4;
    }
    else {
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar2 = "RNDIS_IPA %s:%d Fail on Tx prop deregister\n";
        uVar3 = 0x7a1;
    }
    ipc_log_string(_segment.ehdr,pcVar2,"rndis_ipa_deregister_properties",uVar3);
    return;
}


// ===== sym.rndis_ipa_hdrs_destroy @ 0x08006968 (size 276) =====

int sym.rndis_ipa_hdrs_destroy(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    ushort *puVar5;
    char *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
    if (puVar5 == NULL) {
        return -0xc;
    }
    uVar2 = *(arg1 + 0x28);
    uVar3 = *(arg1 + 0x2c);
    *puVar5 = 0x201;
    *(puVar5 + 2) = uVar2;
    *(puVar5 + 6) = uVar3;
    iVar4 = ipa3_del_hdr();
    if (((iVar4 == 0) && (*(puVar5 + 4) == 0)) && (*(puVar5 + 8) == 0)) {
        if (_segment.ehdr == 0) goto code_r0x08006a10;
        pcVar6 = "RNDIS_IPA %s:%d hdrs deletion done\n";
        uVar7 = 0x736;
    }
    else {
        iVar1 = sp_el0;
        _printk(0x8001cb5,"rndis_ipa_hdrs_destroy",0x734,iVar1 + 0x7a8);
        if (_segment.ehdr == 0) goto code_r0x08006a10;
        pcVar6 = "RNDIS_IPA %s:%d ipa3_del_hdr failed\n";
        uVar7 = 0x734;
    }
    ipc_log_string(_segment.ehdr,pcVar6,"rndis_ipa_hdrs_destroy",uVar7);
code_r0x08006a10:
    kfree(puVar5);
    return iVar4;
}


// ===== sym.rndis_ipa_pipe_connect_notify @ 0x08006a7c (size 2380) =====

int sym.rndis_ipa_pipe_connect_notify(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int in_w4;
    uint64_t uVar8;
    char *pcVar9;
    int64_t *in_x5;
    uint32_t uVar10;
    uint64_t *extraout_x8;
    uint64_t *puVar11;
    ulong *in_x18;
    int64_t *unaff_x21;
    code *pcVar12;
    ulong unaff_x30;
    int64_t *piStack_98;
    uint uStack_8c;
    int64_t iStack_88;
    code *pcStack_80;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_8c = 0;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pipe_connect_notify",0x319);
    }
    if (in_x5 == NULL) {
        iVar7 = sp_el0;
        _printk(0x800272c,"rndis_ipa_pipe_connect_notify",0x31c,iVar7 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_pipe_connect_notify",0x31c)
            ;
            iVar5 = -0x16;
            goto code_r0x080072d0;
        }
code_r0x080070d8:
        iVar5 = -0x16;
    }
    else {
        if (((_segment.ehdr != 0) &&
            (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d usb_to_ipa_hdl=%d, ipa_to_usb_hdl=%d, private=0x%pK\n",
                            "rndis_ipa_pipe_connect_notify",0x323,arg1 & 0xffffffff,arg2 & 0xffffffff),
            _segment.ehdr != 0)) &&
           (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d max_xfer_sz_to_dev=%d, max_pkt_num_to_dev=%d\n",
                           "rndis_ipa_pipe_connect_notify",0x327,arg3 & 0xffffffff,arg4 & 0xffffffff),
           _segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d max_xfer_sz_to_host=%d\n","rndis_ipa_pipe_connect_notify",
                           0x32a,in_w4);
        }
        unaff_x21 = in_x5 + 0x1d;
        uVar6 = _raw_spin_lock_irqsave(unaff_x21);
        iVar5 = sym.rndis_ipa_next_state(*(in_x5 + 9),1);
        _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
        if (iVar5 == 5) {
            iVar7 = sp_el0;
            _printk(0x8002eca,"rndis_ipa_pipe_connect_notify",0x332,iVar7 + 0x7a8);
            if (_segment.ehdr == 0) goto code_r0x080072cc;
            uVar6 = 0x332;
            goto code_r0x08007068;
        }
        if (arg1 < 0x86) {
            if (arg2 < 0x86) {
                piStack_98 = in_x5 + 0xec;
                iStack_88 = *in_x5;
                uStack_70 = 1;
                pcStack_80 = sym.rndis_ipa_pm_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt;
                iVar5 = ipa_pm_register(&iStack_88);
                if (iVar5 == 0) {
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d PM client was registered\n",
                                       "rndis_ipa_pipe_connect_notify",0x349);
                    }
                    uVar8 = _segment.ehdr;
                    *(in_x5 + 6) = arg1;
                    *(in_x5 + 0x34) = arg2;
                    iVar7 = in_x5[0x1e];
                    *(in_x5 + 0x1a) = 1 < arg4;
                    iVar1 = *(*in_x5 + 0xd8);
                    if (arg4 < 2) {
                        if (uVar8 != 0) {
                            ipc_log_string(uVar8,"RNDIS_IPA %s:%d deaggregation disabled\n",
                                           "rndis_ipa_ep_registers_cfg",0x85e);
                        }
                        uVar10 = 0x2c;
                        pcVar12 = obj.usb_to_ipa_ep_cfg_deaggr_dis;
                    }
                    else {
                        if (uVar8 != 0) {
                            ipc_log_string(uVar8,"RNDIS_IPA %s:%d deaggregation enabled\n",
                                           "rndis_ipa_ep_registers_cfg",0x85b);
                        }
                        uVar10 = 0;
                        pcVar12 = obj.usb_to_ipa_ep_cfg_deaggr_en;
                    }
                    if (iVar7 == '\0') {
                        *(pcVar12 + 0xc) = uVar10 + 0xe;
                        *0x8000bc4 = 0x3a;
                        *0x8000bd0 = 0xe;
                    }
                    else {
                        *0x8000bd0 = 0x12;
                        *(pcVar12 + 0xc) = uVar10 | 0x12;
                        *0x8000bc4 = 0x3e;
                        _segment.ehdr = _segment.ehdr & 0xffffe0ffffffffff | 0x40000000000;
                    }
                    *(pcVar12 + 0x8c) = arg3;
                    iVar5 = ipa3_cfg_ep(arg1 & 0xffffffff,pcVar12);
                    if (iVar5 == 0) {
                        if (_segment.ehdr != 0) {
                            ipc_log_string(_segment.ehdr,0x8001b33,"rndis_ipa_ep_registers_cfg",0x877);
                        }
                        uVar10 = in_w4 - iVar1;
                        *0x8000c20 = uVar10 >> 10;
                        *0x8000c24 = 0;
                        if (uVar10 >= 0x400) {
                            *0x8000c24 = 1000;
                        }
                        *0x8000c28 = uVar10 < 0x400;
                        if (_segment.ehdr != 0) {
                            ipc_log_string(_segment.ehdr,
                                           "RNDIS_IPA %s:%d RNDIS aggregation param: en=%d byte_limit=%d time_limit=%d pkt_limit=%d\n"
                                           ,"rndis_ipa_ep_registers_cfg",0x88a,_segment.ehdr & 0xffffffff);
                        }
                        *(pcVar12 + 0x2c) = 1;
                        uVar8 = ipa3_is_ulso_supported();
                        if ((uVar8 & 1) != 0) {
                            *0x8000c6c = 1;
                        }
                        if (iVar7 != '\0') {
                            *(pcVar12 + 0x2c) = 0;
                            *(pcVar12 + 0x10) = 0x3a00000001;
                        }
                        iVar5 = ipa3_cfg_ep(arg2 & 0xffffffff,obj.ipa_to_usb_ep_cfg);
                        if (iVar5 == 0) {
                            if ((_segment.ehdr != 0) &&
                               (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d IPA->USB end-point configured\n",
                                               "rndis_ipa_ep_registers_cfg",0x89f), _segment.ehdr != 0)) {
                                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end-points configured\n",
                                               "rndis_ipa_pipe_connect_notify",0x35d);
                            }
                            puVar11 = *(*in_x5 + 0x3c0) + 0xd0;
                            goto code_r0x080073a0;
                        }
                        uVar6 = 0x8001802;
                    }
                    else {
                        uVar6 = 0x80012e1;
                    }
                    _printk(uVar6);
                    iVar7 = sp_el0;
                    _printk(0x8001009,"rndis_ipa_pipe_connect_notify",0x35a,iVar7 + 0x7a8);
                    if (_segment.ehdr == 0) goto code_r0x080071d0;
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on ep cfg\n","rndis_ipa_pipe_connect_notify",
                                   0x35a);
                    goto code_r0x080071d0;
                }
                iVar7 = sp_el0;
                in_x5 = iVar7 + 0x7a8;
                _printk(0x80033f0,"rndis_ipa_register_pm_client",0x7cd,in_x5,iVar5);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d failed to create IPA PM client %d\n",
                                   "rndis_ipa_register_pm_client",0x7cd,iVar5);
                }
                _printk(0x8001e91,"rndis_ipa_pipe_connect_notify",0x346,in_x5);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail on PM register\n",
                                   "rndis_ipa_pipe_connect_notify",0x346);
                }
                goto code_r0x080072d0;
            }
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.53,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar7 = sp_el0;
                _printk(0x8000e3a,"rndis_ipa_pipe_connect_notify",0x340,iVar7 + 0x7a8,arg2 & 0xffffffff);
            }
            if (_segment.ehdr == 0) goto code_r0x080070d8;
            pcVar9 = "RNDIS_IPA %s:%d ipa_to_usb_hdl(%d) - not valid ipa handle\n";
            uVar6 = 0x340;
            uVar8 = arg2 & 0xffffffff;
        }
        else {
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar7 = sp_el0;
                _printk(0x8002954,"rndis_ipa_pipe_connect_notify",0x33a,iVar7 + 0x7a8,arg1 & 0xffffffff);
            }
            if (_segment.ehdr == 0) goto code_r0x080070d8;
            pcVar9 = "RNDIS_IPA %s:%d usb_to_ipa_hdl(%d) - not valid ipa handle\n";
            uVar6 = 0x33a;
            uVar8 = arg1 & 0xffffffff;
        }
        ipc_log_string(_segment.ehdr,pcVar9,"rndis_ipa_pipe_connect_notify",uVar6,uVar8);
        iVar5 = -0x16;
    }
code_r0x080072d0:
    do {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return iVar5;
            }
            __stack_chk_fail();
            puVar11 = extraout_x8;
code_r0x080073a0:
            Hint_Prefetch(puVar11,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar11,0x10);
                if (bVar3) {
                    *puVar11 = *puVar11 | 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_stop_queue() was called\n",
                               "rndis_ipa_pipe_connect_notify",0x360);
            }
            netif_carrier_on(*in_x5);
            if ((*(*in_x5 + 0x38) >> 2 & 1) == 0) break;
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.63,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar7 = sp_el0;
                _printk(0x8002999,"rndis_ipa_pipe_connect_notify",0x364,iVar7 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_carrier_ok error\n",
                               "rndis_ipa_pipe_connect_notify",0x364);
            }
            iVar5 = -0x10;
code_r0x080071d0:
            ipa_pm_deactivate_sync(*piStack_98);
            ipa_pm_deregister(*piStack_98);
            *piStack_98 = 0xffffffff;
            in_x5 = piStack_98;
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_carrier_on() was called\n",
                           "rndis_ipa_pipe_connect_notify",0x368);
        }
        iVar7 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar7 = 0x30;
        }
        iVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x24);
        if (iVar7 == 0) {
            iVar5 = -0xc;
            goto code_r0x080071d0;
        }
        uStack_8c = 0x240013;
        strlcpy(iVar7,*in_x5,0x20);
        *(iVar7 + 0x20) = *(*in_x5 + 0xd0);
        iVar5 = ipa_send_msg(&uStack_8c,iVar7,sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt);
        if (iVar5 != 0) {
            iVar4 = sp_el0;
            _printk(0x8002826,"rndis_ipa_pipe_connect_notify",0x379,iVar4 + 0x7a8);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to send ECM_CONNECT for rndis\n",
                               "rndis_ipa_pipe_connect_notify",0x379);
            }
            kfree(iVar7);
            goto code_r0x080071d0;
        }
        uVar6 = _raw_spin_lock_irqsave(unaff_x21);
        iVar5 = sym.rndis_ipa_next_state(*(in_x5 + 9),1);
        if (iVar5 == 5) {
            _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
            iVar5 = ___ratelimit(obj.rndis_ipa_pipe_connect_notify._rs.69,"rndis_ipa_pipe_connect_notify");
            if (iVar5 != 0) {
                iVar7 = sp_el0;
                _printk(0x8002eca,"rndis_ipa_pipe_connect_notify",899,iVar7 + 0x7a8);
            }
            if (_segment.ehdr == 0) {
code_r0x080072cc:
                iVar5 = -1;
            }
            else {
                uVar6 = 899;
code_r0x08007068:
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d use init()/disconnect() before connect()\n",
                               "rndis_ipa_pipe_connect_notify",uVar6);
                iVar5 = -1;
            }
        }
        else {
            *(in_x5 + 9) = iVar5;
            _raw_spin_unlock_irqrestore(unaff_x21,uVar6);
            if (_segment.ehdr != 0) {
                if (*(in_x5 + 9) < 5) {
                    pcVar9 = *(*(in_x5 + 9) * 8 + 0x8003d00);
                }
                else {
                    pcVar9 = "Not supported";
                }
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_pipe_connect_notify",
                               0x389,pcVar9);
            }
            if (iVar5 == 4) {
                sym.rndis_ipa_enable_data_path(in_x5);
            }
            else if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue shall be started after open()\n",
                               "rndis_ipa_pipe_connect_notify",0x38e);
            }
            _printk(0x8002df6);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pipe_connect_notify",0x392);
            }
            iVar5 = 0;
        }
    } while( true );
}


// ===== sym.rndis_ipa_next_state @ 0x080073c8 (size 512) =====

uint32_t sym.rndis_ipa_next_state(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 5) {
        uVar6 = 5;
        pcVar4 = "Forbidden";
    //switch table (4 cases) at 0x8000ce0
        switch(*(arg1 * 4 + 0x8000ce0) + 0x8007408) {
        case 0x800741c:
            if (arg2 - 1 < 5) {
                pcVar4 = *((arg2 - 1) * 8 + 0x8003cb0);
                iVar5 = 0x8003c3c;
code_r0x080074c4:
                uVar6 = *(iVar5 + (arg2 - 1) * 4);
                goto code_r0x08007500;
            }
            break;
        case 0x8007480:
            if (arg2 == 4) {
                uVar6 = 1;
                pcVar4 = "Allowed";
                goto code_r0x08007500;
            }
            if (arg2 == 2) {
                uVar6 = 4;
                pcVar4 = "Allowed";
                goto code_r0x08007500;
            }
            break;
        case 0x80074a4:
            if (arg2 - 1 < 5) {
                pcVar4 = *((arg2 - 1) * 8 + 0x8003cd8);
                iVar5 = 0x8003c28;
                goto code_r0x080074c4;
            }
            break;
        case 0x80074d0:
            if (arg2 == 3) {
                uVar6 = 2;
                pcVar4 = "Allowed";
                goto code_r0x08007500;
            }
            if (arg2 == 4) {
                uVar6 = 3;
                pcVar4 = "Allowed";
                goto code_r0x08007500;
            }
            break;
        case 0x8007500:
            goto code_r0x08007500;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.rndis_ipa_next_state._rs,"rndis_ipa_next_state");
        if (iVar1 != 0) {
            iVar5 = sp_el0;
            _printk(0x800339c,"rndis_ipa_next_state",0x8e8,iVar5 + 0x7a8);
        }
        if (_segment.ehdr == 0) {
            return 5;
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d State is not supported\n","rndis_ipa_next_state",0x8e8);
    }
    uVar6 = 5;
    pcVar4 = "Forbidden";
code_r0x08007500:
    if (_segment.ehdr != 0) {
        if (arg1 < 5) {
            pcVar2 = *(arg1 * 8 + 0x8003d00);
        }
        else {
            pcVar2 = "Not supported";
        }
        if (uVar6 < 5) {
            pcVar3 = *(uVar6 * 8 + 0x8003d00);
        }
        else {
            pcVar3 = "Not supported";
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d state transition ( %s -> %s )- %s\n","rndis_ipa_next_state",
                       0x8f1,pcVar2,pcVar3,pcVar4);
        return uVar6;
    }
    return uVar6;
}


// ===== sym.rndis_ipa_msg_free_cb @ 0x080075c8 (size 36) =====

void sym.rndis_ipa_msg_free_cb(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.rndis_ipa_enable_data_path @ 0x080075ec (size 328) =====

void sym.rndis_ipa_enable_data_path(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong uVar7;
    code *pcVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar8 = *(arg1 + 0x58);
    if (pcVar8 == NULL) {
        iVar5 = CONCAT62(*0x8000002,_segment.ehdr);
        if (iVar5 == 0) goto code_r0x08007668;
        pcVar6 = "RNDIS_IPA %s:%d device_ready_notify() not supplied\n";
        uVar7 = 0x612;
    }
    else {
        if (pcVar8 != sym.__typeid__ZTSFvvE_global_addr) {
            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar8,0x8000cc0);
        }
        (*pcVar8)();
        iVar5 = CONCAT62(*0x8000002,_segment.ehdr);
        if (iVar5 == 0) goto code_r0x08007668;
        pcVar6 = "RNDIS_IPA %s:%d USB device_ready_notify() was called\n";
        uVar7 = 0x610;
    }
    ipc_log_string(iVar5,pcVar6,"rndis_ipa_enable_data_path",uVar7);
code_r0x08007668:
    uVar4 = *(*arg1 + 0xd8) - 8;
    _segment.ehdr = uVar4 >> 8 & 0xff | (uVar4 & 0xff00ff) << 8;
    puVar1 = *(*arg1 + 0x3c0) + 0xd0;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (CONCAT62(*0x8000002,_segment.ehdr) != 0) {
        ipc_log_string(CONCAT62(*0x8000002,_segment.ehdr),"RNDIS_IPA %s:%d netif_start_queue() was called\n",
                       "rndis_ipa_enable_data_path",0x618);
    }
    return;
}


// ===== sym.rndis_ipa_pipe_disconnect_notify @ 0x08007734 (size 1188) =====

void sym.rndis_ipa_pipe_disconnect_notify(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t *extraout_x8;
    uint64_t *puVar8;
    ulong *in_x18;
    int64_t unaff_x20;
    uint64_t uVar9;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pipe_disconnect_notify",0x556);
    }
    if (arg1 == 0) {
        iVar6 = sp_el0;
        _printk(0x800272c,"rndis_ipa_pipe_disconnect_notify",0x559,iVar6 + 0x7a8);
        if (_segment.ehdr == 0) {
            uVar5 = 0xffffffea;
            goto code_r0x080079e8;
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d null pointer #ptr\n","rndis_ipa_pipe_disconnect_notify",0x559);
        uVar5 = 0xffffffea;
        goto code_r0x080079e8;
    }
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d private=0x%pK\n","rndis_ipa_pipe_disconnect_notify",0x55c,arg1
                      );
    }
    unaff_x20 = arg1 + 0xe8;
    uVar5 = _raw_spin_lock_irqsave(unaff_x20);
    iVar4 = sym.rndis_ipa_next_state(*(arg1 + 0x48),4);
    _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
    if (iVar4 != 5) {
        if (*(arg1 + 0x1b) != '\0') {
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d canceling xmit-error delayed work\n",
                               "rndis_ipa_pipe_disconnect_notify",0x56b);
            }
            cancel_delayed_work_sync(arg1 + 0x60);
            *(arg1 + 0x1b) = 0;
        }
        netif_carrier_off(*arg1);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d carrier_off notification was sent\n",
                           "rndis_ipa_pipe_disconnect_notify",0x572);
        }
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x24);
        if (iVar6 == 0) {
            uVar5 = 0xfffffff4;
            goto code_r0x080079e8;
        }
        uStack_4c = 0x240014;
        strlcpy(iVar6,*arg1,0x20);
        *(iVar6 + 0x20) = *(*arg1 + 0xd0);
        iVar4 = ipa_send_msg(&uStack_4c,iVar6,sym.rndis_ipa_msg_free_cb.bc8e7500e16eda9aa8de33601c3df750.cfi_jt);
        if (iVar4 != 0) {
            iVar3 = sp_el0;
            _printk(0x8001918,"rndis_ipa_pipe_disconnect_notify",0x581,iVar3 + 0x7a8);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to send ECM_DISCONNECT for rndis\n",
                               "rndis_ipa_pipe_disconnect_notify",0x581);
            }
            kfree(iVar6);
            goto code_r0x080079e4;
        }
        puVar8 = *(*arg1 + 0x3c0) + 0xd0;
        goto code_r0x08007bac;
    }
    iVar4 = ___ratelimit(obj.rndis_ipa_pipe_disconnect_notify._rs,"rndis_ipa_pipe_disconnect_notify");
    if (iVar4 != 0) {
        iVar6 = sp_el0;
        _printk(0x8000e7f,"rndis_ipa_pipe_disconnect_notify",0x565,iVar6 + 0x7a8);
    }
    if (_segment.ehdr == 0) goto code_r0x080079e4;
    uVar5 = 0x565;
    do {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t disconnect before connect\n",
                       "rndis_ipa_pipe_disconnect_notify",uVar5);
code_r0x080079e4:
        do {
            while( true ) {
                uVar5 = 0xffffffff;
code_r0x080079e8:
                while( true ) {
                    iVar6 = sp_el0;
                    if (*(iVar6 + 0x5e0) == iStack_48) {
                        return;
                    }
                    __stack_chk_fail(uVar5);
                    puVar8 = extraout_x8;
code_r0x08007bac:
                    Hint_Prefetch(puVar8,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar8,0x10);
                        if (bVar2) {
                            *puVar8 = *puVar8 | 1;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue stopped\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x587);
                    }
                    uVar9 = *(arg1 + 0x38);
                    *(*arg1 + 0x160) = *(*arg1 + 0x160) + uVar9;
                    *(arg1 + 0x38) = 0;
                    ipa_pm_deactivate_sync(*(arg1 + 0xec));
                    ipa_pm_deregister(*(arg1 + 0xec));
                    iVar6 = _segment.ehdr;
                    *(arg1 + 0xec) = 0xffffffff;
                    if (iVar6 != 0) {
                        ipc_log_string(iVar6,"RNDIS_IPA %s:%d PM was successfully deregistered\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x594);
                    }
                    uVar5 = _raw_spin_lock_irqsave(unaff_x20);
                    iVar4 = sym.rndis_ipa_next_state(*(arg1 + 0x48),4);
                    if (iVar4 == 5) break;
                    *(arg1 + 0x48) = iVar4;
                    _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
                    if (_segment.ehdr != 0) {
                        if (*(arg1 + 0x48) < 5) {
                            pcVar7 = *(*(arg1 + 0x48) * 8 + 0x8003d00);
                        }
                        else {
                            pcVar7 = "Not supported";
                        }
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n",
                                       "rndis_ipa_pipe_disconnect_notify",0x5a1,pcVar7);
                    }
                    _printk(0x80029cb,uVar9 & 0xffffffff);
                    uVar5 = 0;
                    if (_segment.ehdr != 0) {
                        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pipe_disconnect_notify",0x5a6
                                      );
                        uVar5 = 0;
                    }
                }
                _raw_spin_unlock_irqrestore(unaff_x20,uVar5);
                iVar4 = ___ratelimit(obj.rndis_ipa_pipe_disconnect_notify._rs.83,"rndis_ipa_pipe_disconnect_notify");
                if (iVar4 == 0) break;
                iVar6 = sp_el0;
                _printk(0x8000e7f,"rndis_ipa_pipe_disconnect_notify",0x59b,iVar6 + 0x7a8);
                if (_segment.ehdr != 0) goto code_r0x080079cc;
            }
        } while (_segment.ehdr == 0);
code_r0x080079cc:
        uVar5 = 0x59b;
    } while( true );
}


// ===== sym.rndis_ipa_cleanup @ 0x08007bd8 (size 1156) =====

void sym.rndis_ipa_cleanup(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_cleanup",0x5c9), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d private=0x%pK\n","rndis_ipa_cleanup",0x5cb,arg1);
    }
    if (arg1 == 0) {
        iVar1 = sp_el0;
        _printk(0x800272c,"rndis_ipa_cleanup",0x5ce,iVar1 + 0x7a8);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d null pointer #ptr\n";
        uVar4 = 0x5ce;
        goto code_r0x08007e84;
    }
    iVar1 = arg1 + 0xe8;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    iVar3 = sym.rndis_ipa_next_state(*(arg1 + 0x48),5);
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    if (iVar3 == 5) {
        iVar3 = ___ratelimit(obj.rndis_ipa_cleanup._rs,"rndis_ipa_cleanup");
        if (iVar3 != 0) {
            iVar1 = sp_el0;
            _printk(0x8001fb1,"rndis_ipa_cleanup",0x5d8,iVar1 + 0x7a8);
        }
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d use disconnect()before clean()\n";
        uVar4 = 0x5d8;
        goto code_r0x08007e84;
    }
    if (_segment.ehdr == 0) {
        uVar4 = *arg1;
    }
    else {
        if (*(arg1 + 0x48) < 5) {
            pcVar5 = *(*(arg1 + 0x48) * 8 + 0x8003d00);
        }
        else {
            pcVar5 = "Not supported";
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_cleanup",0x5dd,pcVar5);
        uVar4 = *arg1;
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_deregister_properties",0x79d);
        }
    }
    iVar3 = ipa3_deregister_intf(uVar4);
    if (iVar3 != 0) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Fail on Tx prop deregister\n",
                           "rndis_ipa_deregister_properties",0x7a1);
        }
        iVar1 = sp_el0;
        _printk(0x80026a0,"rndis_ipa_cleanup",0x5e1,iVar1 + 0x7a8);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d Fail to deregister Tx/Rx properties\n";
        uVar4 = 0x5e1;
        goto code_r0x08007e84;
    }
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_deregister_properties",0x7a4),
       _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d deregister Tx/Rx properties was successful\n",
                       "rndis_ipa_cleanup",0x5e4);
    }
    if (*(arg1 + 0x100) != '\0') {
        iVar3 = ipa_hdrs_hpc_destroy(*(arg1 + 0x104));
        if (iVar3 == 0) {
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d ipa_hdrs_hpc_destroy success\n";
                uVar4 = 0x5eb;
code_r0x08007da4:
                ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
            }
        }
        else {
            iVar2 = sp_el0;
            _printk(0x800343f,"rndis_ipa_cleanup",0x5e9,iVar2 + 0x7a8);
            if (_segment.ehdr != 0) {
                pcVar5 = "RNDIS_IPA %s:%d ipa_hdrs_hpc_destroy failed\n";
                uVar4 = 0x5e9;
                goto code_r0x08007da4;
            }
        }
    }
    iVar3 = sym.rndis_ipa_hdrs_destroy(arg1);
    if (iVar3 == 0) {
        if (_segment.ehdr != 0) {
            pcVar5 = "RNDIS_IPA %s:%d RNDIS headers were removed from IPA core\n";
            uVar4 = 0x5f3;
code_r0x08007dd0:
            ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
        }
    }
    else {
        iVar2 = sp_el0;
        _printk(0x8002530,"rndis_ipa_cleanup",0x5f1,iVar2 + 0x7a8);
        if (_segment.ehdr != 0) {
            pcVar5 = "RNDIS_IPA %s:%d Failed removing RNDIS headers from IPA core. Continue anyway\n";
            uVar4 = 0x5f1;
            goto code_r0x08007dd0;
        }
    }
    debugfs_remove(*(arg1 + 0x20));
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d debugfs remove was done\n","rndis_ipa_cleanup",0x5f6);
    }
    unregister_netdev(*arg1);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netdev unregistered\n","rndis_ipa_cleanup",0x5f9);
    }
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    iVar3 = sym.rndis_ipa_next_state(*(arg1 + 0x48),5);
    if (iVar3 == 5) {
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
        iVar3 = ___ratelimit(obj.rndis_ipa_cleanup._rs.98,"rndis_ipa_cleanup");
        if (iVar3 != 0) {
            iVar1 = sp_el0;
            _printk(0x8001fb1,"rndis_ipa_cleanup",0x600,iVar1 + 0x7a8);
        }
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d use disconnect()before clean()\n";
        uVar4 = 0x600;
    }
    else {
        *(arg1 + 0x48) = iVar3;
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
        free_netdev(*arg1);
        _printk(0x8003160);
        if (_segment.ehdr == 0) {
            return;
        }
        pcVar5 = "RNDIS_IPA %s:%d end\n";
        uVar4 = 0x608;
    }
code_r0x08007e84:
    ipc_log_string(_segment.ehdr,pcVar5,"rndis_ipa_cleanup",uVar4);
    return;
}


// ===== sym.trace_raw_output_rndis_netif_ni @ 0x0800805c (size 108) =====

void sym.trace_raw_output_rndis_netif_ni(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rndis_tx_dp @ 0x080080c8 (size 108) =====

void sym.trace_raw_output_rndis_tx_dp(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rndis_status_rcvd @ 0x08008134 (size 108) =====

void sym.trace_raw_output_rndis_status_rcvd(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"proto =%lu\n\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.rndis_ipa_open @ 0x080081a0 (size 444) =====

ulong sym.rndis_ipa_open(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_open",0x3af);
    }
    iVar1 = arg1 + 0xae8;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    iVar2 = sym.rndis_ipa_next_state(*(arg1 + 0xa48),2);
    if (iVar2 == 5) {
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        iVar2 = ___ratelimit(obj.rndis_ipa_open._rs,"rndis_ipa_open");
        if (iVar2 != 0) {
            iVar1 = sp_el0;
            _printk(0x8003180,"rndis_ipa_open",0x3b8,iVar1 + 0x7a8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t bring driver up before initialize\n","rndis_ipa_open"
                           ,0x3b8);
        }
        uVar3 = 0xffffffff;
    }
    else {
        *(arg1 + 0xa48) = iVar2;
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        if (_segment.ehdr != 0) {
            if (*(arg1 + 0xa48) < 5) {
                pcVar4 = *(*(arg1 + 0xa48) * 8 + 0x8003d00);
            }
            else {
                pcVar4 = "Not supported";
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_open",0x3c0,pcVar4);
        }
        if (iVar2 == 4) {
            sym.rndis_ipa_enable_data_path(arg1 + 0xa00);
        }
        else if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue shall be started after connect()\n","rndis_ipa_open",
                           0x3c5);
        }
        _printk(0x8000eba);
        uVar3 = 0;
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_open",0x3c9);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.rndis_ipa_stop @ 0x0800835c (size 372) =====

ulong sym.rndis_ipa_stop(int64_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_stop",0x523);
    }
    iVar1 = arg1 + 0xae8;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    iVar5 = sym.rndis_ipa_next_state(*(arg1 + 0xa48),3);
    if (iVar5 == 5) {
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d can\'t do network interface down without up\n",
                           "rndis_ipa_stop",0x52a);
        }
        uVar6 = 0xffffffff;
    }
    else {
        *(arg1 + 0xa48) = iVar5;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        puVar2 = *(arg1 + 0x3c0) + 0xd0;
        Hint_Prefetch(puVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
                *puVar2 = *puVar2 | 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        _printk(0x8000d44);
        uVar6 = 0;
        if (_segment.ehdr != 0) {
            if (*(arg1 + 0xa48) < 5) {
                pcVar7 = *(*(arg1 + 0xa48) * 8 + 0x8003d00);
            }
            else {
                pcVar7 = "Not supported";
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Driver state: %s\n","rndis_ipa_stop",0x535,pcVar7);
            uVar6 = 0;
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_stop",0x537);
                uVar6 = 0;
            }
        }
    }
    return uVar6;
}


// ===== sym.rndis_ipa_start_xmit @ 0x080084d0 (size 1456) =====

int sym.rndis_ipa_start_xmit(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    char *pcVar8;
    ulong uVar9;
    int16_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg2 + 0x3c0);
    iVar7 = *(arg1 + 0x70);
    if (*(iVar11 + 200) != _eth_mac_addr) {
        *(iVar11 + 200) = _eth_mac_addr;
        iVar11 = *(arg2 + 0x3c0);
    }
    if ((*(iVar11 + 0xd0) & 1) == 0) {
        if (*(arg2 + 0xa10) != '\0') {
            sym.rndis_ipa_dump_skb(arg1);
        }
        if (*(arg2 + 0xa48) != 4) {
            iVar7 = ___ratelimit(obj.rndis_ipa_start_xmit._rs.111,"rndis_ipa_start_xmit");
            if (iVar7 != 0) {
                iVar11 = sp_el0;
                _printk(0x8001a80,"rndis_ipa_start_xmit",0x403,iVar11 + 0x7a8);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Missing pipe connected and/or iface up\n",
                               "rndis_ipa_start_xmit",0x403);
                return 0x10;
            }
            return 0x10;
        }
        if ((*(*(arg1 + 0x10) + 0xa08) == '\0') ||
           (((*(arg1 + 0xb0) == 8 && (*(*(arg1 + 0x10) + 0xa19) == '\0')) &&
            (*(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 9) == '\x01')))) {
            iVar6 = ipa_pm_activate(*(arg2 + 0xaec));
            if (iVar6 != 0) {
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Failed activate PM client\n","rndis_ipa_start_xmit"
                                   ,0x411);
                }
                puVar1 = *(arg2 + 0x3c0) + 0xd0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                iVar7 = 0x10;
                goto joined_r0x08008748;
            }
            piVar2 = arg2 + 0xa38;
            if (*(arg2 + 0xa3c) <= *piVar2) {
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Outstanding high boundary reached (%d)\n",
                                   "rndis_ipa_start_xmit",0x419);
                }
                puVar1 = *(arg2 + 0x3c0) + 0xd0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = *puVar1 | 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (_segment.ehdr != 0) {
                    pcVar8 = "RNDIS_IPA %s:%d send  queue was stopped\n";
                    uVar9 = 0x41b;
                    goto code_r0x08008688;
                }
                goto code_r0x0800868c;
            }
            if ((*(arg2 + 0xb00) == '\0') || ((*(arg2 + 0xe0) & 0x2001d0000) == 0)) {
                arg1 = sym.rndis_encapsulate_skb(arg1,arg2 + 0xa00);
            }
            else if (*(arg1 + 0xb0) == -0x227a) {
                cVar4 = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 6);
                if ((cVar4 == '\x11') || (cVar4 == '\x06')) {
                    arg1 = qmap_encapsulate_skb(arg1,obj.qmap_template_hdr);
                    iVar11 = *(arg1 + 0xd0);
                    uVar3 = *(arg1 + 0xcc);
                    iVar10 = *(arg2 + 0xd8) + -0x3c;
                    goto code_r0x080086ec;
                }
            }
            else if ((*(arg1 + 0xb0) == 8) &&
                    ((cVar4 = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 9), cVar4 == '\x11' || (cVar4 == '\x06')))) {
                arg1 = qmap_encapsulate_skb(arg1,obj.qmap_template_hdr);
                iVar11 = *(arg1 + 0xd0);
                uVar3 = *(arg1 + 0xcc);
                iVar10 = *(arg2 + 0xd8) + -0x28;
code_r0x080086ec:
                *(iVar11 + uVar3 + 4) = iVar10;
            }
            if (iVar7 == *(arg1 + 0x70)) {
                *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 4) = 0;
                arg1 = sym.rndis_encapsulate_skb(arg1,arg2 + 0xa00);
            }
            iVar7 = ipa_tx_dp(0x13,arg1,0);
            if (iVar7 != 0) {
                iVar11 = sp_el0;
                _printk(0x8002c9d,"rndis_ipa_start_xmit",0x446,iVar11 + 0x7a8,iVar7);
                if (_segment.ehdr != 0) {
                    ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d ipa transmit failed (%d)\n","rndis_ipa_start_xmit",
                                   0x446,iVar7);
                }
                sym.rndis_ipa_xmit_error(arg1);
                goto code_r0x0800868c;
            }
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar7 = 0;
        }
        else {
            __dev_kfree_skb_any(arg1,1);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet got filtered out on Tx path\n",
                               "rndis_ipa_start_xmit",0x409);
            }
            iVar7 = 0;
            *(arg2 + 0xa0c) = *(arg2 + 0xa0c) + 1;
        }
    }
    else {
        iVar7 = ___ratelimit(obj.rndis_ipa_start_xmit._rs,"rndis_ipa_start_xmit");
        if (iVar7 != 0) {
            iVar11 = sp_el0;
            _printk(0x8001198,"rndis_ipa_start_xmit",0x3fb,iVar11 + 0x7a8);
        }
        if (_segment.ehdr != 0) {
            pcVar8 = "RNDIS_IPA %s:%d interface queue is stopped\n";
            uVar9 = 0x3fb;
code_r0x08008688:
            ipc_log_string(_segment.ehdr,pcVar8,"rndis_ipa_start_xmit",uVar9);
        }
code_r0x0800868c:
        iVar7 = 0x10;
    }
    if (*(arg2 + 0xa38) == 0) {
        ipa_pm_deferred_deactivate(*(arg2 + 0xaec));
    }
joined_r0x08008748:
    if (_segment.ehdr != 0) {
        pcVar8 = 0x8002588;
        if (iVar7 != 0) {
            pcVar8 = "FAIL";
        }
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet Tx done - %s\n","rndis_ipa_start_xmit",0x458,pcVar8);
    }
    return iVar7;
}


// ===== sym.rndis_ipa_tx_timeout @ 0x08008a98 (size 140) =====

void sym.rndis_ipa_tx_timeout(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar2 = *(arg1 + 0xa38);
    _printk(0x8002f4e,"rndis_ipa_tx_timeout",0x4b1,iVar1 + 0x7a8,uVar2 & 0xffffffff);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d possible IPA stall was detected, %d outstanding\n",
                       "rndis_ipa_tx_timeout",0x4b1,uVar2 & 0xffffffff);
    }
    *(arg1 + 0x150) = *(arg1 + 0x150) + 1;
    return;
}


// ===== sym.rndis_ipa_get_stats @ 0x08008b28 (size 16) =====

int64_t sym.rndis_ipa_get_stats(int64_t arg1)

{
    return arg1 + 0x128;
}


// ===== sym.rndis_ipa_dump_skb @ 0x08008b38 (size 208) =====

void sym.rndis_ipa_dump_skb(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dump start for skb->len=%d\n","rndis_ipa_dump_skb",0x914
                       ,*(arg1 + 0x70));
    }
    if (3 < *(arg1 + 0x70)) {
        uVar2 = 0;
        do {
            uVar1 = *(iVar3 + uVar2 * 4);
            _printk(0x80031c3,uVar2 & 0xffffffff,uVar1,uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff,
                    uVar1 >> 0x18);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x70) >> 2);
    }
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d packet dump ended for skb->len=%d\n","rndis_ipa_dump_skb",0x91e
                      );
    }
    return;
}


// ===== sym.rndis_encapsulate_skb @ 0x08008c08 (size 412) =====

int64_t sym.rndis_encapsulate_skb(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    int iVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x70);
    if (*(arg1 + 0xd8) - *(arg1 + 0xd0) < 0x2c) {
        iVar8 = skb_copy_expand(arg1,0x2c,0,0xa20);
        if (iVar8 == 0) {
            iVar6 = ___ratelimit(obj.rndis_encapsulate_skb._rs,"rndis_encapsulate_skb");
            if (iVar6 != 0) {
                iVar8 = sp_el0;
                _printk(0x80031e5,"rndis_encapsulate_skb",0x7f1,iVar8 + 0x7a8);
            }
            if (_segment.ehdr == 0) {
                return arg1;
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d no memory for skb expand\n","rndis_encapsulate_skb",0x7f1);
            return arg1;
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d skb expanded. old %pK new %pK\n","rndis_encapsulate_skb",
                           0x7f5,arg1,iVar8);
        }
        __dev_kfree_skb_any(arg1,1);
        cVar1 = *(arg2 + 0xf0);
        arg1 = iVar8;
    }
    else {
        cVar1 = *(arg2 + 0xf0);
    }
    if (((cVar1 != '\0') && (*(arg1 + 0xb0) != 0x81)) && (_segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d ether_type != ETH_P_8021Q && vlan, prot = 0x%X\n",
                       "rndis_encapsulate_skb",0x7fe);
    }
    puVar7 = skb_push(arg1,0x2c);
    uVar5 = *0x80039e0;
    uVar4 = *0x80039d8;
    uVar2 = *0x80039c0;
    *puVar7 = _obj.rndis_template_hdr;
    puVar7[1] = uVar2;
    uVar3 = *0x80039d0;
    uVar2 = *0x80039c8;
    *(puVar7 + 5) = uVar5;
    *(puVar7 + 4) = iVar6 + 0x2c;
    *(puVar7 + 0xc) = iVar6;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar7[4] = uVar4;
    return arg1;
}


// ===== sym.rndis_ipa_xmit_error @ 0x08008da4 (size 580) =====

void sym.rndis_ipa_xmit_error(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    auStack_3c[0] = 0;
    iVar7 = *(arg1 + 0x10);
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_xmit_error",0x622), _segment.ehdr != 0)) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d starting Tx-queue backoff\n","rndis_ipa_xmit_error",0x624);
    }
    puVar6 = *(*(iVar7 + 0xa00) + 0x3c0) + 0xd0;
    while( true ) {
        Hint_Prefetch(puVar6,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(puVar6,0x10);
            if (bVar2) {
                *puVar6 = *puVar6 | 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d netif_stop_queue was called\n","rndis_ipa_xmit_error",0x627
                          );
        }
        skb_pull(arg1,0x2c);
        *(*(iVar7 + 0xa00) + 0x150) = *(*(iVar7 + 0xa00) + 0x150) + 1;
        get_random_bytes(auStack_3c,1);
        uVar4 = __msecs_to_jiffies(*(iVar7 + 0xa44) + auStack_3c[0]);
        uVar5 = queue_delayed_work_on(0x20,_event_triggers_call,iVar7 + 0xa60,uVar4);
        if ((uVar5 & 1) == 0) {
            iVar3 = sp_el0;
            _printk(0x80017c9,"rndis_ipa_xmit_error",0x633,iVar3 + 0x7a8);
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d fail to schedule delayed work\n","rndis_ipa_xmit_error"
                               ,0x633);
            }
            puVar6 = *(*(iVar7 + 0xa00) + 0x3c0) + 0xd0;
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar2) {
                    *puVar6 = *puVar6 & 0xfffffffffffffffe;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
        }
        else {
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d work scheduled to start Tx-queue in %d msec\n",
                               "rndis_ipa_xmit_error",0x639,*(iVar7 + 0xa44) + auStack_3c[0]);
            }
            *(iVar7 + 0xa1b) = 1;
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_xmit_error",0x63d);
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        puVar6 = extraout_x8;
    }
    return;
}


// ===== sym.rndis_ipa_pm_cb @ 0x08008fe8 (size 444) =====

void sym.rndis_ipa_pm_cb(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_pm_cb",0x7ad);
    }
    if (arg2 == 0) {
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d Resource Granted\n","rndis_ipa_pm_cb",0x7b4);
        }
        iVar6 = *(*arg1 + 0x3c0);
        if ((*(iVar6 + 0xd0) & 1) == 0) {
            if (_segment.ehdr == 0) {
                return;
            }
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d queue already awake\n","rndis_ipa_pm_cb",0x7ba);
        }
        else {
            if (_segment.ehdr != 0) {
                ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d starting queue\n","rndis_ipa_pm_cb",0x7b7);
                iVar6 = *(*arg1 + 0x3c0);
            }
            puVar1 = iVar6 + 0xd0;
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
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_pm_cb",0x7bd);
        }
        return;
    }
    iVar5 = ___ratelimit(obj.rndis_ipa_pm_cb._rs,"rndis_ipa_pm_cb");
    if (iVar5 != 0) {
        iVar6 = sp_el0;
        _printk(0x8001ce4,"rndis_ipa_pm_cb",0x7b0,iVar6 + 0x7a8,arg2 & 0xffffffff);
    }
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d unexpected event %d\n","rndis_ipa_pm_cb",0x7b0,
                       arg2 & 0xffffffff);
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8009074);
    (*pcVar4)();
}


// ===== sym.rndis_ipa_debugfs_atomic_read @ 0x080091a4 (size 252) =====

ulong sym.rndis_ipa_debugfs_atomic_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    puVar5 = *(arg1 + 0xd8);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_read",0x9f3);
    }
    iVar2 = scnprintf(&stack0xffffffffffffffb4,4,0x80024ba,*puVar5);
    if (_segment.ehdr != 0) {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_read",0x9f9);
    }
    uVar3 = simple_read_from_buffer(arg2,arg3,arg4,&stack0xffffffffffffffb4,iVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = 0x800929c;
    iVar4 = *(auVar6._0_8_ + 0x2d8);
    if (_segment.ehdr == 0) {
        *(auVar6._8_8_ + 0xd8) = iVar4 + 0x38;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_open",0x9e3);
        iVar1 = _segment.ehdr;
        *(auVar6._8_8_ + 0xd8) = iVar4 + 0x38;
        if (iVar1 != 0) {
            ipc_log_string(iVar1,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_open",0x9e7);
        }
    }
    return 0;
}


// ===== sym.rndis_ipa_debugfs_atomic_open @ 0x080092a0 (size 152) =====

ulong sym.rndis_ipa_debugfs_atomic_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x2d8);
    if (_segment.ehdr == 0) {
        *(arg2 + 0xd8) = iVar2 + 0x38;
    }
    else {
        ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d begin\n","rndis_ipa_debugfs_atomic_open",0x9e3);
        iVar1 = _segment.ehdr;
        *(arg2 + 0xd8) = iVar2 + 0x38;
        if (iVar1 != 0) {
            ipc_log_string(iVar1,"RNDIS_IPA %s:%d end\n","rndis_ipa_debugfs_atomic_open",0x9e7);
        }
    }
    return 0;
}


// ===== sym.rndis_ipa_debugfs_aggr_write @ 0x08009338 (size 120) =====

int64_t sym.rndis_ipa_debugfs_aggr_write(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        arg2 = -0xe;
    }
    else {
        iVar1 = ipa3_cfg_ep(*(*(arg1 + 0xd8) + 0x30),obj.ipa_to_usb_ep_cfg);
        if (iVar1 == 0) {
            _printk(0x8001b9f);
        }
        else {
            _printk(0x8001b74);
            arg2 = iVar1;
        }
    }
    return arg2;
}


// ===== sym.rndis_ipa_debugfs_aggr_open @ 0x080093b0 (size 24) =====

ulong sym.rndis_ipa_debugfs_aggr_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2d8);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080093c8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800940c

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
    //switch table (4 cases) at 0x8003717
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009420);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08009494 (size 152) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = ipc_log_context_create(0x32,"ipa_rndis",0x10000);
    if (_segment.ehdr == 0) {
        iVar1 = sp_el0;
        _printk(0x8002d4a,"rndis_ipa_init_module",0xa03,iVar1 + 0x7a8);
        if (_segment.ehdr != 0) {
            ipc_log_string(_segment.ehdr,"RNDIS_IPA %s:%d failed to create IPC log, continue...\n",
                           "rndis_ipa_init_module",0xa03);
        }
    }
    _printk(0x80020df);
    return 0;
}


// ===== sym.cleanup_module @ 0x0800952c (size 72) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        ipc_log_context_destroy();
    }
    _segment.ehdr = 0;
    _printk(0x8001e70);
    return;
}

