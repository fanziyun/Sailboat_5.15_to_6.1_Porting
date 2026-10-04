// decompiled from ipa_fmwk by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 4304) =====

//WARNING: Switch with 1 destination removed at 0x0800e7f8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x4b8d948ea2118bb) {
        if (arg1 < -0x3b35e4bb0d93c2c0) {
            if (arg1 < -0x4ac60cfc30c6e025) {
                if (arg1 < -0x65e4dca5b2d36525) {
                    if (arg1 < -0x750d6a691c7f6384) {
                        if (arg1 == -0x7a109b90d4ad9d3c) {
                            pcVar2 = sym.__typeid__ZTSFijyE_global_addr;
                        }
                        else if (arg1 == -0x788a8bba06416a48) {
                            pcVar2 = sym.ipa_fmwk_register_ipa_eth.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x7535e6fdfc31dd3e) goto code_r0x0800e7b8;
                            pcVar2 = 
                            sym.__typeid__ZTSFiP27ipa_wigig_conn_rx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr;
                        }
                    }
                    else {
                        if (arg1 == -0x750d6a691c7f6384) {
                            pcVar2 = sym.__typeid__ZTSFijjP19ipa_wdi_buffer_infoE_global_addr;
                            goto code_r0x0800607c;
                        }
                        if (arg1 == -0x720bb7ded5d603b8) {
                            pcVar2 = sym.ipa_fmwk_register_uc_offload.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x6c171803d92dfc23) goto code_r0x0800e7b8;
                            pcVar2 = sym.__typeid__ZTSFb19ipa_eth_client_typeiE_global_addr;
                        }
                    }
                }
                else if (arg1 < -0x5e00d8834739d40c) {
                    if (arg1 == -0x65e4dca5b2d36525) {
                        pcVar2 = 
                        sym.__typeid__ZTSFiP39ipa_wlan_opt_dp_rsrv_filter_req_msg_v01P40ipa_wlan_opt_dp_rsrv_filter_resp_msg_v01E_global_addr
                        ;
                    }
                    else if (arg1 == -0x606c77755906d26e) {
                        pcVar2 = sym.__typeid__ZTSFiP15ipa_ioc_del_hdrE_global_addr;
                    }
                    else {
                        if (arg1 != -0x5e77c719aa658473) goto code_r0x0800e7b8;
                        pcVar2 = sym.ipa_fmwk_register_ipa.cfi_jt;
                    }
                }
                else {
                    if (arg1 != -0x5e00d8834739d40c) {
                        if (arg1 == -0x53c887a672ae5243) {
                            if ((pcVar1 + -0x8006430 >> 3 | pcVar1 << 0x3d) < 0x16) {
                                return;
                            }
                            goto code_r0x0800e7b8;
                        }
                        if (arg1 != -0x51aea54eb8723073) goto code_r0x0800e7b8;
                        pcVar2 = sym.__typeid__ZTSFiP22ipa_wdi_conn_in_paramsP23ipa_wdi_conn_out_paramsE_global_addr;
                        goto code_r0x0800607c;
                    }
                    pcVar2 = sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr;
                }
            }
            else if (arg1 < -0x433e59f142269592) {
                if (arg1 < -0x469b6f9911aa4066) {
                    if (arg1 == -0x4ac60cfc30c6e025) {
                        pcVar2 = sym.ipa_fmwk_register_ipa_wdi3.cfi_jt;
                    }
                    else if (arg1 == -0x4a132a03b9c7af12) {
                        pcVar2 = sym.__typeid__ZTSFi13ipa_aggr_modeE_global_addr;
                    }
                    else {
                        if (arg1 != -0x4715a41a44637b06) goto code_r0x0800e7b8;
                        pcVar2 = sym.__typeid__ZTSFiP15ipa_ioc_get_hdrE_global_addr;
                    }
                }
                else {
                    if (arg1 == -0x469b6f9911aa4066) {
                        pcVar2 = sym.__typeid__ZTSFi15ipa_client_typeE_global_addr;
code_r0x08005f64:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                            return;
                        }
                        goto code_r0x0800e7b8;
                    }
                    if (arg1 == -0x456d7882bd605a7a) {
                        pcVar2 = sym.__typeid__ZTSFiP19ipa_mhi_init_paramsE_global_addr;
                    }
                    else {
                        if (arg1 != -0x44a3038f9fc743bb) goto code_r0x0800e7b8;
                        pcVar2 = sym.__typeid__ZTSFiyyiPFvPvES_E_global_addr;
                    }
                }
            }
            else if (arg1 < -0x4021b0b76fbc91b9) {
                if (arg1 == -0x433e59f142269592) {
                    pcVar2 = sym.__typeid__ZTSFiP20ipa_wdi_perf_profileE_global_addr;
                }
                else if (arg1 == -0x42b02e81cef4e03c) {
                    pcVar2 = sym.__typeid__ZTSFiP26ipa_uc_offload_intf_paramsP25ipa_uc_offload_out_paramsE_global_addr;
                }
                else {
                    if (arg1 != -0x42553b148ac58796) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFi15ipa_client_typePjE_global_addr;
                }
            }
            else if (arg1 == -0x4021b0b76fbc91b9) {
                pcVar2 = sym.__typeid__ZTSFvP11ipa_rx_dataE_global_addr;
            }
            else if (arg1 == -0x3e9232ffeb5182a4) {
                pcVar2 = sym.__typeid__ZTSFb17ipa_usb_teth_protE_global_addr;
            }
            else {
                if (arg1 != -0x3d483cf1fac2e042) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFiP28ipa_wigig_reg_intf_in_paramsE_global_addr;
            }
        }
        else if (arg1 < -0x2ebfc77204eacd86) {
            if (arg1 < -0x333264aeae0af6f6) {
                if (arg1 < -0x37bda11d18dd9df9) {
                    if (arg1 == -0x3b35e4bb0d93c2c0) {
                        pcVar2 = sym.__typeid__ZTSFijP20ipa_wdi_perf_profileE_global_addr;
                    }
                    else if (arg1 == -0x3b13e6921afcd23b) {
                        pcVar2 = sym.ipa_register_ipa_ready_cb.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x38a958634f206fcf) goto code_r0x0800e7b8;
                        pcVar2 = sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffP11ipa_tx_metaE_global_addr;
                    }
                }
                else if (arg1 == -0x37bda11d18dd9df9) {
                    pcVar2 = sym.__typeid__ZTSFiP17ipa_wdi_in_paramsP18ipa_wdi_out_paramsE_global_addr;
                }
                else if (arg1 == -0x359c1f0e7410ca22) {
                    pcVar2 = sym.__typeid__ZTSFiP23ipa_qdss_conn_in_paramsP24ipa_qdss_conn_out_paramsE_global_addr;
                }
                else {
                    if (arg1 != -0x339dc34ce031c550) goto code_r0x0800e7b8;
                    pcVar2 = 
                    sym.__typeid__ZTSFi17ipa_usb_teth_protP19ipa_usb_teth_paramsPFi20ipa_usb_notify_eventPvES3_E_global_addr
                    ;
                }
            }
            else if (arg1 < -0x315ce073b0edafc3) {
                if (arg1 != -0x333264aeae0af6f6) {
                    if (arg1 == -0x332180cce149c010) {
                        pcVar2 = sym.__typeid__ZTSFiPKcE_global_addr;
code_r0x080060bc:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                            return;
                        }
                        goto code_r0x0800e7b8;
                    }
                    if (arg1 != -0x321b091d7dae461b) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP15ipa_wdi_bw_infoE_global_addr;
                    goto code_r0x0800607c;
                }
                pcVar2 = sym.__typeid__ZTSFi14ipa_mhi_mstateE_global_addr;
            }
            else if (arg1 == -0x315ce073b0edafc3) {
                pcVar2 = sym.__typeid__ZTSFijjE_global_addr;
            }
            else if (arg1 == -0x301d1425c9bb66a5) {
                pcVar2 = sym.__typeid__ZTSFiP24ipa_wigig_init_in_paramsP25ipa_wigig_init_out_paramsE_global_addr;
            }
            else {
                if (arg1 != -0x2fba115d4c60459b) goto code_r0x0800e7b8;
                pcVar2 = 
                sym.__typeid__ZTSFiP29ipa_uc_offload_conn_in_paramsP30ipa_uc_offload_conn_out_paramsE_global_addr;
            }
        }
        else if (arg1 < -0x100c34822c0db9d1) {
            if (-0x1881311bd44a0e7b < arg1) {
                if (arg1 == -0x1881311bd44a0e7a) {
                    pcVar2 = sym.__typeid__ZTSFijj17ipa_usb_teth_protE_global_addr;
                }
                else {
                    if (arg1 == -0x16dc7421abc5d041) {
                        pcVar2 = sym.__typeid__ZTSFiP18ipa_smmu_in_paramsP19ipa_smmu_out_paramsE_global_addr;
                        goto code_r0x080060a4;
                    }
                    if (arg1 != -0x15e501f0129ef245) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP23IpaHwStatsWDIInfoData_tE_global_addr;
                }
                goto code_r0x0800607c;
            }
            if (arg1 == -0x2ebfc77204eacd86) {
                pcVar2 = sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffE_global_addr;
            }
            else {
                if (arg1 == -0x269f0ca40a294141) {
                    pcVar2 = sym.__typeid__ZTSFiP7sk_buffE_global_addr;
                    goto code_r0x0800607c;
                }
                if (arg1 != -0x22723ec3fd728978) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFiP14ipa_eth_clientP20ipa_eth_perf_profileE_global_addr;
            }
        }
        else {
            if (-0xd7f367b57359a24 < arg1) {
                if (arg1 == -0xd7f367b57359a23) {
                    pcVar2 = sym.__typeid__ZTSFiPFvPvES_S1_S_PFvS_S_ES_E_global_addr;
                }
                else {
                    if (arg1 == -0xbae421f364cde8f) {
                        pcVar2 = sym.ipa_fmwk_register_ipa_usb.cfi_jt;
                        goto code_r0x080060a4;
                    }
                    if (arg1 != -0x5d4235f3fa1286f) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP13ipa_eth_readyE_global_addr;
                }
                goto code_r0x0800607c;
            }
            if (arg1 == -0x100c34822c0db9d1) {
                pcVar2 = sym.__typeid__ZTSFiP12ipa_msg_metaPvPFvS1_jjEE_global_addr;
            }
            else {
                if (arg1 != -0xe5acf047707e039) {
                    if (arg1 != -0xdb474a523921af2) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP14ipa_eth_clientE_global_addr;
                    goto code_r0x0800607c;
                }
                pcVar2 = sym.__typeid__ZTSFiP22ipa_sys_connect_paramsPjE_global_addr;
            }
        }
    }
    else if (arg1 < 0x4751ceb51a2067b1) {
        if (arg1 < 0x14f5cee72df96cd4) {
            if (arg1 < 0x687703c03e071df) {
                if (0x16160375c26fc4 < arg1) {
                    if (arg1 == 0x16160375c26fc5) {
                        pcVar2 = sym.__typeid__ZTSFibE_global_addr;
                    }
                    else {
                        if (arg1 == 0x2b3a43e29242445) {
                            if ((pcVar1 + -0x80064f0 >> 3 | pcVar1 << 0x3d) < 0x13) {
                                return;
                            }
                            goto code_r0x0800e7b8;
                        }
                        if (arg1 != 0x3236203519f56f4) goto code_r0x0800e7b8;
                        pcVar2 = sym.__typeid__ZTSFijbE_global_addr;
                    }
                    goto code_r0x0800607c;
                }
                if (arg1 == -0x4b8d948ea2118bb) {
                    pcVar2 = 
                    sym.__typeid__ZTSFiP38ipa_wlan_opt_dp_add_filter_req_msg_v01P45ipa_wlan_opt_dp_add_filter_complt_ind_msg_v01E_global_addr
                    ;
                }
                else if (arg1 == -0x383c3508b7c38c8) {
                    pcVar2 = sym.__typeid__ZTSFiP20ipa_mhi_start_paramsE_global_addr;
                }
                else {
                    if (arg1 != 0x175e2e05f5757) goto code_r0x0800e7b8;
                    pcVar2 = 
                    sym.__typeid__ZTSFijPFiPvP36ipa_wdi_opt_dpath_flt_rsrv_cb_paramsEPFiS_EPFiS_P35ipa_wdi_opt_dpath_flt_add_cb_paramsEPFiS_P35ipa_wdi_opt_dpath_flt_rem_cb_paramsEE_global_addr
                    ;
                }
            }
            else if (arg1 < 0xf8ea10d0b8f3433) {
                if (arg1 == 0x687703c03e071df) {
                    pcVar2 = 
                    sym.__typeid__ZTSFiP41ipa_wlan_opt_dp_remove_filter_req_msg_v01P48ipa_wlan_opt_dp_remove_filter_complt_ind_msg_v01E_global_addr
                    ;
                }
                else if (arg1 == 0xdc8216d8c509147) {
                    pcVar2 = sym.__typeid__ZTSFPK17ipa_gsi_ep_config15ipa_client_typeE_global_addr;
                }
                else {
                    if (arg1 != 0xed8b647fa99ae40) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFijPK15ipa_ep_cfg_ctrlE_global_addr;
                }
            }
            else if (arg1 == 0xf8ea10d0b8f3433) {
                pcVar2 = sym.__typeid__ZTSFiPcE_global_addr;
            }
            else if (arg1 == 0x1315cc8f74eef2ce) {
                pcVar2 = sym.__typeid__ZTSFiP32ipa_wigig_conn_rx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr
                ;
            }
            else {
                if (arg1 != 0x14a351453d1a4144) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFiP22ipa_mhi_connect_paramsPjE_global_addr;
            }
        }
        else if (arg1 < 0x2bcd72afeafc1622) {
            if (arg1 < 0x1996e45107fc45ff) {
                if (arg1 == 0x14f5cee72df96cd4) {
                    pcVar2 = sym.__typeid__ZTSFv20ipa_uc_offload_protoE_global_addr;
                }
                else if (arg1 == 0x16dd579837fbcad0) {
                    pcVar2 = sym.__typeid__ZTSFiP15ipa_ioc_add_hdrE_global_addr;
                }
                else {
                    if (arg1 != 0x19771e05fd6bd734) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP27ipa_wigig_conn_tx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr;
                }
            }
            else if (arg1 == 0x1996e45107fc45ff) {
                pcVar2 = sym.ipa_fmwk_register_gsb.cfi_jt;
            }
            else if (arg1 == 0x1bffb05036c3b4f1) {
                pcVar2 = sym.__typeid__ZTSFiP15ipa_wdi_tx_infoE_global_addr;
            }
            else {
                if (arg1 != 0x1d41ff6e2f1d2de6) goto code_r0x0800e7b8;
                pcVar2 = sym.ipa_fmwk_register_ipa_qdss.cfi_jt;
            }
        }
        else if (arg1 < 0x2e8e0b2de1d32810) {
            if (arg1 == 0x2bcd72afeafc1622) {
                pcVar2 = 
                sym.__typeid__ZTSFiP24ipa_usb_xdci_chan_paramsS0_P23ipa_req_chan_out_paramsS2_P27ipa_usb_xdci_connect_paramsE_global_addr
                ;
            }
            else if (arg1 == 0x2bd9767960fb4206) {
                pcVar2 = sym.__typeid__ZTSF11ipa_hw_typevE_global_addr;
            }
            else {
                if (arg1 != 0x2c101b1240ffeca0) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFi17ipa_usb_teth_protE_global_addr;
            }
        }
        else if (arg1 == 0x2e8e0b2de1d32810) {
            pcVar2 = sym.__typeid__ZTSFiP22ipa_bridge_init_paramsPjE_global_addr;
        }
        else if (arg1 == 0x4047aa66fd208c3d) {
            pcVar2 = sym.ipa_fmwk_register_ipa_mhi.cfi_jt;
        }
        else {
            if (arg1 != 0x41105343c832d270) goto code_r0x0800e7b8;
            pcVar2 = sym.__typeid__ZTSFijj17ipa_usb_teth_protbE_global_addr;
        }
    }
    else if (arg1 < 0x68a2f32f4d7b8593) {
        if (arg1 < 0x53fea68071ee5c67) {
            if (arg1 < 0x4eeb99fcf5ece30d) {
                if (arg1 == 0x4751ceb51a2067b1) {
                    pcVar2 = sym.__typeid__ZTSFiP17ipa_eth_intf_infoE_global_addr;
code_r0x0800607c:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x0800e7b8;
                }
                if (arg1 == 0x47f10df79a658ba3) {
                    pcVar2 = sym.__typeid__ZTSFiP31ipa_wdi_capabilities_out_paramsE_global_addr;
                }
                else {
                    if (arg1 != 0x4b28ab612ee93f1e) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiP22ipa_config_req_msg_v01E_global_addr;
                }
            }
            else {
                if (arg1 == 0x4eeb99fcf5ece30d) {
                    pcVar2 = sym.__typeid__ZTSFiP22ipa_wdi_init_in_paramsP23ipa_wdi_init_out_paramsE_global_addr;
                    goto code_r0x0800607c;
                }
                if (arg1 == 0x4f6be5c1eb75641e) {
                    pcVar2 = sym.__typeid__ZTSFiP23ipa_wdi_uc_ready_paramsE_global_addr;
                }
                else {
                    if (arg1 != 0x50bae722246c6cd3) goto code_r0x0800e7b8;
                    pcVar2 = 
                    sym.__typeid__ZTSFiP45ipa_wlan_opt_dp_remove_all_filter_req_msg_v01P46ipa_wlan_opt_dp_remove_all_filter_resp_msg_v01E_global_addr
                    ;
                }
            }
        }
        else if (arg1 < 0x5e6796b08205f613) {
            if (arg1 == 0x53fea68071ee5c67) {
                pcVar2 = sym.__typeid__ZTSFiPKcjE_global_addr;
            }
            else if (arg1 == 0x5c725427fc76318e) {
                pcVar2 = sym.__typeid__ZTSFiPKcPK11ipa_tx_intfPK11ipa_rx_intfE_global_addr;
            }
            else {
                if (arg1 != 0x5d67af067eb09d46) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFiP16ipa_socksv5_infoE_global_addr;
            }
        }
        else {
            if (arg1 != 0x5e6796b08205f613) {
                if (arg1 == 0x61604d934ba0d9d8) {
                    pcVar2 = sym.__typeid__ZTSFijP19ipa_wdi_buffer_infoE_global_addr;
                }
                else {
                    if (arg1 != 0x641d19c7be126e92) goto code_r0x0800e7b8;
                    pcVar2 = sym.__typeid__ZTSFiPvE_global_addr;
                }
                goto code_r0x0800607c;
            }
            pcVar2 = sym.ipa_fmwk_register_ipa_wigig.cfi_jt;
        }
    }
    else if (arg1 < 0x741b966c574d47b1) {
        if (arg1 < 0x6c164d41d1a960e1) {
            if (arg1 == 0x68a2f32f4d7b8593) {
                pcVar2 = sym.__typeid__ZTSFi15ipa_vlan_ifacesPbE_global_addr;
            }
            else if (arg1 == 0x6ad3ebe899c79a41) {
                pcVar2 = sym.__typeid__ZTSFiP32ipa_wigig_conn_tx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr
                ;
            }
            else {
                if (arg1 != 0x6ae029355c3df8c8) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFijP7sk_buffP11ipa_tx_metaE_global_addr;
            }
        }
        else {
            if (arg1 == 0x6c164d41d1a960e1) {
                pcVar2 = sym.__typeid__ZTSFiP26ipa_wdi_reg_intf_in_paramsE_global_addr;
                goto code_r0x0800607c;
            }
            if (arg1 == 0x6dfd691be326c1b0) {
                pcVar2 = sym.__typeid__ZTSFiP16ipa_perf_profileE_global_addr;
            }
            else {
                if (arg1 != 0x732f5d12a9a9acf4) goto code_r0x0800e7b8;
                pcVar2 = sym.__typeid__ZTSFiP17ipa_wdi_db_paramsE_global_addr;
            }
        }
    }
    else if (arg1 < 0x77a6cd636d8fbec8) {
        if (arg1 == 0x741b966c574d47b1) {
            pcVar2 = sym.__typeid__ZTSFbvE_global_addr;
            goto code_r0x08005f64;
        }
        if (arg1 == 0x75466a8f88dbf1e7) {
            pcVar2 = sym.__typeid__ZTSF15ipa_client_type19ipa_eth_client_type22ipa_eth_pipe_directionE_global_addr;
        }
        else {
            if (arg1 != 0x777d7cdae0aace60) goto code_r0x0800e7b8;
            pcVar2 = sym.__typeid__ZTSFiP19ipa_ioc_add_rt_ruleE_global_addr;
        }
    }
    else if (arg1 == 0x77a6cd636d8fbec8) {
        pcVar2 = sym.__typeid__ZTSFi12ipa_irq_typePFvS_PvS0_EbS0_E_global_addr;
    }
    else {
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.__typeid__ZTSFvvE_global_addr;
            goto code_r0x080060bc;
        }
        if (arg1 != 0x7fc11eba39c0b471) goto code_r0x0800e7b8;
        pcVar2 = sym.__typeid__ZTSFiyyiE_global_addr;
    }
