// decompiled from usb_f_gsi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1940) =====

//WARNING: Switch with 1 destination removed at 0x0800ca94

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 < -0x5c299434d380556a) {
                if (arg1 < -0x72e7d4613b03adca) {
                    if (arg1 == -0x7bcbda558eb245e5) {
                        pcVar2 = sym.gsi_ctrl_dev_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x76c3919368358772) goto code_r0x0800ca54;
                        pcVar2 = sym.rndis_set_param_vendor.cfi_jt;
                    }
                }
                else {
                    if (arg1 == -0x72e7d4613b03adca) {
                        pcVar2 = sym.rndis_deregister.cfi_jt;
                        goto code_r0x08004744;
                    }
                    if (arg1 == -0x673cf7916c0aef29) {
                        pcVar2 = sym.rndis_msg_parser.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x61af895beaf3d6ee) goto code_r0x0800ca54;
                        pcVar2 = sym.gsi_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    }
                }
            }
            else if (arg1 < -0x5559db05f9d8bdf4) {
                if (arg1 == -0x5c299434d380556a) {
                    pcVar2 = sym.gsi_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                else {
                    if (arg1 != -0x55bd4d1e73a69e63) goto code_r0x0800ca54;
                    pcVar2 = sym.gsi_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
            }
            else if (arg1 == -0x5559db05f9d8bdf4) {
                pcVar2 = sym.gsi_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.ipa_work_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x3582c496f98111f0) goto code_r0x0800ca54;
                pcVar2 = sym.gsi_get_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < -0x162f16005ef6c06e) {
            if (arg1 < -0x1f5194b81050a881) {
                if (arg1 == -0x2ee0710dce68437c) {
                    pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
                    goto code_r0x08004744;
                }
                if (arg1 != -0x2ba36bd27ec6e566) goto code_r0x0800ca54;
                pcVar2 = sym.rndis_set_param_medium.cfi_jt;
            }
            else if (arg1 == -0x1f5194b81050a881) {
                pcVar2 = sym.gsi_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 == -0x1f14de2d13593b38) {
                    pcVar2 = sym.rndis_signal_connect.cfi_jt;
                    goto code_r0x08004744;
                }
                if (arg1 != -0x1eb5dea41db1ab0e) goto code_r0x0800ca54;
                pcVar2 = sym.rndis_set_param_dev.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x162f16005ef6c06e) {
                pcVar2 = sym.rndis_get_next_response.cfi_jt;
            }
            else {
                if (arg1 != -0xb18138ae74ccd30) goto code_r0x0800ca54;
                pcVar2 = sym.gsi_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8004960 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x0800ca54;
            }
            if (arg1 == -0x391b10cb41dc2a3) {
                pcVar2 = sym.gsi_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x890743871a4a53) goto code_r0x0800ca54;
                pcVar2 = sym.gsi_ctrl_dev_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x39d976879b141ac6) {
        if (arg1 < 0x1da6b26d8de0eb28) {
            if (arg1 < 0xb9156c395278e7d) {
                if (arg1 != 0x2b3a43e29242445) {
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800ca54;
                    pcVar2 = sym.seq_read.cfi_jt;
                    goto code_r0x08004744;
                }
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0xb9156c395278e7d) {
                    if (arg1 != 0xeeff0ad281f3bef) {
                        if ((arg1 == 0x1d7ed092cb04d3f1) && ((pcVar1 + -0x8004918 >> 3 | pcVar1 << 0x3d) < 3)) {
                            return;
                        }
                        goto code_r0x0800ca54;
                    }
                    pcVar2 = sym.gsi_info_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08004744:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x0800ca54;
                }
                pcVar2 = sym.gsi_get_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else if (arg1 < 0x2335293b6d480f98) {
            if (arg1 != 0x1da6b26d8de0eb28) {
                if ((arg1 == 0x1e8c334cfa2d7333) && ((pcVar1 + -0x80048c8 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x0800ca54;
            }
            pcVar2 = sym.rndis_rm_hdr.cfi_jt;
        }
        else if (arg1 == 0x2335293b6d480f98) {
            pcVar2 = sym.gsi_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x24f9d7b694ee9a1e) {
            pcVar2 = sym.rndis_set_host_mac.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x0800ca54;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 < 0x6322b72e887e81ab) {
        if (arg1 < 0x44f5fcaeadc1f6fb) {
            if (arg1 == 0x39d976879b141ac6) {
                pcVar2 = sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != 0x40ceb27a7e2157a1) goto code_r0x0800ca54;
                pcVar2 = sym.gsi_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x44f5fcaeadc1f6fb) {
                if (arg1 == 0x4c550309df1cf4c1) {
                    pcVar2 = sym.__typeid__ZTSFvPvE_global_addr;
                }
                else {
                    if (arg1 != 0x5233d5bc7887ae44) goto code_r0x0800ca54;
                    pcVar2 = sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                goto code_r0x08004744;
            }
            pcVar2 = sym.rndis_free_response.cfi_jt;
        }
    }
    else if (arg1 < 0x68131453fce1715e) {
        if (arg1 == 0x6322b72e887e81ab) {
            pcVar2 = sym.gsi_opts_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x63cbeba280ab7603) {
                if ((arg1 == 0x643f348a21390606) && ((pcVar1 + -0x8004930 >> 3 | pcVar1 << 0x3d) < 6)) {
                    return;
                }
                goto code_r0x0800ca54;
            }
            pcVar2 = sym.gsi_rndis_class_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x68131453fce1715e) {
        pcVar2 = sym.rndis_add_hdr.cfi_jt;
    }
    else if (arg1 == 0x78b02e6bdff32f97) {
        pcVar2 = sym.rndis_register.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800ca54;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800ca54:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800caa8);
    (*pcVar1)();
}


// ===== sym.rndis_free_response.cfi_jt @ 0x080047a0 (size 8) =====

void sym.rndis_free_response.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(param_1 + 0x60);
    piVar5 = *(param_1 + 0x50);
    while (piVar3 = piVar5, piVar3 != param_1 + 0x50) {
        piVar5 = *piVar3;
        if (piVar3[2] == param_2) {
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
        }
    }
    _raw_spin_unlock(param_1 + 0x60);
    return;
}


// ===== sym.gsi_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080047a8 (size 8) =====

int sym.gsi_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    code cVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *puVar9;
    int64_t iVar10;
    ulong uVar11;
    code *pcVar12;
    uint64_t uVar13;
    code *pcVar14;
    code *pcVar15;
    uint64_t uVar16;
    ulong uVar17;
    uint8_t uVar18;
    ulong uVar19;
    uchar *puVar20;
    ulong *puVar21;
    ulong uVar22;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    uint64_t uVar27;
    uint uVar28;
    ulong *in_x18;
    code *pcVar29;
    code *pcVar30;
    int64_t iVar31;
    ulong uVar32;
    code *pcVar33;
    uint32_t uVar34;
    code *pcVar35;
    code *pcVar36;
    code *pcVar37;
    ulong unaff_x30;
    code *pcStack_130;
    code *pcStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_70 = *(iVar10 + 0x5e0);
    puVar21 = *(param_1 + 0x30);
    if ((*(param_2 + 0x1b) != 4) && (*(param_2 + 0x1b) != 2)) {
        iVar6 = usb_interface_id(param_1,param_2);
        *(param_2 + 0xdc) = iVar6;
        if (-1 < iVar6) goto code_r0x08009d34;
        goto code_r0x0800a990;
    }
    *(param_2 + 0xdc) = 0xffffffed;
code_r0x08009d34:
    iVar6 = usb_interface_id(param_1,param_2);
    *(param_2 + 0x1c) = iVar6;
    if (iVar6 < 0) goto code_r0x0800a990;
    pcStack_d8 = NULL;
    uStack_d0 = 0;
    iStack_c8 = 0;
    bVar2 = true;
    uVar32 = 0;
    uVar17 = 0;
    pcVar24 = NULL;
    pcStack_a8 = obj.qdss_gsi_data_intf_desc;
    pcVar37 = NULL;
    pcVar30 = NULL;
    pcVar33 = NULL;
    pcVar29 = NULL;
    pcVar25 = NULL;
    pcStack_c0 = obj.qdss_gsi_fs_data_desc;
    pcStack_b8 = NULL;
    uVar8 = 0;
    pcVar15 = NULL;
    uVar13 = 0;
    pcVar26 = NULL;
    pcStack_130 = NULL;
    uStack_b0 = 0x20;
    uVar27 = 0;
    uVar16 = 0;
    pcVar5 = obj.qdss_gsi_hs_data_desc;
    pcVar35 = obj.qdss_gsi_ss_data_desc;
    pcVar36 = obj.qdss_gsi_fs_data_only_desc;
    pcVar23 = obj.qdss_gsi_hs_data_only_desc;
    uVar28 = 8;
    uVar22 = 0x4000;
    uVar19 = 0xf;
    bVar3 = true;
    pcVar14 = obj.qdss_gsi_ss_data_only_desc;
    pcVar12 = obj.qdss_gsi_string_defs;
    switch(*(param_2 + 0x1b)) {
    case 0:
        param_2[0x44] = 0x600000004000;
        uVar16 = sym.rndis_register(0x80048a0,param_2);
        if (0xfffffffffffff000 < uVar16) goto code_r0x0800a990;
        param_2[0x20] = uVar16;
        sym.rndis_set_param_medium(uVar16,0,0);
        get_random_bytes(param_2 + 0x206,6);
        puVar9 = param_2 + 0x40;
        *(param_2 + 0x206) = *(param_2 + 0x206) & 0xfc | 2;
        get_random_bytes(puVar9,6);
        *(param_2 + 0x40) = *(param_2 + 0x40) & 0xfc | 2;
        if (param_2 != NULL) {
            ipc_log_string(param_2[0xdc],"setting host_ethaddr=%pM, device_ethaddr = %pM",puVar9,param_2 + 0x206);
        }
        *(param_2 + 0x1d) = *puVar9;
        *(param_2 + 0xec) = *(param_2 + 0x204);
        *(param_2[0x20] + 0x18) = param_2 + 0x1d;
        if (((param_2[0x1f] == 0) || (*(param_2 + 0xe4) == 0)) ||
           (iVar7 = sym.rndis_set_param_vendor(param_2[0x20],*(param_2 + 0xe4),param_2[0x1f]), iVar7 == 0)) {
            *0x80008e5 = 0xe0;
            *0x80008e6 = 1;
            *0x80008e7 = 3;
            switch(*(param_2 + 0x22)) {
            case 0:
                *(param_2 + 0x22) = 3;
            case 3:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 1;
                break;
            case 2:
                *0x80008e5 = 0xef;
                *0x80008e7 = 1;
                *0x80008e6 = 1;
                break;
            case 4:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 2;
                break;
            case 5:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 3;
                break;
            case 6:
                *0x80008e5 = 0xef;
                *0x80008e7 = 4;
                *0x80008e6 = 4;
                break;
            case 7:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 5;
                break;
            case 8:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 6;
                break;
            case 9:
                *0x80008e5 = 0xef;
                *0x80008e6 = 4;
                *0x80008e7 = 7;
            }
            pcVar26 = obj.rndis_gsi_iad_descriptor;
            pcStack_d8 = NULL;
            uStack_d0 = 8;
            pcStack_c0 = obj.rndis_gsi_fs_in_desc;
            uStack_b0 = 0x40;
            uVar27 = 0;
            uVar13 = 0;
            pcStack_b8 = NULL;
            uVar8 = 0;
            pcVar12 = obj.rndis_gsi_string_defs;
            pcVar14 = obj.gsi_eth_ss_function;
            pcVar23 = obj.gsi_eth_hs_function;
            pcVar36 = obj.gsi_eth_fs_function;
            pcVar24 = obj.rndis_gsi_ss_notify_desc;
            pcVar37 = obj.rndis_gsi_ss_out_desc;
            pcVar35 = obj.rndis_gsi_ss_in_desc;
            pcVar30 = obj.rndis_gsi_hs_notify_desc;
            pcVar33 = obj.rndis_gsi_hs_out_desc;
            pcVar5 = obj.rndis_gsi_hs_in_desc;
            pcVar29 = obj.rndis_gsi_fs_notify_desc;
            pcVar25 = obj.rndis_gsi_fs_out_desc;
            pcStack_130 = obj.rndis_gsi_control_intf;
            uVar34 = 2;
            uVar17 = 0x6000;
            uVar19 = 0x32;
            uVar22 = 0x4000;
            iStack_c8 = 1;
            uVar28 = 8;
            pcVar15 = obj.rndis_gsi_union_desc;
            pcStack_a8 = obj.rndis_gsi_data_intf;
            *0x80008f6 = *0x80008e5;
            *0x80008f7 = *0x80008e6;
            *0x80008f8 = *0x80008e7;
            goto code_r0x0800a560;
        }
        goto code_r0x0800a988;
    case 1:
        param_2[0x44] = 0x80000000800;
        get_random_bytes(param_2 + 0x206,6);
        *(param_2 + 0x206) = *(param_2 + 0x206) & 0xfc | 2;
        get_random_bytes(param_2 + 0x40,6);
        uVar18 = *(param_2 + 0x40) & 0xfc | 2;
        *(param_2 + 0x40) = uVar18;
        if (param_2 != NULL) {
            ipc_log_string(param_2[0xdc],"setting host_ethaddr=%pM, device_ethaddr = %pM",param_2 + 0x40,
                           param_2 + 0x206);
            uVar18 = *(param_2 + 0x40);
        }
        scnprintf(param_2 + 0x1d,0xe,"%02X%02X%02X%02X%02X%02X",uVar18,*(param_2 + 0x201),*(param_2 + 0x202),
                  *(param_2 + 0x203),*(param_2 + 0x204),*(param_2 + 0x205));
        pcVar12 = obj.ecm_gsi_string_defs;
        pcStack_d8 = obj.ecm_gsi_data_nop_intf;
        pcStack_c0 = obj.ecm_gsi_fs_in_desc;
        pcStack_b8 = obj.ecm_gsi_desc;
        uVar34 = 0;
        uStack_b0 = 0x40;
        pcVar26 = NULL;
        uVar28 = 0x10;
        pcVar14 = obj.ecm_gsi_ss_function;
        pcVar23 = obj.ecm_gsi_hs_function;
        pcStack_a8 = obj.ecm_gsi_data_intf;
        pcVar36 = obj.ecm_gsi_fs_function;
        pcVar24 = obj.ecm_gsi_ss_notify_desc;
        pcVar37 = obj.ecm_gsi_ss_out_desc;
        pcVar35 = obj.ecm_gsi_ss_in_desc;
        pcVar30 = obj.ecm_gsi_hs_notify_desc;
        pcVar33 = obj.ecm_gsi_hs_out_desc;
        pcVar5 = obj.ecm_gsi_hs_in_desc;
        pcVar29 = obj.ecm_gsi_fs_notify_desc;
        pcVar25 = obj.ecm_gsi_fs_out_desc;
        pcVar15 = obj.ecm_gsi_union_desc;
        uVar22 = 0x800;
        uVar13 = 0xd;
        uVar27 = 1;
        iStack_c8 = 2;
        uVar17 = 0x800;
        uStack_d0 = 0;
        pcStack_130 = obj.ecm_gsi_control_intf;
        *0x8000818 = param_2 + 0x1d;
code_r0x0800a0c8:
        uVar19 = 0xf;
        uVar8 = 9;
        goto code_r0x0800a560;
    case 2:
        param_2[0x44] = 0x600000004000;
        pcStack_a8 = obj.rmnet_gsi_interface_desc;
        uVar8 = 0;
        pcVar15 = NULL;
        uVar13 = 0;
        pcVar26 = NULL;
        pcStack_130 = NULL;
        uVar27 = 0;
        uVar16 = 0;
        bVar3 = true;
        pcStack_c0 = obj.rmnet_gsi_fs_in_desc;
        pcStack_b8 = NULL;
        pcVar25 = obj.rmnet_gsi_fs_out_desc;
        pcVar29 = obj.rmnet_gsi_fs_notify_desc;
        pcVar5 = obj.rmnet_gsi_hs_in_desc;
        pcVar33 = obj.rmnet_gsi_hs_out_desc;
        pcVar30 = obj.rmnet_gsi_hs_notify_desc;
        pcVar35 = obj.rmnet_gsi_ss_in_desc;
        pcVar37 = obj.rmnet_gsi_ss_out_desc;
        pcVar24 = obj.rmnet_gsi_ss_notify_desc;
        pcVar36 = obj.rmnet_gsi_fs_function;
        pcVar23 = obj.rmnet_gsi_hs_function;
        uVar28 = 8;
        uVar19 = 0x32;
        uVar17 = 0x7c00;
        uVar32 = 0xe;
        uVar22 = 0x7c00;
        pcVar14 = obj.rmnet_gsi_ss_function;
        pcVar12 = obj.rmnet_gsi_string_defs;
        bVar2 = false;
        pcStack_d8 = NULL;
        uStack_d0 = 0;
        iStack_c8 = 0;
        uStack_b0 = 0x20;
        break;
    case 3:
        param_2[0x44] = 0x600000004000;
        *0x8000c31 = 0x800;
        uStack_d0 = 8;
        pcStack_c0 = obj.mbim_gsi_fs_in_desc;
        uVar27 = 0;
        pcVar12 = obj.mbim_gsi_string_defs;
        pcStack_d8 = obj.mbim_gsi_data_nop_intf;
        uVar28 = 8;
        pcVar14 = obj.mbim_gsi_ss_function;
        pcVar23 = obj.mbim_gsi_hs_function;
        pcVar36 = obj.mbim_gsi_fs_function;
        uStack_b0 = 0x30;
        pcVar24 = obj.mbim_gsi_ss_notify_desc;
        pcVar37 = obj.mbim_gsi_ss_out_desc;
        pcVar35 = obj.mbim_gsi_ss_in_desc;
        pcVar30 = obj.mbim_gsi_hs_notify_desc;
        pcVar33 = obj.mbim_gsi_hs_out_desc;
        pcStack_a8 = obj.mbim_gsi_data_intf;
        pcVar5 = obj.mbim_gsi_hs_in_desc;
        pcVar29 = obj.mbim_gsi_fs_notify_desc;
        pcVar25 = obj.mbim_gsi_fs_out_desc;
        pcVar15 = obj.mbim_gsi_union_desc;
        pcVar26 = obj.mbim_gsi_iad_desc;
        uVar34 = 0xffffffff;
        uVar19 = 0xf;
        uVar22 = 0x4000;
        uVar8 = 9;
        iStack_c8 = 1;
        pcStack_130 = obj.mbim_gsi_control_intf;
        if (param_2 == NULL) {
            pcStack_b8 = NULL;
            uVar17 = 0x4000;
            uVar13 = uVar27;
            uVar28 = 8;
            goto code_r0x0800a0c8;
        }
        uVar13 = 0;
        uVar17 = 0x4000;
        pcStack_b8 = NULL;
        if (0xfffffffc < *(param_1 + 0x28) - 5) {
            ipc_log_string(param_2[0xdc],"MBIM in configuration %d");
            uStack_d0 = 8;
            pcStack_c0 = obj.mbim_gsi_fs_in_desc;
            uVar27 = 0;
            pcStack_d8 = obj.mbim_gsi_data_nop_intf;
            uVar13 = 0;
            pcStack_b8 = NULL;
            pcVar12 = obj.mbim_gsi_string_defs;
            pcVar14 = obj.mbim_gsi_ss_function;
            uStack_b0 = 0x30;
            pcVar23 = obj.mbim_gsi_hs_function;
            pcVar36 = obj.mbim_gsi_fs_function;
            pcVar24 = obj.mbim_gsi_ss_notify_desc;
            pcVar37 = obj.mbim_gsi_ss_out_desc;
            pcVar35 = obj.mbim_gsi_ss_in_desc;
            pcStack_a8 = obj.mbim_gsi_data_intf;
            pcVar30 = obj.mbim_gsi_hs_notify_desc;
            pcVar33 = obj.mbim_gsi_hs_out_desc;
            pcVar5 = obj.mbim_gsi_hs_in_desc;
            pcVar29 = obj.mbim_gsi_fs_notify_desc;
            pcVar25 = obj.mbim_gsi_fs_out_desc;
            pcVar15 = obj.mbim_gsi_union_desc;
            pcVar26 = obj.mbim_gsi_iad_desc;
            uVar34 = 0xffffffff;
            uVar19 = 0xf;
            uVar22 = 0x4000;
            uVar8 = 9;
            iStack_c8 = 1;
            uVar17 = 0x4000;
            uVar28 = 8;
            pcStack_130 = obj.mbim_gsi_control_intf;
        }
code_r0x0800a560:
        iVar6 = usb_string_id(puVar21);
        if (-1 < iVar6) {
            bVar2 = false;
            bVar3 = false;
            uVar32 = 0xe;
            *pcVar12 = SUB41(iVar6,0);
            pcStack_130[8] = SUB41(iVar6,0);
            uVar16 = uVar34;
            break;
        }
        goto code_r0x0800a988;
    case 4:
        break;
    default:
        if (param_2 == NULL) {
            iVar6 = -0x16;
        }
        else {
            ipc_log_string(param_2[0xdc],"%s: Invalid prot id %d","gsi_bind");
            _printk(0x80015de,"gsi_bind",*(param_2 + 0x1b));
            iVar6 = -0x16;
        }
        goto code_r0x0800a990;
    }
    iVar6 = usb_string_id(puVar21);
    if (iVar6 < 0) {
code_r0x0800a988:
        sym.rndis_deregister(param_2[0x20]);
    }
    else {
        if (uStack_b0 == iStack_c8 * 0x10) goto code_r0x0800abb0;
        pcVar12[iStack_c8 * 0x10] = SUB41(iVar6,0);
        pcStack_a8[8] = SUB41(iVar6,0);
        if ((pcVar26 != NULL) && (-1 < uVar16)) {
            iVar6 = usb_string_id(uVar16,puVar21);
            if (iVar6 < 0) goto code_r0x0800a988;
            if (uStack_b0 <= uVar16 * 0x10) goto code_r0x0800abb0;
            pcVar12[uVar16 * 0x10] = SUB41(iVar6,0);
            if (uStack_d0 < 7) goto code_r0x0800abb0;
            pcVar26[7] = SUB41(iVar6,0);
        }
        if (pcStack_b8 != NULL) {
            iVar6 = usb_string_id(puVar21);
            if (iVar6 < 0) goto code_r0x0800a988;
            pcVar12[uVar27 * 0x10] = SUB41(iVar6,0);
            if (uVar13 < 3) goto code_r0x0800abb0;
            pcStack_b8[3] = SUB41(iVar6,0);
        }
        if (pcStack_130 != NULL) {
            if (bVar3) goto code_r0x0800abb0;
            pcStack_130[2] = SUB41(*(param_2 + 0xdc),0);
        }
        if (pcVar26 != NULL) {
            if (uStack_d0 < 2) goto code_r0x0800abb0;
            pcVar26[2] = SUB41(*(param_2 + 0xdc),0);
        }
        if (pcVar15 != NULL) {
            if (bVar3) goto code_r0x0800abb0;
            pcVar15[3] = SUB41(*(param_2 + 0xdc),0);
            pcVar15[4] = SUB41(*(param_2 + 0x1c),0);
        }
        pcStack_a8[2] = SUB41(*(param_2 + 0x1c),0);
        if (pcStack_d8 != NULL) {
            if (uVar8 < 2) goto code_r0x0800abb0;
            pcStack_d8[2] = SUB41(*(param_2 + 0x1c),0);
        }
        puVar9 = usb_ep_autoconfig(*puVar21,pcStack_c0);
        if (puVar9 == NULL) {
code_r0x0800a918:
            if (param_2[0xcc] != NULL) {
                kfree(*param_2[0xcc]);
                usb_ep_free_request(param_2[0xcb],param_2[0xcc]);
            }
            if (param_2[0xcb] != NULL) {
                *param_2[0xcb] = 0;
            }
            iVar10 = param_2[0x26];
            if ((iVar10 != 0) && (*(iVar10 + 0x38) != 0)) {
                msm_ep_set_mode(iVar10,0);
                *param_2[0x26] = 0;
            }
            iVar10 = param_2[0x25];
            if ((iVar10 != 0) && (*(iVar10 + 0x38) != 0)) {
                msm_ep_set_mode(iVar10,0);
                *param_2[0x25] = 0;
            }
            if (param_2 != NULL) {
                ipc_log_string(param_2[0xdc],"%s: bind failed for %s","gsi_update_function_bind_params",*param_2);
                _printk(0x80018bb,"gsi_update_function_bind_params",*param_2);
            }
            iVar6 = -0xc;
            goto code_r0x0800a988;
        }
        param_2[0x25] = puVar9;
        msm_ep_set_mode(puVar9,2);
        *puVar9 = puVar21;
        if (pcVar25 != NULL) {
            puVar9 = usb_ep_autoconfig(*puVar21);
            if (puVar9 == NULL) goto code_r0x0800a918;
            param_2[0x26] = puVar9;
            msm_ep_set_mode(puVar9,2);
            *puVar9 = puVar21;
        }
        if (pcVar29 != NULL) {
            puVar9 = usb_ep_autoconfig(*puVar21,pcVar29);
            if (puVar9 != NULL) {
                param_2[0xcb] = puVar9;
                *puVar9 = puVar21;
                iVar10 = usb_ep_alloc_request(puVar9,0xcc0);
                param_2[0xcc] = iVar10;
                if (iVar10 != 0) {
                    uVar11 = __kmalloc(uVar28,0xcc0);
                    *param_2[0xcc] = uVar11;
                    if (*param_2[0xcc] != 0) {
                        *(param_2[0xcc] + 1) = uVar28;
                        *(param_2[0xcc] + 0x38) = param_2;
                        *(param_2[0xcc] + 0x30) =
                             sym.gsi_ctrl_notify_resp_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        puVar20 = *param_2[0xcc];
                        *puVar20 = 0xa1;
                        iVar6 = *(param_2 + 0xdc);
                        if (iVar6 == -0x13) {
                            iVar6 = *(param_2 + 0x1c);
                        }
                        *(puVar20 + 4) = iVar6;
                        *(puVar20 + 6) = 0;
                        goto code_r0x0800a87c;
                    }
                }
            }
            goto code_r0x0800a918;
        }
code_r0x0800a87c:
        param_2[0x29] = uVar19;
        param_2[0x2a] = uVar22;
        if (param_2[0x26] != 0) {
            param_2[0x34] = uVar32;
            param_2[0x35] = uVar17;
        }
        *(param_2 + 0x6a) = 0;
        *(param_2 + 0x34c) = 0x7f7f;
        cVar1 = pcStack_c0[2];
        pcVar5[2] = cVar1;
        pcVar35[2] = cVar1;
        if (pcVar25 == NULL) {
            if (pcVar29 != NULL) {
                if (bVar2) goto code_r0x0800abb0;
code_r0x0800a8f0:
                pcVar30[2] = pcVar29[2];
                pcVar24[2] = pcVar29[2];
            }
        }
        else {
            if (bVar2) goto code_r0x0800abb0;
            pcVar33[2] = pcVar25[2];
            pcVar37[2] = pcVar25[2];
            if (pcVar29 != NULL) goto code_r0x0800a8f0;
        }
        iVar6 = usb_assign_descriptors(param_2,pcVar36,pcVar23,pcVar14,pcVar14);
        if (iVar6 != 0) goto code_r0x0800a918;
        *(param_2 + 0x72d) = 0;
        iVar6 = ipa_register_ipa_ready_cb(sym.__typeid__ZTSFvPvE_global_addr,param_2);
        if (iVar6 == 0) {
            cVar4 = *0x228;
            if (param_2 != NULL) {
                ipc_log_string(param_2[0xdc],"%s: ipa is not ready","gsi_bind");
                _printk(0x8002925,"gsi_bind");
                cVar4 = *(param_2 + 0x45);
            }
            if (cVar4 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&uStack_98,0);
                puVar21 = param_2 + 0x6b;
                iVar10 = prepare_to_wait_event(puVar21,&uStack_98,1);
                if (*(param_2 + 0x45) == '\0') {
                    iVar31 = 0x4e2;
                    do {
                        if (iVar10 != 0) goto code_r0x0800aa3c;
                        iVar31 = schedule_timeout(iVar31);
                        iVar10 = prepare_to_wait_event(puVar21,&uStack_98,1);
                        if (iVar31 == 0 && *(param_2 + 0x45) != '\0') {
                            iVar31 = 1;
                        }
                    } while ((*(param_2 + 0x45) == '\0') && (iVar31 != 0));
                }
                else {
                    iVar31 = 0x4e2;
                }
                iVar10 = iVar31;
                finish_wait(puVar21,&uStack_98);
code_r0x0800aa3c:
                if (iVar10 == 0) {
                    if (param_2 != NULL) {
                        ipc_log_string(param_2[0xdc],"%s: ipa ready timeout","gsi_bind");
                        _printk(0x8001cc7,"gsi_bind");
                    }
                    iVar6 = -0x6e;
                    *(param_2 + 0x72d) = 1;
                    goto code_r0x0800a988;
                }
            }
            *(param_2 + 0x45) = 0;
        }
        param_2[0x3f] = sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar6 = ipa_usb_init_teth_prot
                          (*(param_2 + 0x1b),param_2 + 0x40,
                           sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,param_2);
        if (iVar6 != 0) {
            if (param_2 != NULL) {
                ipc_log_string(param_2[0xdc],"%s: failed to init teth prot(%d) with err:%d","gsi_bind",
                               *(param_2 + 0x1b),iVar6);
                _printk(0x8001e8e,"gsi_bind",*(param_2 + 0x1b),iVar6);
            }
            goto code_r0x0800a988;
        }
        *(param_2 + 0x59) = 1;
    }
code_r0x0800a990:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_70) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x0800abb0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x800abb4);
    (*pcVar5)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x080047b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rndis_msg_parser.cfi_jt @ 0x080047b8 (size 8) =====

void sym.rndis_msg_parser.cfi_jt(int64_t param_1,uint *param_2)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    uint uVar3;
    int64_t *piVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    ulong uVar11;
    int iVar12;
    int *piVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong uVar16;
    uint32_t uVar17;
    uint *puVar18;
    int iVar19;
    uint *puVar20;
    int iVar21;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t *piVar22;
    ulong *puVar23;
    ulong *puVar24;
    int64_t iVar25;
    int64_t iVar26;
    ulong unaff_x30;
    ulong uStack_128;
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
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar26 = sp_el0;
    iStack_68 = *(iVar26 + 0x5e0);
    if (param_2 == NULL) goto code_r0x0800d4b4;
    if (param_1 == 0) goto code_r0x0800d544;
    uVar3 = param_2[1];
    unaff_x19 = param_1;
    switch(*param_2) {
    case 2:
        *(param_1 + 8) = 1;
        if (*(param_1 + 0x28) != 0) {
            piVar14 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xa20,0x54,uVar3);
            if (piVar14 != NULL) {
                piVar14[2] = piVar14 + 4;
                piVar14[3] = 0x34;
                _raw_spin_lock(param_1 + 0x60);
                puVar23 = *(param_1 + 0x58);
                uVar15 = __list_add_valid(piVar14,puVar23,param_1 + 0x50);
                if ((uVar15 & 1) != 0) {
                    *(param_1 + 0x58) = piVar14;
                    *piVar14 = param_1 + 0x50;
                    piVar14[1] = puVar23;
                    *puVar23 = piVar14;
                }
                _raw_spin_unlock(param_1 + 0x60);
                puVar23 = piVar14[2];
                *puVar23 = 0x3480000002;
                uVar3 = param_2[2];
                *(puVar23 + 0xc) = 0x100000000;
                *(puVar23 + 0x14) = 0x100000000;
                *(puVar23 + 0x1c) = 0x100000000;
                *(puVar23 + 1) = uVar3;
                iVar12 = *(*(param_1 + 0x28) + 0xd8);
                puVar23[5] = 0;
                *(puVar23 + 6) = 0;
                *(puVar23 + 0x24) = iVar12 + 0x50;
                unaff_x20 = *(param_1 + 0x40);
                if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
                uVar16 = 0x8000fe0;
                goto code_r0x0800d80c;
            }
            break;
        }
        goto code_r0x0800d544;
    case 3:
        *(param_1 + 8) = 0;
        uVar16 = 0;
        if (*(param_1 + 0x28) != 0) {
            netif_carrier_off();
            puVar2 = *(*(param_1 + 0x28) + 0x3c0) + 0xd0;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                    *puVar2 = *puVar2 | 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto code_r0x0800d7c0;
            } while( true );
        }
        goto code_r0x0800d7c4;
    case 4:
        if (*(param_1 + 0x28) == 0) goto code_r0x0800d544;
        piVar14 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xa20,0xa8,uVar3);
        if (piVar14 == NULL) break;
        piVar14[2] = piVar14 + 4;
        piVar14[3] = 0x88;
        _raw_spin_lock(param_1 + 0x60);
        puVar23 = *(param_1 + 0x58);
        uVar15 = __list_add_valid(piVar14,puVar23,param_1 + 0x50);
        if ((uVar15 & 1) != 0) {
            *(param_1 + 0x58) = piVar14;
            *piVar14 = param_1 + 0x50;
            piVar14[1] = puVar23;
            *puVar23 = piVar14;
        }
        _raw_spin_unlock(param_1 + 0x60);
        puVar20 = piVar14[2];
        *puVar20 = 0x80000004;
        puVar20[2] = param_2[2];
        iVar26 = piVar14[2];
        uStack_78 = 0;
        uStack_70 = 0;
        iVar12 = param_2[3];
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
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
        uStack_128 = 0;
        uStack_120 = 0;
        if (iVar26 == 0) {
code_r0x0800d780:
            puVar18 = puVar20 + 5;
            puVar20[1] = 0x18;
            *(puVar20 + 3) = 0xc00000bb;
            goto code_r0x0800d798;
        }
        puVar1 = iVar26 + 0x18;
        *(iVar26 + 0x14) = 0x10;
        piVar13 = dev_get_stats(*(param_1 + 0x28),&uStack_128);
        uVar10 = *0x8003bd8;
        uVar9 = *0x8003bd0;
        uVar16 = *0x8003bb8;
        if (0x20100 < iVar12) {
            if (iVar12 < 0x1010101) {
                switch(iVar12) {
                case 0x20101:
                    if (piVar13 != NULL) {
                        iVar12 = piVar13[10];
                        iVar19 = piVar13[0xe];
                        iVar21 = piVar13[2];
code_r0x0800d5f0:
                        uVar17 = iVar21 - (iVar12 + iVar19);
                        goto code_r0x0800d734;
                    }
                    break;
                case 0x20102:
                    if (piVar13 != NULL) {
                        iVar12 = piVar13[8];
                        iVar19 = piVar13[0xc];
                        iVar21 = *piVar13;
                        goto code_r0x0800d5f0;
                    }
                    break;
                case 0x20103:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 10);
code_r0x0800d634:
                        iVar12 = 4;
                        *puVar1 = uVar17;
                        goto code_r0x0800d73c;
                    }
                    break;
                case 0x20104:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 8);
                        goto code_r0x0800d634;
                    }
                    break;
                case 0x20105:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 0xc);
                        goto code_r0x0800d634;
                    }
                    break;
                default:
                    goto code_r0x0800d758;
                }
                goto code_r0x0800d770;
            }
            if (0x1020100 < iVar12) {
                if (iVar12 == 0x1020101) {
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 0x1a);
                        goto code_r0x0800d634;
                    }
                    goto code_r0x0800d770;
                }
                if (iVar12 != 0x1020102) {
                    iVar19 = 0x1020103;
                    goto code_r0x0800d648;
                }
                goto code_r0x0800d654;
            }
            switch(iVar12) {
            case 0x1010101:
            case 0x1010102:
                if (*(param_1 + 0x28) == 0) goto code_r0x0800d770;
                iVar12 = 6;
                uVar17 = **(param_1 + 0x18);
                *(iVar26 + 0x1c) = (*(param_1 + 0x18))[1];
                break;
            case 0x1010103:
                uVar17 = 0xe0000000;
                goto code_r0x0800d734;
            case 0x1010104:
                goto code_r0x0800d5bc;
            case 0x1010105:
                goto code_r0x0800d654;
            default:
                goto code_r0x0800d758;
            }
            goto code_r0x0800d738;
        }
        switch(iVar12) {
        case 0x10101:
            iVar12 = 0x70;
            *(iVar26 + 0x18) = _obj.oid_supported_list;
            *(iVar26 + 0x20) = uVar16;
            uVar8 = *0x8003bc8;
            uVar16 = *0x8003bc0;
            *(iVar26 + 0x38) = uVar9;
            *(iVar26 + 0x40) = uVar10;
            uVar11 = *0x8003bf8;
            uVar10 = *0x8003bf0;
            *(iVar26 + 0x28) = uVar16;
            *(iVar26 + 0x30) = uVar8;
            uVar9 = *0x8003be8;
            uVar16 = *0x8003be0;
            *(iVar26 + 0x58) = uVar10;
            *(iVar26 + 0x60) = uVar11;
            uVar8 = *0x8003c18;
            uVar10 = *0x8003c10;
            *(iVar26 + 0x48) = uVar16;
            *(iVar26 + 0x50) = uVar9;
            uVar9 = *0x8003c08;
            uVar16 = *0x8003c00;
            *(iVar26 + 0x78) = uVar10;
            *(iVar26 + 0x80) = uVar8;
            *(iVar26 + 0x68) = uVar16;
            *(iVar26 + 0x70) = uVar9;
            goto code_r0x0800d73c;
        case 0x10102:
            goto code_r0x0800d654;
        case 0x10103:
        case 0x10104:
            uVar17 = *(param_1 + 0xc);
            break;
        case 0x10105:
        case 0x10108:
        case 0x10109:
        case 0x1010f:
        case 0x10110:
        case 0x10112:
        case 0x10115:
code_r0x0800d758:
            _printk(0x8001a9b,"gen_ndis_query_resp",iVar12);
code_r0x0800d770:
            *(iVar26 + 0x10) = 0;
            *(piVar14 + 3) = 0x18;
            *(iVar26 + 4) = 0x18;
            goto code_r0x0800d780;
        case 0x10106:
        case 0x1010a:
        case 0x1010b:
            if (*(param_1 + 0x28) == 0) goto code_r0x0800d770;
            uVar17 = *(*(param_1 + 0x28) + 0xd8);
            break;
        case 0x10107:
            if (*(param_1 + 0x14) == 1) {
                uVar17 = 0;
            }
            else {
                uVar17 = *(param_1 + 0x10);
            }
            break;
        case 0x1010c:
            uVar17 = *(param_1 + 0x30);
            break;
        case 0x1010d:
            iVar25 = *(param_1 + 0x38);
            if (iVar25 == 0) goto code_r0x0800d654;
            iVar12 = strlen(iVar25);
            memcpy(puVar1,iVar25,iVar12);
            goto code_r0x0800d73c;
        case 0x1010e:
            uVar17 = **(param_1 + 0x20);
            break;
        case 0x10111:
            uVar17 = 0x616;
            break;
        case 0x10113:
            uVar17 = 0x12;
            break;
        case 0x10114:
            uVar17 = *(param_1 + 0x14);
            break;
        case 0x10116:
code_r0x0800d5bc:
            uVar17 = 1;
            break;
        default:
            iVar19 = 0x10202;
code_r0x0800d648:
            if (iVar12 != iVar19) goto code_r0x0800d758;
            goto code_r0x0800d654;
        }
code_r0x0800d734:
        iVar12 = 4;
code_r0x0800d738:
        *puVar1 = uVar17;
code_r0x0800d73c:
        puVar18 = puVar20 + 3;
        *(iVar26 + 0x10) = iVar12;
        *(piVar14 + 3) = iVar12 + 0x18;
        *(iVar26 + 4) = iVar12 + 0x18;
code_r0x0800d798:
        *puVar18 = 0;
        unaff_x20 = *(param_1 + 0x40);
        if (1 < (unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d)) goto code_r0x0800d804;
        goto code_r0x0800d7b8;
    case 5:
        unaff_x20 = param_2[4];
        uVar16 = 0xffffffea;
        if (0x616 < param_2[4]) goto code_r0x0800d7c4;
        uVar17 = param_2[5];
        if ((0x616 < uVar17) || (uVar17 - 0x60e < 0xfffff9ea)) goto code_r0x0800d7c4;
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30,uVar3);
        if (piVar14 != NULL) {
            piVar14[2] = piVar14 + 4;
            piVar14[3] = 0x10;
            _raw_spin_lock(param_1 + 0x60);
            puVar23 = *(param_1 + 0x58);
            uVar15 = __list_add_valid(piVar14,puVar23,param_1 + 0x50);
            if ((uVar15 & 1) != 0) {
                *(param_1 + 0x58) = piVar14;
                *piVar14 = param_1 + 0x50;
                piVar14[1] = puVar23;
                *puVar23 = piVar14;
            }
            _raw_spin_unlock(param_1 + 0x60);
            puVar20 = piVar14[2];
            *puVar20 = 0x80000005;
            puVar20[1] = 0x10;
            puVar20[2] = param_2[2];
            iVar12 = sym.gen_ndis_set_resp(param_1,param_2[3],param_2 + 2 + uVar17);
            uVar3 = 0;
            if (iVar12 != 0) {
                uVar3 = 0xc00000bb;
            }
            puVar20[3] = uVar3;
            unaff_x20 = *(param_1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001020;
            goto code_r0x0800d80c;
        }
        break;
    case 6:
        unaff_x20 = param_1 + 0x60;
        piVar14 = param_1 + 0x50;
        while( true ) {
            _raw_spin_lock(unaff_x20);
            piVar22 = piVar14;
            do {
                piVar22 = *piVar22;
                if (piVar22 == piVar14) {
                    _raw_spin_unlock(unaff_x20);
                    goto code_r0x0800d3f0;
                }
            } while (*(piVar22 + 0x1c) != 0);
            *(piVar22 + 0x1c) = 1;
            _raw_spin_unlock(unaff_x20);
            iVar26 = piVar22[2];
            if (iVar26 == 0) break;
            _raw_spin_lock(unaff_x20);
            piVar22 = *piVar14;
            while (piVar7 = piVar22, piVar7 != piVar14) {
                piVar22 = *piVar7;
                if (piVar7[2] == iVar26) {
                    uVar15 = __list_del_entry_valid(piVar7);
                    if ((uVar15 & 1) != 0) {
                        iVar25 = *piVar7;
                        piVar4 = piVar7[1];
                        *(iVar25 + 8) = piVar4;
                        *piVar4 = iVar25;
                    }
                    *piVar7 = -0x2152ffffffffff00;
                    piVar7[1] = -0x2152fffffffffede;
                    kfree(piVar7);
                }
            }
            _raw_spin_unlock(unaff_x20);
        }
code_r0x0800d3f0:
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        puVar23 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30);
        if (puVar23 != NULL) {
            puVar23[2] = puVar23 + 4;
            puVar23[3] = 0x10;
            _raw_spin_lock(unaff_x20);
            puVar24 = *(param_1 + 0x58);
            uVar15 = __list_add_valid(puVar23,puVar24,piVar14);
            if ((uVar15 & 1) != 0) {
                *(param_1 + 0x58) = puVar23;
                *puVar23 = piVar14;
                puVar23[1] = puVar24;
                *puVar24 = puVar23;
            }
            _raw_spin_unlock(unaff_x20);
            puVar20 = puVar23[2];
            *(puVar20 + 1) = 0x10;
            *puVar20 = 0x80000006;
            puVar20[3] = 1;
            unaff_x20 = *(param_1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001040;
            goto code_r0x0800d80c;
        }
        break;
    default:
        _printk(0x80012df,"rndis_msg_parser");
code_r0x0800d544:
        uVar16 = 0xfffffdf4;
        goto code_r0x0800d7c4;
    case 8:
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30,uVar3);
        if (piVar14 != NULL) {
            piVar14[2] = piVar14 + 4;
            piVar14[3] = 0x10;
            _raw_spin_lock(param_1 + 0x60);
            puVar23 = *(param_1 + 0x58);
            uVar15 = __list_add_valid(piVar14,puVar23,param_1 + 0x50);
            if ((uVar15 & 1) != 0) {
                *(param_1 + 0x58) = piVar14;
                *piVar14 = param_1 + 0x50;
                piVar14[1] = puVar23;
                *puVar23 = piVar14;
            }
            _raw_spin_unlock(param_1 + 0x60);
            puVar20 = piVar14[2];
            *puVar20 = 0x80000008;
            puVar20[1] = 0x10;
            puVar20[2] = param_2[2];
            puVar20[3] = 0;
            unaff_x20 = *(param_1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001060;
            goto code_r0x0800d80c;
        }
    }
code_r0x0800d4b4:
    uVar16 = 0xfffffff4;
    param_1 = unaff_x19;
code_r0x0800d7c4:
    while (iVar26 = sp_el0, *(iVar26 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar16);
code_r0x0800d804:
        uVar16 = 0x8001000;
code_r0x0800d80c:
        __cfi_slowpath_diag(0x4c550309df1cf4c1,unaff_x20,uVar16);
code_r0x0800d7b8:
        (*unaff_x20)(*(param_1 + 0x48));
code_r0x0800d7c0:
        uVar16 = 0;
    }
    return;
code_r0x0800d654:
    iVar12 = 4;
    *puVar1 = 0;
    goto code_r0x0800d73c;
}


// ===== sym.init_module.cfi_jt @ 0x080047c0 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar10 [16];
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar9 = 1;
    uStack_3c = 0;
    _segment.ehdr = alloc_workqueue("k_ipa_usb",0xe,1);
    if (_segment.ehdr == 0) {
        _printk(0x80011f9,"fgsi_init");
        uVar4 = 0xfffffff4;
    }
    else {
        __mutex_init(obj.inst_status,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(0x8000580,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(reloc.gsi_opts_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"&inst_status[i].gsi_lock",
                     obj.inst_status);
        __mutex_init(0x8000600,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(obj.gsi_ida,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(0x8000680,"&inst_status[i].gsi_lock",obj.inst_status);
        uVar4 = __class_create(obj.__this_module,"gsi_usb",obj.fgsi_init.__key.3);
        if (uVar4 < 0xfffffffffffff001) {
            uVar9 = 3;
            _segment.ehdr = uVar4;
            uVar2 = alloc_chrdev_region(&uStack_3c,0,3,"gsi_usb");
            if (uVar2 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,uStack_3c >> 0x14);
                _segment.ehdr = debugfs_create_dir("usb_gsi",0);
                if (_segment.ehdr != 0) {
                    debugfs_create_file("remote_wakeup_enable",0x180,_segment.ehdr,obj.inst_status,
                                        obj.fops_usb_gsi_rw);
                    debugfs_create_file("remote_wakeup_interval",0x180,_obj.debugfs,obj.inst_status,
                                        obj.fops_usb_gsi_rw_timer);
                    uVar9 = _obj.debugfs;
                    debugfs_create_bool("log_ctrl_packets",0x1a4,_obj.debugfs,0x80006d8);
                }
                uVar4 = usb_function_register(obj.inst_status);
                uVar4 = uVar4 & 0xffffffff;
            }
            else {
                uVar4 = uVar2;
                uVar9 = uVar4;
                _printk(0x8001acd,"fgsi_init",uVar4);
                class_destroy(_segment.ehdr);
                _segment.ehdr = 0;
            }
        }
        else {
            uVar9 = uVar4 & 0xffffffff;
            _segment.ehdr = 0;
            _printk(0x8001609,"fgsi_init",uVar9);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_write;
    pcStack_68 = sym.usb_gsi_rw_write;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    acStack_7c[0] = '\0';
    puStack_70 = &stack0xffffffffffffffd0;
    iVar5 = sym.get_connected_gsi();
    if (iVar5 != 0) {
        if (extraout_x1 == 0) {
            uVar6 = *(iVar5 + 0x6e0);
            pcVar8 = "%s: buffer is Null.\n";
        }
        else {
            iVar3 = kstrtou8_from_user(extraout_x1,uVar9,0,acStack_7c);
            if (iVar3 != 0) {
                ipc_log_string(*(iVar5 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_write",iVar3);
                _printk(0x8001629,"usb_gsi_rw_write",iVar3);
                goto code_r0x08004ce0;
            }
            if (*(iVar5 + 0x728) == (acStack_7c[0] != '\0')) {
                uVar6 = *(iVar5 + 0x6e0);
                if (acStack_7c[0] == '\0') {
                    pcVar8 = "%s: RW already disabled\n";
                }
                else {
                    pcVar8 = "%s: RW already enabled\n";
                }
            }
            else {
                *(iVar5 + 0x728) = acStack_7c[0] != '\0';
                iVar1 = _seq_lseek;
                if (acStack_7c[0] == '\0') {
                    del_timer_sync(iVar5 + 0x6f0);
                    uVar6 = *(iVar5 + 0x6e0);
                    pcVar8 = "%s: timer deleted\n";
                }
                else {
                    iVar7 = __msecs_to_jiffies(*(iVar5 + 0x72a));
                    mod_timer(iVar5 + 0x6f0,iVar7 + iVar1);
                    uVar6 = *(iVar5 + 0x6e0);
                    pcVar8 = "%s: timer initialized\n";
                }
            }
        }
        ipc_log_string(uVar6,pcVar8,"usb_gsi_rw_write");
    }
code_r0x08004ce0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar9;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.usb_gsi_rw_open;
    uVar9 = single_open(auVar10._8_8_,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar10._0_8_ + 0x2d8));
    return uVar9;
}


// ===== sym.rndis_get_next_response.cfi_jt @ 0x080047c8 (size 8) =====

ulong sym.rndis_get_next_response.cfi_jt(int64_t param_1,uint *param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
code_r0x0800cdbc:
        uVar2 = 0;
    }
    else {
        iVar1 = param_1 + 0x60;
        _raw_spin_lock(iVar1);
        piVar3 = param_1 + 0x50;
        do {
            piVar3 = *piVar3;
            if (piVar3 == param_1 + 0x50) {
                _raw_spin_unlock(iVar1);
                goto code_r0x0800cdbc;
            }
        } while (*(piVar3 + 0x1c) != 0);
        *(piVar3 + 0x1c) = 1;
        *param_2 = *(piVar3 + 3);
        _raw_spin_unlock(iVar1);
        uVar2 = piVar3[2];
    }
    return uVar2;
}


// ===== sym.rndis_add_hdr.cfi_jt @ 0x080047d0 (size 8) =====

void sym.rndis_add_hdr.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        puVar1 = skb_push(param_1,0x2c);
        *(puVar1 + 1) = 0;
        *(puVar1 + 3) = 0;
        *(puVar1 + 5) = 0;
        *(puVar1 + 7) = 0;
        *(puVar1 + 9) = 0;
        *puVar1 = 1;
        puVar1[1] = *(param_1 + 0x70);
        puVar1[2] = 0x24;
        puVar1[3] = *(param_1 + 0x70) + -0x2c;
    }
    return;
}


// ===== sym.ipa_work_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080047d8 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.ipa_work_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint uVar9;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    uVar9 = param_4 >> 0x20;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar5 = param_1 + 0x118;
    iStack_58 = *(iVar10 + 0x5e0);
    arg1 = param_1 + -0x110;
    iVar10 = param_1 + -0x238;
    iVar13 = *(param_1 + -0x50);
    auStack_5c[0] = 0;
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    if (*(param_1 + 0x114) == *(param_1 + 0x115)) {
        if (iVar10 == 0) {
            _raw_spin_unlock_irqrestore(iVar5,uVar4);
            uVar12 = 0;
            goto code_r0x080060b4;
        }
        ipc_log_string(*(param_1 + 0x4a8),"%s: event queue empty","read_event");
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        uVar12 = 0;
code_r0x08006070:
        uVar7 = uVar12;
        ipc_log_string(*(param_1 + 0x4a8),"%s: event = %x sm_state %x","ipa_work_handler",uVar7,*(param_1 + 0x90));
        uVar9 = uVar7 >> 0x20;
        if (iVar13 != 0) {
            bVar1 = false;
            goto joined_r0x080060c0;
        }
        ipc_log_string(*(param_1 + 0x4a8),"%s(): gadget is NULL.\n","ipa_work_handler");
        uVar4 = 0x8002d8b;
    }
    else {
        uVar12 = *(param_1 + 0x114) + 1 & 0x7f;
        *(param_1 + 0x114) = uVar12;
        uVar12 = *(arg1 + uVar12 + 0x1a4);
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        if (iVar10 != 0) goto code_r0x08006070;
code_r0x080060b4:
        if (iVar13 == 0) goto code_r0x08006a10;
        bVar1 = true;
joined_r0x080060c0:
        if ((iVar13 != -0x78) && (iVar13 = *(iVar13 + 0xd8), iVar13 != 0)) {
            switch(*(param_1 + 0x90)) {
            case 0:
                break;
            case 1:
                if (uVar12 == 3) {
                    if (*(param_1 + -0x130) == 0) {
                        if (!bVar1) {
                            ipc_log_string(*(param_1 + 0x4a8),"USB cable not connected\n");
                            _printk(0x80027c8);
                        }
                    }
                    else {
                        sym.usb_gadget_autopm_get(*(param_1 + -0x50));
                        if (bVar1) {
                            iVar3 = sym.gsi_ep_enable(iVar10);
                            if (iVar3 != 0) {
code_r0x08006120:
                                usb_composite_setup_continue(*(param_1 + -0x48));
                                iVar10 = *(param_1 + -0x50);
                                goto joined_r0x0800649c;
                            }
                        }
                        else {
                            uVar4 = *(iVar13 + 0x1f8);
                            ipc_log_string(*(param_1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                            uVar9 = uVar4 >> 0x20;
                            uVar12 = sym.gsi_ep_enable(iVar10);
                            if (uVar12 != 0) {
                                uVar11 = uVar12;
                                uVar7 = uVar11;
                                ipc_log_string(*(param_1 + 0x4a8),"%s:ep enable err %d","ipa_work_handler",uVar11);
                                uVar9 = uVar7 >> 0x20;
                                _printk(0x8001d4b,"ipa_work_handler",uVar11);
                                goto code_r0x08006120;
                            }
                        }
                        usb_composite_setup_continue(*(param_1 + -0x48));
                        if (*(param_1 + -0x160) == 0) {
                            iVar10 = *(param_1 + -0x50);
                            *(param_1 + 0x90) = 4;
                            goto joined_r0x0800649c;
                        }
                        iVar3 = sym.ipa_connect_channels(arg1);
                        if (iVar3 == 0) {
                            *(param_1 + 0x90) = 2;
                            if (!bVar1) {
                                uVar4 = *(param_1 + 0x4a8);
                                pcVar6 = "%s: ST_INIT_EVT_SET_ALT";
                                goto code_r0x080067c0;
                            }
                        }
                        else {
                            if (!bVar1) {
                                ipc_log_string(*(param_1 + 0x4a8),"%s: ipa_connect_channels failed\n",
                                               "ipa_work_handler");
                                _printk(0x800326c,"ipa_work_handler");
                            }
                            sym.ipa_data_path_disable(arg1);
                            if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            *(param_1 + 0x90) = 1;
                        }
                    }
                }
                break;
            case 2:
                if (uVar12 == 8) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1);
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(param_1 + 0x90) = 1;
                        if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(param_1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS_DIS","ipa_work_handler");
                            uVar4 = *(param_1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
                            pcVar6 = "%s: put_async1 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1);
                        if (iVar3 == 0) {
                            if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(param_1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS","ipa_work_handler");
                                uVar4 = *(param_1 + 0x4a8);
                                uVar8 = *(iVar13 + 0x1f8);
                                pcVar6 = "%s: put_async2 = %d";
                                goto code_r0x08006970;
                            }
                        }
                    }
                }
                else if (uVar12 == 7) {
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(param_1 + 0x90) = 1;
                    if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                        __pm_runtime_idle(iVar10,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_DIS","ipa_work_handler");
                        uVar4 = *(param_1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
                        pcVar6 = "%s: put_async3 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar12 == 4) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\b') {
                        if (!bVar1) {
                            uVar4 = *(param_1 + 0x4a8);
                            pcVar6 = "%s: ST_WAIT_IPARDY_EVT_SUSPEND";
                            goto code_r0x080067c0;
                        }
                    }
                    else {
                        sym.ipa_data_path_enable(arg1);
                        *(param_1 + 0x90) = 3;
                        if (!bVar1) {
                            uVar4 = *(param_1 + 0x4a8);
                            pcVar6 = "%s: ST_WAIT_IPARDY_EVT_IPARDY %d";
                            uVar8 = 1000;
                            goto code_r0x08006970;
                        }
                    }
                }
                break;
            case 3:
                if ((uVar12 & 0xfffffffd) == 5) {
                    uVar4 = _raw_spin_lock_irqsave(iVar5);
                    if (*(param_1 + 0x114) == *(param_1 + 0x115)) {
                        if (iVar10 != 0) {
                            ipc_log_string(*(param_1 + 0x4a8),"%s: event queue empty","peek_event");
                        }
                        _raw_spin_unlock_irqrestore(iVar5,uVar4);
                    }
                    else {
                        cVar2 = *(arg1 + (*(param_1 + 0x114) + 1 & 0x7f) + 0x1a4);
                        _raw_spin_unlock_irqrestore(iVar5,uVar4);
                        if (cVar2 == '\x06') {
                            sym.read_event(arg1);
                            if (!bVar1) {
                                uVar4 = *(param_1 + 0x4a8);
                                pcVar6 = "%s: NO_OP NRDY_RDY";
                                goto code_r0x080067c0;
                            }
                            break;
                        }
                    }
                    if (uVar12 == 5) {
                        if (!bVar1) {
                            ipc_log_string(*(param_1 + 0x4a8),"%s: ST_CON_HOST_NRDY\n","ipa_work_handler");
                        }
                        auStack_5c[0] = 1;
                        usb_gsi_ep_op(*arg1,auStack_5c,0xb);
                        sym.gsi_rndis_ipa_reset_trigger(arg1);
                        usb_gsi_ep_op(*arg1,0,6);
                        usb_gsi_ep_op(*(param_1 + -0x108),0,6);
                        sym.ipa_disconnect_channel(arg1);
                        *(param_1 + 0x90) = 4;
                        if (bVar1) {
code_r0x0800675c:
                            iVar10 = *(param_1 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        pcVar6 = "%s: ST_CON_EVT_HNRDY";
                    }
                    else {
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(param_1 + 0x90) = 1;
                        if (bVar1) goto code_r0x0800675c;
                        pcVar6 = "%s: ST_CON_EVT_DIS";
                    }
                    ipc_log_string(*(param_1 + 0x4a8),pcVar6,"ipa_work_handler");
                    if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                        __pm_runtime_idle(iVar10,5);
                    }
                    uVar4 = *(param_1 + 0x4a8);
                    uVar8 = *(iVar13 + 0x1f8);
                    pcVar6 = "%s: put_async4 = %d";
code_r0x08006970:
                    ipc_log_string(uVar4,pcVar6,"ipa_work_handler",uVar8);
                    uVar9 = uVar8 >> 0x20;
                }
                else if (uVar12 == 8) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1);
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(param_1 + 0x90) = 1;
                        if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(param_1 + 0x4a8),"%s: ST_CON_EVT_SUS_DIS","ipa_work_handler");
                            uVar4 = *(param_1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
                            pcVar6 = "%s: put_async5 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1);
                        if (iVar3 == 0) {
                            if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(param_1 + 0x4a8),"%s: ST_CON_EVT_SUS","ipa_work_handler");
                                uVar4 = *(param_1 + 0x4a8);
                                uVar8 = *(iVar13 + 0x1f8);
                                goto code_r0x080062fc;
                            }
                        }
                    }
                }
                break;
            case 4:
                if (uVar12 == 6) {
                    sym.usb_gadget_autopm_get(*(param_1 + -0x50));
                    if (!bVar1) {
                        uVar4 = *(iVar13 + 0x1f8);
                        ipc_log_string(*(param_1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                        uVar9 = uVar4 >> 0x20;
                        iVar3 = sym.ipa_connect_channels(arg1);
                        if (iVar3 != 0) {
                            ipc_log_string(*(param_1 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler");
                            _printk(0x800326c,"ipa_work_handler");
                            iVar10 = *(param_1 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        sym.ipa_data_path_enable(arg1);
                        uVar4 = *(param_1 + 0x4a8);
                        pcVar6 = "%s: ST_HOST_NRDY_EVT_HRDY_";
                        *(param_1 + 0x90) = 3;
                        goto code_r0x080067c0;
                    }
                    iVar3 = sym.ipa_connect_channels(arg1);
                    if (iVar3 == 0) {
                        sym.ipa_data_path_enable(arg1);
                        goto code_r0x0800636c;
                    }
                    goto code_r0x0800675c;
                }
                if (uVar12 == 7) {
                    sym.usb_gadget_autopm_get(*(param_1 + -0x50));
                    sym.ipa_data_path_disable(arg1);
                    *(param_1 + 0x90) = 1;
                    if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                        __pm_runtime_idle(iVar10,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_HOST_NRDY_EVT_DIS","ipa_work_handler");
                        uVar4 = *(param_1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
                        pcVar6 = "%s: put_async = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            default:
                if (!bVar1) {
                    uVar4 = *(param_1 + 0x4a8);
                    pcVar6 = "%s: Invalid state to SM";
code_r0x080067c0:
                    ipc_log_string(uVar4,pcVar6,"ipa_work_handler");
                }
                break;
            case 6:
                if (uVar12 == 7) {
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(param_1 + 0x90) = 1;
                    if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                        __pm_runtime_idle(iVar10,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_DIS","ipa_work_handler");
                        uVar4 = *(param_1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
                        pcVar6 = "%s: put_async7 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar12 == 10) {
                    sym.ipa_resume_work_handler(arg1);
                    *(param_1 + 0x90) = 3;
                    sym.usb_gadget_autopm_get_noresume(*(param_1 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_RES","ipa_work_handler");
                        uVar4 = *(param_1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
                        pcVar6 = "%s: get_nores1 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar12 == 9) {
                    *(param_1 + 0x90) = 7;
                    if ((*(param_1 + -0x50) != 0) && (iVar10 = *(*(param_1 + -0x50) + 0xd8), iVar10 != 0)) {
                        __pm_runtime_idle(iVar10,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_IPA_SUS","ipa_work_handler");
                        uVar4 = *(param_1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
code_r0x080062fc:
                        pcVar6 = "%s: put_async6 = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            case 7:
                if (uVar12 == 7) {
                    sym.usb_gadget_autopm_get(*(param_1 + -0x50));
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(param_1 + 0x90) = 1;
                    if (bVar1) goto code_r0x0800675c;
                    ipc_log_string(*(param_1 + 0x4a8),"%s: ST_SUS_EVT_DIS","ipa_work_handler");
                    iVar10 = *(param_1 + -0x50);
joined_r0x0800649c:
                    if ((iVar10 != 0) && (*(iVar10 + 0xd8) != 0)) {
                        __pm_runtime_idle(*(iVar10 + 0xd8),5);
                    }
                }
                else if (uVar12 == 10) {
                    sym.usb_gadget_autopm_get(*(param_1 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: ST_SUS_EVT_RES","ipa_work_handler");
                        uVar4 = *(iVar13 + 0x1f8);
                        ipc_log_string(*(param_1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                        uVar9 = uVar4 >> 0x20;
                    }
                    sym.ipa_resume_work_handler(arg1);
code_r0x0800636c:
                    *(param_1 + 0x90) = 3;
                }
            }
            uVar4 = _raw_spin_lock_irqsave(iVar5);
            if (*(param_1 + 0x114) == *(param_1 + 0x115)) {
                if (!bVar1) {
                    ipc_log_string(*(param_1 + 0x4a8),"%s: event queue empty","peek_event");
                }
                _raw_spin_unlock_irqrestore(iVar5,uVar4);
            }
            else {
                cVar2 = *(arg1 + (*(param_1 + 0x114) + 1 & 0x7f) + 0x1a4);
                _raw_spin_unlock_irqrestore(iVar5,uVar4);
                if (cVar2 != '\0') {
                    if (!bVar1) {
                        ipc_log_string(*(param_1 + 0x4a8),"%s: New events to process","ipa_work_handler");
                    }
                    uVar9 = 0;
                    queue_delayed_work_on(0x20,*(param_1 + 0x88),param_1,0);
                }
            }
            goto code_r0x08006a10;
        }
        if (bVar1) goto code_r0x08006a10;
        ipc_log_string(*(param_1 + 0x4a8),"%s(): dev or dev->parent is NULL.\n","ipa_work_handler");
        uVar4 = 0x8002440;
    }
    _printk(uVar4,"ipa_work_handler");
code_r0x08006a10:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    uVar4 = CONCAT44(uVar9,*CONCAT44(extraout_x8 >> 0x20,*extraout_x8));
    *extraout_x18 = 0x8006b20;
    iVar10 = iVar5 + -0x6f0;
    if (*(iVar5 + -0x5e8) == 0) {
        if (iVar10 != 0) {
            ipc_log_string(*(iVar5 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func",uVar4);
        }
        *(iVar5 + 0x38) = 0;
    }
    else {
        if (iVar10 == 0) {
            sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return;
            }
        }
        else {
            ipc_log_string(*(iVar5 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func",uVar4);
            sym.gsi_wakeup_host(iVar10);
            if (*(iVar5 + 0x38) == '\0') {
                return;
            }
            ipc_log_string(*(iVar5 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar10 = _seq_lseek;
        iVar13 = __msecs_to_jiffies(*(iVar5 + 0x3a));
        mod_timer(iVar5,iVar13 + iVar10);
    }
    return;
}


// ===== sym.gsi_info_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080047e0 (size 8) =====

int64_t sym.gsi_info_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0xb8);
    iVar3 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x1000);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if ((iVar6 == 0) || (*(iVar6 + 0x108) == 0)) {
            uVar1 = 0;
        }
        else {
            uVar1 = scnprintf(iVar3,0x1000,"Info: Prot_id:%d\n",*(iVar6 + 0xd8));
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%55s\n",0x8003174);
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10s\n","Ctrl Name: ",iVar6 + 0x5c0);
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Online: ",*(iVar6 + 0x66c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Open: ",*(iVar6 + 0x670));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Host to Modem: ",*(iVar6 + 0x6c4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Modem to Host: ",*(iVar6 + 0x6d0));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Cpd to Modem: ",*(iVar6 + 0x6c8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Cpd From Modem: ",*(iVar6 + 0x6cc));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Pkt Drops: ",*(iVar6 + 0x6d4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","==============");
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Protocol ID: ",*(iVar6 + 0xd8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","SM State: ",*(iVar6 + 0x2c8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN XferRscIndex: ",*(iVar6 + 0x214));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10d\n","IN Chnl Hdl: ",*(iVar6 + 0x20c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN Chnl Dbl Addr: ",*(iVar6 + 0x158));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN TRB Ring Len: ",*(iVar6 + 0x44c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN TRB Base Addr: ",*(iVar6 + 0x460));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","GEVENTCNTLO IN Addr: ",*(iVar6 + 0x440));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","DEPCMDLO IN Addr: ",*(iVar6 + 0x454));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN LastTRB Addr Off: ",*(iVar6 + 0x450));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN Buffer Size: ",*(iVar6 + 0x452));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN/DL Aggr Size: ",*(iVar6 + 0x5b4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","==============");
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT XferRscIndex: ",*(iVar6 + 0x218));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10d\n","OUT Channel Hdl: ",*(iVar6 + 0x210));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT Channel Dbl Addr: ",*(iVar6 + 0x1b0));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT TRB Ring Len: ",*(iVar6 + 0x564));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT TRB Base Addr: ",*(iVar6 + 0x578));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","GEVENTCNTLO OUT Addr: ",*(iVar6 + 0x558));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","DEPCMDLO OUT Addr: ",*(iVar6 + 0x56c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT LastTRB Addr Off: ",*(iVar6 + 0x568));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT Buffer Size: ",*(iVar6 + 0x56a));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT/UL Aggr Size: ",*(iVar6 + 0x5ac));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT/UL Packets to dev: ",*(iVar6 + 0x5b0))
            ;
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Net_ready_trigger:",*(iVar6 + 0x229));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","USB Bus Events");
            uVar4 = uVar1 + iVar2;
            iVar5 = 0;
            do {
                iVar2 = scnprintf(iVar3 + uVar4,0x1000 - uVar4,0x800166e,*(iVar6 + 0x2cc + iVar5));
                iVar5 = iVar5 + 1;
                uVar1 = iVar2 + uVar4;
                uVar4 = uVar1;
            } while (iVar5 != 0x80);
            iVar2 = scnprintf(iVar3 + uVar4,0x1000 - uVar4,0x8002b67);
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Eventq head: ",*(iVar6 + 0x34c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Eventq tail: ",*(iVar6 + 0x34d));
            uVar1 = iVar2 + uVar1;
            if (0xfff < uVar1) {
                uVar1 = 0x1000;
            }
        }
        iVar2 = scnprintf(param_2,uVar1,iVar3);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.gsi_rndis_class_id_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080047e8 (size 8) =====

int64_t sym.gsi_rndis_class_id_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_2,0x1000,0x800254e,*(*(param_1 + 0xb8) + 0x110));
    return iVar1;
}


// ===== sym.gsi_get_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080047f0 (size 8) =====

uint64_t sym.gsi_get_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    if ((*(param_1 + 0xdc) != param_2) && ((4 < *(param_1 + 0xd8) || ((1 << (*(param_1 + 0xd8) & 0x1f) & 0x15U) == 0))))
    {
        if (*(param_1 + 0xe0) == param_2) {
            return *(param_1 + 0x10c);
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.rndis_set_param_medium.cfi_jt @ 0x080047f8 (size 8) =====

ulong sym.rndis_set_param_medium.cfi_jt(int64_t param_1,uint param_2,uint param_3)

{
    if (param_1 != 0) {
        *(param_1 + 0xc) = param_2;
        *(param_1 + 0x10) = param_3;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.gsi_opts_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004800 (size 8) =====

void sym.gsi_opts_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xb8);
    if (puVar1 != NULL) {
        ipc_log_string(puVar1[0xdc],"%s: releasing %s instance\n","gsi_opts_release",*puVar1);
    }
    usb_put_function_instance(param_1);
    return;
}


// ===== sym.rndis_set_param_vendor.cfi_jt @ 0x08004808 (size 8) =====

ulong sym.rndis_set_param_vendor.cfi_jt(int64_t param_1,uint param_2,int64_t param_3)

{
    ulong uVar1;
    
    uVar1 = 0xffffffff;
    if ((param_1 != 0) && (param_3 != 0)) {
        uVar1 = 0;
        *(param_1 + 0x30) = param_2;
        *(param_1 + 0x38) = param_3;
    }
    return uVar1;
}


// ===== sym.gsi_ctrl_dev_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004810 (size 8) =====

uint sym.gsi_ctrl_dev_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    code cVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint uVar4;
    uint64_t uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = **(param_1 + 0xd8);
    if (6 < **(param_1 + 0xd8)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8008954);
        (*pcVar6)();
    }
    mutex_lock(obj.inst_status + uVar5 * 0x40);
    if ((uVar5 << 6 | 0x30) < 0x181) {
        cVar1 = obj.gsi_func_type[uVar5 * 0x40];
        mutex_unlock(obj.inst_status + uVar5 * 0x40);
        if (cVar1 == 0x0) {
            iVar2 = ___ratelimit(obj.gsi_ctrl_dev_poll._rs,"gsi_ctrl_dev_poll");
            if (iVar2 != 0) {
                _printk(0x800180c,"gsi_ctrl_dev_poll");
                return 0x10;
            }
        }
        else {
            if (0x180 < (uVar5 * 0x40 | 0x38)) goto code_r0x0800894c;
            iVar7 = *(*(uVar5 * 0x40 + 0x8000578) + 0xb8);
            if (iVar7 + 0x5c0 != 0) {
                if (((param_2 != NULL) && (iVar7 + 0x678 != 0)) && (pcVar6 = *param_2, pcVar6 != NULL)) {
                    __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000fa0);
                    (*pcVar6)(param_1,iVar7 + 0x678,param_2);
                }
                uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x6b8);
                if (iVar7 + 0x690 == *(iVar7 + 0x690)) {
                    uVar4 = 0;
                }
                else {
                    if (iVar7 != 0) {
                        ipc_log_string(*(iVar7 + 0x6e0),"%s sets POLLIN for %s","gsi_ctrl_dev_poll",iVar7 + 0x5c0);
                    }
                    uVar4 = 0x41;
                }
                _raw_spin_unlock_irqrestore(iVar7 + 0x6b8,uVar3);
                return uVar4;
            }
            if (iVar7 != 0) {
                ipc_log_string(*(iVar7 + 0x6e0),"%s: gsi ctrl port %pK","gsi_ctrl_dev_poll",0);
                _printk(0x80019fb,"gsi_ctrl_dev_poll",0);
                return 0x10;
            }
        }
        return 0x10;
    }
code_r0x0800894c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8008950);
    (*pcVar6)();
}


// ===== sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004818 (size 8) =====

ulong sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    char *pcVar10;
    int iVar11;
    ulong *in_x18;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        return 0xffffffea;
    }
    iVar1 = param_2 + 0x234;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (param_1 == 2) {
        uVar6 = _raw_spin_lock_irqsave(param_2 + 0x350);
        uVar4 = *(param_2 + 0x34d) + 1 & 0x7f;
        *(param_2 + 0x34d) = uVar4;
        if (uVar4 == *(param_2 + 0x34c)) {
            ipc_log_string(*(param_2 + 0x6e0),"%s: event queue overflow error","post_event");
            _printk(0x800273c,"post_event");
        }
        else {
            *(param_2 + 0x128 + uVar4 + 0x1a4) = 9;
        }
        _raw_spin_unlock_irqrestore(param_2 + 0x350,uVar6);
    }
    else {
        if (param_1 == 1) {
            sym.gsi_wakeup_host(param_2);
            goto code_r0x0800bedc;
        }
        if (param_1 != 0) goto code_r0x0800bedc;
        if (*(param_2 + 0x229) != '\0') {
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            ipc_log_string(*(param_2 + 0x6e0),"%s: Already triggered","ipa_usb_notify_cb");
            return 1;
        }
        ipc_log_string(*(param_2 + 0x6e0),"%s: Set net_ready_trigger","ipa_usb_notify_cb");
        _printk(0x8003309,"ipa_usb_notify_cb");
        iVar11 = *(param_2 + 0xd8);
        *(param_2 + 0x229) = 1;
        if (iVar11 == 1) {
            uVar7 = sym.gsi_ctrl_pkt_alloc();
            if (0xfffffffffffff000 < uVar7) {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                uVar5 = *(param_2 + 0x6e0);
                pcVar10 = "%s: err cpkt_notify_connect\n";
code_r0x0800bfe0:
                ipc_log_string(uVar5,pcVar10,"ipa_usb_notify_cb");
                return 0xfffffff4;
            }
            *(uVar7 + 0xc) = 1;
            uVar8 = sym.gsi_ctrl_pkt_alloc();
            if (0xfffffffffffff000 < uVar8) {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                sym.gsi_ctrl_pkt_free(uVar7);
                uVar5 = *(param_2 + 0x6e0);
                pcVar10 = "%s: err cpkt_notify_speed\n";
                goto code_r0x0800bfe0;
            }
            *(uVar8 + 0xc) = 2;
            _raw_spin_lock(param_2 + 0x6b8);
            piVar12 = *(param_2 + 0x6a8);
            iVar2 = uVar7 + 0x10;
            iVar3 = param_2 + 0x6a0;
            uVar9 = __list_add_valid(iVar2,piVar12,iVar3);
            if ((uVar9 & 1) != 0) {
                *(param_2 + 0x6a8) = iVar2;
                *(uVar7 + 0x10) = iVar3;
                *(uVar7 + 0x18) = piVar12;
                *piVar12 = iVar2;
            }
            piVar12 = *(param_2 + 0x6a8);
            iVar2 = uVar8 + 0x10;
            uVar7 = __list_add_valid(iVar2,piVar12,iVar3);
            if ((uVar7 & 1) != 0) {
                *(param_2 + 0x6a8) = iVar2;
                *(uVar8 + 0x10) = iVar3;
                *(uVar8 + 0x18) = piVar12;
                *piVar12 = iVar2;
            }
            _raw_spin_unlock(param_2 + 0x6b8);
            sym.gsi_ctrl_send_notification(param_2);
            iVar11 = *(param_2 + 0xd8);
        }
        if (iVar11 == 0) goto code_r0x0800bedc;
        sym.post_event(param_2 + 0x128,4);
    }
    queue_delayed_work_on(0x20,*(param_2 + 0x2c0),param_2 + 0x238,0);
code_r0x0800bedc:
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return 1;
}


// ===== sym.gsi_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004820 (size 8) =====

uint64_t sym.gsi_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint16_t *param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    bool bVar11;
    uint32_t uVar12;
    int *arg2;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    uint32_t uVar15;
    ulong *puVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_6c = 0;
    uVar7 = param_2[2];
    uVar8 = param_2[1];
    piVar19 = *(*(param_1 + 0x30) + 0x30);
    uVar9 = param_2[3];
    uVar14 = uVar9;
    uVar12 = uVar9;
    puVar16 = piVar19[1];
    if (*(param_1 + 0x108) == 0) {
        if (param_1 == 0) {
            uVar18 = 0xffffff95;
        }
        else {
            ipc_log_string(*(param_1 + 0x6e0),"usb cable is not connected");
            uVar18 = 0xffffff95;
        }
        goto code_r0x0800b6dc;
    }
    uVar5 = *(param_1 + 0xdc);
    if (uVar5 == 0xffffffed) {
        uVar5 = *(param_1 + 0xe0);
    }
    uVar10 = (((*param_2 & 0xff00) << 0x10) >> 8 | *param_2 << 0x18) >> 0x10;
    uVar15 = uVar9;
    uVar17 = uVar7;
    if (uVar10 < 0x2186) {
        if (uVar10 < 0x2122) {
            if (uVar10 == 0x2100) {
                if (param_1 != 0) {
                    ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_SEND_ENCAPSULATED_COMMAND");
                }
                if ((uVar8 != 0) || (uVar5 != uVar17)) goto code_r0x0800b3f8;
                puVar16[7] = param_1;
                if (*(param_1 + 0xd8) == 0) {
                    puVar16[6] = sym.gsi_rndis_command_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                else {
                    puVar16[6] = sym.gsi_ctrl_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
            }
            else {
                if (uVar10 != 0x2105) {
code_r0x0800b3f8:
                    if (param_1 != 0) {
                        ipc_log_string(*(param_1 + 0x6e0),"inval ctrl req%02x.%02x v%04x i%04x l%d",*param_2,
                                       *(param_2 + 1),uVar8,uVar7,uVar14);
                        _printk(0x8003108,*param_2,*(param_2 + 1),uVar8,uVar7,uVar14);
                        uVar18 = 0xffffffa1;
                        goto code_r0x0800b6dc;
                    }
                    goto code_r0x0800b3fc;
                }
                if (param_1 != 0) {
                    ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_RESET_FUNCTION");
                }
                puVar16[6] = sym.gsi_ctrl_reset_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                puVar16[7] = param_1;
                uVar12 = 0;
            }
        }
        else if (uVar10 == 0x2122) {
            if (*(param_1 + 0xd8) == 2) {
                *(param_1 + 0x6e8) = uVar8 & 1;
            }
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"%s: USB_CDC_REQ_SET_CONTROL_LINE_STATE DTR:%d\n","gsi_setup");
            }
            sym.gsi_ctrl_send_cpkt_tomodem(param_1,0,0);
            uVar12 = 0;
        }
        else {
            if (((uVar10 != 0x2143) || (uVar15 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b3f8;
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"packet filter %02x",uVar8);
            }
            *(param_1 + 0x21e) = uVar8;
            uVar12 = 0;
        }
code_r0x0800b65c:
        if (param_1 != 0) goto code_r0x0800b664;
code_r0x0800b690:
        bVar11 = true;
    }
    else {
        if (uVar10 < 0xa180) {
            if (uVar10 != 0x2186) {
                if (uVar10 == 0xa101) {
                    if (param_1 != 0) {
                        ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_GET_ENCAPSULATED_RESPONSE");
                    }
                    if ((uVar8 == 0) && (uVar5 == uVar17)) {
                        if (*(param_1 + 0xd8) != 0) {
                            iVar1 = param_1 + 0x6b8;
                            _raw_spin_lock(iVar1);
                            puVar2 = param_1 + 0x6a0;
                            if (*puVar2 == puVar2) {
                                if (param_1 != 0) {
                                    ipc_log_string(*(param_1 + 0x6e0),"ctrl resp queue empty");
                                }
                                _raw_spin_unlock(iVar1);
                                uVar18 = 0xffffffa1;
                                goto code_r0x0800b6dc;
                            }
                            piVar20 = *puVar2;
                            uVar18 = __list_del_entry_valid(piVar20);
                            if ((uVar18 & 1) != 0) {
                                iVar3 = *piVar20;
                                piVar4 = piVar20[1];
                                *(iVar3 + 8) = piVar4;
                                *piVar4 = iVar3;
                            }
                            *piVar20 = -0x2152ffffffffff00;
                            piVar20[1] = -0x2152fffffffffede;
                            *(param_1 + 0x6d8) = *(param_1 + 0x6d8) + 1;
                            _raw_spin_unlock(iVar1);
                            uVar12 = uVar15;
                            if (*(piVar20 + -1) <= uVar9) {
                                uVar12 = *(piVar20 + -1);
                            }
                            memcpy(*puVar16,piVar20[-2],uVar12);
                            sym.gsi_ctrl_pkt_free(piVar20 + -2);
                            puVar16[6] = sym.gsi_ctrl_send_response_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            puVar16[7] = param_1;
                            if (param_1 == 0) goto code_r0x0800b690;
                            ipc_log_string(*(param_1 + 0x6e0),"copied encap_resp %d bytes",uVar12);
                            uVar17 = uVar5;
                            goto code_r0x0800b664;
                        }
                        arg2 = sym.rndis_get_next_response(*(param_1 + 0x100),&uStack_6c);
                        if (arg2 == NULL) goto code_r0x0800b3fc;
                        if (*arg2 == -0x7ffffffe) {
                            if (param_1 == 0) {
                                arg2[8] = 0xf;
                                arg2[9] = arg2[9] * 0xf;
                            }
                            else {
                                ipc_log_string(*(param_1 + 0x6e0),"%s: max_pkt_per_xfer : %d","gsi_setup",0xf);
                                arg2[8] = 0xf;
                                arg2[9] = arg2[9] * 0xf;
                                ipc_log_string(*(param_1 + 0x6e0),"%s: pkt_alignment_factor : %d","gsi_setup",4);
                            }
                            arg2[10] = 4;
                        }
                        memcpy(*puVar16,arg2,uStack_6c);
                        sym.rndis_free_response(*(param_1 + 0x100),arg2);
                        uVar18 = uStack_6c;
                        uVar12 = uStack_6c;
                        if (uStack_6c < 0) goto code_r0x0800b6dc;
                        goto code_r0x0800b65c;
                    }
                }
                goto code_r0x0800b3f8;
            }
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_SET_NTB_INPUT_SIZE");
            }
            if ((uVar15 == 4) || (uVar15 == 8)) {
                uVar18 = 0xffffffa1;
                if ((uVar8 != 0) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
                *(puVar16 + 1) = uVar15;
                puVar16[6] = sym.gsi_ctrl_set_ntb_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                puVar16[7] = param_1;
                goto code_r0x0800b65c;
            }
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"wrong NTB length %d",uVar14);
                _printk(0x8001727,uVar14);
                uVar18 = 0xffffffa1;
                goto code_r0x0800b6dc;
            }
code_r0x0800b3fc:
            uVar18 = 0xffffffa1;
            goto code_r0x0800b6dc;
        }
        if (uVar10 == 0xa180) {
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_GET_NTB_PARAMETERS");
            }
            uVar18 = 0xffffffa1;
            if (((uVar15 == 0) || (uVar8 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
            uVar12 = uVar14;
            if (0x1b < uVar14) {
                uVar12 = 0x1c;
            }
            memcpy(*puVar16,obj.mbim_gsi_ntb_parameters,uVar12);
            goto code_r0x0800b65c;
        }
        if (uVar10 != 0xa185) goto code_r0x0800b3f8;
        if (param_1 != 0) {
            ipc_log_string(*(param_1 + 0x6e0),"USB_CDC_GET_NTB_INPUT_SIZE");
        }
        uVar18 = 0xffffffa1;
        if (((uVar15 < 4) || (uVar8 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
        **puVar16 = *(param_1 + 0x22c);
        if (param_1 == 0) {
            uVar12 = 4;
            goto code_r0x0800b690;
        }
        ipc_log_string(*(param_1 + 0x6e0),"Reply to host INPUT SIZE %d",*(param_1 + 0x22c));
        uVar12 = 4;
        uVar17 = uVar5;
code_r0x0800b664:
        ipc_log_string(*(param_1 + 0x6e0),"req%02x.%02x v%04x i%04x l%d",*param_2,*(param_2 + 1),uVar8,uVar17,
                       uVar14);
        bVar11 = false;
    }
    *(puVar16 + 1) = uVar12;
    *(puVar16 + 5) = *(puVar16 + 5) & 0xfff80000 | *(puVar16 + 5) & 0x3ffff | (uVar12 < uVar15) << 0x12;
    uVar12 = usb_ep_queue(*(*piVar19 + 0x40),puVar16,0xa20);
    uVar18 = uVar12;
    if (uVar12 < 0) {
        if (!bVar11) {
            ipc_log_string(*(param_1 + 0x6e0),"response on err %d",uVar18);
            _printk(0x800173d,uVar18);
        }
    }
    else {
        *(piVar19 + 0x94) = *(piVar19 + 0x94) | 1;
    }
code_r0x0800b6dc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar18;
    }
    puVar16 = __stack_chk_fail();
    *extraout_x18 = 0x800b748;
    *(puVar16 + 0x21) = 0;
    iVar6 = *(puVar16 + 0x1b);
    if (iVar6 == 0) {
        sym.rndis_uninit(puVar16[0x20]);
        iVar6 = *(puVar16 + 0x1b);
    }
    if (iVar6 == 2) {
        *(puVar16 + 0xdd) = 0;
        piVar19 = puVar16[0xcb];
    }
    else {
        piVar19 = puVar16[0xcb];
    }
    if ((piVar19 != NULL) && (*piVar19 != 0)) {
        usb_ep_disable();
        *puVar16[0xcb] = 0;
    }
    sym.gsi_ctrl_clear_cpkt_queues(puVar16);
    uVar18 = sym.gsi_ctrl_send_cpkt_tomodem(puVar16,0,0);
    *(puVar16 + 0xcd) = 0;
    if (*(puVar16 + 0x10c) == '\0') {
        if (puVar16 != NULL) {
            uVar18 = ipc_log_string(puVar16[0xdc],"%s: data intf is closed","gsi_disable");
        }
    }
    else {
        *(puVar16 + 0x10c) = 0;
        *(puVar16 + 0x72c) = 0;
        if (puVar16 != NULL) {
            ipc_log_string(puVar16[0xdc],"%s deactivated",*puVar16);
        }
        *(puVar16 + 0x229) = 0;
        uVar13 = _raw_spin_lock_irqsave(puVar16 + 0x6a);
        uVar12 = *(puVar16 + 0x34d) + 1 & 0x7f;
        *(puVar16 + 0x34d) = uVar12;
        if (uVar12 == *(puVar16 + 0x34c)) {
            if (puVar16 + 0x25 != 0x128) {
                ipc_log_string(puVar16[0xdc],"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(puVar16 + 0x25 + uVar12 + 0x1a4) = 7;
        }
        _raw_spin_unlock_irqrestore(puVar16 + 0x6a,uVar13);
        uVar18 = queue_delayed_work_on(0x20,puVar16[0x58],puVar16 + 0x47,0);
    }
    return uVar18;
}


// ===== sym.rndis_set_param_dev.cfi_jt @ 0x08004828 (size 8) =====

ulong sym.rndis_set_param_dev.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    if (param_2 == 0) {
        return 0xffffffea;
    }
    if (param_1 != 0) {
        *(param_1 + 0x20) = param_3;
        *(param_1 + 0x28) = param_2;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004830 (size 8) =====

ulong sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.get_connected_gsi();
    if (iVar1 != 0) {
        seq_printf(param_1,0x800254e,*(iVar1 + 0x728));
    }
    return 0;
}


// ===== sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004838 (size 8) =====

ulong sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.get_connected_gsi();
    if (iVar1 != 0) {
        seq_printf(param_1,"%ums\n",*(iVar1 + 0x72a));
    }
    return 0;
}


// ===== sym.seq_read.cfi_jt @ 0x08004840 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gsi_ctrl_dev_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004848 (size 8) =====

char * sym.gsi_ctrl_dev_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,char *param_3)

{
    ulong *puVar1;
    int64_t iVar2;
    code cVar3;
    char cVar4;
    code *pcVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong uVar11;
    char *arg2;
    ulong *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    uVar14 = **(param_1 + 0xd8);
    if (6 < **(param_1 + 0xd8)) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80083c8);
        (*pcVar5)();
    }
    arg2 = param_3;
    mutex_lock(obj.inst_status + uVar14 * 0x40);
    if ((uVar14 << 6 | 0x30) < 0x181) {
        cVar3 = obj.gsi_func_type[uVar14 * 0x40];
        mutex_unlock(obj.inst_status + uVar14 * 0x40);
        if (cVar3 == 0x0) {
            iVar7 = ___ratelimit(obj.gsi_ctrl_dev_read._rs,"gsi_ctrl_dev_read");
            if (iVar7 == 0) {
                pcVar13 = 0xffffffffffffffed;
            }
            else {
                _printk(0x800180c,"gsi_ctrl_dev_read");
                pcVar13 = 0xffffffffffffffed;
            }
        }
        else {
            if (0x180 < (uVar14 * 0x40 | 0x38)) goto code_r0x080083c0;
            iVar17 = *(*(uVar14 * 0x40 + 0x8000578) + 0xb8);
            if (iVar17 == -0x5c0) {
                ipc_log_string(*0x120,"%s: gsi ctrl port %pK","gsi_ctrl_dev_read",0);
                arg2 = NULL;
                _printk(0x80019fb,"gsi_ctrl_dev_read");
                pcVar13 = 0xffffffffffffffed;
            }
            else if (param_3 < 0x2001) {
                iVar10 = iVar17 + 0x6b8;
                uVar11 = _raw_spin_lock_irqsave(iVar10);
                puVar1 = iVar17 + 0x690;
                if (puVar1 == *puVar1) {
                    iVar2 = iVar17 + 0x678;
                    do {
                        if (iVar17 != 0) {
                            ipc_log_string(*(iVar17 + 0x6e0),"Requests list is empty. Wait.");
                        }
                        _raw_spin_unlock_irqrestore(iVar10,uVar11);
                        if (puVar1 == *puVar1) {
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 0;
                            uStack_80 = 0;
                            uStack_90 = 0;
                            init_wait_entry(&uStack_90,0);
                            arg2 = 0x1;
                            iVar8 = prepare_to_wait_event(iVar2,&uStack_90);
                            puVar12 = *puVar1;
                            while (puVar1 == puVar12) {
                                if (iVar8 != 0) {
                                    if (-1 < iVar8) goto code_r0x080081c4;
                                    if (iVar17 == 0) {
                                        pcVar13 = 0xfffffffffffffe00;
                                    }
                                    else {
                                        ipc_log_string(*(iVar17 + 0x6e0),"Waiting failed");
                                        _printk(0x8001407);
                                        pcVar13 = 0xfffffffffffffe00;
                                    }
                                    goto code_r0x08008380;
                                }
                                schedule();
                                arg2 = 0x1;
                                iVar8 = prepare_to_wait_event(iVar2,&uStack_90);
                                puVar12 = *puVar1;
                            }
                            finish_wait(iVar2,&uStack_90);
                        }
code_r0x080081c4:
                        if (iVar17 != 0) {
                            ipc_log_string(*(iVar17 + 0x6e0),"Received request packet");
                        }
                        uVar11 = _raw_spin_lock_irqsave(iVar10);
                    } while (puVar1 == *puVar1);
                }
                piVar15 = *puVar1;
                piVar9 = piVar15 + -2;
                uVar14 = __list_del_entry_valid(piVar15);
                if ((uVar14 & 1) != 0) {
                    iVar2 = *piVar15;
                    piVar16 = piVar15[1];
                    *(iVar2 + 8) = piVar16;
                    *piVar16 = iVar2;
                }
                *piVar15 = -0x2152ffffffffff00;
                piVar15[1] = -0x2152fffffffffede;
                _raw_spin_unlock_irqrestore(iVar10,uVar11);
                if (param_3 < piVar15[-1]) {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"cpkt size large:%d > buf size:%zu",piVar15[-1],param_3);
                        _printk(0x8002c6a,piVar15[-1]);
                        arg2 = param_3;
                    }
                    if (piVar9 == NULL) {
                        pcVar13 = 0xfffffffffffffff4;
                    }
                    else {
                        kfree(*piVar9);
                        kfree(piVar9);
                        pcVar13 = 0xfffffffffffffff4;
                    }
                }
                else {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"%s: cpkt size:%d","gsi_ctrl_dev_read");
                    }
                    if (*0x80006d8 != '\0') {
                        iVar7 = piVar15[-1];
                        if (0x1d < iVar7) {
                            iVar7 = 0x1e;
                        }
                        print_hex_dump(0x80036fb,"READ:",2,0x10,1,piVar15[-2],iVar7,0);
                    }
                    arg2 = piVar15[-1];
                    if (piVar15[-1] < 0) {
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(0x800,0x8008318);
                        (*pcVar5)();
                    }
                    auVar18 = __check_object_size(piVar15[-2],arg2,1);
                    uVar6 = sym._copy_to_user(param_2,auVar18,arg2);
                    if (uVar6 == 0) {
                        if (iVar17 != 0) {
                            arg2 = "gsi_ctrl_dev_read";
                            ipc_log_string(*(iVar17 + 0x6e0),"%s: copied %d bytes to user","gsi_ctrl_dev_read",
                                           piVar15[-1]);
                        }
                        pcVar13 = piVar15[-1];
                        *(iVar17 + 0x6c8) = *(iVar17 + 0x6c8) + 1;
                    }
                    else if (iVar17 == 0) {
                        pcVar13 = 0xfffffffffffffff2;
                    }
                    else {
                        arg2 = uVar6;
                        ipc_log_string(*(iVar17 + 0x6e0),"copy_to_user failed: err %d");
                        _printk(0x800267c,uVar6);
                        pcVar13 = 0xfffffffffffffff2;
                    }
                    if (piVar9 != NULL) {
                        kfree(*piVar9);
                        kfree(piVar9);
                    }
                    if (iVar17 != 0) {
                        arg2 = "gsi_ctrl_dev_read";
                        ipc_log_string(*(iVar17 + 0x6e0),"%s: Exit %zu","gsi_ctrl_dev_read",param_3);
                    }
                }
            }
            else if (iVar17 == 0) {
                pcVar13 = 0xffffffffffffffea;
            }
            else {
                ipc_log_string(*(iVar17 + 0x6e0),"Large buff size %zu, should be %d",param_3,0x2000);
                arg2 = 0x2000;
                _printk(0x8002ebd,param_3);
                pcVar13 = 0xffffffffffffffea;
            }
        }
code_r0x08008380:
        iVar17 = sp_el0;
        if (*(iVar17 + 0x5e0) == iStack_68) {
            return pcVar13;
        }
        auVar18 = __stack_chk_fail();
        *extraout_x18 = 0x80083cc;
        uVar6 = **(auVar18._0_8_ + 0xd8);
        uVar14 = uVar6;
        if (6 < uVar6) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8008774);
            (*pcVar5)();
        }
        if (uVar6 == 4) {
            return 0xffffffffffffffea;
        }
        mutex_lock(obj.inst_status + uVar14 * 0x40);
        if ((uVar14 << 6 | 0x30) < 0x181) {
            cVar3 = obj.gsi_func_type[uVar14 * 0x40];
            mutex_unlock(obj.inst_status + uVar14 * 0x40);
            if (cVar3 == 0x0) {
                iVar7 = ___ratelimit(obj.gsi_ctrl_dev_write._rs,"gsi_ctrl_dev_write");
                if (iVar7 != 0) {
                    _printk(0x800180c,"gsi_ctrl_dev_write");
                    return 0xffffffffffffffed;
                }
                return 0xffffffffffffffed;
            }
            if ((uVar14 * 0x40 | 0x38) < 0x181) {
                iVar17 = *(*(uVar14 * 0x40 + 0x8000578) + 0xb8);
                if (arg2 + -0x2001 < 0xffffffffffffe000) {
                    if (iVar17 == 0) {
                        return 0xffffffffffffffea;
                    }
                    ipc_log_string(*(iVar17 + 0x6e0),"error: ctrl pkt length %zu",arg2);
                    _printk(0x80016d8,arg2);
                    return 0xffffffffffffffea;
                }
                if (*(iVar17 + 0x108) == 0) {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"USB cable not connected\n");
                        _printk(0x80027c8);
                        return 0xffffffffffffff98;
                    }
                    return 0xffffffffffffff98;
                }
                if ((*(iVar17 + 0x114) != '\0') && (*(iVar17 + 0x115) == '\0')) {
                    *(iVar17 + 0x6d4) = *(iVar17 + 0x6d4) + 1;
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"drop ctrl pkt of len %zu",arg2);
                        _printk(0x8001e73,arg2);
                        return 0xffffffffffffffa1;
                    }
                    return 0xffffffffffffffa1;
                }
                iVar10 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar10 = 0x30;
                }
                piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x20);
                if (piVar9 != NULL) {
                    iVar10 = __kmalloc(arg2,0xcc0);
                    *piVar9 = iVar10;
                    if (iVar10 == 0) {
                        kfree(piVar9);
                    }
                    else {
                        *(piVar9 + 1) = arg2;
                        if (piVar9 < 0xfffffffffffff001) {
                            __check_object_size(iVar10,arg2,0);
                            iVar7 = sym._copy_from_user(iVar10,auVar18._8_8_,arg2);
                            if (iVar7 != 0) {
                                if (iVar17 != 0) {
                                    ipc_log_string(*(iVar17 + 0x6e0),"copy_from_user failed err:%d",iVar7);
                                    _printk(0x800239a,iVar7);
                                }
                                kfree(*piVar9);
                                kfree(piVar9);
                                return iVar7;
                            }
                            *(piVar9 + 0xc) = 4;
                            cVar4 = *0x80006d8;
                            *(iVar17 + 0x6cc) = *(iVar17 + 0x6cc) + 1;
                            if (cVar4 != '\0') {
                                pcVar13 = arg2;
                                if (0x1d < arg2) {
                                    pcVar13 = 0x1e;
                                }
                                print_hex_dump(0x80036fb,"WRITE:",2,0x10,1,*piVar9,pcVar13,0);
                            }
                            uVar11 = _raw_spin_lock_irqsave(iVar17 + 0x6b8);
                            piVar16 = *(iVar17 + 0x6a8);
                            piVar15 = piVar9 + 2;
                            uVar14 = __list_add_valid(piVar15,piVar16,iVar17 + 0x6a0);
                            if ((uVar14 & 1) != 0) {
                                *(iVar17 + 0x6a8) = piVar15;
                                piVar9[2] = iVar17 + 0x6a0;
                                piVar9[3] = piVar16;
                                *piVar16 = piVar15;
                            }
                            _raw_spin_unlock_irqrestore(iVar17 + 0x6b8,uVar11);
                            iVar7 = sym.gsi_ctrl_send_notification(iVar17);
                            if (iVar7 == 0) {
                                *(iVar17 + 0x6d0) = *(iVar17 + 0x6d0) + 1;
                            }
                            if (iVar17 != 0) {
                                ipc_log_string(*(iVar17 + 0x6e0),"Exit %zu",arg2);
                                return arg2;
                            }
                            return arg2;
                        }
                    }
                }
                if (iVar17 != 0) {
                    ipc_log_string(*(iVar17 + 0x6e0),"failed to allocate ctrl pkt");
                    _printk(0x8001952);
                }
                return 0xfffffffffffffff4;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(1,0x8008778);
        (*pcVar5)();
    }
code_r0x080083c0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80083c4);
    (*pcVar5)();
}


// ===== sym.gsi_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004850 (size 8) =====

ulong sym.gsi_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2,uint32_t param_3)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    uint64_t arg2;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uchar uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar9 = *(*(param_1 + 0x30) + 0x30);
    if (param_1 != 0) {
        ipc_log_string(*(param_1 + 0x6e0),"intf=%u, alt=%u",param_2,param_3);
    }
    if ((*(param_1 + 0xdc) == param_2) || (*(param_1 + 0xd8) == 2)) {
        if (param_3 != 0) {
            return 0xffffffea;
        }
        piVar5 = *(param_1 + 0x658);
        if (piVar5 == NULL) {
            return 0xffffffea;
        }
        if (*piVar5 != 0) {
            if (param_1 != 0) {
                ipc_log_string(*(param_1 + 0x6e0),"reset gsi control %d",param_2);
                piVar5 = *(param_1 + 0x658);
            }
            usb_ep_disable(piVar5);
            piVar5 = *(param_1 + 0x658);
        }
        iVar3 = config_ep_by_speed(*puVar9,param_1,piVar5);
        if (iVar3 != 0) {
            *(*(param_1 + 0x658) + 0x38) = 0;
            if (param_1 == 0) {
                return 0xffffffea;
            }
            ipc_log_string(*(param_1 + 0x6e0),"Config-fail notify ep %s: err %d",*(*(param_1 + 0x658) + 8),iVar3);
            iVar6 = *(param_1 + 0x658);
            uVar4 = 0x8002d30;
code_r0x0800adf4:
            _printk(uVar4,*(iVar6 + 8),iVar3);
            return 0xffffffea;
        }
        iVar3 = usb_ep_enable();
        if (iVar3 != 0) {
            if (param_1 == 0) {
                return 0xffffffea;
            }
            ipc_log_string(*(param_1 + 0x6e0),"usb ep#%s enable failed, err#%d",*(*(param_1 + 0x658) + 8),iVar3);
            iVar6 = *(param_1 + 0x658);
            uVar4 = 0x8002de3;
            goto code_r0x0800adf4;
        }
        **(param_1 + 0x658) = param_1;
    }
    if (*(param_1 + 0xe0) != param_2) {
        uVar4 = 0;
        goto code_r0x0800ae5c;
    }
    uVar1 = *(param_1 + 0xd8);
    piVar5 = param_1 + 0x128;
    *(param_1 + 0x229) = 0;
    if ((uVar1 < 5) && ((1 << (uVar1 & 0x1f) & 0x15U) != 0)) {
        if ((*piVar5 == NULL) || (**piVar5 != 0)) {
            param_3 = 0;
        }
        else {
            param_3 = 1;
        }
    }
    else if (1 < param_3) goto code_r0x0800af14;
    if (param_3 == *(param_1 + 0x10c)) {
        return 0;
    }
    piVar8 = *piVar5;
    if (piVar8 == NULL) {
        if (param_3 == 1) goto code_r0x0800aee4;
code_r0x0800af34:
        if ((*(param_1 + 0x130) != NULL) && (**(param_1 + 0x130) == 0)) goto code_r0x0800af4c;
        uVar4 = 0;
code_r0x0800b06c:
        bVar2 = param_3 != 0;
        *(param_1 + 0x10c) = bVar2;
        if (param_1 == 0) goto code_r0x0800ae5c;
    }
    else {
        if (*piVar8 != 0) {
            *(param_1 + 0x22c) = 0x4000;
        }
        if (param_3 == 1) {
            uVar7 = 2;
            if (uVar1 == 4) {
                uVar7 = 3;
            }
            *(param_1 + 0x16c) = uVar7;
code_r0x0800aee4:
            if (*(param_1 + 0x130) != 0) {
                *(param_1 + 0x1c4) = 1;
            }
            *(param_1 + 0x1e8) = *puVar9;
            *(param_1 + 0x1f0) = puVar9;
            if (uVar1 == 0) {
                sym.gsi_rndis_open(param_1);
                arg2 = sym.gsi_rndis_get_netdev();
                if (0xfffffffffffff000 < arg2) {
code_r0x0800af14:
                    if ((*(param_1 + 0x658) != NULL) && (**(param_1 + 0x658) != 0)) {
                        usb_ep_disable();
                    }
                    return 0xffffffea;
                }
                if (param_1 != 0) {
                    ipc_log_string(*(param_1 + 0x6e0),"RNDIS RX/TX early activation");
                }
                *(param_1 + 0x21e) = 0;
                sym.rndis_set_param_dev(*(param_1 + 0x100),arg2,param_1 + 0x21e);
                uVar1 = *(param_1 + 0xd8);
            }
            if (uVar1 == 1) {
                *(param_1 + 0x21e) = 0xf;
            }
            uVar4 = _raw_spin_lock_irqsave(param_1 + 0x350);
            uVar1 = *(param_1 + 0x34d) + 1 & 0x7f;
            *(param_1 + 0x34d) = uVar1;
            if (uVar1 == *(param_1 + 0x34c)) {
                if (piVar5 != 0x128) {
                    ipc_log_string(*(param_1 + 0x6e0),"%s: event queue overflow error","post_event");
                    _printk(0x800273c,"post_event");
                }
            }
            else {
                *(piVar5 + uVar1 + 0x1a4) = 3;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0x350,uVar4);
            queue_delayed_work_on(0x20,*(param_1 + 0x2c0),param_1 + 0x238,1);
            uVar4 = 0x7fff;
            goto code_r0x0800b06c;
        }
        if (*piVar8 != 0) goto code_r0x0800af34;
code_r0x0800af4c:
        sym.post_event(piVar5,7);
        queue_delayed_work_on(0x20,*(param_1 + 0x2c0),param_1 + 0x238,0);
        if (param_1 == 0) {
            uVar4 = 0;
            *0x10c = 0;
            goto code_r0x0800ae5c;
        }
        ipc_log_string(*(param_1 + 0x6e0),"%s: Disconnecting\n","gsi_set_alt");
        bVar2 = false;
        uVar4 = 0;
        *(param_1 + 0x10c) = 0;
    }
    ipc_log_string(*(param_1 + 0x6e0),"DATA_INTERFACE id = %d, status = %d",*(param_1 + 0xe0),bVar2);
code_r0x0800ae5c:
    *(param_1 + 0x108) = 1;
    if (*(param_1 + 0xd8) == 4) {
        sym.gsi_ctrl_send_cpkt_tomodem(param_1,0,0);
    }
    return uVar4;
}


// ===== sym.gsi_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004858 (size 8) =====

void sym.gsi_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        ipc_log_string(*(param_2 + 0x6e0),"%s:id:%d: dwq start","gsi_unbind",*(param_2 + 0xd8));
    }
    if (*(param_2 + 0x108) != 0) {
        sym.gsi_disable(param_2);
    }
    drain_workqueue(*(param_2 + 0x2c0));
    if (param_2 != 0) {
        ipc_log_string(*(param_2 + 0x6e0),"%s:id:%d: dwq end","gsi_unbind",*(param_2 + 0xd8));
    }
    ipa_usb_deinit_teth_prot(*(param_2 + 0xd8));
    obj.rndis_gsi_string_defs = 0x0;
    obj.ecm_gsi_string_defs = 0x0;
    obj.rmnet_gsi_string_defs = 0x0;
    obj.mbim_gsi_string_defs = 0x0;
    obj.qdss_gsi_string_defs = 0x0;
    if (*(param_2 + 0xd8) == 0) {
        *(param_2 + 0x2c8) = 0;
        sym.rndis_deregister(*(param_2 + 0x100));
    }
    usb_free_all_descriptors(param_2);
    if (*(param_2 + 0x658) != 0) {
        kfree(**(param_2 + 0x660));
        usb_ep_free_request(*(param_2 + 0x658),*(param_2 + 0x660));
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004860 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        destroy_workqueue();
    }
    usb_function_unregister(obj.inst_status);
    if (_segment.ehdr != 0) {
        unregister_chrdev_region(_segment.ehdr << 0x14,3);
        _segment.ehdr = 0;
    }
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    debugfs_remove(CONCAT44(*0x8000004,_segment.ehdr));
    return;
}


// ===== sym.gsi_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004868 (size 8) =====

ulong sym.gsi_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        iVar1 = 0x8003173;
        if (*param_1 != 0) {
            iVar1 = *param_1;
        }
        ipc_log_string(param_1[0xdc],"func susp %u cmd for %s",param_2 & 0xff,iVar1);
    }
    uVar2 = (param_2 & 0xff) >> 1 & 1;
    if ((param_2 & 1) == 0) {
        if (*(param_1 + 0x114) != '\0') {
            *(param_1 + 0x114) = 0;
            sym.gsi_resume(param_1);
        }
        *(param_1 + 0x115) = uVar2;
    }
    else {
        *(param_1 + 0x115) = uVar2;
        if (*(param_1 + 0x114) == '\0') {
            sym.gsi_suspend(param_1);
            *(param_1 + 0x114) = 1;
        }
    }
    return 0;
}


// ===== sym.rndis_deregister.cfi_jt @ 0x08004870 (size 8) =====

void sym.rndis_deregister.cfi_jt(uint *param_1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != NULL) {
        *in_x18 = unaff_x30;
        uVar1 = *param_1;
        kfree();
        ida_free(obj.rndis_ida,uVar1);
    }
    return;
}


// ===== sym.rndis_uninit.cfi_jt @ 0x08004878 (size 8) =====

void sym.rndis_uninit.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        iVar1 = param_1 + 0x60;
        piVar2 = param_1 + 0x50;
        *(param_1 + 8) = 0;
        while( true ) {
            _raw_spin_lock(iVar1);
            piVar7 = piVar2;
            do {
                piVar7 = *piVar7;
                if (piVar7 == piVar2) {
                    _raw_spin_unlock(iVar1);
                    return;
                }
            } while (*(piVar7 + 0x1c) != 0);
            *(piVar7 + 0x1c) = 1;
            _raw_spin_unlock(iVar1);
            iVar8 = piVar7[2];
            if (iVar8 == 0) break;
            _raw_spin_lock(iVar1);
            piVar7 = *piVar2;
            while (piVar5 = piVar7, piVar5 != piVar2) {
                piVar7 = *piVar5;
                if (piVar5[2] == iVar8) {
                    uVar6 = __list_del_entry_valid(piVar5);
                    if ((uVar6 & 1) != 0) {
                        iVar3 = *piVar5;
                        piVar4 = piVar5[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar5 = -0x2152ffffffffff00;
                    piVar5[1] = -0x2152fffffffffede;
                    kfree(piVar5);
                }
            }
            _raw_spin_unlock(iVar1);
        }
    }
    return;
}


// ===== sym.gsi_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004880 (size 8) =====

int64_t sym.gsi_alloc_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0xc0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.gsi_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar1 + 0xb0) = sym.gsi_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        config_group_init_type_name(iVar1,0x8003173,obj.gsi_func_type);
    }
    return iVar1;
}


// ===== sym.rndis_register.cfi_jt @ 0x08004888 (size 8) =====

int * sym.rndis_register.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    int *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        piVar2 = 0xffffffffffffffea;
    }
    else {
        iVar1 = ida_alloc_range(obj.rndis_ida,0,0xffffffff,0xcc0);
        if (iVar1 < 0) {
            piVar2 = 0xffffffffffffffed;
        }
        else {
            piVar2 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x68);
            if (piVar2 == NULL) {
                ida_free(obj.rndis_ida,iVar1);
                piVar2 = 0xfffffffffffffff4;
            }
            else {
                *piVar2 = iVar1;
                piVar2[2] = 0;
                *(piVar2 + 1) = 1;
                piVar2[5] = 1;
                *(piVar2 + 0x10) = param_1;
                *(piVar2 + 0x12) = param_2;
                *(piVar2 + 0x14) = piVar2 + 0x14;
                *(piVar2 + 0x16) = piVar2 + 0x14;
                piVar2[0x18] = 0;
            }
        }
    }
    return piVar2;
}


// ===== sym.rndis_set_host_mac.cfi_jt @ 0x08004890 (size 8) =====

void sym.rndis_set_host_mac.cfi_jt(int64_t param_1,ulong param_2)

{
    *(param_1 + 0x18) = param_2;
    return;
}


// ===== sym.__typeid__ZTSFvPvE_global_addr @ 0x08004898 (size 8) =====

void sym.__typeid__ZTSFvPvE_global_addr(int64_t param_1)

{
    char cVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = *0x72d;
    if (param_1 != 0) {
        ipc_log_string(*(param_1 + 0x6e0),"%s: ipa is ready\n","ipa_ready_callback");
        _printk(0x80027e3,"ipa_ready_callback");
        cVar1 = *(param_1 + 0x72d);
    }
    if (cVar1 == '\0') {
        *(param_1 + 0x228) = 1;
        __wake_up(param_1 + 0x358,1,1,0);
    }
    return;
}


// ===== sym.gsi_rndis_response_available.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048a0 (size 8) =====

void sym.gsi_rndis_response_available.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xb20,0x20);
    if (puVar3 != NULL) {
        *(puVar3 + 1) = 0;
        *puVar3 = 0x10;
        if (puVar3 < 0xfffffffffffff001) {
            *(puVar3 + 0xc) = 4;
            uVar4 = _raw_spin_lock_irqsave(param_1 + 0x6b8);
            puVar6 = *(param_1 + 0x6a8);
            puVar1 = puVar3 + 2;
            uVar5 = __list_add_valid(puVar1,puVar6,param_1 + 0x6a0);
            if ((uVar5 & 1) != 0) {
                *(param_1 + 0x6a8) = puVar1;
                puVar3[2] = param_1 + 0x6a0;
                puVar3[3] = puVar6;
                *puVar6 = puVar1;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0x6b8,uVar4);
            sym.gsi_ctrl_send_notification(param_1);
            return;
        }
    }
    if (param_1 != 0) {
        ipc_log_string(*(param_1 + 0x6e0),"%s: err allocating cpkt\n","gsi_rndis_response_available");
        _printk(0x80033fd,"gsi_rndis_response_available");
    }
    return;
}


// ===== sym.gsi_get_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048a8 (size 8) =====

ulong sym.gsi_get_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    return 0;
}


// ===== sym.gsi_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048b0 (size 8) =====

ulong sym.gsi_alloc.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0xb8);
    uVar1 = *(puVar3 + 0x1b);
    if (puVar3 != NULL) {
        ipc_log_string(puVar3[0xdc],"%s: prot id %d","gsi_bind_config",uVar1);
    }
    if (uVar1 < 5) {
        uVar2 = *(uVar1 * 8 + 0x8003ca0);
        *puVar3 = *(uVar1 * 8 + 0x8003c78);
        puVar3[1] = uVar2;
        puVar3[9] = sym.gsi_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[10] = sym.gsi_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xd] = sym.gsi_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xe] = sym.gsi_get_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xf] = sym.gsi_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x10] = sym.gsi_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xb] = sym.gsi_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x14] = sym.gsi_get_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x15] = sym.gsi_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x12] = sym.gsi_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x13] = sym.gsi_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        uVar2 = *(param_1 + 0xb8);
    }
    else {
        if (puVar3 != NULL) {
            ipc_log_string(puVar3[0xdc],"%s: invalid prot id %d","gsi_bind_config",uVar1);
            _printk(0x80012b4,"gsi_bind_config",uVar1);
        }
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080048b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gsi_rw_timer_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048c0 (size 8) =====

void sym.gsi_rw_timer_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_1 + -0x6f0;
    if (*(param_1 + -0x5e8) == 0) {
        if (iVar2 != 0) {
            ipc_log_string(*(param_1 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func");
        }
        *(param_1 + 0x38) = 0;
    }
    else {
        if (iVar2 == 0) {
            sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return;
            }
        }
        else {
            ipc_log_string(*(param_1 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func");
            sym.gsi_wakeup_host(iVar2);
            if (*(param_1 + 0x38) == '\0') {
                return;
            }
            ipc_log_string(*(param_1 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar2 = _seq_lseek;
        iVar1 = __msecs_to_jiffies(*(param_1 + 0x3a));
        mod_timer(param_1,iVar1 + iVar2);
    }
    return;
}


// ===== sym.gsi_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048c8 (size 8) =====

ulong sym.gsi_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(param_1 + 0x114) == '\0') {
        auStack_3c[0] = 1;
        usb_gsi_ep_op(*(param_1 + 0x128),auStack_3c,0xb);
        uVar3 = _raw_spin_lock_irqsave(param_1 + 0x350);
        uVar1 = *(param_1 + 0x34d) + 1 & 0x7f;
        *(param_1 + 0x34d) = uVar1;
        if (uVar1 == *(param_1 + 0x34c)) {
            if (param_1 + 0x128 != 0x128) {
                ipc_log_string(*(param_1 + 0x6e0),"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(param_1 + 0x128 + uVar1 + 0x1a4) = 8;
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x350,uVar3);
        uVar3 = queue_delayed_work_on(0x20,*(param_1 + 0x2c0),param_1 + 0x238,0);
        if (param_1 != 0) {
            uVar3 = ipc_log_string(*(param_1 + 0x6e0),"gsi suspended");
        }
    }
    else {
        uVar3 = 0;
        if (param_1 != 0) {
            uVar3 = ipc_log_string(*(param_1 + 0x6e0),"%s: func already suspended, return\n","gsi_suspend");
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.gsi_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048d0 (size 8) =====

void sym.gsi_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char *pcVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(param_1 + 0x30) + 0x30);
    if (param_1 != 0) {
        ipc_log_string(*(param_1 + 0x6e0),"%s for prot_id:%d","gsi_resume",*(param_1 + 0xd8));
    }
    iVar4 = *piVar6;
    if ((*(iVar4 + 0x58) < 5) || (*(param_1 + 0x114) == '\0')) {
        if ((*(param_1 + 0x658) != 0) && (*(*(param_1 + 0x658) + 0x38) == 0)) {
            config_ep_by_speed(iVar4,param_1);
        }
        sym.gsi_ctrl_send_notification(param_1);
        if (*(param_1 + 0xd8) == 0) {
            if (*(**(*(param_1 + 0x30) + 0x30) + 0x58) < 5) {
                bVar3 = true;
            }
            else {
                bVar3 = *(param_1 + 0x115) != '\0';
            }
            if (param_1 != 0) {
                pcVar2 = "true";
                if (!bVar3) {
                    pcVar2 = "false";
                }
                ipc_log_string(*(param_1 + 0x6e0),"%s: remote_wakeup_allowed:%s","usb_gsi_remote_wakeup_allowed",
                               pcVar2);
            }
            if (((!bVar3) && (*(param_1 + 0x72c) != '\0')) && (iVar4 = *(param_1 + 0x100), iVar4 != 0)) {
                if (*(iVar4 + 8) != 2) {
                    sym.gsi_rndis_flow_ctrl_enable(0,iVar4);
                    iVar4 = *(param_1 + 0x100);
                }
                *(iVar4 + 8) = 2;
            }
        }
        uVar5 = _raw_spin_lock_irqsave(param_1 + 0x350);
        uVar1 = *(param_1 + 0x34d) + 1 & 0x7f;
        *(param_1 + 0x34d) = uVar1;
        if (uVar1 == *(param_1 + 0x34c)) {
            if (param_1 + 0x128 != 0x128) {
                ipc_log_string(*(param_1 + 0x6e0),"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(param_1 + 0x128 + uVar1 + 0x1a4) = 10;
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x350,uVar5);
        queue_delayed_work_on(0x20,*(param_1 + 0x2c0),param_1 + 0x238,0);
        if (param_1 != 0) {
            ipc_log_string(*(param_1 + 0x6e0),"%s: for prot_id:%d completed","gsi_resume",*(param_1 + 0xd8));
        }
    }
    return;
}


// ===== sym.gsi_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048d8 (size 8) =====

void sym.gsi_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong *param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x21) = 0;
    iVar2 = *(param_1 + 0x1b);
    if (iVar2 == 0) {
        sym.rndis_uninit(param_1[0x20]);
        iVar2 = *(param_1 + 0x1b);
    }
    if (iVar2 == 2) {
        *(param_1 + 0xdd) = 0;
        piVar3 = param_1[0xcb];
    }
    else {
        piVar3 = param_1[0xcb];
    }
    if ((piVar3 != NULL) && (*piVar3 != 0)) {
        usb_ep_disable();
        *param_1[0xcb] = 0;
    }
    sym.gsi_ctrl_clear_cpkt_queues(param_1);
    sym.gsi_ctrl_send_cpkt_tomodem(param_1,0,0);
    *(param_1 + 0xcd) = 0;
    if (*(param_1 + 0x10c) == '\0') {
        if (param_1 != NULL) {
            ipc_log_string(param_1[0xdc],"%s: data intf is closed","gsi_disable");
        }
    }
    else {
        *(param_1 + 0x10c) = 0;
        *(param_1 + 0x72c) = 0;
        if (param_1 != NULL) {
            ipc_log_string(param_1[0xdc],"%s deactivated",*param_1);
        }
        *(param_1 + 0x229) = 0;
        uVar4 = _raw_spin_lock_irqsave(param_1 + 0x6a);
        uVar1 = *(param_1 + 0x34d) + 1 & 0x7f;
        *(param_1 + 0x34d) = uVar1;
        if (uVar1 == *(param_1 + 0x34c)) {
            if (param_1 + 0x25 != 0x128) {
                ipc_log_string(param_1[0xdc],"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(param_1 + 0x25 + uVar1 + 0x1a4) = 7;
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x6a,uVar4);
        queue_delayed_work_on(0x20,param_1[0x58],param_1 + 0x47,0);
    }
    return;
}


// ===== sym.gsi_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048e0 (size 8) =====

void sym.gsi_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    return;
}


// ===== sym.gsi_ctrl_dev_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048e8 (size 8) =====

int64_t sym.gsi_ctrl_dev_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    code cVar5;
    int64_t *piVar6;
    code *pcVar7;
    uint uVar8;
    int iVar9;
    ulong uVar10;
    ulong *puVar11;
    char *pcVar12;
    int64_t iVar13;
    uint *extraout_x8;
    uint uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    int iVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    int64_t iVar19;
    int64_t *piVar20;
    ulong *puVar21;
    int64_t *piVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint32_t uStack_7c;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar17 = **(param_1 + 0xd8);
    if (6 < **(param_1 + 0xd8)) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8009084);
        (*pcVar7)();
    }
    mutex_lock(obj.inst_status + uVar17 * 0x40);
    if (0x180 < (uVar17 << 6 | 0x30)) {
code_r0x0800907c:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x8009080);
        (*pcVar7)();
    }
    cVar5 = obj.gsi_func_type[uVar17 * 0x40];
    auVar23 = mutex_unlock(obj.inst_status + uVar17 * 0x40);
    if (cVar5 == 0x0) {
        iVar9 = ___ratelimit(obj.major,"gsi_ctrl_dev_ioctl");
        if (iVar9 == 0) {
            iVar19 = -0x13;
        }
        else {
            _printk(0x800180c,"gsi_ctrl_dev_ioctl");
            iVar19 = -0x13;
        }
        goto code_r0x08008f80;
    }
    if (0x180 < (uVar17 * 0x40 | 0x38)) goto code_r0x0800907c;
    iVar15 = *(*(uVar17 * 0x40 + 0x8000578) + 0xb8);
    if (*(iVar15 + 0x108) == 0) {
        if (iVar15 == 0) {
            iVar19 = -0x68;
        }
        else {
            ipc_log_string(*(iVar15 + 0x6e0),"USB cable not connected\n");
            _printk(0x80027c8);
            iVar19 = -0x68;
        }
        goto code_r0x08008f80;
    }
    if (param_2 < -0x7fef8dfd) {
        if (param_2 < -0x7ffb8dfe) {
            if (param_2 == -0x7ffd90fd) {
                iVar9 = sym._copy_to_user(param_3,auVar23,2);
                if (iVar9 == 0) {
                    iVar19 = 0;
                    if (iVar15 != 0) goto code_r0x08008ef4;
                }
                else {
                    iVar19 = -0xe00000000;
                    if (iVar15 != 0) {
                        ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail DATAGRAM");
                        _printk(0x8002295);
code_r0x08008ef4:
                        ipc_log_string(*(iVar15 + 0x6e0),"Sent NTB datagrams count %d",*(iVar15 + 0x230));
                    }
                }
            }
            else {
                if (param_2 != -0x7ffb90fe) goto code_r0x08008ccc;
                iVar9 = sym._copy_to_user(param_3,auVar23,4);
                if (iVar9 == 0) {
                    iVar19 = 0;
                    if (iVar15 != 0) goto code_r0x08008ed4;
                }
                else {
                    iVar19 = -0xe00000000;
                    if (iVar15 != 0) {
                        ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user failNTB_SIZE");
                        _printk(0x80023b9);
code_r0x08008ed4:
                        ipc_log_string(*(iVar15 + 0x6e0),"Sent NTB size %d",*(iVar15 + 0x22c));
                    }
                }
            }
        }
        else if (param_2 == -0x7ffb8dfe) {
            uStack_7c = *(iVar15 + 0x108);
            if (*(iVar15 + 0xd8) == 2) {
                uStack_7c = *(iVar15 + 0x6e8);
            }
            iVar9 = sym._copy_to_user(param_3,auVar23,4);
            if (iVar9 == 0) {
                iVar19 = 0;
                if (iVar15 != 0) goto code_r0x08008f14;
            }
            else {
                iVar19 = -0xe00000000;
                if (iVar15 != 0) {
                    ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail LINE_STATE");
                    _printk(0x8001837);
code_r0x08008f14:
                    ipc_log_string(*(iVar15 + 0x6e0),"%s: Sent line_state: %d for prot id:%d","gsi_ctrl_dev_ioctl",
                                   uStack_7c,*(iVar15 + 0xd8));
                }
            }
        }
        else {
            if (param_2 == -0x7fef90fc) goto code_r0x08008b7c;
code_r0x08008ccc:
            iVar19 = -0x1600000000;
            if (iVar15 != 0) {
                ipc_log_string(*(iVar15 + 0x6e0),"wrong parameter");
                uVar10 = 0x8003598;
                goto code_r0x08008cf0;
            }
        }
    }
    else if (param_2 < 0x7204) {
        if (param_2 == -0x7fef8dfd) {
code_r0x08008b7c:
            iVar19 = -0xb00000000;
            if (iVar15 == 0) {
                if (*0x108 != 0) goto code_r0x08008d04;
            }
            else {
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"%s: EP_LOOKUP for prot id:%d","gsi_ctrl_dev_ioctl",
                                         *(iVar15 + 0xd8));
                if (*(iVar15 + 0x108) == 0) {
                    ipc_log_string(*(iVar15 + 0x6e0),"EP_LOOKUP failed: not connected");
                }
                else {
code_r0x08008d04:
                    iVar9 = *(iVar15 + 0x20c);
                    if (*(iVar15 + 0xd8) == 4) {
                        if (iVar9 != -0x16) {
                            iVar16 = -1;
code_r0x08008d40:
                            if (iVar15 != 0) {
                                ipc_log_string(*(iVar15 + 0x6e0),"%s: prot id :%d ep_type:%d intf:%d",
                                               "gsi_ctrl_dev_ioctl",*(iVar15 + 0xd8),2);
                                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"%s: ipa_cons_idx:%d ipa_prod_idx:%d",
                                                         "gsi_ctrl_dev_ioctl",iVar16,iVar9);
                            }
                            iVar9 = sym._copy_to_user(param_3,auVar23,0x10);
                            iVar19 = 0;
                            if ((iVar9 != 0) && (iVar19 = -0xe00000000, iVar15 != 0)) {
                                ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail MBIM");
                                _printk(0x8001856);
                                iVar19 = -0xe00000000;
                            }
                        }
                    }
                    else {
                        iVar16 = *(iVar15 + 0x210);
                        if ((iVar9 != -0x16) || (iVar16 != -0x16)) goto code_r0x08008d40;
                    }
                }
            }
        }
        else {
            if (param_2 != -0x7fef8dfa) goto code_r0x08008ccc;
            if ((*(iVar15 + 0x130) != 0) && (iVar15 != 0)) {
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"prot id :%d OUT: buf_len:%u total_len: %u",
                                         *(iVar15 + 0xd8));
            }
            if (*(iVar15 + 0x128) != 0) {
                if (iVar15 == 0) {
                    iVar9 = sym._copy_to_user(param_3,auVar23,0x10);
                    iVar19 = 0;
                    if (iVar9 != 0) {
                        iVar19 = -0xe00000000;
                    }
                    goto code_r0x08008f7c;
                }
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"prot id :%d IN: buf_len:%u total_len:%u\n",
                                         *(iVar15 + 0xd8));
            }
            iVar9 = sym._copy_to_user(param_3,auVar23,0x10);
            if (iVar9 == 0) goto code_r0x08008cc4;
            iVar19 = -0xe00000000;
            if (iVar15 == 0) goto code_r0x08008f7c;
            ipc_log_string(*(iVar15 + 0x6e0),"QTI_CTRL_DATA_BUF_INFO: copy_to_user failed");
            uVar10 = 0x8002a9b;
code_r0x08008cf0:
            _printk(uVar10);
        }
    }
    else {
        if (param_2 == 0x7205) {
            if (*(iVar15 + 0xd8) != 4) {
                *(iVar15 + 0x66c) = 1;
                iVar19 = 0;
                goto code_r0x08008f7c;
            }
            if (iVar15 != 0) {
                uVar10 = *(iVar15 + 0x6e0);
                pcVar12 = "%s:Modem Online not handled";
code_r0x08008cb8:
                ipc_log_string(uVar10,pcVar12,"gsi_ctrl_dev_ioctl");
            }
        }
        else {
            if (param_2 != 0x7204) goto code_r0x08008ccc;
            if (*(iVar15 + 0xd8) != 4) {
                iVar19 = iVar15 + 0x6b8;
                *(iVar15 + 0x66c) = 0;
                uVar10 = _raw_spin_lock_irqsave(iVar19);
                piVar1 = iVar15 + 0x6a0;
                piVar6 = *(iVar15 + 0x6a0);
                while (piVar6 != piVar1) {
                    piVar20 = piVar6 + -2;
                    piVar22 = *piVar6;
                    uVar17 = __list_del_entry_valid(piVar6);
                    if ((uVar17 & 1) != 0) {
                        iVar3 = *piVar6;
                        piVar4 = piVar6[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar6 = -0x2152ffffffffff00;
                    piVar6[1] = -0x2152fffffffffede;
                    piVar6 = piVar22;
                    if (piVar20 != NULL) {
                        kfree(*piVar20);
                        kfree(piVar20);
                    }
                }
                _raw_spin_unlock_irqrestore(iVar19,uVar10);
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
                if (puVar11 != NULL) {
                    *(puVar11 + 1) = 0;
                    *puVar11 = 0x10;
                    if (puVar11 < 0xfffffffffffff001) {
                        *(puVar11 + 0xc) = 3;
                        uVar10 = _raw_spin_lock_irqsave(iVar19);
                        puVar21 = *(iVar15 + 0x6a8);
                        puVar2 = puVar11 + 2;
                        uVar17 = __list_add_valid(puVar2,puVar21,piVar1);
                        if ((uVar17 & 1) != 0) {
                            *(iVar15 + 0x6a8) = puVar2;
                            puVar11[2] = piVar1;
                            puVar11[3] = puVar21;
                            *puVar21 = puVar2;
                        }
                        _raw_spin_unlock_irqrestore(iVar19,uVar10);
                        sym.gsi_ctrl_send_notification(iVar15);
                        goto code_r0x08008cc4;
                    }
                }
                if (iVar15 == 0) {
                    iVar19 = -0xc;
                }
                else {
                    ipc_log_string(*(iVar15 + 0x6e0),"%s: err allocating cpkt\n","gsi_ctrl_dev_ioctl");
                    _printk(0x80033fd,"gsi_ctrl_dev_ioctl");
                    iVar19 = -0xc;
                }
                goto code_r0x08008f80;
            }
            if (iVar15 != 0) {
                uVar10 = *(iVar15 + 0x6e0);
                pcVar12 = "%s:Modem Offline not handled";
                goto code_r0x08008cb8;
            }
        }
code_r0x08008cc4:
        iVar19 = 0;
    }
code_r0x08008f7c:
    iVar19 = iVar19 >> 0x20;
code_r0x08008f80:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iVar13) {
        return iVar19;
    }
    auVar23 = __stack_chk_fail(iVar19);
    uVar14 = extraout_x8 >> 0x20;
    uVar8 = *CONCAT44(uVar14,*CONCAT44(uVar14,*CONCAT44(uVar14,*extraout_x8)));
    *extraout_x18 = 0x8009088;
    iVar13 = *(auVar23._0_8_ + 0x2b0);
    if (iVar13 == 0x10) {
        iVar9 = ___ratelimit(CONCAT44(uVar14,uVar8),obj.gsi_ctrl_dev_open._rs,"gsi_ctrl_dev_open");
        if (iVar9 != 0) {
            _printk(0x8002ca0,"gsi_ctrl_dev_open",0);
            return 0xffffffed;
        }
    }
    else {
        puVar18 = iVar13 + -0x4f8;
        uVar17 = *puVar18;
        if (6 < *puVar18) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8009224);
            (*pcVar7)();
        }
        if (iVar13 != 0x5d0) {
            ipc_log_string(*(iVar13 + 0x110),"%s: open ctrl dev %s","gsi_ctrl_dev_open");
        }
        pcVar7 = obj.inst_status + uVar17 * 0x40;
        mutex_lock(pcVar7);
        *(auVar23._8_8_ + 0xd8) = puVar18;
        if (0x180 < (uVar17 << 6 | 0x30)) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(1,0x8009228);
            (*pcVar7)();
        }
        if (obj.gsi_func_type[uVar17 * 0x40] != 0x0) {
            if (*(iVar13 + 0xa0) != '\0') {
                mutex_unlock(pcVar7);
                if (iVar13 != 0x5d0) {
                    ipc_log_string(*(iVar13 + 0x110),"%s: Already opened\n","gsi_ctrl_dev_open");
                }
                return 0xfffffff0;
            }
            *(iVar13 + 0xa0) = 1;
            mutex_unlock(pcVar7);
            return 0;
        }
        mutex_unlock(pcVar7);
        if (iVar13 != 0x5d0) {
            ipc_log_string(*(iVar13 + 0x110),"%s: [prot_id = %d], GSI instance freed already\n","gsi_ctrl_dev_open",
                           *puVar18);
            _printk(0x8001889,"gsi_ctrl_dev_open",*puVar18);
            return 0xffffffed;
        }
    }
    return 0xffffffed;
}


// ===== sym.gsi_rndis_class_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080048f0 (size 8) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.gsi_rndis_class_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3,ulong param_4)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint uVar10;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *arg1;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    uVar10 = param_4 >> 0x20;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0xb8);
    auStack_2c[0] = 0;
    iVar3 = kstrtou8(param_2,0,auStack_2c);
    if ((iVar3 == 0) && (auStack_2c[0] - 1 < 9)) {
        *(iVar11 + 0x110) = auStack_2c[0];
    }
    else {
        param_3 = -0x16;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return param_3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ipa_work_handler;
    pcStack_78 = sym.ipa_work_handler;
    iVar12 = sp_el0;
    iVar11 = iVar4 + 0x118;
    iStack_88 = *(iVar12 + 0x5e0);
    arg1 = iVar4 + -0x110;
    iVar12 = iVar4 + -0x238;
    iVar15 = *(iVar4 + -0x50);
    auStack_8c[0] = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    uVar5 = _raw_spin_lock_irqsave(iVar11);
    if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
        if (iVar12 == 0) {
            iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
            uVar14 = 0;
            goto code_r0x080060b4;
        }
        ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","read_event");
        _raw_spin_unlock_irqrestore(iVar11,uVar5);
        uVar14 = 0;
code_r0x08006070:
        uVar8 = uVar14;
        iVar6 = ipc_log_string(*(iVar4 + 0x4a8),"%s: event = %x sm_state %x","ipa_work_handler",uVar8,
                               *(iVar4 + 0x90));
        uVar10 = uVar8 >> 0x20;
        if (iVar15 != 0) {
            bVar1 = false;
            goto joined_r0x080060c0;
        }
        ipc_log_string(*(iVar4 + 0x4a8),"%s(): gadget is NULL.\n","ipa_work_handler");
        uVar5 = 0x8002d8b;
    }
    else {
        uVar14 = *(iVar4 + 0x114) + 1 & 0x7f;
        *(iVar4 + 0x114) = uVar14;
        uVar14 = *(arg1 + uVar14 + 0x1a4);
        iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
        if (iVar12 != 0) goto code_r0x08006070;
code_r0x080060b4:
        if (iVar15 == 0) goto code_r0x08006a10;
        bVar1 = true;
joined_r0x080060c0:
        if ((iVar15 != -0x78) && (iVar15 = *(iVar15 + 0xd8), iVar15 != 0)) {
            switch(*(iVar4 + 0x90)) {
            case 0:
                break;
            case 1:
                if (uVar14 == 3) {
                    if (*(iVar4 + -0x130) == 0) {
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"USB cable not connected\n");
                            _printk(0x80027c8);
                        }
                    }
                    else {
                        sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                        if (bVar1) {
                            iVar3 = sym.gsi_ep_enable(iVar12);
                            if (iVar3 != 0) {
code_r0x08006120:
                                usb_composite_setup_continue(*(iVar4 + -0x48));
                                iVar12 = *(iVar4 + -0x50);
                                goto joined_r0x0800649c;
                            }
                        }
                        else {
                            uVar5 = *(iVar15 + 0x1f8);
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                            uVar10 = uVar5 >> 0x20;
                            uVar14 = sym.gsi_ep_enable(iVar12);
                            if (uVar14 != 0) {
                                uVar13 = uVar14;
                                uVar8 = uVar13;
                                ipc_log_string(*(iVar4 + 0x4a8),"%s:ep enable err %d","ipa_work_handler",uVar13);
                                uVar10 = uVar8 >> 0x20;
                                _printk(0x8001d4b,"ipa_work_handler",uVar13);
                                goto code_r0x08006120;
                            }
                        }
                        usb_composite_setup_continue(*(iVar4 + -0x48));
                        if (*(iVar4 + -0x160) == 0) {
                            iVar12 = *(iVar4 + -0x50);
                            *(iVar4 + 0x90) = 4;
                            goto joined_r0x0800649c;
                        }
                        iVar3 = sym.ipa_connect_channels(arg1);
                        if (iVar3 == 0) {
                            *(iVar4 + 0x90) = 2;
                            if (!bVar1) {
                                uVar5 = *(iVar4 + 0x4a8);
                                pcVar7 = "%s: ST_INIT_EVT_SET_ALT";
                                goto code_r0x080067c0;
                            }
                        }
                        else {
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler"
                                              );
                                _printk(0x800326c,"ipa_work_handler");
                            }
                            sym.ipa_data_path_disable(arg1);
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            *(iVar4 + 0x90) = 1;
                        }
                    }
                }
                break;
            case 2:
                if (uVar14 == 8) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1);
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(iVar4 + 0x90) = 1;
                        if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                            __pm_runtime_idle(iVar12,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS_DIS","ipa_work_handler");
                            uVar5 = *(iVar4 + 0x4a8);
                            uVar9 = *(iVar15 + 0x1f8);
                            pcVar7 = "%s: put_async1 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1);
                        if (iVar3 == 0) {
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS","ipa_work_handler");
                                uVar5 = *(iVar4 + 0x4a8);
                                uVar9 = *(iVar15 + 0x1f8);
                                pcVar7 = "%s: put_async2 = %d";
                                goto code_r0x08006970;
                            }
                        }
                    }
                }
                else if (uVar14 == 7) {
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async3 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 4) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\b') {
                        if (!bVar1) {
                            uVar5 = *(iVar4 + 0x4a8);
                            pcVar7 = "%s: ST_WAIT_IPARDY_EVT_SUSPEND";
                            goto code_r0x080067c0;
                        }
                    }
                    else {
                        sym.ipa_data_path_enable(arg1);
                        *(iVar4 + 0x90) = 3;
                        if (!bVar1) {
                            uVar5 = *(iVar4 + 0x4a8);
                            pcVar7 = "%s: ST_WAIT_IPARDY_EVT_IPARDY %d";
                            uVar9 = 1000;
                            goto code_r0x08006970;
                        }
                    }
                }
                break;
            case 3:
                if ((uVar14 & 0xfffffffd) == 5) {
                    uVar5 = _raw_spin_lock_irqsave(iVar11);
                    if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
                        if (iVar12 != 0) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","peek_event");
                        }
                        _raw_spin_unlock_irqrestore(iVar11,uVar5);
                    }
                    else {
                        cVar2 = *(arg1 + (*(iVar4 + 0x114) + 1 & 0x7f) + 0x1a4);
                        _raw_spin_unlock_irqrestore(iVar11,uVar5);
                        if (cVar2 == '\x06') {
                            sym.read_event(arg1);
                            if (!bVar1) {
                                uVar5 = *(iVar4 + 0x4a8);
                                pcVar7 = "%s: NO_OP NRDY_RDY";
                                goto code_r0x080067c0;
                            }
                            break;
                        }
                    }
                    if (uVar14 == 5) {
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_HOST_NRDY\n","ipa_work_handler");
                        }
                        auStack_8c[0] = 1;
                        usb_gsi_ep_op(*arg1,auStack_8c,0xb);
                        sym.gsi_rndis_ipa_reset_trigger(arg1);
                        usb_gsi_ep_op(*arg1,0,6);
                        usb_gsi_ep_op(*(iVar4 + -0x108),0,6);
                        sym.ipa_disconnect_channel(arg1);
                        *(iVar4 + 0x90) = 4;
                        if (bVar1) {
code_r0x0800675c:
                            iVar12 = *(iVar4 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        pcVar7 = "%s: ST_CON_EVT_HNRDY";
                    }
                    else {
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(iVar4 + 0x90) = 1;
                        if (bVar1) goto code_r0x0800675c;
                        pcVar7 = "%s: ST_CON_EVT_DIS";
                    }
                    ipc_log_string(*(iVar4 + 0x4a8),pcVar7,"ipa_work_handler");
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    uVar5 = *(iVar4 + 0x4a8);
                    uVar9 = *(iVar15 + 0x1f8);
                    pcVar7 = "%s: put_async4 = %d";
code_r0x08006970:
                    ipc_log_string(uVar5,pcVar7,"ipa_work_handler",uVar9);
                    uVar10 = uVar9 >> 0x20;
                }
                else if (uVar14 == 8) {
                    cVar2 = sym.peek_event(arg1);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1);
                        sym.ipa_data_path_disable(arg1);
                        sym.ipa_disconnect_channel(arg1);
                        *(iVar4 + 0x90) = 1;
                        if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                            __pm_runtime_idle(iVar12,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_EVT_SUS_DIS","ipa_work_handler");
                            uVar5 = *(iVar4 + 0x4a8);
                            uVar9 = *(iVar15 + 0x1f8);
                            pcVar7 = "%s: put_async5 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1);
                        if (iVar3 == 0) {
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_EVT_SUS","ipa_work_handler");
                                uVar5 = *(iVar4 + 0x4a8);
                                uVar9 = *(iVar15 + 0x1f8);
                                goto code_r0x080062fc;
                            }
                        }
                    }
                }
                break;
            case 4:
                if (uVar14 == 6) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    if (!bVar1) {
                        uVar5 = *(iVar15 + 0x1f8);
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                        uVar10 = uVar5 >> 0x20;
                        iVar3 = sym.ipa_connect_channels(arg1);
                        if (iVar3 != 0) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler");
                            _printk(0x800326c,"ipa_work_handler");
                            iVar12 = *(iVar4 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        sym.ipa_data_path_enable(arg1);
                        uVar5 = *(iVar4 + 0x4a8);
                        pcVar7 = "%s: ST_HOST_NRDY_EVT_HRDY_";
                        *(iVar4 + 0x90) = 3;
                        goto code_r0x080067c0;
                    }
                    iVar3 = sym.ipa_connect_channels(arg1);
                    if (iVar3 == 0) {
                        sym.ipa_data_path_enable(arg1);
                        goto code_r0x0800636c;
                    }
                    goto code_r0x0800675c;
                }
                if (uVar14 == 7) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    sym.ipa_data_path_disable(arg1);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_HOST_NRDY_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            default:
                if (!bVar1) {
                    uVar5 = *(iVar4 + 0x4a8);
                    pcVar7 = "%s: Invalid state to SM";
code_r0x080067c0:
                    ipc_log_string(uVar5,pcVar7,"ipa_work_handler");
                }
                break;
            case 6:
                if (uVar14 == 7) {
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async7 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 10) {
                    sym.ipa_resume_work_handler(arg1);
                    *(iVar4 + 0x90) = 3;
                    sym.usb_gadget_autopm_get_noresume(*(iVar4 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_RES","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: get_nores1 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 9) {
                    *(iVar4 + 0x90) = 7;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_IPA_SUS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
code_r0x080062fc:
                        pcVar7 = "%s: put_async6 = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            case 7:
                if (uVar14 == 7) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    sym.ipa_data_path_disable(arg1);
                    sym.ipa_disconnect_channel(arg1);
                    *(iVar4 + 0x90) = 1;
                    if (bVar1) goto code_r0x0800675c;
                    ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_EVT_DIS","ipa_work_handler");
                    iVar12 = *(iVar4 + -0x50);
joined_r0x0800649c:
                    if ((iVar12 != 0) && (*(iVar12 + 0xd8) != 0)) {
                        __pm_runtime_idle(*(iVar12 + 0xd8),5);
                    }
                }
                else if (uVar14 == 10) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_EVT_RES","ipa_work_handler");
                        uVar5 = *(iVar15 + 0x1f8);
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                        uVar10 = uVar5 >> 0x20;
                    }
                    sym.ipa_resume_work_handler(arg1);
code_r0x0800636c:
                    *(iVar4 + 0x90) = 3;
                }
            }
            uVar5 = _raw_spin_lock_irqsave(iVar11);
            if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
                if (!bVar1) {
                    ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","peek_event");
                }
                iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
            }
            else {
                cVar2 = *(arg1 + (*(iVar4 + 0x114) + 1 & 0x7f) + 0x1a4);
                iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
                if (cVar2 != '\0') {
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: New events to process","ipa_work_handler");
                    }
                    uVar10 = 0;
                    iVar6 = queue_delayed_work_on(0x20,*(iVar4 + 0x88),iVar4,0);
                }
            }
            goto code_r0x08006a10;
        }
        if (bVar1) goto code_r0x08006a10;
        ipc_log_string(*(iVar4 + 0x4a8),"%s(): dev or dev->parent is NULL.\n","ipa_work_handler");
        uVar5 = 0x8002440;
    }
    iVar6 = _printk(uVar5,"ipa_work_handler");
code_r0x08006a10:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return iVar6;
    }
    iVar11 = __stack_chk_fail();
    uVar5 = CONCAT44(uVar10,*CONCAT44(extraout_x8 >> 0x20,*extraout_x8));
    *extraout_x18_00 = 0x8006b20;
    iVar12 = iVar11 + -0x6f0;
    if (*(iVar11 + -0x5e8) == 0) {
        iVar4 = iVar11;
        if (iVar12 != 0) {
            iVar4 = ipc_log_string(*(iVar11 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func",uVar5);
        }
        *(iVar11 + 0x38) = 0;
    }
    else {
        if (iVar12 == 0) {
            iVar12 = sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return iVar12;
            }
        }
        else {
            ipc_log_string(*(iVar11 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func",uVar5);
            iVar12 = sym.gsi_wakeup_host(iVar12);
            if (*(iVar11 + 0x38) == '\0') {
                return iVar12;
            }
            ipc_log_string(*(iVar11 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar12 = _seq_lseek;
        iVar4 = __msecs_to_jiffies(*(iVar11 + 0x3a));
        iVar4 = mod_timer(iVar11,iVar4 + iVar12);
    }
    return iVar4;
}


// ===== sym.rndis_signal_connect.cfi_jt @ 0x080048f8 (size 8) =====

void sym.rndis_signal_connect.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x14) = 0;
    sym.rndis_indicate_status_msg.llvm.6882802748613956580(param_1,0x4001000b);
    return;
}


// ===== sym.rndis_signal_disconnect.cfi_jt @ 0x08004900 (size 8) =====

void sym.rndis_signal_disconnect.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x14) = 1;
    sym.rndis_indicate_status_msg.llvm.6882802748613956580(param_1,0x4001000c);
    return;
}


// ===== sym.gsi_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004908 (size 8) =====

uint64_t sym.gsi_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong *param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    unkbyte6 Stack_78;
    ushort uStack_72;
    unkbyte6 Stack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    Stack_70 = 0;
    uStack_80 = 0;
    Stack_78 = 0;
    uStack_72 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    iVar5 = strlen(param_2);
    if (0x28 < iVar5 + 1) {
        uVar9 = 0xffffffdc;
        goto code_r0x080055a4;
    }
    if (param_2 == 0) {
code_r0x080055e4:
        _printk(0x8002846,"gsi_set_inst_name",param_2);
        uVar9 = 0xffffffea;
        goto code_r0x080055a4;
    }
    iVar5 = strncasecmp(param_2,"rndis",5);
    if (iVar5 == 0) {
        iVar10 = 0;
        bVar3 = true;
    }
    else {
        iVar5 = strncasecmp(param_2,0x800323f,3);
        if (iVar5 == 0) {
            bVar3 = false;
            iVar10 = 1;
        }
        else {
            iVar5 = strncasecmp(param_2,"rmnet",5);
            if (iVar5 == 0) {
                bVar3 = false;
                iVar10 = 2;
            }
            else {
                iVar5 = strncasecmp(param_2,"mbim",4);
                if (iVar5 == 0) {
                    bVar3 = false;
                    iVar10 = 3;
                }
                else {
                    iVar5 = strncasecmp(param_2,0x8001f69,3);
                    if (iVar5 != 0) goto code_r0x080055e4;
                    bVar3 = false;
                    iVar10 = 4;
                }
            }
        }
    }
    pcVar4 = obj.inst_status + iVar10 * 0x40;
    mutex_lock(pcVar4);
    piVar12 = iVar10 * 0x40 + 0x8000578;
    iVar11 = *piVar12;
    mutex_unlock(pcVar4);
    if (iVar11 != 0) {
        _printk(0x80029ff,"gsi_set_inst_name",iVar10);
        uVar9 = 0xfffffff0;
        goto code_r0x080055a4;
    }
    if (bVar3) {
        config_group_init_type_name(param_1,*param_1,obj.gsi_func_rndis_type);
    }
    uVar9 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x730);
    if (uVar9 == 0) {
        uVar9 = 0xfffffffffffffff4;
        goto code_r0x080055a4;
    }
    *(uVar9 + 0x234) = 0;
    __init_waitqueue_head(uVar9 + 0x358,"&gsi->d_port.wait_for_ipa_ready",obj.gsi_function_init.__key);
    *(uVar9 + 0x238) = 0xfffffffe0;
    *(uVar9 + 0x240) = uVar9 + 0x240;
    *(uVar9 + 0x248) = uVar9 + 0x240;
    *(uVar9 + 0x250) = sym.ipa_work_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    init_timer_key(uVar9 + 0x268,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    *(uVar9 + 0x20c) = 0xffffffeaffffffea;
    *(uVar9 + 0xd8) = iVar10;
    *(uVar9 + 0x2c0) = uVar2;
    *(uVar9 + 0x690) = uVar9 + 0x690;
    *(uVar9 + 0x698) = uVar9 + 0x690;
    *(uVar9 + 0x6a0) = uVar9 + 0x6a0;
    *(uVar9 + 0x6a8) = uVar9 + 0x6a0;
    *(uVar9 + 0x6b8) = 0;
    __init_waitqueue_head(uVar9 + 0x678,"&gsi->c_port.read_wq",obj.gsi_function_init.__key);
    uVar6 = *(uVar9 + 0xd8) - 2;
    if (2 < uVar6) goto code_r0x08005508;
    iVar11 = uVar9 + 0x5c0;
    strlcat(iVar11,*(uVar6 * 8 + 0x8003cc8),0xf);
    uVar6 = ida_alloc_range(obj.gsi_ida,0,2,0xcc0);
    if (uVar6 < 0) {
        _printk(0x8002371,"gsi_function_ctrl_port_init",uVar6);
code_r0x08005708:
        kfree(uVar9);
        uVar9 = uVar6;
    }
    else {
        iVar1 = uVar9 + 0x5d0;
        cdev_init(iVar1,obj.gsi_ctrl_dev_fops);
        uVar7 = cdev_add(iVar1,uVar6 | _segment.ehdr << 0x14,1);
        if (uVar7 != 0) {
            ipc_log_string(*(uVar9 + 0x6e0),"%s: Failed to add cdev for (%s)\n","gsi_function_ctrl_port_init",iVar11)
            ;
            _printk(0x8002a62,"gsi_function_ctrl_port_init",iVar11);
            ida_free(obj.gsi_ida,uVar6);
            uVar6 = uVar7;
            goto code_r0x08005708;
        }
        uVar8 = device_create(CONCAT44(*0x8000004,_segment.ehdr),0,uVar6 | _segment.ehdr << 0x14,0,iVar11);
        if (0xfffffffffffff000 < uVar8) {
            ipc_log_string(*(uVar9 + 0x6e0),"%s: device_create failed for (%s)\n","gsi_function_ctrl_port_init",
                           iVar11);
            _printk(0x8001bb8,"gsi_function_ctrl_port_init",iVar11);
            cdev_del(iVar1);
            ida_free(obj.gsi_ida,uVar6);
            uVar6 = uVar8;
            if (uVar8 != 0) goto code_r0x08005708;
        }
code_r0x08005508:
        *(uVar9 + 0x72a) = 500;
        init_timer_key(uVar9 + 0x6f0,sym.gsi_rw_timer_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0,0);
    }
    if (uVar9 < 0xfffffffffffff001) {
        param_1[0x17] = uVar9;
        scnprintf(&uStack_98,0x2e,"gsi.%s",param_2);
        iVar11 = ipc_log_context_create(10,&uStack_98,0);
        if (iVar11 == 0) {
            _printk(0x8002552,"gsi_set_inst_name",&uStack_98);
        }
        *(param_1[0x17] + 0x6e0) = iVar11;
        mutex_lock(pcVar4);
        *piVar12 = param_1;
        obj.gsi_func_type[iVar10 * 0x40] = 0x1;
        mutex_unlock(pcVar4);
        uVar9 = 0;
    }
code_r0x080055a4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar9 & 0xffffffff;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym.gsi_free_inst;
    iVar10 = *(uVar9 + 0xb8);
    if (iVar10 == 0) {
        return uVar9;
    }
    uVar6 = *(iVar10 + 0xd8);
    uVar8 = uVar6;
    if (5 < uVar6) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8005880);
        (*pcVar4)();
    }
    pcVar4 = obj.inst_status + uVar8 * 0x40;
    mutex_lock(pcVar4);
    if (*(*(uVar9 + 0xb8) + 0x670) == '\0') {
        ipc_log_context_destroy(*(*(uVar9 + 0xb8) + 0x6e0));
        iVar10 = *(uVar9 + 0xb8);
        uVar6 = *(iVar10 + 0x650);
        if (uVar6 != 0) {
            device_destroy(CONCAT44(*0x8000004,_segment.ehdr));
            cdev_del(iVar10 + 0x5d0);
            *(iVar10 + 0x650) = 0;
            ida_free(obj.gsi_ida,uVar6 & 0xfffff);
            iVar10 = *(uVar9 + 0xb8);
        }
        kfree(iVar10);
        kfree(uVar9);
        if ((uVar8 << 6 | 0x30) < 0x181) {
            obj.gsi_func_type[uVar8 * 0x40] = 0x0;
            if ((uVar8 << 6 | 0x38) < 0x181) {
                *(uVar8 * 0x40 + 0x8000578) = 0;
                uVar9 = mutex_unlock(pcVar4);
                return uVar9;
            }
        }
    }
    else if ((uVar8 << 6 | 0x30) < 0x181) {
        obj.gsi_func_type[uVar8 * 0x40] = 0x0;
        mutex_unlock(pcVar4);
        ipc_log_string(*(iVar10 + 0x6e0),"%s: [prot_id = %d] Dev is open, free mem when dev close\n","gsi_free_inst",
                       uVar6);
        uVar9 = _printk(0x8002018,"gsi_free_inst",uVar8);
        return uVar9;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x800587c);
    (*pcVar4)();
}


// ===== sym.gsi_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004910 (size 8) =====

void sym.gsi_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xb8);
    if (iVar4 == 0) {
        return;
    }
    uVar1 = *(iVar4 + 0xd8);
    uVar3 = uVar1;
    if (uVar1 < 6) {
        pcVar2 = obj.inst_status + uVar3 * 0x40;
        mutex_lock(pcVar2);
        if (*(*(param_1 + 0xb8) + 0x670) == '\0') {
            ipc_log_context_destroy(*(*(param_1 + 0xb8) + 0x6e0));
            iVar4 = *(param_1 + 0xb8);
            uVar1 = *(iVar4 + 0x650);
            if (uVar1 != 0) {
                device_destroy(_segment.ehdr);
                cdev_del(iVar4 + 0x5d0);
                *(iVar4 + 0x650) = 0;
                ida_free(obj.gsi_ida,uVar1 & 0xfffff);
                iVar4 = *(param_1 + 0xb8);
            }
            kfree(iVar4);
            kfree(param_1);
            if ((uVar3 << 6 | 0x30) < 0x181) {
                obj.gsi_func_type[uVar3 * 0x40] = 0x0;
                if ((uVar3 << 6 | 0x38) < 0x181) {
                    *(uVar3 * 0x40 + 0x8000578) = 0;
                    mutex_unlock(pcVar2);
                    return;
                }
            }
        }
        else if ((uVar3 << 6 | 0x30) < 0x181) {
            obj.gsi_func_type[uVar3 * 0x40] = 0x0;
            mutex_unlock(pcVar2);
            ipc_log_string(*(iVar4 + 0x6e0),"%s: [prot_id = %d] Dev is open, free mem when dev close\n",
                           "gsi_free_inst",uVar1);
            _printk(0x8002018,"gsi_free_inst",uVar3);
            return;
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(1,0x800587c);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005880);
    (*pcVar2)();
}


// ===== sym.gsi_ctrl_dev_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004918 (size 8) =====

int64_t sym.gsi_ctrl_dev_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,int64_t param_2,int64_t param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code cVar3;
    char cVar4;
    code *pcVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(param_1 + 0xd8);
    uVar10 = uVar2;
    if (6 < uVar2) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8008774);
        (*pcVar5)();
    }
    if (uVar2 == 4) {
        return -0x16;
    }
    mutex_lock(obj.inst_status + uVar10 * 0x40);
    if ((uVar10 << 6 | 0x30) < 0x181) {
        cVar3 = obj.gsi_func_type[uVar10 * 0x40];
        mutex_unlock(obj.inst_status + uVar10 * 0x40);
        if (cVar3 == 0x0) {
            iVar6 = ___ratelimit(obj.gsi_ctrl_dev_write._rs,"gsi_ctrl_dev_write");
            if (iVar6 != 0) {
                _printk(0x800180c,"gsi_ctrl_dev_write");
                return -0x13;
            }
            return -0x13;
        }
        if ((uVar10 * 0x40 | 0x38) < 0x181) {
            arg1 = *(*(uVar10 * 0x40 + 0x8000578) + 0xb8);
            if (param_3 - 0x2001U < 0xffffffffffffe000) {
                if (arg1 == 0) {
                    return -0x16;
                }
                ipc_log_string(*(arg1 + 0x6e0),"error: ctrl pkt length %zu",param_3);
                _printk(0x80016d8,param_3);
                return -0x16;
            }
            if (*(arg1 + 0x108) == 0) {
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x6e0),"USB cable not connected\n");
                    _printk(0x80027c8);
                    return -0x68;
                }
                return -0x68;
            }
            if ((*(arg1 + 0x114) != '\0') && (*(arg1 + 0x115) == '\0')) {
                *(arg1 + 0x6d4) = *(arg1 + 0x6d4) + 1;
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x6e0),"drop ctrl pkt of len %zu",param_3);
                    _printk(0x8001e73,param_3);
                    return -0x5f;
                }
                return -0x5f;
            }
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x20);
            if (piVar7 != NULL) {
                iVar8 = __kmalloc(param_3,0xcc0);
                *piVar7 = iVar8;
                if (iVar8 == 0) {
                    kfree(piVar7);
                }
                else {
                    *(piVar7 + 1) = param_3;
                    if (piVar7 < 0xfffffffffffff001) {
                        __check_object_size(iVar8,param_3,0);
                        iVar6 = sym._copy_from_user(iVar8,param_2,param_3);
                        if (iVar6 != 0) {
                            if (arg1 != 0) {
                                ipc_log_string(*(arg1 + 0x6e0),"copy_from_user failed err:%d",iVar6);
                                _printk(0x800239a,iVar6);
                            }
                            kfree(*piVar7);
                            kfree(piVar7);
                            return iVar6;
                        }
                        *(piVar7 + 0xc) = 4;
                        cVar4 = *0x80006d8;
                        *(arg1 + 0x6cc) = *(arg1 + 0x6cc) + 1;
                        if (cVar4 != '\0') {
                            iVar8 = param_3;
                            if (0x1d < param_3) {
                                iVar8 = 0x1e;
                            }
                            print_hex_dump(0x80036fb,"WRITE:",2,0x10,1,*piVar7,iVar8,0);
                        }
                        uVar9 = _raw_spin_lock_irqsave(arg1 + 0x6b8);
                        piVar11 = *(arg1 + 0x6a8);
                        piVar1 = piVar7 + 2;
                        uVar10 = __list_add_valid(piVar1,piVar11,arg1 + 0x6a0);
                        if ((uVar10 & 1) != 0) {
                            *(arg1 + 0x6a8) = piVar1;
                            piVar7[2] = arg1 + 0x6a0;
                            piVar7[3] = piVar11;
                            *piVar11 = piVar1;
                        }
                        _raw_spin_unlock_irqrestore(arg1 + 0x6b8,uVar9);
                        iVar6 = sym.gsi_ctrl_send_notification(arg1);
                        if (iVar6 == 0) {
                            *(arg1 + 0x6d0) = *(arg1 + 0x6d0) + 1;
                        }
                        if (arg1 != 0) {
                            ipc_log_string(*(arg1 + 0x6e0),"Exit %zu",param_3);
                            return param_3;
                        }
                        return param_3;
                    }
                }
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"failed to allocate ctrl pkt");
                _printk(0x8001952);
            }
            return -0xc;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x8008778);
    (*pcVar5)();
}


// ===== sym.usb_gsi_rw_timer_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004920 (size 8) =====

ulong sym.usb_gsi_rw_timer_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    uint16_t auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    auStack_3c[0] = 0;
    iVar2 = sym.get_connected_gsi();
    if (iVar2 != 0) {
        if (param_2 == 0) {
            ipc_log_string(*(iVar2 + 0x6e0),"%s: buffer is NULL.\n","usb_gsi_rw_timer_write");
        }
        else {
            iVar1 = kstrtou16_from_user(param_2,param_3,0,auStack_3c);
            if (iVar1 == 0) {
                if (auStack_3c[0] - 0x2711 < 0xffffd8f0) {
                    ipc_log_string(*(iVar2 + 0x6e0),"%s: value must be > 0 and < 10000.\n","usb_gsi_rw_timer_write");
                    _printk(0x8002d53,"usb_gsi_rw_timer_write");
                }
                else {
                    *(iVar2 + 0x72a) = auStack_3c[0];
                }
            }
            else {
                ipc_log_string(*(iVar2 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_timer_write",iVar1);
                _printk(0x8001629,"usb_gsi_rw_timer_write",iVar1);
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_timer_open;
    uVar3 = single_open(auVar4._8_8_,sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar4._0_8_ + 0x2d8));
    return uVar3;
}


// ===== sym.usb_gsi_rw_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004928 (size 8) =====

ulong sym.usb_gsi_rw_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    acStack_3c[0] = '\0';
    iVar3 = sym.get_connected_gsi();
    if (iVar3 != 0) {
        if (param_2 == 0) {
            uVar4 = *(iVar3 + 0x6e0);
            pcVar6 = "%s: buffer is Null.\n";
        }
        else {
            iVar2 = kstrtou8_from_user(param_2,param_3,0,acStack_3c);
            if (iVar2 != 0) {
                ipc_log_string(*(iVar3 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_write",iVar2);
                _printk(0x8001629,"usb_gsi_rw_write",iVar2);
                goto code_r0x08004ce0;
            }
            if (*(iVar3 + 0x728) == (acStack_3c[0] != '\0')) {
                uVar4 = *(iVar3 + 0x6e0);
                if (acStack_3c[0] == '\0') {
                    pcVar6 = "%s: RW already disabled\n";
                }
                else {
                    pcVar6 = "%s: RW already enabled\n";
                }
            }
            else {
                *(iVar3 + 0x728) = acStack_3c[0] != '\0';
                iVar1 = _seq_lseek;
                if (acStack_3c[0] == '\0') {
                    del_timer_sync(iVar3 + 0x6f0);
                    uVar4 = *(iVar3 + 0x6e0);
                    pcVar6 = "%s: timer deleted\n";
                }
                else {
                    iVar5 = __msecs_to_jiffies(*(iVar3 + 0x72a));
                    mod_timer(iVar3 + 0x6f0,iVar5 + iVar1);
                    uVar4 = *(iVar3 + 0x6e0);
                    pcVar6 = "%s: timer initialized\n";
                }
            }
        }
        ipc_log_string(uVar4,pcVar6,"usb_gsi_rw_write");
    }
code_r0x08004ce0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_3;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_open;
    uVar4 = single_open(auVar7._8_8_,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar7._0_8_ + 0x2d8));
    return uVar4;
}


// ===== sym.gsi_ctrl_reset_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004930 (size 8) =====

void sym.gsi_ctrl_reset_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gsi_ctrl_send_cpkt_tomodem(param_2[7],*param_2,0);
    return;
}


// ===== sym.gsi_ctrl_send_response_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004938 (size 8) =====

void sym.gsi_ctrl_send_response_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gsi_ctrl_send_notification(*(param_2 + 0x38));
    return;
}


// ===== sym.gsi_rndis_command_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004940 (size 8) =====

void sym.gsi_rndis_command_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t *param_2)

{
    int iVar1;
    int iVar2;
    int *arg2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *param_2;
    if (arg2 == NULL) {
        return;
    }
    iVar4 = param_2[7];
    iVar3 = *(iVar4 + 0x100);
    if (iVar3 == 0) {
        return;
    }
    iVar1 = *arg2;
    if (iVar1 == 3) {
        if (iVar4 != 0) {
            ipc_log_string(*(iVar4 + 0x6e0),"RNDIS_MSG_HALT, state:%d\n",*(iVar3 + 8));
            iVar3 = *(iVar4 + 0x100);
        }
        if (*(iVar3 + 8) == 2) {
            sym.gsi_rndis_flow_ctrl_enable(1,iVar3);
            iVar3 = *(iVar4 + 0x100);
        }
        *(iVar3 + 8) = 0;
        return;
    }
    iVar5 = *(*(iVar4 + 0x30) + 0x30);
    iVar2 = sym.rndis_msg_parser(iVar3,arg2);
    if ((iVar2 < 0) && (iVar4 != 0)) {
        ipc_log_string(*(iVar4 + 0x6e0),"RNDIS command error %d, %d/%d",iVar2,param_2[0xb],param_2[1]);
        _printk(0x800219d,iVar2,param_2[0xb],param_2[1]);
    }
    if (iVar1 == 5) {
        if (*(*param_2 + 0xc) == 0x1010e) {
            sym.gsi_rndis_flow_ctrl_enable(**(*(iVar4 + 0x100) + 0x20) == 0,*(iVar4 + 0x100));
        }
    }
    else if (iVar1 == 2) {
        iVar3 = *param_2;
        if (iVar4 == 0) {
            *0x220 = *(iVar3 + 0x14);
        }
        else {
            ipc_log_string(*(iVar4 + 0x6e0),"RNDIS host major:%d minor:%d version\n",*(iVar3 + 0xc),*(iVar3 + 0x10));
            *(iVar4 + 0x220) = *(iVar3 + 0x14);
            ipc_log_string(*(iVar4 + 0x6e0),"RNDIS host DL MaxTransferSize:%d\n",*(iVar3 + 0x14));
        }
    }
    *(iVar5 + 0x94) = *(iVar5 + 0x94) & 0xfe;
    return;
}


// ===== sym.gsi_ctrl_set_ntb_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004948 (size 8) =====

void sym.gsi_ctrl_set_ntb_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong *param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_2[7];
    if (iVar1 != 0) {
        ipc_log_string(*(iVar1 + 0x6e0),"dev:%pK",iVar1);
    }
    param_2[7] = 0;
    if ((*(param_2 + 0x54) == 0) && (iVar2 = *(param_2 + 0xb), iVar2 == *(param_2 + 1))) {
        if (iVar2 == 8) {
            iVar2 = **param_2;
            if (0xffffc7fe < iVar2 - 0x4001U) {
                *(iVar1 + 0x230) = (*param_2)[1];
code_r0x0800c838:
                if (iVar1 != 0) {
                    ipc_log_string(*(iVar1 + 0x6e0),"Set NTB INPUT SIZE %d",iVar2);
                }
                *(iVar1 + 0x22c) = iVar2;
                return;
            }
        }
        else if (iVar2 == 4) {
            iVar2 = **param_2;
            if (0xffffc7fe < iVar2 - 0x4001U) goto code_r0x0800c838;
        }
        else {
            iVar2 = 0;
        }
        if (iVar1 == 0) goto code_r0x0800c7f4;
    }
    else {
        if (iVar1 == 0) goto code_r0x0800c7f4;
        ipc_log_string(*(iVar1 + 0x6e0),"Bad control-OUT transfer");
        _printk(0x8002503);
        iVar2 = 0;
    }
    ipc_log_string(*(iVar1 + 0x6e0),"Illegal NTB INPUT SIZE %d from host",iVar2);
    _printk(0x8002b39,iVar2);
code_r0x0800c7f4:
    usb_ep_set_halt(param_1);
    return;
}


// ===== sym.gsi_ctrl_notify_resp_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004950 (size 8) =====

void sym.gsi_ctrl_notify_resp_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t *param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_2[7];
    iVar3 = *param_2;
    iVar1 = *(param_2 + 0x54);
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x6b8);
    *(arg1 + 0x668) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0x6b8,uVar2);
    if (iVar1 != -0x6c) {
        if (iVar1 == 0) {
            return;
        }
        if (iVar1 != -0x68) {
            if (arg1 == 0) {
                return;
            }
            ipc_log_string(*(arg1 + 0x6e0),"Unknown event %02x --> %d",*(iVar3 + 1),*(param_2 + 0x54));
            _printk(0x8001435,*(iVar3 + 1),*(param_2 + 0x54));
            return;
        }
    }
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"ESHUTDOWN/ECONNRESET, connection gone");
    }
    sym.gsi_ctrl_clear_cpkt_queues(arg1);
    sym.gsi_ctrl_send_cpkt_tomodem(arg1,0,0);
    return;
}


// ===== sym.gsi_ctrl_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004958 (size 8) =====

void sym.gsi_ctrl_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2[7] + 0x30);
    if (iVar1 != 0) {
        iVar1 = *(iVar1 + 0x30);
        sym.gsi_ctrl_send_cpkt_tomodem(param_2[7],*param_2,*(param_2 + 0xb));
        *(iVar1 + 0x94) = *(iVar1 + 0x94) & 0xfe;
    }
    return;
}


// ===== sym.usb_gsi_rw_timer_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004960 (size 8) =====

void sym.usb_gsi_rw_timer_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.usb_gsi_rw_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004968 (size 8) =====

void sym.usb_gsi_rw_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.gsi_ctrl_dev_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004970 (size 8) =====

ulong sym.gsi_ctrl_dev_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x2b0);
    if (iVar3 == 0x10) {
        iVar2 = ___ratelimit(obj.gsi_ctrl_dev_open._rs,"gsi_ctrl_dev_open",param_3,0);
        if (iVar2 != 0) {
            _printk(0x8002ca0,"gsi_ctrl_dev_open",0);
            return 0xffffffed;
        }
    }
    else {
        puVar4 = iVar3 + -0x4f8;
        uVar5 = *puVar4;
        if (6 < *puVar4) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009224);
            (*pcVar1)();
        }
        if (iVar3 != 0x5d0) {
            ipc_log_string(*(iVar3 + 0x110),"%s: open ctrl dev %s","gsi_ctrl_dev_open");
        }
        pcVar1 = obj.inst_status + uVar5 * 0x40;
        mutex_lock(pcVar1);
        *(param_2 + 0xd8) = puVar4;
        if (0x180 < (uVar5 << 6 | 0x30)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x8009228);
            (*pcVar1)();
        }
        if (obj.gsi_func_type[uVar5 * 0x40] != 0x0) {
            if (*(iVar3 + 0xa0) != '\0') {
                mutex_unlock(pcVar1);
                if (iVar3 != 0x5d0) {
                    ipc_log_string(*(iVar3 + 0x110),"%s: Already opened\n","gsi_ctrl_dev_open");
                }
                return 0xfffffff0;
            }
            *(iVar3 + 0xa0) = 1;
            mutex_unlock(pcVar1);
            return 0;
        }
        mutex_unlock(pcVar1);
        if (iVar3 != 0x5d0) {
            ipc_log_string(*(iVar3 + 0x110),"%s: [prot_id = %d], GSI instance freed already\n","gsi_ctrl_dev_open",
                           *puVar4);
            _printk(0x8001889,"gsi_ctrl_dev_open",*puVar4);
            return 0xffffffed;
        }
    }
    return 0xffffffed;
}


// ===== sym.seq_release.cfi_jt @ 0x08004978 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gsi_ctrl_dev_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08004980 (size 8) =====

ulong sym.gsi_ctrl_dev_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(param_2 + 0xd8);
    uVar7 = uVar2;
    if (6 < uVar2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8009350);
        (*pcVar3)();
    }
    pcVar3 = obj.inst_status + uVar7 * 0x40;
    mutex_lock(pcVar3);
    if ((uVar7 << 6 | 0x30) < 0x181) {
        uVar6 = uVar7 * 0x40 | 0x38;
        piVar1 = uVar7 * 0x40 + 0x8000578;
        if (obj.gsi_func_type[uVar7 * 0x40] == 0x0) {
            if (0x180 < uVar6) goto code_r0x08009348;
            if (*piVar1 != 0) {
                sym.gsi_inst_clean(*piVar1);
                *piVar1 = 0;
            }
            mutex_unlock(pcVar3);
            iVar4 = ___ratelimit(obj.gsi_ctrl_dev_release._rs,"gsi_ctrl_dev_release");
            if (iVar4 == 0) {
                uVar5 = 0xffffffed;
            }
            else {
                _printk(0x80015a5,"gsi_ctrl_dev_release",uVar2);
                uVar5 = 0xffffffed;
            }
        }
        else {
            if (0x180 < uVar6) goto code_r0x08009348;
            *(*(*piVar1 + 0xb8) + 0x670) = 0;
            iVar8 = *(*piVar1 + 0xb8);
            mutex_unlock(pcVar3);
            if (iVar8 != 0) {
                ipc_log_string(*(iVar8 + 0x6e0),"close ctrl dev %s\n",*(*piVar1 + 0xb8) + 0x5c0);
            }
            uVar5 = 0;
        }
        return uVar5;
    }
code_r0x08009348:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800934c);
    (*pcVar3)();
}


// ===== sym.rndis_rm_hdr.cfi_jt @ 0x08004988 (size 8) =====

ulong sym.rndis_rm_hdr.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_2 + 0xd8);
    if (*piVar3 == 1) {
        iVar1 = skb_pull(param_2,piVar3[2] + 8);
        if (iVar1 == 0) {
            __dev_kfree_skb_any(param_2,1);
            uVar2 = 0xffffffb5;
        }
        else {
            skb_trim(param_2,piVar3[3]);
            skb_queue_tail(param_3,param_2);
            uVar2 = 0;
        }
    }
    else {
        __dev_kfree_skb_any(param_2,1);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.init_module @ 0x08004990 (size 596) =====

uint64_t sym.init_module(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar10 [16];
    char acStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar9 = 1;
    uStack_3c = 0;
    _segment.ehdr = alloc_workqueue("k_ipa_usb",0xe,1);
    if (_segment.ehdr == 0) {
        _printk(0x80011f9,"fgsi_init");
        uVar4 = 0xfffffff4;
    }
    else {
        __mutex_init(obj.inst_status,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(0x8000580,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(reloc.gsi_opts_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"&inst_status[i].gsi_lock",
                     obj.inst_status);
        __mutex_init(0x8000600,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(obj.gsi_ida,"&inst_status[i].gsi_lock",obj.inst_status);
        __mutex_init(0x8000680,"&inst_status[i].gsi_lock",obj.inst_status);
        uVar4 = __class_create(obj.__this_module,"gsi_usb",obj.fgsi_init.__key.3);
        if (uVar4 < 0xfffffffffffff001) {
            uVar9 = 3;
            _segment.ehdr = uVar4;
            uVar2 = alloc_chrdev_region(&uStack_3c,0,3,"gsi_usb");
            if (uVar2 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,uStack_3c >> 0x14);
                _segment.ehdr = debugfs_create_dir("usb_gsi",0);
                if (_segment.ehdr != 0) {
                    debugfs_create_file("remote_wakeup_enable",0x180,_segment.ehdr,obj.inst_status,
                                        obj.fops_usb_gsi_rw);
                    debugfs_create_file("remote_wakeup_interval",0x180,_obj.debugfs,obj.inst_status,
                                        obj.fops_usb_gsi_rw_timer);
                    uVar9 = _obj.debugfs;
                    debugfs_create_bool("log_ctrl_packets",0x1a4,_obj.debugfs,0x80006d8);
                }
                uVar4 = usb_function_register(obj.inst_status);
                uVar4 = uVar4 & 0xffffffff;
            }
            else {
                uVar4 = uVar2;
                uVar9 = uVar4;
                _printk(0x8001acd,"fgsi_init",uVar4);
                class_destroy(_segment.ehdr);
                _segment.ehdr = 0;
            }
        }
        else {
            uVar9 = uVar4 & 0xffffffff;
            _segment.ehdr = 0;
            _printk(0x8001609,"fgsi_init",uVar9);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_write;
    pcStack_68 = sym.usb_gsi_rw_write;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    acStack_7c[0] = '\0';
    puStack_70 = &stack0xffffffffffffffd0;
    iVar5 = sym.get_connected_gsi();
    if (iVar5 != 0) {
        if (extraout_x1 == 0) {
            uVar6 = *(iVar5 + 0x6e0);
            pcVar8 = "%s: buffer is Null.\n";
        }
        else {
            iVar3 = kstrtou8_from_user(extraout_x1,uVar9,0,acStack_7c);
            if (iVar3 != 0) {
                ipc_log_string(*(iVar5 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_write",iVar3);
                _printk(0x8001629,"usb_gsi_rw_write",iVar3);
                goto code_r0x08004ce0;
            }
            if (*(iVar5 + 0x728) == (acStack_7c[0] != '\0')) {
                uVar6 = *(iVar5 + 0x6e0);
                if (acStack_7c[0] == '\0') {
                    pcVar8 = "%s: RW already disabled\n";
                }
                else {
                    pcVar8 = "%s: RW already enabled\n";
                }
            }
            else {
                *(iVar5 + 0x728) = acStack_7c[0] != '\0';
                iVar1 = _seq_lseek;
                if (acStack_7c[0] == '\0') {
                    del_timer_sync(iVar5 + 0x6f0);
                    uVar6 = *(iVar5 + 0x6e0);
                    pcVar8 = "%s: timer deleted\n";
                }
                else {
                    iVar7 = __msecs_to_jiffies(*(iVar5 + 0x72a));
                    mod_timer(iVar5 + 0x6f0,iVar7 + iVar1);
                    uVar6 = *(iVar5 + 0x6e0);
                    pcVar8 = "%s: timer initialized\n";
                }
            }
        }
        ipc_log_string(uVar6,pcVar8,"usb_gsi_rw_write");
    }
code_r0x08004ce0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar9;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18_00 = sym.usb_gsi_rw_open;
    uVar9 = single_open(auVar10._8_8_,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar10._0_8_ + 0x2d8));
    return uVar9;
}


// ===== sym.usb_gsi_rw_write @ 0x08004be4 (size 368) =====

int64_t sym.usb_gsi_rw_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    acStack_3c[0] = '\0';
    iVar3 = sym.get_connected_gsi();
    if (iVar3 != 0) {
        if (arg2 == 0) {
            uVar4 = *(iVar3 + 0x6e0);
            pcVar6 = "%s: buffer is Null.\n";
        }
        else {
            iVar2 = kstrtou8_from_user(arg2,arg3,0,acStack_3c);
            if (iVar2 != 0) {
                ipc_log_string(*(iVar3 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_write",iVar2);
                _printk(0x8001629,"usb_gsi_rw_write",iVar2);
                goto code_r0x08004ce0;
            }
            if (*(iVar3 + 0x728) == (acStack_3c[0] != '\0')) {
                uVar4 = *(iVar3 + 0x6e0);
                if (acStack_3c[0] == '\0') {
                    pcVar6 = "%s: RW already disabled\n";
                }
                else {
                    pcVar6 = "%s: RW already enabled\n";
                }
            }
            else {
                *(iVar3 + 0x728) = acStack_3c[0] != '\0';
                iVar1 = _seq_lseek;
                if (acStack_3c[0] == '\0') {
                    del_timer_sync(iVar3 + 0x6f0);
                    uVar4 = *(iVar3 + 0x6e0);
                    pcVar6 = "%s: timer deleted\n";
                }
                else {
                    iVar5 = __msecs_to_jiffies(*(iVar3 + 0x72a));
                    mod_timer(iVar3 + 0x6f0,iVar5 + iVar1);
                    uVar4 = *(iVar3 + 0x6e0);
                    pcVar6 = "%s: timer initialized\n";
                }
            }
        }
        ipc_log_string(uVar4,pcVar6,"usb_gsi_rw_write");
    }
code_r0x08004ce0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_open;
    iVar3 = single_open(auVar7._8_8_,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar7._0_8_ + 0x2d8));
    return iVar3;
}


// ===== sym.usb_gsi_rw_open @ 0x08004d54 (size 56) =====

void sym.usb_gsi_rw_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.usb_gsi_rw_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.get_connected_gsi @ 0x08004d8c (size 216) =====

int64_t sym.get_connected_gsi(void)

{
    int64_t iVar1;
    
    if (((((_segment.ehdr == 0) || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)) &&
        ((((((_segment.ehdr == 0 || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)) &&
           (((_segment.ehdr == 0 || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)))) &&
          (((_segment.ehdr == 0 || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)))) &&
         (((_segment.ehdr == 0 || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)))))) &&
       (((_segment.ehdr == 0 || (iVar1 = *(_segment.ehdr + 0xb8), iVar1 == 0)) || (*(iVar1 + 0x108) == 0)))) {
        return 0;
    }
    return iVar1;
}


// ===== sym.usb_gsi_rw_show @ 0x08004e7c (size 76) =====

ulong sym.usb_gsi_rw_show(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.get_connected_gsi();
    if (iVar1 != 0) {
        seq_printf(arg1,0x800254e,*(iVar1 + 0x728));
    }
    return 0;
}


// ===== sym.usb_gsi_rw_timer_write @ 0x08004ec8 (size 308) =====

int64_t sym.usb_gsi_rw_timer_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint16_t auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    auStack_3c[0] = 0;
    iVar2 = sym.get_connected_gsi();
    if (iVar2 != 0) {
        if (arg2 == 0) {
            ipc_log_string(*(iVar2 + 0x6e0),"%s: buffer is NULL.\n","usb_gsi_rw_timer_write");
        }
        else {
            iVar1 = kstrtou16_from_user(arg2,arg3,0,auStack_3c);
            if (iVar1 == 0) {
                if (auStack_3c[0] - 0x2711 < 0xffffd8f0) {
                    ipc_log_string(*(iVar2 + 0x6e0),"%s: value must be > 0 and < 10000.\n","usb_gsi_rw_timer_write");
                    _printk(0x8002d53,"usb_gsi_rw_timer_write");
                }
                else {
                    *(iVar2 + 0x72a) = auStack_3c[0];
                }
            }
            else {
                ipc_log_string(*(iVar2 + 0x6e0),"%s: Invalid value. err:%d\n","usb_gsi_rw_timer_write",iVar1);
                _printk(0x8001629,"usb_gsi_rw_timer_write",iVar1);
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.usb_gsi_rw_timer_open;
    iVar2 = single_open(auVar3._8_8_,sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                        *(auVar3._0_8_ + 0x2d8));
    return iVar2;
}


// ===== sym.usb_gsi_rw_timer_open @ 0x08004ffc (size 56) =====

void sym.usb_gsi_rw_timer_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.usb_gsi_rw_timer_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.usb_gsi_rw_timer_show @ 0x08005034 (size 76) =====

ulong sym.usb_gsi_rw_timer_show(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.get_connected_gsi();
    if (iVar1 != 0) {
        seq_printf(arg1,"%ums\n",*(iVar1 + 0x72a));
    }
    return 0;
}


// ===== sym.gsi_alloc_inst @ 0x08005080 (size 120) =====

int64_t sym.gsi_alloc_inst(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0xc0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0xa8) = sym.gsi_set_inst_name.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        *(iVar1 + 0xb0) = sym.gsi_free_inst.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        config_group_init_type_name(iVar1,0x8003173,obj.gsi_func_type);
    }
    return iVar1;
}


// ===== sym.gsi_alloc @ 0x080050f8 (size 316) =====

ulong sym.gsi_alloc(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0xb8);
    uVar1 = *(puVar3 + 0x1b);
    if (puVar3 != NULL) {
        ipc_log_string(puVar3[0xdc],"%s: prot id %d","gsi_bind_config",uVar1);
    }
    if (uVar1 < 5) {
        uVar2 = *(uVar1 * 8 + 0x8003ca0);
        *puVar3 = *(uVar1 * 8 + 0x8003c78);
        puVar3[1] = uVar2;
        puVar3[9] = sym.gsi_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[10] = sym.gsi_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xd] = sym.gsi_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xe] = sym.gsi_get_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xf] = sym.gsi_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x10] = sym.gsi_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0xb] = sym.gsi_free_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x14] = sym.gsi_get_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x15] = sym.gsi_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x12] = sym.gsi_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3[0x13] = sym.gsi_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        uVar2 = *(arg1 + 0xb8);
    }
    else {
        if (puVar3 != NULL) {
            ipc_log_string(puVar3[0xdc],"%s: invalid prot id %d","gsi_bind_config",uVar1);
            _printk(0x80012b4,"gsi_bind_config",uVar1);
        }
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.gsi_set_inst_name @ 0x08005234 (size 1256) =====

uint64_t sym.gsi_set_inst_name(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    unkbyte6 Stack_78;
    ushort uStack_72;
    unkbyte6 Stack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    Stack_70 = 0;
    uStack_80 = 0;
    Stack_78 = 0;
    uStack_72 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    iVar5 = strlen(arg2);
    if (0x28 < iVar5 + 1) {
        uVar9 = 0xffffffdc;
        goto code_r0x080055a4;
    }
    if (arg2 == 0) {
code_r0x080055e4:
        _printk(0x8002846,"gsi_set_inst_name",arg2);
        uVar9 = 0xffffffea;
        goto code_r0x080055a4;
    }
    iVar5 = strncasecmp(arg2,"rndis",5);
    if (iVar5 == 0) {
        iVar10 = 0;
        bVar3 = true;
    }
    else {
        iVar5 = strncasecmp(arg2,0x800323f,3);
        if (iVar5 == 0) {
            bVar3 = false;
            iVar10 = 1;
        }
        else {
            iVar5 = strncasecmp(arg2,"rmnet",5);
            if (iVar5 == 0) {
                bVar3 = false;
                iVar10 = 2;
            }
            else {
                iVar5 = strncasecmp(arg2,"mbim",4);
                if (iVar5 == 0) {
                    bVar3 = false;
                    iVar10 = 3;
                }
                else {
                    iVar5 = strncasecmp(arg2,0x8001f69,3);
                    if (iVar5 != 0) goto code_r0x080055e4;
                    bVar3 = false;
                    iVar10 = 4;
                }
            }
        }
    }
    pcVar4 = obj.inst_status + iVar10 * 0x40;
    mutex_lock(pcVar4);
    piVar12 = iVar10 * 0x40 + 0x8000578;
    iVar11 = *piVar12;
    mutex_unlock(pcVar4);
    if (iVar11 != 0) {
        _printk(0x80029ff,"gsi_set_inst_name",iVar10);
        uVar9 = 0xfffffff0;
        goto code_r0x080055a4;
    }
    if (bVar3) {
        config_group_init_type_name(arg1,*arg1,obj.gsi_func_rndis_type);
    }
    uVar9 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x730);
    if (uVar9 == 0) {
        uVar9 = 0xfffffffffffffff4;
        goto code_r0x080055a4;
    }
    *(uVar9 + 0x234) = 0;
    __init_waitqueue_head(uVar9 + 0x358,"&gsi->d_port.wait_for_ipa_ready",obj.gsi_function_init.__key);
    *(uVar9 + 0x238) = 0xfffffffe0;
    *(uVar9 + 0x240) = uVar9 + 0x240;
    *(uVar9 + 0x248) = uVar9 + 0x240;
    *(uVar9 + 0x250) = sym.ipa_work_handler.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    init_timer_key(uVar9 + 0x268,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    *(uVar9 + 0x20c) = 0xffffffeaffffffea;
    *(uVar9 + 0xd8) = iVar10;
    *(uVar9 + 0x2c0) = uVar2;
    *(uVar9 + 0x690) = uVar9 + 0x690;
    *(uVar9 + 0x698) = uVar9 + 0x690;
    *(uVar9 + 0x6a0) = uVar9 + 0x6a0;
    *(uVar9 + 0x6a8) = uVar9 + 0x6a0;
    *(uVar9 + 0x6b8) = 0;
    __init_waitqueue_head(uVar9 + 0x678,"&gsi->c_port.read_wq",obj.gsi_function_init.__key);
    uVar6 = *(uVar9 + 0xd8) - 2;
    if (2 < uVar6) goto code_r0x08005508;
    iVar11 = uVar9 + 0x5c0;
    strlcat(iVar11,*(uVar6 * 8 + 0x8003cc8),0xf);
    uVar6 = ida_alloc_range(obj.gsi_ida,0,2,0xcc0);
    if (uVar6 < 0) {
        _printk(0x8002371,"gsi_function_ctrl_port_init",uVar6);
code_r0x08005708:
        kfree(uVar9);
        uVar9 = uVar6;
    }
    else {
        iVar1 = uVar9 + 0x5d0;
        cdev_init(iVar1,obj.gsi_ctrl_dev_fops);
        uVar7 = cdev_add(iVar1,uVar6 | _segment.ehdr << 0x14,1);
        if (uVar7 != 0) {
            ipc_log_string(*(uVar9 + 0x6e0),"%s: Failed to add cdev for (%s)\n","gsi_function_ctrl_port_init",iVar11)
            ;
            _printk(0x8002a62,"gsi_function_ctrl_port_init",iVar11);
            ida_free(obj.gsi_ida,uVar6);
            uVar6 = uVar7;
            goto code_r0x08005708;
        }
        uVar8 = device_create(CONCAT44(*0x8000004,_segment.ehdr),0,uVar6 | _segment.ehdr << 0x14,0,iVar11);
        if (0xfffffffffffff000 < uVar8) {
            ipc_log_string(*(uVar9 + 0x6e0),"%s: device_create failed for (%s)\n","gsi_function_ctrl_port_init",
                           iVar11);
            _printk(0x8001bb8,"gsi_function_ctrl_port_init",iVar11);
            cdev_del(iVar1);
            ida_free(obj.gsi_ida,uVar6);
            uVar6 = uVar8;
            if (uVar8 != 0) goto code_r0x08005708;
        }
code_r0x08005508:
        *(uVar9 + 0x72a) = 500;
        init_timer_key(uVar9 + 0x6f0,sym.gsi_rw_timer_func.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0,0);
    }
    if (uVar9 < 0xfffffffffffff001) {
        *(arg1 + 0xb8) = uVar9;
        scnprintf(&uStack_98,0x2e,"gsi.%s",arg2);
        iVar11 = ipc_log_context_create(10,&uStack_98,0);
        if (iVar11 == 0) {
            _printk(0x8002552,"gsi_set_inst_name",&uStack_98);
        }
        *(*(arg1 + 0xb8) + 0x6e0) = iVar11;
        mutex_lock(pcVar4);
        *piVar12 = arg1;
        obj.gsi_func_type[iVar10 * 0x40] = 0x1;
        mutex_unlock(pcVar4);
        uVar9 = 0;
    }
code_r0x080055a4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar9 & 0xffffffff;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18 = sym.gsi_free_inst;
    iVar10 = *(uVar9 + 0xb8);
    if (iVar10 == 0) {
        return uVar9;
    }
    uVar6 = *(iVar10 + 0xd8);
    uVar8 = uVar6;
    if (5 < uVar6) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8005880);
        (*pcVar4)();
    }
    pcVar4 = obj.inst_status + uVar8 * 0x40;
    mutex_lock(pcVar4);
    if (*(*(uVar9 + 0xb8) + 0x670) == '\0') {
        ipc_log_context_destroy(*(*(uVar9 + 0xb8) + 0x6e0));
        iVar10 = *(uVar9 + 0xb8);
        uVar6 = *(iVar10 + 0x650);
        if (uVar6 != 0) {
            device_destroy(CONCAT44(*0x8000004,_segment.ehdr));
            cdev_del(iVar10 + 0x5d0);
            *(iVar10 + 0x650) = 0;
            ida_free(obj.gsi_ida,uVar6 & 0xfffff);
            iVar10 = *(uVar9 + 0xb8);
        }
        kfree(iVar10);
        kfree(uVar9);
        if ((uVar8 << 6 | 0x30) < 0x181) {
            obj.gsi_func_type[uVar8 * 0x40] = 0x0;
            if ((uVar8 << 6 | 0x38) < 0x181) {
                *(uVar8 * 0x40 + 0x8000578) = 0;
                uVar9 = mutex_unlock(pcVar4);
                return uVar9;
            }
        }
    }
    else if ((uVar8 << 6 | 0x30) < 0x181) {
        obj.gsi_func_type[uVar8 * 0x40] = 0x0;
        mutex_unlock(pcVar4);
        ipc_log_string(*(iVar10 + 0x6e0),"%s: [prot_id = %d] Dev is open, free mem when dev close\n","gsi_free_inst",
                       uVar6);
        uVar9 = _printk(0x8002018,"gsi_free_inst",uVar8);
        return uVar9;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x800587c);
    (*pcVar4)();
}


// ===== sym.gsi_free_inst @ 0x0800571c (size 356) =====

void sym.gsi_free_inst(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xb8);
    if (iVar4 == 0) {
        return;
    }
    uVar1 = *(iVar4 + 0xd8);
    uVar3 = uVar1;
    if (uVar1 < 6) {
        pcVar2 = obj.inst_status + uVar3 * 0x40;
        mutex_lock(pcVar2);
        if (*(*(arg1 + 0xb8) + 0x670) == '\0') {
            ipc_log_context_destroy(*(*(arg1 + 0xb8) + 0x6e0));
            iVar4 = *(arg1 + 0xb8);
            uVar1 = *(iVar4 + 0x650);
            if (uVar1 != 0) {
                device_destroy(_segment.ehdr);
                cdev_del(iVar4 + 0x5d0);
                *(iVar4 + 0x650) = 0;
                ida_free(obj.gsi_ida,uVar1 & 0xfffff);
                iVar4 = *(arg1 + 0xb8);
            }
            kfree(iVar4);
            kfree(arg1);
            if ((uVar3 << 6 | 0x30) < 0x181) {
                obj.gsi_func_type[uVar3 * 0x40] = 0x0;
                if ((uVar3 << 6 | 0x38) < 0x181) {
                    *(uVar3 * 0x40 + 0x8000578) = 0;
                    mutex_unlock(pcVar2);
                    return;
                }
            }
        }
        else if ((uVar3 << 6 | 0x30) < 0x181) {
            obj.gsi_func_type[uVar3 * 0x40] = 0x0;
            mutex_unlock(pcVar2);
            ipc_log_string(*(iVar4 + 0x6e0),"%s: [prot_id = %d] Dev is open, free mem when dev close\n",
                           "gsi_free_inst",uVar1);
            _printk(0x8002018,"gsi_free_inst",uVar3);
            return;
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(1,0x800587c);
        (*pcVar2)();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005880);
    (*pcVar2)();
}


// ===== sym.gsi_opts_release @ 0x08005880 (size 88) =====

void sym.gsi_opts_release(int64_t arg1)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xb8);
    if (puVar1 != NULL) {
        ipc_log_string(puVar1[0xdc],"%s: releasing %s instance\n","gsi_opts_release",*puVar1);
    }
    usb_put_function_instance(arg1);
    return;
}


// ===== sym.gsi_info_show @ 0x080058d8 (size 1544) =====

int64_t sym.gsi_info_show(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0xb8);
    iVar3 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x1000);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if ((iVar6 == 0) || (*(iVar6 + 0x108) == 0)) {
            uVar1 = 0;
        }
        else {
            uVar1 = scnprintf(iVar3,0x1000,"Info: Prot_id:%d\n",*(iVar6 + 0xd8));
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%55s\n",0x8003174);
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10s\n","Ctrl Name: ",iVar6 + 0x5c0);
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Online: ",*(iVar6 + 0x66c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Open: ",*(iVar6 + 0x670));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Host to Modem: ",*(iVar6 + 0x6c4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Modem to Host: ",*(iVar6 + 0x6d0));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Cpd to Modem: ",*(iVar6 + 0x6c8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Cpd From Modem: ",*(iVar6 + 0x6cc));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Ctrl Pkt Drops: ",*(iVar6 + 0x6d4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","==============");
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Protocol ID: ",*(iVar6 + 0xd8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","SM State: ",*(iVar6 + 0x2c8));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN XferRscIndex: ",*(iVar6 + 0x214));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10d\n","IN Chnl Hdl: ",*(iVar6 + 0x20c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN Chnl Dbl Addr: ",*(iVar6 + 0x158));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN TRB Ring Len: ",*(iVar6 + 0x44c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN TRB Base Addr: ",*(iVar6 + 0x460));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","GEVENTCNTLO IN Addr: ",*(iVar6 + 0x440));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","DEPCMDLO IN Addr: ",*(iVar6 + 0x454));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","IN LastTRB Addr Off: ",*(iVar6 + 0x450));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN Buffer Size: ",*(iVar6 + 0x452));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","IN/DL Aggr Size: ",*(iVar6 + 0x5b4));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","==============");
            uVar1 = uVar1 + iVar2;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT XferRscIndex: ",*(iVar6 + 0x218));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10d\n","OUT Channel Hdl: ",*(iVar6 + 0x210));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT Channel Dbl Addr: ",*(iVar6 + 0x1b0));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT TRB Ring Len: ",*(iVar6 + 0x564));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT TRB Base Addr: ",*(iVar6 + 0x578));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","GEVENTCNTLO OUT Addr: ",*(iVar6 + 0x558));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","DEPCMDLO OUT Addr: ",*(iVar6 + 0x56c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10x\n","OUT LastTRB Addr Off: ",*(iVar6 + 0x568));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT Buffer Size: ",*(iVar6 + 0x56a));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT/UL Aggr Size: ",*(iVar6 + 0x5ac));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","OUT/UL Packets to dev: ",*(iVar6 + 0x5b0))
            ;
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Net_ready_trigger:",*(iVar6 + 0x229));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s\n","USB Bus Events");
            uVar4 = uVar1 + iVar2;
            iVar5 = 0;
            do {
                iVar2 = scnprintf(iVar3 + uVar4,0x1000 - uVar4,0x800166e,*(iVar6 + 0x2cc + iVar5));
                iVar5 = iVar5 + 1;
                uVar1 = iVar2 + uVar4;
                uVar4 = uVar1;
            } while (iVar5 != 0x80);
            iVar2 = scnprintf(iVar3 + uVar4,0x1000 - uVar4,0x8002b67);
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Eventq head: ",*(iVar6 + 0x34c));
            uVar1 = iVar2 + uVar1;
            iVar2 = scnprintf(iVar3 + uVar1,0x1000 - uVar1,"%25s %10u\n","Eventq tail: ",*(iVar6 + 0x34d));
            uVar1 = iVar2 + uVar1;
            if (0xfff < uVar1) {
                uVar1 = 0x1000;
            }
        }
        iVar2 = scnprintf(arg2,uVar1,iVar3);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.gsi_rndis_class_id_show @ 0x08005ee4 (size 64) =====

int64_t sym.gsi_rndis_class_id_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800254e,*(*(arg1 + 0xb8) + 0x110));
    return iVar1;
}


// ===== sym.gsi_rndis_class_id_store @ 0x08005f24 (size 148) =====

//WARNING: Type propagation algorithm not settling

int64_t sym.gsi_rndis_class_id_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong in_x3;
    uint64_t uVar8;
    ulong uVar9;
    uint uVar10;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *arg1_00;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    uVar10 = in_x3 >> 0x20;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0xb8);
    auStack_2c[0] = 0;
    iVar3 = kstrtou8(arg2,0,auStack_2c);
    if ((iVar3 == 0) && (auStack_2c[0] - 1 < 9)) {
        *(iVar11 + 0x110) = auStack_2c[0];
    }
    else {
        arg3 = -0x16;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ipa_work_handler;
    pcStack_78 = sym.ipa_work_handler;
    iVar12 = sp_el0;
    iVar11 = iVar4 + 0x118;
    iStack_88 = *(iVar12 + 0x5e0);
    arg1_00 = iVar4 + -0x110;
    iVar12 = iVar4 + -0x238;
    iVar15 = *(iVar4 + -0x50);
    auStack_8c[0] = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    uVar5 = _raw_spin_lock_irqsave(iVar11);
    if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
        if (iVar12 == 0) {
            iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
            uVar14 = 0;
            goto code_r0x080060b4;
        }
        ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","read_event");
        _raw_spin_unlock_irqrestore(iVar11,uVar5);
        uVar14 = 0;
code_r0x08006070:
        uVar8 = uVar14;
        iVar6 = ipc_log_string(*(iVar4 + 0x4a8),"%s: event = %x sm_state %x","ipa_work_handler",uVar8,
                               *(iVar4 + 0x90));
        uVar10 = uVar8 >> 0x20;
        if (iVar15 != 0) {
            bVar1 = false;
            goto joined_r0x080060c0;
        }
        ipc_log_string(*(iVar4 + 0x4a8),"%s(): gadget is NULL.\n","ipa_work_handler");
        uVar5 = 0x8002d8b;
    }
    else {
        uVar14 = *(iVar4 + 0x114) + 1 & 0x7f;
        *(iVar4 + 0x114) = uVar14;
        uVar14 = *(arg1_00 + uVar14 + 0x1a4);
        iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
        if (iVar12 != 0) goto code_r0x08006070;
code_r0x080060b4:
        if (iVar15 == 0) goto code_r0x08006a10;
        bVar1 = true;
joined_r0x080060c0:
        if ((iVar15 != -0x78) && (iVar15 = *(iVar15 + 0xd8), iVar15 != 0)) {
            switch(*(iVar4 + 0x90)) {
            case 0:
                break;
            case 1:
                if (uVar14 == 3) {
                    if (*(iVar4 + -0x130) == 0) {
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"USB cable not connected\n");
                            _printk(0x80027c8);
                        }
                    }
                    else {
                        sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                        if (bVar1) {
                            iVar3 = sym.gsi_ep_enable(iVar12);
                            if (iVar3 != 0) {
code_r0x08006120:
                                usb_composite_setup_continue(*(iVar4 + -0x48));
                                iVar12 = *(iVar4 + -0x50);
                                goto joined_r0x0800649c;
                            }
                        }
                        else {
                            uVar5 = *(iVar15 + 0x1f8);
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                            uVar10 = uVar5 >> 0x20;
                            uVar14 = sym.gsi_ep_enable(iVar12);
                            if (uVar14 != 0) {
                                uVar13 = uVar14;
                                uVar8 = uVar13;
                                ipc_log_string(*(iVar4 + 0x4a8),"%s:ep enable err %d","ipa_work_handler",uVar13);
                                uVar10 = uVar8 >> 0x20;
                                _printk(0x8001d4b,"ipa_work_handler",uVar13);
                                goto code_r0x08006120;
                            }
                        }
                        usb_composite_setup_continue(*(iVar4 + -0x48));
                        if (*(iVar4 + -0x160) == 0) {
                            iVar12 = *(iVar4 + -0x50);
                            *(iVar4 + 0x90) = 4;
                            goto joined_r0x0800649c;
                        }
                        iVar3 = sym.ipa_connect_channels(arg1_00);
                        if (iVar3 == 0) {
                            *(iVar4 + 0x90) = 2;
                            if (!bVar1) {
                                uVar5 = *(iVar4 + 0x4a8);
                                pcVar7 = "%s: ST_INIT_EVT_SET_ALT";
                                goto code_r0x080067c0;
                            }
                        }
                        else {
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler"
                                              );
                                _printk(0x800326c,"ipa_work_handler");
                            }
                            sym.ipa_data_path_disable(arg1_00);
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            *(iVar4 + 0x90) = 1;
                        }
                    }
                }
                break;
            case 2:
                if (uVar14 == 8) {
                    cVar2 = sym.peek_event(arg1_00);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1_00);
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(iVar4 + 0x90) = 1;
                        if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                            __pm_runtime_idle(iVar12,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS_DIS","ipa_work_handler");
                            uVar5 = *(iVar4 + 0x4a8);
                            uVar9 = *(iVar15 + 0x1f8);
                            pcVar7 = "%s: put_async1 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1_00);
                        if (iVar3 == 0) {
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS","ipa_work_handler");
                                uVar5 = *(iVar4 + 0x4a8);
                                uVar9 = *(iVar15 + 0x1f8);
                                pcVar7 = "%s: put_async2 = %d";
                                goto code_r0x08006970;
                            }
                        }
                    }
                }
                else if (uVar14 == 7) {
                    sym.ipa_data_path_disable(arg1_00);
                    sym.ipa_disconnect_channel(arg1_00);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async3 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 4) {
                    cVar2 = sym.peek_event(arg1_00);
                    if (cVar2 == '\b') {
                        if (!bVar1) {
                            uVar5 = *(iVar4 + 0x4a8);
                            pcVar7 = "%s: ST_WAIT_IPARDY_EVT_SUSPEND";
                            goto code_r0x080067c0;
                        }
                    }
                    else {
                        sym.ipa_data_path_enable(arg1_00);
                        *(iVar4 + 0x90) = 3;
                        if (!bVar1) {
                            uVar5 = *(iVar4 + 0x4a8);
                            pcVar7 = "%s: ST_WAIT_IPARDY_EVT_IPARDY %d";
                            uVar9 = 1000;
                            goto code_r0x08006970;
                        }
                    }
                }
                break;
            case 3:
                if ((uVar14 & 0xfffffffd) == 5) {
                    uVar5 = _raw_spin_lock_irqsave(iVar11);
                    if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
                        if (iVar12 != 0) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","peek_event");
                        }
                        _raw_spin_unlock_irqrestore(iVar11,uVar5);
                    }
                    else {
                        cVar2 = *(arg1_00 + (*(iVar4 + 0x114) + 1 & 0x7f) + 0x1a4);
                        _raw_spin_unlock_irqrestore(iVar11,uVar5);
                        if (cVar2 == '\x06') {
                            sym.read_event(arg1_00);
                            if (!bVar1) {
                                uVar5 = *(iVar4 + 0x4a8);
                                pcVar7 = "%s: NO_OP NRDY_RDY";
                                goto code_r0x080067c0;
                            }
                            break;
                        }
                    }
                    if (uVar14 == 5) {
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_HOST_NRDY\n","ipa_work_handler");
                        }
                        auStack_8c[0] = 1;
                        usb_gsi_ep_op(*arg1_00,auStack_8c,0xb);
                        sym.gsi_rndis_ipa_reset_trigger(arg1_00);
                        usb_gsi_ep_op(*arg1_00,0,6);
                        usb_gsi_ep_op(*(iVar4 + -0x108),0,6);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(iVar4 + 0x90) = 4;
                        if (bVar1) {
code_r0x0800675c:
                            iVar12 = *(iVar4 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        pcVar7 = "%s: ST_CON_EVT_HNRDY";
                    }
                    else {
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(iVar4 + 0x90) = 1;
                        if (bVar1) goto code_r0x0800675c;
                        pcVar7 = "%s: ST_CON_EVT_DIS";
                    }
                    ipc_log_string(*(iVar4 + 0x4a8),pcVar7,"ipa_work_handler");
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    uVar5 = *(iVar4 + 0x4a8);
                    uVar9 = *(iVar15 + 0x1f8);
                    pcVar7 = "%s: put_async4 = %d";
code_r0x08006970:
                    ipc_log_string(uVar5,pcVar7,"ipa_work_handler",uVar9);
                    uVar10 = uVar9 >> 0x20;
                }
                else if (uVar14 == 8) {
                    cVar2 = sym.peek_event(arg1_00);
                    if (cVar2 == '\a') {
                        sym.read_event(arg1_00);
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(iVar4 + 0x90) = 1;
                        if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                            __pm_runtime_idle(iVar12,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_EVT_SUS_DIS","ipa_work_handler");
                            uVar5 = *(iVar4 + 0x4a8);
                            uVar9 = *(iVar15 + 0x1f8);
                            pcVar7 = "%s: put_async5 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else {
                        iVar3 = sym.ipa_suspend_work_handler(arg1_00);
                        if (iVar3 == 0) {
                            if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                                __pm_runtime_idle(iVar12,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_CON_EVT_SUS","ipa_work_handler");
                                uVar5 = *(iVar4 + 0x4a8);
                                uVar9 = *(iVar15 + 0x1f8);
                                goto code_r0x080062fc;
                            }
                        }
                    }
                }
                break;
            case 4:
                if (uVar14 == 6) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    if (!bVar1) {
                        uVar5 = *(iVar15 + 0x1f8);
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                        uVar10 = uVar5 >> 0x20;
                        iVar3 = sym.ipa_connect_channels(arg1_00);
                        if (iVar3 != 0) {
                            ipc_log_string(*(iVar4 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler");
                            _printk(0x800326c,"ipa_work_handler");
                            iVar12 = *(iVar4 + -0x50);
                            goto joined_r0x0800649c;
                        }
                        sym.ipa_data_path_enable(arg1_00);
                        uVar5 = *(iVar4 + 0x4a8);
                        pcVar7 = "%s: ST_HOST_NRDY_EVT_HRDY_";
                        *(iVar4 + 0x90) = 3;
                        goto code_r0x080067c0;
                    }
                    iVar3 = sym.ipa_connect_channels(arg1_00);
                    if (iVar3 == 0) {
                        sym.ipa_data_path_enable(arg1_00);
                        goto code_r0x0800636c;
                    }
                    goto code_r0x0800675c;
                }
                if (uVar14 == 7) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    sym.ipa_data_path_disable(arg1_00);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_HOST_NRDY_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            default:
                if (!bVar1) {
                    uVar5 = *(iVar4 + 0x4a8);
                    pcVar7 = "%s: Invalid state to SM";
code_r0x080067c0:
                    ipc_log_string(uVar5,pcVar7,"ipa_work_handler");
                }
                break;
            case 6:
                if (uVar14 == 7) {
                    sym.ipa_data_path_disable(arg1_00);
                    sym.ipa_disconnect_channel(arg1_00);
                    *(iVar4 + 0x90) = 1;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_DIS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: put_async7 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 10) {
                    sym.ipa_resume_work_handler(arg1_00);
                    *(iVar4 + 0x90) = 3;
                    sym.usb_gadget_autopm_get_noresume(*(iVar4 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_RES","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
                        pcVar7 = "%s: get_nores1 = %d";
                        goto code_r0x08006970;
                    }
                }
                else if (uVar14 == 9) {
                    *(iVar4 + 0x90) = 7;
                    if ((*(iVar4 + -0x50) != 0) && (iVar12 = *(*(iVar4 + -0x50) + 0xd8), iVar12 != 0)) {
                        __pm_runtime_idle(iVar12,5);
                    }
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_IPA_SUS","ipa_work_handler");
                        uVar5 = *(iVar4 + 0x4a8);
                        uVar9 = *(iVar15 + 0x1f8);
code_r0x080062fc:
                        pcVar7 = "%s: put_async6 = %d";
                        goto code_r0x08006970;
                    }
                }
                break;
            case 7:
                if (uVar14 == 7) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    sym.ipa_data_path_disable(arg1_00);
                    sym.ipa_disconnect_channel(arg1_00);
                    *(iVar4 + 0x90) = 1;
                    if (bVar1) goto code_r0x0800675c;
                    ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_EVT_DIS","ipa_work_handler");
                    iVar12 = *(iVar4 + -0x50);
joined_r0x0800649c:
                    if ((iVar12 != 0) && (*(iVar12 + 0xd8) != 0)) {
                        __pm_runtime_idle(*(iVar12 + 0xd8),5);
                    }
                }
                else if (uVar14 == 10) {
                    sym.usb_gadget_autopm_get(*(iVar4 + -0x50));
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: ST_SUS_EVT_RES","ipa_work_handler");
                        uVar5 = *(iVar15 + 0x1f8);
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar5);
                        uVar10 = uVar5 >> 0x20;
                    }
                    sym.ipa_resume_work_handler(arg1_00);
code_r0x0800636c:
                    *(iVar4 + 0x90) = 3;
                }
            }
            uVar5 = _raw_spin_lock_irqsave(iVar11);
            if (*(iVar4 + 0x114) == *(iVar4 + 0x115)) {
                if (!bVar1) {
                    ipc_log_string(*(iVar4 + 0x4a8),"%s: event queue empty","peek_event");
                }
                iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
            }
            else {
                cVar2 = *(arg1_00 + (*(iVar4 + 0x114) + 1 & 0x7f) + 0x1a4);
                iVar6 = _raw_spin_unlock_irqrestore(iVar11,uVar5);
                if (cVar2 != '\0') {
                    if (!bVar1) {
                        ipc_log_string(*(iVar4 + 0x4a8),"%s: New events to process","ipa_work_handler");
                    }
                    uVar10 = 0;
                    iVar6 = queue_delayed_work_on(0x20,*(iVar4 + 0x88),iVar4,0);
                }
            }
            goto code_r0x08006a10;
        }
        if (bVar1) goto code_r0x08006a10;
        ipc_log_string(*(iVar4 + 0x4a8),"%s(): dev or dev->parent is NULL.\n","ipa_work_handler");
        uVar5 = 0x8002440;
    }
    iVar6 = _printk(uVar5,"ipa_work_handler");
code_r0x08006a10:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return iVar6;
    }
    iVar11 = __stack_chk_fail();
    uVar5 = CONCAT44(uVar10,*CONCAT44(extraout_x8 >> 0x20,*extraout_x8));
    *extraout_x18_00 = 0x8006b20;
    iVar12 = iVar11 + -0x6f0;
    if (*(iVar11 + -0x5e8) == 0) {
        iVar4 = iVar11;
        if (iVar12 != 0) {
            iVar4 = ipc_log_string(*(iVar11 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func",uVar5);
        }
        *(iVar11 + 0x38) = 0;
    }
    else {
        if (iVar12 == 0) {
            iVar12 = sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return iVar12;
            }
        }
        else {
            ipc_log_string(*(iVar11 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func",uVar5);
            iVar12 = sym.gsi_wakeup_host(iVar12);
            if (*(iVar11 + 0x38) == '\0') {
                return iVar12;
            }
            ipc_log_string(*(iVar11 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar12 = _seq_lseek;
        iVar4 = __msecs_to_jiffies(*(iVar11 + 0x3a));
        iVar4 = mod_timer(iVar11,iVar4 + iVar12);
    }
    return iVar4;
}


// ===== sym.ipa_work_handler @ 0x08005fb8 (size 2976) =====

//WARNING: Type propagation algorithm not settling

void sym.ipa_work_handler(int64_t arg1)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong in_x3;
    uint64_t uVar7;
    ulong uVar8;
    uint uVar9;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    uVar9 = in_x3 >> 0x20;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar5 = arg1 + 0x118;
    iStack_58 = *(iVar10 + 0x5e0);
    arg1_00 = arg1 + -0x110;
    iVar10 = arg1 + -0x238;
    iVar13 = *(arg1 + -0x50);
    auStack_5c[0] = 0;
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    if (*(arg1 + 0x114) == *(arg1 + 0x115)) {
        if (iVar10 == 0) {
            _raw_spin_unlock_irqrestore(iVar5,uVar4);
            uVar12 = 0;
            goto code_r0x080060b4;
        }
        ipc_log_string(*(arg1 + 0x4a8),"%s: event queue empty","read_event");
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        uVar12 = 0;
code_r0x08006070:
        uVar7 = uVar12;
        ipc_log_string(*(arg1 + 0x4a8),"%s: event = %x sm_state %x","ipa_work_handler",uVar7,*(arg1 + 0x90));
        uVar9 = uVar7 >> 0x20;
        if (iVar13 != 0) {
            bVar1 = false;
            goto joined_r0x0800609c;
        }
        ipc_log_string(*(arg1 + 0x4a8),"%s(): gadget is NULL.\n","ipa_work_handler");
        uVar4 = 0x8002d8b;
    }
    else {
        uVar12 = *(arg1 + 0x114) + 1 & 0x7f;
        *(arg1 + 0x114) = uVar12;
        uVar12 = *(arg1_00 + uVar12 + 0x1a4);
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        if (iVar10 != 0) goto code_r0x08006070;
code_r0x080060b4:
        if (iVar13 == 0) goto code_r0x08006a10;
        bVar1 = true;
joined_r0x0800609c:
        if ((iVar13 != -0x78) && (iVar13 = *(iVar13 + 0xd8), iVar13 != 0)) {
            if (*(arg1 + 0x90) < 8) {
    //switch table (8 cases) at 0x8001080
                switch(*(*(arg1 + 0x90) * 4 + 0x8001080) + 0x80060e0) {
                case 0x80060f4:
                    if (uVar12 == 3) {
                        if (*(arg1 + -0x130) == 0) {
                            if (!bVar1) {
                                ipc_log_string(*(arg1 + 0x4a8),"USB cable not connected\n");
                                _printk(0x80027c8);
                            }
                        }
                        else {
                            sym.usb_gadget_autopm_get(*(arg1 + -0x50));
                            if (bVar1) {
                                iVar3 = sym.gsi_ep_enable(iVar10);
                                if (iVar3 != 0) {
code_r0x08006120:
                                    usb_composite_setup_continue(*(arg1 + -0x48));
                                    iVar10 = *(arg1 + -0x50);
                                    goto joined_r0x0800649c;
                                }
                            }
                            else {
                                uVar4 = *(iVar13 + 0x1f8);
                                ipc_log_string(*(arg1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                                uVar9 = uVar4 >> 0x20;
                                uVar12 = sym.gsi_ep_enable(iVar10);
                                if (uVar12 != 0) {
                                    uVar11 = uVar12;
                                    uVar7 = uVar11;
                                    ipc_log_string(*(arg1 + 0x4a8),"%s:ep enable err %d","ipa_work_handler",uVar11);
                                    uVar9 = uVar7 >> 0x20;
                                    _printk(0x8001d4b,"ipa_work_handler",uVar11);
                                    goto code_r0x08006120;
                                }
                            }
                            usb_composite_setup_continue(*(arg1 + -0x48));
                            if (*(arg1 + -0x160) == 0) {
                                iVar10 = *(arg1 + -0x50);
                                *(arg1 + 0x90) = 4;
                                goto joined_r0x0800649c;
                            }
                            iVar3 = sym.ipa_connect_channels(arg1_00);
                            if (iVar3 == 0) {
                                *(arg1 + 0x90) = 2;
                                if (!bVar1) {
                                    uVar4 = *(arg1 + 0x4a8);
                                    pcVar6 = "%s: ST_INIT_EVT_SET_ALT";
                                    goto code_r0x080067c0;
                                }
                            }
                            else {
                                if (!bVar1) {
                                    ipc_log_string(*(arg1 + 0x4a8),"%s: ipa_connect_channels failed\n",
                                                   "ipa_work_handler");
                                    _printk(0x800326c,"ipa_work_handler");
                                }
                                sym.ipa_data_path_disable(arg1_00);
                                if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                    __pm_runtime_idle(iVar10,5);
                                }
                                *(arg1 + 0x90) = 1;
                            }
                        }
                    }
                    break;
                case 0x8006164:
                    if (uVar12 == 8) {
                        cVar2 = sym.peek_event(arg1_00);
                        if (cVar2 == '\a') {
                            sym.read_event(arg1_00);
                            sym.ipa_data_path_disable(arg1_00);
                            sym.ipa_disconnect_channel(arg1_00);
                            *(arg1 + 0x90) = 1;
                            if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(arg1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS_DIS","ipa_work_handler");
                                uVar4 = *(arg1 + 0x4a8);
                                uVar8 = *(iVar13 + 0x1f8);
                                pcVar6 = "%s: put_async1 = %d";
                                goto code_r0x08006970;
                            }
                        }
                        else {
                            iVar3 = sym.ipa_suspend_work_handler(arg1_00);
                            if (iVar3 == 0) {
                                if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                    __pm_runtime_idle(iVar10,5);
                                }
                                if (!bVar1) {
                                    ipc_log_string(*(arg1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_SUS","ipa_work_handler");
                                    uVar4 = *(arg1 + 0x4a8);
                                    uVar8 = *(iVar13 + 0x1f8);
                                    pcVar6 = "%s: put_async2 = %d";
                                    goto code_r0x08006970;
                                }
                            }
                        }
                    }
                    else if (uVar12 == 7) {
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(arg1 + 0x90) = 1;
                        if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(arg1 + 0x4a8),"%s: ST_WAIT_IPARDY_EVT_DIS","ipa_work_handler");
                            uVar4 = *(arg1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
                            pcVar6 = "%s: put_async3 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else if (uVar12 == 4) {
                        cVar2 = sym.peek_event(arg1_00);
                        if (cVar2 == '\b') {
                            if (!bVar1) {
                                uVar4 = *(arg1 + 0x4a8);
                                pcVar6 = "%s: ST_WAIT_IPARDY_EVT_SUSPEND";
                                goto code_r0x080067c0;
                            }
                        }
                        else {
                            sym.ipa_data_path_enable(arg1_00);
                            *(arg1 + 0x90) = 3;
                            if (!bVar1) {
                                uVar4 = *(arg1 + 0x4a8);
                                pcVar6 = "%s: ST_WAIT_IPARDY_EVT_IPARDY %d";
                                uVar8 = 1000;
                                goto code_r0x08006970;
                            }
                        }
                    }
                    break;
                case 0x80061a8:
                    if ((uVar12 & 0xfffffffd) == 5) {
                        uVar4 = _raw_spin_lock_irqsave(iVar5);
                        if (*(arg1 + 0x114) == *(arg1 + 0x115)) {
                            if (iVar10 != 0) {
                                ipc_log_string(*(arg1 + 0x4a8),"%s: event queue empty","peek_event");
                            }
                            _raw_spin_unlock_irqrestore(iVar5,uVar4);
                        }
                        else {
                            cVar2 = *(arg1_00 + (*(arg1 + 0x114) + 1 & 0x7f) + 0x1a4);
                            _raw_spin_unlock_irqrestore(iVar5,uVar4);
                            if (cVar2 == '\x06') {
                                sym.read_event(arg1_00);
                                if (!bVar1) {
                                    uVar4 = *(arg1 + 0x4a8);
                                    pcVar6 = "%s: NO_OP NRDY_RDY";
                                    goto code_r0x080067c0;
                                }
                                break;
                            }
                        }
                        if (uVar12 == 5) {
                            if (!bVar1) {
                                ipc_log_string(*(arg1 + 0x4a8),"%s: ST_CON_HOST_NRDY\n","ipa_work_handler");
                            }
                            auStack_5c[0] = 1;
                            usb_gsi_ep_op(*arg1_00,&stack0xffffffffffffffa4,0xb);
                            sym.gsi_rndis_ipa_reset_trigger(arg1_00);
                            usb_gsi_ep_op(*arg1_00,0,6);
                            usb_gsi_ep_op(*(arg1 + -0x108),0,6);
                            sym.ipa_disconnect_channel(arg1_00);
                            *(arg1 + 0x90) = 4;
                            if (bVar1) {
code_r0x0800675c:
                                iVar10 = *(arg1 + -0x50);
                                goto joined_r0x0800649c;
                            }
                            pcVar6 = "%s: ST_CON_EVT_HNRDY";
                        }
                        else {
                            sym.ipa_data_path_disable(arg1_00);
                            sym.ipa_disconnect_channel(arg1_00);
                            *(arg1 + 0x90) = 1;
                            if (bVar1) goto code_r0x0800675c;
                            pcVar6 = "%s: ST_CON_EVT_DIS";
                        }
                        ipc_log_string(*(arg1 + 0x4a8),pcVar6,"ipa_work_handler");
                        if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        uVar4 = *(arg1 + 0x4a8);
                        uVar8 = *(iVar13 + 0x1f8);
                        pcVar6 = "%s: put_async4 = %d";
code_r0x08006970:
                        ipc_log_string(uVar4,pcVar6,"ipa_work_handler",uVar8);
                        uVar9 = uVar8 >> 0x20;
                    }
                    else if (uVar12 == 8) {
                        cVar2 = sym.peek_event(arg1_00);
                        if (cVar2 == '\a') {
                            sym.read_event(arg1_00);
                            sym.ipa_data_path_disable(arg1_00);
                            sym.ipa_disconnect_channel(arg1_00);
                            *(arg1 + 0x90) = 1;
                            if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(arg1 + 0x4a8),"%s: ST_CON_EVT_SUS_DIS","ipa_work_handler");
                                uVar4 = *(arg1 + 0x4a8);
                                uVar8 = *(iVar13 + 0x1f8);
                                pcVar6 = "%s: put_async5 = %d";
                                goto code_r0x08006970;
                            }
                        }
                        else {
                            iVar3 = sym.ipa_suspend_work_handler(arg1_00);
                            if (iVar3 == 0) {
                                if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                    __pm_runtime_idle(iVar10,5);
                                }
                                if (!bVar1) {
                                    ipc_log_string(*(arg1 + 0x4a8),"%s: ST_CON_EVT_SUS","ipa_work_handler");
                                    uVar4 = *(arg1 + 0x4a8);
                                    uVar8 = *(iVar13 + 0x1f8);
                                    goto code_r0x080062fc;
                                }
                            }
                        }
                    }
                    break;
                case 0x8006200:
                    if (uVar12 != 6) {
                        if (uVar12 == 7) {
                            sym.usb_gadget_autopm_get(*(arg1 + -0x50));
                            sym.ipa_data_path_disable(arg1_00);
                            *(arg1 + 0x90) = 1;
                            if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                                __pm_runtime_idle(iVar10,5);
                            }
                            if (!bVar1) {
                                ipc_log_string(*(arg1 + 0x4a8),"%s: ST_HOST_NRDY_EVT_DIS","ipa_work_handler");
                                uVar4 = *(arg1 + 0x4a8);
                                uVar8 = *(iVar13 + 0x1f8);
                                pcVar6 = "%s: put_async = %d";
                                goto code_r0x08006970;
                            }
                        }
                        break;
                    }
                    sym.usb_gadget_autopm_get(*(arg1 + -0x50));
                    if (bVar1) {
                        iVar3 = sym.ipa_connect_channels(arg1_00);
                        if (iVar3 == 0) {
                            sym.ipa_data_path_enable(arg1_00);
                            goto code_r0x0800636c;
                        }
                        goto code_r0x0800675c;
                    }
                    uVar4 = *(iVar13 + 0x1f8);
                    ipc_log_string(*(arg1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                    uVar9 = uVar4 >> 0x20;
                    iVar3 = sym.ipa_connect_channels(arg1_00);
                    if (iVar3 != 0) {
                        ipc_log_string(*(arg1 + 0x4a8),"%s: ipa_connect_channels failed\n","ipa_work_handler");
                        _printk(0x800326c,"ipa_work_handler");
                        iVar10 = *(arg1 + -0x50);
                        goto joined_r0x0800649c;
                    }
                    sym.ipa_data_path_enable(arg1_00);
                    uVar4 = *(arg1 + 0x4a8);
                    pcVar6 = "%s: ST_HOST_NRDY_EVT_HRDY_";
                    *(arg1 + 0x90) = 3;
                    goto code_r0x080067c0;
                case 0x8006280:
                    goto code_r0x08006280;
                case 0x8006298:
                    if (uVar12 == 7) {
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(arg1 + 0x90) = 1;
                        if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(arg1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_DIS","ipa_work_handler");
                            uVar4 = *(arg1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
                            pcVar6 = "%s: put_async7 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else if (uVar12 == 10) {
                        sym.ipa_resume_work_handler(arg1_00);
                        *(arg1 + 0x90) = 3;
                        sym.usb_gadget_autopm_get_noresume(*(arg1 + -0x50));
                        if (!bVar1) {
                            ipc_log_string(*(arg1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_RES","ipa_work_handler");
                            uVar4 = *(arg1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
                            pcVar6 = "%s: get_nores1 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    else if (uVar12 == 9) {
                        *(arg1 + 0x90) = 7;
                        if ((*(arg1 + -0x50) != 0) && (iVar10 = *(*(arg1 + -0x50) + 0xd8), iVar10 != 0)) {
                            __pm_runtime_idle(iVar10,5);
                        }
                        if (!bVar1) {
                            ipc_log_string(*(arg1 + 0x4a8),"%s: ST_SUS_IN_PROG_EVT_IPA_SUS","ipa_work_handler");
                            uVar4 = *(arg1 + 0x4a8);
                            uVar8 = *(iVar13 + 0x1f8);
code_r0x080062fc:
                            pcVar6 = "%s: put_async6 = %d";
                            goto code_r0x08006970;
                        }
                    }
                    break;
                case 0x8006310:
                    if (uVar12 == 7) {
                        sym.usb_gadget_autopm_get(*(arg1 + -0x50));
                        sym.ipa_data_path_disable(arg1_00);
                        sym.ipa_disconnect_channel(arg1_00);
                        *(arg1 + 0x90) = 1;
                        if (bVar1) goto code_r0x0800675c;
                        ipc_log_string(*(arg1 + 0x4a8),"%s: ST_SUS_EVT_DIS","ipa_work_handler");
                        iVar10 = *(arg1 + -0x50);
joined_r0x0800649c:
                        if ((iVar10 != 0) && (*(iVar10 + 0xd8) != 0)) {
                            __pm_runtime_idle(*(iVar10 + 0xd8),5);
                        }
                    }
                    else if (uVar12 == 10) {
                        sym.usb_gadget_autopm_get(*(arg1 + -0x50));
                        if (!bVar1) {
                            ipc_log_string(*(arg1 + 0x4a8),"%s: ST_SUS_EVT_RES","ipa_work_handler");
                            uVar4 = *(iVar13 + 0x1f8);
                            ipc_log_string(*(arg1 + 0x4a8),"%s: get = %d","ipa_work_handler",uVar4);
                            uVar9 = uVar4 >> 0x20;
                        }
                        sym.ipa_resume_work_handler(arg1_00);
code_r0x0800636c:
                        *(arg1 + 0x90) = 3;
                    }
                }
            }
            else {
code_r0x08006280:
                if (!bVar1) {
                    uVar4 = *(arg1 + 0x4a8);
                    pcVar6 = "%s: Invalid state to SM";
code_r0x080067c0:
                    ipc_log_string(uVar4,pcVar6,"ipa_work_handler");
                }
            }
            uVar4 = _raw_spin_lock_irqsave(iVar5);
            if (*(arg1 + 0x114) == *(arg1 + 0x115)) {
                if (!bVar1) {
                    ipc_log_string(*(arg1 + 0x4a8),"%s: event queue empty","peek_event");
                }
                _raw_spin_unlock_irqrestore(iVar5,uVar4);
            }
            else {
                cVar2 = *(arg1_00 + (*(arg1 + 0x114) + 1 & 0x7f) + 0x1a4);
                _raw_spin_unlock_irqrestore(iVar5,uVar4);
                if (cVar2 != '\0') {
                    if (!bVar1) {
                        ipc_log_string(*(arg1 + 0x4a8),"%s: New events to process","ipa_work_handler");
                    }
                    uVar9 = 0;
                    queue_delayed_work_on(0x20,*(arg1 + 0x88),arg1,0);
                }
            }
            goto code_r0x08006a10;
        }
        if (bVar1) goto code_r0x08006a10;
        ipc_log_string(*(arg1 + 0x4a8),"%s(): dev or dev->parent is NULL.\n","ipa_work_handler");
        uVar4 = 0x8002440;
    }
    _printk(uVar4,"ipa_work_handler");
code_r0x08006a10:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    iVar5 = __stack_chk_fail();
    uVar4 = CONCAT44(uVar9,*CONCAT44(extraout_x8 >> 0x20,*extraout_x8));
    *extraout_x18 = 0x8006b20;
    iVar10 = iVar5 + -0x6f0;
    if (*(iVar5 + -0x5e8) == 0) {
        if (iVar10 != 0) {
            ipc_log_string(*(iVar5 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func",uVar4);
        }
        *(iVar5 + 0x38) = 0;
    }
    else {
        if (iVar10 == 0) {
            sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return;
            }
        }
        else {
            ipc_log_string(*(iVar5 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func",uVar4);
            sym.gsi_wakeup_host(iVar10);
            if (*(iVar5 + 0x38) == '\0') {
                return;
            }
            ipc_log_string(*(iVar5 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar10 = _seq_lseek;
        iVar13 = __msecs_to_jiffies(*(iVar5 + 0x3a));
        mod_timer(iVar5,iVar13 + iVar10);
    }
    return;
}


// ===== sym.gsi_rw_timer_func @ 0x08006b58 (size 224) =====

void sym.gsi_rw_timer_func(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1 + -0x6f0;
    if (*(arg1 + -0x5e8) == 0) {
        if (iVar2 != 0) {
            ipc_log_string(*(arg1 + -0x10),"%s: gsi not connected.. bail-out\n","gsi_rw_timer_func");
        }
        *(arg1 + 0x38) = 0;
    }
    else {
        if (iVar2 == 0) {
            sym.gsi_wakeup_host(0);
            if (*0x728 == '\0') {
                return;
            }
        }
        else {
            ipc_log_string(*(arg1 + -0x10),"%s: calling gsi_wakeup_host\n","gsi_rw_timer_func");
            sym.gsi_wakeup_host(iVar2);
            if (*(arg1 + 0x38) == '\0') {
                return;
            }
            ipc_log_string(*(arg1 + -0x10),"%s: re-arm the timer\n","gsi_rw_timer_func");
        }
        iVar2 = _seq_lseek;
        iVar1 = __msecs_to_jiffies(*(arg1 + 0x3a));
        mod_timer(arg1,iVar1 + iVar2);
    }
    return;
}


// ===== sym.read_event @ 0x08006c3c (size 144) =====

void sym.read_event(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x228);
    if (*(arg1 + 0x224) == *(arg1 + 0x225)) {
        if (arg1 != 0x128) {
            ipc_log_string(*(arg1 + 0x5b8),"%s: event queue empty","read_event");
        }
    }
    else {
        *(arg1 + 0x224) = *(arg1 + 0x224) + 1U & 0x7f;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x228,uVar1);
    return;
}


// ===== sym.usb_gadget_autopm_get @ 0x08006ccc (size 80) =====

void sym.usb_gadget_autopm_get(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (*(arg1 + 0xd8) != 0)) && (iVar1 = __pm_runtime_resume(*(arg1 + 0xd8),4), iVar1 < 0)) {
        __pm_runtime_idle(*(arg1 + 0xd8),4);
    }
    return;
}


// ===== sym.gsi_ep_enable @ 0x08006d1c (size 256) =====

int sym.gsi_ep_enable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x128) != 0) && (*(*(arg1 + 0x128) + 0x38) == 0)) {
        iVar1 = config_ep_by_speed(*(arg1 + 0x1e8),arg1);
        if (iVar1 != 0) {
            return iVar1;
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: Enable IN ep","gsi_ep_enable");
        }
        iVar1 = usb_gsi_ep_op(*(arg1 + 0x128),arg1 + 0x138,0);
        if (iVar1 != 0) {
            return iVar1;
        }
    }
    if ((*(arg1 + 0x130) == 0) || (*(*(arg1 + 0x130) + 0x38) != 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = config_ep_by_speed(*(arg1 + 0x1e8),arg1);
        if (iVar1 == 0) {
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"%s: Enable OUT ep","gsi_ep_enable");
            }
            iVar1 = usb_gsi_ep_op(*(arg1 + 0x130),arg1 + 400,0);
            if ((iVar1 != 0) && (*(arg1 + 0x128) != 0)) {
                usb_gsi_ep_op(*(arg1 + 0x128),arg1 + 0x138,0xd);
            }
        }
    }
    return iVar1;
}


// ===== sym.ipa_connect_channels @ 0x08006e1c (size 2020) =====

uint64_t sym.ipa_connect_channels(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auStack_fc [4];
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    char *pcStack_e0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    ulong uStack_90;
    uint uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar8 = arg1 + -0x128;
    uStack_68 = 0;
    iStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    piVar12 = *(*(arg1 + -0xf8) + 0x30);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (iVar8 == 0) {
        uVar4 = usb_gsi_ep_op(*arg1,arg1 + 0x10,9);
        uVar10 = uVar4;
        if (uVar4 != 0) goto code_r0x080073d8;
        uVar4 = usb_gsi_ep_op(*arg1,arg1 + 0x10,1);
        uVar10 = uVar4;
        if (uVar4 == 0) goto code_r0x08006ebc;
    }
    else {
        ipc_log_string(*(arg1 + 0x5b8),"IN: num_bufs:=%zu, buf_len=%zu\n",*(arg1 + 0x20),*(arg1 + 0x28));
        uVar4 = usb_gsi_ep_op(*arg1,arg1 + 0x10,9);
        if (uVar4 != 0) {
            uVar10 = uVar4;
            ipc_log_string(*(arg1 + 0x5b8),"%s: GSI_EP_OP_PREPARE_TRBS failed: %d\n","ipa_connect_channels",uVar10);
            _printk(0x8001d95,"ipa_connect_channels",uVar10);
            arg1 = "ipa_connect_channels";
            goto code_r0x080073d8;
        }
        uVar4 = usb_gsi_ep_op(*arg1,arg1 + 0x10,1);
        if (uVar4 != 0) {
            uVar10 = uVar4;
            ipc_log_string(*(arg1 + 0x5b8),"%s: GSI_EP_OP_STARTXFER failed: %d\n","ipa_connect_channels",uVar10);
            _printk(0x8001dbe,"ipa_connect_channels",uVar10);
            goto code_r0x080073c8;
        }
code_r0x08006ebc:
        iVar1 = arg1 + 0x248;
        uVar5 = usb_gsi_ep_op(*arg1,0,8);
        *(arg1 + 0xec) = uVar5;
        memset(iVar1,0,0x118);
        iStack_60 = arg1 + 0x10;
        usb_gsi_ep_op(*arg1,&uStack_80,7);
        if (iVar8 != 0) {
            ipc_log_string(*(arg1 + 0x5b8),"%s: USB GSI IN OPS Completed","ipa_connect_channels");
        }
        *(arg1 + 0x314) = *(arg1 + -0x50);
        uVar5 = 0x1b;
        if (*(arg1 + -0x50) != 4) {
            uVar5 = 0x13;
        }
        *(arg1 + 0x318) = uStack_78._4_4_;
        iVar2 = arg1 + 0x360;
        *(arg1 + 0x31c) = uStack_70;
        *(arg1 + 0x248) = uVar5;
        *(arg1 + 0x324) = uStack_70._2_2_;
        *(arg1 + 0x2a8) = 0;
        *(arg1 + 800) = 0;
        *(arg1 + 0x328) = uStack_80;
        *(arg1 + 0x338) = uStack_68;
        *(arg1 + 0x340) = *(arg1 + 0x20) * *(arg1 + 0x28);
        *(arg1 + 0x348) = *(arg1 + 0x18);
        *(arg1 + 0x350) = arg1 + 0x48;
        *(arg1 + 0x358) = arg1 + 0x58;
        if (iVar8 != 0) {
            ipc_log_string(*(arg1 + 0x5b8),"%s(): IN: sgt_xfer_rings:%pK sgt_data_buff:%pK\n","ipa_connect_channels");
        }
        *(arg1 + 0x32a) = uStack_80._2_1_;
        *(arg1 + 0x32c) = uStack_80._4_4_;
        *(arg1 + 0x330) = uStack_78;
        if (*(arg1 + 8) == 0) {
code_r0x08007100:
            uVar4 = *(*piVar12 + 0x58);
            *(arg1 + 0x47e) = *(arg1 + 0xf0);
            *(arg1 + 0x47c) = *(arg1 + 0xec);
            *(arg1 + 0x47d) = 1;
            *(arg1 + 0x480) = *(arg1 + -0x50);
            uVar5 = 0x400;
            if (uVar4 < 5) {
                uVar5 = 0x200;
            }
            *(arg1 + 0x478) = uVar5;
            *(arg1 + 0x484) = *(arg1 + 0xfc);
            *(arg1 + 0x48c) = *(arg1 + 0xf8);
            *(arg1 + 0x488) = 0xf;
            *(arg1 + 0x47f) = *(arg1 + -0x50) != 4;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uVar4 = *(*piVar12 + 0x58);
            uStack_a0 = 0;
            *(arg1 + 0x605) = 0;
            uVar5 = 0xe10;
            if (uVar4 < 5) {
                uVar5 = 400;
            }
            *(arg1 + 0x490) = uVar5;
            iVar6 = ipa_register_ipa_ready_cb(sym.__typeid__ZTSFvPvE_global_addr,iVar8);
            if (iVar6 == 0) {
                if (iVar8 != 0) {
                    ipc_log_string(*(arg1 + 0x5b8),"%s: ipa is not ready","ipa_connect_channels");
                    _printk(0x8002925,"ipa_connect_channels");
                    if (*(arg1 + 0x100) == '\0') goto code_r0x080072dc;
code_r0x08007328:
                    *(arg1 + 0x100) = 0;
                    goto joined_r0x08007330;
                }
                if (*(arg1 + 0x100) != '\0') goto code_r0x08007328;
code_r0x080072dc:
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_c8 = 0;
                init_wait_entry(&uStack_c8,0);
                iVar3 = arg1 + 0x230;
                iVar7 = prepare_to_wait_event(iVar3,&uStack_c8,1);
                if (*(arg1 + 0x100) == '\0') {
                    iVar11 = 0x4e2;
                    do {
                        if (iVar7 != 0) goto code_r0x08007324;
                        iVar11 = schedule_timeout(iVar11);
                        iVar7 = prepare_to_wait_event(iVar3,&uStack_c8,1);
                        if (iVar11 == 0 && *(arg1 + 0x100) != '\0') {
                            iVar11 = 1;
                        }
                    } while ((*(arg1 + 0x100) == '\0') && (iVar11 != 0));
                }
                else {
                    iVar11 = 0x4e2;
                }
                iVar7 = iVar11;
                finish_wait(iVar3,&uStack_c8);
code_r0x08007324:
                if (iVar7 != 0) goto code_r0x08007328;
                if (iVar8 != 0) {
                    ipc_log_string(*(arg1 + 0x5b8),"%s: ipa ready timeout","ipa_connect_channels");
                    _printk(0x8001cc7,"ipa_connect_channels");
                }
                uVar10 = 0xffffff92;
                *(arg1 + 0x605) = 1;
            }
            else {
joined_r0x08007330:
                if (iVar8 == 0) {
                    uVar4 = ipa_usb_xdci_connect(iVar2,iVar1,&uStack_a0,&uStack_90,arg1 + 0x478);
                    uVar10 = uVar4;
                    if (uVar4 == 0) goto code_r0x0800725c;
                }
                else {
                    ipc_log_string(*(arg1 + 0x5b8),"%s: Calling xdci_connect","ipa_connect_channels");
                    uVar4 = ipa_usb_xdci_connect(iVar2,iVar1,&uStack_a0,&uStack_90,arg1 + 0x478);
                    uVar10 = uVar4;
                    if (uVar4 == 0) {
                        ipc_log_string(*(arg1 + 0x5b8),"%s: xdci_connect done","ipa_connect_channels");
                        ipc_log_string(*(arg1 + 0x5b8),"%s: IN CH HDL %x","ipa_connect_channels",
                                       uStack_90 & 0xffffffff);
                        ipc_log_string(*(arg1 + 0x5b8),"%s: IN CH DBL addr %x","ipa_connect_channels",uStack_90._4_4_
                                      );
                        ipc_log_string(*(arg1 + 0x5b8),"%s: OUT CH HDL %x","ipa_connect_channels",
                                       uStack_a0 & 0xffffffff);
                        ipc_log_string(*(arg1 + 0x5b8),"%s: OUT CH DBL addr %x","ipa_connect_channels",
                                       uStack_a0._4_4_);
code_r0x0800725c:
                        uVar10 = 0;
                        *(arg1 + 0xe4) = uStack_90;
                        *(arg1 + 0x30) = uStack_90._4_4_;
                        *(arg1 + 0x40) = uStack_88;
                        if (*(arg1 + -0x50) != 4) {
                            *(arg1 + 0xe8) = uStack_a0;
                            *(arg1 + 0x88) = uStack_a0._4_4_;
                            *(arg1 + 0x98) = uStack_98;
                        }
                        goto code_r0x080073d8;
                    }
                    ipc_log_string(*(arg1 + 0x5b8),"%s: IPA connect failed %d","ipa_connect_channels",uVar4);
                    _printk(0x8003651,"ipa_connect_channels",uVar10);
                }
            }
            if (*(arg1 + 8) != 0) {
                usb_gsi_ep_op(*(arg1 + 8),0,6);
                iVar8 = *(arg1 + 8);
joined_r0x080073a8:
                if (iVar8 != 0) goto code_r0x080073ac;
            }
        }
        else {
            if (iVar8 == 0) {
                uVar4 = usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,9);
                uVar10 = uVar4;
                if (uVar4 != 0) goto code_r0x080073b8;
                uVar4 = usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,1);
                uVar10 = uVar4;
                if (uVar4 == 0) goto code_r0x0800700c;
                iVar8 = *(arg1 + 8);
                goto joined_r0x080073a8;
            }
            ipc_log_string(*(arg1 + 0x5b8),"OUT: num_bufs:=%zu, buf_len=%zu\n",*(arg1 + 0x78),*(arg1 + 0x80));
            uVar4 = usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,9);
            if (uVar4 != 0) {
                uVar10 = uVar4;
                ipc_log_string(*(arg1 + 0x5b8),"%s: GSI_EP_OP_PREPARE_TRBS failed: %d\n","ipa_connect_channels",
                               uVar10);
                _printk(0x8001d95,"ipa_connect_channels",uVar10);
                goto code_r0x080073b8;
            }
            uVar4 = usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,1);
            if (uVar4 == 0) {
code_r0x0800700c:
                uVar5 = usb_gsi_ep_op(*(arg1 + 8),0,8);
                *(arg1 + 0xf0) = uVar5;
                memset(iVar2,0,0x118);
                iStack_60 = arg1 + 0x68;
                usb_gsi_ep_op(*(arg1 + 8),&uStack_80,7);
                if (iVar8 != 0) {
                    ipc_log_string(*(arg1 + 0x5b8),"%s: USB GSI OUT OPS Completed","ipa_connect_channels");
                }
                *(arg1 + 0x360) = 0x12;
                *(arg1 + 0x42c) = *(arg1 + -0x50);
                *(arg1 + 0x430) = uStack_78._4_4_;
                *(arg1 + 0x434) = uStack_70;
                *(arg1 + 0x438) = 1;
                *(arg1 + 0x43c) = uStack_70._2_2_;
                *(arg1 + 0x450) = uStack_68;
                *(arg1 + 0x458) = *(arg1 + 0x78) * *(arg1 + 0x80);
                *(arg1 + 0x460) = *(arg1 + 0x70);
                *(arg1 + 0x3c0) = 0;
                *(arg1 + 0x468) = arg1 + 0xa0;
                *(arg1 + 0x470) = arg1 + 0xb0;
                if (iVar8 != 0) {
                    ipc_log_string(*(arg1 + 0x5b8),"%s(): OUT: sgt_xfer_rings:%pK sgt_data_buff:%pK\n",
                                   "ipa_connect_channels");
                }
                *(arg1 + 0x440) = uStack_80;
                *(arg1 + 0x442) = uStack_80._2_1_;
                *(arg1 + 0x444) = uStack_80._4_4_;
                *(arg1 + 0x448) = uStack_78;
                goto code_r0x08007100;
            }
            uVar10 = uVar4;
            ipc_log_string(*(arg1 + 0x5b8),"%s: GSI_EP_OP_STARTXFER failed: %d\n","ipa_connect_channels",uVar10);
            _printk(0x8001dbe,"ipa_connect_channels",uVar10);
            iVar8 = *(arg1 + 8);
            if (iVar8 == 0) goto code_r0x080073b8;
code_r0x080073ac:
            usb_gsi_ep_op(iVar8,arg1 + 0x68,10);
        }
code_r0x080073b8:
        usb_gsi_ep_op(*arg1,0,6);
    }
code_r0x080073c8:
    usb_gsi_ep_op(*arg1,arg1 + 0x10,10);
code_r0x080073d8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18 = sym.ipa_data_path_disable;
    pcStack_e8 = sym.ipa_data_path_disable;
    iVar8 = sp_el0;
    iStack_f8 = *(iVar8 + 0x5e0);
    auStack_fc[0] = 1;
    puStack_f0 = &stack0xffffffffffffffb0;
    pcStack_e0 = arg1;
    if (piVar12 != 0x128) {
        ipc_log_string(piVar12[0xb7],"%s: Disable eps","ipa_data_path_disable");
    }
    if (*piVar12 != 0) {
        usb_gsi_ep_op(*piVar12,piVar12 + 2,0xd);
    }
    if (piVar12[1] != 0) {
        usb_gsi_ep_op(piVar12[1],piVar12 + 0xd,0xd);
    }
    uVar10 = 0;
    if (*piVar12 != 0) {
        uVar10 = usb_gsi_ep_op(*piVar12,auStack_fc,0xb);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_f8) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.peek_event;
        uVar9 = _raw_spin_lock_irqsave(iVar8 + 0x228);
        if (*(iVar8 + 0x224) == *(iVar8 + 0x225)) {
            if (iVar8 != 0x128) {
                ipc_log_string(*(iVar8 + 0x5b8),"%s: event queue empty","peek_event");
            }
            uVar4 = 0;
        }
        else {
            uVar4 = *(iVar8 + (*(iVar8 + 0x224) + 1 & 0x7f) + 0x1a4);
        }
        _raw_spin_unlock_irqrestore(iVar8 + 0x228,uVar9);
        return uVar4;
    }
    return uVar10;
}


// ===== sym.ipa_data_path_disable @ 0x08007600 (size 184) =====

uint64_t sym.ipa_data_path_disable(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    auStack_2c[0] = 1;
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: Disable eps","ipa_data_path_disable");
    }
    if (*arg1 != 0) {
        usb_gsi_ep_op(*arg1,arg1 + 0x10,0xd);
    }
    if (*(arg1 + 8) != 0) {
        usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,0xd);
    }
    uVar1 = 0;
    if (*arg1 != 0) {
        uVar1 = usb_gsi_ep_op(*arg1,auStack_2c,0xb);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar1;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.peek_event;
    uVar3 = _raw_spin_lock_irqsave(iVar2 + 0x228);
    if (*(iVar2 + 0x224) == *(iVar2 + 0x225)) {
        if (iVar2 != 0x128) {
            ipc_log_string(*(iVar2 + 0x5b8),"%s: event queue empty","peek_event");
        }
        uVar4 = 0;
    }
    else {
        uVar4 = *(iVar2 + (*(iVar2 + 0x224) + 1 & 0x7f) + 0x1a4);
    }
    _raw_spin_unlock_irqrestore(iVar2 + 0x228,uVar3);
    return uVar4;
}


// ===== sym.peek_event @ 0x080076b8 (size 156) =====

uchar sym.peek_event(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    uchar uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x228);
    if (*(arg1 + 0x224) == *(arg1 + 0x225)) {
        if (arg1 != 0x128) {
            ipc_log_string(*(arg1 + 0x5b8),"%s: event queue empty","peek_event");
        }
        uVar2 = 0;
    }
    else {
        uVar2 = *(arg1 + (*(arg1 + 0x224) + 1 & 0x7f) + 0x1a4);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x228,uVar1);
    return uVar2;
}


// ===== sym.ipa_data_path_enable @ 0x08007754 (size 268) =====

void sym.ipa_data_path_enable(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    auStack_3c[0] = 0;
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"IN: db_reg_phs_addr_lsb = %x",*(arg1 + 0x30));
    }
    usb_gsi_ep_op(*arg1,arg1 + 0x10,2);
    iVar2 = *(arg1 + 8);
    if (iVar2 != 0) {
        if (arg1 != 0x128) {
            ipc_log_string(*(arg1 + 0x5b8),"OUT: db_reg_phs_addr_lsb = %x",*(arg1 + 0x88));
            iVar2 = *(arg1 + 8);
        }
        usb_gsi_ep_op(iVar2,arg1 + 0x68,2);
        usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,3);
    }
    usb_gsi_ep_op(*arg1,auStack_3c,0xb);
    usb_gsi_ep_op(*arg1,arg1 + 0x10,5);
    if (*(arg1 + 8) != 0) {
        usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,5);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    piVar3 = __stack_chk_fail();
    *extraout_x18 = sym.ipa_disconnect_channel;
    if (piVar3 != 0x128) {
        ipc_log_string(piVar3[0xb7],"%s: Calling xdci_disconnect","ipa_disconnect_channel");
    }
    iVar1 = ipa_usb_xdci_disconnect(piVar3[0x1d],*(piVar3 + 0xe4),piVar3[-10]);
    if ((piVar3 != 0x128) && (iVar1 != 0)) {
        ipc_log_string(piVar3[0xb7],"%s: IPA disconnect failed %d","ipa_disconnect_channel",iVar1);
        _printk(0x800111c,"ipa_disconnect_channel",iVar1);
    }
    if (piVar3 != 0x128) {
        ipc_log_string(piVar3[0xb7],"%s: xdci_disconnect done","ipa_disconnect_channel");
    }
    *(piVar3 + 0xe4) = 0xffffffeaffffffea;
    if (*piVar3 != 0) {
        usb_gsi_ep_op(*piVar3,piVar3 + 2,10);
        msm_ep_set_mode(*piVar3,0);
    }
    if (piVar3[1] != 0) {
        usb_gsi_ep_op(piVar3[1],piVar3 + 0xd,10);
        msm_ep_set_mode(piVar3[1],0);
    }
    return;
}


// ===== sym.ipa_disconnect_channel @ 0x08007860 (size 276) =====

void sym.ipa_disconnect_channel(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: Calling xdci_disconnect","ipa_disconnect_channel");
    }
    iVar1 = ipa_usb_xdci_disconnect(*(arg1 + 0xe8),*(arg1 + 0xe4),*(arg1 + -0x50));
    if ((arg1 != 0x128) && (iVar1 != 0)) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: IPA disconnect failed %d","ipa_disconnect_channel",iVar1);
        _printk(0x800111c,"ipa_disconnect_channel",iVar1);
    }
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: xdci_disconnect done","ipa_disconnect_channel");
    }
    *(arg1 + 0xe4) = 0xffffffeaffffffea;
    if (*arg1 != 0) {
        usb_gsi_ep_op(*arg1,arg1 + 0x10,10);
        msm_ep_set_mode(*arg1,0);
    }
    if (*(arg1 + 8) != 0) {
        usb_gsi_ep_op(*(arg1 + 8),arg1 + 0x68,10);
        msm_ep_set_mode(*(arg1 + 8),0);
    }
    return;
}


// ===== sym.ipa_suspend_work_handler @ 0x08007974 (size 608) =====

uint64_t sym.ipa_suspend_work_handler(int64_t arg1)

{
    char *pcVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = arg1 + -0x128;
    auStack_50[0] = *(arg1 + -0x13);
    auStack_4c[0] = 0;
    if (iVar8 == 0) {
        iVar6 = usb_gsi_ep_op(*0x128,auStack_50,0xc);
        if (iVar6 == 0) goto code_r0x08007a50;
code_r0x08007a18:
        uVar2 = *(arg1 + 0xe8);
        uVar3 = *(arg1 + 0xe4);
        uVar4 = *(arg1 + -0x50);
        if (*(**(*(arg1 + -0xf8) + 0x30) + 0x58) < 5) {
            bVar5 = true;
        }
        else {
            bVar5 = *(arg1 + -0x13) != '\0';
        }
        if (iVar8 != 0) {
            pcVar1 = "true";
            if (bVar5 == false) {
                pcVar1 = "false";
            }
            ipc_log_string(*(arg1 + 0x5b8),"%s: remote_wakeup_allowed:%s","usb_gsi_remote_wakeup_allowed",pcVar1);
        }
        uVar7 = ipa_usb_xdci_suspend(uVar2,uVar3,uVar4,bVar5);
        uVar10 = uVar7;
        if (uVar7 == 0xffffff8d) {
            *(arg1 + 0x1a0) = 6;
            goto joined_r0x08007a68;
        }
        if (uVar7 == 0xfffffff2) {
            auStack_4c[0] = 0;
            usb_gsi_ep_op(*arg1,auStack_4c,0xb);
            sym.gsi_wakeup_host(iVar8);
            goto joined_r0x08007a68;
        }
        if (uVar7 == 0) {
            *(arg1 + 0x1a0) = 7;
            if (iVar8 == 0) {
                uVar10 = 0;
                goto code_r0x08007b98;
            }
            ipc_log_string(*(arg1 + 0x5b8),"%s: STATE SUSPENDED","ipa_suspend_work_handler");
            uVar10 = 0;
        }
        else {
            if (iVar8 == 0) goto code_r0x08007b98;
            ipc_log_string(*(arg1 + 0x5b8),"%s: Error %d for %d","ipa_suspend_work_handler",uVar10,*(arg1 + -0x50));
            _printk(0x8002c49,"ipa_suspend_work_handler",uVar7,*(arg1 + -0x50));
        }
    }
    else {
        ipc_log_string(*(arg1 + 0x5b8),"%s: f_suspend:%d","ipa_suspend_work_handler");
        iVar6 = usb_gsi_ep_op(*arg1,auStack_50,0xc);
        if (iVar6 != 0) {
            ipc_log_string(*(arg1 + 0x5b8),"%s: Calling xdci_suspend","ipa_suspend_work_handler");
            goto code_r0x08007a18;
        }
code_r0x08007a50:
        auStack_4c[0] = 0;
        usb_gsi_ep_op(*arg1,auStack_4c,0xb);
        uVar10 = 0xfffffff2;
joined_r0x08007a68:
        if (iVar8 == 0) goto code_r0x08007b98;
    }
    ipc_log_string(*(arg1 + 0x5b8),"%s: xdci_suspend ret %d","ipa_suspend_work_handler",uVar10);
code_r0x08007b98:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.gsi_rndis_ipa_reset_trigger;
    if (iVar8 != 0x128) {
        ipc_log_string(*(iVar8 + 0x5b8),"%s: setting net_ready_trigger\n","gsi_rndis_ipa_reset_trigger");
    }
    uVar9 = _raw_spin_lock_irqsave(iVar8 + 0x10c);
    *(iVar8 + 0x101) = 0;
    uVar10 = _raw_spin_unlock_irqrestore(iVar8 + 0x10c,uVar9);
    return uVar10;
}


// ===== sym.gsi_rndis_ipa_reset_trigger @ 0x08007bd4 (size 104) =====

void sym.gsi_rndis_ipa_reset_trigger(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: setting net_ready_trigger\n","gsi_rndis_ipa_reset_trigger");
    }
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x10c);
    *(arg1 + 0x101) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0x10c,uVar1);
    return;
}


// ===== sym.ipa_resume_work_handler @ 0x08007c3c (size 220) =====

void sym.ipa_resume_work_handler(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: Calling xdci_resume","ipa_resume_work_handler");
    }
    iVar4 = ipa_usb_xdci_resume(*(arg1 + 0xe8),*(arg1 + 0xe4),*(arg1 + -0x50));
    if ((arg1 != 0x128) && (iVar4 != 0)) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: xdci_resume ret %d","ipa_resume_work_handler",iVar4);
    }
    if (arg1 != 0x128) {
        ipc_log_string(*(arg1 + 0x5b8),"%s: xdci_resume done","ipa_resume_work_handler");
    }
    auStack_2c[0] = 0;
    usb_gsi_ep_op(*arg1,auStack_2c,0xb);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        iVar5 = __stack_chk_fail();
        if ((iVar5 != 0) && (*(iVar5 + 0xd8) != 0)) {
            piVar1 = *(iVar5 + 0xd8) + 0x1f8;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return;
    }
    return;
}


// ===== sym.usb_gadget_autopm_get_noresume @ 0x08007d18 (size 84) =====

void sym.usb_gadget_autopm_get_noresume(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    
    if ((arg1 != 0) && (*(arg1 + 0xd8) != 0)) {
        piVar1 = *(arg1 + 0xd8) + 0x1f8;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.ipa_ready_callback @ 0x08007d6c (size 140) =====

void sym.ipa_ready_callback(int64_t arg1)

{
    char cVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = *0x72d;
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s: ipa is ready\n","ipa_ready_callback");
        _printk(0x80027e3,"ipa_ready_callback");
        cVar1 = *(arg1 + 0x72d);
    }
    if (cVar1 == '\0') {
        *(arg1 + 0x228) = 1;
        __wake_up(arg1 + 0x358,1,1,0);
    }
    return;
}


// ===== sym.gsi_wakeup_host @ 0x08007df8 (size 280) =====

void sym.gsi_wakeup_host(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = **(*(arg1 + 0x30) + 0x30);
    if (arg1 == 0) {
        if (iVar2 == 0) {
            return;
        }
    }
    else {
        ipc_log_string(*(arg1 + 0x6e0),"Entering %s","gsi_wakeup_host");
        if (iVar2 == 0) {
            ipc_log_string(*(arg1 + 0x6e0),"FAILED: d_port->cdev->gadget == NULL");
            _printk(0x8001de4);
            return;
        }
    }
    if ((*(iVar2 + 0x58) < 5) || (*(arg1 + 0x114) == '\0')) {
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: Calling usb_gadget_wakeup","gsi_wakeup_host");
        }
        iVar1 = usb_gadget_wakeup(iVar2);
        if ((iVar1 == -0xb) || (iVar1 == -0x10)) {
            if (arg1 == 0) {
                return;
            }
            ipc_log_string(*(arg1 + 0x6e0),"RW delayed due to LPM exit.");
            return;
        }
    }
    else {
        iVar1 = -0x5f;
    }
    if ((arg1 != 0) && (iVar1 != 0)) {
        ipc_log_string(*(arg1 + 0x6e0),"wakeup failed. ret=%d.",iVar1);
        _printk(0x8001e0b,iVar1);
    }
    return;
}


// ===== sym.gsi_ctrl_dev_read @ 0x08007f10 (size 1232) =====

char * sym.gsi_ctrl_dev_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    code cVar3;
    char cVar4;
    code *pcVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong uVar11;
    char *arg2_00;
    ulong *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    uVar14 = **(arg1 + 0xd8);
    if (6 < **(arg1 + 0xd8)) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80083c8);
        (*pcVar5)();
    }
    arg2_00 = arg3;
    mutex_lock(obj.inst_status + uVar14 * 0x40);
    if ((uVar14 << 6 | 0x30) < 0x181) {
        cVar3 = obj.gsi_func_type[uVar14 * 0x40];
        mutex_unlock(obj.inst_status + uVar14 * 0x40);
        if (cVar3 == 0x0) {
            iVar7 = ___ratelimit(obj.gsi_ctrl_dev_read._rs,"gsi_ctrl_dev_read");
            if (iVar7 == 0) {
                pcVar13 = 0xffffffffffffffed;
            }
            else {
                _printk(0x800180c,"gsi_ctrl_dev_read");
                pcVar13 = 0xffffffffffffffed;
            }
        }
        else {
            if (0x180 < (uVar14 * 0x40 | 0x38)) goto code_r0x080083c0;
            iVar17 = *(*(uVar14 * 0x40 + 0x8000578) + 0xb8);
            if (iVar17 == -0x5c0) {
                ipc_log_string(*0x120,"%s: gsi ctrl port %pK","gsi_ctrl_dev_read",0);
                arg2_00 = NULL;
                _printk(0x80019fb,"gsi_ctrl_dev_read");
                pcVar13 = 0xffffffffffffffed;
            }
            else if (arg3 < 0x2001) {
                iVar10 = iVar17 + 0x6b8;
                uVar11 = _raw_spin_lock_irqsave(iVar10);
                puVar1 = iVar17 + 0x690;
                if (puVar1 == *puVar1) {
                    iVar2 = iVar17 + 0x678;
                    do {
                        if (iVar17 != 0) {
                            ipc_log_string(*(iVar17 + 0x6e0),"Requests list is empty. Wait.");
                        }
                        _raw_spin_unlock_irqrestore(iVar10,uVar11);
                        if (puVar1 == *puVar1) {
                            uStack_78 = 0;
                            uStack_70 = 0;
                            uStack_88 = 0;
                            uStack_80 = 0;
                            uStack_90 = 0;
                            init_wait_entry(&stack0xffffffffffffff70,0);
                            arg2_00 = 0x1;
                            iVar8 = prepare_to_wait_event(iVar2,&stack0xffffffffffffff70);
                            puVar12 = *puVar1;
                            while (puVar1 == puVar12) {
                                if (iVar8 != 0) {
                                    if (-1 < iVar8) goto code_r0x080081c4;
                                    if (iVar17 == 0) {
                                        pcVar13 = 0xfffffffffffffe00;
                                    }
                                    else {
                                        ipc_log_string(*(iVar17 + 0x6e0),"Waiting failed");
                                        _printk(0x8001407);
                                        pcVar13 = 0xfffffffffffffe00;
                                    }
                                    goto code_r0x08008380;
                                }
                                schedule();
                                arg2_00 = 0x1;
                                iVar8 = prepare_to_wait_event(iVar2,&stack0xffffffffffffff70);
                                puVar12 = *puVar1;
                            }
                            finish_wait(iVar2,&stack0xffffffffffffff70);
                        }
code_r0x080081c4:
                        if (iVar17 != 0) {
                            ipc_log_string(*(iVar17 + 0x6e0),"Received request packet");
                        }
                        uVar11 = _raw_spin_lock_irqsave(iVar10);
                    } while (puVar1 == *puVar1);
                }
                piVar15 = *puVar1;
                piVar9 = piVar15 + -2;
                uVar14 = __list_del_entry_valid(piVar15);
                if ((uVar14 & 1) != 0) {
                    iVar2 = *piVar15;
                    piVar16 = piVar15[1];
                    *(iVar2 + 8) = piVar16;
                    *piVar16 = iVar2;
                }
                *piVar15 = -0x2152ffffffffff00;
                piVar15[1] = -0x2152fffffffffede;
                _raw_spin_unlock_irqrestore(iVar10,uVar11);
                if (arg3 < piVar15[-1]) {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"cpkt size large:%d > buf size:%zu",piVar15[-1],arg3);
                        _printk(0x8002c6a,piVar15[-1]);
                        arg2_00 = arg3;
                    }
                    if (piVar9 == NULL) {
                        pcVar13 = 0xfffffffffffffff4;
                    }
                    else {
                        kfree(*piVar9);
                        kfree(piVar9);
                        pcVar13 = 0xfffffffffffffff4;
                    }
                }
                else {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"%s: cpkt size:%d","gsi_ctrl_dev_read");
                    }
                    if (*0x80006d8 != '\0') {
                        iVar7 = piVar15[-1];
                        if (0x1d < iVar7) {
                            iVar7 = 0x1e;
                        }
                        print_hex_dump(0x80036fb,"READ:",2,0x10,1,piVar15[-2],iVar7,0);
                    }
                    arg2_00 = piVar15[-1];
                    if (piVar15[-1] < 0) {
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(0x800,0x8008318);
                        (*pcVar5)();
                    }
                    auVar18 = __check_object_size(piVar15[-2],arg2_00,1);
                    uVar6 = sym._copy_to_user(arg2,auVar18,arg2_00);
                    if (uVar6 == 0) {
                        if (iVar17 != 0) {
                            arg2_00 = "gsi_ctrl_dev_read";
                            ipc_log_string(*(iVar17 + 0x6e0),"%s: copied %d bytes to user","gsi_ctrl_dev_read",
                                           piVar15[-1]);
                        }
                        pcVar13 = piVar15[-1];
                        *(iVar17 + 0x6c8) = *(iVar17 + 0x6c8) + 1;
                    }
                    else if (iVar17 == 0) {
                        pcVar13 = 0xfffffffffffffff2;
                    }
                    else {
                        arg2_00 = uVar6;
                        ipc_log_string(*(iVar17 + 0x6e0),"copy_to_user failed: err %d");
                        _printk(0x800267c,uVar6);
                        pcVar13 = 0xfffffffffffffff2;
                    }
                    if (piVar9 != NULL) {
                        kfree(*piVar9);
                        kfree(piVar9);
                    }
                    if (iVar17 != 0) {
                        arg2_00 = "gsi_ctrl_dev_read";
                        ipc_log_string(*(iVar17 + 0x6e0),"%s: Exit %zu","gsi_ctrl_dev_read",arg3);
                    }
                }
            }
            else if (iVar17 == 0) {
                pcVar13 = 0xffffffffffffffea;
            }
            else {
                ipc_log_string(*(iVar17 + 0x6e0),"Large buff size %zu, should be %d",arg3,0x2000);
                arg2_00 = 0x2000;
                _printk(0x8002ebd,arg3);
                pcVar13 = 0xffffffffffffffea;
            }
        }
code_r0x08008380:
        iVar17 = sp_el0;
        if (*(iVar17 + 0x5e0) == iStack_68) {
            return pcVar13;
        }
        auVar18 = __stack_chk_fail();
        *extraout_x18 = 0x80083cc;
        uVar6 = **(auVar18._0_8_ + 0xd8);
        uVar14 = uVar6;
        if (6 < uVar6) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8008774);
            (*pcVar5)();
        }
        if (uVar6 == 4) {
            return 0xffffffffffffffea;
        }
        mutex_lock(obj.inst_status + uVar14 * 0x40);
        if ((uVar14 << 6 | 0x30) < 0x181) {
            cVar3 = obj.gsi_func_type[uVar14 * 0x40];
            mutex_unlock(obj.inst_status + uVar14 * 0x40);
            if (cVar3 == 0x0) {
                iVar7 = ___ratelimit(obj.gsi_ctrl_dev_write._rs,"gsi_ctrl_dev_write");
                if (iVar7 != 0) {
                    _printk(0x800180c,"gsi_ctrl_dev_write");
                    return 0xffffffffffffffed;
                }
                return 0xffffffffffffffed;
            }
            if ((uVar14 * 0x40 | 0x38) < 0x181) {
                iVar17 = *(*(uVar14 * 0x40 + 0x8000578) + 0xb8);
                if (arg2_00 + -0x2001 < 0xffffffffffffe000) {
                    if (iVar17 == 0) {
                        return 0xffffffffffffffea;
                    }
                    ipc_log_string(*(iVar17 + 0x6e0),"error: ctrl pkt length %zu",arg2_00);
                    _printk(0x80016d8,arg2_00);
                    return 0xffffffffffffffea;
                }
                if (*(iVar17 + 0x108) == 0) {
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"USB cable not connected\n");
                        _printk(0x80027c8);
                        return 0xffffffffffffff98;
                    }
                    return 0xffffffffffffff98;
                }
                if ((*(iVar17 + 0x114) != '\0') && (*(iVar17 + 0x115) == '\0')) {
                    *(iVar17 + 0x6d4) = *(iVar17 + 0x6d4) + 1;
                    if (iVar17 != 0) {
                        ipc_log_string(*(iVar17 + 0x6e0),"drop ctrl pkt of len %zu",arg2_00);
                        _printk(0x8001e73,arg2_00);
                        return 0xffffffffffffffa1;
                    }
                    return 0xffffffffffffffa1;
                }
                iVar10 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar10 = 0x30;
                }
                piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x20);
                if (piVar9 != NULL) {
                    iVar10 = __kmalloc(arg2_00,0xcc0);
                    *piVar9 = iVar10;
                    if (iVar10 == 0) {
                        kfree(piVar9);
                    }
                    else {
                        *(piVar9 + 1) = arg2_00;
                        if (piVar9 < 0xfffffffffffff001) {
                            __check_object_size(iVar10,arg2_00,0);
                            iVar7 = sym._copy_from_user(iVar10,auVar18._8_8_,arg2_00);
                            if (iVar7 != 0) {
                                if (iVar17 != 0) {
                                    ipc_log_string(*(iVar17 + 0x6e0),"copy_from_user failed err:%d",iVar7);
                                    _printk(0x800239a,iVar7);
                                }
                                kfree(*piVar9);
                                kfree(piVar9);
                                return iVar7;
                            }
                            *(piVar9 + 0xc) = 4;
                            cVar4 = *0x80006d8;
                            *(iVar17 + 0x6cc) = *(iVar17 + 0x6cc) + 1;
                            if (cVar4 != '\0') {
                                pcVar13 = arg2_00;
                                if (0x1d < arg2_00) {
                                    pcVar13 = 0x1e;
                                }
                                print_hex_dump(0x80036fb,"WRITE:",2,0x10,1,*piVar9,pcVar13,0);
                            }
                            uVar11 = _raw_spin_lock_irqsave(iVar17 + 0x6b8);
                            piVar16 = *(iVar17 + 0x6a8);
                            piVar15 = piVar9 + 2;
                            uVar14 = __list_add_valid(piVar15,piVar16,iVar17 + 0x6a0);
                            if ((uVar14 & 1) != 0) {
                                *(iVar17 + 0x6a8) = piVar15;
                                piVar9[2] = iVar17 + 0x6a0;
                                piVar9[3] = piVar16;
                                *piVar16 = piVar15;
                            }
                            _raw_spin_unlock_irqrestore(iVar17 + 0x6b8,uVar11);
                            iVar7 = sym.gsi_ctrl_send_notification(iVar17);
                            if (iVar7 == 0) {
                                *(iVar17 + 0x6d0) = *(iVar17 + 0x6d0) + 1;
                            }
                            if (iVar17 != 0) {
                                ipc_log_string(*(iVar17 + 0x6e0),"Exit %zu",arg2_00);
                                return arg2_00;
                            }
                            return arg2_00;
                        }
                    }
                }
                if (iVar17 != 0) {
                    ipc_log_string(*(iVar17 + 0x6e0),"failed to allocate ctrl pkt");
                    _printk(0x8001952);
                }
                return 0xfffffffffffffff4;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(1,0x8008778);
        (*pcVar5)();
    }
code_r0x080083c0:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80083c4);
    (*pcVar5)();
}


// ===== sym.gsi_ctrl_dev_write @ 0x080083e0 (size 920) =====

int64_t sym.gsi_ctrl_dev_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code cVar3;
    char cVar4;
    code *pcVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(arg1 + 0xd8);
    uVar10 = uVar2;
    if (6 < uVar2) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8008774);
        (*pcVar5)();
    }
    if (uVar2 == 4) {
        return -0x16;
    }
    mutex_lock(obj.inst_status + uVar10 * 0x40);
    if ((uVar10 << 6 | 0x30) < 0x181) {
        cVar3 = obj.gsi_func_type[uVar10 * 0x40];
        mutex_unlock(obj.inst_status + uVar10 * 0x40);
        if (cVar3 == 0x0) {
            iVar6 = ___ratelimit(obj.gsi_ctrl_dev_write._rs,"gsi_ctrl_dev_write");
            if (iVar6 != 0) {
                _printk(0x800180c,"gsi_ctrl_dev_write");
                return -0x13;
            }
            return -0x13;
        }
        if ((uVar10 * 0x40 | 0x38) < 0x181) {
            arg1_00 = *(*(uVar10 * 0x40 + 0x8000578) + 0xb8);
            if (arg3 - 0x2001U < 0xffffffffffffe000) {
                if (arg1_00 == 0) {
                    return -0x16;
                }
                ipc_log_string(*(arg1_00 + 0x6e0),"error: ctrl pkt length %zu",arg3);
                _printk(0x80016d8,arg3);
                return -0x16;
            }
            if (*(arg1_00 + 0x108) == 0) {
                if (arg1_00 != 0) {
                    ipc_log_string(*(arg1_00 + 0x6e0),"USB cable not connected\n");
                    _printk(0x80027c8);
                    return -0x68;
                }
                return -0x68;
            }
            if ((*(arg1_00 + 0x114) != '\0') && (*(arg1_00 + 0x115) == '\0')) {
                *(arg1_00 + 0x6d4) = *(arg1_00 + 0x6d4) + 1;
                if (arg1_00 != 0) {
                    ipc_log_string(*(arg1_00 + 0x6e0),"drop ctrl pkt of len %zu",arg3);
                    _printk(0x8001e73,arg3);
                    return -0x5f;
                }
                return -0x5f;
            }
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x20);
            if (piVar7 != NULL) {
                iVar8 = __kmalloc(arg3,0xcc0);
                *piVar7 = iVar8;
                if (iVar8 == 0) {
                    kfree(piVar7);
                }
                else {
                    *(piVar7 + 1) = arg3;
                    if (piVar7 < 0xfffffffffffff001) {
                        __check_object_size(iVar8,arg3,0);
                        iVar6 = sym._copy_from_user(iVar8,arg2,arg3);
                        if (iVar6 != 0) {
                            if (arg1_00 != 0) {
                                ipc_log_string(*(arg1_00 + 0x6e0),"copy_from_user failed err:%d",iVar6);
                                _printk(0x800239a,iVar6);
                            }
                            kfree(*piVar7);
                            kfree(piVar7);
                            return iVar6;
                        }
                        *(piVar7 + 0xc) = 4;
                        cVar4 = *0x80006d8;
                        *(arg1_00 + 0x6cc) = *(arg1_00 + 0x6cc) + 1;
                        if (cVar4 != '\0') {
                            iVar8 = arg3;
                            if (0x1d < arg3) {
                                iVar8 = 0x1e;
                            }
                            print_hex_dump(0x80036fb,"WRITE:",2,0x10,1,*piVar7,iVar8,0);
                        }
                        uVar9 = _raw_spin_lock_irqsave(arg1_00 + 0x6b8);
                        piVar11 = *(arg1_00 + 0x6a8);
                        piVar1 = piVar7 + 2;
                        uVar10 = __list_add_valid(piVar1,piVar11,arg1_00 + 0x6a0);
                        if ((uVar10 & 1) != 0) {
                            *(arg1_00 + 0x6a8) = piVar1;
                            piVar7[2] = arg1_00 + 0x6a0;
                            piVar7[3] = piVar11;
                            *piVar11 = piVar1;
                        }
                        _raw_spin_unlock_irqrestore(arg1_00 + 0x6b8,uVar9);
                        iVar6 = sym.gsi_ctrl_send_notification(arg1_00);
                        if (iVar6 == 0) {
                            *(arg1_00 + 0x6d0) = *(arg1_00 + 0x6d0) + 1;
                        }
                        if (arg1_00 != 0) {
                            ipc_log_string(*(arg1_00 + 0x6e0),"Exit %zu",arg3);
                            return arg3;
                        }
                        return arg3;
                    }
                }
            }
            if (arg1_00 != 0) {
                ipc_log_string(*(arg1_00 + 0x6e0),"failed to allocate ctrl pkt");
                _printk(0x8001952);
            }
            return -0xc;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x8008778);
    (*pcVar5)();
}


// ===== sym.gsi_ctrl_dev_poll @ 0x0800877c (size 472) =====

uint sym.gsi_ctrl_dev_poll(int64_t arg1,int64_t arg2)

{
    code cVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint uVar4;
    uint64_t uVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = **(arg1 + 0xd8);
    if (6 < **(arg1 + 0xd8)) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x8008954);
        (*pcVar6)();
    }
    mutex_lock(obj.inst_status + uVar5 * 0x40);
    if ((uVar5 << 6 | 0x30) < 0x181) {
        cVar1 = obj.gsi_func_type[uVar5 * 0x40];
        mutex_unlock(obj.inst_status + uVar5 * 0x40);
        if (cVar1 == 0x0) {
            iVar2 = ___ratelimit(obj.gsi_ctrl_dev_poll._rs,"gsi_ctrl_dev_poll");
            if (iVar2 != 0) {
                _printk(0x800180c,"gsi_ctrl_dev_poll");
                return 0x10;
            }
        }
        else {
            if (0x180 < (uVar5 * 0x40 | 0x38)) goto code_r0x0800894c;
            iVar7 = *(*(uVar5 * 0x40 + 0x8000578) + 0xb8);
            if (iVar7 + 0x5c0 != 0) {
                if (((arg2 != 0) && (iVar7 + 0x678 != 0)) && (pcVar6 = *arg2, pcVar6 != NULL)) {
                    __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000fa0);
                    (*pcVar6)(arg1,iVar7 + 0x678,arg2);
                }
                uVar3 = _raw_spin_lock_irqsave(iVar7 + 0x6b8);
                if (iVar7 + 0x690 == *(iVar7 + 0x690)) {
                    uVar4 = 0;
                }
                else {
                    if (iVar7 != 0) {
                        ipc_log_string(*(iVar7 + 0x6e0),"%s sets POLLIN for %s","gsi_ctrl_dev_poll",iVar7 + 0x5c0);
                    }
                    uVar4 = 0x41;
                }
                _raw_spin_unlock_irqrestore(iVar7 + 0x6b8,uVar3);
                return uVar4;
            }
            if (iVar7 != 0) {
                ipc_log_string(*(iVar7 + 0x6e0),"%s: gsi ctrl port %pK","gsi_ctrl_dev_poll",0);
                _printk(0x80019fb,"gsi_ctrl_dev_poll",0);
                return 0x10;
            }
        }
        return 0x10;
    }
code_r0x0800894c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8008950);
    (*pcVar6)();
}


// ===== sym.gsi_ctrl_dev_ioctl @ 0x08008958 (size 1856) =====

int64_t sym.gsi_ctrl_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    code cVar5;
    int64_t *piVar6;
    code *pcVar7;
    uint uVar8;
    int iVar9;
    ulong uVar10;
    ulong *puVar11;
    char *pcVar12;
    int64_t iVar13;
    uint *extraout_x8;
    uint uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    int iVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    int64_t iVar19;
    int64_t *piVar20;
    ulong *puVar21;
    int64_t *piVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uint32_t uStack_7c;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar17 = **(arg1 + 0xd8);
    if (6 < **(arg1 + 0xd8)) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x8009084);
        (*pcVar7)();
    }
    mutex_lock(obj.inst_status + uVar17 * 0x40);
    if (0x180 < (uVar17 << 6 | 0x30)) {
code_r0x0800907c:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x8009080);
        (*pcVar7)();
    }
    cVar5 = obj.gsi_func_type[uVar17 * 0x40];
    auVar23 = mutex_unlock(obj.inst_status + uVar17 * 0x40);
    if (cVar5 == 0x0) {
        iVar9 = ___ratelimit(obj.major,"gsi_ctrl_dev_ioctl");
        if (iVar9 == 0) {
            iVar19 = -0x13;
        }
        else {
            _printk(0x800180c,"gsi_ctrl_dev_ioctl");
            iVar19 = -0x13;
        }
        goto code_r0x08008f80;
    }
    if (0x180 < (uVar17 * 0x40 | 0x38)) goto code_r0x0800907c;
    iVar15 = *(*(uVar17 * 0x40 + 0x8000578) + 0xb8);
    if (*(iVar15 + 0x108) == 0) {
        if (iVar15 == 0) {
            iVar19 = -0x68;
        }
        else {
            ipc_log_string(*(iVar15 + 0x6e0),"USB cable not connected\n");
            _printk(0x80027c8);
            iVar19 = -0x68;
        }
        goto code_r0x08008f80;
    }
    iVar9 = arg2;
    if (iVar9 < -0x7fef8dfd) {
        if (iVar9 < -0x7ffb8dfe) {
            if (iVar9 == -0x7ffd90fd) {
                iVar9 = sym._copy_to_user(arg3,auVar23,2);
                if (iVar9 == 0) {
                    iVar19 = 0;
                    if (iVar15 != 0) goto code_r0x08008ef4;
                }
                else {
                    iVar19 = -0xe00000000;
                    if (iVar15 != 0) {
                        ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail DATAGRAM");
                        _printk(0x8002295);
code_r0x08008ef4:
                        ipc_log_string(*(iVar15 + 0x6e0),"Sent NTB datagrams count %d",*(iVar15 + 0x230));
                    }
                }
            }
            else {
                if (iVar9 != -0x7ffb90fe) goto code_r0x08008ccc;
                iVar9 = sym._copy_to_user(arg3,auVar23,4);
                if (iVar9 == 0) {
                    iVar19 = 0;
                    if (iVar15 != 0) goto code_r0x08008ed4;
                }
                else {
                    iVar19 = -0xe00000000;
                    if (iVar15 != 0) {
                        ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user failNTB_SIZE");
                        _printk(0x80023b9);
code_r0x08008ed4:
                        ipc_log_string(*(iVar15 + 0x6e0),"Sent NTB size %d",*(iVar15 + 0x22c));
                    }
                }
            }
        }
        else if (iVar9 == -0x7ffb8dfe) {
            uStack_7c = *(iVar15 + 0x108);
            if (*(iVar15 + 0xd8) == 2) {
                uStack_7c = *(iVar15 + 0x6e8);
            }
            iVar9 = sym._copy_to_user(arg3,auVar23,4);
            if (iVar9 == 0) {
                iVar19 = 0;
                if (iVar15 != 0) goto code_r0x08008f14;
            }
            else {
                iVar19 = -0xe00000000;
                if (iVar15 != 0) {
                    ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail LINE_STATE");
                    _printk(0x8001837);
code_r0x08008f14:
                    ipc_log_string(*(iVar15 + 0x6e0),"%s: Sent line_state: %d for prot id:%d","gsi_ctrl_dev_ioctl",
                                   uStack_7c,*(iVar15 + 0xd8));
                }
            }
        }
        else {
            if (iVar9 == -0x7fef90fc) goto code_r0x08008b7c;
code_r0x08008ccc:
            iVar19 = -0x1600000000;
            if (iVar15 != 0) {
                ipc_log_string(*(iVar15 + 0x6e0),"wrong parameter");
                uVar10 = 0x8003598;
                goto code_r0x08008cf0;
            }
        }
    }
    else if (iVar9 < 0x7204) {
        if (iVar9 == -0x7fef8dfd) {
code_r0x08008b7c:
            iVar19 = -0xb00000000;
            if (iVar15 == 0) {
                if (*0x108 != 0) goto code_r0x08008d04;
            }
            else {
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"%s: EP_LOOKUP for prot id:%d","gsi_ctrl_dev_ioctl",
                                         *(iVar15 + 0xd8));
                if (*(iVar15 + 0x108) == 0) {
                    ipc_log_string(*(iVar15 + 0x6e0),"EP_LOOKUP failed: not connected");
                }
                else {
code_r0x08008d04:
                    iVar9 = *(iVar15 + 0x20c);
                    if (*(iVar15 + 0xd8) == 4) {
                        if (iVar9 != -0x16) {
                            iVar16 = -1;
code_r0x08008d40:
                            if (iVar15 != 0) {
                                ipc_log_string(*(iVar15 + 0x6e0),"%s: prot id :%d ep_type:%d intf:%d",
                                               "gsi_ctrl_dev_ioctl",*(iVar15 + 0xd8),2);
                                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"%s: ipa_cons_idx:%d ipa_prod_idx:%d",
                                                         "gsi_ctrl_dev_ioctl",iVar16,iVar9);
                            }
                            iVar9 = sym._copy_to_user(arg3,auVar23,0x10);
                            iVar19 = 0;
                            if ((iVar9 != 0) && (iVar19 = -0xe00000000, iVar15 != 0)) {
                                ipc_log_string(*(iVar15 + 0x6e0),"copy_to_user fail MBIM");
                                _printk(0x8001856);
                                iVar19 = -0xe00000000;
                            }
                        }
                    }
                    else {
                        iVar16 = *(iVar15 + 0x210);
                        if ((iVar9 != -0x16) || (iVar16 != -0x16)) goto code_r0x08008d40;
                    }
                }
            }
        }
        else {
            if (iVar9 != -0x7fef8dfa) goto code_r0x08008ccc;
            if ((*(iVar15 + 0x130) != 0) && (iVar15 != 0)) {
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"prot id :%d OUT: buf_len:%u total_len: %u",
                                         *(iVar15 + 0xd8));
            }
            if (*(iVar15 + 0x128) != 0) {
                if (iVar15 == 0) {
                    iVar9 = sym._copy_to_user(arg3,auVar23,0x10);
                    iVar19 = 0;
                    if (iVar9 != 0) {
                        iVar19 = -0xe00000000;
                    }
                    goto code_r0x08008f7c;
                }
                auVar23 = ipc_log_string(*(iVar15 + 0x6e0),"prot id :%d IN: buf_len:%u total_len:%u\n",
                                         *(iVar15 + 0xd8));
            }
            iVar9 = sym._copy_to_user(arg3,auVar23,0x10);
            if (iVar9 == 0) goto code_r0x08008cc4;
            iVar19 = -0xe00000000;
            if (iVar15 == 0) goto code_r0x08008f7c;
            ipc_log_string(*(iVar15 + 0x6e0),"QTI_CTRL_DATA_BUF_INFO: copy_to_user failed");
            uVar10 = 0x8002a9b;
code_r0x08008cf0:
            _printk(uVar10);
        }
    }
    else {
        if (iVar9 == 0x7205) {
            if (*(iVar15 + 0xd8) != 4) {
                *(iVar15 + 0x66c) = 1;
                iVar19 = 0;
                goto code_r0x08008f7c;
            }
            if (iVar15 != 0) {
                uVar10 = *(iVar15 + 0x6e0);
                pcVar12 = "%s:Modem Online not handled";
code_r0x08008cb8:
                ipc_log_string(uVar10,pcVar12,"gsi_ctrl_dev_ioctl");
            }
        }
        else {
            if (iVar9 != 0x7204) goto code_r0x08008ccc;
            if (*(iVar15 + 0xd8) != 4) {
                iVar19 = iVar15 + 0x6b8;
                *(iVar15 + 0x66c) = 0;
                uVar10 = _raw_spin_lock_irqsave(iVar19);
                piVar1 = iVar15 + 0x6a0;
                piVar6 = *(iVar15 + 0x6a0);
                while (piVar6 != piVar1) {
                    piVar20 = piVar6 + -2;
                    piVar22 = *piVar6;
                    uVar17 = __list_del_entry_valid(piVar6);
                    if ((uVar17 & 1) != 0) {
                        iVar3 = *piVar6;
                        piVar4 = piVar6[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar6 = -0x2152ffffffffff00;
                    piVar6[1] = -0x2152fffffffffede;
                    piVar6 = piVar22;
                    if (piVar20 != NULL) {
                        kfree(*piVar20);
                        kfree(piVar20);
                    }
                }
                _raw_spin_unlock_irqrestore(iVar19,uVar10);
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
                if (puVar11 != NULL) {
                    *(puVar11 + 1) = 0;
                    *puVar11 = 0x10;
                    if (puVar11 < 0xfffffffffffff001) {
                        *(puVar11 + 0xc) = 3;
                        uVar10 = _raw_spin_lock_irqsave(iVar19);
                        puVar21 = *(iVar15 + 0x6a8);
                        puVar2 = puVar11 + 2;
                        uVar17 = __list_add_valid(puVar2,puVar21,piVar1);
                        if ((uVar17 & 1) != 0) {
                            *(iVar15 + 0x6a8) = puVar2;
                            puVar11[2] = piVar1;
                            puVar11[3] = puVar21;
                            *puVar21 = puVar2;
                        }
                        _raw_spin_unlock_irqrestore(iVar19,uVar10);
                        sym.gsi_ctrl_send_notification(iVar15);
                        goto code_r0x08008cc4;
                    }
                }
                if (iVar15 == 0) {
                    iVar19 = -0xc;
                }
                else {
                    ipc_log_string(*(iVar15 + 0x6e0),"%s: err allocating cpkt\n","gsi_ctrl_dev_ioctl");
                    _printk(0x80033fd,"gsi_ctrl_dev_ioctl");
                    iVar19 = -0xc;
                }
                goto code_r0x08008f80;
            }
            if (iVar15 != 0) {
                uVar10 = *(iVar15 + 0x6e0);
                pcVar12 = "%s:Modem Offline not handled";
                goto code_r0x08008cb8;
            }
        }
code_r0x08008cc4:
        iVar19 = 0;
    }
code_r0x08008f7c:
    iVar19 = iVar19 >> 0x20;
code_r0x08008f80:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iVar13) {
        return iVar19;
    }
    auVar23 = __stack_chk_fail(iVar19);
    uVar14 = extraout_x8 >> 0x20;
    uVar8 = *CONCAT44(uVar14,*CONCAT44(uVar14,*CONCAT44(uVar14,*extraout_x8)));
    *extraout_x18 = 0x8009088;
    iVar13 = *(auVar23._0_8_ + 0x2b0);
    if (iVar13 == 0x10) {
        iVar9 = ___ratelimit(CONCAT44(uVar14,uVar8),obj.gsi_ctrl_dev_open._rs,"gsi_ctrl_dev_open");
        if (iVar9 != 0) {
            _printk(0x8002ca0,"gsi_ctrl_dev_open",0);
            return 0xffffffed;
        }
    }
    else {
        puVar18 = iVar13 + -0x4f8;
        uVar17 = *puVar18;
        if (6 < *puVar18) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x8009224);
            (*pcVar7)();
        }
        if (iVar13 != 0x5d0) {
            ipc_log_string(*(iVar13 + 0x110),"%s: open ctrl dev %s","gsi_ctrl_dev_open");
        }
        pcVar7 = obj.inst_status + uVar17 * 0x40;
        mutex_lock(pcVar7);
        *(auVar23._8_8_ + 0xd8) = puVar18;
        if (0x180 < (uVar17 << 6 | 0x30)) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(1,0x8009228);
            (*pcVar7)();
        }
        if (obj.gsi_func_type[uVar17 * 0x40] != 0x0) {
            if (*(iVar13 + 0xa0) != '\0') {
                mutex_unlock(pcVar7);
                if (iVar13 != 0x5d0) {
                    ipc_log_string(*(iVar13 + 0x110),"%s: Already opened\n","gsi_ctrl_dev_open");
                }
                return 0xfffffff0;
            }
            *(iVar13 + 0xa0) = 1;
            mutex_unlock(pcVar7);
            return 0;
        }
        mutex_unlock(pcVar7);
        if (iVar13 != 0x5d0) {
            ipc_log_string(*(iVar13 + 0x110),"%s: [prot_id = %d], GSI instance freed already\n","gsi_ctrl_dev_open",
                           *puVar18);
            _printk(0x8001889,"gsi_ctrl_dev_open",*puVar18);
            return 0xffffffed;
        }
    }
    return 0xffffffed;
}


// ===== sym.gsi_ctrl_dev_open @ 0x08009098 (size 400) =====

ulong sym.gsi_ctrl_dev_open(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong in_x2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x2b0);
    if (iVar3 == 0x10) {
        iVar2 = ___ratelimit(obj.gsi_ctrl_dev_open._rs,"gsi_ctrl_dev_open",in_x2,0);
        if (iVar2 != 0) {
            _printk(0x8002ca0,"gsi_ctrl_dev_open",0);
            return 0xffffffed;
        }
    }
    else {
        puVar4 = iVar3 + -0x4f8;
        uVar5 = *puVar4;
        if (6 < *puVar4) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x8009224);
            (*pcVar1)();
        }
        if (iVar3 != 0x5d0) {
            ipc_log_string(*(iVar3 + 0x110),"%s: open ctrl dev %s","gsi_ctrl_dev_open");
        }
        pcVar1 = obj.inst_status + uVar5 * 0x40;
        mutex_lock(pcVar1);
        *(arg2 + 0xd8) = puVar4;
        if (0x180 < (uVar5 << 6 | 0x30)) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x8009228);
            (*pcVar1)();
        }
        if (obj.gsi_func_type[uVar5 * 0x40] != 0x0) {
            if (*(iVar3 + 0xa0) != '\0') {
                mutex_unlock(pcVar1);
                if (iVar3 != 0x5d0) {
                    ipc_log_string(*(iVar3 + 0x110),"%s: Already opened\n","gsi_ctrl_dev_open");
                }
                return 0xfffffff0;
            }
            *(iVar3 + 0xa0) = 1;
            mutex_unlock(pcVar1);
            return 0;
        }
        mutex_unlock(pcVar1);
        if (iVar3 != 0x5d0) {
            ipc_log_string(*(iVar3 + 0x110),"%s: [prot_id = %d], GSI instance freed already\n","gsi_ctrl_dev_open",
                           *puVar4);
            _printk(0x8001889,"gsi_ctrl_dev_open",*puVar4);
            return 0xffffffed;
        }
    }
    return 0xffffffed;
}


// ===== sym.gsi_ctrl_dev_release @ 0x08009228 (size 296) =====

ulong sym.gsi_ctrl_dev_release(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(arg1 + 0xd8);
    uVar7 = uVar2;
    if (6 < uVar2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8009350);
        (*pcVar3)();
    }
    pcVar3 = obj.inst_status + uVar7 * 0x40;
    mutex_lock(pcVar3);
    if ((uVar7 << 6 | 0x30) < 0x181) {
        uVar6 = uVar7 * 0x40 | 0x38;
        piVar1 = uVar7 * 0x40 + 0x8000578;
        if (obj.gsi_func_type[uVar7 * 0x40] == 0x0) {
            if (0x180 < uVar6) goto code_r0x08009348;
            if (*piVar1 != 0) {
                sym.gsi_inst_clean(*piVar1);
                *piVar1 = 0;
            }
            mutex_unlock(pcVar3);
            iVar4 = ___ratelimit(obj.gsi_ctrl_dev_release._rs,"gsi_ctrl_dev_release");
            if (iVar4 == 0) {
                uVar5 = 0xffffffed;
            }
            else {
                _printk(0x80015a5,"gsi_ctrl_dev_release",uVar2);
                uVar5 = 0xffffffed;
            }
        }
        else {
            if (0x180 < uVar6) goto code_r0x08009348;
            *(*(*piVar1 + 0xb8) + 0x670) = 0;
            iVar8 = *(*piVar1 + 0xb8);
            mutex_unlock(pcVar3);
            if (iVar8 != 0) {
                ipc_log_string(*(iVar8 + 0x6e0),"close ctrl dev %s\n",*(*piVar1 + 0xb8) + 0x5c0);
            }
            uVar5 = 0;
        }
        return uVar5;
    }
code_r0x08009348:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800934c);
    (*pcVar3)();
}


// ===== sym.gsi_ctrl_pkt_free @ 0x08009350 (size 68) =====

void sym.gsi_ctrl_pkt_free(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        kfree(*arg1);
        kfree(arg1);
    }
    return;
}


// ===== sym._copy_to_user @ 0x08009394 (size 312) =====

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
        if ((_alloc_workqueue >> 0x18 & 1) == 0) {
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
        if ((_alloc_workqueue >> 0x18 & 1) == 0) {
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


// ===== sym.gsi_ctrl_pkt_alloc @ 0x08009508 (size 104) =====

ulong * sym.gsi_ctrl_pkt_alloc(void)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x20);
    if (puVar2 == NULL) {
        puVar2 = 0xfffffffffffffff4;
    }
    else {
        *(puVar2 + 1) = 0;
        *puVar2 = 0x10;
    }
    return puVar2;
}


// ===== sym.gsi_ctrl_send_notification @ 0x08009570 (size 1004) =====

int sym.gsi_ctrl_send_notification(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    char *pcVar6;
    ulong uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint uVar11;
    int64_t iVar12;
    ulong *in_x18;
    int64_t *piVar13;
    int64_t *piVar14;
    uchar *puVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar14 = *(arg1 + 0x660);
    if (*(arg1 + 0x108) == 0) {
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: cable disconnect","gsi_ctrl_send_notification");
            return -0x13;
        }
        return -0x13;
    }
    iVar1 = arg1 + 0x6b8;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (arg1 + 0x6a0 == *(arg1 + 0x6a0)) {
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
        if (arg1 == 0) {
            return 0;
        }
        uVar4 = *(arg1 + 0x6e0);
        pcVar6 = "%s: cpkt_resp_q is empty\n";
code_r0x08009648:
        ipc_log_string(uVar4,pcVar6,"gsi_ctrl_send_notification");
        return 0;
    }
    if (arg1 == 0) {
        if (*0x668 != '\0') {
            _raw_spin_unlock_irqrestore(0x6b8,uVar4);
            return 0;
        }
        puVar15 = 0x668;
        piVar13 = *0x6a0;
    }
    else {
        ipc_log_string(*(arg1 + 0x6e0),"%s: notify_req_queued:%d\n","gsi_ctrl_send_notification",*(arg1 + 0x668));
        if (*(arg1 + 0x668) != '\0') {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            uVar4 = *(arg1 + 0x6e0);
            pcVar6 = "%s: notify_req is already queued.\n";
            goto code_r0x08009648;
        }
        piVar13 = *(arg1 + 0x6a0);
        puVar15 = arg1 + 0x668;
        ipc_log_string(*(arg1 + 0x6e0),"%s: cpkt->type:%d\n","gsi_ctrl_send_notification",*(piVar13 + -4));
    }
    if (3 < *(piVar13 + -4) - 1U) {
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s:unknown notify state","gsi_ctrl_send_notification");
            _printk(0x8001526,"gsi_ctrl_send_notification");
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8009714);
        (*pcVar2)();
    }
    iVar16 = *piVar14;
    //switch table (3 cases) at 0x8003764
    switch(*(piVar13 + -4)) {
    case 1:
        *(iVar16 + 1) = 0;
        *(iVar16 + 2) = 1;
        break;
    case 2:
        piVar8 = *(*(arg1 + 0x30) + 0x30);
        *(iVar16 + 1) = 0x2a;
        *(iVar16 + 2) = 0;
        *(iVar16 + 6) = 8;
        iVar12 = *piVar8;
        iVar9 = *piVar14;
        if (*(iVar12 + 0x5c) < 5) {
            if (2 < *(iVar12 + 0x5c)) {
                uVar10 = *(iVar12 + 0x58);
code_r0x080097b0:
                if (uVar10 == 3) {
                    uVar11 = 0x19640000;
                    goto code_r0x080097c8;
                }
            }
            uVar11 = 0x947000;
        }
        else {
            uVar10 = *(iVar12 + 0x58);
            if (uVar10 < 5) goto code_r0x080097b0;
            uVar11 = 0x32c80000;
        }
code_r0x080097c8:
        *(iVar9 + 8) = uVar11;
        *(iVar9 + 0xc) = uVar11;
        if (arg1 != 0) {
            iVar9 = *piVar8;
            if (*(iVar9 + 0x5c) < 5) {
                if (2 < *(iVar9 + 0x5c)) {
                    uVar10 = *(iVar9 + 0x58);
code_r0x08009808:
                    if (uVar10 == 3) {
                        uVar7 = 0x19640000;
                        goto code_r0x08009820;
                    }
                }
                uVar7 = 0x947000;
            }
            else {
                uVar10 = *(iVar9 + 0x58);
                if (uVar10 < 5) goto code_r0x08009808;
                uVar7 = 0x32c80000;
            }
code_r0x08009820:
            ipc_log_string(*(arg1 + 0x6e0),"notify speed %d",uVar7);
        }
        goto code_r0x0800982c;
    case 3:
        *(iVar16 + 1) = 0;
        *(iVar16 + 2) = 0;
        break;
    case 4:
        *(iVar16 + 2) = 0;
        *(iVar16 + 6) = 0;
        *(iVar16 + 1) = 1;
        if (*(arg1 + 0xd8) == 0) {
            **piVar14 = 1;
            goto code_r0x0800982c;
        }
        goto code_r0x08009870;
    }
    *(iVar16 + 6) = 0;
code_r0x0800982c:
    piVar14 = piVar13 + -2;
    uVar5 = __list_del_entry_valid(piVar13);
    if ((uVar5 & 1) != 0) {
        iVar9 = *piVar13;
        piVar8 = piVar13[1];
        *(iVar9 + 8) = piVar8;
        *piVar8 = iVar9;
    }
    *piVar13 = -0x2152ffffffffff00;
    piVar13[1] = -0x2152fffffffffede;
    if (piVar14 != NULL) {
        kfree(*piVar14);
        kfree(piVar14);
    }
code_r0x08009870:
    *puVar15 = 1;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"send Notify type %02x",*(iVar16 + 1));
    }
    if (*(arg1 + 0x114) == '\0') {
        iVar3 = usb_ep_queue(*(arg1 + 0x658),*(arg1 + 0x660),0xa20);
        if ((-1 < iVar3) && (*(arg1 + 0x114) == '\0')) goto code_r0x080098c0;
    }
    else {
        iVar3 = -0x5f;
    }
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    *puVar15 = 0;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
code_r0x080098c0:
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s: ret:%d req_queued:%d","queue_notification_request",iVar3,*puVar15);
    }
    return iVar3;
}


// ===== sym._copy_from_user @ 0x08009964 (size 376) =====

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
        if ((_alloc_workqueue >> 0x18 & 1) == 0) {
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
        if ((_alloc_workqueue >> 0x18 & 1) == 0) {
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


// ===== sym.gsi_ctrl_clear_cpkt_queues @ 0x08009b18 (size 288) =====

void sym.gsi_ctrl_clear_cpkt_queues(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x6b8);
    piVar3 = *(arg1 + 0x690);
    while (piVar3 != arg1 + 0x690) {
        piVar6 = piVar3 + -2;
        piVar7 = *piVar3;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        piVar3 = piVar7;
        if (piVar6 != NULL) {
            kfree(*piVar6);
            kfree(piVar6);
        }
    }
    piVar3 = *(arg1 + 0x6a0);
    while (piVar3 != arg1 + 0x6a0) {
        piVar6 = piVar3 + -2;
        piVar7 = *piVar3;
        uVar5 = __list_del_entry_valid(piVar3);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        piVar3 = piVar7;
        if (piVar6 != NULL) {
            kfree(*piVar6);
            kfree(piVar6);
        }
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x6b8,uVar4);
    return;
}


// ===== sym.gsi_inst_clean @ 0x08009c38 (size 132) =====

void sym.gsi_inst_clean(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    uVar1 = *(iVar2 + 0x650);
    if (uVar1 != 0) {
        device_destroy(_segment.ehdr);
        cdev_del(iVar2 + 0x5d0);
        *(iVar2 + 0x650) = 0;
        ida_free(obj.gsi_ida,uVar1 & 0xfffff);
        iVar2 = *(arg1 + 0xb8);
    }
    kfree(iVar2);
    kfree(arg1);
    return;
}


// ===== sym.gsi_bind @ 0x08009cbc (size 3832) =====

int sym.gsi_bind(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    code cVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    code *pcVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint8_t uVar20;
    ulong uVar21;
    uchar *puVar22;
    ulong *puVar23;
    ulong uVar24;
    code *pcVar25;
    code *pcVar26;
    code *pcVar27;
    code *pcVar28;
    uint64_t uVar29;
    uint uVar30;
    ulong *in_x18;
    code *pcVar31;
    code *pcVar32;
    int64_t iVar33;
    ulong uVar34;
    code *pcVar35;
    uint32_t uVar36;
    code *pcVar37;
    code *pcVar38;
    code *pcVar39;
    ulong unaff_x30;
    code *pcStack_130;
    code *pcStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    puVar23 = *(arg1 + 0x30);
    if ((*(arg2 + 0xd8) != 4) && (*(arg2 + 0xd8) != 2)) {
        iVar7 = usb_interface_id(arg1,arg2);
        *(arg2 + 0xdc) = iVar7;
        if (-1 < iVar7) goto code_r0x08009d34;
        goto code_r0x0800a990;
    }
    *(arg2 + 0xdc) = 0xffffffed;
code_r0x08009d34:
    iVar7 = usb_interface_id(arg1,arg2);
    *(arg2 + 0xe0) = iVar7;
    if (iVar7 < 0) goto code_r0x0800a990;
    if (4 < *(arg2 + 0xd8)) {
        if (arg2 == 0) {
            iVar7 = -0x16;
        }
        else {
            ipc_log_string(*(arg2 + 0x6e0),"%s: Invalid prot id %d","gsi_bind");
            _printk(0x80015de,"gsi_bind",*(arg2 + 0xd8));
            iVar7 = -0x16;
        }
        goto code_r0x0800a990;
    }
    pcStack_d8 = NULL;
    uStack_d0 = 0;
    iStack_c8 = 0;
    bVar3 = true;
    uVar34 = 0;
    uVar19 = 0;
    pcVar26 = NULL;
    pcStack_a8 = obj.qdss_gsi_data_intf_desc;
    pcVar39 = NULL;
    pcVar32 = NULL;
    pcVar35 = NULL;
    pcVar31 = NULL;
    pcVar27 = NULL;
    pcStack_c0 = obj.qdss_gsi_fs_data_desc;
    pcStack_b8 = NULL;
    uVar9 = 0;
    pcVar17 = NULL;
    uVar15 = 0;
    pcVar28 = NULL;
    pcStack_130 = NULL;
    uStack_b0 = 0x20;
    uVar29 = 0;
    uVar18 = 0;
    pcVar6 = obj.qdss_gsi_hs_data_desc;
    pcVar37 = obj.qdss_gsi_ss_data_desc;
    pcVar38 = obj.qdss_gsi_fs_data_only_desc;
    pcVar25 = obj.qdss_gsi_hs_data_only_desc;
    uVar30 = 8;
    uVar24 = 0x4000;
    uVar21 = 0xf;
    bVar4 = true;
    pcVar16 = obj.qdss_gsi_ss_data_only_desc;
    pcVar14 = obj.qdss_gsi_string_defs;
    switch(*(*(arg2 + 0xd8) * 2 + 0x8003774) * 4 + 0x8009e1c) {
    case 0x8009e20:
        *(arg2 + 0x220) = 0x600000004000;
        uVar18 = sym.rndis_register(0x80048a0,arg2);
        if (0xfffffffffffff000 < uVar18) goto code_r0x0800a990;
        *(arg2 + 0x100) = uVar18;
        sym.rndis_set_param_medium(uVar18,0,0);
        get_random_bytes(arg2 + 0x206,6);
        puVar1 = arg2 + 0x200;
        *(arg2 + 0x206) = *(arg2 + 0x206) & 0xfc | 2;
        get_random_bytes(puVar1,6);
        *(arg2 + 0x200) = *(arg2 + 0x200) & 0xfc | 2;
        if (arg2 != 0) {
            ipc_log_string(*(arg2 + 0x6e0),"setting host_ethaddr=%pM, device_ethaddr = %pM",puVar1,arg2 + 0x206);
        }
        *(arg2 + 0xe8) = *puVar1;
        *(arg2 + 0xec) = *(arg2 + 0x204);
        *(*(arg2 + 0x100) + 0x18) = arg2 + 0xe8;
        if (((*(arg2 + 0xf8) == 0) || (*(arg2 + 0xe4) == 0)) ||
           (iVar8 = sym.rndis_set_param_vendor(*(arg2 + 0x100),*(arg2 + 0xe4),*(arg2 + 0xf8)), iVar8 == 0)) {
            *0x80008e5 = 0xe0;
            *0x80008e6 = 1;
            *0x80008e7 = 3;
            if (*(arg2 + 0x110) < 10) {
                switch(*(*(arg2 + 0x110) * 2 + 0x800377e) * 4 + 0x8009f1c) {
                case 0x8009f20:
                    *(arg2 + 0x110) = 3;
                case 0x8009f2c:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 1;
                    break;
                case 0x800a3ec:
                    *0x80008e5 = 0xef;
                    *0x80008e7 = 1;
                    *0x80008e6 = 1;
                    break;
                case 0x800a400:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 2;
                    break;
                case 0x800a414:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 3;
                    break;
                case 0x800a428:
                    *0x80008e5 = 0xef;
                    *0x80008e7 = 4;
                    *0x80008e6 = 4;
                    break;
                case 0x800a43c:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 5;
                    break;
                case 0x800a450:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 6;
                    break;
                case 0x800a464:
                    *0x80008e5 = 0xef;
                    *0x80008e6 = 4;
                    *0x80008e7 = 7;
                }
            }
            pcVar28 = obj.rndis_gsi_iad_descriptor;
            pcStack_d8 = NULL;
            uStack_d0 = 8;
            pcStack_c0 = obj.rndis_gsi_fs_in_desc;
            uStack_b0 = 0x40;
            uVar29 = 0;
            uVar15 = 0;
            pcStack_b8 = NULL;
            uVar9 = 0;
            pcVar14 = obj.rndis_gsi_string_defs;
            pcVar16 = obj.gsi_eth_ss_function;
            pcVar25 = obj.gsi_eth_hs_function;
            pcVar38 = obj.gsi_eth_fs_function;
            pcVar26 = obj.rndis_gsi_ss_notify_desc;
            pcVar39 = obj.rndis_gsi_ss_out_desc;
            pcVar37 = obj.rndis_gsi_ss_in_desc;
            pcVar32 = obj.rndis_gsi_hs_notify_desc;
            pcVar35 = obj.rndis_gsi_hs_out_desc;
            pcVar6 = obj.rndis_gsi_hs_in_desc;
            pcVar31 = obj.rndis_gsi_fs_notify_desc;
            pcVar27 = obj.rndis_gsi_fs_out_desc;
            pcStack_130 = obj.rndis_gsi_control_intf;
            uVar36 = 2;
            uVar19 = 0x6000;
            uVar21 = 0x32;
            uVar24 = 0x4000;
            iStack_c8 = 1;
            uVar30 = 8;
            pcVar17 = obj.rndis_gsi_union_desc;
            pcStack_a8 = obj.rndis_gsi_data_intf;
            *0x80008f6 = *0x80008e5;
            *0x80008f7 = *0x80008e6;
            *0x80008f8 = *0x80008e7;
            goto code_r0x0800a560;
        }
        goto code_r0x0800a988;
    case 0x8009f54:
        *(arg2 + 0x220) = 0x80000000800;
        get_random_bytes(arg2 + 0x206,6);
        *(arg2 + 0x206) = *(arg2 + 0x206) & 0xfc | 2;
        get_random_bytes(arg2 + 0x200,6);
        uVar20 = *(arg2 + 0x200) & 0xfc | 2;
        *(arg2 + 0x200) = uVar20;
        if (arg2 != 0) {
            ipc_log_string(*(arg2 + 0x6e0),"setting host_ethaddr=%pM, device_ethaddr = %pM",arg2 + 0x200,arg2 + 0x206
                          );
            uVar20 = *(arg2 + 0x200);
        }
        scnprintf(arg2 + 0xe8,0xe,"%02X%02X%02X%02X%02X%02X",uVar20,*(arg2 + 0x201),*(arg2 + 0x202),
                  *(arg2 + 0x203),*(arg2 + 0x204),*(arg2 + 0x205));
        pcVar14 = obj.ecm_gsi_string_defs;
        pcStack_d8 = obj.ecm_gsi_data_nop_intf;
        pcStack_c0 = obj.ecm_gsi_fs_in_desc;
        pcStack_b8 = obj.ecm_gsi_desc;
        uVar36 = 0;
        uStack_b0 = 0x40;
        pcVar28 = NULL;
        uVar30 = 0x10;
        pcVar16 = obj.ecm_gsi_ss_function;
        pcVar25 = obj.ecm_gsi_hs_function;
        pcStack_a8 = obj.ecm_gsi_data_intf;
        pcVar38 = obj.ecm_gsi_fs_function;
        pcVar26 = obj.ecm_gsi_ss_notify_desc;
        pcVar39 = obj.ecm_gsi_ss_out_desc;
        pcVar37 = obj.ecm_gsi_ss_in_desc;
        pcVar32 = obj.ecm_gsi_hs_notify_desc;
        pcVar35 = obj.ecm_gsi_hs_out_desc;
        pcVar6 = obj.ecm_gsi_hs_in_desc;
        pcVar31 = obj.ecm_gsi_fs_notify_desc;
        pcVar27 = obj.ecm_gsi_fs_out_desc;
        pcVar17 = obj.ecm_gsi_union_desc;
        uVar24 = 0x800;
        uVar15 = 0xd;
        uVar29 = 1;
        iStack_c8 = 2;
        uVar19 = 0x800;
        uStack_d0 = 0;
        pcStack_130 = obj.ecm_gsi_control_intf;
        *0x8000818 = arg2 + 0xe8;
code_r0x0800a0c8:
        uVar21 = 0xf;
        uVar9 = 9;
        goto code_r0x0800a560;
    case 0x800a0d4:
        *(arg2 + 0x220) = 0x600000004000;
        pcStack_a8 = obj.rmnet_gsi_interface_desc;
        uVar9 = 0;
        pcVar17 = NULL;
        uVar15 = 0;
        pcVar28 = NULL;
        pcStack_130 = NULL;
        uVar29 = 0;
        uVar18 = 0;
        bVar4 = true;
        pcStack_c0 = obj.rmnet_gsi_fs_in_desc;
        pcStack_b8 = NULL;
        pcVar27 = obj.rmnet_gsi_fs_out_desc;
        pcVar31 = obj.rmnet_gsi_fs_notify_desc;
        pcVar6 = obj.rmnet_gsi_hs_in_desc;
        pcVar35 = obj.rmnet_gsi_hs_out_desc;
        pcVar32 = obj.rmnet_gsi_hs_notify_desc;
        pcVar37 = obj.rmnet_gsi_ss_in_desc;
        pcVar39 = obj.rmnet_gsi_ss_out_desc;
        pcVar26 = obj.rmnet_gsi_ss_notify_desc;
        pcVar38 = obj.rmnet_gsi_fs_function;
        pcVar25 = obj.rmnet_gsi_hs_function;
        uVar30 = 8;
        uVar21 = 0x32;
        uVar19 = 0x7c00;
        uVar34 = 0xe;
        uVar24 = 0x7c00;
        pcVar16 = obj.rmnet_gsi_ss_function;
        pcVar14 = obj.rmnet_gsi_string_defs;
        bVar3 = false;
        pcStack_d8 = NULL;
        uStack_d0 = 0;
        iStack_c8 = 0;
        uStack_b0 = 0x20;
        break;
    case 0x800a1a8:
        *(arg2 + 0x220) = 0x600000004000;
        *0x8000c31 = 0x800;
        uStack_d0 = 8;
        pcStack_c0 = obj.mbim_gsi_fs_in_desc;
        uVar29 = 0;
        pcVar14 = obj.mbim_gsi_string_defs;
        pcStack_d8 = obj.mbim_gsi_data_nop_intf;
        uVar30 = 8;
        pcVar16 = obj.mbim_gsi_ss_function;
        pcVar25 = obj.mbim_gsi_hs_function;
        pcVar38 = obj.mbim_gsi_fs_function;
        uStack_b0 = 0x30;
        pcVar26 = obj.mbim_gsi_ss_notify_desc;
        pcVar39 = obj.mbim_gsi_ss_out_desc;
        pcVar37 = obj.mbim_gsi_ss_in_desc;
        pcVar32 = obj.mbim_gsi_hs_notify_desc;
        pcVar35 = obj.mbim_gsi_hs_out_desc;
        pcStack_a8 = obj.mbim_gsi_data_intf;
        pcVar6 = obj.mbim_gsi_hs_in_desc;
        pcVar31 = obj.mbim_gsi_fs_notify_desc;
        pcVar27 = obj.mbim_gsi_fs_out_desc;
        pcVar17 = obj.mbim_gsi_union_desc;
        pcVar28 = obj.mbim_gsi_iad_desc;
        uVar36 = 0xffffffff;
        uVar21 = 0xf;
        uVar24 = 0x4000;
        uVar9 = 9;
        iStack_c8 = 1;
        pcStack_130 = obj.mbim_gsi_control_intf;
        if (arg2 == 0) {
            pcStack_b8 = NULL;
            uVar19 = 0x4000;
            uVar15 = uVar29;
            uVar30 = 8;
            goto code_r0x0800a0c8;
        }
        uVar15 = 0;
        uVar19 = 0x4000;
        pcStack_b8 = NULL;
        if (0xfffffffc < *(arg1 + 0x28) - 5) {
            ipc_log_string(*(arg2 + 0x6e0),"MBIM in configuration %d");
            uStack_d0 = 8;
            pcStack_c0 = obj.mbim_gsi_fs_in_desc;
            uVar29 = 0;
            pcStack_d8 = obj.mbim_gsi_data_nop_intf;
            uVar15 = 0;
            pcStack_b8 = NULL;
            pcVar14 = obj.mbim_gsi_string_defs;
            pcVar16 = obj.mbim_gsi_ss_function;
            uStack_b0 = 0x30;
            pcVar25 = obj.mbim_gsi_hs_function;
            pcVar38 = obj.mbim_gsi_fs_function;
            pcVar26 = obj.mbim_gsi_ss_notify_desc;
            pcVar39 = obj.mbim_gsi_ss_out_desc;
            pcVar37 = obj.mbim_gsi_ss_in_desc;
            pcStack_a8 = obj.mbim_gsi_data_intf;
            pcVar32 = obj.mbim_gsi_hs_notify_desc;
            pcVar35 = obj.mbim_gsi_hs_out_desc;
            pcVar6 = obj.mbim_gsi_hs_in_desc;
            pcVar31 = obj.mbim_gsi_fs_notify_desc;
            pcVar27 = obj.mbim_gsi_fs_out_desc;
            pcVar17 = obj.mbim_gsi_union_desc;
            pcVar28 = obj.mbim_gsi_iad_desc;
            uVar36 = 0xffffffff;
            uVar21 = 0xf;
            uVar24 = 0x4000;
            uVar9 = 9;
            iStack_c8 = 1;
            uVar19 = 0x4000;
            uVar30 = 8;
            pcStack_130 = obj.mbim_gsi_control_intf;
        }
code_r0x0800a560:
        iVar7 = usb_string_id(puVar23);
        if (-1 < iVar7) {
            bVar3 = false;
            bVar4 = false;
            uVar34 = 0xe;
            *pcVar14 = SUB41(iVar7,0);
            pcStack_130[8] = SUB41(iVar7,0);
            uVar18 = uVar36;
            break;
        }
        goto code_r0x0800a988;
    }
    iVar7 = usb_string_id(puVar23);
    if (iVar7 < 0) {
code_r0x0800a988:
        sym.rndis_deregister(*(arg2 + 0x100));
    }
    else {
        if (uStack_b0 == iStack_c8 * 0x10) goto code_r0x0800abb0;
        pcVar14[iStack_c8 * 0x10] = SUB41(iVar7,0);
        pcStack_a8[8] = SUB41(iVar7,0);
        if ((pcVar28 != NULL) && (-1 < uVar18)) {
            iVar7 = usb_string_id(uVar18,puVar23);
            if (iVar7 < 0) goto code_r0x0800a988;
            if (uStack_b0 <= uVar18 * 0x10) goto code_r0x0800abb0;
            pcVar14[uVar18 * 0x10] = SUB41(iVar7,0);
            if (uStack_d0 < 7) goto code_r0x0800abb0;
            pcVar28[7] = SUB41(iVar7,0);
        }
        if (pcStack_b8 != NULL) {
            iVar7 = usb_string_id(puVar23);
            if (iVar7 < 0) goto code_r0x0800a988;
            pcVar14[uVar29 * 0x10] = SUB41(iVar7,0);
            if (uVar15 < 3) goto code_r0x0800abb0;
            pcStack_b8[3] = SUB41(iVar7,0);
        }
        if (pcStack_130 != NULL) {
            if (bVar4) goto code_r0x0800abb0;
            pcStack_130[2] = SUB41(*(arg2 + 0xdc),0);
        }
        if (pcVar28 != NULL) {
            if (uStack_d0 < 2) goto code_r0x0800abb0;
            pcVar28[2] = SUB41(*(arg2 + 0xdc),0);
        }
        if (pcVar17 != NULL) {
            if (bVar4) goto code_r0x0800abb0;
            pcVar17[3] = SUB41(*(arg2 + 0xdc),0);
            pcVar17[4] = SUB41(*(arg2 + 0xe0),0);
        }
        pcStack_a8[2] = SUB41(*(arg2 + 0xe0),0);
        if (pcStack_d8 != NULL) {
            if (uVar9 < 2) goto code_r0x0800abb0;
            pcStack_d8[2] = SUB41(*(arg2 + 0xe0),0);
        }
        puVar10 = usb_ep_autoconfig(*puVar23,pcStack_c0);
        if (puVar10 == NULL) {
code_r0x0800a918:
            if (*(arg2 + 0x660) != NULL) {
                kfree(**(arg2 + 0x660));
                usb_ep_free_request(*(arg2 + 0x658),*(arg2 + 0x660));
            }
            if (*(arg2 + 0x658) != NULL) {
                **(arg2 + 0x658) = 0;
            }
            iVar11 = *(arg2 + 0x130);
            if ((iVar11 != 0) && (*(iVar11 + 0x38) != 0)) {
                msm_ep_set_mode(iVar11,0);
                **(arg2 + 0x130) = 0;
            }
            iVar11 = *(arg2 + 0x128);
            if ((iVar11 != 0) && (*(iVar11 + 0x38) != 0)) {
                msm_ep_set_mode(iVar11,0);
                **(arg2 + 0x128) = 0;
            }
            if (arg2 != 0) {
                ipc_log_string(*(arg2 + 0x6e0),"%s: bind failed for %s","gsi_update_function_bind_params",*arg2);
                _printk(0x80018bb,"gsi_update_function_bind_params",*arg2);
            }
            iVar7 = -0xc;
            goto code_r0x0800a988;
        }
        *(arg2 + 0x128) = puVar10;
        msm_ep_set_mode(puVar10,2);
        *puVar10 = puVar23;
        if (pcVar27 != NULL) {
            puVar10 = usb_ep_autoconfig(*puVar23);
            if (puVar10 == NULL) goto code_r0x0800a918;
            *(arg2 + 0x130) = puVar10;
            msm_ep_set_mode(puVar10,2);
            *puVar10 = puVar23;
        }
        if (pcVar31 != NULL) {
            puVar10 = usb_ep_autoconfig(*puVar23,pcVar31);
            if (puVar10 != NULL) {
                *(arg2 + 0x658) = puVar10;
                *puVar10 = puVar23;
                iVar11 = usb_ep_alloc_request(puVar10,0xcc0);
                *(arg2 + 0x660) = iVar11;
                if (iVar11 != 0) {
                    uVar12 = __kmalloc(uVar30,0xcc0);
                    **(arg2 + 0x660) = uVar12;
                    if (**(arg2 + 0x660) != 0) {
                        *(*(arg2 + 0x660) + 1) = uVar30;
                        *(*(arg2 + 0x660) + 0x38) = arg2;
                        *(*(arg2 + 0x660) + 0x30) =
                             sym.gsi_ctrl_notify_resp_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                        puVar22 = **(arg2 + 0x660);
                        *puVar22 = 0xa1;
                        iVar7 = *(arg2 + 0xdc);
                        if (iVar7 == -0x13) {
                            iVar7 = *(arg2 + 0xe0);
                        }
                        *(puVar22 + 4) = iVar7;
                        *(puVar22 + 6) = 0;
                        goto code_r0x0800a87c;
                    }
                }
            }
            goto code_r0x0800a918;
        }
code_r0x0800a87c:
        *(arg2 + 0x148) = uVar21;
        *(arg2 + 0x150) = uVar24;
        if (*(arg2 + 0x130) != 0) {
            *(arg2 + 0x1a0) = uVar34;
            *(arg2 + 0x1a8) = uVar19;
        }
        *(arg2 + 0x350) = 0;
        *(arg2 + 0x34c) = 0x7f7f;
        cVar2 = pcStack_c0[2];
        pcVar6[2] = cVar2;
        pcVar37[2] = cVar2;
        if (pcVar27 == NULL) {
            if (pcVar31 != NULL) {
                if (bVar3) goto code_r0x0800abb0;
code_r0x0800a8f0:
                pcVar32[2] = pcVar31[2];
                pcVar26[2] = pcVar31[2];
            }
        }
        else {
            if (bVar3) goto code_r0x0800abb0;
            pcVar35[2] = pcVar27[2];
            pcVar39[2] = pcVar27[2];
            if (pcVar31 != NULL) goto code_r0x0800a8f0;
        }
        iVar7 = usb_assign_descriptors(arg2,pcVar38,pcVar25,pcVar16,pcVar16);
        if (iVar7 != 0) goto code_r0x0800a918;
        *(arg2 + 0x72d) = 0;
        iVar7 = ipa_register_ipa_ready_cb(sym.__typeid__ZTSFvPvE_global_addr,arg2);
        if (iVar7 == 0) {
            cVar5 = *0x228;
            if (arg2 != 0) {
                ipc_log_string(*(arg2 + 0x6e0),"%s: ipa is not ready","gsi_bind");
                _printk(0x8002925,"gsi_bind");
                cVar5 = *(arg2 + 0x228);
            }
            if (cVar5 == '\0') {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                init_wait_entry(&stack0xffffffffffffff68,0);
                iVar11 = arg2 + 0x358;
                iVar13 = prepare_to_wait_event(iVar11,&stack0xffffffffffffff68,1);
                if (*(arg2 + 0x228) == '\0') {
                    iVar33 = 0x4e2;
                    do {
                        if (iVar13 != 0) goto code_r0x0800aa3c;
                        iVar33 = schedule_timeout(iVar33);
                        iVar13 = prepare_to_wait_event(iVar11,&stack0xffffffffffffff68,1);
                        if (iVar33 == 0 && *(arg2 + 0x228) != '\0') {
                            iVar33 = 1;
                        }
                    } while ((*(arg2 + 0x228) == '\0') && (iVar33 != 0));
                }
                else {
                    iVar33 = 0x4e2;
                }
                iVar13 = iVar33;
                finish_wait(iVar11,&stack0xffffffffffffff68);
code_r0x0800aa3c:
                if (iVar13 == 0) {
                    if (arg2 != 0) {
                        ipc_log_string(*(arg2 + 0x6e0),"%s: ipa ready timeout","gsi_bind");
                        _printk(0x8001cc7,"gsi_bind");
                    }
                    iVar7 = -0x6e;
                    *(arg2 + 0x72d) = 1;
                    goto code_r0x0800a988;
                }
            }
            *(arg2 + 0x228) = 0;
        }
        *(arg2 + 0x1f8) = sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar7 = ipa_usb_init_teth_prot
                          (*(arg2 + 0xd8),arg2 + 0x200,sym.ipa_usb_notify_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                           arg2);
        if (iVar7 != 0) {
            if (arg2 != 0) {
                ipc_log_string(*(arg2 + 0x6e0),"%s: failed to init teth prot(%d) with err:%d","gsi_bind",
                               *(arg2 + 0xd8),iVar7);
                _printk(0x8001e8e,"gsi_bind",*(arg2 + 0xd8),iVar7);
            }
            goto code_r0x0800a988;
        }
        *(arg2 + 0x2c8) = 1;
    }
code_r0x0800a990:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return iVar7;
    }
    __stack_chk_fail();
code_r0x0800abb0:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x800abb4);
    (*pcVar6)();
}


// ===== sym.gsi_unbind @ 0x0800abb4 (size 244) =====

void sym.gsi_unbind(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s:id:%d: dwq start","gsi_unbind",*(arg1 + 0xd8));
    }
    if (*(arg1 + 0x108) != 0) {
        sym.gsi_disable(arg1);
    }
    drain_workqueue(*(arg1 + 0x2c0));
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s:id:%d: dwq end","gsi_unbind",*(arg1 + 0xd8));
    }
    ipa_usb_deinit_teth_prot(*(arg1 + 0xd8));
    obj.rndis_gsi_string_defs = 0x0;
    obj.ecm_gsi_string_defs = 0x0;
    obj.rmnet_gsi_string_defs = 0x0;
    obj.mbim_gsi_string_defs = 0x0;
    obj.qdss_gsi_string_defs = 0x0;
    if (*(arg1 + 0xd8) == 0) {
        *(arg1 + 0x2c8) = 0;
        sym.rndis_deregister(*(arg1 + 0x100));
    }
    usb_free_all_descriptors(arg1);
    if (*(arg1 + 0x658) != 0) {
        kfree(**(arg1 + 0x660));
        usb_ep_free_request(*(arg1 + 0x658),*(arg1 + 0x660));
    }
    return;
}


// ===== sym.gsi_set_alt @ 0x0800acac (size 1016) =====

ulong sym.gsi_set_alt(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    bool bVar2;
    int iVar3;
    uint64_t arg2_00;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uchar uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    uint32_t uVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg3;
    puVar10 = *(*(arg1 + 0x30) + 0x30);
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"intf=%u, alt=%u",arg2 & 0xffffffff,arg3 & 0xffffffff);
    }
    if ((*(arg1 + 0xdc) == arg2) || (*(arg1 + 0xd8) == 2)) {
        if (uVar9 != 0) {
            return 0xffffffea;
        }
        piVar5 = *(arg1 + 0x658);
        if (piVar5 == NULL) {
            return 0xffffffea;
        }
        if (*piVar5 != 0) {
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"reset gsi control %d",arg2 & 0xffffffff);
                piVar5 = *(arg1 + 0x658);
            }
            usb_ep_disable(piVar5);
            piVar5 = *(arg1 + 0x658);
        }
        iVar3 = config_ep_by_speed(*puVar10,arg1,piVar5);
        if (iVar3 != 0) {
            *(*(arg1 + 0x658) + 0x38) = 0;
            if (arg1 == 0) {
                return 0xffffffea;
            }
            ipc_log_string(*(arg1 + 0x6e0),"Config-fail notify ep %s: err %d",*(*(arg1 + 0x658) + 8),iVar3);
            iVar6 = *(arg1 + 0x658);
            uVar4 = 0x8002d30;
code_r0x0800adf4:
            _printk(uVar4,*(iVar6 + 8),iVar3);
            return 0xffffffea;
        }
        iVar3 = usb_ep_enable();
        if (iVar3 != 0) {
            if (arg1 == 0) {
                return 0xffffffea;
            }
            ipc_log_string(*(arg1 + 0x6e0),"usb ep#%s enable failed, err#%d",*(*(arg1 + 0x658) + 8),iVar3);
            iVar6 = *(arg1 + 0x658);
            uVar4 = 0x8002de3;
            goto code_r0x0800adf4;
        }
        **(arg1 + 0x658) = arg1;
    }
    if (*(arg1 + 0xe0) != arg2) {
        uVar4 = 0;
        goto code_r0x0800ae5c;
    }
    uVar1 = *(arg1 + 0xd8);
    piVar5 = arg1 + 0x128;
    *(arg1 + 0x229) = 0;
    if ((uVar1 < 5) && ((1 << (uVar1 & 0x1f) & 0x15U) != 0)) {
        if ((*piVar5 == NULL) || (**piVar5 != 0)) {
            uVar9 = 0;
        }
        else {
            uVar9 = 1;
        }
    }
    else if (1 < uVar9) goto code_r0x0800af14;
    if (uVar9 == *(arg1 + 0x10c)) {
        return 0;
    }
    piVar8 = *piVar5;
    if (piVar8 == NULL) {
        if (uVar9 == 1) goto code_r0x0800aee4;
code_r0x0800af34:
        if ((*(arg1 + 0x130) != NULL) && (**(arg1 + 0x130) == 0)) goto code_r0x0800af4c;
        uVar4 = 0;
code_r0x0800b06c:
        bVar2 = uVar9 != 0;
        *(arg1 + 0x10c) = bVar2;
        if (arg1 == 0) goto code_r0x0800ae5c;
    }
    else {
        if (*piVar8 != 0) {
            *(arg1 + 0x22c) = 0x4000;
        }
        if (uVar9 == 1) {
            uVar7 = 2;
            if (uVar1 == 4) {
                uVar7 = 3;
            }
            *(arg1 + 0x16c) = uVar7;
code_r0x0800aee4:
            if (*(arg1 + 0x130) != 0) {
                *(arg1 + 0x1c4) = 1;
            }
            *(arg1 + 0x1e8) = *puVar10;
            *(arg1 + 0x1f0) = puVar10;
            if (uVar1 == 0) {
                sym.gsi_rndis_open(arg1);
                arg2_00 = sym.gsi_rndis_get_netdev();
                if (0xfffffffffffff000 < arg2_00) {
code_r0x0800af14:
                    if ((*(arg1 + 0x658) != NULL) && (**(arg1 + 0x658) != 0)) {
                        usb_ep_disable();
                    }
                    return 0xffffffea;
                }
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x6e0),"RNDIS RX/TX early activation");
                }
                *(arg1 + 0x21e) = 0;
                sym.rndis_set_param_dev(*(arg1 + 0x100),arg2_00,arg1 + 0x21e);
                uVar1 = *(arg1 + 0xd8);
            }
            if (uVar1 == 1) {
                *(arg1 + 0x21e) = 0xf;
            }
            uVar4 = _raw_spin_lock_irqsave(arg1 + 0x350);
            uVar1 = *(arg1 + 0x34d) + 1 & 0x7f;
            *(arg1 + 0x34d) = uVar1;
            if (uVar1 == *(arg1 + 0x34c)) {
                if (piVar5 != 0x128) {
                    ipc_log_string(*(arg1 + 0x6e0),"%s: event queue overflow error","post_event");
                    _printk(0x800273c,"post_event");
                }
            }
            else {
                *(piVar5 + uVar1 + 0x1a4) = 3;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x350,uVar4);
            queue_delayed_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x238,1);
            uVar4 = 0x7fff;
            goto code_r0x0800b06c;
        }
        if (*piVar8 != 0) goto code_r0x0800af34;
code_r0x0800af4c:
        sym.post_event(piVar5,7);
        queue_delayed_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x238,0);
        if (arg1 == 0) {
            uVar4 = 0;
            *0x10c = 0;
            goto code_r0x0800ae5c;
        }
        ipc_log_string(*(arg1 + 0x6e0),"%s: Disconnecting\n","gsi_set_alt");
        bVar2 = false;
        uVar4 = 0;
        *(arg1 + 0x10c) = 0;
    }
    ipc_log_string(*(arg1 + 0x6e0),"DATA_INTERFACE id = %d, status = %d",*(arg1 + 0xe0),bVar2);
code_r0x0800ae5c:
    *(arg1 + 0x108) = 1;
    if (*(arg1 + 0xd8) == 4) {
        sym.gsi_ctrl_send_cpkt_tomodem(arg1,0,0);
    }
    return uVar4;
}


// ===== sym.gsi_get_alt @ 0x0800b0a4 (size 96) =====

uint64_t sym.gsi_get_alt(int64_t arg1,uint32_t arg2)

{
    if ((*(arg1 + 0xdc) != arg2) && ((4 < *(arg1 + 0xd8) || ((1 << (*(arg1 + 0xd8) & 0x1f) & 0x15U) == 0)))) {
        if (*(arg1 + 0xe0) == arg2) {
            return *(arg1 + 0x10c);
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.gsi_setup @ 0x0800b104 (size 1612) =====

uint64_t sym.gsi_setup(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int iVar6;
    uint16_t uVar7;
    int16_t iVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    bool bVar11;
    uint32_t uVar12;
    int *arg2_00;
    ulong uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    uint32_t uVar15;
    ulong *puVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong unaff_x30;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_6c = 0;
    uVar7 = *(arg2 + 4);
    iVar8 = *(arg2 + 2);
    piVar19 = *(*(arg1 + 0x30) + 0x30);
    uVar9 = *(arg2 + 6);
    uVar14 = uVar9;
    uVar12 = uVar9;
    puVar16 = piVar19[1];
    if (*(arg1 + 0x108) == 0) {
        if (arg1 == 0) {
            uVar18 = 0xffffff95;
        }
        else {
            ipc_log_string(*(arg1 + 0x6e0),"usb cable is not connected");
            uVar18 = 0xffffff95;
        }
        goto code_r0x0800b6dc;
    }
    uVar5 = *(arg1 + 0xdc);
    if (uVar5 == 0xffffffed) {
        uVar5 = *(arg1 + 0xe0);
    }
    uVar10 = (((*arg2 & 0xff00) << 0x10) >> 8 | *arg2 << 0x18) >> 0x10;
    uVar15 = uVar9;
    uVar17 = uVar7;
    if (uVar10 < 0x2186) {
        if (uVar10 < 0x2122) {
            if (uVar10 == 0x2100) {
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_SEND_ENCAPSULATED_COMMAND");
                }
                if ((iVar8 != 0) || (uVar5 != uVar17)) goto code_r0x0800b3f8;
                puVar16[7] = arg1;
                if (*(arg1 + 0xd8) == 0) {
                    puVar16[6] = sym.gsi_rndis_command_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
                else {
                    puVar16[6] = sym.gsi_ctrl_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                }
            }
            else {
                if (uVar10 != 0x2105) {
code_r0x0800b3f8:
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x6e0),"inval ctrl req%02x.%02x v%04x i%04x l%d",*arg2,*(arg2 + 1),
                                       iVar8,uVar7,uVar14);
                        _printk(0x8003108,*arg2,*(arg2 + 1),iVar8,uVar7,uVar14);
                        uVar18 = 0xffffffa1;
                        goto code_r0x0800b6dc;
                    }
                    goto code_r0x0800b3fc;
                }
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_RESET_FUNCTION");
                }
                puVar16[6] = sym.gsi_ctrl_reset_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                puVar16[7] = arg1;
                uVar12 = 0;
            }
        }
        else if (uVar10 == 0x2122) {
            if (*(arg1 + 0xd8) == 2) {
                *(arg1 + 0x6e8) = iVar8 & 1;
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"%s: USB_CDC_REQ_SET_CONTROL_LINE_STATE DTR:%d\n","gsi_setup");
            }
            sym.gsi_ctrl_send_cpkt_tomodem(arg1,0,0);
            uVar12 = 0;
        }
        else {
            if (((uVar10 != 0x2143) || (uVar15 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b3f8;
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"packet filter %02x",iVar8);
            }
            *(arg1 + 0x21e) = iVar8;
            uVar12 = 0;
        }
code_r0x0800b65c:
        if (arg1 != 0) goto code_r0x0800b664;
code_r0x0800b690:
        bVar11 = true;
    }
    else {
        if (uVar10 < 0xa180) {
            if (uVar10 != 0x2186) {
                if (uVar10 == 0xa101) {
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_GET_ENCAPSULATED_RESPONSE");
                    }
                    if ((iVar8 == 0) && (uVar5 == uVar17)) {
                        if (*(arg1 + 0xd8) != 0) {
                            iVar1 = arg1 + 0x6b8;
                            _raw_spin_lock(iVar1);
                            puVar2 = arg1 + 0x6a0;
                            if (*puVar2 == puVar2) {
                                if (arg1 != 0) {
                                    ipc_log_string(*(arg1 + 0x6e0),"ctrl resp queue empty");
                                }
                                _raw_spin_unlock(iVar1);
                                uVar18 = 0xffffffa1;
                                goto code_r0x0800b6dc;
                            }
                            piVar20 = *puVar2;
                            uVar18 = __list_del_entry_valid(piVar20);
                            if ((uVar18 & 1) != 0) {
                                iVar3 = *piVar20;
                                piVar4 = piVar20[1];
                                *(iVar3 + 8) = piVar4;
                                *piVar4 = iVar3;
                            }
                            *piVar20 = -0x2152ffffffffff00;
                            piVar20[1] = -0x2152fffffffffede;
                            *(arg1 + 0x6d8) = *(arg1 + 0x6d8) + 1;
                            _raw_spin_unlock(iVar1);
                            uVar12 = uVar15;
                            if (*(piVar20 + -1) <= uVar9) {
                                uVar12 = *(piVar20 + -1);
                            }
                            memcpy(*puVar16,piVar20[-2],uVar12);
                            sym.gsi_ctrl_pkt_free(piVar20 + -2);
                            puVar16[6] = sym.gsi_ctrl_send_response_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            puVar16[7] = arg1;
                            if (arg1 == 0) goto code_r0x0800b690;
                            ipc_log_string(*(arg1 + 0x6e0),"copied encap_resp %d bytes",uVar12);
                            uVar17 = uVar5;
                            goto code_r0x0800b664;
                        }
                        arg2_00 = sym.rndis_get_next_response(*(arg1 + 0x100),&stack0xffffffffffffff94);
                        if (arg2_00 == NULL) goto code_r0x0800b3fc;
                        if (*arg2_00 == -0x7ffffffe) {
                            if (arg1 == 0) {
                                arg2_00[8] = 0xf;
                                arg2_00[9] = arg2_00[9] * 0xf;
                            }
                            else {
                                ipc_log_string(*(arg1 + 0x6e0),"%s: max_pkt_per_xfer : %d","gsi_setup",0xf);
                                arg2_00[8] = 0xf;
                                arg2_00[9] = arg2_00[9] * 0xf;
                                ipc_log_string(*(arg1 + 0x6e0),"%s: pkt_alignment_factor : %d","gsi_setup",4);
                            }
                            arg2_00[10] = 4;
                        }
                        memcpy(*puVar16,arg2_00,uStack_6c);
                        sym.rndis_free_response(*(arg1 + 0x100),arg2_00);
                        uVar18 = uStack_6c;
                        uVar12 = uStack_6c;
                        if (uStack_6c < 0) goto code_r0x0800b6dc;
                        goto code_r0x0800b65c;
                    }
                }
                goto code_r0x0800b3f8;
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_SET_NTB_INPUT_SIZE");
            }
            if ((uVar15 == 4) || (uVar15 == 8)) {
                uVar18 = 0xffffffa1;
                if ((iVar8 != 0) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
                *(puVar16 + 1) = uVar15;
                puVar16[6] = sym.gsi_ctrl_set_ntb_cmd_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                puVar16[7] = arg1;
                goto code_r0x0800b65c;
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"wrong NTB length %d",uVar14);
                _printk(0x8001727,uVar14);
                uVar18 = 0xffffffa1;
                goto code_r0x0800b6dc;
            }
code_r0x0800b3fc:
            uVar18 = 0xffffffa1;
            goto code_r0x0800b6dc;
        }
        if (uVar10 == 0xa180) {
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_GET_NTB_PARAMETERS");
            }
            uVar18 = 0xffffffa1;
            if (((uVar15 == 0) || (iVar8 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
            uVar12 = uVar14;
            if (0x1b < uVar14) {
                uVar12 = 0x1c;
            }
            memcpy(*puVar16,obj.mbim_gsi_ntb_parameters,uVar12);
            goto code_r0x0800b65c;
        }
        if (uVar10 != 0xa185) goto code_r0x0800b3f8;
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"USB_CDC_GET_NTB_INPUT_SIZE");
        }
        uVar18 = 0xffffffa1;
        if (((uVar15 < 4) || (iVar8 != 0)) || (uVar5 != uVar17)) goto code_r0x0800b6dc;
        **puVar16 = *(arg1 + 0x22c);
        if (arg1 == 0) {
            uVar12 = 4;
            goto code_r0x0800b690;
        }
        ipc_log_string(*(arg1 + 0x6e0),"Reply to host INPUT SIZE %d",*(arg1 + 0x22c));
        uVar12 = 4;
        uVar17 = uVar5;
code_r0x0800b664:
        ipc_log_string(*(arg1 + 0x6e0),"req%02x.%02x v%04x i%04x l%d",*arg2,*(arg2 + 1),iVar8,uVar17,uVar14);
        bVar11 = false;
    }
    *(puVar16 + 1) = uVar12;
    *(puVar16 + 5) = *(puVar16 + 5) & 0xfff80000 | *(puVar16 + 5) & 0x3ffff | (uVar12 < uVar15) << 0x12;
    uVar12 = usb_ep_queue(*(*piVar19 + 0x40),puVar16,0xa20);
    uVar18 = uVar12;
    if (uVar12 < 0) {
        if (!bVar11) {
            ipc_log_string(*(arg1 + 0x6e0),"response on err %d",uVar18);
            _printk(0x800173d,uVar18);
        }
    }
    else {
        *(piVar19 + 0x94) = *(piVar19 + 0x94) | 1;
    }
code_r0x0800b6dc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar18;
    }
    puVar16 = __stack_chk_fail();
    *extraout_x18 = 0x800b748;
    *(puVar16 + 0x21) = 0;
    iVar6 = *(puVar16 + 0x1b);
    if (iVar6 == 0) {
        sym.rndis_uninit(puVar16[0x20]);
        iVar6 = *(puVar16 + 0x1b);
    }
    if (iVar6 == 2) {
        *(puVar16 + 0xdd) = 0;
        piVar19 = puVar16[0xcb];
    }
    else {
        piVar19 = puVar16[0xcb];
    }
    if ((piVar19 != NULL) && (*piVar19 != 0)) {
        usb_ep_disable();
        *puVar16[0xcb] = 0;
    }
    sym.gsi_ctrl_clear_cpkt_queues(puVar16);
    uVar18 = sym.gsi_ctrl_send_cpkt_tomodem(puVar16,0,0);
    *(puVar16 + 0xcd) = 0;
    if (*(puVar16 + 0x10c) == '\0') {
        if (puVar16 != NULL) {
            uVar18 = ipc_log_string(puVar16[0xdc],"%s: data intf is closed","gsi_disable");
        }
    }
    else {
        *(puVar16 + 0x10c) = 0;
        *(puVar16 + 0x72c) = 0;
        if (puVar16 != NULL) {
            ipc_log_string(puVar16[0xdc],"%s deactivated",*puVar16);
        }
        *(puVar16 + 0x229) = 0;
        uVar13 = _raw_spin_lock_irqsave(puVar16 + 0x6a);
        uVar12 = *(puVar16 + 0x34d) + 1 & 0x7f;
        *(puVar16 + 0x34d) = uVar12;
        if (uVar12 == *(puVar16 + 0x34c)) {
            if (puVar16 + 0x25 != 0x128) {
                ipc_log_string(puVar16[0xdc],"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(puVar16 + 0x25 + uVar12 + 0x1a4) = 7;
        }
        _raw_spin_unlock_irqrestore(puVar16 + 0x6a,uVar13);
        uVar18 = queue_delayed_work_on(0x20,puVar16[0x58],puVar16 + 0x47,0);
    }
    return uVar18;
}


// ===== sym.gsi_disable @ 0x0800b750 (size 388) =====

void sym.gsi_disable(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x108) = 0;
    iVar2 = *(arg1 + 0xd8);
    if (iVar2 == 0) {
        sym.rndis_uninit(*(arg1 + 0x100));
        iVar2 = *(arg1 + 0xd8);
    }
    if (iVar2 == 2) {
        *(arg1 + 0x6e8) = 0;
        piVar3 = *(arg1 + 0x658);
    }
    else {
        piVar3 = *(arg1 + 0x658);
    }
    if ((piVar3 != NULL) && (*piVar3 != 0)) {
        usb_ep_disable();
        **(arg1 + 0x658) = 0;
    }
    sym.gsi_ctrl_clear_cpkt_queues(arg1);
    sym.gsi_ctrl_send_cpkt_tomodem(arg1,0,0);
    *(arg1 + 0x668) = 0;
    if (*(arg1 + 0x10c) == '\0') {
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: data intf is closed","gsi_disable");
        }
    }
    else {
        *(arg1 + 0x10c) = 0;
        *(arg1 + 0x72c) = 0;
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s deactivated",*arg1);
        }
        *(arg1 + 0x229) = 0;
        uVar4 = _raw_spin_lock_irqsave(arg1 + 0x350);
        uVar1 = *(arg1 + 0x34d) + 1 & 0x7f;
        *(arg1 + 0x34d) = uVar1;
        if (uVar1 == *(arg1 + 0x34c)) {
            if (arg1 + 0x128 != 0x128) {
                ipc_log_string(*(arg1 + 0x6e0),"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(arg1 + 0x128 + uVar1 + 0x1a4) = 7;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x350,uVar4);
        queue_delayed_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x238,0);
    }
    return;
}


// ===== sym.gsi_free_func @ 0x0800b8d4 (size 12) =====

void sym.gsi_free_func(void)

{
    return;
}


// ===== sym.gsi_suspend @ 0x0800b8e0 (size 328) =====

ulong sym.gsi_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(arg1 + 0x114) == '\0') {
        auStack_3c[0] = 1;
        usb_gsi_ep_op(*(arg1 + 0x128),auStack_3c,0xb);
        uVar3 = _raw_spin_lock_irqsave(arg1 + 0x350);
        uVar1 = *(arg1 + 0x34d) + 1 & 0x7f;
        *(arg1 + 0x34d) = uVar1;
        if (uVar1 == *(arg1 + 0x34c)) {
            if (arg1 + 0x128 != 0x128) {
                ipc_log_string(*(arg1 + 0x6e0),"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(arg1 + 0x128 + uVar1 + 0x1a4) = 8;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x350,uVar3);
        uVar3 = queue_delayed_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x238,0);
        if (arg1 != 0) {
            uVar3 = ipc_log_string(*(arg1 + 0x6e0),"gsi suspended");
        }
    }
    else {
        uVar3 = 0;
        if (arg1 != 0) {
            uVar3 = ipc_log_string(*(arg1 + 0x6e0),"%s: func already suspended, return\n","gsi_suspend");
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.gsi_get_status @ 0x0800ba28 (size 16) =====

ulong sym.gsi_get_status(int64_t arg1)

{
    return 0;
}


// ===== sym.gsi_func_suspend @ 0x0800ba38 (size 168) =====

ulong sym.gsi_func_suspend(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 & 0xff;
    if (arg1 != 0) {
        iVar2 = 0x8003173;
        if (*arg1 != 0) {
            iVar2 = *arg1;
        }
        ipc_log_string(*(arg1 + 0x6e0),"func susp %u cmd for %s",uVar1,iVar2);
    }
    uVar3 = uVar1 >> 1 & 1;
    if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x114) != '\0') {
            *(arg1 + 0x114) = 0;
            sym.gsi_resume(arg1);
        }
        *(arg1 + 0x115) = uVar3;
    }
    else {
        *(arg1 + 0x115) = uVar3;
        if (*(arg1 + 0x114) == '\0') {
            sym.gsi_suspend(arg1);
            *(arg1 + 0x114) = 1;
        }
    }
    return 0;
}


// ===== sym.gsi_resume @ 0x0800bae0 (size 488) =====

void sym.gsi_resume(int64_t arg1)

{
    uint32_t uVar1;
    char *pcVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(*(arg1 + 0x30) + 0x30);
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s for prot_id:%d","gsi_resume",*(arg1 + 0xd8));
    }
    iVar4 = *piVar6;
    if ((*(iVar4 + 0x58) < 5) || (*(arg1 + 0x114) == '\0')) {
        if ((*(arg1 + 0x658) != 0) && (*(*(arg1 + 0x658) + 0x38) == 0)) {
            config_ep_by_speed(iVar4,arg1);
        }
        sym.gsi_ctrl_send_notification(arg1);
        if (*(arg1 + 0xd8) == 0) {
            if (*(**(*(arg1 + 0x30) + 0x30) + 0x58) < 5) {
                bVar3 = true;
            }
            else {
                bVar3 = *(arg1 + 0x115) != '\0';
            }
            if (arg1 != 0) {
                pcVar2 = "true";
                if (!bVar3) {
                    pcVar2 = "false";
                }
                ipc_log_string(*(arg1 + 0x6e0),"%s: remote_wakeup_allowed:%s","usb_gsi_remote_wakeup_allowed",pcVar2)
                ;
            }
            if (((!bVar3) && (*(arg1 + 0x72c) != '\0')) && (iVar4 = *(arg1 + 0x100), iVar4 != 0)) {
                if (*(iVar4 + 8) != 2) {
                    sym.gsi_rndis_flow_ctrl_enable(0,iVar4);
                    iVar4 = *(arg1 + 0x100);
                }
                *(iVar4 + 8) = 2;
            }
        }
        uVar5 = _raw_spin_lock_irqsave(arg1 + 0x350);
        uVar1 = *(arg1 + 0x34d) + 1 & 0x7f;
        *(arg1 + 0x34d) = uVar1;
        if (uVar1 == *(arg1 + 0x34c)) {
            if (arg1 + 0x128 != 0x128) {
                ipc_log_string(*(arg1 + 0x6e0),"%s: event queue overflow error","post_event");
                _printk(0x800273c,"post_event");
            }
        }
        else {
            *(arg1 + 0x128 + uVar1 + 0x1a4) = 10;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x350,uVar5);
        queue_delayed_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x238,0);
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: for prot_id:%d completed","gsi_resume",*(arg1 + 0xd8));
        }
    }
    return;
}


// ===== sym.gsi_rndis_response_available @ 0x0800bcc8 (size 288) =====

void sym.gsi_rndis_response_available(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xb20,0x20);
    if (puVar3 != NULL) {
        *(puVar3 + 1) = 0;
        *puVar3 = 0x10;
        if (puVar3 < 0xfffffffffffff001) {
            *(puVar3 + 0xc) = 4;
            uVar4 = _raw_spin_lock_irqsave(arg1 + 0x6b8);
            puVar6 = *(arg1 + 0x6a8);
            puVar1 = puVar3 + 2;
            uVar5 = __list_add_valid(puVar1,puVar6,arg1 + 0x6a0);
            if ((uVar5 & 1) != 0) {
                *(arg1 + 0x6a8) = puVar1;
                puVar3[2] = arg1 + 0x6a0;
                puVar3[3] = puVar6;
                *puVar6 = puVar1;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x6b8,uVar4);
            sym.gsi_ctrl_send_notification(arg1);
            return;
        }
    }
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x6e0),"%s: err allocating cpkt\n","gsi_rndis_response_available");
        _printk(0x80033fd,"gsi_rndis_response_available");
    }
    return;
}


// ===== sym.ipa_usb_notify_cb @ 0x0800bde8 (size 672) =====

ulong sym.ipa_usb_notify_cb(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    char *pcVar10;
    int iVar11;
    ulong *in_x18;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return 0xffffffea;
    }
    iVar1 = arg2 + 0x234;
    iVar11 = arg1;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (iVar11 == 2) {
        uVar6 = _raw_spin_lock_irqsave(arg2 + 0x350);
        uVar4 = *(arg2 + 0x34d) + 1 & 0x7f;
        *(arg2 + 0x34d) = uVar4;
        if (uVar4 == *(arg2 + 0x34c)) {
            ipc_log_string(*(arg2 + 0x6e0),"%s: event queue overflow error","post_event");
            _printk(0x800273c,"post_event");
        }
        else {
            *(arg2 + 0x128 + uVar4 + 0x1a4) = 9;
        }
        _raw_spin_unlock_irqrestore(arg2 + 0x350,uVar6);
    }
    else {
        if (iVar11 == 1) {
            sym.gsi_wakeup_host(arg2);
            goto code_r0x0800bedc;
        }
        if (iVar11 != 0) goto code_r0x0800bedc;
        if (*(arg2 + 0x229) != '\0') {
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            ipc_log_string(*(arg2 + 0x6e0),"%s: Already triggered","ipa_usb_notify_cb");
            return 1;
        }
        ipc_log_string(*(arg2 + 0x6e0),"%s: Set net_ready_trigger","ipa_usb_notify_cb");
        _printk(0x8003309,"ipa_usb_notify_cb");
        iVar11 = *(arg2 + 0xd8);
        *(arg2 + 0x229) = 1;
        if (iVar11 == 1) {
            uVar7 = sym.gsi_ctrl_pkt_alloc();
            if (0xfffffffffffff000 < uVar7) {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                uVar5 = *(arg2 + 0x6e0);
                pcVar10 = "%s: err cpkt_notify_connect\n";
code_r0x0800bfe0:
                ipc_log_string(uVar5,pcVar10,"ipa_usb_notify_cb");
                return 0xfffffff4;
            }
            *(uVar7 + 0xc) = 1;
            uVar8 = sym.gsi_ctrl_pkt_alloc();
            if (0xfffffffffffff000 < uVar8) {
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                sym.gsi_ctrl_pkt_free(uVar7);
                uVar5 = *(arg2 + 0x6e0);
                pcVar10 = "%s: err cpkt_notify_speed\n";
                goto code_r0x0800bfe0;
            }
            *(uVar8 + 0xc) = 2;
            _raw_spin_lock(arg2 + 0x6b8);
            piVar12 = *(arg2 + 0x6a8);
            iVar2 = uVar7 + 0x10;
            iVar3 = arg2 + 0x6a0;
            uVar9 = __list_add_valid(iVar2,piVar12,iVar3);
            if ((uVar9 & 1) != 0) {
                *(arg2 + 0x6a8) = iVar2;
                *(uVar7 + 0x10) = iVar3;
                *(uVar7 + 0x18) = piVar12;
                *piVar12 = iVar2;
            }
            piVar12 = *(arg2 + 0x6a8);
            iVar2 = uVar8 + 0x10;
            uVar7 = __list_add_valid(iVar2,piVar12,iVar3);
            if ((uVar7 & 1) != 0) {
                *(arg2 + 0x6a8) = iVar2;
                *(uVar8 + 0x10) = iVar3;
                *(uVar8 + 0x18) = piVar12;
                *piVar12 = iVar2;
            }
            _raw_spin_unlock(arg2 + 0x6b8);
            sym.gsi_ctrl_send_notification(arg2);
            iVar11 = *(arg2 + 0xd8);
        }
        if (iVar11 == 0) goto code_r0x0800bedc;
        sym.post_event(arg2 + 0x128,4);
    }
    queue_delayed_work_on(0x20,*(arg2 + 0x2c0),arg2 + 0x238,0);
code_r0x0800bedc:
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    return 1;
}


// ===== sym.gsi_ctrl_notify_resp_complete @ 0x0800c088 (size 220) =====

void sym.gsi_ctrl_notify_resp_complete(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x38);
    iVar3 = *arg1;
    iVar1 = *(arg1 + 0x54);
    uVar2 = _raw_spin_lock_irqsave(arg1_00 + 0x6b8);
    *(arg1_00 + 0x668) = 0;
    _raw_spin_unlock_irqrestore(arg1_00 + 0x6b8,uVar2);
    if (iVar1 != -0x6c) {
        if (iVar1 == 0) {
            return;
        }
        if (iVar1 != -0x68) {
            if (arg1_00 == 0) {
                return;
            }
            ipc_log_string(*(arg1_00 + 0x6e0),"Unknown event %02x --> %d",*(iVar3 + 1),*(arg1 + 0x54));
            _printk(0x8001435,*(iVar3 + 1),*(arg1 + 0x54));
            return;
        }
    }
    if (arg1_00 != 0) {
        ipc_log_string(*(arg1_00 + 0x6e0),"ESHUTDOWN/ECONNRESET, connection gone");
    }
    sym.gsi_ctrl_clear_cpkt_queues(arg1_00);
    sym.gsi_ctrl_send_cpkt_tomodem(arg1_00,0,0);
    return;
}


// ===== sym.gsi_ctrl_send_cpkt_tomodem @ 0x0800c164 (size 444) =====

void sym.gsi_ctrl_send_cpkt_tomodem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x6b8;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x670) == '\0') {
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: ctrl device %s is not open","gsi_ctrl_send_cpkt_tomodem",arg1 + 0x5c0
                          );
        }
        *(arg1 + 0x6d4) = *(arg1 + 0x6d4) + 1;
    }
    else {
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xb20,0x20);
        if (piVar4 != NULL) {
            iVar5 = __kmalloc(arg3 & 0xffffffff,0xa20);
            *piVar4 = iVar5;
            if (iVar5 == 0) {
                kfree(piVar4);
            }
            else {
                *(piVar4 + 1) = arg3;
                if (piVar4 < 0xfffffffffffff001) {
                    memcpy(iVar5,arg2,arg3);
                    piVar7 = *(arg1 + 0x698);
                    piVar2 = piVar4 + 2;
                    *(piVar4 + 1) = arg3;
                    uVar6 = __list_add_valid(piVar2,piVar7,arg1 + 0x690);
                    if ((uVar6 & 1) != 0) {
                        *(arg1 + 0x698) = piVar2;
                        piVar4[2] = arg1 + 0x690;
                        piVar4[3] = piVar7;
                        *piVar7 = piVar2;
                    }
                    *(arg1 + 0x6c4) = *(arg1 + 0x6c4) + 1;
                    _raw_spin_unlock_irqrestore(iVar1,uVar3);
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x6e0),"%s: Wake up read queue","gsi_ctrl_send_cpkt_tomodem");
                    }
                    __wake_up(arg1 + 0x678,3,1,0);
                    return;
                }
            }
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x6e0),"%s: Reset func pkt allocation failed","gsi_ctrl_send_cpkt_tomodem");
            _printk(0x8002715,"gsi_ctrl_send_cpkt_tomodem");
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    return;
}


// ===== sym.post_event @ 0x0800c320 (size 176) =====

void sym.post_event(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x228);
    uVar1 = *(arg1 + 0x225) + 1 & 0x7f;
    *(arg1 + 0x225) = uVar1;
    if (uVar1 == *(arg1 + 0x224)) {
        if (arg1 != 0x128) {
            ipc_log_string(*(arg1 + 0x5b8),"%s: event queue overflow error","post_event");
            _printk(0x800273c,"post_event");
        }
    }
    else {
        *(arg1 + uVar1 + 0x1a4) = arg2;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x228,uVar2);
    return;
}


// ===== sym.gsi_rndis_open @ 0x0800c3d0 (size 160) =====

void sym.gsi_rndis_open(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = **(*(arg1 + 0x30) + 0x30);
    if (*(iVar2 + 0x5c) < 5) {
        if (2 < *(iVar2 + 0x5c)) {
            uVar1 = *(iVar2 + 0x58);
            goto code_r0x0800c428;
        }
    }
    else {
        uVar1 = *(iVar2 + 0x58);
        if (4 < uVar1) {
            iVar2 = 0x820000;
            goto code_r0x0800c440;
        }
code_r0x0800c428:
        if (uVar1 == 3) {
            iVar2 = 0x410000;
            goto code_r0x0800c440;
        }
    }
    iVar2 = 0x17c00;
code_r0x0800c440:
    sym.rndis_set_param_medium(*(arg1 + 0x100),0,iVar2);
    iVar2 = *(arg1 + 0x100);
    *(iVar2 + 0x14) = 0;
    sym.rndis_indicate_status_msg.llvm.6882802748613956580(iVar2,0x4001000b);
    return;
}


// ===== sym.gsi_rndis_get_netdev @ 0x0800c470 (size 160) =====

int64_t sym.gsi_rndis_get_netdev(void)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = dev_get_by_name(init_net,"rndis0");
    if (iVar6 == 0) {
        iVar6 = -0x16;
    }
    else {
        iVar5 = sp_el0;
        piVar1 = iVar5 + 0x10;
        *(iVar5 + 0x10) = *piVar1 + 1;
        iVar7 = tpidr_el1;
        piVar2 = iVar7 + *(iVar6 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar7 = *piVar1;
        *(iVar5 + 0x10) = iVar7 + -1;
        if ((iVar7 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return iVar6;
}


// ===== sym.gsi_ctrl_reset_cmd_complete @ 0x0800c530 (size 48) =====

void sym.gsi_ctrl_reset_cmd_complete(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gsi_ctrl_send_cpkt_tomodem(*(arg1 + 0x38),*arg1,0);
    return;
}


// ===== sym.gsi_rndis_command_complete @ 0x0800c560 (size 396) =====

uint64_t sym.gsi_rndis_command_complete(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int *arg2_00;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = *arg2;
    if (arg2_00 == NULL) {
        return arg1;
    }
    iVar3 = *(arg2 + 0x38);
    arg1_00 = *(iVar3 + 0x100);
    if (arg1_00 == 0) {
        return arg1;
    }
    iVar1 = *arg2_00;
    if (iVar1 == 3) {
        if (iVar3 != 0) {
            arg1 = ipc_log_string(*(iVar3 + 0x6e0),"RNDIS_MSG_HALT, state:%d\n",*(arg1_00 + 8));
            arg1_00 = *(iVar3 + 0x100);
        }
        if (*(arg1_00 + 8) == 2) {
            arg1 = sym.gsi_rndis_flow_ctrl_enable(1,arg1_00);
            arg1_00 = *(iVar3 + 0x100);
        }
        *(arg1_00 + 8) = 0;
        return arg1;
    }
    iVar4 = *(*(iVar3 + 0x30) + 0x30);
    uVar2 = sym.rndis_msg_parser(arg1_00,arg2_00);
    if ((uVar2 < 0) && (iVar3 != 0)) {
        ipc_log_string(*(iVar3 + 0x6e0),"RNDIS command error %d, %d/%d",uVar2 & 0xffffffff,*(arg2 + 0x58),
                       *(arg2 + 8));
        uVar2 = _printk(0x800219d,uVar2 & 0xffffffff,*(arg2 + 0x58),*(arg2 + 8));
    }
    if (iVar1 == 5) {
        if (*(*arg2 + 0xc) == 0x1010e) {
            uVar2 = sym.gsi_rndis_flow_ctrl_enable(**(*(iVar3 + 0x100) + 0x20) == 0,*(iVar3 + 0x100));
        }
    }
    else if (iVar1 == 2) {
        arg2 = *arg2;
        if (iVar3 == 0) {
            *0x220 = *(arg2 + 0x14);
        }
        else {
            ipc_log_string(*(iVar3 + 0x6e0),"RNDIS host major:%d minor:%d version\n",*(arg2 + 0xc),*(arg2 + 0x10));
            *(iVar3 + 0x220) = *(arg2 + 0x14);
            uVar2 = ipc_log_string(*(iVar3 + 0x6e0),"RNDIS host DL MaxTransferSize:%d\n",*(arg2 + 0x14));
        }
    }
    *(iVar4 + 0x94) = *(iVar4 + 0x94) & 0xfe;
    return uVar2;
}


// ===== sym.gsi_ctrl_cmd_complete @ 0x0800c6ec (size 84) =====

void sym.gsi_ctrl_cmd_complete(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x38) + 0x30);
    if (iVar1 != 0) {
        iVar1 = *(iVar1 + 0x30);
        sym.gsi_ctrl_send_cpkt_tomodem(*(arg1 + 0x38),*arg1,*(arg1 + 0x58));
        *(iVar1 + 0x94) = *(iVar1 + 0x94) & 0xfe;
    }
    return;
}


// ===== sym.gsi_ctrl_send_response_complete @ 0x0800c740 (size 40) =====

void sym.gsi_ctrl_send_response_complete(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gsi_ctrl_send_notification(*(arg1 + 0x38));
    return;
}


// ===== sym.gsi_ctrl_set_ntb_cmd_complete @ 0x0800c768 (size 324) =====

void sym.gsi_ctrl_set_ntb_cmd_complete(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t iVar1;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 0x38);
    if (iVar1 != 0) {
        ipc_log_string(*(iVar1 + 0x6e0),"dev:%pK",iVar1);
    }
    *(arg2 + 0x38) = 0;
    if ((*(arg2 + 0x54) == 0) && (iVar2 = *(arg2 + 0x58), iVar2 == *(arg2 + 8))) {
        if (iVar2 == 8) {
            iVar2 = **arg2;
            if (0xffffc7fe < iVar2 - 0x4001U) {
                *(iVar1 + 0x230) = (*arg2)[1];
code_r0x0800c838:
                if (iVar1 != 0) {
                    ipc_log_string(*(iVar1 + 0x6e0),"Set NTB INPUT SIZE %d",iVar2);
                }
                *(iVar1 + 0x22c) = iVar2;
                return;
            }
        }
        else if (iVar2 == 4) {
            iVar2 = **arg2;
            if (0xffffc7fe < iVar2 - 0x4001U) goto code_r0x0800c838;
        }
        else {
            iVar2 = 0;
        }
        if (iVar1 == 0) goto code_r0x0800c7f4;
    }
    else {
        if (iVar1 == 0) goto code_r0x0800c7f4;
        ipc_log_string(*(iVar1 + 0x6e0),"Bad control-OUT transfer");
        _printk(0x8002503);
        iVar2 = 0;
    }
    ipc_log_string(*(iVar1 + 0x6e0),"Illegal NTB INPUT SIZE %d from host",iVar2);
    _printk(0x8002b39,iVar2);
code_r0x0800c7f4:
    usb_ep_set_halt(arg1);
    return;
}


// ===== sym.gsi_rndis_flow_ctrl_enable @ 0x0800c8ac (size 420) =====

void sym.gsi_rndis_flow_ctrl_enable(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 0x48);
    if (iVar3 == 0) {
        _printk(0x800260f,"gsi_rndis_flow_ctrl_enable",0);
    }
    else {
        if ((arg1 & 1U) == 0) {
            ipc_log_string(*(iVar3 + 0x6e0),"%s: posting HOST_READY\n","gsi_rndis_flow_ctrl_enable");
            uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x350);
            uVar1 = *(iVar3 + 0x34d) + 1 & 0x7f;
            *(iVar3 + 0x34d) = uVar1;
            if (uVar1 == *(iVar3 + 0x34c)) {
                if (iVar3 != 0) {
                    ipc_log_string(*(iVar3 + 0x6e0),"%s: event queue overflow error","post_event");
                    _printk(0x800273c,"post_event");
                }
            }
            else {
                *(iVar3 + uVar1 + 0x2cc) = 6;
            }
            _raw_spin_unlock_irqrestore(iVar3 + 0x350,uVar2);
            *(iVar3 + 0x72c) = 1;
        }
        else {
            ipc_log_string(*(iVar3 + 0x6e0),"%s: posting HOST_NRDY\n","gsi_rndis_flow_ctrl_enable");
            uVar2 = _raw_spin_lock_irqsave(iVar3 + 0x350);
            uVar1 = *(iVar3 + 0x34d) + 1 & 0x7f;
            *(iVar3 + 0x34d) = uVar1;
            if (uVar1 == *(iVar3 + 0x34c)) {
                if (iVar3 != 0) {
                    ipc_log_string(*(iVar3 + 0x6e0),"%s: event queue overflow error","post_event");
                    _printk(0x800273c,"post_event");
                }
            }
            else {
                *(iVar3 + uVar1 + 0x2cc) = 5;
            }
            _raw_spin_unlock_irqrestore(iVar3 + 0x350,uVar2);
        }
        queue_delayed_work_on(0x20,*(iVar3 + 0x2c0),iVar3 + 0x238,0);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800ca50 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800ca94

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
    //switch table (4 cases) at 0x8003792
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800caa8);
    (*pcVar1)();
}


// ===== sym.rndis_signal_connect @ 0x0800caa8 (size 48) =====

void sym.rndis_signal_connect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x14) = 0;
    sym.rndis_indicate_status_msg.llvm.6882802748613956580(arg1,0x4001000b);
    return;
}


// ===== sym.rndis_indicate_status_msg.llvm.6882802748613956580 @ 0x0800cad8 (size 316) =====

ulong sym.rndis_indicate_status_msg.llvm.6882802748613956580(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) == 0) {
        uVar4 = 0xfffffdf4;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xa20,0x34);
        if (piVar2 == NULL) {
            uVar4 = 0xfffffff4;
        }
        else {
            piVar2[2] = piVar2 + 4;
            piVar2[3] = 0x14;
            _raw_spin_lock(arg1 + 0x60);
            puVar6 = *(arg1 + 0x58);
            uVar3 = __list_add_valid(piVar2,puVar6,arg1 + 0x50);
            if ((uVar3 & 1) != 0) {
                *(arg1 + 0x58) = piVar2;
                *piVar2 = arg1 + 0x50;
                piVar2[1] = puVar6;
                *puVar6 = piVar2;
            }
            _raw_spin_unlock(arg1 + 0x60);
            puVar6 = piVar2[2];
            *(puVar6 + 1) = arg2;
            *puVar6 = 0x1400000007;
            *(puVar6 + 0xc) = 0;
            pcVar5 = *(arg1 + 0x40);
            if (1 < (pcVar5 + -0x8004898 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar5,0x8000fc0);
            }
            (*pcVar5)(*(arg1 + 0x48));
            uVar4 = 0;
        }
    }
    return uVar4;
}


// ===== sym.rndis_signal_disconnect @ 0x0800cc14 (size 52) =====

void sym.rndis_signal_disconnect(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x14) = 1;
    sym.rndis_indicate_status_msg.llvm.6882802748613956580(arg1,0x4001000c);
    return;
}


// ===== sym.rndis_uninit @ 0x0800cc48 (size 256) =====

void sym.rndis_uninit(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar1 = arg1 + 0x60;
        piVar2 = arg1 + 0x50;
        *(arg1 + 8) = 0;
        while( true ) {
            _raw_spin_lock(iVar1);
            piVar7 = piVar2;
            do {
                piVar7 = *piVar7;
                if (piVar7 == piVar2) {
                    _raw_spin_unlock(iVar1);
                    return;
                }
            } while (*(piVar7 + 0x1c) != 0);
            *(piVar7 + 0x1c) = 1;
            _raw_spin_unlock(iVar1);
            iVar8 = piVar7[2];
            if (iVar8 == 0) break;
            _raw_spin_lock(iVar1);
            piVar7 = *piVar2;
            while (piVar5 = piVar7, piVar5 != piVar2) {
                piVar7 = *piVar5;
                if (piVar5[2] == iVar8) {
                    uVar6 = __list_del_entry_valid(piVar5);
                    if ((uVar6 & 1) != 0) {
                        iVar3 = *piVar5;
                        piVar4 = piVar5[1];
                        *(iVar3 + 8) = piVar4;
                        *piVar4 = iVar3;
                    }
                    *piVar5 = -0x2152ffffffffff00;
                    piVar5[1] = -0x2152fffffffffede;
                    kfree(piVar5);
                }
            }
            _raw_spin_unlock(iVar1);
        }
    }
    return;
}


// ===== sym.rndis_get_next_response @ 0x0800cd48 (size 144) =====

ulong sym.rndis_get_next_response(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
code_r0x0800cdbc:
        uVar2 = 0;
    }
    else {
        iVar1 = arg1 + 0x60;
        _raw_spin_lock(iVar1);
        piVar3 = arg1 + 0x50;
        do {
            piVar3 = *piVar3;
            if (piVar3 == arg1 + 0x50) {
                _raw_spin_unlock(iVar1);
                goto code_r0x0800cdbc;
            }
        } while (*(piVar3 + 0x1c) != 0);
        *(piVar3 + 0x1c) = 1;
        *arg2 = *(piVar3 + 3);
        _raw_spin_unlock(iVar1);
        uVar2 = piVar3[2];
    }
    return uVar2;
}


// ===== sym.rndis_free_response @ 0x0800cdd8 (size 180) =====

void sym.rndis_free_response(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x60);
    piVar5 = *(arg1 + 0x50);
    while (piVar3 = piVar5, piVar3 != arg1 + 0x50) {
        piVar5 = *piVar3;
        if (piVar3[2] == arg2) {
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
        }
    }
    _raw_spin_unlock(arg1 + 0x60);
    return;
}


// ===== sym.rndis_set_host_mac @ 0x0800ce8c (size 16) =====

void sym.rndis_set_host_mac(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x18) = arg2;
    return;
}


// ===== sym.rndis_msg_parser @ 0x0800ce9c (size 2480) =====

void sym.rndis_msg_parser(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    uint uVar3;
    int64_t *piVar4;
    char cVar5;
    bool bVar6;
    int64_t *piVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    ulong uVar11;
    int iVar12;
    int *piVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    ulong uVar16;
    uint32_t uVar17;
    uint *puVar18;
    int iVar19;
    uint *puVar20;
    int iVar21;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t *piVar22;
    ulong *puVar23;
    ulong *puVar24;
    int64_t iVar25;
    int64_t iVar26;
    ulong unaff_x30;
    ulong uStack_128;
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
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar26 = sp_el0;
    iStack_68 = *(iVar26 + 0x5e0);
    if (arg2 == 0) goto code_r0x0800d4b4;
    if (arg1 == 0) goto code_r0x0800d544;
    uVar3 = *(arg2 + 4);
    if (6 < *arg2 - 2U) {
code_r0x0800d530:
        _printk(0x80012df,"rndis_msg_parser");
code_r0x0800d544:
        uVar16 = 0xfffffdf4;
        goto code_r0x0800d7c4;
    }
    //switch table (6 cases) at 0x8003b14
    unaff_x19 = arg1;
    switch(*((*arg2 - 2U) * 4 + 0x8003b14) + 0x800cef8) {
    case 0x800cf0c:
        *(arg1 + 8) = 1;
        if (*(arg1 + 0x28) != 0) {
            piVar14 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xa20,0x54,uVar3);
            if (piVar14 != NULL) {
                piVar14[2] = piVar14 + 4;
                piVar14[3] = 0x34;
                _raw_spin_lock(arg1 + 0x60);
                puVar23 = *(arg1 + 0x58);
                uVar15 = __list_add_valid(piVar14,puVar23,arg1 + 0x50);
                if ((uVar15 & 1) != 0) {
                    *(arg1 + 0x58) = piVar14;
                    *piVar14 = arg1 + 0x50;
                    piVar14[1] = puVar23;
                    *puVar23 = piVar14;
                }
                _raw_spin_unlock(arg1 + 0x60);
                puVar23 = piVar14[2];
                *puVar23 = 0x3480000002;
                uVar3 = *(arg2 + 8);
                *(puVar23 + 0xc) = 0x100000000;
                *(puVar23 + 0x14) = 0x100000000;
                *(puVar23 + 0x1c) = 0x100000000;
                *(puVar23 + 1) = uVar3;
                iVar12 = *(*(arg1 + 0x28) + 0xd8);
                puVar23[5] = 0;
                *(puVar23 + 6) = 0;
                *(puVar23 + 0x24) = iVar12 + 0x50;
                unaff_x20 = *(arg1 + 0x40);
                if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
                uVar16 = 0x8000fe0;
                goto code_r0x0800d80c;
            }
            break;
        }
        goto code_r0x0800d544;
    case 0x800cff0:
        if (*(arg1 + 0x28) == 0) goto code_r0x0800d544;
        piVar14 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xa20,0xa8,uVar3);
        if (piVar14 == NULL) break;
        piVar14[2] = piVar14 + 4;
        piVar14[3] = 0x88;
        _raw_spin_lock(arg1 + 0x60);
        puVar23 = *(arg1 + 0x58);
        uVar15 = __list_add_valid(piVar14,puVar23,arg1 + 0x50);
        if ((uVar15 & 1) != 0) {
            *(arg1 + 0x58) = piVar14;
            *piVar14 = arg1 + 0x50;
            piVar14[1] = puVar23;
            *puVar23 = piVar14;
        }
        _raw_spin_unlock(arg1 + 0x60);
        puVar20 = piVar14[2];
        *puVar20 = 0x80000004;
        puVar20[2] = *(arg2 + 8);
        iVar26 = piVar14[2];
        uStack_78 = 0;
        uStack_70 = 0;
        iVar12 = *(arg2 + 0xc);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
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
        uStack_128 = 0;
        uStack_120 = 0;
        if (iVar26 == 0) {
code_r0x0800d780:
            puVar18 = puVar20 + 5;
            puVar20[1] = 0x18;
            *(puVar20 + 3) = 0xc00000bb;
            goto code_r0x0800d798;
        }
        puVar1 = iVar26 + 0x18;
        *(iVar26 + 0x14) = 0x10;
        piVar13 = dev_get_stats(*(arg1 + 0x28),&stack0xfffffffffffffed8);
        uVar10 = *0x8003bd8;
        uVar9 = *0x8003bd0;
        uVar16 = *0x8003bb8;
        if (0x20100 < iVar12) {
            if (iVar12 < 0x1010101) {
                if (4 < iVar12 - 0x20101U) goto code_r0x0800d758;
    //switch table (5 cases) at 0x8003b88
                switch(*((iVar12 - 0x20101U) * 4 + 0x8003b88) + 0x800d564) {
                case 0x800d578:
                    if (piVar13 != NULL) {
                        iVar12 = piVar13[10];
                        iVar19 = piVar13[0xe];
                        iVar21 = piVar13[2];
code_r0x0800d5f0:
                        uVar17 = iVar21 - (iVar12 + iVar19);
                        goto code_r0x0800d734;
                    }
                    break;
                case 0x800d5e0:
                    if (piVar13 != NULL) {
                        iVar12 = piVar13[8];
                        iVar19 = piVar13[0xc];
                        iVar21 = *piVar13;
                        goto code_r0x0800d5f0;
                    }
                    break;
                case 0x800d600:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 10);
code_r0x0800d634:
                        iVar12 = 4;
                        *puVar1 = uVar17;
                        goto code_r0x0800d73c;
                    }
                    break;
                case 0x800d610:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 8);
                        goto code_r0x0800d634;
                    }
                    break;
                case 0x800d620:
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 0xc);
                        goto code_r0x0800d634;
                    }
                }
code_r0x0800d770:
                *(iVar26 + 0x10) = 0;
                *(piVar14 + 3) = 0x18;
                *(iVar26 + 4) = 0x18;
                goto code_r0x0800d780;
            }
            if (0x1020100 < iVar12) {
                if (iVar12 == 0x1020101) {
                    if (piVar13 != NULL) {
                        uVar17 = *(piVar13 + 0x1a);
                        goto code_r0x0800d634;
                    }
                    goto code_r0x0800d770;
                }
                if (iVar12 != 0x1020102) {
                    iVar19 = 0x1020103;
                    goto code_r0x0800d648;
                }
                goto code_r0x0800d654;
            }
            if (4 < iVar12 + 0xfefefeffU) goto code_r0x0800d758;
    //switch table (4 cases) at 0x8003b9c
            switch(*((iVar12 + 0xfefefeffU) * 4 + 0x8003b9c) + 0x800d4f8) {
            case 0x800d50c:
                if (*(arg1 + 0x28) == 0) goto code_r0x0800d770;
                iVar12 = 6;
                uVar17 = **(arg1 + 0x18);
                *(iVar26 + 0x1c) = (*(arg1 + 0x18))[1];
                break;
            case 0x800d5bc:
                goto code_r0x0800d5bc;
            case 0x800d5d4:
                uVar17 = 0xe0000000;
                goto code_r0x0800d734;
            case 0x800d654:
                goto code_r0x0800d654;
            }
            goto code_r0x0800d738;
        }
        if (0x15 < iVar12 - 0x10101U) {
            iVar19 = 0x10202;
code_r0x0800d648:
            if (iVar12 != iVar19) goto code_r0x0800d758;
code_r0x0800d654:
            iVar12 = 4;
            *puVar1 = 0;
            goto code_r0x0800d73c;
        }
    //switch table (22 cases) at 0x8003b30
        switch(*((iVar12 - 0x10101U) * 4 + 0x8003b30) + 0x800d0f4) {
        case 0x800d108:
            if (*(arg1 + 0x28) == 0) goto code_r0x0800d770;
            uVar17 = *(*(arg1 + 0x28) + 0xd8);
            break;
        case 0x800d5bc:
code_r0x0800d5bc:
            uVar17 = 1;
            break;
        case 0x800d5c8:
            uVar17 = *(arg1 + 0xc);
            break;
        case 0x800d654:
            goto code_r0x0800d654;
        case 0x800d664:
            iVar12 = 0x70;
            *(iVar26 + 0x18) = _obj.oid_supported_list;
            *(iVar26 + 0x20) = uVar16;
            uVar8 = *0x8003bc8;
            uVar16 = *0x8003bc0;
            *(iVar26 + 0x38) = uVar9;
            *(iVar26 + 0x40) = uVar10;
            uVar11 = *0x8003bf8;
            uVar10 = *0x8003bf0;
            *(iVar26 + 0x28) = uVar16;
            *(iVar26 + 0x30) = uVar8;
            uVar9 = *0x8003be8;
            uVar16 = *0x8003be0;
            *(iVar26 + 0x58) = uVar10;
            *(iVar26 + 0x60) = uVar11;
            uVar8 = *0x8003c18;
            uVar10 = *0x8003c10;
            *(iVar26 + 0x48) = uVar16;
            *(iVar26 + 0x50) = uVar9;
            uVar9 = *0x8003c08;
            uVar16 = *0x8003c00;
            *(iVar26 + 0x78) = uVar10;
            *(iVar26 + 0x80) = uVar8;
            *(iVar26 + 0x68) = uVar16;
            *(iVar26 + 0x70) = uVar9;
            goto code_r0x0800d73c;
        case 0x800d6b0:
            if (*(arg1 + 0x14) == 1) {
                uVar17 = 0;
            }
            else {
                uVar17 = *(arg1 + 0x10);
            }
            break;
        case 0x800d6c8:
            uVar17 = *(arg1 + 0x30);
            break;
        case 0x800d6d4:
            iVar25 = *(arg1 + 0x38);
            if (iVar25 == 0) goto code_r0x0800d654;
            iVar12 = strlen(iVar25);
            memcpy(puVar1,iVar25,iVar12);
            goto code_r0x0800d73c;
        case 0x800d700:
            uVar17 = **(arg1 + 0x20);
            break;
        case 0x800d710:
            uVar17 = 0x616;
            break;
        case 0x800d71c:
            uVar17 = 0x12;
            break;
        case 0x800d728:
            uVar17 = *(arg1 + 0x14);
            break;
        case 0x800d758:
code_r0x0800d758:
            _printk(0x8001a9b,"gen_ndis_query_resp",iVar12);
            goto code_r0x0800d770;
        }
code_r0x0800d734:
        iVar12 = 4;
code_r0x0800d738:
        *puVar1 = uVar17;
code_r0x0800d73c:
        puVar18 = puVar20 + 3;
        *(iVar26 + 0x10) = iVar12;
        *(piVar14 + 3) = iVar12 + 0x18;
        *(iVar26 + 4) = iVar12 + 0x18;
code_r0x0800d798:
        *puVar18 = 0;
        unaff_x20 = *(arg1 + 0x40);
        if (1 < (unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d)) goto code_r0x0800d804;
        goto code_r0x0800d7b8;
    case 0x800d11c:
        *(arg1 + 8) = 0;
        uVar16 = 0;
        if (*(arg1 + 0x28) != 0) {
            netif_carrier_off();
            puVar2 = *(*(arg1 + 0x28) + 0x3c0) + 0xd0;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                    *puVar2 = *puVar2 | 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto code_r0x0800d7c0;
            } while( true );
        }
        goto code_r0x0800d7c4;
    case 0x800d154:
        unaff_x20 = arg1 + 0x60;
        piVar14 = arg1 + 0x50;
        while( true ) {
            _raw_spin_lock(unaff_x20);
            piVar22 = piVar14;
            do {
                piVar22 = *piVar22;
                if (piVar22 == piVar14) {
                    _raw_spin_unlock(unaff_x20);
                    goto code_r0x0800d3f0;
                }
            } while (*(piVar22 + 0x1c) != 0);
            *(piVar22 + 0x1c) = 1;
            _raw_spin_unlock(unaff_x20);
            iVar26 = piVar22[2];
            if (iVar26 == 0) break;
            _raw_spin_lock(unaff_x20);
            piVar22 = *piVar14;
            while (piVar7 = piVar22, piVar7 != piVar14) {
                piVar22 = *piVar7;
                if (piVar7[2] == iVar26) {
                    uVar15 = __list_del_entry_valid(piVar7);
                    if ((uVar15 & 1) != 0) {
                        iVar25 = *piVar7;
                        piVar4 = piVar7[1];
                        *(iVar25 + 8) = piVar4;
                        *piVar4 = iVar25;
                    }
                    *piVar7 = -0x2152ffffffffff00;
                    piVar7[1] = -0x2152fffffffffede;
                    kfree(piVar7);
                }
            }
            _raw_spin_unlock(unaff_x20);
        }
code_r0x0800d3f0:
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        puVar23 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30);
        if (puVar23 != NULL) {
            puVar23[2] = puVar23 + 4;
            puVar23[3] = 0x10;
            _raw_spin_lock(unaff_x20);
            puVar24 = *(arg1 + 0x58);
            uVar15 = __list_add_valid(puVar23,puVar24,piVar14);
            if ((uVar15 & 1) != 0) {
                *(arg1 + 0x58) = puVar23;
                *puVar23 = piVar14;
                puVar23[1] = puVar24;
                *puVar24 = puVar23;
            }
            _raw_spin_unlock(unaff_x20);
            puVar20 = puVar23[2];
            *(puVar20 + 1) = 0x10;
            *puVar20 = 0x80000006;
            puVar20[3] = 1;
            unaff_x20 = *(arg1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001040;
            goto code_r0x0800d80c;
        }
        break;
    case 0x800d208:
        unaff_x20 = *(arg2 + 0x10);
        uVar16 = 0xffffffea;
        if (0x616 < *(arg2 + 0x10)) goto code_r0x0800d7c4;
        uVar17 = *(arg2 + 0x14);
        if ((0x616 < uVar17) || (uVar17 - 0x60e < 0xfffff9ea)) goto code_r0x0800d7c4;
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30,uVar3);
        if (piVar14 != NULL) {
            piVar14[2] = piVar14 + 4;
            piVar14[3] = 0x10;
            _raw_spin_lock(arg1 + 0x60);
            puVar23 = *(arg1 + 0x58);
            uVar15 = __list_add_valid(piVar14,puVar23,arg1 + 0x50);
            if ((uVar15 & 1) != 0) {
                *(arg1 + 0x58) = piVar14;
                *piVar14 = arg1 + 0x50;
                piVar14[1] = puVar23;
                *puVar23 = piVar14;
            }
            _raw_spin_unlock(arg1 + 0x60);
            puVar20 = piVar14[2];
            *puVar20 = 0x80000005;
            puVar20[1] = 0x10;
            puVar20[2] = *(arg2 + 8);
            iVar12 = sym.gen_ndis_set_resp(arg1,*(arg2 + 0xc),arg2 + 8 + uVar17);
            uVar3 = 0;
            if (iVar12 != 0) {
                uVar3 = 0xc00000bb;
            }
            puVar20[3] = uVar3;
            unaff_x20 = *(arg1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001020;
            goto code_r0x0800d80c;
        }
        break;
    case 0x800d324:
        iVar26 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar26 = 0x30;
        }
        piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar26),0xa20,0x30,uVar3);
        if (piVar14 != NULL) {
            piVar14[2] = piVar14 + 4;
            piVar14[3] = 0x10;
            _raw_spin_lock(arg1 + 0x60);
            puVar23 = *(arg1 + 0x58);
            uVar15 = __list_add_valid(piVar14,puVar23,arg1 + 0x50);
            if ((uVar15 & 1) != 0) {
                *(arg1 + 0x58) = piVar14;
                *piVar14 = arg1 + 0x50;
                piVar14[1] = puVar23;
                *puVar23 = piVar14;
            }
            _raw_spin_unlock(arg1 + 0x60);
            puVar20 = piVar14[2];
            *puVar20 = 0x80000008;
            puVar20[1] = 0x10;
            puVar20[2] = *(arg2 + 8);
            puVar20[3] = 0;
            unaff_x20 = *(arg1 + 0x40);
            if ((unaff_x20 + -0x8004898 >> 3 | unaff_x20 << 0x3d) < 2) goto code_r0x0800d7b8;
            uVar16 = 0x8001060;
            goto code_r0x0800d80c;
        }
        break;
    case 0x800d530:
        goto code_r0x0800d530;
    }
code_r0x0800d4b4:
    uVar16 = 0xfffffff4;
    arg1 = unaff_x19;
code_r0x0800d7c4:
    while (iVar26 = sp_el0, *(iVar26 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar16);
code_r0x0800d804:
        uVar16 = 0x8001000;
code_r0x0800d80c:
        __cfi_slowpath_diag(0x4c550309df1cf4c1,unaff_x20,uVar16);
code_r0x0800d7b8:
        (*unaff_x20)(*(arg1 + 0x48));
code_r0x0800d7c0:
        uVar16 = 0;
    }
    return;
}


// ===== sym.rndis_register @ 0x0800d84c (size 196) =====

int * sym.rndis_register(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        piVar2 = 0xffffffffffffffea;
    }
    else {
        iVar1 = ida_alloc_range(obj.rndis_ida,0,0xffffffff,0xcc0);
        if (iVar1 < 0) {
            piVar2 = 0xffffffffffffffed;
        }
        else {
            piVar2 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x68);
            if (piVar2 == NULL) {
                ida_free(obj.rndis_ida,iVar1);
                piVar2 = 0xfffffffffffffff4;
            }
            else {
                *piVar2 = iVar1;
                piVar2[2] = 0;
                *(piVar2 + 1) = 1;
                piVar2[5] = 1;
                *(piVar2 + 0x10) = arg1;
                *(piVar2 + 0x12) = arg2;
                *(piVar2 + 0x14) = piVar2 + 0x14;
                *(piVar2 + 0x16) = piVar2 + 0x14;
                piVar2[0x18] = 0;
            }
        }
    }
    return piVar2;
}


// ===== sym.rndis_deregister @ 0x0800d910 (size 72) =====

void sym.rndis_deregister(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        uVar1 = *arg1;
        kfree();
        ida_free(obj.rndis_ida,uVar1);
    }
    return;
}


// ===== sym.rndis_set_param_dev @ 0x0800d958 (size 52) =====

ulong sym.rndis_set_param_dev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (arg2 == 0) {
        return 0xffffffea;
    }
    if (arg1 != 0) {
        *(arg1 + 0x20) = arg3;
        *(arg1 + 0x28) = arg2;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.rndis_set_param_vendor @ 0x0800d98c (size 44) =====

ulong sym.rndis_set_param_vendor(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    
    uVar1 = 0xffffffff;
    if ((arg1 != 0) && (arg3 != 0)) {
        uVar1 = 0;
        *(arg1 + 0x30) = arg2;
        *(arg1 + 0x38) = arg3;
    }
    return uVar1;
}


// ===== sym.rndis_set_param_medium @ 0x0800d9b8 (size 40) =====

ulong sym.rndis_set_param_medium(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (arg1 != 0) {
        *(arg1 + 0xc) = arg2;
        *(arg1 + 0x10) = arg3;
        return 0;
    }
    return 0xffffffff;
}


// ===== sym.rndis_add_hdr @ 0x0800d9e0 (size 112) =====

void sym.rndis_add_hdr(int64_t arg1)

{
    uint *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        puVar1 = skb_push(arg1,0x2c);
        *(puVar1 + 1) = 0;
        *(puVar1 + 3) = 0;
        *(puVar1 + 5) = 0;
        *(puVar1 + 7) = 0;
        *(puVar1 + 9) = 0;
        *puVar1 = 1;
        puVar1[1] = *(arg1 + 0x70);
        puVar1[2] = 0x24;
        puVar1[3] = *(arg1 + 0x70) + -0x2c;
    }
    return;
}


// ===== sym.rndis_rm_hdr @ 0x0800da50 (size 160) =====

ulong sym.rndis_rm_hdr(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0xd8);
    if (*piVar3 == 1) {
        iVar1 = skb_pull(arg1,piVar3[2] + 8);
        if (iVar1 == 0) {
            __dev_kfree_skb_any(arg1,1);
            uVar2 = 0xffffffb5;
        }
        else {
            skb_trim(arg1,piVar3[3]);
            skb_queue_tail(arg2,arg1);
            uVar2 = 0;
        }
    }
    else {
        __dev_kfree_skb_any(arg1,1);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.gen_ndis_set_resp @ 0x0800daf0 (size 284) =====

ulong sym.gen_ndis_set_resp(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x4 == 0) || (*(in_x4 + 0x10) == 0)) {
        uVar4 = 0xfffffff4;
    }
    else {
        if (arg2 != 0x1010103) {
            if (arg2 != 0x1010e) {
                _printk(0x80035cc,"gen_ndis_set_resp",arg2);
                return 0xfffffdf4;
            }
            **(arg1 + 0x20) = *arg3;
            if (**(arg1 + 0x20) == 0) {
                *(arg1 + 8) = 1;
                netif_carrier_off(*(arg1 + 0x28));
                puVar1 = *(*(arg1 + 0x28) + 0x3c0) + 0xd0;
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
                *(arg1 + 8) = 2;
                netif_carrier_on(*(arg1 + 0x28));
                if ((*(*(arg1 + 0x28) + 0x38) & 1) != 0) {
                    netif_tx_wake_queue(*(*(arg1 + 0x28) + 0x3c0));
                }
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.cleanup_module @ 0x0800dc14 (size 120) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        destroy_workqueue();
    }
    usb_function_unregister(obj.inst_status);
    if (_segment.ehdr != 0) {
        unregister_chrdev_region(_segment.ehdr << 0x14,3);
        _segment.ehdr = 0;
    }
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    debugfs_remove(CONCAT44(*0x8000004,_segment.ehdr));
    return;
}

