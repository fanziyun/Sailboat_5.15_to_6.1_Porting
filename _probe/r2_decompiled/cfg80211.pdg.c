// decompiled from cfg80211 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0802d000 (size 17780) =====

//WARNING: Switch with 1 destination removed at 0x08037198

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x4a6bcfd03d15fca) {
        if (arg1 < -0x41388d38a0114304) {
            if (-0x581152d94b539398 < arg1) {
                if (arg1 < -0x4f37e1463f16166f) {
                    if (arg1 < -0x55071fedcd58ba18) {
                        if (arg1 < -0x5787c16daca9b794) {
                            if (arg1 < -0x57dc0c0c57bb5b9a) {
                                if (arg1 == -0x581152d94b539397) {
                                    pcVar2 = sym.ieee80211_bss_get_elem.cfi_jt;
                                }
                                else {
                                    if (arg1 != -0x58011de926c8a968) {
                                        if (arg1 != -0x57dfb57cf518a32f) goto code_r0x08037158;
                                        pcVar2 = 
                                        sym.__bpf_trace_rdev_tdls_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                        ;
                                        goto code_r0x08031548;
                                    }
                                    pcVar2 = sym.cfg80211_rfkill_poll.4cb80888839f98f690b7d75ef25d1694.cfi_jt;
                                }
                            }
                            else {
                                if (arg1 != -0x57dc0c0c57bb5b9a) {
                                    if (arg1 == -0x57be845bca9148ef) {
                                        pcVar2 = sym.wiphy_suspend.cdb4e9913ee09f921401e540eb3f658c.cfi_jt;
                                        goto code_r0x080314e4;
                                    }
                                    if (arg1 != -0x578d0656fcd75533) goto code_r0x08037158;
                                    pcVar2 = 
                                    sym.perf_trace_cfg80211_michael_mic_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                    goto code_r0x08031548;
                                }
                                pcVar2 = sym.__traceiter_rdev_set_cqm_txe_config.cfi_jt;
                            }
                            goto code_r0x08031564;
                        }
                        if (arg1 < -0x55f7127174c84569) {
                            if (arg1 == -0x5787c16daca9b794) {
                                pcVar2 = sym.cfg80211_reg_can_beacon.cfi_jt;
                            }
                            else {
                                if (arg1 == -0x575eadd84c6cfdfb) {
                                    pcVar2 = sym.__bpf_trace_rdev_set_qos_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                    goto code_r0x08031548;
                                }
                                if (arg1 != -0x5716b2b55b339316) goto code_r0x08037158;
                                pcVar2 = sym.cfg80211_assoc_comeback.cfi_jt;
                            }
code_r0x080314e4:
                            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                                return;
                            }
                            goto code_r0x08037158;
                        }
                        if (arg1 == -0x55f7127174c84569) {
                            pcVar2 = sym.__bpf_trace_rdev_probe_mesh_link.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x556c3a713f8bbec7) {
                                if ((arg1 == -0x550b9e52359ac614) &&
                                   ((pcVar1 + -0x80329b0 >> 3 | pcVar1 << 0x3d) < 0x13)) {
                                    return;
                                }
                                goto code_r0x08037158;
                            }
                            pcVar2 = sym.perf_trace_rdev_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                    else if (arg1 < -0x52fb2543c765d34d) {
                        if (arg1 < -0x5463a157aeb29c51) {
                            if (arg1 == -0x55071fedcd58ba18) {
                                pcVar2 = sym.perf_trace_rdev_change_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                            else {
                                if (arg1 == -0x54f8ac796aea574a) {
                                    pcVar2 = sym.__typeid__ZTSFiP5wiphyE_global_addr;
                                    goto code_r0x08031564;
                                }
                                if (arg1 != -0x548e0ce4ce90c697) goto code_r0x08037158;
                                pcVar2 = sym.perf_trace_cfg80211_bss_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                        }
                        else {
                            if (arg1 != -0x5463a157aeb29c51) {
                                if (arg1 == -0x53c887a672ae5243) {
                                    pcVar2 = sym.ieee80211_freq_khz_to_channel.cfi_jt;
                                }
                                else {
                                    if (arg1 != -0x535be44f8631747d) goto code_r0x08037158;
                                    pcVar2 = sym.ieee80211_radiotap_iterator_init.cfi_jt;
                                }
                                goto code_r0x08031564;
                            }
                            pcVar2 = sym.trace_event_raw_event_rdev_start_nan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                    else if (arg1 < -0x51a7d63fb6617ee2) {
                        if (arg1 == -0x52fb2543c765d34d) {
                            pcVar2 = sym.perf_trace_rdev_set_wiphy_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x5213e08277dd4909) {
                                if (arg1 != -0x51ff1e85e182176f) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_rdev_probe_mesh_link.cfi_jt;
                                goto code_r0x08031564;
                            }
                            pcVar2 = 
                            sym.trace_event_raw_event_cfg80211_rx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                    else {
                        if (arg1 == -0x51a7d63fb6617ee2) {
                            pcVar2 = sym.cfg80211_pmsr_report.cfi_jt;
                            goto code_r0x08031564;
                        }
                        if (arg1 == -0x50f20a795404b3fe) {
                            pcVar2 = sym.__traceiter_rdev_sched_scan_stop.cfi_jt;
                            goto code_r0x080314e4;
                        }
                        if (arg1 != -0x506bb1d44dd52f3a) goto code_r0x08037158;
                        pcVar2 = sym.perf_trace_cfg80211_cqm_pktloss_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                }
                else {
                    if (arg1 < -0x4738830f74ff26f0) {
                        if (arg1 < -0x4d01585b0bb45b88) {
                            if (arg1 < -0x4d7e2f04b135d45c) {
                                if (arg1 == -0x4f37e1463f16166f) {
                                    pcVar2 = sym.ieee80211_get_num_supported_channels.cfi_jt;
                                    goto code_r0x080314e4;
                                }
                                if (arg1 == -0x4f34808c25498fdd) {
                                    pcVar2 = 
                                    sym.trace_event_raw_event_rdev_update_owe_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                    goto code_r0x08031438;
                                }
                                if (arg1 != -0x4e7386570e9583d7) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_rdev_stop_ap.cfi_jt;
                            }
                            else {
                                if (arg1 == -0x4d7e2f04b135d45c) {
                                    if ((pcVar1 + -0x8032f78 >> 3 | pcVar1 << 0x3d) < 0x6e) {
                                        return;
                                    }
                                    goto code_r0x08037158;
                                }
                                if (arg1 == -0x4d6060b00ea4a077) {
                                    pcVar2 = 
                                    sym.__bpf_trace_rdev_get_ftm_responder_stats.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                    goto code_r0x08031548;
                                }
                                if (arg1 != -0x4d034b3e7906ce99) goto code_r0x08037158;
                                pcVar2 = sym.nl80211_dump_wiphy_done.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt;
                            }
                        }
                        else {
                            if (arg1 < -0x4a1bba6793c54d6c) {
                                if (arg1 == -0x4d01585b0bb45b88) {
                                    pcVar2 = sym.__traceiter_rdev_set_noack_map.cfi_jt;
                                    goto code_r0x080314e4;
                                }
                                if (arg1 == -0x4b6630f2fc8925e1) {
                                    pcVar2 = sym.__bpf_trace_rdev_disassoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                }
                                else {
                                    if (arg1 != -0x4a851a0a657b6610) goto code_r0x08037158;
                                    pcVar2 = sym.__bpf_trace_key_handle.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                }
                                goto code_r0x08031548;
                            }
                            if (arg1 == -0x4a1bba6793c54d6c) {
                                pcVar2 = sym.cfg80211_stop_iface.cfi_jt;
                            }
                            else {
                                if (arg1 != -0x484d730a1f1c9010) {
                                    if (arg1 != -0x476d4c8a4ef43f9c) goto code_r0x08037158;
                                    pcVar2 = 
                                    sym.trace_event_raw_event_rdev_set_multicast_to_unicast.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                    goto code_r0x08031548;
                                }
                                pcVar2 = sym.ieee80211_operating_class_to_band.cfi_jt;
                            }
                        }
                        goto code_r0x08031564;
                    }
                    if (arg1 < -0x43fb9ff5fffe0fa8) {
                        if (arg1 < -0x462ae3bf5715f6fc) {
                            if (arg1 == -0x4738830f74ff26f0) {
                                pcVar2 = sym.trace_event_raw_event_rdev_suspend.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                            else {
                                if (arg1 != -0x4727412b9e216a1c) {
                                    if (arg1 != -0x4631be11ef2ae944) goto code_r0x08037158;
                                    pcVar2 = sym.cfg80211_report_wowlan_wakeup.cfi_jt;
                                    goto code_r0x08031564;
                                }
                                pcVar2 = sym.perf_trace_tx_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                        }
                        else {
                            if (arg1 == -0x462ae3bf5715f6fc) {
                                pcVar2 = sym.ieee80211_s1g_channel_width.cfi_jt;
                                goto code_r0x08031564;
                            }
                            if (arg1 == -0x4556fd739218c8f0) {
                                pcVar2 = 
                                sym.trace_event_raw_event_rdev_return_int_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                            else {
                                if (arg1 != -0x44ad817fdda5678d) goto code_r0x08037158;
                                pcVar2 = 
                                sym.trace_event_raw_event_cfg80211_get_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            }
                        }
                    }
                    else {
                        if (arg1 < -0x434523f110b459a8) {
                            if (arg1 == -0x43fb9ff5fffe0fa8) {
                                pcVar2 = sym.__traceiter_rdev_start_nan.cfi_jt;
                            }
                            else {
                                if (arg1 == -0x43dc5c566bf89a04) {
                                    pcVar2 = 
                                    sym.trace_event_raw_event_rdev_dump_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                    goto code_r0x08031548;
                                }
                                if (arg1 != -0x438838fd20f70a61) goto code_r0x08037158;
                                pcVar2 = sym.ieee80211_amsdu_to_8023s.cfi_jt;
                            }
                            goto code_r0x08031564;
                        }
                        if (arg1 < -0x41e1ba38dbbad979) {
                            if (arg1 != -0x434523f110b459a8) {
                                if (arg1 != -0x42ab358ffed1cdc4) goto code_r0x08037158;
                                pcVar2 = sym.cfg80211_merge_profile.cfi_jt;
                                goto code_r0x08031564;
                            }
                            pcVar2 = sym.perf_trace_rdev_nan_change_conf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else if (arg1 == -0x41e1ba38dbbad979) {
                            pcVar2 = sym.__bpf_trace_rdev_add_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x41d97e58a94b8103) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                }
code_r0x08031548:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08037158;
            }
            if (arg1 < -0x6eebd4fbc8cf6927) {
                if (arg1 < -0x781efe480a09a9e7) {
                    if (arg1 < -0x7c2e4d9f44d30df3) {
                        if (arg1 < -0x7dd5c33134ffb6dc) {
                            if (arg1 != -0x7f6175c6ea0bb137) {
                                if (arg1 == -0x7f47a36d831e1103) {
                                    pcVar2 = sym.__traceiter_cfg80211_chandef_dfs_required.cfi_jt;
                                }
                                else {
                                    if (arg1 != -0x7e1d34b011a499d7) goto code_r0x08037158;
                                    pcVar2 = 
                                    sym.trace_event_raw_event_rdev_set_cqm_rssi_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                }
                                goto code_r0x08031548;
                            }
                            pcVar2 = sym.cfg80211_michael_mic_failure.cfi_jt;
                        }
                        else if (arg1 == -0x7dd5c33134ffb6dc) {
                            pcVar2 = sym.cfg80211_bss_color_notify.cfi_jt;
                        }
                        else if (arg1 == -0x7d4e16e7334cdfa0) {
                            pcVar2 = sym.cfg80211_inform_bss_frame_data.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x7cffc73e68519546) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_set_antenna.cfi_jt;
                        }
                    }
                    else if (arg1 < -0x7acded3b89053b3e) {
                        if (arg1 == -0x7c2e4d9f44d30df3) {
                            pcVar2 = 
                            sym.trace_event_raw_event_station_add_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        if (arg1 == -0x7c26d5643601d2fa) {
                            pcVar2 = sym.cfg80211_assoc_failure.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x7ba8b23bda272aa9) goto code_r0x08037158;
                            pcVar2 = sym.cfg80211_rx_mgmt_ext.cfi_jt;
                        }
                    }
                    else if (arg1 == -0x7acded3b89053b3e) {
                        pcVar2 = sym.__cfg80211_radar_event.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x7938a5df4222a034) {
                            if (arg1 != -0x78a7785d8af743a2) goto code_r0x08037158;
                            pcVar2 = 
                            sym.perf_trace_cfg80211_pmksa_candidate_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.cfg80211_get_bss.cfi_jt;
                    }
                }
                else if (arg1 < -0x73a1fa73014a6748) {
                    if (-0x765fe5b2e53d2824 < arg1) {
                        if (arg1 == -0x765fe5b2e53d2823) {
                            pcVar2 = sym.perf_trace_cfg80211_send_assoc_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x7425cf3775a2d3d3) {
                                if (arg1 != -0x73bcefa4a0c42ef3) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_cfg80211_rx_mlme_mgmt.cfi_jt;
                                goto code_r0x080314e4;
                            }
                            pcVar2 = sym.cfg80211_sched_scan_results.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    if (arg1 == -0x781efe480a09a9e7) {
                        pcVar2 = sym.__traceiter_rdev_scan.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x77338b146cdc8ca2) {
                            if (arg1 != -0x766e444f49e3a694) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_link_station_add_mod.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.regdb_fw_cb.afd474eb3fbe20bfb2abcee49bd9f2b1.cfi_jt;
                    }
                }
                else if (arg1 < -0x70d0493f893fe359) {
                    if (arg1 == -0x73a1fa73014a6748) {
                        pcVar2 = sym.__traceiter_rdev_update_connect_params.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x72d23d48227c59ea) {
                            if (arg1 != -0x710a799bdd474417) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_join_mesh.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.__traceiter_rdev_tdls_mgmt.cfi_jt;
                    }
                }
                else if (arg1 == -0x70d0493f893fe359) {
                    pcVar2 = sym.__traceiter_rdev_remain_on_channel.cfi_jt;
                }
                else if (arg1 == -0x70ca92fa2ffb533f) {
                    pcVar2 = sym.__traceiter_rdev_return_int_cookie.cfi_jt;
                }
                else {
                    if (arg1 != -0x7083e56bb858fbed) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_get_station.cfi_jt;
                }
            }
            else if (arg1 < -0x66d421a09845f9f8) {
                if (arg1 < -0x6b1cd573ade4d07e) {
                    if (arg1 < -0x6ceab2c0f72e4dfa) {
                        if (arg1 == -0x6eebd4fbc8cf6927) {
                            pcVar2 = sym.__traceiter_rdev_return_int_int.cfi_jt;
                        }
                        else if (arg1 == -0x6e2b7d212b6330ae) {
                            pcVar2 = sym.__traceiter_cfg80211_pmsr_report.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x6daa6ea302e2c0ed) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_return_int_tx_rx.cfi_jt;
                        }
                    }
                    else if (arg1 == -0x6ceab2c0f72e4dfa) {
                        pcVar2 = sym.__traceiter_rdev_set_power_mgmt.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6c6b8a27cbd9b6d4) {
                            if (arg1 != -0x6b2fe89dc9ec8156) goto code_r0x08037158;
                            pcVar2 = sym.perf_trace_rdev_del_link_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.freq_reg_info.cfi_jt;
                    }
                }
                else if (arg1 < -0x6a5f97316bc7fd0a) {
                    if (arg1 != -0x6b1cd573ade4d07e) {
                        if (arg1 == -0x6aaa6ba1a3cf5823) {
                            pcVar2 = sym.__bpf_trace_rdev_set_tx_power.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x6a68ee1bca317672) goto code_r0x08037158;
                            pcVar2 = sym.perf_trace_cfg80211_pmsr_report.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.cfg80211_get_iftype_ext_capa.cfi_jt;
                }
                else {
                    if (arg1 != -0x6a5f97316bc7fd0a) {
                        if (arg1 == -0x67f2c686cee51728) {
                            pcVar2 = 
                            sym.trace_event_raw_event_cfg80211_chandef_dfs_required.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                            ;
                            goto code_r0x08031380;
                        }
                        if (arg1 != -0x67d12de0afe242f5) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_rdev_return_int_cookie.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_cfg80211_report_obss_beacon.cfi_jt;
                }
            }
            else if (arg1 < -0x5f7361e7824c88a9) {
                if (arg1 < -0x62dd62f9627e2dca) {
                    if (arg1 == -0x66d421a09845f9f8) {
                        pcVar2 = sym.name_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt;
code_r0x08030bac:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                            return;
                        }
                        goto code_r0x08037158;
                    }
                    if (arg1 != -0x642d8a2d83071d96) {
                        if (arg1 != -0x63a35e5e7651f4f3) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_get_key.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    pcVar2 = sym.wdev_chandef.cfi_jt;
                }
                else {
                    if (arg1 == -0x62dd62f9627e2dca) {
                        pcVar2 = 
                        sym.trace_event_raw_event_rdev_set_cqm_rssi_range_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                        ;
                        goto code_r0x08031548;
                    }
                    if (arg1 == -0x6140bd6de869eefe) {
                        pcVar2 = sym.__traceiter_cfg80211_probe_status.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x60d17ab5a8bab404) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_set_tid_config.cfi_jt;
                    }
                }
            }
            else if (arg1 < -0x5c1b868f13b2c725) {
                if (arg1 == -0x5f7361e7824c88a9) {
                    pcVar2 = sym.perf_trace_rdev_change_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 == -0x5d31f3c894e4dde6) {
                    pcVar2 = sym.perf_trace_rdev_set_default_mgmt_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031438;
                }
                if (arg1 != -0x5c4dd0609cf5add4) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_cqm_beacon_loss_notify.cfi_jt;
            }
            else if (arg1 < -0x59530b2a6a4ec187) {
                if (arg1 == -0x5c1b868f13b2c725) {
                    pcVar2 = sym.cfg80211_disconnected.cfi_jt;
                }
                else {
                    if (arg1 != -0x595b1a7338843e49) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_register_netdevice.cfi_jt;
                }
            }
            else if (arg1 == -0x59530b2a6a4ec187) {
                pcVar2 = sym.__traceiter_rdev_del_tx_ts.cfi_jt;
            }
            else {
                if (arg1 != -0x5815ec16e18abb4a) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_connect_done.cfi_jt;
            }
        }
        else if (arg1 < -0x216e8250a4efba4d) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 < -0x36ef5e4048033816) {
                    if (arg1 < -0x3c2da408cdf4245d) {
                        if (arg1 < -0x3d8baffa891150df) {
                            if (arg1 == -0x41388d38a0114304) {
                                pcVar2 = sym.__traceiter_cfg80211_radar_event.cfi_jt;
                            }
                            else {
                                if (arg1 == -0x401e7cee8b9424cd) {
                                    pcVar2 = 
                                    sym.trace_event_raw_event_rdev_set_txq_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                    goto code_r0x08031548;
                                }
                                if (arg1 != -0x3faa381b95534463) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_rdev_reset_tid_config.cfi_jt;
                            }
                        }
                        else if (arg1 == -0x3d8baffa891150df) {
                            pcVar2 = sym.__cfg80211_alloc_reply_skb.cfi_jt;
                        }
                        else if (arg1 == -0x3d16f2fe05bb31ea) {
                            pcVar2 = sym.__traceiter_rdev_set_wiphy_params.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x3ce486d30ac243bc) goto code_r0x08037158;
                            pcVar2 = sym.cfg80211_bss_iter.cfi_jt;
                        }
                    }
                    else if (arg1 < -0x38b57295e257cafa) {
                        if (arg1 == -0x3c2da408cdf4245d) {
                            pcVar2 = sym.__traceiter_rdev_set_ap_chanwidth.cfi_jt;
                        }
                        else {
                            if (arg1 == -0x3bbab376553ee018) {
                                pcVar2 = sym.perf_trace_rdev_scan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                goto code_r0x08031548;
                            }
                            if (arg1 != -0x39da21efa915edde) goto code_r0x08037158;
                            pcVar2 = sym.cfg80211_tdls_oper_request.cfi_jt;
                        }
                    }
                    else if (arg1 == -0x38b57295e257cafa) {
                        pcVar2 = sym.__traceiter_cfg80211_inform_bss_frame.cfi_jt;
                    }
                    else {
                        if (arg1 == -0x37d6735ea85a6214) {
                            pcVar2 = sym.perf_trace_wiphy_enabled_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        if (arg1 != -0x37bc61dc8fba8305) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_set_wakeup.cfi_jt;
                    }
                }
                else if (arg1 < -0x3381050c95f78dad) {
                    if (arg1 < -0x352392a83079b2f1) {
                        if (arg1 == -0x36ef5e4048033816) {
                            pcVar2 = sym.perf_trace_rdev_color_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x36bf3bcca05b6b2d) {
                                if (arg1 != -0x367e122851f9e17f) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_rdev_return_chandef.cfi_jt;
                                goto code_r0x08031564;
                            }
                            pcVar2 = 
                            sym.trace_event_raw_event_rdev_return_void_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    if (arg1 == -0x352392a83079b2f1) {
                        pcVar2 = sym.wiphy_new_nm.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x33f5ace5dd59e5af) {
                            if (arg1 != -0x3395ba5bfa1d712a) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_add_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.__traceiter_cfg80211_ibss_joined.cfi_jt;
                    }
                }
                else if (arg1 < -0x3265b2cb95004eda) {
                    if (arg1 != -0x3381050c95f78dad) {
                        if (arg1 != -0x3322c6847f50733f) {
                            if (arg1 != -0x3309776639b8e75a) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_cfg80211_return_u32.cfi_jt;
                            goto code_r0x080314e4;
                        }
                        pcVar2 = 
                        sym.trace_event_raw_event_cfg80211_send_rx_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_rdev_get_ftm_responder_stats.cfi_jt;
                }
                else if (arg1 == -0x3265b2cb95004eda) {
                    pcVar2 = sym.ieee80211_chandef_to_operating_class.cfi_jt;
                }
                else {
                    if (arg1 != -0x31f89766ca40f96e) {
                        if (arg1 != -0x2fde3d329553e502) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_rdev_return_int_mpath_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_rdev_external_auth.cfi_jt;
                }
            }
            else if (arg1 < -0x291208e90ff3209a) {
                if (arg1 < -0x2d0a1f85c23be759) {
                    if (-0x2e2df47de9ac38a5 < arg1) {
                        if (arg1 == -0x2e2df47de9ac38a4) {
                            pcVar2 = 
                            sym.trace_event_raw_event_rdev_change_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x2d34bfead1dda7c2) {
                                if (arg1 != -0x2d288c715d83a659) goto code_r0x08037158;
                                pcVar2 = sym.wiphy_namespace.cdb4e9913ee09f921401e540eb3f658c.cfi_jt;
                                goto code_r0x08031564;
                            }
                            pcVar2 = sym.perf_trace_rdev_set_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    if (arg1 == -0x2ee0710dce68437c) {
                        pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x2ea5bc08494035f6) {
                            if (arg1 != -0x2e44f7613b0421f9) goto code_r0x08037158;
                            pcVar2 = sym.__typeid__ZTSFvP5wiphyE_global_addr;
                            goto code_r0x080309e0;
                        }
                        pcVar2 = sym.__traceiter_rdev_set_cqm_rssi_range_config.cfi_jt;
                    }
                }
                else if (arg1 < -0x2b3a89090cec16d8) {
                    if (arg1 == -0x2d0a1f85c23be759) {
                        pcVar2 = sym.trace_event_raw_event_netdev_evt_only.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    if (arg1 == -0x2bcfbaeda388c8fb) {
                        pcVar2 = sym.cfg80211_cqm_txe_notify.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x2b4cdca8b374bd63) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_del_station.cfi_jt;
                    }
                }
                else if (arg1 == -0x2b3a89090cec16d8) {
                    pcVar2 = sym.cfg80211_chandef_dfs_required.cfi_jt;
                }
                else if (arg1 == -0x2af0736d79b541b9) {
                    pcVar2 = sym.__traceiter_rdev_return_int_mpath_info.cfi_jt;
                }
                else {
                    if (arg1 != -0x2a5ceefa96bbb6ce) goto code_r0x08037158;
                    pcVar2 = sym.nl80211_post_doit.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt;
                }
            }
            else if (arg1 < -0x249b305cbb50edef) {
                if (-0x266b3732e3b0522c < arg1) {
                    if (arg1 == -0x266b3732e3b0522b) {
                        pcVar2 = sym.__bpf_trace_wiphy_netdev_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x262d862bd49a3610) {
                            if (arg1 != -0x2598530a019e885a) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_set_multicast_to_unicast.cfi_jt;
                            goto code_r0x08031564;
                        }
                        pcVar2 = sym.cfg80211_unlink_bss.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                if (arg1 == -0x291208e90ff3209a) {
                    pcVar2 = sym.__traceiter_rdev_add_key.cfi_jt;
                }
                else if (arg1 == -0x27dc1f3aa6b692be) {
                    pcVar2 = sym.cfg80211_report_obss_beacon_khz.cfi_jt;
                }
                else {
                    if (arg1 != -0x269f0ca40a294141) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_vendor_cmd_reply.cfi_jt;
                }
            }
            else if (arg1 < -0x2232b5fca7fb5744) {
                if (arg1 == -0x249b305cbb50edef) {
                    pcVar2 = sym.__traceiter_rdev_return_int.cfi_jt;
                }
                else if (arg1 == -0x232448653355b441) {
                    pcVar2 = sym.__traceiter_rdev_mgmt_tx.cfi_jt;
                }
                else {
                    if (arg1 != -0x2266b3ee56f9d276) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_add_tx_ts.cfi_jt;
                }
            }
            else {
                if (arg1 < -0x21cd7161ea0d88c4) {
                    if (arg1 == -0x2232b5fca7fb5744) {
                        pcVar2 = sym.trace_event_raw_event_cfg80211_return_uint.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031438;
                    }
                    if (arg1 != -0x21d055069e80bdf4) goto code_r0x08037158;
                    pcVar2 = sym.__bpf_trace_rdev_return_int_survey_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 == -0x21cd7161ea0d88c4) {
                    pcVar2 = sym.cfg80211_control_port_tx_status.cfi_jt;
                }
                else {
                    if (arg1 != -0x218c0108fde83420) goto code_r0x08037158;
                    pcVar2 = sym.trace_event_raw_init.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x13815bf460251f31) {
            if (arg1 < -0x1c7522ae179ebdeb) {
                if (arg1 < -0x1ea435fb6b840f38) {
                    if (arg1 < -0x1f576ab85df8a3d8) {
                        if (arg1 == -0x216e8250a4efba4d) {
                            pcVar2 = sym.__traceiter_rdev_tdls_channel_switch.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x2128b397f5cafbed) {
                                if (arg1 != -0x20ab8fb36b52fe4f) goto code_r0x08037158;
                                pcVar2 = 
                                sym.__bpf_trace_rdev_return_int_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                goto code_r0x08031548;
                            }
                            pcVar2 = sym.regulatory_hint.cfi_jt;
                        }
                    }
                    else if (arg1 == -0x1f576ab85df8a3d8) {
                        pcVar2 = sym.__traceiter_rdev_tdls_oper.cfi_jt;
                    }
                    else if (arg1 == -0x1f313d4f5f7f47b2) {
                        pcVar2 = sym.ieee80211_channel_to_freq_khz.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x1ee13f594e872ae9) goto code_r0x08037158;
                        pcVar2 = sym.regulatory_pre_cac_allowed.cfi_jt;
                    }
                }
                else if (arg1 < -0x1d6ea515a59b1eaa) {
                    if (arg1 != -0x1ea435fb6b840f38) {
                        if (arg1 != -0x1e000b112dfeb793) {
                            if (arg1 != -0x1d8befbe07200976) goto code_r0x08037158;
                            pcVar2 = 
                            sym.perf_trace_cfg80211_ready_on_channel_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031438;
                        }
                        pcVar2 = sym.cfg80211_send_layer2_update.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    pcVar2 = sym.__cfg80211_send_event_skb.cfi_jt;
                }
                else if (arg1 == -0x1d6ea515a59b1eaa) {
                    pcVar2 = sym.cfg80211_ft_event.cfi_jt;
                }
                else {
                    if (arg1 == -0x1cfeaaf6edb6e8bf) {
                        pcVar2 = sym.cfg80211_new_sta.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    if (arg1 != -0x1cc8fd5802593cca) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_return_int_survey_info.cfi_jt;
                }
            }
            else if (arg1 < -0x18c9167d074b6129) {
                if (arg1 < -0x1aed996712214e6a) {
                    if (arg1 == -0x1c7522ae179ebdeb) {
                        pcVar2 = sym.wiphy_apply_custom_regulatory.cfi_jt;
                    }
                    else {
                        if (arg1 == -0x1c17e41d9fc7778a) {
                            pcVar2 = 
                            sym.trace_event_raw_event_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        if (arg1 != -0x1bd08f27aaf469c0) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_update_ft_ies.cfi_jt;
                    }
                }
                else if (arg1 == -0x1aed996712214e6a) {
                    pcVar2 = sym.get_wiphy_regdom.cfi_jt;
                }
                else {
                    if (arg1 != -0x19fb740a0d30209b) {
                        if (arg1 != -0x18d678ca2b52ad3c) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_rdev_update_ft_ies.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.cfg80211_check_combinations.cfi_jt;
                }
            }
            else if (arg1 < -0x17319c6d7f06c005) {
                if (arg1 == -0x18c9167d074b6129) {
                    pcVar2 = sym.__traceiter_rdev_update_mgmt_frame_registrations.cfi_jt;
                }
                else {
                    if (arg1 == -0x17c63549d2716c84) {
                        pcVar2 = sym.__bpf_trace_wiphy_netdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    if (arg1 != -0x177f485416ac8093) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_unregister_wdev.cfi_jt;
                }
            }
            else if (arg1 < -0x142727db66627735) {
                if (arg1 == -0x17319c6d7f06c005) {
                    pcVar2 = sym.__bpf_trace_rdev_mgmt_tx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 != -0x156acdc0cfd5f5ac) goto code_r0x08037158;
                pcVar2 = sym.nl80211_pre_doit.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt;
            }
            else {
                if (arg1 == -0x142727db66627735) {
                    pcVar2 = sym.__traceiter_cfg80211_update_owe_info_event.cfi_jt;
                    goto code_r0x080314e4;
                }
                if (arg1 != -0x1410d2ade4860c0f) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_chandef_usable.cfi_jt;
            }
        }
        else if (arg1 < -0xb6d9005536c807a) {
            if (arg1 < -0x106f421e37f22612) {
                if (arg1 < -0x1254991ea16384c2) {
                    if (arg1 == -0x13815bf460251f31) {
                        pcVar2 = sym.perf_trace_rdev_set_coalesce.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x134373ee881a54ed) {
                            if (arg1 != -0x12f2279afe2f5349) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_assoc.cfi_jt;
                            goto code_r0x08031564;
                        }
                        pcVar2 = sym.__bpf_trace_rdev_dump_survey.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                }
                else {
                    if (arg1 != -0x1254991ea16384c2) {
                        if (arg1 == -0x1198f2da5ee2aa68) {
                            pcVar2 = sym.__traceiter_rdev_auth.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x10968851ce8c718e) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_tx_control_port.cfi_jt;
                        }
                        goto code_r0x08031564;
                    }
                    pcVar2 = sym.__bpf_trace_rdev_pmksa.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                goto code_r0x08031548;
            }
            if (arg1 < -0xd14d672aeb4ae4e) {
                if (arg1 == -0x106f421e37f22612) {
                    pcVar2 = sym.cfg80211_nan_match.cfi_jt;
                }
                else if (arg1 == -0xd2782553878bcae) {
                    pcVar2 = sym.__traceiter_cfg80211_scan_done.cfi_jt;
                }
                else {
                    if (arg1 != -0xd265269edbcca5e) goto code_r0x08037158;
                    pcVar2 = sym.ieee80211_get_response_rate.cfi_jt;
                }
            }
            else if (arg1 == -0xd14d672aeb4ae4e) {
                pcVar2 = sym.__traceiter_cfg80211_send_rx_auth.cfi_jt;
            }
            else {
                if (arg1 == -0xcaafc6a4a1a3849) {
                    pcVar2 = sym.trace_event_raw_event_cfg80211_new_sta.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 != -0xb769f777986eb6b) goto code_r0x08037158;
                pcVar2 = sym.ieee80211_get_hdrlen_from_skb.cfi_jt;
            }
        }
        else if (arg1 < -0x8ed1601c6440a48) {
            if (arg1 < -0x9c4af9e606e77c7) {
                if (arg1 == -0xb6d9005536c807a) {
                    pcVar2 = sym.cfg80211_rx_control_port.cfi_jt;
                }
                else {
                    if (arg1 != -0xb21942e16985172) {
                        if (arg1 != -0xb2035bb58e8a6e8) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_testmode_dump.cfi_jt;
                        goto code_r0x08030bac;
                    }
                    pcVar2 = sym.__traceiter_rdev_set_pmk.cfi_jt;
                }
            }
            else if (arg1 == -0x9c4af9e606e77c7) {
                pcVar2 = sym.__traceiter_cfg80211_tdls_oper_request.cfi_jt;
            }
            else if (arg1 == -0x95c93bb2e6c232e) {
                pcVar2 = sym.cfg80211_inform_bss_data.cfi_jt;
            }
            else {
                if (arg1 != -0x932e1ee8695e7e3) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_rdev_crit_proto_start.cfi_jt;
            }
        }
        else {
            if (arg1 < -0x62f88dfd7f1bafe) {
                if (arg1 == -0x8ed1601c6440a48) {
                    pcVar2 = sym.__bpf_trace_netdev_frame_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                else {
                    if (arg1 == -0x8b1a35cb44a0eb4) {
                        pcVar2 = sym.perf_trace_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
code_r0x08031380:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 9) {
                            return;
                        }
                        goto code_r0x08037158;
                    }
                    if (arg1 != -0x76eab85993f975d) goto code_r0x08037158;
                    pcVar2 = sym.perf_trace_rdev_set_mcast_rate.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                goto code_r0x08031548;
            }
            if (arg1 < -0x4d4c8e26972e3ef) {
                if (arg1 == -0x62f88dfd7f1bafe) {
                    pcVar2 = sym.cfg80211_is_element_inherited.cfi_jt;
                }
                else {
                    if (arg1 != -0x5561fa1f9174cdd) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_connect.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x4d4c8e26972e3ef) {
                    pcVar2 = sym.__bpf_trace_rdev_update_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 != -0x4bafc96227deb9b) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_rdev_del_link_station.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x412963bc89b8fe2c) {
        if (arg1 < 0x22ec59056877e5e0) {
            if (arg1 < 0xda67202129f7b3b) {
                if (arg1 < 0x310f4f0a20085f4) {
                    if (arg1 < -0xc55582b29b0a2e) {
                        if (arg1 < -0x22bf9a0a324a545) {
                            if (arg1 != -0x4a6bcfd03d15fca) {
                                if (arg1 == -0x4707b504b5a46a7) {
                                    pcVar2 = sym.__traceiter_rdev_add_intf_link.cfi_jt;
                                }
                                else {
                                    if (arg1 != -0x2383e8e7605e15a) goto code_r0x08037158;
                                    pcVar2 = 
                                    sym.__bpf_trace_rdev_libertas_set_mesh_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                }
                                goto code_r0x08031548;
                            }
                            pcVar2 = sym.__cfg80211_alloc_event_skb.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x22bf9a0a324a545) {
                                if (arg1 == -0x17884b4f578ba43) {
                                    pcVar2 = sym.perf_trace_rdev_tx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                                    ;
                                }
                                else {
                                    if (arg1 != -0xe07cc8942bea70) goto code_r0x08037158;
                                    pcVar2 = 
                                    sym.__bpf_trace_cfg80211_bss_color_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                }
                                goto code_r0x08031548;
                            }
                            pcVar2 = sym.__traceiter_rdev_join_ibss.cfi_jt;
                        }
                    }
                    else if (arg1 < 0x224e97c07526aae) {
                        if (arg1 == -0xc55582b29b0a2e) {
                            pcVar2 = sym.__traceiter_rdev_set_bitrate_mask.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x4fd577cb602984) {
                                if (arg1 != -0x16bb572d233b70) goto code_r0x08037158;
                                pcVar2 = sym.__bpf_trace_rdev_dump_mpath.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                goto code_r0x08031438;
                            }
                            pcVar2 = sym.__traceiter_rdev_change_beacon.cfi_jt;
                        }
                    }
                    else {
                        if (arg1 == 0x224e97c07526aae) {
                            pcVar2 = 
                            sym.__bpf_trace_rdev_update_mgmt_frame_registrations.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                            ;
                            goto code_r0x08031548;
                        }
                        if (arg1 == 0x2876ef22d8c5508) {
                            pcVar2 = sym.ieee80211_hdrlen.cfi_jt;
                        }
                        else {
                            if (arg1 != 0x2b3a43e29242445) goto code_r0x08037158;
                            pcVar2 = sym.init_module.cfi_jt;
                        }
                    }
                }
                else if (arg1 < 0x9b81c4f71896c07) {
                    if (arg1 < 0x6481815dc531df7) {
                        if (arg1 == 0x310f4f0a20085f4) {
                            pcVar2 = sym.__bpf_trace_rdev_set_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 == 0x3714130ea71bf38) {
                                pcVar2 = sym.__traceiter_cfg80211_ft_event.cfi_jt;
                                goto code_r0x08031564;
                            }
                            if (arg1 != 0x4a64d43c95ed5d9) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_set_cqm_txe_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    if (arg1 == 0x6481815dc531df7) {
                        pcVar2 = sym.cfg80211_roamed.cfi_jt;
                    }
                    else if (arg1 == 0x7dcf1dee7cb13c7) {
                        pcVar2 = sym.cfg80211_notify_new_peer_candidate.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x81a2ab2808eca3d) goto code_r0x08037158;
                        pcVar2 = sym.cfg80211_chandef_create.cfi_jt;
                    }
                }
                else if (arg1 < 0xb941386c0de3354) {
                    if (arg1 == 0x9b81c4f71896c07) {
                        pcVar2 = sym.__traceiter_rdev_set_mac_acl.cfi_jt;
                    }
                    else {
                        if (arg1 != 0xb580d413408e0b5) {
                            if ((arg1 == 0xb5e713949a242a1) && ((pcVar1 + -0x8032ee8 >> 3 | pcVar1 << 0x3d) < 10)) {
                                return;
                            }
                            goto code_r0x08037158;
                        }
                        pcVar2 = sym.__traceiter_cfg80211_reg_can_beacon.cfi_jt;
                    }
                }
                else {
                    if (arg1 == 0xb941386c0de3354) {
                        pcVar2 = sym.__traceiter_cfg80211_ch_switch_notify.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    if (arg1 != 0xbeb5009eae29e56) {
                        if (arg1 != 0xd7401bdc013bcdd) goto code_r0x08037158;
                        pcVar2 = 
                        sym.trace_event_raw_event_cfg80211_ready_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_rdev_disassoc.cfi_jt;
                }
            }
            else if (arg1 < 0x13742e6b7c3af9b6) {
                if (0x10967db637a6e590 < arg1) {
                    if (arg1 < 0x11249c6fd97fed8a) {
                        if (arg1 == 0x10967db637a6e591) {
                            pcVar2 = sym.__bpf_trace_rdev_stop_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 == 0x10d90bf9986464eb) {
                                pcVar2 = sym.__traceiter_rdev_return_void_tx_rx.cfi_jt;
                                goto code_r0x08031564;
                            }
                            if (arg1 != 0x10fb388881152b19) goto code_r0x08037158;
                            pcVar2 = sym.perf_trace_cfg80211_assoc_comeback.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                    else {
                        if (arg1 != 0x11249c6fd97fed8a) {
                            if (arg1 == 0x11d05a0763977eca) {
                                pcVar2 = sym.cfg80211_crit_proto_stopped.cfi_jt;
                            }
                            else {
                                if (arg1 != 0x135dd496517b7362) goto code_r0x08037158;
                                pcVar2 = sym.cfg80211_conn_failed.cfi_jt;
                            }
                            goto code_r0x08031564;
                        }
                        pcVar2 = 
                        sym.trace_event_raw_event_cfg80211_reg_can_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                if (arg1 < 0xe690570786fa9f5) {
                    if (arg1 == 0xda67202129f7b3b) {
                        pcVar2 = sym.__traceiter_rdev_del_pmk.cfi_jt;
                        goto code_r0x08030bac;
                    }
                    if (arg1 == 0xdbc317579a200e6) {
                        pcVar2 = sym.cfg80211_cqm_pktloss_notify.cfi_jt;
                    }
                    else {
                        if (arg1 != 0xe49a76722087e69) goto code_r0x08037158;
                        pcVar2 = sym.cfg80211_ch_switch_notify.cfi_jt;
                    }
                }
                else {
                    if (arg1 != 0xe690570786fa9f5) {
                        if (arg1 == 0xea7dd7cdf43bfbe) {
                            pcVar2 = sym.regulatory_set_wiphy_regd_sync.cfi_jt;
                            goto code_r0x080314e4;
                        }
                        if (arg1 != 0x1031ac6bf3976238) goto code_r0x08037158;
                        pcVar2 = sym.trace_event_raw_event_rdev_set_default_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.ieee80211_mandatory_rates.cfi_jt;
                }
            }
            else if (arg1 < 0x1c2b0952efa24c7a) {
                if (arg1 < 0x16705de0e940f141) {
                    if (arg1 == 0x13742e6b7c3af9b6) {
                        pcVar2 = sym.__traceiter_rdev_dump_survey.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x13ca213c2844a484) {
                            if (arg1 != 0x14dc3e1cb046fc5b) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_add_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.cfg80211_rx_assoc_resp.cfi_jt;
                    }
                }
                else if (arg1 == 0x16705de0e940f141) {
                    pcVar2 = sym.__traceiter_rdev_set_qos_map.cfi_jt;
                }
                else {
                    if (arg1 == 0x17a3ddd773ffd387) {
                        pcVar2 = sym.perf_trace_rdev_return_int_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    if (arg1 != 0x1b0e6212818b84a3) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_cqm_rssi_notify.cfi_jt;
                }
            }
            else {
                if (0x1ea8297c67a1e4cf < arg1) {
                    if (arg1 < 0x2094bca5e8f72155) {
                        if (arg1 == 0x1ea8297c67a1e4d0) {
                            pcVar2 = sym.__traceiter_cfg80211_tx_mgmt_expired.cfi_jt;
                            goto code_r0x080314e4;
                        }
                        if (arg1 != 0x207ebadd0796afd3) goto code_r0x08037158;
                        pcVar2 = sym.trace_event_raw_event_rdev_crit_proto_start.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                        ;
                    }
                    else {
                        if (arg1 == 0x2094bca5e8f72155) {
                            pcVar2 = sym.cfg80211_tx_mlme_mgmt.cfi_jt;
                            goto code_r0x08031564;
                        }
                        if (arg1 != 0x210fbd9f75181fba) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_rdev_set_power_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                if (arg1 == 0x1c2b0952efa24c7a) {
                    pcVar2 = sym.trace_event_reg.cfi_jt;
                }
                else if (arg1 == 0x1d8b2aa022387268) {
                    pcVar2 = sym.ieee80211_ie_split_ric.cfi_jt;
                }
                else {
                    if (arg1 != 0x1e80b9ae58d0187e) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_set_default_key.cfi_jt;
                }
            }
        }
        else if (arg1 < 0x31c0b6fbdf085b1d) {
            if (arg1 < 0x29f4474f037b8aeb) {
                if (arg1 < 0x270e2eb0f75f31ad) {
                    if (arg1 < 0x2375436246bb0d06) {
                        if (arg1 != 0x22ec59056877e5e0) {
                            if (arg1 == 0x2335ceb6370a2d3d) {
                                pcVar2 = sym.__traceiter_rdev_leave_ocb.cfi_jt;
code_r0x080309e0:
                                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                                    return;
                                }
                                goto code_r0x08037158;
                            }
                            if (arg1 != 0x235aeb6adaaf465f) goto code_r0x08037158;
                            pcVar2 = sym.validate_he_capa.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.__traceiter_rdev_change_virtual_intf.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x2375436246bb0d06) {
                            if (arg1 != 0x2407b4a0515326c4) {
                                if (arg1 != 0x24a6bce91c6c8338) goto code_r0x08037158;
                                pcVar2 = sym.__bpf_trace_rdev_probe_client.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                                goto code_r0x08030664;
                            }
                            pcVar2 = 
                            sym.trace_event_raw_event_rdev_set_ap_chanwidth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.cfg80211_get_p2p_attr.cfi_jt;
                    }
                }
                else if (arg1 < 0x284de802fb54b884) {
                    if (arg1 == 0x270e2eb0f75f31ad) {
                        pcVar2 = sym.cfg80211_iftype_allowed.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x27c93a7172233cc8) {
                            if (arg1 != 0x27e476b819337bf5) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_cfg80211_gtk_rekey_notify.cfi_jt;
                            goto code_r0x08031438;
                        }
                        pcVar2 = sym.__traceiter_rdev_start_radar_detection.cfi_jt;
                    }
                }
                else if (arg1 == 0x284de802fb54b884) {
                    pcVar2 = sym.__traceiter_rdev_add_nan_func.cfi_jt;
                }
                else if (arg1 == 0x28891b4240612f66) {
                    pcVar2 = sym.ieee80211_get_channel_khz.cfi_jt;
                }
                else {
                    if (arg1 != 0x28f09c42a77f94b0) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_set_cqm_rssi_config.cfi_jt;
                }
            }
            else if (arg1 < 0x2c196a995d3ec0db) {
                if (arg1 < 0x2a8a80a1ea71f5f2) {
                    if (arg1 == 0x29f4474f037b8aeb) {
                        pcVar2 = sym.__traceiter_rdev_del_pmksa.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    if (arg1 == 0x2a7792a27f9ade68) {
                        pcVar2 = sym.cfg80211_update_owe_info_event.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x2a7b9dc8b3857704) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_return_int_station_info.cfi_jt;
                    }
                }
                else if (arg1 == 0x2a8a80a1ea71f5f2) {
                    pcVar2 = sym.__traceiter_rdev_suspend.cfi_jt;
                }
                else {
                    if (arg1 != 0x2ac3ec07a7ce3a5b) {
                        if (arg1 != 0x2b17460ce4bf82db) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_cfg80211_return_bool.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    pcVar2 = sym.__traceiter_cfg80211_cac_event.cfi_jt;
                }
            }
            else if (arg1 < 0x2ecbfa2840fc91a6) {
                if (arg1 == 0x2c196a995d3ec0db) {
                    pcVar2 = sym.__traceiter_cfg80211_rx_control_port.cfi_jt;
                }
                else if (arg1 == 0x2d70e188384bbd1b) {
                    pcVar2 = sym.__traceiter_cfg80211_ready_on_channel.cfi_jt;
                }
                else {
                    if (arg1 != 0x2e190bb313372211) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_start_ap.cfi_jt;
                }
            }
            else if (arg1 < 0x2fe3a135c3a9dfee) {
                if (arg1 == 0x2ecbfa2840fc91a6) {
                    pcVar2 = sym.trace_event_raw_event_rdev_add_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 != 0x2fb10c6459a35509) goto code_r0x08037158;
                pcVar2 = sym.get_key_callback.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt;
            }
            else {
                if (arg1 != 0x2fe3a135c3a9dfee) {
                    if (arg1 != 0x31b8d5edd0c04e0f) goto code_r0x08037158;
                    pcVar2 = sym.__bpf_trace_rdev_crit_proto_stop.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
code_r0x08030664:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 0xc) {
                        return;
                    }
                    goto code_r0x08037158;
                }
                pcVar2 = sym.cfg80211_check_station_change.cfi_jt;
            }
        }
        else if (arg1 < 0x3cde4d07ddd0c0f0) {
            if (arg1 < 0x393426cb04ce3910) {
                if (arg1 < 0x34799dd423ff4c99) {
                    if (arg1 == 0x31c0b6fbdf085b1d) {
                        pcVar2 = sym.cfg80211_pernet_exit.4cb80888839f98f690b7d75ef25d1694.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x3326b52cf8a3acf9) {
                            if (arg1 != 0x339d69936ab316ee) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_dump_mpp.cfi_jt;
                            goto code_r0x080314e4;
                        }
                        pcVar2 = sym.cfg80211_external_auth_request.cfi_jt;
                    }
                }
                else if (arg1 == 0x34799dd423ff4c99) {
                    pcVar2 = sym.__traceiter_rdev_join_ocb.cfi_jt;
                }
                else {
                    if (arg1 != 0x351acfa819d3d19e) {
                        if (arg1 != 0x3816b09c15b92012) goto code_r0x08037158;
                        pcVar2 = sym.trace_event_raw_event_rdev_tdls_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_cfg80211_get_bss.cfi_jt;
                }
            }
            else if (arg1 < 0x3a0e99abdb562550) {
                if (arg1 == 0x393426cb04ce3910) {
                    pcVar2 = sym.__bpf_trace_rdev_connect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                if (arg1 == 0x396b730d1480ba14) {
                    pcVar2 = sym.cfg80211_chandef_valid.cfi_jt;
                }
                else {
                    if (arg1 != 0x3987d3a6447993e3) goto code_r0x08037158;
                    pcVar2 = sym.cfg80211_iter_combinations.cfi_jt;
                }
            }
            else if (arg1 == 0x3a0e99abdb562550) {
                pcVar2 = sym.__traceiter_cfg80211_pmksa_candidate_notify.cfi_jt;
            }
            else if (arg1 == 0x3c3849d05cb811a2) {
                pcVar2 = sym.cfg80211_ibss_joined.cfi_jt;
            }
            else {
                if (arg1 != 0x3c3dddc17eff0f5e) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_rdev_set_mcast_rate.cfi_jt;
            }
        }
        else if (arg1 < 0x3efde8b55b22893d) {
            if (arg1 < 0x3d722264d1ab75cb) {
                if (arg1 == 0x3cde4d07ddd0c0f0) {
                    pcVar2 = sym.__traceiter_rdev_mod_link_station.cfi_jt;
                    goto code_r0x080314e4;
                }
                if (arg1 != 0x3d187b274e2b6b8c) {
                    if (arg1 != 0x3d20fa4fdec800fe) goto code_r0x08037158;
                    pcVar2 = 
                    sym.trace_event_raw_event_rdev_return_int_station_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                pcVar2 = sym.__traceiter_rdev_set_fils_aad.cfi_jt;
            }
            else {
                if (arg1 != 0x3d722264d1ab75cb) {
                    if (arg1 == 0x3dd1a39e589289fe) {
                        if ((pcVar1 + -0x80332e8 >> 3 | pcVar1 << 0x3d) < 0x99) {
                            return;
                        }
                        goto code_r0x08037158;
                    }
                    if (arg1 != 0x3dd60aa7133a4870) goto code_r0x08037158;
                    pcVar2 = sym.perf_trace_cfg80211_cqm_rssi_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                pcVar2 = sym.cfg80211_find_elem_match.cfi_jt;
            }
        }
        else if (arg1 < 0x4001321b0b1028e0) {
            if (arg1 == 0x3efde8b55b22893d) {
                pcVar2 = sym.__bpf_trace_rdev_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031548;
            }
            if (arg1 != 0x3f1f96e236270945) {
                if ((arg1 == 0x3fe6efcc3967d7ae) && ((pcVar1 + -0x8032c28 >> 3 | pcVar1 << 0x3d) < 0xf)) {
                    return;
                }
                goto code_r0x08037158;
            }
            pcVar2 = sym.cfg80211_gtk_rekey_notify.cfi_jt;
        }
        else {
            if (arg1 < 0x40e2f9d6172f9697) {
                if (arg1 == 0x4001321b0b1028e0) {
                    pcVar2 = sym.cfg80211_rx_unexpected_4addr_frame.cfi_jt;
                    goto code_r0x080314e4;
                }
                if (arg1 != 0x40948ecebb6ba742) goto code_r0x08037158;
                pcVar2 = sym.__bpf_trace_rdev_tdls_oper.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031548;
            }
            if (arg1 == 0x40e2f9d6172f9697) {
                pcVar2 = sym.__traceiter_rdev_update_mesh_config.cfi_jt;
            }
            else {
                if (arg1 != 0x41217937802d5602) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_rdev_set_sar_specs.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x653c0b34c94a5c34) {
        if (arg1 < 0x523baf30f38c2d37) {
            if (arg1 < 0x4d06ceb3fb69f04c) {
                if (arg1 < 0x46bc9e505db6796c) {
                    if (arg1 < 0x444580655d1066af) {
                        if (arg1 == 0x412963bc89b8fe2c) {
                            pcVar2 = sym.trace_event_raw_event_rdev_set_fils_aad.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                            ;
                        }
                        else {
                            if (arg1 != 0x435b60fa3e9b2a8b) {
                                if (arg1 != 0x438829638d1e2725) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_rdev_add_station.cfi_jt;
                                goto code_r0x080314e4;
                            }
                            pcVar2 = sym.perf_trace_cfg80211_tx_mlme_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                    }
                    else if (arg1 == 0x444580655d1066af) {
                        pcVar2 = sym.__bpf_trace_rdev_return_chandef.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x450ee7e3d3944a0c) {
                            if (arg1 != 0x463010eb6fdd5237) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_color_change.cfi_jt;
                            goto code_r0x08031564;
                        }
                        pcVar2 = sym.perf_trace_rdev_join_ibss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                }
                else if (arg1 < 0x4b36c3bbc83cb8fa) {
                    if (arg1 == 0x46bc9e505db6796c) {
                        pcVar2 = sym.__bpf_trace_cfg80211_tdls_oper_request.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x47785bfc745672be) {
                            if (arg1 != 0x4930b7d8af56484a) goto code_r0x08037158;
                            pcVar2 = sym.ieee80211_get_mesh_hdrlen.cfi_jt;
                            goto code_r0x08031564;
                        }
                        pcVar2 = sym.__bpf_trace_rdev_start_radar_detection.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                }
                else if (arg1 == 0x4b36c3bbc83cb8fa) {
                    pcVar2 = sym.__bpf_trace_rdev_set_mac_acl.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                else {
                    if (arg1 != 0x4b54e26f0f665f4d) {
                        if (arg1 != 0x4c6755a58e0828cc) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_cfg80211_assoc_comeback.cfi_jt;
                        goto code_r0x08031564;
                    }
                    pcVar2 = sym.perf_trace_cfg80211_scan_done.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
            }
            else {
                if (0x4f2a178d6a1a6546 < arg1) {
                    if (arg1 < 0x50a8a89507a78bc2) {
                        if (arg1 != 0x4f2a178d6a1a6547) {
                            if (arg1 != 0x5018a2a6cb35a8f0) {
                                if ((arg1 == 0x502c7d189f3a7f28) && ((pcVar1 + -0x8031770 >> 3 | pcVar1 << 0x3d) < 4)) {
                                    return;
                                }
                                goto code_r0x08037158;
                            }
                            pcVar2 = 
                            sym.trace_event_raw_event_rdev_update_connect_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                            ;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.__traceiter_rdev_set_coalesce.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x50a8a89507a78bc2) {
                            if (arg1 != 0x5174805b3d6014ee) {
                                if (arg1 != 0x51f011495659e4d2) goto code_r0x08037158;
                                pcVar2 = sym.__traceiter_cfg80211_mgmt_tx_status.cfi_jt;
                                goto code_r0x080314e4;
                            }
                            pcVar2 = sym.perf_trace_rdev_set_bitrate_mask.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                            goto code_r0x08031548;
                        }
                        pcVar2 = sym.__traceiter_cfg80211_bss_color_notify.cfi_jt;
                    }
                    goto code_r0x08031564;
                }
                if (arg1 < 0x4e40bfc4e01a4794) {
                    if (arg1 == 0x4d06ceb3fb69f04c) {
                        pcVar2 = sym.cfg80211_chandef_compatible.cfi_jt;
                        goto code_r0x08031564;
                    }
                    if (arg1 != 0x4d807f1c4c086a47) {
                        if (arg1 != 0x4e0dafe2e7911222) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_set_default_beacon_key.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    pcVar2 = sym.__bpf_trace_rdev_external_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                else if (arg1 == 0x4e40bfc4e01a4794) {
                    pcVar2 = sym.trace_event_raw_event_rdev_deauth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                else {
                    if (arg1 == 0x4ecc137a81b158cf) {
                        pcVar2 = sym.cfg80211_sinfo_alloc_tid_stats.cfi_jt;
                        goto code_r0x08031564;
                    }
                    if (arg1 != 0x4f02d134afd44dcb) goto code_r0x08037158;
                    pcVar2 = sym.trace_event_raw_event_cfg80211_return_bool.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
            }
            goto code_r0x08031548;
        }
        if (arg1 < 0x5a0929e485aeeef0) {
            if (arg1 < 0x55c98b7eb2c63ca5) {
                if (0x54ab50e31e9d7e6b < arg1) {
                    if (arg1 == 0x54ab50e31e9d7e6c) {
                        pcVar2 = sym.__bpf_trace_wiphy_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x550ede4b101b1235) {
                            if (arg1 != 0x551036dd69057aae) goto code_r0x08037158;
                            pcVar2 = sym.__traceiter_rdev_set_tx_power.cfi_jt;
                            goto code_r0x08031564;
                        }
                        pcVar2 = sym.__bpf_trace_station_del.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                if (arg1 == 0x523baf30f38c2d37) {
                    pcVar2 = sym.__traceiter_cfg80211_cqm_pktloss_notify.cfi_jt;
                }
                else {
                    if (arg1 != 0x53a8b56dd4049a80) {
                        if (arg1 != 0x53d1fbbc5a583048) goto code_r0x08037158;
                        pcVar2 = sym.perf_trace_cfg80211_cac_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_rdev_join_mesh.cfi_jt;
                }
            }
            else if (arg1 < 0x583fe2fa5ccef740) {
                if (arg1 == 0x55c98b7eb2c63ca5) {
                    pcVar2 = sym.__traceiter_rdev_deauth.cfi_jt;
                }
                else {
                    if (arg1 != 0x5666bbb7c2d22640) {
                        if (arg1 != 0x583075c1a01f0663) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_cfg80211_ibss_joined.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.cfg80211_any_usable_channels.cfi_jt;
                }
            }
            else if (arg1 == 0x583fe2fa5ccef740) {
                pcVar2 = sym.__traceiter_rdev_add_virtual_intf.cfi_jt;
            }
            else {
                if (arg1 != 0x59153ababb90506d) {
                    if (arg1 != 0x5a035815f6de3d17) goto code_r0x08037158;
                    pcVar2 = sym.trace_event_raw_event_rdev_join_ocb.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    goto code_r0x08031548;
                }
                pcVar2 = sym.__traceiter_cfg80211_cqm_rssi_notify.cfi_jt;
            }
        }
        else if (arg1 < 0x5fe63edafe37f22b) {
            if (arg1 < 0x5b35b4a1f66505d5) {
                if (arg1 == 0x5a0929e485aeeef0) {
                    pcVar2 = sym.cfg80211_find_vendor_elem.cfi_jt;
                }
                else {
                    if (arg1 != 0x5a3543fd362f65f5) {
                        if (arg1 != 0x5ae1d696b1b740c9) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_cancel_remain_on_channel.cfi_jt;
                        goto code_r0x08031438;
                    }
                    pcVar2 = sym.__traceiter_cfg80211_send_rx_assoc.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x5b35b4a1f66505d5) {
                    if ((pcVar1 + -0x8032a88 >> 3 | pcVar1 << 0x3d) < 0xb) {
                        return;
                    }
                    goto code_r0x08037158;
                }
                if (arg1 == 0x5b83a3fd302a5421) {
                    pcVar2 = sym.wiphy_dev_release.cdb4e9913ee09f921401e540eb3f658c.cfi_jt;
                }
                else {
                    if (arg1 != 0x5bf9bd45a303ec58) goto code_r0x08037158;
                    pcVar2 = sym.reg_query_regdb_wmm.cfi_jt;
                }
            }
        }
        else if (arg1 < 0x629d22c3e1164df7) {
            if (arg1 == 0x5fe63edafe37f22b) {
                pcVar2 = sym.cfg80211_sta_opmode_change_notify.cfi_jt;
            }
            else if (arg1 == 0x60a9634a000148fe) {
                pcVar2 = sym.cfg80211_pmksa_candidate_notify.cfi_jt;
            }
            else {
                if (arg1 != 0x6140d563472ce43d) goto code_r0x08037158;
                pcVar2 = sym.ieee80211_get_vht_max_nss.cfi_jt;
            }
        }
        else if (arg1 < 0x63e0ec11eb07ae0a) {
            if (arg1 == 0x629d22c3e1164df7) {
                pcVar2 = sym.cfg80211_classify8021d.cfi_jt;
            }
            else {
                if (arg1 != 0x62a13369fc4c5661) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_mgmt_tx_status_ext.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x63e0ec11eb07ae0a) {
                pcVar2 = sym.__bpf_trace_cfg80211_report_obss_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031548;
            }
            if (arg1 != 0x642655c7883d7ddd) goto code_r0x08037158;
            pcVar2 = sym.wiphy_rfkill_set_hw_state_reason.cfi_jt;
        }
    }
    else if (arg1 < 0x71f904a2719356d6) {
        if (arg1 < 0x6be26c2026fa09ac) {
            if (arg1 < 0x69835ca2ebb8719b) {
                if (arg1 < 0x67cf03355edea766) {
                    if (arg1 == 0x653c0b34c94a5c34) {
                        pcVar2 = sym.cfg80211_scan_done.cfi_jt;
                    }
                    else if (arg1 == 0x665819b60fe1e63e) {
                        pcVar2 = sym.__traceiter_rdev_nan_change_conf.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x67ba369d73973415) goto code_r0x08037158;
                        pcVar2 = sym.__traceiter_rdev_return_int_mesh_config.cfi_jt;
                    }
                }
                else {
                    if (arg1 != 0x67cf03355edea766) {
                        if (arg1 == 0x6848877fc9c58248) {
                            pcVar2 = 
                            sym.perf_trace_cfg80211_report_wowlan_wakeup.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        else {
                            if (arg1 != 0x68e75fbed2759a08) goto code_r0x08037158;
                            pcVar2 = sym.__bpf_trace_rdev_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        }
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.__traceiter_cfg80211_tx_mlme_mgmt.cfi_jt;
                }
            }
            else {
                if (arg1 < 0x6a6dd882ca75dfd6) {
                    if (arg1 == 0x69835ca2ebb8719b) {
                        pcVar2 = sym.trace_event_raw_event_rdev_del_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    else {
                        if (arg1 == 0x69a14ca7d4b74446) {
                            pcVar2 = sym.__traceiter_cfg80211_return_bss.cfi_jt;
                            goto code_r0x08031564;
                        }
                        if (arg1 != 0x6a05ed46f1f8e8a7) goto code_r0x08037158;
                        pcVar2 = sym.perf_trace_rdev_return_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                if (arg1 == 0x6a6dd882ca75dfd6) {
                    pcVar2 = sym.cfg80211_ready_on_channel.cfi_jt;
                }
                else {
                    if (arg1 != 0x6afa8f3737b2f673) {
                        if (arg1 != 0x6bb765c761b10ff7) goto code_r0x08037158;
                        pcVar2 = sym.trace_event_raw_event_rdev_set_noack_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031438;
                    }
                    pcVar2 = sym.cfg80211_calculate_bitrate.cfi_jt;
                }
            }
        }
        else if (arg1 < 0x6dd3d43f4d68dfe4) {
            if (arg1 < 0x6c93237f9677ed10) {
                if (arg1 == 0x6be26c2026fa09ac) {
                    pcVar2 = sym.ieee80211_radiotap_iterator_next.cfi_jt;
                }
                else {
                    if (arg1 != 0x6c1c50310141939f) {
                        if (arg1 != 0x6c62b26c9d09e73b) goto code_r0x08037158;
                        pcVar2 = sym.cfg80211_rx_unprot_mlme_mgmt.cfi_jt;
                        goto code_r0x080314e4;
                    }
                    pcVar2 = sym.__traceiter_rdev_libertas_set_mesh_channel.cfi_jt;
                }
            }
            else {
                if (arg1 != 0x6c93237f9677ed10) {
                    if (arg1 == 0x6d6af686ba21f557) {
                        pcVar2 = sym.trace_event_raw_event_rdev_reset_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
                        ;
                    }
                    else {
                        if (arg1 != 0x6dcd9574b0db22e2) goto code_r0x08037158;
                        pcVar2 = sym.__bpf_trace_rdev_start_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                    }
                    goto code_r0x08031548;
                }
                pcVar2 = sym.__traceiter_cfg80211_report_wowlan_wakeup.cfi_jt;
            }
        }
        else if (arg1 < 0x6f4d0d9baf8efc4a) {
            if (arg1 == 0x6dd3d43f4d68dfe4) {
                pcVar2 = sym.cfg80211_nan_func_terminated.cfi_jt;
            }
            else if (arg1 == 0x6e32f2fa7f53a6b5) {
                pcVar2 = sym.__traceiter_cfg80211_send_assoc_failure.cfi_jt;
            }
            else {
                if (arg1 != 0x6eafd71bc1bb39d0) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_cfg80211_rx_mgmt.cfi_jt;
            }
        }
        else if (arg1 < 0x70e3ef4079487a5e) {
            if (arg1 == 0x6f4d0d9baf8efc4a) {
                pcVar2 = sym.__traceiter_cfg80211_new_sta.cfi_jt;
            }
            else {
                if (arg1 != 0x70561f72f5866e14) goto code_r0x08037158;
                pcVar2 = sym.__traceiter_rdev_channel_switch.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x70e3ef4079487a5e) {
                pcVar2 = sym.__traceiter_cfg80211_sched_scan_results.cfi_jt;
                goto code_r0x080314e4;
            }
            if (arg1 != 0x7101d81fb6449a78) goto code_r0x08037158;
            pcVar2 = sym.__typeid__ZTSFvPK27ieee80211_iface_combinationPvE_global_addr;
        }
    }
    else if (arg1 < 0x789602dea5e50dd4) {
        if (0x7410ecaea79b9b35 < arg1) {
            if (0x773cc60835d6d40b < arg1) {
                if (arg1 == 0x773cc60835d6d40c) {
                    pcVar2 = sym.trace_event_raw_event_wiphy_only_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
                else {
                    if (arg1 != 0x77d491ef58bf2a79) {
                        if (arg1 != 0x7862e34755cd0492) goto code_r0x08037158;
                        pcVar2 = sym.perf_trace_wiphy_wdev_link_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                        goto code_r0x08031548;
                    }
                    pcVar2 = sym.perf_trace_mpath_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                }
code_r0x08031438:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08037158;
            }
            if (arg1 == 0x7410ecaea79b9b36) {
                pcVar2 = sym.perf_trace_cfg80211_ft_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
            }
            else {
                if (arg1 != 0x747874ed78902334) {
                    if (arg1 != 0x768192f8d3383c3f) goto code_r0x08037158;
                    pcVar2 = sym.__traceiter_rdev_change_bss.cfi_jt;
                    goto code_r0x08031564;
                }
                pcVar2 = sym.trace_event_raw_event_cfg80211_inform_bss_frame.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
            }
            goto code_r0x08031548;
        }
        if (arg1 < 0x7342ae43ce9544e5) {
            if (arg1 == 0x71f904a2719356d6) {
                pcVar2 = sym.cfg80211_remain_on_channel_expired.cfi_jt;
                goto code_r0x080314e4;
            }
            if (arg1 == 0x72e80cb5ccfe48c9) {
                pcVar2 = sym.ieee80211_data_to_8023_exthdr.cfi_jt;
            }
            else {
                if (arg1 != 0x72fa27518978d665) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_pmsr_complete.cfi_jt;
            }
        }
        else if (arg1 == 0x7342ae43ce9544e5) {
            pcVar2 = sym.cfg80211_ch_switch_started_notify.cfi_jt;
        }
        else if (arg1 == 0x73546804d2f35f0f) {
            pcVar2 = sym.__traceiter_rdev_dump_station.cfi_jt;
        }
        else {
            if (arg1 != 0x73ec55b01e820053) goto code_r0x08037158;
            pcVar2 = sym.cfg80211_probe_status.cfi_jt;
        }
    }
    else if (arg1 < 0x7b4f385792a5db9d) {
        if (arg1 < 0x7a09894716eb4457) {
            if (arg1 == 0x789602dea5e50dd4) {
                pcVar2 = sym.__bpf_trace_cfg80211_radar_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031548;
            }
            if (arg1 == 0x7916afaf531bf4de) {
                pcVar2 = sym.__bpf_trace_cfg80211_ch_switch_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031438;
            }
            if (arg1 != 0x7983d682536e7103) goto code_r0x08037158;
            pcVar2 = sym.cfg80211_get_drvinfo.cfi_jt;
        }
        else if (arg1 == 0x7a09894716eb4457) {
            pcVar2 = sym.cfg80211_cac_event.cfi_jt;
        }
        else {
            if (arg1 != 0x7ac91c511f30576a) {
                if (arg1 != 0x7b263f09fdec83fc) goto code_r0x08037158;
                pcVar2 = sym.perf_trace_cfg80211_mgmt_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
                goto code_r0x08031438;
            }
            pcVar2 = sym.__traceiter_rdev_set_txq_params.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x7d014fe359061a86) {
            if (arg1 == 0x7b4f385792a5db9d) {
                pcVar2 = sym.perf_trace_cfg80211_rx_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
            }
            else {
                if (arg1 == 0x7c43a8239a920de2) {
                    pcVar2 = sym.cfg80211_free_nan_func.cfi_jt;
                    goto code_r0x08031564;
                }
                if (arg1 != 0x7ce84ebd90b4577a) goto code_r0x08037158;
                pcVar2 = sym.trace_event_raw_event_rdev_set_sar_specs.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt;
            }
            goto code_r0x08031548;
        }
        if (arg1 < 0x7e04a0fb7ad8bcd5) {
            if (arg1 != 0x7d014fe359061a86) {
                if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08037158;
                pcVar2 = sym.cfg80211_netdev_notifier_call.4cb80888839f98f690b7d75ef25d1694.cfi_jt;
                goto code_r0x080314e4;
            }
            pcVar2 = sym.reg_initiator_name.cfi_jt;
        }
        else if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ed2102c6a874e7f) goto code_r0x08037158;
            pcVar2 = sym.__traceiter_cfg80211_michael_mic_failure.cfi_jt;
        }
    }
code_r0x08031564:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08037158:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80371ac);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiP5wiphyE_global_addr @ 0x08031580 (size 8) =====

int sym.__typeid__ZTSFiP5wiphyE_global_addr(int64_t param_1)

{
    int iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    bool bVar5;
    code *pcVar6;
    bool bVar7;
    uint16_t uVar8;
    int iVar9;
    uint16_t *puVar10;
    int64_t iVar11;
    ulong uVar12;
    uint32_t uVar13;
    uint32_t *puVar14;
    int *piVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint8_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t *piVar22;
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    uint uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_48 = *(iVar16 + 0x5e0);
    if (param_1 == 0) goto code_r0x080356ec;
    puVar14 = *(param_1 + 0xf8);
    uVar8 = *(param_1 + 0x60);
    if (puVar14 != NULL) {
        if ((*puVar14 & 0x18) == 0x10) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80355c0);
            (*pcVar6)();
        }
        if (((*puVar14 == 0) && (puVar14[1] == 0)) && (*(puVar14 + 6) == 0)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035660);
            (*pcVar6)();
        }
    }
    arg1 = param_1 + -0x560;
    if (((*(param_1 + 0x6f) >> 4 & 1) != 0) && ((*(*arg1 + 0x2f8) == 0 || (*(*arg1 + 0x300) == 0)))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8034eec);
        (*pcVar6)();
    }
    if (((uVar8 >> 0xc & 1) != 0) &&
       (((iVar16 = *arg1, *(iVar16 + 0x308) == 0 || (*(iVar16 + 0x310) == 0)) ||
        ((*(iVar16 + 0x318) == 0 || ((*(iVar16 + 800) == 0 || ((*(param_1 + 0x578) & 1) == 0)))))))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8034ee0);
        (*pcVar6)();
    }
    if ((uVar8 >> 5 & 1) != 0) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80355a8);
        (*pcVar6)();
    }
    iVar16 = *(param_1 + 0x598);
    if (iVar16 != 0) {
        uVar18 = *(iVar16 + 0x12);
        if ((uVar18 & 1) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80355cc);
            (*pcVar6)();
        }
        if ((uVar18 & 6) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80355d8);
            (*pcVar6)();
        }
        uVar13 = *(iVar16 + 8);
        if ((uVar13 == 0) || (*(iVar16 + 0xc) == 0)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8034ef8);
            (*pcVar6)();
        }
        if (0x1f < uVar13) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035614);
            (*pcVar6)();
        }
        if (((uVar18 & 0x60) != 0) && ((uVar13 >> 4 & 1) == 0)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035654);
            (*pcVar6)();
        }
        if (0xff < *(iVar16 + 0xc)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035620);
            (*pcVar6)();
        }
    }
    uVar13 = *(param_1 + 0x68);
    if ((uVar8 & 0xe8a1) != 0) {
        uVar13 = uVar13 | 0x40;
        *(param_1 + 0x68) = uVar13;
    }
    if (((uVar13 >> 7 & 1) != 0) && ((uVar13 & 0x1b) != 0)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80355b4);
        (*pcVar6)();
    }
    piVar15 = *(param_1 + 0x550);
    if (((piVar15 != NULL) && ((*piVar15 == 0 || (piVar15[2] == 0)))) &&
       ((piVar15[4] == 0 || (piVar15[3] < piVar15[4])))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8035268);
        (*pcVar6)();
    }
    if ((*(param_1 + 0x7c) != 0) && ((*(param_1 + 0x66) >> 1 & 1) == 0)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80355fc);
        (*pcVar6)();
    }
    piVar15 = *(param_1 + 0x40);
    if (piVar15 != NULL) {
        if (*(param_1 + 0x5e) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035608);
            (*pcVar6)();
        }
        if ((*(param_1 + 0x30) != 0 || *(param_1 + 0x34) != 0) &&
           (*(param_1 + 0x30) != *piVar15 || *(param_1 + 0x34) != piVar15[1])) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035648);
            (*pcVar6)();
        }
    }
    if ((*(param_1 + 0x62) != 0) && (((*(param_1 + 0x66) >> 1 & 1) == 0 || (*(*arg1 + 0x298) == 0)))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8034ea8);
        (*pcVar6)();
    }
    if ((*(param_1 + 0x574) & 0xfffffff1) != 0) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80355f0);
        (*pcVar6)();
    }
    if (((*(param_1 + 0x72) & 1) != 0) && ((*(*arg1 + 0x340) == 0 || (*(*arg1 + 0x348) == 0)))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80352c0);
        (*pcVar6)();
    }
    if (((*(param_1 + 0x65) >> 5 & 1) == 0) && (*(*arg1 + 0x170) != 0)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8035684);
        (*pcVar6)();
    }
    if (piVar15 != NULL) {
        iVar9 = *piVar15;
        *(param_1 + 0x34) = piVar15[1];
        *(param_1 + 0x30) = iVar9;
    }
    if (uVar8 == 0) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8035628);
        (*pcVar6)();
    }
    if ((uVar8 & 0x1ffe) != uVar8) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8035638);
        (*pcVar6)();
    }
    if (0 < *(param_1 + 0x58)) {
        iVar16 = *(param_1 + 0x50);
        iVar9 = 0;
        do {
            iVar17 = iVar9;
            uVar2 = *(iVar16 + iVar9 * 0x58 + 0xc);
            if ((uVar2 < 2) && (*(iVar16 + iVar17 * 0x58 + 0x10) == '\0')) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8035590);
                (*pcVar6)();
            }
            iVar1 = *(iVar16 + iVar17 * 0x58 + 8);
            if (iVar1 == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8035554);
                (*pcVar6)();
            }
            if (*(iVar16 + iVar17 * 0x58 + 0x10) != '\0' && iVar1 != 1) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x803559c);
                (*pcVar6)();
            }
            uVar19 = *(iVar16 + iVar17 * 0x58 + 0xe);
            if (uVar19 == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8035560);
                (*pcVar6)();
            }
            piVar22 = iVar16 + iVar17 * 0x58;
            uVar13 = 0;
            uVar20 = 0;
            puVar10 = *piVar22 + 2;
            do {
                uVar3 = *puVar10;
                if ((uVar3 & uVar20) != 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80352cc);
                    (*pcVar6)();
                }
                uVar4 = puVar10[-1];
                if (uVar4 == 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80352d8);
                    (*pcVar6)();
                }
                if ((*(param_1 + 0x5c) & uVar3) != 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80352e4);
                    (*pcVar6)();
                }
                if ((uVar3 >> 10 & 1) == 0) {
                    if (((uVar3 >> 0xc & 1) != 0) && (1 < uVar4)) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x800,0x8035500);
                        (*pcVar6)();
                    }
                }
                else if (1 < uVar4) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x803538c);
                    (*pcVar6)();
                }
                if (((uVar3 >> 1 & 1) != 0) && (*(piVar22 + 0x14) != 0)) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8035398);
                    (*pcVar6)();
                }
                if ((uVar3 & (uVar8 ^ 0xffff)) != 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80352f0);
                    (*pcVar6)();
                }
                uVar20 = uVar3 | uVar20;
                uVar13 = uVar13 + uVar4;
                uVar19 = uVar19 - 1;
                puVar10 = puVar10 + 0x14;
            } while (uVar19 != 0);
            if ((uVar20 >> 5 & 1) != 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x803556c);
                (*pcVar6)();
            }
            if (uVar13 < uVar2) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8035578);
                (*pcVar6)();
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != *(param_1 + 0x58));
    }
    bVar5 = false;
    iVar16 = 0;
    do {
        while (piVar22 = *(param_1 + 0x148 + iVar16 * 8), piVar22 == NULL) {
            iVar16 = iVar16 + 1;
            if (iVar16 == 6) {
                if (!bVar5) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x80352b4);
                    (*pcVar6)();
                }
                goto code_r0x08035218;
            }
        }
        iVar9 = iVar16;
        *(piVar22 + 2) = iVar9;
        if (*(piVar22 + 0x14) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x803566c);
            (*pcVar6)();
        }
        if (((iVar9 != 2) && (iVar9 != 4)) && (piVar22[3] == 0)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80356a4);
            (*pcVar6)();
        }
        if (iVar16 == 3) {
            if ((*(piVar22 + 0x1e) != '\0') || (*(piVar22 + 0x34) != '\0')) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x803550c);
                (*pcVar6)();
            }
        }
        else if (((obj.cfg80211_disable_40mhz_24ghz != 0x0) && (iVar16 == 0)) && (*(piVar22 + 0x1e) != '\0')) {
            *(piVar22 + 0x1c) = *(piVar22 + 0x1c) & 0xffbd;
        }
        if (0x20 < piVar22[3]) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035678);
            (*pcVar6)();
        }
        if (0 < *(piVar22 + 0x14)) {
            iVar21 = 0;
            iVar17 = 0;
            iVar11 = *piVar22;
            do {
                *(iVar11 + iVar21 + 0x20) = *(iVar11 + iVar21 + 0xc);
                *(*piVar22 + iVar21 + 0x24) = 0x7fffffff;
                *(*piVar22 + iVar21 + 0x28) = *(*piVar22 + iVar21 + 0x14);
                *(*piVar22 + iVar21) = iVar9;
                iVar11 = *piVar22;
                if (999 < *(iVar11 + iVar21 + 8)) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8035518);
                    (*pcVar6)();
                }
                iVar17 = iVar17 + 1;
                iVar21 = iVar21 + 0x40;
            } while (iVar17 < *(piVar22 + 0x14));
        }
        if (*(piVar22 + 0x5c) == 0) {
            bVar5 = false;
        }
        else {
            iVar17 = 0;
            bVar5 = false;
            uVar8 = 0;
            do {
                uVar2 = *(piVar22[0xc] + iVar17);
                if (uVar2 == 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8035524);
                    (*pcVar6)();
                }
                if ((uVar2 & uVar8) != 0) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8035530);
                    (*pcVar6)();
                }
                iVar21 = piVar22[0xc] + iVar17;
                if (*(iVar21 + 2) == '\0') {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x803553c);
                    (*pcVar6)();
                }
                if (((*(iVar21 + 0x3b) != '\0') && ((uVar2 & 0x208) != 0)) && ((uVar2 & 0xfdf7) != 0)) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8035548);
                    (*pcVar6)();
                }
                bVar7 = iVar17 == 0;
                uVar8 = uVar2 | uVar8;
                iVar17 = iVar17 + 0xc0;
                bVar5 = bVar7 | bVar5;
            } while (*(piVar22 + 0x5c) * 0xc0 - iVar17 != 0);
        }
        if ((!bVar5) && (iVar16 == 3)) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8035690);
            (*pcVar6)();
        }
        bVar5 = true;
        bVar7 = iVar16 != 5;
        iVar16 = iVar16 + 1;
    } while (bVar7);
code_r0x08035218:
    uVar19 = *(param_1 + 0x568);
    if (0 < *(param_1 + 0x568)) {
        piVar22 = *(param_1 + 0x558) + 0x20;
        do {
            if (*piVar22 == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8035584);
                (*pcVar6)();
            }
            if ((piVar22[-2] == 0) && (piVar22[-1] == 0)) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x803525c);
                (*pcVar6)();
            }
            uVar19 = uVar19 - 1;
            piVar22 = piVar22 + 7;
        } while (uVar19 != 0);
    }
    iVar16 = *(param_1 + 0xf8);
    if (((iVar16 != 0) && (*(iVar16 + 4) != 0)) && ((*(iVar16 + 0xc) == 0 || (*(iVar16 + 8) < *(iVar16 + 0xc))))) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x80354f4);
        (*pcVar6)();
    }
    uVar8 = *(param_1 + 0x5d2);
    if (uVar8 == 1) {
code_r0x080352fc:
        iVar9 = -0x16;
    }
    else {
        if (uVar8 == 0) {
            *(param_1 + 0x5d2) = 2;
        }
        else if (10 < uVar8) goto code_r0x080352fc;
        piVar22 = *(param_1 + 0x5d8);
        if (piVar22 != NULL) {
            uVar13 = *(param_1 + 0x138);
            if (uVar13 != *(piVar22 + 1)) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80356b0);
                (*pcVar6)();
            }
            if (uVar13 != 0) {
                uVar19 = 0;
                do {
                    if (*(*(param_1 + 0x130) + (-(uVar19 >> 0x1f) & 0xffffffe000000000 | uVar19 << 5)) !=
                        *(*piVar22 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3))) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x800,0x80355e4);
                        (*pcVar6)();
                    }
                    uVar20 = uVar19 + 1;
                    uVar19 = uVar20;
                } while (uVar13 != uVar20);
            }
        }
        sym.ieee80211_set_bitrate_flags(param_1);
        *(param_1 + 0x6c) = *(param_1 + 0x6c) | 0x80;
        rtnl_lock();
        iVar9 = device_add(param_1 + 0x188);
        if (iVar9 == 0) {
            sym.list_add_rcu(param_1 + -0x558);
            iVar16 = *(param_1 + 0x1f8);
            *0x800a000 = *0x800a000 + 1;
            if (iVar16 == 0) {
                iVar16 = *(param_1 + 0x188);
            }
            uVar12 = debugfs_create_dir(iVar16,CONCAT44(*0x800a004,*0x800a000));
            *(param_1 + 0x520) = uVar12;
            sym.nl80211_notify_wiphy(arg1,3);
            sym.wiphy_regulatory_register(param_1);
            if ((*(param_1 + 0x68) & 1) != 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                _uStack_78 = CONCAT44(2,*(param_1 + -0x4ec));
                uStack_70 = 0x393900000000;
                sym.nl80211_common_reg_change_event(0x24,&uStack_88);
            }
            if (((*(param_1 + 0x128) != 0) && (uVar13 = *(param_1 + 0x138), uVar13 != 0)) &&
               (iVar16 = *(param_1 + 0x130), iVar16 != 0)) {
                uVar19 = 0;
                do {
                    if (uVar19 < *(iVar16 + 0x18)) {
                        uVar18 = *(*(iVar16 + 8) + uVar19);
                    }
                    else {
                        uVar18 = 0;
                    }
                    if (1 < uVar13) {
                        uVar20 = 1;
                        do {
                            iVar17 = iVar16 + uVar20 * 0x20;
                            if (*(iVar17 + 0x18) <= (uVar19 & 0xff)) {
                                uVar18 = 0;
                                break;
                            }
                            uVar20 = uVar20 + 1;
                            uVar18 = *(*(iVar17 + 8) + uVar19) & uVar18;
                        } while (uVar13 != uVar20);
                    }
                    if ((~uVar18 & *(*(param_1 + 0x118) + uVar19)) != 0) {
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x800,0x8035698);
                        (*pcVar6)();
                    }
                    uVar19 = uVar19 + 1;
                } while (uVar19 != *(param_1 + 0x128));
            }
            *(param_1 + 0x518) = 1;
            rtnl_unlock();
            iVar9 = rfkill_register(*(param_1 + 0x5c8));
            if (iVar9 != 0) {
                rfkill_destroy(*(param_1 + 0x5c8));
                *(param_1 + 0x5c8) = 0;
                sym.wiphy_unregister(param_1);
            }
        }
        else {
            rtnl_unlock();
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_48) {
        return iVar9;
    }
    __stack_chk_fail();
code_r0x080356ec:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x80356f0);
    (*pcVar6)();
}


// ===== sym.cfg80211_ch_switch_started_notify.cfi_jt @ 0x08031588 (size 8) =====

void sym.cfg80211_ch_switch_started_notify.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x2f8);
    if (*piVar2 == 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80601ac);
        (*pcVar1)();
    }
    if ((param_3 != 0) && (piVar2[0x11d] == 0)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x806019c);
        (*pcVar1)();
    }
    if ((*(piVar2 + 0x11d) != 0) && ((1L << (param_3 & 0x3f) & *(piVar2 + 0x11d)) == 0)) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8060194);
        (*pcVar1)();
    }
    sym.nl80211_ch_switch_notify(*piVar2 + -0x560,param_1,param_3 & 0xffffffff,param_2);
    return;
}


// ===== sym.__traceiter_cfg80211_send_rx_auth.cfi_jt @ 0x08031590 (size 8) =====

ulong sym.__traceiter_cfg80211_send_rx_auth.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80acbc8;
    piVar1 = *0x80acbc8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_calculate_bitrate.cfi_jt @ 0x08031598 (size 8) =====

uint64_t sym.cfg80211_calculate_bitrate.cfi_jt(uint8_t *param_1)

{
    int iVar1;
    int iVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    code *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
        if ((uVar3 >> 3 & 1) == 0) {
            if ((uVar3 >> 6 & 1) == 0) {
                if ((uVar3 >> 5 & 1) == 0) {
                    if ((uVar3 >> 1 & 1) == 0) {
                        if ((uVar3 >> 4 & 1) == 0) {
                            if (uVar3 < '\0') {
                                uVar6 = sym.cfg80211_calculate_bitrate_eht(param_1);
                            }
                            else {
                                uVar6 = *(param_1 + 2);
                            }
                        }
                        else {
                            uVar6 = sym.cfg80211_calculate_bitrate_he(param_1);
                        }
                    }
                    else {
                        uVar6 = param_1[1];
                        if (uVar6 < 0xc) {
                            uVar4 = param_1[5];
                            if ((uVar4 < 6) && ((0x39U >> (uVar4 & 0x1f) & 1) != 0)) {
                                uVar7 = *(obj.cfg80211_calculate_bitrate_vht.base +
                                         uVar6 * 4 + *(uVar4 * 8 + 0x8029ee8) * 0x30) * param_1[4];
                                if ((uVar3 >> 2 & 1) != 0) {
                                    uVar7 = (uVar7 / 9) * 10;
                                }
                                return (uVar7 + 50000 >> 5) / 0xc35;
                            }
                        }
                        if ((obj.cfg80211_calculate_bitrate_vht.__already_done & 1) == 0) {
                            obj.cfg80211_calculate_bitrate_vht.__already_done = 0x1;
                            __warn_printk("invalid rate bw=%d, mcs=%d, nss=%d\n",param_1[5],uVar6,param_1[4]);
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x803b108);
                            (*pcVar5)();
                        }
                        uVar6 = 0;
                    }
                }
                else {
                    if (0x14 < param_1[1]) {
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(0x800,0x803b0e0);
                        (*pcVar5)();
                    }
                    uVar6 = *(obj.cfg80211_calculate_bitrate_edmg.__mcs2bitrate + param_1[1] * 4) * param_1[9];
                }
            }
            else {
                if (param_1[1] - 0xd < 0xfffffff9) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x803b0d4);
                    (*pcVar5)();
                }
                uVar6 = *(param_1[1] * 4 + 0x80250e8);
            }
        }
        else {
            if (0x1f < param_1[1]) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x803b0c8);
                (*pcVar5)();
            }
            uVar6 = *(obj.cfg80211_calculate_bitrate_dmg.__mcs2bitrate + param_1[1] * 4);
        }
    }
    else {
        uVar4 = param_1[1];
        if (0x1f < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x803b0bc);
            (*pcVar5)();
        }
        uVar7 = uVar4 & 7;
        iVar1 = 13500000;
        if (param_1[5] != 3) {
            iVar1 = 6500000;
        }
        iVar2 = 6;
        if (uVar7 != 4) {
            iVar2 = uVar7 + 3;
        }
        if (uVar7 < 4) {
            iVar2 = uVar7 + 1;
        }
        uVar7 = (iVar2 + iVar2 * (uVar4 >> 3)) * iVar1;
        if ((uVar3 >> 2 & 1) != 0) {
            uVar7 = (uVar7 / 9) * 10;
        }
        uVar6 = (uVar7 + 50000 >> 5) / 0xc35;
    }
    return uVar6;
}


// ===== sym.nl80211_pre_doit.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080315a0 (size 8) =====

uint64_t sym.nl80211_pre_doit.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = *(param_1 + 0x2d);
    if (0x14 < uVar11) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8071d98);
        (*pcVar6)();
    }
    rtnl_lock();
    if ((0xfff3dU >> (uVar11 & 0x3f) & 1) == 0) {
        uVar7 = sym.__cfg80211_rdev_from_attrs(*(param_3 + 0x28),*(param_3 + 0x20));
        if (0xfffffffffffff000 < uVar7) {
code_r0x08071bb0:
            rtnl_unlock();
            goto code_r0x08071d70;
        }
        piVar8 = NULL;
        iVar12 = 0;
code_r0x08071c74:
        *(param_3 + 0x30) = uVar7;
code_r0x08071c78:
        if ((0x1bf7efU >> (uVar11 & 0x3f) & 1) != 0) goto code_r0x08071cb4;
        if (piVar8 != NULL) {
            iVar9 = *(*(param_3 + 0x20) + 0x9c8);
            if (*(piVar8 + 0x11d) == 0) {
                if (iVar9 == 0) goto code_r0x08071cb4;
            }
            else if ((iVar9 != 0) && ((*(piVar8 + 0x11d) >> (*(iVar9 + 4) & 0x3f) & 1) != 0)) {
code_r0x08071cb4:
                if (((0x1f4fdfU >> (uVar11 & 0x3f) & 1) != 0) ||
                   ((*(*(param_3 + 0x20) + 0x9c8) == 0 && ((piVar8 == NULL || (piVar8[0x11d] == 0)))))) {
                    if ((uVar7 != 0) && ((0x1f3f7fU >> (uVar11 & 0x3f) & 1) != 0)) {
                        mutex_lock(uVar7 + 0x560);
                    }
                    if ((0x17fc3fU >> (uVar11 & 0x3f) & 1) != 0) {
                        rtnl_unlock();
                    }
                    uVar7 = 0;
                    goto code_r0x08071d70;
                }
            }
        }
        uVar7 = 0xffffffea;
    }
    else {
        uVar5 = 0x1e01c7 >> (uVar11 & 0x3f);
        if (((uVar5 & 1) != 0) && ((0x11fefbU >> (uVar11 & 0x3f) & 1) != 0)) {
            uVar7 = 0;
            piVar8 = NULL;
            iVar12 = 0;
            goto code_r0x08071c78;
        }
        piVar8 = sym.__cfg80211_wdev_from_attrs(0,*(param_3 + 0x28),*(param_3 + 0x20));
        if (0xfffffffffffff000 < piVar8) {
            uVar7 = piVar8 & 0xffffffff;
            goto code_r0x08071bb0;
        }
        iVar12 = piVar8[4];
        if (iVar12 == 0) {
code_r0x08071c0c:
            iVar9 = *piVar8;
        }
        else {
            iVar9 = sp_el0;
            piVar1 = iVar9 + 0x10;
            *(iVar9 + 0x10) = *piVar1 + 1;
            iVar10 = tpidr_el1;
            piVar2 = iVar10 + *(iVar12 + 0x4d0);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar10 = *piVar1;
            *(iVar9 + 0x10) = iVar10 + -1;
            if ((iVar10 + -1 != 0) && (*piVar1 != 0)) goto code_r0x08071c0c;
            preempt_schedule_notrace();
            iVar9 = *piVar8;
        }
        if (iVar9 == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8071db4);
            (*pcVar6)();
        }
        if ((uVar5 & 1) == 0) {
            if (iVar12 == 0) {
                uVar7 = 0xffffffea;
                rtnl_unlock();
                goto code_r0x08071d70;
            }
            *(param_3 + 0x38) = iVar12;
        }
        else {
            *(param_3 + 0x38) = piVar8;
        }
        if (uVar11 - 0x14 < 0xfffffffffffffff6) {
code_r0x08071c70:
            uVar7 = iVar9 - 0x560;
            goto code_r0x08071c74;
        }
        if (piVar8[4] == 0) {
            if (*(piVar8 + 0x79) != '\0') goto code_r0x08071c70;
        }
        else if ((*(piVar8[4] + 0x38) & 1) != 0) goto code_r0x08071c70;
        uVar7 = 0xffffff9c;
    }
    rtnl_unlock();
    if (iVar12 != 0) {
        iVar9 = sp_el0;
        piVar8 = iVar9 + 0x10;
        *(iVar9 + 0x10) = *piVar8 + 1;
        iVar10 = tpidr_el1;
        piVar2 = iVar10 + *(iVar12 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar12 = *piVar8;
        *(iVar9 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar8 == 0)) {
            preempt_schedule_notrace();
        }
    }
code_r0x08071d70:
    return uVar7 & 0xffffffff;
}


// ===== sym.__traceiter_cfg80211_send_assoc_failure.cfi_jt @ 0x080315a8 (size 8) =====

ulong sym.__traceiter_cfg80211_send_assoc_failure.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80acd78;
    piVar1 = *0x80acd78;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_mgmt_tx_status_ext.cfi_jt @ 0x080315b0 (size 8) =====

void sym.cfg80211_mgmt_tx_status_ext.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nl80211_frame_tx_status(param_1,param_2,param_3,0x3c);
    return;
}


// ===== sym.cfg80211_control_port_tx_status.cfi_jt @ 0x080315b8 (size 8) =====

void sym.cfg80211_control_port_tx_status.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,uint8_t param_5,uint64_t param_6)

{
    code *pcVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t arg2;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    uint64_t uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_18 = *(iVar7 + 0x5e0);
    uStack_40 = 0;
    uStack_38 = 0;
    param_6 = param_6 & 0xffffffff;
    uVar6 = 0x8b;
    uStack_20 = param_5;
    uStack_48 = param_2;
    uStack_30 = param_3;
    uStack_28 = param_4;
    sym.nl80211_frame_tx_status(param_1,&uStack_48,param_6,0x8b);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_18) {
        return;
    }
    auVar9 = __stack_chk_fail();
    piVar5 = auVar9._8_8_;
    piVar3 = auVar9._0_8_;
    *extraout_x18 = sym.nl80211_frame_tx_status;
    pcStack_98 = sym.nl80211_frame_tx_status;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iVar7 = *piVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    if (iVar7 == 0) goto code_r0x0805e9bc;
    iVar8 = piVar3[4];
    arg2 = __alloc_skb(piVar5[4] + 0x77U & 0xfffffffc,param_6 & 0xffffffff,0,0xffffffff);
    if (arg2 != 0) {
        iVar4 = genlmsg_put(arg2,0,0,obj.nl80211_fam,0,uVar6 & 0xffffffff);
        if (iVar4 != 0) {
            iStack_b0 = CONCAT44(iStack_b0._4_4_,*(iVar7 + -0x4ec));
            iVar2 = nla_put(arg2,1,4,&iStack_b0);
            if (iVar2 == 0) {
                if (iVar8 != 0) {
                    iStack_b0 = CONCAT44(iStack_b0._4_4_,*(iVar8 + 0xd0));
                    iVar2 = nla_put(arg2,3,4,&iStack_b0);
                    if (iVar2 != 0) goto code_r0x0805e840;
                }
                if (*piVar3 == 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x805ea3c);
                    (*pcVar1)();
                }
                iStack_b0 = CONCAT44(*(*piVar3 + -0x4ec),piVar3[5]);
                iVar2 = nla_put_64bit(arg2,0x99,8,&iStack_b0,0xe5);
                if ((iVar2 == 0) && (iVar2 = nla_put(arg2,0x33,piVar5[4],piVar5[3]), iVar2 == 0)) {
                    iStack_b0 = *piVar5;
                    iVar2 = nla_put_64bit(arg2,0x58,8,&iStack_b0,0xe5);
                    if ((((iVar2 == 0) && ((piVar5[5] == '\0' || (iVar2 = nla_put(arg2,0x5c,0,0), iVar2 == 0)))) &&
                        ((piVar5[1] == 0 ||
                         (iStack_b0 = piVar5[1], iVar2 = nla_put_64bit(arg2,0x13f,8,&iStack_b0,0xe5), iVar2 == 0))
                        )) && ((piVar5[2] == 0 ||
                               (iStack_b0 = piVar5[2], iVar2 = nla_put_64bit(arg2,0x140,8,&iStack_b0,0xe5),
                               iVar2 == 0)))) {
                        *(iVar4 + -0x14) = (*(arg2 + 0xd0) + *(arg2 + 200)) - (iVar4 + -0x14);
                        sym.genlmsg_multicast_netns(*(iVar7 + 0x548),arg2,3,param_6 & 0xffffffff);
                        goto code_r0x0805e848;
                    }
                }
            }
        }
code_r0x0805e840:
        kfree_skb(arg2);
    }
code_r0x0805e848:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail();
code_r0x0805e9bc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x805e9c0);
    (*pcVar1)();
}


// ===== sym.__cfg80211_radar_event.cfi_jt @ 0x080315c0 (size 8) =====

void sym.__cfg80211_radar_event.cfi_jt(int64_t param_1,ulong *param_2,uint64_t param_3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        sym.cfg80211_set_dfs_state(param_1,param_2,1);
        if ((param_3 & 1) != 0) {
            queue_work_on(0x20,*0x800a000,param_1 + -0x230);
        }
        cancel_delayed_work(param_1 + -0x3a8);
        queue_delayed_work_on(0x20,*0x800a000,param_1 + -0x3a8,0);
        sym.nl80211_radar_notify(param_1 + -0x560,param_2,0,0);
        uVar2 = param_2[3];
        uVar1 = *param_2;
        uVar3 = param_2[1];
        *(param_1 + -0x150) = param_2[2];
        *(param_1 + -0x148) = uVar2;
        *(param_1 + -0x160) = uVar1;
        *(param_1 + -0x158) = uVar3;
        uVar2 = param_2[7];
        uVar1 = param_2[4];
        uVar3 = param_2[5];
        *(param_1 + -0x130) = param_2[6];
        *(param_1 + -0x128) = uVar2;
        *(param_1 + -0x140) = uVar1;
        *(param_1 + -0x138) = uVar3;
        uVar2 = param_2[0xb];
        uVar1 = param_2[8];
        uVar3 = param_2[9];
        *(param_1 + -0x110) = param_2[10];
        *(param_1 + -0x108) = uVar2;
        *(param_1 + -0x120) = uVar1;
        *(param_1 + -0x118) = uVar3;
        queue_work_on(0x20,*0x800a000,param_1 + -0x100);
        return;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8077cec);
    (*pcVar4)();
}


// ===== sym.cfg80211_merge_profile.cfi_jt @ 0x080315c8 (size 8) =====

uint64_t sym.cfg80211_merge_profile.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5,
                   uint64_t param_6)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    char *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *(param_4 + 1);
    if (param_6 < uVar7) {
        uVar7 = 0;
    }
    else {
        memcpy(param_5,param_4 + 2,uVar7);
        pcVar8 = param_3 + *(param_3 + 1) + 2;
        uVar5 = (param_1 - pcVar8) + param_2;
        if ((uVar5 & 0xfffffffe) != 0) {
            uVar5 = uVar5 & 0xffffffff;
            pcVar4 = pcVar8 + uVar5;
            pcVar3 = pcVar8;
            do {
                while( true ) {
                    uVar6 = pcVar8[1];
                    if (uVar5 < uVar6 + 2) {
                        return uVar7;
                    }
                    if (*pcVar8 != 'G') break;
                    if (param_4 + *(param_4 + 1) + 2 < pcVar3 + -1) {
                        return uVar7;
                    }
                    if (pcVar8 == NULL) {
                        return uVar7;
                    }
                    if (pcVar8[1] < 4) {
                        return uVar7;
                    }
                    uVar2 = pcVar8[4];
                    if (pcVar8 + uVar6 + 2 < pcVar8 + 5 + uVar2) {
                        return uVar7;
                    }
                    if (pcVar8[3] != '\0') {
                        return uVar7;
                    }
                    if (uVar2 < 2) {
                        return uVar7;
                    }
                    if (pcVar8[5] == 'S') {
                        return uVar7;
                    }
                    if (param_6 < uVar7 + uVar2) {
                        return uVar7;
                    }
                    memcpy(param_5 + uVar7);
                    puVar1 = pcVar8 + 4;
                    pcVar8 = param_3 + *(param_3 + 1) + 2;
                    uVar7 = uVar7 + *puVar1;
                    uVar6 = (param_1 - pcVar8) + param_2;
                    uVar5 = uVar6 & 0xffffffff;
                    pcVar4 = pcVar8 + uVar5;
                    pcVar3 = pcVar8;
                    if ((uVar6 & 0xfffffffe) == 0) {
                        return uVar7;
                    }
                }
                pcVar8 = pcVar8 + uVar6 + 2;
                uVar5 = pcVar4 - pcVar8;
            } while (1 < uVar5);
        }
    }
    return uVar7;
}


// ===== sym.cfg80211_crit_proto_stopped.cfi_jt @ 0x080315d0 (size 8) =====

void sym.cfg80211_crit_proto_stopped.cfi_jt(int64_t *param_1,ulong param_2)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = *param_1;
    if (iVar6 == 0) goto code_r0x08061af0;
    iVar1 = *(iVar6 + -0x200);
    if (iVar1 != 0) {
        *(iVar6 + -0x200) = 0;
        iVar4 = __alloc_skb(0xe80,param_2,0,0xffffffff);
        if (iVar4 != 0) {
            iVar5 = genlmsg_put(iVar4,0,0,obj.nl80211_fam,0,99);
            if (iVar5 != 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,*(iVar6 + -0x4ec));
                iVar3 = nla_put(iVar4,1,4,&uStack_50);
                if (iVar3 == 0) {
                    if (*param_1 == 0) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8061af8);
                        (*pcVar2)();
                    }
                    uStack_50 = CONCAT44(*(*param_1 + -0x4ec),param_1[5]);
                    iVar3 = nla_put_64bit(iVar4,0x99,8,&uStack_50,0xe5);
                    if (iVar3 == 0) {
                        *(iVar5 + -0x14) = (*(iVar4 + 0xd0) + *(iVar4 + 200)) - (iVar5 + -0x14);
                        netlink_unicast(*(*(iVar6 + 0x548) + 0x118),iVar4,iVar1,0x40);
                        goto code_r0x08061a84;
                    }
                }
            }
            kfree_skb(iVar4);
        }
    }
code_r0x08061a84:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x08061af0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8061af4);
    (*pcVar2)();
}


// ===== sym.__traceiter_rdev_dump_station.cfi_jt @ 0x080315d8 (size 8) =====

ulong sym.__traceiter_rdev_dump_station.cfi_jt(ulong param_1,ulong param_2,ulong param_3,uint param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80aafa8;
    piVar1 = *0x80aafa8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_tdls_channel_switch.cfi_jt @ 0x080315e0 (size 8) =====

ulong sym.__traceiter_rdev_tdls_channel_switch.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5,ulong param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac478;
    piVar1 = *0x80ac478;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_iftype_allowed.cfi_jt @ 0x080315e8 (size 8) =====

uint16_t sym.cfg80211_iftype_allowed.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3,char param_4)

{
    uint64_t uVar1;
    
    if (param_4 == '\x01') {
        uVar1 = 1L << (param_2 & 0x3f) & *(param_1 + 0x5c);
        if ((param_2 != 4) || (uVar1 != 0)) {
            return uVar1 != 0;
        }
    }
    else {
        if (param_4 != '\0') {
            return 0;
        }
        if ((param_2 != 4) || ((param_3 & 1) == 0)) {
            return *(param_1 + 0x60) >> (param_2 & 0x3f) & 1;
        }
    }
    return *(param_1 + 100) >> 5 & 1;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080315f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cfg80211_find_elem_match.cfi_jt @ 0x080315f8 (size 8) =====

char * sym.cfg80211_find_elem_match.cfi_jt
                 (char param_1,char *param_2,uint32_t param_3,ulong param_4,int param_5,uint32_t param_6)

{
    uint8_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    char *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < param_3) {
        pcVar3 = param_3;
        pcVar4 = param_2;
        do {
            uVar1 = pcVar4[1];
            if (pcVar3 < uVar1 + 2) {
                return NULL;
            }
            if (((*pcVar4 == param_1) && (param_6 + param_5 <= uVar1)) &&
               (iVar2 = bcmp(pcVar4 + param_6 + 2,param_4,param_5), iVar2 == 0)) {
                return pcVar4;
            }
            pcVar4 = pcVar4 + uVar1 + 2;
            pcVar3 = param_2 + (param_3 - pcVar4);
        } while (1 < pcVar3);
    }
    return NULL;
}


// ===== sym.regulatory_hint.cfi_jt @ 0x08031600 (size 8) =====

ulong sym.regulatory_hint.cfi_jt(int64_t param_1,ushort *param_2)

{
    ushort uVar1;
    code *pcVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (param_2 != NULL)) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        *(param_1 + 0x68) = *(param_1 + 0x68) & 0xfffffffe;
        iVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x40);
        if (iVar4 == 0) {
            uVar5 = 0xfffffff4;
        }
        else {
            uVar3 = sym.get_wiphy_idx(param_1);
            uVar1 = *param_2;
            *(iVar4 + 0x10) = uVar3;
            *(iVar4 + 0x14) = 2;
            *(iVar4 + 0x1c) = uVar1;
            sym.queue_regulatory_request(iVar4);
            uVar5 = 0;
        }
        return uVar5;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x803eb70);
    (*pcVar2)();
}


// ===== sym.__traceiter_cfg80211_cac_event.cfi_jt @ 0x08031608 (size 8) =====

ulong sym.__traceiter_cfg80211_cac_event.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ad240;
    piVar1 = *0x80ad240;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_ch_switch_notify.cfi_jt @ 0x08031610 (size 8) =====

void sym.cfg80211_ch_switch_notify.cfi_jt(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t *arg1;
    uint32_t arg2;
    ulong *in_x18;
    uint64_t arg3;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x2f8);
    iVar5 = *arg1;
    if (iVar5 == 0) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x805fea0);
        (*pcVar4)();
    }
    arg3 = param_3 & 0xffffffff;
    arg2 = param_3;
    if ((arg2 != 0) && (arg1[0x11d] == 0)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x805fe84);
        (*pcVar4)();
    }
    if ((*(arg1 + 0x11d) != 0) && ((1L << (param_3 & 0x3f) & *(arg1 + 0x11d)) == 0)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x805fe7c);
        (*pcVar4)();
    }
    switch(arg1[1]) {
    case 1:
        iVar2 = param_2[3];
        iVar1 = *param_2;
        iVar3 = param_2[1];
        arg1[0x30] = param_2[2];
        arg1[0x31] = iVar2;
        arg1[0x2e] = iVar1;
        arg1[0x2f] = iVar3;
        iVar2 = param_2[7];
        iVar1 = param_2[4];
        iVar3 = param_2[5];
        arg1[0x34] = param_2[6];
        arg1[0x35] = iVar2;
        arg1[0x32] = iVar1;
        arg1[0x33] = iVar3;
        break;
    case 2:
    case 8:
        if (0xe < arg2) {
code_r0x0805fe98:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x805fe9c);
            (*pcVar4)();
        }
        if (arg1[arg3 * 0xe + 0x4c] == 0) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x805fe94);
            (*pcVar4)();
        }
        sym.cfg80211_update_assoc_bss_entry(arg1,arg2,*param_2);
        goto code_r0x0805fe10;
    case 3:
    case 9:
        if (0xe < arg2) goto code_r0x0805fe98;
        iVar1 = *param_2;
        iVar2 = param_2[2];
        iVar3 = param_2[3];
        arg1[arg3 * 0xe + 0x4e] = param_2[1];
        arg1[arg3 * 0xe + 0x4f] = iVar2;
        arg1[arg3 * 0xe + 0x50] = iVar3;
        arg1[arg3 * 0xe + 0x4d] = iVar1;
        iVar2 = param_2[7];
        iVar1 = param_2[4];
        iVar3 = param_2[5];
        arg1[arg3 * 0xe + 0x53] = param_2[6];
        arg1[arg3 * 0xe + 0x54] = iVar2;
        arg1[arg3 * 0xe + 0x51] = iVar1;
        arg1[arg3 * 0xe + 0x52] = iVar3;
        iVar2 = param_2[0xb];
        iVar1 = param_2[8];
        iVar3 = param_2[9];
        arg1[arg3 * 0xe + 0x57] = param_2[10];
        arg1[arg3 * 0xe + 0x58] = iVar2;
        arg1[arg3 * 0xe + 0x55] = iVar1;
        arg1[arg3 * 0xe + 0x56] = iVar3;
        goto code_r0x0805fe10;
    default:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x805fd74);
        (*pcVar4)();
    case 7:
        iVar2 = param_2[3];
        iVar1 = *param_2;
        iVar3 = param_2[1];
        arg1[0x3c] = param_2[2];
        arg1[0x3d] = iVar2;
        arg1[0x3a] = iVar1;
        arg1[0x3b] = iVar3;
        iVar1 = param_2[6];
        iVar2 = param_2[4];
        iVar3 = param_2[5];
        arg1[0x41] = param_2[7];
        arg1[0x3e] = iVar2;
        arg1[0x3f] = iVar3;
        arg1[0x40] = iVar1;
        iVar2 = param_2[0xb];
        iVar1 = param_2[8];
        iVar3 = param_2[9];
        arg1[0x44] = param_2[10];
        arg1[0x45] = iVar2;
        arg1[0x42] = iVar1;
        arg1[0x43] = iVar3;
        iVar2 = param_2[7];
        iVar1 = param_2[4];
        iVar3 = param_2[5];
        arg1[0x34] = param_2[6];
        arg1[0x35] = iVar2;
        arg1[0x32] = iVar1;
        arg1[0x33] = iVar3;
        iVar2 = param_2[3];
        iVar1 = *param_2;
        iVar3 = param_2[1];
        arg1[0x30] = param_2[2];
        arg1[0x31] = iVar2;
        arg1[0x2e] = iVar1;
        arg1[0x2f] = iVar3;
    }
    iVar2 = param_2[0xb];
    iVar1 = param_2[8];
    iVar3 = param_2[9];
    arg1[0x38] = param_2[10];
    arg1[0x39] = iVar2;
    arg1[0x36] = iVar1;
    arg1[0x37] = iVar3;
code_r0x0805fe10:
    cancel_delayed_work(iVar5 + -0x3a8);
    queue_delayed_work_on(0x20,*0x800a000,iVar5 + -0x3a8,0);
    sym.nl80211_ch_switch_notify(iVar5 + -0x560,param_1,arg3,param_2);
    return;
}


// ===== sym.__traceiter_rdev_channel_switch.cfi_jt @ 0x08031618 (size 8) =====

ulong sym.__traceiter_rdev_channel_switch.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac310;
    piVar1 = *0x80ac310;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_check_combinations.cfi_jt @ 0x08031620 (size 8) =====

void sym.cfg80211_check_combinations.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int iVar2;
    int *extraout_x1;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    iStack_1c = 0;
    iVar2 = sym.cfg80211_iter_combinations(param_1,param_2,0x8031a60,&iStack_1c);
    iVar1 = sp_el0;
    iVar3 = -0x10;
    if (iStack_1c != 0) {
        iVar3 = 0;
    }
    if (iVar2 != 0) {
        iVar3 = iVar2;
    }
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x1 = *extraout_x1 + 1;
    return;
}


// ===== sym.__traceiter_rdev_add_station.cfi_jt @ 0x08031628 (size 8) =====

ulong sym.__traceiter_rdev_add_station.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80aae40;
    piVar1 = *0x80aae40;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_change_station.cfi_jt @ 0x08031630 (size 8) =====

ulong sym.__traceiter_rdev_change_station.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80aae88;
    piVar1 = *0x80aae88;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.ieee80211_data_to_8023_exthdr.cfi_jt @ 0x08031638 (size 8) =====

void sym.ieee80211_data_to_8023_exthdr.cfi_jt
               (int64_t param_1,ulong *param_2,int *param_3,uint32_t param_4,uint32_t param_5,uint64_t param_6,
               int *param_7)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    ulong *arg1;
    ulong *arg2;
    ulong *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint8_t *puVar12;
    uint uVar13;
    uint uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t *puVar17;
    uint8_t uVar18;
    int iVar19;
    int64_t iVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar21;
    uint64_t uVar22;
    uint32_t *puVar23;
    uint16_t *puVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uint32_t auStack_140 [2];
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint32_t uStack_114;
    int64_t iStack_110;
    uint32_t uStack_104;
    int *piStack_100;
    uint32_t uStack_f8;
    int16_t iStack_f4;
    ushort uStack_f2;
    ushort uStack_f0;
    int16_t iStack_ee;
    uint16_t uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    uint8_t auStack_74 [4];
    ulong uStack_70;
    uint32_t uStack_68;
    uint16_t uStack_64;
    ushort uStack_62;
    ushort uStack_60;
    uint16_t uStack_5e;
    uint16_t uStack_5c;
    int64_t iStack_58;
    
    uVar14 = param_6 >> 0x20;
    uVar13 = param_6;
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_58 = *(iVar20 + 0x5e0);
    puVar24 = *(param_1 + 0xd8);
    uStack_70 = 0;
    uStack_5c = 0;
    auStack_74[0] = 0;
    uVar4 = *puVar24;
    if ((uVar4 & 0x4c) == 8) {
        iVar6 = 4;
        switch(uVar4 >> 2 & 3) {
        case 0:
            iVar6 = 0x1c;
            if (-1 < uVar4) {
                iVar6 = 0x18;
            }
            break;
        case 1:
            iVar6 = 10;
            if ((uVar4 & 0xe0) != 0xc0) {
                iVar6 = 0x10;
            }
            break;
        case 2:
            iVar6 = 0x1e;
            if (((uVar4 ^ 0xffff) & 0x300) != 0) {
                iVar6 = 0x18;
            }
            if ((uVar4 & 0x8c) == 0x88) {
                iVar19 = 6;
                if (-1 < uVar4) {
                    iVar19 = 2;
                }
                iVar6 = iVar6 + iVar19;
            }
        }
        uVar16 = iVar6 + (param_5 & 0xff);
        uVar22 = uVar16;
        if (*(param_1 + 0x70) < uVar16 + 8) goto code_r0x08038b2c;
        puVar23 = puVar24 + 2;
        if ((uVar4 & 0x100) != 0) {
            puVar23 = puVar24 + 8;
        }
        uStack_68 = *puVar23;
        uStack_64 = puVar23[1];
        puVar23 = puVar24 + 5;
        if ((*puVar24 & 0x200) != 0) {
            puVar23 = puVar24 + 8;
        }
        puVar17 = puVar24 + 0xc;
        if (((*puVar24 ^ 0xffff) & 0x300) != 0) {
            puVar17 = puVar23;
        }
        puVar23 = &uStack_68 | 6;
        uStack_5e = puVar17[1];
        uStack_62 = *puVar17;
        uStack_60 = *puVar17 >> 0x10;
        if (param_4 == 7) {
            skb_copy_bits(param_1,uVar16,auStack_74,1);
            uVar18 = auStack_74[0];
        }
        else {
            uVar18 = 0;
        }
        auStack_74[0] = uVar18 & 3;
        switch(*(puVar24 + 1) & 3) {
        case 0:
            uVar7 = 0xffffffff;
            if (param_4 < 0xc) {
                uVar16 = 0x806;
code_r0x08038c10:
                uVar7 = 0xffffffff;
                if ((1 << (param_4 & 0x1f) & uVar16) != 0) goto code_r0x08038d18;
            }
            break;
        case 1:
            uVar7 = 0xffffffff;
            if (param_4 < 10) {
                uVar16 = 0x218;
                goto code_r0x08038c10;
            }
            break;
        case 2:
            uVar7 = 0xffffffff;
            if ((param_4 < 9) && ((1 << (param_4 & 0x1f) & 0x184U) != 0)) {
                if (((uStack_68 & 1) == 0) ||
                   (*param_3 != CONCAT22(uStack_60,uStack_62) || *(param_3 + 1) != uStack_5e)) {
                    if (param_4 != 7) goto code_r0x08038d18;
                    if ((uVar18 & 3) != 2) {
                        if ((uVar18 & 3) == 1) {
                            uVar7 = 6;
                            goto code_r0x08038cec;
                        }
                        goto code_r0x08038cf4;
                    }
                }
                goto code_r0x08038b2c;
            }
            break;
        case 3:
            uVar7 = 0xffffffff;
            if ((param_4 < 8) && ((1 << (param_4 & 0x1f) & 0x94U) != 0)) {
                if (param_4 == 7) {
                    if ((uVar18 & 3) == 1) goto code_r0x08038b2c;
                    if ((uVar18 & 3) == 2) {
                        puVar23 = &uStack_68;
                        uVar7 = 0xc;
code_r0x08038cec:
                        skb_copy_bits(param_1,uVar16 + 6,puVar23,uVar7);
                    }
code_r0x08038cf4:
                    iVar6 = 0xc;
                    if ((auStack_74[0] & 3) != 1) {
                        iVar6 = 6;
                    }
                    iVar19 = 0x12;
                    if ((auStack_74[0] & 3) != 2) {
                        iVar19 = iVar6;
                    }
                    uVar22 = iVar19 + uVar16;
                }
code_r0x08038d18:
                skb_copy_bits(param_1,uVar22,&uStack_70,8);
                uStack_5c = uStack_70._6_2_;
                uVar16 = uVar22;
                if ((((((param_6 & 1) == 0) && (uStack_70 == 0x3aaaa && uStack_70._4_2_ == 0)) &&
                     (uStack_70._6_2_ != 0xf380)) && (uStack_70._6_2_ != 0x3781)) ||
                   (uStack_70 == 0x3aaaa && uStack_70._4_2_ == -0x800)) {
                    uVar15 = *(param_1 + 0x70);
                    uVar22 = uVar16 + 8;
                    if (uVar16 + 8 <= uVar15) goto code_r0x08038d84;
                }
                else {
                    uVar15 = *(param_1 + 0x70);
                    uStack_5c = uVar15 - uVar16 >> 8 & 0xff | (uVar15 - uVar16 & 0xff00ff) << 8;
                    if (uVar16 <= uVar15) {
code_r0x08038d84:
                        uVar16 = uVar15 - *(param_1 + 0x74);
                        uVar21 = uVar22;
                        iVar6 = uVar21 - uVar16;
                        if (uVar16 <= uVar21 && iVar6 != 0) {
                            iVar20 = __pskb_pull_tail(param_1,iVar6);
                            if (iVar20 == 0) goto code_r0x08038db8;
                            uVar15 = *(param_1 + 0x70);
                        }
                        *(param_1 + 0x70) = uVar15 - uVar21;
                        *(param_1 + 0xd8) = *(param_1 + 0xd8) + uVar22;
                    }
                }
code_r0x08038db8:
                if (param_2 == NULL) {
                    param_2 = skb_push(param_1,0xe);
                }
                uVar7 = 0;
                *(param_2 + 6) = CONCAT26(uStack_5c,CONCAT24(uStack_5e,CONCAT22(uStack_60,uStack_62)));
                *param_2 = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
            }
        }
    }
    else {
code_r0x08038b2c:
        uVar7 = 0xffffffff;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail(uVar7);
    piVar11 = auVar25._8_8_;
    arg1 = auVar25._0_8_;
    *extraout_x18 = sym.ieee80211_amsdu_to_8023s;
    pcStack_d8 = sym.ieee80211_amsdu_to_8023s;
    iVar20 = sp_el0;
    iStack_e8 = *(iVar20 + 0x5e0);
    puVar23 = CONCAT44(uVar14,uVar13);
    uStack_f0 = 0;
    iStack_ee = 0;
    uStack_ec = 0;
    uStack_f8 = 0;
    iStack_f4 = 0;
    uStack_f2 = 0;
    if ((*(arg1 + 0x7e) >> 5 & 1) == 0) {
        uStack_104 = 0;
    }
    else {
        uStack_104 = *(arg1[0x1a] + *(arg1 + 0xcc) + 8) == 0;
    }
    iVar6 = 0;
    uStack_114 = 0;
    iStack_110 = param_5 + 0x13 & 0xfffffffc;
    piStack_100 = param_7;
    puStack_e0 = &stack0xffffffffffffffb0;
    do {
        while( true ) {
            skb_copy_bits(arg1,iVar6,&uStack_f8,0xe);
            uVar16 = uStack_ec >> 8 | (uStack_ec & 0xff00ff) << 8;
            uVar15 = *(arg1 + 0xe) - iVar6;
            if ((uVar15 < uVar16 + 0xe) || (uStack_f8 == 0x3aaaa && iStack_f4 == 0)) goto code_r0x0803914c;
            iVar6 = iVar6 + 0xe;
            uVar1 = 2 - uVar16 & 3;
            uVar21 = uVar16 + 0xe + uVar1;
            if (((puVar23 == NULL) || (((uStack_f8 & 1) != 0 || (*puVar23 == uStack_f8 && puVar23[1] == iStack_f4)))) &&
               ((piStack_100 == NULL || (CONCAT22(uStack_f0,uStack_f2) == *piStack_100 && iStack_ee == piStack_100[1]))
               )) break;
            iVar6 = iVar6 + uVar16 + uVar1;
            if (uVar15 <= uVar21) goto code_r0x08039190;
        }
        if ((*(arg1 + 0x74) != 0 || (uStack_104 & 1) != 0) || (uVar21 < uVar15)) {
            if (uVar16 <= *(arg1 + 0xe) - iVar6) {
                uVar2 = uVar16;
                if (0x1f < uVar16) {
                    uVar2 = 0x20;
                }
                if (uStack_104 == 0) {
                    uVar2 = uVar16;
                }
                arg2 = __netdev_alloc_skb(0,uVar2 + iStack_110,0xa20);
                if (arg2 != NULL) {
                    arg2[0x1b] = arg2[0x1b] + iStack_110;
                    *(arg2 + 0x19) = *(arg2 + 0x19) + iStack_110;
                    uVar7 = skb_put(arg2,uVar2);
                    skb_copy_bits(arg1,iVar6,uVar7,uVar2);
                    if (uVar16 - uVar2 != 0) {
                        sym.__ieee80211_amsdu_copy_frag(arg1,arg2,uVar2 + iVar6,uVar16 - uVar2);
                    }
                    iVar6 = iVar6 + uVar16 + uVar1;
                    goto code_r0x08039080;
                }
            }
code_r0x0803914c:
            piVar9 = *piVar11;
            if ((piVar9 == piVar11) || (piVar9 == NULL)) goto code_r0x08039198;
            goto code_r0x0803915c;
        }
        skb_pull(arg1,iVar6);
        uStack_114 = 1;
        arg2 = arg1;
code_r0x08039080:
        puVar17 = arg2[0x1b];
        *(arg2 + 0xb4) = puVar17 - *(arg2 + 0x1a);
        arg2[2] = arg1[2];
        *(arg2 + 0x8c) = *(arg1 + 0x8c);
        uVar4 = *(puVar17 + 6);
        uVar16 = (uVar4 & 0xff00) << 0x10;
        uVar1 = (uVar16 >> 8 | uVar4 << 0x18) >> 0x10;
        if (((((*puVar17 ^ 0x3aaaa) == 0 && puVar17[1] == 0) && (uVar1 != 0x8137)) && (uVar1 != 0x80f3)) ||
           ((*puVar17 ^ 0x3aaaa) == 0 && puVar17[1] == -0x800)) {
            uStack_ec = uVar4 & 0xff | (uVar16 >> 0x18) << 8;
            skb_pull(arg2,8);
        }
        puVar8 = skb_push(arg2,0xe);
        *puVar8 = CONCAT26(uStack_f2,CONCAT24(iStack_f4,uStack_f8));
        *(puVar8 + 6) = CONCAT26(uStack_ec,CONCAT24(iStack_ee,CONCAT22(uStack_f0,uStack_f2)));
        puVar8 = piVar11[1];
        *arg2 = piVar11;
        arg2[1] = puVar8;
        piVar11[1] = arg2;
        *puVar8 = arg2;
        *(piVar11 + 2) = piVar11[2] + 1;
    } while (uVar21 < uVar15);
code_r0x08039190:
    if ((uStack_114 & 1) == 0) goto code_r0x08039198;
    goto code_r0x080391a0;
    while (piVar9 != NULL) {
code_r0x0803915c:
        *(piVar11 + 2) = piVar11[2] + -1;
        iVar20 = *piVar9;
        piVar3 = piVar9[1];
        *piVar9 = 0;
        piVar9[1] = 0;
        *(iVar20 + 8) = piVar3;
        *piVar3 = iVar20;
        kfree_skb();
        piVar9 = *piVar11;
        if (piVar9 == piVar11) break;
    }
code_r0x08039198:
    consume_skb(arg1);
code_r0x080391a0:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar12 = auVar25._8_8_;
    iVar10 = auVar25._0_8_;
    puVar23 = auStack_140;
    *extraout_x18_00 = sym.cfg80211_classify8021d;
    ppuStack_130 = &puStack_e0;
    pcStack_128 = sym.cfg80211_classify8021d;
    iVar20 = sp_el0;
    iStack_138 = *(iVar20 + 0x5e0);
    if ((*(iVar10 + 0x8c) & 0xfffffff8) == 0x100) {
        uVar16 = *(iVar10 + 0x8c) - 0x100;
    }
    else if (((*(iVar10 + 0x82) & 1) == 0) || (*(iVar10 + 0x9a) < 0x2000)) {
        uVar4 = *(iVar10 + 0xb0);
        if (uVar4 < 0x4788) {
            if (uVar4 != 8) {
                if (uVar4 == 0x1789) {
                    uVar16 = 7;
                    goto code_r0x08039444;
                }
                goto code_r0x08039488;
            }
            uVar16 = *(*(iVar10 + 0xd0) + *(iVar10 + 0xb4) + 1) & 0xfc;
            if (puVar12 == NULL) goto code_r0x080393e4;
code_r0x080392ec:
            uVar15 = uVar16 >> 2;
            if (*puVar12 != 0) {
                iVar20 = 0;
                do {
                    if (iVar20 == 0x2a) goto code_r0x08039494;
                    if (uVar15 == puVar12[iVar20 + 1]) {
                        uVar16 = puVar12[iVar20 + 2];
                        goto code_r0x08039430;
                    }
                    iVar20 = iVar20 + 2;
                } while (*puVar12 * 2 - iVar20 != 0);
            }
            if ((uVar15 < puVar12[0x2b]) || (puVar12[0x2c] < uVar15)) {
                if ((uVar15 < puVar12[0x2d]) || (puVar12[0x2e] < uVar15)) {
                    if ((uVar15 < puVar12[0x2f]) || (puVar12[0x30] < uVar15)) {
                        if ((uVar15 < puVar12[0x31]) || (puVar12[0x32] < uVar15)) {
                            if ((uVar15 < puVar12[0x33]) || (puVar12[0x34] < uVar15)) {
                                if ((uVar15 < puVar12[0x35]) || (puVar12[0x36] < uVar15)) {
                                    if ((uVar15 < puVar12[0x37]) || (puVar12[0x38] < uVar15)) {
                                        if ((uVar15 < puVar12[0x39]) || (puVar12[0x3a] < uVar15)) goto code_r0x080393e4;
                                        uVar16 = 7;
                                    }
                                    else {
                                        uVar16 = 6;
                                    }
                                }
                                else {
                                    uVar16 = 5;
                                }
                            }
                            else {
                                uVar16 = 4;
                            }
                        }
                        else {
                            uVar16 = 3;
                        }
                    }
                    else {
                        uVar16 = 2;
                    }
                }
                else {
                    uVar16 = 1;
                }
            }
            else {
                uVar16 = 0;
            }
        }
        else {
            if ((uVar4 == 0x4788) || (uVar4 == 0x4888)) {
                auStack_140[0] = 0;
                if ((*(iVar10 + 0x70) - *(iVar10 + 0x74)) + -0xe < 4) {
                    if ((iVar10 != 0) && (iVar6 = skb_copy_bits(iVar10,0xe,auStack_140,4), -1 < iVar6))
                    goto code_r0x080392c8;
                }
                else {
                    puVar23 = *(iVar10 + 0xd8) + 0xe;
                    if (puVar23 != NULL) {
code_r0x080392c8:
                        uVar16 = *puVar23 >> 0x11 & 7;
                        goto code_r0x08039430;
                    }
                }
code_r0x08039488:
                uVar16 = 0;
                goto code_r0x08039444;
            }
            if (uVar4 != 0xdd86) goto code_r0x08039488;
            uVar4 = *(*(iVar10 + 0xd0) + *(iVar10 + 0xb4));
            uVar16 = ((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10) >> 0x14 & 0xfc;
            if (puVar12 != NULL) goto code_r0x080392ec;
code_r0x080393e4:
            uVar16 = uVar16 >> 5;
        }
    }
    else {
        uVar16 = *(iVar10 + 0x9a) >> 0xd;
    }
code_r0x08039430:
    uVar16 = uVar16 & -(uVar16 < 0x10);
code_r0x08039444:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_138) {
        return;
    }
    __stack_chk_fail(uVar16);
code_r0x08039494:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8039498);
    (*pcVar5)();
}


// ===== sym.trace_event_raw_event_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031640 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0809f0dc)
//WARNING: Removing unreachable block (ram,0x0809eaa8)
//WARNING: Removing unreachable block (ram,0x0809e548)
//WARNING: Removing unreachable block (ram,0x0809e018)
//WARNING: Removing unreachable block (ram,0x0809d9bc)
//WARNING: Removing unreachable block (ram,0x0809d4fc)
//WARNING: Removing unreachable block (ram,0x0809cfbc)
//WARNING: Removing unreachable block (ram,0x0809c960)
//WARNING: Removing unreachable block (ram,0x0809c368)
//WARNING: Removing unreachable block (ram,0x0809be74)
//WARNING: Removing unreachable block (ram,0x0809b988)
//WARNING: Removing unreachable block (ram,0x0809bbfc)
//WARNING: Removing unreachable block (ram,0x0809c0d0)
//WARNING: Removing unreachable block (ram,0x0809c6a0)
//WARNING: Removing unreachable block (ram,0x0809cc50)
//WARNING: Removing unreachable block (ram,0x0809d2b4)
//WARNING: Removing unreachable block (ram,0x0809d6dc)
//WARNING: Removing unreachable block (ram,0x0809dd50)
//WARNING: Removing unreachable block (ram,0x0809e2b0)
//WARNING: Removing unreachable block (ram,0x0809e80c)
//WARNING: Removing unreachable block (ram,0x0809ece8)
//WARNING: Removing unreachable block (ram,0x0809f498)

void sym.trace_event_raw_event_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
               (int64_t param_1,ulong *param_2,code *param_3,int64_t *param_4,code *param_5,code *param_6,
               uint param_7,uint param_8)

{
    ulong uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    ulong in_tmp_ldXn;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    uint uVar27;
    uint uVar28;
    int64_t iVar29;
    uint *puVar30;
    ushort uVar31;
    ulong *puVar32;
    ulong uVar33;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    ulong *extraout_x18_13;
    ulong *extraout_x18_14;
    ulong *extraout_x18_15;
    ulong *extraout_x18_16;
    ulong *extraout_x18_17;
    ulong *extraout_x18_18;
    ulong *extraout_x18_19;
    ulong *extraout_x18_20;
    ulong *extraout_x18_21;
    ulong *extraout_x18_22;
    ulong *extraout_x18_23;
    ulong *extraout_x18_24;
    ulong *extraout_x18_25;
    ulong *extraout_x18_26;
    ulong *extraout_x18_27;
    ulong *extraout_x18_28;
    ulong *extraout_x18_29;
    ulong *extraout_x18_30;
    ulong *extraout_x18_31;
    ulong *extraout_x18_32;
    ulong *extraout_x18_33;
    ulong *extraout_x18_34;
    ulong *extraout_x18_35;
    ulong *extraout_x18_36;
    ulong *extraout_x18_37;
    ulong *extraout_x18_38;
    ulong *extraout_x18_39;
    ulong *extraout_x18_40;
    ulong *extraout_x18_41;
    ulong *extraout_x18_42;
    uint32_t uVar34;
    uint32_t uVar35;
    uint64_t uVar36;
    ulong uVar37;
    uint64_t uVar38;
    uint64_t uVar39;
    ulong unaff_x30;
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    uchar auVar44 [16];
    uchar auVar45 [16];
    uchar auVar46 [16];
    uchar auVar47 [16];
    uchar auStack_1470 [12];
    uint uStack_1464;
    int64_t iStack_1460;
    int64_t iStack_1458;
    ulong ****ppppuStack_1450;
    code *pcStack_1448;
    int64_t iStack_1440;
    code *pcStack_1430;
    ulong uStack_1428;
    int64_t iStack_1420;
    int64_t iStack_1418;
    code *pcStack_1410;
    int64_t *piStack_1408;
    ulong uStack_13f8;
    ulong uStack_13f0;
    ulong uStack_13e8;
    ulong uStack_13e0;
    ulong uStack_13d8;
    ulong uStack_13d0;
    int64_t iStack_13c8;
    ulong ****ppppuStack_13c0;
    ulong uStack_13b8;
    uint64_t uStack_13b0;
    uint64_t uStack_13a0;
    int64_t *piStack_1398;
    uint64_t uStack_1390;
    int64_t *piStack_1388;
    uchar auStack_1380 [12];
    int iStack_1374;
    int64_t *piStack_1370;
    uint32_t uStack_1364;
    int64_t iStack_1360;
    int64_t iStack_1358;
    ulong ****ppppuStack_1350;
    code *pcStack_1348;
    uint64_t uStack_1340;
    uint64_t uStack_1338;
    code *pcStack_1330;
    code *pcStack_1328;
    code *pcStack_1320;
    uint64_t uStack_1318;
    int64_t iStack_1310;
    code *pcStack_1308;
    uint64_t uStack_1300;
    int64_t *piStack_12f8;
    ulong uStack_12e8;
    ulong uStack_12e0;
    ulong uStack_12d8;
    ulong uStack_12d0;
    ulong uStack_12c8;
    ulong uStack_12c0;
    int64_t iStack_12b8;
    ulong ****ppppuStack_12b0;
    ulong uStack_12a8;
    uint64_t uStack_12a0;
    code *pcStack_1290;
    code *pcStack_1288;
    code *pcStack_1280;
    uint64_t uStack_1278;
    code *pcStack_1270;
    int64_t *piStack_1268;
    uint64_t uStack_1260;
    int64_t *piStack_1258;
    uchar auStack_1250 [12];
    uint32_t uStack_1244;
    int64_t iStack_1240;
    int64_t iStack_1238;
    ulong ****ppppuStack_1230;
    code *pcStack_1228;
    ulong *puStack_1220;
    ulong uStack_1218;
    uchar auStack_1210 [16];
    code *pcStack_1200;
    uint64_t uStack_11f8;
    ulong uStack_11e8;
    ulong uStack_11e0;
    ulong uStack_11d8;
    ulong uStack_11d0;
    ulong uStack_11c8;
    ulong uStack_11c0;
    int64_t iStack_11b8;
    ulong ****ppppuStack_11b0;
    ulong uStack_11a8;
    int64_t *piStack_11a0;
    uint64_t uStack_1190;
    uint64_t uStack_1188;
    code *pcStack_1180;
    int64_t *piStack_1178;
    uchar auStack_1170 [12];
    uint32_t uStack_1164;
    int64_t iStack_1160;
    int64_t iStack_1158;
    ulong ****ppppuStack_1150;
    code *pcStack_1148;
    int64_t iStack_1140;
    ulong uStack_1130;
    uchar auStack_1128 [16];
    uint64_t uStack_1118;
    uint64_t uStack_1110;
    code *pcStack_1108;
    ulong uStack_10f8;
    ulong uStack_10f0;
    ulong uStack_10e8;
    ulong uStack_10e0;
    ulong uStack_10d8;
    ulong uStack_10d0;
    int64_t iStack_10c8;
    ulong ****ppppuStack_10c0;
    ulong uStack_10b8;
    int64_t iStack_10b0;
    code *pcStack_10a8;
    uint64_t uStack_10a0;
    int64_t *piStack_1098;
    int64_t *piStack_1090;
    int64_t *piStack_1088;
    uchar auStack_1080 [12];
    uint32_t uStack_1074;
    int64_t iStack_1070;
    int64_t iStack_1068;
    ulong ****ppppuStack_1060;
    code *pcStack_1058;
    uint64_t uStack_1050;
    code *pcStack_1040;
    code *pcStack_1038;
    int64_t iStack_1030;
    int64_t iStack_1028;
    uint64_t uStack_1020;
    int64_t iStack_1018;
    code *pcStack_1010;
    int64_t *piStack_1008;
    ulong uStack_ff8;
    ulong uStack_ff0;
    ulong uStack_fe8;
    ulong uStack_fe0;
    ulong uStack_fd8;
    ulong uStack_fd0;
    int64_t iStack_fc8;
    ulong ****ppppuStack_fc0;
    ulong uStack_fb8;
    int64_t iStack_fb0;
    code *pcStack_fa0;
    int64_t *piStack_f98;
    int64_t *piStack_f90;
    int64_t *piStack_f88;
    uchar auStack_f80 [12];
    uint32_t uStack_f74;
    int64_t iStack_f70;
    int64_t iStack_f68;
    ulong ****ppppuStack_f60;
    code *pcStack_f58;
    int64_t iStack_f50;
    int64_t iStack_f40;
    int64_t iStack_f38;
    int64_t iStack_f30;
    int64_t iStack_f28;
    code *pcStack_f20;
    int64_t *piStack_f18;
    ulong uStack_f08;
    ulong uStack_f00;
    ulong uStack_ef8;
    ulong uStack_ef0;
    ulong uStack_ee8;
    ulong uStack_ee0;
    int64_t iStack_ed8;
    ulong ****ppppuStack_ed0;
    ulong uStack_ec8;
    code *pcStack_ec0;
    int64_t *piStack_eb0;
    code *pcStack_ea8;
    int64_t *piStack_ea0;
    int64_t *piStack_e98;
    uchar auStack_e90 [12];
    uint32_t uStack_e84;
    int64_t iStack_e80;
    int64_t iStack_e78;
    ulong ****ppppuStack_e70;
    code *pcStack_e68;
    code *pcStack_e60;
    int64_t iStack_e58;
    int64_t iStack_e50;
    int64_t iStack_e48;
    int64_t iStack_e40;
    code *pcStack_e38;
    int64_t *piStack_e30;
    code *pcStack_e28;
    ulong uStack_e18;
    ulong uStack_e10;
    ulong uStack_e08;
    ulong uStack_e00;
    ulong uStack_df8;
    ulong uStack_df0;
    int64_t iStack_de8;
    ulong ****ppppuStack_de0;
    ulong uStack_dd8;
    code *pcStack_dd0;
    int64_t iStack_dc8;
    int64_t iStack_dc0;
    code *pcStack_db8;
    int64_t *piStack_db0;
    int64_t *piStack_da8;
    uchar auStack_da0 [12];
    uint32_t uStack_d94;
    int64_t iStack_d90;
    int64_t iStack_d88;
    ulong ****ppppuStack_d80;
    code *pcStack_d78;
    code *pcStack_d70;
    uint64_t uStack_d68;
    int64_t iStack_d60;
    int64_t iStack_d58;
    int64_t iStack_d50;
    code *pcStack_d48;
    ulong uStack_d38;
    ulong uStack_d30;
    ulong uStack_d28;
    ulong uStack_d20;
    ulong uStack_d18;
    ulong uStack_d10;
    int64_t iStack_d08;
    ulong ****ppppuStack_d00;
    ulong uStack_cf8;
    uint64_t uStack_cf0;
    int64_t *piStack_ce8;
    int64_t *piStack_ce0;
    int64_t *piStack_cd8;
    uchar auStack_cd0 [12];
    uint32_t uStack_cc4;
    int64_t iStack_cc0;
    int64_t iStack_cb8;
    ulong ****ppppuStack_cb0;
    code *pcStack_ca8;
    code *pcStack_ca0;
    uint64_t uStack_c98;
    code *pcStack_c90;
    int64_t iStack_c88;
    code *pcStack_c80;
    uint64_t uStack_c78;
    uint64_t uStack_c70;
    int64_t iStack_c68;
    code *pcStack_c60;
    int64_t *piStack_c58;
    ulong uStack_c48;
    ulong uStack_c40;
    ulong uStack_c38;
    ulong uStack_c30;
    ulong uStack_c28;
    ulong uStack_c20;
    int64_t iStack_c18;
    ulong ****ppppuStack_c10;
    ulong uStack_c08;
    code *pcStack_c00;
    uint64_t uStack_bf8;
    uint64_t uStack_bf0;
    int64_t *piStack_be8;
    int64_t *piStack_be0;
    int64_t *piStack_bd8;
    uchar auStack_bd0 [12];
    uint32_t uStack_bc4;
    int64_t iStack_bc0;
    int64_t iStack_bb8;
    ulong ****ppppuStack_bb0;
    code *pcStack_ba8;
    code *pcStack_ba0;
    int64_t iStack_b90;
    int64_t *piStack_b88;
    int64_t *piStack_b80;
    uint64_t uStack_b78;
    uint64_t uStack_b70;
    int64_t iStack_b68;
    code *pcStack_b60;
    int64_t *piStack_b58;
    ulong uStack_b48;
    ulong uStack_b40;
    ulong uStack_b38;
    ulong uStack_b30;
    ulong uStack_b28;
    ulong uStack_b20;
    int64_t iStack_b18;
    ulong ****ppppuStack_b10;
    ulong uStack_b08;
    code *pcStack_b00;
    code *pcStack_af0;
    int64_t *piStack_ae8;
    uint64_t uStack_ae0;
    int64_t *piStack_ad8;
    uchar auStack_ad0 [12];
    uint32_t uStack_ac4;
    int64_t iStack_ac0;
    int64_t iStack_ab8;
    ulong ****ppppuStack_ab0;
    code *pcStack_aa8;
    code *pcStack_aa0;
    ulong uStack_a98;
    int64_t iStack_a90;
    uint64_t uStack_a88;
    ulong uStack_a78;
    ulong uStack_a70;
    ulong uStack_a68;
    ulong uStack_a60;
    ulong uStack_a58;
    ulong uStack_a50;
    int64_t iStack_a48;
    ulong ****ppppuStack_a40;
    ulong uStack_a38;
    int64_t *piStack_a30;
    uint64_t uStack_a20;
    int64_t *piStack_a18;
    uchar auStack_a10 [12];
    uint32_t uStack_a04;
    int64_t iStack_a00;
    int64_t iStack_9f8;
    ulong ****ppppuStack_9f0;
    code *pcStack_9e8;
    code *pcStack_9e0;
    ulong uStack_9d8;
    int64_t iStack_9d0;
    uint64_t uStack_9c8;
    ulong uStack_9b8;
    ulong uStack_9b0;
    ulong uStack_9a8;
    ulong uStack_9a0;
    ulong uStack_998;
    ulong uStack_990;
    int64_t iStack_988;
    ulong ****ppppuStack_980;
    ulong uStack_978;
    int64_t *piStack_970;
    int64_t *piStack_960;
    int64_t *piStack_958;
    uchar auStack_950 [12];
    uint32_t uStack_944;
    int64_t iStack_940;
    int64_t iStack_938;
    ulong ****ppppuStack_930;
    code *pcStack_928;
    uint64_t uStack_920;
    ulong uStack_918;
    uchar auStack_910 [16];
    ulong uStack_8f8;
    ulong uStack_8f0;
    ulong uStack_8e8;
    ulong uStack_8e0;
    ulong uStack_8d8;
    ulong uStack_8d0;
    int64_t iStack_8c8;
    ulong ****ppppuStack_8c0;
    ulong uStack_8b8;
    code *pcStack_8b0;
    int64_t *piStack_8a0;
    int64_t *piStack_898;
    uchar auStack_890 [12];
    uint32_t uStack_884;
    int64_t iStack_880;
    int64_t iStack_878;
    ulong ****ppppuStack_870;
    code *pcStack_868;
    int64_t iStack_860;
    uint64_t uStack_850;
    int64_t *piStack_848;
    ulong uStack_840;
    int64_t iStack_838;
    uint64_t uStack_830;
    int64_t *piStack_828;
    code *pcStack_820;
    code *pcStack_818;
    ulong uStack_808;
    ulong uStack_800;
    ulong uStack_7f8;
    ulong uStack_7f0;
    ulong uStack_7e8;
    ulong uStack_7e0;
    int64_t iStack_7d8;
    ulong ****ppppuStack_7d0;
    ulong uStack_7c8;
    int64_t *piStack_7c0;
    code *pcStack_7b8;
    code *pcStack_7b0;
    code *pcStack_7a8;
    int64_t iStack_7a0;
    int64_t *piStack_798;
    uchar auStack_790 [4];
    uint uStack_78c;
    uint uStack_788;
    uint32_t uStack_784;
    int64_t iStack_780;
    int64_t iStack_778;
    ulong ****ppppuStack_770;
    code *pcStack_768;
    ulong uStack_708;
    ulong uStack_700;
    ulong uStack_6f8;
    ulong uStack_6f0;
    ulong uStack_6e8;
    ulong uStack_6e0;
    int64_t iStack_6d8;
    ulong ****ppppuStack_6d0;
    ulong uStack_6c8;
    code *pcStack_6c0;
    uint64_t uStack_6b0;
    code *pcStack_6a8;
    code *pcStack_6a0;
    int64_t *piStack_698;
    int64_t iStack_690;
    int64_t *piStack_688;
    code *pcStack_680;
    int64_t *piStack_678;
    uchar auStack_670 [12];
    uint32_t uStack_664;
    code *pcStack_660;
    int64_t iStack_658;
    ulong ****ppppuStack_650;
    code *pcStack_648;
    code *pcStack_640;
    int64_t *piStack_638;
    ulong uStack_630;
    int64_t iStack_628;
    int64_t iStack_620;
    code *pcStack_618;
    ulong uStack_608;
    ulong uStack_600;
    ulong uStack_5f8;
    ulong uStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    int64_t iStack_5d8;
    ulong ****ppppuStack_5d0;
    ulong uStack_5c8;
    int64_t iStack_5c0;
    code *pcStack_5b8;
    int64_t *piStack_5b0;
    int64_t *piStack_5a8;
    uchar auStack_5a0 [12];
    uint32_t uStack_594;
    code *pcStack_590;
    int64_t iStack_588;
    ulong ****ppppuStack_580;
    code *pcStack_578;
    int64_t iStack_570;
    int64_t iStack_568;
    code *pcStack_560;
    int64_t *piStack_558;
    uint64_t uStack_550;
    int64_t iStack_548;
    int64_t iStack_540;
    code *pcStack_538;
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    ulong uStack_500;
    int64_t iStack_4f8;
    ulong ****ppppuStack_4f0;
    ulong uStack_4e8;
    int64_t *piStack_4e0;
    uint64_t uStack_4d8;
    uint64_t uStack_4d0;
    int64_t *piStack_4c8;
    uchar auStack_4c0 [12];
    uint32_t uStack_4b4;
    code *pcStack_4b0;
    int64_t iStack_4a8;
    ulong ****ppppuStack_4a0;
    code *pcStack_498;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    ulong uStack_418;
    ulong uStack_410;
    int64_t iStack_408;
    ulong ****ppppuStack_400;
    ulong uStack_3f8;
    code *pcStack_3f0;
    ulong *puStack_3e0;
    int64_t iStack_3d8;
    int64_t *piStack_3d0;
    uint64_t uStack_3c8;
    uint64_t uStack_3c0;
    int64_t *piStack_3b8;
    uchar auStack_3b0 [12];
    uint32_t uStack_3a4;
    code *pcStack_3a0;
    int64_t iStack_398;
    ulong ****ppppuStack_390;
    code *pcStack_388;
    code *pcStack_380;
    ulong *puStack_370;
    ulong uStack_368;
    int64_t iStack_360;
    int64_t iStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    ulong ****ppppuStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e0;
    int64_t *piStack_2d8;
    int64_t *piStack_2d0;
    int64_t *piStack_2c8;
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    code *pcStack_2b0;
    int64_t iStack_2a8;
    ulong ****ppppuStack_2a0;
    code *pcStack_298;
    code *pcStack_290;
    ulong uStack_280;
    uchar auStack_278 [16];
    uint64_t uStack_268;
    uint64_t uStack_260;
    int64_t *piStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    uchar ****ppppuStack_210;
    ulong uStack_208;
    code *pcStack_200;
    ulong *puStack_1f8;
    code *pcStack_1f0;
    int64_t *piStack_1e8;
    uint64_t uStack_1e0;
    int64_t *piStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    code *pcStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong *puStack_1a0;
    ulong uStack_198;
    uchar auStack_190 [16];
    code *pcStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    code *pcStack_110;
    int64_t *piStack_108;
    int64_t *piStack_100;
    int64_t *piStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    code *pcStack_e0;
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
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar34 = *(param_1 + 0x48);
    piVar17 = param_4;
    pcVar16 = param_5;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar14 = param_3;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            event_triggers_call(param_1,0);
        }
        if (((uVar34 >> 6 & 1) == 0) &&
           (((uVar34 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) == 0))))
        goto code_r0x0809b830;
    }
    else {
code_r0x0809b830:
        pcVar14 = 0x38;
        iVar7 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar7 != 0) {
            uVar37 = param_2[1];
            *(iVar7 + 8) = *param_2;
            *(iVar7 + 0x10) = uVar37;
            *(iVar7 + 0x18) = *(param_2 + 0x1a);
            if (param_3 == NULL) {
                *(iVar7 + 0x20) = 0;
                *(iVar7 + 0x1c) = 0;
            }
            else {
                uVar34 = *param_3;
                *(iVar7 + 0x20) = *(param_3 + 4);
                *(iVar7 + 0x1c) = uVar34;
            }
            *(iVar7 + 0x28) = param_4;
            *(iVar7 + 0x30) = param_5 & 1;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    piVar20 = auVar40._0_8_;
    *extraout_x18 = sym.perf_trace_cfg80211_probe_status;
    pcStack_c8 = sym.perf_trace_cfg80211_probe_status;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uVar6 = pcVar16 & 0xffffffff;
    pcStack_e0 = NULL;
    uStack_e4 = 0;
    iVar7 = tpidr_el1;
    piVar21 = iVar7 + piVar20[0xf];
    piVar19 = piVar17;
    pcVar24 = pcVar16;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((piVar20[0x10] != 0) || (pcVar15 = pcVar14, *piVar21 != 0)) {
        pcVar15 = &uStack_e4;
        iVar7 = perf_trace_buf_alloc(0x3c,&pcStack_e0);
        uVar38 = _strlen;
        if (iVar7 != 0) {
            *(pcStack_e0 + 0xe8) = &puStack_d0;
            *(pcStack_e0 + 0xf8) = auStack_f0;
            *(pcStack_e0 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809b8c4;
            *(pcStack_e0 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar7 + 8) = *puVar32;
            *(iVar7 + 0x10) = uVar37;
            *(iVar7 + 0x18) = *(puVar32 + 0x1a);
            if (pcVar14 == NULL) {
                *(iVar7 + 0x20) = 0;
                *(iVar7 + 0x1c) = 0;
            }
            else {
                uVar34 = *pcVar14;
                *(iVar7 + 0x20) = *(pcVar14 + 4);
                *(iVar7 + 0x1c) = uVar34;
            }
            pcVar15 = uStack_e4;
            pcVar24 = 0x1;
            param_8 = 0;
            *(iVar7 + 0x28) = piVar17;
            *(iVar7 + 0x30) = pcVar16 & 1;
            piVar19 = piVar20;
            param_6 = pcStack_e0;
            piVar18 = piVar21;
            perf_trace_run_bpf_submit(iVar7,0x3c);
            param_7 = SUB84(piVar18,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar8 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_00 = 0x809ba2c;
    uStack_128 = 0x809ba2c;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar34 = uVar37;
    piVar18 = piVar19;
    ppuStack_130 = &puStack_d0;
    uStack_120 = uVar6;
    pcStack_110 = pcVar14;
    piStack_108 = piVar21;
    piStack_100 = piVar17;
    piStack_f8 = piVar20;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar18 = NULL;
            event_triggers_call(iVar10,0);
        }
        if (((uVar34 >> 6 & 1) == 0) &&
           (((uVar34 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(iVar10), (uVar6 & 1) == 0))))
        goto code_r0x0809bab4;
    }
    else {
code_r0x0809bab4:
        pcVar16 = 0x28;
        iVar7 = trace_event_buffer_reserve(&uStack_168,iVar10);
        if (iVar7 != 0) {
            uVar1 = puVar8[1];
            *(iVar7 + 8) = *puVar8;
            *(iVar7 + 0x10) = uVar1;
            *(iVar7 + 0x18) = *(puVar8 + 0x1a);
            if (pcVar15 == NULL) {
                *(iVar7 + 0x20) = 0;
                *(iVar7 + 0x1c) = 0;
            }
            else {
                uVar34 = *pcVar15;
                *(iVar7 + 0x20) = *(pcVar15 + 4);
                *(iVar7 + 0x1c) = uVar34;
            }
            *(iVar7 + 0x24) = piVar19;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar8 = auVar41._8_8_;
    piVar20 = auVar41._0_8_;
    *extraout_x18_01 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    pcStack_1a8 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar6 = piVar18 & 0xffffffff;
    pcStack_1c0 = NULL;
    uStack_1c4 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar20[0xf];
    piVar21 = piVar18;
    pppuStack_1b0 = &ppuStack_130;
    puStack_1a0 = puVar32;
    uStack_198 = uVar37;
    pcStack_180 = pcVar15;
    uStack_178 = piVar19 & 0xffffffff;
    auStack_190 = auVar40;
    if ((piVar20[0x10] != 0) || (pcVar14 = pcVar16, *piVar17 != 0)) {
        pcVar14 = &uStack_1c4;
        iVar7 = perf_trace_buf_alloc(0x2c,&pcStack_1c0);
        uVar38 = _strlen;
        if (iVar7 != 0) {
            *(pcStack_1c0 + 0xe8) = &pppuStack_1b0;
            *(pcStack_1c0 + 0xf8) = auStack_1d0;
            *(pcStack_1c0 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809bb40;
            *(pcStack_1c0 + 0x108) = 5;
            uVar37 = puVar8[1];
            *(iVar7 + 8) = *puVar8;
            *(iVar7 + 0x10) = uVar37;
            *(iVar7 + 0x18) = *(puVar8 + 0x1a);
            if (pcVar16 == NULL) {
                *(iVar7 + 0x20) = 0;
                *(iVar7 + 0x1c) = 0;
            }
            else {
                uVar34 = *pcVar16;
                *(iVar7 + 0x20) = *(pcVar16 + 4);
                *(iVar7 + 0x1c) = uVar34;
            }
            pcVar14 = uStack_1c4;
            pcVar24 = 0x1;
            param_8 = 0;
            *(iVar7 + 0x24) = piVar18;
            piVar21 = piVar20;
            param_6 = pcStack_1c0;
            piVar19 = piVar17;
            perf_trace_run_bpf_submit(iVar7,0x2c);
            param_7 = SUB84(piVar19,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_02 = 0x809bc94;
    uStack_208 = 0x809bc94;
    pcStack_200 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    iVar7 = sp_el0;
    iStack_218 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar34 = uVar37;
    piVar19 = piVar21;
    pcVar15 = pcVar24;
    ppppuStack_210 = &pppuStack_1b0;
    pcStack_1f0 = pcVar16;
    piStack_1e8 = piVar17;
    uStack_1e0 = uVar6;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar19 = NULL;
            puStack_1f8 = puVar8;
            piStack_1d8 = piVar20;
            event_triggers_call(iVar10,0);
            auVar41._8_8_ = puStack_1f8;
            auVar41._0_8_ = piStack_1d8;
        }
        puStack_1f8 = auVar41._8_8_;
        piStack_1d8 = auVar41._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar10);
                auVar41._8_8_ = puStack_1f8;
                auVar41._0_8_ = piStack_1d8;
                if ((uVar6 & 1) != 0) goto code_r0x0809bd78;
            }
            goto code_r0x0809bd20;
        }
    }
    else {
code_r0x0809bd20:
        puStack_1f8 = auVar41._8_8_;
        piStack_1d8 = auVar41._0_8_;
        pcVar16 = 0x28;
        iVar7 = trace_event_buffer_reserve(&uStack_248,iVar10);
        auVar41._8_8_ = puStack_1f8;
        auVar41._0_8_ = piStack_1d8;
        if (iVar7 != 0) {
            uVar1 = puVar32[1];
            *(iVar7 + 8) = *puVar32;
            *(iVar7 + 0x10) = uVar1;
            *(iVar7 + 0x18) = *(puVar32 + 0x1a);
            *(iVar7 + 0x1c) = pcVar14;
            if (piVar21 == NULL) {
                *(iVar7 + 0x24) = 0;
                *(iVar7 + 0x20) = 0;
            }
            else {
                iVar10 = *piVar21;
                *(iVar7 + 0x24) = *(piVar21 + 4);
                *(iVar7 + 0x20) = iVar10;
            }
            *(iVar7 + 0x26) = pcVar24 & 1;
            trace_event_buffer_commit(&uStack_248);
            auVar41._8_8_ = puStack_1f8;
            auVar41._0_8_ = piStack_1d8;
        }
    }
code_r0x0809bd78:
    puStack_1f8 = auVar41._8_8_;
    piStack_1d8 = auVar41._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar32 = auVar41._8_8_;
    piVar18 = auVar41._0_8_;
    *extraout_x18_03 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    pcStack_298 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    pcStack_290 = sym.perf_trace_cfg80211_probe_status;
    iVar7 = sp_el0;
    iStack_2a8 = *(iVar7 + 0x5e0);
    uVar38 = pcVar15 & 0xffffffff;
    uVar6 = pcVar16 & 0xffffffff;
    pcStack_2b0 = NULL;
    uStack_2b4 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar18[0xf];
    piVar20 = piVar19;
    pcVar25 = pcVar15;
    ppppuStack_2a0 = &ppppuStack_210;
    uStack_280 = uVar37;
    uStack_268 = pcVar24 & 0xffffffff;
    uStack_260 = pcVar14 & 0xffffffff;
    piStack_258 = piVar21;
    auStack_278 = auVar40;
    if ((piVar18[0x10] != 0) || (pcVar24 = pcVar16, *piVar17 != 0)) {
        pcVar24 = &uStack_2b4;
        iVar7 = perf_trace_buf_alloc(0x2c,&pcStack_2b0);
        uVar36 = _strlen;
        if (iVar7 != 0) {
            *(pcStack_2b0 + 0xe8) = &ppppuStack_2a0;
            *(pcStack_2b0 + 0xf8) = auStack_2c0;
            *(pcStack_2b0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809bdb0;
            *(pcStack_2b0 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar7 + 8) = *puVar32;
            *(iVar7 + 0x10) = uVar37;
            *(iVar7 + 0x18) = *(puVar32 + 0x1a);
            *(iVar7 + 0x1c) = pcVar16;
            if (piVar19 == NULL) {
                *(iVar7 + 0x24) = 0;
                *(iVar7 + 0x20) = 0;
            }
            else {
                iVar10 = *piVar19;
                *(iVar7 + 0x24) = *(piVar19 + 4);
                *(iVar7 + 0x20) = iVar10;
            }
            pcVar24 = uStack_2b4;
            pcVar25 = 0x1;
            param_8 = 0;
            *(iVar7 + 0x26) = pcVar15 & 1;
            piVar20 = piVar18;
            param_6 = pcStack_2b0;
            piVar21 = piVar17;
            perf_trace_run_bpf_submit(iVar7,0x2c);
            param_7 = SUB84(piVar21,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_04 = 0x809bf14;
    uStack_2f8 = 0x809bf14;
    iVar7 = sp_el0;
    iStack_308 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar34 = uVar37;
    pcVar16 = pcVar25;
    pcVar14 = param_6;
    ppppuStack_300 = &ppppuStack_2a0;
    uStack_2f0 = uVar38;
    uStack_2e0 = uVar6;
    piStack_2d8 = piVar19;
    piStack_2d0 = piVar17;
    piStack_2c8 = piVar18;
    iStack_360 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar24 = NULL;
            piVar20 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar10);
                if ((uVar6 & 1) != 0) goto code_r0x0809bfd8;
            }
            goto code_r0x0809bf9c;
        }
    }
    else {
code_r0x0809bf9c:
        pcVar24 = 0x30;
        iVar7 = trace_event_buffer_reserve(&uStack_338,iVar10);
        if (iVar7 != 0) {
            iVar10 = *(iVar11 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar11 + 0x188);
            }
            pcVar24 = 0x20;
            strlcpy(iVar7 + 8,iVar10);
            *(iVar7 + 0x28) = pcVar25;
            *(iVar7 + 0x2c) = param_6;
            trace_event_buffer_commit(&uStack_338);
            iStack_360 = iVar7;
        }
    }
code_r0x0809bfd8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_308) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    piVar21 = auVar40._0_8_;
    *extraout_x18_05 = sym.perf_trace_cfg80211_report_obss_beacon;
    pcStack_388 = sym.perf_trace_cfg80211_report_obss_beacon;
    pcStack_380 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    iVar7 = sp_el0;
    iStack_398 = *(iVar7 + 0x5e0);
    uVar6 = pcVar14 & 0xffffffff;
    uVar38 = pcVar16 & 0xffffffff;
    pcStack_3a0 = NULL;
    uStack_3a4 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar21[0xf];
    pcVar26 = pcVar16;
    pcVar15 = pcVar14;
    ppppuStack_390 = &ppppuStack_300;
    puStack_370 = puVar32;
    uStack_368 = uVar37;
    iStack_358 = iVar11;
    uStack_350 = pcVar25 & 0xffffffff;
    uStack_348 = param_6 & 0xffffffff;
    if ((piVar21[0x10] != 0) || (*piVar17 != 0)) {
        pcVar24 = &uStack_3a4;
        puVar8 = perf_trace_buf_alloc(0x34,&pcStack_3a0);
        uVar36 = _strlen;
        if (puVar8 != NULL) {
            *(pcStack_3a0 + 0xe8) = &ppppuStack_390;
            *(pcStack_3a0 + 0xf8) = auStack_3b0;
            *(pcStack_3a0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809c010;
            *(pcStack_3a0 + 0x108) = 5;
            iVar7 = *(iVar10 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar10 + 0x188);
            }
            strlcpy(puVar8 + 1,iVar7,0x20);
            pcVar24 = uStack_3a4;
            pcVar26 = 0x1;
            param_8 = 0;
            *(puVar8 + 5) = pcVar16;
            *(puVar8 + 0x2c) = pcVar14;
            piVar20 = piVar21;
            pcVar15 = pcStack_3a0;
            piVar19 = piVar17;
            perf_trace_run_bpf_submit(puVar8,0x34);
            param_7 = SUB84(piVar19,0);
            puVar32 = puVar8;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_398) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar11 = auVar41._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_06 = 0x809c158;
    uStack_3f8 = 0x809c158;
    pcStack_3f0 = sym.perf_trace_cfg80211_report_obss_beacon;
    iVar7 = sp_el0;
    iStack_408 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar11 + 0x48);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uVar34 = iVar7;
    piVar19 = piVar20;
    pcVar16 = pcVar26;
    pcVar14 = pcVar15;
    ppppuStack_400 = &ppppuStack_390;
    puStack_3e0 = puVar32;
    piStack_3d0 = piVar17;
    uStack_3c8 = uVar38;
    uStack_3c0 = uVar6;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar25 = pcVar24;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar25 = NULL;
            piVar19 = NULL;
            iStack_3d8 = iVar10;
            piStack_3b8 = piVar21;
            event_triggers_call(iVar11,0);
            auVar40._8_8_ = iStack_3d8;
            auVar40._0_8_ = piStack_3b8;
        }
        iStack_3d8 = auVar40._8_8_;
        piStack_3b8 = auVar40._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar11);
                auVar40._8_8_ = iStack_3d8;
                auVar40._0_8_ = piStack_3b8;
                if ((uVar6 & 1) != 0) goto code_r0x0809c260;
            }
            goto code_r0x0809c1ec;
        }
    }
    else {
code_r0x0809c1ec:
        iStack_3d8 = auVar40._8_8_;
        piStack_3b8 = auVar40._0_8_;
        pcVar25 = 0x4c;
        iVar10 = trace_event_buffer_reserve(&uStack_438,iVar11);
        auVar40._8_8_ = iStack_3d8;
        auVar40._0_8_ = piStack_3b8;
        if (iVar10 != 0) {
            iVar11 = *(auVar41._8_8_ + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(auVar41._8_8_ + 0x188);
            }
            pcVar25 = 0x20;
            strlcpy(iVar10 + 8,iVar11);
            uVar37 = *(pcVar24 + 8);
            *(iVar10 + 0x28) = *pcVar24;
            *(iVar10 + 0x30) = uVar37;
            *(iVar10 + 0x38) = *(pcVar24 + 0xd0);
            if (piVar20 == NULL) {
                *(iVar10 + 0x40) = 0;
                *(iVar10 + 0x3c) = 0;
            }
            else {
                iVar11 = *piVar20;
                *(iVar10 + 0x40) = *(piVar20 + 4);
                *(iVar10 + 0x3c) = iVar11;
            }
            *(iVar10 + 0x44) = pcVar26;
            *(iVar10 + 0x48) = pcVar15;
            trace_event_buffer_commit(&uStack_438);
            auVar40._8_8_ = iStack_3d8;
            auVar40._0_8_ = piStack_3b8;
        }
    }
code_r0x0809c260:
    iStack_3d8 = auVar40._8_8_;
    piStack_3b8 = auVar40._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_408) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar20 = auVar40._0_8_;
    *extraout_x18_07 = sym.perf_trace_cfg80211_tdls_oper_request;
    pcStack_498 = sym.perf_trace_cfg80211_tdls_oper_request;
    iVar10 = sp_el0;
    iStack_4a8 = *(iVar10 + 0x5e0);
    uVar6 = pcVar14 & 0xffffffff;
    uVar38 = pcVar16 & 0xffffffff;
    pcStack_4b0 = NULL;
    uStack_4b4 = 0;
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar20[0xf];
    piVar21 = piVar19;
    pcVar15 = pcVar16;
    pcVar24 = pcVar14;
    ppppuStack_4a0 = &ppppuStack_400;
    if ((piVar20[0x10] != 0) || (pcVar26 = pcVar25, *piVar17 != 0)) {
        pcVar26 = &uStack_4b4;
        iVar10 = perf_trace_buf_alloc(0x4c,&pcStack_4b0);
        uVar36 = _strlen;
        if (iVar10 != 0) {
            *(pcStack_4b0 + 0xe8) = &ppppuStack_4a0;
            *(pcStack_4b0 + 0xf8) = auStack_4c0;
            *(pcStack_4b0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809c29c;
            *(pcStack_4b0 + 0x108) = 5;
            iVar7 = *(iVar11 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar11 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar7,0x20);
            uVar37 = *(pcVar25 + 8);
            *(iVar10 + 0x28) = *pcVar25;
            *(iVar10 + 0x30) = uVar37;
            *(iVar10 + 0x38) = *(pcVar25 + 0xd0);
            if (piVar19 == NULL) {
                *(iVar10 + 0x40) = 0;
                *(iVar10 + 0x3c) = 0;
            }
            else {
                iVar7 = *piVar19;
                *(iVar10 + 0x40) = *(piVar19 + 4);
                *(iVar10 + 0x3c) = iVar7;
            }
            pcVar26 = uStack_4b4;
            pcVar15 = 0x1;
            param_8 = 0;
            *(iVar10 + 0x44) = pcVar16;
            *(iVar10 + 0x48) = pcVar14;
            piVar21 = piVar20;
            pcVar24 = pcStack_4b0;
            piVar18 = piVar17;
            perf_trace_run_bpf_submit(iVar10,0x4c);
            param_7 = SUB84(piVar18,0);
            iVar7 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._8_8_;
    iVar29 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_08 = 0x809c42c;
    uStack_4e8 = 0x809c42c;
    iVar10 = sp_el0;
    iStack_4f8 = *(iVar10 + 0x5e0);
    uVar36 = *(iVar29 + 0x48);
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uVar34 = uVar36;
    ppppuStack_4f0 = &ppppuStack_4a0;
    piStack_4e0 = piVar17;
    uStack_4d8 = uVar38;
    uStack_4d0 = uVar6;
    piStack_4c8 = piVar20;
    iStack_548 = iVar29;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar26;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar21 = NULL;
            event_triggers_call(iVar29,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar29);
                if ((uVar6 & 1) != 0) goto code_r0x0809c590;
            }
            goto code_r0x0809c4ac;
        }
    }
    else {
code_r0x0809c4ac:
        if (iVar12 == 0) {
            uVar36 = 0;
        }
        else {
            uVar36 = *(iVar12 + 0x20);
        }
        pcVar16 = uVar36 + 0x48;
        iVar10 = trace_event_buffer_reserve(&uStack_528,iVar29);
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar36 << 0x10 | 0x46;
            if (iVar12 != 0) {
                pcVar16 = *(iVar12 + 0x20);
                memcpy(iVar10 + 0x46,*(iVar12 + 0x18));
                uVar27 = *(iVar12 + 0x30);
                *(iVar10 + 0x14) = *(iVar12 + 0x34);
                *(iVar10 + 0x10) = uVar27;
                uVar27 = 0;
                if (*(iVar12 + 0x48) != 0) {
                    uVar27 = *(*(iVar12 + 0x48) + 0x28);
                }
                *(iVar10 + 0x28) = uVar27;
                iVar29 = *(iVar12 + 0x68);
                if (iVar29 != 0) {
                    if (iVar29 + 0x30 == NULL) {
                        *(iVar10 + 0x30) = 0;
                        *(iVar10 + 0x2c) = 0;
                    }
                    else {
                        uVar27 = *(iVar29 + 0x30);
                        *(iVar10 + 0x30) = *(iVar29 + 0x34);
                        *(iVar10 + 0x2c) = uVar27;
                    }
                }
                *(iVar10 + 0x32) = *(iVar12 + 0x89);
            }
            if (pcVar26 != NULL) {
                *(iVar10 + 0x33) = pcVar26[0xe];
                *(iVar10 + 0x38) = *pcVar26;
                if (pcVar26 + 8 == NULL) {
                    *(iVar10 + 0x44) = 0;
                    *(iVar10 + 0x40) = 0;
                }
                else {
                    uVar34 = *(pcVar26 + 8);
                    *(iVar10 + 0x44) = *(pcVar26 + 0xc);
                    *(iVar10 + 0x40) = uVar34;
                }
            }
            trace_event_buffer_commit(&uStack_528);
            iStack_548 = iVar10;
        }
    }
code_r0x0809c590:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_4f8) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar29 = auVar42._8_8_;
    piVar17 = auVar42._0_8_;
    *extraout_x18_09 = sym.perf_trace_cfg80211_scan_done;
    pcStack_578 = sym.perf_trace_cfg80211_scan_done;
    iVar10 = sp_el0;
    iStack_588 = *(iVar10 + 0x5e0);
    pcStack_590 = NULL;
    uStack_594 = 0;
    if (iVar29 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = *(iVar29 + 0x20);
    }
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + piVar17[0xf];
    ppppuStack_580 = &ppppuStack_4f0;
    iStack_570 = iVar11;
    iStack_568 = iVar7;
    pcStack_560 = pcVar25;
    piStack_558 = piVar19;
    uStack_550 = uVar36;
    iStack_540 = iVar12;
    pcStack_538 = pcVar26;
    if ((piVar17[0x10] != 0) || (pcVar14 = pcVar16, *piVar20 != 0)) {
        pcVar14 = &uStack_594;
        piVar19 = (uVar6 + 0x53U & 0xfffffff8) - 4;
        pcVar26 = perf_trace_buf_alloc(piVar19,&pcStack_590);
        uVar38 = _strlen;
        if (pcVar26 != NULL) {
            *(pcStack_590 + 0xe8) = &ppppuStack_580;
            *(pcStack_590 + 0xf8) = auStack_5a0;
            *(pcStack_590 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809c5c4;
            *(pcStack_590 + 0x108) = 5;
            *(pcVar26 + 0xc) = uVar6 << 0x10 | 0x46;
            if (iVar29 != 0) {
                memcpy(pcVar26 + 0x46,*(iVar29 + 0x18),*(iVar29 + 0x20));
                uVar34 = *(iVar29 + 0x30);
                *(pcVar26 + 0x14) = *(iVar29 + 0x34);
                *(pcVar26 + 0x10) = uVar34;
                uVar34 = 0;
                if (*(iVar29 + 0x48) != 0) {
                    uVar34 = *(*(iVar29 + 0x48) + 0x28);
                }
                *(pcVar26 + 0x28) = uVar34;
                iVar7 = *(iVar29 + 0x68);
                if (iVar7 != 0) {
                    if (iVar7 + 0x30 == NULL) {
                        *(pcVar26 + 0x30) = 0;
                        *(pcVar26 + 0x2c) = 0;
                    }
                    else {
                        uVar34 = *(iVar7 + 0x30);
                        *(pcVar26 + 0x30) = *(iVar7 + 0x34);
                        *(pcVar26 + 0x2c) = uVar34;
                    }
                }
                pcVar26[0x32] = *(iVar29 + 0x89);
            }
            if (pcVar16 != NULL) {
                pcVar26[0x33] = pcVar16[0xe];
                *(pcVar26 + 0x38) = *pcVar16;
                if (pcVar16 + 8 == NULL) {
                    *(pcVar26 + 0x44) = 0;
                    *(pcVar26 + 0x40) = 0;
                }
                else {
                    uVar34 = *(pcVar16 + 8);
                    *(pcVar26 + 0x44) = *(pcVar16 + 0xc);
                    *(pcVar26 + 0x40) = uVar34;
                }
            }
            pcVar14 = uStack_594;
            pcVar15 = 0x1;
            param_8 = 0;
            piVar21 = piVar17;
            pcVar24 = pcStack_590;
            piVar18 = piVar20;
            perf_trace_run_bpf_submit(pcVar26,piVar19);
            param_7 = SUB84(piVar18,0);
            pcVar25 = pcVar26;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_588) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_10 = 0x809c7b8;
    uStack_5c8 = 0x809c7b8;
    iVar7 = sp_el0;
    iStack_5d8 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uVar34 = uVar37;
    ppppuStack_5d0 = &ppppuStack_580;
    pcStack_5b8 = pcVar16;
    piStack_5b0 = piVar20;
    iStack_628 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar21 = NULL;
            iStack_5c0 = iVar29;
            piStack_5a8 = piVar17;
            event_triggers_call(iVar10,0);
            auVar42._8_8_ = iStack_5c0;
            auVar42._0_8_ = piStack_5a8;
        }
        iStack_5c0 = auVar42._8_8_;
        piStack_5a8 = auVar42._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                auVar42._8_8_ = iStack_5c0;
                auVar42._0_8_ = piStack_5a8;
                if ((uVar38 & 1) != 0) goto code_r0x0809c874;
            }
            goto code_r0x0809c838;
        }
    }
    else {
code_r0x0809c838:
        iStack_5c0 = auVar42._8_8_;
        piStack_5a8 = auVar42._0_8_;
        pcVar16 = 0x30;
        iVar7 = trace_event_buffer_reserve(&uStack_608,iVar10);
        auVar42._8_8_ = iStack_5c0;
        auVar42._0_8_ = piStack_5a8;
        if (iVar7 != 0) {
            iVar10 = *(iVar11 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar11 + 0x188);
            }
            pcVar16 = 0x20;
            strlcpy(iVar7 + 8,iVar10);
            *(iVar7 + 0x28) = pcVar14;
            trace_event_buffer_commit(&uStack_608);
            auVar42._8_8_ = iStack_5c0;
            auVar42._0_8_ = piStack_5a8;
            iStack_628 = iVar7;
        }
    }
code_r0x0809c874:
    iStack_5c0 = auVar42._8_8_;
    piStack_5a8 = auVar42._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar43 = __stack_chk_fail();
    iVar10 = auVar43._8_8_;
    piVar20 = auVar43._0_8_;
    *extraout_x18_11 = sym.perf_trace_wiphy_id_evt;
    pcStack_648 = sym.perf_trace_wiphy_id_evt;
    iVar7 = sp_el0;
    iStack_658 = *(iVar7 + 0x5e0);
    pcStack_660 = NULL;
    uStack_664 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar20[0xf];
    ppppuStack_650 = &ppppuStack_5d0;
    pcStack_640 = pcVar25;
    piStack_638 = piVar19;
    uStack_630 = uVar37;
    iStack_620 = iVar11;
    pcStack_618 = pcVar14;
    if ((piVar20[0x10] != 0) || (pcVar14 = pcVar16, *piVar17 != 0)) {
        pcVar14 = &uStack_664;
        piVar18 = perf_trace_buf_alloc(0x34,&pcStack_660);
        uVar38 = _strlen;
        if (piVar18 != NULL) {
            *(pcStack_660 + 0xe8) = &ppppuStack_650;
            *(pcStack_660 + 0xf8) = auStack_670;
            *(pcStack_660 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809c8a8;
            *(pcStack_660 + 0x108) = 5;
            iVar7 = *(iVar10 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar10 + 0x188);
            }
            strlcpy(piVar18 + 1,iVar7,0x20);
            pcVar14 = uStack_664;
            pcVar15 = 0x1;
            param_8 = 0;
            piVar18[5] = pcVar16;
            piVar21 = piVar20;
            pcVar24 = pcStack_660;
            piVar19 = piVar17;
            perf_trace_run_bpf_submit(piVar18,0x34);
            param_7 = SUB84(piVar19,0);
            piVar19 = piVar18;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_658) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar38 = auVar40._8_8_;
    iVar11 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_12 = 0x809c9e4;
    uStack_6c8 = 0x809c9e4;
    pcStack_6c0 = sym.perf_trace_cfg80211_tdls_oper_request;
    pcStack_6a8 = sym.perf_trace_cfg80211_scan_done;
    pcStack_6a0 = sym.perf_trace_wiphy_id_evt;
    iVar7 = sp_el0;
    iStack_6d8 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar11 + 0x48);
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    uVar34 = iVar7;
    piVar18 = piVar21;
    pcVar25 = pcVar15;
    pcVar26 = pcVar24;
    uVar27 = param_7;
    uVar28 = param_8;
    ppppuStack_6d0 = &ppppuStack_650;
    uStack_6b0 = uVar6;
    piStack_698 = piVar19;
    piStack_688 = piVar17;
    pcStack_680 = pcVar16;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar18 = NULL;
            iStack_690 = iVar10;
            piStack_678 = piVar20;
            event_triggers_call(iVar11,0);
            auVar43._8_8_ = iStack_690;
            auVar43._0_8_ = piStack_678;
        }
        iStack_690 = auVar43._8_8_;
        piStack_678 = auVar43._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar11);
                auVar43._8_8_ = iStack_690;
                auVar43._0_8_ = piStack_678;
                if ((uVar6 & 1) != 0) goto code_r0x0809cb30;
            }
            goto code_r0x0809ca84;
        }
    }
    else {
code_r0x0809ca84:
        iStack_690 = auVar43._8_8_;
        piStack_678 = auVar43._0_8_;
        pcVar16 = pcVar24 + 0x44;
        iVar10 = trace_event_buffer_reserve(&uStack_708,iVar11);
        auVar43._8_8_ = iStack_690;
        auVar43._0_8_ = piStack_678;
        if (iVar10 != 0) {
            *(iVar10 + 0x38) = pcVar24 << 0x10 | 0x44;
            iVar11 = *(uVar38 + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(uVar38 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar11,0x20);
            if (pcVar14 == NULL) {
                uVar31 = 0;
                *(iVar10 + 0x28) = 0;
            }
            else {
                *(iVar10 + 0x28) = *pcVar14;
                *(iVar10 + 0x2c) = *(pcVar14 + 4);
                uVar31 = *(pcVar14 + 8);
            }
            *(iVar10 + 0x30) = uVar31;
            if (piVar21 == NULL) {
                *(iVar10 + 0x36) = 0;
                *(iVar10 + 0x32) = 0;
            }
            else {
                iVar11 = *piVar21;
                *(iVar10 + 0x36) = *(piVar21 + 4);
                *(iVar10 + 0x32) = iVar11;
            }
            memcpy(iVar10 + *(iVar10 + 0x38),pcVar15);
            *(iVar10 + 0x3c) = param_7;
            *(iVar10 + 0x40) = param_8;
            trace_event_buffer_commit(&uStack_708);
            auVar43._8_8_ = iStack_690;
            auVar43._0_8_ = piStack_678;
            pcVar16 = pcVar24;
        }
    }
code_r0x0809cb30:
    iStack_690 = auVar43._8_8_;
    piStack_678 = auVar43._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_6d8) {
        return;
    }
    auVar44 = __stack_chk_fail();
    iVar11 = auVar44._8_8_;
    piVar19 = auVar44._0_8_;
    *extraout_x18_13 = sym.perf_trace_cfg80211_get_bss;
    pcStack_768 = sym.perf_trace_cfg80211_get_bss;
    iVar10 = sp_el0;
    iStack_778 = *(iVar10 + 0x5e0);
    iStack_780 = 0;
    uStack_784 = 0;
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar19[0xf];
    piVar21 = piVar18;
    pcVar14 = pcVar25;
    uStack_78c = uVar27;
    uStack_788 = uVar28;
    ppppuStack_770 = &ppppuStack_6d0;
    if ((piVar19[0x10] != 0) || (pcVar24 = pcVar16, *piVar17 != 0)) {
        pcVar24 = &uStack_784;
        uVar38 = (pcVar26 + 0x4fU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(uVar38,&iStack_780);
        uVar6 = _strlen;
        if (iVar10 != 0) {
            *(iStack_780 + 0xe8) = &ppppuStack_770;
            *(iStack_780 + 0xf8) = auStack_790;
            *(iStack_780 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809cb70;
            *(iStack_780 + 0x108) = 5;
            *(iVar10 + 0x38) = pcVar26 << 0x10 | 0x44;
            iVar7 = *(iVar11 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar11 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar7,0x20);
            if (pcVar16 == NULL) {
                uVar31 = 0;
                *(iVar10 + 0x28) = 0;
            }
            else {
                *(iVar10 + 0x28) = *pcVar16;
                *(iVar10 + 0x2c) = *(pcVar16 + 4);
                uVar31 = *(pcVar16 + 8);
            }
            *(iVar10 + 0x30) = uVar31;
            if (piVar18 == NULL) {
                *(iVar10 + 0x36) = 0;
                *(iVar10 + 0x32) = 0;
            }
            else {
                iVar7 = *piVar18;
                *(iVar10 + 0x36) = *(piVar18 + 4);
                *(iVar10 + 0x32) = iVar7;
            }
            memcpy(iVar10 + *(iVar10 + 0x38),pcVar25,pcVar26);
            pcVar24 = uStack_784;
            pcVar14 = 0x1;
            *(iVar10 + 0x3c) = uStack_78c;
            *(iVar10 + 0x40) = uStack_788;
            piVar21 = piVar19;
            perf_trace_run_bpf_submit(iVar10,uVar38);
            iVar7 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_778) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar29 = auVar40._8_8_;
    uVar6 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_14 = 0x809cd48;
    uStack_7c8 = 0x809cd48;
    pcStack_7a8 = sym.perf_trace_cfg80211_get_bss;
    iVar10 = sp_el0;
    iStack_7d8 = *(iVar10 + 0x5e0);
    uVar37 = *(uVar6 + 0x48);
    uStack_7e8 = 0;
    uStack_7e0 = 0;
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_808 = 0;
    uStack_800 = 0;
    uVar34 = uVar37;
    piVar20 = piVar21;
    pcVar15 = pcVar14;
    ppppuStack_7d0 = &ppppuStack_770;
    piStack_7c0 = piVar17;
    pcStack_7b8 = pcVar25;
    pcStack_7b0 = pcVar26;
    uStack_830 = uVar6;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar25 = pcVar24;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar25 = NULL;
            piVar20 = NULL;
            iStack_7a0 = iVar11;
            piStack_798 = piVar19;
            event_triggers_call(uVar6,0);
            auVar44._8_8_ = iStack_7a0;
            auVar44._0_8_ = piStack_798;
        }
        iStack_7a0 = auVar44._8_8_;
        piStack_798 = auVar44._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(uVar6);
                auVar44._8_8_ = iStack_7a0;
                auVar44._0_8_ = piStack_798;
                if ((uVar36 & 1) != 0) goto code_r0x0809ceac;
            }
            goto code_r0x0809cdd4;
        }
    }
    else {
code_r0x0809cdd4:
        iStack_7a0 = auVar44._8_8_;
        piStack_798 = auVar44._0_8_;
        pcVar25 = pcVar14 + 0x58;
        uVar6 = trace_event_buffer_reserve(&uStack_808,uVar6);
        auVar44._8_8_ = iStack_7a0;
        auVar44._0_8_ = piStack_798;
        if (uVar6 != 0) {
            *(uVar6 + 0x38) = pcVar14 << 0x10 | 0x56;
            iVar10 = *(iVar29 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar29 + 0x188);
            }
            pcVar25 = 0x20;
            strlcpy(uVar6 + 8,iVar10);
            if (*pcVar24 == NULL) {
                *(uVar6 + 0x28) = 0;
                uVar31 = 0;
            }
            else {
                *(uVar6 + 0x28) = **pcVar24;
                *(uVar6 + 0x2c) = *(*pcVar24 + 4);
                uVar31 = *(*pcVar24 + 8);
            }
            *(uVar6 + 0x30) = uVar31;
            *(uVar6 + 0x34) = *(pcVar24 + 8);
            if (piVar21 != NULL) {
                pcVar25 = pcVar14;
                memcpy(uVar6 + *(uVar6 + 0x38),piVar21);
            }
            *(uVar6 + 0x3c) = *(pcVar24 + 0xc);
            *(uVar6 + 0x40) = *(pcVar24 + 0x10);
            *(uVar6 + 0x48) = *(pcVar24 + 0x18);
            if (pcVar24 + 0x20 == NULL) {
                *(uVar6 + 0x54) = 0;
                *(uVar6 + 0x50) = 0;
            }
            else {
                uVar34 = *(pcVar24 + 0x20);
                *(uVar6 + 0x54) = *(pcVar24 + 0x24);
                *(uVar6 + 0x50) = uVar34;
            }
            trace_event_buffer_commit(&uStack_808);
            auVar44._8_8_ = iStack_7a0;
            auVar44._0_8_ = piStack_798;
            uStack_830 = uVar6;
        }
    }
code_r0x0809ceac:
    iStack_7a0 = auVar44._8_8_;
    piStack_798 = auVar44._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_7d8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar22 = auVar40._0_8_;
    *extraout_x18_15 = sym.perf_trace_cfg80211_inform_bss_frame;
    pcStack_868 = sym.perf_trace_cfg80211_inform_bss_frame;
    iVar10 = sp_el0;
    iStack_878 = *(iVar10 + 0x5e0);
    iStack_880 = 0;
    uStack_884 = 0;
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar22[0xf];
    piVar19 = piVar20;
    pcVar26 = pcVar15;
    ppppuStack_870 = &ppppuStack_7d0;
    iStack_860 = iVar7;
    uStack_850 = uVar38;
    piStack_848 = piVar18;
    uStack_840 = uVar37;
    iStack_838 = iVar29;
    piStack_828 = piVar21;
    pcStack_820 = pcVar14;
    pcStack_818 = pcVar24;
    if ((piVar22[0x10] != 0) || (pcVar14 = pcVar25, uVar6 = uStack_830, *piVar17 != 0)) {
        pcVar14 = &uStack_884;
        uVar6 = (pcVar15 + 99U & 0xfffffff8) - 4;
        piVar21 = perf_trace_buf_alloc(uVar6,&iStack_880);
        uVar38 = _strlen;
        if (piVar21 != NULL) {
            *(iStack_880 + 0xe8) = &ppppuStack_870;
            *(iStack_880 + 0xf8) = auStack_890;
            *(iStack_880 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809cee4;
            *(iStack_880 + 0x108) = 5;
            *(piVar21 + 7) = pcVar15 << 0x10 | 0x56;
            iVar7 = *(iVar11 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar11 + 0x188);
            }
            strlcpy(piVar21 + 1,iVar7,0x20);
            if (*pcVar25 == NULL) {
                piVar21[5] = 0;
                uVar31 = 0;
            }
            else {
                *(piVar21 + 5) = **pcVar25;
                *(piVar21 + 0x2c) = *(*pcVar25 + 4);
                uVar31 = *(*pcVar25 + 8);
            }
            *(piVar21 + 6) = uVar31;
            *(piVar21 + 0x34) = *(pcVar25 + 8);
            if (piVar20 != NULL) {
                memcpy(piVar21 + *(piVar21 + 7),piVar20,pcVar15);
            }
            *(piVar21 + 0x3c) = *(pcVar25 + 0xc);
            piVar21[8] = *(pcVar25 + 0x10);
            piVar21[9] = *(pcVar25 + 0x18);
            if (pcVar25 + 0x20 == NULL) {
                *(piVar21 + 0x54) = 0;
                *(piVar21 + 10) = 0;
            }
            else {
                uVar34 = *(pcVar25 + 0x20);
                *(piVar21 + 0x54) = *(pcVar25 + 0x24);
                *(piVar21 + 10) = uVar34;
            }
            pcVar14 = uStack_884;
            pcVar26 = 0x1;
            piVar19 = piVar22;
            perf_trace_run_bpf_submit(piVar21,uVar6);
            piVar18 = piVar21;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_878) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar21 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_16 = 0x809d0dc;
    uStack_8b8 = 0x809d0dc;
    iVar7 = sp_el0;
    iStack_8c8 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8e8 = 0;
    uStack_8e0 = 0;
    uStack_8f8 = 0;
    uStack_8f0 = 0;
    uVar34 = uVar37;
    ppppuStack_8c0 = &ppppuStack_870;
    pcStack_8b0 = pcVar25;
    piStack_8a0 = piVar17;
    piStack_898 = piVar22;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d1d0;
            }
            goto code_r0x0809d158;
        }
    }
    else {
code_r0x0809d158:
        pcVar14 = 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_8f8,iVar10);
        if (iVar7 != 0) {
            if (piVar21 + 10 == NULL) {
                *(iVar7 + 0xc) = 0;
                *(iVar7 + 8) = 0;
                puVar30 = *piVar21;
                if (puVar30 != NULL) goto code_r0x0809d190;
code_r0x0809d1c0:
                uVar31 = 0;
                *(iVar7 + 0x10) = 0;
            }
            else {
                iVar10 = piVar21[10];
                *(iVar7 + 0xc) = *(piVar21 + 0x54);
                *(iVar7 + 8) = iVar10;
                puVar30 = *piVar21;
                if (puVar30 == NULL) goto code_r0x0809d1c0;
code_r0x0809d190:
                *(iVar7 + 0x10) = *puVar30;
                *(iVar7 + 0x14) = *(*piVar21 + 4);
                uVar31 = *(*piVar21 + 8);
            }
            *(iVar7 + 0x18) = uVar31;
            trace_event_buffer_commit(&uStack_8f8);
        }
    }
code_r0x0809d1d0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_8c8) {
        return;
    }
    auVar45 = __stack_chk_fail();
    piVar22 = auVar45._8_8_;
    piVar21 = auVar45._0_8_;
    *extraout_x18_17 = sym.perf_trace_cfg80211_bss_evt;
    pcStack_928 = sym.perf_trace_cfg80211_bss_evt;
    iVar7 = sp_el0;
    iStack_938 = *(iVar7 + 0x5e0);
    iStack_940 = 0;
    uStack_944 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar21[0xf];
    ppppuStack_930 = &ppppuStack_8c0;
    uStack_920 = uVar6;
    uStack_918 = uVar37;
    auStack_910 = auVar40;
    if ((piVar21[0x10] != 0) || (*piVar17 != 0)) {
        pcVar14 = &uStack_944;
        iVar7 = perf_trace_buf_alloc(0x1c,&iStack_940);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_940 + 0xe8) = &ppppuStack_930;
            *(iStack_940 + 0x108) = 5;
            *(iStack_940 + 0xf8) = auStack_950;
            *(iStack_940 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809d204;
            if (piVar22 + 10 == NULL) {
                *(iVar7 + 0xc) = 0;
                *(iVar7 + 8) = 0;
                puVar30 = *piVar22;
                if (puVar30 != NULL) goto code_r0x0809d2e0;
code_r0x0809d310:
                uVar31 = 0;
                *(iVar7 + 0x10) = 0;
            }
            else {
                iVar10 = piVar22[10];
                *(iVar7 + 0xc) = *(piVar22 + 0x54);
                *(iVar7 + 8) = iVar10;
                puVar30 = *piVar22;
                if (puVar30 == NULL) goto code_r0x0809d310;
code_r0x0809d2e0:
                *(iVar7 + 0x10) = *puVar30;
                *(iVar7 + 0x14) = *(*piVar22 + 4);
                uVar31 = *(*piVar22 + 8);
            }
            pcVar14 = uStack_944;
            pcVar26 = 0x1;
            *(iVar7 + 0x18) = uVar31;
            piVar19 = piVar21;
            perf_trace_run_bpf_submit(iVar7,0x1c);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_938) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_18 = 0x809d36c;
    uStack_978 = 0x809d36c;
    iVar7 = sp_el0;
    uVar6 = auVar40._8_8_ & 0xffffffff;
    iStack_988 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_998 = 0;
    uStack_990 = 0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    uStack_9b8 = 0;
    uStack_9b0 = 0;
    uVar34 = uVar37;
    ppppuStack_980 = &ppppuStack_930;
    piStack_960 = piVar17;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            piStack_970 = piVar22;
            piStack_958 = piVar21;
            event_triggers_call(iVar10,0);
            auVar45._8_8_ = piStack_970;
            auVar45._0_8_ = piStack_958;
        }
        piStack_970 = auVar45._8_8_;
        piStack_958 = auVar45._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                auVar45._8_8_ = piStack_970;
                auVar45._0_8_ = piStack_958;
                if ((uVar38 & 1) != 0) goto code_r0x0809d408;
            }
            goto code_r0x0809d3e8;
        }
    }
    else {
code_r0x0809d3e8:
        piStack_970 = auVar45._8_8_;
        piStack_958 = auVar45._0_8_;
        pcVar14 = 0xc;
        iVar7 = trace_event_buffer_reserve(&uStack_9b8,iVar10);
        auVar45._8_8_ = piStack_970;
        auVar45._0_8_ = piStack_958;
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar40._8_4_;
            trace_event_buffer_commit(&uStack_9b8);
            auVar45._8_8_ = piStack_970;
            auVar45._0_8_ = piStack_958;
        }
    }
code_r0x0809d408:
    piStack_970 = auVar45._8_8_;
    piStack_958 = auVar45._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_988) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar21 = auVar40._0_8_;
    *extraout_x18_19 = sym.perf_trace_cfg80211_return_uint;
    pcStack_9e8 = sym.perf_trace_cfg80211_return_uint;
    pcStack_9e0 = sym.perf_trace_cfg80211_bss_evt;
    iVar7 = sp_el0;
    iStack_9f8 = *(iVar7 + 0x5e0);
    uVar38 = auVar40._8_8_ & 0xffffffff;
    iStack_a00 = 0;
    uStack_a04 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar21[0xf];
    ppppuStack_9f0 = &ppppuStack_980;
    uStack_9d8 = uVar37;
    iStack_9d0 = iVar10;
    uStack_9c8 = uVar6;
    if ((piVar21[0x10] != 0) || (*piVar17 != 0)) {
        pcVar14 = &uStack_a04;
        iVar7 = perf_trace_buf_alloc(0xc,&iStack_a00);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_a00 + 0xe8) = &ppppuStack_9f0;
            pcVar14 = uStack_a04;
            pcVar26 = 0x1;
            *(iStack_a00 + 0xf8) = auStack_a10;
            *(iStack_a00 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809d43c;
            *(iStack_a00 + 0x108) = 5;
            *(iVar7 + 8) = auVar40._8_4_;
            piVar19 = piVar21;
            perf_trace_run_bpf_submit(iVar7,0xc);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_9f8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_20 = 0x809d54c;
    uStack_a38 = 0x809d54c;
    iVar7 = sp_el0;
    uVar6 = auVar40._8_8_ & 0xffffffff;
    iStack_a48 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_a58 = 0;
    uStack_a50 = 0;
    uStack_a68 = 0;
    uStack_a60 = 0;
    uStack_a78 = 0;
    uStack_a70 = 0;
    uVar34 = uVar37;
    ppppuStack_a40 = &ppppuStack_9f0;
    piStack_a30 = piVar17;
    uStack_a20 = uVar38;
    piStack_a18 = piVar21;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d5e8;
            }
            goto code_r0x0809d5c8;
        }
    }
    else {
code_r0x0809d5c8:
        pcVar14 = 0xc;
        iVar7 = trace_event_buffer_reserve(&uStack_a78,iVar10);
        if (iVar7 != 0) {
            *(iVar7 + 8) = auVar40._8_4_;
            trace_event_buffer_commit(&uStack_a78);
        }
    }
code_r0x0809d5e8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a48) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar21 = auVar40._0_8_;
    *extraout_x18_21 = sym.perf_trace_cfg80211_return_u32;
    pcStack_aa8 = sym.perf_trace_cfg80211_return_u32;
    pcStack_aa0 = sym.perf_trace_cfg80211_return_uint;
    iVar7 = sp_el0;
    iStack_ab8 = *(iVar7 + 0x5e0);
    uVar38 = auVar40._8_8_ & 0xffffffff;
    iStack_ac0 = 0;
    uStack_ac4 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar21[0xf];
    ppppuStack_ab0 = &ppppuStack_a40;
    uStack_a98 = uVar37;
    iStack_a90 = iVar10;
    uStack_a88 = uVar6;
    if ((piVar21[0x10] != 0) || (*piVar17 != 0)) {
        pcVar14 = &uStack_ac4;
        iVar7 = perf_trace_buf_alloc(0xc,&iStack_ac0);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_ac0 + 0xe8) = &ppppuStack_ab0;
            pcVar14 = uStack_ac4;
            pcVar26 = 0x1;
            *(iStack_ac0 + 0xf8) = auStack_ad0;
            *(iStack_ac0 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809d61c;
            *(iStack_ac0 + 0x108) = 5;
            *(iVar7 + 8) = auVar40._8_4_;
            piVar19 = piVar21;
            perf_trace_run_bpf_submit(iVar7,0xc);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_ab8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar6 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_22 = 0x809d72c;
    uStack_b08 = 0x809d72c;
    pcStack_af0 = sym.perf_trace_cfg80211_return_u32;
    iVar7 = sp_el0;
    iStack_b18 = *(iVar7 + 0x5e0);
    uVar36 = *(iVar10 + 0x48);
    uStack_b28 = 0;
    uStack_b20 = 0;
    uStack_b38 = 0;
    uStack_b30 = 0;
    uStack_b48 = 0;
    uStack_b40 = 0;
    uVar34 = uVar36;
    piVar22 = piVar19;
    ppppuStack_b10 = &ppppuStack_ab0;
    pcStack_b00 = pcVar15;
    piStack_ae8 = piVar17;
    uStack_ae0 = uVar38;
    piStack_ad8 = piVar21;
    iStack_b68 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar24 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar24 = NULL;
            piVar22 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d8a0;
            }
            goto code_r0x0809d7b4;
        }
    }
    else {
code_r0x0809d7b4:
        if (piVar19 == NULL) {
            uVar36 = 0;
        }
        else {
            uVar36 = *(piVar19 + 2);
        }
        pcVar24 = uVar36 + 0x40;
        iVar7 = trace_event_buffer_reserve(&uStack_b48,iVar10);
        if (iVar7 != 0) {
            *(iVar7 + 0x3c) = uVar36 << 0x10 | 0x40;
            iVar10 = *(uVar6 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(uVar6 + 0x188);
            }
            pcVar24 = 0x20;
            strlcpy(iVar7 + 8,iVar10);
            uVar34 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar34 = *(pcVar14 + 0x28);
            }
            *(iVar7 + 0x28) = uVar34;
            *(iVar7 + 0x2c) = piVar19 == NULL;
            if (piVar19 == NULL) {
                *(iVar7 + 0x34) = 0;
                *(iVar7 + 0x2d) = 0;
                *(iVar7 + 0x31) = 0;
            }
            else {
                *(iVar7 + 0x2d) = *piVar19;
                *(iVar7 + 0x2e) = *(piVar19 + 1);
                *(iVar7 + 0x2f) = *(piVar19 + 2);
                *(iVar7 + 0x30) = *(piVar19 + 3);
                *(iVar7 + 0x31) = *(piVar19 + 4);
                *(iVar7 + 0x32) = *(piVar19 + 5);
                *(iVar7 + 0x34) = *(piVar19 + 0xc);
                *(iVar7 + 0x38) = *(piVar19 + 0x14);
                if ((piVar19[3] != 0) && (pcVar24 = *(piVar19 + 2), *(piVar19 + 2) != 0)) {
                    memcpy(iVar7 + *(iVar7 + 0x3c));
                }
            }
            trace_event_buffer_commit(&uStack_b48);
            iStack_b68 = iVar7;
        }
    }
code_r0x0809d8a0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b18) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    piVar17 = auVar40._0_8_;
    *extraout_x18_23 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    pcStack_ba8 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    pcStack_ba0 = sym.perf_trace_cfg80211_inform_bss_frame;
    iVar7 = sp_el0;
    iStack_bb8 = *(iVar7 + 0x5e0);
    iStack_bc0 = 0;
    uStack_bc4 = 0;
    if (piVar22 == NULL) {
        uVar38 = 0;
    }
    else {
        uVar38 = *(piVar22 + 2);
    }
    iVar7 = tpidr_el1;
    piVar21 = iVar7 + piVar17[0xf];
    piVar23 = piVar22;
    uStack_bf8 = uVar36;
    ppppuStack_bb0 = &ppppuStack_b10;
    iStack_b90 = iVar11;
    piStack_b88 = piVar18;
    piStack_b80 = piVar20;
    uStack_b78 = uVar36;
    uStack_b70 = uVar6;
    pcStack_b60 = pcVar14;
    piStack_b58 = piVar19;
    if ((piVar17[0x10] != 0) || (pcVar14 = pcVar24, *piVar21 != 0)) {
        pcVar14 = &uStack_bc4;
        uVar6 = (uVar38 + 0x4bU & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(uVar6,&iStack_bc0);
        uVar36 = _strlen;
        if (uVar9 != 0) {
            *(iStack_bc0 + 0xe8) = &ppppuStack_bb0;
            *(iStack_bc0 + 0xf8) = auStack_bd0;
            *(iStack_bc0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809d8d8;
            *(iStack_bc0 + 0x108) = 5;
            *(uVar9 + 0x3c) = uVar38 << 0x10 | 0x40;
            iVar7 = *(iVar10 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar10 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar7,0x20);
            uVar34 = 0;
            if ((pcVar24 != NULL) && (pcVar24 < 0xfffffffffffff001)) {
                uVar34 = *(pcVar24 + 0x28);
            }
            *(uVar9 + 0x28) = uVar34;
            *(uVar9 + 0x2c) = piVar22 == NULL;
            if (piVar22 == NULL) {
                *(uVar9 + 0x34) = 0;
                *(uVar9 + 0x2d) = 0;
                *(uVar9 + 0x31) = 0;
            }
            else {
                *(uVar9 + 0x2d) = *piVar22;
                *(uVar9 + 0x2e) = *(piVar22 + 1);
                *(uVar9 + 0x2f) = *(piVar22 + 2);
                *(uVar9 + 0x30) = *(piVar22 + 3);
                *(uVar9 + 0x31) = *(piVar22 + 4);
                *(uVar9 + 0x32) = *(piVar22 + 5);
                *(uVar9 + 0x34) = *(piVar22 + 0xc);
                *(uVar9 + 0x38) = *(piVar22 + 0x14);
                if ((piVar22[3] != 0) && (piVar22[2] != 0)) {
                    memcpy(uVar9 + *(uVar9 + 0x3c));
                }
            }
            pcVar14 = uStack_bc4;
            pcVar26 = 0x1;
            piVar23 = piVar17;
            perf_trace_run_bpf_submit(uVar9,uVar6);
            uStack_bf8 = uVar9;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_bb8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    uVar9 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_24 = 0x809dae0;
    uStack_c08 = 0x809dae0;
    iVar7 = sp_el0;
    iStack_c18 = *(iVar7 + 0x5e0);
    uVar36 = *(uVar9 + 0x48);
    uStack_c28 = 0;
    uStack_c20 = 0;
    uStack_c38 = 0;
    uStack_c30 = 0;
    uStack_c48 = 0;
    uStack_c40 = 0;
    uVar34 = uVar36;
    piVar19 = piVar23;
    ppppuStack_c10 = &ppppuStack_bb0;
    pcStack_c00 = pcVar24;
    uStack_bf0 = uVar6;
    piStack_be8 = piVar22;
    piStack_be0 = piVar21;
    piStack_bd8 = piVar17;
    uStack_c70 = uVar9;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar15 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar15 = NULL;
            piVar19 = NULL;
            event_triggers_call(uVar9,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(uVar9);
                if ((uVar6 & 1) != 0) goto code_r0x0809dc24;
            }
            goto code_r0x0809db68;
        }
    }
    else {
code_r0x0809db68:
        uVar34 = *(piVar23 + 1);
        uVar36 = uVar34;
        pcVar24 = piVar23[4];
        pcVar15 = pcVar24 + uVar34 + 0x4c;
        uVar6 = trace_event_buffer_reserve(&uStack_c48,uVar9);
        if (uVar6 != 0) {
            *(uVar6 + 0x3c) = uVar34 << 0x10 | 0x4c;
            *(uVar6 + 0x48) = uVar34 + 0x4c | pcVar24 << 0x10;
            iVar7 = *(iVar11 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar11 + 0x188);
            }
            pcVar15 = 0x20;
            strlcpy(uVar6 + 8,iVar7);
            uVar37 = *(pcVar14 + 8);
            *(uVar6 + 0x28) = *pcVar14;
            *(uVar6 + 0x30) = uVar37;
            *(uVar6 + 0x38) = *(pcVar14 + 0xd0);
            if (*piVar23 != 0) {
                pcVar15 = piVar23[1];
                memcpy(uVar6 + *(uVar6 + 0x3c));
            }
            puVar30 = piVar23[2];
            if (puVar30 == NULL) {
                *(uVar6 + 0x44) = 0;
                *(uVar6 + 0x40) = 0;
                iVar7 = piVar23[3];
            }
            else {
                uVar27 = *puVar30;
                *(uVar6 + 0x44) = *(puVar30 + 1);
                *(uVar6 + 0x40) = uVar27;
                iVar7 = piVar23[3];
            }
            if (iVar7 != 0) {
                pcVar15 = piVar23[4];
                memcpy(uVar6 + *(uVar6 + 0x48));
            }
            trace_event_buffer_commit(&uStack_c48);
            uStack_c70 = uVar6;
        }
    }
code_r0x0809dc24:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c18) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar29 = auVar40._8_8_;
    piVar20 = auVar40._0_8_;
    *extraout_x18_25 = sym.perf_trace_cfg80211_ft_event;
    pcStack_ca8 = sym.perf_trace_cfg80211_ft_event;
    pcStack_c90 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    iVar7 = sp_el0;
    iStack_cb8 = *(iVar7 + 0x5e0);
    iStack_cc0 = 0;
    uStack_cc4 = 0;
    uVar34 = *(piVar19 + 1);
    uVar2 = *(piVar19 + 4);
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar20[0xf];
    piVar21 = piVar19;
    ppppuStack_cb0 = &ppppuStack_c10;
    pcStack_ca0 = pcVar16;
    uStack_c98 = uVar38;
    iStack_c88 = iVar10;
    pcStack_c80 = pcVar24;
    uStack_c78 = uVar36;
    iStack_c68 = iVar11;
    pcStack_c60 = pcVar14;
    piStack_c58 = piVar23;
    if ((piVar20[0x10] != 0) || (pcVar16 = pcVar15, uVar6 = uStack_c70, *piVar17 != 0)) {
        pcVar16 = &uStack_cc4;
        uVar6 = (uVar34 + uVar2 + 0x57 & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(uVar6,&iStack_cc0);
        uVar38 = _strlen;
        if (uVar9 != 0) {
            *(iStack_cc0 + 0xe8) = &ppppuStack_cb0;
            *(iStack_cc0 + 0xf8) = auStack_cd0;
            *(iStack_cc0 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809dc70;
            *(iStack_cc0 + 0x108) = 5;
            *(uVar9 + 0x3c) = uVar34 << 0x10 | 0x4c;
            *(uVar9 + 0x48) = uVar34 + 0x4c | uVar2 << 0x10;
            iVar7 = *(iVar29 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar29 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar7,0x20);
            uVar37 = *(pcVar15 + 8);
            *(uVar9 + 0x28) = *pcVar15;
            *(uVar9 + 0x30) = uVar37;
            *(uVar9 + 0x38) = *(pcVar15 + 0xd0);
            if (*piVar19 != 0) {
                memcpy(uVar9 + *(uVar9 + 0x3c),*piVar19,piVar19[1]);
            }
            puVar30 = piVar19[2];
            if (puVar30 == NULL) {
                *(uVar9 + 0x44) = 0;
                *(uVar9 + 0x40) = 0;
                iVar7 = piVar19[3];
            }
            else {
                uVar27 = *puVar30;
                *(uVar9 + 0x44) = *(puVar30 + 1);
                *(uVar9 + 0x40) = uVar27;
                iVar7 = piVar19[3];
            }
            if (iVar7 != 0) {
                memcpy(uVar9 + *(uVar9 + 0x48),iVar7,piVar19[4]);
            }
            pcVar16 = uStack_cc4;
            pcVar26 = 0x1;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(uVar9,uVar6);
            uVar36 = uVar9;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_cb8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_26 = 0x809de5c;
    uStack_cf8 = 0x809de5c;
    iVar7 = sp_el0;
    iStack_d08 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar10 + 0x48);
    uStack_d18 = 0;
    uStack_d10 = 0;
    uStack_d28 = 0;
    uStack_d20 = 0;
    uStack_d38 = 0;
    uStack_d30 = 0;
    uVar35 = iVar7;
    ppppuStack_d00 = &ppppuStack_cb0;
    uStack_cf0 = uVar6;
    piStack_ce8 = piVar17;
    piStack_ce0 = piVar19;
    piStack_cd8 = piVar20;
    iStack_d58 = iVar10;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar16;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar21 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar10);
                if ((uVar6 & 1) != 0) goto code_r0x0809df2c;
            }
            goto code_r0x0809dedc;
        }
    }
    else {
code_r0x0809dedc:
        pcVar14 = 0x2c;
        iVar10 = trace_event_buffer_reserve(&uStack_d38,iVar10);
        if (iVar10 != 0) {
            iVar12 = *(iVar11 + 0x1f8);
            if (iVar12 == 0) {
                iVar12 = *(iVar11 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar10 + 8,iVar12);
            uVar35 = 0;
            if ((pcVar16 != NULL) && (pcVar16 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar16 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            trace_event_buffer_commit(&uStack_d38);
            iStack_d58 = iVar10;
        }
    }
code_r0x0809df2c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_d08) {
        return;
    }
    auVar46 = __stack_chk_fail();
    iVar12 = auVar46._8_8_;
    piVar19 = auVar46._0_8_;
    *extraout_x18_27 = sym.perf_trace_cfg80211_stop_iface;
    pcStack_d78 = sym.perf_trace_cfg80211_stop_iface;
    iVar10 = sp_el0;
    iStack_d88 = *(iVar10 + 0x5e0);
    iStack_d90 = 0;
    uStack_d94 = 0;
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar19[0xf];
    iStack_dc0 = iVar7;
    ppppuStack_d80 = &ppppuStack_d00;
    pcStack_d70 = pcVar15;
    uStack_d68 = uVar36;
    iStack_d60 = iVar7;
    iStack_d50 = iVar11;
    pcStack_d48 = pcVar16;
    if ((piVar19[0x10] != 0) || (pcVar16 = pcVar14, *piVar17 != 0)) {
        pcVar16 = &uStack_d94;
        iVar7 = perf_trace_buf_alloc(0x2c,&iStack_d90);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_d90 + 0xe8) = &ppppuStack_d80;
            *(iStack_d90 + 0xf8) = auStack_da0;
            *(iStack_d90 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809df60;
            *(iStack_d90 + 0x108) = 5;
            iVar10 = *(iVar12 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar12 + 0x188);
            }
            strlcpy(iVar7 + 8,iVar10,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            pcVar16 = uStack_d94;
            pcVar26 = 0x1;
            *(iVar7 + 0x28) = uVar35;
            piVar21 = piVar19;
            perf_trace_run_bpf_submit(iVar7,0x2c);
            iStack_dc0 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d88) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_28 = 0x809e0b0;
    uStack_dd8 = 0x809e0b0;
    pcStack_dd0 = sym.perf_trace_cfg80211_stop_iface;
    iVar7 = sp_el0;
    iStack_de8 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar10 + 0x48);
    uStack_df8 = 0;
    uStack_df0 = 0;
    uStack_e08 = 0;
    uStack_e00 = 0;
    uStack_e18 = 0;
    uStack_e10 = 0;
    uVar35 = iVar7;
    piVar20 = piVar21;
    pcVar24 = pcVar26;
    ppppuStack_de0 = &ppppuStack_d80;
    pcStack_db8 = pcVar14;
    piStack_db0 = piVar17;
    iStack_e48 = iVar10;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar16;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar20 = NULL;
            iStack_dc8 = iVar12;
            piStack_da8 = piVar19;
            event_triggers_call(iVar10,0);
            auVar46._8_8_ = iStack_dc8;
            auVar46._0_8_ = piStack_da8;
        }
        iStack_dc8 = auVar46._8_8_;
        piStack_da8 = auVar46._0_8_;
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar10);
                auVar46._8_8_ = iStack_dc8;
                auVar46._0_8_ = piStack_da8;
                if ((uVar6 & 1) != 0) goto code_r0x0809e1b4;
            }
            goto code_r0x0809e13c;
        }
    }
    else {
code_r0x0809e13c:
        iStack_dc8 = auVar46._8_8_;
        piStack_da8 = auVar46._0_8_;
        pcVar14 = 0x40;
        iVar10 = trace_event_buffer_reserve(&uStack_e18,iVar10);
        auVar46._8_8_ = iStack_dc8;
        auVar46._0_8_ = piStack_da8;
        if (iVar10 != 0) {
            iVar12 = *(iVar11 + 0x1f8);
            if (iVar12 == 0) {
                iVar12 = *(iVar11 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar10 + 8,iVar12);
            uVar35 = 0;
            if ((pcVar16 != NULL) && (pcVar16 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar16 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            *(iVar10 + 0x30) = piVar21;
            if (pcVar26 == NULL) {
                *(iVar10 + 0x3c) = 0;
                *(iVar10 + 0x38) = 0;
            }
            else {
                uVar35 = *pcVar26;
                *(iVar10 + 0x3c) = *(pcVar26 + 4);
                *(iVar10 + 0x38) = uVar35;
            }
            trace_event_buffer_commit(&uStack_e18);
            auVar46._8_8_ = iStack_dc8;
            auVar46._0_8_ = piStack_da8;
            iStack_e48 = iVar10;
        }
    }
code_r0x0809e1b4:
    iStack_dc8 = auVar46._8_8_;
    piStack_da8 = auVar46._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_de8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._8_8_;
    piVar18 = auVar40._0_8_;
    *extraout_x18_29 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_e68 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_e60 = sym.perf_trace_cfg80211_ft_event;
    iVar10 = sp_el0;
    iStack_e78 = *(iVar10 + 0x5e0);
    iStack_e80 = 0;
    uStack_e84 = 0;
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar18[0xf];
    piVar19 = piVar20;
    pcVar15 = pcVar24;
    ppppuStack_e70 = &ppppuStack_de0;
    iStack_e58 = iVar29;
    iStack_e50 = iVar7;
    iStack_e40 = iVar11;
    pcStack_e38 = pcVar16;
    piStack_e30 = piVar21;
    pcStack_e28 = pcVar26;
    if ((piVar18[0x10] != 0) || (pcVar16 = pcVar14, *piVar17 != 0)) {
        pcVar16 = &uStack_e84;
        iVar10 = perf_trace_buf_alloc(0x44,&iStack_e80);
        uVar6 = _strlen;
        if (iVar10 != 0) {
            *(iStack_e80 + 0xe8) = &ppppuStack_e70;
            *(iStack_e80 + 0xf8) = auStack_e90;
            *(iStack_e80 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809e1ec;
            *(iStack_e80 + 0x108) = 5;
            iVar7 = *(iVar12 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar12 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar7,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            *(iVar10 + 0x30) = piVar20;
            if (pcVar24 == NULL) {
                *(iVar10 + 0x3c) = 0;
                *(iVar10 + 0x38) = 0;
            }
            else {
                uVar35 = *pcVar24;
                *(iVar10 + 0x3c) = *(pcVar24 + 4);
                *(iVar10 + 0x38) = uVar35;
            }
            pcVar16 = uStack_e84;
            pcVar15 = 0x1;
            piVar19 = piVar18;
            perf_trace_run_bpf_submit(iVar10,0x44);
            iVar7 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e78) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar29 = auVar40._8_8_;
    iVar11 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_30 = 0x809e374;
    uStack_ec8 = 0x809e374;
    iVar10 = sp_el0;
    iStack_ed8 = *(iVar10 + 0x5e0);
    iVar10 = *(iVar11 + 0x48);
    uStack_ee8 = 0;
    uStack_ee0 = 0;
    uStack_ef8 = 0;
    uStack_ef0 = 0;
    uStack_f08 = 0;
    uStack_f00 = 0;
    uVar35 = iVar10;
    piVar21 = piVar19;
    ppppuStack_ed0 = &ppppuStack_e70;
    pcStack_ec0 = pcVar14;
    piStack_eb0 = piVar20;
    pcStack_ea8 = pcVar24;
    piStack_ea0 = piVar17;
    piStack_e98 = piVar18;
    iStack_f30 = iVar11;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar16;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar21 = NULL;
            event_triggers_call(iVar11,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar6 = trace_event_ignore_this_pid(iVar11);
                if ((uVar6 & 1) != 0) goto code_r0x0809e450;
            }
            goto code_r0x0809e3fc;
        }
    }
    else {
code_r0x0809e3fc:
        pcVar14 = 0x38;
        iVar11 = trace_event_buffer_reserve(&uStack_f08,iVar11);
        if (iVar11 != 0) {
            iVar13 = *(iVar29 + 0x1f8);
            if (iVar13 == 0) {
                iVar13 = *(iVar29 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar11 + 8,iVar13);
            uVar35 = 0;
            if ((pcVar16 != NULL) && (pcVar16 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar16 + 0x28);
            }
            *(iVar11 + 0x28) = uVar35;
            *(iVar11 + 0x30) = piVar19;
            trace_event_buffer_commit(&uStack_f08);
            iStack_f30 = iVar11;
        }
    }
code_r0x0809e450:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_ed8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar13 = auVar40._8_8_;
    piVar18 = auVar40._0_8_;
    *extraout_x18_31 = sym.perf_trace_cfg80211_pmsr_complete;
    pcStack_f58 = sym.perf_trace_cfg80211_pmsr_complete;
    iVar11 = sp_el0;
    iStack_f68 = *(iVar11 + 0x5e0);
    iStack_f70 = 0;
    uStack_f74 = 0;
    iVar11 = tpidr_el1;
    piVar17 = iVar11 + piVar18[0xf];
    piVar20 = piVar21;
    iStack_fb0 = iVar10;
    ppppuStack_f60 = &ppppuStack_ed0;
    iStack_f50 = iVar12;
    iStack_f40 = iVar7;
    iStack_f38 = iVar10;
    iStack_f28 = iVar29;
    pcStack_f20 = pcVar16;
    piStack_f18 = piVar19;
    if ((piVar18[0x10] != 0) || (pcVar16 = pcVar14, *piVar17 != 0)) {
        pcVar16 = &uStack_f74;
        iVar7 = perf_trace_buf_alloc(0x3c,&iStack_f70);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_f70 + 0xe8) = &ppppuStack_f60;
            *(iStack_f70 + 0xf8) = auStack_f80;
            *(iStack_f70 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809e488;
            *(iStack_f70 + 0x108) = 5;
            iVar10 = *(iVar13 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar13 + 0x188);
            }
            strlcpy(iVar7 + 8,iVar10,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            pcVar16 = uStack_f74;
            pcVar15 = 0x1;
            *(iVar7 + 0x28) = uVar35;
            *(iVar7 + 0x30) = piVar21;
            piVar20 = piVar18;
            perf_trace_run_bpf_submit(iVar7,0x3c);
            iStack_fb0 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_f68) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    uVar6 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_32 = 0x809e5e8;
    uStack_fb8 = 0x809e5e8;
    iVar7 = sp_el0;
    iStack_fc8 = *(iVar7 + 0x5e0);
    iVar7 = *(uVar6 + 0x48);
    uStack_fd8 = 0;
    uStack_fd0 = 0;
    uStack_fe8 = 0;
    uStack_fe0 = 0;
    uStack_ff8 = 0;
    uStack_ff0 = 0;
    uVar35 = iVar7;
    piVar19 = piVar20;
    ppppuStack_fc0 = &ppppuStack_f60;
    pcStack_fa0 = pcVar14;
    piStack_f98 = piVar17;
    piStack_f90 = piVar21;
    piStack_f88 = piVar18;
    uStack_1020 = uVar6;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar16;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            event_triggers_call(uVar6,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(uVar6);
                if ((uVar38 & 1) != 0) goto code_r0x0809e6fc;
            }
            goto code_r0x0809e670;
        }
    }
    else {
code_r0x0809e670:
        iVar7 = piVar20[2];
        pcVar14 = iVar7 + 0x48;
        uVar6 = trace_event_buffer_reserve(&uStack_ff8,uVar6);
        if (uVar6 != 0) {
            *(uVar6 + 0x44) = iVar7 << 0x10 | 0x48;
            iVar11 = *(iVar10 + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(iVar10 + 0x188);
            }
            strlcpy(uVar6 + 8,iVar11,0x20);
            uVar37 = *(pcVar16 + 8);
            *(uVar6 + 0x28) = *pcVar16;
            *(uVar6 + 0x30) = uVar37;
            *(uVar6 + 0x38) = *(pcVar16 + 0xd0);
            if (piVar20 == NULL) {
                *(uVar6 + 0x40) = 0;
                *(uVar6 + 0x3c) = 0;
            }
            else {
                iVar11 = *piVar20;
                *(uVar6 + 0x40) = *(piVar20 + 4);
                *(uVar6 + 0x3c) = iVar11;
            }
            pcVar14 = piVar20[2];
            memcpy(uVar6 + *(uVar6 + 0x44),piVar20[1]);
            trace_event_buffer_commit(&uStack_ff8);
            uStack_1020 = uVar6;
        }
    }
code_r0x0809e6fc:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_fc8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar29 = auVar40._8_8_;
    piVar18 = auVar40._0_8_;
    *extraout_x18_33 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_1058 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_1040 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_1038 = sym.perf_trace_cfg80211_pmsr_complete;
    iVar11 = sp_el0;
    pcVar24 = sym.perf_trace_cfg80211_update_owe_info_event;
    iStack_1068 = *(iVar11 + 0x5e0);
    iStack_1070 = 0;
    uStack_1074 = 0;
    uVar35 = *(piVar19 + 2);
    uVar6 = uVar35;
    iVar11 = tpidr_el1;
    piVar17 = iVar11 + piVar18[0xf];
    piVar21 = piVar19;
    iStack_10b0 = iVar13;
    ppppuStack_1060 = &ppppuStack_fc0;
    uStack_1050 = uVar34;
    iStack_1030 = iVar13;
    iStack_1028 = iVar7;
    iStack_1018 = iVar10;
    pcStack_1010 = pcVar16;
    piStack_1008 = piVar20;
    if ((piVar18[0x10] != 0) || (pcVar16 = pcVar14, uVar38 = uStack_1020, *piVar17 != 0)) {
        pcVar16 = &uStack_1074;
        uVar38 = (uVar35 + 0x53 & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(uVar38,&iStack_1070);
        uVar36 = _strlen;
        if (iVar7 != 0) {
            *(iStack_1070 + 0xe8) = &ppppuStack_1060;
            *(iStack_1070 + 0xf8) = auStack_1080;
            *(iStack_1070 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809e734;
            *(iStack_1070 + 0x108) = 5;
            *(iVar7 + 0x44) = uVar35 << 0x10 | 0x48;
            iVar10 = *(iVar29 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar29 + 0x188);
            }
            strlcpy(iVar7 + 8,iVar10,0x20);
            uVar37 = *(pcVar14 + 8);
            *(iVar7 + 0x28) = *pcVar14;
            *(iVar7 + 0x30) = uVar37;
            *(iVar7 + 0x38) = *(pcVar14 + 0xd0);
            if (piVar19 == NULL) {
                *(iVar7 + 0x40) = 0;
                *(iVar7 + 0x3c) = 0;
            }
            else {
                iVar10 = *piVar19;
                *(iVar7 + 0x40) = *(piVar19 + 4);
                *(iVar7 + 0x3c) = iVar10;
            }
            memcpy(iVar7 + *(iVar7 + 0x44),piVar19[1],piVar19[2]);
            pcVar16 = uStack_1074;
            pcVar15 = 0x1;
            piVar21 = piVar18;
            perf_trace_run_bpf_submit(iVar7,uVar38);
            iStack_10b0 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1068) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_34 = 0x809e8dc;
    uStack_10b8 = 0x809e8dc;
    iVar7 = sp_el0;
    iStack_10c8 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_10d8 = 0;
    uStack_10d0 = 0;
    uStack_10e8 = 0;
    uStack_10e0 = 0;
    uStack_10f8 = 0;
    uStack_10f0 = 0;
    uVar34 = uVar37;
    piVar20 = piVar21;
    pcVar25 = pcVar15;
    ppppuStack_10c0 = &ppppuStack_1060;
    pcStack_10a8 = pcVar14;
    uStack_10a0 = uVar38;
    piStack_1098 = piVar17;
    piStack_1090 = piVar19;
    piStack_1088 = piVar18;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar14 = pcVar16;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar20 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809e99c;
            }
            goto code_r0x0809e968;
        }
    }
    else {
code_r0x0809e968:
        pcVar14 = 0x30;
        iVar7 = trace_event_buffer_reserve(&uStack_10f8,iVar10);
        if (iVar7 != 0) {
            uVar1 = puVar32[1];
            *(iVar7 + 8) = *puVar32;
            *(iVar7 + 0x10) = uVar1;
            uVar27 = *(puVar32 + 0x1a);
            *(iVar7 + 0x20) = piVar21;
            *(iVar7 + 0x28) = pcVar15;
            *(iVar7 + 0x18) = uVar27;
            *(iVar7 + 0x1c) = pcVar16;
            trace_event_buffer_commit(&uStack_10f8);
        }
    }
code_r0x0809e99c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_10c8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar32 = auVar41._8_8_;
    piVar18 = auVar41._0_8_;
    *extraout_x18_35 = sym.perf_trace_cfg80211_bss_color_notify;
    pcStack_1148 = sym.perf_trace_cfg80211_bss_color_notify;
    iVar7 = sp_el0;
    pcVar26 = sym.perf_trace_cfg80211_bss_color_notify;
    iStack_1158 = *(iVar7 + 0x5e0);
    uVar36 = piVar20 & 0xffffffff;
    uVar38 = pcVar14 & 0xffffffff;
    iStack_1160 = 0;
    uStack_1164 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar18[0xf];
    piVar19 = piVar20;
    ppppuStack_1150 = &ppppuStack_10c0;
    iStack_1140 = iVar29;
    uStack_1130 = uVar37;
    uStack_1118 = pcVar16 & 0xffffffff;
    uStack_1110 = piVar21 & 0xffffffff;
    pcStack_1108 = pcVar15;
    auStack_1128 = auVar40;
    if ((piVar18[0x10] != 0) || (pcVar15 = pcVar14, *piVar17 != 0)) {
        pcVar15 = &uStack_1164;
        iVar7 = perf_trace_buf_alloc(0x34,&iStack_1160);
        uVar9 = _strlen;
        if (iVar7 != 0) {
            *(iStack_1160 + 0xe8) = &ppppuStack_1150;
            *(iStack_1160 + 0xf8) = auStack_1170;
            pcVar15 = uStack_1164;
            *(iStack_1160 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x809e9d4;
            *(iStack_1160 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar7 + 8) = *puVar32;
            *(iVar7 + 0x10) = uVar37;
            uVar27 = *(puVar32 + 0x1a);
            *(iVar7 + 0x20) = piVar20;
            *(iVar7 + 0x28) = pcVar25;
            *(iVar7 + 0x18) = uVar27;
            *(iVar7 + 0x1c) = pcVar14;
            piVar19 = piVar18;
            perf_trace_run_bpf_submit(iVar7,0x34,pcVar15,piVar18,1,iStack_1160,piVar17,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1158) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar9 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_36 = 0x809eb14;
    uStack_11a8 = 0x809eb14;
    iVar7 = sp_el0;
    iStack_11b8 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_11c8 = 0;
    uStack_11c0 = 0;
    uStack_11d8 = 0;
    uStack_11d0 = 0;
    uStack_11e8 = 0;
    uStack_11e0 = 0;
    uVar34 = uVar37;
    piVar21 = piVar19;
    ppppuStack_11b0 = &ppppuStack_1150;
    piStack_11a0 = piVar17;
    uStack_1190 = uVar36;
    uStack_1188 = uVar38;
    pcStack_1180 = pcVar25;
    piStack_1178 = piVar18;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar21 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809ebf8;
            }
            goto code_r0x0809eb9c;
        }
    }
    else {
code_r0x0809eb9c:
        pcVar16 = 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_11e8,iVar10);
        if (iVar7 != 0) {
            uVar27 = 0;
            if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                uVar27 = *(uVar9 + 0x28);
            }
            *(iVar7 + 8) = uVar27;
            if (pcVar15 == NULL) {
                *(iVar7 + 0x10) = 0;
                *(iVar7 + 0xc) = 0;
            }
            else {
                uVar34 = *pcVar15;
                *(iVar7 + 0x10) = *(pcVar15 + 4);
                *(iVar7 + 0xc) = uVar34;
            }
            *(iVar7 + 0x14) = piVar19;
            trace_event_buffer_commit(&uStack_11e8);
        }
    }
code_r0x0809ebf8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_11b8) {
        return;
    }
    auVar47 = __stack_chk_fail();
    uVar38 = auVar47._8_8_;
    piVar18 = auVar47._0_8_;
    *extraout_x18_37 = sym.perf_trace_cfg80211_assoc_comeback;
    pcStack_1228 = sym.perf_trace_cfg80211_assoc_comeback;
    iVar7 = sp_el0;
    pcVar14 = sym.perf_trace_cfg80211_assoc_comeback;
    iStack_1238 = *(iVar7 + 0x5e0);
    uVar36 = piVar21 & 0xffffffff;
    iStack_1240 = 0;
    uStack_1244 = 0;
    iVar7 = tpidr_el1;
    piVar17 = iVar7 + piVar18[0xf];
    piVar20 = piVar21;
    ppppuStack_1230 = &ppppuStack_11b0;
    puStack_1220 = puVar32;
    uStack_1218 = uVar37;
    pcStack_1200 = pcVar15;
    uStack_11f8 = piVar19 & 0xffffffff;
    auStack_1210 = auVar40;
    if ((piVar18[0x10] != 0) || (pcVar15 = pcVar16, *piVar17 != 0)) {
        pcVar15 = &uStack_1244;
        iVar7 = perf_trace_buf_alloc(0x1c,&iStack_1240);
        uVar9 = _strlen;
        if (iVar7 != 0) {
            uVar27 = 0;
            *(iStack_1240 + 0xe8) = &ppppuStack_1230;
            *(iStack_1240 + 0xf8) = auStack_1250;
            *(iStack_1240 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x809ec30;
            *(iStack_1240 + 0x108) = 5;
            if ((uVar38 != 0) && (uVar38 < 0xfffffffffffff001)) {
                uVar27 = *(uVar38 + 0x28);
            }
            *(iVar7 + 8) = uVar27;
            if (pcVar16 == NULL) {
                *(iVar7 + 0x10) = 0;
                *(iVar7 + 0xc) = 0;
            }
            else {
                uVar34 = *pcVar16;
                *(iVar7 + 0x10) = *(pcVar16 + 4);
                *(iVar7 + 0xc) = uVar34;
            }
            pcVar15 = uStack_1244;
            *(iVar7 + 0x14) = piVar21;
            piVar20 = piVar18;
            perf_trace_run_bpf_submit(iVar7,0x1c,pcVar15,piVar18,1,iStack_1240,piVar17,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1238) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    uVar9 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_38 = 0x809ed8c;
    uStack_12a8 = 0x809ed8c;
    pcStack_1290 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_1288 = sym.perf_trace_cfg80211_bss_color_notify;
    pcStack_1280 = sym.perf_trace_cfg80211_assoc_comeback;
    iVar7 = sp_el0;
    iStack_12b8 = *(iVar7 + 0x5e0);
    uVar39 = *(uVar9 + 0x48);
    uStack_12c8 = 0;
    uStack_12c0 = 0;
    uStack_12d8 = 0;
    uStack_12d0 = 0;
    uStack_12e8 = 0;
    uStack_12e0 = 0;
    uVar34 = uVar39;
    piVar21 = piVar20;
    ppppuStack_12b0 = &ppppuStack_1230;
    uStack_12a0 = uVar6;
    pcStack_1270 = pcVar16;
    piStack_1268 = piVar17;
    uStack_1260 = uVar36;
    uStack_1300 = uVar9;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar21 = NULL;
            uStack_1278 = uVar38;
            piStack_1258 = piVar18;
            event_triggers_call(uVar9,0);
            auVar47._8_8_ = uStack_1278;
            auVar47._0_8_ = piStack_1258;
        }
        uStack_1278 = auVar47._8_8_;
        piStack_1258 = auVar47._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(uVar9);
                auVar47._8_8_ = uStack_1278;
                auVar47._0_8_ = piStack_1258;
                if ((uVar38 & 1) != 0) goto code_r0x0809efa8;
            }
            goto code_r0x0809ee1c;
        }
    }
    else {
code_r0x0809ee1c:
        uStack_1278 = auVar47._8_8_;
        piStack_1258 = auVar47._0_8_;
        uVar3 = *(piVar20 + 4);
        uVar39 = uVar3;
        uVar4 = *(piVar20 + 9);
        uVar6 = uVar4;
        uVar5 = *(piVar20 + 0xd);
        pcVar14 = uVar5;
        pcVar26 = uVar39 + 0x84;
        pcVar24 = pcVar26 + uVar6;
        pcVar16 = pcVar24 + pcVar14;
        uVar38 = trace_event_buffer_reserve(&uStack_12e8,uVar9);
        auVar47._8_8_ = uStack_1278;
        auVar47._0_8_ = piStack_1258;
        if (uVar38 != 0) {
            uVar34 = pcVar26 | uVar4 << 0x10;
            pcVar26 = uVar34;
            uVar35 = pcVar24 | uVar5 << 0x10;
            pcVar24 = uVar35;
            *(uVar38 + 0x78) = uVar34;
            *(uVar38 + 0x4c) = uVar3 << 0x10 | 0x84;
            *(uVar38 + 0x80) = uVar35;
            iVar7 = *(iVar10 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar10 + 0x188);
            }
            pcVar16 = 0x20;
            strlcpy(uVar38 + 8,iVar7);
            uVar37 = *(pcVar15 + 8);
            *(uVar38 + 0x28) = *pcVar15;
            *(uVar38 + 0x30) = uVar37;
            uVar34 = *(pcVar15 + 0xd0);
            *(uVar38 + 0x3c) = 0;
            *(uVar38 + 0x38) = uVar34;
            *(uVar38 + 0x44) = 0;
            puVar30 = *piVar20;
            if (puVar30 != NULL) {
                uVar27 = *puVar30;
                *(uVar38 + 0x40) = *(puVar30 + 1);
                *(uVar38 + 0x3c) = uVar27;
            }
            puVar30 = piVar20[2];
            if (puVar30 != NULL) {
                uVar27 = *puVar30;
                *(uVar38 + 0x46) = *(puVar30 + 1);
                *(uVar38 + 0x42) = uVar27;
            }
            *(uVar38 + 0x48) = piVar20[1];
            if ((piVar20[3] != 0) && (pcVar16 = *(piVar20 + 4), pcVar16 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x4c));
            }
            *(uVar38 + 0x50) = 0;
            *(uVar38 + 0x68) = 0;
            *(uVar38 + 0x58) = 0;
            *(uVar38 + 0x60) = 0;
            puVar32 = piVar20[5];
            if (puVar32 != NULL) {
                uVar37 = puVar32[1];
                uVar1 = puVar32[2];
                uVar33 = *puVar32;
                *(uVar38 + 0x68) = *(puVar32 + 3);
                *(uVar38 + 0x58) = uVar37;
                *(uVar38 + 0x60) = uVar1;
                *(uVar38 + 0x50) = uVar33;
            }
            *(uVar38 + 0x6a) = 0;
            *(uVar38 + 0x72) = 0;
            puVar32 = piVar20[6];
            if (puVar32 != NULL) {
                uVar37 = *puVar32;
                *(uVar38 + 0x72) = *(puVar32 + 1);
                *(uVar38 + 0x6a) = uVar37;
            }
            *(uVar38 + 0x76) = piVar20[7];
            *(uVar38 + 0x77) = *(piVar20 + 0x39);
            if ((piVar20[8] != 0) && (pcVar16 = *(piVar20 + 9), pcVar16 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x78));
            }
            *(uVar38 + 0x7c) = 0;
            if (piVar20[0xb] != NULL) {
                *(uVar38 + 0x7c) = *piVar20[0xb];
            }
            if ((piVar20[0xc] != 0) && (pcVar16 = *(piVar20 + 0xd), pcVar16 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x80));
            }
            trace_event_buffer_commit(&uStack_12e8);
            auVar47._8_8_ = uStack_1278;
            auVar47._0_8_ = piStack_1258;
            uStack_1300 = uVar38;
        }
    }
code_r0x0809efa8:
    uStack_1278 = auVar47._8_8_;
    piStack_1258 = auVar47._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_12b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar19 = auVar40._0_8_;
    *extraout_x18_39 = sym.perf_trace_link_station_add_mod;
    pcStack_1348 = sym.perf_trace_link_station_add_mod;
    iVar7 = sp_el0;
    iStack_1358 = *(iVar7 + 0x5e0);
    iStack_1360 = 0;
    uStack_1364 = 0;
    uVar3 = *(piVar21 + 4);
    uVar4 = *(piVar21 + 9);
    uVar5 = *(piVar21 + 0xd);
    uVar38 = uVar5;
    iVar7 = tpidr_el1;
    piStack_1370 = iVar7 + piVar19[0xf];
    piVar17 = piVar21;
    uStack_13b0 = uVar39;
    ppppuStack_1350 = &ppppuStack_12b0;
    uStack_1340 = uVar2;
    uStack_1338 = uVar6;
    pcStack_1330 = pcVar24;
    pcStack_1328 = pcVar26;
    pcStack_1320 = pcVar14;
    uStack_1318 = uVar39;
    iStack_1310 = iVar10;
    pcStack_1308 = pcVar15;
    piStack_12f8 = piVar20;
    if ((piVar19[0x10] != 0) || (pcVar14 = pcVar16, uVar6 = uStack_1300, *piStack_1370 != 0)) {
        uVar34 = uVar4 + uVar3;
        uVar6 = uVar34;
        pcVar14 = &uStack_1364;
        iStack_1374 = (uVar5 + uVar34 + 0x8f & 0x3f8) - 4;
        uVar9 = perf_trace_buf_alloc(iStack_1374,&iStack_1360);
        uVar36 = _strlen;
        if (uVar9 != 0) {
            uVar34 = uVar34 | uVar5 << 0x10;
            uVar6 = uVar34;
            *(iStack_1360 + 0xe8) = &ppppuStack_1350;
            *(iStack_1360 + 0xf8) = auStack_1380;
            *(iStack_1360 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809efe8;
            *(iStack_1360 + 0x108) = 5;
            *(uVar9 + 0x4c) = uVar3 << 0x10 | 0x84;
            *(uVar9 + 0x78) = (uVar3 | uVar4 << 0x10) + 0x84;
            *(uVar9 + 0x80) = uVar34 + 0x84;
            iVar7 = *(iVar11 + 0x1f8);
            if (iVar7 == 0) {
                iVar7 = *(iVar11 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar7,0x20);
            uVar37 = *(pcVar16 + 8);
            *(uVar9 + 0x28) = *pcVar16;
            *(uVar9 + 0x30) = uVar37;
            uVar34 = *(pcVar16 + 0xd0);
            *(uVar9 + 0x3c) = 0;
            *(uVar9 + 0x38) = uVar34;
            *(uVar9 + 0x44) = 0;
            puVar30 = *piVar21;
            if (puVar30 != NULL) {
                uVar27 = *puVar30;
                *(uVar9 + 0x40) = *(puVar30 + 1);
                *(uVar9 + 0x3c) = uVar27;
            }
            puVar30 = piVar21[2];
            if (puVar30 != NULL) {
                uVar27 = *puVar30;
                *(uVar9 + 0x46) = *(puVar30 + 1);
                *(uVar9 + 0x42) = uVar27;
            }
            *(uVar9 + 0x48) = piVar21[1];
            if ((piVar21[3] != 0) && (piVar21[4] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x4c));
            }
            *(uVar9 + 0x50) = 0;
            *(uVar9 + 0x68) = 0;
            *(uVar9 + 0x58) = 0;
            *(uVar9 + 0x60) = 0;
            puVar32 = piVar21[5];
            if (puVar32 != NULL) {
                uVar37 = puVar32[1];
                uVar1 = puVar32[2];
                uVar33 = *puVar32;
                *(uVar9 + 0x68) = *(puVar32 + 3);
                *(uVar9 + 0x58) = uVar37;
                *(uVar9 + 0x60) = uVar1;
                *(uVar9 + 0x50) = uVar33;
            }
            *(uVar9 + 0x6a) = 0;
            *(uVar9 + 0x72) = 0;
            puVar32 = piVar21[6];
            if (puVar32 != NULL) {
                uVar37 = *puVar32;
                *(uVar9 + 0x72) = *(puVar32 + 1);
                *(uVar9 + 0x6a) = uVar37;
            }
            *(uVar9 + 0x76) = piVar21[7];
            *(uVar9 + 0x77) = *(piVar21 + 0x39);
            if ((piVar21[8] != 0) && (piVar21[9] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x78));
            }
            *(uVar9 + 0x7c) = 0;
            if (piVar21[0xb] != NULL) {
                *(uVar9 + 0x7c) = *piVar21[0xb];
            }
            if ((piVar21[0xc] != 0) && (piVar21[0xd] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x80));
            }
            pcVar14 = uStack_1364;
            piVar17 = piVar19;
            perf_trace_run_bpf_submit(uVar9,iStack_1374,pcVar14,piVar19,1,iStack_1360,piStack_1370,0);
            uStack_13b0 = uVar9;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1358) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar29 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_40 = 0x809f2a4;
    uStack_13b8 = 0x809f2a4;
    iVar7 = sp_el0;
    iStack_13c8 = *(iVar7 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_13d8 = 0;
    uStack_13d0 = 0;
    uStack_13e8 = 0;
    uStack_13e0 = 0;
    uStack_13f8 = 0;
    uStack_13f0 = 0;
    uVar34 = uVar37;
    piVar20 = piVar17;
    ppppuStack_13c0 = &ppppuStack_1350;
    uStack_13a0 = uVar38;
    piStack_1398 = piVar21;
    uStack_1390 = uVar6;
    piStack_1388 = piVar19;
    iStack_1420 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar24 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar24 = NULL;
            piVar20 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) != 0) goto code_r0x0809f3a0;
        if ((uVar34 >> 9 & 1) != 0) {
            uVar6 = trace_event_ignore_this_pid(iVar10);
            if ((uVar6 & 1) != 0) goto code_r0x0809f3a0;
        }
    }
    pcVar24 = 0x48;
    iVar7 = trace_event_buffer_reserve(&uStack_13f8,iVar10);
    if (iVar7 != 0) {
        iVar10 = *(iVar29 + 0x1f8);
        if (iVar10 == 0) {
            iVar10 = *(iVar29 + 0x188);
        }
        pcVar24 = 0x20;
        strlcpy(iVar7 + 8,iVar10);
        uVar1 = *(pcVar14 + 8);
        *(iVar7 + 0x28) = *pcVar14;
        *(iVar7 + 0x30) = uVar1;
        uVar34 = *(pcVar14 + 0xd0);
        *(iVar7 + 0x3c) = 0;
        *(iVar7 + 0x38) = uVar34;
        *(iVar7 + 0x40) = 0;
        puVar30 = *piVar17;
        if (puVar30 != NULL) {
            uVar27 = *puVar30;
            *(iVar7 + 0x40) = *(puVar30 + 1);
            *(iVar7 + 0x3c) = uVar27;
        }
        *(iVar7 + 0x44) = piVar17[1];
        trace_event_buffer_commit(&uStack_13f8);
        iStack_1420 = iVar7;
    }
code_r0x0809f3a0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_13c8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    *extraout_x18_41 = sym.perf_trace_rdev_del_link_station;
    pcStack_1448 = sym.perf_trace_rdev_del_link_station;
    iVar7 = sp_el0;
    iStack_1458 = *(iVar7 + 0x5e0);
    iStack_1460 = 0;
    uStack_1464 = 0;
    iVar7 = tpidr_el1;
    piVar21 = iVar7 + *(iVar10 + 0x78);
    ppppuStack_1450 = &ppppuStack_13c0;
    iStack_1440 = iVar11;
    pcStack_1430 = pcVar16;
    uStack_1428 = uVar37;
    iStack_1418 = iVar29;
    pcStack_1410 = pcVar14;
    piStack_1408 = piVar17;
    if ((*(iVar10 + 0x80) != 0) || (*piVar21 != 0)) {
        iVar7 = perf_trace_buf_alloc(0x4c,&iStack_1460,&uStack_1464);
        uVar6 = _strlen;
        if (iVar7 != 0) {
            *(iStack_1460 + 0xe8) = &ppppuStack_1450;
            *(iStack_1460 + 0xf8) = auStack_1470;
            *(iStack_1460 + 0x100) = ~(-1L << (uVar6 & 0x3f)) & 0x809f3d8;
            *(iStack_1460 + 0x108) = 5;
            iVar11 = *(auVar40._8_8_ + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(auVar40._8_8_ + 0x188);
            }
            strlcpy(iVar7 + 8,iVar11,0x20);
            uVar37 = *(pcVar24 + 8);
            *(iVar7 + 0x28) = *pcVar24;
            *(iVar7 + 0x30) = uVar37;
            uVar34 = *(pcVar24 + 0xd0);
            *(iVar7 + 0x3c) = 0;
            *(iVar7 + 0x38) = uVar34;
            *(iVar7 + 0x40) = 0;
            puVar30 = *piVar20;
            if (puVar30 != NULL) {
                uVar27 = *puVar30;
                *(iVar7 + 0x40) = *(puVar30 + 1);
                *(iVar7 + 0x3c) = uVar27;
            }
            *(iVar7 + 0x44) = piVar20[1];
            perf_trace_run_bpf_submit(iVar7,0x4c,uStack_1464,iVar10,1,iStack_1460,piVar21,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_1458) {
        __stack_chk_fail();
        uVar37 = tpidr_el2;
        *extraout_x18_42 = 0x809f558;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031648 (size 8) =====

void sym.__bpf_trace_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.perf_trace_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031650 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0809f0dc)
//WARNING: Removing unreachable block (ram,0x0809eaa8)
//WARNING: Removing unreachable block (ram,0x0809e548)
//WARNING: Removing unreachable block (ram,0x0809e018)
//WARNING: Removing unreachable block (ram,0x0809d9bc)
//WARNING: Removing unreachable block (ram,0x0809d4fc)
//WARNING: Removing unreachable block (ram,0x0809cfbc)
//WARNING: Removing unreachable block (ram,0x0809c960)
//WARNING: Removing unreachable block (ram,0x0809c368)
//WARNING: Removing unreachable block (ram,0x0809be74)
//WARNING: Removing unreachable block (ram,0x0809bbfc)
//WARNING: Removing unreachable block (ram,0x0809c0d0)
//WARNING: Removing unreachable block (ram,0x0809c6a0)
//WARNING: Removing unreachable block (ram,0x0809cc50)
//WARNING: Removing unreachable block (ram,0x0809d2b4)
//WARNING: Removing unreachable block (ram,0x0809d6dc)
//WARNING: Removing unreachable block (ram,0x0809dd50)
//WARNING: Removing unreachable block (ram,0x0809e2b0)
//WARNING: Removing unreachable block (ram,0x0809e80c)
//WARNING: Removing unreachable block (ram,0x0809ece8)
//WARNING: Removing unreachable block (ram,0x0809f498)

void sym.perf_trace_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt
               (int64_t *param_1,ulong *param_2,code *param_3,int64_t *param_4,code *param_5,code *param_6,
               uint param_7,uint param_8)

{
    ulong uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    ulong in_tmp_ldXn;
    int64_t iVar6;
    ulong *puVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    uint uVar26;
    uint uVar27;
    int64_t iVar28;
    uint *puVar29;
    ushort uVar30;
    uint64_t uVar31;
    ulong *puVar32;
    ulong uVar33;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    ulong *extraout_x18_13;
    ulong *extraout_x18_14;
    ulong *extraout_x18_15;
    ulong *extraout_x18_16;
    ulong *extraout_x18_17;
    ulong *extraout_x18_18;
    ulong *extraout_x18_19;
    ulong *extraout_x18_20;
    ulong *extraout_x18_21;
    ulong *extraout_x18_22;
    ulong *extraout_x18_23;
    ulong *extraout_x18_24;
    ulong *extraout_x18_25;
    ulong *extraout_x18_26;
    ulong *extraout_x18_27;
    ulong *extraout_x18_28;
    ulong *extraout_x18_29;
    ulong *extraout_x18_30;
    ulong *extraout_x18_31;
    ulong *extraout_x18_32;
    ulong *extraout_x18_33;
    ulong *extraout_x18_34;
    ulong *extraout_x18_35;
    ulong *extraout_x18_36;
    ulong *extraout_x18_37;
    ulong *extraout_x18_38;
    ulong *extraout_x18_39;
    ulong *extraout_x18_40;
    ulong *extraout_x18_41;
    uint32_t uVar34;
    uint32_t uVar35;
    uint64_t uVar36;
    ulong uVar37;
    uint64_t uVar38;
    uint64_t uVar39;
    uint64_t unaff_x30;
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    uchar auVar44 [16];
    uchar auVar45 [16];
    uchar auVar46 [16];
    uchar auVar47 [16];
    uchar auStack_13f0 [12];
    uint uStack_13e4;
    int64_t iStack_13e0;
    int64_t iStack_13d8;
    ulong ****ppppuStack_13d0;
    code *pcStack_13c8;
    int64_t iStack_13c0;
    code *pcStack_13b0;
    ulong uStack_13a8;
    int64_t iStack_13a0;
    int64_t iStack_1398;
    code *pcStack_1390;
    int64_t *piStack_1388;
    ulong uStack_1378;
    ulong uStack_1370;
    ulong uStack_1368;
    ulong uStack_1360;
    ulong uStack_1358;
    ulong uStack_1350;
    int64_t iStack_1348;
    ulong ****ppppuStack_1340;
    ulong uStack_1338;
    uint64_t uStack_1330;
    uint64_t uStack_1320;
    int64_t *piStack_1318;
    uint64_t uStack_1310;
    int64_t *piStack_1308;
    uchar auStack_1300 [12];
    int iStack_12f4;
    int64_t *piStack_12f0;
    uint32_t uStack_12e4;
    int64_t iStack_12e0;
    int64_t iStack_12d8;
    ulong ****ppppuStack_12d0;
    code *pcStack_12c8;
    uint64_t uStack_12c0;
    uint64_t uStack_12b8;
    code *pcStack_12b0;
    code *pcStack_12a8;
    code *pcStack_12a0;
    uint64_t uStack_1298;
    int64_t iStack_1290;
    code *pcStack_1288;
    uint64_t uStack_1280;
    int64_t *piStack_1278;
    ulong uStack_1268;
    ulong uStack_1260;
    ulong uStack_1258;
    ulong uStack_1250;
    ulong uStack_1248;
    ulong uStack_1240;
    int64_t iStack_1238;
    ulong ****ppppuStack_1230;
    ulong uStack_1228;
    uint64_t uStack_1220;
    code *pcStack_1210;
    code *pcStack_1208;
    code *pcStack_1200;
    uint64_t uStack_11f8;
    code *pcStack_11f0;
    int64_t *piStack_11e8;
    uint64_t uStack_11e0;
    int64_t *piStack_11d8;
    uchar auStack_11d0 [12];
    uint32_t uStack_11c4;
    int64_t iStack_11c0;
    int64_t iStack_11b8;
    ulong ****ppppuStack_11b0;
    code *pcStack_11a8;
    ulong *puStack_11a0;
    ulong uStack_1198;
    uchar auStack_1190 [16];
    code *pcStack_1180;
    uint64_t uStack_1178;
    ulong uStack_1168;
    ulong uStack_1160;
    ulong uStack_1158;
    ulong uStack_1150;
    ulong uStack_1148;
    ulong uStack_1140;
    int64_t iStack_1138;
    ulong ****ppppuStack_1130;
    ulong uStack_1128;
    int64_t *piStack_1120;
    uint64_t uStack_1110;
    uint64_t uStack_1108;
    code *pcStack_1100;
    int64_t *piStack_10f8;
    uchar auStack_10f0 [12];
    uint32_t uStack_10e4;
    int64_t iStack_10e0;
    int64_t iStack_10d8;
    ulong ****ppppuStack_10d0;
    code *pcStack_10c8;
    int64_t iStack_10c0;
    ulong uStack_10b0;
    uchar auStack_10a8 [16];
    uint64_t uStack_1098;
    uint64_t uStack_1090;
    code *pcStack_1088;
    ulong uStack_1078;
    ulong uStack_1070;
    ulong uStack_1068;
    ulong uStack_1060;
    ulong uStack_1058;
    ulong uStack_1050;
    int64_t iStack_1048;
    ulong ****ppppuStack_1040;
    ulong uStack_1038;
    int64_t iStack_1030;
    code *pcStack_1028;
    uint64_t uStack_1020;
    int64_t *piStack_1018;
    int64_t *piStack_1010;
    int64_t *piStack_1008;
    uchar auStack_1000 [12];
    uint32_t uStack_ff4;
    int64_t iStack_ff0;
    int64_t iStack_fe8;
    ulong ****ppppuStack_fe0;
    code *pcStack_fd8;
    uint64_t uStack_fd0;
    code *pcStack_fc0;
    code *pcStack_fb8;
    int64_t iStack_fb0;
    int64_t iStack_fa8;
    uint64_t uStack_fa0;
    int64_t iStack_f98;
    code *pcStack_f90;
    int64_t *piStack_f88;
    ulong uStack_f78;
    ulong uStack_f70;
    ulong uStack_f68;
    ulong uStack_f60;
    ulong uStack_f58;
    ulong uStack_f50;
    int64_t iStack_f48;
    ulong ****ppppuStack_f40;
    ulong uStack_f38;
    int64_t iStack_f30;
    code *pcStack_f20;
    int64_t *piStack_f18;
    int64_t *piStack_f10;
    int64_t *piStack_f08;
    uchar auStack_f00 [12];
    uint32_t uStack_ef4;
    int64_t iStack_ef0;
    int64_t iStack_ee8;
    ulong ****ppppuStack_ee0;
    code *pcStack_ed8;
    int64_t iStack_ed0;
    int64_t iStack_ec0;
    int64_t iStack_eb8;
    int64_t iStack_eb0;
    int64_t iStack_ea8;
    code *pcStack_ea0;
    int64_t *piStack_e98;
    ulong uStack_e88;
    ulong uStack_e80;
    ulong uStack_e78;
    ulong uStack_e70;
    ulong uStack_e68;
    ulong uStack_e60;
    int64_t iStack_e58;
    ulong ****ppppuStack_e50;
    ulong uStack_e48;
    code *pcStack_e40;
    int64_t *piStack_e30;
    code *pcStack_e28;
    int64_t *piStack_e20;
    int64_t *piStack_e18;
    uchar auStack_e10 [12];
    uint32_t uStack_e04;
    int64_t iStack_e00;
    int64_t iStack_df8;
    ulong ****ppppuStack_df0;
    code *pcStack_de8;
    code *pcStack_de0;
    int64_t iStack_dd8;
    int64_t iStack_dd0;
    int64_t iStack_dc8;
    int64_t iStack_dc0;
    code *pcStack_db8;
    int64_t *piStack_db0;
    code *pcStack_da8;
    ulong uStack_d98;
    ulong uStack_d90;
    ulong uStack_d88;
    ulong uStack_d80;
    ulong uStack_d78;
    ulong uStack_d70;
    int64_t iStack_d68;
    ulong ****ppppuStack_d60;
    ulong uStack_d58;
    code *pcStack_d50;
    int64_t iStack_d48;
    int64_t iStack_d40;
    code *pcStack_d38;
    int64_t *piStack_d30;
    int64_t *piStack_d28;
    uchar auStack_d20 [12];
    uint32_t uStack_d14;
    int64_t iStack_d10;
    int64_t iStack_d08;
    ulong ****ppppuStack_d00;
    code *pcStack_cf8;
    code *pcStack_cf0;
    uint64_t uStack_ce8;
    int64_t iStack_ce0;
    int64_t iStack_cd8;
    int64_t iStack_cd0;
    code *pcStack_cc8;
    ulong uStack_cb8;
    ulong uStack_cb0;
    ulong uStack_ca8;
    ulong uStack_ca0;
    ulong uStack_c98;
    ulong uStack_c90;
    int64_t iStack_c88;
    ulong ****ppppuStack_c80;
    ulong uStack_c78;
    uint64_t uStack_c70;
    int64_t *piStack_c68;
    int64_t *piStack_c60;
    int64_t *piStack_c58;
    uchar auStack_c50 [12];
    uint32_t uStack_c44;
    int64_t iStack_c40;
    int64_t iStack_c38;
    ulong ****ppppuStack_c30;
    code *pcStack_c28;
    code *pcStack_c20;
    uint64_t uStack_c18;
    code *pcStack_c10;
    int64_t iStack_c08;
    code *pcStack_c00;
    uint64_t uStack_bf8;
    uint64_t uStack_bf0;
    int64_t iStack_be8;
    code *pcStack_be0;
    int64_t *piStack_bd8;
    ulong uStack_bc8;
    ulong uStack_bc0;
    ulong uStack_bb8;
    ulong uStack_bb0;
    ulong uStack_ba8;
    ulong uStack_ba0;
    int64_t iStack_b98;
    ulong ****ppppuStack_b90;
    ulong uStack_b88;
    code *pcStack_b80;
    uint64_t uStack_b78;
    uint64_t uStack_b70;
    int64_t *piStack_b68;
    int64_t *piStack_b60;
    int64_t *piStack_b58;
    uchar auStack_b50 [12];
    uint32_t uStack_b44;
    int64_t iStack_b40;
    int64_t iStack_b38;
    ulong ****ppppuStack_b30;
    code *pcStack_b28;
    code *pcStack_b20;
    int64_t iStack_b10;
    int64_t *piStack_b08;
    int64_t *piStack_b00;
    uint64_t uStack_af8;
    uint64_t uStack_af0;
    int64_t iStack_ae8;
    code *pcStack_ae0;
    int64_t *piStack_ad8;
    ulong uStack_ac8;
    ulong uStack_ac0;
    ulong uStack_ab8;
    ulong uStack_ab0;
    ulong uStack_aa8;
    ulong uStack_aa0;
    int64_t iStack_a98;
    ulong ****ppppuStack_a90;
    ulong uStack_a88;
    code *pcStack_a80;
    code *pcStack_a70;
    int64_t *piStack_a68;
    uint64_t uStack_a60;
    int64_t *piStack_a58;
    uchar auStack_a50 [12];
    uint32_t uStack_a44;
    int64_t iStack_a40;
    int64_t iStack_a38;
    ulong ****ppppuStack_a30;
    code *pcStack_a28;
    code *pcStack_a20;
    ulong uStack_a18;
    int64_t iStack_a10;
    uint64_t uStack_a08;
    ulong uStack_9f8;
    ulong uStack_9f0;
    ulong uStack_9e8;
    ulong uStack_9e0;
    ulong uStack_9d8;
    ulong uStack_9d0;
    int64_t iStack_9c8;
    ulong ****ppppuStack_9c0;
    ulong uStack_9b8;
    int64_t *piStack_9b0;
    uint64_t uStack_9a0;
    int64_t *piStack_998;
    uchar auStack_990 [12];
    uint32_t uStack_984;
    int64_t iStack_980;
    int64_t iStack_978;
    ulong ****ppppuStack_970;
    code *pcStack_968;
    code *pcStack_960;
    ulong uStack_958;
    int64_t iStack_950;
    uint64_t uStack_948;
    ulong uStack_938;
    ulong uStack_930;
    ulong uStack_928;
    ulong uStack_920;
    ulong uStack_918;
    ulong uStack_910;
    int64_t iStack_908;
    ulong ****ppppuStack_900;
    ulong uStack_8f8;
    int64_t *piStack_8f0;
    int64_t *piStack_8e0;
    int64_t *piStack_8d8;
    uchar auStack_8d0 [12];
    uint32_t uStack_8c4;
    int64_t iStack_8c0;
    int64_t iStack_8b8;
    ulong ****ppppuStack_8b0;
    code *pcStack_8a8;
    uint64_t uStack_8a0;
    ulong uStack_898;
    uchar auStack_890 [16];
    ulong uStack_878;
    ulong uStack_870;
    ulong uStack_868;
    ulong uStack_860;
    ulong uStack_858;
    ulong uStack_850;
    int64_t iStack_848;
    ulong ****ppppuStack_840;
    ulong uStack_838;
    code *pcStack_830;
    int64_t *piStack_820;
    int64_t *piStack_818;
    uchar auStack_810 [12];
    uint32_t uStack_804;
    int64_t iStack_800;
    int64_t iStack_7f8;
    ulong ****ppppuStack_7f0;
    code *pcStack_7e8;
    int64_t iStack_7e0;
    uint64_t uStack_7d0;
    int64_t *piStack_7c8;
    ulong uStack_7c0;
    int64_t iStack_7b8;
    uint64_t uStack_7b0;
    int64_t *piStack_7a8;
    code *pcStack_7a0;
    code *pcStack_798;
    ulong uStack_788;
    ulong uStack_780;
    ulong uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    ulong uStack_760;
    int64_t iStack_758;
    ulong ****ppppuStack_750;
    ulong uStack_748;
    int64_t *piStack_740;
    code *pcStack_738;
    code *pcStack_730;
    code *pcStack_728;
    int64_t iStack_720;
    int64_t *piStack_718;
    uchar auStack_710 [4];
    uint uStack_70c;
    uint uStack_708;
    uint32_t uStack_704;
    int64_t iStack_700;
    int64_t iStack_6f8;
    ulong ****ppppuStack_6f0;
    code *pcStack_6e8;
    ulong uStack_688;
    ulong uStack_680;
    ulong uStack_678;
    ulong uStack_670;
    ulong uStack_668;
    ulong uStack_660;
    int64_t iStack_658;
    ulong ****ppppuStack_650;
    ulong uStack_648;
    code *pcStack_640;
    uint64_t uStack_630;
    code *pcStack_628;
    code *pcStack_620;
    int64_t *piStack_618;
    int64_t iStack_610;
    int64_t *piStack_608;
    code *pcStack_600;
    int64_t *piStack_5f8;
    uchar auStack_5f0 [12];
    uint32_t uStack_5e4;
    code *pcStack_5e0;
    int64_t iStack_5d8;
    ulong ****ppppuStack_5d0;
    code *pcStack_5c8;
    code *pcStack_5c0;
    int64_t *piStack_5b8;
    ulong uStack_5b0;
    int64_t iStack_5a8;
    int64_t iStack_5a0;
    code *pcStack_598;
    ulong uStack_588;
    ulong uStack_580;
    ulong uStack_578;
    ulong uStack_570;
    ulong uStack_568;
    ulong uStack_560;
    int64_t iStack_558;
    ulong ****ppppuStack_550;
    ulong uStack_548;
    int64_t iStack_540;
    code *pcStack_538;
    int64_t *piStack_530;
    int64_t *piStack_528;
    uchar auStack_520 [12];
    uint32_t uStack_514;
    code *pcStack_510;
    int64_t iStack_508;
    ulong ****ppppuStack_500;
    code *pcStack_4f8;
    int64_t iStack_4f0;
    int64_t iStack_4e8;
    code *pcStack_4e0;
    int64_t *piStack_4d8;
    uint64_t uStack_4d0;
    int64_t iStack_4c8;
    int64_t iStack_4c0;
    code *pcStack_4b8;
    ulong uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    ulong uStack_480;
    int64_t iStack_478;
    ulong ****ppppuStack_470;
    ulong uStack_468;
    int64_t *piStack_460;
    uint64_t uStack_458;
    uint64_t uStack_450;
    int64_t *piStack_448;
    uchar auStack_440 [12];
    uint32_t uStack_434;
    code *pcStack_430;
    int64_t iStack_428;
    ulong ****ppppuStack_420;
    code *pcStack_418;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    int64_t iStack_388;
    ulong ****ppppuStack_380;
    ulong uStack_378;
    code *pcStack_370;
    ulong *puStack_360;
    int64_t iStack_358;
    int64_t *piStack_350;
    uint64_t uStack_348;
    uint64_t uStack_340;
    int64_t *piStack_338;
    uchar auStack_330 [12];
    uint32_t uStack_324;
    code *pcStack_320;
    int64_t iStack_318;
    ulong ****ppppuStack_310;
    code *pcStack_308;
    code *pcStack_300;
    ulong *puStack_2f0;
    ulong uStack_2e8;
    int64_t iStack_2e0;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong ****ppppuStack_280;
    ulong uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_260;
    int64_t *piStack_258;
    int64_t *piStack_250;
    int64_t *piStack_248;
    uchar auStack_240 [12];
    uint32_t uStack_234;
    code *pcStack_230;
    int64_t iStack_228;
    uchar ****ppppuStack_220;
    code *pcStack_218;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    ulong uStack_188;
    code *pcStack_180;
    ulong *puStack_178;
    code *pcStack_170;
    int64_t *piStack_168;
    uint64_t uStack_160;
    int64_t *piStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    code *pcStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong *puStack_120;
    ulong uStack_118;
    uchar auStack_110 [16];
    code *pcStack_100;
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
    uint64_t uStack_a0;
    code *pcStack_90;
    int64_t *piStack_88;
    int64_t *piStack_80;
    int64_t *piStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    code *pcStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uVar36 = param_5 & 0xffffffff;
    pcStack_60 = NULL;
    uStack_64 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + param_1[0xf];
    piVar18 = param_4;
    pcVar23 = param_5;
    if ((param_1[0x10] != 0) || (pcVar14 = param_3, *piVar22 != 0)) {
        pcVar14 = &uStack_64;
        iVar6 = perf_trace_buf_alloc(0x3c,&pcStack_60);
        uVar38 = _strlen;
        if (iVar6 != 0) {
            *(pcStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(pcStack_60 + 0xf8) = auStack_70;
            uVar31 = -1L << (uVar38 & 0x3f);
            uVar38 = (~uVar31 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar38 = uVar31 | unaff_x30;
            }
            *(pcStack_60 + 0x100) = uVar38;
            *(pcStack_60 + 0x108) = 5;
            uVar37 = param_2[1];
            *(iVar6 + 8) = *param_2;
            *(iVar6 + 0x10) = uVar37;
            *(iVar6 + 0x18) = *(param_2 + 0x1a);
            if (param_3 == NULL) {
                *(iVar6 + 0x20) = 0;
                *(iVar6 + 0x1c) = 0;
            }
            else {
                uVar34 = *param_3;
                *(iVar6 + 0x20) = *(param_3 + 4);
                *(iVar6 + 0x1c) = uVar34;
            }
            pcVar14 = uStack_64;
            pcVar23 = 0x1;
            param_8 = 0;
            *(iVar6 + 0x28) = param_4;
            *(iVar6 + 0x30) = param_5 & 1;
            piVar18 = param_1;
            param_6 = pcStack_60;
            piVar17 = piVar22;
            perf_trace_run_bpf_submit(iVar6,0x3c);
            param_7 = SUB84(piVar17,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18 = 0x809ba2c;
    uStack_a8 = 0x809ba2c;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar34 = uVar37;
    piVar17 = piVar18;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar36;
    pcStack_90 = param_3;
    piStack_88 = piVar22;
    piStack_80 = param_4;
    piStack_78 = param_1;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar15 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar15 = NULL;
            piVar17 = NULL;
            event_triggers_call(iVar10,0);
        }
        if (((uVar34 >> 6 & 1) == 0) &&
           (((uVar34 >> 9 & 1) == 0 || (uVar36 = trace_event_ignore_this_pid(iVar10), (uVar36 & 1) == 0))))
        goto code_r0x0809bab4;
    }
    else {
code_r0x0809bab4:
        pcVar15 = 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_e8,iVar10);
        if (iVar6 != 0) {
            uVar1 = puVar32[1];
            *(iVar6 + 8) = *puVar32;
            *(iVar6 + 0x10) = uVar1;
            *(iVar6 + 0x18) = *(puVar32 + 0x1a);
            if (pcVar14 == NULL) {
                *(iVar6 + 0x20) = 0;
                *(iVar6 + 0x1c) = 0;
            }
            else {
                uVar34 = *pcVar14;
                *(iVar6 + 0x20) = *(pcVar14 + 4);
                *(iVar6 + 0x1c) = uVar34;
            }
            *(iVar6 + 0x24) = piVar18;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar32 = auVar41._8_8_;
    piVar8 = auVar41._0_8_;
    *extraout_x18_00 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    pcStack_128 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    iVar6 = sp_el0;
    iStack_138 = *(iVar6 + 0x5e0);
    uVar36 = piVar17 & 0xffffffff;
    pcStack_140 = NULL;
    uStack_144 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar8[0xf];
    piVar19 = piVar17;
    ppuStack_130 = &puStack_b0;
    puStack_120 = param_2;
    uStack_118 = uVar37;
    pcStack_100 = pcVar14;
    uStack_f8 = piVar18 & 0xffffffff;
    auStack_110 = auVar40;
    if ((piVar8[0x10] != 0) || (pcVar14 = pcVar15, *piVar22 != 0)) {
        pcVar14 = &uStack_144;
        iVar6 = perf_trace_buf_alloc(0x2c,&pcStack_140);
        uVar38 = _strlen;
        if (iVar6 != 0) {
            *(pcStack_140 + 0xe8) = &ppuStack_130;
            *(pcStack_140 + 0xf8) = auStack_150;
            *(pcStack_140 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809bb40;
            *(pcStack_140 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar6 + 8) = *puVar32;
            *(iVar6 + 0x10) = uVar37;
            *(iVar6 + 0x18) = *(puVar32 + 0x1a);
            if (pcVar15 == NULL) {
                *(iVar6 + 0x20) = 0;
                *(iVar6 + 0x1c) = 0;
            }
            else {
                uVar34 = *pcVar15;
                *(iVar6 + 0x20) = *(pcVar15 + 4);
                *(iVar6 + 0x1c) = uVar34;
            }
            pcVar14 = uStack_144;
            pcVar23 = 0x1;
            param_8 = 0;
            *(iVar6 + 0x24) = piVar17;
            piVar19 = piVar8;
            param_6 = pcStack_140;
            piVar18 = piVar22;
            perf_trace_run_bpf_submit(iVar6,0x2c);
            param_7 = SUB84(piVar18,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_138) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar7 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_01 = 0x809bc94;
    uStack_188 = 0x809bc94;
    pcStack_180 = sym.perf_trace_cfg80211_cqm_pktloss_notify;
    iVar6 = sp_el0;
    iStack_198 = *(iVar6 + 0x5e0);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar34 = *(iVar10 + 0x48);
    piVar18 = piVar19;
    pcVar16 = pcVar23;
    pppuStack_190 = &ppuStack_130;
    pcStack_170 = pcVar15;
    piStack_168 = piVar22;
    uStack_160 = uVar36;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar15 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar15 = NULL;
            piVar18 = NULL;
            puStack_178 = puVar32;
            piStack_158 = piVar8;
            event_triggers_call(iVar10,0);
            auVar41._8_8_ = puStack_178;
            auVar41._0_8_ = piStack_158;
        }
        puStack_178 = auVar41._8_8_;
        piStack_158 = auVar41._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar10);
                auVar41._8_8_ = puStack_178;
                auVar41._0_8_ = piStack_158;
                if ((uVar36 & 1) != 0) goto code_r0x0809bd78;
            }
            goto code_r0x0809bd20;
        }
    }
    else {
code_r0x0809bd20:
        puStack_178 = auVar41._8_8_;
        piStack_158 = auVar41._0_8_;
        pcVar15 = 0x28;
        iVar6 = trace_event_buffer_reserve(&uStack_1c8,iVar10);
        auVar41._8_8_ = puStack_178;
        auVar41._0_8_ = piStack_158;
        if (iVar6 != 0) {
            uVar37 = puVar7[1];
            *(iVar6 + 8) = *puVar7;
            *(iVar6 + 0x10) = uVar37;
            *(iVar6 + 0x18) = *(puVar7 + 0x1a);
            *(iVar6 + 0x1c) = pcVar14;
            if (piVar19 == NULL) {
                *(iVar6 + 0x24) = 0;
                *(iVar6 + 0x20) = 0;
            }
            else {
                iVar10 = *piVar19;
                *(iVar6 + 0x24) = *(piVar19 + 4);
                *(iVar6 + 0x20) = iVar10;
            }
            *(iVar6 + 0x26) = pcVar23 & 1;
            trace_event_buffer_commit(&uStack_1c8);
            auVar41._8_8_ = puStack_178;
            auVar41._0_8_ = piStack_158;
        }
    }
code_r0x0809bd78:
    puStack_178 = auVar41._8_8_;
    piStack_158 = auVar41._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_198) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    piVar19 = auVar40._0_8_;
    *extraout_x18_02 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    pcStack_218 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    iVar6 = sp_el0;
    iStack_228 = *(iVar6 + 0x5e0);
    uVar38 = pcVar16 & 0xffffffff;
    uVar36 = pcVar15 & 0xffffffff;
    pcStack_230 = NULL;
    uStack_234 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar19[0xf];
    piVar17 = piVar18;
    pcVar23 = pcVar16;
    ppppuStack_220 = &pppuStack_190;
    if ((piVar19[0x10] != 0) || (pcVar14 = pcVar15, *piVar22 != 0)) {
        pcVar14 = &uStack_234;
        iVar6 = perf_trace_buf_alloc(0x2c,&pcStack_230);
        uVar31 = _strlen;
        if (iVar6 != 0) {
            *(pcStack_230 + 0xe8) = &ppppuStack_220;
            *(pcStack_230 + 0xf8) = auStack_240;
            *(pcStack_230 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809bdb0;
            *(pcStack_230 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar6 + 8) = *puVar32;
            *(iVar6 + 0x10) = uVar37;
            *(iVar6 + 0x18) = *(puVar32 + 0x1a);
            *(iVar6 + 0x1c) = pcVar15;
            if (piVar18 == NULL) {
                *(iVar6 + 0x24) = 0;
                *(iVar6 + 0x20) = 0;
            }
            else {
                iVar10 = *piVar18;
                *(iVar6 + 0x24) = *(piVar18 + 4);
                *(iVar6 + 0x20) = iVar10;
            }
            pcVar14 = uStack_234;
            pcVar23 = 0x1;
            param_8 = 0;
            *(iVar6 + 0x26) = pcVar16 & 1;
            piVar17 = piVar19;
            param_6 = pcStack_230;
            piVar8 = piVar22;
            perf_trace_run_bpf_submit(iVar6,0x2c);
            param_7 = SUB84(piVar8,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_228) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_03 = 0x809bf14;
    uStack_278 = 0x809bf14;
    iVar6 = sp_el0;
    iStack_288 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar34 = uVar37;
    pcVar15 = pcVar23;
    pcVar16 = param_6;
    ppppuStack_280 = &ppppuStack_220;
    uStack_270 = uVar38;
    uStack_260 = uVar36;
    piStack_258 = piVar18;
    piStack_250 = piVar22;
    piStack_248 = piVar19;
    iStack_2e0 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar10);
                if ((uVar36 & 1) != 0) goto code_r0x0809bfd8;
            }
            goto code_r0x0809bf9c;
        }
    }
    else {
code_r0x0809bf9c:
        pcVar14 = 0x30;
        iVar6 = trace_event_buffer_reserve(&uStack_2b8,iVar10);
        if (iVar6 != 0) {
            iVar10 = *(iVar11 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar11 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar6 + 8,iVar10);
            *(iVar6 + 0x28) = pcVar23;
            *(iVar6 + 0x2c) = param_6;
            trace_event_buffer_commit(&uStack_2b8);
            iStack_2e0 = iVar6;
        }
    }
code_r0x0809bfd8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_288) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    piVar18 = auVar40._0_8_;
    *extraout_x18_04 = sym.perf_trace_cfg80211_report_obss_beacon;
    pcStack_308 = sym.perf_trace_cfg80211_report_obss_beacon;
    pcStack_300 = sym.perf_trace_cfg80211_pmksa_candidate_notify;
    iVar6 = sp_el0;
    iStack_318 = *(iVar6 + 0x5e0);
    uVar36 = pcVar16 & 0xffffffff;
    uVar38 = pcVar15 & 0xffffffff;
    pcStack_320 = NULL;
    uStack_324 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar18[0xf];
    pcVar24 = pcVar15;
    pcVar25 = pcVar16;
    ppppuStack_310 = &ppppuStack_280;
    puStack_2f0 = puVar32;
    uStack_2e8 = uVar37;
    iStack_2d8 = iVar11;
    uStack_2d0 = pcVar23 & 0xffffffff;
    uStack_2c8 = param_6 & 0xffffffff;
    if ((piVar18[0x10] != 0) || (*piVar22 != 0)) {
        pcVar14 = &uStack_324;
        puVar7 = perf_trace_buf_alloc(0x34,&pcStack_320);
        uVar31 = _strlen;
        if (puVar7 != NULL) {
            *(pcStack_320 + 0xe8) = &ppppuStack_310;
            *(pcStack_320 + 0xf8) = auStack_330;
            *(pcStack_320 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809c010;
            *(pcStack_320 + 0x108) = 5;
            iVar6 = *(iVar10 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar10 + 0x188);
            }
            strlcpy(puVar7 + 1,iVar6,0x20);
            pcVar14 = uStack_324;
            pcVar24 = 0x1;
            param_8 = 0;
            *(puVar7 + 5) = pcVar15;
            *(puVar7 + 0x2c) = pcVar16;
            piVar17 = piVar18;
            pcVar25 = pcStack_320;
            piVar19 = piVar22;
            perf_trace_run_bpf_submit(puVar7,0x34);
            param_7 = SUB84(piVar19,0);
            puVar32 = puVar7;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_318) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar11 = auVar41._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_05 = 0x809c158;
    uStack_378 = 0x809c158;
    pcStack_370 = sym.perf_trace_cfg80211_report_obss_beacon;
    iVar6 = sp_el0;
    iStack_388 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar11 + 0x48);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uVar34 = iVar6;
    piVar19 = piVar17;
    pcVar23 = pcVar24;
    pcVar15 = pcVar25;
    ppppuStack_380 = &ppppuStack_310;
    puStack_360 = puVar32;
    piStack_350 = piVar22;
    uStack_348 = uVar38;
    uStack_340 = uVar36;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar19 = NULL;
            iStack_358 = iVar10;
            piStack_338 = piVar18;
            event_triggers_call(iVar11,0);
            auVar40._8_8_ = iStack_358;
            auVar40._0_8_ = piStack_338;
        }
        iStack_358 = auVar40._8_8_;
        piStack_338 = auVar40._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar11);
                auVar40._8_8_ = iStack_358;
                auVar40._0_8_ = piStack_338;
                if ((uVar36 & 1) != 0) goto code_r0x0809c260;
            }
            goto code_r0x0809c1ec;
        }
    }
    else {
code_r0x0809c1ec:
        iStack_358 = auVar40._8_8_;
        piStack_338 = auVar40._0_8_;
        pcVar16 = 0x4c;
        iVar10 = trace_event_buffer_reserve(&uStack_3b8,iVar11);
        auVar40._8_8_ = iStack_358;
        auVar40._0_8_ = piStack_338;
        if (iVar10 != 0) {
            iVar11 = *(auVar41._8_8_ + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(auVar41._8_8_ + 0x188);
            }
            pcVar16 = 0x20;
            strlcpy(iVar10 + 8,iVar11);
            uVar37 = *(pcVar14 + 8);
            *(iVar10 + 0x28) = *pcVar14;
            *(iVar10 + 0x30) = uVar37;
            *(iVar10 + 0x38) = *(pcVar14 + 0xd0);
            if (piVar17 == NULL) {
                *(iVar10 + 0x40) = 0;
                *(iVar10 + 0x3c) = 0;
            }
            else {
                iVar11 = *piVar17;
                *(iVar10 + 0x40) = *(piVar17 + 4);
                *(iVar10 + 0x3c) = iVar11;
            }
            *(iVar10 + 0x44) = pcVar24;
            *(iVar10 + 0x48) = pcVar25;
            trace_event_buffer_commit(&uStack_3b8);
            auVar40._8_8_ = iStack_358;
            auVar40._0_8_ = piStack_338;
        }
    }
code_r0x0809c260:
    iStack_358 = auVar40._8_8_;
    piStack_338 = auVar40._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_388) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar17 = auVar40._0_8_;
    *extraout_x18_06 = sym.perf_trace_cfg80211_tdls_oper_request;
    pcStack_418 = sym.perf_trace_cfg80211_tdls_oper_request;
    iVar10 = sp_el0;
    iStack_428 = *(iVar10 + 0x5e0);
    uVar36 = pcVar15 & 0xffffffff;
    uVar38 = pcVar23 & 0xffffffff;
    pcStack_430 = NULL;
    uStack_434 = 0;
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + piVar17[0xf];
    piVar18 = piVar19;
    pcVar25 = pcVar23;
    pcVar14 = pcVar15;
    ppppuStack_420 = &ppppuStack_380;
    if ((piVar17[0x10] != 0) || (pcVar24 = pcVar16, *piVar22 != 0)) {
        pcVar24 = &uStack_434;
        iVar10 = perf_trace_buf_alloc(0x4c,&pcStack_430);
        uVar31 = _strlen;
        if (iVar10 != 0) {
            *(pcStack_430 + 0xe8) = &ppppuStack_420;
            *(pcStack_430 + 0xf8) = auStack_440;
            *(pcStack_430 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809c29c;
            *(pcStack_430 + 0x108) = 5;
            iVar6 = *(iVar11 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar11 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar6,0x20);
            uVar37 = *(pcVar16 + 8);
            *(iVar10 + 0x28) = *pcVar16;
            *(iVar10 + 0x30) = uVar37;
            *(iVar10 + 0x38) = *(pcVar16 + 0xd0);
            if (piVar19 == NULL) {
                *(iVar10 + 0x40) = 0;
                *(iVar10 + 0x3c) = 0;
            }
            else {
                iVar6 = *piVar19;
                *(iVar10 + 0x40) = *(piVar19 + 4);
                *(iVar10 + 0x3c) = iVar6;
            }
            pcVar24 = uStack_434;
            pcVar25 = 0x1;
            param_8 = 0;
            *(iVar10 + 0x44) = pcVar23;
            *(iVar10 + 0x48) = pcVar15;
            piVar18 = piVar17;
            pcVar14 = pcStack_430;
            piVar8 = piVar22;
            perf_trace_run_bpf_submit(iVar10,0x4c);
            param_7 = SUB84(piVar8,0);
            iVar6 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_428) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._8_8_;
    iVar28 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_07 = 0x809c42c;
    uStack_468 = 0x809c42c;
    iVar10 = sp_el0;
    iStack_478 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar28 + 0x48);
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uVar34 = uVar31;
    ppppuStack_470 = &ppppuStack_420;
    piStack_460 = piVar22;
    uStack_458 = uVar38;
    uStack_450 = uVar36;
    piStack_448 = piVar17;
    iStack_4c8 = iVar28;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar23 = pcVar24;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar23 = NULL;
            piVar18 = NULL;
            event_triggers_call(iVar28,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar28);
                if ((uVar36 & 1) != 0) goto code_r0x0809c590;
            }
            goto code_r0x0809c4ac;
        }
    }
    else {
code_r0x0809c4ac:
        if (iVar12 == 0) {
            uVar31 = 0;
        }
        else {
            uVar31 = *(iVar12 + 0x20);
        }
        pcVar23 = uVar31 + 0x48;
        iVar10 = trace_event_buffer_reserve(&uStack_4a8,iVar28);
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar31 << 0x10 | 0x46;
            if (iVar12 != 0) {
                pcVar23 = *(iVar12 + 0x20);
                memcpy(iVar10 + 0x46,*(iVar12 + 0x18));
                uVar26 = *(iVar12 + 0x30);
                *(iVar10 + 0x14) = *(iVar12 + 0x34);
                *(iVar10 + 0x10) = uVar26;
                uVar26 = 0;
                if (*(iVar12 + 0x48) != 0) {
                    uVar26 = *(*(iVar12 + 0x48) + 0x28);
                }
                *(iVar10 + 0x28) = uVar26;
                iVar28 = *(iVar12 + 0x68);
                if (iVar28 != 0) {
                    if (iVar28 + 0x30 == NULL) {
                        *(iVar10 + 0x30) = 0;
                        *(iVar10 + 0x2c) = 0;
                    }
                    else {
                        uVar26 = *(iVar28 + 0x30);
                        *(iVar10 + 0x30) = *(iVar28 + 0x34);
                        *(iVar10 + 0x2c) = uVar26;
                    }
                }
                *(iVar10 + 0x32) = *(iVar12 + 0x89);
            }
            if (pcVar24 != NULL) {
                *(iVar10 + 0x33) = pcVar24[0xe];
                *(iVar10 + 0x38) = *pcVar24;
                if (pcVar24 + 8 == NULL) {
                    *(iVar10 + 0x44) = 0;
                    *(iVar10 + 0x40) = 0;
                }
                else {
                    uVar34 = *(pcVar24 + 8);
                    *(iVar10 + 0x44) = *(pcVar24 + 0xc);
                    *(iVar10 + 0x40) = uVar34;
                }
            }
            trace_event_buffer_commit(&uStack_4a8);
            iStack_4c8 = iVar10;
        }
    }
code_r0x0809c590:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_478) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar28 = auVar42._8_8_;
    piVar22 = auVar42._0_8_;
    *extraout_x18_08 = sym.perf_trace_cfg80211_scan_done;
    pcStack_4f8 = sym.perf_trace_cfg80211_scan_done;
    iVar10 = sp_el0;
    iStack_508 = *(iVar10 + 0x5e0);
    pcStack_510 = NULL;
    uStack_514 = 0;
    if (iVar28 == 0) {
        uVar36 = 0;
    }
    else {
        uVar36 = *(iVar28 + 0x20);
    }
    iVar10 = tpidr_el1;
    piVar17 = iVar10 + piVar22[0xf];
    ppppuStack_500 = &ppppuStack_470;
    iStack_4f0 = iVar11;
    iStack_4e8 = iVar6;
    pcStack_4e0 = pcVar16;
    piStack_4d8 = piVar19;
    uStack_4d0 = uVar31;
    iStack_4c0 = iVar12;
    pcStack_4b8 = pcVar24;
    if ((piVar22[0x10] != 0) || (pcVar15 = pcVar23, *piVar17 != 0)) {
        pcVar15 = &uStack_514;
        piVar19 = (uVar36 + 0x53U & 0xfffffff8) - 4;
        pcVar24 = perf_trace_buf_alloc(piVar19,&pcStack_510);
        uVar38 = _strlen;
        if (pcVar24 != NULL) {
            *(pcStack_510 + 0xe8) = &ppppuStack_500;
            *(pcStack_510 + 0xf8) = auStack_520;
            *(pcStack_510 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809c5c4;
            *(pcStack_510 + 0x108) = 5;
            *(pcVar24 + 0xc) = uVar36 << 0x10 | 0x46;
            if (iVar28 != 0) {
                memcpy(pcVar24 + 0x46,*(iVar28 + 0x18),*(iVar28 + 0x20));
                uVar34 = *(iVar28 + 0x30);
                *(pcVar24 + 0x14) = *(iVar28 + 0x34);
                *(pcVar24 + 0x10) = uVar34;
                uVar34 = 0;
                if (*(iVar28 + 0x48) != 0) {
                    uVar34 = *(*(iVar28 + 0x48) + 0x28);
                }
                *(pcVar24 + 0x28) = uVar34;
                iVar6 = *(iVar28 + 0x68);
                if (iVar6 != 0) {
                    if (iVar6 + 0x30 == NULL) {
                        *(pcVar24 + 0x30) = 0;
                        *(pcVar24 + 0x2c) = 0;
                    }
                    else {
                        uVar34 = *(iVar6 + 0x30);
                        *(pcVar24 + 0x30) = *(iVar6 + 0x34);
                        *(pcVar24 + 0x2c) = uVar34;
                    }
                }
                pcVar24[0x32] = *(iVar28 + 0x89);
            }
            if (pcVar23 != NULL) {
                pcVar24[0x33] = pcVar23[0xe];
                *(pcVar24 + 0x38) = *pcVar23;
                if (pcVar23 + 8 == NULL) {
                    *(pcVar24 + 0x44) = 0;
                    *(pcVar24 + 0x40) = 0;
                }
                else {
                    uVar34 = *(pcVar23 + 8);
                    *(pcVar24 + 0x44) = *(pcVar23 + 0xc);
                    *(pcVar24 + 0x40) = uVar34;
                }
            }
            pcVar15 = uStack_514;
            pcVar25 = 0x1;
            param_8 = 0;
            piVar18 = piVar22;
            pcVar14 = pcStack_510;
            piVar8 = piVar17;
            perf_trace_run_bpf_submit(pcVar24,piVar19);
            param_7 = SUB84(piVar8,0);
            pcVar16 = pcVar24;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_508) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_09 = 0x809c7b8;
    uStack_548 = 0x809c7b8;
    iVar6 = sp_el0;
    iStack_558 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_568 = 0;
    uStack_560 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    uVar34 = uVar37;
    ppppuStack_550 = &ppppuStack_500;
    pcStack_538 = pcVar23;
    piStack_530 = piVar17;
    iStack_5a8 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar23 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar23 = NULL;
            piVar18 = NULL;
            iStack_540 = iVar28;
            piStack_528 = piVar22;
            event_triggers_call(iVar10,0);
            auVar42._8_8_ = iStack_540;
            auVar42._0_8_ = piStack_528;
        }
        iStack_540 = auVar42._8_8_;
        piStack_528 = auVar42._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                auVar42._8_8_ = iStack_540;
                auVar42._0_8_ = piStack_528;
                if ((uVar38 & 1) != 0) goto code_r0x0809c874;
            }
            goto code_r0x0809c838;
        }
    }
    else {
code_r0x0809c838:
        iStack_540 = auVar42._8_8_;
        piStack_528 = auVar42._0_8_;
        pcVar23 = 0x30;
        iVar6 = trace_event_buffer_reserve(&uStack_588,iVar10);
        auVar42._8_8_ = iStack_540;
        auVar42._0_8_ = piStack_528;
        if (iVar6 != 0) {
            iVar10 = *(iVar11 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar11 + 0x188);
            }
            pcVar23 = 0x20;
            strlcpy(iVar6 + 8,iVar10);
            *(iVar6 + 0x28) = pcVar15;
            trace_event_buffer_commit(&uStack_588);
            auVar42._8_8_ = iStack_540;
            auVar42._0_8_ = piStack_528;
            iStack_5a8 = iVar6;
        }
    }
code_r0x0809c874:
    iStack_540 = auVar42._8_8_;
    piStack_528 = auVar42._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_558) {
        return;
    }
    auVar43 = __stack_chk_fail();
    iVar10 = auVar43._8_8_;
    piVar17 = auVar43._0_8_;
    *extraout_x18_10 = sym.perf_trace_wiphy_id_evt;
    pcStack_5c8 = sym.perf_trace_wiphy_id_evt;
    iVar6 = sp_el0;
    iStack_5d8 = *(iVar6 + 0x5e0);
    pcStack_5e0 = NULL;
    uStack_5e4 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar17[0xf];
    ppppuStack_5d0 = &ppppuStack_550;
    pcStack_5c0 = pcVar16;
    piStack_5b8 = piVar19;
    uStack_5b0 = uVar37;
    iStack_5a0 = iVar11;
    pcStack_598 = pcVar15;
    if ((piVar17[0x10] != 0) || (pcVar15 = pcVar23, *piVar22 != 0)) {
        pcVar15 = &uStack_5e4;
        piVar8 = perf_trace_buf_alloc(0x34,&pcStack_5e0);
        uVar38 = _strlen;
        if (piVar8 != NULL) {
            *(pcStack_5e0 + 0xe8) = &ppppuStack_5d0;
            *(pcStack_5e0 + 0xf8) = auStack_5f0;
            *(pcStack_5e0 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809c8a8;
            *(pcStack_5e0 + 0x108) = 5;
            iVar6 = *(iVar10 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar10 + 0x188);
            }
            strlcpy(piVar8 + 1,iVar6,0x20);
            pcVar15 = uStack_5e4;
            pcVar25 = 0x1;
            param_8 = 0;
            piVar8[5] = pcVar23;
            piVar18 = piVar17;
            pcVar14 = pcStack_5e0;
            piVar19 = piVar22;
            perf_trace_run_bpf_submit(piVar8,0x34);
            param_7 = SUB84(piVar19,0);
            piVar19 = piVar8;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar38 = auVar40._8_8_;
    iVar11 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_11 = 0x809c9e4;
    uStack_648 = 0x809c9e4;
    pcStack_640 = sym.perf_trace_cfg80211_tdls_oper_request;
    pcStack_628 = sym.perf_trace_cfg80211_scan_done;
    pcStack_620 = sym.perf_trace_wiphy_id_evt;
    iVar6 = sp_el0;
    iStack_658 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar11 + 0x48);
    uStack_668 = 0;
    uStack_660 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    uStack_688 = 0;
    uStack_680 = 0;
    uVar34 = iVar6;
    piVar8 = piVar18;
    pcVar16 = pcVar25;
    pcVar24 = pcVar14;
    uVar26 = param_7;
    uVar27 = param_8;
    ppppuStack_650 = &ppppuStack_5d0;
    uStack_630 = uVar36;
    piStack_618 = piVar19;
    piStack_608 = piVar22;
    pcStack_600 = pcVar23;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar23 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar23 = NULL;
            piVar8 = NULL;
            iStack_610 = iVar10;
            piStack_5f8 = piVar17;
            event_triggers_call(iVar11,0);
            auVar43._8_8_ = iStack_610;
            auVar43._0_8_ = piStack_5f8;
        }
        iStack_610 = auVar43._8_8_;
        piStack_5f8 = auVar43._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar11);
                auVar43._8_8_ = iStack_610;
                auVar43._0_8_ = piStack_5f8;
                if ((uVar36 & 1) != 0) goto code_r0x0809cb30;
            }
            goto code_r0x0809ca84;
        }
    }
    else {
code_r0x0809ca84:
        iStack_610 = auVar43._8_8_;
        piStack_5f8 = auVar43._0_8_;
        pcVar23 = pcVar14 + 0x44;
        iVar10 = trace_event_buffer_reserve(&uStack_688,iVar11);
        auVar43._8_8_ = iStack_610;
        auVar43._0_8_ = piStack_5f8;
        if (iVar10 != 0) {
            *(iVar10 + 0x38) = pcVar14 << 0x10 | 0x44;
            iVar11 = *(uVar38 + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(uVar38 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar11,0x20);
            if (pcVar15 == NULL) {
                uVar30 = 0;
                *(iVar10 + 0x28) = 0;
            }
            else {
                *(iVar10 + 0x28) = *pcVar15;
                *(iVar10 + 0x2c) = *(pcVar15 + 4);
                uVar30 = *(pcVar15 + 8);
            }
            *(iVar10 + 0x30) = uVar30;
            if (piVar18 == NULL) {
                *(iVar10 + 0x36) = 0;
                *(iVar10 + 0x32) = 0;
            }
            else {
                iVar11 = *piVar18;
                *(iVar10 + 0x36) = *(piVar18 + 4);
                *(iVar10 + 0x32) = iVar11;
            }
            memcpy(iVar10 + *(iVar10 + 0x38),pcVar25);
            *(iVar10 + 0x3c) = param_7;
            *(iVar10 + 0x40) = param_8;
            trace_event_buffer_commit(&uStack_688);
            auVar43._8_8_ = iStack_610;
            auVar43._0_8_ = piStack_5f8;
            pcVar23 = pcVar14;
        }
    }
code_r0x0809cb30:
    iStack_610 = auVar43._8_8_;
    piStack_5f8 = auVar43._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_658) {
        return;
    }
    auVar44 = __stack_chk_fail();
    iVar11 = auVar44._8_8_;
    piVar17 = auVar44._0_8_;
    *extraout_x18_12 = sym.perf_trace_cfg80211_get_bss;
    pcStack_6e8 = sym.perf_trace_cfg80211_get_bss;
    iVar10 = sp_el0;
    iStack_6f8 = *(iVar10 + 0x5e0);
    iStack_700 = 0;
    uStack_704 = 0;
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + piVar17[0xf];
    piVar18 = piVar8;
    pcVar14 = pcVar16;
    uStack_70c = uVar26;
    uStack_708 = uVar27;
    ppppuStack_6f0 = &ppppuStack_650;
    if ((piVar17[0x10] != 0) || (pcVar15 = pcVar23, *piVar22 != 0)) {
        pcVar15 = &uStack_704;
        uVar38 = (pcVar24 + 0x4fU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(uVar38,&iStack_700);
        uVar36 = _strlen;
        if (iVar10 != 0) {
            *(iStack_700 + 0xe8) = &ppppuStack_6f0;
            *(iStack_700 + 0xf8) = auStack_710;
            *(iStack_700 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809cb70;
            *(iStack_700 + 0x108) = 5;
            *(iVar10 + 0x38) = pcVar24 << 0x10 | 0x44;
            iVar6 = *(iVar11 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar11 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar6,0x20);
            if (pcVar23 == NULL) {
                uVar30 = 0;
                *(iVar10 + 0x28) = 0;
            }
            else {
                *(iVar10 + 0x28) = *pcVar23;
                *(iVar10 + 0x2c) = *(pcVar23 + 4);
                uVar30 = *(pcVar23 + 8);
            }
            *(iVar10 + 0x30) = uVar30;
            if (piVar8 == NULL) {
                *(iVar10 + 0x36) = 0;
                *(iVar10 + 0x32) = 0;
            }
            else {
                iVar6 = *piVar8;
                *(iVar10 + 0x36) = *(piVar8 + 4);
                *(iVar10 + 0x32) = iVar6;
            }
            memcpy(iVar10 + *(iVar10 + 0x38),pcVar16,pcVar24);
            pcVar15 = uStack_704;
            pcVar14 = 0x1;
            *(iVar10 + 0x3c) = uStack_70c;
            *(iVar10 + 0x40) = uStack_708;
            piVar18 = piVar17;
            perf_trace_run_bpf_submit(iVar10,uVar38);
            iVar6 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_6f8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar28 = auVar40._8_8_;
    uVar36 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_13 = 0x809cd48;
    uStack_748 = 0x809cd48;
    pcStack_728 = sym.perf_trace_cfg80211_get_bss;
    iVar10 = sp_el0;
    iStack_758 = *(iVar10 + 0x5e0);
    uVar37 = *(uVar36 + 0x48);
    uStack_768 = 0;
    uStack_760 = 0;
    uStack_778 = 0;
    uStack_770 = 0;
    uStack_788 = 0;
    uStack_780 = 0;
    uVar34 = uVar37;
    piVar19 = piVar18;
    pcVar25 = pcVar14;
    ppppuStack_750 = &ppppuStack_6f0;
    piStack_740 = piVar22;
    pcStack_738 = pcVar16;
    pcStack_730 = pcVar24;
    uStack_7b0 = uVar36;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar15;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar19 = NULL;
            iStack_720 = iVar11;
            piStack_718 = piVar17;
            event_triggers_call(uVar36,0);
            auVar44._8_8_ = iStack_720;
            auVar44._0_8_ = piStack_718;
        }
        iStack_720 = auVar44._8_8_;
        piStack_718 = auVar44._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar31 = trace_event_ignore_this_pid(uVar36);
                auVar44._8_8_ = iStack_720;
                auVar44._0_8_ = piStack_718;
                if ((uVar31 & 1) != 0) goto code_r0x0809ceac;
            }
            goto code_r0x0809cdd4;
        }
    }
    else {
code_r0x0809cdd4:
        iStack_720 = auVar44._8_8_;
        piStack_718 = auVar44._0_8_;
        pcVar16 = pcVar14 + 0x58;
        uVar36 = trace_event_buffer_reserve(&uStack_788,uVar36);
        auVar44._8_8_ = iStack_720;
        auVar44._0_8_ = piStack_718;
        if (uVar36 != 0) {
            *(uVar36 + 0x38) = pcVar14 << 0x10 | 0x56;
            iVar10 = *(iVar28 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar28 + 0x188);
            }
            pcVar16 = 0x20;
            strlcpy(uVar36 + 8,iVar10);
            if (*pcVar15 == NULL) {
                *(uVar36 + 0x28) = 0;
                uVar30 = 0;
            }
            else {
                *(uVar36 + 0x28) = **pcVar15;
                *(uVar36 + 0x2c) = *(*pcVar15 + 4);
                uVar30 = *(*pcVar15 + 8);
            }
            *(uVar36 + 0x30) = uVar30;
            *(uVar36 + 0x34) = *(pcVar15 + 8);
            if (piVar18 != NULL) {
                pcVar16 = pcVar14;
                memcpy(uVar36 + *(uVar36 + 0x38),piVar18);
            }
            *(uVar36 + 0x3c) = *(pcVar15 + 0xc);
            *(uVar36 + 0x40) = *(pcVar15 + 0x10);
            *(uVar36 + 0x48) = *(pcVar15 + 0x18);
            if (pcVar15 + 0x20 == NULL) {
                *(uVar36 + 0x54) = 0;
                *(uVar36 + 0x50) = 0;
            }
            else {
                uVar34 = *(pcVar15 + 0x20);
                *(uVar36 + 0x54) = *(pcVar15 + 0x24);
                *(uVar36 + 0x50) = uVar34;
            }
            trace_event_buffer_commit(&uStack_788);
            auVar44._8_8_ = iStack_720;
            auVar44._0_8_ = piStack_718;
            uStack_7b0 = uVar36;
        }
    }
code_r0x0809ceac:
    iStack_720 = auVar44._8_8_;
    piStack_718 = auVar44._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_758) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar20 = auVar40._0_8_;
    *extraout_x18_14 = sym.perf_trace_cfg80211_inform_bss_frame;
    pcStack_7e8 = sym.perf_trace_cfg80211_inform_bss_frame;
    iVar10 = sp_el0;
    iStack_7f8 = *(iVar10 + 0x5e0);
    iStack_800 = 0;
    uStack_804 = 0;
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + piVar20[0xf];
    piVar17 = piVar19;
    pcVar24 = pcVar25;
    ppppuStack_7f0 = &ppppuStack_750;
    iStack_7e0 = iVar6;
    uStack_7d0 = uVar38;
    piStack_7c8 = piVar8;
    uStack_7c0 = uVar37;
    iStack_7b8 = iVar28;
    piStack_7a8 = piVar18;
    pcStack_7a0 = pcVar14;
    pcStack_798 = pcVar15;
    if ((piVar20[0x10] != 0) || (pcVar14 = pcVar16, uVar36 = uStack_7b0, *piVar22 != 0)) {
        pcVar14 = &uStack_804;
        uVar36 = (pcVar25 + 99U & 0xfffffff8) - 4;
        piVar18 = perf_trace_buf_alloc(uVar36,&iStack_800);
        uVar38 = _strlen;
        if (piVar18 != NULL) {
            *(iStack_800 + 0xe8) = &ppppuStack_7f0;
            *(iStack_800 + 0xf8) = auStack_810;
            *(iStack_800 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809cee4;
            *(iStack_800 + 0x108) = 5;
            *(piVar18 + 7) = pcVar25 << 0x10 | 0x56;
            iVar6 = *(iVar11 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar11 + 0x188);
            }
            strlcpy(piVar18 + 1,iVar6,0x20);
            if (*pcVar16 == NULL) {
                piVar18[5] = 0;
                uVar30 = 0;
            }
            else {
                *(piVar18 + 5) = **pcVar16;
                *(piVar18 + 0x2c) = *(*pcVar16 + 4);
                uVar30 = *(*pcVar16 + 8);
            }
            *(piVar18 + 6) = uVar30;
            *(piVar18 + 0x34) = *(pcVar16 + 8);
            if (piVar19 != NULL) {
                memcpy(piVar18 + *(piVar18 + 7),piVar19,pcVar25);
            }
            *(piVar18 + 0x3c) = *(pcVar16 + 0xc);
            piVar18[8] = *(pcVar16 + 0x10);
            piVar18[9] = *(pcVar16 + 0x18);
            if (pcVar16 + 0x20 == NULL) {
                *(piVar18 + 0x54) = 0;
                *(piVar18 + 10) = 0;
            }
            else {
                uVar34 = *(pcVar16 + 0x20);
                *(piVar18 + 0x54) = *(pcVar16 + 0x24);
                *(piVar18 + 10) = uVar34;
            }
            pcVar14 = uStack_804;
            pcVar24 = 0x1;
            piVar17 = piVar20;
            perf_trace_run_bpf_submit(piVar18,uVar36);
            piVar8 = piVar18;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_7f8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar18 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_15 = 0x809d0dc;
    uStack_838 = 0x809d0dc;
    iVar6 = sp_el0;
    iStack_848 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_858 = 0;
    uStack_850 = 0;
    uStack_868 = 0;
    uStack_860 = 0;
    uStack_878 = 0;
    uStack_870 = 0;
    uVar34 = uVar37;
    ppppuStack_840 = &ppppuStack_7f0;
    pcStack_830 = pcVar16;
    piStack_820 = piVar22;
    piStack_818 = piVar20;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d1d0;
            }
            goto code_r0x0809d158;
        }
    }
    else {
code_r0x0809d158:
        pcVar14 = 0x1c;
        iVar6 = trace_event_buffer_reserve(&uStack_878,iVar10);
        if (iVar6 != 0) {
            if (piVar18 + 10 == NULL) {
                *(iVar6 + 0xc) = 0;
                *(iVar6 + 8) = 0;
                puVar29 = *piVar18;
                if (puVar29 != NULL) goto code_r0x0809d190;
code_r0x0809d1c0:
                uVar30 = 0;
                *(iVar6 + 0x10) = 0;
            }
            else {
                iVar10 = piVar18[10];
                *(iVar6 + 0xc) = *(piVar18 + 0x54);
                *(iVar6 + 8) = iVar10;
                puVar29 = *piVar18;
                if (puVar29 == NULL) goto code_r0x0809d1c0;
code_r0x0809d190:
                *(iVar6 + 0x10) = *puVar29;
                *(iVar6 + 0x14) = *(*piVar18 + 4);
                uVar30 = *(*piVar18 + 8);
            }
            *(iVar6 + 0x18) = uVar30;
            trace_event_buffer_commit(&uStack_878);
        }
    }
code_r0x0809d1d0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_848) {
        return;
    }
    auVar45 = __stack_chk_fail();
    piVar20 = auVar45._8_8_;
    piVar18 = auVar45._0_8_;
    *extraout_x18_16 = sym.perf_trace_cfg80211_bss_evt;
    pcStack_8a8 = sym.perf_trace_cfg80211_bss_evt;
    iVar6 = sp_el0;
    iStack_8b8 = *(iVar6 + 0x5e0);
    iStack_8c0 = 0;
    uStack_8c4 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar18[0xf];
    ppppuStack_8b0 = &ppppuStack_840;
    uStack_8a0 = uVar36;
    uStack_898 = uVar37;
    auStack_890 = auVar40;
    if ((piVar18[0x10] != 0) || (*piVar22 != 0)) {
        pcVar14 = &uStack_8c4;
        iVar6 = perf_trace_buf_alloc(0x1c,&iStack_8c0);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_8c0 + 0xe8) = &ppppuStack_8b0;
            *(iStack_8c0 + 0x108) = 5;
            *(iStack_8c0 + 0xf8) = auStack_8d0;
            *(iStack_8c0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809d204;
            if (piVar20 + 10 == NULL) {
                *(iVar6 + 0xc) = 0;
                *(iVar6 + 8) = 0;
                puVar29 = *piVar20;
                if (puVar29 != NULL) goto code_r0x0809d2e0;
code_r0x0809d310:
                uVar30 = 0;
                *(iVar6 + 0x10) = 0;
            }
            else {
                iVar10 = piVar20[10];
                *(iVar6 + 0xc) = *(piVar20 + 0x54);
                *(iVar6 + 8) = iVar10;
                puVar29 = *piVar20;
                if (puVar29 == NULL) goto code_r0x0809d310;
code_r0x0809d2e0:
                *(iVar6 + 0x10) = *puVar29;
                *(iVar6 + 0x14) = *(*piVar20 + 4);
                uVar30 = *(*piVar20 + 8);
            }
            pcVar14 = uStack_8c4;
            pcVar24 = 0x1;
            *(iVar6 + 0x18) = uVar30;
            piVar17 = piVar18;
            perf_trace_run_bpf_submit(iVar6,0x1c);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_8b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_17 = 0x809d36c;
    uStack_8f8 = 0x809d36c;
    iVar6 = sp_el0;
    uVar36 = auVar40._8_8_ & 0xffffffff;
    iStack_908 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_928 = 0;
    uStack_920 = 0;
    uStack_938 = 0;
    uStack_930 = 0;
    uVar34 = uVar37;
    ppppuStack_900 = &ppppuStack_8b0;
    piStack_8e0 = piVar22;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            piStack_8f0 = piVar20;
            piStack_8d8 = piVar18;
            event_triggers_call(iVar10,0);
            auVar45._8_8_ = piStack_8f0;
            auVar45._0_8_ = piStack_8d8;
        }
        piStack_8f0 = auVar45._8_8_;
        piStack_8d8 = auVar45._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                auVar45._8_8_ = piStack_8f0;
                auVar45._0_8_ = piStack_8d8;
                if ((uVar38 & 1) != 0) goto code_r0x0809d408;
            }
            goto code_r0x0809d3e8;
        }
    }
    else {
code_r0x0809d3e8:
        piStack_8f0 = auVar45._8_8_;
        piStack_8d8 = auVar45._0_8_;
        pcVar14 = 0xc;
        iVar6 = trace_event_buffer_reserve(&uStack_938,iVar10);
        auVar45._8_8_ = piStack_8f0;
        auVar45._0_8_ = piStack_8d8;
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar40._8_4_;
            trace_event_buffer_commit(&uStack_938);
            auVar45._8_8_ = piStack_8f0;
            auVar45._0_8_ = piStack_8d8;
        }
    }
code_r0x0809d408:
    piStack_8f0 = auVar45._8_8_;
    piStack_8d8 = auVar45._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_908) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar18 = auVar40._0_8_;
    *extraout_x18_18 = sym.perf_trace_cfg80211_return_uint;
    pcStack_968 = sym.perf_trace_cfg80211_return_uint;
    pcStack_960 = sym.perf_trace_cfg80211_bss_evt;
    iVar6 = sp_el0;
    iStack_978 = *(iVar6 + 0x5e0);
    uVar38 = auVar40._8_8_ & 0xffffffff;
    iStack_980 = 0;
    uStack_984 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar18[0xf];
    ppppuStack_970 = &ppppuStack_900;
    uStack_958 = uVar37;
    iStack_950 = iVar10;
    uStack_948 = uVar36;
    if ((piVar18[0x10] != 0) || (*piVar22 != 0)) {
        pcVar14 = &uStack_984;
        iVar6 = perf_trace_buf_alloc(0xc,&iStack_980);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_980 + 0xe8) = &ppppuStack_970;
            pcVar14 = uStack_984;
            pcVar24 = 0x1;
            *(iStack_980 + 0xf8) = auStack_990;
            *(iStack_980 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809d43c;
            *(iStack_980 + 0x108) = 5;
            *(iVar6 + 8) = auVar40._8_4_;
            piVar17 = piVar18;
            perf_trace_run_bpf_submit(iVar6,0xc);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_978) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_19 = 0x809d54c;
    uStack_9b8 = 0x809d54c;
    iVar6 = sp_el0;
    uVar36 = auVar40._8_8_ & 0xffffffff;
    iStack_9c8 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_9d8 = 0;
    uStack_9d0 = 0;
    uStack_9e8 = 0;
    uStack_9e0 = 0;
    uStack_9f8 = 0;
    uStack_9f0 = 0;
    uVar34 = uVar37;
    ppppuStack_9c0 = &ppppuStack_970;
    piStack_9b0 = piVar22;
    uStack_9a0 = uVar38;
    piStack_998 = piVar18;
    if ((uVar34 >> 8 & 1) == 0) {
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d5e8;
            }
            goto code_r0x0809d5c8;
        }
    }
    else {
code_r0x0809d5c8:
        pcVar14 = 0xc;
        iVar6 = trace_event_buffer_reserve(&uStack_9f8,iVar10);
        if (iVar6 != 0) {
            *(iVar6 + 8) = auVar40._8_4_;
            trace_event_buffer_commit(&uStack_9f8);
        }
    }
code_r0x0809d5e8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_9c8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    piVar18 = auVar40._0_8_;
    *extraout_x18_20 = sym.perf_trace_cfg80211_return_u32;
    pcStack_a28 = sym.perf_trace_cfg80211_return_u32;
    pcStack_a20 = sym.perf_trace_cfg80211_return_uint;
    iVar6 = sp_el0;
    iStack_a38 = *(iVar6 + 0x5e0);
    uVar38 = auVar40._8_8_ & 0xffffffff;
    iStack_a40 = 0;
    uStack_a44 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar18[0xf];
    ppppuStack_a30 = &ppppuStack_9c0;
    uStack_a18 = uVar37;
    iStack_a10 = iVar10;
    uStack_a08 = uVar36;
    if ((piVar18[0x10] != 0) || (*piVar22 != 0)) {
        pcVar14 = &uStack_a44;
        iVar6 = perf_trace_buf_alloc(0xc,&iStack_a40);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_a40 + 0xe8) = &ppppuStack_a30;
            pcVar14 = uStack_a44;
            pcVar24 = 0x1;
            *(iStack_a40 + 0xf8) = auStack_a50;
            *(iStack_a40 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809d61c;
            *(iStack_a40 + 0x108) = 5;
            *(iVar6 + 8) = auVar40._8_4_;
            piVar17 = piVar18;
            perf_trace_run_bpf_submit(iVar6,0xc);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a38) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar36 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_21 = 0x809d72c;
    uStack_a88 = 0x809d72c;
    pcStack_a70 = sym.perf_trace_cfg80211_return_u32;
    iVar6 = sp_el0;
    iStack_a98 = *(iVar6 + 0x5e0);
    uVar31 = *(iVar10 + 0x48);
    uStack_aa8 = 0;
    uStack_aa0 = 0;
    uStack_ab8 = 0;
    uStack_ab0 = 0;
    uStack_ac8 = 0;
    uStack_ac0 = 0;
    uVar34 = uVar31;
    piVar20 = piVar17;
    ppppuStack_a90 = &ppppuStack_a30;
    pcStack_a80 = pcVar25;
    piStack_a68 = piVar22;
    uStack_a60 = uVar38;
    piStack_a58 = piVar18;
    iStack_ae8 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar15 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar15 = NULL;
            piVar20 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809d8a0;
            }
            goto code_r0x0809d7b4;
        }
    }
    else {
code_r0x0809d7b4:
        if (piVar17 == NULL) {
            uVar31 = 0;
        }
        else {
            uVar31 = *(piVar17 + 2);
        }
        pcVar15 = uVar31 + 0x40;
        iVar6 = trace_event_buffer_reserve(&uStack_ac8,iVar10);
        if (iVar6 != 0) {
            *(iVar6 + 0x3c) = uVar31 << 0x10 | 0x40;
            iVar10 = *(uVar36 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(uVar36 + 0x188);
            }
            pcVar15 = 0x20;
            strlcpy(iVar6 + 8,iVar10);
            uVar34 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar34 = *(pcVar14 + 0x28);
            }
            *(iVar6 + 0x28) = uVar34;
            *(iVar6 + 0x2c) = piVar17 == NULL;
            if (piVar17 == NULL) {
                *(iVar6 + 0x34) = 0;
                *(iVar6 + 0x2d) = 0;
                *(iVar6 + 0x31) = 0;
            }
            else {
                *(iVar6 + 0x2d) = *piVar17;
                *(iVar6 + 0x2e) = *(piVar17 + 1);
                *(iVar6 + 0x2f) = *(piVar17 + 2);
                *(iVar6 + 0x30) = *(piVar17 + 3);
                *(iVar6 + 0x31) = *(piVar17 + 4);
                *(iVar6 + 0x32) = *(piVar17 + 5);
                *(iVar6 + 0x34) = *(piVar17 + 0xc);
                *(iVar6 + 0x38) = *(piVar17 + 0x14);
                if ((piVar17[3] != 0) && (pcVar15 = *(piVar17 + 2), *(piVar17 + 2) != 0)) {
                    memcpy(iVar6 + *(iVar6 + 0x3c));
                }
            }
            trace_event_buffer_commit(&uStack_ac8);
            iStack_ae8 = iVar6;
        }
    }
code_r0x0809d8a0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a98) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    piVar22 = auVar40._0_8_;
    *extraout_x18_22 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    pcStack_b28 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    pcStack_b20 = sym.perf_trace_cfg80211_inform_bss_frame;
    iVar6 = sp_el0;
    iStack_b38 = *(iVar6 + 0x5e0);
    iStack_b40 = 0;
    uStack_b44 = 0;
    if (piVar20 == NULL) {
        uVar38 = 0;
    }
    else {
        uVar38 = *(piVar20 + 2);
    }
    iVar6 = tpidr_el1;
    piVar18 = iVar6 + piVar22[0xf];
    piVar21 = piVar20;
    uStack_b78 = uVar31;
    ppppuStack_b30 = &ppppuStack_a90;
    iStack_b10 = iVar11;
    piStack_b08 = piVar8;
    piStack_b00 = piVar19;
    uStack_af8 = uVar31;
    uStack_af0 = uVar36;
    pcStack_ae0 = pcVar14;
    piStack_ad8 = piVar17;
    if ((piVar22[0x10] != 0) || (pcVar14 = pcVar15, *piVar18 != 0)) {
        pcVar14 = &uStack_b44;
        uVar36 = (uVar38 + 0x4bU & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(uVar36,&iStack_b40);
        uVar31 = _strlen;
        if (uVar9 != 0) {
            *(iStack_b40 + 0xe8) = &ppppuStack_b30;
            *(iStack_b40 + 0xf8) = auStack_b50;
            *(iStack_b40 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809d8d8;
            *(iStack_b40 + 0x108) = 5;
            *(uVar9 + 0x3c) = uVar38 << 0x10 | 0x40;
            iVar6 = *(iVar10 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar10 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar6,0x20);
            uVar34 = 0;
            if ((pcVar15 != NULL) && (pcVar15 < 0xfffffffffffff001)) {
                uVar34 = *(pcVar15 + 0x28);
            }
            *(uVar9 + 0x28) = uVar34;
            *(uVar9 + 0x2c) = piVar20 == NULL;
            if (piVar20 == NULL) {
                *(uVar9 + 0x34) = 0;
                *(uVar9 + 0x2d) = 0;
                *(uVar9 + 0x31) = 0;
            }
            else {
                *(uVar9 + 0x2d) = *piVar20;
                *(uVar9 + 0x2e) = *(piVar20 + 1);
                *(uVar9 + 0x2f) = *(piVar20 + 2);
                *(uVar9 + 0x30) = *(piVar20 + 3);
                *(uVar9 + 0x31) = *(piVar20 + 4);
                *(uVar9 + 0x32) = *(piVar20 + 5);
                *(uVar9 + 0x34) = *(piVar20 + 0xc);
                *(uVar9 + 0x38) = *(piVar20 + 0x14);
                if ((piVar20[3] != 0) && (piVar20[2] != 0)) {
                    memcpy(uVar9 + *(uVar9 + 0x3c));
                }
            }
            pcVar14 = uStack_b44;
            pcVar24 = 0x1;
            piVar21 = piVar22;
            perf_trace_run_bpf_submit(uVar9,uVar36);
            uStack_b78 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b38) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    uVar9 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_23 = 0x809dae0;
    uStack_b88 = 0x809dae0;
    iVar6 = sp_el0;
    iStack_b98 = *(iVar6 + 0x5e0);
    uVar31 = *(uVar9 + 0x48);
    uStack_ba8 = 0;
    uStack_ba0 = 0;
    uStack_bb8 = 0;
    uStack_bb0 = 0;
    uStack_bc8 = 0;
    uStack_bc0 = 0;
    uVar34 = uVar31;
    piVar17 = piVar21;
    ppppuStack_b90 = &ppppuStack_b30;
    pcStack_b80 = pcVar15;
    uStack_b70 = uVar36;
    piStack_b68 = piVar20;
    piStack_b60 = piVar18;
    piStack_b58 = piVar22;
    uStack_bf0 = uVar9;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar16 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar16 = NULL;
            piVar17 = NULL;
            event_triggers_call(uVar9,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(uVar9);
                if ((uVar36 & 1) != 0) goto code_r0x0809dc24;
            }
            goto code_r0x0809db68;
        }
    }
    else {
code_r0x0809db68:
        uVar34 = *(piVar21 + 1);
        uVar31 = uVar34;
        pcVar15 = piVar21[4];
        pcVar16 = pcVar15 + uVar34 + 0x4c;
        uVar36 = trace_event_buffer_reserve(&uStack_bc8,uVar9);
        if (uVar36 != 0) {
            *(uVar36 + 0x3c) = uVar34 << 0x10 | 0x4c;
            *(uVar36 + 0x48) = uVar34 + 0x4c | pcVar15 << 0x10;
            iVar6 = *(iVar11 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar11 + 0x188);
            }
            pcVar16 = 0x20;
            strlcpy(uVar36 + 8,iVar6);
            uVar37 = *(pcVar14 + 8);
            *(uVar36 + 0x28) = *pcVar14;
            *(uVar36 + 0x30) = uVar37;
            *(uVar36 + 0x38) = *(pcVar14 + 0xd0);
            if (*piVar21 != 0) {
                pcVar16 = piVar21[1];
                memcpy(uVar36 + *(uVar36 + 0x3c));
            }
            puVar29 = piVar21[2];
            if (puVar29 == NULL) {
                *(uVar36 + 0x44) = 0;
                *(uVar36 + 0x40) = 0;
                iVar6 = piVar21[3];
            }
            else {
                uVar26 = *puVar29;
                *(uVar36 + 0x44) = *(puVar29 + 1);
                *(uVar36 + 0x40) = uVar26;
                iVar6 = piVar21[3];
            }
            if (iVar6 != 0) {
                pcVar16 = piVar21[4];
                memcpy(uVar36 + *(uVar36 + 0x48));
            }
            trace_event_buffer_commit(&uStack_bc8);
            uStack_bf0 = uVar36;
        }
    }
code_r0x0809dc24:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b98) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar28 = auVar40._8_8_;
    piVar19 = auVar40._0_8_;
    *extraout_x18_24 = sym.perf_trace_cfg80211_ft_event;
    pcStack_c28 = sym.perf_trace_cfg80211_ft_event;
    pcStack_c10 = sym.perf_trace_cfg80211_report_wowlan_wakeup;
    iVar6 = sp_el0;
    iStack_c38 = *(iVar6 + 0x5e0);
    iStack_c40 = 0;
    uStack_c44 = 0;
    uVar34 = *(piVar17 + 1);
    uVar2 = *(piVar17 + 4);
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar19[0xf];
    piVar18 = piVar17;
    ppppuStack_c30 = &ppppuStack_b90;
    pcStack_c20 = pcVar23;
    uStack_c18 = uVar38;
    iStack_c08 = iVar10;
    pcStack_c00 = pcVar15;
    uStack_bf8 = uVar31;
    iStack_be8 = iVar11;
    pcStack_be0 = pcVar14;
    piStack_bd8 = piVar21;
    if ((piVar19[0x10] != 0) || (pcVar23 = pcVar16, uVar36 = uStack_bf0, *piVar22 != 0)) {
        pcVar23 = &uStack_c44;
        uVar36 = (uVar34 + uVar2 + 0x57 & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(uVar36,&iStack_c40);
        uVar38 = _strlen;
        if (uVar9 != 0) {
            *(iStack_c40 + 0xe8) = &ppppuStack_c30;
            *(iStack_c40 + 0xf8) = auStack_c50;
            *(iStack_c40 + 0x100) = ~(-1L << (uVar38 & 0x3f)) & 0x809dc70;
            *(iStack_c40 + 0x108) = 5;
            *(uVar9 + 0x3c) = uVar34 << 0x10 | 0x4c;
            *(uVar9 + 0x48) = uVar34 + 0x4c | uVar2 << 0x10;
            iVar6 = *(iVar28 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar28 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar6,0x20);
            uVar37 = *(pcVar16 + 8);
            *(uVar9 + 0x28) = *pcVar16;
            *(uVar9 + 0x30) = uVar37;
            *(uVar9 + 0x38) = *(pcVar16 + 0xd0);
            if (*piVar17 != 0) {
                memcpy(uVar9 + *(uVar9 + 0x3c),*piVar17,piVar17[1]);
            }
            puVar29 = piVar17[2];
            if (puVar29 == NULL) {
                *(uVar9 + 0x44) = 0;
                *(uVar9 + 0x40) = 0;
                iVar6 = piVar17[3];
            }
            else {
                uVar26 = *puVar29;
                *(uVar9 + 0x44) = *(puVar29 + 1);
                *(uVar9 + 0x40) = uVar26;
                iVar6 = piVar17[3];
            }
            if (iVar6 != 0) {
                memcpy(uVar9 + *(uVar9 + 0x48),iVar6,piVar17[4]);
            }
            pcVar23 = uStack_c44;
            pcVar24 = 0x1;
            piVar18 = piVar19;
            perf_trace_run_bpf_submit(uVar9,uVar36);
            uVar31 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_c38) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_25 = 0x809de5c;
    uStack_c78 = 0x809de5c;
    iVar6 = sp_el0;
    iStack_c88 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar10 + 0x48);
    uStack_c98 = 0;
    uStack_c90 = 0;
    uStack_ca8 = 0;
    uStack_ca0 = 0;
    uStack_cb8 = 0;
    uStack_cb0 = 0;
    uVar35 = iVar6;
    ppppuStack_c80 = &ppppuStack_c30;
    uStack_c70 = uVar36;
    piStack_c68 = piVar22;
    piStack_c60 = piVar17;
    piStack_c58 = piVar19;
    iStack_cd8 = iVar10;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar23;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar18 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar10);
                if ((uVar36 & 1) != 0) goto code_r0x0809df2c;
            }
            goto code_r0x0809dedc;
        }
    }
    else {
code_r0x0809dedc:
        pcVar14 = 0x2c;
        iVar10 = trace_event_buffer_reserve(&uStack_cb8,iVar10);
        if (iVar10 != 0) {
            iVar12 = *(iVar11 + 0x1f8);
            if (iVar12 == 0) {
                iVar12 = *(iVar11 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar10 + 8,iVar12);
            uVar35 = 0;
            if ((pcVar23 != NULL) && (pcVar23 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar23 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            trace_event_buffer_commit(&uStack_cb8);
            iStack_cd8 = iVar10;
        }
    }
code_r0x0809df2c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c88) {
        return;
    }
    auVar46 = __stack_chk_fail();
    iVar12 = auVar46._8_8_;
    piVar17 = auVar46._0_8_;
    *extraout_x18_26 = sym.perf_trace_cfg80211_stop_iface;
    pcStack_cf8 = sym.perf_trace_cfg80211_stop_iface;
    iVar10 = sp_el0;
    iStack_d08 = *(iVar10 + 0x5e0);
    iStack_d10 = 0;
    uStack_d14 = 0;
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + piVar17[0xf];
    iStack_d40 = iVar6;
    ppppuStack_d00 = &ppppuStack_c80;
    pcStack_cf0 = pcVar16;
    uStack_ce8 = uVar31;
    iStack_ce0 = iVar6;
    iStack_cd0 = iVar11;
    pcStack_cc8 = pcVar23;
    if ((piVar17[0x10] != 0) || (pcVar23 = pcVar14, *piVar22 != 0)) {
        pcVar23 = &uStack_d14;
        iVar6 = perf_trace_buf_alloc(0x2c,&iStack_d10);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_d10 + 0xe8) = &ppppuStack_d00;
            *(iStack_d10 + 0xf8) = auStack_d20;
            *(iStack_d10 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809df60;
            *(iStack_d10 + 0x108) = 5;
            iVar10 = *(iVar12 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar12 + 0x188);
            }
            strlcpy(iVar6 + 8,iVar10,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            pcVar23 = uStack_d14;
            pcVar24 = 0x1;
            *(iVar6 + 0x28) = uVar35;
            piVar18 = piVar17;
            perf_trace_run_bpf_submit(iVar6,0x2c);
            iStack_d40 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_d08) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_27 = 0x809e0b0;
    uStack_d58 = 0x809e0b0;
    pcStack_d50 = sym.perf_trace_cfg80211_stop_iface;
    iVar6 = sp_el0;
    iStack_d68 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar10 + 0x48);
    uStack_d78 = 0;
    uStack_d70 = 0;
    uStack_d88 = 0;
    uStack_d80 = 0;
    uStack_d98 = 0;
    uStack_d90 = 0;
    uVar35 = iVar6;
    piVar19 = piVar18;
    pcVar15 = pcVar24;
    ppppuStack_d60 = &ppppuStack_d00;
    pcStack_d38 = pcVar14;
    piStack_d30 = piVar22;
    iStack_dc8 = iVar10;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar23;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            iStack_d48 = iVar12;
            piStack_d28 = piVar17;
            event_triggers_call(iVar10,0);
            auVar46._8_8_ = iStack_d48;
            auVar46._0_8_ = piStack_d28;
        }
        iStack_d48 = auVar46._8_8_;
        piStack_d28 = auVar46._0_8_;
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar10);
                auVar46._8_8_ = iStack_d48;
                auVar46._0_8_ = piStack_d28;
                if ((uVar36 & 1) != 0) goto code_r0x0809e1b4;
            }
            goto code_r0x0809e13c;
        }
    }
    else {
code_r0x0809e13c:
        iStack_d48 = auVar46._8_8_;
        piStack_d28 = auVar46._0_8_;
        pcVar14 = 0x40;
        iVar10 = trace_event_buffer_reserve(&uStack_d98,iVar10);
        auVar46._8_8_ = iStack_d48;
        auVar46._0_8_ = piStack_d28;
        if (iVar10 != 0) {
            iVar12 = *(iVar11 + 0x1f8);
            if (iVar12 == 0) {
                iVar12 = *(iVar11 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar10 + 8,iVar12);
            uVar35 = 0;
            if ((pcVar23 != NULL) && (pcVar23 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar23 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            *(iVar10 + 0x30) = piVar18;
            if (pcVar24 == NULL) {
                *(iVar10 + 0x3c) = 0;
                *(iVar10 + 0x38) = 0;
            }
            else {
                uVar35 = *pcVar24;
                *(iVar10 + 0x3c) = *(pcVar24 + 4);
                *(iVar10 + 0x38) = uVar35;
            }
            trace_event_buffer_commit(&uStack_d98);
            auVar46._8_8_ = iStack_d48;
            auVar46._0_8_ = piStack_d28;
            iStack_dc8 = iVar10;
        }
    }
code_r0x0809e1b4:
    iStack_d48 = auVar46._8_8_;
    piStack_d28 = auVar46._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_d68) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._8_8_;
    piVar8 = auVar40._0_8_;
    *extraout_x18_28 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_de8 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_de0 = sym.perf_trace_cfg80211_ft_event;
    iVar10 = sp_el0;
    iStack_df8 = *(iVar10 + 0x5e0);
    iStack_e00 = 0;
    uStack_e04 = 0;
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + piVar8[0xf];
    piVar17 = piVar19;
    pcVar16 = pcVar15;
    ppppuStack_df0 = &ppppuStack_d60;
    iStack_dd8 = iVar28;
    iStack_dd0 = iVar6;
    iStack_dc0 = iVar11;
    pcStack_db8 = pcVar23;
    piStack_db0 = piVar18;
    pcStack_da8 = pcVar24;
    if ((piVar8[0x10] != 0) || (pcVar23 = pcVar14, *piVar22 != 0)) {
        pcVar23 = &uStack_e04;
        iVar10 = perf_trace_buf_alloc(0x44,&iStack_e00);
        uVar36 = _strlen;
        if (iVar10 != 0) {
            *(iStack_e00 + 0xe8) = &ppppuStack_df0;
            *(iStack_e00 + 0xf8) = auStack_e10;
            *(iStack_e00 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809e1ec;
            *(iStack_e00 + 0x108) = 5;
            iVar6 = *(iVar12 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar12 + 0x188);
            }
            strlcpy(iVar10 + 8,iVar6,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            *(iVar10 + 0x28) = uVar35;
            *(iVar10 + 0x30) = piVar19;
            if (pcVar15 == NULL) {
                *(iVar10 + 0x3c) = 0;
                *(iVar10 + 0x38) = 0;
            }
            else {
                uVar35 = *pcVar15;
                *(iVar10 + 0x3c) = *(pcVar15 + 4);
                *(iVar10 + 0x38) = uVar35;
            }
            pcVar23 = uStack_e04;
            pcVar16 = 0x1;
            piVar17 = piVar8;
            perf_trace_run_bpf_submit(iVar10,0x44);
            iVar6 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_df8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar28 = auVar40._8_8_;
    iVar11 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_29 = 0x809e374;
    uStack_e48 = 0x809e374;
    iVar10 = sp_el0;
    iStack_e58 = *(iVar10 + 0x5e0);
    iVar10 = *(iVar11 + 0x48);
    uStack_e68 = 0;
    uStack_e60 = 0;
    uStack_e78 = 0;
    uStack_e70 = 0;
    uStack_e88 = 0;
    uStack_e80 = 0;
    uVar35 = iVar10;
    piVar18 = piVar17;
    ppppuStack_e50 = &ppppuStack_df0;
    pcStack_e40 = pcVar14;
    piStack_e30 = piVar19;
    pcStack_e28 = pcVar15;
    piStack_e20 = piVar22;
    piStack_e18 = piVar8;
    iStack_eb0 = iVar11;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar23;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar18 = NULL;
            event_triggers_call(iVar11,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar36 = trace_event_ignore_this_pid(iVar11);
                if ((uVar36 & 1) != 0) goto code_r0x0809e450;
            }
            goto code_r0x0809e3fc;
        }
    }
    else {
code_r0x0809e3fc:
        pcVar14 = 0x38;
        iVar11 = trace_event_buffer_reserve(&uStack_e88,iVar11);
        if (iVar11 != 0) {
            iVar13 = *(iVar28 + 0x1f8);
            if (iVar13 == 0) {
                iVar13 = *(iVar28 + 0x188);
            }
            pcVar14 = 0x20;
            strlcpy(iVar11 + 8,iVar13);
            uVar35 = 0;
            if ((pcVar23 != NULL) && (pcVar23 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar23 + 0x28);
            }
            *(iVar11 + 0x28) = uVar35;
            *(iVar11 + 0x30) = piVar17;
            trace_event_buffer_commit(&uStack_e88);
            iStack_eb0 = iVar11;
        }
    }
code_r0x0809e450:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e58) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar13 = auVar40._8_8_;
    piVar8 = auVar40._0_8_;
    *extraout_x18_30 = sym.perf_trace_cfg80211_pmsr_complete;
    pcStack_ed8 = sym.perf_trace_cfg80211_pmsr_complete;
    iVar11 = sp_el0;
    iStack_ee8 = *(iVar11 + 0x5e0);
    iStack_ef0 = 0;
    uStack_ef4 = 0;
    iVar11 = tpidr_el1;
    piVar22 = iVar11 + piVar8[0xf];
    piVar19 = piVar18;
    iStack_f30 = iVar10;
    ppppuStack_ee0 = &ppppuStack_e50;
    iStack_ed0 = iVar12;
    iStack_ec0 = iVar6;
    iStack_eb8 = iVar10;
    iStack_ea8 = iVar28;
    pcStack_ea0 = pcVar23;
    piStack_e98 = piVar17;
    if ((piVar8[0x10] != 0) || (pcVar23 = pcVar14, *piVar22 != 0)) {
        pcVar23 = &uStack_ef4;
        iVar6 = perf_trace_buf_alloc(0x3c,&iStack_ef0);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_ef0 + 0xe8) = &ppppuStack_ee0;
            *(iStack_ef0 + 0xf8) = auStack_f00;
            *(iStack_ef0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809e488;
            *(iStack_ef0 + 0x108) = 5;
            iVar10 = *(iVar13 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar13 + 0x188);
            }
            strlcpy(iVar6 + 8,iVar10,0x20);
            uVar35 = 0;
            if ((pcVar14 != NULL) && (pcVar14 < 0xfffffffffffff001)) {
                uVar35 = *(pcVar14 + 0x28);
            }
            pcVar23 = uStack_ef4;
            pcVar16 = 0x1;
            *(iVar6 + 0x28) = uVar35;
            *(iVar6 + 0x30) = piVar18;
            piVar19 = piVar8;
            perf_trace_run_bpf_submit(iVar6,0x3c);
            iStack_f30 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_ee8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    uVar36 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_31 = 0x809e5e8;
    uStack_f38 = 0x809e5e8;
    iVar6 = sp_el0;
    iStack_f48 = *(iVar6 + 0x5e0);
    iVar6 = *(uVar36 + 0x48);
    uStack_f58 = 0;
    uStack_f50 = 0;
    uStack_f68 = 0;
    uStack_f60 = 0;
    uStack_f78 = 0;
    uStack_f70 = 0;
    uVar35 = iVar6;
    piVar17 = piVar19;
    ppppuStack_f40 = &ppppuStack_ee0;
    pcStack_f20 = pcVar14;
    piStack_f18 = piVar22;
    piStack_f10 = piVar18;
    piStack_f08 = piVar8;
    uStack_fa0 = uVar36;
    if ((uVar35 >> 8 & 1) == 0) {
        pcVar14 = pcVar23;
        if ((uVar35 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar17 = NULL;
            event_triggers_call(uVar36,0);
        }
        if ((uVar35 >> 6 & 1) == 0) {
            if ((uVar35 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(uVar36);
                if ((uVar38 & 1) != 0) goto code_r0x0809e6fc;
            }
            goto code_r0x0809e670;
        }
    }
    else {
code_r0x0809e670:
        iVar6 = piVar19[2];
        pcVar14 = iVar6 + 0x48;
        uVar36 = trace_event_buffer_reserve(&uStack_f78,uVar36);
        if (uVar36 != 0) {
            *(uVar36 + 0x44) = iVar6 << 0x10 | 0x48;
            iVar11 = *(iVar10 + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(iVar10 + 0x188);
            }
            strlcpy(uVar36 + 8,iVar11,0x20);
            uVar37 = *(pcVar23 + 8);
            *(uVar36 + 0x28) = *pcVar23;
            *(uVar36 + 0x30) = uVar37;
            *(uVar36 + 0x38) = *(pcVar23 + 0xd0);
            if (piVar19 == NULL) {
                *(uVar36 + 0x40) = 0;
                *(uVar36 + 0x3c) = 0;
            }
            else {
                iVar11 = *piVar19;
                *(uVar36 + 0x40) = *(piVar19 + 4);
                *(uVar36 + 0x3c) = iVar11;
            }
            pcVar14 = piVar19[2];
            memcpy(uVar36 + *(uVar36 + 0x44),piVar19[1]);
            trace_event_buffer_commit(&uStack_f78);
            uStack_fa0 = uVar36;
        }
    }
code_r0x0809e6fc:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f48) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar28 = auVar40._8_8_;
    piVar8 = auVar40._0_8_;
    *extraout_x18_32 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_fd8 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_fc0 = sym.perf_trace_cfg80211_pmsr_report;
    pcStack_fb8 = sym.perf_trace_cfg80211_pmsr_complete;
    iVar11 = sp_el0;
    pcVar15 = sym.perf_trace_cfg80211_update_owe_info_event;
    iStack_fe8 = *(iVar11 + 0x5e0);
    iStack_ff0 = 0;
    uStack_ff4 = 0;
    uVar35 = *(piVar17 + 2);
    uVar36 = uVar35;
    iVar11 = tpidr_el1;
    piVar22 = iVar11 + piVar8[0xf];
    piVar18 = piVar17;
    iStack_1030 = iVar13;
    ppppuStack_fe0 = &ppppuStack_f40;
    uStack_fd0 = uVar34;
    iStack_fb0 = iVar13;
    iStack_fa8 = iVar6;
    iStack_f98 = iVar10;
    pcStack_f90 = pcVar23;
    piStack_f88 = piVar19;
    if ((piVar8[0x10] != 0) || (pcVar23 = pcVar14, uVar38 = uStack_fa0, *piVar22 != 0)) {
        pcVar23 = &uStack_ff4;
        uVar38 = (uVar35 + 0x53 & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(uVar38,&iStack_ff0);
        uVar31 = _strlen;
        if (iVar6 != 0) {
            *(iStack_ff0 + 0xe8) = &ppppuStack_fe0;
            *(iStack_ff0 + 0xf8) = auStack_1000;
            *(iStack_ff0 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809e734;
            *(iStack_ff0 + 0x108) = 5;
            *(iVar6 + 0x44) = uVar35 << 0x10 | 0x48;
            iVar10 = *(iVar28 + 0x1f8);
            if (iVar10 == 0) {
                iVar10 = *(iVar28 + 0x188);
            }
            strlcpy(iVar6 + 8,iVar10,0x20);
            uVar37 = *(pcVar14 + 8);
            *(iVar6 + 0x28) = *pcVar14;
            *(iVar6 + 0x30) = uVar37;
            *(iVar6 + 0x38) = *(pcVar14 + 0xd0);
            if (piVar17 == NULL) {
                *(iVar6 + 0x40) = 0;
                *(iVar6 + 0x3c) = 0;
            }
            else {
                iVar10 = *piVar17;
                *(iVar6 + 0x40) = *(piVar17 + 4);
                *(iVar6 + 0x3c) = iVar10;
            }
            memcpy(iVar6 + *(iVar6 + 0x44),piVar17[1],piVar17[2]);
            pcVar23 = uStack_ff4;
            pcVar16 = 0x1;
            piVar18 = piVar8;
            perf_trace_run_bpf_submit(iVar6,uVar38);
            iStack_1030 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_fe8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar32 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_33 = 0x809e8dc;
    uStack_1038 = 0x809e8dc;
    iVar6 = sp_el0;
    iStack_1048 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_1058 = 0;
    uStack_1050 = 0;
    uStack_1068 = 0;
    uStack_1060 = 0;
    uStack_1078 = 0;
    uStack_1070 = 0;
    uVar34 = uVar37;
    piVar19 = piVar18;
    pcVar25 = pcVar16;
    ppppuStack_1040 = &ppppuStack_fe0;
    pcStack_1028 = pcVar14;
    uStack_1020 = uVar38;
    piStack_1018 = piVar22;
    piStack_1010 = piVar17;
    piStack_1008 = piVar8;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar14 = pcVar23;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar14 = NULL;
            piVar19 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809e99c;
            }
            goto code_r0x0809e968;
        }
    }
    else {
code_r0x0809e968:
        pcVar14 = 0x30;
        iVar6 = trace_event_buffer_reserve(&uStack_1078,iVar10);
        if (iVar6 != 0) {
            uVar1 = puVar32[1];
            *(iVar6 + 8) = *puVar32;
            *(iVar6 + 0x10) = uVar1;
            uVar26 = *(puVar32 + 0x1a);
            *(iVar6 + 0x20) = piVar18;
            *(iVar6 + 0x28) = pcVar16;
            *(iVar6 + 0x18) = uVar26;
            *(iVar6 + 0x1c) = pcVar23;
            trace_event_buffer_commit(&uStack_1078);
        }
    }
code_r0x0809e99c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1048) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar32 = auVar41._8_8_;
    piVar8 = auVar41._0_8_;
    *extraout_x18_34 = sym.perf_trace_cfg80211_bss_color_notify;
    pcStack_10c8 = sym.perf_trace_cfg80211_bss_color_notify;
    iVar6 = sp_el0;
    pcVar24 = sym.perf_trace_cfg80211_bss_color_notify;
    iStack_10d8 = *(iVar6 + 0x5e0);
    uVar31 = piVar19 & 0xffffffff;
    uVar38 = pcVar14 & 0xffffffff;
    iStack_10e0 = 0;
    uStack_10e4 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar8[0xf];
    piVar17 = piVar19;
    ppppuStack_10d0 = &ppppuStack_1040;
    iStack_10c0 = iVar28;
    uStack_10b0 = uVar37;
    uStack_1098 = pcVar23 & 0xffffffff;
    uStack_1090 = piVar18 & 0xffffffff;
    pcStack_1088 = pcVar16;
    auStack_10a8 = auVar40;
    if ((piVar8[0x10] != 0) || (pcVar16 = pcVar14, *piVar22 != 0)) {
        pcVar16 = &uStack_10e4;
        iVar6 = perf_trace_buf_alloc(0x34,&iStack_10e0);
        uVar9 = _strlen;
        if (iVar6 != 0) {
            *(iStack_10e0 + 0xe8) = &ppppuStack_10d0;
            *(iStack_10e0 + 0xf8) = auStack_10f0;
            pcVar16 = uStack_10e4;
            *(iStack_10e0 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x809e9d4;
            *(iStack_10e0 + 0x108) = 5;
            uVar37 = puVar32[1];
            *(iVar6 + 8) = *puVar32;
            *(iVar6 + 0x10) = uVar37;
            uVar26 = *(puVar32 + 0x1a);
            *(iVar6 + 0x20) = piVar19;
            *(iVar6 + 0x28) = pcVar25;
            *(iVar6 + 0x18) = uVar26;
            *(iVar6 + 0x1c) = pcVar14;
            piVar17 = piVar8;
            perf_trace_run_bpf_submit(iVar6,0x34,pcVar16,piVar8,1,iStack_10e0,piVar22,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_10d8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    uVar9 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_35 = 0x809eb14;
    uStack_1128 = 0x809eb14;
    iVar6 = sp_el0;
    iStack_1138 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_1148 = 0;
    uStack_1140 = 0;
    uStack_1158 = 0;
    uStack_1150 = 0;
    uStack_1168 = 0;
    uStack_1160 = 0;
    uVar34 = uVar37;
    piVar18 = piVar17;
    ppppuStack_1130 = &ppppuStack_10d0;
    piStack_1120 = piVar22;
    uStack_1110 = uVar31;
    uStack_1108 = uVar38;
    pcStack_1100 = pcVar25;
    piStack_10f8 = piVar8;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar23 = pcVar16;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar23 = NULL;
            piVar18 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(iVar10);
                if ((uVar38 & 1) != 0) goto code_r0x0809ebf8;
            }
            goto code_r0x0809eb9c;
        }
    }
    else {
code_r0x0809eb9c:
        pcVar23 = 0x18;
        iVar6 = trace_event_buffer_reserve(&uStack_1168,iVar10);
        if (iVar6 != 0) {
            uVar26 = 0;
            if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                uVar26 = *(uVar9 + 0x28);
            }
            *(iVar6 + 8) = uVar26;
            if (pcVar16 == NULL) {
                *(iVar6 + 0x10) = 0;
                *(iVar6 + 0xc) = 0;
            }
            else {
                uVar34 = *pcVar16;
                *(iVar6 + 0x10) = *(pcVar16 + 4);
                *(iVar6 + 0xc) = uVar34;
            }
            *(iVar6 + 0x14) = piVar17;
            trace_event_buffer_commit(&uStack_1168);
        }
    }
code_r0x0809ebf8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1138) {
        return;
    }
    auVar47 = __stack_chk_fail();
    uVar38 = auVar47._8_8_;
    piVar8 = auVar47._0_8_;
    *extraout_x18_36 = sym.perf_trace_cfg80211_assoc_comeback;
    pcStack_11a8 = sym.perf_trace_cfg80211_assoc_comeback;
    iVar6 = sp_el0;
    pcVar14 = sym.perf_trace_cfg80211_assoc_comeback;
    iStack_11b8 = *(iVar6 + 0x5e0);
    uVar31 = piVar18 & 0xffffffff;
    iStack_11c0 = 0;
    uStack_11c4 = 0;
    iVar6 = tpidr_el1;
    piVar22 = iVar6 + piVar8[0xf];
    piVar19 = piVar18;
    ppppuStack_11b0 = &ppppuStack_1130;
    puStack_11a0 = puVar32;
    uStack_1198 = uVar37;
    pcStack_1180 = pcVar16;
    uStack_1178 = piVar17 & 0xffffffff;
    auStack_1190 = auVar40;
    if ((piVar8[0x10] != 0) || (pcVar16 = pcVar23, *piVar22 != 0)) {
        pcVar16 = &uStack_11c4;
        iVar6 = perf_trace_buf_alloc(0x1c,&iStack_11c0);
        uVar9 = _strlen;
        if (iVar6 != 0) {
            uVar26 = 0;
            *(iStack_11c0 + 0xe8) = &ppppuStack_11b0;
            *(iStack_11c0 + 0xf8) = auStack_11d0;
            *(iStack_11c0 + 0x100) = ~(-1L << (uVar9 & 0x3f)) & 0x809ec30;
            *(iStack_11c0 + 0x108) = 5;
            if ((uVar38 != 0) && (uVar38 < 0xfffffffffffff001)) {
                uVar26 = *(uVar38 + 0x28);
            }
            *(iVar6 + 8) = uVar26;
            if (pcVar23 == NULL) {
                *(iVar6 + 0x10) = 0;
                *(iVar6 + 0xc) = 0;
            }
            else {
                uVar34 = *pcVar23;
                *(iVar6 + 0x10) = *(pcVar23 + 4);
                *(iVar6 + 0xc) = uVar34;
            }
            pcVar16 = uStack_11c4;
            *(iVar6 + 0x14) = piVar18;
            piVar19 = piVar8;
            perf_trace_run_bpf_submit(iVar6,0x1c,pcVar16,piVar8,1,iStack_11c0,piVar22,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_11b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._8_8_;
    uVar9 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_37 = 0x809ed8c;
    uStack_1228 = 0x809ed8c;
    pcStack_1210 = sym.perf_trace_cfg80211_update_owe_info_event;
    pcStack_1208 = sym.perf_trace_cfg80211_bss_color_notify;
    pcStack_1200 = sym.perf_trace_cfg80211_assoc_comeback;
    iVar6 = sp_el0;
    iStack_1238 = *(iVar6 + 0x5e0);
    uVar39 = *(uVar9 + 0x48);
    uStack_1248 = 0;
    uStack_1240 = 0;
    uStack_1258 = 0;
    uStack_1250 = 0;
    uStack_1268 = 0;
    uStack_1260 = 0;
    uVar34 = uVar39;
    piVar18 = piVar19;
    ppppuStack_1230 = &ppppuStack_11b0;
    uStack_1220 = uVar36;
    pcStack_11f0 = pcVar23;
    piStack_11e8 = piVar22;
    uStack_11e0 = uVar31;
    uStack_1280 = uVar9;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar23 = pcVar16;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar23 = NULL;
            piVar18 = NULL;
            uStack_11f8 = uVar38;
            piStack_11d8 = piVar8;
            event_triggers_call(uVar9,0);
            auVar47._8_8_ = uStack_11f8;
            auVar47._0_8_ = piStack_11d8;
        }
        uStack_11f8 = auVar47._8_8_;
        piStack_11d8 = auVar47._0_8_;
        if ((uVar34 >> 6 & 1) == 0) {
            if ((uVar34 >> 9 & 1) != 0) {
                uVar38 = trace_event_ignore_this_pid(uVar9);
                auVar47._8_8_ = uStack_11f8;
                auVar47._0_8_ = piStack_11d8;
                if ((uVar38 & 1) != 0) goto code_r0x0809efa8;
            }
            goto code_r0x0809ee1c;
        }
    }
    else {
code_r0x0809ee1c:
        uStack_11f8 = auVar47._8_8_;
        piStack_11d8 = auVar47._0_8_;
        uVar3 = *(piVar19 + 4);
        uVar39 = uVar3;
        uVar4 = *(piVar19 + 9);
        uVar36 = uVar4;
        uVar5 = *(piVar19 + 0xd);
        pcVar14 = uVar5;
        pcVar24 = uVar39 + 0x84;
        pcVar15 = pcVar24 + uVar36;
        pcVar23 = pcVar15 + pcVar14;
        uVar38 = trace_event_buffer_reserve(&uStack_1268,uVar9);
        auVar47._8_8_ = uStack_11f8;
        auVar47._0_8_ = piStack_11d8;
        if (uVar38 != 0) {
            uVar34 = pcVar24 | uVar4 << 0x10;
            pcVar24 = uVar34;
            uVar35 = pcVar15 | uVar5 << 0x10;
            pcVar15 = uVar35;
            *(uVar38 + 0x78) = uVar34;
            *(uVar38 + 0x4c) = uVar3 << 0x10 | 0x84;
            *(uVar38 + 0x80) = uVar35;
            iVar6 = *(iVar10 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar10 + 0x188);
            }
            pcVar23 = 0x20;
            strlcpy(uVar38 + 8,iVar6);
            uVar37 = *(pcVar16 + 8);
            *(uVar38 + 0x28) = *pcVar16;
            *(uVar38 + 0x30) = uVar37;
            uVar34 = *(pcVar16 + 0xd0);
            *(uVar38 + 0x3c) = 0;
            *(uVar38 + 0x38) = uVar34;
            *(uVar38 + 0x44) = 0;
            puVar29 = *piVar19;
            if (puVar29 != NULL) {
                uVar26 = *puVar29;
                *(uVar38 + 0x40) = *(puVar29 + 1);
                *(uVar38 + 0x3c) = uVar26;
            }
            puVar29 = piVar19[2];
            if (puVar29 != NULL) {
                uVar26 = *puVar29;
                *(uVar38 + 0x46) = *(puVar29 + 1);
                *(uVar38 + 0x42) = uVar26;
            }
            *(uVar38 + 0x48) = piVar19[1];
            if ((piVar19[3] != 0) && (pcVar23 = *(piVar19 + 4), pcVar23 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x4c));
            }
            *(uVar38 + 0x50) = 0;
            *(uVar38 + 0x68) = 0;
            *(uVar38 + 0x58) = 0;
            *(uVar38 + 0x60) = 0;
            puVar32 = piVar19[5];
            if (puVar32 != NULL) {
                uVar37 = puVar32[1];
                uVar1 = puVar32[2];
                uVar33 = *puVar32;
                *(uVar38 + 0x68) = *(puVar32 + 3);
                *(uVar38 + 0x58) = uVar37;
                *(uVar38 + 0x60) = uVar1;
                *(uVar38 + 0x50) = uVar33;
            }
            *(uVar38 + 0x6a) = 0;
            *(uVar38 + 0x72) = 0;
            puVar32 = piVar19[6];
            if (puVar32 != NULL) {
                uVar37 = *puVar32;
                *(uVar38 + 0x72) = *(puVar32 + 1);
                *(uVar38 + 0x6a) = uVar37;
            }
            *(uVar38 + 0x76) = piVar19[7];
            *(uVar38 + 0x77) = *(piVar19 + 0x39);
            if ((piVar19[8] != 0) && (pcVar23 = *(piVar19 + 9), pcVar23 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x78));
            }
            *(uVar38 + 0x7c) = 0;
            if (piVar19[0xb] != NULL) {
                *(uVar38 + 0x7c) = *piVar19[0xb];
            }
            if ((piVar19[0xc] != 0) && (pcVar23 = *(piVar19 + 0xd), pcVar23 != NULL)) {
                memcpy(uVar38 + *(uVar38 + 0x80));
            }
            trace_event_buffer_commit(&uStack_1268);
            auVar47._8_8_ = uStack_11f8;
            auVar47._0_8_ = piStack_11d8;
            uStack_1280 = uVar38;
        }
    }
code_r0x0809efa8:
    uStack_11f8 = auVar47._8_8_;
    piStack_11d8 = auVar47._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1238) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar11 = auVar40._8_8_;
    piVar17 = auVar40._0_8_;
    *extraout_x18_38 = sym.perf_trace_link_station_add_mod;
    pcStack_12c8 = sym.perf_trace_link_station_add_mod;
    iVar6 = sp_el0;
    iStack_12d8 = *(iVar6 + 0x5e0);
    iStack_12e0 = 0;
    uStack_12e4 = 0;
    uVar3 = *(piVar18 + 4);
    uVar4 = *(piVar18 + 9);
    uVar5 = *(piVar18 + 0xd);
    uVar38 = uVar5;
    iVar6 = tpidr_el1;
    piStack_12f0 = iVar6 + piVar17[0xf];
    piVar22 = piVar18;
    uStack_1330 = uVar39;
    ppppuStack_12d0 = &ppppuStack_1230;
    uStack_12c0 = uVar2;
    uStack_12b8 = uVar36;
    pcStack_12b0 = pcVar15;
    pcStack_12a8 = pcVar24;
    pcStack_12a0 = pcVar14;
    uStack_1298 = uVar39;
    iStack_1290 = iVar10;
    pcStack_1288 = pcVar16;
    piStack_1278 = piVar19;
    if ((piVar17[0x10] != 0) || (pcVar14 = pcVar23, uVar36 = uStack_1280, *piStack_12f0 != 0)) {
        uVar34 = uVar4 + uVar3;
        uVar36 = uVar34;
        pcVar14 = &uStack_12e4;
        iStack_12f4 = (uVar5 + uVar34 + 0x8f & 0x3f8) - 4;
        uVar9 = perf_trace_buf_alloc(iStack_12f4,&iStack_12e0);
        uVar31 = _strlen;
        if (uVar9 != 0) {
            uVar34 = uVar34 | uVar5 << 0x10;
            uVar36 = uVar34;
            *(iStack_12e0 + 0xe8) = &ppppuStack_12d0;
            *(iStack_12e0 + 0xf8) = auStack_1300;
            *(iStack_12e0 + 0x100) = ~(-1L << (uVar31 & 0x3f)) & 0x809efe8;
            *(iStack_12e0 + 0x108) = 5;
            *(uVar9 + 0x4c) = uVar3 << 0x10 | 0x84;
            *(uVar9 + 0x78) = (uVar3 | uVar4 << 0x10) + 0x84;
            *(uVar9 + 0x80) = uVar34 + 0x84;
            iVar6 = *(iVar11 + 0x1f8);
            if (iVar6 == 0) {
                iVar6 = *(iVar11 + 0x188);
            }
            strlcpy(uVar9 + 8,iVar6,0x20);
            uVar37 = *(pcVar23 + 8);
            *(uVar9 + 0x28) = *pcVar23;
            *(uVar9 + 0x30) = uVar37;
            uVar34 = *(pcVar23 + 0xd0);
            *(uVar9 + 0x3c) = 0;
            *(uVar9 + 0x38) = uVar34;
            *(uVar9 + 0x44) = 0;
            puVar29 = *piVar18;
            if (puVar29 != NULL) {
                uVar26 = *puVar29;
                *(uVar9 + 0x40) = *(puVar29 + 1);
                *(uVar9 + 0x3c) = uVar26;
            }
            puVar29 = piVar18[2];
            if (puVar29 != NULL) {
                uVar26 = *puVar29;
                *(uVar9 + 0x46) = *(puVar29 + 1);
                *(uVar9 + 0x42) = uVar26;
            }
            *(uVar9 + 0x48) = piVar18[1];
            if ((piVar18[3] != 0) && (piVar18[4] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x4c));
            }
            *(uVar9 + 0x50) = 0;
            *(uVar9 + 0x68) = 0;
            *(uVar9 + 0x58) = 0;
            *(uVar9 + 0x60) = 0;
            puVar32 = piVar18[5];
            if (puVar32 != NULL) {
                uVar37 = puVar32[1];
                uVar1 = puVar32[2];
                uVar33 = *puVar32;
                *(uVar9 + 0x68) = *(puVar32 + 3);
                *(uVar9 + 0x58) = uVar37;
                *(uVar9 + 0x60) = uVar1;
                *(uVar9 + 0x50) = uVar33;
            }
            *(uVar9 + 0x6a) = 0;
            *(uVar9 + 0x72) = 0;
            puVar32 = piVar18[6];
            if (puVar32 != NULL) {
                uVar37 = *puVar32;
                *(uVar9 + 0x72) = *(puVar32 + 1);
                *(uVar9 + 0x6a) = uVar37;
            }
            *(uVar9 + 0x76) = piVar18[7];
            *(uVar9 + 0x77) = *(piVar18 + 0x39);
            if ((piVar18[8] != 0) && (piVar18[9] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x78));
            }
            *(uVar9 + 0x7c) = 0;
            if (piVar18[0xb] != NULL) {
                *(uVar9 + 0x7c) = *piVar18[0xb];
            }
            if ((piVar18[0xc] != 0) && (piVar18[0xd] != '\0')) {
                memcpy(uVar9 + *(uVar9 + 0x80));
            }
            pcVar14 = uStack_12e4;
            piVar22 = piVar17;
            perf_trace_run_bpf_submit(uVar9,iStack_12f4,pcVar14,piVar17,1,iStack_12e0,piStack_12f0,0);
            uStack_1330 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_12d8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar28 = auVar40._8_8_;
    iVar10 = auVar40._0_8_;
    uVar37 = tpidr_el2;
    *extraout_x18_39 = 0x809f2a4;
    uStack_1338 = 0x809f2a4;
    iVar6 = sp_el0;
    iStack_1348 = *(iVar6 + 0x5e0);
    uVar37 = *(iVar10 + 0x48);
    uStack_1358 = 0;
    uStack_1350 = 0;
    uStack_1368 = 0;
    uStack_1360 = 0;
    uStack_1378 = 0;
    uStack_1370 = 0;
    uVar34 = uVar37;
    piVar19 = piVar22;
    ppppuStack_1340 = &ppppuStack_12d0;
    uStack_1320 = uVar38;
    piStack_1318 = piVar18;
    uStack_1310 = uVar36;
    piStack_1308 = piVar17;
    iStack_13a0 = iVar10;
    if ((uVar34 >> 8 & 1) == 0) {
        pcVar15 = pcVar14;
        if ((uVar34 >> 7 & 1) != 0) {
            pcVar15 = NULL;
            piVar19 = NULL;
            event_triggers_call(iVar10,0);
        }
        if ((uVar34 >> 6 & 1) != 0) goto code_r0x0809f3a0;
        if ((uVar34 >> 9 & 1) != 0) {
            uVar36 = trace_event_ignore_this_pid(iVar10);
            if ((uVar36 & 1) != 0) goto code_r0x0809f3a0;
        }
    }
    pcVar15 = 0x48;
    iVar6 = trace_event_buffer_reserve(&uStack_1378,iVar10);
    if (iVar6 != 0) {
        iVar10 = *(iVar28 + 0x1f8);
        if (iVar10 == 0) {
            iVar10 = *(iVar28 + 0x188);
        }
        pcVar15 = 0x20;
        strlcpy(iVar6 + 8,iVar10);
        uVar1 = *(pcVar14 + 8);
        *(iVar6 + 0x28) = *pcVar14;
        *(iVar6 + 0x30) = uVar1;
        uVar34 = *(pcVar14 + 0xd0);
        *(iVar6 + 0x3c) = 0;
        *(iVar6 + 0x38) = uVar34;
        *(iVar6 + 0x40) = 0;
        puVar29 = *piVar22;
        if (puVar29 != NULL) {
            uVar26 = *puVar29;
            *(iVar6 + 0x40) = *(puVar29 + 1);
            *(iVar6 + 0x3c) = uVar26;
        }
        *(iVar6 + 0x44) = piVar22[1];
        trace_event_buffer_commit(&uStack_1378);
        iStack_13a0 = iVar6;
    }
code_r0x0809f3a0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1348) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar10 = auVar40._0_8_;
    *extraout_x18_40 = sym.perf_trace_rdev_del_link_station;
    pcStack_13c8 = sym.perf_trace_rdev_del_link_station;
    iVar6 = sp_el0;
    iStack_13d8 = *(iVar6 + 0x5e0);
    iStack_13e0 = 0;
    uStack_13e4 = 0;
    iVar6 = tpidr_el1;
    piVar18 = iVar6 + *(iVar10 + 0x78);
    ppppuStack_13d0 = &ppppuStack_1340;
    iStack_13c0 = iVar11;
    pcStack_13b0 = pcVar23;
    uStack_13a8 = uVar37;
    iStack_1398 = iVar28;
    pcStack_1390 = pcVar14;
    piStack_1388 = piVar22;
    if ((*(iVar10 + 0x80) != 0) || (*piVar18 != 0)) {
        iVar6 = perf_trace_buf_alloc(0x4c,&iStack_13e0,&uStack_13e4);
        uVar36 = _strlen;
        if (iVar6 != 0) {
            *(iStack_13e0 + 0xe8) = &ppppuStack_13d0;
            *(iStack_13e0 + 0xf8) = auStack_13f0;
            *(iStack_13e0 + 0x100) = ~(-1L << (uVar36 & 0x3f)) & 0x809f3d8;
            *(iStack_13e0 + 0x108) = 5;
            iVar11 = *(auVar40._8_8_ + 0x1f8);
            if (iVar11 == 0) {
                iVar11 = *(auVar40._8_8_ + 0x188);
            }
            strlcpy(iVar6 + 8,iVar11,0x20);
            uVar37 = *(pcVar15 + 8);
            *(iVar6 + 0x28) = *pcVar15;
            *(iVar6 + 0x30) = uVar37;
            uVar34 = *(pcVar15 + 0xd0);
            *(iVar6 + 0x3c) = 0;
            *(iVar6 + 0x38) = uVar34;
            *(iVar6 + 0x40) = 0;
            puVar29 = *piVar19;
            if (puVar29 != NULL) {
                uVar26 = *puVar29;
                *(iVar6 + 0x40) = *(puVar29 + 1);
                *(iVar6 + 0x3c) = uVar26;
            }
            *(iVar6 + 0x44) = piVar19[1];
            perf_trace_run_bpf_submit(iVar6,0x4c,uStack_13e4,iVar10,1,iStack_13e0,piVar18,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_13d8) {
        __stack_chk_fail();
        uVar37 = tpidr_el2;
        *extraout_x18_41 = 0x809f558;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.cfg80211_pmsr_complete.cfi_jt @ 0x08031658 (size 8) =====

void sym.cfg80211_pmsr_complete.cfi_jt(int64_t *param_1,int64_t *param_2,uint param_3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = *param_1;
    if (iVar7 == 0) goto code_r0x080a6f44;
    iVar3 = __alloc_skb(0xe80,param_3,0,0xffffffff);
    if (iVar3 != 0) {
        iVar4 = sym.nl80211hdr_put(0);
        if (iVar4 != 0) {
            iStack_50 = CONCAT44(iStack_50._4_4_,*(iVar7 + -0x4ec));
            iVar2 = nla_put(iVar3,1,4,&iStack_50);
            if (iVar2 == 0) {
                if (*param_1 == 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x80a6fc0);
                    (*pcVar1)();
                }
                iStack_50 = CONCAT44(*(*param_1 + -0x4ec),param_1[5]);
                iVar2 = nla_put_64bit(iVar3,0x99,8,&iStack_50,0xe5);
                if (iVar2 == 0) {
                    iStack_50 = *param_2;
                    iVar2 = nla_put_64bit(iVar3,0x58,8,&iStack_50,0xe5);
                    if (iVar2 == 0) {
                        *(iVar4 + -0x14) = (*(iVar3 + 0xd0) + *(iVar3 + 200)) - (iVar4 + -0x14);
                        netlink_unicast(*(*(*param_1 + 0x548) + 0x118),iVar3,*(param_2 + 0x14),0x40);
                        goto code_r0x080a6e64;
                    }
                }
            }
        }
        kfree_skb(iVar3);
    }
code_r0x080a6e64:
    _raw_spin_lock_bh(param_1 + 0x25);
    piVar6 = param_1 + 0x23;
    do {
        piVar6 = *piVar6;
        if (param_1 + 0x23 == piVar6) {
            param_2 = NULL;
            goto code_r0x080a6ec4;
        }
    } while (piVar6 + -5 != param_2);
    uVar5 = __list_del_entry_valid(param_2 + 5);
    if ((uVar5 & 1) != 0) {
        iVar7 = param_2[5];
        piVar6 = param_2[6];
        *(iVar7 + 8) = piVar6;
        *piVar6 = iVar7;
    }
    param_2[5] = -0x2152ffffffffff00;
    param_2[6] = -0x2152fffffffffede;
code_r0x080a6ec4:
    _raw_spin_unlock_bh(param_1 + 0x25);
    kfree(param_2);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail();
code_r0x080a6f44:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80a6f48);
    (*pcVar1)();
}


// ===== sym.__traceiter_rdev_set_coalesce.cfi_jt @ 0x08031660 (size 8) =====

ulong sym.__traceiter_rdev_set_coalesce.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac670;
    piVar1 = *0x80ac670;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.ieee80211_get_hdrlen_from_skb.cfi_jt @ 0x08031668 (size 8) =====

uint32_t sym.ieee80211_get_hdrlen_from_skb.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    if (*(param_1 + 0x70) < 10) {
        return 0;
    }
    uVar2 = **(param_1 + 0xd8);
    uVar3 = 4;
    switch(uVar2 >> 2 & 3) {
    case 0:
        uVar3 = 0x1c;
        if (-1 < uVar2) {
            uVar3 = 0x18;
        }
        break;
    case 1:
        uVar3 = 10;
        if ((uVar2 & 0xe0) != 0xc0) {
            uVar3 = 0x10;
        }
        break;
    case 2:
        uVar3 = 0x1e;
        if (((uVar2 ^ 0xffff) & 0x300) != 0) {
            uVar3 = 0x18;
        }
        if ((uVar2 & 0x8c) == 0x88) {
            iVar4 = 6;
            if (-1 < uVar2) {
                iVar4 = 2;
            }
            uVar3 = uVar3 + iVar4;
        }
    }
    uVar1 = 0;
    if (uVar3 <= *(param_1 + 0x70)) {
        uVar1 = uVar3;
    }
    return uVar1;
}


// ===== sym.ieee80211_radiotap_iterator_init.cfi_jt @ 0x08031670 (size 8) =====

ulong sym.ieee80211_radiotap_iterator_init.cfi_jt(ulong *param_1,char *param_2,uint32_t param_3,ulong param_4)

{
    int iVar1;
    uint16_t uVar2;
    char *pcVar3;
    int64_t iVar4;
    
    if (((7 < param_3) && (*param_2 == '\0')) && (*(param_2 + 2) <= param_3)) {
        *param_1 = param_2;
        uVar2 = *(param_2 + 2);
        pcVar3 = param_2 + 8;
        *(param_1 + 0x44) = uVar2;
        *(param_1 + 9) = 0;
        iVar1 = *(param_2 + 4);
        param_1[2] = obj.radiotap_ns;
        param_1[3] = pcVar3;
        param_1[5] = pcVar3;
        param_1[1] = param_4;
        *(param_1 + 0x4c) = iVar1;
        *(param_1 + 10) = 0;
        *(param_1 + 8) = 1;
        if (iVar1 < 0) {
            if (uVar2 < pcVar3 + (4 - param_2)) {
                return 0xffffffea;
            }
            iVar4 = 0;
            while( true ) {
                pcVar3 = param_2 + iVar4 + 0xc;
                iVar1 = *(param_2 + iVar4 + 8);
                param_1[3] = pcVar3;
                if (-1 < iVar1) break;
                pcVar3 = iVar4 + 0x10;
                iVar4 = iVar4 + 4;
                if (uVar2 < pcVar3) {
                    return 0xffffffea;
                }
            }
        }
        param_1[6] = pcVar3;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.__traceiter_rdev_del_link_station.cfi_jt @ 0x08031678 (size 8) =====

ulong sym.__traceiter_rdev_del_link_station.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ada20;
    piVar1 = *0x80ada20;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_nan_change_conf.cfi_jt @ 0x08031680 (size 8) =====

ulong sym.__traceiter_rdev_nan_change_conf.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac0d0;
    piVar1 = *0x80ac0d0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_cfg80211_radar_event.cfi_jt @ 0x08031688 (size 8) =====

ulong sym.__traceiter_cfg80211_radar_event.cfi_jt(ulong param_1,ulong param_2,ulong param_3,uint32_t param_4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80ad1f8 != NULL) {
        piVar1 = *0x80ad1f8;
        do {
            (**piVar1)(piVar1[1],param_2,param_3,param_4 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.cfg80211_iter_combinations.cfi_jt @ 0x08031690 (size 8) =====

ulong sym.cfg80211_iter_combinations.cfi_jt(int64_t param_1,uint32_t *param_2,code *param_3,ulong param_4)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint16_t *puVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint16_t *puVar10;
    uint8_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint8_t *puVar15;
    int64_t iVar16;
    int iVar17;
    ulong *puVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar19 = param_2[0xf];
    bVar2 = false;
    uVar4 = 0;
    for (piVar13 = *(param_1 + 0x538); param_1 + 0x538 != piVar13; piVar13 = *piVar13) {
        uVar3 = uVar4;
        if (((((*(piVar13 + 0x11b) == 0) && (uVar1 = *(piVar13 + -1) - 1, uVar1 < 9)) &&
             ((0x145U >> (uVar1 & 0x1f) & 1) != 0)) &&
            ((uVar1 = *(piVar13 + *(uVar1 * 8 + 0x8029f48)), uVar1 != 0 && (uVar3 = uVar1, uVar4 != 0)))) &&
           (uVar3 = uVar4, uVar1 != uVar4)) {
            uVar3 = gcd(uVar4,uVar1);
            bVar2 = true;
        }
        uVar4 = uVar3;
    }
    if ((uVar19 != 0) && (uVar4 != uVar19)) {
        if (uVar4 != 0) {
            bVar2 = true;
        }
        uVar4 = gcd(uVar4,uVar19);
    }
    if (param_2[1] == '\0') {
        uVar14 = 0;
    }
    else {
        __rcu_read_lock();
        if (_obj.cfg80211_combine_bsses.__already_done == 0) {
            uVar14 = 0;
        }
        else {
            uVar14 = *(_obj.cfg80211_combine_bsses.__already_done + 0x18);
        }
        __rcu_read_unlock();
    }
    uVar7 = 0;
    uVar19 = 0;
    iVar17 = 0;
    do {
        if (0 < param_2[uVar7 + 2]) {
            uVar8 = 1L << (uVar7 & 0x3f);
            uVar9 = uVar8 & *(param_1 + 0x5c);
            if ((uVar7 == 4) && (uVar9 == 0)) {
                if ((*(param_1 + 100) >> 5 & 1) == 0) {
code_r0x0803bde8:
                    uVar19 = uVar19 | uVar8;
                }
            }
            else if (uVar9 == 0) goto code_r0x0803bde8;
        }
        iVar17 = param_2[uVar7 + 2] + iVar17;
        uVar7 = uVar7 + 1;
    } while (uVar7 != 0xd);
    iVar6 = *(param_1 + 0x58);
    if (0 < iVar6) {
        iVar12 = 0;
        do {
            iVar16 = *(param_1 + 0x50);
            puVar18 = iVar16 + iVar12 * 0x58;
            if ((iVar17 <= *(puVar18 + 0xc)) && (*param_2 <= *(iVar16 + iVar12 * 0x58 + 8))) {
                puVar15 = iVar16 + iVar12 * 0x58 + 0xe;
                puVar5 = kmemdup(*puVar18,*puVar15 * 0x28,0xcc0);
                if (puVar5 == NULL) {
                    return 0xfffffff4;
                }
                uVar7 = 0;
                uVar3 = 0;
                do {
                    uVar8 = 1L << (uVar7 & 0x3f);
                    uVar9 = uVar8 & *(param_1 + 0x5c);
                    if ((uVar7 == 4) && (uVar9 == 0)) {
                        if ((*(param_1 + 100) >> 5 & 1) == 0) {
code_r0x0803bf2c:
                            uVar11 = *puVar15;
                            if (uVar11 != 0) {
                                uVar9 = 0;
                                puVar10 = puVar5;
                                do {
                                    if ((uVar8 & puVar10[1]) != 0) {
                                        if (*puVar10 < param_2[uVar7 + 2]) goto code_r0x0803be84;
                                        *puVar10 = *puVar10 - param_2[uVar7 + 2];
                                        uVar11 = *puVar15;
                                    }
                                    uVar3 = uVar3 | puVar10[1];
                                    uVar9 = uVar9 + 1;
                                    puVar10 = puVar10 + 0x14;
                                } while (uVar9 < uVar11);
                            }
                        }
                    }
                    else if (uVar9 == 0) goto code_r0x0803bf2c;
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 0xd);
                if ((param_2[1] & (*(iVar16 + iVar12 * 0x58 + 0x10) ^ 0xff)) == 0) {
                    if ((param_2[1] == 0) || (uVar7 = *(iVar16 + iVar12 * 0x58 + 0x11), uVar7 == 0)) {
                        if ((uVar19 & (uVar3 ^ 0xffffffff)) == 0) goto code_r0x0803bfd0;
                    }
                    else if (((1L << (uVar14 & 0x3f) & uVar7) != 0) && ((uVar3 & uVar19) == uVar19)) {
code_r0x0803bfd0:
                        if ((uVar4 == 0) ||
                           (((uVar3 = *(iVar16 + iVar12 * 0x58 + 0x14), uVar3 == 0 || (uVar3 <= uVar4)) &&
                            ((uVar3 != 0 || (!bVar2)))))) {
                            if (param_3 != sym.__typeid__ZTSFvPK27ieee80211_iface_combinationPvE_global_addr) {
                                __cfi_slowpath_diag(0x7101d81fb6449a78,param_3,0x8020930);
                            }
                            (*param_3)(puVar18,param_4);
                        }
                    }
                }
code_r0x0803be84:
                kfree(puVar5);
                iVar6 = *(param_1 + 0x58);
            }
            iVar12 = iVar12 + 1;
        } while (iVar12 < iVar6);
    }
    return 0;
}


// ===== sym.cfg80211_bss_iter.cfi_jt @ 0x08031698 (size 8) =====

void sym.cfg80211_bss_iter.cfi_jt(int64_t param_1,int64_t param_2,code *param_3,ulong param_4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        _raw_spin_lock_bh(param_1 + -0x498);
        for (piVar3 = *(param_1 + -0x490); piVar3 != param_1 + -0x490; piVar3 = *piVar3) {
            if ((param_2 == 0) || (uVar2 = sym.cfg80211_is_sub_chan(param_2,piVar3[0xd]), (uVar2 & 1) != 0)) {
                __cfi_slowpath_diag(0x8cbe25db4afad12a,param_3,0x8020a90);
                (*param_3)(param_1,piVar3 + 0xd,param_4);
            }
        }
        _raw_spin_unlock_bh(param_1 + -0x498);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80484ac);
    (*pcVar1)();
}


// ===== sym.cfg80211_pernet_exit.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x080316a0 (size 8) =====

void sym.cfg80211_pernet_exit.4cb80888839f98f690b7d75ef25d1694.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    rtnl_lock();
    pcVar1 = _obj.wiphy_new_nm.__key;
    if (_obj.wiphy_new_nm.__key != obj.wiphy_new_nm.__key) {
        do {
            if ((*(pcVar1 + 0xaa0) == param_1) &&
               (iVar2 = sym.cfg80211_switch_netns(pcVar1 + -8,0x8277068), iVar2 != 0)) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80369d0);
                (*pcVar1)();
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.wiphy_new_nm.__key);
    }
    rtnl_unlock();
    return;
}


// ===== sym.__traceiter_cfg80211_pmsr_report.cfi_jt @ 0x080316a8 (size 8) =====

ulong sym.__traceiter_cfg80211_pmsr_report.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ad828;
    piVar1 = *0x80ad828;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.wiphy_dev_release.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x080316b0 (size 8) =====

void sym.wiphy_dev_release.cdb4e9913ee09f921401e540eb3f658c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cfg80211_dev_free(param_1 + -0x6e8);
    return;
}


// ===== sym.__traceiter_rdev_set_multicast_to_unicast.cfi_jt @ 0x080316b8 (size 8) =====

ulong sym.__traceiter_rdev_set_multicast_to_unicast.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,uint32_t param_4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80ac700 != NULL) {
        piVar1 = *0x80ac700;
        do {
            (**piVar1)(piVar1[1],param_2,param_3,param_4 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rdev_set_pmk.cfi_jt @ 0x080316c0 (size 8) =====

ulong sym.__traceiter_rdev_set_pmk.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac508;
    piVar1 = *0x80ac508;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_sched_scan_stop.cfi_jt @ 0x080316c8 (size 8) =====

ulong sym.__traceiter_rdev_sched_scan_stop.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80abb78;
    piVar1 = *0x80abb78;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_sched_scan_start.cfi_jt @ 0x080316d0 (size 8) =====

ulong sym.__traceiter_rdev_sched_scan_start.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80abb30;
    piVar1 = *0x80abb30;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_conn_failed.cfi_jt @ 0x080316d8 (size 8) =====

void sym.cfg80211_conn_failed.cfi_jt(int64_t param_1,ulong param_2,uint param_3,uint param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iVar6 = **(param_1 + 0x2f8);
    if (iVar6 == 0) goto code_r0x0805dd88;
    iVar3 = __alloc_skb(0xe90,param_4,0,0xffffffff);
    if (iVar3 != 0) {
        iVar4 = genlmsg_put(iVar3,0,0,obj.nl80211_fam,0,0x5b);
        if (iVar4 != 0) {
            uStack_5c = *(param_1 + 0xd0);
            iVar2 = nla_put(iVar3,3,4,&uStack_5c);
            if ((iVar2 == 0) && (iVar2 = nla_put(iVar3,6,6,param_2), iVar2 == 0)) {
                uStack_5c = param_3;
                iVar2 = nla_put(iVar3,0x9b,4,&uStack_5c);
                if (iVar2 == 0) {
                    *(iVar4 + -0x14) = (*(iVar3 + 0xd0) + *(iVar3 + 200)) - (iVar4 + -0x14);
                    if (*0x80a93ef < 4) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x800,0x805dd80);
                        (*pcVar1)();
                    }
                    uVar5 = *(*(iVar6 + 0x548) + 0x118);
                    iVar2 = *0x80a9000 + 3;
                    *(iVar3 + 0x38) = iVar2;
                    netlink_broadcast(uVar5,iVar3,0,iVar2,param_4);
                    goto code_r0x0805dcf0;
                }
            }
        }
        kfree_skb(iVar3);
    }
code_r0x0805dcf0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0805dd88:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x805dd8c);
    (*pcVar1)();
}


// ===== sym.__traceiter_cfg80211_ft_event.cfi_jt @ 0x080316e0 (size 8) =====

ulong sym.__traceiter_cfg80211_ft_event.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ad798;
    piVar1 = *0x80ad798;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rdev_assoc.cfi_jt @ 0x080316e8 (size 8) =====

ulong sym.__traceiter_rdev_assoc.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ab470;
    piVar1 = *0x80ab470;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.cfg80211_chandef_dfs_required.cfi_jt @ 0x080316f0 (size 8) =====

int64_t sym.cfg80211_chandef_dfs_required.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.cfg80211_chandef_valid(param_2);
    if ((uVar4 & 1) == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x807d01c);
        (*pcVar3)();
    }
    if (0xd < param_3) {
        return 0;
    }
    uVar1 = 1 << (param_3 & 0x1f);
    if ((uVar1 & 0x28a) == 0) {
        if ((uVar1 & 0x2021) != 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x807ceec);
            (*pcVar3)();
        }
        return 0;
    }
    iVar8 = 20000;
    switch(*(param_2 + 8)) {
    case 0:
    case 1:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
        iVar7 = 0;
        iVar8 = 0;
        uVar6 = *(param_2 + 0x1c) + *(param_2 + 0xc) * 1000;
        uVar1 = uVar6;
        goto code_r0x0807cf4c;
    case 2:
        break;
    case 3:
    case 4:
        iVar8 = 40000;
        break;
    case 5:
        iVar8 = 80000;
        break;
    case 0xd:
        iVar8 = 160000;
        break;
    default:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x807cf04);
        (*pcVar3)();
    }
    uVar6 = *(param_2 + 0x1c) + *(param_2 + 0xc) * 1000;
    iVar7 = 10000 - iVar8;
    iVar8 = iVar8 + -10000;
    uVar1 = uVar6 + iVar7;
code_r0x0807cf4c:
    for (; uVar1 <= iVar8 + uVar6; uVar1 = uVar1 + 20000) {
        iVar5 = sym.ieee80211_get_channel_khz(param_1,uVar1);
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        if ((*(iVar5 + 0xc) >> 3 & 1) != 0) {
            return 1L << (*(param_2 + 8) & 0x3f);
        }
    }
    if (*(param_2 + 0x10) != 0) {
        iVar2 = *(param_2 + 0x10) * 1000;
        for (uVar1 = iVar2 + iVar7; uVar1 <= iVar2 + iVar8; uVar1 = uVar1 + 20000) {
            iVar5 = sym.ieee80211_get_channel_khz(param_1,uVar1);
            if (iVar5 == 0) {
                return 0xffffffea;
            }
            if ((*(iVar5 + 0xc) >> 3 & 1) != 0) {
                return 1L << (*(param_2 + 8) & 0x3f);
            }
        }
    }
    return 0;
}


// ===== sym.__traceiter_rdev_set_mcast_rate.cfi_jt @ 0x080316f8 (size 8) =====

ulong sym.__traceiter_rdev_set_mcast_rate.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80ac628;
    piVar1 = *0x80ac628;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.ieee80211_freq_khz_to_channel.cfi_jt @ 0x08031700 (size 8) =====

uint64_t sym.ieee80211_freq_khz_to_channel.cfi_jt(uint32_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    
    if (param_1 - 0x25e720 < 1000) {
        return 0xe;
    }
    uVar1 = param_1 / 1000;
    if (param_1 < 0x25e720) {
        return (uVar1 - 0x967) / 5;
    }
    if (param_1 - 0x4aebb0 < 71000) {
        uVar1 = uVar1 - 4000;
    }
    else {
        if (param_1 < 0x5a6888) {
            iVar2 = -5000;
        }
        else {
            if (param_1 - 0x5a8f98 < 1000) {
                return 2;
            }
            if (0x2aea927 < param_1) {
                if (param_1 + 0xfc861b80 < 0xb54a28) {
                    return (uVar1 - 0xdb60) / 0x870;
                }
                return 0;
            }
            iVar2 = -0x173e;
        }
        uVar1 = uVar1 + iVar2;
    }
    return uVar1 / 5;
}


// ===== sym.__traceiter_rdev_add_key.cfi_jt @ 0x08031708 (size 8) =====

ulong sym.__traceiter_rdev_add_key.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,uint param_4,uint param_5,uint32_t param_6,
                ulong param_7,uint param_8)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80aaa50 != NULL) {
        piVar1 = *0x80aaa50;
        do {
            (**piVar1)(piVar1[1],param_2,param_3,param_4,param_5,param_6 & 1,param_7,param_8);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_rdev_return_int_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031710 (size 8) =====
// decompile exception: RuntimeError("Process terminated unexpectedly trying to run the command pdg @ 0x8031710\n<Popen: returncode: -9 args: ['radare2', '-e', 'bin.relocs.apply=false', '-e...>")
// ===== sym.perf_trace_rdev_return_int_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031718 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031720 (size 8) =====
// (empty)
// ===== sym.ieee80211_radiotap_iterator_next.cfi_jt @ 0x08031728 (size 8) =====
// (empty)
// ===== sym.cfg80211_chandef_compatible.cfi_jt @ 0x08031730 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_start_ap.cfi_jt @ 0x08031738 (size 8) =====
// (empty)
// ===== sym.cfg80211_report_obss_beacon_khz.cfi_jt @ 0x08031740 (size 8) =====
// (empty)
// ===== sym.__cfg80211_alloc_reply_skb.cfi_jt @ 0x08031748 (size 8) =====
// (empty)
// ===== sym.ieee80211_get_vht_max_nss.cfi_jt @ 0x08031750 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_probe_status.cfi_jt @ 0x08031758 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_reset_tid_config.cfi_jt @ 0x08031760 (size 8) =====
// (empty)
// ===== sym.cfg80211_is_element_inherited.cfi_jt @ 0x08031768 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mpp.cfi_jt @ 0x08031770 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_change_mpath.cfi_jt @ 0x08031778 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mpath.cfi_jt @ 0x08031780 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_mpath.cfi_jt @ 0x08031788 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_survey.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031790 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_survey.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031798 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_survey.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317a0 (size 8) =====
// (empty)
// ===== sym.get_key_callback.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080317a8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_wiphy_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317b0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_wiphy_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317b8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_wiphy_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317c0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_michael_mic_failure.cfi_jt @ 0x080317c8 (size 8) =====
// (empty)
// ===== sym.cfg80211_vendor_cmd_reply.cfi_jt @ 0x080317d0 (size 8) =====
// (empty)
// ===== sym.cfg80211_tdls_oper_request.cfi_jt @ 0x080317d8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_int.cfi_jt @ 0x080317e0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317e8 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317f0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080317f8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_remain_on_channel.cfi_jt @ 0x08031800 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_qos_map.cfi_jt @ 0x08031808 (size 8) =====
// (empty)
// ===== sym.cfg80211_register_netdevice.cfi_jt @ 0x08031810 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_change_bss.cfi_jt @ 0x08031818 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_survey.cfi_jt @ 0x08031820 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cac_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031828 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cac_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031830 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cac_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031838 (size 8) =====
// (empty)
// ===== sym.cfg80211_probe_status.cfi_jt @ 0x08031840 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_cookie.cfi_jt @ 0x08031848 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_report_wowlan_wakeup.cfi_jt @ 0x08031850 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_nan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031858 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_nan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031860 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_start_nan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031868 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_change_virtual_intf.cfi_jt @ 0x08031870 (size 8) =====
// (empty)
// ===== sym.init_module.cfi_jt @ 0x08031878 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031880 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031888 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_del_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031890 (size 8) =====
// (empty)
// ===== sym.cfg80211_nan_match.cfi_jt @ 0x08031898 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_qos_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318a0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_qos_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318a8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_qos_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318b0 (size 8) =====
// (empty)
// ===== sym.cfg80211_connect_done.cfi_jt @ 0x080318b8 (size 8) =====
// (empty)
// ===== sym.cfg80211_inform_bss_frame_data.cfi_jt @ 0x080318c0 (size 8) =====
// (empty)
// ===== sym.ieee80211_channel_to_freq_khz.cfi_jt @ 0x080318c8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tx_mgmt_expired.cfi_jt @ 0x080318d0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ready_on_channel_expired.cfi_jt @ 0x080318d8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_ocb.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318e0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_join_ocb.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318e8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_ocb.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080318f0 (size 8) =====
// (empty)
// ===== sym.cfg80211_tx_mlme_mgmt.cfi_jt @ 0x080318f8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_start_nan.cfi_jt @ 0x08031900 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_station_info.cfi_jt @ 0x08031908 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_crit_proto_start.cfi_jt @ 0x08031910 (size 8) =====
// (empty)
// ===== sym.perf_trace_tx_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031918 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_tx_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031920 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_tx_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031928 (size 8) =====
// (empty)
// ===== sym.cfg80211_get_iftype_ext_capa.cfi_jt @ 0x08031930 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_mgmt_tx_status.cfi_jt @ 0x08031938 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_control_port_tx_status.cfi_jt @ 0x08031940 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_beacon_key.cfi_jt @ 0x08031948 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_mgmt_key.cfi_jt @ 0x08031950 (size 8) =====
// (empty)
// ===== sym.cfg80211_bss_color_notify.cfi_jt @ 0x08031958 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_station.cfi_jt @ 0x08031960 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmksa_candidate_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031968 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmksa_candidate_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031970 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmksa_candidate_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031978 (size 8) =====
// (empty)
// ===== sym.cfg80211_rfkill_poll.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08031980 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_tx_power.cfi_jt @ 0x08031988 (size 8) =====
// (empty)
// ===== sym.cfg80211_ft_event.cfi_jt @ 0x08031990 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_connect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031998 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_connect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319a0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_connect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319a8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_new_sta.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319b0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_new_sta.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319b8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_new_sta.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_reg_can_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319c8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_reg_can_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319d0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_reg_can_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319d8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_stop_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319e0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_stop_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319e8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_stop_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080319f0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_rx_assoc.cfi_jt @ 0x080319f8 (size 8) =====
// (empty)
// ===== sym.trace_event_reg.cfi_jt @ 0x08031a00 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_tx_control_port.cfi_jt @ 0x08031a08 (size 8) =====
// (empty)
// ===== sym.cfg80211_ibss_joined.cfi_jt @ 0x08031a10 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_mpath_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a18 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_mpath_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a20 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_mpath_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a28 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_assoc_resp.cfi_jt @ 0x08031a30 (size 8) =====
// (empty)
// ===== sym.cfg80211_inform_bss_data.cfi_jt @ 0x08031a38 (size 8) =====
// (empty)
// ===== sym.regulatory_set_wiphy_regd_sync.cfi_jt @ 0x08031a40 (size 8) =====
// (empty)
// ===== sym.regulatory_set_wiphy_regd.cfi_jt @ 0x08031a48 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_scan_done.cfi_jt @ 0x08031a50 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_init.cfi_jt @ 0x08031a58 (size 8) =====
// (empty)
// ===== sym.__typeid__ZTSFvPK27ieee80211_iface_combinationPvE_global_addr @ 0x08031a60 (size 8) =====
// (empty)
// ===== sym.cfg80211_cqm_beacon_loss_notify.cfi_jt @ 0x08031a68 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_join_ibss.cfi_jt @ 0x08031a70 (size 8) =====
// (empty)
// ===== sym.cfg80211_cqm_pktloss_notify.cfi_jt @ 0x08031a78 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_link_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a80 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_link_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a88 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_link_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031a90 (size 8) =====
// (empty)
// ===== sym.cfg80211_sinfo_alloc_tid_stats.cfi_jt @ 0x08031a98 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_get_bss.cfi_jt @ 0x08031aa0 (size 8) =====
// (empty)
// ===== sym.ieee80211_mandatory_rates.cfi_jt @ 0x08031aa8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_control_port.cfi_jt @ 0x08031ab0 (size 8) =====
// (empty)
// ===== sym.cfg80211_assoc_failure.cfi_jt @ 0x08031ab8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_chandef.cfi_jt @ 0x08031ac0 (size 8) =====
// (empty)
// ===== sym.cfg80211_ready_on_channel.cfi_jt @ 0x08031ac8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_bool.cfi_jt @ 0x08031ad0 (size 8) =====
// (empty)
// ===== sym.cfg80211_rfkill_set_block.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08031ad8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ibss_joined.cfi_jt @ 0x08031ae0 (size 8) =====
// (empty)
// ===== sym.wiphy_namespace.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08031ae8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_tx_rx.cfi_jt @ 0x08031af0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_oper.cfi_jt @ 0x08031af8 (size 8) =====
// (empty)
// ===== sym.reg_initiator_name.cfi_jt @ 0x08031b00 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_mac_acl.cfi_jt @ 0x08031b08 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_report_obss_beacon.cfi_jt @ 0x08031b10 (size 8) =====
// (empty)
// ===== sym.cfg80211_new_sta.cfi_jt @ 0x08031b18 (size 8) =====
// (empty)
// ===== sym.cfg80211_del_sta_sinfo.cfi_jt @ 0x08031b20 (size 8) =====
// (empty)
// ===== sym.cfg80211_michael_mic_failure.cfi_jt @ 0x08031b28 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_mgmt_ext.cfi_jt @ 0x08031b30 (size 8) =====
// (empty)
// ===== sym.cfg80211_sta_opmode_change_notify.cfi_jt @ 0x08031b38 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_change_beacon.cfi_jt @ 0x08031b40 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_reset_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b48 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_reset_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b50 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_reset_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b58 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_ap_chanwidth.cfi_jt @ 0x08031b60 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_virtual_intf.cfi_jt @ 0x08031b68 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_update_ft_ies.cfi_jt @ 0x08031b70 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tx_mlme_mgmt.cfi_jt @ 0x08031b78 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_suspend.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b80 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_suspend.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b88 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_suspend.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031b90 (size 8) =====
// (empty)
// ===== sym.ieee80211_get_channel_khz.cfi_jt @ 0x08031b98 (size 8) =====
// (empty)
// ===== sym.cfg80211_chandef_create.cfi_jt @ 0x08031ba0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ba8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031bb0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031bb8 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_unprot_mlme_mgmt.cfi_jt @ 0x08031bc0 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_mlme_mgmt.cfi_jt @ 0x08031bc8 (size 8) =====
// (empty)
// ===== sym.__cfg80211_send_event_skb.cfi_jt @ 0x08031bd0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_update_mesh_config.cfi_jt @ 0x08031bd8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_radar_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031be0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_radar_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031be8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_radar_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031bf0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cqm_pktloss_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031bf8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cqm_pktloss_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031c00 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cqm_pktloss_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031c08 (size 8) =====
// (empty)
// ===== sym.ieee80211_get_mesh_hdrlen.cfi_jt @ 0x08031c10 (size 8) =====
// (empty)
// ===== sym.ieee80211_chandef_to_operating_class.cfi_jt @ 0x08031c18 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_mpath_info.cfi_jt @ 0x08031c20 (size 8) =====
// (empty)
// ===== sym.cfg80211_disconnected.cfi_jt @ 0x08031c28 (size 8) =====
// (empty)
// ===== sym.cfg80211_cqm_txe_notify.cfi_jt @ 0x08031c30 (size 8) =====
// (empty)
// ===== sym.cleanup_module.cfi_jt @ 0x08031c38 (size 8) =====
// (empty)
// ===== sym.regdb_fw_cb.afd474eb3fbe20bfb2abcee49bd9f2b1.cfi_jt @ 0x08031c40 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int.cfi_jt @ 0x08031c48 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_pmksa.cfi_jt @ 0x08031c50 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_pmksa.cfi_jt @ 0x08031c58 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_scan.cfi_jt @ 0x08031c60 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_txq_params.cfi_jt @ 0x08031c68 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_wiphy_params.cfi_jt @ 0x08031c70 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_power_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031c78 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_power_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031c80 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_power_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031c88 (size 8) =====
// (empty)
// ===== sym.cfg80211_notify_new_peer_candidate.cfi_jt @ 0x08031c90 (size 8) =====
// (empty)
// ===== sym.cfg80211_find_vendor_elem.cfi_jt @ 0x08031c98 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_sar_specs.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ca0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_sar_specs.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ca8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_sar_specs.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031cb0 (size 8) =====
// (empty)
// ===== sym.regulatory_pre_cac_allowed.cfi_jt @ 0x08031cb8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031cc0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_add_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031cc8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031cd0 (size 8) =====
// (empty)
// ===== sym.ieee80211_amsdu_to_8023s.cfi_jt @ 0x08031cd8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_mesh.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ce0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_mesh.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ce8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_join_mesh.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031cf0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ready_on_channel.cfi_jt @ 0x08031cf8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d00 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d08 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d10 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_external_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d18 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_external_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d20 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_external_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d28 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_pmksa_candidate_notify.cfi_jt @ 0x08031d30 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_bss.cfi_jt @ 0x08031d38 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_txq_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d40 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_txq_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d48 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_txq_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d50 (size 8) =====
// (empty)
// ===== sym.cfg80211_any_usable_channels.cfi_jt @ 0x08031d58 (size 8) =====
// (empty)
// ===== sym.cfg80211_unlink_bss.cfi_jt @ 0x08031d60 (size 8) =====
// (empty)
// ===== sym.cfg80211_put_bss.cfi_jt @ 0x08031d68 (size 8) =====
// (empty)
// ===== sym.cfg80211_ref_bss.cfi_jt @ 0x08031d70 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d78 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d80 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d88 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_rssi_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d90 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_rssi_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031d98 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_rssi_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031da0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_crit_proto_stop.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031da8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031db0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_testmode_cmd.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031db8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_stop_iface.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031dc0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_crit_proto_stop.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031dc8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_testmode_cmd.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031dd0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_testmode_cmd.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031dd8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_crit_proto_stop.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031de0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_stop_iface.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031de8 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031df0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_stop_iface.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031df8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e00 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_ftm_responder_stats.cfi_jt @ 0x08031e08 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_tx_ts.cfi_jt @ 0x08031e10 (size 8) =====
// (empty)
// ===== sym.cfg80211_free_nan_func.cfi_jt @ 0x08031e18 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ibss_joined.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e20 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ibss_joined.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e28 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ibss_joined.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e30 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_probe_mesh_link.cfi_jt @ 0x08031e38 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_bss_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e40 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_bss_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e48 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_bss_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e50 (size 8) =====
// (empty)
// ===== sym.cfg80211_chandef_usable.cfi_jt @ 0x08031e58 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cqm_rssi_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e60 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cqm_rssi_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e68 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cqm_rssi_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e70 (size 8) =====
// (empty)
// ===== sym.cfg80211_reg_can_beacon.cfi_jt @ 0x08031e78 (size 8) =====
// (empty)
// ===== sym.cfg80211_reg_can_beacon_relax.cfi_jt @ 0x08031e80 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tdls_oper_request.cfi_jt @ 0x08031e88 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e90 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031e98 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ea0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_link_station_add_mod.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031ea8 (size 8) =====
// (empty)
// ===== sym.perf_trace_link_station_add_mod.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031eb0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_link_station_add_mod.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031eb8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_u32.cfi_jt @ 0x08031ec0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_uint.cfi_jt @ 0x08031ec8 (size 8) =====
// (empty)
// ===== sym.__cfg80211_alloc_event_skb.cfi_jt @ 0x08031ed0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_testmode_dump.cfi_jt @ 0x08031ed8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_resume.cfi_jt @ 0x08031ee0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_void.cfi_jt @ 0x08031ee8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_antenna.cfi_jt @ 0x08031ef0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_rfkill_poll.cfi_jt @ 0x08031ef8 (size 8) =====
// (empty)
// ===== sym.cfg80211_scan_done.cfi_jt @ 0x08031f00 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_pmksa.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f08 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_pmksa.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f10 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_pmksa.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f18 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_fils_aad.cfi_jt @ 0x08031f20 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_rssi_range_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f28 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_rssi_range_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f30 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_rssi_range_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f38 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_tx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f40 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f48 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f50 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_key.cfi_jt @ 0x08031f58 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_key.cfi_jt @ 0x08031f60 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_cookie.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f68 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_cookie.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f70 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_cookie.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f78 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_bool.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f80 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_bool.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f88 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_bool.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f90 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031f98 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031fa0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08031fa8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_pmk.cfi_jt @ 0x08031fb0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_cancel_channel_switch.cfi_jt @ 0x08031fb8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_probe_client.cfi_jt @ 0x08031fc0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_mpath.cfi_jt @ 0x08031fc8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_station.cfi_jt @ 0x08031fd0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_mesh_config.cfi_jt @ 0x08031fd8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_mlme_mgmt.cfi_jt @ 0x08031fe0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_unprot_mlme_mgmt.cfi_jt @ 0x08031fe8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_mod_link_station.cfi_jt @ 0x08031ff0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_link_station.cfi_jt @ 0x08031ff8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_auth.cfi_jt @ 0x08032000 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_txe_config.cfi_jt @ 0x08032008 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_crit_proto_start.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032010 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_crit_proto_start.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032018 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_crit_proto_start.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032020 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_libertas_set_mesh_channel.cfi_jt @ 0x08032028 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_sar_specs.cfi_jt @ 0x08032030 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_txe_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032038 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_txe_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032040 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_txe_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032048 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_mgmt_tx.cfi_jt @ 0x08032050 (size 8) =====
// (empty)
// ===== sym.cfg80211_unregister_wdev.cfi_jt @ 0x08032058 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032060 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032068 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_change_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032070 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_nan_func.cfi_jt @ 0x08032078 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_void_tx_rx.cfi_jt @ 0x08032080 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_bss_color_notify.cfi_jt @ 0x08032088 (size 8) =====
// (empty)
// ===== sym.cfg80211_pmsr_report.cfi_jt @ 0x08032090 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_survey_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032098 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_survey_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320a0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_survey_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320a8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_deauth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320b0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_deauth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320b8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_deauth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320c0 (size 8) =====
// (empty)
// ===== sym.cfg80211_chandef_valid.cfi_jt @ 0x080320c8 (size 8) =====
// (empty)
// ===== sym.freq_reg_info.cfi_jt @ 0x080320d0 (size 8) =====
// (empty)
// ===== sym.ieee80211_ie_split_ric.cfi_jt @ 0x080320d8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_send_rx_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320e0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_send_rx_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320e8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_send_rx_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080320f0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_wakeup.cfi_jt @ 0x080320f8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_update_mgmt_frame_registrations.cfi_jt @ 0x08032100 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_probe_mesh_link.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032108 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_probe_mesh_link.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032110 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_probe_mesh_link.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032118 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_probe_client.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032120 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_cancel_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032128 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_probe_client.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032130 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_cancel_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032138 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_del_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032140 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_cancel_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032148 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032150 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032158 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_probe_client.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032160 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032168 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032170 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032178 (size 8) =====
// (empty)
// ===== sym.cfg80211_remain_on_channel_expired.cfi_jt @ 0x08032180 (size 8) =====
// (empty)
// ===== sym.cfg80211_tx_mgmt_expired.cfi_jt @ 0x08032188 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_report_obss_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032190 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_report_obss_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032198 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_report_obss_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321a0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_get_ftm_responder_stats.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321a8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_get_ftm_responder_stats.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321b0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_get_ftm_responder_stats.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321b8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_color_change.cfi_jt @ 0x080321c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321c8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321d0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321d8 (size 8) =====
// (empty)
// ===== sym.wiphy_rfkill_set_hw_state_reason.cfi_jt @ 0x080321e0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_antenna.cfi_jt @ 0x080321e8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_deauth.cfi_jt @ 0x080321f0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_color_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080321f8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_color_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032200 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_color_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032208 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_tx_power.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032210 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_tx_power.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032218 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_tx_power.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032220 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032228 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_add_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032230 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032238 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_mac_acl.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032240 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_mac_acl.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032248 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_mac_acl.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032250 (size 8) =====
// (empty)
// ===== sym.cfg80211_get_bss.cfi_jt @ 0x08032258 (size 8) =====
// (empty)
// ===== sym.cfg80211_classify8021d.cfi_jt @ 0x08032260 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_control_port.cfi_jt @ 0x08032268 (size 8) =====
// (empty)
// ===== sym.cfg80211_roamed.cfi_jt @ 0x08032270 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_inform_bss_frame.cfi_jt @ 0x08032278 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_ap_chanwidth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032280 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_ap_chanwidth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032288 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_ap_chanwidth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032290 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_tx_ts.cfi_jt @ 0x08032298 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_multicast_to_unicast.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322a0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_multicast_to_unicast.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322a8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_multicast_to_unicast.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322b0 (size 8) =====
// (empty)
// ===== sym.ieee80211_bss_get_elem.cfi_jt @ 0x080322b8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_radar_detection.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_radar_detection.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322c8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_start_radar_detection.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322d0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_noack_map.cfi_jt @ 0x080322d8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_disconnect.cfi_jt @ 0x080322e0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322e8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322f0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080322f8 (size 8) =====
// (empty)
// ===== sym.cfg80211_pmksa_candidate_notify.cfi_jt @ 0x08032300 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_update_connect_params.cfi_jt @ 0x08032308 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_assoc_comeback.cfi_jt @ 0x08032310 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_unexpected_4addr_frame.cfi_jt @ 0x08032318 (size 8) =====
// (empty)
// ===== sym.cfg80211_rx_spurious_frame.cfi_jt @ 0x08032320 (size 8) =====
// (empty)
// ===== sym.ieee80211_operating_class_to_band.cfi_jt @ 0x08032328 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_del_link_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032330 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_link_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032338 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_link_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032340 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_survey_info.cfi_jt @ 0x08032348 (size 8) =====
// (empty)
// ===== sym.cfg80211_get_station.cfi_jt @ 0x08032350 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_disassoc.cfi_jt @ 0x08032358 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_join_ocb.cfi_jt @ 0x08032360 (size 8) =====
// (empty)
// ===== sym.cfg80211_netdev_notifier_call.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08032368 (size 8) =====
// (empty)
// ===== sym.nl80211_netlink_notify.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032370 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_rssi_range_config.cfi_jt @ 0x08032378 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_send_assoc_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032380 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_send_assoc_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032388 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_send_assoc_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032390 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_start_radar_detection.cfi_jt @ 0x08032398 (size 8) =====
// (empty)
// ===== sym.cfg80211_cqm_rssi_notify.cfi_jt @ 0x080323a0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_suspend.cfi_jt @ 0x080323a8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323b0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323b8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323c0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ready_on_channel_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323c8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ready_on_channel_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323d0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tx_mgmt_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323d8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tx_mgmt_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323e0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ready_on_channel_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323e8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tx_mgmt_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080323f0 (size 8) =====
// (empty)
// ===== sym.wdev_chandef.cfi_jt @ 0x080323f8 (size 8) =====
// (empty)
// ===== sym.cfg80211_update_owe_info_event.cfi_jt @ 0x08032400 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_external_auth.cfi_jt @ 0x08032408 (size 8) =====
// (empty)
// ===== sym.cfg80211_cac_event.cfi_jt @ 0x08032410 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_get_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032418 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_get_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032420 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_get_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032428 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_wiphy_done.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032430 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_connect.cfi_jt @ 0x08032438 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_bitrate_mask.cfi_jt @ 0x08032440 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_mgmt_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032448 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_control_port_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032450 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_mgmt_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032458 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_mgmt_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032460 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_control_port_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032468 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_control_port_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032470 (size 8) =====
// (empty)
// ===== sym.perf_trace_mpath_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032478 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_get_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032480 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_mpath_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032488 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_mpath_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032490 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_get_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032498 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_get_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080324a0 (size 8) =====
// (empty)
// ===== sym.ieee80211_get_num_supported_channels.cfi_jt @ 0x080324a8 (size 8) =====
// (empty)
// ===== sym.cfg80211_vendor_cmd_get_sender.cfi_jt @ 0x080324b0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080324b8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080324c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080324c8 (size 8) =====
// (empty)
// ===== sym.__typeid__ZTSFvP5wiphyE_global_addr @ 0x080324d0 (size 8) =====
// (empty)
// ===== sym.wiphy_free.cfi_jt @ 0x080324d8 (size 8) =====
// (empty)
// ===== sym.cfg80211_background_cac_abort.cfi_jt @ 0x080324e0 (size 8) =====
// (empty)
// ===== sym.cfg80211_bss_flush.cfi_jt @ 0x080324e8 (size 8) =====
// (empty)
// ===== sym.cfg80211_shutdown_all_interfaces.cfi_jt @ 0x080324f0 (size 8) =====
// (empty)
// ===== sym.wiphy_unregister.cfi_jt @ 0x080324f8 (size 8) =====
// (empty)
// ===== sym.wiphy_read_of_freq_limits.cfi_jt @ 0x08032500 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_bitrate_mask.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032508 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_bitrate_mask.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032510 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_bitrate_mask.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032518 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_scan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032520 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_scan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032528 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_scan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032530 (size 8) =====
// (empty)
// ===== sym.validate_he_capa.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032538 (size 8) =====
// (empty)
// ===== sym.validate_beacon_head.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032540 (size 8) =====
// (empty)
// ===== sym.validate_ie_attr.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032548 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_michael_mic_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032550 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_michael_mic_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032558 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_michael_mic_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032560 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_mgmt_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032568 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_mgmt_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032570 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_mgmt_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032578 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_beacon_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032580 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_beacon_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032588 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_beacon_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032590 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_mgmt_frame_registrations.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032598 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_update_mgmt_frame_registrations.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325a0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_mgmt_frame_registrations.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325a8 (size 8) =====
// (empty)
// ===== sym.wiphy_apply_custom_regulatory.cfi_jt @ 0x080325b0 (size 8) =====
// (empty)
// ===== sym.ieee80211_get_response_rate.cfi_jt @ 0x080325b8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_tid_config.cfi_jt @ 0x080325c0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ft_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325c8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ft_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325d0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ft_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325d8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_scan_done.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325e0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_scan_done.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325e8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_scan_done.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325f0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ch_switch_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080325f8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ch_switch_started_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032600 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ch_switch_started_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032608 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ch_switch_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032610 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ch_switch_started_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032618 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ch_switch_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032620 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_enabled_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032628 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_enabled_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032630 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_enabled_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032638 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_key.cfi_jt @ 0x08032640 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032648 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032650 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032658 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_rssi_config.cfi_jt @ 0x08032660 (size 8) =====
// (empty)
// ===== sym.cfg80211_gtk_rekey_notify.cfi_jt @ 0x08032668 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032670 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032678 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032680 (size 8) =====
// (empty)
// ===== sym.reg_query_regdb_wmm.cfi_jt @ 0x08032688 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_libertas_set_mesh_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032690 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_libertas_set_mesh_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032698 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_libertas_set_mesh_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326a0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_fils_aad.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326a8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_fils_aad.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326b0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_fils_aad.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326b8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_mgmt.cfi_jt @ 0x080326c0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tdls_oper_request.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326c8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tdls_oper_request.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326d0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tdls_oper_request.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326d8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_join_mesh.cfi_jt @ 0x080326e0 (size 8) =====
// (empty)
// ===== sym.wiphy_new_nm.cfi_jt @ 0x080326e8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326f0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080326f8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032700 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_only_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032708 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_only_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032710 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_testmode_dump.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032718 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_testmode_dump.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032720 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_testmode_dump.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032728 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_only_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032730 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_coalesce.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032738 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_coalesce.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032740 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_coalesce.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032748 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_change_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032750 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032758 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032760 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032768 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032770 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032778 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032780 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_update_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032788 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032790 (size 8) =====
// (empty)
// ===== sym.cfg80211_nan_func_terminated.cfi_jt @ 0x08032798 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmsr_report.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327a0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmsr_report.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327a8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmsr_report.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327b0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_bss_color_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327b8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_bss_color_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_bss_color_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327c8 (size 8) =====
// (empty)
// ===== sym.cfg80211_get_drvinfo.cfi_jt @ 0x080327d0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_chandef_dfs_required.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327d8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_radar_background.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327e0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_monitor_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327e8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_monitor_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327f0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_radar_background.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080327f8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_radar_background.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032800 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_chandef_dfs_required.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032808 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_chandef_dfs_required.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032810 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_monitor_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032818 (size 8) =====
// (empty)
// ===== sym.cfg80211_send_layer2_update.cfi_jt @ 0x08032820 (size 8) =====
// (empty)
// ===== sym.cfg80211_auth_timeout.cfi_jt @ 0x08032828 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_power_mgmt.cfi_jt @ 0x08032830 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032838 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032840 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032848 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_uint.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032850 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_u32.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032858 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_uint.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032860 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_u32.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032868 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_uint.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032870 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_u32.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032878 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032880 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032888 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_add_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032890 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_inform_bss_frame.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032898 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_inform_bss_frame.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328a0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_inform_bss_frame.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328a8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_station_del.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328b0 (size 8) =====
// (empty)
// ===== sym.perf_trace_station_del.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328b8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_station_del.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328c0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328c8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328d0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080328d8 (size 8) =====
// (empty)
// ===== sym.cfg80211_external_auth_request.cfi_jt @ 0x080328e0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_new_sta.cfi_jt @ 0x080328e8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ch_switch_notify.cfi_jt @ 0x080328f0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ch_switch_started_notify.cfi_jt @ 0x080328f8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_ft_ies.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032900 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_ft_ies.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032908 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_update_ft_ies.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032910 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_reg_can_beacon.cfi_jt @ 0x08032918 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_report_wowlan_wakeup.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032920 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_report_wowlan_wakeup.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032928 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_report_wowlan_wakeup.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032930 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_ap.cfi_jt @ 0x08032938 (size 8) =====
// (empty)
// ===== sym.name_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032940 (size 8) =====
// (empty)
// ===== sym.index_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032948 (size 8) =====
// (empty)
// ===== sym.addresses_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032950 (size 8) =====
// (empty)
// ===== sym.macaddress_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032958 (size 8) =====
// (empty)
// ===== sym.address_mask_show.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032960 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_owe_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032968 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_owe_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032970 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_update_owe_info_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032978 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_update_owe_info_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032980 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_update_owe_info_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032988 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_update_owe_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032990 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_chandef_dfs_required.cfi_jt @ 0x08032998 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_monitor_channel.cfi_jt @ 0x080329a0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_radar_background.cfi_jt @ 0x080329a8 (size 8) =====
// (empty)
// ===== sym.cfg80211_propagate_radar_detect_wk.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x080329b0 (size 8) =====
// (empty)
// ===== sym.reg_regdb_apply.afd474eb3fbe20bfb2abcee49bd9f2b1.cfi_jt @ 0x080329b8 (size 8) =====
// (empty)
// ===== sym.cfg80211_mgmt_registrations_update_wk.cfi_jt @ 0x080329c0 (size 8) =====
// (empty)
// ===== sym.disconnect_work.261b088e8547cab4cd93c979b6b6b3f4.cfi_jt @ 0x080329c8 (size 8) =====
// (empty)
// ===== sym.cfg80211_rfkill_block_work.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x080329d0 (size 8) =====
// (empty)
// ===== sym.__cfg80211_scan_done.cfi_jt @ 0x080329d8 (size 8) =====
// (empty)
// ===== sym.cfg80211_pmsr_free_wk.cfi_jt @ 0x080329e0 (size 8) =====
// (empty)
// ===== sym.cfg80211_propagate_cac_done_wk.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x080329e8 (size 8) =====
// (empty)
// ===== sym.cfg80211_background_cac_done_wk.cfi_jt @ 0x080329f0 (size 8) =====
// (empty)
// ===== sym.cfg80211_autodisconnect_wk.cfi_jt @ 0x080329f8 (size 8) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stop_wk.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08032a00 (size 8) =====
// (empty)
// ===== sym.cfg80211_destroy_iface_wk.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08032a08 (size 8) =====
// (empty)
// ===== sym.reg_check_chans_work.afd474eb3fbe20bfb2abcee49bd9f2b1.cfi_jt @ 0x08032a10 (size 8) =====
// (empty)
// ===== sym.cfg80211_event_work.4cb80888839f98f690b7d75ef25d1694.cfi_jt @ 0x08032a18 (size 8) =====
// (empty)
// ===== sym.cfg80211_conn_work.cfi_jt @ 0x08032a20 (size 8) =====
// (empty)
// ===== sym.reg_todo.afd474eb3fbe20bfb2abcee49bd9f2b1.cfi_jt @ 0x08032a28 (size 8) =====
// (empty)
// ===== sym.cfg80211_background_cac_abort_wk.cfi_jt @ 0x08032a30 (size 8) =====
// (empty)
// ===== sym.cfg80211_sched_scan_results_wk.cfi_jt @ 0x08032a38 (size 8) =====
// (empty)
// ===== sym.cfg80211_dfs_channels_update_work.cfi_jt @ 0x08032a40 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_update_owe_info_event.cfi_jt @ 0x08032a48 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_update_owe_info.cfi_jt @ 0x08032a50 (size 8) =====
// (empty)
// ===== sym.cfg80211_sched_scan_results.cfi_jt @ 0x08032a58 (size 8) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stopped.cfi_jt @ 0x08032a60 (size 8) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stopped_locked.cfi_jt @ 0x08032a68 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_change_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032a70 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032a78 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032a80 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_p2p_device.cfi_jt @ 0x08032a88 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_nan.cfi_jt @ 0x08032a90 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_start_p2p_device.cfi_jt @ 0x08032a98 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_virtual_intf.cfi_jt @ 0x08032aa0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_testmode_cmd.cfi_jt @ 0x08032aa8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_stop_iface.cfi_jt @ 0x08032ab0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_tx_power.cfi_jt @ 0x08032ab8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_crit_proto_stop.cfi_jt @ 0x08032ac0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_return_wdev.cfi_jt @ 0x08032ac8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_txq_stats.cfi_jt @ 0x08032ad0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_abort_scan.cfi_jt @ 0x08032ad8 (size 8) =====
// (empty)
// ===== sym.cfg80211_assoc_comeback.cfi_jt @ 0x08032ae0 (size 8) =====
// (empty)
// ===== sym.cfg80211_port_authorized.cfi_jt @ 0x08032ae8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ready_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032af0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ready_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032af8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ready_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b00 (size 8) =====
// (empty)
// ===== sym.cfg80211_get_p2p_attr.cfi_jt @ 0x08032b08 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_mpath.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b10 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_mpath.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b18 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_mpath.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b20 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b28 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b30 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b38 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_oper.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b40 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_oper.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b48 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_oper.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b50 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_join_ibss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b58 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_ibss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b60 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_ibss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b68 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b70 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b78 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_add_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b80 (size 8) =====
// (empty)
// ===== sym.ieee80211_s1g_channel_width.cfi_jt @ 0x08032b88 (size 8) =====
// (empty)
// ===== sym.cfg80211_report_wowlan_wakeup.cfi_jt @ 0x08032b90 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032b98 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032ba0 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032ba8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_cqm_pktloss_notify.cfi_jt @ 0x08032bb0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_station_add_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bb8 (size 8) =====
// (empty)
// ===== sym.perf_trace_station_add_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bc0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_station_add_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bc8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_evt_only.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bd0 (size 8) =====
// (empty)
// ===== sym.perf_trace_netdev_evt_only.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bd8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_netdev_evt_only.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032be0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_noack_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032be8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_disconnect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bf0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_disconnect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032bf8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_disconnect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c00 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_noack_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c08 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_noack_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c10 (size 8) =====
// (empty)
// ===== sym.get_wiphy_regdom.cfi_jt @ 0x08032c18 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_mgmt.cfi_jt @ 0x08032c20 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c28 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmsr_complete.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c30 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_mgmt_tx_cancel_wait.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c38 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_cancel_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c40 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_mgmt_tx_cancel_wait.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c48 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_cancel_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c50 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_del_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c58 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_cookie_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c60 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_cookie_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c68 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_cancel_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c70 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmsr_complete.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c78 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c80 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmsr_complete.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c88 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_cookie_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c90 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_mgmt_tx_cancel_wait.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032c98 (size 8) =====
// (empty)
// ===== sym.cfg80211_stop_iface.cfi_jt @ 0x08032ca0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_cqm_rssi_notify.cfi_jt @ 0x08032ca8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_assoc_comeback.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cb0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_assoc_comeback.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cb8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_assoc_comeback.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cc0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_key_handle.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cc8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_key_handle.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cd0 (size 8) =====
// (empty)
// ===== sym.perf_trace_key_handle.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032cd8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_cancel_remain_on_channel.cfi_jt @ 0x08032ce0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_mgmt_tx_cancel_wait.cfi_jt @ 0x08032ce8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_abort_pmsr.cfi_jt @ 0x08032cf0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_pmsr_complete.cfi_jt @ 0x08032cf8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_start_pmsr.cfi_jt @ 0x08032d00 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_nan_func.cfi_jt @ 0x08032d08 (size 8) =====
// (empty)
// ===== sym.perf_trace_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d10 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d18 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d20 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d28 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d30 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d38 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d40 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d48 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d50 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_add_intf_link.cfi_jt @ 0x08032d58 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_channel.cfi_jt @ 0x08032d60 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_del_intf_link.cfi_jt @ 0x08032d68 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_netdev_frame_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d70 (size 8) =====
// (empty)
// ===== sym.perf_trace_netdev_frame_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d78 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_frame_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d80 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_station_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d88 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_station_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d90 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_station_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032d98 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_set_mcast_rate.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032da0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_mcast_rate.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032da8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_mcast_rate.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032db0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032db8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032dc0 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_start_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032dc8 (size 8) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tx_mlme_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032dd0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tx_mlme_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032dd8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tx_mlme_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032de0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_ocb.cfi_jt @ 0x08032de8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mesh_config.cfi_jt @ 0x08032df0 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_mesh.cfi_jt @ 0x08032df8 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_ibss.cfi_jt @ 0x08032e00 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_flush_pmksa.cfi_jt @ 0x08032e08 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_end_cac.cfi_jt @ 0x08032e10 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_set_rekey_data.cfi_jt @ 0x08032e18 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_sched_scan_results.cfi_jt @ 0x08032e20 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_sched_scan_stopped.cfi_jt @ 0x08032e28 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_mgmt_tx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e30 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_mgmt_tx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e38 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_mgmt_tx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e40 (size 8) =====
// (empty)
// ===== sym.cfg80211_check_station_change.cfi_jt @ 0x08032e48 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e50 (size 8) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e58 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e60 (size 8) =====
// (empty)
// ===== sym.ieee80211_hdrlen.cfi_jt @ 0x08032e68 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_void_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e70 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_void_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e78 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_void_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032e80 (size 8) =====
// (empty)
// ===== sym.nl80211_post_doit.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032e88 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_mpp.cfi_jt @ 0x08032e90 (size 8) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_mpath.cfi_jt @ 0x08032e98 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_nan_change_conf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032ea0 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_nan_change_conf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032ea8 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_nan_change_conf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032eb0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_gtk_rekey_notify.cfi_jt @ 0x08032eb8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_spurious_frame.cfi_jt @ 0x08032ec0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_notify_new_peer_candidate.cfi_jt @ 0x08032ec8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_del_sta.cfi_jt @ 0x08032ed0 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_unexpected_4addr_frame.cfi_jt @ 0x08032ed8 (size 8) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_auth_timeout.cfi_jt @ 0x08032ee0 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_wiphy.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032ee8 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_mpp.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032ef0 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_mpath.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032ef8 (size 8) =====
// (empty)
// ===== sym.nl80211_vendor_cmd_dump.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f00 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_scan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f08 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_survey.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f10 (size 8) =====
// (empty)
// ===== sym.nl80211_testmode_dump.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f18 (size 8) =====
// (empty)
// ===== sym.nl80211_get_reg_dump.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f20 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_interface.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f28 (size 8) =====
// (empty)
// ===== sym.nl80211_dump_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f30 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_connect_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f38 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_update_connect_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f40 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_connect_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f48 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_disassoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f50 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_disassoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f58 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_disassoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08032f60 (size 8) =====
// (empty)
// ===== sym.wiphy_suspend.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032f68 (size 8) =====
// (empty)
// ===== sym.wiphy_resume.cdb4e9913ee09f921401e540eb3f658c.cfi_jt @ 0x08032f70 (size 8) =====
// (empty)
// ===== sym.nl80211_req_set_reg.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f78 (size 8) =====
// (empty)
// ===== sym.nl80211_leave_ocb.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f80 (size 8) =====
// (empty)
// ===== sym.nl80211_join_mesh.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f88 (size 8) =====
// (empty)
// ===== sym.nl80211_set_tx_bitrate_mask.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f90 (size 8) =====
// (empty)
// ===== sym.nl80211_start_sched_scan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032f98 (size 8) =====
// (empty)
// ===== sym.nl80211_tdls_channel_switch.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fa0 (size 8) =====
// (empty)
// ===== sym.nl80211_start_ap.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fa8 (size 8) =====
// (empty)
// ===== sym.nl80211_authenticate.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fb0 (size 8) =====
// (empty)
// ===== sym.nl80211_del_pmk.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fb8 (size 8) =====
// (empty)
// ===== sym.nl80211_leave_mesh.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fc0 (size 8) =====
// (empty)
// ===== sym.nl80211_set_multicast_to_unicast.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fc8 (size 8) =====
// (empty)
// ===== sym.nl80211_new_interface.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fd0 (size 8) =====
// (empty)
// ===== sym.nl80211_color_change.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fd8 (size 8) =====
// (empty)
// ===== sym.nl80211_remain_on_channel.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fe0 (size 8) =====
// (empty)
// ===== sym.nl80211_set_noack_map.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032fe8 (size 8) =====
// (empty)
// ===== sym.nl80211_tx_control_port.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032ff0 (size 8) =====
// (empty)
// ===== sym.nl80211_get_power_save.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08032ff8 (size 8) =====
// (empty)
// ===== sym.nl80211_start_p2p_device.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033000 (size 8) =====
// (empty)
// ===== sym.nl80211_probe_mesh_link.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033008 (size 8) =====
// (empty)
// ===== sym.nl80211_new_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033010 (size 8) =====
// (empty)
// ===== sym.nl80211_update_connect_params.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033018 (size 8) =====
// (empty)
// ===== sym.nl80211_add_link_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033020 (size 8) =====
// (empty)
// ===== sym.nl80211_stop_p2p_device.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033028 (size 8) =====
// (empty)
// ===== sym.nl80211_get_wowlan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033030 (size 8) =====
// (empty)
// ===== sym.nl80211_leave_ibss.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033038 (size 8) =====
// (empty)
// ===== sym.nl80211_tdls_mgmt.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033040 (size 8) =====
// (empty)
// ===== sym.nl80211_update_mesh_config.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033048 (size 8) =====
// (empty)
// ===== sym.nl80211_testmode_do.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033050 (size 8) =====
// (empty)
// ===== sym.nl80211_set_rekey_data.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033058 (size 8) =====
// (empty)
// ===== sym.nl80211_set_mpath.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033060 (size 8) =====
// (empty)
// ===== sym.nl80211_get_mesh_config.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033068 (size 8) =====
// (empty)
// ===== sym.nl80211_del_key.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033070 (size 8) =====
// (empty)
// ===== sym.nl80211_disassociate.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033078 (size 8) =====
// (empty)
// ===== sym.nl80211_set_channel.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033080 (size 8) =====
// (empty)
// ===== sym.nl80211_stop_nan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033088 (size 8) =====
// (empty)
// ===== sym.nl80211_add_link.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033090 (size 8) =====
// (empty)
// ===== sym.nl80211_flush_pmksa.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033098 (size 8) =====
// (empty)
// ===== sym.nl80211_reload_regdb.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330a0 (size 8) =====
// (empty)
// ===== sym.nl80211_nan_del_func.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330a8 (size 8) =====
// (empty)
// ===== sym.nl80211_start_radar_detection.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330b0 (size 8) =====
// (empty)
// ===== sym.nl80211_join_ibss.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330b8 (size 8) =====
// (empty)
// ===== sym.nl80211_del_mpath.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330c0 (size 8) =====
// (empty)
// ===== sym.nl80211_set_key.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330c8 (size 8) =====
// (empty)
// ===== sym.nl80211_update_ft_ies.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330d0 (size 8) =====
// (empty)
// ===== sym.nl80211_del_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330d8 (size 8) =====
// (empty)
// ===== sym.nl80211_tx_mgmt_cancel_wait.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330e0 (size 8) =====
// (empty)
// ===== sym.nl80211_register_beacons.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330e8 (size 8) =====
// (empty)
// ===== sym.nl80211_set_mcast_rate.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330f0 (size 8) =====
// (empty)
// ===== sym.nl80211_get_ftm_responder_stats.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080330f8 (size 8) =====
// (empty)
// ===== sym.nl80211_stop_ap.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033100 (size 8) =====
// (empty)
// ===== sym.nl80211_get_reg_do.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033108 (size 8) =====
// (empty)
// ===== sym.nl80211_add_tx_ts.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033110 (size 8) =====
// (empty)
// ===== sym.nl80211_set_interface.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033118 (size 8) =====
// (empty)
// ===== sym.nl80211_notify_radar_detection.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033120 (size 8) =====
// (empty)
// ===== sym.nl80211_get_protocol_features.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033128 (size 8) =====
// (empty)
// ===== sym.nl80211_del_interface.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033130 (size 8) =====
// (empty)
// ===== sym.nl80211_setdel_pmksa.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033138 (size 8) =====
// (empty)
// ===== sym.nl80211_new_mpath.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033140 (size 8) =====
// (empty)
// ===== sym.nl80211_nan_add_func.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033148 (size 8) =====
// (empty)
// ===== sym.nl80211_stop_sched_scan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033150 (size 8) =====
// (empty)
// ===== sym.nl80211_set_power_save.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033158 (size 8) =====
// (empty)
// ===== sym.nl80211_set_wowlan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033160 (size 8) =====
// (empty)
// ===== sym.nl80211_connect.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033168 (size 8) =====
// (empty)
// ===== sym.nl80211_get_mpp.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033170 (size 8) =====
// (empty)
// ===== sym.nl80211_join_ocb.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033178 (size 8) =====
// (empty)
// ===== sym.nl80211_pmsr_start.cfi_jt @ 0x08033180 (size 8) =====
// (empty)
// ===== sym.nl80211_external_auth.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033188 (size 8) =====
// (empty)
// ===== sym.nl80211_trigger_scan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033190 (size 8) =====
// (empty)
// ===== sym.nl80211_remove_link_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033198 (size 8) =====
// (empty)
// ===== sym.nl80211_set_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331a0 (size 8) =====
// (empty)
// ===== sym.nl80211_register_unexpected_frame.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331a8 (size 8) =====
// (empty)
// ===== sym.nl80211_del_tx_ts.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331b0 (size 8) =====
// (empty)
// ===== sym.nl80211_set_bss.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331b8 (size 8) =====
// (empty)
// ===== sym.nl80211_remove_link.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331c0 (size 8) =====
// (empty)
// ===== sym.nl80211_update_owe_info.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331c8 (size 8) =====
// (empty)
// ===== sym.nl80211_set_coalesce.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331d0 (size 8) =====
// (empty)
// ===== sym.nl80211_get_mpath.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331d8 (size 8) =====
// (empty)
// ===== sym.nl80211_start_nan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331e0 (size 8) =====
// (empty)
// ===== sym.nl80211_register_mgmt.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331e8 (size 8) =====
// (empty)
// ===== sym.nl80211_get_wiphy.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331f0 (size 8) =====
// (empty)
// ===== sym.nl80211_get_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080331f8 (size 8) =====
// (empty)
// ===== sym.nl80211_get_coalesce.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033200 (size 8) =====
// (empty)
// ===== sym.nl80211_set_qos_map.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033208 (size 8) =====
// (empty)
// ===== sym.nl80211_cancel_remain_on_channel.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033210 (size 8) =====
// (empty)
// ===== sym.nl80211_deauthenticate.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033218 (size 8) =====
// (empty)
// ===== sym.nl80211_channel_switch.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033220 (size 8) =====
// (empty)
// ===== sym.nl80211_crit_protocol_stop.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033228 (size 8) =====
// (empty)
// ===== sym.nl80211_modify_link_station.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033230 (size 8) =====
// (empty)
// ===== sym.nl80211_get_key.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033238 (size 8) =====
// (empty)
// ===== sym.nl80211_set_mac_acl.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033240 (size 8) =====
// (empty)
// ===== sym.nl80211_tdls_oper.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033248 (size 8) =====
// (empty)
// ===== sym.nl80211_set_fils_aad.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033250 (size 8) =====
// (empty)
// ===== sym.nl80211_tdls_cancel_channel_switch.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033258 (size 8) =====
// (empty)
// ===== sym.nl80211_crit_protocol_start.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033260 (size 8) =====
// (empty)
// ===== sym.nl80211_disconnect.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033268 (size 8) =====
// (empty)
// ===== sym.nl80211_set_beacon.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033270 (size 8) =====
// (empty)
// ===== sym.nl80211_nan_change_config.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033278 (size 8) =====
// (empty)
// ===== sym.nl80211_tx_mgmt.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033280 (size 8) =====
// (empty)
// ===== sym.nl80211_set_sar_specs.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033288 (size 8) =====
// (empty)
// ===== sym.nl80211_set_wiphy.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033290 (size 8) =====
// (empty)
// ===== sym.nl80211_wiphy_netns.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x08033298 (size 8) =====
// (empty)
// ===== sym.nl80211_probe_client.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332a0 (size 8) =====
// (empty)
// ===== sym.nl80211_set_tid_config.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332a8 (size 8) =====
// (empty)
// ===== sym.nl80211_abort_scan.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332b0 (size 8) =====
// (empty)
// ===== sym.nl80211_get_interface.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332b8 (size 8) =====
// (empty)
// ===== sym.nl80211_set_cqm.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332c0 (size 8) =====
// (empty)
// ===== sym.nl80211_associate.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332c8 (size 8) =====
// (empty)
// ===== sym.nl80211_set_pmk.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332d0 (size 8) =====
// (empty)
// ===== sym.nl80211_new_key.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332d8 (size 8) =====
// (empty)
// ===== sym.nl80211_vendor_cmd.ae65b0ad38dab795f37f4ce563de4e71.cfi_jt @ 0x080332e0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_oper.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080332e8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_mpath_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080332f0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_testmode_cmd.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080332f8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033300 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_beacon_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033308 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_testmode_dump.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033310 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033318 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033320 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_survey_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033328 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033330 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_ibss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033338 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_mac_acl.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033340 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_link_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033348 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033350 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_stop_iface.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033358 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_report_obss_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033360 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_mcast_rate.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033368 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033370 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033378 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_probe_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033380 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_mpath_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033388 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033390 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_txq_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033398 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_inform_bss_frame.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333a0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_bss_color_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333a8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_monitor_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333b0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_txe_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333b8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_mgmt_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333c0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_link_station_add_mod.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333c8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333d0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ibss_joined.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333d8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_radar_detection.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333e0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_chandef_dfs_required.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333e8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_mgmt_tx_cancel_wait.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333f0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_crit_proto_stop.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080333f8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ch_switch_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033400 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_bool.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033408 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_stop_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033410 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_send_rx_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033418 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_bitrate_mask.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033420 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_station_del.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033428 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_deauth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033430 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_radar_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033438 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_cancel_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033440 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_cookie.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033448 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_sar_specs.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033450 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_qos_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033458 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033460 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmsr_complete.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033468 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033470 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_update_owe_info_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033478 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_get_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033480 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_ft_ies.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033488 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_probe_mesh_link.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033490 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_channel_switch.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033498 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_u32.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334a0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334a8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_rssi_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334b0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_nan_change_conf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334b8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334c0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ready_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334c8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334d0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_scan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334d8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cac_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334e0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_scan_done.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334e8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_ap_chanwidth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334f0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_link_station.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080334f8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_coalesce.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033500 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033508 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_cookie_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033510 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_disconnect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033518 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_michael_mic_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033520 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ready_on_channel_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033528 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_mgmt_frame_registrations.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033530 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_mpath.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033538 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_mesh_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033540 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ch_switch_started_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033548 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tx_mgmt_expired.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033550 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033558 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_rssi_range_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033560 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_fils_aad.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033568 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_reset_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033570 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_key_handle.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033578 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_noack_map.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033580 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_void_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033588 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_chandef.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033590 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_netdev_evt_only.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033598 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335a0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ft_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335a8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335b0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_nan.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335b8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_mpp.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335c0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335c8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_control_port.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335d0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_key.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335d8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_mac_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335e0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_owe_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335e8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_tx_rx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335f0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_suspend.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080335f8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_pmksa.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033600 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_disassoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033608 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_virtual_intf.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033610 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_control_port_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033618 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_tx_ts.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033620 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033628 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_ap.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033630 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_tx_power.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033638 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033640 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_probe_client.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033648 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_send_assoc_failure.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033650 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tdls_oper_request.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033658 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_connect_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033660 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_external_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033668 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_station_add_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033670 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_only_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033678 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_station_info.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033680 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmsr_report.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033688 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_get_bss.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033690 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_reg_can_beacon.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033698 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmksa_candidate_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336a0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_ocb.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336a8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_radar_background.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336b0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_connect.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336b8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_color_change.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336c0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_nan_func.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336c8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_wiphy_params.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336d0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_tx_rx_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336d8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_cancel_remain_on_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336e0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_mesh.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336e8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_multicast_to_unicast.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336f0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_report_wowlan_wakeup.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080336f8 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_auth.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033700 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_survey.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033708 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tx_mlme_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033710 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_bss_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033718 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_enabled_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033720 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cqm_rssi_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033728 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_uint.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033730 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_mgmt_tx_status.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033738 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_power_mgmt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033740 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_assoc.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033748 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_new_sta.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033750 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_tid_config.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033758 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_get_ftm_responder_stats.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033760 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cqm_pktloss_notify.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033768 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033770 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_assoc_comeback.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033778 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_libertas_set_mesh_channel.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033780 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_crit_proto_start.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033788 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_mgmt_tx.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033790 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_pmk.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x08033798 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_id_evt.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080337a0 (size 8) =====
// (empty)
// ===== sym.trace_raw_output_netdev_frame_event.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080337a8 (size 8) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_chandef.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080337b0 (size 8) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_chandef.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080337b8 (size 8) =====
// (empty)
// ===== sym.perf_trace_rdev_return_chandef.9f8c735f6691ffe9218ad509ff7e1ad8.cfi_jt @ 0x080337c0 (size 8) =====
// (empty)
// ===== sym.cfg80211_rdev_by_wiphy_idx @ 0x080337c8 (size 156) =====
// (empty)
// ===== sym.get_wiphy_idx @ 0x08033868 (size 32) =====
// (empty)
// ===== sym.wiphy_idx_to_wiphy @ 0x08033888 (size 236) =====
// (empty)
// ===== sym.cfg80211_dev_rename @ 0x08033978 (size 208) =====
// (empty)
// ===== sym.cfg80211_dev_check_name @ 0x08033a54 (size 376) =====
// (empty)
// ===== sym.cfg80211_switch_netns @ 0x08033bcc (size 444) =====
// (empty)
// ===== sym.cfg80211_stop_p2p_device @ 0x08033d8c (size 192) =====
// (empty)
// ===== sym.rdev_stop_p2p_device @ 0x08033e50 (size 124) =====
// (empty)
// ===== sym.cfg80211_stop_nan @ 0x08033fdc (size 120) =====
// (empty)
// ===== sym.rdev_stop_nan @ 0x08034058 (size 124) =====
// (empty)
// ===== sym.cfg80211_shutdown_all_interfaces @ 0x080341e4 (size 412) =====
// (empty)
// ===== sym.cfg80211_destroy_ifaces @ 0x08034380 (size 252) =====
// (empty)
// ===== sym.cfg80211_leave @ 0x08034480 (size 88) =====
// (empty)
// ===== sym.wiphy_new_nm @ 0x080344d8 (size 1540) =====
// (empty)
// ===== sym.cfg80211_destroy_iface_wk @ 0x08034adc (size 60) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stop_wk @ 0x08034b18 (size 128) =====
// (empty)
// ===== sym.cfg80211_propagate_radar_detect_wk @ 0x08034b98 (size 72) =====
// (empty)
// ===== sym.cfg80211_propagate_cac_done_wk @ 0x08034be0 (size 72) =====
// (empty)
// ===== sym.cfg80211_rfkill_set_block @ 0x08034c28 (size 72) =====
// (empty)
// ===== sym.wiphy_free @ 0x08034c70 (size 40) =====
// (empty)
// ===== sym.cfg80211_rfkill_block_work @ 0x08034c98 (size 60) =====
// (empty)
// ===== sym.cfg80211_event_work @ 0x08034cd4 (size 72) =====
// (empty)
// ===== sym.wiphy_register @ 0x08034d1c (size 2516) =====
// (empty)
// ===== sym.list_add_rcu @ 0x080356f0 (size 92) =====
// (empty)
// ===== sym.wiphy_unregister @ 0x0803574c (size 628) =====
// (empty)
// ===== sym.wiphy_rfkill_start_polling @ 0x080359c4 (size 80) =====
// (empty)
// ===== sym.cfg80211_rfkill_poll @ 0x08035a14 (size 40) =====
// (empty)
// ===== sym.rdev_set_wakeup @ 0x08035a3c (size 112) =====
// (empty)
// ===== sym.rdev_set_wakeup_1 @ 0x08035bbc (size 124) =====
// (empty)
// ===== sym.cfg80211_dev_free @ 0x08035d48 (size 220) =====
// (empty)
// ===== sym.wiphy_rfkill_set_hw_state_reason @ 0x08035e28 (size 96) =====
// (empty)
// ===== sym.cfg80211_cqm_config_free @ 0x08035e88 (size 56) =====
// (empty)
// ===== sym.cfg80211_unregister_wdev @ 0x08035ec0 (size 40) =====
// (empty)
// ===== sym._cfg80211_unregister_wdev @ 0x08035ee8 (size 600) =====
// (empty)
// ===== sym.cfg80211_update_iface_num @ 0x08036140 (size 44) =====
// (empty)
// ===== sym.__cfg80211_leave @ 0x0803616c (size 300) =====
// (empty)
// ===== sym.cfg80211_stop_iface @ 0x08036298 (size 256) =====
// (empty)
// ===== sym.cfg80211_init_wdev @ 0x08036428 (size 252) =====
// (empty)
// ===== sym.cfg80211_register_wdev @ 0x08036524 (size 272) =====
// (empty)
// ===== sym.cfg80211_register_netdevice @ 0x08036640 (size 192) =====
// (empty)
// ===== sym.rdev_rfkill_poll @ 0x08036700 (size 144) =====
// (empty)
// ===== sym.cfg80211_unhold_bss @ 0x0803689c (size 200) =====
// (empty)
// ===== sym.cfg80211_pernet_exit @ 0x08036964 (size 140) =====
// (empty)
// ===== sym.cfg80211_netdev_notifier_call @ 0x080369f0 (size 1012) =====
// (empty)
// ===== sym.rdev_set_power_mgmt @ 0x08036de4 (size 156) =====
// (empty)
// ===== sym.rdev_set_power_mgmt_1 @ 0x08036f9c (size 156) =====
// (empty)
// ===== sym.__cfi_check_fail @ 0x08037154 (size 88) =====
// (empty)
// ===== sym.wiphy_dev_release @ 0x080371ac (size 40) =====
// (empty)
// ===== sym.wiphy_namespace @ 0x080371d4 (size 16) =====
// (empty)
// ===== sym.wiphy_sysfs_init @ 0x080371e4 (size 52) =====
// (empty)
// ===== sym.wiphy_sysfs_exit @ 0x08037218 (size 44) =====
// (empty)
// ===== sym.index_show @ 0x08037244 (size 64) =====
// (empty)
// ===== sym.macaddress_show @ 0x08037284 (size 60) =====
// (empty)
// ===== sym.address_mask_show @ 0x080372c0 (size 60) =====
// (empty)
// ===== sym.addresses_show @ 0x080372fc (size 212) =====
// (empty)
// ===== sym.name_show @ 0x080373d0 (size 72) =====
// (empty)
// ===== sym.wiphy_suspend @ 0x08037418 (size 360) =====
// (empty)
// ===== sym.wiphy_resume @ 0x08037580 (size 204) =====
// (empty)
// ===== sym.rdev_suspend @ 0x0803764c (size 132) =====
// (empty)
// ===== sym.rdev_resume @ 0x080377e4 (size 144) =====
// (empty)
// ===== sym.ieee80211_radiotap_iterator_init @ 0x0803798c (size 184) =====
// (empty)
// ===== sym.ieee80211_radiotap_iterator_next @ 0x08037a44 (size 608) =====
// (empty)
// ===== sym.ieee80211_get_response_rate @ 0x08037ca4 (size 96) =====
// (empty)
// ===== sym.ieee80211_mandatory_rates @ 0x08037d04 (size 248) =====
// (empty)
// ===== sym.ieee80211_channel_to_freq_khz @ 0x08037e04 (size 280) =====
// (empty)
// ===== sym.ieee80211_s1g_channel_width @ 0x08037f1c (size 148) =====
// (empty)
// ===== sym.ieee80211_freq_khz_to_channel @ 0x08037fb0 (size 296) =====
// (empty)
// ===== sym.ieee80211_get_channel_khz @ 0x080380d8 (size 464) =====
// (empty)
// ===== sym.ieee80211_set_bitrate_flags @ 0x080382a8 (size 484) =====
// (empty)
// ===== sym.cfg80211_supported_cipher_suite @ 0x0803848c (size 104) =====
// (empty)
// ===== sym.cfg80211_valid_key_idx @ 0x080384f4 (size 172) =====
// (empty)
// ===== sym.cfg80211_validate_key_settings @ 0x080385a0 (size 696) =====
// (empty)
// ===== sym.ieee80211_hdrlen @ 0x08038858 (size 76) =====
// (empty)
// ===== sym.ieee80211_get_hdrlen_from_skb @ 0x08038914 (size 208) =====
// (empty)
// ===== sym.ieee80211_get_mesh_hdrlen @ 0x080389e4 (size 48) =====
// (empty)
// ===== sym.ieee80211_data_to_8023_exthdr @ 0x08038a14 (size 1092) =====
// (empty)
// ===== sym.ieee80211_amsdu_to_8023s @ 0x08038e58 (size 904) =====
// (empty)
// ===== sym.cfg80211_classify8021d @ 0x080391e0 (size 696) =====
// (empty)
// ===== sym.ieee80211_bss_get_elem @ 0x08039498 (size 84) =====
// (empty)
// ===== sym.cfg80211_upload_connect_keys @ 0x080394f0 (size 512) =====
// (empty)
// ===== sym.rdev_add_key @ 0x080396f0 (size 172) =====
// (empty)
// ===== sym.rdev_add_key_1 @ 0x080398c0 (size 192) =====
// (empty)
// ===== sym.rdev_set_default_key @ 0x08039aa4 (size 152) =====
// (empty)
// ===== sym.rdev_set_default_key_1 @ 0x08039c60 (size 180) =====
// (empty)
// ===== sym.cfg80211_process_wdev_events @ 0x08039e38 (size 420) =====
// (empty)
// ===== sym.cfg80211_process_rdev_events @ 0x08039fe4 (size 76) =====
// (empty)
// ===== sym.cfg80211_change_iface @ 0x0803a030 (size 768) =====
// (empty)
// ===== sym.rdev_set_qos_map @ 0x0803a338 (size 140) =====
// (empty)
// ===== sym.rdev_set_qos_map_1 @ 0x0803a4dc (size 276) =====
// (empty)
// ===== sym.rdev_set_qos_map_2 @ 0x0803a694 (size 140) =====
// (empty)
// ===== sym.rdev_set_qos_map_3 @ 0x0803a838 (size 140) =====
// (empty)
// ===== sym.rdev_set_qos_map_4 @ 0x0803a9dc (size 140) =====
// (empty)
// ===== sym.rdev_set_qos_map_5 @ 0x0803ab80 (size 140) =====
// (empty)
// ===== sym.rdev_change_virtual_intf @ 0x0803ad24 (size 156) =====
// (empty)
// ===== sym.cfg80211_calculate_bitrate @ 0x0803aed8 (size 560) =====
// (empty)
// ===== sym.cfg80211_calculate_bitrate_he @ 0x0803b10c (size 348) =====
// (empty)
// ===== sym.cfg80211_calculate_bitrate_eht @ 0x0803b26c (size 808) =====
// (empty)
// ===== sym.cfg80211_get_p2p_attr @ 0x0803b598 (size 540) =====
// (empty)
// ===== sym.ieee80211_ie_split_ric @ 0x0803b7b4 (size 572) =====
// (empty)
// ===== sym.ieee80211_operating_class_to_band @ 0x0803b9f4 (size 116) =====
// (empty)
// ===== sym.ieee80211_chandef_to_operating_class @ 0x0803ba68 (size 536) =====
// (empty)
// ===== sym.cfg80211_validate_beacon_int @ 0x0803bc80 (size 36) =====
// (empty)
// ===== sym.cfg80211_iter_combinations @ 0x0803bca4 (size 952) =====
// (empty)
// ===== sym.cfg80211_iftype_allowed @ 0x0803c060 (size 124) =====
// (empty)
// ===== sym.cfg80211_check_combinations @ 0x0803c0dc (size 120) =====
// (empty)
// ===== sym.cfg80211_iter_sum_ifcombs @ 0x0803c154 (size 24) =====
// (empty)
// ===== sym.ieee80211_get_ratemask @ 0x0803c16c (size 160) =====
// (empty)
// ===== sym.ieee80211_get_num_supported_channels @ 0x0803c20c (size 124) =====
// (empty)
// ===== sym.cfg80211_get_station @ 0x0803c288 (size 140) =====
// (empty)
// ===== sym.rdev_get_station @ 0x0803c314 (size 156) =====
// (empty)
// ===== sym.rdev_get_station_1 @ 0x0803c4cc (size 156) =====
// (empty)
// ===== sym.cfg80211_free_nan_func @ 0x0803c684 (size 204) =====
// (empty)
// ===== sym.cfg80211_does_bw_fit_range @ 0x0803c750 (size 64) =====
// (empty)
// ===== sym.cfg80211_sinfo_alloc_tid_stats @ 0x0803c790 (size 132) =====
// (empty)
// ===== sym.cfg80211_send_layer2_update @ 0x0803c814 (size 184) =====
// (empty)
// ===== sym.ieee80211_get_vht_max_nss @ 0x0803c8cc (size 560) =====
// (empty)
// ===== sym.cfg80211_remove_link @ 0x0803cb00 (size 180) =====
// (empty)
// ===== sym.rdev_del_intf_link @ 0x0803cbb4 (size 136) =====
// (empty)
// ===== sym.cfg80211_remove_links @ 0x0803cd50 (size 288) =====
// (empty)
// ===== sym.cfg80211_remove_virtual_intf @ 0x0803ce70 (size 68) =====
// (empty)
// ===== sym.rdev_del_virtual_intf.llvm.2311185365397402859 @ 0x0803ceb4 (size 132) =====
// (empty)
// ===== sym.cfg80211_get_iftype_ext_capa @ 0x0803d04c (size 64) =====
// (empty)
// ===== sym.__ieee80211_amsdu_copy_frag @ 0x0803d08c (size 612) =====
// (empty)
// ===== sym.get_wiphy_regdom @ 0x0803d2f0 (size 20) =====
// (empty)
// ===== sym.reg_get_dfs_region @ 0x0803d308 (size 100) =====
// (empty)
// ===== sym.is_world_regdom @ 0x0803d374 (size 52) =====
// (empty)
// ===== sym.reg_query_regdb_wmm @ 0x0803d3a8 (size 304) =====
// (empty)
// ===== sym.reg_reload_regdb @ 0x0803d4d8 (size 344) =====
// (empty)
// ===== sym.valid_regdb @ 0x0803d630 (size 480) =====
// (empty)
// ===== sym.reg_process_hint @ 0x0803d810 (size 1668) =====
// (empty)
// ===== sym.reg_is_valid_request @ 0x0803defc (size 92) =====
// (empty)
// ===== sym.reg_get_max_bandwidth @ 0x0803df5c (size 376) =====
// (empty)
// ===== sym.freq_reg_info @ 0x0803e0d4 (size 472) =====
// (empty)
// ===== sym.reg_initiator_name @ 0x0803e2b8 (size 44) =====
// (empty)
// ===== sym.reg_last_request_cell_base @ 0x0803e2ec (size 60) =====
// (empty)
// ===== sym.wiphy_apply_custom_regulatory @ 0x0803e32c (size 396) =====
// (empty)
// ===== sym.handle_band_custom @ 0x0803e4c0 (size 680) =====
// (empty)
// ===== sym.reg_dfs_domain_same @ 0x0803e768 (size 120) =====
// (empty)
// ===== sym.regulatory_hint_user @ 0x0803e7ec (size 216) =====
// (empty)
// ===== sym.queue_regulatory_request @ 0x0803e8c8 (size 204) =====
// (empty)
// ===== sym.regulatory_hint_indoor @ 0x0803e994 (size 152) =====
// (empty)
// ===== sym.regulatory_netlink_notify @ 0x0803ea2c (size 140) =====
// (empty)
// ===== sym.regulatory_hint @ 0x0803eab8 (size 184) =====
// (empty)
// ===== sym.regulatory_hint_country_ie @ 0x0803eb74 (size 264) =====
// (empty)
// ===== sym.regulatory_hint_disconnect @ 0x0803ec80 (size 464) =====
// (empty)
// ===== sym.restore_regulatory_settings @ 0x0803ee50 (size 2052) =====
// (empty)
// ===== sym.regulatory_hint_found_beacon @ 0x0803f654 (size 496) =====
// (empty)
// ===== sym.reg_supported_dfs_region @ 0x0803f844 (size 20) =====
// (empty)
// ===== sym.set_regdom @ 0x0803f858 (size 1916) =====
// (empty)
// ===== sym.regulatory_set_wiphy_regd @ 0x08040014 (size 80) =====
// (empty)
// ===== sym.__regulatory_set_wiphy_regd @ 0x08040064 (size 356) =====
// (empty)
// ===== sym.regulatory_set_wiphy_regd_sync @ 0x080401d4 (size 164) =====
// (empty)
// ===== sym.reg_process_self_managed_hint @ 0x0804027c (size 396) =====
// (empty)
// ===== sym.wiphy_regulatory_register @ 0x0804040c (size 172) =====
// (empty)
// ===== sym.wiphy_update_regulatory @ 0x080404bc (size 2968) =====
// (empty)
// ===== sym.wiphy_all_share_dfs_chan_state @ 0x08041054 (size 476) =====
// (empty)
// ===== sym.reg_process_self_managed_hints @ 0x08041240 (size 192) =====
// (empty)
// ===== sym.wiphy_regulatory_deregister @ 0x08041304 (size 116) =====
// (empty)
// ===== sym.cfg80211_get_unii @ 0x08041380 (size 260) =====
// (empty)
// ===== sym.regulatory_indoor_allowed @ 0x08041484 (size 20) =====
// (empty)
// ===== sym.regulatory_pre_cac_allowed @ 0x08041498 (size 124) =====
// (empty)
// ===== sym.regulatory_propagate_dfs_state @ 0x0804151c (size 484) =====
// (empty)
// ===== sym.regulatory_exit @ 0x0804170c (size 436) =====
// (empty)
// ===== sym.reset_regdomains @ 0x080418c0 (size 296) =====
// (empty)
// ===== sym.set_wmm_rule @ 0x080419f8 (size 308) =====
// (empty)
// ===== sym.valid_wmm @ 0x08041b2c (size 348) =====
// (empty)
// ===== sym.reg_rule_to_chan_bw_flags @ 0x08041c88 (size 428) =====
// (empty)
// ===== sym.reg_query_database @ 0x08041e40 (size 204) =====
// (empty)
// ===== sym.query_regdb @ 0x08041f10 (size 716) =====
// (empty)
// ===== sym.regdb_fw_cb @ 0x080421e0 (size 240) =====
// (empty)
// ===== sym.reg_regdb_apply @ 0x080422d0 (size 184) =====
// (empty)
// ===== sym.reg_todo @ 0x08042390 (size 984) =====
// (empty)
// ===== sym.regdom_intersect @ 0x08042768 (size 788) =====
// (empty)
// ===== sym.print_rd_rules @ 0x08042a7c (size 344) =====
// (empty)
// ===== sym.reg_rules_intersect @ 0x08042bd4 (size 644) =====
// (empty)
// ===== sym.reg_process_ht_flags @ 0x08042e58 (size 684) =====
// (empty)
// ===== sym.rdev_end_cac @ 0x08043108 (size 128) =====
// (empty)
// ===== sym.reg_check_chans_work @ 0x08043298 (size 840) =====
// (empty)
// ===== sym.rdev_get_channel @ 0x080435e0 (size 156) =====
// (empty)
// ===== sym.rdev_get_channel_1 @ 0x08043798 (size 156) =====
// (empty)
// ===== sym.cfg80211_is_element_inherited @ 0x08043950 (size 180) =====
// (empty)
// ===== sym.cfg80211_scan @ 0x08043a04 (size 376) =====
// (empty)
// ===== sym.rdev_scan @ 0x08043b7c (size 132) =====
// (empty)
// ===== sym.rdev_scan_1 @ 0x08043d14 (size 132) =====
// (empty)
// ===== sym.cfg80211_scan_6ghz @ 0x08043eac (size 2552) =====
// (empty)
// ===== sym.___cfg80211_scan_done @ 0x080448a4 (size 528) =====
// (empty)
// ===== sym.__cfg80211_scan_done @ 0x08044ad8 (size 76) =====
// (empty)
// ===== sym.cfg80211_scan_done @ 0x08044b24 (size 400) =====
// (empty)
// ===== sym.cfg80211_add_sched_scan_req @ 0x08044cc4 (size 96) =====
// (empty)
// ===== sym.cfg80211_sched_scan_req_possible @ 0x08044d24 (size 116) =====
// (empty)
// ===== sym.cfg80211_sched_scan_results_wk @ 0x08044d98 (size 316) =====
// (empty)
// ===== sym.cfg80211_sched_scan_results @ 0x08044ed8 (size 164) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stopped_locked @ 0x08045008 (size 184) =====
// (empty)
// ===== sym.__cfg80211_stop_sched_scan @ 0x08045164 (size 188) =====
// (empty)
// ===== sym.cfg80211_sched_scan_stopped @ 0x08045228 (size 72) =====
// (empty)
// ===== sym.cfg80211_stop_sched_scan_req @ 0x08045270 (size 132) =====
// (empty)
// ===== sym.rdev_sched_scan_stop @ 0x080452f4 (size 140) =====
// (empty)
// ===== sym.cfg80211_bss_age @ 0x08045498 (size 128) =====
// (empty)
// ===== sym.cfg80211_bss_expire @ 0x08045518 (size 172) =====
// (empty)
// ===== sym.cfg80211_bss_flush @ 0x080455c8 (size 200) =====
// (empty)
// ===== sym.cfg80211_find_elem_match @ 0x08045694 (size 200) =====
// (empty)
// ===== sym.cfg80211_find_vendor_elem @ 0x0804575c (size 268) =====
// (empty)
// ===== sym.cfg80211_get_bss @ 0x08045868 (size 728) =====
// (empty)
// ===== sym.cfg80211_bss_update @ 0x08045bf0 (size 1820) =====
// (empty)
// ===== sym.cfg80211_update_known_bss @ 0x08046338 (size 408) =====
// (empty)
// ===== sym.cfg80211_merge_profile @ 0x080464f0 (size 376) =====
// (empty)
// ===== sym.cfg80211_inform_bss_data @ 0x08046668 (size 232) =====
// (empty)
// ===== sym.cfg80211_inform_single_bss_data @ 0x08046750 (size 944) =====
// (empty)
// ===== sym.cfg80211_parse_mbssid_data @ 0x08046b88 (size 3072) =====
// (empty)
// ===== sym.cfg80211_inform_bss_frame_data @ 0x08047788 (size 1068) =====
// (empty)
// ===== sym.cfg80211_inform_single_bss_frame_data @ 0x08047bc8 (size 956) =====
// (empty)
// ===== sym.cfg80211_ref_bss @ 0x08048020 (size 132) =====
// (empty)
// ===== sym.cfg80211_put_bss @ 0x080480a4 (size 180) =====
// (empty)
// ===== sym.cfg80211_unlink_bss @ 0x08048158 (size 212) =====
// (empty)
// ===== sym.__cfg80211_unlink_bss @ 0x08048230 (size 388) =====
// (empty)
// ===== sym.cfg80211_bss_iter @ 0x080483cc (size 224) =====
// (empty)
// ===== sym.cfg80211_update_assoc_bss_entry @ 0x080484ac (size 892) =====
// (empty)
// ===== sym.cmp_bss @ 0x0804882c (size 912) =====
// (empty)
// ===== sym.bss_free @ 0x08048bc4 (size 180) =====
// (empty)
// ===== sym.cfg80211_get_bss_channel @ 0x08048c8c (size 384) =====
// (empty)
// ===== sym.nl80211hdr_put @ 0x08048e0c (size 52) =====
// (empty)
// ===== sym.nl80211_parse_chandef @ 0x08048e40 (size 716) =====
// (empty)
// ===== sym.nl80211_put_sta_rate @ 0x0804910c (size 916) =====
// (empty)
// ===== sym.cfg80211_check_station_change @ 0x080494a0 (size 592) =====
// (empty)
// ===== sym.nl80211_parse_random_mac @ 0x080496f0 (size 216) =====
// (empty)
// ===== sym.__cfg80211_alloc_event_skb @ 0x080497c8 (size 188) =====
// (empty)
// ===== sym.__cfg80211_alloc_vendor_skb @ 0x08049884 (size 480) =====
// (empty)
// ===== sym.__cfg80211_send_event_skb @ 0x08049a64 (size 216) =====
// (empty)
// ===== sym.genlmsg_multicast_netns @ 0x08049b40 (size 84) =====
// (empty)
// ===== sym.cfg80211_rdev_free_coalesce @ 0x08049b98 (size 212) =====
// (empty)
// ===== sym.cfg80211_nan_match @ 0x08049c6c (size 824) =====
// (empty)
// ===== sym.cfg80211_nan_func_terminated @ 0x08049fa4 (size 596) =====
// (empty)
// ===== sym.__cfg80211_alloc_reply_skb @ 0x0804a1f8 (size 120) =====
// (empty)
// ===== sym.cfg80211_vendor_cmd_reply @ 0x0804a270 (size 144) =====
// (empty)
// ===== sym.cfg80211_vendor_cmd_get_sender @ 0x0804a30c (size 56) =====
// (empty)
// ===== sym.nl80211_get_wiphy @ 0x0804a344 (size 228) =====
// (empty)
// ===== sym.nl80211_dump_wiphy @ 0x0804a428 (size 460) =====
// (empty)
// ===== sym.nl80211_dump_wiphy_done @ 0x0804a5f4 (size 44) =====
// (empty)
// ===== sym.nl80211_set_wiphy @ 0x0804a620 (size 1552) =====
// (empty)
// ===== sym.nl80211_get_interface @ 0x0804ac30 (size 164) =====
// (empty)
// ===== sym.nl80211_dump_interface @ 0x0804acd4 (size 472) =====
// (empty)
// ===== sym.nl80211_set_interface @ 0x0804aeac (size 644) =====
// (empty)
// ===== sym.nl80211_new_interface @ 0x0804b130 (size 768) =====
// (empty)
// ===== sym.nl80211_del_interface @ 0x0804b430 (size 140) =====
// (empty)
// ===== sym.nl80211_get_key @ 0x0804b4bc (size 676) =====
// (empty)
// ===== sym.nl80211_set_key @ 0x0804b760 (size 952) =====
// (empty)
// ===== sym.nl80211_new_key @ 0x0804bb18 (size 676) =====
// (empty)
// ===== sym.nl80211_del_key @ 0x0804bdbc (size 700) =====
// (empty)
// ===== sym.nl80211_set_beacon @ 0x0804c078 (size 336) =====
// (empty)
// ===== sym.nl80211_start_ap @ 0x0804c1c8 (size 1604) =====
// (empty)
// ===== sym.nl80211_stop_ap @ 0x0804c80c (size 72) =====
// (empty)
// ===== sym.nl80211_get_station @ 0x0804c854 (size 320) =====
// (empty)
// ===== sym.nl80211_dump_station @ 0x0804c994 (size 356) =====
// (empty)
// ===== sym.nl80211_set_station @ 0x0804caf8 (size 1324) =====
// (empty)
// ===== sym.nl80211_new_station @ 0x0804d024 (size 1500) =====
// (empty)
// ===== sym.nl80211_del_station @ 0x0804d600 (size 328) =====
// (empty)
// ===== sym.nl80211_get_mpath @ 0x0804d748 (size 316) =====
// (empty)
// ===== sym.nl80211_dump_mpath @ 0x0804d884 (size 332) =====
// (empty)
// ===== sym.nl80211_get_mpp @ 0x0804d9d0 (size 316) =====
// (empty)
// ===== sym.nl80211_dump_mpp @ 0x0804db0c (size 332) =====
// (empty)
// ===== sym.nl80211_set_mpath @ 0x0804dc58 (size 116) =====
// (empty)
// ===== sym.nl80211_new_mpath @ 0x0804dccc (size 116) =====
// (empty)
// ===== sym.nl80211_del_mpath @ 0x0804dd40 (size 100) =====
// (empty)
// ===== sym.nl80211_set_bss @ 0x0804dda4 (size 452) =====
// (empty)
// ===== sym.nl80211_get_reg_do @ 0x0804df68 (size 488) =====
// (empty)
// ===== sym.nl80211_get_reg_dump @ 0x0804e150 (size 268) =====
// (empty)
// ===== sym.nl80211_req_set_reg @ 0x0804e268 (size 156) =====
// (empty)
// ===== sym.nl80211_reload_regdb @ 0x0804e308 (size 36) =====
// (empty)
// ===== sym.nl80211_get_mesh_config @ 0x0804e32c (size 1512) =====
// (empty)
// ===== sym.nl80211_update_mesh_config @ 0x0804e914 (size 256) =====
// (empty)
// ===== sym.nl80211_trigger_scan @ 0x0804ea14 (size 2400) =====
// (empty)
// ===== sym.nl80211_abort_scan @ 0x0804f374 (size 92) =====
// (empty)
// ===== sym.nl80211_dump_scan @ 0x0804f3d0 (size 1640) =====
// (empty)
// ===== sym.nl80211_start_sched_scan @ 0x0804fa44 (size 316) =====
// (empty)
// ===== sym.nl80211_stop_sched_scan @ 0x0804fb90 (size 264) =====
// (empty)
// ===== sym.nl80211_authenticate @ 0x0804fc98 (size 840) =====
// (empty)
// ===== sym.nl80211_associate @ 0x0804ffe0 (size 1788) =====
// (empty)
// ===== sym.nl80211_deauthenticate @ 0x080506dc (size 276) =====
// (empty)
// ===== sym.nl80211_disassociate @ 0x080507f0 (size 276) =====
// (empty)
// ===== sym.nl80211_join_ibss @ 0x08050904 (size 996) =====
// (empty)
// ===== sym.nl80211_leave_ibss @ 0x08050ce8 (size 84) =====
// (empty)
// ===== sym.nl80211_testmode_do @ 0x08050d3c (size 184) =====
// (empty)
// ===== sym.nl80211_testmode_dump @ 0x08050df4 (size 860) =====
// (empty)
// ===== sym.nl80211_connect @ 0x08051150 (size 1508) =====
// (empty)
// ===== sym.nl80211_update_connect_params @ 0x08051734 (size 572) =====
// (empty)
// ===== sym.nl80211_disconnect @ 0x08051970 (size 188) =====
// (empty)
// ===== sym.nl80211_wiphy_netns @ 0x08051a2c (size 264) =====
// (empty)
// ===== sym.nl80211_dump_survey @ 0x08051b34 (size 1084) =====
// (empty)
// ===== sym.nl80211_setdel_pmksa @ 0x08051f70 (size 484) =====
// (empty)
// ===== sym.nl80211_flush_pmksa @ 0x08052154 (size 88) =====
// (empty)
// ===== sym.nl80211_remain_on_channel @ 0x080521ac (size 576) =====
// (empty)
// ===== sym.nl80211_cancel_remain_on_channel @ 0x080523ec (size 168) =====
// (empty)
// ===== sym.nl80211_set_tx_bitrate_mask @ 0x08052494 (size 264) =====
// (empty)
// ===== sym.nl80211_register_mgmt @ 0x0805259c (size 236) =====
// (empty)
// ===== sym.nl80211_tx_mgmt @ 0x08052688 (size 884) =====
// (empty)
// ===== sym.nl80211_tx_mgmt_cancel_wait @ 0x080529fc (size 204) =====
// (empty)
// ===== sym.nl80211_set_power_save @ 0x08052ac8 (size 148) =====
// (empty)
// ===== sym.nl80211_get_power_save @ 0x08052b5c (size 296) =====
// (empty)
// ===== sym.nl80211_set_cqm @ 0x08052c84 (size 712) =====
// (empty)
// ===== sym.nl80211_set_channel @ 0x08052f4c (size 136) =====
// (empty)
// ===== sym.nl80211_join_mesh @ 0x08052fd4 (size 1044) =====
// (empty)
// ===== sym.nl80211_leave_mesh @ 0x080533e8 (size 40) =====
// (empty)
// ===== sym.nl80211_join_ocb @ 0x08053410 (size 144) =====
// (empty)
// ===== sym.nl80211_leave_ocb @ 0x080534a0 (size 40) =====
// (empty)
// ===== sym.nl80211_get_wowlan @ 0x080534c8 (size 644) =====
// (empty)
// ===== sym.nl80211_set_wowlan @ 0x0805374c (size 1400) =====
// (empty)
// ===== sym.nl80211_set_rekey_data @ 0x08053cc4 (size 440) =====
// (empty)
// ===== sym.nl80211_tdls_mgmt @ 0x08053e7c (size 192) =====
// (empty)
// ===== sym.nl80211_tdls_oper @ 0x08053f3c (size 108) =====
// (empty)
// ===== sym.nl80211_register_unexpected_frame @ 0x08053fa8 (size 80) =====
// (empty)
// ===== sym.nl80211_probe_client @ 0x08053ff8 (size 384) =====
// (empty)
// ===== sym.nl80211_register_beacons @ 0x08054178 (size 264) =====
// (empty)
// ===== sym.nl80211_set_noack_map @ 0x08054280 (size 88) =====
// (empty)
// ===== sym.nl80211_start_p2p_device @ 0x080542d8 (size 168) =====
// (empty)
// ===== sym.nl80211_stop_p2p_device @ 0x08054380 (size 84) =====
// (empty)
// ===== sym.nl80211_start_nan @ 0x080543d4 (size 284) =====
// (empty)
// ===== sym.nl80211_stop_nan @ 0x080544f0 (size 72) =====
// (empty)
// ===== sym.nl80211_nan_add_func @ 0x08054538 (size 1400) =====
// (empty)
// ===== sym.nl80211_nan_del_func @ 0x08054ab4 (size 200) =====
// (empty)
// ===== sym.nl80211_nan_change_config @ 0x08054b7c (size 264) =====
// (empty)
// ===== sym.nl80211_set_mcast_rate @ 0x08054c84 (size 212) =====
// (empty)
// ===== sym.nl80211_set_mac_acl @ 0x08054d58 (size 156) =====
// (empty)
// ===== sym.nl80211_start_radar_detection @ 0x08054df4 (size 496) =====
// (empty)
// ===== sym.nl80211_get_protocol_features @ 0x08054fe8 (size 264) =====
// (empty)
// ===== sym.nl80211_update_ft_ies @ 0x080550f0 (size 184) =====
// (empty)
// ===== sym.nl80211_crit_protocol_start @ 0x080551a8 (size 180) =====
// (empty)
// ===== sym.nl80211_crit_protocol_stop @ 0x08055260 (size 80) =====
// (empty)
// ===== sym.nl80211_get_coalesce @ 0x080552b0 (size 868) =====
// (empty)
// ===== sym.nl80211_set_coalesce @ 0x08055614 (size 1304) =====
// (empty)
// ===== sym.nl80211_channel_switch @ 0x08055b2c (size 996) =====
// (empty)
// ===== sym.nl80211_vendor_cmd @ 0x08055f10 (size 528) =====
// (empty)
// ===== sym.nl80211_vendor_cmd_dump @ 0x08056120 (size 1376) =====
// (empty)
// ===== sym.nl80211_set_qos_map @ 0x08056680 (size 472) =====
// (empty)
// ===== sym.nl80211_add_tx_ts @ 0x08056858 (size 268) =====
// (empty)
// ===== sym.nl80211_del_tx_ts @ 0x08056964 (size 148) =====
// (empty)
// ===== sym.nl80211_tdls_channel_switch @ 0x080569f8 (size 372) =====
// (empty)
// ===== sym.nl80211_tdls_cancel_channel_switch @ 0x08056b6c (size 180) =====
// (empty)
// ===== sym.nl80211_set_multicast_to_unicast @ 0x08056c20 (size 104) =====
// (empty)
// ===== sym.nl80211_set_pmk @ 0x08056c88 (size 356) =====
// (empty)
// ===== sym.nl80211_del_pmk @ 0x08056dec (size 168) =====
// (empty)
// ===== sym.nl80211_external_auth @ 0x08056e94 (size 324) =====
// (empty)
// ===== sym.nl80211_tx_control_port @ 0x08056fd8 (size 480) =====
// (empty)
// ===== sym.nl80211_get_ftm_responder_stats @ 0x080571b8 (size 828) =====
// (empty)
// ===== sym.nl80211_notify_radar_detection @ 0x080574f4 (size 476) =====
// (empty)
// ===== sym.nl80211_update_owe_info @ 0x080576d0 (size 252) =====
// (empty)
// ===== sym.nl80211_probe_mesh_link @ 0x080577cc (size 388) =====
// (empty)
// ===== sym.nl80211_set_tid_config @ 0x08057950 (size 1100) =====
// (empty)
// ===== sym.nl80211_set_sar_specs @ 0x08057d9c (size 692) =====
// (empty)
// ===== sym.nl80211_color_change @ 0x08058050 (size 544) =====
// (empty)
// ===== sym.nl80211_set_fils_aad @ 0x08058270 (size 180) =====
// (empty)
// ===== sym.nl80211_add_link @ 0x08058324 (size 304) =====
// (empty)
// ===== sym.nl80211_remove_link @ 0x08058454 (size 128) =====
// (empty)
// ===== sym.nl80211_add_link_station @ 0x080584d4 (size 44) =====
// (empty)
// ===== sym.nl80211_modify_link_station @ 0x08058500 (size 44) =====
// (empty)
// ===== sym.nl80211_remove_link_station @ 0x0805852c (size 212) =====
// (empty)
// ===== sym.nl80211_notify_wiphy @ 0x08058600 (size 268) =====
// (empty)
// ===== sym.nl80211_send_wiphy @ 0x0805870c (size 4804) =====
// (empty)
// ===== sym.nl80211_notify_iface @ 0x080599d0 (size 184) =====
// (empty)
// ===== sym.nl80211_send_iface @ 0x08059a8c (size 1316) =====
// (empty)
// ===== sym.nl80211_send_scan_start @ 0x08059fb0 (size 176) =====
// (empty)
// ===== sym.nl80211_prep_scan_msg @ 0x0805a064 (size 900) =====
// (empty)
// ===== sym.nl80211_build_scan_msg @ 0x0805a3e8 (size 136) =====
// (empty)
// ===== sym.nl80211_send_scan_msg @ 0x0805a470 (size 92) =====
// (empty)
// ===== sym.nl80211_send_sched_scan @ 0x0805a4d0 (size 432) =====
// (empty)
// ===== sym.nl80211_common_reg_change_event @ 0x0805a680 (size 528) =====
// (empty)
// ===== sym.nl80211_send_rx_auth @ 0x0805a890 (size 68) =====
// (empty)
// ===== sym.nl80211_send_mlme_event.llvm.18208147633047652580 @ 0x0805a8d4 (size 520) =====
// (empty)
// ===== sym.nl80211_send_rx_assoc @ 0x0805aadc (size 76) =====
// (empty)
// ===== sym.nl80211_send_deauth @ 0x0805ab28 (size 68) =====
// (empty)
// ===== sym.nl80211_send_disassoc @ 0x0805ab6c (size 68) =====
// (empty)
// ===== sym.cfg80211_rx_unprot_mlme_mgmt @ 0x0805abb0 (size 248) =====
// (empty)
// ===== sym.nl80211_send_auth_timeout @ 0x0805ad48 (size 48) =====
// (empty)
// ===== sym.nl80211_send_mlme_timeout.llvm.18208147633047652580 @ 0x0805ad78 (size 352) =====
// (empty)
// ===== sym.nl80211_send_assoc_timeout @ 0x0805aed8 (size 48) =====
// (empty)
// ===== sym.nl80211_send_connect_result @ 0x0805af08 (size 1196) =====
// (empty)
// ===== sym.nl80211_send_roamed @ 0x0805b3b4 (size 1060) =====
// (empty)
// ===== sym.nl80211_send_port_authorized @ 0x0805b7d8 (size 364) =====
// (empty)
// ===== sym.nl80211_send_disconnected @ 0x0805b944 (size 412) =====
// (empty)
// ===== sym.nl80211_send_ibss_bssid @ 0x0805bae0 (size 368) =====
// (empty)
// ===== sym.cfg80211_notify_new_peer_candidate @ 0x0805bc50 (size 468) =====
// (empty)
// ===== sym.nl80211_michael_mic_failure @ 0x0805bea8 (size 448) =====
// (empty)
// ===== sym.nl80211_send_beacon_hint_event @ 0x0805c068 (size 460) =====
// (empty)
// ===== sym.nl80211_msg_put_channel @ 0x0805c234 (size 1108) =====
// (empty)
// ===== sym.cfg80211_assoc_comeback @ 0x0805c688 (size 372) =====
// (empty)
// ===== sym.cfg80211_ready_on_channel @ 0x0805c884 (size 100) =====
// (empty)
// ===== sym.nl80211_send_remain_on_chan_event @ 0x0805c9b0 (size 524) =====
// (empty)
// ===== sym.cfg80211_remain_on_channel_expired @ 0x0805cbbc (size 96) =====
// (empty)
// ===== sym.cfg80211_tx_mgmt_expired @ 0x0805ccd4 (size 96) =====
// (empty)
// ===== sym.cfg80211_new_sta @ 0x0805cdec (size 256) =====
// (empty)
// ===== sym.nl80211_send_station @ 0x0805cf74 (size 2728) =====
// (empty)
// ===== sym.cfg80211_del_sta_sinfo @ 0x0805da1c (size 360) =====
// (empty)
// ===== sym.cfg80211_conn_failed @ 0x0805dc08 (size 388) =====
// (empty)
// ===== sym.cfg80211_rx_spurious_frame @ 0x0805dd8c (size 240) =====
// (empty)
// ===== sym.__nl80211_unexpected_frame @ 0x0805dfd4 (size 368) =====
// (empty)
// ===== sym.cfg80211_rx_unexpected_4addr_frame @ 0x0805e148 (size 256) =====
// (empty)
// ===== sym.nl80211_send_mgmt @ 0x0805e3a0 (size 748) =====
// (empty)
// ===== sym.cfg80211_control_port_tx_status @ 0x0805e68c (size 108) =====
// (empty)
// ===== sym.nl80211_frame_tx_status @ 0x0805e6f8 (size 836) =====
// (empty)
// ===== sym.cfg80211_mgmt_tx_status_ext @ 0x0805ea5c (size 40) =====
// (empty)
// ===== sym.cfg80211_rx_control_port @ 0x0805ea84 (size 824) =====
// (empty)
// ===== sym.cfg80211_cqm_rssi_notify @ 0x0805ede0 (size 420) =====
// (empty)
// ===== sym.cfg80211_cqm_rssi_update @ 0x0805f018 (size 452) =====
// (empty)
// ===== sym.cfg80211_prepare_cqm @ 0x0805f1dc (size 352) =====
// (empty)
// ===== sym.cfg80211_cqm_txe_notify @ 0x0805f33c (size 356) =====
// (empty)
// ===== sym.cfg80211_cqm_pktloss_notify @ 0x0805f4a0 (size 444) =====
// (empty)
// ===== sym.cfg80211_cqm_beacon_loss_notify @ 0x0805f66c (size 224) =====
// (empty)
// ===== sym.cfg80211_gtk_rekey_notify @ 0x0805f750 (size 484) =====
// (empty)
// ===== sym.cfg80211_pmksa_candidate_notify @ 0x0805f9b8 (size 528) =====
// (empty)
// ===== sym.cfg80211_ch_switch_notify @ 0x0805fc54 (size 588) =====
// (empty)
// ===== sym.nl80211_ch_switch_notify @ 0x0805ff34 (size 464) =====
// (empty)
// ===== sym.cfg80211_ch_switch_started_notify @ 0x08060104 (size 168) =====
// (empty)
// ===== sym.cfg80211_bss_color_notify @ 0x08060264 (size 448) =====
// (empty)
// ===== sym.nl80211_radar_notify @ 0x080604b0 (size 424) =====
// (empty)
// ===== sym.nl80211_send_chandef @ 0x08060658 (size 396) =====
// (empty)
// ===== sym.cfg80211_sta_opmode_change_notify @ 0x080607e4 (size 484) =====
// (empty)
// ===== sym.cfg80211_probe_status @ 0x080609c8 (size 468) =====
// (empty)
// ===== sym.cfg80211_report_obss_beacon_khz @ 0x08060c28 (size 528) =====
// (empty)
// ===== sym.cfg80211_report_wowlan_wakeup @ 0x08060ec8 (size 1048) =====
// (empty)
// ===== sym.cfg80211_net_detect_results @ 0x080612f0 (size 584) =====
// (empty)
// ===== sym.cfg80211_tdls_oper_request @ 0x08061538 (size 424) =====
// (empty)
// ===== sym.cfg80211_ft_event @ 0x08061770 (size 420) =====
// (empty)
// ===== sym.cfg80211_crit_proto_stopped @ 0x0806199c (size 348) =====
// (empty)
// ===== sym.nl80211_send_ap_stopped @ 0x08061af8 (size 404) =====
// (empty)
// ===== sym.cfg80211_external_auth_request @ 0x08061c8c (size 524) =====
// (empty)
// ===== sym.cfg80211_update_owe_info_event @ 0x08061e98 (size 416) =====
// (empty)
// ===== sym.nl80211_exit @ 0x080620c0 (size 56) =====
// (empty)
// ===== sym.nl80211_dump_wiphy_parse @ 0x080620f8 (size 408) =====
// (empty)
// ===== sym.validate_beacon_head @ 0x08062290 (size 244) =====
// (empty)
// ===== sym.validate_ie_attr @ 0x08062384 (size 164) =====
// (empty)
// ===== sym.validate_he_capa @ 0x08062428 (size 196) =====
// (empty)
// ===== sym.__cfg80211_rdev_from_attrs @ 0x080624ec (size 452) =====
// (empty)
// ===== sym.rdev_set_txq_params @ 0x080626b0 (size 140) =====
// (empty)
// ===== sym.__nl80211_set_channel @ 0x08062854 (size 580) =====
// (empty)
// ===== sym.rdev_set_tx_power @ 0x08062a98 (size 156) =====
// (empty)
// ===== sym.rdev_set_antenna @ 0x08062c50 (size 140) =====
// (empty)
// ===== sym.rdev_set_wiphy_params @ 0x08062df4 (size 268) =====
// (empty)
// ===== sym.rdev_set_ap_chanwidth @ 0x08062fa0 (size 156) =====
// (empty)
// ===== sym.nl80211_parse_mon_options @ 0x08063158 (size 464) =====
// (empty)
// ===== sym.rdev_add_virtual_intf @ 0x08063328 (size 160) =====
// (empty)
// ===== sym.nl80211_validate_key_link_id @ 0x080634e0 (size 180) =====
// (empty)
// ===== sym.rdev_get_key @ 0x08063594 (size 196) =====
// (empty)
// ===== sym.get_key_callback @ 0x0806377c (size 392) =====
// (empty)
// ===== sym.nl80211_parse_key @ 0x08063904 (size 708) =====
// (empty)
// ===== sym.rdev_set_default_mgmt_key @ 0x08063bc8 (size 156) =====
// (empty)
// ===== sym.rdev_set_default_beacon_key @ 0x08063d80 (size 156) =====
// (empty)
// ===== sym.nl80211_parse_key_new @ 0x08063f38 (size 460) =====
// (empty)
// ===== sym.rdev_del_key @ 0x08064104 (size 180) =====
// (empty)
// ===== sym.rdev_del_key_1 @ 0x080642dc (size 144) =====
// (empty)
// ===== sym.rdev_del_key_2 @ 0x08064490 (size 144) =====
// (empty)
// ===== sym.nl80211_parse_beacon @ 0x08064644 (size 932) =====
// (empty)
// ===== sym.rdev_change_beacon @ 0x080649e8 (size 140) =====
// (empty)
// ===== sym.nla_parse_nested @ 0x08064b8c (size 132) =====
// (empty)
// ===== sym.nl80211_crypto_settings @ 0x08064c10 (size 788) =====
// (empty)
// ===== sym.nl80211_parse_tx_bitrate_mask @ 0x08064f24 (size 2304) =====
// (empty)
// ===== sym.validate_beacon_tx_rate @ 0x08065824 (size 1168) =====
// (empty)
// ===== sym.parse_acl_data @ 0x08065cb4 (size 340) =====
// (empty)
// ===== sym.nl80211_parse_he_obss_pd @ 0x08065e08 (size 308) =====
// (empty)
// ===== sym.nl80211_parse_fils_discovery @ 0x08065f3c (size 244) =====
// (empty)
// ===== sym.nl80211_parse_unsol_bcast_probe_resp @ 0x08066030 (size 232) =====
// (empty)
// ===== sym.nl80211_parse_mbssid_config @ 0x08066118 (size 400) =====
// (empty)
// ===== sym.nl80211_calculate_ap_params @ 0x080662a8 (size 1028) =====
// (empty)
// ===== sym.rdev_start_ap @ 0x080666ac (size 140) =====
// (empty)
// ===== sym.dev_put @ 0x08066850 (size 120) =====
// (empty)
// ===== sym.validate_pae_over_nl80211 @ 0x080668e8 (size 120) =====
// (empty)
// ===== sym.vht_build_mcs_mask @ 0x08066960 (size 176) =====
// (empty)
// ===== sym.ieee80211_get_he_iftype_cap @ 0x08066a10 (size 108) =====
// (empty)
// ===== sym.he_build_mcs_mask @ 0x08066a7c (size 176) =====
// (empty)
// ===== sym.nl80211_prepare_wdev_dump @ 0x08066b2c (size 520) =====
// (empty)
// ===== sym.rdev_dump_station @ 0x08066d34 (size 164) =====
// (empty)
// ===== sym.__cfg80211_wdev_from_attrs @ 0x08066ef8 (size 500) =====
// (empty)
// ===== sym.parse_station_flags @ 0x080670ec (size 400) =====
// (empty)
// ===== sym.get_vlan @ 0x0806727c (size 256) =====
// (empty)
// ===== sym.rdev_change_station @ 0x0806739c (size 156) =====
// (empty)
// ===== sym.nl80211_parse_sta_wme @ 0x08067554 (size 256) =====
// (empty)
// ===== sym.rdev_add_station @ 0x08067654 (size 156) =====
// (empty)
// ===== sym.rdev_del_station @ 0x0806780c (size 140) =====
// (empty)
// ===== sym.rdev_get_mpath @ 0x080679b0 (size 164) =====
// (empty)
// ===== sym.nl80211_send_mpath @ 0x08067b74 (size 768) =====
// (empty)
// ===== sym.rdev_dump_mpath @ 0x08067e74 (size 180) =====
// (empty)
// ===== sym.rdev_get_mpp @ 0x0806804c (size 164) =====
// (empty)
// ===== sym.rdev_dump_mpp @ 0x08068210 (size 180) =====
// (empty)
// ===== sym.rdev_change_mpath @ 0x080683e8 (size 156) =====
// (empty)
// ===== sym.rdev_add_mpath @ 0x080685a0 (size 156) =====
// (empty)
// ===== sym.rdev_del_mpath @ 0x08068758 (size 140) =====
// (empty)
// ===== sym.rdev_change_bss @ 0x080688fc (size 140) =====
// (empty)
// ===== sym.nl80211_put_regdom @ 0x08068aa0 (size 616) =====
// (empty)
// ===== sym.nl80211_send_regdom @ 0x08068d08 (size 404) =====
// (empty)
// ===== sym.rdev_get_mesh_config @ 0x08068e9c (size 140) =====
// (empty)
// ===== sym.nl80211_parse_mesh_config @ 0x08069040 (size 992) =====
// (empty)
// ===== sym.rdev_update_mesh_config @ 0x08069420 (size 156) =====
// (empty)
// ===== sym.cfg80211_off_channel_oper_allowed @ 0x080695d8 (size 204) =====
// (empty)
// ===== sym.nl80211_check_scan_flags @ 0x080696a4 (size 284) =====
// (empty)
// ===== sym.dev_hold @ 0x080697c0 (size 120) =====
// (empty)
// ===== sym.rdev_abort_scan @ 0x08069858 (size 124) =====
// (empty)
// ===== sym.nl80211_put_signal @ 0x080699e4 (size 360) =====
// (empty)
// ===== sym.nl80211_parse_sched_scan @ 0x08069b4c (size 2592) =====
// (empty)
// ===== sym.rdev_sched_scan_start @ 0x0806a56c (size 144) =====
// (empty)
// ===== sym.nl80211_parse_sched_scan_per_band_rssi @ 0x0806a710 (size 188) =====
// (empty)
// ===== sym.nl80211_parse_sched_scan_plans @ 0x0806a7cc (size 544) =====
// (empty)
// ===== sym.nl80211_assoc_bss @ 0x0806a9ec (size 196) =====
// (empty)
// ===== sym.nl80211_parse_mcast_rate @ 0x0806aab0 (size 500) =====
// (empty)
// ===== sym.nl80211_parse_connkeys @ 0x0806aca4 (size 676) =====
// (empty)
// ===== sym.rdev_testmode_cmd @ 0x0806af48 (size 156) =====
// (empty)
// ===== sym.rdev_testmode_dump @ 0x0806b0f8 (size 164) =====
// (empty)
// ===== sym.rdev_update_connect_params @ 0x0806b2ac (size 156) =====
// (empty)
// ===== sym.rdev_dump_survey @ 0x0806b464 (size 292) =====
// (empty)
// ===== sym.rdev_flush_pmksa @ 0x0806b6c0 (size 132) =====
// (empty)
// ===== sym.rdev_remain_on_channel @ 0x0806b858 (size 168) =====
// (empty)
// ===== sym.rdev_cancel_remain_on_channel @ 0x0806ba1c (size 140) =====
// (empty)
// ===== sym.rdev_set_bitrate_mask @ 0x0806bbc0 (size 160) =====
// (empty)
// ===== sym.rdev_mgmt_tx_cancel_wait @ 0x0806bd80 (size 140) =====
// (empty)
// ===== sym.rdev_set_cqm_rssi_config @ 0x0806bf24 (size 156) =====
// (empty)
// ===== sym.rdev_set_cqm_txe_config @ 0x0806c0dc (size 164) =====
// (empty)
// ===== sym.nl80211_send_wowlan_patterns @ 0x0806c2a0 (size 440) =====
// (empty)
// ===== sym.nl80211_send_wowlan_tcp @ 0x0806c458 (size 520) =====
// (empty)
// ===== sym.nl80211_send_wowlan_nd @ 0x0806c660 (size 984) =====
// (empty)
// ===== sym.cfg80211_rdev_free_wowlan @ 0x0806ca38 (size 180) =====
// (empty)
// ===== sym.nl80211_parse_wowlan_tcp @ 0x0806caec (size 920) =====
// (empty)
// ===== sym.nl80211_parse_wowlan_nd @ 0x0806ce84 (size 240) =====
// (empty)
// ===== sym.rdev_set_rekey_data @ 0x0806cf74 (size 140) =====
// (empty)
// ===== sym.rdev_tdls_mgmt @ 0x0806d114 (size 212) =====
// (empty)
// ===== fcn.0806d258 @ 0x0806d258 (size 60) =====
// (empty)
// ===== sym.rdev_tdls_oper @ 0x0806d328 (size 156) =====
// (empty)
// ===== sym.rdev_probe_client @ 0x0806d4e0 (size 160) =====
// (empty)
// ===== sym.rdev_set_noack_map @ 0x0806d698 (size 140) =====
// (empty)
// ===== sym.rdev_start_p2p_device @ 0x0806d83c (size 132) =====
// (empty)
// ===== sym.rdev_start_nan @ 0x0806d9d4 (size 140) =====
// (empty)
// ===== sym.handle_nan_filter @ 0x0806db78 (size 468) =====
// (empty)
// ===== sym.rdev_add_nan_func @ 0x0806dd4c (size 140) =====
// (empty)
// ===== sym.rdev_del_nan_func @ 0x0806def0 (size 132) =====
// (empty)
// ===== sym.rdev_nan_change_conf @ 0x0806e088 (size 168) =====
// (empty)
// ===== sym.rdev_set_mcast_rate @ 0x0806e24c (size 152) =====
// (empty)
// ===== sym.rdev_set_mac_acl @ 0x0806e3fc (size 140) =====
// (empty)
// ===== sym.rdev_start_radar_detection @ 0x0806e5a0 (size 168) =====
// (empty)
// ===== sym.rdev_update_ft_ies @ 0x0806e764 (size 140) =====
// (empty)
// ===== sym.rdev_crit_proto_start @ 0x0806e908 (size 156) =====
// (empty)
// ===== sym.rdev_crit_proto_stop @ 0x0806eac0 (size 124) =====
// (empty)
// ===== sym.rdev_crit_proto_stop_1 @ 0x0806ec4c (size 124) =====
// (empty)
// ===== sym.rdev_crit_proto_stop_2 @ 0x0806edd8 (size 124) =====
// (empty)
// ===== sym.rdev_set_coalesce @ 0x0806ef64 (size 144) =====
// (empty)
// ===== sym.rdev_channel_switch @ 0x0806f108 (size 140) =====
// (empty)
// ===== sym.nl80211_vendor_check_policy @ 0x0806f2ac (size 172) =====
// (empty)
// ===== sym.rdev_add_tx_ts @ 0x0806f358 (size 192) =====
// (empty)
// ===== sym.rdev_del_tx_ts @ 0x0806f53c (size 168) =====
// (empty)
// ===== sym.rdev_tdls_channel_switch @ 0x0806f700 (size 164) =====
// (empty)
// ===== sym.rdev_tdls_cancel_channel_switch @ 0x0806f8c4 (size 132) =====
// (empty)
// ===== sym.rdev_set_multicast_to_unicast @ 0x0806fa5c (size 140) =====
// (empty)
// ===== sym.rdev_set_pmk @ 0x0806fc00 (size 152) =====
// (empty)
// ===== sym.rdev_del_pmk @ 0x0806fdb0 (size 152) =====
// (empty)
// ===== sym.rdev_external_auth @ 0x0806ff60 (size 152) =====
// (empty)
// ===== sym.rdev_tx_control_port @ 0x08070110 (size 344) =====
// (empty)
// ===== sym.rdev_get_ftm_responder_stats @ 0x080703bc (size 152) =====
// (empty)
// ===== sym.rdev_update_owe_info @ 0x0807056c (size 152) =====
// (empty)
// ===== sym.rdev_probe_mesh_link @ 0x0807071c (size 156) =====
// (empty)
// ===== sym.rdev_set_tid_config @ 0x080708d8 (size 140) =====
// (empty)
// ===== sym.rdev_reset_tid_config @ 0x08070a7c (size 156) =====
// (empty)
// ===== sym.rdev_set_sar_specs @ 0x08070c34 (size 132) =====
// (empty)
// ===== sym.rdev_color_change @ 0x08070dcc (size 140) =====
// (empty)
// ===== sym.rdev_set_fils_aad @ 0x08070f70 (size 152) =====
// (empty)
// ===== sym.rdev_add_intf_link @ 0x08071120 (size 152) =====
// (empty)
// ===== sym.nl80211_add_mod_link_station @ 0x080712d0 (size 800) =====
// (empty)
// ===== sym.rdev_add_link_station @ 0x080715f0 (size 276) =====
// (empty)
// ===== sym.rdev_mod_link_station @ 0x080717a8 (size 276) =====
// (empty)
// ===== sym.rdev_del_link_station @ 0x08071960 (size 276) =====
// (empty)
// ===== sym.nl80211_pre_doit @ 0x08071b18 (size 668) =====
// (empty)
// ===== sym.nl80211_post_doit @ 0x08071df4 (size 368) =====
// (empty)
// ===== sym.rdev_get_antenna @ 0x08071fa4 (size 280) =====
// (empty)
// ===== sym.nl80211_put_iftypes @ 0x080721ec (size 192) =====
// (empty)
// ===== sym.nl80211_send_band_rateinfo @ 0x080722ac (size 1468) =====
// (empty)
// ===== sym.nl80211_add_commands_unsplit @ 0x08072868 (size 1852) =====
// (empty)
// ===== sym.nl80211_send_wowlan @ 0x08072fa4 (size 612) =====
// (empty)
// ===== sym.nl80211_put_iface_combinations @ 0x08073208 (size 964) =====
// (empty)
// ===== sym.nl80211_send_mgmt_stypes @ 0x080735cc (size 604) =====
// (empty)
// ===== sym.nl80211_send_coalesce @ 0x08073828 (size 148) =====
// (empty)
// ===== sym.rdev_get_txq_stats @ 0x080738bc (size 140) =====
// (empty)
// ===== sym.nl80211_put_txq_stats @ 0x08073a5c (size 616) =====
// (empty)
// ===== sym.nl80211_send_pmsr_capa @ 0x08073cc4 (size 776) =====
// (empty)
// ===== sym.nl80211_put_iftype_akm_suites @ 0x08073fcc (size 472) =====
// (empty)
// ===== sym.nl80211_put_tid_config_support @ 0x080741a4 (size 380) =====
// (empty)
// ===== sym.nl80211_put_sar_specs @ 0x08074320 (size 532) =====
// (empty)
// ===== sym.nl80211_put_mbssid_support @ 0x08074534 (size 300) =====
// (empty)
// ===== sym.nl80211_send_wowlan_tcp_caps @ 0x08074660 (size 380) =====
// (empty)
// ===== sym.rdev_get_tx_power @ 0x080747dc (size 144) =====
// (empty)
// ===== sym.nl80211_msg_put_wmm_rules @ 0x08074980 (size 404) =====
// (empty)
// ===== sym.rdev_set_cqm_rssi_range_config @ 0x08074b14 (size 156) =====
// (empty)
// ===== sym.nl80211_netlink_notify @ 0x08074ccc (size 472) =====
// (empty)
// ===== sym.cfg80211_rx_assoc_resp @ 0x08074ebc (size 896) =====
// (empty)
// ===== sym.cfg80211_rx_mlme_mgmt @ 0x0807524c (size 368) =====
// (empty)
// ===== sym.cfg80211_process_deauth @ 0x080753cc (size 256) =====
// (empty)
// ===== sym.cfg80211_process_disassoc @ 0x080754cc (size 264) =====
// (empty)
// ===== sym.cfg80211_auth_timeout @ 0x080755d4 (size 112) =====
// (empty)
// ===== sym.cfg80211_assoc_failure @ 0x080756e0 (size 524) =====
// (empty)
// ===== sym.cfg80211_tx_mlme_mgmt @ 0x080758fc (size 120) =====
// (empty)
// ===== sym.cfg80211_michael_mic_failure @ 0x08075a2c (size 104) =====
// (empty)
// ===== sym.cfg80211_mlme_auth @ 0x08075b58 (size 172) =====
// (empty)
// ===== sym.rdev_auth @ 0x08075c04 (size 140) =====
// (empty)
// ===== sym.cfg80211_oper_and_ht_capa @ 0x08075da8 (size 452) =====
// (empty)
// ===== sym.cfg80211_oper_and_vht_capa @ 0x08075f6c (size 224) =====
// (empty)
// ===== sym.cfg80211_mlme_assoc @ 0x0807604c (size 1012) =====
// (empty)
// ===== sym.rdev_assoc @ 0x08076440 (size 140) =====
// (empty)
// ===== sym.cfg80211_mlme_deauth @ 0x080765e4 (size 232) =====
// (empty)
// ===== sym.rdev_deauth @ 0x080766cc (size 140) =====
// (empty)
// ===== sym.cfg80211_mlme_disassoc @ 0x08076870 (size 192) =====
// (empty)
// ===== sym.rdev_disassoc @ 0x08076930 (size 140) =====
// (empty)
// ===== sym.cfg80211_mlme_down @ 0x08076ad4 (size 200) =====
// (empty)
// ===== sym.cfg80211_mgmt_registrations_update_wk @ 0x08076b9c (size 108) =====
// (empty)
// ===== sym.cfg80211_mgmt_registrations_update @ 0x08076c08 (size 348) =====
// (empty)
// ===== sym.cfg80211_mlme_register_mgmt @ 0x08076d6c (size 608) =====
// (empty)
// ===== sym.cfg80211_mlme_unregister_socket @ 0x08076fcc (size 296) =====
// (empty)
// ===== sym.cfg80211_mlme_purge_registrations @ 0x080770f4 (size 200) =====
// (empty)
// ===== sym.cfg80211_mlme_mgmt_tx @ 0x080771bc (size 780) =====
// (empty)
// ===== sym.rdev_mgmt_tx @ 0x080774c8 (size 160) =====
// (empty)
// ===== sym.cfg80211_rx_mgmt_ext @ 0x08077680 (size 348) =====
// (empty)
// ===== sym.cfg80211_sched_dfs_chan_update @ 0x08077968 (size 76) =====
// (empty)
// ===== sym.cfg80211_dfs_channels_update_work @ 0x080779b4 (size 540) =====
// (empty)
// ===== sym.__cfg80211_radar_event @ 0x08077bd0 (size 284) =====
// (empty)
// ===== sym.cfg80211_cac_event @ 0x08077d80 (size 388) =====
// (empty)
// ===== sym.cfg80211_background_cac_done_wk @ 0x08077f88 (size 288) =====
// (empty)
// ===== sym.cfg80211_background_cac_abort_wk @ 0x080780a8 (size 148) =====
// (empty)
// ===== sym.cfg80211_background_cac_abort @ 0x0807813c (size 64) =====
// (empty)
// ===== sym.cfg80211_start_background_radar_detection @ 0x0807817c (size 332) =====
// (empty)
// ===== sym.rdev_set_radar_background @ 0x080782c8 (size 268) =====
// (empty)
// ===== sym.cfg80211_stop_background_radar_detection @ 0x08078474 (size 164) =====
// (empty)
// ===== sym.rdev_update_mgmt_frame_registrations @ 0x08078518 (size 136) =====
// (empty)
// ===== sym.__cfg80211_ibss_joined @ 0x080786b4 (size 532) =====
// (empty)
// ===== sym.cfg80211_ibss_joined @ 0x080788c8 (size 292) =====
// (empty)
// ===== sym.__cfg80211_join_ibss @ 0x08078a84 (size 408) =====
// (empty)
// ===== sym.rdev_join_ibss @ 0x08078c1c (size 140) =====
// (empty)
// ===== sym.cfg80211_clear_ibss @ 0x08078dc0 (size 76) =====
// (empty)
// ===== sym.__cfg80211_clear_ibss @ 0x08078e0c (size 484) =====
// (empty)
// ===== sym.__cfg80211_leave_ibss @ 0x08078ff0 (size 88) =====
// (empty)
// ===== sym.rdev_leave_ibss @ 0x08079048 (size 132) =====
// (empty)
// ===== sym.cfg80211_leave_ibss @ 0x080791e0 (size 136) =====
// (empty)
// ===== sym.cfg80211_conn_work @ 0x08079268 (size 344) =====
// (empty)
// ===== sym.cfg80211_conn_do_work @ 0x080793c0 (size 884) =====
// (empty)
// ===== sym.__cfg80211_connect_result @ 0x08079734 (size 1784) =====
// (empty)
// ===== sym.cfg80211_sme_scan_done @ 0x08079e2c (size 264) =====
// (empty)
// ===== sym.cfg80211_sme_rx_auth @ 0x08079f34 (size 332) =====
// (empty)
// ===== sym.cfg80211_sme_rx_assoc_resp @ 0x0807a080 (size 164) =====
// (empty)
// ===== sym.cfg80211_sme_deauth @ 0x0807a124 (size 72) =====
// (empty)
// ===== sym.cfg80211_sme_auth_timeout @ 0x0807a16c (size 80) =====
// (empty)
// ===== sym.cfg80211_sme_disassoc @ 0x0807a1bc (size 80) =====
// (empty)
// ===== sym.cfg80211_sme_assoc_timeout @ 0x0807a20c (size 80) =====
// (empty)
// ===== sym.cfg80211_sme_abandon_assoc @ 0x0807a25c (size 80) =====
// (empty)
// ===== sym.disconnect_work @ 0x0807a2ac (size 192) =====
// (empty)
// ===== sym.cfg80211_wdev_release_bsses @ 0x0807a36c (size 360) =====
// (empty)
// ===== sym.cfg80211_connect_result_release_bsses @ 0x0807a4d4 (size 356) =====
// (empty)
// ===== sym.cfg80211_connect_done @ 0x0807a638 (size 1200) =====
// (empty)
// ===== sym.__cfg80211_roamed @ 0x0807aae8 (size 928) =====
// (empty)
// ===== sym.cfg80211_roamed @ 0x0807ae88 (size 944) =====
// (empty)
// ===== sym.__cfg80211_port_authorized @ 0x0807b238 (size 144) =====
// (empty)
// ===== sym.cfg80211_port_authorized @ 0x0807b2c8 (size 280) =====
// (empty)
// ===== sym.__cfg80211_disconnected @ 0x0807b3e0 (size 340) =====
// (empty)
// ===== sym.cfg80211_disconnected @ 0x0807b534 (size 248) =====
// (empty)
// ===== sym.cfg80211_connect @ 0x0807b62c (size 1348) =====
// (empty)
// ===== sym.rdev_connect @ 0x0807bb70 (size 140) =====
// (empty)
// ===== sym.cfg80211_disconnect @ 0x0807bd14 (size 324) =====
// (empty)
// ===== sym.rdev_disconnect @ 0x0807be58 (size 140) =====
// (empty)
// ===== sym.cfg80211_autodisconnect_wk @ 0x0807bffc (size 272) =====
// (empty)
// ===== sym.cfg80211_conn_scan @ 0x0807c10c (size 648) =====
// (empty)
// ===== sym.cfg80211_chandef_create @ 0x0807c3b4 (size 172) =====
// (empty)
// ===== sym.cfg80211_chandef_valid @ 0x0807c468 (size 924) =====
// (empty)
// ===== sym.cfg80211_edmg_chandef_valid @ 0x0807c810 (size 380) =====
// (empty)
// ===== sym.cfg80211_chandef_compatible @ 0x0807c98c (size 428) =====
// (empty)
// ===== sym.chandef_primary_freqs @ 0x0807cb44 (size 276) =====
// (empty)
// ===== sym.cfg80211_set_dfs_state @ 0x0807cce0 (size 336) =====
// (empty)
// ===== sym.cfg80211_chandef_dfs_required @ 0x0807ce34 (size 488) =====
// (empty)
// ===== sym.cfg80211_chandef_dfs_usable @ 0x0807d020 (size 532) =====
// (empty)
// ===== sym.cfg80211_is_sub_chan @ 0x0807d238 (size 272) =====
// (empty)
// ===== sym.cfg80211_beaconing_iface_active @ 0x0807d348 (size 176) =====
// (empty)
// ===== sym.cfg80211_wdev_on_sub_chan @ 0x0807d3f8 (size 888) =====
// (empty)
// ===== sym.cfg80211_any_wiphy_oper_chan @ 0x0807d770 (size 672) =====
// (empty)
// ===== sym.cfg80211_chandef_dfs_cac_time @ 0x0807da10 (size 468) =====
// (empty)
// ===== sym.cfg80211_chandef_usable @ 0x0807dbe8 (size 1144) =====
// (empty)
// ===== sym.cfg80211_reg_can_beacon @ 0x0807e060 (size 40) =====
// (empty)
// ===== sym._cfg80211_reg_can_beacon.llvm.5356178326886842325 @ 0x0807e088 (size 552) =====
// (empty)
// ===== sym.cfg80211_reg_can_beacon_relax @ 0x0807e3c4 (size 52) =====
// (empty)
// ===== sym.cfg80211_set_monitor_channel @ 0x0807e3f8 (size 92) =====
// (empty)
// ===== sym.rdev_set_monitor_channel @ 0x0807e454 (size 132) =====
// (empty)
// ===== sym.cfg80211_any_usable_channels @ 0x0807e5ec (size 192) =====
// (empty)
// ===== sym.wdev_chandef @ 0x0807e6ac (size 160) =====
// (empty)
// ===== sym.cfg80211_get_drvinfo @ 0x0807e74c (size 184) =====
// (empty)
// ===== sym.__cfg80211_join_mesh @ 0x0807e804 (size 932) =====
// (empty)
// ===== sym.rdev_join_mesh @ 0x0807eba8 (size 156) =====
// (empty)
// ===== sym.cfg80211_set_mesh_channel @ 0x0807ed60 (size 188) =====
// (empty)
// ===== sym.rdev_libertas_set_mesh_channel @ 0x0807ee1c (size 140) =====
// (empty)
// ===== sym.__cfg80211_leave_mesh @ 0x0807efc0 (size 220) =====
// (empty)
// ===== sym.rdev_leave_mesh @ 0x0807f09c (size 132) =====
// (empty)
// ===== sym.cfg80211_leave_mesh @ 0x0807f234 (size 260) =====
// (empty)
// ===== sym.__cfg80211_stop_ap @ 0x0807f338 (size 216) =====
// (empty)
// ===== sym.___cfg80211_stop_ap @ 0x0807f410 (size 340) =====
// (empty)
// ===== sym.cfg80211_stop_ap @ 0x0807f564 (size 256) =====
// (empty)
// ===== sym.rdev_stop_ap @ 0x0807f664 (size 140) =====
// (empty)
// ===== sym.__traceiter_rdev_suspend @ 0x0807f808 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int @ 0x0807f878 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_scan @ 0x0807f8e8 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_resume @ 0x0807f958 (size 88) =====
// (empty)
// ===== sym.__traceiter_rdev_return_void @ 0x0807f9b8 (size 88) =====
// (empty)
// ===== sym.__traceiter_rdev_get_antenna @ 0x0807fa18 (size 88) =====
// (empty)
// ===== sym.__traceiter_rdev_rfkill_poll @ 0x0807fa78 (size 88) =====
// (empty)
// ===== sym.__traceiter_rdev_set_wakeup @ 0x0807fad8 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_add_virtual_intf @ 0x0807fb48 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_return_wdev @ 0x0807fbc0 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_del_virtual_intf @ 0x0807fc30 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_change_virtual_intf @ 0x0807fca0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_get_key @ 0x0807fd18 (size 152) =====
// (empty)
// ===== sym.__traceiter_rdev_del_key @ 0x0807fdb8 (size 152) =====
// (empty)
// ===== sym.__traceiter_rdev_add_key @ 0x0807fe58 (size 160) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_key @ 0x0807ff00 (size 152) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_mgmt_key @ 0x0807ffa0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_default_beacon_key @ 0x08080028 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_start_ap @ 0x080800b0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_change_beacon @ 0x08080128 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_ap @ 0x080801a0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_rekey_data @ 0x08080218 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mesh_config @ 0x08080288 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_mesh @ 0x080802f8 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_ibss @ 0x08080368 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_leave_ocb @ 0x080803d8 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_flush_pmksa @ 0x08080448 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_end_cac @ 0x080804b8 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_add_station @ 0x08080528 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_change_station @ 0x080805b0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_del_station @ 0x08080638 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_get_station @ 0x080806b0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_mpath @ 0x08080728 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_station @ 0x080807a0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_station_info @ 0x08080828 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_add_mpath @ 0x080808a0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_change_mpath @ 0x08080928 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mpath @ 0x080809b0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_mpath @ 0x08080a38 (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_get_mpp @ 0x08080ac8 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_mpp @ 0x08080b50 (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_mpath_info @ 0x08080be0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_mesh_config @ 0x08080c58 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_update_mesh_config @ 0x08080cd0 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_join_mesh @ 0x08080d58 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_change_bss @ 0x08080de0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_txq_params @ 0x08080e58 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_libertas_set_mesh_channel @ 0x08080ed0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_monitor_channel @ 0x08080f48 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_auth @ 0x08080fb8 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_assoc @ 0x08081030 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_deauth @ 0x080810a8 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_disassoc @ 0x08081120 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_mgmt_tx_cancel_wait @ 0x08081198 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_power_mgmt @ 0x08081210 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_connect @ 0x08081298 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_update_connect_params @ 0x08081310 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_rssi_config @ 0x08081398 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_rssi_range_config @ 0x08081420 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_cqm_txe_config @ 0x080814a8 (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_disconnect @ 0x08081538 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_join_ibss @ 0x080815b0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_join_ocb @ 0x08081628 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_wiphy_params @ 0x080816a0 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_get_tx_power @ 0x08081710 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_set_tx_power @ 0x08081780 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_int @ 0x08081808 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_testmode_cmd @ 0x08081880 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_testmode_dump @ 0x080818f0 (size 88) =====
// (empty)
// ===== sym.__traceiter_rdev_set_bitrate_mask @ 0x08081950 (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_update_mgmt_frame_registrations @ 0x080819e0 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_tx_rx @ 0x08081a58 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_return_void_tx_rx @ 0x08081ae0 (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_set_antenna @ 0x08081b70 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_sched_scan_start @ 0x08081be8 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_sched_scan_stop @ 0x08081c60 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_mgmt @ 0x08081cd8 (size 204) =====
// (empty)
// ===== sym.__traceiter_rdev_dump_survey @ 0x08081dac (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_survey_info @ 0x08081e24 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_oper @ 0x08081e9c (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_probe_client @ 0x08081f24 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_pmksa @ 0x08081f9c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_pmksa @ 0x08082014 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_remain_on_channel @ 0x0808208c (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_return_int_cookie @ 0x08082114 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_cancel_remain_on_channel @ 0x0808218c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_mgmt_tx @ 0x08082204 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_tx_control_port @ 0x0808227c (size 184) =====
// (empty)
// ===== sym.__traceiter_rdev_set_noack_map @ 0x0808233c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_get_channel @ 0x080823b4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_return_chandef @ 0x0808242c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_start_p2p_device @ 0x080824a4 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_p2p_device @ 0x08082514 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_start_nan @ 0x08082584 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_nan_change_conf @ 0x080825fc (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_stop_nan @ 0x08082684 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_add_nan_func @ 0x080826f4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_nan_func @ 0x0808276c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_mac_acl @ 0x080827e4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_update_ft_ies @ 0x0808285c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_crit_proto_start @ 0x080828d4 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_crit_proto_stop @ 0x0808295c (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_channel_switch @ 0x080829cc (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_qos_map @ 0x08082a44 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_ap_chanwidth @ 0x08082abc (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_add_tx_ts @ 0x08082b44 (size 152) =====
// (empty)
// ===== sym.__traceiter_rdev_del_tx_ts @ 0x08082be4 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_channel_switch @ 0x08082c6c (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_tdls_cancel_channel_switch @ 0x08082cfc (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_pmk @ 0x08082d74 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_pmk @ 0x08082dec (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_external_auth @ 0x08082e64 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_start_radar_detection @ 0x08082edc (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_mcast_rate @ 0x08082f64 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_coalesce @ 0x08082fdc (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_abort_scan @ 0x0808304c (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_set_multicast_to_unicast @ 0x080830bc (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_get_txq_stats @ 0x08083134 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_get_ftm_responder_stats @ 0x080831a4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_start_pmsr @ 0x0808321c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_abort_pmsr @ 0x08083294 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_fils_aad @ 0x0808330c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_update_owe_info @ 0x08083384 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_probe_mesh_link @ 0x080833fc (size 136) =====
// (empty)
// ===== sym.__traceiter_rdev_set_tid_config @ 0x0808348c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_reset_tid_config @ 0x08083504 (size 128) =====
// (empty)
// ===== sym.__traceiter_rdev_set_sar_specs @ 0x0808358c (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_color_change @ 0x080835fc (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_set_radar_background @ 0x08083674 (size 104) =====
// (empty)
// ===== sym.__traceiter_rdev_add_intf_link @ 0x080836e4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_intf_link @ 0x0808375c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_bool @ 0x080837d4 (size 88) =====
// (empty)
// ===== sym.__traceiter_cfg80211_notify_new_peer_candidate @ 0x08083834 (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_rx_auth @ 0x080838a4 (size 88) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_rx_assoc @ 0x08083904 (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_unprot_mlme_mgmt @ 0x08083974 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_mlme_mgmt @ 0x080839ec (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tx_mlme_mgmt @ 0x08083a64 (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_auth_timeout @ 0x08083aec (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_send_assoc_failure @ 0x08083b5c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_michael_mic_failure @ 0x08083bcc (size 136) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ready_on_channel @ 0x08083c5c (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ready_on_channel_expired @ 0x08083ce4 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tx_mgmt_expired @ 0x08083d5c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_new_sta @ 0x08083dd4 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_del_sta @ 0x08083e4c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_mgmt @ 0x08083ebc (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_mgmt_tx_status @ 0x08083f2c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_control_port_tx_status @ 0x08083fa4 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_control_port @ 0x0808401c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_cqm_rssi_notify @ 0x08084094 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_reg_can_beacon @ 0x0808410c (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_chandef_dfs_required @ 0x08084194 (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ch_switch_notify @ 0x08084204 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ch_switch_started_notify @ 0x0808427c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_radar_event @ 0x080842f4 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_cac_event @ 0x0808436c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_spurious_frame @ 0x080843dc (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_rx_unexpected_4addr_frame @ 0x0808444c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ibss_joined @ 0x080844bc (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_probe_status @ 0x08084534 (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_cqm_pktloss_notify @ 0x080845bc (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_gtk_rekey_notify @ 0x08084634 (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_pmksa_candidate_notify @ 0x080846a4 (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_report_obss_beacon @ 0x0808472c (size 136) =====
// (empty)
// ===== sym.__traceiter_cfg80211_tdls_oper_request @ 0x080847bc (size 136) =====
// (empty)
// ===== sym.__traceiter_cfg80211_scan_done @ 0x0808484c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_sched_scan_stopped @ 0x080848bc (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_sched_scan_results @ 0x0808492c (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_get_bss @ 0x0808499c (size 160) =====
// (empty)
// ===== sym.__traceiter_cfg80211_inform_bss_frame @ 0x08084a44 (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_bss @ 0x08084acc (size 88) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_uint @ 0x08084b2c (size 88) =====
// (empty)
// ===== sym.__traceiter_cfg80211_return_u32 @ 0x08084b8c (size 88) =====
// (empty)
// ===== sym.__traceiter_cfg80211_report_wowlan_wakeup @ 0x08084bec (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_ft_event @ 0x08084c64 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_stop_iface @ 0x08084cdc (size 104) =====
// (empty)
// ===== sym.__traceiter_cfg80211_pmsr_report @ 0x08084d4c (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_pmsr_complete @ 0x08084dd4 (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_update_owe_info_event @ 0x08084e4c (size 112) =====
// (empty)
// ===== sym.__traceiter_cfg80211_bss_color_notify @ 0x08084ec4 (size 128) =====
// (empty)
// ===== sym.__traceiter_cfg80211_assoc_comeback @ 0x08084f4c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_add_link_station @ 0x08084fc4 (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_mod_link_station @ 0x0808503c (size 112) =====
// (empty)
// ===== sym.__traceiter_rdev_del_link_station @ 0x080850b4 (size 112) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_suspend @ 0x0808512c (size 300) =====
// (empty)
// ===== sym.perf_trace_rdev_suspend @ 0x08085258 (size 400) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int @ 0x080853e8 (size 228) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int @ 0x080854cc (size 328) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_scan @ 0x08085614 (size 216) =====
// (empty)
// ===== sym.perf_trace_rdev_scan @ 0x080856ec (size 320) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_only_evt @ 0x0808582c (size 216) =====
// (empty)
// ===== sym.perf_trace_wiphy_only_evt @ 0x08085904 (size 320) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_enabled_evt @ 0x08085a44 (size 232) =====
// (empty)
// ===== sym.perf_trace_wiphy_enabled_evt @ 0x08085b2c (size 332) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_virtual_intf @ 0x08085c78 (size 300) =====
// (empty)
// ===== sym.perf_trace_rdev_add_virtual_intf @ 0x08085da4 (size 416) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_evt @ 0x08085f44 (size 248) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_evt @ 0x0808603c (size 348) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_cookie_evt @ 0x08086198 (size 264) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_cookie_evt @ 0x080862a0 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_virtual_intf @ 0x0808640c (size 252) =====
// (empty)
// ===== sym.perf_trace_rdev_change_virtual_intf @ 0x08086508 (size 352) =====
// (empty)
// ===== sym.trace_event_raw_event_key_handle @ 0x08086668 (size 324) =====
// (empty)
// ===== sym.perf_trace_key_handle @ 0x080867ac (size 424) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_key @ 0x08086954 (size 340) =====
// (empty)
// ===== sym.perf_trace_rdev_add_key @ 0x08086aa8 (size 432) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_key @ 0x08086c58 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_key @ 0x08086d7c (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_mgmt_key @ 0x08086f04 (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_mgmt_key @ 0x08087008 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_default_beacon_key @ 0x08087170 (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_default_beacon_key @ 0x08087274 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_ap @ 0x080873dc (size 436) =====
// (empty)
// ===== sym.perf_trace_rdev_start_ap @ 0x08087590 (size 540) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_beacon @ 0x080877ac (size 580) =====
// (empty)
// ===== sym.perf_trace_rdev_change_beacon @ 0x080879f0 (size 680) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_stop_ap @ 0x08087c98 (size 252) =====
// (empty)
// ===== sym.perf_trace_rdev_stop_ap @ 0x08087d94 (size 352) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_evt @ 0x08087ef4 (size 240) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_evt @ 0x08087fe4 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_station_add_change @ 0x08088138 (size 696) =====
// (empty)
// ===== sym.perf_trace_station_add_change @ 0x080883f0 (size 808) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_mac_evt @ 0x08088718 (size 288) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_mac_evt @ 0x08088838 (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_station_del @ 0x080889bc (size 308) =====
// (empty)
// ===== sym.perf_trace_station_del @ 0x08088af0 (size 408) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_station @ 0x08088c88 (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_station @ 0x08088db0 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_station_info @ 0x08088f3c (size 352) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_station_info @ 0x0808909c (size 452) =====
// (empty)
// ===== sym.trace_event_raw_event_mpath_evt @ 0x08089260 (size 332) =====
// (empty)
// ===== sym.perf_trace_mpath_evt @ 0x080893ac (size 432) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_mpath @ 0x0808955c (size 348) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_mpath @ 0x080896b8 (size 448) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_get_mpp @ 0x08089878 (size 332) =====
// (empty)
// ===== sym.perf_trace_rdev_get_mpp @ 0x080899c4 (size 432) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_mpp @ 0x08089b74 (size 348) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_mpp @ 0x08089cd0 (size 448) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_mpath_info @ 0x08089e90 (size 312) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_mpath_info @ 0x08089fc8 (size 412) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_mesh_config @ 0x0808a164 (size 448) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_mesh_config @ 0x0808a324 (size 548) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_mesh_config @ 0x0808a548 (size 468) =====
// (empty)
// ===== sym.perf_trace_rdev_update_mesh_config @ 0x0808a71c (size 568) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_mesh @ 0x0808a954 (size 460) =====
// (empty)
// ===== sym.perf_trace_rdev_join_mesh @ 0x0808ab20 (size 560) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_change_bss @ 0x0808ad50 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_change_bss @ 0x0808ae74 (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_txq_params @ 0x0808affc (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_set_txq_params @ 0x0808b120 (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_libertas_set_mesh_channel @ 0x0808b2a8 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_libertas_set_mesh_channel @ 0x0808b3cc (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_monitor_channel @ 0x0808b554 (size 316) =====
// (empty)
// ===== sym.perf_trace_rdev_set_monitor_channel @ 0x0808b690 (size 416) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_auth @ 0x0808b830 (size 320) =====
// (empty)
// ===== sym.perf_trace_rdev_auth @ 0x0808b970 (size 420) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_assoc @ 0x0808bb14 (size 616) =====
// (empty)
// ===== sym.perf_trace_rdev_assoc @ 0x0808bd7c (size 732) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_deauth @ 0x0808c058 (size 300) =====
// (empty)
// ===== sym.perf_trace_rdev_deauth @ 0x0808c184 (size 400) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_disassoc @ 0x0808c314 (size 308) =====
// (empty)
// ===== sym.perf_trace_rdev_disassoc @ 0x0808c448 (size 408) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_mgmt_tx_cancel_wait @ 0x0808c5e0 (size 264) =====
// (empty)
// ===== sym.perf_trace_rdev_mgmt_tx_cancel_wait @ 0x0808c6e8 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_power_mgmt @ 0x0808c854 (size 268) =====
// (empty)
// ===== sym.perf_trace_rdev_set_power_mgmt @ 0x0808c960 (size 368) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_connect @ 0x0808cad0 (size 392) =====
// (empty)
// ===== sym.perf_trace_rdev_connect @ 0x0808cc58 (size 496) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_connect_params @ 0x0808ce48 (size 252) =====
// (empty)
// ===== sym.perf_trace_rdev_update_connect_params @ 0x0808cf44 (size 352) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_rssi_config @ 0x0808d0a4 (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_rssi_config @ 0x0808d1a8 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_rssi_range_config @ 0x0808d310 (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_rssi_range_config @ 0x0808d414 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_cqm_txe_config @ 0x0808d57c (size 272) =====
// (empty)
// ===== sym.perf_trace_rdev_set_cqm_txe_config @ 0x0808d68c (size 372) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_disconnect @ 0x0808d800 (size 256) =====
// (empty)
// ===== sym.perf_trace_rdev_disconnect @ 0x0808d900 (size 356) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_ibss @ 0x0808da64 (size 324) =====
// (empty)
// ===== sym.perf_trace_rdev_join_ibss @ 0x0808dba8 (size 428) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_join_ocb @ 0x0808dd54 (size 240) =====
// (empty)
// ===== sym.perf_trace_rdev_join_ocb @ 0x0808de44 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_wiphy_params @ 0x0808df98 (size 228) =====
// (empty)
// ===== sym.perf_trace_rdev_set_wiphy_params @ 0x0808e07c (size 328) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_tx_power @ 0x0808e1c4 (size 268) =====
// (empty)
// ===== sym.perf_trace_rdev_set_tx_power @ 0x0808e2d0 (size 368) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_int @ 0x0808e440 (size 240) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_int @ 0x0808e530 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_testmode_cmd @ 0x0808e684 (size 248) =====
// (empty)
// ===== sym.perf_trace_rdev_testmode_cmd @ 0x0808e77c (size 348) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_testmode_dump @ 0x0808e8d8 (size 216) =====
// (empty)
// ===== sym.perf_trace_rdev_testmode_dump @ 0x0808e9b0 (size 320) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_bitrate_mask @ 0x0808eaf0 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_set_bitrate_mask @ 0x0808ec14 (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_mgmt_frame_registrations @ 0x0808ed9c (size 276) =====
// (empty)
// ===== sym.perf_trace_rdev_update_mgmt_frame_registrations @ 0x0808eeb0 (size 376) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_tx_rx @ 0x0808f028 (size 248) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_tx_rx @ 0x0808f120 (size 348) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_void_tx_rx @ 0x0808f27c (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_return_void_tx_rx @ 0x0808f380 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_tx_rx_evt @ 0x0808f4e8 (size 240) =====
// (empty)
// ===== sym.perf_trace_tx_rx_evt @ 0x0808f5d8 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_netdev_id_evt @ 0x0808f72c (size 256) =====
// (empty)
// ===== sym.perf_trace_wiphy_netdev_id_evt @ 0x0808f82c (size 356) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_mgmt @ 0x0808f990 (size 400) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_mgmt @ 0x0808fb20 (size 508) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_dump_survey @ 0x0808fd1c (size 252) =====
// (empty)
// ===== sym.perf_trace_rdev_dump_survey @ 0x0808fe18 (size 352) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_survey_info @ 0x0808ff78 (size 352) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_survey_info @ 0x080900d8 (size 452) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_oper @ 0x0809029c (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_oper @ 0x080903c4 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_pmksa @ 0x08090550 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_pmksa @ 0x08090674 (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_probe_client @ 0x080907fc (size 288) =====
// (empty)
// ===== sym.perf_trace_rdev_probe_client @ 0x0809091c (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_remain_on_channel @ 0x08090aa0 (size 308) =====
// (empty)
// ===== sym.perf_trace_rdev_remain_on_channel @ 0x08090bd4 (size 408) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_int_cookie @ 0x08090d6c (size 244) =====
// (empty)
// ===== sym.perf_trace_rdev_return_int_cookie @ 0x08090e60 (size 344) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_cancel_remain_on_channel @ 0x08090fb8 (size 264) =====
// (empty)
// ===== sym.perf_trace_rdev_cancel_remain_on_channel @ 0x080910c0 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_mgmt_tx @ 0x0809122c (size 340) =====
// (empty)
// ===== sym.perf_trace_rdev_mgmt_tx @ 0x08091380 (size 440) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tx_control_port @ 0x08091538 (size 324) =====
// (empty)
// ===== sym.perf_trace_rdev_tx_control_port @ 0x0809167c (size 424) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_noack_map @ 0x08091824 (size 256) =====
// (empty)
// ===== sym.perf_trace_rdev_set_noack_map @ 0x08091924 (size 356) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_wdev_link_evt @ 0x08091a88 (size 260) =====
// (empty)
// ===== sym.perf_trace_wiphy_wdev_link_evt @ 0x08091b8c (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_return_chandef @ 0x08091cf4 (size 340) =====
// (empty)
// ===== sym.perf_trace_rdev_return_chandef @ 0x08091e48 (size 440) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_nan @ 0x08092000 (size 276) =====
// (empty)
// ===== sym.perf_trace_rdev_start_nan @ 0x08092114 (size 376) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_nan_change_conf @ 0x0809228c (size 284) =====
// (empty)
// ===== sym.perf_trace_rdev_nan_change_conf @ 0x080923a8 (size 384) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_nan_func @ 0x08092528 (size 276) =====
// (empty)
// ===== sym.perf_trace_rdev_add_nan_func @ 0x0809263c (size 376) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_nan_func @ 0x080927b4 (size 264) =====
// (empty)
// ===== sym.perf_trace_rdev_del_nan_func @ 0x080928bc (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_mac_acl @ 0x08092a28 (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_mac_acl @ 0x08092b2c (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_ft_ies @ 0x08092c94 (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_update_ft_ies @ 0x08092dbc (size 412) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_crit_proto_start @ 0x08092f58 (size 272) =====
// (empty)
// ===== sym.perf_trace_rdev_crit_proto_start @ 0x08093068 (size 372) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_crit_proto_stop @ 0x080931dc (size 248) =====
// (empty)
// ===== sym.perf_trace_rdev_crit_proto_stop @ 0x080932d4 (size 348) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_channel_switch @ 0x08093430 (size 468) =====
// (empty)
// ===== sym.perf_trace_rdev_channel_switch @ 0x08093604 (size 584) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_qos_map @ 0x0809384c (size 364) =====
// (empty)
// ===== sym.perf_trace_rdev_set_qos_map @ 0x080939b8 (size 464) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_ap_chanwidth @ 0x08093b88 (size 356) =====
// (empty)
// ===== sym.perf_trace_rdev_set_ap_chanwidth @ 0x08093cec (size 456) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_add_tx_ts @ 0x08093eb4 (size 320) =====
// (empty)
// ===== sym.perf_trace_rdev_add_tx_ts @ 0x08093ff4 (size 420) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_tx_ts @ 0x08094198 (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_del_tx_ts @ 0x080942c0 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_channel_switch @ 0x0809444c (size 392) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_channel_switch @ 0x080945d4 (size 492) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_tdls_cancel_channel_switch @ 0x080947c0 (size 288) =====
// (empty)
// ===== sym.perf_trace_rdev_tdls_cancel_channel_switch @ 0x080948e0 (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_pmk @ 0x08094a64 (size 392) =====
// (empty)
// ===== sym.perf_trace_rdev_set_pmk @ 0x08094bec (size 512) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_pmk @ 0x08094dec (size 288) =====
// (empty)
// ===== sym.perf_trace_rdev_del_pmk @ 0x08094f0c (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_external_auth @ 0x08095090 (size 332) =====
// (empty)
// ===== sym.perf_trace_rdev_external_auth @ 0x080951dc (size 436) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_start_radar_detection @ 0x08095390 (size 356) =====
// (empty)
// ===== sym.perf_trace_rdev_start_radar_detection @ 0x080954f4 (size 456) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_mcast_rate @ 0x080956bc (size 272) =====
// (empty)
// ===== sym.perf_trace_rdev_set_mcast_rate @ 0x080957cc (size 372) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_coalesce @ 0x08095940 (size 244) =====
// (empty)
// ===== sym.perf_trace_rdev_set_coalesce @ 0x08095a34 (size 344) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_multicast_to_unicast @ 0x08095b8c (size 260) =====
// (empty)
// ===== sym.perf_trace_rdev_set_multicast_to_unicast @ 0x08095c90 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_get_ftm_responder_stats @ 0x08095df8 (size 324) =====
// (empty)
// ===== sym.perf_trace_rdev_get_ftm_responder_stats @ 0x08095f3c (size 424) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_fils_aad @ 0x080960e4 (size 304) =====
// (empty)
// ===== sym.perf_trace_rdev_set_fils_aad @ 0x08096214 (size 404) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_update_owe_info @ 0x080963a8 (size 328) =====
// (empty)
// ===== sym.perf_trace_rdev_update_owe_info @ 0x080964f0 (size 444) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_probe_mesh_link @ 0x080966ac (size 288) =====
// (empty)
// ===== sym.perf_trace_rdev_probe_mesh_link @ 0x080967cc (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_tid_config @ 0x08096950 (size 292) =====
// (empty)
// ===== sym.perf_trace_rdev_set_tid_config @ 0x08096a74 (size 392) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_reset_tid_config @ 0x08096bfc (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_reset_tid_config @ 0x08096d24 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_sar_specs @ 0x08096eb0 (size 240) =====
// (empty)
// ===== sym.perf_trace_rdev_set_sar_specs @ 0x08096fa0 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_color_change @ 0x080970f4 (size 276) =====
// (empty)
// ===== sym.perf_trace_rdev_color_change @ 0x08097208 (size 376) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_set_radar_background @ 0x08097380 (size 316) =====
// (empty)
// ===== sym.perf_trace_rdev_set_radar_background @ 0x080974bc (size 416) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_bool @ 0x0809765c (size 200) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_bool @ 0x08097724 (size 288) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_netdev_mac_evt @ 0x08097844 (size 248) =====
// (empty)
// ===== sym.perf_trace_cfg80211_netdev_mac_evt @ 0x0809793c (size 344) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_evt_only @ 0x08097a94 (size 208) =====
// (empty)
// ===== sym.perf_trace_netdev_evt_only @ 0x08097b64 (size 296) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_send_rx_assoc @ 0x08097c8c (size 260) =====
// (empty)
// ===== sym.perf_trace_cfg80211_send_rx_assoc @ 0x08097d90 (size 356) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_frame_event @ 0x08097ef4 (size 260) =====
// (empty)
// ===== sym.perf_trace_netdev_frame_event @ 0x08097ff8 (size 368) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tx_mlme_mgmt @ 0x08098168 (size 272) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tx_mlme_mgmt @ 0x08098278 (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_netdev_mac_evt @ 0x080983fc (size 248) =====
// (empty)
// ===== sym.perf_trace_netdev_mac_evt @ 0x080984f4 (size 344) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_send_assoc_failure @ 0x0809864c (size 268) =====
// (empty)
// ===== sym.perf_trace_cfg80211_send_assoc_failure @ 0x08098758 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_michael_mic_failure @ 0x080988c4 (size 308) =====
// (empty)
// ===== sym.perf_trace_cfg80211_michael_mic_failure @ 0x080989f8 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ready_on_channel @ 0x08098b84 (size 284) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ready_on_channel @ 0x08098ca0 (size 380) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ready_on_channel_expired @ 0x08098e1c (size 276) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ready_on_channel_expired @ 0x08098f30 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tx_mgmt_expired @ 0x0809909c (size 276) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tx_mgmt_expired @ 0x080991b0 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_new_sta @ 0x0809931c (size 372) =====
// (empty)
// ===== sym.perf_trace_cfg80211_new_sta @ 0x08099490 (size 460) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_mgmt @ 0x0809965c (size 236) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_mgmt @ 0x08099748 (size 332) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_mgmt_tx_status @ 0x08099894 (size 244) =====
// (empty)
// ===== sym.perf_trace_cfg80211_mgmt_tx_status @ 0x08099988 (size 332) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_control_port_tx_status @ 0x08099ad4 (size 244) =====
// (empty)
// ===== sym.perf_trace_cfg80211_control_port_tx_status @ 0x08099bc8 (size 332) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_control_port @ 0x08099d14 (size 308) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_control_port @ 0x08099e48 (size 396) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cqm_rssi_notify @ 0x08099fd4 (size 228) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cqm_rssi_notify @ 0x0809a0b8 (size 316) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_reg_can_beacon @ 0x0809a1f4 (size 344) =====
// (empty)
// ===== sym.perf_trace_cfg80211_reg_can_beacon @ 0x0809a34c (size 444) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_chandef_dfs_required @ 0x0809a508 (size 316) =====
// (empty)
// ===== sym.perf_trace_cfg80211_chandef_dfs_required @ 0x0809a644 (size 416) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ch_switch_notify @ 0x0809a7e4 (size 324) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ch_switch_notify @ 0x0809a928 (size 412) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ch_switch_started_notify @ 0x0809aac4 (size 324) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ch_switch_started_notify @ 0x0809ac08 (size 412) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_radar_event @ 0x0809ada4 (size 336) =====
// (empty)
// ===== sym.perf_trace_cfg80211_radar_event @ 0x0809aef4 (size 436) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cac_event @ 0x0809b0a8 (size 212) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cac_event @ 0x0809b17c (size 308) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_rx_evt @ 0x0809b2b0 (size 248) =====
// (empty)
// ===== sym.perf_trace_cfg80211_rx_evt @ 0x0809b3a8 (size 344) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ibss_joined @ 0x0809b500 (size 300) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ibss_joined @ 0x0809b62c (size 388) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_probe_status @ 0x0809b7b0 (size 276) =====
// (empty)
// ===== sym.perf_trace_cfg80211_probe_status @ 0x0809b8c4 (size 372) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_cqm_pktloss_notify @ 0x0809ba38 (size 264) =====
// (empty)
// ===== sym.perf_trace_cfg80211_cqm_pktloss_notify @ 0x0809bb40 (size 352) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmksa_candidate_notify @ 0x0809bca0 (size 272) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmksa_candidate_notify @ 0x0809bdb0 (size 368) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_report_obss_beacon @ 0x0809bf20 (size 240) =====
// (empty)
// ===== sym.perf_trace_cfg80211_report_obss_beacon @ 0x0809c010 (size 340) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_tdls_oper_request @ 0x0809c164 (size 312) =====
// (empty)
// ===== sym.perf_trace_cfg80211_tdls_oper_request @ 0x0809c29c (size 412) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_scan_done @ 0x0809c438 (size 396) =====
// (empty)
// ===== sym.perf_trace_cfg80211_scan_done @ 0x0809c5c4 (size 512) =====
// (empty)
// ===== sym.trace_event_raw_event_wiphy_id_evt @ 0x0809c7c4 (size 228) =====
// (empty)
// ===== sym.perf_trace_wiphy_id_evt @ 0x0809c8a8 (size 328) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_get_bss @ 0x0809c9f0 (size 384) =====
// (empty)
// ===== sym.perf_trace_cfg80211_get_bss @ 0x0809cb70 (size 484) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_inform_bss_frame @ 0x0809cd54 (size 400) =====
// (empty)
// ===== sym.perf_trace_cfg80211_inform_bss_frame @ 0x0809cee4 (size 516) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_bss_evt @ 0x0809d0e8 (size 284) =====
// (empty)
// ===== sym.perf_trace_cfg80211_bss_evt @ 0x0809d204 (size 372) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_uint @ 0x0809d378 (size 196) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_uint @ 0x0809d43c (size 284) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_return_u32 @ 0x0809d558 (size 196) =====
// (empty)
// ===== sym.perf_trace_cfg80211_return_u32 @ 0x0809d61c (size 284) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_report_wowlan_wakeup @ 0x0809d738 (size 416) =====
// (empty)
// ===== sym.perf_trace_cfg80211_report_wowlan_wakeup @ 0x0809d8d8 (size 532) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_ft_event @ 0x0809daec (size 388) =====
// (empty)
// ===== sym.perf_trace_cfg80211_ft_event @ 0x0809dc70 (size 504) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_stop_iface @ 0x0809de68 (size 248) =====
// (empty)
// ===== sym.perf_trace_cfg80211_stop_iface @ 0x0809df60 (size 348) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmsr_report @ 0x0809e0bc (size 304) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmsr_report @ 0x0809e1ec (size 404) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_pmsr_complete @ 0x0809e380 (size 264) =====
// (empty)
// ===== sym.perf_trace_cfg80211_pmsr_complete @ 0x0809e488 (size 364) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_update_owe_info_event @ 0x0809e5f4 (size 320) =====
// (empty)
// ===== sym.perf_trace_cfg80211_update_owe_info_event @ 0x0809e734 (size 436) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_bss_color_notify @ 0x0809e8e8 (size 236) =====
// (empty)
// ===== sym.perf_trace_cfg80211_bss_color_notify @ 0x0809e9d4 (size 332) =====
// (empty)
// ===== sym.trace_event_raw_event_cfg80211_assoc_comeback @ 0x0809eb20 (size 272) =====
// (empty)
// ===== sym.perf_trace_cfg80211_assoc_comeback @ 0x0809ec30 (size 360) =====
// (empty)
// ===== sym.trace_event_raw_event_link_station_add_mod @ 0x0809ed98 (size 592) =====
// (empty)
// ===== sym.perf_trace_link_station_add_mod @ 0x0809efe8 (size 712) =====
// (empty)
// ===== sym.trace_event_raw_event_rdev_del_link_station @ 0x0809f2b0 (size 296) =====
// (empty)
// ===== sym.perf_trace_rdev_del_link_station @ 0x0809f3d8 (size 396) =====
// (empty)
// ===== sym.__bpf_trace_rdev_suspend @ 0x0809f564 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int @ 0x0809f588 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_scan @ 0x0809f5b0 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_only_evt @ 0x0809f5d4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_enabled_evt @ 0x0809f5f8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_virtual_intf @ 0x0809f620 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_evt @ 0x0809f648 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_virtual_intf @ 0x0809f66c (size 40) =====
// (empty)
// ===== sym.__bpf_trace_key_handle @ 0x0809f694 (size 48) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_key @ 0x0809f6c4 (size 52) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_key @ 0x0809f6f8 (size 52) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_mgmt_key @ 0x0809f72c (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_default_beacon_key @ 0x0809f758 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_ap @ 0x0809f784 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_beacon @ 0x0809f7a8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_stop_ap @ 0x0809f7cc (size 40) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_evt @ 0x0809f7f4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_station_add_change @ 0x0809f818 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_station_del @ 0x0809f83c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_mac_evt @ 0x0809f860 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_station @ 0x0809f884 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_station_info @ 0x0809f8ac (size 40) =====
// (empty)
// ===== sym.__bpf_trace_mpath_evt @ 0x0809f8d4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_mpath @ 0x0809f8f8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_get_mpp @ 0x0809f920 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_mpp @ 0x0809f944 (size 52) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_mpath_info @ 0x0809f978 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_mesh_config @ 0x0809f9a0 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_mesh_config @ 0x0809f9c8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_mesh @ 0x0809f9f0 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_change_bss @ 0x0809fa14 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_txq_params @ 0x0809fa38 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_libertas_set_mesh_channel @ 0x0809fa5c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_monitor_channel @ 0x0809fa80 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_auth @ 0x0809faa4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_assoc @ 0x0809fac8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_deauth @ 0x0809faec (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_disassoc @ 0x0809fb10 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_mgmt_tx_cancel_wait @ 0x0809fb34 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_power_mgmt @ 0x0809fb58 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_connect @ 0x0809fb84 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_connect_params @ 0x0809fba8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_rssi_config @ 0x0809fbd0 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_rssi_range_config @ 0x0809fbfc (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_cqm_txe_config @ 0x0809fc28 (size 48) =====
// (empty)
// ===== sym.__bpf_trace_rdev_disconnect @ 0x0809fc58 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_ibss @ 0x0809fc80 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_join_ocb @ 0x0809fca4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_wiphy_params @ 0x0809fcc8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_tx_power @ 0x0809fcf0 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_int @ 0x0809fd1c (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_testmode_cmd @ 0x0809fd48 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_testmode_dump @ 0x0809fd6c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_bitrate_mask @ 0x0809fd90 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_mgmt_frame_registrations @ 0x0809fdb8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_tx_rx @ 0x0809fddc (size 48) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_void_tx_rx @ 0x0809fe0c (size 52) =====
// (empty)
// ===== sym.__bpf_trace_tx_rx_evt @ 0x0809fe40 (size 48) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_netdev_id_evt @ 0x0809fe70 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_mgmt @ 0x0809fe94 (size 80) =====
// (empty)
// ===== sym.__bpf_trace_rdev_dump_survey @ 0x0809fee4 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_survey_info @ 0x0809ff0c (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_oper @ 0x0809ff34 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_probe_client @ 0x0809ff5c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_pmksa @ 0x0809ff80 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_remain_on_channel @ 0x0809ffa4 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_int_cookie @ 0x0809ffcc (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_cancel_remain_on_channel @ 0x0809fff4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_mgmt_tx @ 0x080a0018 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tx_control_port @ 0x080a003c (size 60) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_noack_map @ 0x080a0078 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_link_evt @ 0x080a00a0 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_return_chandef @ 0x080a00c8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_nan @ 0x080a00f0 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_nan_change_conf @ 0x080a0114 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_nan_func @ 0x080a013c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_nan_func @ 0x080a0160 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_mac_acl @ 0x080a0184 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_ft_ies @ 0x080a01a8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_crit_proto_start @ 0x080a01cc (size 44) =====
// (empty)
// ===== sym.__bpf_trace_rdev_crit_proto_stop @ 0x080a01f8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_channel_switch @ 0x080a021c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_qos_map @ 0x080a0240 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_ap_chanwidth @ 0x080a0264 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_add_tx_ts @ 0x080a028c (size 48) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_tx_ts @ 0x080a02bc (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_channel_switch @ 0x080a02e4 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_tdls_cancel_channel_switch @ 0x080a030c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_pmk @ 0x080a0330 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_pmk @ 0x080a0354 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_external_auth @ 0x080a0378 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_start_radar_detection @ 0x080a039c (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_mcast_rate @ 0x080a03c4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_coalesce @ 0x080a03e8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_multicast_to_unicast @ 0x080a040c (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_get_ftm_responder_stats @ 0x080a0434 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_wdev_cookie_evt @ 0x080a0458 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_fils_aad @ 0x080a047c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_update_owe_info @ 0x080a04a0 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_probe_mesh_link @ 0x080a04c4 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_tid_config @ 0x080a04e8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_reset_tid_config @ 0x080a050c (size 40) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_sar_specs @ 0x080a0534 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_color_change @ 0x080a0558 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_set_radar_background @ 0x080a057c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_bool @ 0x080a05a0 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_netdev_mac_evt @ 0x080a05c8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_netdev_evt_only @ 0x080a05ec (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_send_rx_assoc @ 0x080a0610 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_netdev_frame_event @ 0x080a0634 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tx_mlme_mgmt @ 0x080a065c (size 44) =====
// (empty)
// ===== sym.__bpf_trace_netdev_mac_evt @ 0x080a0688 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_send_assoc_failure @ 0x080a06ac (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_michael_mic_failure @ 0x080a06d0 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ready_on_channel @ 0x080a06fc (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ready_on_channel_expired @ 0x080a0724 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tx_mgmt_expired @ 0x080a0748 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_new_sta @ 0x080a076c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_mgmt @ 0x080a0790 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_mgmt_tx_status @ 0x080a07b4 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_control_port_tx_status @ 0x080a07dc (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_control_port @ 0x080a0804 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cqm_rssi_notify @ 0x080a082c (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_reg_can_beacon @ 0x080a0858 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_chandef_dfs_required @ 0x080a0884 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ch_switch_notify @ 0x080a08a8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ch_switch_started_notify @ 0x080a08d0 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_radar_event @ 0x080a08f8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cac_event @ 0x080a0920 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_rx_evt @ 0x080a0948 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ibss_joined @ 0x080a096c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_probe_status @ 0x080a0990 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_cqm_pktloss_notify @ 0x080a09b8 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmksa_candidate_notify @ 0x080a09e0 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_report_obss_beacon @ 0x080a0a0c (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_tdls_oper_request @ 0x080a0a38 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_scan_done @ 0x080a0a64 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_wiphy_id_evt @ 0x080a0a88 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_get_bss @ 0x080a0aac (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_inform_bss_frame @ 0x080a0ad8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_bss_evt @ 0x080a0afc (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_uint @ 0x080a0b20 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_return_u32 @ 0x080a0b48 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_report_wowlan_wakeup @ 0x080a0b70 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_ft_event @ 0x080a0b94 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_stop_iface @ 0x080a0bb8 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmsr_report @ 0x080a0bdc (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_pmsr_complete @ 0x080a0c00 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_update_owe_info_event @ 0x080a0c24 (size 36) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_bss_color_notify @ 0x080a0c48 (size 44) =====
// (empty)
// ===== sym.__bpf_trace_cfg80211_assoc_comeback @ 0x080a0c74 (size 40) =====
// (empty)
// ===== sym.__bpf_trace_link_station_add_mod @ 0x080a0c9c (size 36) =====
// (empty)
// ===== sym.__bpf_trace_rdev_del_link_station @ 0x080a0cc0 (size 36) =====
// (empty)
// ===== sym.trace_raw_output_rdev_suspend @ 0x080a0ce4 (size 184) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int @ 0x080a0d9c (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_scan @ 0x080a0e0c (size 108) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_only_evt @ 0x080a0e78 (size 108) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_enabled_evt @ 0x080a0ee4 (size 136) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_virtual_intf @ 0x080a0f6c (size 120) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_evt @ 0x080a0fe4 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_virtual_intf @ 0x080a1054 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_key_handle @ 0x080a10c8 (size 168) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_key @ 0x080a1170 (size 172) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_key @ 0x080a121c (size 172) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_mgmt_key @ 0x080a12c8 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_default_beacon_key @ 0x080a1340 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_ap @ 0x080a13b8 (size 236) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_beacon @ 0x080a14a4 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_stop_ap @ 0x080a1518 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_evt @ 0x080a158c (size 116) =====
// (empty)
// ===== sym.trace_raw_output_station_add_change @ 0x080a1600 (size 184) =====
// (empty)
// ===== sym.trace_raw_output_station_del @ 0x080a16b8 (size 128) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_mac_evt @ 0x080a1738 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_station @ 0x080a17b0 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_station_info @ 0x080a182c (size 112) =====
// (empty)
// ===== sym.trace_raw_output_mpath_evt @ 0x080a189c (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_mpath @ 0x080a1918 (size 128) =====
// (empty)
// ===== sym.trace_raw_output_rdev_get_mpp @ 0x080a1998 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_mpp @ 0x080a1a14 (size 128) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_mpath_info @ 0x080a1a94 (size 160) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_mesh_config @ 0x080a1b34 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_mesh_config @ 0x080a1ba4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_mesh @ 0x080a1c1c (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_change_bss @ 0x080a1c90 (size 140) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_txq_params @ 0x080a1d1c (size 148) =====
// (empty)
// ===== sym.trace_raw_output_rdev_libertas_set_mesh_channel @ 0x080a1db0 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_monitor_channel @ 0x080a1e2c (size 140) =====
// (empty)
// ===== sym.trace_raw_output_rdev_auth @ 0x080a1eb8 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_assoc @ 0x080a1f34 (size 168) =====
// (empty)
// ===== sym.trace_raw_output_rdev_deauth @ 0x080a1fdc (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_disassoc @ 0x080a2058 (size 152) =====
// (empty)
// ===== sym.trace_raw_output_rdev_mgmt_tx_cancel_wait @ 0x080a20f0 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_power_mgmt @ 0x080a2164 (size 148) =====
// (empty)
// ===== sym.trace_raw_output_rdev_connect @ 0x080a21f8 (size 188) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_connect_params @ 0x080a22b4 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_rssi_config @ 0x080a2328 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_rssi_range_config @ 0x080a23a0 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_cqm_txe_config @ 0x080a2418 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_disconnect @ 0x080a2490 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_ibss @ 0x080a2508 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_join_ocb @ 0x080a2584 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_wiphy_params @ 0x080a25f8 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_tx_power @ 0x080a2668 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_int @ 0x080a26dc (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_testmode_cmd @ 0x080a274c (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_testmode_dump @ 0x080a27bc (size 108) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_bitrate_mask @ 0x080a2828 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_mgmt_frame_registrations @ 0x080a28a0 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_tx_rx @ 0x080a2918 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_void_tx_rx @ 0x080a298c (size 116) =====
// (empty)
// ===== sym.trace_raw_output_tx_rx_evt @ 0x080a2a00 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_netdev_id_evt @ 0x080a2a70 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_mgmt @ 0x080a2ae8 (size 196) =====
// (empty)
// ===== sym.trace_raw_output_rdev_dump_survey @ 0x080a2bac (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_survey_info @ 0x080a2c20 (size 168) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_oper @ 0x080a2cc8 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_probe_client @ 0x080a2d44 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_pmksa @ 0x080a2dbc (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_remain_on_channel @ 0x080a2e34 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_int_cookie @ 0x080a2eb0 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_cancel_remain_on_channel @ 0x080a2f24 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_mgmt_tx @ 0x080a2f98 (size 192) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tx_control_port @ 0x080a3058 (size 176) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_noack_map @ 0x080a3108 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_link_evt @ 0x080a3180 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_return_chandef @ 0x080a31f0 (size 144) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_nan @ 0x080a3280 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_nan_change_conf @ 0x080a32f8 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_nan_func @ 0x080a3374 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_nan_func @ 0x080a33ec (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_mac_acl @ 0x080a3460 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_ft_ies @ 0x080a34d4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_crit_proto_start @ 0x080a354c (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_crit_proto_stop @ 0x080a35c4 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_channel_switch @ 0x080a3634 (size 176) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_qos_map @ 0x080a36e4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_ap_chanwidth @ 0x080a375c (size 160) =====
// (empty)
// ===== sym.trace_raw_output_rdev_add_tx_ts @ 0x080a37fc (size 144) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_tx_ts @ 0x080a388c (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_channel_switch @ 0x080a3908 (size 172) =====
// (empty)
// ===== sym.trace_raw_output_rdev_tdls_cancel_channel_switch @ 0x080a39b4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_pmk @ 0x080a3a2c (size 264) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_pmk @ 0x080a3b34 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_external_auth @ 0x080a3bac (size 128) =====
// (empty)
// ===== sym.trace_raw_output_rdev_start_radar_detection @ 0x080a3c2c (size 160) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_mcast_rate @ 0x080a3ccc (size 136) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_coalesce @ 0x080a3d54 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_multicast_to_unicast @ 0x080a3dc4 (size 144) =====
// (empty)
// ===== sym.trace_raw_output_rdev_get_ftm_responder_stats @ 0x080a3e54 (size 156) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_wdev_cookie_evt @ 0x080a3ef0 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_fils_aad @ 0x080a3f64 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_update_owe_info @ 0x080a3fe0 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_probe_mesh_link @ 0x080a405c (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_tid_config @ 0x080a40d4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_reset_tid_config @ 0x080a414c (size 124) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_sar_specs @ 0x080a41c8 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_rdev_color_change @ 0x080a423c (size 120) =====
// (empty)
// ===== sym.trace_raw_output_rdev_set_radar_background @ 0x080a42b4 (size 140) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_bool @ 0x080a4340 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_netdev_mac_evt @ 0x080a43bc (size 116) =====
// (empty)
// ===== sym.trace_raw_output_netdev_evt_only @ 0x080a4430 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_send_rx_assoc @ 0x080a44a0 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_netdev_frame_event @ 0x080a4514 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tx_mlme_mgmt @ 0x080a458c (size 124) =====
// (empty)
// ===== sym.trace_raw_output_netdev_mac_evt @ 0x080a4608 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_send_assoc_failure @ 0x080a467c (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_michael_mic_failure @ 0x080a46f4 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ready_on_channel @ 0x080a4770 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ready_on_channel_expired @ 0x080a47ec (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tx_mgmt_expired @ 0x080a4864 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_new_sta @ 0x080a48dc (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_mgmt @ 0x080a4950 (size 144) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_mgmt_tx_status @ 0x080a49e0 (size 140) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_control_port_tx_status @ 0x080a4a6c (size 140) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_control_port @ 0x080a4af8 (size 148) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cqm_rssi_notify @ 0x080a4b8c (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_reg_can_beacon @ 0x080a4c00 (size 176) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_chandef_dfs_required @ 0x080a4cb0 (size 140) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ch_switch_notify @ 0x080a4d3c (size 152) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ch_switch_started_notify @ 0x080a4dd4 (size 152) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_radar_event @ 0x080a4e6c (size 148) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cac_event @ 0x080a4f00 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_rx_evt @ 0x080a4f70 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ibss_joined @ 0x080a4fe4 (size 124) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_probe_status @ 0x080a5060 (size 148) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_cqm_pktloss_notify @ 0x080a50f4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmksa_candidate_notify @ 0x080a516c (size 144) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_report_obss_beacon @ 0x080a51fc (size 144) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_tdls_oper_request @ 0x080a528c (size 128) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_scan_done @ 0x080a530c (size 140) =====
// (empty)
// ===== sym.trace_raw_output_wiphy_id_evt @ 0x080a5398 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_get_bss @ 0x080a5408 (size 148) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_inform_bss_frame @ 0x080a549c (size 148) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_bss_evt @ 0x080a5530 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_uint @ 0x080a55a4 (size 108) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_return_u32 @ 0x080a5610 (size 108) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_report_wowlan_wakeup @ 0x080a567c (size 112) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_ft_event @ 0x080a56ec (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_stop_iface @ 0x080a5764 (size 112) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmsr_report @ 0x080a57d4 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_pmsr_complete @ 0x080a584c (size 116) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_update_owe_info_event @ 0x080a58c0 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_bss_color_notify @ 0x080a5938 (size 120) =====
// (empty)
// ===== sym.trace_raw_output_cfg80211_assoc_comeback @ 0x080a59b0 (size 116) =====
// (empty)
// ===== sym.trace_raw_output_link_station_add_mod @ 0x080a5a24 (size 128) =====
// (empty)
// ===== sym.trace_raw_output_rdev_del_link_station @ 0x080a5aa4 (size 124) =====
// (empty)
// ===== sym.__cfg80211_join_ocb @ 0x080a5b20 (size 156) =====
// (empty)
// ===== sym.rdev_join_ocb @ 0x080a5bc0 (size 140) =====
// (empty)
// ===== sym.cfg80211_join_ocb @ 0x080a5d64 (size 220) =====
// (empty)
// ===== sym.__cfg80211_leave_ocb @ 0x080a5e44 (size 108) =====
// (empty)
// ===== sym.rdev_leave_ocb @ 0x080a5eb0 (size 132) =====
// (empty)
// ===== sym.cfg80211_leave_ocb @ 0x080a6048 (size 164) =====
// (empty)
// ===== sym.nl80211_pmsr_start @ 0x080a60ec (size 2752) =====
// (empty)
// ===== sym.rdev_start_pmsr @ 0x080a6bac (size 156) =====
// (empty)
// ===== sym.cfg80211_pmsr_complete @ 0x080a6d5c (size 612) =====
// (empty)
// ===== sym.cfg80211_pmsr_report @ 0x080a6fd0 (size 1156) =====
// (empty)
// ===== sym.cfg80211_pmsr_free_wk @ 0x080a7464 (size 72) =====
// (empty)
// ===== sym.cfg80211_pmsr_process_abort @ 0x080a74ac (size 316) =====
// (empty)
// ===== sym.cfg80211_pmsr_wdev_down @ 0x080a75e8 (size 140) =====
// (empty)
// ===== sym.cfg80211_release_pmsr @ 0x080a767c (size 160) =====
// (empty)
// ===== sym.nl80211_pmsr_send_ftm_res @ 0x080a771c (size 884) =====
// (empty)
// ===== sym.rdev_abort_pmsr @ 0x080a7a90 (size 140) =====
// (empty)
// ===== sym.wiphy_read_of_freq_limits @ 0x080a7c2c (size 600) =====
// (empty)
// ===== sym.init_module @ 0x080a8be0 (size 268) =====
// (empty)
// ===== sym.regulatory_init @ 0x080a8cec (size 172) =====
// (empty)
// ===== sym.regulatory_init_db @ 0x080a8d98 (size 228) =====
// (empty)
// ===== sym.load_builtin_regdb_keys @ 0x080a8e7c (size 124) =====
// (empty)
// ===== sym.load_keys_from_buffer @ 0x080a8ef8 (size 292) =====
// (empty)
// ===== sym.nl80211_init @ 0x080a901c (size 96) =====
// (empty)
// ===== sym.cleanup_module @ 0x080a907c (size 100) =====
// (empty)