code_r0x080060a4:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800e7b8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e80c);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiP32ipa_wigig_conn_rx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr @ 0x080060d8 (size 8) =====

ulong sym.__typeid__ZTSFiP32ipa_wigig_conn_rx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_rx_pipe_smmu",0x9af);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x458);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_rx_pipe_smmu");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d828);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP32ipa_wigig_conn_rx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x1315cc8f74eef2ce,pcVar2,0x80020d0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_register_ipa_ready_cb.cfi_jt @ 0x080060e0 (size 8) =====

ulong sym.ipa_register_ipa_ready_cb.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        if (**0x8001000 == '\0') {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x20);
            pcVar2 = *0x8001000;
            if (piVar4 == NULL) {
                mutex_unlock(*0x8001000 + 0x18);
                uVar3 = 0xfffffff4;
            }
            else {
                piVar4[2] = param_1;
                piVar4[3] = param_2;
                puVar6 = *(pcVar2 + 0x10);
                uVar5 = __list_add_valid(piVar4,puVar6,pcVar2 + 8);
                if ((uVar5 & 1) != 0) {
                    *(pcVar2 + 0x10) = piVar4;
                    *piVar4 = pcVar2 + 8;
                    piVar4[1] = puVar6;
                    *puVar6 = piVar4;
                }
                mutex_unlock(*0x8001000 + 0x18);
                uVar3 = 0;
            }
        }
        else {
            mutex_unlock(*0x8001000 + 0x18);
            uVar3 = 0xffffffef;
        }
    }
    return uVar3;
}


// ===== sym.__typeid__ZTSFiyyiPFvPvES_E_global_addr @ 0x080060e8 (size 8) =====

ulong sym.__typeid__ZTSFiyyiPFvPvES_E_global_addr
                (ulong param_1,ulong param_2,uint64_t param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_async_memcpy",0x336);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xb8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_async_memcpy");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007410);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiyyiPFvPvES_E_global_addr) {
            __cfi_slowpath_diag(0xbb5cfc706038bc45,pcVar2,0x8001210);
            param_3 = param_3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSF11ipa_hw_typevE_global_addr @ 0x080060f0 (size 8) =====

ulong sym.__typeid__ZTSF11ipa_hw_typevE_global_addr(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_hw_type",0x2e0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x78);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_hw_type");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006de0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSF11ipa_hw_typevE_global_addr) {
            __cfi_slowpath_diag(0x2bd9767960fb4206,pcVar2,0x8001110);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP28ipa_wigig_reg_intf_in_paramsE_global_addr @ 0x080060f8 (size 8) =====

ulong sym.__typeid__ZTSFiP28ipa_wigig_reg_intf_in_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_reg_intf",0x98a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x440);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d5e4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP28ipa_wigig_reg_intf_in_paramsE_global_addr) {
            __cfi_slowpath_diag(0xc2b7c30e053d1fbe,pcVar2,0x8002070);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP7sk_buffE_global_addr @ 0x08006100 (size 8) =====

ulong sym.__typeid__ZTSFiP7sk_buffE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_rmnet_ll_xmit",0x467);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x180);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_rmnet_ll_xmit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008a58);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006100 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar2,0x80015b0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_rmnet_ctl_xmit.cfi_jt @ 0x08006108 (size 8) =====

ulong sym.ipa_rmnet_ctl_xmit.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_rmnet_ctl_xmit",0x43e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x168);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_rmnet_ctl_xmit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80087f0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006100 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar2,0x8001550);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP11ipa_rx_dataE_global_addr @ 0x08006110 (size 8) =====

void sym.__typeid__ZTSFvP11ipa_rx_dataE_global_addr(ulong param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_free_skb",0x35b);
    }
    else {
        pcVar1 = *(*0x8001000 + 0xd8);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_free_skb");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800773c);
            (*pcVar1)();
        }
        if (pcVar1 != sym.__typeid__ZTSFvP11ipa_rx_dataE_global_addr) {
            __cfi_slowpath_diag(0xbfde4f4890436e47,pcVar1,0x8001290);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.__typeid__ZTSFijP20ipa_wdi_perf_profileE_global_addr @ 0x08006118 (size 8) =====

ulong sym.__typeid__ZTSFijP20ipa_wdi_perf_profileE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_set_perf_profile_per_inst",0x68f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x318);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_set_perf_profile_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aa24);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijP20ipa_wdi_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xc4ca1b44f26c3d40,pcVar2,0x8001a30);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_qdss.cfi_jt @ 0x08006120 (size 8) =====

uint sym.ipa_fmwk_register_ipa_qdss.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((*(*0x8001000 + 0x228) == 0) && (*(*0x8001000 + 0x230) == 0)) {
        uVar3 = 0;
        uVar2 = 0x80025f5;
        *(*0x8001000 + 0x228) = *param_1;
        *(iVar1 + 0x230) = param_1[1];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x80033a7;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_fmwk_register_ipa_mhi.cfi_jt @ 0x08006128 (size 8) =====

uint sym.ipa_fmwk_register_ipa_mhi.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((((*(*0x8001000 + 0x3e0) == 0) && (*(*0x8001000 + 1000) == 0)) && (*(*0x8001000 + 0x3f0) == 0)) &&
              ((*(*0x8001000 + 0x3f8) == 0 && (*(*0x8001000 + 0x400) == 0)))) &&
             ((*(*0x8001000 + 0x408) == 0 && ((*(*0x8001000 + 0x410) == 0 && (*(*0x8001000 + 0x418) == 0)))))) &&
            (*(*0x8001000 + 0x420) == 0)) {
        uVar3 = 0;
        uVar2 = 0x8002d6c;
        *(*0x8001000 + 0x3e0) = *param_1;
        *(iVar1 + 1000) = param_1[1];
        *(iVar1 + 0x3f0) = param_1[2];
        *(iVar1 + 0x3f8) = param_1[3];
        *(iVar1 + 0x400) = param_1[4];
        *(iVar1 + 0x408) = param_1[5];
        *(iVar1 + 0x410) = param_1[6];
        *(iVar1 + 0x418) = param_1[7];
        *(iVar1 + 0x420) = param_1[8];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002df1;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP22ipa_wdi_conn_in_paramsP23ipa_wdi_conn_out_paramsE_global_addr @ 0x08006130 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_wdi_conn_in_paramsP23ipa_wdi_conn_out_paramsE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_conn_pipes",0x5e1);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x238);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009dac);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006130 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xae515ab1478dcf8d,pcVar2,0x8001830);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_conn_pipes_per_inst.cfi_jt @ 0x08006138 (size 8) =====

ulong sym.ipa_wdi_conn_pipes_per_inst.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_conn_pipes_per_inst",0x665);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_conn_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6fc);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006130 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xae515ab1478dcf8d,pcVar2,0x80019b0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_eth.cfi_jt @ 0x08006140 (size 8) =====

uint sym.ipa_fmwk_register_ipa_eth.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((((*(*0x8001000 + 0x4a0) == 0) && (*(*0x8001000 + 0x4a8) == 0)) && (*(*0x8001000 + 0x4b0) == 0)) &&
              ((*(*0x8001000 + 0x4b8) == 0 && (*(*0x8001000 + 0x4c0) == 0)))) &&
             ((*(*0x8001000 + 0x4c8) == 0 && ((*(*0x8001000 + 0x4d0) == 0 && (*(*0x8001000 + 0x4e0) == 0)))))) &&
            (*(*0x8001000 + 0x4e8) == 0)) {
        uVar3 = 0;
        uVar2 = 0x800318d;
        *(*0x8001000 + 0x4a0) = *param_1;
        *(iVar1 + 0x4a8) = param_1[1];
        *(iVar1 + 0x4b0) = param_1[2];
        *(iVar1 + 0x4b8) = param_1[3];
        *(iVar1 + 0x4c0) = param_1[4];
        *(iVar1 + 0x4c8) = param_1[5];
        *(iVar1 + 0x4d0) = param_1[6];
        *(iVar1 + 0x4e0) = param_1[7];
        *(iVar1 + 0x4e8) = param_1[8];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800322b;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiyyiE_global_addr @ 0x08006148 (size 8) =====

ulong sym.__typeid__ZTSFiyyiE_global_addr(ulong param_1,ulong param_2,uint64_t param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_sync_memcpy",0x32a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xb0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_sync_memcpy");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007338);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiyyiE_global_addr) {
            __cfi_slowpath_diag(0x7fc11eba39c0b471,pcVar2,0x80011f0);
            param_3 = param_3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP24ipa_usb_xdci_chan_paramsS0_P23ipa_req_chan_out_paramsS2_P27ipa_usb_xdci_connect_paramsE_global_addr @ 0x08006150 (size 8) =====

ulong sym.__typeid__ZTSFiP24ipa_usb_xdci_chan_paramsS0_P23ipa_req_chan_out_paramsS2_P27ipa_usb_xdci_connect_paramsE_global_addr
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_connect",0x4ee);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_connect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800917c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP24ipa_usb_xdci_chan_paramsS0_P23ipa_req_chan_out_paramsS2_P27ipa_usb_xdci_connect_paramsE_global_addr
           ) {
            __cfi_slowpath_diag(0x2bcd72afeafc1622,pcVar2,0x80016b0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFb17ipa_usb_teth_protE_global_addr @ 0x08006158 (size 8) =====

uint32_t sym.__typeid__ZTSFb17ipa_usb_teth_protE_global_addr(uint64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_is_teth_prot_connected",0x529);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_is_teth_prot_connected");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800959c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFb17ipa_usb_teth_protE_global_addr) {
            __cfi_slowpath_diag(0xc16dcd0014ae7d5c,pcVar2,0x8001750);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1 & 1;
}


// ===== sym.__typeid__ZTSFiP24ipa_wigig_init_in_paramsP25ipa_wigig_init_out_paramsE_global_addr @ 0x08006160 (size 8) =====

ulong sym.__typeid__ZTSFiP24ipa_wigig_init_in_paramsP25ipa_wigig_init_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_init",0x96b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x428);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d394);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP24ipa_wigig_init_in_paramsP25ipa_wigig_init_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xcfe2ebda3644995b,pcVar2,0x8002010);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFb19ipa_eth_client_typeiE_global_addr @ 0x08006168 (size 8) =====

uint32_t sym.__typeid__ZTSFb19ipa_eth_client_typeiE_global_addr(uint64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_exist",0xab5);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_exist");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e740);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFb19ipa_eth_client_typeiE_global_addr) {
            __cfi_slowpath_diag(0x93e8e7fc26d203dd,pcVar2,0x8002310);
            param_1 = param_1 & 0xffffffff;
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1 & 1;
}


// ===== sym.__typeid__ZTSFijP7sk_buffP11ipa_tx_metaE_global_addr @ 0x08006170 (size 8) =====

ulong sym.__typeid__ZTSFijP7sk_buffP11ipa_tx_metaE_global_addr(uint64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_tx_dp",0x81a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x398);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c264);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijP7sk_buffP11ipa_tx_metaE_global_addr) {
            __cfi_slowpath_diag(0x6ae029355c3df8c8,pcVar2,0x8001dd0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_usb.cfi_jt @ 0x08006178 (size 8) =====

uint sym.ipa_fmwk_register_ipa_usb.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((*(*0x8001000 + 0x1c8) == 0) && (*(*0x8001000 + 0x1d0) == 0)) && (*(*0x8001000 + 0x1d8) == 0)) &&
            (((*(*0x8001000 + 0x1e0) == 0 && (*(*0x8001000 + 0x1e8) == 0)) &&
             ((*(*0x8001000 + 0x1f0) == 0 && (*(*0x8001000 + 0x1f8) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x800258a;
        *(*0x8001000 + 0x1c8) = *param_1;
        *(iVar1 + 0x1d0) = param_1[1];
        *(iVar1 + 0x1d8) = param_1[2];
        *(iVar1 + 0x1e0) = param_1[3];
        *(iVar1 + 0x1e8) = param_1[4];
        *(iVar1 + 0x1f0) = param_1[5];
        *(iVar1 + 0x1f8) = param_1[6];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002f12;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFijPFiPvP36ipa_wdi_opt_dpath_flt_rsrv_cb_paramsEPFiS_EPFiS_P35ipa_wdi_opt_dpath_flt_add_cb_paramsEPFiS_P35ipa_wdi_opt_dpath_flt_rem_cb_paramsEE_global_addr @ 0x08006180 (size 8) =====

ulong sym.__typeid__ZTSFijPFiPvP36ipa_wdi_opt_dpath_flt_rsrv_cb_paramsEPFiS_EPFiS_P35ipa_wdi_opt_dpath_flt_add_cb_paramsEPFiS_P35ipa_wdi_opt_dpath_flt_rem_cb_paramsEE_global_addr
                (uint64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_register_flt_cb_per_inst",0x703);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x330);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_register_flt_cb_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b20c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFijPFiPvP36ipa_wdi_opt_dpath_flt_rsrv_cb_paramsEPFiS_EPFiS_P35ipa_wdi_opt_dpath_flt_add_cb_paramsEPFiS_P35ipa_wdi_opt_dpath_flt_rem_cb_paramsEE_global_addr
           ) {
            __cfi_slowpath_diag(0x175e2e05f5757,pcVar2,0x8001b70);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP16ipa_perf_profileE_global_addr @ 0x08006188 (size 8) =====

ulong sym.__typeid__ZTSFiP16ipa_perf_profileE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_perf_profile",0x883);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c7fc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP16ipa_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0x6dfd691be326c1b0,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP12ipa_msg_metaPvPFvS1_jjEE_global_addr @ 0x08006190 (size 8) =====

ulong sym.__typeid__ZTSFiP12ipa_msg_metaPvPFvS1_jjEE_global_addr(ulong param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_send_msg",0x353);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xd0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_send_msg");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007670);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP12ipa_msg_metaPvPFvS1_jjEE_global_addr) {
            __cfi_slowpath_diag(0xeff3cb7dd3f2462f,pcVar2,0x8001270);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijj17ipa_usb_teth_protbE_global_addr @ 0x08006198 (size 8) =====

ulong sym.__typeid__ZTSFijj17ipa_usb_teth_protbE_global_addr
                (uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_suspend",0x512);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80093ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijj17ipa_usb_teth_protbE_global_addr) {
            __cfi_slowpath_diag(0x41105343c832d270,pcVar2,0x8001710);
            param_2 = param_2 & 0xffffffff;
            param_1 = param_1 & 0xffffffff;
            param_3 = param_3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4 & 1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi14ipa_mhi_mstateE_global_addr @ 0x080061a0 (size 8) =====

ulong sym.__typeid__ZTSFi14ipa_mhi_mstateE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_update_mstate",0x929);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x420);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_update_mstate");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d174);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi14ipa_mhi_mstateE_global_addr) {
            __cfi_slowpath_diag(0xcccd9b5151f5090a,pcVar2,0x8001ff0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_gsb.cfi_jt @ 0x080061a8 (size 8) =====

uint sym.ipa_fmwk_register_gsb.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((*(*0x8001000 + 0x368) == 0) && (*(*0x8001000 + 0x370) == 0)) && (*(*0x8001000 + 0x378) == 0)) &&
             ((*(*0x8001000 + 0x380) == 0 && (*(*0x8001000 + 0x388) == 0)))) &&
            ((*(*0x8001000 + 0x390) == 0 && ((*(*0x8001000 + 0x398) == 0 && (*(*0x8001000 + 0x3a0) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x8002b97;
        *(*0x8001000 + 0x368) = *param_1;
        *(iVar1 + 0x370) = param_1[1];
        *(iVar1 + 0x378) = param_1[2];
        *(iVar1 + 0x380) = param_1[3];
        *(iVar1 + 0x388) = param_1[4];
        *(iVar1 + 0x390) = param_1[5];
        *(iVar1 + 0x398) = param_1[6];
        *(iVar1 + 0x3a0) = param_1[7];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800248e;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP26ipa_wdi_reg_intf_in_paramsE_global_addr @ 0x080061b0 (size 8) =====

ulong sym.__typeid__ZTSFiP26ipa_wdi_reg_intf_in_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_reg_intf_per_inst",0x64e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_reg_intf_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a56c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80061b0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6c164d41d1a960e1,pcVar2,0x8001970);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_reg_intf.cfi_jt @ 0x080061b8 (size 8) =====

ulong sym.ipa_wdi_reg_intf.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_reg_intf",0x5ca);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x218);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009c24);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80061b0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6c164d41d1a960e1,pcVar2,0x80017f0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP41ipa_wlan_opt_dp_remove_filter_req_msg_v01P48ipa_wlan_opt_dp_remove_filter_complt_ind_msg_v01E_global_addr @ 0x080061c0 (size 8) =====

ulong sym.__typeid__ZTSFiP41ipa_wlan_opt_dp_remove_filter_req_msg_v01P48ipa_wlan_opt_dp_remove_filter_complt_ind_msg_v01E_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_remove_filter_req",0x743);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x358);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_remove_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b61c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP41ipa_wlan_opt_dp_remove_filter_req_msg_v01P48ipa_wlan_opt_dp_remove_filter_complt_ind_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x687703c03e071df,pcVar2,0x8001c10);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP27ipa_wigig_conn_tx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr @ 0x080061c8 (size 8) =====

ulong sym.__typeid__ZTSFiP27ipa_wigig_conn_tx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_client",0x9bc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x460);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_client");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d8ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP27ipa_wigig_conn_tx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x19771e05fd6bd734,pcVar2,0x80020f0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijyE_global_addr @ 0x080061d0 (size 8) =====

ulong sym.__typeid__ZTSFijyE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_broadcast_wdi_quota_reach_ind",0x38d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x100);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_broadcast_wdi_quota_reach_ind");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007b0c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijyE_global_addr) {
            __cfi_slowpath_diag(0x85ef646f2b5262c4,pcVar2,0x8001330);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP15ipa_ioc_add_hdrE_global_addr @ 0x080061d8 (size 8) =====

ulong sym.__typeid__ZTSFiP15ipa_ioc_add_hdrE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_hdr",0x3d6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800806c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_add_hdrE_global_addr) {
            __cfi_slowpath_diag(0x16dd579837fbcad0,pcVar2,0x8001410);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP17ipa_wdi_in_paramsP18ipa_wdi_out_paramsE_global_addr @ 0x080061e0 (size 8) =====

ulong sym.__typeid__ZTSFiP17ipa_wdi_in_paramsP18ipa_wdi_out_paramsE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_connect_wdi_pipe",0x6e5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_connect_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b07c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP17ipa_wdi_in_paramsP18ipa_wdi_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xc8425ee2e7226207,pcVar2,0x8001b30);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP15ipa_wdi_tx_infoE_global_addr @ 0x080061e8 (size 8) =====

ulong sym.__typeid__ZTSFiP15ipa_wdi_tx_infoE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_sw_stats",0x779);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x280);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_sw_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b9e8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_wdi_tx_infoE_global_addr) {
            __cfi_slowpath_diag(0x1bffb05036c3b4f1,pcVar2,0x8001cb0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiPKcPK11ipa_tx_intfPK11ipa_rx_intfE_global_addr @ 0x080061f0 (size 8) =====

ulong sym.__typeid__ZTSFiPKcPK11ipa_tx_intfPK11ipa_rx_intfE_global_addr(ulong param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_intf",0x3c2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x128);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007ed8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPKcPK11ipa_tx_intfPK11ipa_rx_intfE_global_addr) {
            __cfi_slowpath_diag(0x5c725427fc76318e,pcVar2,0x80013d0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFv20ipa_uc_offload_protoE_global_addr @ 0x080061f8 (size 8) =====

void sym.__typeid__ZTSFv20ipa_uc_offload_protoE_global_addr(uint64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_uc_offload_dereg_rdyCB",0x8a8);
    }
    else {
        pcVar1 = *(*0x8001000 + 0x3d8);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_dereg_rdyCB");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800c9a4);
            (*pcVar1)();
        }
        if (pcVar1 != sym.__typeid__ZTSFv20ipa_uc_offload_protoE_global_addr) {
            __cfi_slowpath_diag(0x14f5cee72df96cd4,pcVar1,0x8001ed0);
            param_1 = param_1 & 0xffffffff;
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.__typeid__ZTSFiP27ipa_wigig_conn_rx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr @ 0x08006200 (size 8) =====

ulong sym.__typeid__ZTSFiP27ipa_wigig_conn_rx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_rx_pipe",0x9a2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x450);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_rx_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d764);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP27ipa_wigig_conn_rx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x8aca190203ce22c2,pcVar2,0x80020b0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP19ipa_mhi_init_paramsE_global_addr @ 0x08006208 (size 8) =====

ulong sym.__typeid__ZTSFiP19ipa_mhi_init_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_init",0x8d8);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cb60);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP19ipa_mhi_init_paramsE_global_addr) {
            __cfi_slowpath_diag(0xba92877d429fa586,pcVar2,0x8001ef0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP15ipa_wdi_bw_infoE_global_addr @ 0x08006210 (size 8) =====

ulong sym.__typeid__ZTSFiP15ipa_wdi_bw_infoE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_bw_monitor",0x381);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xf8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_bw_monitor");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007a50);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xcde4f6e28251b9e5,pcVar2,0x8001310);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_bw_monitor.cfi_jt @ 0x08006218 (size 8) =====

ulong sym.ipa_wdi_bw_monitor.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_bw_monitor",0x76e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x278);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_bw_monitor");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b92c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xcde4f6e28251b9e5,pcVar2,0x8001c90);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP13ipa_eth_readyE_global_addr @ 0x08006220 (size 8) =====

uint sym.__typeid__ZTSFiP13ipa_eth_readyE_global_addr(ulong *param_1)

{
    char *pcVar1;
    char *pcVar2;
    uint uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar2 = *0x8001000;
        if (**0x8001000 == '\0') {
            pcVar1 = *0x8001000 + 0x18;
            *(*0x8001000 + 0x58) = *param_1;
            *(pcVar2 + 0x60) = param_1[1];
            *(param_1 + 2) = 0;
            mutex_unlock(pcVar1);
            uVar3 = 0;
        }
        else {
            pcVar4 = *(*0x8001000 + 0x4a0);
            if (1 < (pcVar4 + -0x8006220 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0xfa2bdca0c05ed791,pcVar4,0x80021f0);
            }
            uVar3 = (*pcVar4)(param_1);
            mutex_unlock(*0x8001000 + 0x18);
        }
    }
    return uVar3;
}


// ===== sym.ipa_eth_unregister_ready_cb.cfi_jt @ 0x08006228 (size 8) =====

ulong sym.ipa_eth_unregister_ready_cb.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_unregister_ready_cb",0xa59);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_unregister_ready_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e120);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006220 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfa2bdca0c05ed791,pcVar2,0x8002210);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP39ipa_wlan_opt_dp_rsrv_filter_req_msg_v01P40ipa_wlan_opt_dp_rsrv_filter_resp_msg_v01E_global_addr @ 0x08006230 (size 8) =====

ulong sym.__typeid__ZTSFiP39ipa_wlan_opt_dp_rsrv_filter_req_msg_v01P40ipa_wlan_opt_dp_rsrv_filter_resp_msg_v01E_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_rsrv_filter_req",0x72a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x348);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_rsrv_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b494);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP39ipa_wlan_opt_dp_rsrv_filter_req_msg_v01P40ipa_wlan_opt_dp_rsrv_filter_resp_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x9a1b235a4d2c9adb,pcVar2,0x8001bd0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijbE_global_addr @ 0x08006238 (size 8) =====

ulong sym.__typeid__ZTSFijbE_global_addr(uint64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst",0x71d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x340);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b3c8);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006238 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x3236203519f56f4,pcVar2,0x8001bb0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst.cfi_jt @ 0x08006240 (size 8) =====

ulong sym.ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst.cfi_jt(uint64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst",0x711);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x338);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b2f0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006238 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x3236203519f56f4,pcVar2,0x8001b90);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2 & 1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiPKcjE_global_addr @ 0x08006248 (size 8) =====

ulong sym.__typeid__ZTSFiPKcjE_global_addr(ulong param_1,uint64_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_dereg_intf_per_inst",0x659);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_dereg_intf_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a628);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPKcjE_global_addr) {
            __cfi_slowpath_diag(0x53fea68071ee5c67,pcVar2,0x8001990);
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP20ipa_wdi_perf_profileE_global_addr @ 0x08006250 (size 8) =====

ulong sym.__typeid__ZTSFiP20ipa_wdi_perf_profileE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_set_perf_profile",0x60a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 600);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a0bc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP20ipa_wdi_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xbcc1a60ebdd96a6e,pcVar2,0x80018b0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi17ipa_usb_teth_protP19ipa_usb_teth_paramsPFi20ipa_usb_notify_eventPvES3_E_global_addr @ 0x08006258 (size 8) =====

ulong sym.__typeid__ZTSFi17ipa_usb_teth_protP19ipa_usb_teth_paramsPFi20ipa_usb_notify_eventPvES3_E_global_addr
                (uint64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_init_teth_prot",0x4de);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_init_teth_prot");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80090a4);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFi17ipa_usb_teth_protP19ipa_usb_teth_paramsPFi20ipa_usb_notify_eventPvES3_E_global_addr) {
            __cfi_slowpath_diag(0xcc623cb31fce3ab0,pcVar2,0x8001690);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP22ipa_bridge_init_paramsPjE_global_addr @ 0x08006260 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_bridge_init_paramsPjE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_init",0x7d7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x368);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bda4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_bridge_init_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0x2e8e0b2de1d32810,pcVar2,0x8001d10);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi13ipa_aggr_modeE_global_addr @ 0x08006268 (size 8) =====

ulong sym.__typeid__ZTSFi13ipa_aggr_modeE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_aggr_mode",0x3f4);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x130);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_aggr_mode");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80082a0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi13ipa_aggr_modeE_global_addr) {
            __cfi_slowpath_diag(0xb5ecd5fc463850ee,pcVar2,0x8001470);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP38ipa_wlan_opt_dp_add_filter_req_msg_v01P45ipa_wlan_opt_dp_add_filter_complt_ind_msg_v01E_global_addr @ 0x08006270 (size 8) =====

ulong sym.__typeid__ZTSFiP38ipa_wlan_opt_dp_add_filter_req_msg_v01P45ipa_wlan_opt_dp_add_filter_complt_ind_msg_v01E_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_add_filter_req",0x736);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x350);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_add_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b558);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP38ipa_wlan_opt_dp_add_filter_req_msg_v01P45ipa_wlan_opt_dp_add_filter_complt_ind_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0xfb4726b715dee745,pcVar2,0x8001bf0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP23ipa_wdi_uc_ready_paramsE_global_addr @ 0x08006278 (size 8) =====

ulong sym.__typeid__ZTSFiP23ipa_wdi_uc_ready_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_reg_uc_rdyCB",0x759);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_reg_uc_rdyCB");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b7a4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP23ipa_wdi_uc_ready_paramsE_global_addr) {
            __cfi_slowpath_diag(0x4f6be5c1eb75641e,pcVar2,0x8001c50);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP20ipa_mhi_start_paramsE_global_addr @ 0x08006280 (size 8) =====

ulong sym.__typeid__ZTSFiP20ipa_mhi_start_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_start",0x8e3);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 1000);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_start");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cc1c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP20ipa_mhi_start_paramsE_global_addr) {
            __cfi_slowpath_diag(0xfc7c3caf7483c738,pcVar2,0x8001f10);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP22ipa_wdi_init_in_paramsP23ipa_wdi_init_out_paramsE_global_addr @ 0x08006288 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_wdi_init_in_paramsP23ipa_wdi_init_out_paramsE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_init_per_inst",0x638);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_init_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a3d4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006288 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4eeb99fcf5ece30d,pcVar2,0x8001930);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_init.cfi_jt @ 0x08006290 (size 8) =====

ulong sym.ipa_wdi_init.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_init",0x5a0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x200);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009908);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006288 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4eeb99fcf5ece30d,pcVar2,0x8001770);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijjE_global_addr @ 0x08006298 (size 8) =====

ulong sym.__typeid__ZTSFijjE_global_addr(uint64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_set_perf_profile",0x7ed);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x378);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bf34);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijjE_global_addr) {
            __cfi_slowpath_diag(0xcea31f8c4f12503d,pcVar2,0x8001d50);
            param_1 = param_1 & 0xffffffff;
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP45ipa_wlan_opt_dp_remove_all_filter_req_msg_v01P46ipa_wlan_opt_dp_remove_all_filter_resp_msg_v01E_global_addr @ 0x080062a0 (size 8) =====

ulong sym.__typeid__ZTSFiP45ipa_wlan_opt_dp_remove_all_filter_req_msg_v01P46ipa_wlan_opt_dp_remove_all_filter_resp_msg_v01E_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_remove_all_filter_req",0x74f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x360);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_remove_all_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b6e0);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP45ipa_wlan_opt_dp_remove_all_filter_req_msg_v01P46ipa_wlan_opt_dp_remove_all_filter_resp_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x50bae722246c6cd3,pcVar2,0x8001c30);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr @ 0x080062a8 (size 8) =====

uint sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr(uchar *param_1)

{
    char *pcVar1;
    char *pcVar2;
    uint uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar2 = *0x8001000;
        if (**0x8001000 == '\0') {
            pcVar1 = *0x8001000 + 0x18;
            *(*0x8001000 + 0x48) = *(param_1 + 0x10);
            *(pcVar2 + 0x50) = *(param_1 + 8);
            *(pcVar2 + 0x68) = *(param_1 + 0x18);
            *param_1 = 0;
            mutex_unlock(pcVar1);
            uVar3 = 0;
        }
        else {
            pcVar4 = *(*0x8001000 + 0x3d0);
            if (pcVar4 != sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr) {
                __cfi_slowpath_diag(0xa1ff277cb8c62bf4,pcVar4,0x8001eb0);
            }
            uVar3 = (*pcVar4)(param_1);
            mutex_unlock(*0x8001000 + 0x18);
        }
    }
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP22ipa_sys_connect_paramsPjE_global_addr @ 0x080062b0 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_sys_connect_paramsPjE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_setup_sys_pipe",0x363);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xe0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_setup_sys_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80077f4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_sys_connect_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0xf1a530fb88f81fc7,pcVar2,0x80012b0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffP11ipa_tx_metaE_global_addr @ 0x080062b8 (size 8) =====

ulong sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffP11ipa_tx_metaE_global_addr
                (uint64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_tx_dp",0x2d6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x70);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006d10);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffP11ipa_tx_metaE_global_addr) {
            __cfi_slowpath_diag(0xc756a79cb0df9031,pcVar2,obj.ipa_fmwk_init.__key);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP23ipa_qdss_conn_in_paramsP24ipa_qdss_conn_out_paramsE_global_addr @ 0x080062c0 (size 8) =====

ulong sym.__typeid__ZTSFiP23ipa_qdss_conn_in_paramsP24ipa_qdss_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_qdss_conn_pipes",0x785);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x228);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_qdss_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800baa4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP23ipa_qdss_conn_in_paramsP24ipa_qdss_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xca63e0f18bef35de,pcVar2,0x8001cd0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi15ipa_vlan_ifacesPbE_global_addr @ 0x080062c8 (size 8) =====

ulong sym.__typeid__ZTSFi15ipa_vlan_ifacesPbE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_is_vlan_mode",0x2eb);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x88);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_is_vlan_mode");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006e9c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_vlan_ifacesPbE_global_addr) {
            __cfi_slowpath_diag(0x68a2f32f4d7b8593,pcVar2,0x8001130);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_wigig.cfi_jt @ 0x080062d0 (size 8) =====

uint sym.ipa_fmwk_register_ipa_wigig.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((*(*0x8001000 + 0x428) == 0) && (*(*0x8001000 + 0x430) == 0)) && (*(*0x8001000 + 0x438) == 0)) &&
             (((*(*0x8001000 + 0x440) == 0 && (*(*0x8001000 + 0x448) == 0)) &&
              ((*(*0x8001000 + 0x450) == 0 && ((*(*0x8001000 + 0x458) == 0 && (*(*0x8001000 + 0x460) == 0)))))))) &&
            ((*(*0x8001000 + 0x468) == 0 &&
             (((((*(*0x8001000 + 0x470) == 0 && (*(*0x8001000 + 0x478) == 0)) && (*(*0x8001000 + 0x480) == 0)) &&
               ((*(*0x8001000 + 0x488) == 0 && (*(*0x8001000 + 0x490) == 0)))) && (*(*0x8001000 + 0x498) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x800347a;
        *(*0x8001000 + 0x428) = *param_1;
        *(iVar1 + 0x430) = param_1[1];
        *(iVar1 + 0x438) = param_1[2];
        *(iVar1 + 0x440) = param_1[3];
        *(iVar1 + 0x448) = param_1[4];
        *(iVar1 + 0x450) = param_1[5];
        *(iVar1 + 0x458) = param_1[6];
        *(iVar1 + 0x460) = param_1[7];
        *(iVar1 + 0x468) = param_1[8];
        *(iVar1 + 0x470) = param_1[9];
        *(iVar1 + 0x478) = param_1[10];
        *(iVar1 + 0x480) = param_1[0xb];
        *(iVar1 + 0x488) = param_1[0xc];
        *(iVar1 + 0x490) = param_1[0xd];
        *(iVar1 + 0x498) = param_1[0xe];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800283f;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP26ipa_uc_offload_intf_paramsP25ipa_uc_offload_out_paramsE_global_addr @ 0x080062d8 (size 8) =====

ulong sym.__typeid__ZTSFiP26ipa_uc_offload_intf_paramsP25ipa_uc_offload_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_reg_intf",0x856);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c4dc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP26ipa_uc_offload_intf_paramsP25ipa_uc_offload_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xbd4fd17e310b1fc4,pcVar2,0x8001e10);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_wdi3.cfi_jt @ 0x080062e0 (size 8) =====

uint sym.ipa_fmwk_register_ipa_wdi3.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((((((*(*0x8001000 + 0x278) == 0) && (*(*0x8001000 + 0x200) == 0)) && (*(*0x8001000 + 0x210) == 0)) &&
                 ((*(*0x8001000 + 0x218) == 0 && (*(*0x8001000 + 0x220) == 0)))) &&
                ((*(*0x8001000 + 0x238) == 0 && ((*(*0x8001000 + 0x240) == 0 && (*(*0x8001000 + 0x248) == 0)))))) &&
               (*(*0x8001000 + 0x250) == 0)) &&
              (((((*(*0x8001000 + 600) == 0 && (*(*0x8001000 + 0x260) == 0)) && (*(*0x8001000 + 0x268) == 0)) &&
                (((*(*0x8001000 + 0x270) == 0 && (*(*0x8001000 + 0x280) == 0)) &&
                 ((*(*0x8001000 + 0x208) == 0 && ((*(*0x8001000 + 0x2c8) == 0 && (*(*0x8001000 + 0x2d0) == 0)))))))) &&
               ((*(*0x8001000 + 0x2d8) == 0 &&
                (((*(*0x8001000 + 0x2e0) == 0 && (*(*0x8001000 + 0x2e8) == 0)) && (*(*0x8001000 + 0x2f0) == 0)))))))) &&
             ((((*(*0x8001000 + 0x2f8) == 0 && (*(*0x8001000 + 0x300) == 0)) &&
               (((*(*0x8001000 + 0x308) == 0 && ((*(*0x8001000 + 0x310) == 0 && (*(*0x8001000 + 0x318) == 0)))) &&
                (*(*0x8001000 + 800) == 0)))) &&
              ((((*(*0x8001000 + 0x328) == 0 && (*(*0x8001000 + 0x330) == 0)) && (*(*0x8001000 + 0x338) == 0)) &&
               ((*(*0x8001000 + 0x340) == 0 && (*(*0x8001000 + 0x348) == 0)))))))) &&
            ((*(*0x8001000 + 0x350) == 0 && ((*(*0x8001000 + 0x358) == 0 && (*(*0x8001000 + 0x360) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x80023d0;
        *(*0x8001000 + 0x278) = param_1[0xc];
        *(iVar1 + 0x200) = *param_1;
        *(iVar1 + 0x210) = param_1[1];
        *(iVar1 + 0x218) = param_1[2];
        *(iVar1 + 0x220) = param_1[3];
        *(iVar1 + 0x238) = param_1[4];
        *(iVar1 + 0x240) = param_1[5];
        *(iVar1 + 0x248) = param_1[6];
        *(iVar1 + 0x250) = param_1[7];
        *(iVar1 + 600) = param_1[8];
        *(iVar1 + 0x260) = param_1[9];
        *(iVar1 + 0x268) = param_1[10];
        *(iVar1 + 0x270) = param_1[0xb];
        *(iVar1 + 0x280) = param_1[0xd];
        *(iVar1 + 0x208) = param_1[0xe];
        *(iVar1 + 0x2c8) = param_1[0xf];
        *(iVar1 + 0x2d0) = param_1[0x10];
        *(iVar1 + 0x2d8) = param_1[0x11];
        *(iVar1 + 0x2e0) = param_1[0x12];
        *(iVar1 + 0x2e8) = param_1[0x13];
        *(iVar1 + 0x2f0) = param_1[0x14];
        *(iVar1 + 0x2f8) = param_1[0x15];
        *(iVar1 + 0x300) = param_1[0x16];
        *(iVar1 + 0x308) = param_1[0x17];
        *(iVar1 + 0x310) = param_1[0x18];
        *(iVar1 + 0x318) = param_1[0x19];
        *(iVar1 + 800) = param_1[0x1a];
        *(iVar1 + 0x328) = param_1[0x1b];
        *(iVar1 + 0x330) = param_1[0x1c];
        *(iVar1 + 0x338) = param_1[0x1d];
        *(iVar1 + 0x340) = param_1[0x1e];
        *(iVar1 + 0x348) = param_1[0x1f];
        *(iVar1 + 0x350) = param_1[0x20];
        *(iVar1 + 0x358) = param_1[0x21];
        *(iVar1 + 0x360) = param_1[0x22];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002698;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiPcE_global_addr @ 0x080062e8 (size 8) =====

ulong sym.__typeid__ZTSFiPcE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_qcncm_ndp_sig",0x3fe);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x138);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_qcncm_ndp_sig");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008364);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPcE_global_addr) {
            __cfi_slowpath_diag(0xf8ea10d0b8f3433,pcVar2,0x8001490);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijj17ipa_usb_teth_protE_global_addr @ 0x080062f0 (size 8) =====

ulong sym.__typeid__ZTSFijj17ipa_usb_teth_protE_global_addr(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_resume",0x51e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80094cc);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80062f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xe77ecee42bb5f186,pcVar2,0x8001730);
            param_2 = param_2 & 0xffffffff;
            param_1 = param_1 & 0xffffffff;
            param_3 = param_3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.ipa_usb_xdci_disconnect.cfi_jt @ 0x080062f8 (size 8) =====

ulong sym.ipa_usb_xdci_disconnect.cfi_jt(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_disconnect",0x4fa);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_disconnect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009254);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80062f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xe77ecee42bb5f186,pcVar2,0x80016d0);
            param_2 = param_2 & 0xffffffff;
            param_1 = param_1 & 0xffffffff;
            param_3 = param_3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP17ipa_wdi_db_paramsE_global_addr @ 0x08006300 (size 8) =====

ulong sym.__typeid__ZTSFiP17ipa_wdi_db_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_wdi_get_dbpa",0x398);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x108);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_wdi_get_dbpa");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007bd0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP17ipa_wdi_db_paramsE_global_addr) {
            __cfi_slowpath_diag(0x732f5d12a9a9acf4,pcVar2,0x8001350);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_uc_offload.cfi_jt @ 0x08006308 (size 8) =====

uint sym.ipa_fmwk_register_uc_offload.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((*(*0x8001000 + 0x3a8) == 0) && (*(*0x8001000 + 0x3b0) == 0)) && (*(*0x8001000 + 0x3b8) == 0)) &&
            (((*(*0x8001000 + 0x3c0) == 0 && (*(*0x8001000 + 0x3c8) == 0)) &&
             ((*(*0x8001000 + 0x3d0) == 0 && (*(*0x8001000 + 0x3d8) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x8002815;
        *(*0x8001000 + 0x3a8) = *param_1;
        *(iVar1 + 0x3b0) = param_1[1];
        *(iVar1 + 0x3b8) = param_1[2];
        *(iVar1 + 0x3c0) = param_1[3];
        *(iVar1 + 0x3c8) = param_1[4];
        *(iVar1 + 0x3d0) = param_1[5];
        *(iVar1 + 0x3d8) = param_1[6];
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800344a;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP22ipa_config_req_msg_v01E_global_addr @ 0x08006310 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_config_req_msg_v01E_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_handle_ipa_config_req",0x91f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x418);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_handle_ipa_config_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d0b8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_config_req_msg_v01E_global_addr) {
            __cfi_slowpath_diag(0x4b28ab612ee93f1e,pcVar2,0x8001fd0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP22ipa_mhi_connect_paramsPjE_global_addr @ 0x08006318 (size 8) =====

ulong sym.__typeid__ZTSFiP22ipa_mhi_connect_paramsPjE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_connect_pipe",0x8ee);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_connect_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ccd8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_mhi_connect_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0x14a351453d1a4144,pcVar2,0x8001f30);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSF15ipa_client_type19ipa_eth_client_type22ipa_eth_pipe_directionE_global_addr @ 0x08006320 (size 8) =====

ulong sym.__typeid__ZTSF15ipa_client_type19ipa_eth_client_type22ipa_eth_pipe_directionE_global_addr
                (uint64_t param_1,uint64_t param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_get_ipa_client_type_from_eth_type",0xaa9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_get_ipa_client_type_from_eth_type");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e674);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSF15ipa_client_type19ipa_eth_client_type22ipa_eth_pipe_directionE_global_addr) {
            __cfi_slowpath_diag(0x75466a8f88dbf1e7,pcVar2,0x80022f0);
            param_1 = param_1 & 0xffffffff;
            param_2 = param_2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP32ipa_wigig_conn_tx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr @ 0x08006328 (size 8) =====

ulong sym.__typeid__ZTSFiP32ipa_wigig_conn_tx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_client_smmu",0x9c9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x468);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_client_smmu");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d9b0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP32ipa_wigig_conn_tx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x6ad3ebe899c79a41,pcVar2,0x8002110);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP29ipa_uc_offload_conn_in_paramsP30ipa_uc_offload_conn_out_paramsE_global_addr @ 0x08006330 (size 8) =====

ulong sym.__typeid__ZTSFiP29ipa_uc_offload_conn_in_paramsP30ipa_uc_offload_conn_out_paramsE_global_addr
                (ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_conn_pipes",0x86d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c66c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP29ipa_uc_offload_conn_in_paramsP30ipa_uc_offload_conn_out_paramsE_global_addr)
        {
            __cfi_slowpath_diag(0xd045eea2b39fba65,pcVar2,0x8001e50);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijPK15ipa_ep_cfg_ctrlE_global_addr @ 0x08006338 (size 8) =====

ulong sym.__typeid__ZTSFijPK15ipa_ep_cfg_ctrlE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_cfg_ep_ctrl",0x3a2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x110);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_cfg_ep_ctrl");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007c8c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijPK15ipa_ep_cfg_ctrlE_global_addr) {
            __cfi_slowpath_diag(0xed8b647fa99ae40,pcVar2,0x8001370);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiPFvPvES_S1_S_PFvS_S_ES_E_global_addr @ 0x08006340 (size 8) =====

ulong sym.__typeid__ZTSFiPFvPvES_S1_S_PFvS_S_ES_E_global_addr
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_rmnet_ll_cb",0x47b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x188);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_rmnet_ll_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008b1c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006340 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf280c984a8ca65dd,pcVar2,0x80015d0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    return uVar1;
}


// ===== sym.ipa_register_rmnet_ctl_cb.cfi_jt @ 0x08006348 (size 8) =====

ulong sym.ipa_register_rmnet_ctl_cb.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_rmnet_ctl_cb",0x452);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x170);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_rmnet_ctl_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80088b4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006340 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf280c984a8ca65dd,pcVar2,0x8001570);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiPKcE_global_addr @ 0x08006350 (size 8) =====

ulong sym.__typeid__ZTSFiPKcE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_deregister_intf",0x3cc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_deregister_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007fb0);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x80013f0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_dereg_intf.cfi_jt @ 0x08006358 (size 8) =====

ulong sym.ipa_wdi_dereg_intf.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_dereg_intf",0x5d5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x220);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_dereg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009ce8);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x8001810);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_dereg_intf.cfi_jt @ 0x08006360 (size 8) =====

ulong sym.ipa_wigig_dereg_intf.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_dereg_intf",0x995);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x448);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_dereg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d6a8);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x8002090);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijP19ipa_wdi_buffer_infoE_global_addr @ 0x08006368 (size 8) =====

ulong sym.__typeid__ZTSFijP19ipa_wdi_buffer_infoE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_release_smmu_mapping",0x622);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x268);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_release_smmu_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a24c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006368 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x61604d934ba0d9d8,pcVar2,0x80018f0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_create_smmu_mapping.cfi_jt @ 0x08006370 (size 8) =====

ulong sym.ipa_wdi_create_smmu_mapping.cfi_jt(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_create_smmu_mapping",0x616);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x260);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_create_smmu_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a180);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006368 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x61604d934ba0d9d8,pcVar2,0x80018d0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa.cfi_jt @ 0x08006378 (size 8) =====

void sym.ipa_fmwk_register_ipa.cfi_jt(code *param_1)

{
    int64_t *piVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    code *unaff_x19;
    int64_t *piVar6;
    code *pcVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        param_1 = unaff_x19;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar4 = *0x8001000;
        if (**0x8001000 == '\0') {
            *(*0x8001000 + 0x70) = *param_1;
            piVar6 = *(pcVar4 + 8);
            *(pcVar4 + 0x78) = *(param_1 + 8);
            *(pcVar4 + 0x88) = *(param_1 + 0x18);
            *(pcVar4 + 0x80) = *(param_1 + 0x10);
            *(pcVar4 + 0x90) = *(param_1 + 0x20);
            *(pcVar4 + 0x98) = *(param_1 + 0x28);
            *(pcVar4 + 0xa0) = *(param_1 + 0x30);
            *(pcVar4 + 0xa8) = *(param_1 + 0x38);
            *(pcVar4 + 0xb0) = *(param_1 + 0x40);
            *(pcVar4 + 0xb8) = *(param_1 + 0x48);
            *(pcVar4 + 0xc0) = *(param_1 + 0x50);
            *(pcVar4 + 200) = *(param_1 + 0x58);
            *(pcVar4 + 0xd0) = *(param_1 + 0x60);
            *(pcVar4 + 0xd8) = *(param_1 + 0x68);
            *(pcVar4 + 0xe0) = *(param_1 + 0x70);
            *(pcVar4 + 0xe8) = *(param_1 + 0x78);
            *(pcVar4 + 0xf0) = *(param_1 + 0x80);
            *(pcVar4 + 0xf8) = *(param_1 + 0x88);
            *(pcVar4 + 0x100) = *(param_1 + 0x90);
            *(pcVar4 + 0x108) = *(param_1 + 0x98);
            *(pcVar4 + 0x110) = *(param_1 + 0xa0);
            *(pcVar4 + 0x118) = *(param_1 + 0xa8);
            *(pcVar4 + 0x120) = *(param_1 + 0xb0);
            *(pcVar4 + 0x128) = *(param_1 + 0xb8);
            *(pcVar4 + 0x1c0) = *(param_1 + 0x128);
            *(pcVar4 + 0x1a8) = *(param_1 + 0x110);
            *(pcVar4 + 0x1b0) = *(param_1 + 0x118);
            *(pcVar4 + 0x1b8) = *(param_1 + 0x120);
            *(pcVar4 + 0x130) = *(param_1 + 0xc0);
            *(pcVar4 + 0x138) = *(param_1 + 200);
            *(pcVar4 + 0x140) = *(param_1 + 0xd0);
            *(pcVar4 + 0x148) = *(param_1 + 0xd8);
            *(pcVar4 + 0x150) = *(param_1 + 0xe0);
            *(pcVar4 + 0x158) = *(param_1 + 0xe8);
            *(pcVar4 + 0x160) = *(param_1 + 0xf0);
            *(pcVar4 + 0x168) = *(param_1 + 0xf8);
            *(pcVar4 + 0x170) = *(param_1 + 0x100);
            *(pcVar4 + 0x178) = *(param_1 + 0x108);
            *(pcVar4 + 0x288) = *(param_1 + 0x130);
            *(pcVar4 + 0x290) = *(param_1 + 0x138);
            *(pcVar4 + 0x298) = *(param_1 + 0x140);
            *(pcVar4 + 0x2a0) = *(param_1 + 0x148);
            *(pcVar4 + 0x2a8) = *(param_1 + 0x150);
            *(pcVar4 + 0x2b0) = *(param_1 + 0x158);
            *(pcVar4 + 0x2b8) = *(param_1 + 0x160);
            *(pcVar4 + 0x2c0) = *(param_1 + 0x168);
            *(pcVar4 + 0x180) = *(param_1 + 0x170);
            *(pcVar4 + 0x188) = *(param_1 + 0x178);
            *(pcVar4 + 400) = *(param_1 + 0x180);
            *(pcVar4 + 0x198) = *(param_1 + 0x188);
            *(pcVar4 + 0x1a0) = *(param_1 + 400);
            *(pcVar4 + 0x4d8) = *(param_1 + 0x198);
            *(pcVar4 + 0x4f0) = *(param_1 + 0x1a0);
            uVar2 = *(param_1 + 0x1a8);
            *pcVar4 = '\x01';
            *(pcVar4 + 0x4f8) = uVar2;
            if (piVar6 != pcVar4 + 8) {
                param_1 = 0x8002330;
                do {
                    pcVar7 = piVar6[2];
                    piVar8 = *piVar6;
                    if (pcVar7 != NULL) {
                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar7,0x8002330);
                        (*pcVar7)(piVar6[3]);
                    }
                    uVar3 = __list_del_entry_valid(piVar6);
                    if ((uVar3 & 1) != 0) {
                        iVar5 = *piVar6;
                        piVar1 = piVar6[1];
                        *(iVar5 + 8) = piVar1;
                        *piVar1 = iVar5;
                    }
                    *piVar6 = -0x2152ffffffffff00;
                    piVar6[1] = -0x2152fffffffffede;
                    kfree(piVar6);
                    pcVar4 = *0x8001000;
                    piVar6 = piVar8;
                } while (piVar8 != *0x8001000 + 8);
            }
            iVar5 = *(pcVar4 + 0x48);
            if (iVar5 == 0) goto code_r0x08006880;
            param_1 = *(pcVar4 + 0x3d0);
            uStack_60 = *(pcVar4 + 0x50);
            iStack_68 = 0;
            uStack_50 = *(pcVar4 + 0x68);
            iStack_58 = iVar5;
            if (param_1 != sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr) goto code_r0x080069b0;
            goto code_r0x08006838;
        }
        _printk(0x8002786);
        mutex_unlock(*0x8001000 + 0x18);
    }
    uVar2 = 0xffffffff;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_48) {
        __stack_chk_fail(uVar2);
code_r0x080069b0:
        __cfi_slowpath_diag(0xa1ff277cb8c62bf4,param_1,0x8002350);
code_r0x08006838:
        (*param_1)(&iStack_68);
        pcVar4 = *0x8001000;
        if (iStack_68 != '\0') {
            param_1 = *(*0x8001000 + 0x48);
            __cfi_slowpath_diag(0x4c550309df1cf4c1,param_1,0x8002370);
            (*param_1)(*(*0x8001000 + 0x50));
            pcVar4 = *0x8001000;
        }
code_r0x08006880:
        iVar5 = *(pcVar4 + 0x58);
        if (iVar5 != 0) {
            param_1 = *(pcVar4 + 0x4a0);
            uStack_60 = *(pcVar4 + 0x60);
            iStack_58 = 0;
            iStack_68 = iVar5;
            if (1 < (param_1 + -0x8006220 >> 3 | param_1 << 0x3d)) {
                __cfi_slowpath_diag(0xfa2bdca0c05ed791,param_1,0x8002390);
            }
            (*param_1)(&iStack_68);
            pcVar4 = *0x8001000;
        }
        mutex_unlock(pcVar4 + 0x18);
        _printk(0x8002c94);
        uVar2 = 0;
    }
    return;
}


// ===== sym.__typeid__ZTSFiP31ipa_wdi_capabilities_out_paramsE_global_addr @ 0x08006380 (size 8) =====

ulong sym.__typeid__ZTSFiP31ipa_wdi_capabilities_out_paramsE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_get_capabilities",0x62c);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_get_capabilities");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a310);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP31ipa_wdi_capabilities_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x47f10df79a658ba3,pcVar2,0x8001910);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP15ipa_ioc_get_hdrE_global_addr @ 0x08006388 (size 8) =====

ulong sym.__typeid__ZTSFiP15ipa_ioc_get_hdrE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_hdr",0x3ea);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80081e4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_get_hdrE_global_addr) {
            __cfi_slowpath_diag(0xb8ea5be5bb9c84fa,pcVar2,0x8001450);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP14ipa_eth_clientP20ipa_eth_perf_profileE_global_addr @ 0x08006390 (size 8) =====

ulong sym.__typeid__ZTSFiP14ipa_eth_clientP20ipa_eth_perf_profileE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_set_perf_profile",0xa91);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e4ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP14ipa_eth_clientP20ipa_eth_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xdd8dc13c028d7688,pcVar2,0x80022b0);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi15ipa_client_typeE_global_addr @ 0x08006398 (size 8) =====

ulong sym.__typeid__ZTSFi15ipa_client_typeE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_ep_mapping",0x347);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 200);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_ep_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80075ac);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8001250);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_disable_pipe.cfi_jt @ 0x080063a0 (size 8) =====

ulong sym.ipa_wigig_disable_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_disable_pipe",0x9ea);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x480);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_disable_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dc14);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002170);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_disconn_pipe.cfi_jt @ 0x080063a8 (size 8) =====

ulong sym.ipa_wigig_disconn_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_disconn_pipe",0x9d4);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x470);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_disconn_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800da7c);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002130);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_enable_pipe.cfi_jt @ 0x080063b0 (size 8) =====

ulong sym.ipa_wigig_enable_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_enable_pipe",0x9df);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x478);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_enable_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800db48);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002150);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi15ipa_client_typePjE_global_addr @ 0x080063b8 (size 8) =====

ulong sym.__typeid__ZTSFi15ipa_client_typePjE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_default_aggr_time_limit",0xa9d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_default_aggr_time_limit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e5b0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typePjE_global_addr) {
            __cfi_slowpath_diag(0xbdaac4eb753a786a,pcVar2,0x80022d0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijjP19ipa_wdi_buffer_infoE_global_addr @ 0x080063c0 (size 8) =====

ulong sym.__typeid__ZTSFijjP19ipa_wdi_buffer_infoE_global_addr(uint64_t param_1,uint64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_create_smmu_mapping_per_inst",0x69b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 800);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_create_smmu_mapping_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aaf0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x8af29596e3809c7c,pcVar2,0x8001a50);
            param_2 = param_2 & 0xffffffff;
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_release_smmu_mapping_per_inst.cfi_jt @ 0x080063c8 (size 8) =====

ulong sym.ipa_wdi_release_smmu_mapping_per_inst.cfi_jt(uint64_t param_1,uint64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_release_smmu_mapping_per_inst",0x6a7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x328);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_release_smmu_mapping_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800abc0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x8af29596e3809c7c,pcVar2,0x8001a70);
            param_2 = param_2 & 0xffffffff;
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiPvE_global_addr @ 0x080063d0 (size 8) =====

ulong sym.__typeid__ZTSFiPvE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_notifier",0x4ad);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_notifier");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008f0c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063d0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar2,0x8001670);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_register_notifier.cfi_jt @ 0x080063d8 (size 8) =====

ulong sym.ipa_register_notifier.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_notifier",0x4a3);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x198);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_notifier");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008e48);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063d0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar2,0x8001650);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFbvE_global_addr @ 0x080063e0 (size 8) =====

uint32_t sym.__typeid__ZTSFbvE_global_addr(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_get_lan_rx_napi",0x301);
        uVar1 = 0;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x90);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_lan_rx_napi");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800702c);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x8001170);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_wdi_is_tx1_used.cfi_jt @ 0x080063e8 (size 8) =====

uint32_t sym.ipa_wdi_is_tx1_used.cfi_jt(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_is_tx1_used",0x5b4);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_is_tx1_used");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009a98);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x80017b0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_wigig_is_smmu_enabled.cfi_jt @ 0x080063f0 (size 8) =====

uint32_t sym.ipa_wigig_is_smmu_enabled.cfi_jt(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_wigig_is_smmu_enabled",0x97f);
        uVar1 = 0;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x438);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_is_smmu_enabled");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d524);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x8002050);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_is_ready.cfi_jt @ 0x080063f8 (size 8) =====

bool sym.ipa_is_ready.cfi_jt(void)

{
    if (*0x8001000 != NULL) {
        return **0x8001000 != '\0';
    }
    return false;
}


// ===== sym.__typeid__ZTSFiP19ipa_ioc_add_rt_ruleE_global_addr @ 0x08006400 (size 8) =====

ulong sym.__typeid__ZTSFiP19ipa_ioc_add_rt_ruleE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_rt_rule",0x3ac);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x118);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_rt_rule");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007d50);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP19ipa_ioc_add_rt_ruleE_global_addr) {
            __cfi_slowpath_diag(0x777d7cdae0aace60,pcVar2,0x8001390);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP16ipa_socksv5_infoE_global_addr @ 0x08006408 (size 8) =====

ulong sym.__typeid__ZTSFiP16ipa_socksv5_infoE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_socksv5_conn",0x48f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_socksv5_conn");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008cb8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP16ipa_socksv5_infoE_global_addr) {
            __cfi_slowpath_diag(0x5d67af067eb09d46,pcVar2,0x8001610);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP15ipa_ioc_del_hdrE_global_addr @ 0x08006410 (size 8) =====

ulong sym.__typeid__ZTSFiP15ipa_ioc_del_hdrE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_del_hdr",0x3e0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_del_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008128);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_del_hdrE_global_addr) {
            __cfi_slowpath_diag(0x9f93888aa6f92d92,pcVar2,0x8001430);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFibE_global_addr @ 0x08006418 (size 8) =====

ulong sym.__typeid__ZTSFibE_global_addr(uint32_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_single_ndp_per_mbim",0x408);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x140);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_single_ndp_per_mbim");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800842c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006418 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x16160375c26fc5,pcVar2,0x80014b0);
        }
        uVar1 = (*pcVar2)(param_1 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_suspend.cfi_jt @ 0x08006420 (size 8) =====

ulong sym.ipa_mhi_suspend.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_suspend",0x904);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x400);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ce74);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006418 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x16160375c26fc5,pcVar2,0x8001f70);
        }
        uVar1 = (*pcVar2)(param_1 & 1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffE_global_addr @ 0x08006428 (size 8) =====

ulong sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffE_global_addr(uint64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_tx_dp",0x9f6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x488);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dcd8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffE_global_addr) {
            __cfi_slowpath_diag(0xd140388dfb15327a,pcVar2,0x8002190);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFijE_global_addr @ 0x08006430 (size 8) =====

ulong sym.__typeid__ZTSFijE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disable_pipes_per_inst",0x683);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x310);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disable_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a960);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001a10);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_connect.cfi_jt @ 0x08006438 (size 8) =====

ulong sym.ipa_bridge_connect.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_connect",0x7e2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x370);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_connect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800be70);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d30);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_disconn_pipes.cfi_jt @ 0x08006440 (size 8) =====

ulong sym.ipa_uc_offload_disconn_pipes.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_disconn_pipes",0x878);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c738);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001e70);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_stop_gsi_channel.cfi_jt @ 0x08006448 (size 8) =====

ulong sym.ipa_stop_gsi_channel.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_stop_gsi_channel",0x434);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x160);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_stop_gsi_channel");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008724);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001530);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_cleanup.cfi_jt @ 0x08006450 (size 8) =====

ulong sym.ipa_bridge_cleanup.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_cleanup",0x825);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c33c);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001df0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_disconnect_wdi_pipe.cfi_jt @ 0x08006458 (size 8) =====

ulong sym.ipa_disconnect_wdi_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_disconnect_wdi_pipe",0x6ef);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_disconnect_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b148);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001b50);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_teardown_sys_pipe.cfi_jt @ 0x08006460 (size 8) =====

ulong sym.ipa_teardown_sys_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_teardown_sys_pipe",0x36d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xe8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_teardown_sys_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80078c0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80012d0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_put_rt_tbl.cfi_jt @ 0x08006468 (size 8) =====

ulong sym.ipa_put_rt_tbl.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_put_rt_tbl",0x3b6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x120);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_put_rt_tbl");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007e14);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80013b0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_disconnect_pipe.cfi_jt @ 0x08006470 (size 8) =====

ulong sym.ipa_mhi_disconnect_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_disconnect_pipe",0x8f9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_disconnect_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cda4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001f50);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_del_socksv5_conn.cfi_jt @ 0x08006478 (size 8) =====

ulong sym.ipa_del_socksv5_conn.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_del_socksv5_conn",0x499);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_del_socksv5_conn");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008d7c);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001630);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_disconnect.cfi_jt @ 0x08006480 (size 8) =====

ulong sym.ipa_bridge_disconnect.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_disconnect",0x7f8);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x380);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_disconnect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c008);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d70);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_set_perf_profile.cfi_jt @ 0x08006488 (size 8) =====

ulong sym.ipa_wigig_set_perf_profile.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_set_perf_profile",0xa01);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x490);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dda4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80021b0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_resume.cfi_jt @ 0x08006490 (size 8) =====

ulong sym.ipa_bridge_resume.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_resume",0x80e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x390);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c1a0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001db0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_suspend_wdi_pipe.cfi_jt @ 0x08006498 (size 8) =====

ulong sym.ipa_suspend_wdi_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_suspend_wdi_pipe",0x6da);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_suspend_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800afb8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001b10);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disconn_pipes_per_inst.cfi_jt @ 0x080064a0 (size 8) =====

ulong sym.ipa_wdi_disconn_pipes_per_inst.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disconn_pipes_per_inst",0x66f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x300);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disconn_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a7c8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80019d0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_suspend.cfi_jt @ 0x080064a8 (size 8) =====

ulong sym.ipa_bridge_suspend.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_suspend",0x803);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x388);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c0d4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d90);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_resume_wdi_pipe.cfi_jt @ 0x080064b0 (size 8) =====

ulong sym.ipa_resume_wdi_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_resume_wdi_pipe",0x6d0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x298);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_resume_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aeec);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001af0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_cleanup_per_inst.cfi_jt @ 0x080064b8 (size 8) =====

ulong sym.ipa_wdi_cleanup_per_inst.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_cleanup_per_inst",0x642);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_cleanup_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a4a0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001950);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_enable_wdi_pipe.cfi_jt @ 0x080064c0 (size 8) =====

ulong sym.ipa_enable_wdi_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_enable_wdi_pipe",0x6bc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x288);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_enable_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ad54);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001ab0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_enable_pipes_per_inst.cfi_jt @ 0x080064c8 (size 8) =====

ulong sym.ipa_wdi_enable_pipes_per_inst.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_enable_pipes_per_inst",0x679);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x308);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_enable_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a894);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80019f0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_cleanup.cfi_jt @ 0x080064d0 (size 8) =====

ulong sym.ipa_uc_offload_cleanup.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_cleanup",0x861);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c5a8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001e30);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_disable_wdi_pipe.cfi_jt @ 0x080064d8 (size 8) =====

ulong sym.ipa_disable_wdi_pipe.cfi_jt(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_disable_wdi_pipe",0x6c6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x290);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_disable_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ae20);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001ad0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP18ipa_smmu_in_paramsP19ipa_smmu_out_paramsE_global_addr @ 0x080064e0 (size 8) =====

ulong sym.__typeid__ZTSFiP18ipa_smmu_in_paramsP19ipa_smmu_out_paramsE_global_addr(ulong param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_smmu_params",0x2f7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x80);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_smmu_params");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006f60);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP18ipa_smmu_in_paramsP19ipa_smmu_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xe9238bde543a2fbf,pcVar2,0x8001150);
        }
        uVar1 = (*pcVar2)(param_1,param_2);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi17ipa_usb_teth_protE_global_addr @ 0x080064e8 (size 8) =====

ulong sym.__typeid__ZTSFi17ipa_usb_teth_protE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_deinit_teth_prot",0x505);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_deinit_teth_prot");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009324);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi17ipa_usb_teth_protE_global_addr) {
            __cfi_slowpath_diag(0x2c101b1240ffeca0,pcVar2,0x80016f0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFivE_global_addr @ 0x080064f0 (size 8) =====

ulong sym.__typeid__ZTSFivE_global_addr(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_cleanup",0x5be);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x210);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009b60);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80017d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_restore_suspend_handler.cfi_jt @ 0x080064f8 (size 8) =====

ulong sym.ipa_restore_suspend_handler.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_restore_suspend_handler",0x420);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x150);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_restore_suspend_handler");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80085d4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80014f0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_enable_pipes.cfi_jt @ 0x08006500 (size 8) =====

ulong sym.ipa_wdi_enable_pipes.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_enable_pipes",0x5f5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x248);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_enable_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009f3c);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001870);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disable_pipes.cfi_jt @ 0x08006508 (size 8) =====

ulong sym.ipa_wdi_disable_pipes.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disable_pipes",0x5ff);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x250);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disable_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a000);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001890);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dma_init.cfi_jt @ 0x08006510 (size 8) =====

ulong sym.ipa_dma_init.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_init",0x30b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x98);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80070f4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001190);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_qdss_disconn_pipes.cfi_jt @ 0x08006518 (size 8) =====

ulong sym.ipa_qdss_disconn_pipes.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_qdss_disconn_pipes",0x78f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x230);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_qdss_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bb70);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001cf0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wigig_save_regs.cfi_jt @ 0x08006520 (size 8) =====

ulong sym.ipa_wigig_save_regs.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_save_regs",0xa0b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x498);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_save_regs");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800de70);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80021d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_deepsleep_entry_ipa.cfi_jt @ 0x08006528 (size 8) =====

uint sym.ipa_fmwk_deepsleep_entry_ipa.cfi_jt(void)

{
    uchar *puVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        puVar1 = *0x8001000 + 0x18;
        **0x8001000 = 0;
        mutex_unlock(puVar1);
        uVar3 = 0;
        uVar2 = 0x80029c8;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_dma_enable.cfi_jt @ 0x08006530 (size 8) =====

ulong sym.ipa_dma_enable.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_enable",0x315);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xa0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_enable");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80071b8);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80011b0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disconn_pipes.cfi_jt @ 0x08006538 (size 8) =====

ulong sym.ipa_wdi_disconn_pipes.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disconn_pipes",0x5eb);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x240);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009e78);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001850);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dma_disable.cfi_jt @ 0x08006540 (size 8) =====

ulong sym.ipa_dma_disable.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_disable",799);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xa8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_disable");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800727c);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80011d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wigig_cleanup.cfi_jt @ 0x08006548 (size 8) =====

ulong sym.ipa_wigig_cleanup.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_cleanup",0x975);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x430);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d460);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8002030);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.init_module.cfi_jt @ 0x08006550 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800349f);
    iVar1 = kmem_cache_alloc_trace(__printk,0xdc0,0x500);
    *0x8001000 = iVar1;
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 8) = iVar1 + 8;
        *(iVar1 + 0x10) = iVar1 + 8;
        __mutex_init(iVar1 + 0x18,"&ipa_fmwk_ctx->lock",obj.ipa_fmwk_init.__key);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.ipa_unregister_rmnet_ll_cb.cfi_jt @ 0x08006558 (size 8) =====

ulong sym.ipa_unregister_rmnet_ll_cb.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_rmnet_ll_cb",0x485);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 400);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_rmnet_ll_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008bfc);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80015f0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_get_wdi_version.cfi_jt @ 0x08006560 (size 8) =====

ulong sym.ipa_get_wdi_version.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_wdi_version",0x5aa);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x208);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_wdi_version");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80099d4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001790);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_mhi_resume.cfi_jt @ 0x08006568 (size 8) =====

ulong sym.ipa_mhi_resume.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_resume",0x90e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x408);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cf40);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001f90);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dereg_uc_rdyCB.cfi_jt @ 0x08006570 (size 8) =====

ulong sym.ipa_dereg_uc_rdyCB.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dereg_uc_rdyCB",0x763);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dereg_uc_rdyCB");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b868);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001c70);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_unregister_rmnet_ctl_cb.cfi_jt @ 0x08006578 (size 8) =====

ulong sym.ipa_unregister_rmnet_ctl_cb.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_rmnet_ctl_cb",0x45c);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x178);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_rmnet_ctl_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008994);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001590);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_deepsleep_exit_ipa.cfi_jt @ 0x08006580 (size 8) =====

uint sym.ipa_fmwk_deepsleep_exit_ipa.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uchar *puVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        uVar6 = 0xffffffff;
        uVar4 = 0x8002407;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        piVar7 = *(*0x8001000 + 8);
        if (piVar7 != *0x8001000 + 8) {
            do {
                pcVar8 = piVar7[2];
                piVar9 = *piVar7;
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar8,0x8002330);
                    (*pcVar8)(piVar7[3]);
                }
                uVar5 = __list_del_entry_valid(piVar7);
                if ((uVar5 & 1) != 0) {
                    iVar1 = *piVar7;
                    piVar2 = piVar7[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar7 = -0x2152ffffffffff00;
                piVar7[1] = -0x2152fffffffffede;
                kfree(piVar7);
                piVar7 = piVar9;
            } while (piVar9 != *0x8001000 + 8);
        }
        puVar3 = *0x8001000 + 0x18;
        **0x8001000 = 1;
        mutex_unlock(puVar3);
        uVar6 = 0;
        uVar4 = 0x8002c94;
    }
    _printk(uVar4);
    return uVar6;
}


// ===== sym.__typeid__ZTSFiP14ipa_eth_clientE_global_addr @ 0x08006588 (size 8) =====

ulong sym.__typeid__ZTSFiP14ipa_eth_clientE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_conn_pipes",0xa64);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e1e4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006588 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf24b8b5adc6de50e,pcVar2,0x8002230);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_disconn_pipes.cfi_jt @ 0x08006590 (size 8) =====

ulong sym.ipa_eth_client_disconn_pipes.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_disconn_pipes",0xa6f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e2a8);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006588 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf24b8b5adc6de50e,pcVar2,0x8002250);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP23IpaHwStatsWDIInfoData_tE_global_addr @ 0x08006598 (size 8) =====

ulong sym.__typeid__ZTSFiP23IpaHwStatsWDIInfoData_tE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_wdi_stats",0x377);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xf0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_wdi_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800798c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006598 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xea1afe0fed610dbb,pcVar2,0x80012f0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_get_stats.cfi_jt @ 0x080065a0 (size 8) =====

ulong sym.ipa_wdi_get_stats.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_get_stats",0x6b2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x270);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_get_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ac90);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006598 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xea1afe0fed610dbb,pcVar2,0x8001a90);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvvE_global_addr @ 0x080065a8 (size 8) =====

void sym.__typeid__ZTSFvvE_global_addr(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*0x8001000 + 8);
    if (piVar4 != *0x8001000 + 8) {
        do {
            piVar5 = *piVar4;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar5;
        } while (piVar5 != *0x8001000 + 8);
    }
    kfree();
    *0x8001000 = 0;
    return;
}


// ===== sym.ipa_mhi_destroy.cfi_jt @ 0x080065b0 (size 8) =====

void sym.ipa_mhi_destroy.cfi_jt(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_mhi_destroy",0x916);
    }
    else {
        pcVar1 = *(*0x8001000 + 0x410);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_destroy");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800d000);
            (*pcVar1)();
        }
        if (2 < (pcVar1 + -0x80065a8 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x8001fb0);
        }
        (*pcVar1)();
    }
    return;
}


// ===== sym.ipa_dma_destroy.cfi_jt @ 0x080065b8 (size 8) =====

void sym.ipa_dma_destroy.cfi_jt(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_dma_destroy",0x33e);
    }
    else {
        pcVar1 = *(*0x8001000 + 0xc0);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_destroy");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x80074ec);
            (*pcVar1)();
        }
        if (2 < (pcVar1 + -0x80065a8 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x8001230);
        }
        (*pcVar1)();
    }
    return;
}


// ===== sym.__typeid__ZTSFPK17ipa_gsi_ep_config15ipa_client_typeE_global_addr @ 0x080065c0 (size 8) =====

ulong sym.__typeid__ZTSFPK17ipa_gsi_ep_config15ipa_client_typeE_global_addr(uint64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8001000 == 0) || (pcVar2 = *(*0x8001000 + 0x158), pcVar2 == NULL)) {
        uVar1 = 0;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFPK17ipa_gsi_ep_config15ipa_client_typeE_global_addr) {
            __cfi_slowpath_diag(0xdc8216d8c509147,pcVar2,0x8001510);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP17ipa_eth_intf_infoE_global_addr @ 0x080065c8 (size 8) =====

ulong sym.__typeid__ZTSFiP17ipa_eth_intf_infoE_global_addr(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_unreg_intf",0xa85);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_unreg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e430);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80065c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4751ceb51a2067b1,pcVar2,0x8002290);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_reg_intf.cfi_jt @ 0x080065d0 (size 8) =====

ulong sym.ipa_eth_client_reg_intf.cfi_jt(ulong param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_reg_intf",0xa7a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e36c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80065c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4751ceb51a2067b1,pcVar2,0x8002270);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFi12ipa_irq_typePFvS_PvS0_EbS0_E_global_addr @ 0x080065d8 (size 8) =====

ulong sym.__typeid__ZTSFi12ipa_irq_typePFvS_PvS0_EbS0_E_global_addr
                (uint64_t param_1,ulong param_2,uint32_t param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_interrupt_handler",0x416);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x148);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_interrupt_handler");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80084f4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi12ipa_irq_typePFvS_PvS0_EbS0_E_global_addr) {
            __cfi_slowpath_diag(0x77a6cd636d8fbec8,pcVar2,0x80014d0);
            param_1 = param_1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3 & 1,param_4);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa @ 0x080065e0 (size 1048) =====

void sym.ipa_fmwk_register_ipa(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    code *unaff_x19;
    int64_t *piVar6;
    code *pcVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        arg1 = unaff_x19;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar4 = *0x8001000;
        if (**0x8001000 == '\0') {
            *(*0x8001000 + 0x70) = *arg1;
            piVar6 = *(pcVar4 + 8);
            *(pcVar4 + 0x78) = *(arg1 + 8);
            *(pcVar4 + 0x88) = *(arg1 + 0x18);
            *(pcVar4 + 0x80) = *(arg1 + 0x10);
            *(pcVar4 + 0x90) = *(arg1 + 0x20);
            *(pcVar4 + 0x98) = *(arg1 + 0x28);
            *(pcVar4 + 0xa0) = *(arg1 + 0x30);
            *(pcVar4 + 0xa8) = *(arg1 + 0x38);
            *(pcVar4 + 0xb0) = *(arg1 + 0x40);
            *(pcVar4 + 0xb8) = *(arg1 + 0x48);
            *(pcVar4 + 0xc0) = *(arg1 + 0x50);
            *(pcVar4 + 200) = *(arg1 + 0x58);
            *(pcVar4 + 0xd0) = *(arg1 + 0x60);
            *(pcVar4 + 0xd8) = *(arg1 + 0x68);
            *(pcVar4 + 0xe0) = *(arg1 + 0x70);
            *(pcVar4 + 0xe8) = *(arg1 + 0x78);
            *(pcVar4 + 0xf0) = *(arg1 + 0x80);
            *(pcVar4 + 0xf8) = *(arg1 + 0x88);
            *(pcVar4 + 0x100) = *(arg1 + 0x90);
            *(pcVar4 + 0x108) = *(arg1 + 0x98);
            *(pcVar4 + 0x110) = *(arg1 + 0xa0);
            *(pcVar4 + 0x118) = *(arg1 + 0xa8);
            *(pcVar4 + 0x120) = *(arg1 + 0xb0);
            *(pcVar4 + 0x128) = *(arg1 + 0xb8);
            *(pcVar4 + 0x1c0) = *(arg1 + 0x128);
            *(pcVar4 + 0x1a8) = *(arg1 + 0x110);
            *(pcVar4 + 0x1b0) = *(arg1 + 0x118);
            *(pcVar4 + 0x1b8) = *(arg1 + 0x120);
            *(pcVar4 + 0x130) = *(arg1 + 0xc0);
            *(pcVar4 + 0x138) = *(arg1 + 200);
            *(pcVar4 + 0x140) = *(arg1 + 0xd0);
            *(pcVar4 + 0x148) = *(arg1 + 0xd8);
            *(pcVar4 + 0x150) = *(arg1 + 0xe0);
            *(pcVar4 + 0x158) = *(arg1 + 0xe8);
            *(pcVar4 + 0x160) = *(arg1 + 0xf0);
            *(pcVar4 + 0x168) = *(arg1 + 0xf8);
            *(pcVar4 + 0x170) = *(arg1 + 0x100);
            *(pcVar4 + 0x178) = *(arg1 + 0x108);
            *(pcVar4 + 0x288) = *(arg1 + 0x130);
            *(pcVar4 + 0x290) = *(arg1 + 0x138);
            *(pcVar4 + 0x298) = *(arg1 + 0x140);
            *(pcVar4 + 0x2a0) = *(arg1 + 0x148);
            *(pcVar4 + 0x2a8) = *(arg1 + 0x150);
            *(pcVar4 + 0x2b0) = *(arg1 + 0x158);
            *(pcVar4 + 0x2b8) = *(arg1 + 0x160);
            *(pcVar4 + 0x2c0) = *(arg1 + 0x168);
            *(pcVar4 + 0x180) = *(arg1 + 0x170);
            *(pcVar4 + 0x188) = *(arg1 + 0x178);
            *(pcVar4 + 400) = *(arg1 + 0x180);
            *(pcVar4 + 0x198) = *(arg1 + 0x188);
            *(pcVar4 + 0x1a0) = *(arg1 + 400);
            *(pcVar4 + 0x4d8) = *(arg1 + 0x198);
            *(pcVar4 + 0x4f0) = *(arg1 + 0x1a0);
            uVar2 = *(arg1 + 0x1a8);
            *pcVar4 = '\x01';
            *(pcVar4 + 0x4f8) = uVar2;
            if (piVar6 != pcVar4 + 8) {
                arg1 = 0x8002330;
                do {
                    pcVar7 = piVar6[2];
                    piVar8 = *piVar6;
                    if (pcVar7 != NULL) {
                        __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar7,0x8002330);
                        (*pcVar7)(piVar6[3]);
                    }
                    uVar3 = __list_del_entry_valid(piVar6);
                    if ((uVar3 & 1) != 0) {
                        iVar5 = *piVar6;
                        piVar1 = piVar6[1];
                        *(iVar5 + 8) = piVar1;
                        *piVar1 = iVar5;
                    }
                    *piVar6 = -0x2152ffffffffff00;
                    piVar6[1] = -0x2152fffffffffede;
                    kfree(piVar6);
                    pcVar4 = *0x8001000;
                    piVar6 = piVar8;
                } while (piVar8 != *0x8001000 + 8);
            }
            iVar5 = *(pcVar4 + 0x48);
            if (iVar5 == 0) goto code_r0x08006880;
            arg1 = *(pcVar4 + 0x3d0);
            uStack_60 = *(pcVar4 + 0x50);
            iStack_68 = 0;
            uStack_50 = *(pcVar4 + 0x68);
            iStack_58 = iVar5;
            if (arg1 != sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr) goto code_r0x080069b0;
            goto code_r0x08006838;
        }
        _printk(0x8002786);
        mutex_unlock(*0x8001000 + 0x18);
    }
    uVar2 = 0xffffffff;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_48) {
        __stack_chk_fail(uVar2);
code_r0x080069b0:
        __cfi_slowpath_diag(0xa1ff277cb8c62bf4,arg1,0x8002350);
code_r0x08006838:
        (*arg1)(&iStack_68);
        pcVar4 = *0x8001000;
        if (iStack_68 != '\0') {
            arg1 = *(*0x8001000 + 0x48);
            __cfi_slowpath_diag(0x4c550309df1cf4c1,arg1,0x8002370);
            (*arg1)(*(*0x8001000 + 0x50));
            pcVar4 = *0x8001000;
        }
code_r0x08006880:
        iVar5 = *(pcVar4 + 0x58);
        if (iVar5 != 0) {
            arg1 = *(pcVar4 + 0x4a0);
            uStack_60 = *(pcVar4 + 0x60);
            iStack_58 = 0;
            iStack_68 = iVar5;
            if (1 < (arg1 + -0x8006220 >> 3 | arg1 << 0x3d)) {
                __cfi_slowpath_diag(0xfa2bdca0c05ed791,arg1,0x8002390);
            }
            (*arg1)(&iStack_68);
            pcVar4 = *0x8001000;
        }
        mutex_unlock(pcVar4 + 0x18);
        _printk(0x8002c94);
        uVar2 = 0;
    }
    return;
}


// ===== sym.ipa_is_ready @ 0x080069f8 (size 48) =====

bool sym.ipa_is_ready(int64_t arg1)

{
    if (*0x8001000 != NULL) {
        return **0x8001000 != '\0';
    }
    return false;
}


// ===== sym.ipa_fmwk_deepsleep_entry_ipa @ 0x08006a28 (size 108) =====

uint sym.ipa_fmwk_deepsleep_entry_ipa(void)

{
    uchar *puVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        puVar1 = *0x8001000 + 0x18;
        **0x8001000 = 0;
        mutex_unlock(puVar1);
        uVar3 = 0;
        uVar2 = 0x80029c8;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_fmwk_deepsleep_exit_ipa @ 0x08006a94 (size 276) =====

uint sym.ipa_fmwk_deepsleep_exit_ipa(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uchar *puVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    code *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        uVar6 = 0xffffffff;
        uVar4 = 0x8002407;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        piVar7 = *(*0x8001000 + 8);
        if (piVar7 != *0x8001000 + 8) {
            do {
                pcVar8 = piVar7[2];
                piVar9 = *piVar7;
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar8,0x8002330);
                    (*pcVar8)(piVar7[3]);
                }
                uVar5 = __list_del_entry_valid(piVar7);
                if ((uVar5 & 1) != 0) {
                    iVar1 = *piVar7;
                    piVar2 = piVar7[1];
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *piVar7 = -0x2152ffffffffff00;
                piVar7[1] = -0x2152fffffffffede;
                kfree(piVar7);
                piVar7 = piVar9;
            } while (piVar9 != *0x8001000 + 8);
        }
        puVar3 = *0x8001000 + 0x18;
        **0x8001000 = 1;
        mutex_unlock(puVar3);
        uVar6 = 0;
        uVar4 = 0x8002c94;
    }
    _printk(uVar4);
    return uVar6;
}


// ===== sym.ipa_register_ipa_ready_cb @ 0x08006ba8 (size 268) =====

ulong sym.ipa_register_ipa_ready_cb(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        if (**0x8001000 == '\0') {
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x20);
            pcVar2 = *0x8001000;
            if (piVar4 == NULL) {
                mutex_unlock(*0x8001000 + 0x18);
                uVar3 = 0xfffffff4;
            }
            else {
                piVar4[2] = arg1;
                piVar4[3] = arg2;
                puVar6 = *(pcVar2 + 0x10);
                uVar5 = __list_add_valid(piVar4,puVar6,pcVar2 + 8);
                if ((uVar5 & 1) != 0) {
                    *(pcVar2 + 0x10) = piVar4;
                    *piVar4 = pcVar2 + 8;
                    piVar4[1] = puVar6;
                    *puVar6 = piVar4;
                }
                mutex_unlock(*0x8001000 + 0x18);
                uVar3 = 0;
            }
        }
        else {
            mutex_unlock(*0x8001000 + 0x18);
            uVar3 = 0xffffffef;
        }
    }
    return uVar3;
}


// ===== sym.ipa_tx_dp @ 0x08006cb4 (size 208) =====

ulong sym.ipa_tx_dp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_tx_dp",0x2d6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x70);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006d10);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffP11ipa_tx_metaE_global_addr) {
            __cfi_slowpath_diag(0xc756a79cb0df9031,pcVar2,obj.ipa_fmwk_init.__key);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_get_hw_type @ 0x08006d84 (size 188) =====

ulong sym.ipa_get_hw_type(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_hw_type",0x2e0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x78);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_hw_type");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006de0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSF11ipa_hw_typevE_global_addr) {
            __cfi_slowpath_diag(0x2bd9767960fb4206,pcVar2,0x8001110);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_is_vlan_mode @ 0x08006e40 (size 196) =====

ulong sym.ipa_is_vlan_mode(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_is_vlan_mode",0x2eb);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x88);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_is_vlan_mode");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006e9c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_vlan_ifacesPbE_global_addr) {
            __cfi_slowpath_diag(0x68a2f32f4d7b8593,pcVar2,0x8001130);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_get_smmu_params @ 0x08006f04 (size 196) =====

ulong sym.ipa_get_smmu_params(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_smmu_params",0x2f7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x80);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_smmu_params");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8006f60);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP18ipa_smmu_in_paramsP19ipa_smmu_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xe9238bde543a2fbf,pcVar2,0x8001150);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_get_lan_rx_napi @ 0x08006fc8 (size 200) =====

uint32_t sym.ipa_get_lan_rx_napi(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_get_lan_rx_napi",0x301);
        uVar1 = 0;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x90);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_lan_rx_napi");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800702c);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x8001170);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_dma_init @ 0x08007090 (size 196) =====

ulong sym.ipa_dma_init(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_init",0x30b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x98);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80070f4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001190);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dma_enable @ 0x08007154 (size 196) =====

ulong sym.ipa_dma_enable(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_enable",0x315);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xa0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_enable");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80071b8);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80011b0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dma_disable @ 0x08007218 (size 196) =====

ulong sym.ipa_dma_disable(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_disable",799);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xa8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_disable");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800727c);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80011d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_dma_sync_memcpy @ 0x080072dc (size 216) =====

ulong sym.ipa_dma_sync_memcpy(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_sync_memcpy",0x32a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xb0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_sync_memcpy");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007338);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiyyiE_global_addr) {
            __cfi_slowpath_diag(0x7fc11eba39c0b471,pcVar2,0x80011f0);
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_dma_async_memcpy @ 0x080073b4 (size 216) =====

ulong sym.ipa_dma_async_memcpy(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dma_async_memcpy",0x336);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xb8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_async_memcpy");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007410);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiyyiPFvPvES_E_global_addr) {
            __cfi_slowpath_diag(0xbb5cfc706038bc45,pcVar2,0x8001210);
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_dma_destroy @ 0x0800748c (size 188) =====

void sym.ipa_dma_destroy(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_dma_destroy",0x33e);
    }
    else {
        pcVar1 = *(*0x8001000 + 0xc0);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dma_destroy");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x80074ec);
            (*pcVar1)();
        }
        if (2 < (pcVar1 + -0x80065a8 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x8001230);
        }
        (*pcVar1)();
    }
    return;
}


// ===== sym.ipa_get_ep_mapping @ 0x08007548 (size 204) =====

ulong sym.ipa_get_ep_mapping(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_ep_mapping",0x347);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 200);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_ep_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80075ac);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8001250);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_send_msg @ 0x08007614 (size 208) =====

ulong sym.ipa_send_msg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_send_msg",0x353);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xd0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_send_msg");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007670);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP12ipa_msg_metaPvPFvS1_jjEE_global_addr) {
            __cfi_slowpath_diag(0xeff3cb7dd3f2462f,pcVar2,0x8001270);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_free_skb @ 0x080076e4 (size 180) =====

void sym.ipa_free_skb(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_free_skb",0x35b);
    }
    else {
        pcVar1 = *(*0x8001000 + 0xd8);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_free_skb");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800773c);
            (*pcVar1)();
        }
        if (pcVar1 != sym.__typeid__ZTSFvP11ipa_rx_dataE_global_addr) {
            __cfi_slowpath_diag(0xbfde4f4890436e47,pcVar1,0x8001290);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.ipa_setup_sys_pipe @ 0x08007798 (size 196) =====

ulong sym.ipa_setup_sys_pipe(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_setup_sys_pipe",0x363);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xe0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_setup_sys_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80077f4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_sys_connect_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0xf1a530fb88f81fc7,pcVar2,0x80012b0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_teardown_sys_pipe @ 0x0800785c (size 204) =====

ulong sym.ipa_teardown_sys_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_teardown_sys_pipe",0x36d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xe8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_teardown_sys_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80078c0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80012d0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_get_wdi_stats @ 0x08007928 (size 196) =====

ulong sym.ipa_get_wdi_stats(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_wdi_stats",0x377);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xf0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_wdi_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800798c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006598 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xea1afe0fed610dbb,pcVar2,0x80012f0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_uc_bw_monitor @ 0x080079ec (size 196) =====

ulong sym.ipa_uc_bw_monitor(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_bw_monitor",0x381);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0xf8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_bw_monitor");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007a50);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xcde4f6e28251b9e5,pcVar2,0x8001310);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_broadcast_wdi_quota_reach_ind @ 0x08007ab0 (size 196) =====

ulong sym.ipa_broadcast_wdi_quota_reach_ind(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_broadcast_wdi_quota_reach_ind",0x38d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x100);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_broadcast_wdi_quota_reach_ind");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007b0c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijyE_global_addr) {
            __cfi_slowpath_diag(0x85ef646f2b5262c4,pcVar2,0x8001330);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_uc_wdi_get_dbpa @ 0x08007b74 (size 188) =====

ulong sym.ipa_uc_wdi_get_dbpa(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_wdi_get_dbpa",0x398);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x108);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_wdi_get_dbpa");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007bd0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP17ipa_wdi_db_paramsE_global_addr) {
            __cfi_slowpath_diag(0x732f5d12a9a9acf4,pcVar2,0x8001350);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_cfg_ep_ctrl @ 0x08007c30 (size 196) =====

ulong sym.ipa_cfg_ep_ctrl(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_cfg_ep_ctrl",0x3a2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x110);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_cfg_ep_ctrl");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007c8c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijPK15ipa_ep_cfg_ctrlE_global_addr) {
            __cfi_slowpath_diag(0xed8b647fa99ae40,pcVar2,0x8001370);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_add_rt_rule @ 0x08007cf4 (size 188) =====

ulong sym.ipa_add_rt_rule(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_rt_rule",0x3ac);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x118);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_rt_rule");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007d50);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP19ipa_ioc_add_rt_ruleE_global_addr) {
            __cfi_slowpath_diag(0x777d7cdae0aace60,pcVar2,0x8001390);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_put_rt_tbl @ 0x08007db0 (size 204) =====

ulong sym.ipa_put_rt_tbl(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_put_rt_tbl",0x3b6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x120);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_put_rt_tbl");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007e14);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80013b0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_register_intf @ 0x08007e7c (size 208) =====

ulong sym.ipa_register_intf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_intf",0x3c2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x128);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007ed8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPKcPK11ipa_tx_intfPK11ipa_rx_intfE_global_addr) {
            __cfi_slowpath_diag(0x5c725427fc76318e,pcVar2,0x80013d0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_deregister_intf @ 0x08007f4c (size 196) =====

ulong sym.ipa_deregister_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_deregister_intf",0x3cc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_deregister_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8007fb0);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x80013f0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_add_hdr @ 0x08008010 (size 188) =====

ulong sym.ipa_add_hdr(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_hdr",0x3d6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800806c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_add_hdrE_global_addr) {
            __cfi_slowpath_diag(0x16dd579837fbcad0,pcVar2,0x8001410);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_del_hdr @ 0x080080cc (size 188) =====

ulong sym.ipa_del_hdr(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_del_hdr",0x3e0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_del_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008128);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_del_hdrE_global_addr) {
            __cfi_slowpath_diag(0x9f93888aa6f92d92,pcVar2,0x8001430);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_get_hdr @ 0x08008188 (size 188) =====

ulong sym.ipa_get_hdr(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_hdr",0x3ea);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_hdr");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80081e4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_ioc_get_hdrE_global_addr) {
            __cfi_slowpath_diag(0xb8ea5be5bb9c84fa,pcVar2,0x8001450);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_set_aggr_mode @ 0x08008244 (size 196) =====

ulong sym.ipa_set_aggr_mode(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_aggr_mode",0x3f4);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x130);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_aggr_mode");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80082a0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi13ipa_aggr_modeE_global_addr) {
            __cfi_slowpath_diag(0xb5ecd5fc463850ee,pcVar2,0x8001470);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_set_qcncm_ndp_sig @ 0x08008308 (size 188) =====

ulong sym.ipa_set_qcncm_ndp_sig(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_qcncm_ndp_sig",0x3fe);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x138);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_qcncm_ndp_sig");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008364);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPcE_global_addr) {
            __cfi_slowpath_diag(0xf8ea10d0b8f3433,pcVar2,0x8001490);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_set_single_ndp_per_mbim @ 0x080083c4 (size 208) =====

ulong sym.ipa_set_single_ndp_per_mbim(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_single_ndp_per_mbim",0x408);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x140);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_single_ndp_per_mbim");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800842c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006418 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x16160375c26fc5,pcVar2,0x80014b0);
        }
        uVar1 = (*pcVar2)(arg1 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_add_interrupt_handler @ 0x08008494 (size 220) =====

ulong sym.ipa_add_interrupt_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_interrupt_handler",0x416);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x148);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_interrupt_handler");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80084f4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi12ipa_irq_typePFvS_PvS0_EbS0_E_global_addr) {
            __cfi_slowpath_diag(0x77a6cd636d8fbec8,pcVar2,0x80014d0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3 & 1,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_restore_suspend_handler @ 0x08008570 (size 196) =====

ulong sym.ipa_restore_suspend_handler(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_restore_suspend_handler",0x420);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x150);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_restore_suspend_handler");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80085d4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80014f0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_get_gsi_ep_info @ 0x08008634 (size 140) =====

ulong sym.ipa_get_gsi_ep_info(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8001000 == 0) || (pcVar2 = *(*0x8001000 + 0x158), pcVar2 == NULL)) {
        uVar1 = 0;
    }
    else {
        if (pcVar2 != sym.__typeid__ZTSFPK17ipa_gsi_ep_config15ipa_client_typeE_global_addr) {
            __cfi_slowpath_diag(0xdc8216d8c509147,pcVar2,0x8001510);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_stop_gsi_channel @ 0x080086c0 (size 204) =====

ulong sym.ipa_stop_gsi_channel(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_stop_gsi_channel",0x434);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x160);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_stop_gsi_channel");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008724);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001530);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_rmnet_ctl_xmit @ 0x0800878c (size 196) =====

ulong sym.ipa_rmnet_ctl_xmit(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_rmnet_ctl_xmit",0x43e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x168);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_rmnet_ctl_xmit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80087f0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006100 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar2,0x8001550);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_register_rmnet_ctl_cb @ 0x08008850 (size 224) =====

ulong sym.ipa_register_rmnet_ctl_cb(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_rmnet_ctl_cb",0x452);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x170);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_rmnet_ctl_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80088b4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006340 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf280c984a8ca65dd,pcVar2,0x8001570);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_unregister_rmnet_ctl_cb @ 0x08008930 (size 196) =====

ulong sym.ipa_unregister_rmnet_ctl_cb(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_rmnet_ctl_cb",0x45c);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x178);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_rmnet_ctl_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008994);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001590);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_rmnet_ll_xmit @ 0x080089f4 (size 196) =====

ulong sym.ipa_rmnet_ll_xmit(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_rmnet_ll_xmit",0x467);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x180);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_rmnet_ll_xmit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008a58);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006100 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xd960f35bf5d6bebf,pcVar2,0x80015b0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_register_rmnet_ll_cb @ 0x08008ab8 (size 224) =====

ulong sym.ipa_register_rmnet_ll_cb(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_rmnet_ll_cb",0x47b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x188);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_rmnet_ll_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008b1c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006340 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf280c984a8ca65dd,pcVar2,0x80015d0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_unregister_rmnet_ll_cb @ 0x08008b98 (size 196) =====

ulong sym.ipa_unregister_rmnet_ll_cb(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_rmnet_ll_cb",0x485);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 400);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_rmnet_ll_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008bfc);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80015f0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_add_socksv5_conn @ 0x08008c5c (size 188) =====

ulong sym.ipa_add_socksv5_conn(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_add_socksv5_conn",0x48f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_add_socksv5_conn");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008cb8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP16ipa_socksv5_infoE_global_addr) {
            __cfi_slowpath_diag(0x5d67af067eb09d46,pcVar2,0x8001610);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_del_socksv5_conn @ 0x08008d18 (size 204) =====

ulong sym.ipa_del_socksv5_conn(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_del_socksv5_conn",0x499);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_del_socksv5_conn");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008d7c);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001630);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_register_notifier @ 0x08008de4 (size 196) =====

ulong sym.ipa_register_notifier(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_register_notifier",0x4a3);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x198);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_register_notifier");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008e48);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063d0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar2,0x8001650);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_unregister_notifier @ 0x08008ea8 (size 196) =====

ulong sym.ipa_unregister_notifier(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_unregister_notifier",0x4ad);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_unregister_notifier");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8008f0c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063d0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar2,0x8001670);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_usb @ 0x08008f6c (size 220) =====

uint sym.ipa_fmwk_register_ipa_usb(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((*(*0x8001000 + 0x1c8) == 0) && (*(*0x8001000 + 0x1d0) == 0)) && (*(*0x8001000 + 0x1d8) == 0)) &&
            (((*(*0x8001000 + 0x1e0) == 0 && (*(*0x8001000 + 0x1e8) == 0)) &&
             ((*(*0x8001000 + 0x1f0) == 0 && (*(*0x8001000 + 0x1f8) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x800258a;
        *(*0x8001000 + 0x1c8) = *arg1;
        *(iVar1 + 0x1d0) = *(arg1 + 8);
        *(iVar1 + 0x1d8) = *(arg1 + 0x10);
        *(iVar1 + 0x1e0) = *(arg1 + 0x18);
        *(iVar1 + 0x1e8) = *(arg1 + 0x20);
        *(iVar1 + 0x1f0) = *(arg1 + 0x28);
        *(iVar1 + 0x1f8) = *(arg1 + 0x30);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002f12;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_usb_init_teth_prot @ 0x08009048 (size 216) =====

ulong sym.ipa_usb_init_teth_prot(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_init_teth_prot",0x4de);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_init_teth_prot");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80090a4);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFi17ipa_usb_teth_protP19ipa_usb_teth_paramsPFi20ipa_usb_notify_eventPvES3_E_global_addr) {
            __cfi_slowpath_diag(0xcc623cb31fce3ab0,pcVar2,0x8001690);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_usb_xdci_connect @ 0x08009120 (size 208) =====

ulong sym.ipa_usb_xdci_connect(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_connect",0x4ee);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_connect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800917c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP24ipa_usb_xdci_chan_paramsS0_P23ipa_req_chan_out_paramsS2_P27ipa_usb_xdci_connect_paramsE_global_addr
           ) {
            __cfi_slowpath_diag(0x2bcd72afeafc1622,pcVar2,0x80016b0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_usb_xdci_disconnect @ 0x080091f0 (size 216) =====

ulong sym.ipa_usb_xdci_disconnect(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_disconnect",0x4fa);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_disconnect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009254);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80062f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xe77ecee42bb5f186,pcVar2,0x80016d0);
            arg2 = arg2 & 0xffffffff;
            arg1 = arg1 & 0xffffffff;
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_usb_deinit_teth_prot @ 0x080092c8 (size 196) =====

ulong sym.ipa_usb_deinit_teth_prot(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_deinit_teth_prot",0x505);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_deinit_teth_prot");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009324);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi17ipa_usb_teth_protE_global_addr) {
            __cfi_slowpath_diag(0x2c101b1240ffeca0,pcVar2,0x80016f0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_usb_xdci_suspend @ 0x0800938c (size 220) =====

ulong sym.ipa_usb_xdci_suspend(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_suspend",0x512);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80093ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijj17ipa_usb_teth_protbE_global_addr) {
            __cfi_slowpath_diag(0x41105343c832d270,pcVar2,0x8001710);
            arg2 = arg2 & 0xffffffff;
            arg1 = arg1 & 0xffffffff;
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_usb_xdci_resume @ 0x08009468 (size 216) =====

ulong sym.ipa_usb_xdci_resume(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_xdci_resume",0x51e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_xdci_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80094cc);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80062f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xe77ecee42bb5f186,pcVar2,0x8001730);
            arg2 = arg2 & 0xffffffff;
            arg1 = arg1 & 0xffffffff;
            arg3 = arg3 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_usb_is_teth_prot_connected @ 0x08009540 (size 200) =====

uint32_t sym.ipa_usb_is_teth_prot_connected(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_usb_is_teth_prot_connected",0x529);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x1f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_usb_is_teth_prot_connected");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800959c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFb17ipa_usb_teth_protE_global_addr) {
            __cfi_slowpath_diag(0xc16dcd0014ae7d5c,pcVar2,0x8001750);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1 & 1;
}


// ===== sym.ipa_fmwk_register_ipa_wdi3 @ 0x08009608 (size 668) =====

uint sym.ipa_fmwk_register_ipa_wdi3(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((((((*(*0x8001000 + 0x278) == 0) && (*(*0x8001000 + 0x200) == 0)) && (*(*0x8001000 + 0x210) == 0)) &&
                 ((*(*0x8001000 + 0x218) == 0 && (*(*0x8001000 + 0x220) == 0)))) &&
                ((*(*0x8001000 + 0x238) == 0 && ((*(*0x8001000 + 0x240) == 0 && (*(*0x8001000 + 0x248) == 0)))))) &&
               (*(*0x8001000 + 0x250) == 0)) &&
              (((((*(*0x8001000 + 600) == 0 && (*(*0x8001000 + 0x260) == 0)) && (*(*0x8001000 + 0x268) == 0)) &&
                (((*(*0x8001000 + 0x270) == 0 && (*(*0x8001000 + 0x280) == 0)) &&
                 ((*(*0x8001000 + 0x208) == 0 && ((*(*0x8001000 + 0x2c8) == 0 && (*(*0x8001000 + 0x2d0) == 0)))))))) &&
               ((*(*0x8001000 + 0x2d8) == 0 &&
                (((*(*0x8001000 + 0x2e0) == 0 && (*(*0x8001000 + 0x2e8) == 0)) && (*(*0x8001000 + 0x2f0) == 0)))))))) &&
             ((((*(*0x8001000 + 0x2f8) == 0 && (*(*0x8001000 + 0x300) == 0)) &&
               (((*(*0x8001000 + 0x308) == 0 && ((*(*0x8001000 + 0x310) == 0 && (*(*0x8001000 + 0x318) == 0)))) &&
                (*(*0x8001000 + 800) == 0)))) &&
              ((((*(*0x8001000 + 0x328) == 0 && (*(*0x8001000 + 0x330) == 0)) && (*(*0x8001000 + 0x338) == 0)) &&
               ((*(*0x8001000 + 0x340) == 0 && (*(*0x8001000 + 0x348) == 0)))))))) &&
            ((*(*0x8001000 + 0x350) == 0 && ((*(*0x8001000 + 0x358) == 0 && (*(*0x8001000 + 0x360) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x80023d0;
        *(*0x8001000 + 0x278) = *(arg1 + 0x60);
        *(iVar1 + 0x200) = *arg1;
        *(iVar1 + 0x210) = *(arg1 + 8);
        *(iVar1 + 0x218) = *(arg1 + 0x10);
        *(iVar1 + 0x220) = *(arg1 + 0x18);
        *(iVar1 + 0x238) = *(arg1 + 0x20);
        *(iVar1 + 0x240) = *(arg1 + 0x28);
        *(iVar1 + 0x248) = *(arg1 + 0x30);
        *(iVar1 + 0x250) = *(arg1 + 0x38);
        *(iVar1 + 600) = *(arg1 + 0x40);
        *(iVar1 + 0x260) = *(arg1 + 0x48);
        *(iVar1 + 0x268) = *(arg1 + 0x50);
        *(iVar1 + 0x270) = *(arg1 + 0x58);
        *(iVar1 + 0x280) = *(arg1 + 0x68);
        *(iVar1 + 0x208) = *(arg1 + 0x70);
        *(iVar1 + 0x2c8) = *(arg1 + 0x78);
        *(iVar1 + 0x2d0) = *(arg1 + 0x80);
        *(iVar1 + 0x2d8) = *(arg1 + 0x88);
        *(iVar1 + 0x2e0) = *(arg1 + 0x90);
        *(iVar1 + 0x2e8) = *(arg1 + 0x98);
        *(iVar1 + 0x2f0) = *(arg1 + 0xa0);
        *(iVar1 + 0x2f8) = *(arg1 + 0xa8);
        *(iVar1 + 0x300) = *(arg1 + 0xb0);
        *(iVar1 + 0x308) = *(arg1 + 0xb8);
        *(iVar1 + 0x310) = *(arg1 + 0xc0);
        *(iVar1 + 0x318) = *(arg1 + 200);
        *(iVar1 + 800) = *(arg1 + 0xd0);
        *(iVar1 + 0x328) = *(arg1 + 0xd8);
        *(iVar1 + 0x330) = *(arg1 + 0xe0);
        *(iVar1 + 0x338) = *(arg1 + 0xe8);
        *(iVar1 + 0x340) = *(arg1 + 0xf0);
        *(iVar1 + 0x348) = *(arg1 + 0xf8);
        *(iVar1 + 0x350) = *(arg1 + 0x100);
        *(iVar1 + 0x358) = *(arg1 + 0x108);
        *(iVar1 + 0x360) = *(arg1 + 0x110);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002698;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_wdi_init @ 0x080098a4 (size 204) =====

ulong sym.ipa_wdi_init(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_init",0x5a0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x200);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009908);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006288 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4eeb99fcf5ece30d,pcVar2,0x8001770);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_get_wdi_version @ 0x08009970 (size 196) =====

ulong sym.ipa_get_wdi_version(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_wdi_version",0x5aa);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x208);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_wdi_version");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80099d4);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001790);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_is_tx1_used @ 0x08009a34 (size 200) =====

uint32_t sym.ipa_wdi_is_tx1_used(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_is_tx1_used",0x5b4);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_is_tx1_used");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009a98);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x80017b0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_wdi_cleanup @ 0x08009afc (size 196) =====

ulong sym.ipa_wdi_cleanup(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_cleanup",0x5be);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x210);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009b60);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80017d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_reg_intf @ 0x08009bc0 (size 196) =====

ulong sym.ipa_wdi_reg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_reg_intf",0x5ca);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x218);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009c24);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80061b0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6c164d41d1a960e1,pcVar2,0x80017f0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_dereg_intf @ 0x08009c84 (size 196) =====

ulong sym.ipa_wdi_dereg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_dereg_intf",0x5d5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x220);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_dereg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009ce8);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x8001810);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_conn_pipes @ 0x08009d48 (size 204) =====

ulong sym.ipa_wdi_conn_pipes(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_conn_pipes",0x5e1);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x238);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009dac);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006130 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xae515ab1478dcf8d,pcVar2,0x8001830);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disconn_pipes @ 0x08009e14 (size 196) =====

ulong sym.ipa_wdi_disconn_pipes(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disconn_pipes",0x5eb);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x240);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009e78);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001850);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_enable_pipes @ 0x08009ed8 (size 196) =====

ulong sym.ipa_wdi_enable_pipes(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_enable_pipes",0x5f5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x248);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_enable_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8009f3c);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001870);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disable_pipes @ 0x08009f9c (size 196) =====

ulong sym.ipa_wdi_disable_pipes(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disable_pipes",0x5ff);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x250);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disable_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a000);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001890);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_set_perf_profile @ 0x0800a060 (size 188) =====

ulong sym.ipa_wdi_set_perf_profile(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_set_perf_profile",0x60a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 600);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a0bc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP20ipa_wdi_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xbcc1a60ebdd96a6e,pcVar2,0x80018b0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_create_smmu_mapping @ 0x0800a11c (size 204) =====

ulong sym.ipa_wdi_create_smmu_mapping(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_create_smmu_mapping",0x616);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x260);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_create_smmu_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a180);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006368 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x61604d934ba0d9d8,pcVar2,0x80018d0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_release_smmu_mapping @ 0x0800a1e8 (size 204) =====

ulong sym.ipa_wdi_release_smmu_mapping(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_release_smmu_mapping",0x622);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x268);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_release_smmu_mapping");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a24c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006368 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x61604d934ba0d9d8,pcVar2,0x80018f0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_get_capabilities @ 0x0800a2b4 (size 188) =====

ulong sym.ipa_wdi_get_capabilities(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_get_capabilities",0x62c);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_get_capabilities");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a310);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP31ipa_wdi_capabilities_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x47f10df79a658ba3,pcVar2,0x8001910);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_init_per_inst @ 0x0800a370 (size 204) =====

ulong sym.ipa_wdi_init_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_init_per_inst",0x638);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_init_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a3d4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006288 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4eeb99fcf5ece30d,pcVar2,0x8001930);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_cleanup_per_inst @ 0x0800a43c (size 204) =====

ulong sym.ipa_wdi_cleanup_per_inst(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_cleanup_per_inst",0x642);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_cleanup_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a4a0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001950);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_reg_intf_per_inst @ 0x0800a508 (size 196) =====

ulong sym.ipa_wdi_reg_intf_per_inst(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_reg_intf_per_inst",0x64e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_reg_intf_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a56c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80061b0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6c164d41d1a960e1,pcVar2,0x8001970);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_dereg_intf_per_inst @ 0x0800a5cc (size 204) =====

ulong sym.ipa_wdi_dereg_intf_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_dereg_intf_per_inst",0x659);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_dereg_intf_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a628);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiPKcjE_global_addr) {
            __cfi_slowpath_diag(0x53fea68071ee5c67,pcVar2,0x8001990);
            arg2 = arg2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_conn_pipes_per_inst @ 0x0800a698 (size 204) =====

ulong sym.ipa_wdi_conn_pipes_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_conn_pipes_per_inst",0x665);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_conn_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a6fc);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006130 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xae515ab1478dcf8d,pcVar2,0x80019b0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disconn_pipes_per_inst @ 0x0800a764 (size 204) =====

ulong sym.ipa_wdi_disconn_pipes_per_inst(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disconn_pipes_per_inst",0x66f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x300);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disconn_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a7c8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80019d0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_enable_pipes_per_inst @ 0x0800a830 (size 204) =====

ulong sym.ipa_wdi_enable_pipes_per_inst(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_enable_pipes_per_inst",0x679);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x308);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_enable_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a894);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80019f0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_disable_pipes_per_inst @ 0x0800a8fc (size 204) =====

ulong sym.ipa_wdi_disable_pipes_per_inst(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_disable_pipes_per_inst",0x683);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x310);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_disable_pipes_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800a960);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001a10);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_set_perf_profile_per_inst @ 0x0800a9c8 (size 196) =====

ulong sym.ipa_wdi_set_perf_profile_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_set_perf_profile_per_inst",0x68f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x318);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_set_perf_profile_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aa24);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijP20ipa_wdi_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xc4ca1b44f26c3d40,pcVar2,0x8001a30);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_create_smmu_mapping_per_inst @ 0x0800aa8c (size 208) =====

ulong sym.ipa_wdi_create_smmu_mapping_per_inst(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_create_smmu_mapping_per_inst",0x69b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 800);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_create_smmu_mapping_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aaf0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x8af29596e3809c7c,pcVar2,0x8001a50);
            arg2 = arg2 & 0xffffffff;
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_release_smmu_mapping_per_inst @ 0x0800ab5c (size 208) =====

ulong sym.ipa_wdi_release_smmu_mapping_per_inst(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_release_smmu_mapping_per_inst",0x6a7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x328);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_release_smmu_mapping_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800abc0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80063c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x8af29596e3809c7c,pcVar2,0x8001a70);
            arg2 = arg2 & 0xffffffff;
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_get_stats @ 0x0800ac2c (size 196) =====

ulong sym.ipa_wdi_get_stats(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_get_stats",0x6b2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x270);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_get_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ac90);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006598 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xea1afe0fed610dbb,pcVar2,0x8001a90);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_enable_wdi_pipe @ 0x0800acf0 (size 204) =====

ulong sym.ipa_enable_wdi_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_enable_wdi_pipe",0x6bc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x288);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_enable_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ad54);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001ab0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_disable_wdi_pipe @ 0x0800adbc (size 204) =====

ulong sym.ipa_disable_wdi_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_disable_wdi_pipe",0x6c6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x290);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_disable_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ae20);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001ad0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_resume_wdi_pipe @ 0x0800ae88 (size 204) =====

ulong sym.ipa_resume_wdi_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_resume_wdi_pipe",0x6d0);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x298);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_resume_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800aeec);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001af0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_suspend_wdi_pipe @ 0x0800af54 (size 204) =====

ulong sym.ipa_suspend_wdi_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_suspend_wdi_pipe",0x6da);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_suspend_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800afb8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001b10);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_connect_wdi_pipe @ 0x0800b020 (size 196) =====

ulong sym.ipa_connect_wdi_pipe(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_connect_wdi_pipe",0x6e5);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_connect_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b07c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP17ipa_wdi_in_paramsP18ipa_wdi_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xc8425ee2e7226207,pcVar2,0x8001b30);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_disconnect_wdi_pipe @ 0x0800b0e4 (size 204) =====

ulong sym.ipa_disconnect_wdi_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_disconnect_wdi_pipe",0x6ef);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_disconnect_wdi_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b148);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001b50);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_register_flt_cb_per_inst @ 0x0800b1b0 (size 216) =====

ulong sym.ipa_wdi_opt_dpath_register_flt_cb_per_inst(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_register_flt_cb_per_inst",0x703);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x330);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_register_flt_cb_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b20c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFijPFiPvP36ipa_wdi_opt_dpath_flt_rsrv_cb_paramsEPFiS_EPFiS_P35ipa_wdi_opt_dpath_flt_add_cb_paramsEPFiS_P35ipa_wdi_opt_dpath_flt_rem_cb_paramsEE_global_addr
           ) {
            __cfi_slowpath_diag(0x175e2e05f5757,pcVar2,0x8001b70);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst @ 0x0800b288 (size 216) =====

ulong sym.ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst",0x711);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x338);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_notify_flt_rsvd_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b2f0);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006238 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x3236203519f56f4,pcVar2,0x8001b90);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst @ 0x0800b360 (size 216) =====

ulong sym.ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst",0x71d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x340);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_notify_flt_rlsd_per_inst");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b3c8);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006238 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x3236203519f56f4,pcVar2,0x8001bb0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_rsrv_filter_req @ 0x0800b438 (size 196) =====

ulong sym.ipa_wdi_opt_dpath_rsrv_filter_req(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_rsrv_filter_req",0x72a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x348);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_rsrv_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b494);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP39ipa_wlan_opt_dp_rsrv_filter_req_msg_v01P40ipa_wlan_opt_dp_rsrv_filter_resp_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x9a1b235a4d2c9adb,pcVar2,0x8001bd0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_add_filter_req @ 0x0800b4fc (size 196) =====

ulong sym.ipa_wdi_opt_dpath_add_filter_req(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_add_filter_req",0x736);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x350);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_add_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b558);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP38ipa_wlan_opt_dp_add_filter_req_msg_v01P45ipa_wlan_opt_dp_add_filter_complt_ind_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0xfb4726b715dee745,pcVar2,0x8001bf0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_remove_filter_req @ 0x0800b5c0 (size 196) =====

ulong sym.ipa_wdi_opt_dpath_remove_filter_req(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_remove_filter_req",0x743);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x358);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_remove_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b61c);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP41ipa_wlan_opt_dp_remove_filter_req_msg_v01P48ipa_wlan_opt_dp_remove_filter_complt_ind_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x687703c03e071df,pcVar2,0x8001c10);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_opt_dpath_remove_all_filter_req @ 0x0800b684 (size 196) =====

ulong sym.ipa_wdi_opt_dpath_remove_all_filter_req(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_opt_dpath_remove_all_filter_req",0x74f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x360);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_opt_dpath_remove_all_filter_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b6e0);
            (*pcVar2)();
        }
        if (pcVar2 != 
            sym.__typeid__ZTSFiP45ipa_wlan_opt_dp_remove_all_filter_req_msg_v01P46ipa_wlan_opt_dp_remove_all_filter_resp_msg_v01E_global_addr
           ) {
            __cfi_slowpath_diag(0x50bae722246c6cd3,pcVar2,0x8001c30);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_reg_uc_rdyCB @ 0x0800b748 (size 188) =====

ulong sym.ipa_reg_uc_rdyCB(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_reg_uc_rdyCB",0x759);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_reg_uc_rdyCB");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b7a4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP23ipa_wdi_uc_ready_paramsE_global_addr) {
            __cfi_slowpath_diag(0x4f6be5c1eb75641e,pcVar2,0x8001c50);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_dereg_uc_rdyCB @ 0x0800b804 (size 196) =====

ulong sym.ipa_dereg_uc_rdyCB(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_dereg_uc_rdyCB",0x763);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x2c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_dereg_uc_rdyCB");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b868);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001c70);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wdi_bw_monitor @ 0x0800b8c8 (size 196) =====

ulong sym.ipa_wdi_bw_monitor(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_bw_monitor",0x76e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x278);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_bw_monitor");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b92c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xcde4f6e28251b9e5,pcVar2,0x8001c90);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wdi_sw_stats @ 0x0800b98c (size 188) =====

ulong sym.ipa_wdi_sw_stats(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wdi_sw_stats",0x779);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x280);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wdi_sw_stats");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800b9e8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP15ipa_wdi_tx_infoE_global_addr) {
            __cfi_slowpath_diag(0x1bffb05036c3b4f1,pcVar2,0x8001cb0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_qdss_conn_pipes @ 0x0800ba48 (size 196) =====

ulong sym.ipa_qdss_conn_pipes(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_qdss_conn_pipes",0x785);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x228);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_qdss_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800baa4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP23ipa_qdss_conn_in_paramsP24ipa_qdss_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xca63e0f18bef35de,pcVar2,0x8001cd0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_qdss_disconn_pipes @ 0x0800bb0c (size 196) =====

ulong sym.ipa_qdss_disconn_pipes(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_qdss_disconn_pipes",0x78f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x230);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_qdss_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bb70);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001cf0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_qdss @ 0x0800bbd0 (size 140) =====

uint sym.ipa_fmwk_register_ipa_qdss(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((*(*0x8001000 + 0x228) == 0) && (*(*0x8001000 + 0x230) == 0)) {
        uVar3 = 0;
        uVar2 = 0x80025f5;
        *(*0x8001000 + 0x228) = *arg1;
        *(iVar1 + 0x230) = *(arg1 + 8);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x80033a7;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_fmwk_register_gsb @ 0x0800bc5c (size 236) =====

uint sym.ipa_fmwk_register_gsb(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((*(*0x8001000 + 0x368) == 0) && (*(*0x8001000 + 0x370) == 0)) && (*(*0x8001000 + 0x378) == 0)) &&
             ((*(*0x8001000 + 0x380) == 0 && (*(*0x8001000 + 0x388) == 0)))) &&
            ((*(*0x8001000 + 0x390) == 0 && ((*(*0x8001000 + 0x398) == 0 && (*(*0x8001000 + 0x3a0) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x8002b97;
        *(*0x8001000 + 0x368) = *arg1;
        *(iVar1 + 0x370) = *(arg1 + 8);
        *(iVar1 + 0x378) = *(arg1 + 0x10);
        *(iVar1 + 0x380) = *(arg1 + 0x18);
        *(iVar1 + 0x388) = *(arg1 + 0x20);
        *(iVar1 + 0x390) = *(arg1 + 0x28);
        *(iVar1 + 0x398) = *(arg1 + 0x30);
        *(iVar1 + 0x3a0) = *(arg1 + 0x38);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800248e;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_bridge_init @ 0x0800bd48 (size 196) =====

ulong sym.ipa_bridge_init(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_init",0x7d7);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x368);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bda4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_bridge_init_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0x2e8e0b2de1d32810,pcVar2,0x8001d10);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_connect @ 0x0800be0c (size 204) =====

ulong sym.ipa_bridge_connect(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_connect",0x7e2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x370);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_connect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800be70);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d30);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_set_perf_profile @ 0x0800bed8 (size 204) =====

ulong sym.ipa_bridge_set_perf_profile(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_set_perf_profile",0x7ed);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x378);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800bf34);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijjE_global_addr) {
            __cfi_slowpath_diag(0xcea31f8c4f12503d,pcVar2,0x8001d50);
            arg1 = arg1 & 0xffffffff;
            arg2 = arg2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_disconnect @ 0x0800bfa4 (size 204) =====

ulong sym.ipa_bridge_disconnect(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_disconnect",0x7f8);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x380);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_disconnect");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c008);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d70);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_suspend @ 0x0800c070 (size 204) =====

ulong sym.ipa_bridge_suspend(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_suspend",0x803);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x388);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c0d4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001d90);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_resume @ 0x0800c13c (size 204) =====

ulong sym.ipa_bridge_resume(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_resume",0x80e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x390);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c1a0);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001db0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_tx_dp @ 0x0800c208 (size 208) =====

ulong sym.ipa_bridge_tx_dp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_tx_dp",0x81a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x398);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c264);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFijP7sk_buffP11ipa_tx_metaE_global_addr) {
            __cfi_slowpath_diag(0x6ae029355c3df8c8,pcVar2,0x8001dd0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.ipa_bridge_cleanup @ 0x0800c2d8 (size 204) =====

ulong sym.ipa_bridge_cleanup(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_bridge_cleanup",0x825);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3a0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_bridge_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c33c);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001df0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_uc_offload @ 0x0800c3a4 (size 220) =====

uint sym.ipa_fmwk_register_uc_offload(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((*(*0x8001000 + 0x3a8) == 0) && (*(*0x8001000 + 0x3b0) == 0)) && (*(*0x8001000 + 0x3b8) == 0)) &&
            (((*(*0x8001000 + 0x3c0) == 0 && (*(*0x8001000 + 0x3c8) == 0)) &&
             ((*(*0x8001000 + 0x3d0) == 0 && (*(*0x8001000 + 0x3d8) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x8002815;
        *(*0x8001000 + 0x3a8) = *arg1;
        *(iVar1 + 0x3b0) = *(arg1 + 8);
        *(iVar1 + 0x3b8) = *(arg1 + 0x10);
        *(iVar1 + 0x3c0) = *(arg1 + 0x18);
        *(iVar1 + 0x3c8) = *(arg1 + 0x20);
        *(iVar1 + 0x3d0) = *(arg1 + 0x28);
        *(iVar1 + 0x3d8) = *(arg1 + 0x30);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800344a;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_uc_offload_reg_intf @ 0x0800c480 (size 196) =====

ulong sym.ipa_uc_offload_reg_intf(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_reg_intf",0x856);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c4dc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP26ipa_uc_offload_intf_paramsP25ipa_uc_offload_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xbd4fd17e310b1fc4,pcVar2,0x8001e10);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_cleanup @ 0x0800c544 (size 204) =====

ulong sym.ipa_uc_offload_cleanup(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_cleanup",0x861);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c5a8);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001e30);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_conn_pipes @ 0x0800c610 (size 196) =====

ulong sym.ipa_uc_offload_conn_pipes(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_conn_pipes",0x86d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c66c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP29ipa_uc_offload_conn_in_paramsP30ipa_uc_offload_conn_out_paramsE_global_addr)
        {
            __cfi_slowpath_diag(0xd045eea2b39fba65,pcVar2,0x8001e50);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_disconn_pipes @ 0x0800c6d4 (size 204) =====

ulong sym.ipa_uc_offload_disconn_pipes(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_uc_offload_disconn_pipes",0x878);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c738);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001e70);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_set_perf_profile @ 0x0800c7a0 (size 188) =====

ulong sym.ipa_set_perf_profile(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_set_perf_profile",0x883);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800c7fc);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP16ipa_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0x6dfd691be326c1b0,pcVar2,0x8001e90);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_uc_offload_reg_rdyCB @ 0x0800c85c (size 240) =====

uint sym.ipa_uc_offload_reg_rdyCB(int64_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    uint uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar2 = *0x8001000;
        if (**0x8001000 == '\0') {
            pcVar1 = *0x8001000 + 0x18;
            *(*0x8001000 + 0x48) = *(arg1 + 0x10);
            *(pcVar2 + 0x50) = *(arg1 + 8);
            *(pcVar2 + 0x68) = *(arg1 + 0x18);
            *arg1 = 0;
            mutex_unlock(pcVar1);
            uVar3 = 0;
        }
        else {
            pcVar4 = *(*0x8001000 + 0x3d0);
            if (pcVar4 != sym.__typeid__ZTSFiP19ipa_uc_ready_paramsE_global_addr) {
                __cfi_slowpath_diag(0xa1ff277cb8c62bf4,pcVar4,0x8001eb0);
            }
            uVar3 = (*pcVar4)(arg1);
            mutex_unlock(*0x8001000 + 0x18);
        }
    }
    return uVar3;
}


// ===== sym.ipa_uc_offload_dereg_rdyCB @ 0x0800c94c (size 188) =====

void sym.ipa_uc_offload_dereg_rdyCB(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_uc_offload_dereg_rdyCB",0x8a8);
    }
    else {
        pcVar1 = *(*0x8001000 + 0x3d8);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_uc_offload_dereg_rdyCB");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800c9a4);
            (*pcVar1)();
        }
        if (pcVar1 != sym.__typeid__ZTSFv20ipa_uc_offload_protoE_global_addr) {
            __cfi_slowpath_diag(0x14f5cee72df96cd4,pcVar1,0x8001ed0);
            arg1 = arg1 & 0xffffffff;
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.ipa_fmwk_register_ipa_mhi @ 0x0800ca08 (size 252) =====

uint sym.ipa_fmwk_register_ipa_mhi(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((((*(*0x8001000 + 0x3e0) == 0) && (*(*0x8001000 + 1000) == 0)) && (*(*0x8001000 + 0x3f0) == 0)) &&
              ((*(*0x8001000 + 0x3f8) == 0 && (*(*0x8001000 + 0x400) == 0)))) &&
             ((*(*0x8001000 + 0x408) == 0 && ((*(*0x8001000 + 0x410) == 0 && (*(*0x8001000 + 0x418) == 0)))))) &&
            (*(*0x8001000 + 0x420) == 0)) {
        uVar3 = 0;
        uVar2 = 0x8002d6c;
        *(*0x8001000 + 0x3e0) = *arg1;
        *(iVar1 + 1000) = *(arg1 + 8);
        *(iVar1 + 0x3f0) = *(arg1 + 0x10);
        *(iVar1 + 0x3f8) = *(arg1 + 0x18);
        *(iVar1 + 0x400) = *(arg1 + 0x20);
        *(iVar1 + 0x408) = *(arg1 + 0x28);
        *(iVar1 + 0x410) = *(arg1 + 0x30);
        *(iVar1 + 0x418) = *(arg1 + 0x38);
        *(iVar1 + 0x420) = *(arg1 + 0x40);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002df1;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_mhi_init @ 0x0800cb04 (size 188) =====

ulong sym.ipa_mhi_init(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_init",0x8d8);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cb60);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP19ipa_mhi_init_paramsE_global_addr) {
            __cfi_slowpath_diag(0xba92877d429fa586,pcVar2,0x8001ef0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_start @ 0x0800cbc0 (size 188) =====

ulong sym.ipa_mhi_start(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_start",0x8e3);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 1000);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_start");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cc1c);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP20ipa_mhi_start_paramsE_global_addr) {
            __cfi_slowpath_diag(0xfc7c3caf7483c738,pcVar2,0x8001f10);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_connect_pipe @ 0x0800cc7c (size 196) =====

ulong sym.ipa_mhi_connect_pipe(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_connect_pipe",0x8ee);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3f0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_connect_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ccd8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_mhi_connect_paramsPjE_global_addr) {
            __cfi_slowpath_diag(0x14a351453d1a4144,pcVar2,0x8001f30);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_disconnect_pipe @ 0x0800cd40 (size 204) =====

ulong sym.ipa_mhi_disconnect_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_disconnect_pipe",0x8f9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x3f8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_disconnect_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cda4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x8001f50);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_suspend @ 0x0800ce0c (size 208) =====

ulong sym.ipa_mhi_suspend(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_suspend",0x904);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x400);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_suspend");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800ce74);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006418 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x16160375c26fc5,pcVar2,0x8001f70);
        }
        uVar1 = (*pcVar2)(arg1 & 1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_resume @ 0x0800cedc (size 196) =====

ulong sym.ipa_mhi_resume(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_resume",0x90e);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x408);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_resume");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cf40);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8001f90);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_mhi_destroy @ 0x0800cfa0 (size 188) =====

void sym.ipa_mhi_destroy(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_mhi_destroy",0x916);
    }
    else {
        pcVar1 = *(*0x8001000 + 0x410);
        if (pcVar1 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_destroy");
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800d000);
            (*pcVar1)();
        }
        if (2 < (pcVar1 + -0x80065a8 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x7e04a0fb7ad8bcd5,pcVar1,0x8001fb0);
        }
        (*pcVar1)();
    }
    return;
}


// ===== sym.ipa_mhi_handle_ipa_config_req @ 0x0800d05c (size 188) =====

ulong sym.ipa_mhi_handle_ipa_config_req(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_handle_ipa_config_req",0x91f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x418);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_handle_ipa_config_req");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d0b8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP22ipa_config_req_msg_v01E_global_addr) {
            __cfi_slowpath_diag(0x4b28ab612ee93f1e,pcVar2,0x8001fd0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_mhi_update_mstate @ 0x0800d118 (size 196) =====

ulong sym.ipa_mhi_update_mstate(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_mhi_update_mstate",0x929);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x420);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_mhi_update_mstate");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d174);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi14ipa_mhi_mstateE_global_addr) {
            __cfi_slowpath_diag(0xcccd9b5151f5090a,pcVar2,0x8001ff0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_wigig @ 0x0800d1dc (size 348) =====

uint sym.ipa_fmwk_register_ipa_wigig(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if (((((*(*0x8001000 + 0x428) == 0) && (*(*0x8001000 + 0x430) == 0)) && (*(*0x8001000 + 0x438) == 0)) &&
             (((*(*0x8001000 + 0x440) == 0 && (*(*0x8001000 + 0x448) == 0)) &&
              ((*(*0x8001000 + 0x450) == 0 && ((*(*0x8001000 + 0x458) == 0 && (*(*0x8001000 + 0x460) == 0)))))))) &&
            ((*(*0x8001000 + 0x468) == 0 &&
             (((((*(*0x8001000 + 0x470) == 0 && (*(*0x8001000 + 0x478) == 0)) && (*(*0x8001000 + 0x480) == 0)) &&
               ((*(*0x8001000 + 0x488) == 0 && (*(*0x8001000 + 0x490) == 0)))) && (*(*0x8001000 + 0x498) == 0)))))) {
        uVar3 = 0;
        uVar2 = 0x800347a;
        *(*0x8001000 + 0x428) = *arg1;
        *(iVar1 + 0x430) = *(arg1 + 8);
        *(iVar1 + 0x438) = *(arg1 + 0x10);
        *(iVar1 + 0x440) = *(arg1 + 0x18);
        *(iVar1 + 0x448) = *(arg1 + 0x20);
        *(iVar1 + 0x450) = *(arg1 + 0x28);
        *(iVar1 + 0x458) = *(arg1 + 0x30);
        *(iVar1 + 0x460) = *(arg1 + 0x38);
        *(iVar1 + 0x468) = *(arg1 + 0x40);
        *(iVar1 + 0x470) = *(arg1 + 0x48);
        *(iVar1 + 0x478) = *(arg1 + 0x50);
        *(iVar1 + 0x480) = *(arg1 + 0x58);
        *(iVar1 + 0x488) = *(arg1 + 0x60);
        *(iVar1 + 0x490) = *(arg1 + 0x68);
        *(iVar1 + 0x498) = *(arg1 + 0x70);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800283f;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_wigig_init @ 0x0800d338 (size 196) =====

ulong sym.ipa_wigig_init(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_init",0x96b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x428);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_init");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d394);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP24ipa_wigig_init_in_paramsP25ipa_wigig_init_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0xcfe2ebda3644995b,pcVar2,0x8002010);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_cleanup @ 0x0800d3fc (size 196) =====

ulong sym.ipa_wigig_cleanup(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_cleanup",0x975);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x430);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_cleanup");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d460);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x8002030);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_wigig_is_smmu_enabled @ 0x0800d4c0 (size 200) =====

uint32_t sym.ipa_wigig_is_smmu_enabled(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002ed5,"ipa_wigig_is_smmu_enabled",0x97f);
        uVar1 = 0;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x438);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_is_smmu_enabled");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d524);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x80063e0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x741b966c574d47b1,pcVar2,0x8002050);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1 & 1;
}


// ===== sym.ipa_wigig_reg_intf @ 0x0800d588 (size 188) =====

ulong sym.ipa_wigig_reg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_reg_intf",0x98a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x440);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d5e4);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP28ipa_wigig_reg_intf_in_paramsE_global_addr) {
            __cfi_slowpath_diag(0xc2b7c30e053d1fbe,pcVar2,0x8002070);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_dereg_intf @ 0x0800d644 (size 196) =====

ulong sym.ipa_wigig_dereg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_dereg_intf",0x995);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x448);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_dereg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d6a8);
            (*pcVar2)();
        }
        if (2 < (pcVar2 + -0x8006350 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xccde7f331eb63ff0,pcVar2,0x8002090);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_conn_rx_pipe @ 0x0800d708 (size 196) =====

ulong sym.ipa_wigig_conn_rx_pipe(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_rx_pipe",0x9a2);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x450);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_rx_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d764);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP27ipa_wigig_conn_rx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x8aca190203ce22c2,pcVar2,0x80020b0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_conn_rx_pipe_smmu @ 0x0800d7cc (size 196) =====

ulong sym.ipa_wigig_conn_rx_pipe_smmu(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_rx_pipe_smmu",0x9af);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x458);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_rx_pipe_smmu");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d828);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP32ipa_wigig_conn_rx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x1315cc8f74eef2ce,pcVar2,0x80020d0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_conn_client @ 0x0800d890 (size 196) =====

ulong sym.ipa_wigig_conn_client(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_client",0x9bc);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x460);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_client");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d8ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP27ipa_wigig_conn_tx_in_paramsP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x19771e05fd6bd734,pcVar2,0x80020f0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_conn_client_smmu @ 0x0800d954 (size 196) =====

ulong sym.ipa_wigig_conn_client_smmu(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_conn_client_smmu",0x9c9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x468);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_conn_client_smmu");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d9b0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP32ipa_wigig_conn_tx_in_params_smmuP25ipa_wigig_conn_out_paramsE_global_addr) {
            __cfi_slowpath_diag(0x6ad3ebe899c79a41,pcVar2,0x8002110);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_disconn_pipe @ 0x0800da18 (size 204) =====

ulong sym.ipa_wigig_disconn_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_disconn_pipe",0x9d4);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x470);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_disconn_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800da7c);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002130);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_enable_pipe @ 0x0800dae4 (size 204) =====

ulong sym.ipa_wigig_enable_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_enable_pipe",0x9df);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x478);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_enable_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800db48);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002150);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_disable_pipe @ 0x0800dbb0 (size 204) =====

ulong sym.ipa_wigig_disable_pipe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_disable_pipe",0x9ea);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x480);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_disable_pipe");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dc14);
            (*pcVar2)();
        }
        if (3 < (pcVar2 + -0x8006398 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xb9649066ee55bf9a,pcVar2,0x8002170);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_tx_dp @ 0x0800dc7c (size 196) =====

ulong sym.ipa_wigig_tx_dp(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_tx_dp",0x9f6);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x488);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_tx_dp");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dcd8);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typeP7sk_buffE_global_addr) {
            __cfi_slowpath_diag(0xd140388dfb15327a,pcVar2,0x8002190);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_set_perf_profile @ 0x0800dd40 (size 204) =====

ulong sym.ipa_wigig_set_perf_profile(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_set_perf_profile",0xa01);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x490);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800dda4);
            (*pcVar2)();
        }
        if (0x15 < (pcVar2 + -0x8006430 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xac3778598d51adbd,pcVar2,0x80021b0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_wigig_save_regs @ 0x0800de0c (size 196) =====

ulong sym.ipa_wigig_save_regs(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_wigig_save_regs",0xa0b);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x498);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_wigig_save_regs");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800de70);
            (*pcVar2)();
        }
        if (0x12 < (pcVar2 + -0x80064f0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2b3a43e29242445,pcVar2,0x80021d0);
        }
        uVar1 = (*pcVar2)();
    }
    return uVar1;
}


// ===== sym.ipa_fmwk_register_ipa_eth @ 0x0800ded0 (size 252) =====

uint sym.ipa_fmwk_register_ipa_eth(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8001000;
    if (*0x8001000 == 0) {
        uVar3 = 0xffffffff;
        uVar2 = 0x8002407;
    }
    else if ((((((*(*0x8001000 + 0x4a0) == 0) && (*(*0x8001000 + 0x4a8) == 0)) && (*(*0x8001000 + 0x4b0) == 0)) &&
              ((*(*0x8001000 + 0x4b8) == 0 && (*(*0x8001000 + 0x4c0) == 0)))) &&
             ((*(*0x8001000 + 0x4c8) == 0 && ((*(*0x8001000 + 0x4d0) == 0 && (*(*0x8001000 + 0x4e0) == 0)))))) &&
            (*(*0x8001000 + 0x4e8) == 0)) {
        uVar3 = 0;
        uVar2 = 0x800318d;
        *(*0x8001000 + 0x4a0) = *arg1;
        *(iVar1 + 0x4a8) = *(arg1 + 8);
        *(iVar1 + 0x4b0) = *(arg1 + 0x10);
        *(iVar1 + 0x4b8) = *(arg1 + 0x18);
        *(iVar1 + 0x4c0) = *(arg1 + 0x20);
        *(iVar1 + 0x4c8) = *(arg1 + 0x28);
        *(iVar1 + 0x4d0) = *(arg1 + 0x30);
        *(iVar1 + 0x4e0) = *(arg1 + 0x38);
        *(iVar1 + 0x4e8) = *(arg1 + 0x40);
    }
    else {
        uVar3 = 0xffffffff;
        uVar2 = 0x800322b;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.ipa_eth_register_ready_cb @ 0x0800dfcc (size 240) =====

uint sym.ipa_eth_register_ready_cb(int64_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    uint uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == NULL) {
        _printk(0x8002407);
        uVar3 = 0xffffffff;
    }
    else {
        mutex_lock(*0x8001000 + 0x18);
        pcVar2 = *0x8001000;
        if (**0x8001000 == '\0') {
            pcVar1 = *0x8001000 + 0x18;
            *(*0x8001000 + 0x58) = *arg1;
            *(pcVar2 + 0x60) = *(arg1 + 8);
            *(arg1 + 0x10) = 0;
            mutex_unlock(pcVar1);
            uVar3 = 0;
        }
        else {
            pcVar4 = *(*0x8001000 + 0x4a0);
            if (1 < (pcVar4 + -0x8006220 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0xfa2bdca0c05ed791,pcVar4,0x80021f0);
            }
            uVar3 = (*pcVar4)(arg1);
            mutex_unlock(*0x8001000 + 0x18);
        }
    }
    return uVar3;
}


// ===== sym.ipa_eth_unregister_ready_cb @ 0x0800e0bc (size 196) =====

ulong sym.ipa_eth_unregister_ready_cb(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_unregister_ready_cb",0xa59);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4a8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_unregister_ready_cb");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e120);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006220 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfa2bdca0c05ed791,pcVar2,0x8002210);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_conn_pipes @ 0x0800e180 (size 196) =====

ulong sym.ipa_eth_client_conn_pipes(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_conn_pipes",0xa64);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4b0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_conn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e1e4);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006588 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf24b8b5adc6de50e,pcVar2,0x8002230);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_disconn_pipes @ 0x0800e244 (size 196) =====

ulong sym.ipa_eth_client_disconn_pipes(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_disconn_pipes",0xa6f);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4b8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_disconn_pipes");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e2a8);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x8006588 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xf24b8b5adc6de50e,pcVar2,0x8002250);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_reg_intf @ 0x0800e308 (size 196) =====

ulong sym.ipa_eth_client_reg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_reg_intf",0xa7a);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4c0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_reg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e36c);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80065c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4751ceb51a2067b1,pcVar2,0x8002270);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_unreg_intf @ 0x0800e3cc (size 196) =====

ulong sym.ipa_eth_client_unreg_intf(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_unreg_intf",0xa85);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4c8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_unreg_intf");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e430);
            (*pcVar2)();
        }
        if (1 < (pcVar2 + -0x80065c8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x4751ceb51a2067b1,pcVar2,0x8002290);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_set_perf_profile @ 0x0800e490 (size 196) =====

ulong sym.ipa_eth_client_set_perf_profile(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_set_perf_profile",0xa91);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4d0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_set_perf_profile");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e4ec);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFiP14ipa_eth_clientP20ipa_eth_perf_profileE_global_addr) {
            __cfi_slowpath_diag(0xdd8dc13c028d7688,pcVar2,0x80022b0);
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_get_default_aggr_time_limit @ 0x0800e554 (size 196) =====

ulong sym.ipa_get_default_aggr_time_limit(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_get_default_aggr_time_limit",0xa9d);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4d8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_get_default_aggr_time_limit");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e5b0);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFi15ipa_client_typePjE_global_addr) {
            __cfi_slowpath_diag(0xbdaac4eb753a786a,pcVar2,0x80022d0);
            arg1 = arg1 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_eth_get_ipa_client_type_from_eth_type @ 0x0800e618 (size 204) =====

ulong sym.ipa_eth_get_ipa_client_type_from_eth_type(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_get_ipa_client_type_from_eth_type",0xaa9);
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4e0);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_get_ipa_client_type_from_eth_type");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e674);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSF15ipa_client_type19ipa_eth_client_type22ipa_eth_pipe_directionE_global_addr) {
            __cfi_slowpath_diag(0x75466a8f88dbf1e7,pcVar2,0x80022f0);
            arg1 = arg1 & 0xffffffff;
            arg2 = arg2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1;
}


// ===== sym.ipa_eth_client_exist @ 0x0800e6e4 (size 208) =====

uint32_t sym.ipa_eth_client_exist(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 == 0) {
        _printk(0x8002eaf,"ipa_eth_client_exist",0xab5);
        uVar1 = 1;
    }
    else {
        pcVar2 = *(*0x8001000 + 0x4e8);
        if (pcVar2 == NULL) {
            __warn_printk("%s was not registered on ipa_fmwk\n","ipa_eth_client_exist");
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800e740);
            (*pcVar2)();
        }
        if (pcVar2 != sym.__typeid__ZTSFb19ipa_eth_client_typeiE_global_addr) {
            __cfi_slowpath_diag(0x93e8e7fc26d203dd,pcVar2,0x8002310);
            arg1 = arg1 & 0xffffffff;
            arg2 = arg2 & 0xffffffff;
        }
        uVar1 = (*pcVar2)(arg1,arg2);
    }
    return uVar1 & 1;
}


// ===== sym.__cfi_check_fail @ 0x0800e7b4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800e7f8

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
    //switch table (4 cases) at 0x80034b5
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e80c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800f654 (size 128) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800349f);
    iVar1 = kmem_cache_alloc_trace(__printk,0xdc0,0x500);
    *0x8001000 = iVar1;
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 8) = iVar1 + 8;
        *(iVar1 + 0x10) = iVar1 + 8;
        __mutex_init(iVar1 + 0x18,"&ipa_fmwk_ctx->lock",obj.ipa_fmwk_init.__key);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x0800f6d4 (size 152) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*0x8001000 + 8);
    if (piVar4 != *0x8001000 + 8) {
        do {
            piVar5 = *piVar4;
            uVar3 = __list_del_entry_valid(piVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *piVar4;
                piVar2 = piVar4[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar5;
        } while (piVar5 != *0x8001000 + 8);
    }
    kfree();
    *0x8001000 = 0;
    return;
}

